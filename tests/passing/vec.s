import "std/core.s"
import "std/vec.s"

def safe_main()
    allocator  = ref float[].alloc(200).circular() # effects can grab it by name
    allocator2 = ref float[].alloc(200).circular() # useless 
    v1 = new().vec 10 # force our own allocator
    v2 = new().vec 10
    v1[0] = 1.0
    v2[0] = 2.0
    
    it = range 5
    v = mut vec 10
    while try i=next it
        v = 2.0*(v1+v2+v)
        #v = allocator2.mul(2.0, v1+v2+v) # THIS WOULD CREATE AN ERROR
    print v[0]
    
def main()
    try safe_main()
    if try error=compiler:catch()
        print cstr error
