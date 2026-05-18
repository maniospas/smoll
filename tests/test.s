import "std/core.s"
import "std/io.s":web as web
import "std/io.s":file as file

def CHUNK_SIZE = 4096

def main()
    mem = alloc CHUNK_SIZE
    f = file:read web:get "https://www.google.com/" # save to tmp file and read it
    size = mut 0
    while try line=mem.file:line f
        size = size+len line
    print(size, " bytes downloaded\n")
