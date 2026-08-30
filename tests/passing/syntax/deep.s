import std.core
import std.scope

def test1(edit arena<char::tag> arn)
    reuse arn
    arn.slice(5)

def test2(edit arena<char::tag> CHARS)
    reuse CHARS
    return "test"+"2"

def test3(edit arena<char::tag> CHARS)
    return copy test2(CHARS)

def test4(edit arena<char::tag> arn)
    reuse arn
    ret = [test3 arn]
    compiler::unsafe_declare_deep_copy_only()
    return ret 

def test5(effect edit console CLI, edit arena<char::tag> arn)
    reuse arn
    x = test4 arn
    z = x[0]&
    print compiler::deref z#[0]
    print nn "consumed at end of test5: "
    print len arn

def main()
    CLI = edit console()
    arn = edit arena alloc 1024
    test1 arn
    print arn.pos
    print nn "consumed after test1: "
    test5 arn
    print nn "consumed after test5: "
