import "std/core.s"

def test()
    mem = mut list char[]
    s1 = mem.copy "123"
    s2 = mem.copy "456"
    return (s1,s2)

def main()
    CLI = edit console()
    s = test()
    print s.s1
    print s.s2