import "builtins"

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

def print(compiler::true)
    print("true")
    
def print(compiler::false)
    print("false")
