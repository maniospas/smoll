import std.core
import std.test

def main()
    CLI = edit console()
    x = mut bits 0
    mydata = compiler::value(of 3)
    x = x.mask(mydata, bits 5)
    assert(5==nat x.slice mydata, "correctly retrieved data from mask")
