import std.core

def Point2D(float x, float y)
    return (x,y)

def sum(Point2D[] v)
    x = mut 0.0
    y = mut 0.0
    i = mut 0 
    while i<len v
        x = x+v[i].x
        y = y+v[i].y
        i = i+1
    return (x,y)

def Point3D(float x, float y, float z)
    plane = Point2D(x,y)
    return class(plane,z)

def main()
    CLI = edit console()
    points = edit Point3D[].alloc 10
    points[0] = Point3D(1.0,2.0,3.0)
    points[1] = Point3D(1.0,2.0,3.0)
    sums = sum points.plane
    print sums.x
    print sums.y