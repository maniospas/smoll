import "std/core.s"
import "std/io.s"::dir::is_dir
import "std/io.s"::dir::open
import "std/io.s"::get
import "std/test.s"


def main()
    root = str "./tests/passing/"
    CLI = edit console()
    colors = colors CLI

    counter  = mut 0
    failures = mut 0
    for path in open root
        if path==".." or not is_dir(root, path)
            continue
        CHARS = edit arena char[].alloc 256 # build the command onto it
        copy "./smoll --cleanup "
        allocator_pos = CHARS.pos
        root+path+"/"
        dir = edit open str(status CHARS from allocator_pos)
        for entry in dir
            if not ends_with(entry, ".s")
                continue
            counter = counter+1
            command = CHARS.buf.str endpos copy(local CHARS, str entry)
            if not test command
                failures = failures+1
    
    # final report
    if failures==0
        set(colors green) print nn "SUCCESS "
        set(colors reset) print nn "no errors across "
    else
        set(colors red)   print nn "FAILED "
        set(colors reset) print (failures, " out of ")
    print nn counter
    print " tests"