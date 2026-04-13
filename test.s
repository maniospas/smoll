import "std/core.s"
import "std/array.s"

def Point2D(float x, float y)
    return class(x,y)

def Point3D(float x, float y, float z)
    plane = Point2D(x,y)
    return (plane,class(z))


def main()
    points = (mut Point3D[])->alloc(10)
    points[0] << Point3D(1.0,2.0,3.0)

    print points[0].plane.x