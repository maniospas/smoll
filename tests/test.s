import "std/core.s"

def main()
    try x = alloc KB 4  # buffer of chars
    try x[0] = char "a" # still needs a try for buffer elements - though checks can be optimized away
    try print x[0]
    print "this must run at all costs"
    debug:nocatch()     # error if without 'try' on all PREVIOUS calls that could fail
    print x[10000]      # allowed to fail now
    print "this will never run due to out of bounds error"