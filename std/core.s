import "builtins"

def Number = float|int|id

def print(cstr value, cstr|void endl)
    if endl is void 
        endl = "\n"
    {printf("%s%s", value, endl);}

def print(float value, cstr|void endl)
    if endl is void 
        endl = "\n"
    {printf("%.6f%s", value, endl);}

def print(int value, cstr|void endl)
    if endl is void 
        endl = "\n"
    {printf("%lld%s", value, endl);}

def print(id value, cstr|void endl)
    if endl is void 
        endl = "\n"
    {printf("%llu%s", value, endl);}

def print(bool value, cstr|void endl)
    if endl is void
        endl = "\n"
    {printf("%s%s", value?"true":"false", endl);}

def add(Number x, Number y)
    {type(x) z=x+y;}
    return z

def mul(Number x, Number y)
    {type(x) z=x*y;}
    return z

def div(Number x, Number y)
    {type(x) z=x/y;}
    return z

def lt(Number x, Number y)
    {builtins::bool z = x<y?1:0;}
    return z

def gt(Number x, Number y)
    {builtins::bool z = x>y?1:0;}
    return z

def le(Number x, Number y)
    {builtins::bool z = x<=y?1:0;}
    return z

def ge(Number x, Number y)
    {builtins::bool z = x>=y?1:0;}
    return z

def eq(Number x, Number y)
    {builtins::bool z = x==y?1:0;}
    return z

def neq(Number x, Number y)
    {builtins::bool z = x!=y?1:0;}
    return z

def eq(bool x, bool y)
    {builtins::bool z = x==y?1:0;}
    return z

def neq(bool x, bool y)
    {builtins::bool z = x!=y?1:0;}
    return z

def sub(Number x, Number y)
    if x<y print("warning: negative\n")
    {type(x) z=x-y;}
    return z

def not(bool value)
    {builtins::bool z = value?0:1;}
    return z