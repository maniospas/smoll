import "std/core.s"
def ^ = compiler::deref

def pair(cstr x, cstr y)
    return class(x,y)

def pp(pair a, pair b)
    return class(a,b)

def main()
    CLI = edit console()
    pairs = edit pp[].alloc 2
    pairs[0] = pp(pair("1","1"), pair("2","2"))
    print ^pairs[0]&&.a.x
    print pairs.a.x[0]