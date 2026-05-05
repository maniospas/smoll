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

def is_dir(str|cstr _path)
    doc "checks whether a cstr path points to an existing directory"
    path = unsafe_temporary_cstr _path
    {builtins::bool exists = __smo_is_dir(path);}
    return exists

def create_dir(str|cstr _path)
    path = unsafe_temporary_cstr _path
    doc "creates a directory at a cstr path, fails if it already exists or cannot be created"
    {builtins::bool result = __smo_create_dir(path);}
    if not result fail "failed to create directory"

def is_file(str|cstr _path)
    doc "checks whether a cstr path points to an existing file"
    path = unsafe_temporary_cstr _path
    {builtins::bool exists = __smo_is_file(path);}
    return exists

def remove(str|cstr _path)
    doc "removes a file at a cstr path, fails if it cannot be removed"
    path = unsafe_temporary_cstr _path
    {builtins::bool result = __smo_remove_file(path);}
    if not result fail "failed to remove file"

def read(str|cstr _path)
    path = unsafe_temporary_cstr _path
    doc "loads a cstr path as a readable directory"
    {builtins::compiler::ptr unsafe_ptr = opendir(path);}
    defer
        {if(unsafe_ptr) closedir((DIR*)unsafe_ptr); unsafe_ptr=0;}
    if not exists unsafe_ptr fail "failed to open file"
    return class(unsafe_mut unsafe_ptr)

def unsafe_entry(read f)
    if not exists f.unsafe_ptr
        fail "not open dir"
    {builtins::compiler::ptr de = readdir((DIR*)f__unsafe_ptr);}
    if not exists de
        fail "end of dir"
    {builtins::cstr dirname=((struct dirent*)de)->d_name;}
    return dirname

def entry(char[] buf, mut nat|blank pos, read f)
    if pos is blank
        pos = mut 0
    return copy_null_terminated(buf, pos, unsafe_entry f)  # optimized for joining with prefix