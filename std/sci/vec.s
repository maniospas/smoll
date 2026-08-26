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

local import std.core
local import std.sci.math
local import std.sci.unsafe
local import std.unsafe as unsafe
local import std.unsafe::add

def arena(float::tag)    return arena float[]
def circular(float::tag) return circular float[]
def list(float::tag)     return list float[]
local def float_allocator = new|arena<float::tag>|circular<float::tag>

def vec(effect new FLOATS, nat length, "dirty"|blank clear_policy)
    doc "vector on a new buffer"
    doc "Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer."
    buf = float[].alloc(length unsafe_first () unsafe_leaky)
    if clear_policy is blank
        buf.unsafe_ptr.unsafe::zero(0, 8*length)
    return vec(buf.unsafe_ptr, 0, length)

def vec(edit float[] buf)
    doc "treat a float buffer as a vector"
    if buf.unsafe_align.nat()!=8 fail "can only place vectors on contiguous buffers"
    if buf.unsafe_offset.nat()!=0 fail "cannot place vectors on buffer offsets"
    return vec(buf.unsafe_ptr, 0, len buf)

def constvec(float[] buf)
    doc "treat an immutable float buffer as an immutable vector"
    if buf.unsafe_align.nat()!=8 fail "can only place vectors on contiguous buffers"
    if buf.unsafe_offset.nat()!=0 fail "cannot place vectors on buffer offsets"
    return const vec(unsafe_mut buf.unsafe_ptr, 0, len buf)

def vec(effect edit float_allocator\new FLOATS, nat length, "dirty"|blank clear_policy)
    doc "vector allocation"
    if FLOATS.buf.unsafe_align.nat()!=8 fail "can only place vectors on contiguous buffers"
    if FLOATS.buf.unsafe_offset.nat()!=0 fail "cannot place vectors on buffer offsets"
    surface = FLOATS.alloc length
    if clear_policy is blank
        FLOATS.buf.unsafe_ptr.unsafe::zero(8*surface.pos, 8*(surface.pos+length))
    return vec(surface.buf.unsafe_ptr, surface.pos, length)

def len(vec v)
    doc "vectot length"
    return v.length

def mutget(edit vec v, nat i, "unsafe_assume_inbounds"|blank inbounds_guarantee)
    doc "modify a vector element at given position"
    if inbounds_guarantee is blank
        if i>=v.length fail "out of bounds"
    return unsafe_mut v.unsafe_ptr+8*(i+v.pos)

def get(vec v, nat i, "unsafe_assume_inbounds"|blank inbounds_guarantee)
    doc "get a vector element at given position"
    if inbounds_guarantee is blank
        if i>=v.length fail "out of bounds"
    else
        doc ""
        doc "*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*"
    return v.unsafe_ptr+8*(i+v.pos)

local def at(float number, nat i)
    return number

local def at(vec v, nat i)
    return v[i unsafe_assume_inbounds]

def add(effect edit float_allocator FLOATS, vec v1, vec|float v2)
    doc "vector addition"
    doc "Grabs a FLOATS allocator effect to store the result."
    if v2 is vec and v1.length!=v2.length
        fail "different vector sizes"
    v = edit vec(v1.length dirty)
    for value in v1
        i = compiler::for_counter()
        v[i unsafe_assume_inbounds] = value+v2.at i
    return v

def add(effect edit float_allocator FLOATS, float v1, vec v2)
    doc "vector addition"
    doc "Grabs a FLOATS allocator effect to store the result."
    return v2+v1

def sub(effect edit float_allocator FLOATS, vec v1, vec|float v2)
    doc "vector subtraction"
    doc "Grabs a FLOATS allocator effect to store the result."
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = edit vec(v1.length dirty)
    for value in v1
        i = compiler::for_counter()
        v[i unsafe_assume_inbounds] = value-v2.at i
    return v

def sub(effect edit float_allocator FLOATS, float v1, vec v2)
    doc "vector subtraction"
    doc "Grabs a FLOATS allocator effect to store the result."
    v = edit vec v2.length
    for value in v2
        i = compiler::for_counter()
        v[i unsafe_assume_inbounds] = v1-value
    return v

def mul(effect edit float_allocator FLOATS, vec v1, vec|float v2)
    doc "vector multiplication"
    doc "Grabs a FLOATS allocator effect to store the result."
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = edit vec(v1.length dirty)
    for value in v1
        i = compiler::for_counter()
        v[i unsafe_assume_inbounds] = value*v2.at i
    return v

def mul(effect edit float_allocator FLOATS, float v1, vec v2)
    doc "vector multiplication"
    doc "Grabs a FLOATS allocator effect to store the result."
    return v2*v1


def pow(effect edit float_allocator FLOATS, vec v1, vec|float v2)
    doc "vector exponentiation"
    doc "Grabs a FLOATS allocator effect to store the result."
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = edit vec(v1.length dirty)
    for value in v1
        i = compiler::for_counter()
        v[i unsafe_assume_inbounds] = pow(value, v2.at i)
    return v

def pow(effect edit float_allocator FLOATS, float v1, vec v2)
    doc "vector exponentiation"
    doc "Grabs a FLOATS allocator effect to store the result."
    v = edit vec(v2.length dirty)
    for value in v2
        i = compiler::for_counter()
        v[i unsafe_assume_inbounds] = pow(v1, value)
    return v

def div(effect edit float_allocator FLOATS, vec v1, vec|float v2)
    doc "vector division"
    doc "Grabs a FLOATS allocator effect to store the result."
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = edit vec(v1.length dirty)
    p1 = v1.unsafe_ptr
    for value in v1
        i = compiler::for_counter()
        v[i unsafe_assume_inbounds] = value/v2.at i
    return v

def div(effect edit float_allocator FLOATS, float v1, vec v2)
    doc "vector division"
    doc "Grabs a FLOATS allocator effect to store the result."
    v = edit vec(v2.length dirty)
    for value in v2
        i = compiler::for_counter()
        v[i unsafe_assume_inbounds] = v1/value
    return v
    
def reduce(vec v, blank|"mul"|"sub"|"rel" comparison, blank|vec v2, blank|"add"|"mul" reduction, blank|"abs"|"sqr"|"l2" transform)
    doc "reduce a vector to one value"
    doc "You can specify an additive or multiplicative reduction,"
    doc "as well as some transformation that can be applied."
    doc "A second vector can also be provided to be subtracted or obtain relative value differences"
    doc "without allocating any memory for operation results."
    doc "All computations are branchless, as literals are optimized away during compilation."
    if reduction is "add"|blank
        ret = mut 0.0
    if reduction is "mul"
        ret = mut 1.0
    if (v2 is blank) and (not comparison is blank)
        compiler::skip()
    for _value in v
        value = mut _value
        if comparison is "sub"
            i = compiler::for_counter()
            value = value-v2[i]
        if comparison is "mul"
            i = compiler::for_counter()
            value = value*v2[i]
        if comparison is "rel"
            i = compiler::for_counter()
            value = (value-v2[i])*2.0/(abs(value)+abs(v2[i]))
        if transform is "abs"
            value = abs(value)
        if transform is "sqr"|"l2"
            value = value*value
        if reduction is "add"|blank
            ret = ret+value
        if reduction is "mul"
            ret = ret*value
    if transform is "l2"
        ret = pow(ret, 0.5)
    return const ret

def dot(vec v1, vec v2)
    doc "dot product"
    return reduce(v1 mul v2)

def sum(vec v)
    doc "sum"
    return v.reduce(() add)

def mean(vec v)
    doc "mean value"
    return v.reduce(() add)/float len v

def var(vec v)
    doc "variance"
    sumsqr = mut 0.0
    sum = mut 0.0
    for value in v
        sum = sum+value
        sumsqr = sumsqr+value*value
    n = float len v
    sum = sum/n
    return sumsqr/n-sum*sum

def std(vec v)
    doc "standard deviation"
    return sqrt var v

def nn(vec value)
    doc "no new line"
    doc "Given a value, creates a tuple of (value, \"\")."
    doc "This enables the pattern 'print nn value'"
    doc "to print without a new line."
    return (value, "")

def print(effect edit console CLI, vec v, cstr|blank endl)
    doc "print a vector"
    doc "Prints as a row, such as [ 1.0  2.0  3.0 ]"
    if endl is blank
        endl = "\n"
    print nn "[ "
    for i in range of v.length
        print nn v[i unsafe_assume_inbounds]
        if i<v.length-1 print nn "  "
    print (" ]", endl)

def copy(effect edit float_allocator FLOATS, vec v)
    doc "copy a vector"
    doc "Grabs a FLOATS for the result as an effect."
    result = edit vec(v.length dirty)
    for value in v
        i = compiler::for_counter()
        result[i unsafe_assume_inbounds] = value
    return result

def arena(edit vec v)
    buf = edit float[]
    buf.unsafe_ptr = v.unsafe_ptr&
    buf.unsafe_size = v.pos+len v
    pos = mut v.pos
    return arena(buf, pos)

def self(edit vec v)
    return (arena(v), v)
