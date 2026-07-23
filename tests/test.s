import "std/core.s"

def inc(mut float ptr element)
    element = 1.0+compiler::deref element

def main()
    CLI = edit console()
    element = mut last [0.0] # equivalent to element = [0.0][0]& 
    print compiler::deref element # prints 0.0
    inc element
    print compiler::deref element # prints 1,0