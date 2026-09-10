import std.core
import std.tag
import compiler::varname as @
import compiler::deref

def pair(mut float x, mut float y)
    return class (x, y)

def main()
    CLI = edit console()
    CHARS = edit arena alloc 1024
    obj = mut macro<alloc> (@CHARS, @pair(local mut 1.0,local mut 2.0))
    if try p = mut macro<match> (@obj, pair::name)
        p.x = 3.0
        print deref p.x
        print deref p.y
