<h1>Install sm<img style="width:1.5rem" src="smoll.png"></img>λ</h1>

The recommended way to use *smoλ* is through vscode, a popular and rather lightweight code editor.
But the steps below apply to any setup:

<div class="step">
<h2>1. Install vscode (recommended)</h2>

Get vscode from its official site. You can also use your editor of choice, or visit the language's own web playground for tinkering with and running one file in your browser.
<br><br>
<a href="https://code.visualstudio.com/" class="button">➔ Get vscode</a><a href="playground.html" class="button">➔ Web playground</a>
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

Create a new folder. Place within it the executable matching your platform without changing its name. Then, open
vscode or your editor of choice in that folder.

<br><br>
<a href="https://github.com/maniospas/smoll/releases/download/main/smoll.exe" class="button">➔ Windows (smoll.exe)</a>
<a href="https://github.com/maniospas/smoll/releases/download/main/smoll" class="button">➔ Linux (smoll)</a>
<br><br>
In <b>linux</b>, also run <code>chmod +x smoll</code> to grant the download permission to run.
<br><i>More instructions soon for other platforms, including cross-compilation using gcc.</i>
<br><div style="margin-top:-10px">&nbsp;</div>
</div>

<div class="step">
<h2>4. Get a C compiler or interpret</h2>

<i>Smoλ</i> requires an assisting C compiler to produce a final executable,
It is recommended to install the
GCC compiler in your system, which the language tries to use by default. Otherwise
<i>smoλ</i> can act as an interpreter for its own intermediate C code
by adding <code>--back vm</code>. This is how the language runs in the web playground too.
<br>
<br>
In <b>windows</b> install GCC by installing msys2 first and then running:

<pre class="skiptry">
pacman -S mingw-w64-ucrt-x86_64-gcc
</pre>
<div style="margin-top:-10px">&nbsp;</div>
<a href="https://www.msys2.org/" class="button">➔ msys2 for Windows</a>
<br><br>

In <b>linux</b> install GCC per:

<pre class="skiptry">
sudo apt update
sudo apt install build-essential
</pre>

<details><summary>Expand this to look at other supported compiler backends.</summary>
You can use the exemplary 
<a href="https://codeberg.org/lsof/antcc">antcc</a> compiler (and add a star to it)
for WSL or linux. This is faster than GCC with roughly comparable optimization speeds for smoλ code.
A fork of that has been tailored to work well for us. Download
the precompiled executable (or compile it from scratch), and place it in your project directory.
Then add <code>--back antcc</code> to smoll runs.

<br><br>
<a href="https://github.com/maniospas/smoll/raw/refs/heads/main/antcc" class="button">➔ antcc binary</a>
<br><br>

</details>


<br><div style="margin-top:-10px">&nbsp;</div>
</div>

You are now ready! Create a `main.s` file like the one below. To compile and run the outcome, open a 
terminal in that folder (or use your editor's integrated
one) and run <code>./smoll main.s</code>, where <i>main.s</i> is the name of your main file.
The following will be printed in the console. Add <code>--build</code> to the command for only 
producing the executable.

```python
repo "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/std/" as "std/"
import "std/core.s"

def main()
    print "hello world!"
```

<div class="console">
<code class="output">
[<span style="color:orange">+</span>] process      tests/test.s
[<span style="color:orange">+</span>] transpile    tests/test.c
[<span style="color:orange">+</span>] compile      gcc -O3 tests/test.c -o tests/test -I.
[<span style="color:orange">+</span>] run          ./tests/test
hello world!

</code>
</div>

<i style="font-size:0.9em">Note: a <i>.cache</i> folder caches web downloads;
only downloads permitted by the main file are allowed.</i>