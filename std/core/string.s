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
local import "std/core/array.s"

def strdat(nat pos, nat length, char first)
    return (pos, length, first)

def str(const char[] buf, strdat dat)
    return (buf, dat)

def str(const char[] buf, nat pos, nat length)
    if length!=0
        first = buf[pos]  # properly zero-initialized otherwise
    return str(buf, pos, length, first)

def str(cstr c)
    buf = const char[]  # const because we do not allow resizing operations
    {buf__unsafe_ptr = c;}
    {builtins::nat length = c?strlen(c):0;}
    {buf__unsafe_size = length+1;}  # account for null termination
    return str(buf,0,length)

def len(str s)
    return s.dat.length

def copy(char[] buf, mut nat pos, str other)
    next_pos = pos+len other
    if next_pos>=len buf
        fail "string buffer out of memory"
    {memcpy(((char*)buf__unsafe_ptr)+pos, ((char*)other__buf__unsafe_ptr)+other__dat__pos, other__dat__length*sizeof(char));}
    prev_pos = const pos
    pos = next_pos
    return str(buf, prev_pos, other.dat.length, other.dat.first)

def copy(char[] buf, mut nat pos, cstr other)
    return copy(buf, pos, str other)

def print(str s, cstr|blank endl)
    if endl is blank
        endl = "\n"
    {printf("%.*s%s", (int)s__dat__length, s__dat__pos+(const char*)s__buf__unsafe_ptr, endl);}

local def charlist()
    return list mut char[]

def copy(charlist li, str|cstr _other)
    other = str _other
    prev_prev_length = mut li.length
    prev_length = li.length + len other
    if prev_length >= len li.buffer
        li.buffer = li.buffer.resize(prev_length+prev_length/2+1)
    li.length = prev_length
    return copy(li.buffer, prev_prev_length, other)

def get(str s, nat i)
    return s.buf[s.dat.pos+i]&

def char(str s)
    return s.dat.first

def char(cstr s)
    {builtins::char c = s?s[0]:0;}
    return c

def eq(char x, char y)
    {builtins::bool z = (x==y);}
    return z

def print(char c, cstr|blank endl)
    if endl is blank
        endl = "\n"
    {printf("%c%s", c, endl);}