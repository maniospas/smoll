import "std/core.s"

def main()
    CLI = console()
    element = [1.0][0]&& # mutable 
    print element.. # prints 1.0
    element = 2.0
    print element.. # prints 2.0
