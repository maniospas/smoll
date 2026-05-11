import "std/core.s"

rec fib(nat n)
  if n<=1 return 1
  return fib(n-1)+fib(n-2)

def main()
	print fib 10
