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

def is_dir(cstr path)
    doc "checks whether a path points to an existing directory"
    VM "[os.path.is_dir($path)]"
    if compiler::back type "emcc"
        {"-sFORCE_FILESYSTEM=1"}
        {"-lidbfs.js"}
    {builtins::bool exists = __smo_is_dir(path);}
    return exists

def is_dir(str path)
    doc "checks whether a path points to an existing directory"
    if compiler::back type "emcc"
        {"-sFORCE_FILESYSTEM=1"}
        {"-lidbfs.js"}
    return is_dir cstr unsafe_temp path

def create_dir(cstr path)
    doc "creates a directory at a cstr path, fails if it already exists or cannot be created"
    VM "[os.path.mkdir($path)]"
    if compiler::back type "emcc"
        {"-sFORCE_FILESYSTEM=1"}
        {"-lidbfs.js"}
    {builtins::bool result = __smo_create_dir(path);}
    if not result fail "failed to create directory"

def create_dir(str path)
    create_dir cstr unsafe_temp path

local def _is_file(cstr path)
    VM "[os.path.exists($path)]"
    {builtins::bool exists = __smo_is_file(path);}
    return exists

def is_file(str|cstr _path)
    doc "checks whether a path points to an existing file"
    return _is_file cstr unsafe_temp _path

def remove(str|cstr _path)
    doc "removes a file at a path, fails if it cannot be removed"
    path = cstr unsafe_temp _path
    if is_file path
        {builtins::bool result = __smo_remove_file(path);}
        if not result fail "failed to remove file"

local def closedir(any ptr unsafe_ptr) # super unsafe to expose
    VM "memory.get_foreign($unsafe_ptr).close() or memory.close_foreign($unsafe_ptr)"
    if compiler::back type "emcc"
        {"-sFORCE_FILESYSTEM=1"}
        {"-lidbfs.js"}
    {if(unsafe_ptr) {closedir((DIR*)unsafe_ptr); unsafe_ptr=0;}}

def open(cstr path)
    doc "loads a cstr path as a openable directory"
    VM "[memory.register_foreign(os.scandir($path), 'dir '+$path)]"
    if compiler::back type "emcc"
        {"-sFORCE_FILESYSTEM=1"}
        {"-lidbfs.js"}
    {builtins::compiler::ptr unsafe_ptr = (char*)opendir(path);}
    defer
        closedir unsafe_ptr
    if not exists unsafe_ptr fail "failed to open file"
    return class(unsafe_mut unsafe_ptr)

def open(str path)
    return open cstr unsafe_temp path

local def raw_entry(edit open f) # this function returns a content pointer, but this does not allow safe comparisons
    VM "[safeguard(lambda memory=memory: memory.write_cstr(next(memory.get_foreign($f__unsafe_ptr)).name), ExpectedException('end of dir'))]"
    if not exists f.unsafe_ptr
        fail "not open dir"
    {builtins::compiler::ptr de = (char*)readdir((DIR*)f__unsafe_ptr);}
    if not exists de
        fail "end of dir"
    {builtins::cstr dirname=((struct dirent*)de)->d_name;}
    return dirname

def entry(edit open f)
    doc "the next entry of an open dir"
    doc "This value is modified as you continue opening"
    doc "from the same directory."
    return str raw_entry f
