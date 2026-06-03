local import "std/core.s"

def vec(float ptr unsafe_ptr, nat pos, nat length)
    doc "vector type declaration"
    doc "Warning: directly calling this constructor without safety checks is unsafe."
    return mut class(unsafe_mut unsafe_ptr, pos, length)

def mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride)
    doc "matrix type declaration"
    doc "Warning: directly calling this constructor without safety checks is unsafe."
    return mut class(unsafe_mut unsafe_ptr, pos, rows, cols, stride)

def sparse_element(nat row, nat col, float value)
def coo(sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz)
    doc "coo sparse matrix type declaration"
    doc "Warning: directly calling this constructor without safety checks is unsafe."
    return mut class(unsafe_mut unsafe_ptr, rows, cols, nnz)
