import "std/core.s"
import "std/sci.s"

def main()
    CLI = console()
    m = compt new().graph:normalize matrix [
        (1,1, 1.0),
        (2,2, 2.0),
        (1,2, 1.0)
    ].any(3,3)
    FLOATS = new()
    p0 = vec [1.0,2.0,3.0]
    result = graph:ppr(0.9).graph:filter(m, p0)
    print nn "iterations: "
    print result.iter
    print result.p
