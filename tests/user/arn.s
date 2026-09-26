import std.core

def test1(edit char_arena arn)
    gc arn
    arn.slice(5)

def test2(edit char_arena CHARS)
    gc CHARS
    return "test"+"2"

def test3(edit char_arena CHARS)
    return copy test2(CHARS)

def test4(edit char_arena arn)
    gc arn
    ret = [test3 arn]
    compiler::unsafe_declare_deep_copy_only()
    return ret 

def test5(on CLI, edit char_arena arn)
    gc arn
    x = test4 arn
    z = x[0]&
    print compiler::deref z#[0]
    print nn "consumed at end of test5: "
    print length arn

def main()
    CLI = edit console()
    arn = edit arena alloc 1024
    test1 arn
    print arn.pos
    print nn "consumed after test1: "
    test5 arn
    print nn "consumed after test5: "
