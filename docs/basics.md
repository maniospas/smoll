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

Values cannot normally be overwritten. However, you can declare
mutable ones that can be overwritten **once** by placing `mut`
before an expression (so it makes the result of everything 
that follows mutable). You can keep overwriting the value if
you substitute it with a mutable one.

Below is an example, where no further
mutations to the value are accepted after the third assignment,
if we wanted to make sure that we are done editing it.
Even if a value is mutable, it can only be overwritten by
others of the same type.


```python
import "std/core.s"

def main()
    x = mut 1   // mutable - we want to mutate it further
    x = mut x+2 // mutable - we still want to keep mutating
    x = x+3  // immutable - stop mutating
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

You can declare alteratives between types (unions) by separating them
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

Type alteratives can also be named so that they can be reused.
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
using the `empty` builtin type; that has no contents and therefore
skips respective variable definition. Conversely, non-existing
variables are considered `empty`, and checks like the one below 
can be made. 

There, the defined function implements either an increment
by one, or by a value provided as second argument. Use the
same mechanism to have any number of optional arguments.

```python
def inc(int x, int|empty value)
    if value is empty
        value = 1
    return x+value
```