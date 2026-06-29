import "std/core.s"
import compiler # fsat usage of: literal, call, abstract

def call_one(nat->nat->nat x)
    return x.call 1

local def add(nat x, 0|1|2 y)
    return x+value y

def addnat(nat x)
    for v is 0|1|2 # type iteration!!!
        if x==value v
            return abstract type add<nat,v>

def main()
    CLI = console()
    x = call_one type addnat
    print x.call 5 # prints 6
