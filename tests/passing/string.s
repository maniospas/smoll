import "std/core.s"
import "std/io.s" as io

def main()
    f = io::file::read str "README.md" # str is redundant here but demonstrates proper string conversions
    mem = alloc KB 4  # read in at most 4 KB chunks (mut char[] is assumed as the buffer type)
    pos = mut 0
    while try line = io::file::line(mem,pos,f)
        continue
    del f
    print str(mem,0,pos)
