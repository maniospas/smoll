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
local import std.core.allocators.arena
local import std.core.allocators.bucket
local import std.unsafe as unsafe
local import compiler as cp

def consumption()
    doc "allocation consumption statistics"
    doc "Tracks the total number of elements used and allocated."
    return class(assigned used=mut 0, assigned total=mut 0)

def linkedmem(edit any[] buf, nat multiple)
    doc "linked stable arena memory"
    doc "Allocates through an arena and creates a new arena whenever"
    doc "the unsafe_current one cannot accommodate an allocation."
    doc "Previous arena buffers are retained until this allocator is"
    doc "released, so pointers into previous allocations remain stable."

    if multiple<1: fail "linkedmem allocation multiple must be at least 1"
    BUFFERS = edit bucket()
    if buf.unsafe_size!=0: fail "cannot create a linkedmem using an allocated buffer as prototype"
    unsafe_current = mut arena(buf)
    return class(unsafe_current, BUFFERS, multiple)


def linkedmem(edit any[] buf)
    return buf.linkedmem 4096/nat cp::value buf.unsafe_align

def unsafe_peek_arena(edit linkedmem, edit blank|consumption)
    return linkedmem.unsafe_current

def ensure_arena(edit linkedmem, edit blank|consumption, nat minimum_capacity)
    doc "provide an arena of sufficient capacity"
    doc "If the current arena cannot fit the current requested additional minimum capacity,"
    doc "a new arena is allocated and set up as the current one. The new arena's capacity is"
    doc "the smallest configured of the linked memory's multiple size that can accommodate a"
    doc "number of elements equal to the minimum capacity."

    if not consumption is blank
        doc "The supplied consumption tracker registers any new allocations."

    if linkedmem.unsafe_current.pos+minimum_capacity <= linkedmem.unsafe_current.buf.unsafe_size
        ret = linkedmem.unsafe_current
        return ret

    if not consumption is blank
        consumption.used = consumption.used+linkedmem.unsafe_current.pos
        consumption.total = consumption.total+linkedmem.unsafe_current.buf.unsafe_size

    multiple = linkedmem.multiple
    capacity = ((minimum_capacity+multiple-1)/multiple)*multiple
    buf = mut linkedmem.unsafe_current.buf
    buf = linkedmem.unsafe_current.buf.alloc(linkedmem.BUFFERS, capacity*nat buf.unsafe_align unsafe_first)
    linkedmem.unsafe_current = mut arena(buf)
    return const linkedmem.unsafe_current

def alloc(edit linkedmem, edit blank|consumption, nat|blank length)
    doc "linked stable arena allocation"
    doc "Optionally tracks the number of elements used and allocated."
    if length is blank
        length = 1
        doc "Creates room for one element."
    if consumption is blank: linkedmem.ensure_arena(length)
    else: linkedmem.ensure_arena(consumption, length)
    return linkedmem.unsafe_current.alloc(length)
    
def print_report(on CLI, blank|linkedmem, consumption)
    if linkedmem is blank
        used = consumption.used
        total = consumption.total
    else
        used = consumption.used+linkedmem.unsafe_current.pos
        total = consumption.total+linkedmem.unsafe_current.buf.unsafe_size

    print nn "Used "
    print nn used
    print nn " of "
    print nn total
    print nn " allocated bytes ("
    print nn nat(100.0*float(used)/float(total))
    print "%)"

def linkedmem(edit any[] buf, nat|blank multiple, "track")
    if multiple is blank
        return (linkedmem(buf), consumption())
    else
        return (linkedmem(buf, multiple), consumption())

local def _blank() return()