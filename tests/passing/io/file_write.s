import std.core
import "std/io.s" as io

def main()
    f = edit io::file::write "tmp.txt"
    f.io::file::print "hello world"
    