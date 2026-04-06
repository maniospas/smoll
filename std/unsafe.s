import "std/core.s"

def alloc(id bytes)
    {builtins::compiler::ptr allocated = malloc(bytes);}
    return allocated

def realloc(compiler::ptr allocated, id bytes)
    {builtins::compiler::ptr new_allocated = allocated?realloc(allocated, bytes):malloc(bytes);}
    INVALIDATE compiler::ptr
    return new_allocated->compiler::attach_type(allocated)

def zero(compiler::ptr allocated, id from, id to)
    {memset(((char*)allocated)+from, 0, to);}

def add(compiler::ptr allocated, id offset)
    {builtins::compiler::ptr element = ((char*)allocated)+offset;}
    return element->compiler::attach_type(allocated)