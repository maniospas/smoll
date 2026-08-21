import "std/core/builtinsext.s"
import "std/core/error.s"

def main()
    CLI = edit console()
    print "hello world"
    print 2*3-20 # SHOULD FAIL at runtime
