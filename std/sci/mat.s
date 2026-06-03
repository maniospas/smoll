local import "std/core.s"
import "std/sci/vec.s"
local import "std/sci/unsafe.s"
local import "std/unsafe.s" as unsafe

def rows(mat m)
    doc "number of rows"
    return m.rows

def cols(mat m)
    doc "number of columns"
    return m.cols

def mat(effect edit new FLOATS, nat rows, nat cols, "dirty"|blank clear_policy)
    doc "matrix on a fresh buffer"
    buf = float[].alloc(rows*cols dirty)
    if clear_policy is blank
        buf.unsafe_ptr.unsafe:zero(0, 8*len buf)
    return mat(buf.unsafe_ptr, 0, rows, cols, cols)

def mat(effect edit float_arena FLOATS, nat rows, nat cols, "dirty"|blank clear_policy)
    doc "matrix on an existing vecpos"
    if FLOATS.buf.unsafe_align.nat()!=8 fail "can only place matrices on contiguous buffers"
    if FLOATS.buf.unsafe_offset.nat()!=0 fail "cannot place matrices on buffer offsets"
    if FLOATS.pos+rows*cols>len FLOATS.buf fail "matrix exceeds buffer limits"
    start = const FLOATS.pos
    FLOATS.pos = FLOATS.pos+rows*cols
    if clear_policy is blank
        FLOATS.buf.unsafe_ptr.unsafe:zero(8*start, 8*FLOATS.pos)
    return mat(FLOATS.buf.unsafe_ptr, start, rows, cols, cols)

def constmat(float[] buf, nat rows)
    doc "immutable matrix on an immutable float[] buffer"
    cols = len(buf)/rows
    if cols*rows!=len buf fail "buffer size not divisible by vector rows"
    return const mat(unsafe_mut buf, mut 0, rows, cols)

def mat(edit float[] buf, nat rows)
    doc "matrix on an existing float[] buffer"
    cols = len(buf)/rows
    if cols*rows!=len buf fail "buffer size not divisible by vector rows"
    return mat(buf, mut 0, rows, cols)

def mat(effect edit circular FLOATS, nat rows, nat cols, "dirty"|blank clear_policy)
    doc "matrix on a circular buffer"
    if FLOATS.buf.unsafe_align.nat()!=8 fail "can only place matrices on contiguous buffers"
    if FLOATS.buf.unsafe_offset.nat()!=0 fail "cannot place matrices on buffer offsets"
    if rows*cols>len FLOATS.buf fail "matrix exceeds buffer limits"
    start = mut FLOATS.pos
    FLOATS.pos = FLOATS.pos+rows*cols
    if FLOATS.pos>=FLOATS.length
        FLOATS.pos = rows*cols+0
        start = 0
    if clear_policy is blank
        FLOATS.buf.unsafe_ptr.unsafe:zero(8*start, 8*FLOATS.pos)
    return mat(FLOATS.buf.unsafe_ptr, start, rows, cols, cols)

def mutget(edit mat m, nat i, nat j)
    doc "mutable reference to matrix element (i,j)"
    if i>=m.rows fail "row out of bounds"
    if j>=m.cols fail "column out of bounds"
    return unsafe_mut m.unsafe_ptr+8*(m.pos+i*m.stride+j)

def get(mat m, nat i, nat j)
    doc "reference to matrix element (i,j)"
    if i>=m.rows fail "row out of bounds"
    if j>=m.cols fail "column out of bounds"
    return m.unsafe_ptr+8*(m.pos+i*m.stride+j)

def mat(vec v, "row"|"col" orientation)
    doc "view a vector as a matrix on the same memory"
    doc "A 'type \"row\"' or 'type \"col\"' marker is needed"
    doc "to indicate the new matrix's orientation."
    if orientation is "row"
        return mat(v.unsafe_ptr, v.pos, 1, v.length, v.length)
    if orientation is "col"
        # stride=1: consecutive elements of the column are adjacent
        return mat(v.unsafe_ptr, v.pos, v.length, 1, 1)

def vec(mat m)
    doc "view a matrix as a vector"
    return vec(m.unsafe_ptr, m.pos, m.rows*m.cols)

def mutvec(mat m)
    doc "view a matrix as a vector"
    return unsafe_mut vec(m.unsafe_ptr, m.pos, m.rows*m.cols)

def row(mat m, nat i)
    doc "view matrix row as a vector"
    if i>=m.rows fail "row out of bounds"
    return vec(m.unsafe_ptr, m.pos+i*m.stride, m.cols)

def mul(effect edit vec_allocator FLOATS, mat m, vec v)
    doc "matrix-vector multiplication"
    doc "Grabs an allocator for the result as an effect."
    if m.cols!=v.length fail "matrix columns must match vector length"
    result = vec m.rows
    it_i = range m.rows
    while try i=next it_i
        acc = mut 0.0
        it_j = range m.cols
        while try j=next it_j
            acc = acc+m[i,j]*v[j]
        result[i] = acc
    return result

def mul(effect edit vec_allocator FLOATS, vec v, mat m)
    doc "vector-matrix multiplication"
    doc "Grabs an allocator for the result as an effect."
    if v.length!=m.rows fail "vector length must match matrix rows"
    result = vec m.cols
    it_j = range m.cols
    while try j=next it_j
        acc = mut 0.0
        it_i = range m.rows
        while try i=next it_i
            acc = acc+v[i]*m[i,j]
        result[j] = acc
    return result

def mul(effect edit vec_allocator FLOATS, mat m1, mat m2)
    doc "matrix-matrix multiplication"
    doc "Grabs an allocator for the result as an effect."
    if m1.cols!=m2.rows fail "inner dimensions must agree"
    result = mat(m1.rows, m2.cols)
    it_i = range m1.rows
    while try i=next it_i
        it_j = range m2.cols
        while try j=next it_j
            acc = mut 0.0
            it_k = range m1.cols
            while try k=next it_k
                acc = acc+m1[i,k]*m2[k,j]
            result[i,j] = acc
    return result

def print(effect mut console CLI, mat m, cstr|blank endl)
    doc "print a matrix with aligned brackets"
    doc "single-row matrices stay on one line; taller ones get top/mid/bottom brackets"
    if endl is blank
        endl = "\n"
    it_i = range m.rows
    while try i=next it_i
        if m.rows==1  print ("[ ", "")
        if m.rows>1 and i==0 print ("⎡ ", "")
        if m.rows>1 and i>0 and i<m.rows-1 print ("⎢ ", "")
        if m.rows>1 and i==m.rows-1 print ("⎣ ", "")
        it_j = range m.cols
        while try j=next it_j
            print (m[i,j], "")
            if j<m.cols-1 print ("  ", "")
        if m.rows==1 print (" ]", "")
        if m.rows>1 and i==0 print (" ⎤", "")
        if m.rows>1 and i>0 and i<m.rows-1 print (" ⎥", "")
        if m.rows>1 and i==m.rows-1 print (" ⎦", "")
        print ("", endl)