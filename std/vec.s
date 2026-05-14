local import "std/core.s"

def new()
    return class()

local def vecpos(float[] buf, mut nat pos)
local def vec_allocator = new|vecpos

local def vec(float ptr unsafe_ptr, nat pos, nat length)
    return class(unsafe_ptr, pos, length)

def vec(effect vecpos allocator, nat length)
    if allocator.buf.unsafe_align!=8 fail "can only place vectors on contiguous buffers"
    if allocator.pos+length>len allocator.buf fail "vector exceeeds buffer limits"
    start = const allocator.pos
    allocator.pos = allocator.pos+length
    return vec(allocator.buf.unsafe_ptr, start, length)

def vec(effect new allocator, nat length)
    buf = (mut float[]).alloc(length)
    return vec(buf.unsafe_ptr, 0, length)

def len(vec v)
    return v.length

def mutget(vec v, nat i)
    unsafe_return unsafe_mut v.unsafe_ptr+8*(i+v.pos)

def get(const vec v, nat i)
    unsafe_return v.unsafe_ptr+8*(i+v.pos)

local def at(float number, nat i)
    return number

local def at(vec v, nat i)
    return v[i]

def add(effect vec_allocator allocator, vec v1, vec|float v2)
    doc "vector addition"
    if v2 is vec and v1.length!=v2.length
        fail "different vector sizes"
    v = vec v1.length
    it = range v1.length
    p1 = v1.unsafe_ptr
    while try i=next it
        v[i] = v1[i]+v2.at i
    return v

def add(effect vec_allocator allocator, float v1, vec v2)
    doc "vector addition"
    return v2+v1

def sub(effect vec_allocator allocator, vec v1, vec|float v2)
    doc "vector substraction"
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = vec v1.length
    it = range v1.length
    while try i=next it
        v[i] = v1[i]-v2.at i
    return v

def sub(effect vec_allocator allocator, float v1, vec v2)
    doc "vector substraction"
    v = vec v2.length
    it = range v2.length
    while try i=next it
        v[i] = v1-v2[i]
    return v

def mul(effect vec_allocator allocator, vec v1, vec|float v2)
    doc "vector multiplication"
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = vec v1.length
    it = range v1.length
    while try i=next it
        v[i] = v1[i]*v2.at i
    return v

def mul(effect vec_allocator allocator, float v1, vec v2)
    doc "vector multiplication"
    return v2*v1

def div(effect vec_allocator allocator, vec v1, vec|float v2)
    doc "vector division"
    if v2 is vec and v1.length!=v2.length 
        fail "different vector sizes"
    v = vec v1.length
    it = range v1.length
    p1 = v1.unsafe_ptr
    while try i=next it
        v[i] = v1[i]/v2.at i
    return v

def div(effect vec_allocator allocator, float v1, vec v2)
    doc "vector division"
    v = vec v2.length
    it = range v2.length
    while try i=next it
        v[i] = v1/v2[i]
    return v