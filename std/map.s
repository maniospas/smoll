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
local import std.hash as hash

def strmap(edit any[] values)
    doc "a string map"
    doc "Maps string indexes to the buffer provided using a robinhood scheme."
    doc "Map size is static and cannot be adjusted after initialization."
    keys = mut alloc(hash::robinhood_str_entry[], len values) 
    unsafe_return (keys, values)

def natmap(edit any[] values)
    doc "a natural number map"
    doc "Maps number indexes to the buffer provided using a robinhood scheme."
    doc "Map size is static and cannot be adjusted after initialization."
    keys = mut alloc(hash::robinhood_nat_entry[], len values) 
    unsafe_return (keys, values)

def get(hash::robinhood_str_entry[] keys, any[] values, cstr|str key)
    doc "get a hash map entry"
    doc "Implemented for string or cstr keys but buffer of any values."
    unsafe_return values[keys.hash::find hash::raw key]&

def mutget(edit hash::robinhood_str_entry[] keys, edit any[] values, cstr|str key)
    doc "get a mutable hash map entry"
    doc "Implemented for string or cstr keys but buffer of any values."
    return values[keys.hash::at str key]&

def get(hash::robinhood_nat_entry[] keys, any[] values, nat key)
    doc "get a hash map entry"
    doc "Implemented for string or cstr keys but buffer of any values."
    return values[keys.hash::find key]&

def mutget(edit hash::robinhood_nat_entry[] keys, edit any[] values, nat key)
    doc "get a mutable hash map entry"
    doc "Implemented for string or cstr keys but buffer of any values."
    return values[keys.hash::at key]&

def next(hash::robinhood_entry[] keys, mut nat pos)
    if pos==0
        pos = pos+1
        return hash::raw keys[0]
    ret = unsafe_mut hash::raw keys[pos]
    pos = pos+1
    while hash::is_zero hash::raw ret 
        ret = unsafe_mut hash::raw keys[pos]
        pos = pos+1
    return ret
