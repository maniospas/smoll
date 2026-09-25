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
    doc "Allocates a memory of the provided size in bytes. It then checks for"
    doc "a null pointer result, which indicates operating system failure and"
    doc "escapes through an allocation failure. This function does not release"
    doc "the allocated memory, and the produced result is a pointer not associated"
    doc "with any type contents. You can associate the pointer with a specific"
    doc "content type the `compiler::unsafe_attach_type` function. Memory must"
    doc "be released using the `free` function (see that one's documentation)"
    doc "on how ensure safety via usage of `defer`."
    doc ""
    doc "*Warning: Its usage in unsafe and guarded under std/unsafe.s.*"
    {builtins::compiler::ptr allocated = malloc(bytes);}
    if not exists allocated: fail "allocation failed"
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
    if not exists new_allocated: fail "reallocation failed"
    {allocated=new_allocated;}
    if unsafe_invalidation_policy is blank
        INVALIDATE compiler::ptr
    return new_allocated.compiler::unsafe_attach_type(allocated)

def free(mut any ptr allocated)
    doc "free memory"
    doc "Frees up allocated memory. This does not guard automatically against"
    doc "double frees or use-after free. To produce safe code, you must declare"
    doc "a defer that will eventually free allocated memory. Do note that defers are"
    doc "automatically transferred to called scopres, and often the compiler"
    doc "may ask the user to transfer variables via returns, thus ensuring that"
    doc "resources are properly released after last usage. An important note is"
    doc "that defers are always called, even upon errors. In that case, would-be"
    doc "would be zero-initialized without the allocation code being actually called."
    doc "Thus, always check for null pointer values before freeing."
    doc "Example that is safe and should be followed for unsafe resource"
    doc "acquisition code/libraries to make resource safe:"
    doc "```python"
    doc "import std.core"
    doc "import std.unsafe as unsafe"
    doc "def main(CLI)"
    doc "    my_ptr = unsafe::alloc compiler::value float::size"
    doc "    defer"
    doc "        if exists my_ptr: free my_ptr"
    doc "        print \"freed\""
    doc "    print \"allocated\""
    doc "```"
    doc ""
    doc "*Warning: Its usage in unsafe and guarded under std/unsafe.s.*"
    {if(allocated){free(allocated);allocated=0;}}

def zero(any ptr allocated, nat from, nat to)
    doc "set memory to zero"
    doc "Memsets a memory region to zero. This assumes that the pointer"
    doc "is non-zero, and initialized on the desired region. This function"
    doc "is used mainly by safe buffers to zero-out new allocations."
    doc ""
    doc "*Warning: Its usage in unsafe and guarded under std/unsafe.s.*"
    {ptr_memzero(allocated, from, to);}

def add(any ptr allocated, nat offset)
    doc "pointer addition"
    doc "Adds a natural number offset to a pointer. The offset is ALWAYS"
    doc "in bytes, irrespective of the pointer's assocated type. However,"
    doc "the result will have the same associated type and attachmentss."
    doc "Prefer using this function only locally and return a pairs of pointers"
    doc "and offsets, as you would need to alreantively release two pointers"
    doc "(the offset-ed address and the one that should be released)."
    doc ""
    doc "*Warning: Its usage in unsafe and guarded under std/unsafe.s.*"
    {builtins::compiler::ptr element = allocated + offset;}
    return element.compiler::unsafe_attach_type(allocated)

def dereference_ptr(any ptr allocated)
    doc "dereference a pointer pointing to a pointer"
    doc "The result is the internal pointer and has no associated type."
    doc "Pointers directly pointing to pointers induce both indirection"
    doc "and unsafety to the degree that idiomatic code just cannot do"
    doc "without massive safety violations that the unsafety-inducing"
    doc "model is not equipped to bypass without invalidating the"
    doc "type system or derefencing mechanisms. This function performs"
    doc "a well-controlled indirection instead that does not leave"
    doc "any safety tracking residues AT ALL when called."
    doc "To make absolutely sure that using this is properly understood"
    doc "the result is an immutable pointer, which often needs to pass"
    doc "through `unsafe_mut`, for example to be freed."
    doc ""
    doc "*Warning: Its usage in unsafe and guarded under std/unsafe.s.*"
    {builtins::compiler::ptr ret = 0;}
    ptr_size = compiler::value compiler::size compiler::ptr()
    {memcpy(&ret, allocated, ptr_size);}
    return ret
