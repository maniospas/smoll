import "std/core.s"
import "std/io.s"


def run(effect edit console CLI, cstr|str command)
    proc = process::open command
    del proc
    if try error = compiler::catch()
        return cstr error
    return cstr()

def print_marker(effect edit colors colors, "success"|"failure"|"pending" status)
    CLI = edit colors.CLI
    print nn "["
    if status is "success"
        set(colors green)
        print nn "V"
    if status is "failure"
        set(colors red)
        print nn "X"
    if status is "pending"
        set(colors yellow)
        print nn "+"
    set(colors reset)
    print nn "] "

def main()
    CLI = edit console()
    CHARS = edit arena char[].alloc 256
    colors = colors CLI 
    path = "./tests/passing/"
    copy "./smoll --cleanup "
    copy path
    test_dir = edit dir::open path
    failures = mut 0
    for entry in test_dir # do not move the position
        if not entry.ends_with ".s" continue
        counter = compiler::for_counter()
        command = CHARS.buf.str endpos copy_null_terminated(local CHARS, str entry)
        print_marker type "pending"
        print nn command
        flush CLI
        error = run command
        print nn "\r"
        if exists error
            print_marker type "failure"
            print ""
            print nn "    "
            print error
            failures = failures+1
        else 
            print_marker type "success"
            print ""

    if failures==0
        set(colors green)
        print nn "SUCCESS "
        set(colors reset)
        print nn "no errors across "
        print nn counter
        print " tests"
    else
        set(colors red)
        print nn "FAILED "
        set(colors reset)
        print nn failures
        print nn " out of "
        print nn counter
        print " tests"