import std.core
import std.io

rec wooo(effect edit console CLI) 
    if false return blank()
    process::breakpoint()
    print "wooo"
    wooo()

def main()
    CLI = edit console()
    try wooo()
    print "the end"
    