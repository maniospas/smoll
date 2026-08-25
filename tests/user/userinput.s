import std.core

def read_version(effect edit console CLI)
    print nn "compiled version: "
    try ret = str(new(), CLI)
    return ret
def version = compt (unsafe_temp read_version console()).cstr

def main()
    CLI = edit console()
    color = colors CLI
    set(color yellow)

    print nn "PROGRAM v"
    print version