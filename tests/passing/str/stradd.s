import std.core

def main()
    CLI = edit console()
    CHARS = edit arena alloc 10
    s1 = copy 123
    s2 = copy 456
    s3 = s1+s2
    result = s3+copy(78)+copy(9)
    print result
