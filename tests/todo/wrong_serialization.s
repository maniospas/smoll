import "std/core.s"
import "std/sci.s"

def ones = compt vec [1.0, 1.0]
def main()
    CLI = console()
    FLOATS = arena float[].alloc 128
    v = mut vec [5.0, 10.0]
    v = v+ones
    print v[0]
    