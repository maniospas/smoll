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

def eq(compiler::true, compiler::true) 
    return compiler::true()

def eq(compiler::false, compiler::false) 
    return compiler::true()

def eq(compiler::true, compiler::false) 
    return compiler::false()

def eq(compiler::false, compiler::true) 
    return compiler::false()

def not(compiler::true)
    return compiler::false()

def not(compiler::false)
    return compiler::true()

def neq(compiler::true|compiler::false x, compiler::true|compiler::false y)
    return not x==y

def eq(compiler::true, bool value)
    return value

def eq(bool value, compiler::true)
    return value

def eq(compiler::false, bool value)
    return not value

def eq(bool value, compiler::false)
    return not value

def neq(compiler::true|compiler::false x, bool y)
    return not eq(x, y)

def neq(bool x, compiler::true|compiler::false y)
    return not eq(x, y)
