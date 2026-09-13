import "std/core.s"
import "std/io/file.s" as file

def load(effect mut console CLI, nat16 address)
    chunk_buffer = edit alloc 2 # chunk size
    f = edit file::open("test_file.bin")
    #f.file::seek address #! seek() doesn't exist yet
    if try file::chunk(chunk_buffer, f) #! file::chunk returns an interpreter error
        r_value_h = bits nat chunk_buffer[0]
        r_value_l = bits nat chunk_buffer[1]
        r_value = band(r_value_h.lshift 8, r_value_l)
        return nat16(nat r_value truncate)
    else
        print "There was some kind of error"
        return nat16(0) #! ERROR

def main()
    CLI = edit console()
    ret = load nat16 0
    print nat ret
    