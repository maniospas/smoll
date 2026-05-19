import "std/core.s"

def main()
    li = ref list mut float[]
    (push li) << 0.1
    (push li) << 0.1
    (push li) << 0.1

    li[1] = 0.2
    print li[0]
    print li[1]