import std.core
import std.ptrpeek
import std.test

def point(nat x, nat y)
    return class compiler::args()

def main()  
    CLI = edit console()
    a = last [point(0,0)]
    b = last [point(1,1)]
    debug::print a
    debug::print b
    assert(a.x+b.x==1, "added two pointer contents without deref")
    assert(b.x-a.x==1, "substracted two pointer contents without deref")
    assert(b.x-0==1, "substracted number from pointer without deref")
    assert(b.x*0==0, "multiplied number and pointer without deref")
    assert(b.x/1==1, "divided pointer by number without deref")
