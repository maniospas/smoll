import "std/core.s"

def Test()
    x = 1
    y = 2
    return class(mut x, y)

def main()
    t = Test()
    print(t.x)
    print(t.y)
    t.x = 2
    print(t.x)
    