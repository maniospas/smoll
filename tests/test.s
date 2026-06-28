import "std/core.s"

def next(nat->nat->nat addition_generator)
    return addition_generator.compiler:call 3 # will return a "null" functor

def increments = 1|2|3|4|5
def add(nat x, increments value) 
    return x+compiler:literal value
def add(nat y)
    for increment is increments
        if y==compiler:literal increment
            return compiler:abstract type add<nat,increment>

def main()
    CLI = edit console()
    s = next type add<nat>
    successor_function = s
    if try ret = successor_function.compiler:call 5 # prints 6
        print ret
    else
        print "failed"
