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

local import "builtins"
local import std.core.numbers
local import std.core.array
local import std.core.string as string

local def strdat(nat _pos, nat _length)
    pos = nat16 _pos
    length = nat16 _length
    return (pos,length)

def str(string::str s)
    doc "create a compact str"
    doc "The created str variation should be used only for storng and"
    doc "retrieving data with 'unpack' for memory efficiency."
    unsafe_ptr = s.unsafe_ptr
    dat = strdat(s.dat.pos, s.dat.length)
    return class(unsafe_ptr, dat)

def str(cstr s)
    doc "create a compact str"
    doc "The created str variation should be used only for storng and"
    doc "retrieving data with 'unpack' for memory efficiency."
    return str string::str s

def unpack(str m)
    doc "unpack a compact str"
    doc "The created compact str is unpacked into its 'nat'-using representation"
    doc "that is more efficient for computations in 64-bit architectures."
    return string::str(m.unsafe_ptr, nat m.dat.pos, nat m.dat.length)

def unpack(const char[] buf, strdat dat)
    pos = nat dat.pos
    length = nat dat.length
    if pos+length>len buf fail "string does not fit on buffer" 
    return string::str(buf.unsafe_ptr, pos, length)
