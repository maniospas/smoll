import std.core
import std.io

def main()
    CLI = edit console()
    chunk_buffer = edit alloc 2 # chunk size
    f = edit file::open "README.md"
    f.file::seek 1
    if try chunk = file::chunk(chunk_buffer, f)
        first_byte = bits nat chunk[0] # bits are always 64 bits and can be converted to and from char
        print chunk[0]      # char 
        print nat chunk[0]  # nat id
        print nat first_byte       # back to nat (is the same)
        print tochar nat8 nat first_byte
        print nat((bits chunk[0]).lshift 8) + nat(chunk[1])