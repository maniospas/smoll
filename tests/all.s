import "std/core.s"
import "std/io.s"::dir as dir
import "std/io.s"::process as process


def main()
    path = "./tests/passing/"
    max_command_length = 50
    bp = bufpos alloc max_command_length # buffer and mutable position pair
    bp.copy "./smoll "
    bp.copy path
    test_dir = dir::read path
    proc_buf = alloc KB 4
    while try entry = (local bp).dir::entry test_dir # do not move the position
        if not entry.ends_with ".s" 
            continue
        command = lextend entry
        print command.rextend(max_command_length-len command, char " ")
        proc = mut process::read command.rextend char "" # null-terminate to avoid copying in cstr conversion
    
        try noerr() # clear warnings
        del proc
        error = compiler::catch()
        if exists compiler::catch()
            print cstr compiler::catch()
    