import "std/core.s"
import "std/array.s"

def always_fail()
    fail "failed!"
    print "never reached"

def main()
    if not try always_fail()
        print "failed successfully"