import "std/core.s"
import "std/range.s" as range

def main()
    r = range::range(10)
    value = mut 0
    while (r,value)->range::next()
        print value
    value = value+1
    print(value)
