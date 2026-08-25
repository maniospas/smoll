import std.core

def test(arena<char::tag>->str creator)
    CHARS = edit arena char[].alloc 128
    ret = str creator.compiler::call CHARS
    # the next assertion is REQUIRED to inject a 
    # runtime assertion that the compiler can reason 
    # about (otherwise it would complain that the
    # relationship between CHARS and ret is unknown)
    # compiler::assert_eq(ret.unsafe_ptr, CHARS.buf.unsafe_ptr) # SHOULD FAIL when this line is commented out
    return ret

def string_creator(arena<char::tag> _CHARS)
    CHARS = unsafe_mut _CHARS
    strings = [copy "created"]
    unsafe_return strings[0]

def main()
    CLI = console()
    print test(type string_creator)
