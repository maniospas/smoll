import "std/core.s"

def main()
    CLI = console()
    CHARS = circular char[].alloc 80
    s1 = "hello world!"
    s2 = "hello world too!"
    s3 = "hello world two!"
    s = s1+"\n"+s2+"\n"+s3
    print s