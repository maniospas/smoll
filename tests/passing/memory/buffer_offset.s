import std.core

def Point2D(float x, float y)
    return (x,y)

def sum(Point2D[] v)
    x = mut 0.0
    y = mut 0.0
    for i in range of len v
        x = x+v[i].x
        y = y+v[i].y
    return (x,y)

def Point3D(effect edit console CLI, float x, float y, float z)
    plane = Point2D(x,y)
    print "starting point creation"
    return class(plane,z)

def main()
    CLI = edit console()
    points = edit Point3D[].alloc 10
    points[0] = Point3D(1.0,2.0,3.0)
    points[1] = Point3D(1.0,2.0,3.0)
    plane = points.plane
    #points.resize 20 # would invalidate plane
    sums = sum plane
    print sums.x
    print sums.y