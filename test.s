import "std/core.s"

def foo1()
    mem = list mut char[]
    x = copy(mem, "hello world!").dat
    y = copy(mem, "how are you?").dat
    return(mem.buffer, x,y)

def foo2()
    mem = (alloc KB 4, mut 0)
    x = copy(mem, "hello world!")
    y = copy(mem, "how are you?")
    return (x,y)

def main()
    f = foo1()
    print (f.mem, f.x)
    print (f.mem, f.y)
    # f = foo2()
    # print f.x
    # print f.y