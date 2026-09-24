import std.core

def main(on CLI, on new CHARS, WHICHERR)
    print "what's your name"
    name = str CLI
    if empty name: fail "why no name?"
    macro<printf> "hello {name}!\n"
    
    
    # also works
    # while not try x = CLI.float print "Please give a number:"
    #     print "invalid number"
    # print "this is its square"
    # print x*x
