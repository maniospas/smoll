import std.core
import "std/io.s" as io

def main()
    CLI = edit console()
    dir = mut io::dir::open "./std"
    while try entry=io::dir::entry dir
        print entry
    