import "std/core.s"
import "std/io.s" as io

def Type(str|cstr _name)
    name = str _name

def Code(str|cstr _name, Type ptr type)
    name = str _name
    return class(type,name)

def globals()
    RED   = "\033[31m"
    GREEN = "\033[32m"
    YELLOW= "\033[33m"
    PURPLE= "\033[35m"
    RESET = "\033[0m"
    symbols = "=\\/+-*@<>!%&#!(){}[]:.',;|"
    END_TOKEN = "...]"
    START_TOKEN = "[..."
    err_code_list = (mut cstr[]).alloc 1024
    err_code_list[0] = "\"noerr\""
    err_code_list[1] = "\"error\""
    debug_mode = mut false
    is_lsp = mut false
    ansi = (RED,GREEN,YELLOW,PURPLE,RESET)
    return (symbols,END_TOKEN,START_TOKEN,err_code_list,debug_mode,is_lsp,ansi)

def main()
    globs = globals()