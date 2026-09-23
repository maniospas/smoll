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
local import std.unsafe as unsafe

def open(cstr path, blank|"binary" mode)
    doc "loads a path as a openable file"
    doc "The file name is not maintained and must be tracked externally, if needed."
    if compiler::back type "emcc"
        {"-sFETCH"}
        {"-sASYNCIFY"}
        {"-sASYNCIFY_STACK_SIZE=65536"}
        {"-sFORCE_FILESYSTEM=1"}
        {"-lidbfs.js"}
    if mode is "binary": {builtins::compiler::ptr unsafe_ptr = (char*)fopen(path, "rb");}
    else: {builtins::compiler::ptr unsafe_ptr = (char*)fopen(path, "r");}
    defer
        {if(unsafe_ptr) {fclose((FILE*)unsafe_ptr); unsafe_ptr=0;}}
    if not exists unsafe_ptr: fail "failed to open file"
    return class unsafe_mut unsafe_ptr

def open(str path, blank|"binary" mode)
    doc "loads a path as a openable file"
    doc "The file name is not maintained and must be tracked externally, if needed."
    if mode is blank: return open cstr unsafe_temp path
    else: return open(cstr unsafe_temp path binary)

def write(cstr path, blank|"binary" mode)
    doc "creates a new file at cstr path as a writable object, fails if it already exists"
    if mode is "binary": {builtins::compiler::ptr unsafe_ptr = (char*)fopen(path, "wbx+");}
    else: {builtins::compiler::ptr unsafe_ptr = (char*)fopen(path, "wx+");}
    defer
        {if(unsafe_ptr) {fclose((FILE*)unsafe_ptr); unsafe_ptr=0;}}
        if compiler::back type "emcc"
            {__smo_flush_fs();}
    if not exists unsafe_ptr
        fail "failed to create file"
    return class unsafe_mut unsafe_ptr

def write(str|cstr path, blank|"binary" mode)
    doc "creates a new file at cstr path as a writable object, fails if it already exists"
    if mode is blank: return write cstr unsafe_temp path
    else: return write(cstr unsafe_temp path binary)

def terminal()
    doc "opens a new system writable interactive terminal, fails if no display is available"
    {builtins::bool has_gui = __smo_has_display();}
    if not has_gui: fail "cannot open a new terminal in the current environment"
    {builtins::compiler::ptr unsafe_ptr = __smo_open_console();}
    defer
        {__smo_close_console((FILE*)unsafe_ptr); unsafe_ptr=0;}
    if not exists unsafe_ptr
        fail "failed to open new terminal"
    return class unsafe_mut unsafe_ptr

def File = open|write|terminal

def to_start(edit File f)
    doc "move to file start"
    doc "Moves the file opening position to the start of the file."
    if not exists f.unsafe_ptr: fail "failed to move to start of closed file"
    {fseek((FILE*)f__unsafe_ptr, 0, SEEK_SET);}

def to_end(edit File f)
    doc "move to file end"
    doc "Moves the file opening position to the end of the file"
    doc "but does not close it."
    if not exists f.unsafe_ptr: fail "not open file"
    {fseek((FILE*)f__unsafe_ptr, 0, SEEK_END);}

def seek(edit File f, nat idx, "set"|blank)
    doc "move to a specific position to a file"
    if not exists f.unsafe_ptr: fail "not open file"
    {fseek((FILE*)f__unsafe_ptr, idx, SEEK_SET);}

def seek(edit File f, nat idx, "forward")
    doc "move forward in the file"
    if not exists f.unsafe_ptr: fail "not open file"
    {fseek((FILE*)f__unsafe_ptr, idx, SEEK_CUR);}

def seek(edit File f, nat idx, "backward")
    doc "move backward in the file"
    if not exists f.unsafe_ptr: fail "not open file"
    {fseek((FILE*)f__unsafe_ptr, 0-idx, SEEK_CUR);}

def position(edit File f)
    doc "get the current position in the file"
    doc "This can be passed as input to 'seek'."
    if not exists f.unsafe_ptr: fail "not open file"
    {builtins::nat ret = ftell((FILE*)f__unsafe_ptr);}
    return ret

def chunk(edit char[] buf, mut nat|blank pos, edit File f)
    doc "next line"
    doc "Retrieves the next chunk of data from a file,"
    doc "and stores it on a char[] buffer at a given position."
    doc "A string representation of the stored data is returned,"
    doc "but do note that this may interweave null character data"
    doc "because strings are defined over char[] buffers."
    doc "The read chunk will have size up to the remainder size of"
    doc "the buffer, so it is better (safer) to access character data"
    doc "from the result."
    doc "An error is created if the buffer's size is exceeded."
    if pos is blank
        pos = mut 0
    if not exists buf.unsafe_ptr: fail "not open file"
    contents = unsafe::add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    bytes_open = 0
    if exists f.unsafe_ptr: {bytes_open = fread((char*)contents, 1, size, (FILE*)f__unsafe_ptr);}
    if bytes_open==0: fail "end of file"
    prev_pos = const pos
    pos = pos+bytes_open
    return str(buf, prev_pos len bytes_open)

def line(on edit arena<char::tag>|circular<char::tag> CHARS, edit File f)
    doc "next line"
    doc "Retrieves the next line from a file,"
    doc "and stores it on a CHARS storage effect."
    doc "A string representation of the stored data are returned."
    doc "The result may not end at a"
    doc "new line character, in case the line does not fit onto the buffer"
    doc "at once, in which case it requires multiple opens, or at the"
    doc "output stream's end."
    if CHARS is arena^char_allocator
        pos = CHARS.pos
    if CHARS is circular^char_allocator
        pos = 0
    buf = ref CHARS.buf
    if not exists buf.unsafe_ptr: fail "not open file"
    contents = unsafe::add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {if(f__unsafe_ptr){builtins::compiler::ptr obtained = fgets(contents, size, (FILE*)f__unsafe_ptr);}}
    if not exists obtained: fail "end of file"
    {builtins::nat bytes_open = strlen(contents);}
    CHARS.pos = pos+bytes_open
    return str(buf, pos to CHARS.pos)

local def raw_print(edit terminal|write f, str text)
    doc "writes a string to a write file"
    doc "This is a common body underneath the file print functions,"
    doc "so prefer those."
    if not exists f.unsafe_ptr: fail "failed to write to closed file"
    if 0!=text.dat.length
        {builtins::compiler::ptr first_pos = text__unsafe_ptr+text__dat__pos;}
        {builtins::nat bytes_written = fwrite(first_pos, 1, text__dat__length, (FILE*)f__unsafe_ptr);}
        if bytes_written!=len text: fail "failed to write to file"

def print(edit terminal|write f, str|cstr text, cstr|blank endl)
    if endl is blank: endl = "\n"
    f.raw_print str text
    if endl!="": f.raw_print str endl

def print(edit write f, "flush")
    doc "flushes file contents to the disk"
    {builtins::bool success = (__smo_fflush((FILE*)f__unsafe_ptr)!=-1);}
    if not success: fail "failed to flush file contents"