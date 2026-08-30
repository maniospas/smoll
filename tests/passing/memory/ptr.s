import std.core
import std.test
import compiler as cp

def Point(float x, float y)
    return (x,y)

def Field(Point a, Point b)
    return (a,b)

def print(effect edit console CLI, Field ptr f)
    assert(1.0==cp::deref f.a.x, "correctly derefed f.a.x")
    assert(2.0==cp::deref f.a.y, "correctly derefed f.a.y")
    assert(3.0==cp::deref f.b.x, "correctly derefed f.b.x")
    assert(4.0==cp::deref f.b.y, "correctly derefed f.b.y")

def main()
    CLI = edit console()
    f = ref float[].alloc 1  # preffer alloc than resizing empty buffers (no pointer invalidation)
    f[0] = 1.0 # move data to pointer
    print f[0]
    f0 = f[0]&
    drf = cp::deref f0
    (last f.resize 2) = drf


    p = mut Field[].alloc 1
    p[0] = (1.0,2.0,3.0,4.0)
    print p[0]&
    
    n = last [1.0, 2.0, 3.0]
    assert(3.0==cp::deref n, "correctly pointing to last element of buffer")

    s = last [1.0]
    assert(1.0==cp::deref s, "correctly pointing to single element of buffer")
