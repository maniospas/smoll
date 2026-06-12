import "std/core.s"

def fp(float ptr x)
    return x

def main()
    CLI = console()
    x = edit fp[].alloc 4
    x[0] = [1.0]& 
    x[0] = [1]& // SHOULD CREATE AN ERROR BUT IT DOES NOT
    #print x[0]