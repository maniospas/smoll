import std.core
def conditional(bool case)
    CHARS = edit bucket()
    if case: s = copy 123
    else:    s = copy 345
    return (s, CHARS) # returning s would not be possible with 'CHARS = new()'
def main(CLI, new CHARS, WHICHERR)
    print conditional(true).s
    print conditional(false).s