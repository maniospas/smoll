import std.core
import std.io as io

def main(on CLI)
    dir = mut io::dir::open "./std"
    while try entry=io::dir::entry dir
        print entry
    