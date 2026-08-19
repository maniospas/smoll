
<style>
#wrap { position: relative; display: inline-block;width:100%;}
#runbar { position: absolute; bottom: 8px; right: 4px; display: flex; align-items: center; }
.console{height:30vh;overflow-y:auto}
#editor, #highlight {
  width:100%;height:40vh;
  padding:8px; margin:0; box-sizing:border-box;
  font-family:monospace; 
  font-size:14px; line-height:1.4;
  white-space:pre;
  resize: none;
  font: 14px/1.4 monospace;
  letter-spacing: normal;
}
#highlightCode {
  font-family:monospace; 
  font-size:14px;
  line-height:1.2;
  white-space:pre;
  color:#222222;
}
#editor {
  position:relative; color:transparent; caret-color:#222222;
  background:transparent; z-index:2;
}
#highlight {
  position:absolute; top:0; left:0; z-index:1;
  pointer-events:none; color:#222222;
  overflow:auto; 
}
</style>

<div style="margin-top:100px">
  <div id="wrap">
    <pre id="highlight" aria-hidden="true"><code id="highlightCode"></code></pre>
    <textarea id="editor" spellcheck="false" autocomplete="off" autocorrect="off" autocapitalize="off"></textarea>
  </div>
  <div class="console"><code id="terminal" class="output"></code></div>

  <div id="runbar">
    <span id="stxt" style="font-family:monospace;font-size:12px;color:#888">Loading…</span>
    <button id="btnRun" class="runbutton" style="display:none">▶&nbsp;&nbsp;Run (ctrl+enter)</button>
    <button id="btnClearCache" class="runbutton" style="display:none;margin-left:10px">Clear cache</button>
  </div>
</div>

<script src="https://cdn.jsdelivr.net/pyodide/v0.27.5/full/pyodide.js"></script>
<script src="playground.js"></script>
