import "std/core.s"
import "std/io.s"::dir as dir
import "std/io.s"::process as process

def run(cstr|str command)
    proc = mut process::read command
    del proc
    if try error = compiler::catch()
        print cstr error

def main()
    path = "./tests/passing/"
    bp = bufpos alloc 256 # buffer and mutable position pair
    bp.copy "./smoll "
    bp.copy path
    test_dir = dir::read path
    proc_buf = alloc KB 4
    while try entry = dir::entry test_dir # do not move the position
        if not entry.ends_with ".s"
            continue
        command = bp.buf.str((local bp).copy_null_terminated(str entry).endpos())
        print command
        run command
    