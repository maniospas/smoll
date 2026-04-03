import "builtins"

def eq(bool x, bool y)
    {builtins::bool z = x==y?1:0;}
    return z

def neq(bool x, bool y)
    {builtins::bool z = x!=y?1:0;}
    return z

def not(bool value)
    {builtins::bool z = value?0:1;}
    return z

def eq(fixed::true, fixed::true) 
    return fixed::true()

def eq(fixed::false, fixed::false) 
    return fixed::true()

def eq(fixed::true, fixed::false) 
    return fixed::false()

def eq(fixed::false, fixed::true) 
    return fixed::false()

def not(fixed::true)
    return fixed::false()

def not(fixed::false)
    return fixed::true()

def neq(fixed::true|fixed::false x, fixed::true|fixed::false y)
    return not x==y

def eq(fixed::true, bool value)
    return value

def eq(bool value, fixed::true)
    return value

def eq(fixed::false, bool value)
    return not value

def eq(bool value, fixed::false)
    return not value

def neq(fixed::true|fixed::false x, bool y)
    return not eq(x, y)

def neq(bool x, fixed::true|fixed::false y)
    return not eq(x, y)
