local import "std/core.s"
local import "std/string.s"
local import "std/array.s"
local import "std/unsafe.s" as unsafe

def read(cstr path)
    {builtins::compiler::ptr unsafe_contents = fopen(path, "r");}
    defer 
        {if(unsafe_contents) fclose((FILE*)unsafe_contents); unsafe_contents=0;}
    if not exists unsafe_contents
        print("Failed to open file:", " ")
        print path
        fail "failed to open file"
    return class(unsafe_mut unsafe_contents)

def to_start(read f)
    contents = f.unsafe_contents
    if not exists contents
        fail "failed to move to start of closed file"
    {fseek((FILE*)f__unsafe_contents, 0, SEEK_SET);}

def to_end(read f) 
    if not exists f.unsafe_contents
        fail "failed to find end of closed file"
    {fseek((FILE*)f__unsafe_contents, 0, SEEK_END);}
    
def chunk(char[] buf, mut nat|blank pos, read f)
    if pos is blank
        pos = mut 0
    contents = unsafe::add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {builtins::nat bytes_read = f__unsafe_contents?fread((char*)contents, 1, size, (FILE*)f__unsafe_contents):0;}
    if bytes_read==0
        fail "end of file"
    {builtins::char first = ((char*)contents)[0];}
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos, bytes_read, first)

def line(char[] buf, mut nat|blank pos, read f)
    if pos is blank
        pos = mut 0
    contents = unsafe::add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {builtins::bool success = f__unsafe_contents?fgets((char*)contents, size, (FILE*)f__unsafe_contents)!=0:0;}
    if not success
        fail "end of file"
    {builtins::nat bytes_read = strlen((char*)contents);}
    {builtins::char first = bytes_read?((char*)contents)[0]:0;}
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos, bytes_read, first)
