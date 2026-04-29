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

local import "std/core/builtinsext.s"
local import "std/unsafe.s" as unsafe

# a convention to make pointer operations safe outside the unsafe:: namespace
# is that we GUARANTEE that non-zero pointers to a memory region contain
# at least one element of the attached type (automatically inferred for any)

def free(mut any[] buffer)
    doc "frees a buffer - done automatically too"
    if buffer.unsafe_size==0
        return buffer
    buffer.unsafe_size = 0
    buffer.unsafe_ptr.unsafe::free()
    return buffer

def alloc(mut any[] buffer, nat size)
    doc "allocates a buffer"
    doc "Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,"
    doc "as it never reallocates an allocation. For convenience for usage within loops, allocation"
    doc "of the same size only zero-initializes the buffer. If a different size is given, and the"
    doc "buffer is non-empty, this fails. Consider freeing the buffer with `free` to allocate again."
    defer
        if buffer.unsafe_size!=0
            buffer.unsafe_size = 0
            buffer.unsafe_ptr.unsafe::free()
    if buffer.unsafe_size==size
        if size!=0
            buffer.unsafe_ptr.unsafe::zero(0, buffer.unsafe_align*size)
        return buffer
    if buffer.unsafe_size!=0
        fail "cannot resize buffers with alloc; it promises no data reallocation"
    bytes = buffer.unsafe_align*size
    buffer.unsafe_size = size
    buffer.unsafe_ptr = unsafe_mut unsafe::alloc(bytes)
    buffer.unsafe_ptr.unsafe::zero(0, bytes)
    return buffer

# def new(const any[] buffer, nat size)
#     ret = any[]
#     ret.unsafe_align = buffer.unsafe_align
#     bytes = ret.unsafe_align*size
#     ret.unsafe_size = size
#     ret.unsafe_ptr = unsafe_mut unsafe::alloc(bytes)
#     ret.unsafe_ptr.unsafe::zero(0, bytes)
#     ret.unsafe_ptr = unsafe_mut ret.unsafe_ptr.compiler::attach_type(buffer.unsafe_ptr)
#     defer
#         if ret.unsafe_size!=0
#             ret.unsafe_size = 0
#             ret.unsafe_ptr.unsafe::free()
#     return ret

def resize(mut any[] buffer, nat size)
    doc "resize the buffer"
    doc "This does nothing if the previous size is the same, frees the buffer if new size is zero."
    doc "If old size was zero, the buffer is allocated. The buffer is returned for convenience."
    if buffer.unsafe_size==size 
        return buffer
    if size==0
        return buffer.free()
    if buffer.unsafe_size==0
        buffer = buffer.alloc(size)
        return buffer
    prev_bytes = buffer.unsafe_size*buffer.unsafe_align
    buffer.unsafe_size = size
    bytes = buffer.unsafe_align*size
    buffer.unsafe_ptr = unsafe_mut buffer.unsafe_ptr.unsafe::realloc(bytes)
    if prev_bytes<bytes
        buffer.unsafe_ptr.unsafe::zero(prev_bytes, bytes)
    return buffer

def last(const any[] buffer)
    doc "get a pointer to the last buffer element"
    if 0==buffer.unsafe_size
        fail "out of bounds"
    return buffer.unsafe_ptr.unsafe::add((buffer.unsafe_size-1)*buffer.unsafe_align)

def mutlast(any[] buffer)
    doc "get a mutable pointer to the last buffer element"
    if 0==buffer.unsafe_size
        fail "out of bounds"
    return unsafe_mut buffer.unsafe_ptr.unsafe::add((buffer.unsafe_size-1)*buffer.unsafe_align)
    
def mutget(any[] buffer, nat i)
    doc "get a mutable pointer to a buffer element"
    if i>=buffer.unsafe_size
        fail "out of bounds"
    return unsafe_mut buffer.unsafe_ptr.unsafe::add(i*buffer.unsafe_align)
    
def get(const any[] buffer, nat i)
    doc "get a pointer to a buffer element"
    if i>=buffer.unsafe_size
        fail "out of bounds"
    return buffer.unsafe_ptr.unsafe::add(i*buffer.unsafe_align)

def len(const any[] buffer)
    doc "the number of buffer elements"
    return buffer.unsafe_size

def alloc(nat size)
    doc "allocates a character buffer of given size"
    return alloc(mut char[], size)

def list(mut any[] buffer)
    doc "list of buffer"
    doc "List defined over a mutable buffer that is automatically managed and resized."
    doc "A capacity is maintained so that resizes are not performed too frequently."
    length = mut len buffer
    return class(buffer, length)

def get(list l, nat pos)
    doc "get a list element pointer"
    if pos>=l.length
        fail "out of bounds"
    return get(l.buffer,pos)

def mutget(list l, nat pos)
    doc "get a mutable list element pointer"
    if pos>=l.length
        fail "out of bounds"
    return l.buffer.mutget pos

def push(list l)
    doc "get a mutable pointer to a new list element"
    doc "Grows the list and returns a mutable pointer to the newlly created last element."
    prev_length = l.length
    if prev_length >= len l.buffer
        l.buffer = l.buffer.resize(prev_length+prev_length/2+1)
    l.length = prev_length + 1
    return l.buffer.mutget prev_length
