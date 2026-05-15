import "std/core.s"
import "std/io.s" as io

def main()
    f = io:file:write "tmp.txt"
    f.print "hello world"
    