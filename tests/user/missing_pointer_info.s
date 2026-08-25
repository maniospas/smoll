import std.core

def fp(float ptr value) 
    return class value

def main()
    CLI = console()
    x = edit fp[].alloc 4
    x[0] = fp [1.0]& // create a float[] buffer per [1.0] and obtain a pointer to its first element with &
    #x[0] = [1]&   // WOULD CREATE AN ERROR
    print compiler::deref x[0].value