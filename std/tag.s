import "std/core.s"
import "std/unsafe.s" as unsafe


def unsafe_match(mut any ptr obj, cstr name, any ptr type)
    found = obj.compiler::unsafe_deref cstr[]
    if found!=name fail "does not match"
    return unsafe_mut obj.compiler::unsafe_attach_type(type)

def unpack(cstr type_name)
    CHARS = edit arena char[].alloc 1024
    copy "("
    copy type_name
    copy "::name,"
    copy type_name
    copy "[].unsafe_ptr)"
    return CHARS.buf

def new(cstr obj)
    if 0==len str obj fail "empty input name"
    CHARS = edit arena char[].alloc 1024
    copy "unsafe::alloc(compiler::size "
    copy obj
    copy ").compiler::unsafe_copy "
    copy obj
    return CHARS.buf

def match(cstr obj, cstr type_name)
    CHARS = edit arena char[].alloc 1024
    copy "unsafe_match("
    copy obj
    copy ","
    copy type_name
    copy "::name,"
    copy type_name
    copy "[].unsafe_ptr)"
    return CHARS.buf
