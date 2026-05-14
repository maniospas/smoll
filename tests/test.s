import "std/core.s"

def version("one") # just a literal type
    print "version one"

def version("two")
    print "version two"

def main()
    v = type "two" # a cstr literal type
    version v      # calls the correct version
    print compiler::literal type "two"