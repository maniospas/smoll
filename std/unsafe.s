import "std/core.s"

def alloc(id bytes)
    {builtins::compiler::ptr allocated = malloc(bytes);builtins::bool failed=allocated==0;}
    if failed
        fail "allocation failed"
    return allocated

def realloc(any ptr allocated, id bytes)
    {builtins::compiler::ptr new_allocated = allocated?realloc(allocated, bytes):malloc(bytes);builtins::bool failed=new_allocated==0;}
    if failed
        fail "reallocation failed"
    INVALIDATE compiler::ptr
    return new_allocated->compiler::attach_type(allocated)

def free(any ptr allocated)
    {if(allocated)free(allocated);allocated=0;}
    INVALIDATE compiler::ptr

def zero(any ptr allocated, id from, id to)
    {memset(((char*)allocated)+from, 0, to);}

def add(any ptr allocated, id offset)
    {builtins::compiler::ptr element = ((char*)allocated)+offset;}
    return element->compiler::attach_type(allocated)