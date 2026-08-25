import std.core
import "std/scope.s"

def test()
    x = mut 0
    for i in range of 10
        x = x+reuse i
    for i in range of 10
        x = x+reuse i
    return x

def main()
    CLI = edit console()
    r = test()
    print r
