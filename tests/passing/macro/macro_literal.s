import std.core
import "std/tag.s"
import compiler::varname as vrn

def test1(nat x, nat y)
    return x+y+1
def test2(nat x, nat y)
    return x+y+2

def to_functor(cstr functor_name)
    CHARS = edit arena char[].alloc 1024
    copy "type "
    copy functor_name
    return CHARS.buf

def main()
    CLI = edit console()
    for x is "test1"|"test2"
        print compiler::call(macro<to_functor> x, 1,1)