import "std/core.s"
import "std/io.s" as io

def main()
    dir = mut io::dir("./std")
    buf = alloc 128
    while try entry=buf.io::entry dir
        print entry
    