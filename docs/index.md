<div>

<style>
.smoll-hero { padding-top: 4rem;padding-bottom:1rem;}
.smoll-name { letter-spacing: -0.02em; margin: 0 0 0.5rem; color: #444; }
.smoll-name span { color: #888; }ffont
.smoll-tagline { color: #666; max-width: 560px; }
.smoll-desc { color: #666; max-width: 600px;  }
.smoll-divider { border: none; border-top: 1px solid #eee; }
.smoll-features { display: grid; grid-template-columns: repeat(auto-fit, minmax(220px, 1fr)); gap: 1.5rem 2rem; }
.smoll-section-label { font-size: 0.9rem; text-transform: uppercase; color: #aaa; margin-top:2rem;}
.smoll-features { border:1px solid #444;padding-left:20px;padding-right:20px;border-radius:15px;}
@media (prefers-color-scheme: dark) {
  .smoll-name { color: #c9d1d9; }
  .smoll-name span { color: #666; }
  .smoll-tagline, .smoll-desc, .smoll-feature p { color: #8b949e; }
  .smoll-divider { border-top-color: #21262d; }
}
</style>

<div class="smoll-hero">
  <h1 class="smoll-name">smo<span>λ</span></h1>
  <p class="smoll-tagline">Script ergonomics and safety at wire speed.</p>
  <a href="install.html" class="button">➔ Install</a>
  <a href="reference.html" class="button">📚 Learn</a>
</div>

<p class="smoll-section-label">Quickstart</p>

```python
repo "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/std/" as "std/"
import "std/core.s"
import "std/io.s":file as file

def CHUNK_SIZE = 4096

def main()
    f = file:read "README.md"
    mem = alloc CHUNK_SIZE
    while try line = mem.file:line f
        print("|", "")
        print(line, "")
    print ""
```

<p class="smoll-section-label">Features</p>
<div class="smoll-features">
  <div class="smoll-feature"><h3>Safe</h3><p>Automatically apply and guard resources. Opt into unsafe C only explicitly.</p></div>
  <div class="smoll-feature"><h3>Finite</h3><p>Tuple-based type system reads sequentially. Less wading through magic.</p></div>
  <div class="smoll-feature"><h3>Ergonomic</h3><p>Easy function calling (see below). Interceptable errors get out of the way.</p></div>
  <div class="smoll-feature"><h3>Fast</h3><p>Scripting abstractions yet minimal memory indirection.</p></div>
  <div class="smoll-feature"><h3>Duck and linear types</h3><p>Functions define types. Interact with those with zero runtime overhead.</p></div>
  <div class="smoll-feature"><h3>Supported</h3><p>Compiler, LSP, interpreter to test unsafe code, web import, web playground.</p></div>
</div>

</div>
