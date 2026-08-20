import "std/core.s"

def main()
    CLI = edit console()
    x = mut 1
    y = ref x
    z = ref y
    x = 2
    print y+z  # prints 4
