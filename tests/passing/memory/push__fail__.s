import "std/core.s"

def main()
    CLI = edit console()
    li = mut list float[] # SHOULD FAIL when using mut instead of ref to manage lists
    (at alloc li) = 0.1
    (at alloc li) = 0.1
    (at alloc li) = 0.1

    li[1] = 0.2
    print li[0]
    print li[1]