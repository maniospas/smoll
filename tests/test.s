import "std/core.s"
import "std/sci.s"

def main()
    v = compt mat [
        2.0, 2.0, 
        34.0, 1.0
    ].any 2
    print v[0,0]
    #v[0,0] = 1.0