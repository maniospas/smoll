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
- Simple tuple-based type system
- Function and type overloading
- Safe yet permissive
- Immutability by default (can still define mutables)
- Can opt in to constness for memory contents
- C integration
- Zero-cost abstractions everywhere

## 🔗 Material

[Reference guide](docs/reference.md)

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
import "std/io.s"::file as file

def main()
    f = file::read "README.md"
    mem = alloc KB 4 # max 4 KB chunk size, on char[] by default
    while try line = mem.file::line f
        print("|", "") # with custom end line
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

*No AI was used in the development of the language's core.
Some AI was used for boilerplate cross-platform implementations 
in the standard library and validation.*