local import "std/core.s"

def vec(float ptr unsafe_ptr, nat pos, nat length)
    return class(unsafe_ptr, pos, length)

def mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride)
    return class(unsafe_ptr, pos, rows, cols, stride)
