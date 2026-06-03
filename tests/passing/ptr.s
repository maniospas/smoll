import "std/core.s"

def Point(float x, float y)
    return (x,y)

def Field(Point a, Point b)
    return (a,b)

def print(effect mut console CLI, Field ptr f)
    print(f.a.x.., ",")
    print(f.a.y.., ",")
    print(f.b.x.., ",")
    print(f.b.y..)

def main()
    CLI = console()
    f = ref float[].alloc 1  # preffer alloc than resizing empty buffers (no pointer invalidation)
    f[0] = 1.0 # move data to pointer
    print f[0]
    f0 = f[0]&&
    (mutlast f.resize 2) = f0..


    p = (mut Field[]).alloc 1
    p[0] = (1.0,2.0,3.0,4.0)
    print p[0]&
    
    n = mutlast [1.0]
    print n..
