import "std/std.s"

def main()
    f = io::read "README.md"
    mem = array::alloc(mut char[], 1024) // 1024-byte chunks
    while try line = io::line(mem, f)
        print("|", "")
        print(line, "")
    print ""
