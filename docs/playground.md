
<style>
#wrap { position: relative; display: inline-block;width:100%;}
#editor{width:100%;height:40vh;resize: none; overflow: auto; white-space: pre; display: block; }
#runbar { position: absolute; bottom: 8px; right: 4px; display: flex; align-items: center; }
.console{height:30vh;overflow-y:auto}
</style>

<div style="margin-top:100px">
  <div id="wrap">
    <textarea id="editor" spellcheck="false" autocomplete="off" autocorrect="off" autocapitalize="off"></textarea>
    <div id="runbar">
      <span id="stxt" style="font-family:monospace;font-size:12px;color:#888">Loading…</span>
      <button id="btnRun" class="runbutton" style="display:none">▶&nbsp;&nbsp;Run</button>
      <button id="btnClearCache" class="runbutton" style="display:none;margin-left:10px">Clear cache</button>
    </div>
  </div>
  <div class="console"><code id="terminal" class="output"></code></div>
</div>

<script src="https://cdn.jsdelivr.net/pyodide/v0.27.5/full/pyodide.js"></script>
<script src="playground.js"></script>
