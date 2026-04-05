import "std/core.s"
import "std/unsafe.s" as unsafe

// a convention to make pointer operations safe outside the unsafe:: namespace
// is that we GUARANTEE that non-zero pointers to a memory region contain
// at least one element of the attached type (automatically inferred for any)

def expect(mut any[] buffer, id elements)
    if elements==0 
        return empty()
    buffer.size = mut buffer.size+elements
    bytes = buffer.align*buffer.size
    buffer.ptr = mut unsafe::alloc(bytes)
    unsafe::zero(buffer.ptr, 0, bytes)

def get(any[] buffer, id element)
    if element>=buffer.size
        fail "out of bounds"
    offset = element*buffer.align
    buffer_ptr = buffer.ptr
    {builtins::compiler::ptr el = ((char*)buffer_ptr)+offset;}
    return el
