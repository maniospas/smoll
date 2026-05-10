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

def exists(cstr c)
    doc "checks whether a cstr is not zero-initialized"
    {builtins::bool z = c!=0;}
    return z

local def strdat(nat pos, nat length, char first)
    doc "string data without the buffer storage"
    return (pos, length, first)

def str(const char[] buf, strdat dat)
    doc "a string residing on a buffer"
    return class(buf, dat)

def str(const char[] buf)
    doc "a string residing on the full breadth of a buffer"
    return str(buf, 0, len buf, buf[0])

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
    doc "Subsequent comparisons no longer use the underlying pointer value."
    buf = const char[]  # const because we do not allow resizing operations
    {buf__unsafe_ptr = c;}
    {if(c){builtins::nat length = strlen(c);}} # length initializes to zero
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
    {if(s) {builtins::char c = *s;}}
    return c

def eq(char x, char y)
    doc "equals"
    {builtins::bool z = (x==y);}
    return z

def neq(char x, char y)
    doc "not equals"
    {builtins::bool z = (x!=y);}
    return z

def copy(str|cstr _other)
    doc "copy a string to a new buffer"
    other = str _other
    buf = alloc len other
    {memcpy(buf__unsafe_ptr, other__buf__unsafe_ptr+other__dat__pos, other__dat__length);}
    return str(buf, 0, other.dat.length, other.dat.first)

local def copy_null_terminated(str other)
    doc "copy a string to a new buffer while ensuring null termination"
    doc "This is useful only for supporting unsafe_temporary_cstr."
    buf = alloc 1+len other
    {memcpy(buf__unsafe_ptr, other__buf__unsafe_ptr+other__dat__pos, other__dat__length);}
    {builtins::nat endpos = buf__unsafe_ptr+other__dat__length;}
    {*endpos = 0;}
    return str(buf, 0, other.dat.length, other.dat.first)

def unsafe_temporary_cstr(str other) 
    doc "convert a string to a temporary cstr"
    doc "This function's return is meant to be passed to operating system calls,"
    doc "and will become invalid once the calling site ends."
    doc "It also does not admit proper cstr equality comparisons via pointer values"
    doc "that reflect contents; it will always compare equal only to itself."
    doc "An optimization that safely checks the last element and one position beyond"
    doc "the buffer's contents for null termination is also employed. Modifying the"
    doc "string buffer in any capacity"
    doc "invalidates the null termination property, so in general do not manipulate" 
    doc "strings while this is used in code; it should only be used for operating"
    doc "system calls."
    end_pos = other.dat.pos+other.dat.length
    if end_pos!=0 and end_pos<=len(other.buf) and other.buf[end_pos-1]==char ""
        c = other
    else if end_pos<len(other.buf) and other.buf[end_pos]==char ""
        c = other
    else
        c = copy_null_terminated(other)
    {builtins::cstr ret = c__buf__unsafe_ptr+c__dat__pos;}
    defer
        # will do nothing but ties ret and c together
        if not exists ret 
            del c
    return ret

def unsafe_temporary_cstr(cstr other)
    doc "tautology function for cstr, simplified pattern of converting str|cstr to cstr"
    return other

def bufpos(any[] buf)
    doc "a buffer and mutable position pair"
    doc "The position starts from 0. This structure is often used in leau of pointers"
    doc "to maintain stable references within specified storage buffers."
    pos = mut 0
    return (buf, pos)

def rextend(str s, nat|blank by, char|blank character)
    doc "extend a string right on its enclosing buffer"
    if by is blank
        doc "The extension extends by one character."
        by = 1
    new_length = s.dat.length+by
    if new_length+s.dat.pos>len s.buf fail "string does not fit on buffer"
    if not character is blank
        doc "The extension sets a specified character to all new positions."
        {memset(((char*)s__buf__unsafe_ptr)+s__dat__pos+s__dat__length, character, by);}
    return str(s.buf, s.dat.pos, new_length, s.dat.first)

def lextend(const str s, nat|blank pos)
    doc "extend a string left on its enclosing buffer"
    doc "The extension reached a position left of the string's end. No memory is allocated"
    doc "and the result of the extension is returned. This counts as concatenating the string"
    doc "with its previous data."
    if pos is blank
        doc "The extension reaches the buffer's start."
        pos = 0
    if pos==s.dat.pos return s
    if pos>s.dat.pos+s.dat.length fail "cannot extend the string's left side outside its right range"
    return str(s.buf, pos, (s.dat.pos+s.dat.length)-pos)

def copy(char[] buf, mut nat pos, str|cstr _other)
    doc "copy a string"
    doc "Constructs the copy on the buffer at a given position and returns it."
    doc "The position is mutated to indicate where the string ends (e.g., to copy more strings)."
    doc "This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead."
    other = str _other
    next_pos = pos+len other
    if next_pos>len buf
        fail "string buffer out of memory"
    {memcpy(buf__unsafe_ptr+pos, other__buf__unsafe_ptr+other__dat__pos, other__dat__length);}
    prev_pos = pos+0 # this is pretty important to decouple a pressumed inquality in position when referencing
    pos = next_pos
    return str(buf, prev_pos, other.dat.length, other.dat.first)

def copy_null_terminated(char[] buf, mut nat pos, str|cstr _other)
    doc "copy a string while adding null termination"
    doc "Constructs the copy on the buffer at a given position and returns it."
    doc "The position is mutated to indicate where the string ends (e.g., to copy more strings)."
    doc "This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead."
    other = str _other
    null_pos = pos+len other
    next_pos = null_pos + 1
    if next_pos>len buf
        fail "string buffer out of memory"
    {memcpy(buf__unsafe_ptr+pos, ((char*)other__buf__unsafe_ptr)+other__dat__pos, other__dat__length);}
    {buf__unsafe_ptr[null_pos]=0;}
    prev_pos = pos+0 # this is pretty important to decouple a pressumed inquality in position when referencing
    pos = next_pos
    return str(buf, prev_pos, other.dat.length, other.dat.first)

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

def str(charlist li)
    doc "declare a string on a list's char[] buffer"
    return str li.buffer

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

def slice(str _s, nat from, nat to)
    s = str _s
    if from==to return str ""
    if from<to or to>s.dat.length fail "slice out of string bounds"
    new_length = to-from
    new_pos = s.dat.pos+from
    if from!=0 new_first = s.buf[new_pos]
    else new_first = const s.dat.first
    return str(s.buf, new_pos, new_length, new_first)

def starts_with(cstr|str _stack, cstr|str _needle)
    stack = str _stack
    needle = str _needle
    if stack.dat.first!=needle.dat.first return false
    if stack.dat.length<needle.dat.length return false
    return stack.slice(0,len needle)==needle

def ends_with(cstr|str _stack, cstr|str _needle)
    stack = str _stack
    needle = str _needle
    if stack.dat.length<needle.dat.length return false
    n = len stack
    ret = stack.slice(n-len needle, n)
    return ret==needle

def contains(cstr|str _stack, cstr|str _needle)
    stack = str _stack
    needle = str _needle
    if stack.dat.length<needle.dat.length return false
    d = len needle
    n = len(stack)-d
    i = mut 0
    while i < n
        if stack.slice(i,i+d)==needle
            return true
        i = i+1
    return false