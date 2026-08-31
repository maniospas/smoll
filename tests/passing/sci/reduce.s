import std.core
import std.sci
import std.test

def ∅ = compt blank() # blank literal is equivalent to '()'
def main()
    CLI = edit console ∅
    v = vec [1.0, 2.0, 0.0-3.0]
    # can use text like 'add' instead of commas and it's
    # transcribed to  ', type "add",'
    reduced = v.reduce(∅ add ∅ abs) # equivalent to v.reduce(type "add", type "abs")
    assert(reduced==1.0+2.0+3.0, "correctly applied add abs reduction with blank literal")