import std.core
import std.io

def main()
    CLI   = edit console()
    CHARS = mut arena alloc KB 4
    f     = mut file::open str "README.md" # str is redundant here but demonstrates proper string conversions
    for line in f: continue
    del f
    print str(status CHARS from 0)
