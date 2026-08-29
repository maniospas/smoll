import std.core

def next(nat->nat->nat addition_generator)
    return addition_generator.compiler::call 10 # will return a "null" functor

def increments = 1|2|3|4|5
def add(nat x, increments value) 
    return x+compiler::value value
def add(nat y)
    for increment is increments
        if y==compiler::value increment
            return compiler::abstract type add<nat,increment>

def main()
    CLI = edit console()
    successor_function = next type add<nat>
    if try ret = successor_function.compiler::call 5 # fail to call the "null" functor
        print ret
    else
        print "failed"