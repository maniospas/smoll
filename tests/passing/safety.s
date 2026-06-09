import "std/core.s"

def test1(effect edit console CLI)
    x = mut alloc(float[], 2)
    x[0] = 1.0
    x[1] = 2.0
    print x[1]
    defer
        print("going to deallocate of size: ", "")
        print len x
    return x

def test2(effect edit console CLI) 
    t = test1()
    j = t
    k = mut alloc(float[], 3)
    return (t,j,k)

def main()
    CLI = edit console()
    t = test2()
    print(t.t[1])