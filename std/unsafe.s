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

def alloc(nat bytes)
    {builtins::compiler::ptr allocated = malloc(bytes);builtins::bool failed=allocated==0;}
    if failed fail "allocation failed"
    # allow content modifications afterwards
    return allocated 

def realloc(any ptr allocated__unsafe_ptr, nat bytes) 
    # the __unsafe_ptr suffix is needed to skip invalidation internally
    INVALIDATE compiler::ptr
    {builtins::compiler::ptr new_allocated = allocated__unsafe_ptr?realloc(allocated__unsafe_ptr, bytes):malloc(bytes);builtins::bool failed=new_allocated==0;}
    if failed fail "reallocation failed"
    return new_allocated.compiler::attach_type(allocated__unsafe_ptr)

def free(mut any ptr allocated)
    {if(allocated)free(allocated);} 
    # automatically set to zero because it's a returned invalidated variable
    INVALIDATE compiler::ptr

def zero(any ptr allocated, nat from, nat to)
    {memset(((char*)allocated)+from, 0, to-from);}

def add(any ptr allocated, nat offset)
    {builtins::compiler::ptr element = ((char*)allocated)+offset;}
    return element.compiler::attach_type(allocated)