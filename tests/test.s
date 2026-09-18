import std.core
import std.pipe
import std.sci
def @ = compiler::varname


def sum_data(vec v)
    result = mut 0.0
    return class (v,result)

def parallel_sum(pipe obj)
    p = mut macro<match> (@with obj, sum_data::name)
    v = compiler::deref p.v
    unsafe_console().print v
    p.result = sum compiler::deref p.v
    unsafe_console().print compiler::deref p.result

def main()
    CLI = edit console()
    mat = mat [
        1.0, 2.0, 3.0,
        3.0, 4.0, 5.0,
        6.0, 7.0, 8.0
    ].any 3
    THREADS = edit growing_thread_pool cpu 16
    pending = edit pipe[].alloc mat.rows
    surface = edit arena(1024 incorruptible)

    for i in range of mat.rows
        #print row(mat, i)
        pending[i] = macro<shared> (@surface, @sum_data row(mat, i))
        join thread(type parallel_sum, pending[i])
    #del THREADS
    
