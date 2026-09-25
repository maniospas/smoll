# Learn smo<span>λ</span>

We will cover the basics of *smoλ* here. Try examples in your browser or 
<a href="install.html">install the language</a>.
Find all available functionalities in the <a href="reference.html">reference guide</a>.

<div class="toc" markdown="1">

_1._ [hello world!](#hello-world) <br>
_2._ [numbers](#numbers) <br>
_3._ [conditions and loops](#conditions-and-loops) <br>
_4._ [errors](#errors) <br>
_5._ [tuples and functions](#tuples-and-functions) <br>
_6._ [strings](#strings)<br>
_7._ [recursion](#recursion) <br>
_8._ [types](#types) <br>
_9._ [what next?](#what-next) <br>

</div>

## hello world!

As tradition dictates, our first program below greets the world!
It also uses `repo` to tell the language that it should automatically 
find code under *std/* from a corresponding web URL (that is cached locally in
a -you guessed it- *.cache* dir). Following examples will not have this command for brevity.

```python
repo "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/std/" as "std/"
import std.core

def main(CLI)
    print "hello world!"
```

The program imports the standard library's core functions, 
and defines a `main` function to serve as its entry point. 
The function's body is indented, which is how the language tracks code blocks.
It also has that mysterious `CLI` argument that is mandatory for interacting
with the console, but will be explained later.

As *smoλ* is compiled, there is a great deal of difference on whether strings
are string literals known during compilation -we call these `cstr`- or dynamically
generated strings that appear during runtime. To convert this string into a runtime
`str` one just call a namesake function. Like this.


```python
import std.core

def main(CLI)
    greeting = str "hello world!"
    print greeting
```

We sneakily introduced the concept of variables by storing
the string's data on the variable *greeting*. Doubly sneakily,
we also introduced polymorphic functions; `print` now is a different
function that can print `str` instead of `cstr`, but the two versions
deliberately look and feel the same. 

**Note:** Even this conversion to `cstr` has not allocated any memory at
runtime yet. The language tries to be clever about not wasting
resources and just redirects to the original `cstr` under the hood.

## numbers

Before continuing with strings and how they can be created -and manipulated- 
dynamically, let us skim over some more basics. First: numbers. Usually you will
use one of `float`, `int`, `nat` that employ 64 bits to correspondingly represent
floating point numbers, integers, and natural numbers/unsigned integers.

*Smoλ* takes a principled stance of not mixing these types in numerical operations
arbitrarily. Because this is how bad things happen in compiled code, like *1.0* not 
having the same bit representation as *1*; the former is a float, because it has
a decimal indicator, and the latter a nat. Ints cannot be represented and need to 
be converted to from the other types. This is by design; the language's nefarious plan
is to avoid signed operations for the data structure used to index memory... and boom!
A lot of errors are prevented, and a lot of optimizations become possible.

Below is an example that uses different numbers, as well as some basic arithmetic
operations. Convert number formats to each other
other (as well as from `cstr` and `str` data) by using namesake functions. All generous
provenance of `std.core`.

Oh, by the way: text after `#` are line comments and ignored.

```python
import std.core

def main(CLI)
    print 1.0+2.0-3.0    # prints 0.0
    print 1+2
    int_zero = int 0
    print int_zero-int 1 # prints -1
    print 1+nat "2"      # prints 3
```

## conditions and loops

Now let's make the language Turing-complete! 
Basically we need to emulate a Turing machine's theoretical model that... 

Ok, ok, not the time for theory. Basically we need conditions and loops.
Actually conditions are loops if you squint, but it's convenient to have 
both. So *smoλ* has `if-else` are conditional 
statements that change what is being executed based on a condition. 
Conditions evaluate to a `bool` type.

```python
import std.core

def main(CLI)
    x = 1.0-2.0
    if x<0
        print "x is negative"
    print "done"
```

Loops either have the form `while condition` followed by a code
block to repeatedly execute. But there is a way to *iterate* across
some constructs, as shown below. Parentheses are 
optional when passing one argument to a function, which allows us to
construct a natural number range, which normally takes exactly two arguments,
by calling the `of` function to construct a range from `0` to `10` (non-inclusive).

```python
import std.core

def main(CLI)
    for x in range of 10
        print x
```

The `of` function supports various range constructions patterns that 
make code more explicit.

-  `range of 10` becomes `range(0,10)` 
-  `range of (1 to 10)` becomes `range(1,10)` 
-  `range of (1 upto 10)` becomes `range(1,11)` 
-  `range of (2 len 10)` becomes `range(2,12)`

Notice those symbols `to`, `upto`, `len`? Some functions allow
textual specialization between their variations by denoting some
keywords that could be used where commas would be normally expected
to separate their arguments. See the [reference guide](reference.html) 
on how to define such keywords for your own functions.

If there is only one expression within a condition or loop, you can 
place it in the same line after the separator `:` 
(the new expression must end in the same line too). Another 
specific by very useful syntax is `else if` as a shorthand
to nesting a new condition within an `else`.
Finally, the typical `break` and `continue` commands allow 
stopping or continuing with the next iteration of a loop, 
usually based on some condition.

```python
import std.core

def main()
    CLI = edit console()
    n = mut 27 # a variable that we can replace
    while true
        print n
        if n==1: break
        else if n % 2 == 0: n = n / 2
        else: n = 3*n + 1
    print "Woot! Collatz conjecture converged."
```


## errors

Since we are still talking about numbers, it is a good time to also talk about errors, like division by zero.
Ok, we will ignore floats where division by zero is well-defined, and consider expressions like `1/0`.
Functions -division in this case- can fail whenever, BUT you should not worry too much about that.

To check whether an expression has any errors, start it with `try`. The outcome is a boolean value
that can be checked for success, for example in a condition. Otherwise, errors cascade in the
call stack, until they are intercepted from some caller for recovery actions.
You will never leak memory/opened files/etc, unless you do not deliberately evoke unsafe code 
(like the `unsafe_mut` keyword - notice that it's very explicit about its own unsafety?) . 

```python
import std.core

def main(CLI)
    if not try result=0-1: print "failed to decrease"
    print result # unset on error and thus zero-initialized by policy
```

You can get full stack traces by compiling your program with the `--debug` flag. But if that
is too borhtersome you can add ... a little something on the main function to print the
terminating error's message:

```python
import std.core

def main(CLI, WHICHERR)
    print 0-1
```

To not drag on the mystery, the main function's arguments are just syntax sugar for the 
following:

```python
import std.core

def main()
    CLI = CLI()
    WHICHERR = WHICHERR()
    print 0-1
```

Basically, an argument without a name is converted as a variable with itself as the
name. Furthermore, as a special case, *smoλ* tries to create arguments to the main function
automatically. Finally, where is CLI used? It's an *effect* of print functions, which means
that they try to grab the `CLI` variable from wherever they are called automatically. We will
later see how to also tell our functions to grab `CLI` or other variables autoamtically. 
Hint: there's a keyword for it.

## tuples and functions

Place expressions in parentheses to make functions call only those,
for example per `print int(0)-int(1)`. If one wrote `print int 0-int 1`,
it would be interpreted per `print(int( 0-int(1) ))`, and the compiler would 
complain abou substracting a nat from an int.

**Notice how function calls end expressions!** Thus `print(0)-1` is invalid,
as it would be equivalent to `(print 0)-1`.

In general, all functions accept one argument and parentheses are just a means of defining tuples, which
is what we call sequences of a fixed number of values with potentially different types. Up to now, 
we basically used tuples of one element, where parentheses are not usually needed.

But functions may require several inputs too! In that case, pass to those functions a tuple of 
those arguments. For example, given that all `print` versions allow an optional second `cstr` argument to
use instead of the line break character, you can do the following.

```python
import std.core

def main(CLI)
    print nn "hello " # 'nn' creates the tuple ("hello ", "") to avoid newlines
    print "world!"
```

So, how do we define our own functions? Like main:

```python
import std.core

def greet(on CLI, str message)
    print "hello world!"
    print message

def main(CLI)
    greet "how are you?"
```

Functions have comma-separateed arguments. Arguments have the
form of [qualifiers] type [name]. Optional qualifiers can be 
`edit/mut/on` where the latter can be mixed with the ohter two 
and lets the argument behave like an effect (effects must be 
declared before all non-effect arguments). That is, the provided
name will be gathered from the calling scope. The name is the 
same as the type, if the type is a single word.

## strings

We will now try to perform some string manipulation, starting with what you
are probably most curious about: concatenation. This requires that we (actually, the
compiler) allocate some memory where the result should be placed. The schema
for memory management is defined via *allocators*. The simplest allocator for
character data is `new()`: it just creates new memory as needed, like below.
Do note that allocators are also typically declared as effects in the standard
library, so that you don't need to keep passing them as arguments.

```python
import std.core

def greeting()
    CHARS = new()
    return "hello "+"world"

def main(CLI)
    print greeting()
```

The above snippet is deceptively simple in that *smoλ* tries its best to not
annoy you with manual memory management. In particular, it delays releasing
memory until no longer used. This is called *deferring* the release.
To see that it happens, mouse-over the greeting function's name in the LSP
or run `./smoll main.s --docs` to export documentation for the function.

**Question:** Why would anyone need anything else than a `new()` allocator 
if it's so smart? 

**Answer:** Speed, as small allocations can be quite costly, and it's not so smart in some cases.
For example, the following snippet cannot compile:

```python
import std.core

def greeting()
    CHARS = new()
    return "hello "+"world"

def main(CLI)
    if true
        message = greeting()
    else
        message = greeting()
    print message  # CREATES AN ERROR
```

Since *smoλ* couldn't just leak resources from the conditional statement, it releases the string
at its end. A human could theoretically reason about workarounds, but this is hard!!! For example, 
they could forget to account for error handling and make the implementation unsafe.

The trick is usually use other allocators, like arenas and circular buffers. Arenas are memory 
regions of fixed size that are gradually used until full. Circular buffers are arenas that
overwrite previous values from the start once full. Here is the above snippet using an arena. 

```python
import std.core

def greeting(on edit char_allocator^arena CHARS)
    return "hello "+"world"

def main(CLI)
    CHARS = edit arena alloc 1024
    if true
        message = greeting()
    else
        message = greeting()
    print message
```

Above, the *greeting* function needs to only grab an arena out of available character allocators
(rather than among all special arena types that have been overloaded). This is done with the syntax
 `char_allocator^arena`. Find more about the whole algebraic type system <a href="reference.html">reference guide</a>.

In the most general case,
one could also define `def greeting(on edit char_allocator CHARS)` to create function variations for all character
allocators

## recursion

Recursion is an important capability of programming languages, but at
the same time dangerous in that it can easily create unbounded programs. 
*Smoλ* aims to make it somewhat harder to write such programs, while
also ensuring that understanding function types can be achieved
by reading ONCE top-to-bottom.

Recursive functions are defined with the `rec`
keyword and are able to call all subsequent functions 
in the same file, including themselves. Importantly,
they can do so *only after their first return*, which
helps determine their type. In a pinch, write 
`if false: return ...` to create a "ghost" return that is 
never called, but do prefer having a first return as an
escape hatch.

Recursive functions are traditionally exemplified with an inefficiently-implemented
Fibonacci function, and we do so below.

```python
import std.core

rec fib(nat n)
    if n<=1: return 1
    return fib(n-1)+fib(n-2)

def main()
    CLI = edit console()
    print fib 8
```


## types

Up to now we were limited to builtin numbers and strings. But you can also
define your own types. First, each function can return a tuple instead of
a single value. Like below, where tuple members can be accessed with the dot
notation.

```python
import std.core

def point(nat x, nat y)
    return (x,y)  # or compiler::args() to get a tuple of the arguments

def main()
    CLI = edit console()
    p = point(1,2)
    print p.x # prints 1
    print p.y # prints 2
```

Tuples are automatically unpacked into raw data. That is, *smoλ*
defaults to *structural typing* function outputs, which makes for
more dynamic code in which function results can readily be used as
inputs expecting the same data structure. However, one
can actually create nominal types, which can NOT be structurally
matched to data of the same shape, by declaring a tuple as a class.

```python
import std.core

def point(nat x, nat y)
    return class compiler::args()

def main(CLI)
    p = point(1,2)
    print p.x # prints 1
    print p.y # prints 2
```


Most data encountered until now have been immutable (aka they don't change).
There are two keywords that allow modifications: 
-`edit` allows modifying data structure values only (given that they, in turn have modification permissions) 
- `mut` allows replacing the whole structure, for example for one created with a new constructor function.

These qualifiers can only be placed in function signatures, or after the `=` symbol.

```python
import std.core

def mutable_point(nat _x, nat _y)
    x = mut _x
    y = mut _y
    x = x+1 # can replace only if 'mut'
    y = y+1
    return class (x, y)

def main(CLI)
    p = edit mutable_point(1,2)
    p.x = p.y+10 # can modify because 'p' can be edited and 'p.x' can be mutated
    print p.x    # prints 13
```

Finally, a handy shortcut when declaring data structures is that 
you can use the shorthand `assigned var = value` to also retrieve
an assigned variable after setting it to a value. By convention,
prefix arguments that you are going to transform with an underscore.


```python
import std.core

def mutable_point(nat _x, nat _Y)
    return class (
        assigned x=mut _x+1,
        assigned y=mut _y+1
    )

def main(CLI)
    p = edit mutable_point(1,2)
    p.x = p.y+10 # can modify because 'p' can be edited and 'p.x' can be mutated
    print p.x    # prints 13
```

## what next?

This material covered the very basics of *smoλ*. However, there are
other aspects of the type system and standard library's core that 
can contribute to simple programs. These include file handling, web
operations, graphics, random numbers, and scientific computations.

More memory concepts include safe buffer
and pointer management for arrays of types beyond mere characters. 
More information can be found 
in the reference guide, and the standard library's manual under
the **Documentation** menu above. Also try the **Tutorials** for
specific aspects of the language.

One can create buffers and arenas for
other data types, as well as arithmetic vectors and string maps.
As a small appetizer, here is an example that creates a buffer
of a fixed number of elements using `[]`, and saves some string
lengths on another buffer.

```python
import std.core

def main(CLI)
    CHARS = edit arena alloc 1024
    lengths = edit nat[].alloc 2 # equivalent to 'edit alloc(nat[], 2)'
    for s in [
        "hello "+"world",
        str "hello again"
    ]   
        print s+"!"
        lengths[compiler::for_counter()] = len s+"!"
    for l in lengths: print l
```

Finally, there are several compile-time evaluation constructs, 
including a macro system for calling *smoλ* functions that parse
strings known by the compiler to generate *smoλ*
code. This uses bounded compute to prevent exploding compilation
times (you will typically not notice the bound) and allows 
expressions like the one below. Notice how explicit it is that 
we are doing something non-trivial. Furthermore, macros parse
into complete expressions, so they do not affect code farther away.

```python
import std.core

def main(CLI)
    x = 2
    # printf applies 'print nn' to all string segments and bracketed expressions
    macro<printf> "hello {x} world\n"
```
