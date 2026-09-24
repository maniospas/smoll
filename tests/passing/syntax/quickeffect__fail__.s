import std.core
import std.scope

def budget(nat capacity)
    return class assigned remaining=mut capacity

def consume(on edit budget FINITE, nat|blank cost)
    if cost is blank: cost = 1
    FINITE.remaining = FINITE.remaining-cost

def FINITE()
    return budget 5

def main(on CLI, on edit FINITE)
    for i in range of 10
        consume()
        print i
