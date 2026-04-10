import "builtins"
import "std/core/bool.s"

def Number = float|int|nat

def is_different(Number x, Number y)
    return not x is type(y)

def add(Number x, Number y)
    if is_different(x,y)
        compiler::skipdef()
    {type(x) z=x+y;}
    return z

def mul(Number x, Number y)
    if is_different(x,y)
        compiler::skipdef()
    {type(x) z=x*y;}
    return z

def div(Number x, Number y)
    if is_different(x,y)
        compiler::skipdef()
    {type(x) z=x/y;}
    return z

def lt(Number x, Number y)
    if is_different(x,y)
        compiler::skipdef()
    {builtins::bool z = x<y?1:0;}
    return z

def gt(Number x, Number y)
    if is_different(x,y)
        compiler::skipdef()
    {builtins::bool z = x>y?1:0;}
    return z

def le(Number x, Number y)
    if is_different(x,y)
        compiler::skipdef()
    {builtins::bool z = x<=y?1:0;}
    return z

def ge(Number x, Number y)
    if is_different(x,y)
        compiler::skipdef()
    {builtins::bool z = x>=y?1:0;}
    return z

def eq(Number x, Number y)
    if is_different(x,y)
        compiler::skipdef()
    {builtins::bool z = x==y?1:0;}
    return z

def neq(Number x, Number y)
    if is_different(x,y)
        compiler::skipdef()
    {builtins::bool z = x!=y?1:0;}
    return z
    
def sub(Number x, Number y)
    if is_different(x,y) 
        compiler::skipdef()
    if x is nat and x<y
        fail "id subtraction would yield a negative"
    {type(x) z=x-y;}
    return z