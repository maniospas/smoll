# Learn

We will cover the basics of *smoλ* here. This covers the few features that are responsible
for most code written in the language. Find more things in the langauge's 
<a href="reference.html">reference</a>.

### hello world!

Our first program consists -traditionally- of printing a greeting statement.
We use the `repo` instruction to tell the language that it should automatically download
code under *std/* from a corresponding web URL (download code is stored in a *.cache* folder).
Following examples will not have this command for brevity.

Then, the prorgam imports the standard library's collections of basic yet useful functions, 
and defines a `main` function to serve as the
entrant point of our program. The function's body is indended, which is how
the language keeps track of code blocks.


```python
repo "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/std/" as "std/"
import "std/core.s"

def main()
    print "hello world!"
```

The program above calls the `print` function with a string greeting in quotations. As
*smoλ* is compiled, there is a great deal of difference on whether strings
are string literals known during compilation -we call these `cstr`- or dynamically
generated strings that appear during runtime. To convert this string into a runtime
string *type* called `str` just call a namesake function like below.


```python
import "std/core.s"

def main()
    greeting = str "hello world!"
    print greeting
```

The snippet sneakily introduces the concept of variables too, by storing the
string value on a variable called *greeting*. A different `print` function
is also used that is compatible with the string type, but the code largely looks
the same. However, if you wanted to hear about any other differences, the language
is too good for that yet: it recognizes that the created `str` is known during
compilation and thus takes special action to ensure that the created program
becomes equivalent to the first one.

### numbers

Before continuing with strings and how they can be created -and manipulated- 
dynamically, let us skim over some more basics. First, let us talk about numbers. Usually you will
use one of the *Number* types `float`, `int`, `nat`. These use 64 bits to represent
floating point numbers, integers, and natural numbers (also known as unsigned integers 
or non-negative intgers if you are more of a math person).

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
import "std/core.s"

def main()
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
import "std/core.s"

def main()
    x = 1.0-2.0
    if x<0
        print "x is negative\n"
    print "done\n"
```


## errors

Since we are still talking about numbers,it is a good time to also talk about errors, like division by zero.
Ok, we will ignore floats where division by zero is well-defined, and consider expressions like `1/0`.
Functions -division in this case- can fail freely and you should not bother too much about that, 
unless you know of a way to recover from failure or need to do something special. You will never have leaking
resources from failure (e.g., memory leaks), so you can continue with your program like normal if
you decide to handle them.

To check whether an expression has any errors, start it with a `try` 



### tuples and functions

Above we wrote `print int_zero-int 1` with the understanding that *smoλ* functions are called 
for the result following them. Place expressions in parentheses to make functions call only those,
for example per `print int(0)-int(1)`. In fact, parantheses are a means of definining tuples, which
is what we call sequences of a fixed number of values with potentially different types. Up to now, 
we basically used tuples of one element, where parentheses are not usually needed.

But functions may require several inputs too! In that case, pass to those function a tuple of 
those arguments. For example, given that all `print` versions allow an optional second `cstr` argument to
use instead of the line break character, you can do the following.

```python
import "std/core.s"

def main()
    print ("hello", " ")
    print "world!
```

### buffers

Ok, so how do we actually create a string during 