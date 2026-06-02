import "std/core.s"

def inc(nat x, blank|1|2 inc)
    if inc is blank
        inc = type 1
    return x+compiler:literal inc

def main()
    CLI = console()
    print inc 0
    print inc (0, type 2)