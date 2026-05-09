import "std/core.s"
import "std/io.s" as io

def main()
    args = io::process::args()
    print args[0]
    print io::process::osname()
