import "std/core.s"
import "std/io.s" as io

def main()
    buf = mut alloc 2 # exactly the limit, which prevents unsafe_temporary_cstr from trying for the zero-copy approach
    s = copy(buf, mut 0, str "ls")
    io::process::system s
