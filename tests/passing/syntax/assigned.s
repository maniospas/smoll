import std.core

def point()
    return class (
        assigned x = mut 0,
        assigned y = mut 0
    )

def main()
    CLI = edit console()
    p = point()
    print p.x