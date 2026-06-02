import "std/core.s"

def main()
    CLI = console()
    buf1 = ref mut float[]
    buf1.alloc 20
    buf1.resize 10

    buf2 = buf1
    # buf2.resize(10) # would create an error
    buf2[0] = 1.0

    print len buf1
    print len buf2
    print buf1[0]

