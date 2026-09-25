import std.core
import std.sci

def safe_main(on CLI, on edit bucket FLOATS)
    v1 = edit vec 10
    v2 = edit vec 10
    v1[0] = 1.0
    v2[0] = 2.0
    
    it = edit range of 5
    v = mut vec 10
    while try i=mutget it
        v = 2.0*(v1+v2+v)
    print v[0]
    
def main(CLI, on edit bucket FLOATS)
    if not try safe_main()
        print cstr compiler::last_error()
