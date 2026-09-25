import std.core
import std.test
import std.rand

def main(CLI, edit RAND)
    r1 = rand()
    r2 = rand()
    assert(r1 >= 0.0, "rand is >= 0")
    assert(r1 < 1.0, "rand is < 1")
    assert(r2 >= 0.0, "second rand is >= 0")
    assert(r2 < 1.0, "second rand is < 1")
    assert(r1 != r2, "rand produces different numbers (may fail with extremely small probability)")
    n1 = rand type "nat"
    n2 = rand type "nat"
    assert(n1 != n2, "rand_nat produces different numbers (may fail with extremely small probability)")
    b1 = rand of 6
    b2 = rand of 6
    b3 = rand of 6
    assert(b1 < 6, "bounded rand_nat is below max")
    assert(b2 < 6, "bounded rand_nat is below max")
    assert(b3 < 6, "bounded rand_nat is below max")
    one1 = rand of 1
    one2 = rand of 1
    assert(one1 == 0, "rand of 1 always returns 0")
    assert(one2 == 0, "rand of 1 always returns 0")
    c0 = mut 0
    c1 = mut 0
    c2 = mut 0
    c3 = mut 0

    for i in range of 10000
        value = rand of 4
        if value == 0
            c0 = c0 + 1
        if value == 1
            c1 = c1 + 1
        if value == 2
            c2 = c2 + 1
        if value == 3
            c3 = c3 + 1
    assert(c0 > 0, "bounded rand_nat generates 0")
    assert(c1 > 0, "bounded rand_nat generates 1")
    assert(c2 > 0, "bounded rand_nat generates 2")
    assert(c3 > 0, "bounded rand_nat generates 3")
