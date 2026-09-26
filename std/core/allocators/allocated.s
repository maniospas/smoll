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

def at(edit allocated surface)
    doc "get a mutable pointer to the last buffer element"
    return surface.buf[surface.pos]&
