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

def len(arena arn)
    doc "allocated arena size"
    doc "This is not the total arena size, but rather the number"
    doc "of elements actively in use."
    return arn.pos

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
