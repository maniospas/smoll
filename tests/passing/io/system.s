import std.core
import std.io as io

def main(on CLI)
    buf = mut char[].alloc 2 # exactly the limit to test extreme conditions
    s = copy(arena buf, "ls")
    io::process::system s
