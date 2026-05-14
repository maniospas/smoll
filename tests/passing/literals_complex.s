import "std/core.s"
import "std/map.s"

def OPTIONS = "zero"|"one"|"two"

def inc(nat x, blank|"one")
    return x+1

def inc(nat x, "two")
    return x+2

def which(OPTIONS option)
    print compiler::literal option

def main()
    lit = type "one"
    which lit
    print inc 0
    print inc (0, lit)
    print inc (0, type "two")
