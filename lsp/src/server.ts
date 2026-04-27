import {
  createConnection,
  TextDocuments,
  ProposedFeatures,
  InitializeParams,
  TextDocumentSyncKind,
  Diagnostic,
  DiagnosticSeverity,
  Hover,
  Location,
  Position,
  Range,
  TextDocumentPositionParams,
  DefinitionParams,
  SemanticTokensBuilder,
} from 'vscode-languageserver/node';
import { TextDocument } from 'vscode-languageserver-textdocument';
import { execFile } from 'child_process';
import { pathToFileURL, fileURLToPath } from 'url';
import { writeFile, unlink } from 'fs/promises';
import { tmpdir } from 'os';
import { join } from 'path';
import { platform } from 'os';

// ── Logging ───────────────────────────────────
const LOGGING = false;

function log(msg: string) {
  if (LOGGING) connection.console.log(`[smoll] ${msg}`);
}

// ── Semantic token legend ─────────────────────
const TOKEN_TYPES = ['namespace', 'string', 'keyword', 'function', 'variable'];
const TOKEN_MODIFIERS: string[] = [];
const semanticTokensLegend = { tokenTypes: TOKEN_TYPES, tokenModifiers: TOKEN_MODIFIERS };

// ── Types ─────────────────────────────────────
type TokenType = 'namespace' | 'string' | 'keyword' | 'function' | 'variable';

interface CompilerToken {
  tokenType: TokenType;
  file: string;
  line: number;
  col: number;
  length: number;
  message: string;
  kind: 'error' | 'annotation';
  definition?: { file: string; line: number; col: number; };
}

// ── Connection ────────────────────────────────
const connection = createConnection(ProposedFeatures.all);
const documents  = new TextDocuments(TextDocument);
const cache      = new Map<string, CompilerToken[]>();
const debounces  = new Map<string, ReturnType<typeof setTimeout>>();
const generations = new Map<string, number>();
const DEBOUNCE_MS = 300;

// ── Temp file helpers ─────────────────────────
async function writeTempFile(content: string, realPath: string): Promise<string> {
  const ext = realPath.slice(realPath.lastIndexOf('.'));
  const tmp = join(tmpdir(), `smoll-lsp-${process.pid}-${Date.now()}${ext}`);
  await writeFile(tmp, content, 'utf8');
  return tmp;
}

async function deleteTempFile(tmp: string) {
  try { await unlink(tmp); } catch {}
}

function remapTokenPaths(tokens: CompilerToken[], tmpPath: string, realPath: string): CompilerToken[] {
  return tokens.map(t => ({
    ...t,
    file: t.file === tmpPath ? realPath : t.file,
    definition: t.definition ? {
      ...t.definition,
      file: t.definition.file === tmpPath ? realPath : t.definition.file,
    } : undefined,
  }));
}

// ── Parser ────────────────────────────────────
function parseCompilerOutput(stdout: string): CompilerToken[] {
  const tokens: CompilerToken[] = [];
  const chunks = stdout.split(/^---\r?\n/m).filter(c => c.trim() !== '');
  log(`parser: got ${chunks.length} chunks from ${stdout.length} bytes of output`);

  for (const chunk of chunks) {
    const lines = chunk.split(/\r?\n/);
    if (lines.length < 8) {
      log(`parser: skipping short chunk (${lines.length} lines): "${chunk.slice(0, 80).replace(/\n/g, '\\n')}"`);
      continue;
    }
    const tokenType = lines[0].trim() as TokenType;
    const file      = lines[1].trim();
    const line      = parseInt(lines[2].trim(), 10);
    const col       = parseInt(lines[3].trim(), 10);
    const length    = parseInt(lines[4].trim(), 10);
    const defFile   = lines[5].trim();
    const defLine   = parseInt(lines[6].trim(), 10);
    const defCol    = parseInt(lines[7].trim(), 10);
    const message   = lines.slice(8).join('\n').trim();
    const kind: 'error' | 'annotation' = message.includes('error:') ? 'error' : 'annotation';

    log(`parser: [${tokenType}] ${file}:${line}:${col} len=${length} | def=${defFile}:${defLine}:${defCol} | msg="${message}"`);

    tokens.push({ tokenType, file, line, col, length, message, kind,
      definition: { file: defFile, line: defLine, col: defCol },
    });
  }

  log(`parser: done — ${tokens.length} tokens total`);
  return tokens;
}

// ── Compiler ──────────────────────────────────
function runCompiler(tmpPath: string): Promise<CompilerToken[]> {
  return new Promise((resolve) => {
    const BINARY = platform() === 'win32' ? 'smoll.exe' : './smoll';
    log(`compiler: spawning ${BINARY} ${tmpPath} --lsp`);
    log(`─────────────────────────────────────────`);

    execFile(BINARY, [tmpPath, '--lsp'], { timeout: 10_000 }, (err, stdout, stderr) => {
      log(`compiler: exited | stdout=${stdout.length}b stderr=${stderr.length}b`);
      if (stderr.length > 0) log(`compiler: stderr → ${stderr.slice(0, 200)}`);

      if (stdout.length === 0) {
        log(`compiler: WARNING stdout is empty — no tokens will be produced`);
        log(`─────────────────────────────────────────`);
        resolve([]);
        return;
      }

      log(`compiler: full stdout ↓\n${stdout}`);
      log(`─────────────────────────────────────────`);
      try {
        resolve(parseCompilerOutput(stdout));
      } catch (e) {
        log(`compiler: parse threw → ${String(e)}`);
        resolve([]);
      }
    });
  });
}

// ── Debounce ──────────────────────────────────
function scheduleAnalysis(uri: string, filePath: string) {
  const existing = debounces.get(uri);
  if (existing) {
    clearTimeout(existing);
    log(`debounce: reset for ${filePath}`);
  }

  // Snapshot content now, while the document version is current
  const doc     = documents.get(uri);
  const content = doc?.getText() ?? '';

  const handle = setTimeout(async () => {
    debounces.delete(uri);

    const gen = (generations.get(filePath) ?? 0) + 1;
    generations.set(filePath, gen);

    log(`debounce: fired for ${filePath} (gen ${gen})`);

    const tmpPath = await writeTempFile(content, filePath);
    try {
      const raw    = await runCompiler(tmpPath);
      const tokens = remapTokenPaths(raw, tmpPath, filePath);

      if (generations.get(filePath) !== gen) {
        log(`debounce: stale result discarded (gen ${gen} vs ${generations.get(filePath)})`);
        return;
      }

      cache.set(filePath, tokens);
      publishDiagnostics(uri, filePath, tokens);
      connection.languages.semanticTokens.refresh();
      log(`debounce: analysis complete — ${tokens.length} tokens cached`);
    } finally {
      await deleteTempFile(tmpPath);
    }
  }, DEBOUNCE_MS);

  debounces.set(uri, handle);
}

// ── Diagnostics ───────────────────────────────
function publishDiagnostics(uri: string, filePath: string, tokens: CompilerToken[]) {
  const mine        = tokens.filter(t => t.file === filePath);
  const errors      = mine.filter(t => t.kind === 'error');
  const annotations = mine.filter(t => t.kind === 'annotation');
  log(`diagnostics: ${mine.length} for this file (${errors.length} errors, ${annotations.length} annotations)`);

  const diagnostics: Diagnostic[] = errors.map(t => {
    const firstLine = t.message.split(':')[0];
    return {
      severity: t.kind === 'error' ? DiagnosticSeverity.Error : DiagnosticSeverity.Hint,
      range: Range.create(
        Position.create(t.line - 1, t.col - 1),
        Position.create(t.line - 1, t.col - 1 + t.length)
      ),
      message: firstLine,
      source: 'smoll',
    };
  });

  connection.sendDiagnostics({ uri, diagnostics });
}

// ── Hover ─────────────────────────────────────
connection.onHover((params: TextDocumentPositionParams): Hover | null => {
  const filePath = fileURLToPath(params.textDocument.uri);
  const tokens   = cache.get(filePath) ?? [];
  const cursor   = params.position;

  const hits = tokens.filter(t =>
    t.file === filePath &&
    t.line - 1 === cursor.line &&
    cursor.character >= t.col - 1 &&
    cursor.character <  t.col - 1 + t.length
  );

  if (hits.length === 0) return null;

  const sections = [...new Set(hits.map(hit => hit.message))];

  return {
    contents: {
      kind: 'markdown',
      value: sections.join('\n\n---\n\n'),
    },
    range: Range.create(
      Position.create(hits[0].line - 1, hits[0].col - 1),
      Position.create(hits[0].line - 1, hits[0].col - 1 + hits[0].length)
    ),
  };
});

// ── Semantic tokens ───────────────────────────
connection.languages.semanticTokens.on((params) => {
  const filePath = fileURLToPath(params.textDocument.uri);
  const tokens   = cache.get(filePath) ?? [];
  const builder  = new SemanticTokensBuilder();

  const sorted = [...tokens]
    .filter(t => t.file === filePath)
    .sort((a, b) => a.line !== b.line ? a.line - b.line : a.col - b.col);

  log(`semantic tokens: building ${sorted.length} tokens for ${filePath}`);
  for (const t of sorted) {
    const typeIndex = TOKEN_TYPES.indexOf(t.tokenType);
    if (typeIndex === -1) { log(`semantic tokens: unknown type "${t.tokenType}" — skipping`); continue; }
    builder.push(t.line - 1, t.col - 1, t.length, typeIndex, 0);
  }

  return builder.build();
});

// ── Go-to-definition ──────────────────────────
connection.onDefinition((params: DefinitionParams): Location[] => {
  const filePath = fileURLToPath(params.textDocument.uri);
  const tokens   = cache.get(filePath) ?? [];
  const cursor   = params.position;
  log(`definition: cursor=${cursor.line}:${cursor.character} file=${filePath}`);

  const locations = tokens
    .filter(t =>
      t.definition &&
      t.file === filePath &&
      t.line - 1 === cursor.line &&
      cursor.character >= t.col - 1 &&
      cursor.character <  t.col - 1 + t.length &&
      !(t.definition.file === t.file &&
        t.definition.line === t.line &&
        t.definition.col  === t.col)
    )
    .map(t => Location.create(
      pathToFileURL(t.definition!.file).toString(),
      Range.create(
        Position.create(t.definition!.line - 1, t.definition!.col - 1),
        Position.create(t.definition!.line - 1, t.definition!.col)
      )
    ));

  // Deduplicate by uri+position
  const seen = new Set<string>();
  const unique = locations.filter(loc => {
    const key = `${loc.uri}:${loc.range.start.line}:${loc.range.start.character}`;
    return seen.has(key) ? false : (seen.add(key), true);
  });

  log(`definition: ${unique.length} location(s)`);
  return unique;
});

// ── Document lifecycle ────────────────────────
documents.onDidChangeContent(change => {
  const filePath = fileURLToPath(change.document.uri);
  log(`event: content changed — ${filePath}`);
  scheduleAnalysis(change.document.uri, filePath);
});

documents.onDidOpen(event => {
  const filePath = fileURLToPath(event.document.uri);
  log(`event: opened — ${filePath}`);
  scheduleAnalysis(event.document.uri, filePath);
});

documents.onDidClose(event => {
  const filePath = fileURLToPath(event.document.uri);
  log(`event: closed — ${filePath}`);
  cache.delete(filePath);
  generations.delete(filePath);
  connection.sendDiagnostics({ uri: event.document.uri, diagnostics: [] });
});

// ── Init ──────────────────────────────────────
connection.onInitialize((_params: InitializeParams) => {
  log('init: onInitialize called');
  return {
    capabilities: {
      textDocumentSync: TextDocumentSyncKind.Incremental,
      hoverProvider: true,
      definitionProvider: true,
      semanticTokensProvider: { legend: semanticTokensLegend, full: true },
    },
  };
});

documents.listen(connection);
connection.listen();