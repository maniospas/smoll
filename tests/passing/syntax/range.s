import std.core
import std.core.range as range

def main()
    CLI = edit console()
    r = mut range::range range::of(10)
    while try value = mut r.range::next()
        print value
    value = value+1
    print value
