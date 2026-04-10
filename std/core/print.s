import "builtins"

def print(cstr value, cstr|blank endl)
    if endl is blank 
        endl = "\n"
    {printf("%s%s", value, endl);}

def print(float value, cstr|blank endl)
    if endl is blank 
        endl = "\n"
    {printf("%.6f%s", value, endl);}

def print(int value, cstr|blank endl)
    if endl is blank 
        endl = "\n"
    {printf("%lld%s", value, endl);}

def print(nat value, cstr|blank endl)
    if endl is blank 
        endl = "\n"
    {printf("%llu%s", value, endl);}

def print(bool value, cstr|blank endl)
    if endl is blank
        endl = "\n"
    {printf("%s%s", value?"true":"false", endl);}

def print(compiler::true)
    print("true")
    
def print(compiler::false)
    print("false")
