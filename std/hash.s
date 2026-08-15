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
local import "std/core/string.s"
local import "std/core/array.s"

def Hashable = nat|float|cstr|str

def hash(str k, nat size)
    h = mut 5381
    for i in range of len k
        h = h.bits().lshift(5).nat().add(h) + nat k[i]
    return h.mod size

def hash(nat k, nat size)
    {builtins::nat c1 = 0xff51afd7ed558ccd;}
    {builtins::nat c2 = 0xc4ceb9fe1a85ec53;}
    x = mut bits k
    x = x.xor x.rshift 33
    x = bits nat(x).mul c1
    x = x.xor x.rshift 33
    x = bits nat(x).mul c2
    x = x.xor x.rshift 33
    return nat(x).mod size

def to_hash_base(str|cstr k)
    return str k

def to_hash_base(Number k)
    return bits k

def robinhood_str_entry(str s, nat cost)
    return (s, cost)

def robinhood_nat_entry(nat s, nat cost)
    return (s, cost)

def robinhood_entry = robinhood_str_entry|robinhood_nat_entry

def raw(robinhood_entry r)
    return r.s

def raw(str|nat r)
    return r

def raw(cstr r)
    return str r

def is_zero(str k)
    return 0==len k

def is_zero(nat k)
    return 0==k

def find(robinhood_entry[]|str[]|nat[] data, cstr|str|nat _k)
    doc "find an item in a robinhood_entry list"
    k = raw _k
    if is_zero k
        return 0
    if not k is type raw data[0]
        compiler::skip()
    n = len data
    pos = hash(k, n)
    for i in range of n
        idx = mut (pos+i)
        if idx>=n idx = idx-n
        if idx==0 continue
        entry = data[idx]
        if is_zero raw entry continue
        if k==raw entry 
            return idx
    fail "index not found"

def at(edit robinhood_entry[] data, cstr|str|nat _k)
    doc "find or add an item in a robinhood_entry list"
    k = unsafe_mut raw _k
    if is_zero k
        return 0
    if not k is type raw data[0]
        compiler::skip()
    n = len data
    pos = hash(k, n)
    for i in range of n
        idx = mut (pos+i)
        if idx>=n idx = idx-n
        if idx==0 continue
        entry = data[idx]
        if is_zero raw entry 
            data[idx] = (k,i)
            return idx
        if k==raw entry 
            return idx
        if i>entry.cost
            tmp = k
            k = unsafe_mut raw data[idx]
            data[idx] = (tmp, i)
    fail "string buffer is full"
