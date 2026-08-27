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

local import std.core

def vec(float ptr unsafe_ptr, nat pos, nat length)
    doc "vector type declaration"
    doc "Warning: directly calling this constructor without safety checks is unsafe."
    return mut class(unsafe_mut unsafe_ptr, pos, length)

def mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride)
    doc "matrix type declaration"
    doc "Warning: directly calling this constructor without safety checks is unsafe."
    return mut class(unsafe_mut unsafe_ptr, pos, rows, cols, stride)

def sparse_element(nat row, nat col, float value) 
    return compiler::args()
    
def coo(sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz)
    doc "coo sparse matrix type declaration"
    doc "Warning: directly calling this constructor without safety checks is unsafe."
    return mut class(unsafe_mut unsafe_ptr, rows, cols, nnz)
