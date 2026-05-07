local import "std/core.s"
local import "std/unsafe.s" as unsafe

def read(str|cstr _cmd)
    doc "create a readable system process"
    cmd = unsafe_temporary_cstr _cmd
    {builtins::compiler::ptr unsafe_ptr = popen((const char*)cmd, "r");}
    if not exists unsafe_ptr fail "failed to start process"
    defer
        if exists unsafe_ptr
            {char buf[1024]; while(fread(buf, 1, sizeof(buf), (FILE*)unsafe_ptr)) {}}
            {builtins::int status = pclose((FILE*)unsafe_ptr); unsafe_ptr = 0;}
        if status!=int 0
            try fail "process terminated with unhandled non-zero exit code"
    return class(unsafe_mut unsafe_ptr)

def chunk(char[] buf, mut nat|blank pos, read f)
    if pos is blank
        pos = mut 0
    unsafe_ptr = unsafe::add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {builtins::nat bytes_read = f__unsafe_ptr?fread((char*)unsafe_ptr, 1, size, (FILE*)f__unsafe_ptr):0;}
    if bytes_read==0 fail "end of file"
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos, bytes_read)

def line(char[] buf, mut nat|blank pos, read f)
    if pos is blank
        pos = mut 0
    unsafe_ptr = unsafe::add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {builtins::bool success = f__unsafe_ptr?fgets((char*)unsafe_ptr, size, (FILE*)f__unsafe_ptr)!=0:0;}
    if not success fail "end of file"
    {builtins::nat bytes_read = strlen((char*)unsafe_ptr);}
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos, bytes_read)

def system(cstr|str _cmd)
    cmd = unsafe_temporary_cstr _cmd
    {builtins::int result = system((const char*)cmd);}
    if result!=int 0 fail "system call failed"

