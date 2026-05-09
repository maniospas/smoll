import "std/core.s"

def main()
    x = (mut cstr[]).alloc KB 4
    x[0] = "test"
    x0 = x[0]&&
    print x0..