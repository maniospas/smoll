import "std/core.s"
import "std/tag.s"

def ^ = compiler::varname|compiler::deref

def pair(float x, float y)
    return class (x, y)

def main()
    CLI = edit console()
    CHARS = edit arena alloc 1024
    obj = mut macro<alloc> (^CHARS, ^pair(1.0,2.0))
    if try p = mut macro<match> (^obj, pair::name)
        p.x = 3.0
        print ^p.x
        print ^p.y
