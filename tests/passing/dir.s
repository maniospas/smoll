import "std/core.s"
import "std/io.s" as io

def main()
    CLI = console()
    dir = mut io:dir:open "./std"
    while try entry=io:dir:entry dir
        print entry
    