import std.core
import std.sci
import std.test

def main()
    CLI = edit console()
    assert(abs (1000023.2423)==1000023.2423, "leave alone positive numbers")
    assert(abs (0.0-1000023.2423)==1000023.2423, "flip sign to negative numbers")

