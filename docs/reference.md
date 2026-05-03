# smoλ reference

**Section 1. Basic syntax**<br>
_1.1._ [import](#import) <br>
_1.2._ [calling notation](#calling-notation) <br>
_1.3._ [mutability](#mutability) <br>
_1.4._ [types](#types) <br>
_1.5._ [type mutability](#type-mutability) <br>
_1.6._ [conditions](#conditions)<br>
_1.7._ [recursion](#recursion) <br>
_1.8._ [unions](#unions) <br>
_1.9._ [conditional compilation and default arguments](#conditional-compilation-and-default-arguments)<br>
_1.10._ [local definitions](#local-definitions)

**Section 2. Safe resources**<br>
_2.1._ [buffers](#buffers)<br>
_2.2._ [pointers](#pointers)<br>
_2.2._ [stable references](#stable-references)<br>
_2.4._ [substructures](#substructures)<br>
_2.5._ [try and fail](#try-and-fail)<br>
_2.6._ [defer](#defer)<br>

**Section 3. Standard library**<br>
_3.1._ [strings](#strings)<br>
_3.2._ [lists](#lists)<br>

# Section 1. Basic syntax

## import

Here is how to import the entire contents of another source code
file; the `print` function is imported from the core.

```python
import "std/core.s"

def main()
    # this is a line comment, by the way
    print "hello world!"
```

If you are new to the language, now is a good point to mention
that you need only the executable to start working with it. You can
then reference local or **online** directory. Below is an example,
where the theoretical *std/* location is grabbed from the development repository. For safety, imported files other than the one you run can only make suggestions about repos, and fail to compile if these are not present.

```python
repo "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/std/" as "std/"
import "std/core.s"

def main()
    # this is a line comment, by the way
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
namespace name too, for example to bring a single function 
from a file.

```python
import "std/core.s" as core
import core::print

def main()
    print "hello world!"
```

## calling notation

Functions are followed by their arguments in parantheses,
although you can also omit the latter if they would end 
at the end of the line. Arguments are comma-separated,
like below. In general, commas within parentheses designate
tuples.


```python
import "std/core.s"

def main()
    p = (1,2)
    print add p
    print add(1,2)
```

You can also use the `.` operator to pipe some data
into the beginning of a function like below. This also
works as a notation for calling functions like class 
methods. In general, do try to avoid needless parentheses,
as the snippet below does (`f1 f2 ... args` is a chain of 
function calls). You can always refer to functions
within namespaces.

```python
import "std/core.s" as core
import core::print  # import print symbol

def main()
    x1 = 1
    x2 = x1.core::add 1
    print x2.core::add 2
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
    x = mut 1  # mutable - we want to mutate it further
    x = x+2
    x = x+3
    print x
    print "\n"
```


## types

All functions declare corresponding types via their returned values.
That is, you can use the function's name to refer to data with
equivalent structure. Below is an example, where the
`nat` type represents to natural numbers (non-negative integers). Other builtin types
are `bool`, `int`, `float`, and `cstr` for string literals.

```python
import "std/core.s"

def range(nat start, nat end)
    pos = mut start
    return (pos, end)

def next(mut range r)
    r.pos = mut r.pos+1
    return r

def main()
    r = mut range(0,10)
    r = r.next()  # see proper loops below (parenthesis needed to designate empty tuple)
    print r.pos
    print "\n"
    print add r # pos+end
    print "\n"
```

The example above uses the `.` notation to obtain  
a value packed in a type by name. This name is determined
by the returned value's name.

Types like the above are structurally matched, as we did
when applying `add` to the range construct. If you
want to prevent implicit structural metches, 
use the following `class` notation to wrap the returned value.


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

## type mutability

Normal mutability rules apply when overwriting whole objects. For example,
`t` below needs to be made mutable so that it can be overwritten. This
does not mean that field immutability can be violated. 
That is, even if `t` is mutable, we would not
be able to overwrite the immutable `t.y` field by itself.

```python
import "std/core.s"

def Test()
    x = 1
    y = 2
    return class(mut x, y)

def main()
    t = mut Test()
    t = Test()
    print(t.x) 
```

You can normally overwrite mutable fields even if you cannot overwrite 
whole type's instance at once. This is the default mutability mode, but
one can also use `const` instead of `mut` to strip away any mutation
capability.

```python
import "std/core.s"

def Test()
    x = 1
    y = 2
    return class(mut x, y)

def main()
    t = Test()
    print t.x # prints 1
    t.x = 0
    print t.x # prints 0
    print t.y # prints 2
```

The same rules hold for function arguments. Below is an example.

```python
import "std/core.s"

def Test()
    x = 1
    y = 2
    return class(mut x, y)

def test(const Test t)
    # t.x = 10 # disallowed
    print t.x

def main()
    t = Test()
    t.x = 5
    test t
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

## recursion

Sometimes, it is convenient for functions to call each 
other. Normally, functions can see only previous ones,
but you can use `rec` instead of `def` to allow recursion
within the current file. 

A file with recursive functions works like this:
- **Step 1.** All functions are parsed, where recursive ones stop at their first return statement. Up to that point, everything
can only see previous functions, which means that you need
to encode the recursion stoping conditions.
- **Step 2.** The rest of the recursive definitions
are parsed. These now have access to the whole file's types.

Below is an overengineered and thus algorithmically
slow Fibonacci number calculator that demonstrates recursion
concepts. The function `call_fib` is completely useless too. :-)

Reminder that recursive functions can call both
themselves and others that appear *later*. But normal functions
can still only see previous declarations. Do note that only
one function in a chain of multiple ones needs to be declared
as recursive.

```python
import "std/core.s"

rec fib(nat n)
    if n<=1
        return 1
    return call_fib(n-1)+call_fib(n-2)

def call_fib(nat n)
    return fib(n)

def main()
    print fib(42)
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
can be made to check for the presence of **optional arguments**. 
In the next example, the defined function implements either an increment
by one, or by a value provided as second argument. 

```python
def inc(int x, int|blank value)
    if value is blank
        value = 1
    return x+value
```

## local definitions

This is perhaps a good point to mention that you can have imports
or function definitions be preceded by `local` to avoid exposing
unecessary contents.
For example, the *range* module from the standard library imports
the latter's core locally but never exposes it, for example to
cover cases where different arithmetic operations need to be defined 
in your part of the code (e.g., handling of overflows).

```python
local import "std/core.s"

def range(nat|blank pos, nat to)
    if pos is blank
        pos = 0
    return (mut pos, to)

def next(range r, mut nat value)
    next_pos = r.pos+1
    if next_pos==r.to
        return false
    value = r.pos
    r.pos = mut next_pos
    return true
```

# Section 2. Safe resources

## buffers

Buffers are memory-allocated collections of items.
They can be declared with the following syntax to hold 
any type's items:

```python
import "std/core.s"

def print(any[] buffer)
    print(len buffer, " elements in buffer\n")

def main()
    x = mut float[]
    print(x)
```

Most buffer features are implemented in the standard library's core
we will see next how to work with abstract buffers.
One of the most important features is the `alloc` function to
allocate and zero-initialize a specific number of elements. 
This returns the buffer itself to enable initialization per patterns like
`buf = (mut float[]).alloc 4`. Allocate a buffer of chars
by not providing the mutable buffer decleration per `buf = alloc 4`.
Make use of the `KB`, `MB`, `GB` functions to quickly size allocations.

Allocation will create an error if it tries to change the number of
elements from a non-zero number to something different.
In those cases, use `resize` instead. 
You can also set the size to zero. If the
allocation is the same in size as before, the buffer's elements
are still zero-initialized. This is helpful when reusing the same
buffers within loops. 

A second important feature is the element access operator `buffer[pos]`,
which can be used to extract an object stored at a specific position. 
In general, this operator is implemented by overloading the `get` 
function and `mutget` functions. Use `buffer[pos] = value` to copy same data 
on a buffer's element. This is equiavalent to the pointer notations
`buffer[pos]&&<<value`, but more on pointers later.

All buffer indexes are of type `nat`, which represents natural numbers 
(non-negative integers). Here is an example of buffer usage.

```python
import "std/core.s"

def main()
    buf = mut float[]
    buf.resize(10)
    print buf[0]  # prints 0, as buffers are zero-initialized
    buf[1] = 1.0
    print buf[1]
```

Declare a buffer as `const` to disallow any modifications to its
contents. Normally, buffers merely prevent resizing or allocation
(unless they are `mut`), but "locking" them underneath a constant
safeguard can improve performance and bring code safety.

## pointers

Pointers reference specific memory locations in buffers, which 
you can use to safely move data around while sharing only
one memory address. 

Pointers are unstable in that they become invalid later in the code. 
Being invalid means that they can not be read from or copy data
to them. Still, invalidation ensures safety.

Obtain a `const` pointer from a buffer whose
pointed memory location cannot be modified per `ptr = buf[element]&`, and
a `mut` pointer per `ptr = buf[element]&&`. 


`ptr..` dereferences pointers onto local objects. 
For example, `ptr...field` gets a field from an object stored 
in a pointer. On the other hand, move values onto pointed locations
of mutable pointers per `ptr << value`.

*Smoλ* makes necessary checks on pointer safety; it would be too restrictive
to impose those checks on the type system. 

Mainly, the type of data stored on pointers
is checked for consistency, and invalidated pointers (for example whose
data have moved in memory by modifying a buffer) cannot be used. 
Functions declare pointer arguments per `any ptr`, `float ptr`, etc.

There is a particular contract for pointers: unless
they create a runtime error by remaining uninitialized, it is always
valid to move data to their memory address. Below is an example.

```python
import "std/core.s"

def main()
    buf = (mut float[]).alloc 1
    element = buf[0]&&
    print element.. # prints 0 as buffers are zero-initialized
    element << 1.0
    print element.. # prints 1 by dereferencing
    print buf[0]    # prints 1 from the same memory 
```

If, in he above example, a new line 
`buf.resize 2` was applied before the
last two prints, `element` would become invalidated and would
need to be re-obtained from the buffer.
In general, try to work with buffers and only use pointers
for rapidly moving temporary data around.

As we now know about pointer invalidation, it becomes apparent
why the syntax `data >> ptr` is necessary when moving data
within a buffer while resizing it; it lets us put dereferencing
on the left-hand-side to evaluate it before moving data. 

Below is how one could do
this without intermediate variables
by leveraging the fact that `resize` returns the buffer
while a helper function `mutlast` is provided to retrieve a 
mutable pointer to the last element (or fail for an empty buffer).
If we used `<<` we would not have access to `buf[2]` after resizing.

```python
import "std/core.s"
import "std/array.s"

def main()
    buf = (mut nat[]).alloc 3
    buf[2] = 1
    buf[2] >> mutlast buf.resize 2
    print buf[1]  # prints 1
```

## stable references

You can work with data that reference other data
in that they are updated together. This is similar
than pointers, but comes under some scarce safety 
restrictions that let compile ensure safety.

To convert some data to a reference use the `ref value`
syntax like below.

```python
import "std/core.s"

def main()
    x = mut 0
    y = ref x
    z = ref x
    x = 2
    print y+z # prints 4
```

References are **automatically propagated**
by analyzing direct input-output equalities. This
allows the compiler to re-attach valid references to
invalidated data structures, for example that would
have been validated by memore movements.

Notably, references are not types but just some
property you attach to local variables to indicate
safe usage. Below is an example, where a list is used
to dynamically manage a buffer and resize it as needed.

Without `ref`, the compiler would complain that the 
potential resizing of the second copy could 
(in this case: would) invalidate the buffer version
that the string `s1` know about. However, thanks to 
the stable reference, the buffer is automatically updated
for strings copied onto it.


```python
import "std/core.s"

def test()
    mem = list ref mut char[]
    s1 = mem.copy "123"
    s2 = mem.copy "456"
    return (s1,s2)

def main()
    s = test()
    print s.s1
    print s.s2
```

## substructures

You can work with "horizontal" data from buffers and pointers by
obtaining or setting to specific items. However, you can also
work with "vertical" data by being able to obtain sub-buffers
or sub-pointers for their fields.

The method to do so is by using the `buf@field` or `ptr@field` notation, 
where the field refers to a known field of the attached stucture. This
operator helps write very safe yet fast and memory-efficient code by
obtaining necessary offsets within allocated memory. Below is
an example:


```python
import "std/core.s"
import "std/array.s"

def Point2D(float x, float y)
    return class(x,y)

def Point3D(float x, float y, float z)
    plane = Point2D(x,y)
    return (plane,class(z))

def main()
    points = (mut Point3D[])->alloc(10)
    points[0] = Point3D(1.0,2.0,3.0)
    print points@plane@x[0]
    print points[0].plane.x  # equivalent
```

## try and fail

Functions in *smoλ* can fail freely when unforeseen conditions are encountered,
for example when running out of memory. When failing functions are called by
others, the failure cascades until the whole program terminates. You can encode
failure tracking in your programs by passing the `--debug` flag to the compiler.

Failure means that all resources are released and return values become zero. 
Mutable arguments are left unaffected. You can manually `fail` like so:

```python
import "std/core.s"

def always_fail()
    print "we are failing"
    fail "we failed!"

def main()
    always_fail()
    print "this line is never printed"
```

There are certain places in code where you can recover from call failures,
for example by calling the same code again for improved user input, or by
falling back to some secondary functionality. This is achieved with the
`try` keyword, which parses an expression without stopping at failing functions, if any (their returns are just zero-initialized). Then, failures are converted into boolean values. Below is an example where we safeguard against failing allocation.

```python
import "std/core.s"
import "std/array.s"

def vector(nat size)
    return (mut float[]).alloc size

def main()
    if not try v = vector pow(1024,6)
        print "failed to allocate"
    print(v->len(), " numbers allocated\n")
```


## defer

You can defer code blocks to run later. The "later" part is
ideally the end of the current function, but *smoλ* may
postpone it further to accomodate resources (e.g., buffers) 
that are still in use.
Defer blocks cannot have any return statements or unhandled
errors; explicitly wrap all potentially erroneous function calls 
in `try`. Conversely, their eventual execution is guaranteed,
even if errors are created in the interim.
Below is a simple example.

```python
import "std/core.s"

def main()
    defer
        print "third"
    print "first"
    print "second"
```



# Section 3. Standard library

## lists

You can manage buffers by adding push and pop operations, as well
as a capacity-based growth stratetegy. This is done by caling the 
`list` function on a mutable buffer. List elements are accessed like 
buffers. An example follows.

```python
import "std/core.s"

def main()
    li = list mut float[]
    0.1 >> push li
    0.1 >> push li
    0.1 >> push li

    li[1] = 0.2
    print li[0]
    print li[1]
```

## strings

The standard library provides the `str` structural type for representing
strings by combining character buffers, an offset within the buffer
where the string starts (more stable than using a pointer), its length,
and its first character for quicker comparison; that is `\0` for empty
strings.

`cstr` data are trivially castable to strings if their length is not
needed. Below is na example, where printing is also implemented for
strings.

```python
import "std/core.s"

def main()
    print str "hello world!"
```

You can convert string contents to numeric types. This creates
errors on failure.

```python
import "std/core.s"

def main()
    print float "123"
```

Strings can be copied both on `char[], mut nat` buffers and on
lists defined on character arrays like below.

```python
import "std/core.s"

def main()
    buf = list mut char[] # or buf = (alloc(mut char[], KB 4), mut 0)
    s = buf.copy "hello world!"
    print s
```