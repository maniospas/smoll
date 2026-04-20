import "std/std.s"

def main()
    f = io::read "README.md"
    mem = array::alloc KB 4
    while try line = mem->io::line f
        print("|", "")
        print(line, "")
    print "\nTHE END"
