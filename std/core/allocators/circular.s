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
local import std.core.allocators.arena
local import std.unsafe as unsafe
local import compiler as cp


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

def unsafe_peek_arena(edit list allocator)
    return arena(allocator.buf, allocator.length)
