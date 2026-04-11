import "std/core.s"
import "std/array.s"

def test(mut float ptr t)
    t << 1.0 // copy data inside pointed memory

def main()
    x = mut float[]
    x->resize(1)
    y = const x
    x[0]&& << 1.0
    test x[0]&& // mutable pointer
    print y[0]

