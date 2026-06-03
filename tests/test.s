
import "std/core.s"

def inc(mut float ptr element)
    element = element..+1.0

def main()
    CLI = console()
    # create a buffer and immediately get a pointer to its first element
    buf = [0.0]
    element = mutlast buf
    print element.. # prints 0.0
    inc element
    print element.. # prints 1,0