import std.core

def call_one(nat->nat->nat x)
    return compiler::call(x,1)

local def add(nat x, 0|1|2 y) # 0,1,2 are literal types here
    return x+compiler::value(y)

def addnat(nat x)
    # `type` retrieves a functor for a function.
    # compiler::abstract(...) abstracts away the literals,
    # which is safe as literals are eliminated at compile 
    # time. So we return a `nat->nat` functor.
    if x==0 return compiler::abstract(type add<nat,0>)
    if x==1 return compiler::abstract(type add<nat,1>)
    if x==2 return compiler::abstract(type add<nat,2>)
    # zero initialization otherwise creates a null pointer error 
    # when trying to call the return

def main()
    CLI = console()
    x = call_one(type addnat)
    print x.compiler::call(5) # prints 6
