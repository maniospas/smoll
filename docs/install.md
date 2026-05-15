# Install smoλ


<style>
    .step {border: 1px solid #444; padding-left:20px; border-radius: 15px;background: #f0faff;margin-bottom:2rem;}
    .button {background: white;}
</style>


The recommended way to use *smoλ* is through vscode, a popular and rather lightweight code editor.
But the steps below apply to any setup:

<div class="step">
<h2>1. Install vscode (recommended)</h2>

Get vscode from its official site. You can also use your editor of choice, or visit the language's own web playground for tinkering with and running one file in your browser.
<br><br>
<a href="https://code.visualstudio.com/" class="button">➔ Get vscode</a><a href="smoll_ide.html" class="button">➔ Web playground</a>
<br><br>
</div>


<div class="step">
<h2>2. Syntax highlighting</h2>

If you use an editor other than vscode, a Python syntax highlighter covers many language aspects.
However, a <b>vscode extension</b> is provided. This offers:
<br>&nbsp;• syntax and error highlighting
<br>&nbsp;• mouse hover tooltips about types and functions
<br>&nbsp;• visiting definitions with ctrl+click
<br>Either install the <code>smoll</code> extension
by searching for the extension within vscode, or visit its page in the vscode marketplace by following the next link.
<br><br>
<a href="https://marketplace.visualstudio.com/items?itemName=maniospas.smoll-lsp" class="button">➔ Get the extension</a>
<br><br>


</div>


<div class="step">
<h2>3. Create a new project</h2>

Create a new folder and download the executable matching to your platform without changing its name. Then, open
vscode in that folder.
<br><br>
<a href="https://github.com/maniospas/smoll/releases/download/main/smoll.exe" class="button">➔ Windows (smoll.exe)</a>
<a href="https://github.com/maniospas/smoll/releases/download/main/smoll" class="button">➔ Linux (smoll)</a>
<br><br>
In <b>linux</b>, also run <code>chmod +x smoll</code> to grant the download permission to run.
<br><i>More instructions soon for other platforms, including cross-compilation using gcc.</i>
<br><div style="margin-top:-10px">&nbsp;</div>
</div>

You are now ready! Create a `main.s` file like the one below. To run it, open a 
terminal in that folder (or use your editor's integrated
one) and run <code>./smoll main.s</code>, where <i>main.s</i> is the name of your main file.

```python
repo "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/std/" as "std/"
import "std/core.s"

def main()
    print "hello world!"
```

<i style="font-size:0.9em">Note: a <i>.cache</i> folder caches web downloads;
only downloads permitted by the main file are allowed.</i>