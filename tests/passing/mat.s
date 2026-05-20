import "std/core.s"
import "std/sci.s"

def main()
    allocator = new() # allocate to new memory whenever needed

    a = mat args[
        1.0, 0.0, 2.0,
        0.0, 3.0, 1.0
    ].any 2

    x = vec args[1.0, 2.0, 3.0]
    print "a*x"
    print a*x

    u = vec args[1.0, 2.0]
    print "u*a"
    print u*a

    b = mat args[
        1.0, 2.0,
        3.0, 4.0,
        5.0, 6.0
    ].any 3

    print "a*b"
    print a*b


