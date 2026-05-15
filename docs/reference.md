<div class="toc" markdown="1">

**Section 1. Basic Syntax**<br>
_1.1._ [import](#import) <br>
_1.2._ [calling notation](#calling-notation) <br>
_1.3._ [mutability](#mutability) <br>
_1.4._ [types](#types) <br>
_1.5._ [type mutability](#type-mutability) <br>
_1.6._ [conditions](#conditions)<br>
_1.7._ [recursion](#recursion) <br>
_1.8._ [unions](#unions) <br>
_1.9._ [literal types](#literal-types) <br>
_1.10._ [conditional compilation and default arguments](#conditional-compilation-and-default-arguments)

**Section 2. Safe Resources**<br>
_2.1._ [buffers](#buffers)<br>
_2.2._ [⚠ pointers](#pointers)<br>
_2.3._ [⚠ substructures](#substructures)<br>
_2.4._ [stable references](#stable-references)<br>
_2.5._ [try and fail](#try-and-fail)<br>
_2.6._ [defer](#defer)<br>
_2.7._ [catching errors](#catching-errors)<br>
_2.8._ [effects](#effects)<br>
_2.9._ [⚠ debugging tools](#debugging-tools)<br>
_2.10._ [⚠ bounded compute](#bounded-compute)<br>

**Section 3. Standard Library**<br>
_3.1._ [lists](#lists)<br>
_3.2._ [strings](#strings)<br>
_3.3._ [maps](#maps)<br>
_3.4._ [io](#io)<br>
_3.5._ [processes](#processes)<br>
_3.6._ [random](#random)<br>
_3.7._ [⚠ mini and bits](#mini-and-bits)<br>
_3.8._ [vectors](#vectors)<br>

⚠ Advanced functionality.

</div>

# Section 1. Basic Syntax

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
that you need only the executable (and a local C compiler) to start working. Once
you download the language's executable, you can reference local or **online** directories 
in your code. The second type are automatically downloaded. Below is an example,
where the theoretical *std/* location is grabbed from the development repository. 
For safety, imported files other than the one you run can only make suggestions about repos, 
and fail to compile if these are not present.

```python
repo "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/std/" as "std/"
import "std/core.s"

def main()
    # this is a line comment, by the way
    print "hello world!"
```



You can also import a file as a namespace to access its
contents with the `:` notation. This is more verbose
but unambiguous, like below. You can even access namespaces
defined within the imported namespace.

```python
import "std/core.s" as core

def main()
    core:print "hello world!"
```

If you want to import something specific, use `:` within
the import statement. You can use the path instead of the
namespace name too, for example to bring a single function 
from a file.

```python
import "std/core.s":print

def main()
    print "hello world!"
```


Finally, you can have imports
-or function definitions- be preceded by `local` to avoid exposing
unnecessary contents. This is used for isolating which functionality
is introduced in each file, so that it can be uniquely referenced.

## calling notation

Functions are followed by their arguments in parentheses,
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

The `.` operator can also pipe some data
into the beginning of a function like below. This
works as a notation for calling functions like class 
methods. In general, do try to avoid needless parentheses,
as the snippet below does (`f1 f2 ... args` is a chain of 
function calls). You can always refer to functions
within namespaces.

```python
# an atypical import structure for demonstration
import "std/core.s" as core

def main()
    x1 = 1
    x2 = x1.core:add 1
    core:print x2.core:add 2
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

def toinfinity(nat start)
    pos = mut start
    return (start, pos)

def next(toinfinity r)
    r.pos = r.pos+1

def main()
    r = toinfinity(0)
    next r # proper loops later
    print r.pos
    print "\n"
    print add r
```

The example above uses the `.` notation to obtain  
a value packed in a type by name. This name is determined
by the returned value's name.

Types like the above are structurally matched, as we did
when applying `add` to the range construct. This structural
typing is rich but can be kind of unsafe if you do not keep
track of your data shapes. To prevent implicit structural matches, 
use the following `class` notation to wrap the returned value.

Further prefer class definitions when declaring types with some
construction contract; such contracts should
not be violated by matching with arbitrary data.


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

Use `singleton` instead of `class` to further
ensure that the function runs at most one time in your program.
On the other hand, a shorthand for defining a structural type that would
immediately return all its fields is to omit its body, like next.

```python
import "std/core.s"

def Point(float x, float y) # structural definition needs no body
def Field(Point a, Point b)

def main()
    f = Field(1.0, 2.0, 3.0, 4.0)
    print f.a.x+f.b.y # prints 5.0
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
    x = mut 1
    y = 2
    return class(x, y)

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
    x = mut 1
    y = 2
    return class(x, y)

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
    x = mut 1
    y = 2
    return class(x, y)

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

Loops are similar to condition, only they execute multiple
times until a condition is true or false. You can use `continue` 
to skip the rest of the current loop and `break` to halt the
current loop. Here is a silly example. Please do not write code like this.

```python
import "std/core.s"

def main()
    i = mut 0
    while true # overengineered
        if i==5 
            break # stop this way
        if i==3
            i = i+1 # skip printing in 
            continue 
        print i
        i = i+1
```

A more efficient way to write loops, which will be fully
understood later, is via iterators that have the means to
obtain the next element. The `range` iterator, for example, 
takes an end number or a pair of start and end numbers and allows
calling `next` to retrieve the next value until the end
is reached (non-inclusively). The retrieval may fail, which
is checked by guarding the expression with a `try` instruction.
These are all [error code semantics](#try-and-fail).


```python
import "std/core.s"

def main()
    it = range 10 # equivalent to it = range(0,10)
    while try i=next it
        print i   # prints 0,1,2...,9
```

## recursion

Sometimes, it is convenient for functions to call each 
other. Normally, functions can see only previous ones,
but you can use `rec` instead of `def` to allow recursion
within the current file. 

A file with recursive functions works like this:

- **Step 1.** All functions are parsed, where recursive ones stop at their 
first return statement. Up to that point, everything
can only see previous functions, which means that you need
to encode the recursion stopping conditions.

- **Step 2.** The rest of the recursive definitions
are parsed. These now have access to the whole file's types.

Importantly, the recursive function's escape hatch should occur
first, otherwise Step 1 would result in failure. The compiler
will point out that you are trying to perform a recursion without
having returned at least once first so that the type can be determined.

For example, consider the following malformed program; type theory would
be able to determine a type for this case... but *smoλ* disagrees because 
doing so in more complicated cases means that reading the program sequentially
does not work; the programmer needs to reason about unbounded problems.

```python
import "std/core.s"

def wooo() # CREATES AN ERROR - should have been 'rec'
    print "wooo"
    return wooo()

def main()
    wooo()
```

<div class="console">
<code class="output">
[<span style="color:orange">+</span>] process      tests/test.s
<span style="color:#F056AC">type error: recursive usage of 'def wooo' before its definition; perhaps declare it as 'rec'</span>
at tests/test.s line 5 column 12
    return wooo()
           <span style="color:red">^^^^</span>
</code>
</div>

Before moving forward, it must be mentioned that
smoλ's type system is deliberately
simplified so that programs *can be read sequentially*
and *resolve types in finite time*. Recursion is too
convenient to disallow fully, so explicit recursive declarations
are selected
as a means of presenting the aforementioned properties.
In particular, you can read up to a recursive function's first return
and keep that in mind whenever the function is called in
subsequent code. 


Below is an overengineered and thus algorithmically
slow Fibonacci number calculator that demonstrates recursion
concepts. The function `call_fib` is completely passthrough and hence useless. :-)

Recall that recursive functions can call both
themselves and others that appear *later*. But normal functions
can still only see previous declarations. Thus, only
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


A simple trick to declare return types without affecting your logic is
to guard them within false conditions, like below. Why this is not 
meaningless is discussed much later in the advanced section about
[bounded compute](#bounded-compute).

```python
import "std/core.s"

rec wooo()
    if false return blank()
    print "wooo"

def main()
    wooo()
```

## unions

Declare alternatives between types (unions) by separating them
with `|`. Below is an example that defines a function for
adding either a float or an integer to a float. The brackets
are used to add some C code, inside which `builtins:float` is
injected by *smoλ* as the appropriate builtin type. 

The exemplified functionality of adding any two numbers together
is not part of the standard library, as it introduces lossy 
conversion between numeric types. Usually, you will
not see any unsafe C code -introduced by brackets- either, 
unless you are contributing to the standard library or writing 
helpers for low-level operations. A more complete reference 
for interweaving a superset of C that interacts with smoll
will be added in the future.

```python
import "builtins"

def unsafe_add(float x, float|int y)
    {builtins:float z=x+y;}
    return z

def main()
    print unsafe_add (1, 2.0)
```

Type alternatives can also be named for reusability.
This is called a union type in that it brings together
several alterantives to be referenced via the same name.
An example follows.

```python
import "builtins"

def Number = float|int|nat
def unsafe_add(Number x, Number y)
    {builtins:float z=x+y;}
    return z

def main()
    print unsafe_add (1, 2.0)
```

In truth, *smoλ* implements a linear type system, but this
was hidden till this point because people tend to shy away
from reading technical terms. Practically, it means
that -in addition to type unions- you can also get the intersection
of type unions with the `&` symbol. Use parantheses like normal.

Here is an example where, say, we define a `float` function that returns
something other than a builtin float number. We can get the intersection
of all float definitions that are also numbers, or all those definitions
that are not numbers with the '\` symbol.

```python
import "std/core.s" # defines Number like above

def natpair(nat x, nat y)
def float(natpair a)
    x = float a.x
    y = float a.y
    return (x,y)

def numeric_float = float&Number
def inc(numeric_float x)
    return 1.0+x

def inc(float\Number a) # define for float definitions that are not in Number
    x = 1.0+float a.x
    y = 1.0+float a.y
    return (x,y)

def main()
    print inc(1.0)  # print 2.0
    print inc(4.0,4.0).x # prints 5.0
```

## literal types

Often there is a need to distinguish functionality based on some exact
literal value. Or you may want to have some constant that is used everywhere
in your code. This is done by having literal types, as in, types that
are attached to specific values.

Below is an example on using this concept to define numeric or 
cstr constants first. Literal types evaluate to their value when 
used within code - nothing
out of the ordinary.

```python
import "std/core.s"

def INCREMENT = 1

def inc(nat x)
    return x+INCREMENT

def main()
    print inc 0  # prints 1
```

But literal types can also specialize among which
function to call, like below. Doing so requires retrieving
the literal's type by evaluating `type value`, where value
can be a string or number literal.

```python
import "std/core.s"

def VERSION = "two"

def version("one") # just a literal type
    print "version one"

def version("two")
    print "version two"

def main()
    v = type "two"
    version v # calls the correct version
    version type VERSION # calls the same version
```

Literal types still adhere to all other type system conventions. 
Those includes union declarations and having associated variables
holding their value when used as function arguments.

Get back the associated value with the `compiler:literal` function. 
That is, `compiler:literal type "two"` yields `"two"`.
The benefit lies purely in extracting values from the type system.
An example that restricts how functions are called is presented next.

```python
import "std/core.s"

def inc(nat x, blank|1|2 inc)
    if inc is blank  # check if exists - see next section
        inc = type 1 # literal convertible
    return x+compiler:literal inc

def main()
    print inc 0           # prints 1
    print inc (0, type 2) # prints 2
```

Check whether a variable belongs to a
literal type by performing the `is` check to obtain
a boolean value. Contrary to the zero-cost conditional 
compilation of the next section when using `is` with 
inferred types only, literal types may be resolved
to several runtime checks.

```python
import "std/core.s"

def enum = "A"|"B"|"C"
def answer_schemas(enum first, enum second, nat minutes_to_answer)
def answers(cstr first, cstr second, nat minutes_to_answer)

def main()
    answers = answers("A", "F", 60)
    if not answers is answer_schemas 
        print "not a valid answer" 
        fail "not a valid answer" # this will fail
    print "answered: "
    print answers.first
    print answers.second
    print ("in", " ")
    print (answers.minutes_to_answer, " minutes\n")
```

## conditional compilation and default arguments

*Info: In conjunction with the type system, this feature creates zero-cost condition checks for concise creation of multiple definitions.*

You can use the `[value] is [type]` operator to check that a value/tuple
adheres to at least one variation of a union. When no literal types are involved
(and sometimes when they are), the result is not merely a boolean, 
but in fact of type `compile:true` or `compile:false`;
these values are significant because they let *smoλ* identify 
whether conditions will always be true or false and **eliminate code without parsing it**.

In other words, you can make `is` checks to determine conditionally which code
segment to compile. This incurs *zero* runtime overhead. 
At the same time, you can mingle them together with other condition checking,
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
variables are considered blank, so that blank arguments can typecheck
to their type correctly. In the end, you define **optional arguments**
and their fallback values. In the next example, the defined function uses 
either an increment value of one, or a value provided as second argument. 

```python
import "std/core.s"

def inc(nat x, nat|blank value)
    if value is blank
        value = 1
    return x+value

def main()
    print inc 2    # prints 3
    print inc(2,2) # prints 4
```

Here is a much more complicated scenario, where `compiler:skip()` 
prevents certain versions of the function from being
created (e.g. there is no `inc(float,int)`). The example also shows 
two type inference constructs: 

- Obtain functions among alternatives `T` that could have produced value `x` (can be a tuple) per `type T->x`. This is a specialization of the `type T` syntax, which itself is a more verbose way of writing `T` but also works with literals without devolving them into values. The alternatives are needed because the language allows structural typing, meaning that there is not necessarily a unique way to infer a function from its output structure. For example, `type Num->x 1` can be used to cast the value 1 to the same number format as the variable `x` by calling one of the functions in the `Num` union that would output the same output as the variable. The same pattern could have been used to also run an appropriate string-to-number converter like `type Num->x "1"`.
- Compare against the exact structural type of `x` (that can be an expression) use `value is type x`. This is a short-circuit for a different compilation branch and is always inferred at compile time.
  
In total, the compiler investigates 3*4=12
variations and eventually keeps 6 of them. Both conditional checks in the example
zero-cost abstractions in that they never occur during execution.

```python
import "std/core.s"

def Num = float|int|nat
def inc(Num x, Num|blank value) # equivalent: def inc(float|int|nat x, float|int|nat|blank value) 
    if value is blank
        value = type Num->x 1 # one with the same number format as x
    if not value is type x
        compiler:skip() # skip invalid 'inc' definitions
    return x+value

def main()
    print inc 2.0  # prints 3.0
    print inc(2,2) # prints 4
```

# Section 2. Safe Resources

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
by not providing the mutable buffer declaration per `buf = alloc 4`.
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
and `mutget` functions, though beware that details do involve pointers. 
Use `buffer[pos] = value` to copy some data on a buffer's element.

All buffer indexes are of type `nat`, which represents natural numbers 
(non-negative integers). Here is an example of buffer usage.

```python
import "std/core.s"

def main()
    buf = mut float[]
    buf.alloc(10)
    print buf[0]  # prints 0, as buffers are zero-initialized
    buf.resize(10)
    buf[1] = 1.0
    print buf[1]
```

Declare a buffer as `const` to disallow any modifications to its
contents. Normally, buffers merely prevent resizing or allocation
(unless they are `mut`), but "locking" them underneath a constant
safeguard can improve performance and bring code safety.

## pointers

*Warning: This subsection describes advanced functionality that is not necessary for common or introductory language usage. You can skip it.*

Pointers reference specific memory locations in buffers. Use them 
to quickly move data around while sharing only one memory address. 
Pointers are unstable in that, for safety, they become invalid whenever 
any buffer is resized. Being invalid means that they can not be read 
from or copy data to them. This holds true mainly for safe pointers
used in practical use. New C resources can added using unsafe pointer
semantics that will be covered in a future section about C extensibility.

Obtain a `const` pointer from a buffer whose
pointed memory location cannot be modified per `ptr = buf[element]&`, and
a `mut` pointer per `ptr = buf[element]&&`. Constness means that pointer
contents cannot be overwritten.

`ptr..` dereferences pointers onto local objects. 
For example, `ptr...field` gets a field from an object stored 
in a pointer by following up the dereferenced data with field
access notation. Move values onto pointed locations
of mutable pointers per `ptr << value`. Given all these operators
it is now possible to explain that `buffer[pos]=value` desugares 
to the pointer notations `buffer[pos]&&<<value`.

*Smoλ* makes some checks on pointer safety. As it would be too cumbersome 
to granularly impose such safety using the type system, there is only one main rule:
**pointers are invalidated if any memory is resized, moved, or freed**. This
rule is introduced by the memory manipulation functions of the standard library.

Mainly, the type of data stored on pointers
is checked for consistency. Invalidated pointers (for example whose
data have moved in memory by modifying a buffer) cannot be used. 
Functions declare pointer arguments per `any ptr`, `float ptr`, etc.
Below is an example.

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

If, in the above example, a new line 
`buf.resize 2` was applied before the
last two prints, `element` would become invalidated and the code would
need to re-obtained it from the buffer. Use references to avoid such 
scenarios and, in general, try to work with buffers and only use pointers
for rapidly moving temporary data around.


## substructures

*Warning: This is an advanced feature, mainly useful for iterating through complicatedly packed data. You can skip it.*

You can work with "horizontal" data from buffers and pointers by
obtaining or setting to specific items. However, you can also
work with "vertical" data by being able to obtain sub-buffers
or sub-pointers for their fields.

The method to do so is by using the `buf@field` or `ptr@field` notation, 
where the field refers to a known field of the attached structure. This
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
    points = (mut Point3D[]).alloc(10)
    points[0] = Point3D(1.0,2.0,3.0)
    plane = points@plane # can move this around
    print plane@x[0]
    print points[0].plane.x # equivalent data path
```

## stable references

You can work with data that reference other data
in that they are updated together. This is similar
to pointers, but comes under some safety 
restrictions in that you cannot change where references
point to, even with `mut`.

At the same time, references are dissolved during
returns into actual values that are not automatically
updated together anymore - though safety checks are
still performed.

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
by analyzing direct input-output equalities. That is,
it is tracked which inputs are returned directly
by being assigned to output variables of function calls,
and therefore references to the inputs
become equivalent to references to the outputs.

This allows the compiler to re-attach valid references to
invalidated data structures when those change to something 
valid. For example, resizing a buffer invalidates its original
content address pointer, but since the value is returned 
and assigned on the same variable, the new address is
tracked instead.

There will always be proper inference for direct equalities as
long as these are not deliberately invalidated (e.g.,
by adding zero) and do not pass through unsafe C sections.
The compiler also always creates error messages instead of 
triggering unsafe behavior.

Notably, references are not types but just some
property attached to local variables to indicate
that the compiler should enforce safe usage. 
Below is an example, where a list is used
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


## try and fail

Functions in *smoλ* can fail freely when unforeseen conditions are encountered,
for example when running out of memory. When failing functions are called by
others, the failure cascades until the whole program terminates.

Failure means that all resources are released and return values become zero.
Often there will be no opportunity to do anything with those zero values,
however, as failures cascade and cause the caller to fail and then the caller's
caller and so on. Mutable arguments are left unaffected on failure too. 
You can manually `fail` like so:

```python
import "std/core.s"

def always_fail()
    print "we are failing"
    fail "we failed!"

def main()
    always_fail()
    print "this line is never printed"
```

Propagating failures is done in the spirit of writing concise but well-controlled code.
**Don't care about failures. Unless you must.** That is, assume correct execution,
as if you were scripting, and only handle failures at places where they can be handled
safely or where they would be critical. If it is important to ensure that 
a function does not fail up to a certain point, place the `debug:nocatch()` 
assertion. There are various other compiler assertions too, which are covered later.

```python
import "std/core.s"

def main()
    try x = alloc KB 4  # buffer of chars
    try x[0] = char "a" # still needs a try for buffer elements - though checks can be optimized away
    try print x[0]
    print "this must run at all costs"
    debug:nocatch()    # error if without 'try' on all PREVIOUS calls that could fail
    print x[10000]      # allowed to fail now
    print "this will never run due to out of bounds error"
```

There are certain places in code where you may want to recover from call failures,
for example by calling the same code again for improved user input, or by
falling back to some secondary functionality. This is achieved with the
`try` keyword. That parses an expression without stopping at the first failing functions, 
if any. Stressing again: this intercepts the
first error of an *expression* not a whole block of code. 

You can fail only once within a try
and the compiler will complain for multiple failures. This is done so that each prospective
failure is split among multiple declarations to avoid ambiguity of how error handling takes
place. For example, you can handle each error differently.
Create and call helper methods to compartmentalize error-prone code chunks and handle
their failure all at once. See later for how to reconstruct and handle specific error codes.

Finally, returns from failing
functions are just zero-initialized, but `try` has a boolean outcome that shows whether
an error is intercepted. Below is an example that safeguards against failing allocation.

```python
import "std/core.s"
import "std/array.s"

def vector(nat size)
    return (mut float[]).alloc size

def main()
    if not try v = vector pow(1024,6)
        print "failed to allocate"
    print(len v, " numbers allocated\n")
```

Since failure is a fast abstraction in *smoλ*, it is also the preferred syntax for 
iterators reaching their end. Below is an example, where all standard library iterators
follow the same pattern for terminating loops and you should try to reuse in your code.

```python
import "std/core.s"

def main()
    it = range 5
    while try i=next it
        print i
```

## defer

You can defer code blocks to run later. The "later" part is
ideally the end of the current function, but *smoλ* may
postpone it further to accommodate resources (e.g., buffers) 
that are still in use. That is, defers are returned alongside
function data they are refer to, and are called at the calling
site. The compiler complains if some but not all variables 
involved in a defer block are returned.

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

Defers can be forcefully executed while invalidating a
structure. This is done with the `del` keyword. For
example, this is typically used to close resources like
open files and processes.

```python
import "std/core.s"
import "std/io.s":process as process

def main()
    proc = mut process:read "echo \"hello world!\""
    del proc # runs the process's defer, which waits for completion
    print "bye!"
```


## catching errors

The `compiler:catch()` function provides the means of retrieving
an error code intercepted by `try` statements. This function creates
an error itself if it *fails* to find an error. To avoid confusion, the
compiler just mandates that you should wrap the catch function inside a `try` 
of its own. This way, you can obtain the error and check that it exists
simultaneously.

```python
import "std/core.s"
import "std/io.s" as io

def main()
    try print 2*3-20 # nat cannot become negative
    if try error = compiler:catch()
        print "cannot substract two nat numbers and obtain a negative result"
```


The same function also clears the intercepted error code so that the next call 
captures only subsequent messages. Caught errors can be compared for equality and
converted to strings per `cstr error`.

Errors are not retrieved when intercepted within called functions.
But, importantly, they *are* obtained from deferred statements triggered by 
`del`. The next snippet demonstrates how to clear errors and check on them.


```python
import "std/core.s"
import "std/io.s":process as process

def bye_error()
    fail "bye!" 

def main()
    proc = mut process:read "echo \"hello world!\""
    try bye_error()
    del proc

    if try error = compiler:catch()
        print cstr error # prints 'bye!' if no process error
        fail error       # can fail with error codes too
```


## effects

No, don't run!

*Smoλ* deliberately avoids a complicated effect system; it just presents the ability to pass
some arguments implicitly from the calling scope. In the standard library later, this mechanism
is mainly used for passing memory allocators around. 

Basically, you can have the `effect` keyword before an argument in a function's signature to
declare an effect. There is no other difference in how you would write or call the function.
You only get one additional benefit; the compiler will try to pull variables with the same name 
from the calling scope. Effects can only be placed at the start of funtion, and gathered
scope variables will be placed there too. 

Below is an example. Do avoid using effects when not needed for clarity, as they introduce calling complexity.

```python
import "std/core.s"

def inc(effect nat increment, effect mut nat counter, nat number)
    counter = counter+1
    return number+increment

def main()
    counter = mut 0
    increment = 1
    print inc inc inc 9  # prints 12
    print counter        # prints 3 ('inc' was called three times)
```


## debugging tools

*Warning: This subsection covers debugging tricks and is better suited for advanced readers. You can skip it when working in small projects.*

So far there was mention of `compiler:skip()`, 
`compiler:catch()`, `compiler:literal(expression)` and `debug:nocatch()`
that let code interface with the compiler to an extend.

There are some more mechanisms that help inspect
programs or grant access to internal compilation state that
can be analyzed for debugging.

Foremost of debugging tools is `debug:print(expression)`. This 
runs an expression, prints its return at compile time, 
and returns its value. It works this way so that it can 
be effortlessly interweaved in code. Do note that you
can use it with literal types to print messages too.
For example, one pattern usable for debuggining is the following.

```python
import "std/core.s"

def main()
    s1 = str "s1"
    s2 = str "s2"
    debug:print type "--- main ---" # prints '"--- main ---"' at compile time
    s = debug:print (s1,s2)         # prints 'const str, const str' at compile time
    print s # ERROR due to undefined print, but the above still prints
```

Finally, assert that a specific point in a function does not lie within a loop
or condition with the `debug:branchless()` check. This helps form sanity check within 
conditional compilation conditions, ensuring that
they are not accidentally evaluated at runtime. The next example uses it to verify that 
there is no runtime overhead from a particular comparison involving enums.

```python
import "std/core.s"

def test1(nat a, nat b, "one"|"two")
def test2(float a, float b, "one"|"two")

def main()
    a = 1
    b = 2.0
    c = "one"
    test = (a,b,c)
    if not test is test1|test2
        debug:branchless()
        debug:print type "invalid data" # literal type to print the message instead of 'cstr'
```

## bounded compute

*Warning: This subsection touches on the theory of bounded computations and will be expanded upon once some alternate language runtimes are introduced.*

Much much earlier in this document, recursive functions were discussed.
With full knowledge of *smoλ*'s abilities, it can now be asserted that
it is not meaningless to guarantee a return statement type.

Even infinite recursive loops might be merely *unbounded* due to some termination
failure. In fact, it can be argued that all such loops would be bounded by compute
resources and available running time, given that they run on finite computers.

The snippet exemplifies this by adding a recursion safety
mechanism as an effect. This mechanism is still rough, but the language marks 
all recursive functions as potentially failing. This way, future versions can have 
platform-dependent error codes for unbounded recursion that exceeds system resource limits.

```python
import "std/core.s"

rec wooo(effect range recursion_safety, nat i)
    next recursion_safety
    if false return blank() # do not return anything
    return wooo(i+1)

def main()
    recursion_safety = range(1000)
    try wooo 0
    if try error = compiler:catch()
        print cstr error # prints 'iteration end'
```




# Section 3. Standard Library

## lists

Manage buffers by adding push and pop operations, as well
as a capacity-based growth strategy. This is done by calling the 
`list` function on a mutable buffer or -preferably- on a reference 
of a mutable buffer like the following example. List elements are accessed like 
buffers, and there exists a `push` function that grows the list by
one place while returning a pointer to the last element.

```python
import "std/core.s"

def main()
    li = list ref mut float[]
    (push li) << 0.1
    (push li) << 0.1
    (push li) << 0.1

    li[1] = 0.2
    print li[0]
    print li[1]
```

## strings

The standard library provides the `str` structural type for representing
strings by combining character buffers (at least their addresses), 
an offset within the buffer where the string starts (more stable than using a pointer), 
its length, and its first character for fast cache-friendly comparisons; that is `\0` for empty
strings.

`cstr` data are trivially castable to strings. 
Below is an example, where printing is also implemented for
strings. Theoretically, this extracts the size and first
character too, but such data are ignored if not needed.

```python
import "std/core.s"

def main()
    print str "hello world!"
```
You can convert string contents to numeric types. 
This creates errors on failure.

```python
import "std/core.s"

def main()
    print float "123"
```

Strings can be copied on a pair of buffer and mutable position inside it `char[], mut nat`.
This structure is used a lot when creating buffers for memory management.
Thus, for more compact code, the structure can be constructed and initialized to start from the zero 
position with the `bufpos` (buffer-position) function.

```python
import "std/core.s"

def main()
    buf = bufpos alloc KB 4 # equivalent to buf = (alloc KB 4, mut 0)
    s = buf.copy "hello world!"
    print s
```

Also copy strings on buffers managed by lists.
DO use `ref` for stability, as potential list resizing
could invalidate the pointer where the string thinks the buffer starts,
and the compiler would correctly point that out and refuse to progress
on an erroneous program.

```python
import "std/core.s"

def main()
    buf = list ref mut char[]
    s1 = buf.copy "hello world!" # would have been invalidated if we did not use `ref`
    s2 = buf.copy "hello world!"
    print s1
    print s2
```

## maps

There are some useful hashing utilities under *std/hash.s*, which culminate to implementing hashmaps 
under *std/map.s* with string-valued and nat-valued
keys. These two key types cover most useful scenarios, especially given that
the standard library offers the ability can serialize data as strings or -for smaller
structures- as bits. Map values can reside on any buffer.

The empty string or zero are stored in the first positions of maps and are considered
always-presented. For now, map size is fixed. Place contents and iterate through map keys 
like below. Map initialization takes any allocated buffer and creates a similarly-sized map.

```python
import "std/core.s"
import "std/map.s"

def main()
    map = strmap alloc(mut str[], 128)
    map["hello"] = str "hello world!"
    map["manio"] = str "it's a me, manio."
    print map["hello"]
    print map["manio"]
    
    it = bufpos map.keys
    while try key=next it
        print key
```


## io

There are several means for textual input and output through the console
and the file system. Examples below mostly use `cstr` arguments, but `str`
arguments are fine too. In the last case, if strings are not null-terminated
and the buffer holding them does not have a trailing null character to
pretend that they are null-terminated, a copy may be made.

Read a file by opening it and iterating line by
line, like below. This needs a `char[]` buffer on which to store (temporary) lines,
although you can save yourself a `copy` and pass a mutable position as a second 
argument to directly read on the buffer and progress the position.

```python
import "std/core.s"
import "std/io.s":file as file

def main()
    f = file:read "README.md"
    mem = alloc KB 4 # max 4 KB chunk size, on char[] by default
    while try line = file:line(mem, f)
        print("|", "")
        print(line, "")
    print ""
```

Similarly, create a file for writing like below. Can also delete it.

```python
import "std/core.s"
import "std/io.s" as io

def main()
    f = io:file:write "tmp.txt"
    f.print "hello world"
    defer 
        io:dir:remove "tmp.txt"
```

Above was a first introduction to the `dir` namespace for directory 
operations. Below is how to iterate through directory contents.

```python
import "std/core.s"
import "std/io.s":dir as dir

def main()
    dir = mut dir:read "."
    buf = alloc 128
    while try entry=dir:entry dir
        print(entry, " ")
        if dir:is_file entry
            print "file"
        else
            print "dir"
```

## processes

Processes can also be read similarly to files. To begin with, a blocking system process
that fails on non-zero error code can be evoked like below.

```python
import "std/core.s"
import "std/io.s":process

def main()
    success = try system "echo \"hello world!\""
    print success
```

One can also open and communicate with running processes.

```python
import "std/core.s"
import "std/io.s":process as proc

def main()
    process = proc:process "ls"
    buffer = bufpos alloc KB 4 # example with growing position
    while try line=buffer.proc:line process
        print line
```

Equivalently, manually release the process to wait for its conclusions.
Recall that running processes can create errors, while resource release
code may intercepts those errors with `try` so that
they can be retrieved with `compiler:catch()`. 
To repropagate or otherwise
handle the intercepted errors, use a pattern like below.

```python
import "std/core.s"
import "std/io.s":process as proc

def main()
    process = proc:process "ls"
    del process
    if try error = compiler:catch()
        fail error # can fail on error codes too
```

## random

*Info: This subsection is under construction.*

```python
import "std/core.s"
import "std/rand.s" as rand

def main()
    rand = mut rand:Rand()
    print next rand
```

## mini and bits

*Warning: This subsection covers low-level functionality that may not be immediately useful. It can be skipped.*

Here are some concepts about bitwise manipulation and type size awareness.

Bitwise manipulations of `nat` data are made available from the standard library's core.
To ensure that semantics are not mistaken, you need to convert to and from a `bits` data
structure. For example, here is a (non-cryptographically-secure but usable) hash function for strings.
Floats and ints can also be converted to bits.

```python
def hash(str k, nat size)
    h = mut 5381
    iter = range len k
    while try i = next iter
        h = h.bits().lshift(5).nat() + h + nat k[i]
    return h.mod size
```

Sometimes, it is useful to store arithmetic data in more compressed formats.
The default builtin types (float, nat, int) consumed 64 bits of storage 
but there are some variations, namely float32, nat32, nat16, nat8, int32, int16, int8.

The *std/mini.s* namespace provides conversions from 64-bit to narrower types.
To ensure semantic safety and no information loss, 
the standard library does not provide arithmetic operations for these operations,
and they should be converted to and from the more expressive types. Errors are created
if the conversion would overflow in number magnitude.

The same namespace also provides a string variation that is stored in buffers of up
to `65535` length and elements, hereby consuming 12 instead of 25 bytes per element
when organized in a string buffer.

```python
import "std/core.s"
import "std/mini.s" as mini

def concat(mini:str[] buff)
    mem = bufpos alloc KB 4
    iter = range len buff
    start = mem.pos
    while try i=next iter
        mem.copy mini:unpack buff[i]
        mem.copy " "
    return str(mem.buf,start,mem.pos)

def main()
    buff = (mut mini:str[]).alloc 6
    debug:print buff # print the buffer type during compilation
    buff[0] = mini:str "hi"
    buff[1] = mini:str "my"
    buff[2] = mini:str "name"
    buff[3] = mini:str "is"
    buff[4] = mini:str "manios"
    buff[5] = mini:str concat buff
    it = range len buff
    while try i=next it
        print (i," ")
        print mini:unpack buff[i]
```

## vectors

*Info: This subsection is under construction.*

```python
import "std/core.s"
import "std/vec.s"

def safe_main()
    allocator  = ref (mut float[]).alloc(200).circular() # used by vector operation effects
    allocator2 = ref (mut float[]).alloc(200).circular() # useless 
    v1 = vec 10
    v2 = vec 10
    v1[0] = 1.0
    v2[0] = 2.0
    
    it = range 5
    v = mut vec 10
    while try i=next it
        v = 2.0*(v1+v2+v)
        #v = allocator2.mul(2.0, v1+v2+v) # THIS WOULD CREATE AN ERROR
    print v[0]
    
def main()
    try safe_main()
    if try error=compiler:catch()
        print cstr error
```