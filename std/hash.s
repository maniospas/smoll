local import "std/core/builtinsext.s"
local import "std/core/string.s"
local import "std/core/array.s"

def Hashable = nat|float|cstr|str

def hash(str k, nat size)
    h = mut 5381
    iter = range len k
    while try i = next iter
        h = h.bits().lshift(5).nat().add(h) + nat k[i]
    return h.mod(size)

def hash(nat k, nat size)
    {builtins::nat c1 = 0xff51afd7ed558ccd;}
    {builtins::nat c2 = 0xc4ceb9fe1a85ec53;}
    x = mut bits k
    x = x.xor x.rshift 33
    x = bits nat(x).mul c1
    x = x.xor x.rshift 33
    x = bits nat(x).mul c2
    x = x.xor x.rshift 33
    return nat(x).mod size

def to_hash_base(str|cstr k)
    return str k

def to_hash_base(Number k)
    return bits k

def robinhood_entry(str s, nat cost)
    return (s, cost)

local def str(robinhood_entry r)
    return r.s

def find(const robinhood_entry[]|str[] data, cstr|str _k)
    k = str _k
    if 0==len k
        return 0
    n = len data
    pos = hash(k, n)
    iter = range n
    while try i=next iter
        idx = mut (pos+i)
        if idx>=n idx = idx-n
        if idx==0 continue
        entry = data[idx]
        if 0==len str entry continue
        if k==str entry 
            return idx
    fail "index not found"

def at(str[] data, cstr|str _k)
    k = str _k # allow overwritting 'k' in case of robin hood hashing
    if 0==len k
        return 0
    n = len data
    pos = hash(k, n)
    iter = range n
    while try i=next iter
        idx = mut (pos+i)
        if idx>=n idx = idx-n
        if idx==0 continue
        entry = data[idx]
        if 0==len entry 
            data[idx] = k
            if not search_cost is blank
                search_cost[idx] = i
            return idx
        if entry==k 
            return idx
        if not search_cost is blank
            if i>search_cost[idx]
                tmp = k
                k = unsafe_mut str data[idx] # TODO: investigate why this str cast is needed
                search_cost[idx] = i
                data[idx] = tmp
    fail "string buffer is full"

def at(robinhood_entry[] data, cstr|str _k)
    k = unsafe_mut str _k #
    if 0==len k
        return 0
    n = len data
    pos = hash(k, n)
    iter = range n
    while try i=next iter
        idx = mut (pos+i)
        if idx>=n idx = idx-n
        if idx==0 continue
        entry = data[idx]
        if 0==len str entry 
            data[idx] = (k,i)
            return idx
        if k==str entry 
            return idx
        if i>entry.cost
            tmp = k
            k = unsafe_mut str data[idx]
            data[idx] = (tmp, i)
    fail "string buffer is full"
