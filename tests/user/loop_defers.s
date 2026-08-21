import "std/core.s"

def test()
    z = edit nat[].alloc 10
    for i in range of 10
        z[5] = 5
        if i==5
            return z

def main()
    CLI = edit console()
    test()