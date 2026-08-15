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
    doc "number of stored non-zero entries"
    return m.nnz

def coo(nat rows, nat cols, nat nnz)
    doc "allocate a sparse matrix"
    doc "This creates a new buffer of sparse elements for convenience."
    buf = sparse_element[].alloc nnz
    return coo(buf.unsafe_ptr, rows, cols, nnz)

def coo(sparse_element[] elements, nat rows, nat cols)
    return coo(elements.unsafe_ptr, rows, cols, len elements)

def get(coo m, nat k)
    doc "get a sparse element"
    if k>=m.nnz fail "out of bounds"
    return m.unsafe_ptr+k*24

def mutget(edit coo m, nat k)
    doc "mutable reference to a sparse element"
    if k>=m.nnz fail "out of bounds"
    return unsafe_mut m.unsafe_ptr+k*24

def mul(effect edit float_allocator FLOATS, coo m, vec v)
    doc "sparse matrix*vector multiplication"
    if m.cols!=v.length fail "matrix columns must match vector length"
    result = edit vec m.rows
    for entry in m
        result[entry.row] = result[entry.row]+entry.value*v[entry.col]
    return result

def mul(effect edit float_allocator FLOATS, vec v, coo m)
    doc "vector*sparse matrix multiplication"
    doc "*Warning: the expression `self(v)*m` yields wrong values"
    "because the vector is not modified element-by-element."
    if v.length!=m.rows fail "vector length must match matrix rows"
    result = edit vec m.cols
    for entry in m
        result[entry.col] = result[entry.col]+v[entry.row]*entry.value
    return result

def mul(effect edit float_allocator FLOATS, coo m1, mat m2)
    doc "sparse*dense matrix multiplication"
    if m1.cols!=m2.rows fail "inner dimensions must agree"
    result = edit mat(m1.rows, m2.cols)
    for entry in m1
        for j in range of m2.cols
            result[entry.row,j] = result[entry.row,j]+entry.value*m2[entry.col,j]
    return result

def todense(effect edit float_allocator FLOATS, coo m)
    doc "convert to dense mat"
    result = edit mat(m.rows, m.cols)
    for entry in m
        result[entry.row, entry.col] = entry.value
    return result

def print(effect edit console CLI, coo m, cstr|blank endl)
    doc "print sparse matrix"
    doc "Prints it as coordinate as list: (i, j): v"
    if endl is blank
        endl = "\n"
    for entry in m
        print ("(", "")
        print (entry.row, "")
        print (", ", "")
        print (entry.col, "")
        print ("): ", "")
        print (entry.value, "")
        print ("", endl)

def sum(effect edit float_allocator FLOATS, coo m, "row")
    doc "sum of each row"
    doc "result[i] = sum of all stored values in row i"
    result = edit vec m.rows
    for entry in m
        result[entry.row] = result[entry.row]+entry.value
    return result

def sum(effect edit float_allocator FLOATS, coo m, "col")
    doc "sum of each column"
    doc "result[j] = sum of all stored values in column j"
    result = edit vec m.cols
    for entry in m
        result[entry.col] = result[entry.col]+entry.value
    return result

def sum(coo m, "all")
    doc "sum of all elements"
    result = mut 0.0
    for entry in m
        result = result+entry.value
    return result

def matrix = mat|coo
