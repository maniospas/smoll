import "std/core.s"
import "std/unsafe.s" as unsafe

// a convention to make pointer operations safe outside the unsafe:: namespace
// is that we GUARANTEE that non-zero pointers to a memory region contain
// at least one element of the attached type (automatically inferred for any)

def alloc(mut any[] buffer, nat size)
    if buffer.unsafe_size==size
        unsafe::zero(buffer.unsafe_ptr, 0, buffer.align*size)
        return buffer
    if buffer.unsafe_size!=0
        fail "cannot resize buffers with alloc; it promises no data reallocation"
    buffer.unsafe_size = size
    bytes = buffer.align*size
    buffer.unsafe_ptr = unsafe::alloc(bytes)
    unsafe::zero(buffer.unsafe_ptr, 0, bytes)
    return buffer

def resize(mut any[] buffer, nat size)
    if buffer.unsafe_size==size 
        return buffer
    if size==0
        unsafe::free(buffer.unsafe_ptr)
        buffer.unsafe_size = 0
        return buffer
    prev_bytes = buffer.unsafe_size*buffer.align
    buffer.unsafe_size = size
    bytes = buffer.align*size
    buffer.unsafe_ptr = unsafe::realloc(buffer.unsafe_ptr, bytes)
    if prev_bytes<bytes
        unsafe::zero(buffer.unsafe_ptr, prev_bytes, bytes)
    return buffer

def last(any[] buffer)
    if 0==buffer.unsafe_size
        fail "out of bounds"
    return buffer.unsafe_ptr->unsafe::add((buffer.unsafe_size-1)*buffer.align)

def get(any[] buffer, nat i)
    if i>=buffer.unsafe_size
        fail "out of bounds"
    return buffer.unsafe_ptr->unsafe::add(i*buffer.align)

def len(any[] buffer)
    return buffer.unsafe_size
