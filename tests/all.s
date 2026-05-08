import "std/core.s"
import "std/io.s"::dir as dir
import "std/io.s"::process as process

def run(cstr|str command)
    proc = mut process::read command
    try compiler::catch() # clear warnings
    del proc
    if try error = compiler::catch()
        print cstr error

def main()
    path = "./tests/passing/"
    max_command_length = 50
    bp = bufpos alloc max_command_length # buffer and mutable position pair
    bp.copy "./smoll "
    bp.copy path
    test_dir = dir::read path
    proc_buf = alloc KB 4
    while try entry = dir::entry test_dir # do not move the position
        if not entry.ends_with ".s"
            continue
        command = (local bp).copy(str entry).lextend()
        print command.rextend(max_command_length-len command, char " ")
        run command.rextend char "" # null-terminate to avoid copying in cstr conversion
    