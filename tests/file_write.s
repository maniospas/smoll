import "std/core.s"
import "std/io.s" as io

def main()
    f = io::write "tmp.txt"
    f.print "hello world"
    