import "std/core.s"
import "std/core/range.s" as range

def main()
    CLI = console()
    r = range:range(10)
    while try value = mut r.range:next()
        print value
    value = value+1
    print value
