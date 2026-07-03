import "std/core.s"
import "std/unsafe.s" as unsafe

def shared_alloc(nat size)
    _data = mut unsafe::alloc size
    _counter = unsafe_mut nat().compiler::size().unsafe::alloc().compiler::unsafe_attach_type(nat[].unsafe_ptr)
    _counter = 1
    #unsafe_console().print "allocated"
    defer
        prev = compiler::deref _counter
        if prev==1 
            unsafe::free _data
            unsafe::free _counter
            #unsafe_console().print "deallocated"
        else
            #unsafe_console().print "dec"
            try _counter = prev-1
    return class(_data, _counter)

def get_shared(edit shared_alloc self)
    self._counter = 1+compiler::deref self._counter
    #unsafe_console().print "inc"
    defer
        prev = compiler::deref self._counter
        if prev==1 
            unsafe::free self._data
            unsafe::free self._counter
            #unsafe_console().print "deallocated"
        else
            #unsafe_console().print "dec"
            try self._counter = prev-1
    value = mut self._data
    _counter = self._counter
    return class(value, _counter)

def counter(shared_alloc|get_shared self)
    return compiler::deref self._counter

def inc(mut any ptr data)
    prev = data.compiler::unsafe_deref float[]
    data.compiler::unsafe_copy(1.0+prev)
    unsafe_return()

def create()
    values = edit get_shared[].alloc 3
    s = edit shared_alloc 8
    values[0] = get_shared s
    values[1] = get_shared s
    values[2] = get_shared s
    return (values,s)

def main()
    CLI = edit console()
    values = create().values
    inc values[0].value
    inc values[0].value
    print counter values[0]
    print ((unsafe_mut values[0]).value.compiler::unsafe_deref float[])

