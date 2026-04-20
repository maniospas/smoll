local import "std/core.s"
local import "std/core/array.s"

def str(const char[] buf, nat pos, nat length, char first)
    return (buf, pos, length, first)

def str(const char[] buf, nat pos, nat length)
    if length!=0
        first = buf[pos]  # properly zero-initialized otherwise
    return str(buf, pos, length, first)

def str(cstr c)
    buf = const char[]  # const because we do not allow resizing operations
    {buf__unsafe_ptr = c;}
    {builtins::nat length = strlen(c);}
    {buf__unsafe_size = length+1;}  # account for null termination
    return str(buf,0,length)

def print(str s, cstr|blank endl)
    if endl is blank
        endl = "\n"
    {printf("%.*s%s", (int)s__length, s__pos+(const char*)s__buf__unsafe_ptr, endl);}
