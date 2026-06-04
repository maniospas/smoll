import "std/core.s"

def total_length(str[] parts)
    size = mut 0
    for counter_part in parts 
        size = size + len counter_part
    return size

def concat(str[] parts)
    CHARS = arena char[].alloc total_length parts
    for part in parts
        copy part
    return str(status CHARS from 0)

def main()
    CLI = console()
    print concat [
        str "hello",
        str " ",
        str "world",
        str "!"
    ]