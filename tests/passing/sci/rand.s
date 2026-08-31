import std.core
import std.test
import std.rand as rand

def main()
    CLI = edit console()
    rnd = mut rand::Rand()
    r1 = rand::next rnd
    r2 = rand::next rnd
    
    assert(r1!=0.0, "rand starts from non-zero state (this may fail but with probability 0)")
    assert(r1!=r2, "rand produces different numbers (this may fail but with probability 0)")