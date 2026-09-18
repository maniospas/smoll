import std.core
import std.io::dir::is_dir
import std.io::dir::open
import std.io::get
import std.io.process as process
import std.test
import std.scope


def _main(effect edit console CLI)
    test_root = str "./tests/passing/"
    colors = colors CLI
    CHARS = edit arena alloc 128
    # this one copy suffices to make clever string building additions
    if try preferred_backend = process::arg_after("--testback")
        command_base = "./smoll --back "+preferred_backend+" --cleanup "
    else if compiler::os type "win"
        command_base = copy "./smoll.exe --back clang --cleanup "
    else
        command_base = copy "./smoll --cleanup "
    counter  = mut 0
    failures = mut 0
    for path in open test_root
        if path==".." or not is_dir(test_root, path): continue
        reuse CHARS # start from the same position at each iteration (defers a reset)
        dir_path = test_root+path+"/"
        for entry in open dir_path
            if not ends_with(entry, ".s"): continue
            reuse CHARS
            counter = counter+1
            should_fail = entry.contains "_fail_"
            if not test(command_base+dir_path+entry, should_fail)
                failures = failures+1

    # final report
    stdout_to_err()
    if failures==0
        set(colors green) print nn "PASSING "
        set(colors reset) print nn "no errors across "
    else
        set(colors red)   print nn "FAILED "
        set(colors reset) print (failures, " out of ")
    print nn counter
    print " tests"

def main()
    CLI = edit console()
    if not try _main()
        print cstr compiler::last_error()
        fail "tests failed"