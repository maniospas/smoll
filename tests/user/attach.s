import "std/core.s"
import "std/sci.s"

def transform(matrix m, vec x, float offset)
    FLOATS = arena float[].alloc 2*len x
    p0 = copy x
    p = self(m*x)+offset
    p = self(p)+p0
    # We have created a non-linear dependency between p,p0,and FLOATS,
    # so the compiler is uncertain whether you are leaking memory 
    # vs creating a defer
    return p

def main()
    CLI = edit console()
    m = matrix [
        1.0, 1.0,
        1.0, 1.0
    ].any 2
    x = vec [1.0, 1.0]
    y = transform(m,x,0.0)
    print y