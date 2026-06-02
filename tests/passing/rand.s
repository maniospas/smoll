import "std/core.s"
import "std/rand.s" as rand

def main()
    CLI = console()
    rand = mut rand:Rand()
    print next rand
    