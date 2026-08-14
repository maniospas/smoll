import { createConnection, TextDocuments, ProposedFeatures, InitializeParams, TextDocumentSyncKind, Diagnostic, DiagnosticSeverity, Hover, Location, Position, Range, TextDocumentPositionParams, DefinitionParams, SemanticTokensBuilder, CompletionItem, CompletionItemKind } from 'vscode-languageserver/node';
import { TextDocument } from 'vscode-languageserver-textdocument';
import { pathToFileURL, fileURLToPath } from 'url';
import { writeFile, unlink } from 'fs/promises';
import { tmpdir } from 'os';
import { join } from 'path';
import { platform } from 'os';
import { spawn, ChildProcessWithoutNullStreams } from 'child_process';
import { randomBytes } from 'crypto';

const LOGGING = true;
function log(msg: string) { if (LOGGING) connection.console.log(`[smoll] ${msg}`); }

const TOKEN_TYPES = [ 'namespace', 'type', 'class', 'enum', 'interface', 'struct', 'typeParameter', 'parameter', 'variable', 'property', 'enumMember', 'event', 'function', 'method', 'macro', 'keyword', 'modifier', 'comment', 'string', 'number', 'regexp', 'operator', 'decorator'];
const TOKEN_MODIFIERS = [ 'declaration', 'definition', 'readonly', 'static', 'deprecated', 'abstract', 'async', 'modification', 'documentation', 'defaultLibrary' ];
const semanticTokensLegend = { tokenTypes: TOKEN_TYPES, tokenModifiers: TOKEN_MODIFIERS };
type TokenType = | 'namespace' | 'type' | 'class' | 'enum' | 'interface' | 'struct' | 'typeParameter' | 'parameter' | 'variable' | 'property' | 'enumMember' | 'event' | 'function' | 'method' | 'macro' | 'keyword' | 'modifier' | 'comment' | 'string' | 'number' | 'regexp' | 'operator' | 'decorator';

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

const LINE_COMMENT = /#.*/g;
function getCommentTokens(document: TextDocument): { line: number; col: number; length: number }[] {
  const results: { line: number; col: number; length: number }[] = [];
  const lines = document.getText().split(/\r?\n/);
  for(let lineIdx = 0; lineIdx < lines.length; lineIdx++) {
    LINE_COMMENT.lastIndex = 0;
    let match: RegExpExecArray | null;
    while((match = LINE_COMMENT.exec(lines[lineIdx])) !== null) results.push({ line: lineIdx, col: match.index, length: match[0].length });
  }
  return results;
}

const connection = createConnection(ProposedFeatures.all);
const documents  = new TextDocuments(TextDocument);
const cache      = new Map<string, CompilerToken[]>();
const debounces  = new Map<string, ReturnType<typeof setTimeout>>();
const generations = new Map<string, number>();
const DEBOUNCE_MS = 300;
const cacheReady = new Map<string, Array<() => void>>();

function waitForCache(filePath: string): Promise<void> {
  return new Promise(resolve => {
    const listeners = cacheReady.get(filePath) ?? [];
    listeners.push(resolve);
    cacheReady.set(filePath, listeners);
  });
}
function notifyCacheReady(filePath: string) {
  const listeners = cacheReady.get(filePath) ?? [];
  cacheReady.delete(filePath);
  for (const resolve of listeners) resolve();
}

async function writeTempFile(content: string, realPath: string): Promise<string> {
  const ext = realPath.slice(realPath.lastIndexOf('.'));
  const unique = `${Date.now()}-${randomBytes(4).toString('hex')}`;
  const tmp = join(tmpdir(), `smoll-lsp-${process.pid}-${unique}${ext}`);
  await writeFile(tmp, content, 'utf8');
  return tmp;
}
async function deleteTempFile(tmp: string) {try { await unlink(tmp); } catch {}}
function remapPathsInText(text: string): string {
  for (const [tmpPath, realPath] of tempPathMap) {
    if (text.includes(tmpPath)) {
      text = text.split(tmpPath).join(realPath);
    }
  }
  return text;
}
function remapTokenPaths(tokens: CompilerToken[]): CompilerToken[] {
  return tokens.map(t => ({
    ...t,
    file: tempPathMap.get(t.file) ?? t.file,
    message: remapPathsInText(t.message),
    definition: t.definition ? {
      ...t.definition,
      file: tempPathMap.get(t.definition.file) ?? t.definition.file,
    } : undefined,
  }));
}

// def: entries persist across the whole compiler process lifetime, so this dictionary
// lives at module scope instead of being recreated per parse call.
const defDictionary = new Map<number, string>();
function resolveMessage(message: string): string {
  return message
    .split('\n')
    .map(line => {
      if(line.charCodeAt(0) !== 58) return line;
      return defDictionary.get(parseInt(line.slice(1), 10))
    })
    .join('\t')
    .split('\t') // merge with incoming tabs
    .join('\n');
}

function parseCompilerOutput(stdout: string): CompilerToken[] {
  const tokens: CompilerToken[] = [];
  const rawLines = stdout.split(/\r?\n/);
  const lines: string[] = []; // gathered lines
  let i = 0;
  while(i<rawLines.length) {
    lines.length = 0;
    while(true) {
      const rawLine = rawLines[i];
      i = i+1;
      if(rawLine === undefined) break;
      if(rawLine.length===0) {}
      else if(rawLine.charCodeAt(0) === 58) {
        const newLine = lines.length<8?defDictionary.get(parseInt(rawLine.slice(1), 10))??rawLine:rawLine;
        lines.push(newLine)
      }
      else if(rawLine.startsWith("def:")) {
        const defPos = rawLine.indexOf(",");
        if (defPos!==-1) {
          defDictionary.set(parseInt(rawLine.slice(4,defPos), 10), rawLine.slice(defPos+1));
        }
      }
      else if(rawLine==="---") break;
      else lines.push(rawLine);
    }
    if(lines.length<8) continue;
    let tokenTypeName = lines[0].trim();
    const file      = lines[1].trim();
    const line      = parseInt(lines[2], 10);
    const col       = parseInt(lines[3], 10);
    const length    = parseInt(lines[4], 10);
    const defFile   = lines[5];
    const defLine   = parseInt(lines[6], 10);
    const defCol    = parseInt(lines[7], 10);
    const message   = lines.slice(8).join('\n');
    let kind: 'error'|'annotation' = tokenTypeName.endsWith('error')?'error':'annotation';
    let tokenType = tokenTypeName as TokenType;
    tokens.push({ tokenType, file, line, col, length, message, kind, definition: { file: defFile, line: defLine, col: defCol } });
  }
  return tokens;
}

let compilerProc: ChildProcessWithoutNullStreams | null = null;
let pendingResolve: ((stdout: string) => void) | null = null;
let outputBuffer = '';

const END_MARKER = '===END===';

function ensureCompilerRunning(firstTmpPath: string) {
  if (compilerProc) return;
  const BINARY = platform() === 'win32' ? 'smoll.exe' : './smoll';
  compilerProc = spawn(BINARY, [firstTmpPath, '--lsp'], {});
  compilerProc.stdout.setEncoding('utf8');
  compilerProc.stdout.on('data', (chunk: string) => {
    outputBuffer += chunk;
    const idx = outputBuffer.indexOf(END_MARKER);
    if (idx !== -1 && pendingResolve) {
      const result = outputBuffer.slice(0, idx);
      outputBuffer = outputBuffer.slice(idx + END_MARKER.length);
      const resolve = pendingResolve;
      pendingResolve = null;
      resolve(result);
      dequeueNext();
    }
  });
  compilerProc.on('exit', () => {
    compilerProc = null;
    outputBuffer = '';
    busy = false;
    const stalled = pendingResolve;
    pendingResolve = null;
    if (stalled) stalled('');
    dequeueNext();
  });
}


const MAX_TEMP_PATHS = 10_000;
const tempPathMap = new Map<string, string>();
const requestQueue: { tmpPath: string; uri: string; resolve: (s: string | null) => void }[] = [];
let busy = false;


function rememberTempPath(tmpPath: string, realPath: string) {
  // Refresh insertion order if this temp path is reused.
  tempPathMap.delete(tmpPath);
  tempPathMap.set(tmpPath, realPath);

  while (tempPathMap.size > MAX_TEMP_PATHS) {
    const oldest = tempPathMap.keys().next().value;
    if (oldest === undefined) break;
    tempPathMap.delete(oldest);
  }
}

function dequeueNext() {
  if (busy || requestQueue.length === 0) return;
  const next = requestQueue.shift()!;
  if (focusedUri !== null && next.uri !== focusedUri) {
    log(`queue: skipping ${next.tmpPath} at dispatch, ${next.uri} not focused`);
    next.resolve(null);
    dequeueNext();
    return;
  }
  busy = true;
  pendingResolve = (stdout: string) => { busy = false; next.resolve(stdout); };
  const isFirst = !compilerProc;
  ensureCompilerRunning(next.tmpPath);
  if (!isFirst) compilerProc!.stdin.write(next.tmpPath + '\n');
}

function runCompiler(tmpPath: string, uri: string): Promise<CompilerToken[] | null> {
  return new Promise((resolve) => {
    requestQueue.push({
      tmpPath,
      uri,
      resolve: (stdout: string | null) => {
        if (stdout === null) { resolve(null); return; }
        try { resolve(parseCompilerOutput(stdout)); }
        catch { resolve([]); }
      },
    });
    dequeueNext();
  });
}

// ── Debounce ──────────────────────────────────
function scheduleAnalysis(uri: string, filePath: string) {
  const existing = debounces.get(uri);
  if(existing) {
    clearTimeout(existing);
    log(`debounce: reset for ${filePath}`);
  }
  const doc     = documents.get(uri);
  const content = doc?.getText() ?? '';
  const handle = setTimeout(async () => {
    debounces.delete(uri);
    const gen = (generations.get(filePath) ?? 0) + 1;
    generations.set(filePath, gen);
    log(`debounce: fired for ${filePath} (gen ${gen})`);
    const tmpPath = await writeTempFile(content, filePath);
    rememberTempPath(tmpPath, filePath);
    try {
      const raw = await runCompiler(tmpPath, uri);
      if (!raw) {
        log(`debounce: skipped, ${filePath} not focused at dispatch`);
        return;
      }
      const tokens = remapTokenPaths(raw);
      if (generations.get(filePath) !== gen) {
        log(`debounce: stale result discarded (gen ${gen} vs ${generations.get(filePath)})`);
        return;
      }
      cache.set(filePath, tokens);
      publishDiagnostics(uri, filePath, tokens);
      connection.languages.semanticTokens.refresh();
      notifyCacheReady(filePath);
      log(`debounce: analysis complete — ${tokens.length} tokens cached`);
    } 
    finally { await deleteTempFile(tmpPath); }
  }, DEBOUNCE_MS);

  debounces.set(uri, handle);
}

function publishDiagnostics(uri: string, filePath: string, tokens: CompilerToken[]) {
  const mine        = tokens.filter(t => t.file === filePath);
  const errors      = mine.filter(t => t.kind === 'error');
  const annotations = mine.filter(t => t.kind === 'annotation');
  log(`diagnostics: ${mine.length} for this file (${errors.length} errors, ${annotations.length} annotations)`);
  const seen = new Map<string, Set<string>>();
  const diagnostics: Diagnostic[] = errors
    .map(t => {
      return {
        severity: t.kind==='error'?DiagnosticSeverity.Error:DiagnosticSeverity.Hint,
        range: Range.create(
          Position.create(t.line - 1, t.col - 1),
          Position.create(t.line - 1, t.col - 1 + t.length)
        ),
        message: t.kind,
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

  const sections = Array.from(new Set(hits.map(hit => resolveMessage(hit.message))));

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
  const document = documents.get(params.textDocument.uri);
  const builder  = new SemanticTokensBuilder();
  type FlatToken = { line: number; col: number; length: number; typeIndex: number };
  const compilerTokens: FlatToken[] = tokens
    .filter(t => t.file === filePath)
    .map(t => ({ line: t.line - 1, col: t.col - 1, length: t.length, typeIndex: TOKEN_TYPES.indexOf(t.tokenType) }));
  const commentTokens: FlatToken[] = document
    ? getCommentTokens(document).map(c => ({ ...c, typeIndex: TOKEN_TYPES.indexOf('comment') }))
    : [];
  const all = [...compilerTokens, ...commentTokens]
    .filter(t => t.typeIndex !== -1)
    .sort((a, b) => a.line !== b.line ? a.line - b.line : a.col - b.col);
  log(`semantic tokens: ${compilerTokens.length} compiler + ${commentTokens.length} comments`);
  for(const t of all) builder.push(t.line, t.col, t.length, t.typeIndex, 0);
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

  const seen = new Set<string>();
  const unique = locations.filter(loc => {
    const key = `${loc.uri}:${loc.range.start.line}:${loc.range.start.character}`;
    return seen.has(key) ? false : (seen.add(key), true);
  });
  log(`definition: ${unique.length} location(s)`);
  return unique;
});

const KEYWORDS = [
  'if', 'while', 'for', 'in', 'is', 'def', 'include', 'local', 'edit',
  'mut', 'unsafe_mut', 'class', 'singleton', 'const', 'return', 'unsafe_return'
];

connection.onCompletion(async (params): Promise<CompletionItem[]> => {
  const uri      = params.textDocument.uri;
  const filePath = fileURLToPath(uri);
  const cursor   = params.position;

  if (debounces.has(uri)) { await waitForCache(filePath); }
  const tokens = cache.get(filePath) ?? [];
  const hits = tokens.filter(t =>
    t.line - 1 === cursor.line &&
    cursor.character >= t.col &&
    cursor.character <=  t.col + t.length
  );
  const items: CompletionItem[] = [];
  for (const t of hits) items.push(...extractCodeBlockLineStarts(resolveMessage(t.message)));
  const seen = new Set<string>();
  const deduped = items.filter(i => seen.has(i.label) ? false : (seen.add(i.label), true));

  const doc = documents.get(uri);
  const lineText = doc?.getText().split(/\r?\n/)[cursor.line] ?? '';
  const prefix = lineText.slice(0, cursor.character).match(/[A-Za-z_][A-Za-z0-9_]*$/)?.[0] ?? '';

  const keywordItems: CompletionItem[] = KEYWORDS
    .filter(k => k.startsWith(prefix))
    .map(k => ({ label: k, kind: CompletionItemKind.Keyword }));

  const kindOrder: Partial<Record<CompletionItemKind, number>> = {
    [CompletionItemKind.Variable]: 0,
    [CompletionItemKind.Function]: 1,
    [CompletionItemKind.Module]: 2,
  };
  deduped.sort((a, b) => (kindOrder[a.kind!] ?? 99) - (kindOrder[b.kind!] ?? 99));

  return [...keywordItems, ...deduped];
});

function extractCodeBlockLineStarts(message: string): CompletionItem[] {
  const lines = message.split('\n');
  const items: CompletionItem[] = [];
  let inCodeBlock = false;
  for (const line of lines) {
    if (line.trimStart().startsWith('```')) {
      inCodeBlock = !inCodeBlock;
      continue;
    }
    if (inCodeBlock && line.trim().length > 0) {
      const trimmed = line.trim();
      let kind: CompletionItemKind = CompletionItemKind.Function;
      if (trimmed.endsWith('(variable)')) 
        kind = CompletionItemKind.Variable;
      else if (trimmed.endsWith('(namespace)')) 
        kind = CompletionItemKind.Module;
      items.push({
        label: trimmed.split('(')[0].trim(),
        kind,
      });
    }
  }
  return items;
}

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

let focusedUri: string | null = null;
connection.onNotification('smoll/focusChanged', (params: { uri: string | null }) => {
  if (params.uri && !params.uri.startsWith('file://')) {
    log(`event: focus gained on non-file uri, ignoring — ${params.uri}`);
    return;
  }
  focusedUri = params.uri;
  if (focusedUri) {
    const filePath = fileURLToPath(focusedUri);
    log(`event: focus gained — ${filePath}`);
    scheduleAnalysis(focusedUri, filePath);
  }
});

// ── Init ──────────────────────────────────────
connection.onInitialize((_params: InitializeParams) => {
  log('init: onInitialize called');
  return {
    capabilities: {
      textDocumentSync: TextDocumentSyncKind.Incremental,
      hoverProvider: true,
      definitionProvider: true,
      completionProvider: {
        triggerCharacters: 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_:.()[]<>+-*/^%=! '.split(''),
      },
      semanticTokensProvider: { legend: semanticTokensLegend, full: true },
    },
  };
});

documents.listen(connection);
connection.listen();