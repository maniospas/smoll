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

local import std.core.numbers

def of(nat to)
    doc "yields a pair of nats based on an interval specification"
    doc "Represents the range [0, to) where 'to' its  its arguments."
    return (assigned from=0, to)

def of(nat from, "to", nat to)
    doc "yields a pair of nats based on an interval specification"
    doc "Represents the range [from, to) where 'from' and 'to' are the arguments."
    return (from, to)

def of(nat from, "upto", nat to)
    doc "yields a pair of nats based on an interval specification"
    doc "Represents the range [from, to] where 'from' and 'to' are the arguments."
    return (from, to+1)

def of(nat from, "len", nat length)
    doc "yields a pair of nats based on an interval specification"
    doc "Represents the range [from, from+length] where 'from' and 'length' are the arguments."
    return (from, from+length)

def range(nat _from, nat to)
    doc "constructs a range"
    doc "Endpoints are natural numbers (unsigned integers). This is handy for several kinds of iteration."
    doc "When iterating over ranges, it matters whether they are constant or not in whether the first"
    doc "element is modified to track iteration progress or not. Also use 'of' to construct descriptive"
    doc "ranges. Example:"
    doc "```python"
    doc "import std.core"
    doc "def main()"
    doc "    CLI = edit console()"
    doc "    r = range of(0 to 3)"
    doc "    for i in r: print i"
    doc "    print r.from"
    doc "```"
    doc "In this example, the final print retains value 0 because the range is constant,"
    doc "which evokes the constant range 'get' iterator. However, if the range was mutable,"
    doc "the starting position would be modified via the 'mutget' iterator to consume its elements."
    doc "In most usage scenarios this does not matter, as the range would be a temporary creation."
    from = mut 0+_from
    return class(from, to)

def mutget(edit range r, nat|blank skipped)
    doc "next range number"
    doc "This increments the range `from` position and returns the previous one."
    if r.from>=r.to: expected_fail "iteration end"
    ret = const r.from
    r.from = ret+1
    return ret

def get(range r, nat _pos)
    doc "assert that a number plus range start lies in the range"
    doc "The item itself is returned. This lets the range be used as an iterator"
    doc "per a pattern like `for i in range 10 ...`."
    pos = _pos+r.from
    if pos>=r.to: fail "iteration end"
    return pos
    
