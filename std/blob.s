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

local import std.core

def unsafe_blob(any& unsafe_ptr, 1|2|4|8|16|32|64 size)
    doc "a pointer to an in-memory blob of data fixed size"
    return class compiler::args()

def blob(1|2|4|8|16|32|64 size)
    doc "a pointer to an in-memory blob of data fixed size"
    unsafe_ptr = compiler::ptr()
    return unsafe_blob(unsafe_ptr, size)

def as(unsafe_blob b, char[] _ret)
    doc "reinterpret a blob of data as a character array"
    ret = unsafe_mut _ret
    if ret.unsafe_size!=0 or exists ret.unsafe_ptr
        fail "cannot cast a blob onto an already allocated array"
    ret.unsafe_align = nat32 1
    ret.unsafe_offset = nat32 0
    ret.unsafe_size = compiler::value b.size
    ret.unsafe_ptr = unsafe_mut b.unsafe_ptr.compiler::unsafe_attach_type(ret.unsafe_ptr)&
    return const ret

def find_compatible_size(nat value)
    doc "macro for determining blob sizes that are lesser than the data structure"
    CHARS = edit arena alloc 8
    copy "type "
    if value>=64: copy 64
    else if value>=32: copy 32
    else if value>=16: copy 16
    else if value>=8: copy 8
    else if value>=4: copy 4
    else if value>=2: copy 2
    else if value>=1: copy 1
    else: copy 0
    return CHARS.buf

def blob(cstr pointer_name)
    doc "macro for creating a blob given a data pointer"
    CHARS = edit arena alloc 1024
    copy "unsafe_blob("
    copy pointer_name
    copy ", macro<find_compatible_size>(compiler::size compiler::deref "
    copy pointer_name
    copy "))"
    return CHARS.buf