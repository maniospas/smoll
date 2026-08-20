import "std/core.s"

def inc(mut float x)
    x = x+1.0

def main()
    CLI = console()
    print inc::name
    x = mut 0.0
    for arg is inc::args
        print compiler::value(type arg::zero::name)
        print compiler::value arg::mut
        print compiler::value arg::name
