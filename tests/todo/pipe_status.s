import "std/core.s"
import "std/pipe.s"
def @ = compiler::varname
def ^ = compiler::deref


def pair(float x, float y)
    return class (x, y)

def foo(pipe ptr obj)
    if try p = mut macro<match> (@with obj, pair::name)
        p.x = 3.0
    unsafe_console().print "ended"

def main()
    CLI = edit console()
    arn = edit arena alloc 1024
    obj = mut macro<shared> (@arn, @pair(1.0,2.0))
    handle = thread(type foo, obj)

    # cannot lock both before and after trying to sync the handle
    #if try p_async = mut macro<match> (vrn with obj, pair::name)
    #    print ^p_async.x
    
    del handle # synchronize by waiting for thread reaease its resources
    if try p = mut macro<match> (@with obj, pair::name)
        print ^p.x
