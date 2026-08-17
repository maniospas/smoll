import "std/core.s"

def main()
    CLI = edit console()
    CHARS = edit arena alloc 10
    s1 = copy "123"
    s2 = copy 456
    s3 = copy "789"
    if not try print s1+s2+s3
        print "out of space"
