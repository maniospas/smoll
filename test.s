import "std/std.s"

def main()
    f = io::read "README.md"
    mem = array::alloc KB 4  # read in at most 4 KB chunks (mut char[] is assumed as the buffer type) 
    while try line = io::line(mem,f)
        print("|", "")
        print(line, "")
    print ""
    del f
    print "THE END"
