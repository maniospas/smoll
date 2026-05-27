local import "std/core.s"

def vec(float ptr unsafe_ptr, nat pos, nat length)
    return mut class(unsafe_mut unsafe_ptr, pos, length)

def mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride)
    return mut class(unsafe_mut unsafe_ptr, pos, rows, cols, stride)
