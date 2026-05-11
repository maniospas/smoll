import "std/core.s"

def test(nat x)
    if x<2 fail "test"
    return x

def main()
    try x = test(1)
    if not try compiler::catch()
        print x