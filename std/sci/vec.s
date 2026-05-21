local import "std/core.s"
local import "std/sci/math.s"
local import "std/sci/unsafe.s"

def new()
    return class()

def circular(any[] buf, mut nat pos, nat length)
    return class(buf, pos, length)
def vecpos(float[] buf, mut nat pos)
def vec_allocator = new|vecpos|circular

def circular(mut float[] buf, mut nat|blank pos, nat|blank length)
    doc "circular buffer"
    doc "Is used as allocator"
    if pos is nat and length is nat
        compiler:skip()
    if pos is blank
        pos = mut 0
    if length is blank
        length = len(buf)-pos
    start = pos
    pos = pos+length
    return circular(buf, start, length)

def vec(effect edit new allocator, nat length)
    doc "vector on a new buffer"
    doc "Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer."
    buf = float[].alloc length
    return vec(buf.unsafe_ptr, 0, length)

def vec(edit float[] buf)
    doc "treat a float buffer as a vector"
    if buf.unsafe_align.nat()!=8 fail "can only place vectors on contiguous buffers"
    if buf.unsafe_offset.nat()!=0 fail "cannot place vectors on buffer offsets"
    return vec(buf.unsafe_ptr, 0, len buf)

def vec(effect edit vecpos allocator, nat length)
    doc "vector on an existing buffer"
    doc "Has the provided length. Can grab the buffer and mutable position allocator as an effect, so that only the length is provided."
    if allocator.buf.unsafe_align.nat()!=8 fail "can only place vectors on contiguous buffers"
    if allocator.buf.unsafe_offset.nat()!=0 fail "cannot place vectors on buffer offsets"
    if allocator.pos+length>len allocator.buf fail "vector exceeeds buffer limits"
    start = const allocator.pos
    allocator.pos = allocator.pos+length
    return vec(allocator.buf.unsafe_ptr, start, length)

def vec(effect edit vec_allocator&circular allocator, nat length)
    doc "vector on an existing buffer"
    doc "Has the provided length. Can grab a circular buffer allocator as an effect, so that only the length is provided."
    if allocator.buf.unsafe_align.nat()!=8 fail "can only place vectors on contiguous buffers"
    if allocator.buf.unsafe_offset.nat()!=0 fail "cannot place vectors on buffer offsets"
    if length>len allocator.buf fail "vector exceeeds buffer limits"
    start = mut allocator.pos
    allocator.pos = allocator.pos+length
    if allocator.pos>=allocator.length
        allocator.pos = length+0
        start = 0
    return vec(allocator.buf.unsafe_ptr, start, length)

def len(vec v)
    doc "vectot length"
    return v.length

def mutget(edit vec v, nat i)
    doc "modify a vector element at given position"
    if i>=v.length fail "out of bounds"
    return unsafe_mut v.unsafe_ptr+8*(i+v.pos)

def get(vec v, nat i)
    doc "get a vector element at given position"
    if i>=v.length fail "out of bounds"
    return v.unsafe_ptr+8*(i+v.pos)

local def at(float number, nat i)
    return number

local def at(vec v, nat i)
    return v[i]

def add(effect edit vec_allocator allocator, vec v1, vec|float v2)
    doc "vector addition"
    doc "Grabs an allocator for the result as an effect."
    if v2 is vec and v1.length!=v2.length
        fail "different vector sizes"
    v = vec v1.length
    it = range v1.length
    p1 = v1.unsafe_ptr
    while try i=next it
        v[i] = v1[i]+v2.at i
    return v

def add(effect edit vec_allocator allocator, float v1, vec v2)
    doc "vector addition"
    doc "Grabs an allocator for the result as an effect."
    return v2+v1

def sub(effect edit vec_allocator allocator, vec v1, vec|float v2)
    doc "vector substraction"
    doc "Grabs an allocator for the result as an effect."
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = vec v1.length
    it = range v1.length
    while try i=next it
        v[i] = v1[i]-v2.at i
    return v

def sub(effect edit vec_allocator allocator, float v1, vec v2)
    doc "vector substraction"
    doc "Grabs an allocator for the result as an effect."
    v = vec v2.length
    it = range v2.length
    while try i=next it
        v[i] = v1-v2[i]
    return v

def mul(effect edit vec_allocator allocator, vec v1, vec|float v2)
    doc "vector multiplication"
    doc "Grabs an allocator for the result as an effect."
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = vec v1.length
    it = range v1.length
    while try i=next it
        v[i] = v1[i]*v2.at i
    return v

def mul(effect edit vec_allocator allocator, float v1, vec v2)
    doc "vector multiplication"
    doc "Grabs an allocator for the result as an effect."
    return v2*v1

def div(effect edit vec_allocator allocator, vec v1, vec|float v2)
    doc "vector division"
    doc "Grabs an allocator for the result as an effect."
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = vec v1.length
    it = range v1.length
    p1 = v1.unsafe_ptr
    while try i=next it
        v[i] = v1[i]/v2.at i
    return v

def div(effect edit vec_allocator allocator, float v1, vec v2)
    doc "vector division"
    doc "Grabs an allocator for the result as an effect."
    v = vec v2.length
    it = range v2.length
    while try i=next it
        v[i] = v1/v2[i]
    return v
    
def reduce(vec v, "add"|"mul" reduction, blank|"sqr" transform)
    doc "reduce a vector to one value"
    doc "You can specify an additive or multiplicative reduction,"
    doc "as well as some transformation that can be applied."
    if reduction is "add"
        ret = mut 0.0
    if reduction is "mul"
        ret = mut 1.0
    it = range len v
    while try i=next it
        value = mut v[i]
        if transform is "sqr"
            value = value*value
        if reduction is "add"
            ret = ret+value
        if reduction is "mul"
            ret = ret*value
    return const ret

def sum(vec v)
    doc "sum"
    return v.reduce(type "add")

def mean(vec v)
    doc "mean value"
    return v.reduce(type "add")/float len v

def var(vec v)
    doc "variance"
    sumsqr = mut 0.0
    sum = mut 0.0
    it = range len v
    while try i=next it
        value = v[i]
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

def print(vec v, cstr|blank endl)
    doc "print a vector as a row: [ 1.0  2.0  3.0 ]"
    if endl is blank
        endl = "\n"
    print nn "[ "
    it = range v.length
    while try i=next it
        print nn v[i]
        if i<v.length-1 print nn "  "
    print (" ]", endl)
