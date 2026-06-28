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

def nat(nat16 x)
    {builtins::nat value = x;}
    return value

def alloc(edit any[] buffer, nat|blank size, "dirty"|blank clear_policy)
    doc "allocates a buffer"
    doc "Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,"
    doc "as it never reallocates an allocation. For convenience for usage within loops, allocation"
    doc "of the same size only zero-initializes the buffer. If a different size is given, and the"
    doc "buffer is non-empty, this fails. Consider freeing the buffer first with `del buffer` to"
    doc "allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made."
    if size is blank
        doc "This version allocates a buffer of ONE element, which can be used for stable indirection."
        size = 1
    defer
        if exists buffer.unsafe_ptr buffer.unsafe_ptr.unsafe::free()
    if buffer.unsafe_size==size
        if size!=0 buffer.unsafe_ptr.unsafe::zero(0, buffer.unsafe_align.nat()*size)
        return buffer
    if buffer.unsafe_size!=0 fail "cannot resize buffers with alloc; it promises no data reallocation"
    bytes = buffer.unsafe_align.nat()*size
    if bytes==0 fail "cannot allocate a buffer of unsized type"
    buffer.unsafe_size = size
    buffer.unsafe_ptr = ref unsafe::alloc(bytes)&&
    if clear_policy is blank
        buffer.unsafe_ptr.unsafe::zero(0, bytes)
    unsafe_return buffer

def alloc(nat size)
    doc "allocate a char[] buffer"
    return alloc(char[], size)

def resize(edit any[] buffer, nat size, "unsafe"|blank prunning)
    doc "resize the buffer"
    doc "For stability of data structures, this does nothing if the previous size is the same or less."
    doc "If old size was zero, an error is created instead of allocating so that this does not leak"
    doc "resources."
    if prunning is blank
        if buffer.unsafe_size>=size 
            return buffer
        if buffer.unsafe_size==0 fail "cannot resize an unallocated or freed buffer"
    #if buffer.unsafe_offset.nat()!=0 fail "cannot resize a buffer with offset"
    prev_bytes = buffer.unsafe_size*buffer.unsafe_align.nat()
    buffer.unsafe_size = size
    bytes = buffer.unsafe_align.nat()*size
    buffer.unsafe_ptr = unsafe_mut buffer.unsafe_ptr.unsafe::realloc(bytes)&&#.compiler::unsafe_attach_type(_buffer__unsafe_ptr)
    if prev_bytes<bytes
        buffer.unsafe_ptr.unsafe::zero(prev_bytes, bytes)
    return buffer

def last(any[] buffer)
    doc "get a pointer to the last buffer element"
    if 0==buffer.unsafe_size fail "out of bounds"
    return buffer.unsafe_ptr.unsafe::add((buffer.unsafe_size-1+buffer.unsafe_offset.nat())*buffer.unsafe_align.nat())

def mutlast(edit any[] buffer)
    doc "get a mutable pointer to the last buffer element"
    if 0==buffer.unsafe_size fail "out of bounds"
    return unsafe_mut buffer.unsafe_ptr.unsafe::add((buffer.unsafe_size-1+buffer.unsafe_offset.nat())*buffer.unsafe_align.nat())
    
def mutget(edit any[] buffer, nat i)
    doc "get a mutable pointer to a buffer element"
    if i>=buffer.unsafe_size fail "out of bounds"
    return unsafe_mut buffer.unsafe_ptr.unsafe::add(i*buffer.unsafe_align.nat()+buffer.unsafe_offset.nat())
    
def get(any[] buffer, nat i)
    doc "get a pointer to a buffer element"
    if i>=buffer.unsafe_size fail "out of bounds"
    return buffer.unsafe_ptr.unsafe::add(i*buffer.unsafe_align.nat()+buffer.unsafe_offset.nat())

def len(any[] buffer)
    doc "the number of buffer elements"
    return buffer.unsafe_size
