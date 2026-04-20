local import "std/core.s"

def str(const char[] buf, nat pos, nat length, char first_character)
    return (buf, pos, length, first_character)

def print(str s, cstr|blank endl)
    if endl is blank
        endl = "\n"
    {printf("%.*s%s", (int)s__length, s__pos+(const char*)s__buf__unsafe_ptr, endl);}
