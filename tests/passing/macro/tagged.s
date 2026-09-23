import std.core
import std.tag
import compiler::deref

def pair(mut float x, mut float y)
    return class (x, y)

def main(on CLI)
    CHARS = edit arena alloc 1024
    obj = mut macro<alloc> (compiler::varname CHARS, compiler::varname pair(local mut 1.0,local mut 2.0))
    if try p = mut macro<match> (compiler::varname obj, pair::name)
        p.x = 3.0
        print deref p.x
        print deref p.y
