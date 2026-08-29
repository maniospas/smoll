(function(){
var pyodide=null, smollSource=null, pyodideReady=false;
var d=document.getElementById('terminal');
var stxt=document.getElementById('stxt');
var btnRun=document.getElementById('btnRun');
const CACHE_SMOLL   = 'smoll_src';
const CACHE_DL_PFX  = 'smoll_dl::';
const params = new URLSearchParams(window.location.search);
const base64 = params.get("contents");

if(base64) {
    const decoded = decodeURIComponent(escape(atob(base64)));
    editor.value='repo "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/std/" as "std/"\n'+decoded
}
else editor.value='repo "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/std/" as "std/"\nimport std.core\n\ndef main()\n    CLI = edit console()\n    print "Hello world!"\n';

var hl = document.getElementById('highlight');
var hlCode = document.getElementById('highlightCode');

function escapeHtml(s){
  return s;//.replace(/&/g,'&amp;').replace(/</g,'&lt;').replace(/>/g,'&gt;');
}

function highlight(){
  var out = escapeHtml(editor.value).replace(
    /("(?:[^"\\]|\\.)*"|#.*|\b(?:if|while|for|in|else|try|type|fail|mut|edit|unsafe_mut)\b|\b(?:def|local|import|repo|as)\b|[+\-*/%=<>!&|^~:]+)/g,
    function(m){
      if(m[0]==='#') return '<span style="color:#777777">'+m+'</span>';
      if(m[0]==='"') return '<span style="color:#2c5b19">'+m+'</span>';
      if(/^(if|while|for|in|else|try|fail|mut|edit|unsafe_mut|type)$/.test(m)) return '<span style="color:#7a4f7d">'+m+'</span>';
      if(/^(def|local|import|repo|repo|as)$/.test(m)) return '<span style="color:#8f1818">'+m+'</span>';
      return '<span style="color:#2e766b">'+m+'</span>';
    }
  );
  hlCode.innerHTML = out + '\n';
}

editor.addEventListener('input', highlight);
editor.addEventListener('scroll', function(){
  hl.scrollTop = editor.scrollTop;
  hl.scrollLeft = editor.scrollLeft;
});


editor.addEventListener('keydown',function(e){
  if(e.key==='Tab'){
    e.preventDefault();
    var s=editor.selectionStart;
    editor.value=editor.value.substring(0,s)+'    '+editor.value.substring(editor.selectionEnd);
    editor.selectionStart=editor.selectionEnd=s+4;
  }
  if((e.ctrlKey||e.metaKey)&&e.key==='Enter'){e.preventDefault();runVM();}
});

// Inject blink keyframe once
(function(){
  var style=document.createElement('style');
  style.textContent='@keyframes blink{0%,100%{opacity:1}50%{opacity:0}}';
  document.head.appendChild(style);
})();

function clog(msg,color){
  var span=document.createElement('span');
  if(color)span.style.color=color;
  span.innerHTML=ansiToHtml(String(msg))+'\n';
  d.appendChild(span);
  d.parentElement.scrollTop=d.parentElement.scrollHeight;
}

function filterTraceback(lines){
  var result=[];
  var inTB=false;
  for(var i=0;i<lines.length;i++){
    var line=lines[i];
    var s=line.replace(/\x1b\[[0-9;]*m/g,'');
    if(s.startsWith('Traceback (most recent call last):')){inTB=true;continue;}
    if(inTB){
      if(s.startsWith('SystemExit')||s.startsWith('_SmollExit')||s.startsWith('smoll exited')){inTB=false;continue;}
      if(s.startsWith('RuntimeError: smoll exited')){inTB=false;continue;}
      continue;
    }
    if(s.startsWith('SystemExit')||s.startsWith('_SmollExit')||s.startsWith('smoll exited with code 0'))continue;
    result.push(line);
  }
  return result;
}

async function fetchSmoll() {
  try {
    const resp = await fetch('https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/smoll.py');
    if (!resp.ok) throw new Error('HTTP ' + resp.status);
    const raw = await resp.text();
    try { localStorage.setItem(CACHE_SMOLL, raw); } catch (_) {}
    smollSource = raw;
    clog('Smoll fetched');
  } catch (err) { clog(err.message); }
}

async function initPyodide(){
  try{
    pyodide = await loadPyodide();
    pyodideReady = true;
    pyodide.globals.set('_js_cache_get', function(url) {return localStorage.getItem(CACHE_DL_PFX + url);});
    pyodide.globals.set('_js_cache_set', function(url, b64) {try { localStorage.setItem(CACHE_DL_PFX + url, b64); } catch (_) {}});
    clog('Pyodide loaded');
  } catch(err) { clog(err.message); }
}

function isExitError(msg){return msg.includes('SystemExit: 0')||msg.includes('SystemExit: None')||msg.includes('_SmollExit')||msg.includes('smoll exited with code 0');}

function setRunning(on){
  stxt.textContent='Running…';
  stxt.style.display=on?'inline':'none';
  btnRun.style.display=on?'none':'inline';
  btnClearCache.style.display=on?'none':'inline';
  btnRun.disabled=on;
  btnClearCache.disabled=on;
}

async function runVM(){
  setRunning(true);
  d.innerHTML = "";
  var t0=performance.now();
  var stderrBuf=[];
  pyodide.setStdout({batched:function(s){s.split('\n').forEach(function(l){clog(l);});}});
  pyodide.setStderr({batched:function(s){stderrBuf.push(s);}});
  pyodide.globals.set('_js_print',function(msg, end){
    var span=document.createElement('span');
    span.innerHTML=ansiToHtml(String(msg+end));
    d.appendChild(span);
    d.parentElement.scrollTop=d.parentElement.scrollHeight;
  });

  // Interactive input: renders a live input line in the terminal, resolves on Enter
  pyodide.globals.set('_js_input', function(prompt) {
    return new Promise(function(resolve) {
      var line = document.createElement('span');
      if (prompt) {
        var promptSpan = document.createElement('span');
        promptSpan.innerHTML = ansiToHtml(String(prompt));
        line.appendChild(promptSpan);
      }
      var inputSpan = document.createElement('span');
      var cursor = document.createElement('span');
      cursor.textContent = '█';
      cursor.style.cssText = 'animation:blink 1s step-end infinite;';
      line.appendChild(inputSpan);
      line.appendChild(cursor);
      d.appendChild(line);
      d.parentElement.scrollTop = d.parentElement.scrollHeight;

      var value = '';

      function onKey(e) {
        // Ignore if a modifier-only key or if focus is in the editor
        if (document.activeElement === editor) return;
        if (e.key === 'Enter') {
          document.removeEventListener('keydown', onKey);
          cursor.remove();
          // append a newline node so the next output starts on a fresh line
          line.appendChild(document.createTextNode('\n'));
          d.parentElement.scrollTop = d.parentElement.scrollHeight;
          resolve(value);
        } else if (e.key === 'Backspace') {
          e.preventDefault();
          value = value.slice(0, -1);
          inputSpan.textContent = value;
        } else if (e.key.length === 1) {
          e.preventDefault();
          value += e.key;
          inputSpan.textContent = value;
          d.parentElement.scrollTop = d.parentElement.scrollHeight;
        }
      }
      document.addEventListener('keydown', onKey);
    });
  });

  try{
    await pyodide.FS.writeFile('/program.s',editor.value);
    await pyodide.FS.writeFile('/smoll_src.py',smollSource);
    await pyodide.runPythonAsync(`
import sys, types, os, asyncio, io
from pyodide.ffi import to_js
sys.argv=['smoll','/program.s']
import builtins as _bt
_orig_print = _bt.print
_orig_input = _bt.input
_orig_stdin = sys.stdin

def _patched_print(*args, **kwargs):
    buf = io.StringIO()
    kwargs2 = {k:v for k,v in kwargs.items() if k not in ('file','end')}
    _orig_print(*args, file=buf, end='', **kwargs2)
    _js_print(buf.getvalue(), kwargs.get('end', '\\n'))

class _AsyncStdin:
    """
    read() and readline() return coroutines — must be awaited.
    Use as: ch = await sys.stdin.read(1)
    """
    def __init__(self): self._buf = ''
    async def _refill(self):
        line = await _js_input('')
        self._buf += (line if line is not None else '') + '\\n'
    async def read(self, n=-1):
        if n < 0: return ''
        while len(self._buf) < n:
            await self._refill()
        chunk, self._buf = self._buf[:n], self._buf[n:]
        return chunk
    async def readline(self):
        while '\\n' not in self._buf:
            await self._refill()
        idx = self._buf.index('\\n') + 1
        chunk, self._buf = self._buf[:idx], self._buf[idx:]
        return chunk
    def readable(self): return True
    def fileno(self): raise io.UnsupportedOperation('fileno')

_stdin_obj = _AsyncStdin()
sys.stdin = _stdin_obj

async def _patched_input_async(prompt=''):
    result = await _js_input(str(prompt) if prompt else '')
    return result if result is not None else ''

async def _patched_input_coro(prompt=''):
    return await _patched_input_async(prompt)

def _patched_input(prompt=''):
    return asyncio.get_event_loop().run_until_complete(_patched_input_async(prompt))

_bt.input = _patched_input
_bt.print = _patched_print

_bt.print = _patched_print
_bt.input = _patched_input
_mod = types.ModuleType('smoll')
_mod.__file__ = '/smoll_src.py'
sys.modules['smoll'] = _mod
_mod.__name__ = '__main__'
_mod.__dict__['_js_cache_get'] = _js_cache_get
_mod.__dict__['_js_cache_set'] = _js_cache_set
try:
    _src = open('/smoll_src.py').read().replace('if is_pyodide: main()', 'if is_pyodide: pass')
    _code = compile(_src, '/smoll_src.py', 'exec')
    _ns = _mod.__dict__
    exec(_code, _ns)
    if asyncio.iscoroutinefunction(_ns.get('main')):
        await _ns['main']()
except SystemExit as e: pass
finally:
    _bt.print = _orig_print
    _bt.input = _orig_input
    sys.stdin = _orig_stdin
`);
  }catch(err){
    var msg=err.message||String(err);
    if(!isExitError(msg))stderrBuf.push(msg);
  }
  var errLines=[];
  for(var i=0;i<stderrBuf.length;i++)stderrBuf[i].split('\n').forEach(function(l){errLines.push(l);});
  filterTraceback(errLines).forEach(function(line){if(line.trim()||line==='')clog(line,'#f44747');});
  //clog(((performance.now()-t0)/1000).toFixed(3)+'s');
  setRunning(false);
}

btnRun.addEventListener('click',runVM);

stxt.textContent='Loading…';
Promise.all([initPyodide(),fetchSmoll()]).then(function(){
  if(pyodideReady&&smollSource){
    stxt.style.display='none';
    btnRun.style.display='inline';
    btnClearCache.style.display='inline';
    btnRun.disabled=false;
    btnClearCache.disabled=false;
  }
});

var ANSI_FG={30:'#1e1e1e',31:'#f44747',32:'#98c379',33:'#e5c07b',34:'#569cd6',35:'#c586c0',36:'#4ec9b0',37:'#d4d4d4',90:'#555555',91:'#ff6b6b',92:'#b5f0a0',93:'#ffd080',94:'#82baff',95:'#e0a0ff',96:'#80ffe0',97:'#ffffff'};
var ANSI_BG={40:'#1e1e1e',41:'#5a1a1a',42:'#1a3a1a',43:'#3a3a1a',44:'#1a1a5a',45:'#3a1a3a',46:'#1a3a3a',47:'#3a3a3a',100:'#333',101:'#7a2a2a',102:'#2a5a2a',103:'#5a5a2a',104:'#2a2a7a',105:'#5a2a5a',106:'#2a5a5a',107:'#5a5a5a'};
function ansiToHtml(raw){
  var s=raw.replace(/&/g,'&amp;').replace(/</g,'&lt;').replace(/>/g,'&gt;');
  var result='',openSpan=false;
  var state={bold:false,dim:false,fg:null,bg:null};
  function close(){if(openSpan){result+='</span>';openSpan=false;}}
  function open(){
    var styles=[];
    if(state.fg)styles.push('color:'+state.fg);
    if(state.bg)styles.push('background:'+state.bg);
    if(state.bold)styles.push('font-weight:500');
    if(state.dim)styles.push('opacity:0.6');
    if(styles.length){result+='<span style="'+styles.join(';')+'">'; openSpan=true;}
  }
  var parts=s.split(/\x1b\[([0-9;]*)m/);
  for(var i=0;i<parts.length;i++){
    if(i%2===0){result+=parts[i];}
    else{
      close();
      var codes=parts[i]===''?[0]:parts[i].split(';').map(Number);
      for(var j=0;j<codes.length;j++){
        var c=codes[j];
        if(c===0)state={bold:false,dim:false,fg:null,bg:null};
        else if(c===1)state.bold=true;
        else if(c===2)state.dim=true;
        else if(c===22){state.bold=false;state.dim=false;}
        else if(ANSI_FG[c])state.fg=ANSI_FG[c];
        else if(c===39)state.fg=null;
        else if(ANSI_BG[c])state.bg=ANSI_BG[c];
        else if(c===49)state.bg=null;
      }
      open();
    }
  }
  close();
  return result;
}

btnClearCache.addEventListener('click', async function() {
  var removed = 0;
  //localStorage.removeItem(CACHE_SMOLL); removed++;
  Object.keys(localStorage)
    .filter(function(k) { return k.startsWith(CACHE_DL_PFX); })
    .forEach(function(k) { localStorage.removeItem(k); removed++; });
  clog('Cache cleared (' + removed + ' entries)');
  await initPyodide();
});


highlight();

})();