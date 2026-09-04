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

local import std.core.builtinsext
local import std.core.array
local import std.unsafe as unsafe
local import compiler as cp

def new()
    doc "allocations on new memory"
    return class()

local def bucket_contents()
    return class (
        assigned elements = mut unsafe::alloc cp::size cp::ptr(),
        assigned size = mut 0,
        assigned allocated = mut 0
    )

def bucket()
    doc "grouped allocations on new memory"
    doc "This is similar to 'new' but moves all allocated memory together,"
    doc "releasing it only when there is no further use for any of its contents."
    doc "Do note that this operation is typically the lazy-person's way out,"
    doc "as it acquires and releases memory using one extra layer of indirection"
    doc "compared to structures like arenas. On the other hand, it's pretty versatile"
    doc "for holding conditional results. Example:"
    doc "```python"
    doc "import std.core"
    doc "def conditional(bool case)"
    doc "    CHARS = edit bucket()"
    doc "    if case  s = copy 123"
    doc "    else     s = copy 345"
    doc "    return (s, CHARS) # this would not be possible with 'CHARS = new()'"
    doc "def main()"
    doc "    CLI = edit console()"
    doc "    print conditional true"
    doc "    print conditional false"
    doc "```"
    unsafe_ptr = mut bucket_contents[].alloc(1 unsafe_leaky).unsafe_ptr
    defer
        contents = mut cp::deref unsafe_ptr
        for i in range of contents.size
            position = contents.elements.unsafe::add(i*cp::size cp::ptr())
            unsafe::free unsafe_mut unsafe::dereference_ptr position
        unsafe::free contents.elements
        unsafe::free unsafe_ptr
    return class(unsafe_ptr)
    
def arena(edit any[] buf, nat _pos)
    doc "a buffer and mutable position pair"
    doc "This structure is often used to track the size of allocated"
    doc "data within the buffer."
    doc "Contrary to circular buffers, arenas are not freed automatically"
    doc "and therefore eventually run out of space. However, they come"
    doc "with data integrity guarantees. Attach a garbage"
    doc "collector to an arena per `gc arena alloc 4` (or construct it"
    doc "with another allocator)." 
    pos = mut _pos
    return class(buf, pos)

def arena(edit any[] buf)
    doc "a buffer and mutable position pair"
    doc "The position starts from 0. This structure is often used"
    doc "to track the size of allocated data within the buffer."
    doc "Contrary to circular buffers, arenas are not freed automatically"
    doc "and therefore eventually run out of space. However, they come"
    doc "with data integrity guarantees."
    return arena(buf, 0)

def len(arena arn)
    doc "allocated arena size"
    doc "This is not the total arena size, but rather the number"
    doc "of elements actively in use."
    return arn.pos

def allocated(edit any[] buf, nat pos)
    return class(buf, pos)

def status(arena|allocated self)
    doc "convert to a nameless buffer and position pair"
    doc "This unpacking is used to pass an arena's state or allocated"
    doc "memory data as part of structural input."
    return (local self.buf, local self.pos)

def get(arena l, nat pos, "unsafe_assume_inbounds"|blank inbounds_guarantee)
    doc "get a list element pointer"
    if inbounds_guarantee is blank
        if pos>=l.pos fail "out of bounds"
        return l.buf[pos]&
    else
        doc ""
        doc "*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*"
        return l.buf[pos, inbounds_guarantee]&

def mutget(edit arena l, nat pos, "unsafe_assume_inbounds"|blank inbounds_guarantee)
    doc "get a mutable list element pointer"
    if inbounds_guarantee is blank
        if pos>=l.pos fail "out of bounds"
        return l.buf[pos]&
    else
        doc ""
        doc "*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*"
        return l.buf[pos, inbounds_guarantee]&

def circular(edit any[] buf)
    doc "circular buffer"
    pos = mut 0
    return class(buf, pos)

def list(edit any[] _buf, blank|"external" init_strategy)
    doc "list buffer management"
    doc "List defined over a mutable buf that is automatically managed and resized."
    doc "A capacity is maintained so that resizes are not performed too frequently."
    if init_strategy is blank
        buf = mut _buf.alloc 1
    else
        buf = mut _buf
    length = mut 0
    return class(buf, length)

def len(list self)
    return self.length
    
def get(circular|list self, nat pos)
    doc "get a list element pointer"
    if self is list and inbounds_guarantee is blank
        if pos>=self.length
            fail "out of bounds"
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

local def unsafe_alloc(edit bucket allocator, nat|blank bytes)
    doc "bucket allocation"
    if bytes is blank
        bytes = 1
        doc "Creates room for one element."
    contents = mut cp::deref allocator.unsafe_ptr
    prev_size = contents.size+0
    contents.size = contents.size+1
    if contents.size>=contents.allocated
        contents.allocated = (contents.allocated*2)+1
        new_elements = unsafe_mut contents.elements.unsafe::realloc (contents.allocated*cp::size cp::ptr() super_unsafe)
        contents.elements = new_elements&
    position_ptr = contents.elements.unsafe::add(prev_size*cp::size cp::ptr())
    new_allocation = unsafe_mut unsafe::alloc bytes
    ptr_size = cp::size cp::ptr()
    {memcpy(position_ptr, &new_allocation, ptr_size);}
    allocator.unsafe_ptr = contents
    return new_allocation

def alloc(edit any[] buffer, edit bucket BUCKET, nat|blank size, "unsafe_first"|"dirty"|blank clear_policy)
    doc "allocates a buffer"
    doc "Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,"
    doc "as it never reallocates an allocation. The allocated memory is tracked alongside others on"
    doc "an allocation bucket, so that they are released all together. This strategy entangles the"
    doc "return with the bucket, but at least ensures that only one easy-to-track bucket should be"
    doc "moved across functions."
    if size is blank
        doc "This version allocates a buffer of ONE element."
        size = 1
    if buffer.unsafe_size==size and size!=0 
        buffer.unsafe_ptr.unsafe::zero(0, buffer.unsafe_align.nat()*size)
        return buffer
    if clear_policy is blank|"dirty"
        if buffer.unsafe_size!=0 
            fail "cannot resize buffers with alloc; it promises no data reallocation"
    bytes = buffer.unsafe_align.nat()*size
    if leak_policy is blank
        if bytes==0
            fail "cannot allocate a buffer of unsized type"
    buffer.unsafe_size = size
    buffer.unsafe_ptr = ref BUCKET.unsafe_alloc(bytes)&
    if clear_policy is blank
        buffer.unsafe_ptr.unsafe::zero(0, bytes)
    unsafe_return buffer

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

local def nat32(nat x) # declare here to not import from anywhere
    {builtins::nat32 value = x;}
    return value

def slice(edit arena surface, nat length)
    doc "a buffer subregion of an arena"
    doc "This allocates a region of a given number of elements"
    doc "within an arena and returns a buffer interface wrapping"
    doc "it. It is an alternative to allocating buffers on the"
    doc "heap."
    allocated = mut surface.alloc(length)
    buf = mut allocated.buf
    buf.unsafe_size = length
    buf.unsafe_offset = nat32 buf.unsafe_offset.nat()+buf.unsafe_align.nat()*allocated.pos
    return buf