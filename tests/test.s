import "std/core.s" # defines Number

def natpair(nat x, nat y)
def float(natpair a)
    x = float a.x
    y = float a.y
    return (x,y)

def inc(float&Number x) # would try and fail to create it for the previous method's output
    return 1.0+x

def inc(float\Number a) # already defined for Number
    x = 1.0+float a.x
    y = 1.0+float a.y
    return (x,y)

def main()
    print inc(1.0)  # print 2.0
    print inc(4.0,4.0).x # prints 5.0