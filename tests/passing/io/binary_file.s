import std.core
import std.io
import std.test

def main()
    CLI = edit console()
    chunk_buffer = edit alloc 2 # chunk size
    f = edit file::open("README.md" binary)
    f.file::seek 1
    f.file::seek (3 forward)
    assert(4==file::position f, "moved forward in file")
    f.file::seek (3 backward)
    assert(1==file::position f, "moved backward in file")

    if try file::chunk(chunk_buffer, f)
        first_byte = bits nat chunk_buffer[0] # bits are always 64 bits and can be converted to and from char
        print chunk_buffer[0]      # char 
        print nat chunk_buffer[0]  # nat id
        print nat first_byte       # back to nat (is the same)
        assert(nat(first_byte)==nat(chunk_buffer[0]), "correct conversion to bits")
        print tochar nat8 nat first_byte
        assert((tochar nat8 nat first_byte)==(chunk_buffer[0]), "correct round-conversion to bits")
        print nat((bits chunk_buffer[0]).lshift 8) + nat(chunk_buffer[1])