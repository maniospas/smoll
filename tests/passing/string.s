import "std/core.s"
import "std/io.s"

def main()
    CLI = console()
    CHARS = arena alloc KB 4
    f = file:open str "README.md" # str is redundant here but demonstrates proper string conversions
    mem = alloc KB 4  # read in at most 4 KB chunks (mut char[] is assumed as the buffer type)
    pos = mut 0
    for line in f continue
    del f
    print str(status CHARS from 0)
