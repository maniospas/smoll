import "std/array.s"

def main()
    x = float[]
    x->grow(1)
    x[0]:=1.0
    print(:x[0])
