import "std/std.s"
import "std/array.s"

def main()
    li = list mut float[]
    li->push() << 0.1
    li->push() << 0.1
    li->push() << 0.1
    print(len li.buffer, " buffer capacity\n")

    print li[0]
    print li[1]

    li[1] = 0.2
    print li[1]

    print li[2]

