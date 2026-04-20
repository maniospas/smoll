# smoλ (smoll)

This is a small compiled language that you can pick up in
an afternoon to make fast programs that are safe to run.

The core tenant is that there should be less "magic"
about how a program is lowered to source code, how types
are resolved, and so on. In short: reading a program 
explains the program and you don't need to read lengthy
manuals to onboard.

**If you don't use the smoll lsp, Python keyword and comment highlighting works pretty well.**

## 🚀 Features

- Functions returns as type declarations
- Simple tuple-based type system
- Function and type overloading
- Safe yet permissive
- Immutability by default (can still define mutables)
- C integration
- Zero-cost abstractions everywhere

## 🔗 Material

[Reference guide](docs/reference.md)

## ⚡ Quickstart

An example that shows several language features follows.
Cheat sheet:
- `import` brings functions from other files, and potentially organizes them in namespaces
- `def` defines functions (functions also define types)
- `mut` denotes mutable values that can be overwritten in code
- `->` pipes a value at the beginning of a function's arguments
- `try` evaluates to boolean, depending on whether an expression failed (failures are safe)

```python
# test.s
repo "https://github.com/maniospas/smoll/raw/refs/heads/main/std/" as "std/"
import "std/core.s"
import "std/io.s" as io
import "std/array.s" as array

def main()
    f = io::read "README.md"
    mem = array::alloc KB 4 # 4 KB chunk size, on char[] by default
    while try line = io::line(mem, f)
        print("|", "")
        print(line, "")
    print ""
```

Download the executable from the latest release and run:

```bash
./smoll test.s
```


## 🏷️ License

Apache 2.0 for language development.<br>
CC0 for the standard library.

*No AI was used in the development of this this language version. Mainly because I don't trust it for safety-critical code yet.*