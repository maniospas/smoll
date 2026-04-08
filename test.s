import "std/core.s"
import "std/array.s"

def main()
    buf = mut id[]->alloc(3)
    buf[2] << 1
    buf[2].>> last buf->resize(2)
    print buf[1]. // prints 1

    