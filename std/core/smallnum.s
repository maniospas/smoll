local import "builtins"
local import "std/core/numbers.s"
local import "std/core/string.s"

def nat16(nat x)
    if x>65535 fail "'nat' value too large to pack in 'nat16'"
    {builtins::nat16 value = x;}
    return value

def nat32(nat x)
    if x>4294967295 fail "'nat' value too large to pack in 'nat32'"
    {builtins::nat32 value = x;}
    return value
    
def nat(nat32 x)
    {builtins::nat value = x;}
    return value

def nat(nat16 x)
    {builtins::nat value = x;}
    return value

def msg(const str s)
    unsafe_ptr = s.unsafe_ptr
    pos = nat16 s.dat.pos
    length = nat16 s.dat.length
    return class(unsafe_ptr, pos, length)

def msg(const cstr s)
    return msg str s

def str(const msg m)
    return str(m.unsafe_ptr, nat m.pos, nat m.length)