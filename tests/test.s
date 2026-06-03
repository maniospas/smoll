import "std/core.s"
import "std/sci.s"

def diffuse(spmat m, vec p0)
    FLOATS = circular float[].alloc 4*len p0 # todo: try with smaller error and the program crashes
    p = mut copy p0
    for _ in range 10
        p = (m*p)*0.9+0.1*p0
        if p.pos!=0 fail "circular buffer has the wrong size"
    return p


def main()
    CLI = console()
    FLOATS = new()
    m = spmat [
        (1,1, 1.0),
        (2,2, 2.0)
    ].any(3,3)
    p0 = vec [1.0,2.0,3.0]
    try p = diffuse(m, p0)
    print exists p.unsafe_ptr
    print p

