import "std/core.s"

def main()
    CLI = edit console()
    li = ref list float[]
    (at alloc li) = 0.1
    (at alloc li) = 0.1
    (at alloc li) = 0.1

    li[1] = 0.2
    print li[0]
    print li[1]