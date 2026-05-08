import "std/core.s"
import "std/io.s" as io

def main()
    dir = mut io::dir::read("./std")
    buf = alloc 128
    while try entry=io::dir::entry dir
        print entry
    