import "std/core.s" # this file demonstrates that the compile just does not allow a pathological pattern

def add(edit str[] values)
    buf = bufpos char[].alloc 128
    x = buf.copy str "123"
    print x
    values[0] = x
    #del x  # compiler says: affects inputs
    return x # compiler says: return this because you did stuff on values

def main()
    values = str[].alloc 5
    i = mut 0
    while i<3
        x = add values 
        print values[0] # this is fine
        del x # compiler says: needed to not leak resources 
        i = i+1
    print values[0] # compiler says: it has been invalided by 'del'
