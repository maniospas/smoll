# smoλ (smoll)

This is a small compiled language that you can pick up in
an afternoon to make fast programs that are safe to run.

The core tenant is that there should be less "magic"
about how a program is lowered to source code, how types
are resolved, and so on. In short: reading a program 
explains the program and you don't need to read lengthy
manuals to onboard.

## 🚀 Features

- Functions returns as type declarations
- Linear tuple-based type system
- Function and type overloading
- Permissive safety checking
- Immutability by default (can still define mutables)
- C integration

## ⚡ Quickstart

An example that shows several language features follows.
Cheat sheet:
- `import` brings functions from other files
- `def` defines functions (functions also define types)
- `mut` denotes mutable values that can be overwritten in code; mutable fields can still be edited
- `->` pipes a value at the beginning of a function's arguments.

```python
import "std/core.s"
import "std/file.s"

def count(mut reader f, str line_prefix)
    lines = mut 0
    characters = mut 0
    line = mut str ""
    while (f,line)->next()
        print(line_prefix, "")
        print(line)
        lines = lines+1
        characters = characters+len(line)
    return (lines, characters)

def main()
    f = mut reader("README.md")
    counted = f->count("|")
    print("lines")
    print(counted.lines)
    print("lines")
    print(counted.lines)

```


## 🔗 Material

[Basic syntax](docs/basics.md)

## 🏷️ License

Apache 2.0 for language development.<br>
CC0 for the standard library.

*No AI was used in the development of this this language version. Mainly because I don't trust it for safety-critical code yet.*