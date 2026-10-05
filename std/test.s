# Written in 2026 by Emmanouil Krasanakis (maniospas@hotmail.com)
# To the extent possible under law, the author has dedicated all copyright
# and related and neighboring rights to this software to the public domain
# worldwide.
# 
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted.
# 
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR
# IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

local import std.core
local import std.io


local def run(on CLI, cstr|str command)
    doc "run a system process command and return an error description"
    doc "The return value if there was no error is precisely `cstr()`,"
    doc "which is the unitialized cstr and different than merely the empty on `\"\"`."
    doc "Check for its existence pf `if exists run command: ...`"
    proc = process::open command
    del proc
    if not ok assigned error = compiler::last_error()
        return cstr error
    return cstr()

def print_marker(on edit colors colors, "success"|"failure"|"pending" status)
    doc "prints a test status marker"
    doc "Does not change line. The purpose of this function is to standardize"
    doc "error printing."
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
    doc "restored a redirected stoud"
    doc "This is a local function that is not exposed"
    doc "because it is called by the defer of stdout_to_err."
    {fflush(stdout);}
    {dup2(saved_stdout, STDOUT_FILENO);}
    {close(saved_stdout);}

def stdout_to_err(on CLI)
    doc "temporarily redirect stdout to stderr"
    {builtins::int saved_stdout = dup(STDOUT_FILENO);}
    {fflush(stdout);}
    {dup2(STDERR_FILENO, STDOUT_FILENO);}
    defer
        restore_stdout saved_stdout
    return saved_stdout


def assert(on CLI, bool condition, cstr|str text, blank|"failure_only" print_mode)
    doc "assert a condition given a corresponding message"
    doc "This outputs to stderr, so that asserts are printed"
    doc "even if stdout is suppressed by the 'test' function."
    stdout_to_err()
    colors = edit colors CLI
    #print ""
    # print nn compt process::args()[0]
    if not condition
        print nn " |- "
        print_marker type "failure"
        print nn "assertion failed: "
        print text
        # print nn "\r"
        # print type "flush"
        fail "assert failed"
    if print_mode is blank
        print nn " |- "
        print_marker type "success"
        print nn "assert: "
        print text
        # print nn "\r"
        # print type "flush"

def test(on edit colors colors, str command, bool|blank should_fail)
    doc "prints and tests a system command"
    doc "Returns whether the command succeeded or not."
    doc "A completion assert is performed at the end,"
    doc "and the stout is suppressed for tested processes."
    doc "If needed, print intermediate test results, such"
    doc "as progress, by temorarily redirecting"
    doc "stdout to std err with stdout_to_err. Alternatively,"
    doc "just use the assert statement."
    CLI = edit colors.CLI
    stdout_to_err()
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