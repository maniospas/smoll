import std.core

def inc(nat x, blank|1|2 inc)
    if inc is blank
        inc = type 1
    return x+compiler::value inc

def main()
    CLI = edit console()
    print inc 0
    print inc (0, type 2)