<h1 class="smoll-name">sm<img src="docs/smoll.png" style="width:1.5rem"></img><span>λ</span></h1>

This is a small compiled language that you can pick up in
an afternoon to make fast programs that are safe to run.
Once in a while, some of its deeper features come in handy for fast yet safe code.

Ideal for those who enjoy both safe low-level programming (with C integration) and scripting syntax 
ergonomics. Safety is achieved through compiler analysis and movement of deferred resource-releasing to function callers.

The core tenet is that there should be less "magic"
about how a program is lowered to source code, how types
are resolved, and so on. In short: reading a program *sequentially*
explains the program. Conversely, everything is safe until
the compiler stops you from doing unsafe stuff.

## 🚀 Features

- Function returns as type declarations
- Predictable tuple-based type system (reads sequentially, resolves in finite time)
- Function and type overloading
- Script into zero-cost abstractions and minimized memory indirections
- Immutability by default (can still easily define mutables)
- Can opt in to constness for memory contents
- C integration

## 🔗 Material

[Index](https://maniospas.github.io/smoll/index.html)<br>
[Install](https://maniospas.github.io/smoll/install.html)<br>
[Learn](https://maniospas.github.io/smoll/reference.html)<br>
[Playground](https://maniospas.github.io/smoll/playground.html)

*Use the smoll lsp, or Python keyword and comment highlighting works pretty well.*

## ⚡ Quickstart

An example that shows several language features follows.

```python
# test.s
repo "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/std/" as "std/"
import "std/core.s"
import "std/io.s"

def CHUNK_SIZE = 4096
def README = "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/README.md"

def main()
    CLI = console()               # the CLI effect tells us where to direct the next prints
    mem = char[].alloc CHUNK_SIZE # pipe argument with dot, parentheses optional for one argument
    f = file:read web:get README  # save to .tmp with system curl and read it
    size = mut 0
    for line in (mem, f) # iterator defined over a (memory buffer, file) tuple
        size = size+len line
    print(size, " bytes downloaded\n")
```

Download the executable from the 
[latest release](https://github.com/maniospas/smoll/releases/tag/main) and run:

```bash
./smoll test.s
```

Or experiment with the online playground linked above. Cheat sheet:
- `repo` renames a path to another online or local resource
- `import` brings functions from other files, and potentially organizes them in namespaces
- `def` defines functions; functions also define types
- `mut` denotes mutable values that can be overwritten in code
- `edit` denotes that mutable internals can change
- `.` pipes a value at the beginning of a function's arguments (e.g., `1.add 2`), or accesses a field (e.g., `point.x`)
- `try` evaluates to boolean, depending on whether an expression failed (failures are safe)
- calling parentheses are optional for one argument

## 🏷️ License

Apache 2.0 for language development.<br>
CC0 for the standard library.

*No AI was used in the development of the language's core.
Some AI was used for boilerplate cross-platform implementations 
in the standard library and lsp, as well as for validation. Such
usage has been incremental, fixed by hand at pain points, tested
similarly to the rest of the project, logically validated 
line-by-line, and refactored into the project's coding style.*