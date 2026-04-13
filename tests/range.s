import "std/core.s"
import "std/range.s" as range

def main()
    r = range::range(10)
    value = mut 0
    while r->range::next(value)
        print(value)
    value = value+1
    print(value)
