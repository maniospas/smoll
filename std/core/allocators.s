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
    doc "This is the laziest means of allocation that has no state and"
    doc "signfies the intent to have any allocations be handled by the"
    doc "operating system. It has the disadvantage that it cannot really"
    doc "perform allocations within conditions or loops that escape"
    doc "their scope. However, allocations made within the top level"
    doc "of functions *will* be properly deferred to the calling scope."
    doc "Thus, the following exammple is valid, where `CHARS` is an effect;"
    doc "a variable automatically passed to string allocators."
    doc "```python"
    doc "import std.core"
    doc "def combine_with_space(on new CHARS, cstr s1, cstr s2)"
    doc "    return s1+s2+\" \""
    doc "def main(CLI, on new CHARS)" # could just write CHARS=new() inside
    doc "    list_s1 = [\"hel\", \"de\", \"wo\"]"
    doc "    list_s2 = [\"lo\", \"ar\", \"rld\"]"
    doc "    for i in range of 2"
    doc "        print nn combine_with_space(list_s1[i], list_s2[i])"
    doc "```"
    doc "In the above example, intermediate strings are released within `combine_with_space`,"
    doc "and its return is released at the end of each loop. Thus, although this pattern"
    doc "is easy to write, it cannot really escape the declared scope. Repeat allocations"
    doc "are also significantly slower than just using something a circular buffer in place of the"
    doc "CHARS effect."
    return class()

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
    
def arena(edit any[] buf, nat _pos)
    doc "arena buffer"
    doc "This consists of a buffer and mutable position pair. The"
    doc "tracks the size of used data within the buffer. Allocating"
    doc "in an arena just consumes more of its memory region allowance."
    doc "Contrary to circular buffers, arena data are not overwritten"
    doc "on-demand. This has the advantage that data remain intact until"
    doc "the arena is manuall cleared, but has the disadnvatage that"
    doc "arena allocations may fail due to running out of space."
    pos = mut _pos
    return class(buf, pos)

def arena(edit any[] buf)
    doc "arena buffer"
    doc "This consists of a buffer and mutable position pair. The"
    doc "tracks the size of used data within the buffer. Allocating"
    doc "in an arena just consumes more of its memory region allowance."
    doc "Contrary to circular buffers, arena data are not overwritten"
    doc "on-demand. This has the advantage that data remain intact until"
    doc "the arena is manuall cleared, but has the disadnvatage that"
    doc "arena allocations may fail due to running out of space."
    doc "This is the version most often used in practice to initialize"
    doc "arenas from allocated buffers. Example:"
    doc "```python"
    doc "import std.core"
    doc "def main(CLI)"
    doc "    CHARS = edit arena alloc 4096 # allocated buffer of 4K characters"
    doc "    message = \"hello\"+\" \"+\"world!\""
    doc "    print message"
    doc "```"
    doc "In the example above, string addition automatically uses the arena"
    doc "by grabbing it via string addition."
    return arena(buf, 0)

def len(arena arn)
    doc "allocated arena size"
    doc "This is not the total arena size, but rather the number"
    doc "of elements actively in use."
    return arn.pos

def allocated(edit any[] buf, nat pos)
    doc "an allocated buffer region"
    doc "This function is used mainly to declare a class that indicates"
    doc "the outcome of calling an `alloc` function on safe memory constructs,"
    doc "like `new,bucket,arena,circular,list`. For abstraction purposes it"
    doc "holds a buffer component and a position index on that buffer. There is"
    doc "no global guarantee about what each or future allocators will choose"
    doc "to split offsets between the buffer internal offeset and position."
    doc "However, assuming that `A` is allocated, get addresses to its first"
    doc "elements via `A.buf[A.pos]&`, or (preferred) via the equivalent `at A`."
    doc "**Prefer using functions like `at` on an allocated result**"
    doc "to ensure safe usage. Here is an example:"
    doc "```python"
    doc "import std.core"
    doc "import compiler as cp"
    doc "def main(CLI)"
    doc "    mydata = edit arena float[].alloc 10"
    doc "    float_ptr = mut at mydata.alloc() # allocate one element"
    doc "    float_ptr = 5.0                   # move data to a pointer"
    doc "    print cp::deref float_ptr         # dereference pointer data"
    doc "```"
    doc "Allocations are not the same as arenas, despite holding the same"
    doc "data internally. Arenas track the end of their allocated region, whereas"
    doc "allocations track the starting position within a buffer; the allocation size"
    doc "is external knowledge, and safety is enforced purely through buffer bounds"
    doc "checking."
    return class(buf, pos)

def status(arena|allocated self)
    doc "convert to a nameless buffer and position pair"
    doc "This unpacking is used to pass an arena's state or allocated"
    doc "memory data as part of structural input."
    return (local self.buf, local self.pos)

def get(arena l, nat pos, "unsafe_assume_inbounds"|blank inbounds_guarantee)
    doc "get a list element pointer"
    if inbounds_guarantee is blank
        if pos>=l.pos: fail "out of bounds"
        return l.buf[pos]&
    else
        doc ""
        doc "*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*"
        return l.buf[pos, inbounds_guarantee]&

def mutget(edit arena l, nat pos, "unsafe_assume_inbounds"|blank inbounds_guarantee)
    doc "get a mutable list element pointer"
    if inbounds_guarantee is blank
        if pos>=l.pos: fail "out of bounds"
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
    if init_strategy is blank: buf = mut _buf.alloc 1
    else: buf = mut _buf
    length = mut 0
    return class(buf, length)

def len(list self)
    doc "list length"
    doc "This is the number of user-facing allocation elements. The list may have"
    doc "allocated space for more elements internally."
    return self.length
    
def get(circular|list self, nat pos)
    doc "get a list element pointer"
    if self is list and inbounds_guarantee is blank
        if pos>=self.length: fail "out of bounds"
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
    if next_pos>len allocator.buf: fail "arena is out of space"
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

def alloc(edit circular allocator, nat|blank length)
    doc "circular arena allocation"
    if length is blank
        length = 1
        doc "Creates room for one element."
    if length>= len allocator.buf: fail "does not fit in circular arena"
    next_pos = mut length + allocator.pos
    if next_pos > len allocator.buf
        next_pos = length
        pos = 0
    else: pos = allocator.pos+0
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