import std.core
import std.pipe
def @ = compiler::varname

def pair(float _x, float _y)
    x = mut _x
    y = mut _y
    return class (x, y)

def foo(pipe obj)
    p = mut macro<match> (@open(obj writer), pair::name)
    p.x = 3.0

def main(on CLI)
    THREADS = edit growing_thread_pool(cpu 16, 1024)

    obj = mut macro<shared> @pair(1.0,2.0)
    t = mut thread(type foo, obj)

    join t # synchronize by waiting for thread to reaease its resources
    if try p = macro<match> (@open(obj reader), pair::name)
        print compiler::deref p.x
