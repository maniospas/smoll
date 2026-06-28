import "std/core.s"
import "std/io.s" as io

def main()
    CLI = edit console()
    buf = mut char[].alloc 2 # exactly the limit to test extreme conditions
    s = copy(arena buf, "ls")
    io:process::system s
