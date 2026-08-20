import "std/core.s"
import "std/rand.s" as rand

def main()
    CLI = edit console()
    rnd = mut rand::Rand()
    print rand::next rnd
    