import std.core
import std.test

def select(cstr operation)
    if operation=="sub": return (type sub<nat,nat> , 5)
    if operation=="add": return (type add<nat,nat> , 5)

def OP = compt select "sub"

def main(on CLI)
    assert(3==OP.compiler::call 2, "properly called the compile-time determined functor")
