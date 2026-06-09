import "std/core.s"
import "std/net.s"

def main()
    CLI = edit console()
    CHARS = mut arena alloc KB 100
    response = get "https://www.google.com/"
    print response.status
    print len response.body
    