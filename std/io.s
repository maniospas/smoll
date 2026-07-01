import "std/io/process.s" as process
import "std/io/file.s" as file
import "std/io/dir.s" as dir
import "std/io/web.s" as web
local import "std/core.s"

def get(edit dir::open data, nat) 
    return dir::entry data

def get(effect edit arena<char::name>|circular<char::name> CHARS, edit file::File|process::open f, nat)
    return file::line|process::line(CHARS, f)