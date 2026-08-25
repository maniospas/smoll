import std.core
import "std/pipe.s"
def @ = compiler::varname


def pair(float _x, float _y)
    x = mut _x
    y = mut _y
    return class (x, y)

def foo(pipe ptr obj)
    p = mut macro<match> (@with obj, pair::name)
    p.x = 3.0
    unsafe_console().print "ended"

def main()
    CLI = edit console()
    arn = edit arena alloc 1024
    obj = mut macro<shared> (@arn, @pair(1.0,2.0))
    THREADS = edit growing_thread_pool cpu 16
    t = mut thread(type foo, obj)

    # cannot lock both before and after trying to sync the handle
    # if try p_async = mut macro<match> (@with obj, pair::name)
    #    print compiler::deref p_async.x

    join t # synchronize by waiting for thread reaease its resources
    if try p = mut macro<match> (@with obj, pair::name)
        print compiler::deref p.x
    #del THREADS