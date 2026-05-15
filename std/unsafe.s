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
    {builtins:compiler:ptr unsafe_ptr = malloc(bytes);builtins:bool failed=unsafe_ptr==0;}
    if failed fail "allocation failed"
    # allow content modifications afterwards
    return unsafe_ptr 

def realloc(any ptr allocated__unsafe_ptr, nat bytes) 
    # the __unsafe_ptr suffix is needed to skip invalidation internally
    INVALIDATE compiler:ptr
    {if(allocated__unsafe_ptr){builtins:compiler:ptr new_allocated = realloc(allocated__unsafe_ptr, bytes);}}
    {else{new_allocated=malloc(bytes);}}
    {builtins:bool failed=new_allocated==0;}
    if failed fail "reallocation failed"
    unsafe_return new_allocated.compiler:attach_type(allocated__unsafe_ptr)

def free(mut any ptr allocated)
    {if(allocated){free(allocated);}} 
    # automatically sets to zero address because it's a returned invalidated variable
    INVALIDATE compiler:ptr

def zero(any ptr allocated, nat from, nat to)
    # memzero is an abstraction over memset to ensure that the interpreter can understand it
    {ptr_memzero(allocated, from, to);}

def add(any ptr allocated, nat offset)
    # ptr_add is an abstraction over char cast and addition to ensure that the interpreter can understand it
    {builtins:compiler:ptr element = allocated + offset;}
    unsafe_return element.compiler:attach_type(allocated)