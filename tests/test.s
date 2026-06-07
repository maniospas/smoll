import "std/core.s"
import "std/net.s"

def main()
    CLI = console()
    CHARS = arena alloc KB 100
    response = get "https://www.google.com/"
    print response.status
    print len response.body
    