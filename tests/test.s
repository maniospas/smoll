import "std/core.s"

def double_it(nat|float x)
    return x*(type (nat|float)->x 2)

def main()
    CLI = console()
    print double_it 1.0 # prints 2.0
    print double_it 1   # prints 2