import "std/core.s"
import "std/array.s"

def test1()
    x = mut(float[])->alloc(1)
    x[0] << 1.0
    y = float[]
    return x

def test2(mut float[] x)
    x->resize(2)->last() << 2.0

def main()
    x = test1()
    test2(x)
    print x[0]+x[1]
