import "std/core.s"

def test(char_arena->str creator)
    CHARS = arena char[].alloc 128
    ret = creator.compiler:call CHARS
    return ret

def string_creator(char_arena _CHARS)
    CHARS = unsafe_mut _CHARS
    strings = [copy "created"]
    return strings[0]

def main()
    CLI = console()
    print test(type string_creator)

# def fp(float ptr x)
#     return x
    
# def main()
#     CLI = console()
#     x = edit fp[].alloc 4
#     x[0] = [1.0]&