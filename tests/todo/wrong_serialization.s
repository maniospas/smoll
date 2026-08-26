import std.core
import std.sci

def ones = compt vec [1.0, 1.0]
def main()
    CLI = edit console()
    FLOATS = edit arena float[].alloc 128
    v = mut vec [5.0, 10.0]
    v = v+ones
    print v[0]
    