import std.core.builtinsext
import std.core.error

def main(on CLI)
    print "hello world"
    try print 2*3-20
    print cstr compiler::last_error()