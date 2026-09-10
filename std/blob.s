local import std.core

def unsafe_blob(any& unsafe_ptr, 1|2|4|8|16|32|64 size)
    return class compiler::args()

def blob(1|2|4|8|16|32|64 size)
    unsafe_ptr = compiler::ptr()
    return unsafe_blob(unsafe_ptr, size)

def as(unsafe_blob b, char[] _ret)
    ret = unsafe_mut _ret
    if ret.unsafe_size!=0 or exists ret.unsafe_ptr
        fail "cannot cast a blob onto an already allocated array"
    ret.unsafe_align = nat32 1
    ret.unsafe_offset = nat32 0
    ret.unsafe_size = compiler::value b.size
    ret.unsafe_ptr = unsafe_mut b.unsafe_ptr.compiler::unsafe_attach_type(ret.unsafe_ptr)&
    return const ret

def find_compatible_size(nat value)
    CHARS = edit arena alloc 8
    copy "type "
    if value>=64 copy 64
    else if value>=32 copy 32
    else if value>=16 copy 16
    else if value>=8 copy 8
    else if value>=4 copy 4
    else if value>=2 copy 2
    else if value>=1 copy 1
    else copy 0
    return CHARS.buf

def blob(cstr variable)
    CHARS = edit arena alloc 1024
    copy "unsafe_blob("
    copy variable
    copy ", macro<find_compatible_size>(compiler::size compiler::deref "
    copy variable
    copy "))"
    return CHARS.buf