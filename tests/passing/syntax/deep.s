import std.core
import std.scope
import std.test

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
    assert("test2"==compiler::deref z, "correct operations on arena")
    assert(10==len arn, "proper consumption before test ends")

def main()
    CLI = edit console()
    arn = edit arena alloc 1024
    test1 arn
    assert(arn.pos==0, "no consumption after reuse")
    test5 arn
    assert(arn.pos==0, "no consumption after complicated reuse")
