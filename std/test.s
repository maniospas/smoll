local import std.core
local import std.io


local def run(effect edit console CLI, cstr|str command)
    proc = process::open command
    del proc
    if try error = compiler::catch()
        return cstr error
    return cstr()

def print_marker(effect edit colors colors, "success"|"failure"|"pending" status)
    doc "prints a test status marker"
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

local def restore_stdout(int saved_stdout)
    {fflush(stdout);}
    {dup2(saved_stdout, STDOUT_FILENO);}
    {close(saved_stdout);}

def stdout_to_err(effect edit console CLI)
    doc "temporarily redirect stdout to stderr"
    {builtins::int saved_stdout = dup(STDOUT_FILENO);}
    {fflush(stdout);}
    {dup2(STDERR_FILENO, STDOUT_FILENO);}
    defer
        restore_stdout saved_stdout
    return saved_stdout


def assert(effect edit console CLI, bool condition, cstr text)
    doc "assert a condition given a corresponding message"
    doc "This outputs to stderr, so that asserts are printed"
    doc "even if stout is suppressed during the 'test' function."
    stdout_to_err()
    colors = edit colors CLI
    #print ""
    # print nn compt process::args()[0]
    print nn " |- "
    if not condition
        print_marker type "failure"
        print nn "assertion failed: "
        print text
        # print nn "\r"
        # print type "flush"
        fail "assert failed"
    print_marker type "success"
    print nn "assert: "
    print text
    # print nn "\r"
    # print type "flush"

def test(effect edit colors colors, str command, bool|blank should_fail)
    doc "prints and tests a system command"
    doc "Returns whether the command succeeded or not."
    doc "A completion assert is performed at the end."
    CLI = edit colors.CLI
    print command
    error = mut run command
    if not should_fail is blank
        if should_fail
            if exists error
                error = cstr()
            else
                error = "no errors found, but the run should be failing (contains _fail_ in its name)"
    print nn " |- "
    if exists error
        print_marker type "failure"
        print error
        return false
    print_marker type "success"
    print "completed"
    return true