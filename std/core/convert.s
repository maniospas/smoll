import "builtins"
import "std/core/numbers.s"

def float(Number x)
    {builtins::float z=x;}
    return z

def int(Number x)
    {builtins::int z=x;}
    return z

def id(Number x)
    if x is int and x<int(0)
        fail "cannot convert negative int to id"
    if x is float and x<float(0)
        fail "cannot convert negative float to id"
    {builtins::int z=x;}
    return z