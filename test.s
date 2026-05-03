import "std/core.s"

def test()
    mem = list ref mut char[]
    s1 = mem.copy "123"
    s2 = mem.copy "456"
    print "returning"
    return (s1,s2)
    

def main()
    s = test()
    print s.s1
    print s.s2
    print "the end"