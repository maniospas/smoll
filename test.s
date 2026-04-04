import "std/core.s"

def range(id|empty start, id to)
    if start is empty
        start = 0
    pos = &start
    return class(pos, to)

def next(&range r, &id value)
    value = r.pos
    r.pos = &r.pos+1
    return r.pos<=r.to

def main()
    r = range(10)
    value = &0
    while r->next(value)
        print value
