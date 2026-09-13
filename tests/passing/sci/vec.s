import std.core
import std.sci

def safe_main(effect edit console CLI)
    FLOATS  = ref float[].alloc(200).circular() # effects can grab it by name
    FLOATS2 = ref float[].alloc(200).circular() # useless 
    v1 = edit new().vec 10 # force our own allocator
    v2 = edit new().vec 10
    v1[0] = 1.0
    v2[0] = 2.0
    
    it = edit range of 5
    v = mut vec 10
    while try i=mutget it
        v = 2.0*(v1+v2+v)
    print v[0]
    
def main()
    CLI = edit console()
    if not try safe_main()
        print cstr compiler::last_error()
