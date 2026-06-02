import "std/core.s"

def main()
    console = console()
    mem = arena char[].alloc 1024
    print "what's your name"
    name = mem.str console
    print ("hello", " ")
    print (name, "!\n")

    while not try x = console.float print "Please give a number:"
        print "invalid number"
    print "this is its square"
    print x*x
