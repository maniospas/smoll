import "std/core/builtinsext.s"
import "std/core/error.s"

def main()
    print "hello world"
    try print 2*3-20
    print cstr compiler::catch()