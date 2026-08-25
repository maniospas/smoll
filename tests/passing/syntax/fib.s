import std.core

rec fib(nat n)
  if n<=1 return 1
  return fib(n-1)+fib(n-2)

def main()
  CLI = edit console()
  print fib 10
