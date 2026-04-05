import "std/core.s"
import "std/unsafe.s" as unsafe

def expect(mut any[] buffer, id elements)
    buffer.ptr = unsafe::alloc(buffer.align)

def print(mut any[] buffer)
    print("buffer size", " ")
    print(buffer.size)

def main()
    x = mut float[]()
    expect(x, 10)
    print("hi")