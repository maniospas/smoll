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
local import "std/core/convert.s"
local import "std/core/range.s"
local import "std/core/string.s"
local import "std/core/array.s"

def char(console)
    {builtins::int _c=getchar();}
    {builtins::bool iseof = (_c==EOF);}
    if iseof fail "unexpected end of console read"
    {builtins::char c = _c;}
    return c

def is_number(char c)
    {builtins::bool ge=(c>='0');}
    {builtins::bool le=(c<='9');}
    return ge and le

def int(console console)
    doc "reads an integer from the console"
    while try c=mut char console 
        if not "\t ".contains c break
    neg = c==char"-"
    if neg or c==char "+" 
        c = char console
    number = mut int 0
    digits = mut 0
    eof = mut false
    while is_number c
        {builtins::int digit = (c-'0');}
        number = number*int(10)+digit
        digits = digits + 1
        eof = not try c = char console
        if eof break
    if neg number = int(0)-number
    if digits==0
        while not eof
            if "\n\r".contains c break
            eof = not try c=char console
        fail "user input was not a float"
    return const number

def nat(console console)
    doc "reads an unsigned integer from the console"
    while try c=mut char console 
        if not "\t ".contains c break
    number = mut nat 0
    digits = mut 0
    eof = mut false
    while is_number c
        {builtins::nat digit = (c-'0');}
        number = number*10+digit
        digits = digits + 1
        eof = not try c = char console
        if eof break
    if digits==0
        while not eof
            if "\n\r".contains c break
            eof = not try c=char console
        fail "user input was not a float"
    return const number

def float(console console)
    doc "reads a float from the console"
    while try c=mut char console 
        if not "\t ".contains c break
    neg = c==char"-"
    if neg or c==char "+" 
        c = char console
    number = mut 0.0
    digits = mut 0
    eof = mut false
    while is_number c
        {builtins::float digit = (c-'0');}
        number = number*10.0+digit
        digits = digits + 1
        eof = not try c = char console
        if eof break
    if c==char "." and not eof
        c = char console
        base = mut 0.1
        while is_number c
            {builtins::float decimal_digit = (c-'0');}
            number = number+decimal_digit*base
            base = base*0.1
            digits = digits + 1
            eof = not try c = char console 
            if eof break
    if neg number = 0.0-number
    if digits==0
        while not eof
            if "\n\r".contains c break
            eof = not try c=char console
        fail "user input was not a float"
    return const number

def str(effect edit char_allocator CHARS, edit console console)
    doc "reads a string from the console"
    if CHARS is arena<char::name>
        doc "The read string is placed on an arena while consuming only the necessarily minimum size."
        ch = edit CHARS
    else 
        if CHARS is new
            doc "The read string is placed onto memory that keeps being reallocated to accommodate its size."
            doc "The resulting memory will consume exactly the required size in bytes."
            ch = edit arena ref char[].alloc 8
        else
            compiler::skip()
    if ch.buf.unsafe_align.nat()!=1 fail "can only define strings on contiguous buffers"
    if ch.buf.unsafe_offset.nat()!=0 fail "can only define strings on non-offset buffers"
    start = const ch.pos
    while true
        {builtins::int _c = getchar();}
        {if(_c=='\n'||_c=='\r'||_c==EOF){break;}}
        if ch.pos>=ch.buf.unsafe_size 
            if CHARS is new
                ch.buf = ch.buf.resize ch.buf.unsafe_size*3/2
            else
                fail "read string does not fit on buffer"
        ptr_pos = ch.buf.unsafe_ptr+ch.pos
        {*ptr_pos=_c;}
        ch.pos = ch.pos+1
    if CHARS is arena<char::name>
        CHARS.pos = ch.pos
    if CHARS is new
        if ch.pos==0
            ch.pos = ch.pos+1
        ch.buf = ch.buf.resize(ch.pos unsafe)
    return str(ch.buf, start to ch.pos)

def int(cstr|str _s)
    doc "converts a string to an integer"
    s = str _s
    if 0==len s fail "invalid int conversion from empty string"
    number = mut int 0
    i = mut 0
    negative = s[0]==char "-"
    if negative
        i = i+1
        if i==len s fail "invalid int conversion from string with only a sign"
    else if s[i]==char "+"
        i = i+1
        if i==len s fail "invalid int conversion from string with only a sign"
    while i<len s
        c = s[i]
        {builtins::bool is_digit=c>='0' && c<='9'; builtins::int digit=c-'0';}
        if not is_digit fail "invalid integer int from non-number string"
        number = number*int(10)+digit
        i = i+1
    if negative 
        number = int(0)-number
    return const number

def nat(cstr|str _s)
    doc "converts a string to an unsigned integer"
    s = str _s
    if 0==len s fail "invalid nat conversion from empty string"
    number = mut nat 0
    it = mut range of len s
    while try i=next it
        c = s[i]
        {builtins::bool is_digit=c>='0' && c<='9'; builtins::nat digit=c-'0';}
        if not is_digit fail "invalid nat conversion from non-number string"
        number = number*10+digit
    return const number

def float(cstr|str _s)
    doc "converts a string to a float"
    s = str _s
    if 0==len s fail "invalid float conversion from empty string"
    number = mut 0.0
    i = mut 0
    if 0==len s fail "invalid float conversion from empty string"
    i = mut 0
    negative = s[0]==char "-"
    if negative
        i = i+1
        if i==len s fail "invalid float conversion from string with only a sign"
    else if s[i]==char "+"
        i = i+1
        if i==len s fail "invalid float conversion from string with only a sign"
    while i<len s
        c = s[i]
        {builtins::bool is_digit=c>='0' && c<='9'; builtins::float digit=c-'0';}
        is_dot = c==char "." 
        if is_dot
            i = i+1
            break
        if not is_digit fail "invalid float conversion from non-number string"
        number = number*10.0+digit
        i = i+1
    if is_dot
        if i==len s fail "invalid float conversion from string without a value after the dot"
        base = mut 0.1
        while i<len s
            d = s[i]
            {builtins::bool is_decimal_digit=d>='0' && d<='9'; builtins::float decimal_digit=d-'0';}
            if not is_decimal_digit fail "invalid float conversion from non-number string"
            number = number+decimal_digit*base
            base = base*0.1
            i = i+1
    if negative
        number = 0.0-number
    return const number
