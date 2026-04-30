import "std/core.s"
import "builtins" as builtins

def test(char t)
    print t

def main()
    print 1
    mem = list mut char[]
    s1 = mem.copy "123.12"
    s2 = mem.copy "123.12"

    #print float s1
    print float s2
    print len mem.buffer
    