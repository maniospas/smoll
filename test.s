import "std/core.s"

def foo()
    mem = (alloc KB 4, mut 0)
    #li = list mut str[]
    x = copy(mem, "hello world!")
    y = copy(mem, "how are you?")
    return(x,y,mem)

def main()
    f = foo()
    print f.x
    print f.y