import "std/std.s"
import "std/array.s"

def main()
    li = list mut float[]
    0.1 >> push li
    0.1 >> push li
    0.1 >> push li
    print(len li.buffer, " buffer capacity\n")

    li[1] = 0.2
    print li[0]
    print li[1]

