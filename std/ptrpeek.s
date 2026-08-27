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

local import std.core
local import compiler as cp

local def NumberOrPtr = Number&|Number
local def to_number(NumberOrPtr x)
    if x is Number
        return x
    else
        return cp::deref x

local def already_defined(NumberOrPtr x, NumberOrPtr y)
    if x is Number and y is Number
        return compiler::true()
    else
        return compiler::false()

local def String = str|cstr

def eq(String& x, String y) 
    doc "overloads an operator while dereferencing pointer data"
    return y==cp::deref x
    
def eq(String x, String& y)
    doc "overloads an operator while dereferencing pointer data"
    return x==cp::deref y

def eq(String& x, String& y) 
    doc "overloads an operator while dereferencing pointer data"
    return cp::deref(x)==cp::deref y

def neq(String& x, String y) 
    doc "overloads an operator while dereferencing pointer data"
    return y!=cp::deref x
    
def neq(String x, String& y)
    doc "overloads an operator while dereferencing pointer data"
    return x!=cp::deref y

def neq(String& x, String& y) 
    doc "overloads an operator while dereferencing pointer data"
    return cp::deref(x)!=cp::deref y

def eq(NumberOrPtr _x, NumberOrPtr _y)
    doc "overloads an operator while dereferencing pointer data"
    x = to_number _x
    y = to_number _y
    if is_different(x,y)
        cp::skip()
    if already_defined(_x, _y)
        cp::skip()
    return x==y

def neq(NumberOrPtr _x, NumberOrPtr _y)
    doc "overloads an operator while dereferencing pointer data"
    if already_defined(_x, _y)
        cp::skip()
    x = to_number _x
    y = to_number _y
    if is_different(x,y)
        cp::skip()
    return x!=y

def add(NumberOrPtr _x, NumberOrPtr _y)
    doc "overloads an operator while dereferencing pointer data"
    if already_defined(_x, _y)
        cp::skip()
    x = to_number _x
    y = to_number _y
    if is_different(x,y)
        cp::skip()
    return x+y

def sub(NumberOrPtr _x, NumberOrPtr _y)
    doc "overloads an operator while dereferencing pointer data"
    if already_defined(_x, _y)
        cp::skip()
    x = to_number _x
    y = to_number _y
    if is_different(x,y)
        cp::skip()
    return x-y

def mul(NumberOrPtr _x, NumberOrPtr _y)
    doc "overloads an operator while dereferencing pointer data"
    if already_defined(_x, _y)
        cp::skip()
    x = to_number _x
    y = to_number _y
    if is_different(x,y)
        cp::skip()
    return x*y

def div(NumberOrPtr _x, NumberOrPtr _y)
    doc "overloads an operator while dereferencing pointer data"
    if already_defined(_x, _y)
        cp::skip()
    x = to_number _x
    y = to_number _y
    if is_different(x,y)
        cp::skip()
    return x/y

def lt(NumberOrPtr _x, NumberOrPtr _y)
    doc "overloads an operator while dereferencing pointer data"
    if already_defined(_x, _y)
        cp::skip()
    x = to_number _x
    y = to_number _y
    if is_different(x,y)
        cp::skip()
    return x<y

def gt(NumberOrPtr _x, NumberOrPtr _y)
    doc "overloads an operator while dereferencing pointer data"
    if already_defined(_x, _y)
        cp::skip()
    x = to_number _x
    y = to_number _y
    if is_different(x,y)
        cp::skip()
    return x>y

def le(NumberOrPtr _x, NumberOrPtr _y)
    doc "overloads an operator while dereferencing pointer data"
    if already_defined(_x, _y)
        cp::skip()
    x = to_number _x
    y = to_number _y
    if is_different(x,y)
        cp::skip()
    return x<=y

def ge(NumberOrPtr _x, NumberOrPtr _y)
    doc "overloads an operator while dereferencing pointer data"
    if already_defined(_x, _y)
        cp::skip()
    x = to_number _x
    y = to_number _y
    if is_different(x,y)
        cp::skip()
    return x>=y
