# Learn

We will cover the basics of *smoλ* here. This covers the few features that are responsible
for most code written in the language. Find a complete list of 
concepts in the <a href="reference.html">reference guide</a>.

### hello world!

Our first program consists -traditionally- of printing a greeting statement.
We use the `repo` instruction to tell the language that it should automatically download
code under *std/* from a corresponding web URL (download code is stored in a *.cache* folder).
Following examples will not have this command for brevity.

Then, the prorgam imports the standard library's collections of basic yet useful functions, 
and defines a `main` function to serve as the
entrant point of our program. The function's body is indended, which is how
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
are also known as unsigned integers or non-negative intgers if you are more of a math person.

*Smoλ* takes a principled stance of not allowing you to mix these types unintendedly,
because this is how bad things happen in compiled code (like *1.0* not having the same bit
representation as *1*). To begin with, you can declare floats by writing a decimal 
number like `1.0` and natural numbers by writing them without decimals like *1*. You cannot
represent integers and need to convert with them from the other types. This is deliberate
because natural numbers are used for a lot of stuff in programming with regards to indexing
memory; their usage makes some nice optimizations possible while staying safe.

Below is an example that uses different numbers, as well as some basic arithmetic
operations on those. Convert number formats to 
others (as well as from `cstr` and `str` data) by using the numer type as a function. 
We sill need to import the standard library's core because this
is where those operations are implemented - you can even make your own version of all
operation by interweaving C code in there (we will not cover how in this tutorial)! 
By the way, text after `#` are line comments and ignored.

```python
import std.core

def main()
    CLI = edit console()
    print 1.0+2.0-3.0 # prints 0.0
    print 1+2
    int_zero = int 0
    print int_zero-int 1 # prints 1
    print 1+nat "2"      # prints 3
```

## conditions and loops

There are `if-else` conditional statements to change what is being
executed based given a condition. Conditions evaluate to a `bool` type.

```python
import std.core

def main()
    CLI = edit console()
    x = 1.0-2.0
    if x<0
        print "x is negative\n"
    print "done\n"
```

Loops can be have the form of either `while condition body`, which looks
similar to above, or an iterator-based form shown below. Parentheses are 
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

The `of` function support various kinds of range constructions that 
help code be more explicit. Next are some patterns that use 
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
unless you know of a way to recover from failure or need to do something special. You will never have leaking
resources from failure (e.g., memory leaks), so you can continue with your program like normal if
you decide to handle them. Errors include natural number substraction that would create a negative.

To check whether an expression has any errors, start it with `try`. The outcome is a boolean value
that can be checked for success, for example in a condition. Otherwise, errors cascade in the
call stack, until they are intercepted from some caller. Erroring is safe in that it does not
leak resources by automatically releasing them. At worst, your whole program will terminate
safely.

```python
import std.core

def main()
    CLI = edit console()
    if not try result 1-2
        print "failed to sustract"
    else
        print result
```


### tuples and functions

Place expressions in parentheses to make functions call only those,
for example per `print int(0)-int(1)`; if one wrote `print int 0-int 1`,
it would be interpreted per
`print(int( 0-int(1) ))`, and the compiler would complain that an *int*
cannot be substracted from a natural number in the middle.

In general, all functions accept one argument and parantheses are just a means of definining tuples, which
is what we call sequences of a fixed number of values with potentially different types. Up to now, 
we basically used tuples of one element, where parentheses are not usually needed.

But functions may require several inputs too! In that case, pass to those function a tuple of 
those arguments. For example, given that all `print` versions allow an optional second `cstr` argument to
use instead of the line break character, you can do the following.

```python
import std.core

def main()
    CLI = edit console()
    print nn "hello " # 'nn' creates the tuple ("hello ", "") to avoid newlines
    print "world!
```

