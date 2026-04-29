import "std/core.s"
import "builtins" as builtins

def test(bool x)
    return x

def main()
    if 1<2
        print "test"

    mem = list mut char[]
    s1 = mem.copy "123.12"
    s2 = mem.copy "123.12"
    print float(mem.buffer,s1.dat)
    print float(mem.buffer,s2.dat)
    print len mem.buffer