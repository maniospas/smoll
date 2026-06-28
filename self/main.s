import "std/core.s"
import "std/map.s"
import "std/io.s"

def symbols = "=\\/+-*@<>!%&#!(){}[]:.',;|"
def end_token = "...]"
def start_token = "[..."

def Type(str|cstr _name)
    name = str _name

def Code(str|cstr _name, Type ptr type)
    name = str _name
    return class(type,name)

def globals()
    err_code_list = edit cstr[].alloc 1024
    err_code_list[0] = "\"noerr\""
    err_code_list[1] = "\"error\""
    debug_mode = mut false
    is_lsp = mut false
    return (err_code_list,debug_mode,is_lsp)

def main()
    CLI = console()
    CHARS = edit circular char[].alloc 1024*1024
    GLOBS = globals()
    for line in file::open "tests/test.s"