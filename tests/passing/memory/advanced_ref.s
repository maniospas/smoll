import std.core

def test()
    mem = ref list char[]
    mem.buf.resize(100)
    s1 = mem.copy "123"
    s2 = mem.copy "456"
    return (s1,s2)
    
def main(on CLI)
    s = test()
    print s.s1
    print s.s2
