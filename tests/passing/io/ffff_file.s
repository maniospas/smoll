import "std/core.s"
import "std/io/file.s" as file

def load(on console CLI, nat16 address)
    chunk_buffer = edit alloc 2 # chunk size
    f = edit file::open("test_file.bin" binary)
    f.file::seek nat address
    file::chunk(chunk_buffer, f)
    r_value_h = bits chunk_buffer[0]
    r_value_l = bits chunk_buffer[1]
    r_value = bor(r_value_h.lshift 8, r_value_l)
    return nat16 nat r_value

def main(CLI)
    try ret = load nat16 0 # zero-initialized on failure (we don't need to do it ourselves)
    print nat ret
    
    error = compiler::last_error()
    if not ok error: print cstr error

