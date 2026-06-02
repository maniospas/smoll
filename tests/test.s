import "std/core.s"
import "std/io.s"

def CHUNK_SIZE = 4096
def README = "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/README.md"

def main()
    CLI = console() # use the CLI effect
    mem = alloc CHUNK_SIZE
    f = file:read web:get web:url README # save to .tmp with system curl and read it
    size = mut 0
    for line in (mem, f)    # iterator defined over a (memory buffer, file) tuple
        size = size+len line
    print(size, " bytes downloaded\n")