local import "std/core.s"
import "std/sci/vec.s"
import "std/sci/mat.s"
local import "std/sci/unsafe.s"

def rows(coo m)
    doc "number of rows"
    return m.rows

def cols(coo m)
    doc "number of columns"
    return m.cols

def nnz(coo m)
    doc "number of stored (non-zero) entries"
    return m.nnz

def coo(effect edit new FLOATS, nat rows, nat cols, nat nnz)
    doc "allocate a sparse matrix on a fresh buffer of sparse_elements"
    buf = sparse_element[].alloc nnz
    return coo(buf.unsafe_ptr, rows, cols, nnz)

def coo(sparse_element[] elements, nat rows, nat cols)  
    return coo(elements.unsafe_ptr, rows, cols, len elements)

def get(coo m, nat k)
    doc "get the k-th sparse element"
    if k>=m.nnz fail "index out of bounds"
    return m.unsafe_ptr+k*24

def mutget(edit coo m, nat k)
    doc "mutable reference to the k-th sparse element"
    if k>=m.nnz fail "index out of bounds"
    return unsafe_mut m.unsafe_ptr+k*24

def mul(effect edit vec_allocator FLOATS, coo m, vec v)
    doc "sparse matrix*vector multiplication"
    if m.cols!=v.length fail "matrix columns must match vector length"
    result = vec m.rows
    it_k = range m.nnz
    while try k=next it_k
        e = m[k]
        result[e.row] = result[e.row]+e.value*v[e.col]
    return result

def mul(effect edit vec_allocator FLOATS, vec v, coo m)
    doc "vector*sparse matrix multiplication"
    if v.length!=m.rows fail "vector length must match matrix rows"
    result = vec m.cols
    it_k = range m.nnz
    while try k=next it_k
        e = m[k]
        result[e.col] = result[e.col]+v[e.row]*e.value
    return result

def mul(effect edit vec_allocator FLOATS, coo m1, mat m2)
    doc "sparse*dense matrix multiplication"
    if m1.cols!=m2.rows fail "inner dimensions must agree"
    result = mat(m1.rows, m2.cols)
    it_k = range m1.nnz
    while try k=next it_k
        e = m1[k]
        it_j = range m2.cols
        while try j=next it_j
            result[e.row,j] = result[e.row,j]+e.value*m2[e.col,j]
    return result

def todense(effect edit vec_allocator FLOATS, coo m)
    doc "convert to dense mat"
    result = mat(m.rows, m.cols)
    it_k = range m.nnz
    while try k=next it_k
        e = m[k]
        result[e.row, e.col] = e.value
    return result

def print(effect console CLI, coo m, cstr|blank endl)
    doc "print sparse matrix as coordinate list: (i, j): v"
    if endl is blank
        endl = "\n"
    it_k = range m.nnz
    while try k=next it_k
        e = m[k]
        print ("(", "")
        print (e.row, "")
        print (", ", "")
        print (e.col, "")
        print ("): ", "")
        print (e.value, "")
        print ("", endl)

def sum(effect edit vec_allocator FLOATS, coo m, "row")
    doc "sum of each row; result[i] = sum of all stored values in row i"
    result = vec m.rows
    it_k = range m.nnz
    while try k=next it_k
        e = m[k]
        result[e.row] = result[e.row]+e.value
    return result

def sum(effect edit vec_allocator FLOATS, coo m, "col")
    doc "sum of each column; result[j] = sum of all stored values in column j"
    result = vec m.cols
    it_k = range m.nnz
    while try k=next it_k
        e = m[k]
        result[e.col] = result[e.col]+e.value
    return result

def matrix = mat|coo