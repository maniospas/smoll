
import std.core

def test(nat number)
    allocator = mut bucket()
    if number>1
        s = allocator.copy "123"
    else
        s = allocator.copy "345"
    return (s, allocator)

def main()
    CLI = edit console()
    print test(1).s
