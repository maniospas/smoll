import "std/core.s"
import "std/unsafe.s" as unsafe

// a convention to make pointer operations safe outside the unsafe:: namespace
// is that we GUARANTEE that non-zero pointers to a memory region contain
// at least one element of the attached type (automatically inferred for any)

def grow(mut any[] buffer, id elements)
    if elements==0 
        return buffer
    prev_bytes = buffer.unsafe_size*buffer.align
    buffer.unsafe_size = buffer.unsafe_size+elements
    bytes = buffer.align*buffer.unsafe_size
    buffer.unsafe_ptr = unsafe::realloc(buffer.unsafe_ptr, bytes)
    unsafe::zero(buffer.unsafe_ptr, prev_bytes, bytes)

def get(any[] buffer, id i)
    if i>=buffer.unsafe_size
        fail "out of bounds"
    return buffer.unsafe_ptr->unsafe::add(i*buffer.align)

def len(any[] buffer)
    return buffer.unsafe_size