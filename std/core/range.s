local import "std/core/numbers.s"

def range(nat|blank from, nat to)
    if from is blank
        from = 0
    return (mut from, to)

def next(range r)
    if r.from>=r.to
        fail "iteration end"
    ret = const r.from
    r.from = ret+1
    return ret
