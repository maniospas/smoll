local import "std/core.s"
local import "std/unsafe.s" as unsafe

def read(str|cstr _cmd)
    cmd = unsafe_temporary_cstr _cmd
    {builtins::compiler::ptr contents = popen((const char*)cmd, "r");}
    if not exists contents fail "failed to start process"
    defer 
        if exists contents 
            {char buf[1024]; while(fread(buf, 1, sizeof(buf), (FILE*)contents)) {}}
            {builtins::int status = pclose((FILE*)contents); contents = 0;}
        if status!=int 0
            print "process terminated with unhandled non-zero exit code"
    return class(unsafe_mut contents)

def to_end(read p)
    if not exists p.contents
        {{char buf[1024]; while(fread(buf, 1, sizeof(buf), (FILE*)p__contents)) {}}}

def chunk(char[] buf, mut nat|blank pos, read f)
    if pos is blank
        pos = mut 0
    contents = unsafe::add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {builtins::nat bytes_read = f__contents?fread((char*)contents, 1, size, (FILE*)f__contents):0;}
    if bytes_read==0 fail "end of file"
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos, bytes_read)

def line(char[] buf, mut nat|blank pos, read f)
    if pos is blank
        pos = mut 0
    contents = unsafe::add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {builtins::bool success = f__contents?fgets((char*)contents, size, (FILE*)f__contents)!=0:0;}
    if not success fail "end of file"
    {builtins::nat bytes_read = strlen((char*)contents);}
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos, bytes_read)

def system(cstr|str _cmd)
    cmd = unsafe_temporary_cstr _cmd
    {builtins::int result = system((const char*)cmd);}
    if result!=int 0 fail "system call failed"

