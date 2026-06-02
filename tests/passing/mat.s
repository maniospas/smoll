import "std/core.s"
import "std/sci.s"

def main()
    CLI = console()
    allocator = new() # allocate to new memory whenever needed

    a = mat [
        1.0, 0.0, 2.0,
        0.0, 3.0, 1.0
    ].any 2

    a[0,0]=1.0

    x = vec [1.0, 2.0, 3.0]
    print nn "a*x"
    print a*x

    u = vec [1.0, 2.0]
    print nn "u*a"
    print u*a

    b = mat [
        1.0, 2.0,
        3.0, 4.0,
        5.0, 6.0
    ].any 3

    print "a*b"
    print a*b


