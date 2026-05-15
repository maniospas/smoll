local import "builtins"
local import "std/core/numbers.s"
local import "std/core/array.s"
local import "std/core/string.s" as string

def nat16(nat x)
    doc "convert unsigned number to 16 bits"
    doc "The conversion checks whether the previous value fits in the new one."
    doc "If it does not, this operation can fail."
    if x>65535 fail "'nat' value too large to pack in 'nat16'"
    {builtins:nat16 value = x;}
    return value

def nat32(nat x)
    doc "convert unsigned number to 32 bits"
    doc "The conversion checks whether the previous value fits in the new one."
    doc "If it does not, this operation can fail."
    if x>4294967295 fail "'nat' value too large to pack in 'nat32'"
    {builtins:nat32 value = x;}
    return value
    
def nat(nat32 x)
    doc "retrieved unsigned number from 32 bits"
    {builtins:nat value = x;}
    return value

def nat(nat16 x)
    doc "retrieved unsigned number from 16 bits"
    {builtins:nat value = x;}
    return value

local def strdat(nat _pos, nat _length)
    pos = nat16 _pos
    length = nat16 _length
    return (pos,length)

def str(string:str s)
    doc "create a compact str"
    doc "The created str variation should be used only for storng and"
    doc "retrieving data with 'unpack' for memory efficiency."
    unsafe_ptr = s.unsafe_ptr
    dat = strdat(s.dat.pos, s.dat.length)
    return class(unsafe_ptr, dat)

def str(cstr s)
    doc "create a compact str"
    doc "The created str variation should be used only for storng and"
    doc "retrieving data with 'unpack' for memory efficiency."
    return str string:str s

def unpack(str m)
    doc "unpack a compact str"
    doc "The created compact str is unpacked into its 'nat'-using representation"
    doc "that is more efficient for computations in 64-bit architectures."
    return string:str(m.unsafe_ptr, nat m.dat.pos, nat m.dat.length)

def unpack(const char[] buf, strdat dat)
    pos = nat dat.pos
    length = nat dat.length
    if pos+length>len buf fail "string does not fit on buffer" 
    return string:str(buf.unsafe_ptr, pos, length)
