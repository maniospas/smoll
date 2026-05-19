import "std/core.s"

def main()
    li = ref mut float[]
    li = li.alloc 10
    li[0] = 1.0

    li.resize 20
    print li[0]