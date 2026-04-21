local import "std/core.s"
local import "std/unsafe.s" as unsafe

# a convention to make pointer operations safe outside the unsafe:: namespace
# is that we GUARANTEE that non-zero pointers to a memory region contain
# at least one element of the attached type (automatically inferred for any)

def free(mut any[] buffer)
    if buffer.unsafe_size==0
        return buffer
    buffer.unsafe_size = 0
    buffer.unsafe_ptr.unsafe::free()
    return buffer

def alloc(mut any[] buffer, nat size)
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

def resize(mut any[] buffer, nat size)
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
    if 0==buffer.unsafe_size
        fail "out of bounds"
    return buffer.unsafe_ptr.unsafe::add((buffer.unsafe_size-1)*buffer.unsafe_align)

def mutlast(any[] buffer)
    if 0==buffer.unsafe_size
        fail "out of bounds"
    return unsafe_mut buffer.unsafe_ptr.unsafe::add((buffer.unsafe_size-1)*buffer.unsafe_align)
    
def mutget(any[] buffer, nat i)
    if i>=buffer.unsafe_size
        fail "out of bounds"
    return unsafe_mut buffer.unsafe_ptr.unsafe::add(i*buffer.unsafe_align)
    
def get(const any[] buffer, nat i)
    if i>=buffer.unsafe_size
        fail "out of bounds"
    return buffer.unsafe_ptr.unsafe::add(i*buffer.unsafe_align)

def len(const any[] buffer)
    return buffer.unsafe_size

def alloc(nat size)
    return alloc(mut char[], size)

def list(mut any[] buffer)
    length = mut len buffer
    return class(buffer, length)

def get(list l, nat pos)
    if pos>=l.length
        fail "out of bounds"
    return get(l.buffer,pos)

def mutget(list l, nat pos)
    if pos>=l.length
        fail "out of bounds"
    return l.buffer.mutget pos

def push(list l)
    prev_length = l.length
    if prev_length >= len l.buffer
        l.buffer = l.buffer.resize(prev_length+prev_length/2+1)
    l.length = prev_length + 1
    return l.buffer.mutget prev_length