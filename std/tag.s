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

import std.core
import std.unsafe as unsafe

def tagged(cstr value)
    doc "blank tag structure"
    doc "Ensures that 'tag ptr' has a unique type and allocates at least a cstr's"
    doc "(a pointer's) worth of storage so that tag checking is always valid."
    return class value

def unsafe_match(tagged ptr obj, cstr name, any ptr type)
    found = compiler::deref obj.value
    if found!=name fail "does not match"
    return unsafe_mut obj.unsafe::add(tagged::size).compiler::unsafe_attach_type(type)

def unsafe_defer_free(mut tagged ptr obj)
    defer
        unsafe::free obj
    return obj

def tagged_alloc(edit arena<char::tag> arena, nat size) 
    allocated = mut arena.alloc size
    return allocated.buf[allocated.pos]&

def alloc(cstr|blank surface, cstr obj)
    if 0==len str obj fail "empty input name"
    if obj.contains char "," fail "cannot tag a structural type"
    if not surface is blank
        if surface.contains char "," fail "tag surface cannot be structural type"
    CHARS = edit arena char[].alloc 1024
    if surface is blank
        copy "unsafe_defer_free unsafe_mut unsafe::alloc"
    else
        copy "unsafe_mut "
        copy surface
        copy ".tagged_alloc"
    copy "(cstr::size + compiler::size "
    copy obj
    copy ").compiler::unsafe_copy ("
    copy "tagged compiler::value type "
    copy obj
    copy "::tag,"
    copy obj
    copy ").compiler::unsafe_attach_type(tagged[].unsafe_ptr)"
    #unsafe_console().print str CHARS.buf
    return CHARS.buf

def match(cstr obj, cstr type_name)
    CHARS = edit arena char[].alloc 1024
    copy "unsafe_match("
    copy obj
    copy ","
    copy type_name
    copy "::tag," # tag is the monomorphic name
    copy type_name
    copy "[].unsafe_ptr)"
    return CHARS.buf
