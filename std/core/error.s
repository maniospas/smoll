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

local import "std/core/builtinsext.s"

def cstr(compiler::catch value)
    doc "a cstr description of an error code"
    doc "Error codes should *not* be compared numerically against"
    doc "given numbers, as their numbering changes for different"
    doc "programs. Instead, they should be converted to a cstr"
    doc "string with this function, which can then be compared."
    doc "This comparison is also one numerical comparison, as"
    doc "care is taken for all cstr to point to the same memory"
    doc "location."
    {builtins::cstr ret = __t_all_errcodes[value];}
    return ret

# def exists(compiler::catch value)
#     doc "checks that an error code is an error"
#     {builtins::bool ret = (value!=0);}
#     return ret
