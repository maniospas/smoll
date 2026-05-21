import "std/core.s"
import "std/io.s"


def run(cstr|str command)
    proc = mut process:read command
    del proc
    if try error = compiler:catch()
        print cstr error

def main()
    path = "./tests/passing/"
    bp = bufpos char[].alloc 256 # buffer and mutable position pair
    bp.copy "./smoll "
    bp.copy path
    test_dir = dir:read path
    proc_buf = char[].alloc KB 4
    for entry in test_dir # do not move the position
        if not entry.ends_with ".s" continue
        command = bp.buf.str((local bp).copy_null_terminated(str entry).endpos())
        print command
        run command
