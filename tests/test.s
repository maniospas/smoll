import "std/core.s"
import "std/tag.s"

def pair(float x, float y)
    return class ("pair", x, y)

def main()
    CLI = edit console()
    obj = mut macro<new> compiler::varname pair(1.0,2.0)
    if try p = mut macro<match> (compiler::varname obj, pair::name)
        p.x = 3.0
        print compiler::deref p.x
        print compiler::deref p.y
