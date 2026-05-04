import "std/core.s"
import "std/io.s"::dir as dir

def main()
    dir = mut dir::read("./std")
    buf = alloc 128
    while try entry=buf.dir::entry dir
        print entry
    