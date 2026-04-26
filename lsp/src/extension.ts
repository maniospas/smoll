import * as path from 'path';
import { ExtensionContext, window } from 'vscode';
import {
  LanguageClient,
  LanguageClientOptions,
  ServerOptions,
  TransportKind,
} from 'vscode-languageclient/node';

let client: LanguageClient;

export function activate(context: ExtensionContext) {
  const serverModule = context.asAbsolutePath(path.join('out', 'server.js'));

  const serverOptions: ServerOptions = {
    run:   { module: serverModule, transport: TransportKind.ipc },
    debug: { module: serverModule, transport: TransportKind.ipc },
  };

  const clientOptions: LanguageClientOptions = {
    documentSelector: [{ scheme: 'file', language: 'smoll' }],
  };

  client = new LanguageClient('smoll', 'smoll', serverOptions, clientOptions);
  client.start().then(() => {
    window.showInformationMessage('smoll language server started');
    const statusBar = window.createStatusBarItem();
    statusBar.text = '$(check) smoll LSP';
    statusBar.tooltip = 'smoll language server is running';
    statusBar.show();
    context.subscriptions.push(statusBar);
  }).catch((err) => {
    window.showErrorMessage(`smoll language server failed to start: ${err}`);
  });
}

export function deactivate(): Thenable<void> | undefined {
  return client?.stop();
}