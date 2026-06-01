import "std/core.s"

def point(float x, float y)
def add(point p1, point p2)
    return point(p1.x+p2.x, p1.y+p2.y)
def all_positives(point p)
    return p.x>0.0 and p.y>0.0
def not(point p)
    return point(0.0, 0.0)
def main()
    p = mut point(10.0, 20.0)
    # 'neg' to make numbers negative
    p = (all_positives p) and add(p, neg 30.0, neg 30.0) 
    print p.x # -20.0
    print p.y # -10.0
    p = (not all_positives p) or (1.0,1.0)
    print p.x # 0.0
    print p.y # 0.0