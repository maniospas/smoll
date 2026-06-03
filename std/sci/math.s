local import "std/extern/math.h"
local import "std/core.s"

def abs(float x)
    mask = rshift(bits x, 63)
    {builtins:int c = 0x7FFFFFFFFFFFFFFF;}
    return float bits(x).band(bits c)

def abs(int x)
    mask = rshift(bits x, 63)
    return nat xor(mask, bits x+int mask)

def sqrt(float x)
    {builtins:float z = sqrt(x);}
    return z

def sin(float x)
    {builtins:float z = sin(x);}
    return z

def cos(float x)
    {builtins:float z = cos(x);}
    return z

def log(float x)
    {builtins:float z = log(x);}
    return z

def tan(float x)
    {builtins:float z = tan(x);}
    return z

def floor(float x)
    {builtins:int z = floor(x);}
    return z

def asin(float x)
    {builtins:float z = asin(x);}
    return z

def acos(float x)
    {builtins:float z = acos(x);}
    return z

def atan(float x)
    {builtins:float z = atan(x);}
    return z

def atan(float x, float y)
    {builtins:float z = atan2(x, y);}
    return z

def exp(float x)
    {builtins:float z = exp(x);}
    return z

def pow(float x, float y)
    {"-lm"}
    {builtins:float z = pow(x, y);}
    return z

def isnan(float x)
    VM "[math.isnan(x)]"
    {builtins:bool z = (fpclassify(x)==FP_NAN);}
    return z

def isinf(float x)
    VM "[math.isinf(x)]"
    {builtins:bool z = (fpclassify(x)==FP_INFINITE);}
    return z
