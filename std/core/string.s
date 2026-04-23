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

def len(str s)
    return s.length

def copy(char[] buf, mut nat pos, str other)
    next_pos = pos+len other
    if next_pos>= len buf
        fail "string buffer out of memory"
    {memcpy(((char*)buf__unsafe_ptr)+pos, ((char*)other__buf__unsafe_ptr)+other__pos, other__length*sizeof(char));}
    prev_pos = const pos
    pos = next_pos
    return str(buf, prev_pos, other.length, other.first)

def copy(char[] buf, mut nat pos, cstr other)
    return copy(buf, pos, str other)

def print(str s, cstr|blank endl)
    if endl is blank
        endl = "\n"
    {printf("%.*s%s", (int)s__length, s__pos+(const char*)s__buf__unsafe_ptr, endl);}

local def charlist()
    return list mut char[]

def copy(charlist li, str other)
    prev_prev_length = mut li.length
    prev_length = li.length + len other
    if prev_length >= len li.buffer
        li.buffer = li.buffer.resize(prev_length+prev_length/2+1)
    li.length = prev_length
    return copy(li.buffer, prev_prev_length, other)


def copy(charlist li, cstr other)
    return li.copy str other
