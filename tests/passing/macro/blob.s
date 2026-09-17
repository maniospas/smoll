import std.core
import std.blob

def create_blob()
    temp = [(72,73)]
    blobbed = macro<blob> compiler::varname temp[0]& # convert a typed pointer into an abstract data blob
    debug::print blobbed
    # next line needed to not return 'temp'; it safely fails the function if the pointers are not equal
    compiler::assert_eq(blobbed.unsafe_ptr, temp.unsafe_ptr)
    return blobbed

def create_str_from_blob()
    blobbed = create_blob()
    return str blobbed.as char[]

def main()
    CLI = edit console()
    print create_str_from_blob()
    