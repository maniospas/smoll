import std.core

def main()
    CLI = edit console()
    buf1 = ref float[]
    buf1.alloc 10
    buf1.resize 20

    buf2 = mut local buf1
    buf2[0] = 1.0

    print len buf1
    print len buf2
    print buf1[0]

