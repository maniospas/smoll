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
local import "std/extern.s"

def eq(bool x, bool y)
    doc "equal to"
    {builtins::bool z = x==y?1:0;}
    return z

def neq(bool x, bool y)
    doc "not equal to"
    {builtins::bool z = x!=y?1:0;}
    return z

def not(bool value)
    doc "logical inverse"
    {builtins::bool z = value?0:1;}
    return z

def eq(compiler::true, compiler::true) 
    doc "equal to"
    return compiler::true()

def eq(compiler::false, compiler::false) 
    doc "equal to"
    return compiler::true()

def eq(compiler::true, compiler::false) 
    doc "equal to"
    return compiler::false()

def eq(compiler::false, compiler::true) 
    doc "equal to"
    return compiler::false()

def not(compiler::true)
    doc "logical inverse"
    return compiler::false()

def not(compiler::false)
    doc "logical inverse"
    return compiler::true()

def neq(compiler::true|compiler::false x, compiler::true|compiler::false y)
    doc "not equal to"
    return not x==y

def eq(compiler::true, bool value)
    doc "equal to"
    return value

def eq(bool value, compiler::true)
    doc "equal to"
    return value

def eq(compiler::false, bool value)
    doc "equal to"
    return not value

def eq(bool value, compiler::false)
    doc "equal to"
    return not value

def neq(compiler::true|compiler::false x, bool y)
    doc "not equal to"
    return not eq(x, y)

def neq(bool x, compiler::true|compiler::false y)
    doc "not equal to"
    return not eq(x, y)
