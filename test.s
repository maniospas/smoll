local import "std/core.s"

def test(int[]|float[] arr)
    return arr[0]<arr[1]

def main()
    x = mut float[]
    x = x.resize(10)
    print test x