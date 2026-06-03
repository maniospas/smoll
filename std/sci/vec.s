local import "std/core.s"
local import "std/sci/math.s"
local import "std/sci/unsafe.s"
local import "std/unsafe.s" as unsafe

def float_arena(edit float[] buf, mut nat pos)
def vec_allocator = new|float_arena|circular
def circular(edit float[] buf, mut nat|blank pos)
    doc "circular float buffer"
    doc "Is used as FLOATS"
    if pos is nat and length is nat
        compiler:skip()
    if pos is blank
        pos = mut 0
    if length is blank
        length = len(buf)-pos
    start = pos
    pos = pos+length
    return circular(buf, start, length)

def vec(effect new FLOATS, nat length, "dirty"|blank clear_policy)
    doc "vector on a new buffer"
    doc "Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer."
    buf = ref float[].alloc(length dirty)
    if clear_policy is blank
        buf.unsafe_ptr.unsafe:zero(0, 8*length)
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

def vec(effect edit float_arena FLOATS, nat length, "dirty"|blank clear_policy)
    doc "vector on an existing buffer"
    doc "Has the provided length. Can grab the buffer and mutable position allocator as an effect, so that only the length is provided."
    if FLOATS.buf.unsafe_align.nat()!=8 fail "can only place vectors on contiguous buffers"
    if FLOATS.buf.unsafe_offset.nat()!=0 fail "cannot place vectors on buffer offsets"
    if FLOATS.pos+length>len FLOATS.buf fail "vector exceeeds buffer limits"
    start = const FLOATS.pos
    FLOATS.pos = FLOATS.pos+length
    if clear_policy is blank
        FLOATS.buf.unsafe_ptr.unsafe:zero(8*start, 8*(start+length))
    return vec(FLOATS.buf.unsafe_ptr, start, length)

def vec(effect edit vec_allocator&circular FLOATS, nat length, "dirty"|blank clear_policy)
    doc "vector on an existing buffer"
    doc "Has the provided length. Can grab a circular buffer FLOATS as an effect, so that only the length is provided."
    if FLOATS.buf.unsafe_align.nat()!=8 fail "can only place vectors on contiguous buffers"
    if FLOATS.buf.unsafe_offset.nat()!=0 fail "cannot place vectors on buffer offsets"
    if length>len FLOATS.buf fail "vector exceeeds buffer limits"
    start = mut FLOATS.pos
    FLOATS.pos = FLOATS.pos+length
    if FLOATS.pos>=FLOATS.length
        FLOATS.pos = length+0
        start = 0
    if clear_policy is blank
        FLOATS.buf.unsafe_ptr.unsafe:zero(8*start, 8*(start+length))
    return vec(FLOATS.buf.unsafe_ptr, start, length)

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

def add(effect edit vec_allocator FLOATS, vec v1, vec|float v2)
    doc "vector addition"
    doc "Grabs an FLOATS for the result as an effect."
    if v2 is vec and v1.length!=v2.length
        fail "different vector sizes"
    v = vec(v1.length dirty)
    for i in range v1.length
        v[i] = v1[i]+v2.at i
    return v

def add(effect edit vec_allocator FLOATS, float v1, vec v2)
    doc "vector addition"
    doc "Grabs an FLOATS for the result as an effect."
    return v2+v1

def sub(effect edit vec_allocator FLOATS, vec v1, vec|float v2)
    doc "vector subtraction"
    doc "Grabs an FLOATS for the result as an effect."
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = vec(v1.length dirty)
    for i in range v.length
        v[i] = v1[i]-v2.at i
    return v

def sub(effect edit vec_allocator FLOATS, float v1, vec v2)
    doc "vector subtraction"
    doc "Grabs an FLOATS for the result as an effect."
    v = vec v2.length
    for i in range v.length
        v[i] = v1-v2[i]
    return v

def mul(effect edit vec_allocator FLOATS, vec v1, vec|float v2)
    doc "vector multiplication"
    doc "Grabs an FLOATS for the result as an effect."
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = vec(v1.length dirty)
    for i in range v.length
        v[i] = v1[i]*v2.at i
    return v

def mul(effect edit vec_allocator FLOATS, float v1, vec v2)
    doc "vector multiplication"
    doc "Grabs an FLOATS for the result as an effect."
    return v2*v1


def pow(effect edit vec_allocator FLOATS, vec v1, vec|float v2)
    doc "vector exponentiation"
    doc "Grabs an FLOATS for the result as an effect."
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = vec(v1.length dirty)
    for i in range v.length
        v[i] = pow(v1[i], v2.at i)
    return v

def pow(effect edit vec_allocator FLOATS, float v1, vec v2)
    doc "vector exponentiation"
    doc "Grabs an FLOATS for the result as an effect."
    v = vec(v2.length dirty)
    for i in range v.length
        v[i] = pow(v1, v2[i])
    return v

def div(effect edit vec_allocator FLOATS, vec v1, vec|float v2)
    doc "vector division"
    doc "Grabs an FLOATS for the result as an effect."
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = vec(v1.length dirty)
    p1 = v1.unsafe_ptr
    for i in range v.length
        v[i] = v1[i]/v2.at i
    return v

def div(effect edit vec_allocator FLOATS, float v1, vec v2)
    doc "vector division"
    doc "Grabs an FLOATS for the result as an effect."
    v = vec(v2.length dirty)
    it = range v2.length
    for i in range v.length
        v[i] = v1/v2[i]
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
        compiler:skip()
    for i in range len v
        value = mut v[i]
        if comparison is "sub"
            value = value-v2[i]
        if comparison is "mul"
            value = value-v2[i]
        if comparison is "rel"
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

def print(effect mut console CLI, vec v, cstr|blank endl)
    doc "print a vector"
    doc "Prints as a row, such as [ 1.0  2.0  3.0 ]"
    if endl is blank
        endl = "\n"
    print nn "[ "
    for i in range v.length
        print nn v[i]
        if i<v.length-1 print nn "  "
    print (" ]", endl)

def copy(effect edit vec_allocator FLOATS, vec v)
    doc "copy a vector"
    doc "Grabs a FLOATS for the result as an effect."
    result = vec v.length
    for i in range v.length
        result[i] = v[i]
    return result

def storage(edit vec v)
    buf = mut float[]
    buf.unsafe_ptr = v.unsafe_ptr&
    buf.unsafe_size = v.pos+len v
    pos = mut v.pos
    return (buf, pos)

def self(edit vec v)
    return (storage(v), v)
