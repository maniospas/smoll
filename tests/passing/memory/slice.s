import "std/core.s"

def main()
    CLI = edit console()
    xall = edit arena nat[].alloc 10
    x1 = mut xall.slice 3
    x2 = mut xall.slice 3
    x3 = mut xall.slice 3
    x1[0] = 0
    x1[1] = 1
    x1[2] = 2
    x2[0] = 3
    x2[1] = 4
    x2[2] = 5
    x3[0] = 6
    x3[1] = 7
    x3[2] = 8

    print x1[2]
    print x2[2]
    print x3[2]