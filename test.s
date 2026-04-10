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

def test3()
    x = test1()
    return x

def ff()
    return float[]

def main()
    //x = test3()
    //print x[0].
    test4()