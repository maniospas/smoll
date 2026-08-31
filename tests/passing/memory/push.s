import std.core
import std.test

def main()
    CLI = edit console()
    li = ref list float[]
    (at alloc li) = 0.1
    (at alloc li) = 0.1
    (at alloc li) = 0.1

    li[1] = 0.2
    assert(li[0]==0.1, "retrieved list contents")
    assert(li[1]==0.2, "modified list contents")
    