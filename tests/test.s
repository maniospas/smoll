import "std/core.s"

def constant = compt cstr unsafe_temp add(bufpos alloc 128, "hello", " world!")

def main()
    buf = bufpos char[].alloc 16
    test = buf.copy "test"
    print cstr unsafe_temp test
    print constant
