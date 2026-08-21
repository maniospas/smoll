# Written in 2026 by Emmanouil Krasanakis (maniospas@hotmail.com)
# To the extent possible under law, the author has dedicated all copyright
# and related and neighboring rights to this software to the public domain
# worldwide.
# 
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted.
# 
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR
# IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

local import "std/core.s"
local import "std/sci/vec.s"
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
        buf.unsafe_ptr.unsafe::zero(0, 8*len buf)
    return mat(buf.unsafe_ptr, 0, rows, cols, cols)

def mat(effect edit float_allocator\new FLOATS, nat rows, nat cols, "dirty"|blank clear_policy)
    doc "matrix on an existing vecpos"
    if FLOATS.buf.unsafe_align.nat()!=8 fail "can only place matrices on contiguous buffers"
    if FLOATS.buf.unsafe_offset.nat()!=0 fail "cannot place matrices on buffer offsets"
    size = rows*cols
    surface = FLOATS.alloc size
    if clear_policy is blank
        surface.buf.unsafe_ptr.unsafe::zero(8*surface.pos, 8*(surface.pos+size))
    return mat(FLOATS.buf.unsafe_ptr, surface.pos, rows, cols, cols)

def constmat(float[] buf, nat rows)
    doc "immutable matrix on an immutable float[] buffer"
    cols = len(buf)/rows
    if cols*rows!=len buf fail "buffer size not divisible by vector rows"
    return const mat(arena unsafe_mut buf, rows, cols dirty)

def mat(edit float[] buf, nat rows)
    doc "matrix on an existing float[] buffer"
    cols = len(buf)/rows
    if cols*rows!=len buf fail "buffer size not divisible by vector rows"
    return mat(arena unsafe_mut buf, rows, cols dirty)

def mutget(edit mat m, nat i, nat j)
    doc "mutable reference to matrix element (i,j)"
    if i>=m.rows fail "row out of bounds"
    if j>=m.cols fail "column out of bounds"
    return unsafe_mut m.unsafe_ptr+8*(m.pos+i*m.stride+j)

def get(mat m, nat i, nat j, "unsafe_assume_inbounds"|blank inbounds_guarantee)
    doc "reference to matrix element (i,j)"
    if inbounds_guarantee is blank
        if i>=m.rows fail "row out of bounds"
        if j>=m.cols fail "column out of bounds"
    else
        doc ""
        doc "*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*"
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

def mul(effect edit float_allocator FLOATS, mat m, vec v)
    doc "matrix-vector multiplication"
    doc "Grabs an allocator for the result as an effect."
    if m.cols!=v.length fail "matrix columns must match vector length"
    result = edit vec m.rows
    for i in range of m.rows
        acc = mut 0.0
        for j in range of m.cols
            acc = acc+m[i,j unsafe_assume_inbounds]*v[j unsafe_assume_inbounds]
        result[i] = acc
    return result

def mul(effect edit float_allocator FLOATS, vec v, mat m)
    doc "vector-matrix multiplication"
    doc "Grabs an allocator for the result as an effect."
    if v.length!=m.rows fail "vector length must match matrix rows"
    result = edit vec m.cols
    for j in range of m.cols
        acc = mut 0.0
        for i in range of m.rows
            acc = acc+v[i unsafe_assume_inbounds]*m[i,j unsafe_assume_inbounds]
        result[j] = acc
    return result

def mul(effect edit float_allocator FLOATS, mat m1, mat m2)
    doc "matrix-matrix multiplication"
    doc "Grabs an allocator for the result as an effect."
    if m1.cols!=m2.rows fail "inner dimensions must agree"
    result = edit mat(m1.rows, m2.cols)
    for i in range of m1.rows
        for j in range of m2.cols
            acc = mut 0.0
            it_k = range of m1.cols
            for k in range of m1.cols
                acc = acc+m1[i,k unsafe_assume_inbounds]*m2[k,j unsafe_assume_inbounds]
            result[i,j] = acc
    return result

def print(effect edit console CLI, mat m, cstr|blank endl)
    doc "print a matrix with aligned brackets"
    doc "single-row matrices stay on one line; taller ones get top/mid/bottom brackets"
    if endl is blank
        endl = "\n"
    for i in range of m.rows
        if m.rows==1  print ("[ ", "")
        if m.rows>1 and i==0 print ("⎡ ", "")
        if m.rows>1 and i>0 and i<m.rows-1 print ("⎢ ", "")
        if m.rows>1 and i==m.rows-1 print ("⎣ ", "")
        for j in range of m.cols
            print (m[i,j unsafe_assume_inbounds], "")
            if j<m.cols-1 print ("  ", "")
        if m.rows==1 print (" ]", "")
        if m.rows>1 and i==0 print (" ⎤", "")
        if m.rows>1 and i>0 and i<m.rows-1 print (" ⎥", "")
        if m.rows>1 and i==m.rows-1 print (" ⎦", "")
        print ("", endl)