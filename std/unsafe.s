import "std/core.s"

def alloc(nat bytes)
    {builtins::compiler::ptr allocated = malloc(bytes__value);builtins::bool failed=allocated==0;}
    if failed
        fail "allocation failed"
    return allocated

def realloc(any ptr allocated, nat bytes)
    {builtins::compiler::ptr new_allocated = allocated?realloc(allocated, bytes__value):malloc(bytes__value);builtins::bool failed=new_allocated==0;}
    if failed
        fail "reallocation failed"
    INVALIDATE compiler::ptr
    return new_allocated->compiler::attach_type(allocated)

def free(any ptr allocated)
    {if(allocated)free(allocated);allocated=0;}
    INVALIDATE compiler::ptr

def zero(any ptr allocated, nat from, nat to)
    {memset(((char*)allocated)+from__value, 0, to__value);}

def add(any ptr allocated, nat offset)
    {builtins::compiler::ptr element = ((char*)allocated)+offset__value;}
    return element->compiler::attach_type(allocated)