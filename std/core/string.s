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
local import "std/core/allocators.s"
local import "std/unsafe.s" as unsafe


local def char_arena()
    return arena char[]
local def char_circular()
    return circular char[]
local def char_list()
    return list mut char[]
local def alloc(effect edit new CHARS, nat length)
    return allocated(char[].alloc length, 0)
def char_allocator = new|char_arena|char_circular|char_list

def exists(cstr c)
    doc "checks whether a cstr is not zero-initialized"
    {builtins:bool z = c!=0;}
    return z

local def strdat(nat pos, nat length, char first)
    doc "string data without the buffer storage"
    return (pos, length, first)

def str(char ptr unsafe_ptr, strdat dat)
    doc "a string residing on a buffer"
    return class(unsafe_ptr, dat)

def str(char ptr unsafe_ptr, nat pos, nat length)
    doc "a string residing on a buffer"
    {if(length){builtins:compiler:ptr first_pos = unsafe_ptr+pos;builtins:char first = *first_pos;}} # properly zero-initialized otherwise
    return str(unsafe_ptr, pos, length, first)

def str(char[] buf, strdat dat)
    doc "a string residing on a buffer"
    unsafe_ptr = buf.unsafe_ptr
    if buf.unsafe_align.nat()!=1 fail "can only define strings on contiguous buffers"
    if buf.unsafe_offset.nat()!=0 fail "can only define strings on non-offset buffers"
    return str(unsafe_ptr, dat)

def str(char[] buf, nat|blank length)
    doc "a string residing on the full breadth of a buffer"
    if length is blank
        length = len buf
    if not length is blank
        if length>len buf fail "string does not fit on buffer"
    return str(buf, 0, length, buf[0])

def str(str other)
    doc "tautology function for strings"
    return other

def str(char[] buf, nat pos, "lento", nat length)
    doc "a string residing on a buffer"
    doc "The string automatically detects the first character,"
    doc "which is generally tracked for fewer negative indirections"
    doc "on negative comparisons."
    if length!=0 first = buf[pos]  # properly zero-initialized otherwise
    return str(buf, pos, length, first)

def str(char[] buf, nat pos, "to", nat endpos)
    doc "a string residing on a buffer"
    doc "The string automatically detects the first character,"
    doc "which is generally tracked for fewer negative indirections"
    doc "on negative comparisons."
    length = endpos-pos
    if length!=0 first = buf[pos]  # properly zero-initialized otherwise
    return str(buf, pos, length, first)

def str(char[] buf, nat endpos, "from", nat pos)
    doc "a string residing on a buffer"
    doc "The string automatically detects the first character,"
    doc "which is generally tracked for fewer negative indirections"
    doc "on negative comparisons."
    return str(buf, pos lento endpos-pos)

def str(cstr c)
    doc "convert to string"
    doc "Defines an implicit constant buffer using the cstr's memory data."
    doc "Subsequent comparisons no longer use the underlying pointer value."
    buf = mut char[]  # mut to create, convert to const on return to prevent resizing
    {buf__unsafe_ptr = c;}
    buf.unsafe_ptr = unsafe_mut buf.unsafe_ptr.compiler:attach_type(c)&&
    {if(c){builtins:nat length = strlen(c);}} # length initializes to zero
    buf.unsafe_size = length+1  # account for null termination
    return str(buf,0 lento length)

def len(str s)
    doc "string length"
    return s.dat.length

def char(str s)
    doc "treat as character"
    doc "The first character of a string is extracted,"
    doc "for example to write `c = char str \"C\"`."
    return s.dat.first

def char(cstr s)
    doc "treat as character"
    doc "The first character of a string is extracted,"
    doc "for example to write `c = char \"C\"`."
    {if(s) {builtins:char c = *s;}}
    return c

def eq(char x, char y)
    doc "equals"
    {builtins:bool z = (x==y);}
    return z

def neq(char x, char y)
    doc "not equals"
    {builtins:bool z = (x!=y);}
    return z

def copy(effect edit char_allocator CHARS, str|cstr _other)
    doc "copy a string to a new buffer"
    other = str _other
    surface = alloc(CHARS, len other)
    {memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset, other__unsafe_ptr+other__dat__pos, other__dat__length);}
    return str(surface.buf, 0, other.dat.length, other.dat.first)

def copy_null_terminated(effect new CHARS, str other)
    doc "create null terminated string"
    doc "Copies a string to a new buffer while ensuring null termination."
    doc "This is mainly useful for supporting 'cstr unsafe_temp'."
    buf = alloc(mut char[], 1+len other)
    {memcpy(buf__unsafe_ptr, other__unsafe_ptr+other__dat__pos, other__dat__length);}
    {builtins:compiler:ptr endpos = buf__unsafe_ptr+other__dat__length;}
    {*endpos = 0;}
    return str(buf, 0, other.dat.length, other.dat.first)

def unsafe_temp(str other)
    doc "convert a string to a temporary null-terminated (cstr,str) pair"
    doc "This function's return is meant to be passed to operating system calls,"
    doc "or return from compt with the pattern 'cstr unsafe_temp string_value'."
    doc "It will become invalid once the calling site ends."
    doc "It also does not admit proper cstr equality comparisons via pointer values"
    doc "that reflect contents; it will always compare equal only to itself."
    doc "An optimization that safely checks the last element and one position beyond"
    doc "the buffer's contents for null termination is also employed. Modifying the"
    doc "string buffer in any capacity"
    doc "invalidates the null termination property, so in general do not manipulate" 
    doc "strings while this is used in code; use it only for its intended purposes."
    doc ""
    doc "*Warning: This is unsafe, unless 'cstr unsafe_temp' is the last call before"
    doc "passing data to 'system' or 'compt'.*"
    doc ""
    doc "*Info: This is safe to run during 'compt' in that the latter will fail gracefully.*"
    str = new().copy_null_terminated(other)
    _ret = str.unsafe_ptr+str.dat.pos
    {builtins:cstr cstr = _ret;}
    return class(cstr, str)

def unsafe_temp(cstr cstr)
    doc "tautology function for cstr"
    doc "This is mainly used as a stt-input counterpart for converting str|cstr to cstr."
    str = str cstr
    return (cstr, str)

def cstr(unsafe_temp value)
    doc "extract the cstr from unsafe_temp string"
    doc "This function's return is meant to be passed to operating system calls,"
    doc "or to comptime returns with the pattern 'cstr unsafe_temp string_value'."
    return value.cstr

def endpos(const str s)
    doc "the end position of a string"
    doc "This position is computed relative to its start in its"
    doc "enclosing buffer."
    return s.dat.pos+s.dat.length

def eq(cstr x, cstr y)
    doc "equals"
    {builtins:bool z = (x==y);}
    return z

def eq(str x, str y)
    doc "equals"
    n = len x
    if n!=len y
        return false
    if x.dat.first!=y.dat.first
        return false
    {builtins:bool z = !memcmp(x__unsafe_ptr+x__dat__pos, y__unsafe_ptr+y__dat__pos, n);}
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

def copy_null_terminated(effect edit char_arena CHARS, str|cstr _other)
    doc "copy a string while adding null termination"
    doc "Constructs the copy on the buffer at a given position and returns it."
    doc "The position is mutated to indicate where the string ends (e.g., to copy more strings)."
    doc "This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead."
    other = str _other
    null_pos = CHARS.pos+len other
    next_pos = null_pos + 1
    if next_pos>len CHARS.buf
        fail "string buffer out of memory"
    {memcpy(CHARS__buf__unsafe_ptr+CHARS__pos, other__unsafe_ptr+other__dat__pos, other__dat__length);}
    {builtins:compiler:ptr endpos = CHARS__buf__unsafe_ptr+null_pos;}
    {*endpos=0;}
    prev_pos = CHARS.pos+0 # this is pretty important to decouple a pressumed equality in position when referencing
    CHARS.pos = next_pos
    return str(CHARS.buf, prev_pos, other.dat.length, other.dat.first)

def print(effect mut console CLI, str s, cstr|blank endl)
    doc "print a string"
    if endl is blank
        doc "Ends the line too."
        endl = "\n"
    {printf("%.*s%s", s__dat__length, s__dat__pos+s__unsafe_ptr, endl);}

def get(str s, nat i)
    doc "a character in a string"
    return s.unsafe_ptr.unsafe:add(s.dat.pos+i)

def print(effect mut console CLI, char c, cstr|blank endl)
    doc "print a character"
    if endl is blank
        doc "Ends the line too."
        endl = "\n"
    {printf("%c%s", c, endl);}

def slice(cstr|str _s, nat from, nat to)
    s = str _s
    if from==to return str ""
    if from>to or to>s.dat.length fail "slice out of string bounds"
    new_length = to-from
    if from!=0 new_first = s[from]
    else new_first = const s.dat.first
    return str(s.unsafe_ptr, s.dat.pos+from, new_length, new_first)

def starts_with(cstr|str _stack, cstr|str _needle)
    stack = str _stack
    needle = str _needle
    if stack.dat.first!=needle.dat.first return false
    if stack.dat.length<needle.dat.length return false
    return stack.slice(0,len needle)==needle

def ends_with(cstr|str _stack, cstr|str _needle)
    stack = str _stack
    needle = str _needle
    if stack.dat.length<needle.dat.length
        return false
    n = len stack
    ret = stack.slice(n-len needle, n)
    return ret==needle

def contains(cstr|str _stack, char needle)
    stack = str _stack
    if stack.dat.first==needle return true
    for i in range of len stack
        if stack[i]==needle return true
    return false

def contains(cstr|str _stack, cstr|str _needle)
    stack = str _stack
    needle = str _needle
    if stack.dat.length<needle.dat.length return false
    d = len needle
    n = len(stack)-d
    for i in range of n
        if stack.slice(i,i+d)==needle
            return true
    return false

def nn(str value)
    doc "no new line"
    doc "Given a value, creates a tuple of (value, \"\")."
    doc "This enables the pattern 'print nn value'"
    doc "to print without a new line."
    return (value, "")

def add(effect edit char_allocator CHARS, str|cstr _s1, str|cstr _s2)
    s1 = str _s1
    s2 = str _s2
    surface = arena unsafe_mut status CHARS.alloc(len(s1)+len(s2)) # TODO: fix std so that unsafe_mut is not needed
    start = surface.pos+0
    copy(surface, s1)
    copy(surface, s2)
    return str(status surface from start)