import "std/core.s"
import "std/array.s"

def Point2D(float x, float y)
    return class(x,y)

def print_norms(const Point2D[] points)
    i = mut 0
    while i<len points
        p = points[i]
        print(p.x+p.y)
        i = i+1


def Point3D(float x, float y, float z)
    plane = mut Point2D(x,y)
    return (plane,class(z))

def main()
    points = (mut Point3D[]) -> alloc(10)
    points[0] << Point3D(1.0,2.0,3.0)

    print_norms(points.plane)

    print points[0].plane.x

    points2d = points.plane // new buffer from the beginning, keeps align, mutability depends on type
    print points2d.y[0]     // starts buffer from offset, keeps align