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

local def strdat(nat pos, nat length, char first)
    doc "string data without the buffer storage"
    return (pos, length, first)

def str(const char[] buf, strdat dat)
    doc "a string residing on a buffer"
    return class(buf, dat)

def str(str other)
    doc "tautology function for strings"
    return other

def str(const char[] buf, nat pos, nat length)
    doc "a string residing on a buffer that automatically detects the first character"
    if length!=0
        first = buf[pos]  # properly zero-initialized otherwise
    return str(buf, pos, length, first)

def str(cstr c)
    doc "convert to string"
    doc "Defines an implicit constant buffer using the cstr's memory data."
    buf = const char[]  # const because we do not allow resizing operations
    {buf__unsafe_ptr = c;}
    {builtins::nat length = c?strlen(c):0;}
    {buf__unsafe_size = length+1;}  # account for null termination
    return str(buf,0,length)

def len(str s)
    doc "string length"
    return s.dat.length

def char(str s)
    doc "treat as character"
    doc "The first character of a string is extracted, for example to write `c = char str \"C\"`."
    return s.dat.first

def char(cstr s)
    doc "treat as character"
    doc "The first character of a string is extracted, for example to write `c = char \"C\"`."
    {builtins::char c = s?s[0]:0;}
    return c

def eq(char x, char y)
    doc "equals"
    {builtins::bool z = (x==y);}
    return z

def neq(char x, char y)
    doc "not equals"
    {builtins::bool z = (x!=y);}
    return z

def copy(str other)
    doc "copy a string to a new buffer"
    buf = alloc len other
    {memcpy(((char*)buf__unsafe_ptr), ((char*)other__buf__unsafe_ptr)+other__dat__pos, other__dat__length*sizeof(char));}
    return str(buf, 0, other.dat.length, other.dat.first)

def copy(cstr other)
    doc "copy a cstr to a new buffer"
    return copy str other

local def copy_null_terminated(str other)
    doc "copy a string to a new buffer while ensuring null termination"
    doc "This is useful only for supporting unsafe_temporary_cstr."
    buf = alloc 1+len other
    {memcpy(((char*)buf__unsafe_ptr), ((char*)other__buf__unsafe_ptr)+other__dat__pos, other__dat__length*sizeof(char));}
    {((char*)buf__unsafe_ptr)[other__dat__length] = 0;}
    return str(buf, 0, other.dat.length, other.dat.first)

def unsafe_temporary_cstr(str other) 
    doc "convert a string to a temporary cstr"
    doc "This function's return is meant to be passed to operating system calls,"
    doc "and will become invalid once the calling site ends."
    doc "It also does not admit proper cstr equality comparisons via pointer values"
    doc "that reflect contents; it will always compare equal only to itself."
    doc "An optimization that safely checks beyond the buffer's contents for null"
    doc "termination is also employed. Modifying the string buffer in any capacity"
    doc "invalidates the null termination property, so in general do not make string"
    doc "copies or additions while this is used in code."
    if len(other)+other.dat.pos<len(other.buf) and other.buf[len other]==char ""
        c = other
    else
        c = copy_null_terminated(other)
    {builtins::cstr ret = other__buf__unsafe_ptr;}
    return ret

def unsafe_temporary_cstr(cstr other)
    doc "tautology function for cstr, simplified pattern of converting str|cstr to cstr"
    return other

def copy(char[] buf, mut nat pos, str other)
    doc "copy a string"
    doc "Constructs the copy on the buffer at a given position and returns it."
    doc "The position is mutated to indicate where the string ends (e.g., to copy more strings)."
    doc "This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead."
    next_pos = pos+len other
    if next_pos>len buf
        fail "string buffer out of memory"
    {memcpy(((char*)buf__unsafe_ptr)+pos, ((char*)other__buf__unsafe_ptr)+other__dat__pos, other__dat__length*sizeof(char));}
    prev_pos = pos+0 # this is pretty important to decouple a pressumed inquality in position when referencing
    pos = next_pos
    return str(buf, prev_pos, other.dat.length, other.dat.first)

def copy(char[] buf, mut nat pos, cstr other)
    doc "copy a cstr"
    doc "Constructs the copy on the buffer at a given position and returns it as a string."
    doc "The position is mutated to indicate where the string ends (e.g., to copy more strings)."
    doc "This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead."
    return copy(buf, pos, str other)

def print(str s, cstr|blank endl)
    doc "print a string"
    if endl is blank
        doc "Ends the line too."
        endl = "\n"
    if s.dat.length+s.dat.pos>s.buf.unsafe_size
        fail "string out of bounds"
    {printf("%.*s%s", (int)s__dat__length, s__dat__pos+(const char*)s__buf__unsafe_ptr, endl);}

local def charlist()
    return list mut char[]

def copy(charlist li, str|cstr _other)
    doc "copy a string"
    doc "Constructs the copy on a buffer managed by a list."
    doc "The list may automatically resize its managed buffer to fit the new string."
    doc "This operation therefore destabilizes memory, and the `.dat` segment of strings should be obtained."
    other = str _other
    prev_prev_length = mut li.length
    prev_length = li.length + len other
    if prev_length >= len li.buffer
        li.buffer = li.buffer.resize(prev_length+prev_length/2+1)
    li.length = prev_length
    return copy(li.buffer, prev_prev_length, other)

def get(str s, nat i)
    doc "a character in a string"
    return s.buf[s.dat.pos+i]&

def eq(cstr x, cstr y)
    doc "equals"
    {builtins::bool z = (x==y);}
    return z

def eq(str x, str y)
    doc "equals"
    n = len x
    if n!=len y
        return false
    if x.dat.first!=y.dat.first
        return false
    {builtins::bool z = !memcmp(((char*)x__buf__unsafe_ptr)+x__dat__pos, ((char*)y__buf__unsafe_ptr)+y__dat__pos, n);}
    return z

def eq(str x, cstr y)
    doc "equals"
    if x.dat.first != char y
        return false
    return x==str y

def eq(cstr x, str y)
    doc "equals"
    if y.dat.first != char x
        return false
    return y==str x

def neq(str|cstr x, str|cstr y)
    doc "not equals"
    return not x==y

def print(char c, cstr|blank endl)
    doc "print a character"
    if endl is blank
        doc "Ends the line too."
        endl = "\n"
    {printf("%c%s", c, endl);}