import "std/core.s"

def range(id|empty pos, id to)
    if pos is empty
        pos = 0
    return (mut pos, to)

def next(mut range r, mut id value)
    next_pos = r.pos+1
    if next_pos==r.to
        return false
    value = r.pos
    r.pos = mut next_pos
    return true