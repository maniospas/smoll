import std.core
import std.tag

def choose(nat x)
    if x==0 return "hello"
    return "world"

def main()
    CLI = edit console()
    print choose 0
    print choose 1