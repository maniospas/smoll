import "std/core.s"
import "std/array.s"

def test1()
    x = float[]->resize(1)
    x[0] << 1.0
    y = float[]
    return x

def test2(float[] x)
    x->resize(2)
    x[1] << 2.0


def main()
    x = test1()
    test2(x)
    print x[0].+x[1].+x[3].
