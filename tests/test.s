import std.core
import std.sci.vec


def structure(nat length)
    v = edit alloc length
    return class (v,length)

def main()
    CLI = edit console()
    f = mut float[]
    p0 = new().vec 10

    FLOATS = mut arena ref float[].alloc(5*len p0 unsafe_first () unsafe_leaky)
    prev_p = mut copy p0
    prev_p = copy p0