local import "std/core/builtinsext.s"
local import "std/core/array.s"
local import "std/unsafe.s" as unsafe

def new()
    doc "allocations on new bufs"
    return class()

def arena(edit any[] buf, nat _pos)
    doc "a buffer and mutable position pair"
    doc "The position starts from 0. This structure is often used"
    doc "to track the size of allocated data within the buffer."
    pos = mut _pos
    return class(buf, pos)

def arena(edit any[] buf)
    doc "a buffer and mutable position pair"
    doc "The position starts from 0. This structure is often used"
    doc "to track the size of allocated data within the buffer."
    return arena(buf, 0)

def allocated(edit any[] buf, nat pos)
    return class(buf, pos)

def status(arena|allocated self)
    doc "convert to a nameless buffer and position pair"
    doc "This unpacking is used to pass an arena's state or allocated"
    doc "memory data as part of structural input."
    return (local self.buf, local self.pos)

# def get(arena l, nat pos)
#     doc "get a list element pointer"
#     return get(l.buf,pos)

# def mutget(edit arena l, nat pos)
#     doc "get a list element pointer"
#     return mutget(l.buf,pos)

def circular(edit any[] buf)
    doc "circular buf"
    pos = mut 0
    return class(buf, pos)

def list(edit any[] _buf)
    doc "list of buf"
    doc "List defined over a mutable buf that is automatically managed and resized."
    doc "A capacity is maintained so that resizes are not performed too frequently."
    buf = mut _buf.alloc 1
    length = mut len buf
    return class(buf, length)

def get(circular|list self, nat pos)
    doc "get a list element pointer"
    return self.buf[pos]&

def mutget(edit circular|list self, nat pos)
    doc "get a list element pointer"
    return self.buf[pos]&

def alloc(edit arena allocator, nat|blank length)
    doc "arena allocation"
    if length is blank
        length = 1
        doc "Creates room for one element."
    next_pos = allocator.pos+length
    if next_pos>len allocator.buf fail "arena is out of space"
    pos = allocator.pos+0
    allocator.pos = next_pos
    return allocated(allocator.buf, pos)

def alloc(edit circular allocator, nat|blank length)
    doc "circular arena allocation"
    if length is blank
        length = 1
        doc "Creates room for one element."
    if length>= len allocator.buf fail "does not fit in circular arena"
    next_pos = mut length + allocator.pos
    if next_pos > len allocator.buf
        next_pos = length
        pos = 0
    else pos = allocator.pos+0
    allocator.pos = next_pos
    return allocated(allocator.buf, pos)

def alloc(edit list allocator, nat|blank length)
    doc "list allocation"
    if length is blank
        length = 1
        doc "Creates room for one element."
    pos = allocator.length+0
    prev_length = allocator.length + length
    if prev_length > len allocator.buf
        allocator.buf = allocator.buf.resize(prev_length+prev_length/2+1)
    allocator.length = prev_length
    return allocated(allocator.buf, pos)

def at(edit allocated surface)
    doc "get a mutable pointer to the last buffer element"
    return surface.buf[surface.pos]&

local def nat16(nat x) # declare here to not import from anywhere
    {builtins::nat16 value = x;}
    return value

def slice(edit arena surface, nat length)
    allocated = mut surface.alloc(length)
    buf = mut allocated.buf
    buf.unsafe_size = length
    buf.unsafe_offset = nat16 buf.unsafe_offset.nat()+buf.unsafe_align.nat()*allocated.pos
    return buf