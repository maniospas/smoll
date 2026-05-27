local import "std/core.s"
local import "std/hash.s" as hash

def strmap(edit any[] values)
    doc "a string map"
    doc "Maps string indexes to the buffer provided using a robinhood scheme."
    doc "Map size is static and cannot be adjusted after initialization."
    keys = alloc(mut hash:robinhood_str_entry[], len values) 
    unsafe_return (keys, values)

def natmap(edit any[] values)
    doc "a natural number map"
    doc "Maps number indexes to the buffer provided using a robinhood scheme."
    doc "Map size is static and cannot be adjusted after initialization."
    keys = alloc(mut hash:robinhood_nat_entry[], len values) 
    unsafe_return (keys, values)

def get(hash:robinhood_str_entry[] keys, any[] values, cstr|str key)
    doc "get a hash map entry"
    doc "Implemented for string or cstr keys but buffer of any values."
    unsafe_return values[keys.hash:find hash:raw key]&

def mutget(mut hash:robinhood_str_entry[] keys, mut any[] values, cstr|str key)
    doc "get a mutable hash map entry"
    doc "Implemented for string or cstr keys but buffer of any values."
    return values[keys.hash:at str key]&&

def get(hash:robinhood_nat_entry[] keys, any[] values, nat key)
    doc "get a hash map entry"
    doc "Implemented for string or cstr keys but buffer of any values."
    return values[keys.hash:find key]&

def mutget(mut hash:robinhood_nat_entry[] keys, mut any[] values, nat key)
    doc "get a mutable hash map entry"
    doc "Implemented for string or cstr keys but buffer of any values."
    return values[keys.hash:at key]&&

def next(hash:robinhood_entry[] keys, mut nat pos)
    if pos==0
        pos = pos+1
        return hash:raw keys[0]
    ret = unsafe_mut hash:raw keys[pos]
    pos = pos+1
    while hash:is_zero hash:raw ret 
        ret = unsafe_mut hash:raw keys[pos]
        pos = pos+1
    return ret
