local import "std/core.s" 

def alloc(nat bytes)
    {builtins::compiler::ptr allocated = malloc(bytes);builtins::bool failed=allocated==0;}
    if failed
        fail "allocation failed"
    return allocated # allow content modifications afterwrds

def realloc(any ptr allocated__unsafe_ptr, nat bytes) # the __unsafe_ptr suffix is needed to skip invalidation internally
    INVALIDATE compiler::ptr
    {builtins::compiler::ptr new_allocated = allocated__unsafe_ptr?realloc(allocated__unsafe_ptr, bytes):malloc(bytes);builtins::bool failed=new_allocated==0;}
    if failed
        fail "reallocation failed"
    return new_allocated.compiler::attach_type(allocated__unsafe_ptr)

def free(mut any ptr allocated)
    {if(allocated)free(allocated);} # automatically set to zero because it's a returned invalidated variable
    INVALIDATE compiler::ptr

def zero(any ptr allocated, nat from, nat to)
    {memset(((char*)allocated)+from, 0, to-from);}

def add(any ptr allocated, nat offset)
    {builtins::compiler::ptr element = ((char*)allocated)+offset;}
    return element.compiler::attach_type(allocated)