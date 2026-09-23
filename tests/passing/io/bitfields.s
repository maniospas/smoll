import std.core
import std.test

def MYBITFIELD = compt ( # compile-time declaration
    assigned first = of 3,
    assigned second = of(3 to 5)
)

def main(on CLI)
    x = mut bits 0
    x = x.mask(MYBITFIELD.first, bits 5)
    assert(5==nat x.slice MYBITFIELD.first, "correctly retrieved data from mask")
