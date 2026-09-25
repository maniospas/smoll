import std.core
import std.map

def OPTIONS = "zero"|"one"|"two"

def inc(nat x, blank|"one")
    return x+1

def inc(nat x, "two")
    return x+2

def which(on CLI, OPTIONS option)
    print compiler::value option

def main(CLI)
    lit = type "one"
    which lit
    print inc 0
    print inc (0, lit)
    print inc (0, type "two")
