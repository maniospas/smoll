import "std/array.s"

def Point(float x, float y)
    return (x,y)

def Field(Point a, Point b)
    return (a,b)

def print(Field ptr f)
    print(f..a.x, ",")
    print(f..a.y, ",")
    print(f..b.x, ",")
    print(f..b.y)

def main()
    f = float[]->alloc(1)  // preffer alloc than resizing empty buffers (no pointer invalidation)
    1.0>>f[0]   // move data to pointer
    print f[0]. // dot after a pointer derefs it
    f0 = f[0]
    f0.>>last resize(f,2)


    p = Field[]->alloc(1)
    (1.0,2.0,3.0,4.0)>>p[0]
    print p[0]
    
    n = 1.0>>last float[]->alloc(1)
    print n.
