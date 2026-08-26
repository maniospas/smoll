import std.core
import std.io as io

def main()
    f = edit io::file::write "tmp.txt"
    f.io::file::print "hello world"
    