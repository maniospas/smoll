import "std/core.s"
import "std/io.s"::file as file

def main()
    x = mut 1
    while x<10
        print x
        x = x+1
    