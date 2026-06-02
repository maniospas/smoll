import "std/core/builtinsext.s"
import "std/core/error.s"

def main()
    CLI = console()
    print "hello world"
    try print 2*3-20
    try print cstr compiler:catch()