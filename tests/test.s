import "std/core.s"

def constant = compt cstr unsafe_temp add(bufpos alloc 128, "hello", " world!")
def test = compt (1,2)

def main()
    compt print "compiling"
    print constant
    print add test
