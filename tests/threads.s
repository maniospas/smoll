import std.core
import std.pipe
import std.sci
import std.sci.unsafe::vec as vec_type
def @ = compiler::varname

def sum_data(nat row, vec v)
    result = mut 0.0
    return class (row,v,result)

def parallel_sum(pipe obj)
    reader = open(obj writer)
    if try sum_data = mut macro<match> (@reader, "sum_data")
        a.result = 2.0
        sum_data.result = sum compiler::deref sum_data.v
    else if try p = macro<match> (@reader, "vec_type")
        unsafe_console().print "we got a vector"

def main()
    CLI = edit console()
    mat = mat [
        1.0, 2.0, 3.0,
        3.0, 4.0, 5.0,
        6.0, 7.0, 8.0
    ].any 3
    THREADS = edit growing_thread_pool(cpu 16, 1024)
    pending = edit pipe[].alloc mat.rows

    for i in range of mat.rows
        pending[i] = macro<shared> @sum_data(i, row(mat, i))

        #writer = open(pending[i] writer)
        #(unsafe_mut macro<match>(@writer, sum_data::name)) = sum_data(0, row(mat, 0))
        #macro<unsafe_replace> (@writer, @row(mat,0))
        #del writer
        join thread(type parallel_sum, pending[i])
    #del THREADS
    
