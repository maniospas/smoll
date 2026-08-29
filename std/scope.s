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

local import std.core.numbers
local import std.core.allocators

local def invalidate_at_scope_end(Number x)
    return ()

local def invalidate_at_scope_end(any ptr x)
    return x

def reuse(Number x)
    doc "mark variable for reuse and return itself"
    doc "Declares a locally scoped variable that gets invalidated when out of scope."
    doc "This allows reusing the same symbol later. There is no impact on the value."
    defer
        invalidate_at_scope_end x
    return x

def reuse(any ptr x)
    doc "mark variable for reuse and return itself"
    doc "Declares a locally scoped variable that gets invalidated when out of scope."
    doc "This allows reusing the same symbol later. There is no impact on the value."
    defer
        invalidate_at_scope_end x
    return x

def reuse(edit arena arn)
    doc "a garbage collector for an arena"
    doc "Stores the arena's end position and restores that when moving out of scope."
    doc "Careful of data corruptions!"
    tracked_position = 0+arn.pos
    compiler::unsafe_declare_deep_copy_only()
    defer
        arn.pos = tracked_position+0
    return tracked_position