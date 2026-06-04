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

local import "std/core/numbers.s"

def of(nat to)
    return (0, to)

def of(nat from, "to", nat to)
    return (from, to)

def of(nat from, "upto", nat to)
    return (from, to+1)

def of(nat from, "lento", nat length)
    return (from, from+length)

def range(nat _from, nat to)
    doc "constructs a range"
    doc "Endpoints are natural numbers (unsigned integers). This is handy for several kinds of iteration."
    from = mut _from
    return class(from, to)

def next(edit range r)
    doc "next range number"
    doc "This increments the r.from position and returns the previous one."
    if r.from>=r.to
        fail "iteration end"
    ret = const r.from
    r.from = ret+1
    return ret

def get(range r, nat pos)
    doc "assert that a number lies in the range"
    doc "The item itself is returned. This lets the range be used as an iterator"
    doc "per a pattern like `for i in range 10 ...`."
    if pos>=r.to
        fail "iteration end"
    if pos<r.from
        fail "iterator range"
    return pos
