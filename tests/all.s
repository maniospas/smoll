import "std/core.s"
import "std/io.s"::dir::is_dir
import "std/io.s"::dir::open
import "std/io.s"::get
import "std/test.s"


def main()
    test_root = str "./tests/passing/"
    CLI = edit console()
    colors = colors CLI
    CHARS = edit arena alloc 64
    command_base = copy "./smoll --cleanup " # suffices to make clever string building additions
    counter  = mut 0
    failures = mut 0
    for path in open test_root
        if path==".." or not is_dir(test_root, path) continue
        gc CHARS # start from the same position at each iteration (defers a reset)
        dir_path = test_root+path+"/"
        for entry in open dir_path
            if not ends_with(entry, ".s") continue
            gc CHARS
            counter = counter+1
            if not test command_base+dir_path+entry 
                failures = failures+1

    # final report
    if failures==0
        set(colors green) print nn "PASSING "
        set(colors reset) print nn "no errors across "
    else
        set(colors red)   print nn "FAILED "
        set(colors reset) print (failures, " out of ")
    print nn counter
    print " tests"
