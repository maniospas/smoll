import "std/core.s"

def main()
    mem = list mut char[]
    #li = list mut str[]

    x = copy(mem, "hello world!")
    print x