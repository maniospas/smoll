import "std/core.s"

def main()
    CLI = console()
    li = list ref mut float[]
    (at alloc li) = 0.1
    (at alloc li) = 0.1
    (at alloc li) = 0.1

    li[1] = 0.2
    print li[0]
    print li[1]