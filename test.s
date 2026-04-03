import "std/core.s"

def range(id start, id to)
    pos = &start
    return (pos, to)

def next(range r)
    r.pos = &r.pos+1
    return r

def main()
    print(1-2)