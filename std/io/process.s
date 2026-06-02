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

local def pclose(any ptr unsafe_ptr)
    VM "[(lambda proc=memory.get_foreign($unsafe_ptr),memory=memory:not memory.close_foreign($unsafe_ptr) or proc.wait() or proc.returncode)()]"
    {char buf[1024]; while(fread(buf, 1, sizeof(buf), (FILE*)unsafe_ptr)) {}}
    {builtins:int status = pclose((FILE*)unsafe_ptr);}
    return status

local def popen(cstr cmd)
    VM "[memory.register_foreign(subprocess.Popen($cmd.split(),stdout=subprocess.PIPE,stderr=subprocess.PIPE), 'process '+$cmd)]"
    {builtins:compiler:ptr unsafe_ptr = (void*)popen((const char*)cmd, "r");}
    return unsafe_ptr

def read(cstr cmd)
    doc "create a readable system process"
    unsafe_ptr = unsafe_mut popen cmd
    if not exists unsafe_ptr fail "failed to start process"
    defer
        if exists unsafe_ptr
            status = pclose unsafe_ptr
            {unsafe_ptr = 0;}
            if status!=int 0
                try fail "process terminated with unhandled non-zero exit code"
    return class(unsafe_ptr)

def read(str cmd)
    doc "create a readable system process"
    return read cstr unsafe_temp cmd

def chunk(char[] buf, mut nat|blank pos, read f)
    doc "next line"
    doc "Retrieves the next chunk of data outputted by a process into its stdout,"
    doc "and stores it on a char[] buffer at a given position."
    doc "A string representation of the stored data are returned."
    doc "An error is created if the buffer's"
    doc "size is exceeded."
    if pos is blank
        doc "The starting position is the buffer's beginning."
        pos = mut 0
    unsafe_ptr = unsafe:add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {builtins:nat bytes_read = f__unsafe_ptr?fread(unsafe_ptr, 1, size, (FILE*)f__unsafe_ptr):0;}
    if bytes_read==0 fail "end of file"
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos, type "lento", bytes_read)

def line(char[] buf, mut nat|blank pos, read f)
    doc "next line"
    doc "Retrieves the next line outputted by a process into its stdout,"
    doc "and stores it on a char[] buffer at a given position."
    doc "A string representation of the stored data are returned."
    doc "The result may not end at a"
    doc "new line character, in case the line does not fit onto the buffer"
    doc "at once, in which case it requires multiple reads, or at the"
    doc "output stream's end."
    if pos is blank
        doc "The starting position is the buffer's beginning."
        pos = mut 0
    unsafe_ptr = unsafe:add(buf.unsafe_ptr, pos)
    size = buf.unsafe_size-pos
    {if(f__unsafe_ptr){builtins:compiler:ptr obtained = fgets(unsafe_ptr, size, (FILE*)f__unsafe_ptr);}}
    if not exists obtained fail "end of file"
    {builtins:nat bytes_read = strlen(unsafe_ptr);}
    prev_pos = const pos
    pos = pos+bytes_read
    return str(buf, prev_pos lento bytes_read)

local def system_return(cstr cmd)
    VM "[os.system($cmd)]"
    {builtins:int result = system(cmd);}
    return result

def safe(cstr cmd)
    doc "checks whether a shell command is unsanitized"
    doc "If it is unsanitized by containing shell characters, this fails."
    doc "Otherwise, the command is just returned."
    {builtins:bool unsafe_chars = 0;}
    #{while(*p && !unsafe_chars) { char c=*p++; if(c==';'||c=='|'||c=='&'||c=='`'||c=='$'||c=='('||c==')'||c=='<'||c=='>'||c=='\n'||c=='\r'||c=='\\') unsafe_chars=1; }}
    if unsafe_chars fail "unsanitized command: shell metacharacter detected"
    return cmd

def system(effect console CLI, cstr|str _cmd)
    doc "system command"
    doc "Runs a system command and waits until that completes."
    doc "Fails if the return code is non-zero, but does not expose that code."
    result = system_return safe cstr unsafe_temp _cmd
    if result!=int 0 fail "system call failed"
