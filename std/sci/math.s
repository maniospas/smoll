# Written in 2026 by Emmanouil Krasanakis (maniospas@hotmail.com)
# To the extent possible under law, the author has dedicated all copyright
# and related and neighboring rights to this software to the public domain
# worldwide.
# 
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted.
# 
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR
# IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

local import "std/extern/math.h"
local import std.core

def abs(float x)
    if x<0.0 return neg x
    return x
    # VM "[abs($x)]"
    # {builtins::int c = 0x7FFFFFFFFFFFFFFF;}
    # return float bits(x).band(bits c)

def abs(int x)
    if x<int 0 return neg x
    return x
    # VM "[abs($x)]"
    # mask = rshift(bits x, 63)
    # return nat xor(mask, bits x+int mask)

def sqrt(float x)
    {"-lm"}
    {builtins::float z = sqrt(x);}
    return z

def sin(float x)
    {"-lm"}
    {builtins::float z = sin(x);}
    return z

def cos(float x)
    {"-lm"}
    {builtins::float z = cos(x);}
    return z

def log(float x)
    {"-lm"}
    {builtins::float z = log(x);}
    return z

def tan(float x)
    {"-lm"}
    {builtins::float z = tan(x);}
    return z

def floor(float x)
    {"-lm"}
    {builtins::int z = floor(x);}
    return z

def asin(float x)
    {"-lm"}
    {builtins::float z = asin(x);}
    return z

def acos(float x)
    {"-lm"}
    {builtins::float z = acos(x);}
    return z

def atan(float x)
    {"-lm"}
    {builtins::float z = atan(x);}
    return z

def atan(float x, float y)
    {"-lm"}
    {builtins::float z = atan2(x, y);}
    return z

def exp(float x)
    {"-lm"}
    {builtins::float z = exp(x);}
    return z

def pow(float x, float y)
    {"-lm"}
    {builtins::float z = pow(x, y);}
    return z

def isnan(float x)
    VM "[math.isnan(x)]"
    {"-lm"}
    {builtins::bool z = (fpclassify(x)==FP_NAN);}
    return z

def isinf(float x)
    VM "[math.isinf(x)]"
    {"-lm"}
    {builtins::bool z = (fpclassify(x)==FP_INFINITE);}
    return z
