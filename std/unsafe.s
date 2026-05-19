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
    {builtins:compiler:ptr allocated = malloc(bytes);}
    if not exists allocated fail "allocation failed"
    return allocated

def realloc(any ptr allocated, nat bytes)
    {if(allocated){builtins:compiler:ptr new_allocated = realloc(allocated, bytes);}}
    {else{new_allocated=malloc(bytes);}}
    if not exists new_allocated fail "reallocation failed"
    {allocated=new_allocated;}
    return new_allocated.compiler:attach_type(allocated)

def free(mut any ptr allocated)
    {if(allocated){free(allocated);}}

def zero(any ptr allocated, nat from, nat to)
    {ptr_memzero(allocated, from, to);}

def add(any ptr allocated, nat offset)
    {builtins:compiler:ptr element = allocated + offset;}
    return element.compiler:attach_type(allocated)
