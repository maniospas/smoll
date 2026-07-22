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
local import "std/core/numbers.s"

def float(Number x)
    doc "cast to float"
    if not x is float
        doc "May lose information because floats are not exact representation of all integers."
    if x is float
        doc "Serves as a tautology function for code that parses on multiple number types."
    {builtins::float z=x;}
    return z

def int(Number x)
    doc "cast to int"
    if x is float
        doc "May lose information due to truncating."
    if x is nat
        doc "Overflows are mapped to negative integers and are not protected against."
    if x is int
        doc "Serves as a tautology function for code that parses on multiple number types."
    {builtins::int z=x;}
    return z

def nat(Number x)
    doc "cast to nat"
    doc "Converting to natural numbers loses information."
    doc" Failed on negative input because it typically indicates a later error in buffer indexing."
    if x is int and x<int(0)
        fail "cannot convert negative int to nat"
    if x is float and x<float(0)
        fail "cannot convert negative float to nat"
    {builtins::nat value=x;}
    return value

def nat(char x)
    doc "cast to nat"
    doc "Converting a character to a natural number considers"
    doc "its bit representation interpreted as an unsigned number."
    {builtins::nat value=x;}
    return value

def exists(const any ptr x)
    doc "checks that a pointer exists"
    {builtins::bool z = x!=0;}
    return z

def bits(nat value)
    doc "bit representation"
    doc "Retrives the bit representation of a number of shift"
    doc "arithmetics and bitwise operations."
    return class value

def bits(int x)
    doc "bit representation"
    doc "Retrives the bit representation of a number of shift"
    doc "arithmetics and bitwise operations."
    {builtins::nat z=x;}
    return bits z

def bits(float x)
    doc "bit representation"
    doc "Retrives the bit representation of a number of shift"
    doc "arithmetics and bitwise operations."
    {builtins::nat z=0;}
    {memcpy(&z, &x, 8);}
    return bits z

def nat(bits x)
    doc "cast to nat"
    doc "Converts a bit representation to the corresponding natural number."
    return nat x.value

def int(bits x)
    doc "cast to int"
    doc "Converts a bit representation to the corresponding integer."
    {builtins::int z=x__value;}
    return z

def float(bits x)
    doc "cast to float"
    doc "Converts a bit representation to the corresponding float number."
    {builtins::float z=0;}
    {memcpy(&z, &x__value, 8);}
    return z
    
def lshift(bits x, nat y) 
    doc "left shift"
    {builtins::nat z = (x__value<<y);}
    return bits z

def rshift(bits x, nat y) 
    doc "right shift"
    {builtins::nat z = (x__value>>y);}
    return bits z

def xor(bits x, bits y) 
    doc "bitwise xor"
    {builtins::nat z = (x__value^y__value);}
    return bits z

def band(bits x, bits y) 
    doc "bitwise and"
    {builtins::nat z = (x__value&y__value);}
    return bits z

def bor(bits x, bits y) 
    doc "bitwise or"
    {builtins::nat z = (x__value|y__value);}
    return bits z