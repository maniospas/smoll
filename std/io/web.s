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
local import std.io.process as process

local def raw_get(effect edit console CLI, str url, str path)
    VM "download(memory.as_str($url__unsafe_ptr+$url__dat__pos, $url__dat__length), memory.as_str($path__unsafe_ptr+$path__dat__pos, $path__dat__length))"
    prefix = "curl -s -X GET \""
    postfix = "\" -o "
    buf = edit arena char[].alloc len(url)+len(path)+len(str prefix)+len(str postfix)+1
    buf.copy prefix
    buf.copy url
    buf.copy postfix
    buf.copy path
    process::system str status buf

def get(effect edit console CLI, str|cstr url, str|cstr|blank path)
    doc "GET with system curl"
    doc "This creates a GET request using the system's curl."
    doc "This implementation is ideal for obtaining individual"
    doc "files without additional dependencies. Retrieved data"
    doc "are saved to a specified file path, overwriting it."
    doc "For ease of use, the path is returned."
    if path is blank
        doc "This version downloads to a '.tmp' file."
        path = ".tmp"
    raw_get(str url, str path)
    return str path
