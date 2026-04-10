import "std/core.s"

rec fib(id n)
    if n<=1
        return 1
    return fibb(n-1)+fibb(n-2)

def fibb(id n)
    return fib(n)


def main()
    print fib(42)

