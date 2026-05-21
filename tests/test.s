import "std/core.s"
import "std/sci.s"

def main()
    v = vec float[].alloc 5 # allocate a buffer and treat it as a vector
    v[0] = 1.0
    v[1] = 2.0
    for element in v
        print element

    print nn "[ sum, mean, std ] = "
    print vec [sum v, mean v, std v]
