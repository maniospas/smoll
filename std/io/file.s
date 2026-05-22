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

def read(str|cstr _path)
    doc "loads a path as a readable file"
    doc "The file name is not maintained and must be tracked externally, if needed."
    path = cstr unsafe_temp _path
    {builtins:compiler:ptr unsafe_ptr = (char*)fopen(path, "r");}
    defer
        {if(unsafe_ptr) {fclose((FILE*)unsafe_ptr); unsafe_ptr=0;}}
    if not exists unsafe_ptr fail "failed to open file"
    return class(unsafe_mut unsafe_ptr)

def write(str|cstr _path)
    path = cstr unsafe_temp _path
    doc "creates a new file at cstr path as a writable object, fails if it already exists"
    {builtins:compiler:ptr unsafe_ptr = (char*)fopen(path, "wx+");}
    defer
        {if(unsafe_ptr) {fclose((FILE*)unsafe_ptr); unsafe_ptr=0;}}
    if not exists unsafe_ptr fail "failed to create file"
    return class(unsafe_mut unsafe_ptr)

def terminal()
    doc "opens a new system writable interactive terminal, fails if no display is available"
    {builtins:bool has_gui = __smo_has_display();}
    if not has_gui fail "cannot open a new terminal in the current environment"
    {builtins:compiler:ptr unsafe_ptr = __smo_open_console();}
    defer
        {__smo_close_console((FILE*)unsafe_ptr); unsafe_ptr=0;}
    if not exists unsafe_ptr fail "failed to open new terminal"
    return class(unsafe_mut unsafe_ptr)

def File = read|write|terminal

def to_start(edit File f)
    if not exists f.unsafe_ptr fail "failed to move to start of closed file"
    {fseek((FILE*)f__unsafe_ptr, 0, SEEK_SET);}

def to_end(edit File f)
    if not exists f.unsafe_ptr fail "failed to move to end of closed file"
    {fseek((FILE*)f__unsafe_ptr, 0, SEEK_END);}

def chunk(edit char[] buf, mut nat|blank pos, edit File f)
    if pos is blank
        pos = mut 0
    if not exists buf.unsafe_ptr fail "not open file"
    contents = unsafe:add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {builtins:nat bytes_read = f__unsafe_ptr?fread((char*)contents, 1, size, (FILE*)f__unsafe_ptr):0;}
    if bytes_read==0 fail "end of file"
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos, bytes_read)
    
def line(edit char[] buf, mut nat|blank pos, edit File f)
    if pos is blank
        pos = mut 0
    if not exists buf.unsafe_ptr
        fail "not open file"
    contents = unsafe:add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {if(f__unsafe_ptr){builtins:compiler:ptr obtained = fgets(contents, size, (FILE*)f__unsafe_ptr);}}
    if not exists obtained
        fail "end of file"
    {builtins:nat bytes_read = strlen(contents);}
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos, bytes_read)

def print(edit terminal|write f, str text)
    doc "writes a string to a write file"
    if not exists f.unsafe_ptr fail "failed to write to closed file"
    {builtins:nat bytes_written = fwrite((char*)text__unsafe_ptr, 1, text__unsafe_size, (FILE*)f__unsafe_ptr);}
    if bytes_written!=len text fail "failed to write to file"

def print(edit terminal|write f, cstr text)
    doc "writes a cstr to a write file"
    if not exists f.unsafe_ptr fail "failed to write to closed file"
    {fwrite(text, 1, strlen(text), (FILE*)f__unsafe_ptr);}