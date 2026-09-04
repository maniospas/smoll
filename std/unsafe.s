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

def neq(any ptr x, any ptr y)
    doc "not equal"
    doc "Compares the address of two pointers."
    {builtins::bool z=(x!=y);}
    return z

def alloc(nat bytes)
    doc "allocate memory"
    doc "Allocates a memory of the provided size in bytes."
    doc ""
    doc "*Warning: Its usage in unsafe and guarded under std/unsafe.s.*"
    {builtins::compiler::ptr allocated = malloc(bytes);}
    if not exists allocated fail "allocation failed"
    return unsafe_mut allocated

def realloc(any ptr allocated, nat bytes, "super_unsafe"|blank unsafe_invalidation_policy)
    doc "reallocate memory"
    doc "Reallocates an allocated memory pointer, potentially invalidating"
    doc "the original one without any safety. As a stopgap measure against"
    doc "unforeseen complications, this function is set to invalidate all"
    doc "pointers in the calling context and parrent contexts, BESIDES"
    doc "calling function mutable arguments and calling function outputs,"
    doc "as those have the intent of immediate reuse."
    doc ""
    doc "*Warning: Its usage in unsafe and guarded under std/unsafe.s.*"
    {if(allocated){builtins::compiler::ptr new_allocated = realloc(allocated, bytes);}}
    {else{new_allocated=malloc(bytes);}}
    if not exists new_allocated fail "reallocation failed"
    {allocated=new_allocated;}
    if unsafe_invalidation_policy is blank
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

def dereference_ptr(any ptr allocated)
    doc "dereference a pointer pointing to a pointer"
    doc "Pointers directly pointing to pointers induce both indirection"
    doc "and unsafety to the degree that idiomatic code just cannot do"
    doc "without massive safety violations that the unsafety-inducing"
    doc "model is not equipped to bypass without invalidating the"
    doc "type system or derefencing mechanisms. This function performs"
    doc "a well-controlled indirection instead that does not leave"
    doc "any safety tracking residues AT ALL when called."
    doc "To make absolutely sure that using this is properly understood"
    doc "the result is an immutable pointer, which often needs to be pass"
    doc "through `unsafe_mut`, for example to be freed."
    doc ""
    doc "*Warning: Its usage in unsafe and guarded under std/unsafe.s.*"
    {builtins::compiler::ptr ret = 0;}
    ptr_size = compiler::size compiler::ptr()
    {memcpy(&ret, allocated, ptr_size);}
    return ret