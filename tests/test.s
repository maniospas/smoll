import std.core
import std.scope

def budget(nat capacity)
    return class assigned remaining=mut capacity

def consume(on edit budget FINITE, nat|blank cost)
    if cost is blank: cost = 1
    FINITE.remaining = FINITE.remaining-cost

def FINITE()
    compt console().print "What's the runtime budget?"
    return budget compt (try capacity=nat console()) and capacity 
    # Note:
    # 'true and value' -> value
    # 'false and value' -> zero-initialized

def main(on CLI, on edit FINITE)
    for i in range of 10
        consume()
        print i
