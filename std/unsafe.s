import "std/core.s"

def alloc(id bytes)
    {builtins::compiler::ptr allocated = malloc(bytes);}
    return allocated

def realloc(mut compiler::ptr allocated, id bytes)
    {allocated = realloc(allocated, bytes);}

def zero(compiler::ptr allocated, id from, id to)
    {memset(((char*)allocated)+from, 0, to);}
    