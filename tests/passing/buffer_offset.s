import "std/core.s"

def Point2D(float x, float y)
    return (x,y)

def sum(ref Point2D[] v)
    x = mut 0.0
    y = mut 0.0
    it = range len v
    while try i=next it
        x = x+v[i].x
        y = y+v[i].y
    return (x,y)

def Point3D(float x, float y, float z)
    plane = Point2D(x,y)
    print "starting point creation"
    return (plane,class(z))

def main()
    points = (mut Point3D[]).alloc 10
    points[0] = Point3D(1.0,2.0,3.0)
    points[1] = Point3D(1.0,2.0,3.0)
    plane = points@plane
    #points.resize 20 # would invalidate plane
    sums = sum plane
    print sums.x
    print sums.y