local import std.core.builtinsext
local import std.core.string

def printf(cstr|blank func, cstr args)
    if func is blank
        func = "print nn"
        doc "prints a formatted string"
        doc "This splits the provided string into subsegments and bracketed expressions."
        doc "Ignoring empty substrings, the same function call is made for all substrings"
        doc "and expressions. Example, where the default applied call is `print nn`:"
        doc "```python"
        doc "import std.core"
        doc "def main(CLI)"
        doc "    macro<printf> \"hello {1+1} word\n\""
        doc "```"
        doc "This variation outputs an empty buffer."
    else
        doc "emmits string formatting code"
        doc "The emmited code applies the same call to all string segments. In particular,"
        doc "this splits the provided string into subsegments and bracketed expressions."
        doc "Ignoring empty substrings, the provided call is made for all substrings"
        doc "and expressions."
        doc "The results should be of the same type and are placed on a buffer, thus incurring no"
        doc "no allocation cost if all results are blank. In other words, this patterns lets one"
        doc "apply the same conceptual transformation on heterogeneous"
        doc "data to yield the same output. Print formatting is the main intended use, but"
        doc "consider the logic of the following example too:"
        doc "```python"
        doc "import std.core"
        doc "def inc(nat x)"
        doc "    return float(x+1)"
        doc "def inc(float x)"
        doc "    return x+1.0"
        doc "def main(CLI)"
        doc "    v = macro<printf>(\"inc\", \"{1}{5.0}\")"
        doc "    print v[0] # 2.0"
        doc "    print v[1] # 6.0"
        doc "```"
    count_brackets = mut 0
    CHARS = edit arena alloc 4096
    copy "["
    copy func
    copy "("
    balance = mut 0
    pending_open = mut true
    str_args = str args
    for c in str_args
        if c==char "{"
            balance = balance+1
            if balance==1 and not pending_open
                copy "\"),"
                copy func
                copy "("
            pending_open = false
        else if c==char "}"
            if balance==1
                if compiler::for_counter()+1<len(str_args)
                    copy ")"
                    copy ","
                    copy func
                    copy "("
                pending_open = true
            if not try balance = balance-1: fail "imbalanced brackets"
        else
            if pending_open
                copy "\""
                pending_open = false
            copy c
    if balance!=0: fail "imbalanced brackets"
    if not pending_open: copy "\""
    copy ")"
    copy "]"
    #unsafe_console().print str status CHARS
    return CHARS.buf
