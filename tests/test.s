import "std/core.s"
import "std/vec.s"

def safe_main()
    allocator = (mut float[]).alloc(200).bufpos()
    v1 = new().vec 10
    v2 = new().vec 10
    v1[0] = 1.0
    v2[0] = 2.0

    it = range 5
    v = vec 10
    while try i=next it
        v3 = (v1+v2+v)*2.0
    print v3[0]
    
def main()
    try safe_main()
    if try error=compiler::catch()
        print cstr error
