# smoλ (smoll)

This is a small compiled language that you can pick up in
an afternoon to make fast programs that are safe to run.

Ideal for those who enjoy both safe low-level programming (with
some C unsafety sprinkled in on-demand) and scripting syntax 
ergonomics. Safety is achieved through compiler analysis, 
immutable pointers, and references that remain stable even when
resizing.

The core tenet is that there should be less "magic"
about how a program is lowered to source code, how types
are resolved, and so on. In short: reading a program 
explains the program and you don't need to read lengthy
manuals to onboard. Conversely, everything is safe until
the compiler stops you from doing unsafe stuff.

## 🚀 Features

- Function returns as type declarations
- Predictable tuple-based type system (reads sequentially, resolves in finite time)
- Function and type overloading
- Script into zero-cost abstractions and minimized memory indirections
- Immutability by default (can still define mutables)
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
Cheat sheet:
- `import` brings functions from other files, and potentially organizes them in namespaces
- `def` defines functions; functions also define types
- `mut` denotes mutable values that can be overwritten in code
- `.` pipes a value at the beginning of a function's arguments (e.g., `1.add 2`), or accesses a field (e.g., `point.x`)
- `try` evaluates to boolean, depending on whether an expression failed (failures are safe)
- calling parentheses are optional for one argument

```python
# test.s
repo "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/std/" as "std/"
import "std/core.s"
import "std/io.s"

def CHUNK_SIZE = 4096 # number literal

def main()
    f = file:read "README.md"
    mem = char[].alloc CHUNK_SIZE
    for line in (mem, f)
        # nn adds an empty new line to the print instead of default '\n'
        print nn "| "
        print nn line
    print ""
```

Download the executable from the 
[latest release](https://github.com/maniospas/smoll/releases/tag/main) and run:

```bash
./smoll test.s
```

Or experiment with the online playground linked above.

## 🏷️ License

Apache 2.0 for language development.<br>
CC0 for the standard library.

*No AI was used in the development of the language's core.
Some AI was used for boilerplate cross-platform implementations 
in the standard library and lsp, as well as for validation.*