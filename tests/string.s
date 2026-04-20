import "std/core.s"

def main()
    f = io::read "README.md"
    mem = array::alloc KB 4  # read in at most 4 KB chunks (mut char[] is assumed as the buffer type)
    pos = mut 0
    while try line = io::line(mem,pos,f)
        continue
    del f
    print str(mem,0,pos)
