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
    doc "cast a number to float - may lose information"
    {builtins::float z=x;}
    return z

def int(Number x)
    doc "cast a number to float - may lose information"
    {builtins::int z=x;}
    return z

def nat(Number x)
    doc "cast a number to natural - may lose information and creates an error on negative input"
    if x is int and x<int(0)
        fail "cannot convert negative int to id"
    if x is float and x<float(0)
        fail "cannot convert negative float to id"
    {builtins::nat value=x;}
    return value

def nat(char x)
    doc "cast a character to natural"
    {builtins::nat value=x;}
    return value

def exists(const any ptr x)
    doc "checks that a pointer exists"
    {builtins::bool z = x!=0;}
    return z

def bits(nat value)
    return class value

def bits(int x)
    {builtins::nat z=x;}
    return bits z

def bits(float x)
    {builtins::nat z=0;}
    {memcpy(&z, &x, 8);}
    return bits z

def nat(bits x)
    return x.value

def int(bits x)
    {builtins::int z=x__value;}
    return z

def float(bits x)
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
    doc "right shift"
    {builtins::nat z = (x__value^y__value);}
    return bits z

def and(bits x, bits y) 
    doc "right shift"
    {builtins::nat z = (x__value&y__value);}
    return bits z

def or(bits x, bits y) 
    doc "right shift"
    {builtins::nat z = (x__value|y__value);}
    return bits z