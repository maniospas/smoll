import "std/core.s"

def test()
    mem = ref list mut char[]
    mem.buf.resize(100)
    s1 = mem.copy "123"
    s2 = mem.copy "456"
    return (s1,s2)
    
def main()
    CLI = console()
    s = test()
    print s.s1
    print s.s2