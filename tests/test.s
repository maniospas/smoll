import "std/core.s"

def modify(mut nat x, "add", "one")
    x = x+1
def modify(mut nat x, "add", nat y)
    x = x+y
def modify(mut nat x, "sub", nat y)
    x = x-y
def main()
    CLI = console()
    x = mut 5
    modify(x add 3)
    modify(x add blank() one)
    print x # prints 9