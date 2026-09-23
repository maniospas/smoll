import std.core
import std.net

def main(on CLI)
    CHARS = mut arena alloc KB 100
    response = get "https://www.google.com/"
    print response.status
    print len response.body
    