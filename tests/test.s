
import std.core
import std.test

def pair(nat x, nat y)
    return compiler::args()

def data(nat a, nat b, nat c, nat d)
    return class(
        assigned min = mut pair(a,b),
        assigned max = mut pair(c,d)
    )

def zero(edit data dat)
    dat.min = (0,0)
    dat.max = (0,0)


def main()
    CLI = edit console()
    dat = edit data(1,2,3,4)
    assert(dat.min.x==1, "correctly stored value")
    zero dat
    assert(dat.min.x==0, "correctly modified value")
    
    