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
    doc "equals"
    {builtins:bool z = x==y;}
    return z

def neq(bool x, bool y)
    doc "not equal"
    {builtins:bool z = x!=y;}
    return z

def not(bool value)
    doc "logical inverse"
    doc "This operates on boolean values at runtime."
    {if(!value){builtins:bool z = 1;}}
    return z

def eq(compiler:true, compiler:true) 
    doc "equals"
    doc "This is a compile-time operations that does not evoke any runtime booleans."
    return compiler:true()

def eq(compiler:false, compiler:false) 
    doc "equals"
    doc "This is a compile-time operations that does not evoke any runtime booleans."
    return compiler:true()

def eq(compiler:true, compiler:false) 
    doc "equals"
    doc "This is a compile-time operations that does not evoke any runtime booleans."
    return compiler:false()

def eq(compiler:false, compiler:true) 
    doc "equals"
    doc "This is a compile-time operations that does not evoke any runtime booleans."
    return compiler:false()

def not(compiler:true)
    doc "logical inverse"
    doc "This is a compile-time operations on the compiler:true type rather than a runtime boolean."
    return compiler:false()

def not(compiler:false)
    doc "logical inverse"
    doc "This is a compile-time operations on the compiler:false type rather than a runtime boolean."
    return compiler:true()

def neq(compiler:true|compiler:false x, compiler:true|compiler:false y)
    doc "not equal"
    return not x==y

def eq(compiler:true, bool value)
    doc "equals"
    return value

def eq(bool value, compiler:true)
    doc "equals"
    return value

def eq(compiler:false, bool value)
    doc "equals"
    return not value

def eq(bool value, compiler:false)
    doc "equals"
    return not value

def neq(compiler:true|compiler:false x, bool y)
    doc "not equal"
    return not eq(x, y)

def neq(bool x, compiler:true|compiler:false y)
    doc "not equal"
    return not eq(x, y)
