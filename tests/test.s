import "std/core.s"
import "std/io.s"::file as file

def main()
    try x = (mut nat[]).alloc KB 128 # interpreter has only 16kb for now
    if try error = compiler::catch()
        print cstr error
    x[0] = 1
    print x[0]
