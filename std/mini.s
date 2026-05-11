local import "builtins"
local import "std/core/numbers.s"
local import "std/core/string.s" as string

def nat16(nat x)
    doc "convert unsigned number to 16 bits"
    doc "The conversion checks whether the previous value fits in the new one."
    doc "If it does not, this operation can fail."
    if x>65535 fail "'nat' value too large to pack in 'nat16'"
    {builtins::nat16 value = x;}
    return value

def nat32(nat x)
    doc "convert unsigned number to 32 bits"
    doc "The conversion checks whether the previous value fits in the new one."
    doc "If it does not, this operation can fail."
    if x>4294967295 fail "'nat' value too large to pack in 'nat32'"
    {builtins::nat32 value = x;}
    return value
    
def nat(nat32 x)
    doc "retrieved unsigned number from 32 bits"
    {builtins::nat value = x;}
    return value

def nat(nat16 x)
    doc "retrieved unsigned number from 16 bits"
    {builtins::nat value = x;}
    return value

def str(const string::str s)
    doc "create a compact str"
    doc "The created str variation should be used only for storng and"
    doc "retrieving data with 'unpack' for memory efficiency."
    unsafe_ptr = s.unsafe_ptr
    pos = nat16 s.dat.pos
    length = nat16 s.dat.length
    return class(unsafe_ptr, pos, length)

def str(const cstr s)
    doc "create a compact str"
    doc "The created str variation should be used only for storng and"
    doc "retrieving data with 'unpack' for memory efficiency."
    return str string::str s

def unpack(const str m)
    doc "unpack a compact str"
    doc "The created compact str is unpacked into its 'nat'-using representation"
    doc "that is more efficient for computations in 64-bit architectures."
    return string::str(m.unsafe_ptr, nat m.pos, nat m.length)