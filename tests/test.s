import "std/core.s"
import "std/tag.s"

def pair(float x, float y)
    return class (x, y)

def recursive(cstr test)
    CHARS = edit arena char[].alloc 100
    copy "macro<recursive> (\""
    copy test
    copy "\")"
    return CHARS.buf

def main()
    #macro<recursive> "test"

    CLI = edit console()
    obj = mut macro<new> compiler::varname pair(1.0,2.0)
    if try p = mut macro<match> (compiler::varname obj, pair::name)
        p.x = 3.0
        print compiler::deref p.x
        print compiler::deref p.y
