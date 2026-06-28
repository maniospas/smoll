import "std/core.s"
import "std/sci.s"

def next(nat->nat->nat addition_generator)
    return addition_generator.compiler::call 3 # will return a "null" functor

def ones = compt vec [1.0,1.0]
def unit = compt self(vec [1.0,1.0])/pow(2.0,0.5)

def offset(vec x, unit|ones by)
    FLOATS = new()
    return x+compiler::value by
    
def main()
    CLI = edit console()
    x = vec [0.0,0.0]
    print offset(x,type ones)
