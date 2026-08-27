import std.core
import std.io

def main()
    if dir::is_file "tmp.txt"
        dir::remove "tmp.txt"
    f = edit file::write "tmp.txt"
    f.file::print "hello world"
    