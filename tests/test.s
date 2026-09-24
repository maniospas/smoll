import std.core
def @ = compiler::varname

def conditional(bool case)
    CHARS = edit bucket()
    if case: s = copy 123
    else:    s = copy 345
    return (s, CHARS) # this would not be possible with 'CHARS = new()'

def main(on CLI)
    print conditional(true).s
    print conditional(false).s
