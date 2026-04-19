import "std/core.s"
import "std/array.s"

def test1()
    x = alloc(mut float[], 2)
    x[0] = 1.0
    x[1] = 2.0
    print x[1]
    defer
        print("going to deallocate of size: ", "")
        print len x
    return x

def test2() 
    t = test1()
    j = t
    k = alloc(mut float[], 3)
    return (t,j,k)

def main()
    t = test2()
    print(t.t[1])