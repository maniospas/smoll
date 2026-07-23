import "std/core.s"

def Point(float x, float y)
    return (x,y)

def Field(Point a, Point b)
    return (a,b)

def print(effect edit console CLI, Field ptr f)
    print(compiler::deref f.a.x, ",")
    print(compiler::deref f.a.y, ",")
    print(compiler::deref f.b.x, ",")
    print(compiler::deref f.b.y)

def main()
    CLI = edit console()
    f = ref float[].alloc 1  # preffer alloc than resizing empty buffers (no pointer invalidation)
    f[0] = 1.0 # move data to pointer
    print f[0]
    f0 = f[0]&
    (mutlast f.resize 2) = compiler::deref f0


    p = mut Field[].alloc 1
    p[0] = (1.0,2.0,3.0,4.0)
    print p[0]&
    
    n = mutlast [1.0]
    print compiler::deref n
