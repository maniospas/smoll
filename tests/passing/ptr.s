import "std/core.s"

def Point(float x, float y)
    return (x,y)

def Field(Point a, Point b)
    return (a,b)

def print(Field ptr f)
    print(f...a.x, ",")
    print(f...a.y, ",")
    print(f...b.x, ",")
    print(f...b.y)

def main()
    f = (mut float[]).alloc 1  // preffer alloc than resizing empty buffers (no pointer invalidation)
    f[0] = 1.0 // move data to pointer
    print f[0]
    f0 = f[0]&&
    f0.. >> mutlast resize(f,2)


    p = (mut Field[]).alloc 1
    p[0]&& << (1.0,2.0,3.0,4.0)
    print p[0]&
    
    n = 1.0 >> (mut float[]).alloc(1).mutlast()
    print n..
