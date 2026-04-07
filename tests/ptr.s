import "std/array.s"

def main()
    x = float[]
    x->resize(2)
    x[0]:= 1.0   // copy data to memory
    x[1]:= x[0]. // copy x[0] onto x[1]
    x[0]:= 2.0   // will not affect x[1]
    print x[1].  // dereference x[1]
