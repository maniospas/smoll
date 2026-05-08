import "std/core.s"
# support "std/common.h"
# support "std/linux.h"
# support "std/windows.h"
# support "std/max.h"

def main()
    x = (mut cstr[]).alloc KB 4
    x[0] = "test"
    x0 = x[0]&&
    print x0..