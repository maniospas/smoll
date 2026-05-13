local import "std/core.s"
local import "std/hash.s" as hash

def strmap(any[] values)
    doc "a string map"
    doc "Maps string indexes to the buffer provided using a robinhood scheme."
    doc "Map size is static and cannot be adjusted after initialization."
    keys = alloc(mut hash::robinhood_entry[], len values) 
    unsafe_return (keys, values)

def get(const hash::robinhood_entry[]|str[] keys, any[] values, cstr|str key)
    doc "get a hash map entry"
    doc "Implemented for string or cstr keys but buffer of any values."
    unsafe_return values[keys. hash::find str key]&

def mutget(hash::robinhood_entry[]|str[] keys, any[] values, cstr|str key)
    doc "get a mutable hash map entry"
    doc "Implemented for string or cstr keys but buffer of any values."
    unsafe_return values[keys. hash::at str key]&&

local def tostr = hash::str|str
def next(const hash::robinhood_entry[]|str[] keys, mut nat pos)
    if pos==0
        pos = pos+1
        return str ""
    ret = unsafe_mut tostr keys[pos]
    pos = pos+1
    while 0==len tostr ret 
        ret = unsafe_mut tostr keys[pos]
        pos = pos+1
    return ret
