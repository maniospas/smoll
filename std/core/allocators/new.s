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


local import std.core.builtinsext
local import std.core.array
local import std.core.allocators.allocated
local import std.unsafe as unsafe
local import compiler as cp

def new()
    doc "allocations on new memory"
    doc "This is the laziest means of allocation that has no state and"
    doc "signfies the intent to have any allocations be handled by the"
    doc "operating system. It has the disadvantage that it cannot really"
    doc "perform allocations within conditions or loops that escape"
    doc "their scope. However, allocations made within the top level"
    doc "of functions *will* be properly deferred to the calling scope."
    doc "Thus, the following exammple is valid, where `CHARS` is an effect;"
    doc "a variable automatically passed to string allocators."
    doc "```python"
    doc "import std.core"
    doc "def combine_with_space(on new CHARS, cstr s1, cstr s2)"
    doc "    return s1+s2+\" \""
    doc "def main(CLI, on new CHARS)" # could just write CHARS=new() inside
    doc "    list_s1 = [\"hel\", \"de\", \"wo\"]"
    doc "    list_s2 = [\"lo\", \"ar\", \"rld\"]"
    doc "    for i in range of 2"
    doc "        print nn combine_with_space(list_s1[i], list_s2[i])"
    doc "```"
    doc "In the above example, intermediate strings are released within `combine_with_space`,"
    doc "and its return is released at the end of each loop. Thus, although this pattern"
    doc "is easy to write, it cannot really escape the declared scope. Repeat allocations"
    doc "are also significantly slower than just using something a circular buffer in place of the"
    doc "CHARS effect."
    return class()