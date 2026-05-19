local import "std/core.s"

def new()
    return class()

def circular(any[] buf, mut nat pos, nat length)
    return (buf, pos, length)
local def vecpos(float[] buf, mut nat pos)
local def vec_allocator = new|vecpos|circular

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

local def vec(float ptr unsafe_ptr, nat pos, nat length)
    return class(unsafe_ptr, pos, length)

def vec(effect edit new allocator, nat length)
    doc "vector on a new buffer"
    doc "Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer."
    buf = float[].alloc length
    return vec(buf.unsafe_ptr, 0, length)

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

# def detach(vec v)
#     return (const v.pos, const v.length)

# def attach(effect vec_allocator&(vecpos|circular) allocator, detach data)
#     if allocator.buf.unsafe_align!=8 fail "can only place vectors on contiguous buffers"
#     if add(data)>=allocator.buf.unsafe_size fail "vector exceeeds buffer limits"
#     return vec(allocator.buf.unsafe_ptr, data.pos, data.length)

def len(vec v)
    doc "vectot length"
    return v.length

def mutget(vec v, nat i)
    doc "modify a vector element at given position"
    unsafe_return unsafe_mut v.unsafe_ptr+8*(i+v.pos)

def get(const vec v, nat i)
    doc "get a vector element at given position"
    unsafe_return v.unsafe_ptr+8*(i+v.pos)

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