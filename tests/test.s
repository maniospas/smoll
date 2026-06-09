import "std/core.s"
import "std/net.s"

def inc(float f)
    return f+1.0

def foo(float->float c)
    return c(0.0)

def main()
    CLI = edit console()
    print foo(type inc->0.0)
    