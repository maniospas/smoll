
import "std/core.s"

def main()
    CLI = console()
    CHARS = bufpos char[].alloc KB 4
    start = CHARS.pos
    copy "hello"
    copy " "
    copy "world!"
    print str(CHARS, type "from", start)
