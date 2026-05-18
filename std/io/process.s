local import "std/core.s"
local import "std/unsafe.s" as unsafe

def osname() 
    doc "the operating system name"
    doc "One of \"linux\", \"windows\", \"mac\"."
    {builtins:cstr ret=__temp_osname;}
    return ret

def args()
    doc "process arguments"
    doc "This buffer is stable and accessible from anywhere."
    doc "The first argument is the executable name."
    ret = const cstr[]
    {ret__unsafe_ptr=__temp_argv;}
    {ret__unsafe_size=__temp_argc;}
    return ret

def read(str|cstr _cmd)
    doc "create a readable system process"
    cmd = unsafe_temporary_cstr _cmd
    {builtins:compiler:ptr unsafe_ptr = (void*)popen((const char*)cmd, "r");}
    if not exists unsafe_ptr fail "failed to start process"
    defer
        if exists unsafe_ptr
            {char buf[1024]; while(fread(buf, 1, sizeof(buf), (FILE*)unsafe_ptr)) {}}
            {builtins:int status = pclose((FILE*)unsafe_ptr); unsafe_ptr = 0;}
        if status!=int 0
            try fail "process terminated with unhandled non-zero exit code"
    return class(unsafe_mut unsafe_ptr)

def chunk(char[] buf, mut nat|blank pos, read f)
    if pos is blank
        pos = mut 0
    unsafe_ptr = unsafe:add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {builtins:nat bytes_read = f__unsafe_ptr?fread(unsafe_ptr, 1, size, (FILE*)f__unsafe_ptr):0;}
    if bytes_read==0 fail "end of file"
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos, bytes_read)

def line(char[] buf, mut nat|blank pos, read f)
    if pos is blank
        pos = mut 0
    unsafe_ptr = unsafe:add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {builtins:bool success = f__unsafe_ptr?fgets(unsafe_ptr, size, (FILE*)f__unsafe_ptr)!=0:0;}
    if not success fail "end of file"
    {builtins:nat bytes_read = strlen(unsafe_ptr);}
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos, bytes_read)

local def system_return(cstr cmd)
    VM "[os.system($cmd)]"
    {builtins:int result = system(cmd);}
    return result

def safe(cstr cmd)
    doc "checks whether a shell command is unsanitized"
    doc "If it is unsanitized by containing shell characters, this fails."
    doc "Otherwise, the command is just returned."
    {builtins:bool unsafe_chars = 0;}
    {const char* p = (const char*)cmd;}
    #{while(*p && !unsafe_chars) { char c=*p++; if(c==';'||c=='|'||c=='&'||c=='`'||c=='$'||c=='('||c==')'||c=='<'||c=='>'||c=='\n'||c=='\r'||c=='\\') unsafe_chars=1; }}
    if unsafe_chars fail "unsanitized command: shell metacharacter detected"
    return cmd

def system(cstr|str _cmd)
    doc "system command"
    doc "Runs a system command and waits until that completes."
    doc "Fails if the return code is non-zero, but does not expose that code."
    result = system_return safe unsafe_temporary_cstr _cmd
    if result!=int 0 fail "system call failed"
