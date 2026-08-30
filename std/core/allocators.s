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

def new()
    doc "allocations on new bufs"
    return class()

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