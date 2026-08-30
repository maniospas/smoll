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
local import std.core.array
local import std.core.allocators
local import std.unsafe as unsafe


def arena(char::tag)    return arena char[]
def circular(char::tag) return circular char[]
def list(char::tag)     return list char[]
local def alloc(effect edit new CHARS, nat length) 
    if not try ret = mut allocated(char[].alloc length, 0)
        fail "allocation failed"
    return ret
def char_allocator = new|arena<char::tag>|circular<char::tag>|list<char::tag>

def exists(cstr c)
    doc "checks whether a cstr is not zero-initialized"
    {builtins::bool z = c!=0;}
    return z

local def strdat(nat pos, nat length, char first)
    doc "string data without the buffer storage"
    return (pos, length, first)

def str(char ptr unsafe_ptr, strdat dat)
    doc "a string residing on a buffer"
    return class(unsafe_ptr, dat)

def str(char ptr unsafe_ptr, nat pos, nat length)
    doc "a string residing on a buffer"
    {if(length){builtins::compiler::ptr first_pos = unsafe_ptr+pos;builtins::char first = *first_pos;}} # properly zero-initialized otherwise
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

def str(char[] buf, nat pos, "len", nat length)
    doc "a string residing on a buffer"
    doc "The string automatically detects the first character,"
    doc "which is generally tracked for fewer indirections"
    doc "on comparisons of unequal strings."
    if length!=0 first = buf[pos]  # properly zero-initialized otherwise
    return str(buf, pos, length, first)

def str(char[] buf, nat pos, "to", nat endpos)
    doc "a string residing on a buffer"
    doc "The string automatically detects the first character,"
    doc "which is generally tracked for fewer indirections"
    doc "on comparisons of unequal strings."
    length = endpos-pos
    if length!=0 first = buf[pos]  # properly zero-initialized otherwise
    return str(buf, pos, length, first)

def str(char[] buf, nat endpos, "from", nat pos)
    doc "a string residing on a buffer"
    doc "The string automatically detects the first character,"
    doc "which is generally tracked for fewer indirections"
    doc "on comparisons of unequal strings."
    return str(buf, pos len endpos-pos)

def str(cstr c)
    doc "convert to string"
    doc "Defines an implicit constant buffer using the cstr's memory data."
    doc "Subsequent comparisons no longer use the underlying pointer value."
    buf = mut char[]  # mut to create, convert to const on return to prevent resizing
    {buf__unsafe_ptr = c;}
    buf.unsafe_ptr = unsafe_mut buf.unsafe_ptr.compiler::unsafe_attach_type(c)&
    {if(c){builtins::nat length = strlen(c);}} # length initializes to zero
    buf.unsafe_size = length+1  # account for null termination
    try ret = str(buf, 0 len length) # it is impossible for the base string conversion to fail
    return ret

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

def copy(effect edit char_allocator CHARS, str|cstr _other)
    doc "copy a string"
    doc "The result is a fresh string in a new memory surface effect CHARS."
    doc "The result is guaranteed to be a bit-correct replica of the"
    doc "string immediately after. But, even though strings cannot be edited,"
    doc "their supporting memory can be corrupted with new data, especially"
    doc "when they are placed on reused arenas or circular buffers. That"
    doc "said, that would be a logical bug of insufficient sizing or"
    doc "sequencing. Strings remain valid slices of allocated memory regions"
    doc "without runtime failures; they always preserve their size."
    other = str _other
    surface = alloc(CHARS, len other)
    {memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset, other__unsafe_ptr+other__dat__pos, other__dat__length);}
    compiler::unsafe_declare_deep_copy_only()
    unsafe_valid CHARS
    return str(surface.buf, surface.pos, other.dat.length, other.dat.first)

def copy_null_terminated(effect new CHARS, str other)
    doc "create null terminated string"
    doc "Copies a string to a new buffer while ensuring null termination."
    doc "This is mainly useful for supporting 'cstr unsafe_temp'."
    buf = alloc(char[], 1+len other)
    {memcpy(buf__unsafe_ptr, other__unsafe_ptr+other__dat__pos, other__dat__length);}
    {builtins::compiler::ptr endpos = buf__unsafe_ptr+other__dat__length;}
    {*endpos = 0;}
    compiler::unsafe_declare_deep_copy_only()
    return str(buf, 0, other.dat.length, other.dat.first)

def unsafe_temp(str|blank prefix, str other)
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
    doc "passing data to 'compt' or 'macro'.*"
    doc ""
    doc "*Info: This is safe to run during 'compt' or 'macro' in that the latter will fail gracefully.*"
    
    if prefix is blank
        str = new().copy_null_terminated(other)
        _ret = str.unsafe_ptr.unsafe::add str.dat.pos
        {builtins::cstr cstr = _ret;}
        return class(cstr, str)
    else
        buf = alloc(char[], 1+other.dat.length+prefix.dat.length)
        {memcpy(buf__unsafe_ptr, prefix__unsafe_ptr+prefix__dat__pos, prefix__dat__length);}
        {memcpy(buf__unsafe_ptr+prefix__dat__length, other__unsafe_ptr+other__dat__pos, other__dat__length);}
        {builtins::compiler::ptr endpos = buf__unsafe_ptr+other__dat__length+prefix__dat__length;}
        {*endpos = 0;}
        compiler::unsafe_declare_deep_copy_only()
        if prefix.dat.length==0 
            first_character = prefix.dat.first
        else 
            first_character = other.dat.first
        str = str(buf, 0, other.dat.length, first_character)
        _ret = str.unsafe_ptr.unsafe::add str.dat.pos
        {builtins::cstr cstr = _ret;}
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

def revalidate(str s)
    doc "re-obtains the string's first charcater"
    doc "This operation should be rarely used, if at all."
    doc "It basically re-retrieves the first character of"
    doc "the string from its supporting memory surface."
    doc "Normal bug-free code can continue to operate properly"
    doc "even without this operation, but if memory gets"
    doc "corrupted you can use this operation to obtain"
    doc "a string that properly matches the underlying memory"
    doc "for its new data. Here is an example:"
    doc "```"
    doc "CHARS = edit arena alloc 8"
    doc "s1 = copy 123      # place '123' on the arena"
    doc "CHARS.pos = 0      # manually reset the arena"
    doc "copy 456           # place different data on the arena"
    doc "print s1.dat.first # prints 1 (wrong cached first character)"
    doc "print s1           # prints 456"
    doc "s2 = revalidate s1"
    doc "print s2.dat.first # prints 2"
    doc "```"
    return str(s.unsafe_ptr, s.dat.pos, s.dat.length)

def eq(cstr x, cstr y)
    doc "equals"
    doc "Comparing two cstrs is as simple as comparing their addresses,"
    doc "so this operation is exceedingly lightweight and a convenient"
    doc "means for checking for runtime tags. The compier enforces that"
    doc "two same-content cstr will always have the same memory address."
    {builtins::bool z = (x==y);}
    return z

def eq(str x, str y)
    doc "equals"
    doc "This implementation avoids indirection by checking for the first"
    doc "string character first, which will typically be stored only one"
    doc "indirection away instead of two, and is thus very friendly to"
    doc "CPU cache usage when manipulating strings."
    doc "It is interesting to consider what happens"
    doc "should the memory surfaces where strings are stored are corrupted"
    doc "by replacing string data while the string is still used in code"
    doc "(this is a logical bug but memory-safe). In that case, two strings"
    doc "could have the exact same contents but be deemed not equal to"
    doc "each other. This contradiction occurs only when active strings"
    doc "are overwritten with new data, and is in fact a good way to check"
    doc "for logical inconsistencies. In the rare cases where you want"
    doc "to guarantee the outcome of this equality under data corruptions"
    doc "use 'eq(revalidate x, revalidate y)'"
    doc "to re-retrieve the first characters. This is still faster than"
    doc "full comparison of large strings, given that most string comparisons"
    doc "yield false."
    n = len x
    if n!=len y
        return false
    if x.dat.first!=y.dat.first
        return false
    {builtins::bool z = !memcmp(x__unsafe_ptr+x__dat__pos, y__unsafe_ptr+y__dat__pos, n);}
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
    doc "Negates the outcome of equality checks between cstr and strings."
    return not x==y

def copy_null_terminated(effect edit arena<char::tag> CHARS, str|cstr _other)
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
    {builtins::compiler::ptr endpos = CHARS__buf__unsafe_ptr+null_pos;}
    {*endpos=0;}
    prev_pos = CHARS.pos+0 # this is pretty important to decouple a pressumed equality in position when referencing
    CHARS.pos = next_pos
    return str(CHARS.buf, prev_pos, other.dat.length, other.dat.first)

def print(effect edit console CLI, str s, cstr|blank endl)
    doc "print a string"
    if endl is blank
        doc "Ends the line too."
        endl = "\n"
    {printf("%.*s%s", s__dat__length, s__dat__pos+s__unsafe_ptr, endl);}

def get(str s, nat i, "unsafe_assume_inbounds"|blank inbounds_guarantee)
    doc "a character in a string"
    if inbounds_guarantee is blank
        if i>=s.dat.length
            fail "out of bounds"
    return s.unsafe_ptr.unsafe::add(s.dat.pos+i)

def print(effect edit console CLI, char c, cstr|blank endl)
    doc "print a character"
    if endl is blank
        doc "Ends the line too."
        endl = "\n"
    {printf("%c%s", c, endl);}

def slice(cstr|str _s, nat from, nat to)
    doc "get a substring view into a string"
    doc "This operation does not perform any additional allocations"
    doc "or memory moves and is thus convenient for parsing code."
    doc "Explicitly copy the result to move it away from volatile"
    doc "memory, such as circular buffers."
    s = str _s
    if from==to return str ""
    if from>to or to>s.dat.length fail "slice out of string bounds"
    new_length = to-(from assume_smaller)
    if from!=0 new_first = const s[from]
    else new_first = const s.dat.first
    return str(s.unsafe_ptr, s.dat.pos+from, new_length, new_first)

def starts_with(cstr|str _stack, cstr|str _needle)
    doc "check whether a string starts with a particular substring sequence"
    stack = str _stack
    needle = str _needle
    if stack.dat.first!=needle.dat.first return false
    if stack.dat.length<needle.dat.length return false
    return stack.slice(0,len needle)==needle

def ends_with(cstr|str _stack, cstr|str _needle)
    doc "check whether a string ends with a particular substring sequence"
    stack = str _stack
    needle = str _needle
    n = stack.dat.length
    if not try d = n-needle.dat.length
        return false
    ret = stack.slice(d, n)
    return ret==needle

def contains(cstr|str _stack, char needle)
    doc "check whether a string contains a needle character"
    stack = str _stack
    if stack.dat.first==needle return true
    for i in range of len stack
        if stack[i]==needle return true
    return false

def contains(cstr|str _stack, cstr|str _needle)
    doc "check whether a string contains a needle substring"
    stack = str _stack
    needle = str _needle
    d = needle.dat.length
    if not try n = stack.dat.length-d
        return false
    for i in range of n
        try sliced = stack.slice(i,i+d) # guaranteed to not have issues
        if sliced==needle
            return true
    return false

def find(cstr|str _stack, cstr|str _needle, nat|blank _skip, "end_pos"|blank offset)
    doc "find within a string a needle substring's first ocurence"
    stack = str _stack
    needle = str _needle
    d = needle.dat.length
    if not try n = stack.dat.length-d
        fail "not found"
    if not _skip is blank
        skip = mut _skip
    for i in range of n
        try sliced = stack.slice(i,i+d) # guaranteed to not have issues
        if sliced==needle
            if not _skip is blank
                if skip!=0
                    skip = skip-1
                    continue
            if offset is "end_pos"
                return i+len needle
            return i
    fail "not found"

def slice(cstr|str _s, cstr|str _from, cstr|str _to)
    doc "slice a string based on a prefix and postfix (those are not included in the found substring)"
    s = str _s
    first_pos = s.find(_from end_pos)
    substr = s.slice(first_pos, len s)
    return substr.slice(0, substr.find _to)

def nn(str value)
    doc "no new line"
    doc "Given a value, creates a tuple of (value, \"\")."
    doc "This enables the pattern 'print nn value'"
    doc "to print without a new line."
    return (value, "")

def add(effect edit char_allocator\arena\circular CHARS, str|cstr _s1, str|cstr _s2)
    doc "concatenate two strings"
    doc "The result is placed on an allocator effect CHARS."
    doc "This implementation creates a new allocation and is therefore"
    doc "slower compared to using a simple arena, circular buffer, or even"
    doc "an automatically resized list. Since that allocation defers its"
    doc "deallocation too, it cannot be returned from nested code blocks."
    doc "Switch to a different character allocator to produce more dynamic"
    doc "yet safe and fast code."
    s1 = str _s1
    s2 = str _s2
    charalloc = unsafe_mut status CHARS.alloc(len(s1)+len(s2)) # TODO: fix std so that unsafe_mut is not needed
    surface = mut arena charalloc
    start = surface.pos+0
    unsafe_valid CHARS
    unsafe_valid s1
    unsafe_valid s2
    if CHARS is new
        try copy(surface, s1)
        try copy(surface, s2)
    else
        copy(surface, s1)
        copy(surface, s2)
    try ret = str(status surface from start)
    return ret

def add(effect edit arena<char::tag>|circular<char::tag> CHARS, str|cstr _s1, str|cstr _s2)
    doc "concatenate two strings"
    doc "The result is placed on an allocator effect CHARS."
    doc "This implementation ensures that consecutively allocated strings, or"
    doc "adding to strings placed at the end of buffers, does not needlessly"
    doc "copy memory. This way, consecutive additions do not copy the previous"
    doc "result before appending to it. For example, consider the following:"
    doc "```"
    doc "CHARS = edit arena alloc 10"
    doc "s1 = copy 123"
    doc "s2 = copy 456"
    doc "s3 = s1+s2"
    doc "result = s3+copy(78)+copy(9)"
    doc "```"
    doc "The snippet fits the result in a contiguous area on the arena's buffer,"
    doc "with only one copying operation for each character. This does not"
    doc "magically optimize all copying operations, but it does makes most"
    doc "convenient optimizatins when allocating and immediately concatenating."

    s1 = str _s1
    s2 = str _s2
    if s1.unsafe_ptr==CHARS.buf.unsafe_ptr and CHARS.pos==s1.dat.pos+s1.dat.length and CHARS.pos+s2.dat.length<CHARS.buf.unsafe_size
        surface = mut arena unsafe_mut status CHARS.alloc len s2
        copy(surface, s2)
        return str(status surface from s1.dat.pos+0)
    if s1.unsafe_ptr==CHARS.buf.unsafe_ptr and s2.unsafe_ptr==CHARS.buf.unsafe_ptr and s2.dat.pos==s1.dat.pos+s1.dat.length
        return str(CHARS.buf, s2.dat.pos+s2.dat.length from s1.dat.pos)
    
    prev_pos = CHARS.pos
    surface = mut arena unsafe_mut status CHARS.alloc(len(s1)+len(s2)) # TODO: fix std so that unsafe_mut is not needed
    copy(surface, s1)
    copy(surface, s2)
    try ret = str(status surface from prev_pos+0)
    return ret

def empty(cstr c)
    doc "checks that a cstr does not have any characters"
    doc "There are two conditions checked: a) that the cstr is an emptry"
    doc "pair of brackets, b) that the cstr is zero-initialized, corresponding"
    doc "to a null memory address. This function is faster than '0==len str c',"
    doc "as there is no need to actually traverse the character contents."
    return c=="" or not exists c

def empty(str c)
    doc "checks that a string does not have any character"
    doc "Prefer this check because its cstr-checking counterpar is faster"
    doc "than casting to a string."
    return 0==len c

def copy(effect edit char_allocator CHARS, nat n)
    doc "convert a number to a string"
    doc "The result is placed on a character memory surface effect CHARS."
    doc "Example:"
    doc "```"
    if CHARS is new
        doc "CHARS = new()"
    if CHARS is arena
        doc "CHARS = edit arena alloc 10"
    if CHARS is circular
        doc "CHARS = edit circular alloc 10"
    if CHARS is list
        doc "CHARS = edit list char[]"
    doc "s = copy 123"
    doc "```"
    v = mut n
    digits = mut 1
    while v>=10
        v = v/(10 unsafe_assume_nonzero)
        digits = digits+1 
    surface = edit alloc(CHARS, digits)
    v = n
    for i in range of digits
        dig = v.mod(10 unsafe_assume_nonzero)
        {builtins::char digit='0'+dig;}
        surface.buf[surface.pos+digits-(i+1)] = digit
        v = v/(10 unsafe_assume_nonzero)
    unsafe_valid CHARS
    return str(status surface len digits)


# def copy(effect edit char_allocator CHARS, int n)
#     doc "convert a number to a string"

#     negative = n < int 0
#     v = mut n
#     if negative
#         v = neg v
#         offset = 1

#     digits = mut 1
#     temp = mut v
#     while temp>=int 10
#         temp = temp/(int 10 unsafe_assume_nonzero)
#         digits = digits+1

#     surface = edit alloc(CHARS, digits+offset)

#     if negative
#         surface.buf[surface.pos] = '-'

#     for i in range of digits
#         dig = v.mod(10 unsafe_assume_nonzero)
#         {builtins::char digit='0'+dig;}
#         surface.buf[surface.pos+offset+digits-(i+1)] = digit
#         v = v/(10 unsafe_assume_nonzero)

#     unsafe_valid CHARS
#     return str(status surface len digits+offset)


def copy(effect edit char_allocator CHARS, float n)
    doc "convert a number to a string"

    negative = n < 0.0
    value = mut n
    if negative
        value = neg value
        offset = 1

    whole = nat value
    fraction = nat ((value-float whole)*1000.0)

    v = mut whole
    digits = mut 1
    while v>=10
        v = v/(10 unsafe_assume_nonzero)
        digits = digits+1

    surface = edit alloc(CHARS, offset+digits+4)

    if negative
        surface.buf[surface.pos] = '-'

    v = whole
    dig = mut 0 # helper
    for i in range of digits
        dig = v.mod(10 unsafe_assume_nonzero)
        {builtins::char digit='0'+dig;}
        surface.buf[surface.pos+offset+digits-(i+1)] = digit
        v = v/(10 unsafe_assume_nonzero)

    surface.buf[surface.pos+offset+digits] = '.'

    dig = (fraction/100).mod(10 unsafe_assume_nonzero)
    {digit='0'+dig;}
    surface.buf[surface.pos+offset+digits+1] = digit

    dig = (fraction/10).mod(10 unsafe_assume_nonzero)
    {digit='0'+dig;}
    surface.buf[surface.pos+offset+digits+2] = digit

    dig = fraction.mod(10 unsafe_assume_nonzero)
    {digit='0'+dig;}
    surface.buf[surface.pos+offset+digits+3] = digit

    unsafe_valid CHARS
    return str(status surface len offset+digits+4)