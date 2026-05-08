local import "std/core/builtinsext.s"

def cstr(compiler::catch value)
    doc "gets a cstr description of an error code"
    if endl is blank
        doc "automatically ends the line too"
        endl = "\n"
    {builtins::cstr ret = __temp_all_errcodes[value];}
    return ret

def exists(compiler::catch value)
    {builtins::bool ret = (value!=0);}
    return ret
