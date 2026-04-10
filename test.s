import "std/core.s"

rec fib(id n)
    if n<=1
        return 1
    return call_fib(n-1)+call_fib(n-2)

def call_fib(id n)
    return fib(n)

def main()
    print fib(42)

