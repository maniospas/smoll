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
    doc "allocate memory"
    doc "Allocates a memory of the provided size in bytes."
    doc ""
    doc "*Warning: Its usage in unsafe and guarded under std/unsafe.s.*"
    {builtins::compiler::ptr allocated = malloc(bytes);}
    if not exists allocated fail "allocation failed"
    return unsafe_mut allocated

def realloc(any ptr allocated, nat bytes)
    doc "reallocate memory"
    doc "Reallocates an allocated memory pointer, potentially invalidating"
    doc "the original one without any safety."
    doc ""
    doc "*Warning: Its usage in unsafe and guarded under std/unsafe.s.*"
    {if(allocated){builtins::compiler::ptr new_allocated = realloc(allocated, bytes);}}
    {else{new_allocated=malloc(bytes);}}
    if not exists new_allocated fail "reallocation failed"
    {allocated=new_allocated;}
    INVALIDATE compiler::ptr
    return new_allocated.compiler::unsafe_attach_type(allocated)

def free(mut any ptr allocated)
    doc "free memory"
    doc "Frees allocated memory."
    doc ""
    doc "*Warning: Its usage in unsafe and guarded under std/unsafe.s.*"
    {if(allocated){free(allocated);allocated=0;}}

def zero(any ptr allocated, nat from, nat to)
    doc "set memory to zero"
    doc "Memsets a memory region to zero."
    doc ""
    doc "*Warning: Its usage in unsafe and guarded under std/unsafe.s.*"
    {ptr_memzero(allocated, from, to);}

def add(any ptr allocated, nat offset)
    doc "pointer addition"
    doc "Adds a natural number offset to a pointer."
    doc ""
    doc "*Warning: Its usage in unsafe and guarded under std/unsafe.s.*"
    {builtins::compiler::ptr element = allocated + offset;}
    return element.compiler::unsafe_attach_type(allocated)

