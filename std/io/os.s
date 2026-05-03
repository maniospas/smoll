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

local import "std/core.s"
local import "std/unsafe.s" as unsafe
local import "std/io/file.s"

def is_dir(cstr path)
    doc "checks whether a cstr path points to an existing directory"
    {builtins::bool exists = __smo_is_dir(path);}
    return exists
def is_dir(str path)
    doc "checks whether a string path points to an existing directory"
    return is_dir unsafe_temporary_cstr path

def create_dir(cstr path)
    doc "creates a directory at a cstr path, fails if it already exists or cannot be created"
    {builtins::bool result = __smo_create_dir(path);}
    if not result
        fail "failed to create directory"
def create_dir(str path)
    doc "creates a directory at a string path"
    return create_dir unsafe_temporary_cstr path

def is_file(cstr path)
    doc "checks whether a cstr path points to an existing file"
    {builtins::bool exists = __smo_is_file(path);}
    return exists
def is_file(str path)
    doc "checks whether a string path points to an existing file"
    return is_file unsafe_temporary_cstr path

def remove_file(cstr path)
    doc "removes a file at a cstr path, fails if it cannot be removed"
    {builtins::bool result = __smo_remove_file(path);}
    if not result
        fail "failed to remove file"
def remove_file(str path)
    doc "removes a file at a string path"
    return remove_file unsafe_temporary_cstr path
