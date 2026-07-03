import "std/core.s"
import "std/unsafe.s" as unsafe

def generic(nat size, compiler::ptr->blank constructor, compiler::ptr->blank deallocator)
    data = unsafe::alloc size
    constructor.compiler::call data
    defer 
        if exists data
           try deallocator.compiler::call data
    return class(data, deallocator)

def create(any ptr self)
    (unsafe_mut self.compiler::unsafe_attach_type(nat[].unsafe_ptr)) = 1

def release(any ptr self)
    unsafe::free unsafe_mut self

def get(generic self)
    return compiler::deref(unsafe_mut self.data.compiler::unsafe_attach_type(nat[].unsafe_ptr))

def main()
    CLI = edit console()
    obj = generic(8, type create, type release)
    print get obj
