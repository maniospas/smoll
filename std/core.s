import "builtins"
import "std/core/bool.s"


def Number = float|int|id

def is_different(Number x, Number y)
    return not x is type(y)

def print(cstr value, cstr|empty endl)
    if endl is empty 
        endl = "\n"
    {printf("%s%s", value, endl);}

def print(float value, cstr|empty endl)
    if endl is empty 
        endl = "\n"
    {printf("%.6f%s", value, endl);}

def print(int value, cstr|empty endl)
    if endl is empty 
        endl = "\n"
    {printf("%lld%s", value, endl);}

def print(id value, cstr|empty endl)
    if endl is empty 
        endl = "\n"
    {printf("%llu%s", value, endl);}

def print(bool value, cstr|empty endl)
    if endl is empty
        endl = "\n"
    {printf("%s%s", value?"true":"false", endl);}

def add(Number x, Number y)
    if is_different(x,y)
        fixed::fail()
    {type(x) z=x+y;}
    return z

def mul(Number x, Number y)
    if is_different(x,y)
        fixed::fail()
    {type(x) z=x*y;}
    return z

def div(Number x, Number y)
    if is_different(x,y)
        fixed::fail()
    {type(x) z=x/y;}
    return z

def lt(Number x, Number y)
    if is_different(x,y)
        fixed::fail()
    {builtins::bool z = x<y?1:0;}
    return z

def gt(Number x, Number y)
    if is_different(x,y)
        fixed::fail()
    {builtins::bool z = x>y?1:0;}
    return z

def le(Number x, Number y)
    if is_different(x,y)
        fixed::fail()
    {builtins::bool z = x<=y?1:0;}
    return z

def ge(Number x, Number y)
    if is_different(x,y)
        fixed::fail()
    {builtins::bool z = x>=y?1:0;}
    return z

def eq(Number x, Number y)
    if is_different(x,y)
        fixed::fail()
    {builtins::bool z = x==y?1:0;}
    return z

def neq(Number x, Number y)
    if is_different(x,y)
        fixed::fail()
    {builtins::bool z = x!=y?1:0;}
    return z
    
def sub(Number x, Number y)
    if is_different(x,y)
        fixed::fail()
    if x is id and x<y 
        fixed::fail()
    {type(x) z=x-y;}
    return z