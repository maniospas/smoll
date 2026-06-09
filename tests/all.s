import "std/core.s"
import "std/io.s"


def run(effect edit console CLI, cstr|str command)
    proc = process:open command
    del proc
    if try error = compiler:catch()
        print cstr error

def main()
    CLI = edit console()
    CHARS = edit arena char[].alloc 256
    path = "./tests/passing/"
    copy "./smoll --cleanup "
    copy path
    test_dir = edit dir:open path
    for entry in test_dir # do not move the position
        if not entry.ends_with ".s" continue
        command = CHARS.buf.str endpos copy_null_terminated(local CHARS, str entry)
        print command
        run command
