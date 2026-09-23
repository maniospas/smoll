import std.core

def main(on CLI)
    element = mut last [1.0] # mutable ptr
    print compiler::deref element # prints 1.0
    element = 2.0
    print compiler::deref element # prints 2.0
