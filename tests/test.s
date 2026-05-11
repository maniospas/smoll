import "std/core.s"

def test()
    buf = bufpos alloc KB 4
    s = buf.copy str "test"
    return s

def main()
    s = test()
    print s