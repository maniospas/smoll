import "std/core.s"
import "std/io.s" as io
import "std/io.s"::dir::core as core

def main()
    core::print "TEEEEE"
    dir = mut io::dir::read("./std")
    buf = alloc 128
    while try entry=buf.io::dir::entry dir
        print entry
    