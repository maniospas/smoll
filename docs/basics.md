# smoλ: Basic syntax

## import

Here is how to import the entire contents of another source code
file; the `print` function is imported from the core.

```python
import "std/core.s"

def main()
    // this is a line comment, by the way
    print "hello world!"
```

If you are new to the language, now is a good point to mention
that you need only the executable to start working with it. You can
then rference local or **online** directory. Below is an example,
where the theoretical *std/* location is grabbed from the development repository. For safety, imported files other than the one you run can only make suggestions about repos, and fail to compile if these are not present.

```python
repo "https://github.com/maniospas/smoll/raw/refs/heads/main/std/" as "std/"
import "std/core.s"

def main()
    // this is a line comment, by the way
    print "hello world!"
```



You can also import a file as a namespace to access its
contents with the `::` notation. This is more verbose
but unambiguous, like below. You can even access namespaces
defined within the imported namespace.

```python
import "std/core.s" as core

def main()
    core::print "hello world!"
```

If you want to import something specific, use `::` within
the import statement. You can use the path instead of the
namespace name too, for example to bring a function from
a file and be done with it.

```python
import "std/core.s" as core
import core::print

def main()
    print "hello world!"
```

## calling notation

Functions do not require parentheses and have only one
argument. That argument can be a tuple of values, like below.
Tuples are denoted by parentheses, inside which values are comma-separated.


```python
import "std/core.s"

def main()
    p = (1,2)
    print add p
    print add(1,2)
```

You can also use the `->` operator to pipe some data
into the beginning of a function like below. This also
works as a notation for calling functions like class 
methods. In general, do try to avoid needless parentheses,
as the snippet below does (`f1 f2 ... args` is a chain of 
function calls). You can always refer to functions
within namespaces.

```python
import "std/core.s" as core
import core::print

def main()
    x1 = 1
    x2 = x1->core::add 1
    print x2->core::add 2
```

## mutability

Values cannot normally be overwritten. To enable this,
place `mut` just after the assignment. 
You can keep overwriting mutable values.

Below is an example, where no further
mutations to the value are accepted after the third assignment,
if we wanted to make sure that we are done editing it.
Even if a value is mutable, it can only be overwritten by
others of the same type.


```python
import "std/core.s"

def main()
    x = mut 1   // mutable - we want to mutate it further
    x = x+2
    x = x+3
    print x
    print "\n"
```


## types

All functions declare homonymous types via their returned values.
That is, you can use the function's name to refer to data with
equivalent structure. Below is an example, where we use the
`id` type referring to non-negative integers. Other builtin types
are `bool`, `int`, `float`, and `cstr` for string literals.

```python
import "std/core.s"

def range(id start, id end)
    pos = mut start
    return (pos, end)

def next(mut range r)
    r.pos = mut r.pos+1
    return r

def main()
    r = mut range(0,10)
    r = r->next() // see proper loops below (parenthesis needed to designate empty tuple)
    print r.pos
    print "\n"
    print add r   // pos+end
    print "\n"
```

The example above uses the `.` notation to obtain  
a value packed in a type by name. This name is determined
by the returned value's name.


Types like the above are structurally matched, as we did
when applying `add` to the range construct. If you
want to set a type by name, use the following `class`
notation to wrap the returned value so that it is never
structurally matched.



```python
import "std/core.s"

def Point(float x, float y)
    return class(x,y)

def sum(Point p)
    return p.x+p.y

def main()
    p = Point(1.0, 2.0)
    print sum p 
```

## conditions

As you have likely noticed so far, *smoλ* code blocks
are distinguished by indentation. The same holds true
for code blocks of `if-else` conditions and `while` loops.
Both behave like how you would expect, and loops can also
be prematurely terminated with `break` or skipped with
`continue`.

```python
import "std/core.s"

def main()
    x = 1.0-2.0
    if x<0
        print "x is negative\n"
    print "done\n"
```

You can have one-liners for conditions and loops,
like the following versions.

```python
import "std/core.s"

def main()
    x = 1.0-2.0
    if x<0.0 print "x is negative\n"
    else if x==0.0 print "x is zero\n"
    else print "x is positive\n"
```

```python
import "std/core.s"

def main()
    x = 1.0-2.0
    if x<0.0 sgn = "-" else sgn = "+"
    print "sign is: "
    print sgn
    print "\n"
```

## unions

Declare alteratives between types (unions) by separating them
with `|`. Below is an example that defines a function for
adding either a float or an integer to a float. The brackets
are used to add some C code, inside which `builtins::float` is
injected by *smoλ* as the appropriate builtin type. 

This particular functionality is not part of the standard library, because the latter
aims to lossy conversions between numeric types. Usually, you will
not see any unsafe C code in front of you either (unless you are contributing 
to the standard library).

```python
import "builtins"

def unsafe_add(float x, float|int y)
    {builtins::float z=x+y;}
    return z
```

Type alternatives can also be named for reusability.
An example follows.

```python
import "builtins"

def Number = float|int|id
def unsafe_add(Number x, Number y)
    {builtins::float z=x+y;}
    return z
```

## conditional compilation and default arguments

You can use the `[value] is [type]` operator to check that a value/tuple
adheres to a at least one variation of a union. The result is not
merely a boolean, but in fact of type `compile::true` or `compile::false`;
these values are significant because they let *smoλ* actually identify 
whether conditions will always be true or false and **eliminate code without parsing it**.

In other words, you can make `is` checks to determine conditionally which code
segment to compile. This incurs *zero* runtime overhead. 
At the same type, you can mingle them together with other condition checking,
as the standard library's core. Below is an example of a conditional check.

```python
def typed_print(int|float|cstr value) 
    if value is int|float
        print("this is a number:")
    else
        print("this is a string:")
    print(value)
```


The same mechanism can be used to create optional arguments
using the `blank` builtin type; that has no contents and therefore
skips respective variable definition. Conversely, non-existing
variables are considered `blank`, and checks like the one below 
can be made. 

There, the defined function implements either an increment
by one, or by a value provided as second argument. Use the
same mechanism to have any number of optional arguments.

```python
def inc(int x, int|blank value)
    if value is blank
        value = 1
    return x+value
```


## buffers

Buffers are memory-allocated collections of items.
They can be declared with the following syntax to hold 
any type's items:

```python
import "std/array.s"

def print(any[] buffer)
    print("buffer: ", "")
    print(buffer.size, " elements, ")
    print(buffer.align*buffer.size, " bytes\n")

def main()
    x = mut float[]
    print(x)
```

Most buffer features are implemented in `"std/array.s"`;
we will see next how to work with abstract buffers.
One of the most important features is the `alloc` function to
allocate and zero-initialize a specific number of elements. This
function returns the buffer itself to enable initialization like
`buf = mut float[]->alloc(10)`.

Allocation will create an error if it tries to change the number of
elements from a non-zero number to something else.
In those cases, use `resize` to change buffer size, that is, its
number of elements. You can also set the size to zero.

A second important feature is the element access operator `[]`,
which can be used to retrieve a pointer to a specific element. In general, this operator is implemented by overloading the `get` 
function.

Pointers can only be retrieved from buffers and are
unstanble in that they become invalid later in the code. 
Being invalid means that they can not be read from or copy data
to them. Still, invalidation ensures safety.

Use`ptr: value` to copy same data on the pointer's memory,
and `ptr.` dereferences the pointers into a local object.
For example, `ptr..field` gets a field from an object stored 
in a pointer.


Lastly, all buffer indexes -yes, we are still talking about buffers-
are of type `id`, which represents unsigned integers. Below is an
example of buffer usage

```python
import "std/core.s"
import "std/array.s"

def main()
    buf = mut float[]
    buf->resize(10)
    print buf[0]. // prints 0, as x is zero-initialized
    buf[1]: 1.0
    print buf[1].
```

## pointers

We already saw that pointers exist. In general,
use them to pass large chunks of data around or simply
reference the memory address of buffer elements. *Smoλ* makes necessary
checks on pointer safety; it would be too restrictive
to impose those checks on the type system. 

Mainly, the type of data stored on pointers
is checked for consistency, and invalidated pointers (for example whose
data have moved in memory by modifying a buffer) cannot be used. 
Functions declare pointer arguments per `any ptr`, `float ptr`, etc.

There is a particular contract for pointers: unless
they create a runtime error by remaining uninitialized, it is always
valid to move data to their memory address with the already mentioned
syntax `pointer: data`. Below is an example.

```python
import "std/core.s"
import "std/array.s"

def main()
    buf = mut float[]->alloc(1)
    element = buf[0]
    print element.  // prints 0 as buffers are zero-initialized
    element << 1.0
    print element.  // prints 1
    print buf[0].   // prints 1 from the same memory 
```

If, in he above example, `buf->rize(2)` was applied before the
last two prints, `element` would become invalidated and would
need to be re-obtained from the buffer.
In general, try to work with buffers and only use pointers
for rapidly moving temporary data around.