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
import std.extern
import std.core.bool

def Number = float|int|nat

def is_different(Number x, Number y)
    return not x is type(y)

def eq(Number x, Number y)
    doc "equals"
    if is_different(x,y)
        compiler::skip()
    {builtins::bool z = x==y;}
    return z

def neq(Number x, Number y)
    doc "not equal"
    if is_different(x,y)
        compiler::skip()
    {builtins::bool z = x!=y;}
    return z

def eq(compiler::catch x, compiler::catch y)
    doc "equals"
    doc "Compares two error messages. This comparison is"
    doc "used only for comparing error messages produced"
    doc "by the same running program."
    {builtins::bool z=(x==y);}
    return z

def neq(compiler::catch x, compiler::catch y)
    doc "not equal"
    doc "Compares two error messages. This comparison is"
    doc "used only for comparing error messages produced"
    doc "by the same running program."
    {builtins::bool z=(x!=y);}
    return z

def eq(any ptr x, any ptr y)
    doc "equals"
    doc "Compares the address of two pointers."
    {builtins::bool z=(x==y);}
    return z

def neg(Number x)
    doc "negative of a number"
    {type(x) z=(0-x);}
    return z

def add(Number x, Number y)
    doc "add"
    doc "Adds two numbers of the same type. This is an overload for the + operator."
    if is_different(x,y)
        compiler::skip()
    {type(x) z=x+y;}
    return z

def mul(Number x, Number y)
    doc "multiply with"
    doc "Multiplies two numbers of the same type. This is an overload for the * operator."
    if is_different(x,y)
        compiler::skip()
    {type(x) z=x*y;}
    return z

def div(Number x, Number y, "unsafe_assume_nonzero"|blank nonzero_guarantee)
    doc "divide by"
    doc "Divides two numbers of the same type. This is an overload for the / operator."
    if is_different(x,y)
        compiler::skip()
    if nonzero_guarantee is blank
        {type(x) zero = 0;}
        if y==zero
            doc "Safeguards against division by zero."
            fail "division by zero"
    {type(x) z=x/y;}
    return z

def mod(nat x, nat y, "unsafe_assume_nonzero"|blank nonzero_guarantee)
    doc "modulo by"
    doc "Computes the modulo between two natural numbers. This is an overload for the % operator."
    if nonzero_guarantee is blank
        {type(x) zero = 0;}
        if y==zero
            fail "modulo by zero"
    {type(x) z=x%y;}
    return z

def lt(Number x, Number y)
    doc "less than"
    doc "Compares two numbers of the same type. This is an overload for the < operator."
    if is_different(x,y)
        compiler::skip()
    {builtins::bool z = x<y;}
    return z

def gt(Number x, Number y)
    doc "Compares two numbers of the same type. This is an overload for the > operator."
    doc "greater than"
    if is_different(x,y)
        compiler::skip()
    {builtins::bool z = x>y;}
    return z

def le(Number x, Number y)
    doc "less than or equal to"
    doc "Compares two numbers of the same type. This is an overload for the <= operator."
    if is_different(x,y)
        compiler::skip()
    {builtins::bool z = x<=y;}
    return z

def ge(Number x, Number y)
    doc "greater than or equal to"
    doc "Compares two numbers of the same type. This is an overload for the >= operator."
    if is_different(x,y)
        compiler::skip()
    {builtins::bool z = x>=y;}
    return z
    
def sub(Number x, Number y)
    doc "subtract by"
    doc "Subtracts two numbers of the same type. This is an overload for the - operator."
    if is_different(x,y) 
        compiler::skip()
    if x is nat
        doc "Natural numbers are safeguarded against acquiring negative results, which would overflow."
    if x is nat and x<y
        fail "nat subtraction would yield a negative"
    {type(x) z=x-y;}
    return z

def sub(nat x, nat y, "assume_smaller")
    doc "subtract by"
    doc "Subtracts two natural numbers without underflow check. This is an overload for the - operator,"
    doc "for example used like below. This overload never fails and instead adds 0xFFFFFFFFFFFFFFFF to"
    doc "the result if it would produce a negative."
    doc "```rust"
    doc "0-(1 assume_smaller)"
    doc "```"
    doc "======================="
    {type(x) z=x-y;}
    return z

def pow(nat x, nat y) 
    doc "exponentiate by"
    doc "Exponentiates a natural number by another."
    i = mut 0
    ret = mut 1
    while i<y
        ret = ret*x
        i = i+1
    return ret
