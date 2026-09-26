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
    doc "Maps string indexes to the buffer provided. The map employes a robinhood scheme"
    doc "and a builtin hash function, and its size matches the input value size but"
    doc "cannot be adjusted after initialization. Do note that this function merely"
    doc "creates a structural pair of robinhood entries and values, and you can instead"
    doc "employ different allocation strategies. Simple example:"
    doc "```python"
    doc "import std.core"
    doc "import std.map"
    doc "def main(CLI)"
    doc "    map = strmap float[].alloc 100 # 100 entries"
    doc "    map[\"hi\" place] = 2.0"
    doc "    map[\"hello\" place] = 5.0"
    doc "    print map[\"hi\"] # prints 2.0"
    doc "```"
    doc "The example only places `cstr` values on the map, but you can and retrieve `str` "
    doc "interchangeably with the same pattern. The map's memory would be different than"
    doc "any memory used to allocate the strings, but this is still safe because the"
    doc "compile would then ask you to move the bundle the map and the memory together."
    doc "You can instead pass a bucket allocator to an overload of this function to create"
    doc "a variation that copies strings on the same allocator as the robinhood entry."
    keys = mut alloc(hash::robinhood_str_entry[], len values) 
    return (keys, values)

def strmap(on edit bucket BUCKET, edit any[] values, nat size)
    doc "a string map on a bucket"
    doc "The structural string map type produced by this function bundles all"
    doc "memory associated with the map onto a memory bucket allocator. In"
    doc "particular, it uses the bucket to bundle together a first allocation"
    doc "of the provided array using a given size, a same-sized entry-list,"
    doc "and a copy of all non-cstr string keys. The bucket can be grabbed"
    doc "automatically from a local BUCKET variable."
    doc "```python"
    doc "import std.core"
    doc "import std.map"
    doc "def main(CLI)"
    doc "    map = bucket().strmap(float[], 100) # 100 entries"
    doc "    map[\"hi\" place] = 2.0"
    doc "    map[\"hello\" place] = 5.0"
    doc "    print map[\"hi\"] # prints 2.0"
    doc "```"
    BUCKET.alloc(values, size)
    keys = mut BUCKET.alloc(hash::robinhood_str_entry[], size) 
    return (BUCKET, keys, values)

def natmap(edit any[] values)
    doc "a natural number map"
    doc "Maps number indexes to the buffer provided using a robinhood scheme."
    doc "Map size is static and cannot be adjusted after initialization."
    keys = mut alloc(hash::robinhood_nat_entry[], len values) 
    unsafe_return (keys, values)
    
def get(bucket|char_arena|char_linkedmem|blank CHARS, hash::robinhood_str_entry[] keys, any[] values, cstr|str key)
    doc "get a hash map entry"
    doc "Implemented for string or cstr keys but buffer of any values."
    return values[keys.hash::find hash::raw key]&

def mutget(bucket|char_arena|char_linkedmem|blank CHARS, hash::robinhood_str_entry[] keys, any[] values, cstr|str key)
    doc "get a hash map entry"
    doc "Implemented for string or cstr keys but buffer of any values."
    return values[keys.hash::find hash::raw key]&

def mutget(edit bucket|char_arena|char_linkedmem|blank CHARS, edit hash::robinhood_str_entry[] keys, edit any[] values, cstr|str key, "place", mut str|blank placeholder)
    doc "get a mutable hash map entry"
    doc "Implemented for string or cstr keys but buffer of any values."
    if CHARS is blank or key is cstr: placeholder = str key
    else: placeholder = copy key
    return values[keys.hash::at placeholder]&

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
