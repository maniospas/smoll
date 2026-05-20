import "std/core.s"
import "std/sci.s"

def main()
    v = vec float[].alloc 5 # allocate a buffer and treat it as a vector
    v[0] = 1.0
    v[1] = 2.0
    print ("(sum, mean, std) = (", "")
    print (sum v, ", ")
    print (mean v, ", ")
    print (std v, ")\n")
