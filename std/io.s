import "std/io/process.s" as process
import "std/io/file.s" as file
import "std/io/dir.s" as dir
import "std/io/web.s" as web
local import "std/core.s"

def get(edit dir:read data, nat) 
    return dir:entry data

def get(edit char[] buf, mut nat|blank pos, edit file:File|process:read f, nat)
    if pos is blank
        pos = mut 0
    return file:line|process:line(buf, pos, f)