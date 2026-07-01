import "std/core.s"

def test(arena<char::name>->str creator)
    CHARS = edit arena char[].alloc 128
    ret = str creator.compiler::call CHARS
    # the next assertion is REQUIRED to inject a 
    # runtime assertion that the compiler can reason 
    # about (otherwise it would complain that the
    # relationship between CHARS and ret is unknown)
    compiler::assert_eq(ret.unsafe_ptr, CHARS.buf.unsafe_ptr)
    return ret

def string_creator(arena<char::name> _CHARS)
    CHARS = unsafe_mut _CHARS
    strings = [copy "created"]
    unsafe_return strings[0]

def main()
    CLI = console()
    print test(type string_creator)
