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

import "builtins"
import "std/core/bool.s"

def Number = float|int|nat

def is_different(Number x, Number y)
    return not x is type(y)

def add(Number x, Number y)
    if is_different(x,y)
        compiler::skip()
    {type(x) z=x+y;}
    return z

def mul(Number x, Number y)
    if is_different(x,y)
        compiler::skip()
    {type(x) z=x*y;}
    return z

def div(Number x, Number y)
    if is_different(x,y)
        compiler::skip()
    {type(x) z=x/y;}
    return z

def lt(Number x, Number y)
    if is_different(x,y)
        compiler::skip()
    {builtins::bool z = x<y?1:0;}
    return z

def gt(Number x, Number y)
    if is_different(x,y)
        compiler::skip()
    {builtins::bool z = x>y?1:0;}
    return z

def le(Number x, Number y)
    if is_different(x,y)
        compiler::skip()
    {builtins::bool z = x<=y?1:0;}
    return z

def ge(Number x, Number y)
    if is_different(x,y)
        compiler::skip()
    {builtins::bool z = x>=y?1:0;}
    return z

def eq(Number x, Number y)
    if is_different(x,y)
        compiler::skip()
    {builtins::bool z = x==y?1:0;}
    return z

def neq(Number x, Number y)
    if is_different(x,y)
        compiler::skip()
    {builtins::bool z = x!=y?1:0;}
    return z
    
def sub(Number x, Number y)
    if is_different(x,y) 
        compiler::skip()
    if x is nat and x<y
        fail "id subtraction would yield a negative"
    {type(x) z=x-y;}
    return z

def pow(nat x, nat y) 
    i = mut 0
    ret = mut 1
    while i<y
        ret = ret*x
        i = i+1
    return ret