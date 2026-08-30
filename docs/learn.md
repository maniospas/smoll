# Learn

We will cover the basics of *smoλ* here. This covers the few features that are responsible
for most code written in the language. Find a complete list of 
concepts in the <a href="reference.html">reference guide</a>.

### hello world!

Our first program consists -traditionally- of printing a greeting statement.
We use the `repo` instruction to tell the language that it should automatically download
code under *std/* from a corresponding web URL (download code is stored in a *.cache* folder).
Following examples will not have this command for brevity.

Then, the program imports the standard library's collections of basic yet useful functions, 
and defines a `main` function to serve as the
entrant point of our program. The function's body is indented, which is how
the language tracks code blocks.


```python
repo "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/std/" as "std/"
import std.core

def main()
    CLI = edit console()
    print "hello world!"
```

The program above defines `CLI` as a variable that can edit the console.
It then calls the `print` function with a string greeting in quotations. 
This function automatically grabs the `CLI` variable by name from the calling
context; this is called an *effect* and covered later.


As *smoλ* is compiled, there is a great deal of difference on whether strings
are string literals known during compilation -we call these `cstr`- or dynamically
generated strings that appear during runtime. To convert this string into a runtime
string type called `str` just call a namesake function like below.


```python
import std.core

def main()
    CLI = edit console()
    greeting = str "hello world!"
    print greeting
```

We have sneakily introduced the concept of variables too, by storing the
string value on a variable called *greeting*. A different `print` function
is also used for the string type, but the code largely looks
the same. Do note that the language recognizes `str` as known during
compilation and thus ensures that the created program
becomes equivalent to the first one without needing memory allocation. Yet.

### numbers

Before continuing with strings and how they can be created -and manipulated- 
dynamically, let us skim over some more basics. First: numbers. Usually you will
use one of `float`, `int`, `nat` that use 64 bits to correspondingly represent
floating point numbers, integers, and natural numbers. Natural numbers
are also known as unsigned integers or non-negative integers if you are more of a math person.

*Smoλ* takes a principled stance of not allowing you to mix these types unintendedly,
because this is how bad things happen in compiled code (like *1.0* not having the same bit
representation as *1*). To begin with, you can declare floats by writing a decimal 
number like `1.0` and natural numbers by writing them without decimals like *1*. You cannot
represent integers and need to convert with them from the other types. This is deliberate
because natural numbers are used for a lot of stuff in programming with regards to indexing
memory; their usage makes some nice optimizations possible while staying safe.

Below is an example that uses different numbers, as well as some basic arithmetic
operations on those. Convert number formats to 
others (as well as from `cstr` and `str` data) by using the number type as a function. 
We still need to import the standard library's core because this
is where those operations are implemented - you can even make your own version of all
operations by interweaving C code in there (we will not cover how in this tutorial)! 
By the way, text after `#` are line comments and ignored.

```python
import std.core

def main()
    CLI = edit console()
    print 1.0+2.0-3.0    # prints 0.0
    print 1+2
    int_zero = int 0
    print int_zero-int 1 # prints -1
    print 1+nat "2"      # prints 3
```

## conditions and loops

There are `if-else` conditional statements to change what is being
executed based on a condition. Conditions evaluate to a `bool` type.

```python
import std.core

def main()
    CLI = edit console()
    x = 1.0-2.0
    if x<0
        print "x is negative\n"
    print "done\n"
```

Loops either have the form `while condition body`, which looks
similar to conditions, or an iterator-based form shown below. Parentheses are 
optional when passing one argument to a function, which allows us to
construct a natural number range, which normally takes exactly two arguments,
by calling the `of` function to construct a range from `0` to `10` (non-inclusive).

```python
import std.core

def main()
    CLI = edit console()
    for x in range of 10
        print x
```

The `of` function supports various range constructions that 
make code more explicit. Next are some patterns that use 
a concept called literal keywords *to, upto, len* for explicitness.
(See the [reference guide](reference.html) on how to define such
keywords for your own functions.)

-  `range of 10` becomes `range(0,10)` 
-  `range of (1 to 10)` becomes `range(1,10)` 
-  `range of (1 upto 10)` becomes `range(1,11)` 
-  `range of (2 len 10)` becomes `range(2,12)`


## errors

Since we are still talking about numbers, it is a good time to also talk about errors, like division by zero.
Ok, we will ignore floats where division by zero is well-defined, and consider expressions like `1/0`.
Functions -division in this case- can fail freely and you should not bother too much about that, 
unless you know of a way to recover from failure or need to do something special. You will never leak
resources from failure (e.g., memory leaks, unclosed files), so you can continue with your program like 
normal wherever errors are handled. For example, one error is natural number subtraction that would create a 
negative.

To check whether an expression has any errors, start it with `try`. The outcome is a boolean value
that can be checked for success, for example in a condition. Otherwise, errors cascade in the
call stack, until they are intercepted from some caller. Erroring is safe in that it does not
leak resources by automatically releasing them. At worst, your whole program will terminate
safely.

```python
import std.core

def main()
    CLI = edit console()
    value = 0
    if not try result=0-1
        print "failed to decrease"
    else
        print result
```


### tuples and functions

Place expressions in parentheses to make functions call only those,
for example per `print int(0)-int(1)`; if one wrote `print int 0-int 1`,
it would be interpreted per
`print(int( 0-int(1) ))`, and the compiler would complain that an *int*
cannot be subtracted from a natural number in the middle.

In general, all functions accept one argument and parentheses are just a means of defining tuples, which
is what we call sequences of a fixed number of values with potentially different types. Up to now, 
we basically used tuples of one element, where parentheses are not usually needed.

But functions may require several inputs too! In that case, pass to those functions a tuple of 
those arguments. For example, given that all `print` versions allow an optional second `cstr` argument to
use instead of the line break character, you can do the following.

```python
import std.core

def main()
    CLI = edit console()
    print nn "hello " # 'nn' creates the tuple ("hello ", "") to avoid newlines
    print "world!"
```

## strings

We will now try to perform some string manipulation, starting with what you
are probably most curious about: concatenation. This requires that we (actually, the
compiler) allocate some memory where the result should be placed. The schema
for memory management is defined via *allocators*. The simplest allocator for
character data is `new()`: it just creates new memory as needed, like below.
Do note that allocators are also effects so that you don't need to keep passing
them as arguments.

```python
import std.core

def greeting()
    CHARS = new()
    return "hello "+"world"

def main()
    CLI = edit console()
    print greeting()
```

The above snippet is deceptively simple in that *smoλ* tries its best to not
annoy you with the conditions required for memory deallocation. In particular,
it *defers* releasing the allocated memory back to the operating system
to a later point, where the outcome of `greeting()` is no longer used. To see
this, mouse-over the greeting function's name if the language's LSP is enabled,
or run `./smoll main.s --docs` to export documentation for all functions 
involved in the program. The function's documentation would look like this:

```python
(abstraction 0-8, ssa vars 9, size 37)
greeting() -> (str)

Potential errors:
10. allocation failed

Returned values defer use of the following functions:
free(mut any ptr) -> ()
```

There are some complexity details at the top, a signature showing that
a string is returned, unhandled errors, and finally a message at the bottom 
explaining that some memory free operation is deferred for later.

**Question:** Why would anyone need anything else than a `new()` allocator if it's so
smart? 

**Answer:** Speed, as small allocations can be quite costly, and it's not so smart in some cases.
For example, the following snippet cannot compile:

```python
import std.core

def greeting()
    CHARS = new()
    return "hello "+"world"

def main()
    CLI = edit console()
    a = 1
    b = 0
    if true
        message = greeting()
        print a-b
    else
        message = greeting()
        print 0
    print message  # ERROR MESSAGE: the variable message.unsafe_ptr could have been invalidated due to line 9
```

The error message lets us know that the *message* resource was created within a condition or loop
that starts line 9; resources are released and subsequently invalidated when exiting that condition or loop
in which they are defined.
This guarantees the absence of memory leaks or double frees. In this
particular case we humans can reason that something is allocated in both cases. 
The trap is that we can rarely reason adequately well either!!! For example, even here,
we could forget to account for error handling! 

The trick is to either move the common code outside the conditions or, if not possible, use another
allocator. This brings us to arenas and circular buffers. Arenas are memory regions of fixed size
that are gradually used until full. Circular buffers are arenas that overwrite previous values from
the start once full. Here is the above snippet using an arena. 

In the snippet below, the `arena` type may not refer only to character regions in memory;
in normal code such abstractions are disambiguated, but the *greeting* function would try -and fail-
to erroneously use any arena as an allocator, even those that are defined for non-character data types.
Thus the syntax `char_allocator^arena` is used to select character allocators that are also arenas.
In general, *smoll* has an algebraic type system; this is the operation for getting common type elements, 
but you can also write `float|int|nat` to indicate type alternatives and `char_allocator\new` to get character
allocators other than *new*. Find more about types in the <a href="reference.html">reference guide</a>.

In the most general case,
one could also define `def greeting(effect edit char_allocator CHARS)` to create generic code that
accepts any character allocator. Having same-named functions with different behavior based on
their arguments is also known as *polymorphism*.

Also note the `effect` keyword that tells the greeting function to look for `CHARS` in the calling context without
necessarily expecting that as an argument. Effects can only be placed before other arguments.

```python
import std.core

def greeting(effect edit char_allocator^arena CHARS)
    return "hello "+"world"

def main()
    CLI = edit console()
    CHARS = edit arena alloc 1024
    a = 1
    b = 0
    if true
        message = greeting()
        print a-b
    else
        message = greeting()
        print 0
    print message
```

