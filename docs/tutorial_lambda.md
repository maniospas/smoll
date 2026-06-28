<h1>Lambda calculus sm<img style="width:1.5rem" src="smoll.png"></img>λ</h1>

<div class="toc" markdown="1">

**Contents**<br>
[functions](#functions) <br>
[functors](#functors) <br>
[literals](#literals) <br>
[error handling](#error-handling) <br>
</div>

## functions

*Warning: This tutorial assumes a certain level of programming expertise.*

Functions in *smoλ* are defined like below, where a program's entry point is the 
*main* function. Notice`CLI = edit console()`; the `edit` identifier tells us that 
we will be actively modifying the console's contents (by reading and writing to it).
Lambda calculus focuses on immutable computations, however, and we will not spend time
in the mutability system. The only thing to stress is that
`CLI` is an *effect* that is automatically passed to called fuctions needing it, 
such as `print`. There are no other complicated hidden behaviors for effects,
and they are in CAPS by convention. 
The `CLI` effect is also a *singleton* in that only one can be created in your program.

```python
# our program - this is a line comment
import "std/core.s"

def greet(effect edit console CLI)
    print nn "hello " # adds an empty string instead of new line at end of print 
    print "world!"

def main()
    CLI = edit console()
    greet()
```

Omit parentheses for one function argument. You can also pipe the first
argument into the function with the dot notation, like below. Finally, function
returns can be tuples (enclosed in parentheses and comma-separated) 
and are treated as structural types. You can treat a function return
as a nominal type that can not be matched to the outputs of other functions
via the `class` notation. Retrieve results with the dot notation too.

```python
import "std/core.s"

def employee(str name, str surname, nat age)
    return class(name, surname, age)

def is_of_age(employee self)
    return self.age>=18

def main()
    CLI = edit console()
    mario = employee(str "me", str "mario",  25) # str converts cstr in quotations to strings
    print mario.is_of_age()
```

## functors

Function arguments are comma-separated and have the form of some optional mutability
modifiers followed by a type and an optional (though typically present) variable 
name. The type itself can be of the form `type1->type2` to declare a **functor**
that takes as inputs arguments of `type1` and yields arguments of `type2`. Functors
can be supplied with arguments to yield a result using the `compiler::call` builtin
helper function. This executes the functor eagerly.
Conversely, to create a functor from a function name, use the `type`
keyword. Next is an example.

```python
import "std/core.s"

def pair(nat,nat)  # no function body assumes that arguments are returned
def next(nat x, pair->nat addition)
    return addition.compiler::call(x,1)

def adder(nat x, nat y)
    return x+y

def main()
    CLI = edit console()
    print 5.next type adder # prints 6
```

We may want to use the `add` function defined for natural numbers in the 
standard library, but there are several overloads for various numbers and
its `type` would not be unique. Specialize on required argument types using
the `<...>` notation to enclose a valid input signature. Like below.

```python
import "std/core.s"

def pair(nat,nat)
def next(nat x, pair->nat addition)
    return addition.compiler::call(x,1)

def main()
    CLI = edit console()
    print 5.next type add<nat,nat> # prints 6
```

## literals

Functors can be more complicated, for example in the form of `nat->nat->nat`,
which corresponds to `nat->(nat->nat)`; unless operators are arithmetic ones, 
they are resolved left-to-right. This type suggests the ability to dynamically
generate functions of the form `nat->nat` given an input natural number. However,
*smoλ* does *not* allow dynamic memory management overheads. Instead, corresponding
functions can select between functors defined at compile time.

Such functors can still have some tracked arguments, but these need to come from
a well-controlled selection. This lets the type system resolve everything with
zero-cost abstractions and function pointers under the hood. Below is an example.

```python
import "std/core.s"

def next(nat->nat->nat addition_generator)
    return addition_generator.compiler::call 1

def add1(nat x) 
    return x+1
def add2(nat x)
    return x+2
def add(nat y)
    if y==1 return type add1
    if y==2 return type add2
    fail "unaccepted number" # interceptable runtime error

def main()
    CLI = edit console()
    successor_function = next type add<nat>  # filter out add functions from the standard library
    print successor_function.compiler::call 5 # prints 6
```

This code has a lot of repetition, which would only grow if
we considered more cases. But we can use *smoλ* literal types
to simplify it; those are types that correspond to specific 
literal values. Next is an example, where `1,2` at the
place where types are expected create literal types, and the 
vertical dash `|` shows type alternatives. The builtin
`compiler::value` retrieves back a value from a literal type.

```python
import "std/core.s"

def next(nat->nat->nat addition_generator)
    return addition_generator.compiler::call 1

def add(nat x, 1|2 value) 
    return x+compiler::value value

def add(nat y)
    if y==1 return type add<nat,1>
    if y==2 return type add<nat,2> # THIS CODE FAILS RIGHT NOW
    fail "unaccepted number" 

def main()
    CLI = edit console()
    successor_function = next type add<nat>
    print successor_function.compiler::call 5 # prints 6
```

The above code makes a lot of sense for us humans, but the compiler
would complain that `add(nat y)` has mismatching return types. The
reason is that literal types persist in the type system, even if incur
no runtime cost. However, you can strip away the literal type information
from functors using the `compiler::abstract` function.


```python
import "std/core.s"

def next(nat->nat->nat addition_generator)
    return addition_generator.compiler::call 1

def add(nat x, 1|2 value) 
    return x+compiler::value value

def add(nat y)
    if y==1 return compiler::abstract type add<nat,1>
    if y==2 return compiler::abstract type add<nat,2>
    fail "unaccepted number" 

def main()
    CLI = edit console()
    successor_function = next type add<nat>
    print successor_function.compiler::call 5 # prints 6
```

We are starting to generalize. As a last feature,
we also use a variation of the `for` loop (which has typical syntax `for var in iterable`)
that instead iterates across several literals or functors. 
Let us also name a union type `Increments` of acceptable increment
values using the `def name = ...` syntax for defining 
types instead of functions.


```python
import "std/core.s"

def next(nat->nat->nat addition_generator)
    return addition_generator.compiler::call 1

def increments = 1|2|3|4|5
def add(nat x, increments value) 
    return x+compiler::value value
def add(nat y)
    for increment is increments
        if y==compiler::value increment
            return compiler::abstract type add<nat,increment>
    fail "unaccepted number" 

def main()
    CLI = edit console()
    successor_function = next type add<nat>
    print successor_function.compiler::call 5 # prints 6
```


## error handling

The above code has an explicit failure mode if a value not
in `increments` is provided. Actually, the failure mode
is optional because unset variables (the returned value here) 
are zero-initialized, whereas proper runtime errors are created
for unset "null" function pointers implementing the functors.
All functor calls can potentially fail due to non-existence.
That said, failures are handled gracefully, without memory leaks
or use-after-free.

One can actually test for errors in *smoλ* at any point, as they cascade
upwards in the call stack. Below is an example, where `try` encloses
potentially failing expressions. For clarity, you are not allowed to `try` 
on an error-less expression. There are also some accompanying builtin functions 
that provide more advanced diagnostics, like `compiler::catch` to retrieve
error codes and descriptions afterwards, but these are not the subject
of this tutorial. Only note that `try print successor_function.compiler::call 5`
would print *0* because try forcefully tries to implement every declared function
call, substituting failures with zero-initialized values.

```python
import "std/core.s"

def next(nat->nat->nat addition_generator)
    return addition_generator.compiler::call 10 # will return a "null" functor

def increments = 1|2|3|4|5
def add(nat x, increments value) 
    return x+compiler::value value
def add(nat y)
    for increment is increments
        if y==compiler::value increment
            return compiler::abstract type add<nat,increment>

def main()
    CLI = edit console()
    successor_function = next type add<nat>
    if try ret = successor_function.compiler::call 5 # fail to call the "null" functor
        print ret
    else
        print "failed"
```

In general, consider errors to be exceptional runtime modes and only handle them
at critical points of the business logic, for example that allow restarting
user workflows. In the context of both lambda calculus and implementation of
other functionality, freely create failures but treat all code as a hot path, 
and do not worry about error escape hatches unless you have an opportunity for 
redirecting control flow.