import "std/core.s"

def inc(float|int|nat x, float|int|nat|blank value)
    if value is blank
        value = type float|int|nat->x 1
    if not value is type(x)
        compiler:skip() # skip invalid 'inc' definitions
    return x+value

def main()
    CLI = console()
    print inc 2.0  # prints 3.0
    print inc(2,2) # prints 4
