import "std/array.s"

def print(any[] buffer)
    print("buffer: ", "")
    print(buffer.size, " elements, ")
    print(buffer.align*buffer.size, " bytes\n")

def anonymize(any[] buffer)
    return buffer

def test(float[] buffer)
    print "float[] compatible"

def main()
    x = mut float[]()
    expect(x, 10)
    first = get(x,0)
    first := float 10
    value = deref x.ptr
    print(x)
    print(deref get(x,0))
    print(deref get(x,1))