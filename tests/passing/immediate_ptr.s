import "std/core.s"

def main()
    CLI = edit console()
    element = mut [1.0]& # mutable ptr
    print compiler::deref element # prints 1.0
    element = 2.0
    print compiler::deref element # prints 2.0
