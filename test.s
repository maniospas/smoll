local import "std/core.s"

def point()
    x = mut 0
    y = mut 0
    return (x,y)

def test(mut point[] ps)
    return len ps

def test(int[]|float[] arr)
    return arr[0]<arr[1]

def main()
    x = mut float[]
    x = x.resize 10
    print(10==10)
    print test x
    print test resize(mut point[], 2)
