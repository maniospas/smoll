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
local import std.core.allocators.allocated
local import std.unsafe as unsafe
local import compiler as cp


local def bucket_contents()
    doc "structure of an allocated bucket allocator"
    doc "This is the actual structure of a bucket allocator, moved via one"
    doc "indirection onto memory. Then, bucket allocations retrieve this"
    doc "structure and register onto it a new memory element."
    return class (
        assigned elements = mut unsafe::alloc cp::value cp::size cp::ptr(),
        assigned size = mut 0,
        assigned allocated = mut 0
    )

def unsafe_free(edit bucket_contents contents)
    doc "release bucket contents"
    doc "Release bucket contents. If these are obtained from a bucket pointer,"
    doc "however, that is not freed and its usage becomes unsafe."
    doc "*Warning: Calling this is utterly unsafe, because normally the"
    doc "bucket defer statement calls it. The only reason this is a separate"
    doc "function is because defers have some issues with some label handling"
    doc "so loops inside them should better be turned into separate functions.*"
    for i in range of contents.size
        position = contents.elements.unsafe::add(i*cp::value cp::size cp::ptr())
        unsafe::free unsafe_mut unsafe::dereference_ptr position
    unsafe::free contents.elements

def bucket()
    doc "grouped allocations on new memory"
    doc "This allocator is similar to `new` in that directly allocates"
    doc "using the operating system's `malloc`. However, it does not allow"
    doc "each allocated memory segment to manage its own deferred dellocation,"
    doc "and instead bundles all allocations it is involved in to have them"
    doc "be released together, once no longer in use."
    doc "Do note that this operation is typically the lazy way out,"
    doc "as it must accompany the allocated values within function returns. It also"
    doc " acquires and releases memory using one extra layer of indirection"
    doc "compared to allocators like arenas. On the other hand, it is pretty versatile"
    doc "for holding conditional results. Example:"
    doc "```python"
    doc "import std.core"
    doc "def conditional(bool case)"
    doc "    CHARS = edit bucket()"
    doc "    if case: s = copy 123"
    doc "    else:    s = copy 345"
    doc "    return (s, CHARS) # returning s would not be possible with 'CHARS = new()'"
    doc "def main(CLI)"
    doc "    print conditional(true).s"
    doc "    print conditional(false).s"
    doc "```"
    unsafe_ptr = mut bucket_contents[].alloc(1 unsafe_leaky).unsafe_ptr
    defer
        contents = mut cp::deref unsafe_ptr
        unsafe_free contents
        unsafe::free unsafe_ptr
        
    return class(unsafe_ptr)



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
        new_elements = unsafe_mut contents.elements.unsafe::realloc (contents.allocated*cp::value cp::size cp::ptr() super_unsafe)
        contents.elements = new_elements&
    position_ptr = contents.elements.unsafe::add(prev_size*cp::value cp::size cp::ptr())
    new_allocation = unsafe_mut unsafe::alloc bytes
    ptr_size = cp::value cp::size cp::ptr()
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