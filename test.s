import "std/core.s"

def main()
    buf1 = mut float[]
    buf1 = buf1->resize(10)

    buf2 = buf1
    buf2 = buf2->resize(10000)

    print len buf1
    print len buf2
    print buf1[5]

