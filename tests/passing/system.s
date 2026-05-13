import "std/core.s"
import "std/io.s" as io

def main()
    buf = mut alloc 2 # exactly the limit to test extreme conditions
    s = copy(buf, mut 0, str "ls")
    io::process::system s
