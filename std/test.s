local import "std/core.s"
local import "std/io.s"


local def run(effect edit console CLI, cstr|str command)
    proc = process::open command
    del proc
    if try error = compiler::catch()
        return cstr error
    return cstr()

local def print_marker(effect edit colors colors, "success"|"failure"|"pending" status)
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

def test(effect edit colors colors, str command)
    CLI = edit colors.CLI
    print_marker type "pending"
    print nn command
    print type "flush"
    error = run command
    print nn "\r"
    if exists error
        print_marker type "failure"
        print ""
        print nn "    "
        print error
        return false
    print_marker type "success"
    print ""
    return true