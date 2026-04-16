local import "std/core.s"

def range(nat|blank pos, nat to)
    if pos is blank
        pos = 0
    return (mut pos, to)

def next(range r, mut nat value)
    next_pos = r.pos+1
    if next_pos==r.to
        return false
    value = r.pos
    r.pos = mut next_pos
    return true