import "std/core.s"

def inc(nat x, blank|1|2 inc)
    if inc is blank
        inc = 1&
    return x+inc..

def main()
    print inc 0
    print inc (0, 2&)