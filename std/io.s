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

def read(cstr path)
    doc "loads a cstr path as a readable object"
    {builtins::compiler::ptr unsafe_ptr = fopen(path, "r");}
    defer
        {if(unsafe_ptr) fclose((FILE*)unsafe_ptr); unsafe_ptr=0;}
    if not exists unsafe_ptr
        print("Failed to open file:", " ")
        print path
        fail "failed to open file"
    return class(unsafe_mut unsafe_ptr)

def read(str path)
    doc "loads a string path as a readable object"
    return read unsafe_temporary_cstr path

def to_start(read f)
    contents = f.unsafe_ptr
    if not exists contents
        fail "failed to move to start of closed file"
    {fseek((FILE*)f__unsafe_ptr, 0, SEEK_SET);}

def to_end(read f) 
    if not exists f.unsafe_ptr
        fail "failed to find end of closed file"
    {fseek((FILE*)f__unsafe_ptr, 0, SEEK_END);}
    
def chunk(char[] buf, mut nat|blank pos, read f)
    if pos is blank
        pos = mut 0
    contents = unsafe::add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {builtins::nat bytes_read = f__unsafe_ptr?fread((char*)contents, 1, size, (FILE*)f__unsafe_ptr):0;}
    if bytes_read==0
        fail "end of file"
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos, bytes_read)

def line(char[] buf, mut nat|blank pos, read f)
    if pos is blank
        pos = mut 0
    contents = unsafe::add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {builtins::bool success = f__unsafe_ptr?fgets((char*)contents, size, (FILE*)f__unsafe_ptr)!=0:0;}
    if not success
        fail "end of file"
    {builtins::nat bytes_read = strlen((char*)contents);}
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos, bytes_read)
