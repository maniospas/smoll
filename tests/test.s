import "std/core.s"
import "std/io.s"::file as file

def main()
    x = (mut nat[]).alloc 4
    x[0] = 1
    x.resize 10
    print x[0]
    print len x