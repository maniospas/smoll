import "std/core.s" # this file demonstrates that the compile just does not allow a pathological pattern

def add(ref str[] values)
    buf = bufpos alloc 128
    x = buf.copy str "123"
    print x
    values[0] = x
    return x

def main()
    values = alloc (mut str[], 5)
    i = mut 0
    while i<3
        del add values
        i = i+1
    print values[0]
