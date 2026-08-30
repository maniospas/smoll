import std.core
import std.test

def point()
    return class (
        assigned x = mut 1,
        assigned y = mut 1
    )

def main()
    CLI = edit console()
    p = edit point()
    assert(p.x==1, "initialized class field")
    p.x = 0
    assert(p.x==0, "modified 'mut' field of 'edit' variable")
