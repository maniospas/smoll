import std.core
import std.core.range as range

def main(CLI)
    r = mut range::range range::of(10)
    while try value = mut r.range::mutget()
        print value
    value = value+1
    print value
