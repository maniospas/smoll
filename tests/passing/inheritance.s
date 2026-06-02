import "std/core.s"

def Point2D(float x, float y)
    return (x,y)

def sum(Point2D[] v)
    x = mut 0.0
    y = mut 0.0
    i = mut 0 
    while i<v.len()
        x = x+v[i].x
        y = y+v[i].y
        i = i+1
    return (x,y)

def Point3D(float x, float y, float z)
    plane = Point2D(x,y)
    return (plane,class(z))

def main()
    CLI = console()
    points = Point3D[].alloc 10
    points[0] = Point3D(mut 1.0,mut 2.0,mut 3.0)
    points[1] = Point3D(mut 1.0,mut 2.0,mut 3.0)
    sums = sum points@plane
    print sums.x
    print sums.y