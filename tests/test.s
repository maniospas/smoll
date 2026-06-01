import "std/core.s"
import "std/io.s"

def CHUNK_SIZE = 4096
def README = "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/README.md"

def main()
    mem = char[].alloc CHUNK_SIZE # pipe argument with dot, parentheses optional for one argument
    f = file:read web:get web:url README  # save to .tmp with system curl and read it
    size = mut 0
    for line in (mem, f) # iterator defined over a (memory buffer, file) tuple
        size = size+len line
    print nn size
    print " bytes downloaded"
