import "std/core.s"

def inc(mut float ptr element)
    element = 1.0+compiler::deref element

def main()
    CLI = edit console()
    xs = mut [1,2,3]
    if try x = mut xs[5]&
        print compiler::deref x
    