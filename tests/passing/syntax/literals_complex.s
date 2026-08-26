import std.core
import std.map

def OPTIONS = "zero"|"one"|"two"

def inc(nat x, blank|"one")
    return x+1

def inc(nat x, "two")
    return x+2

def which(effect edit console CLI, OPTIONS option)
    print compiler::value option

def main()
    CLI = edit console()
    lit = type "one"
    which lit
    print inc 0
    print inc (0, lit)
    print inc (0, type "two")
