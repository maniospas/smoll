
# Command line apps

## print

The main functionality needed to build a command line app is reading arguments 
and user input, and manipulating strings. The input-output device is the console,
which can be declared per `CLI = console()` inside the program's `main` function
serving as an entry point.

Notice the "the" in "the console". You can have only one console in your program;
this is called a *singleton*. If you name the console `CLI`, like below, it is 
automatically passed to console reading and printing functions. 

```python
import "std/core.s"

def main()
    # this is a line comment
    CLI = console()
    print nn "hello " # adds an empty string isntead of new line at end of print 
    print "world!"
```

Automatically passing arguments can also be done for your own functions too, as in
the net snippet. To unpack what the `greet` function's argument means, it first
declares an effect, meaning that it automatically gathers a variable called `CLI`
from its calling scope. Its caller can also manually passe such a variable.
The rest of the argument definition requires that what is passed should have `edit`
permission (should not be constant) because we are going to modify some internal
state. Finally, the `console` type of the argument is declared, followed by its name.

## input and error check

Functions in *smoλ* are need to be followed by their input tuple, with effects
added automatically if needed. `()` is an empty tuple, for tuples with one element
parentheses are optional, and tuples of more elements can be built from multiple
comma-separated values.

```python
import "std/core.s"

def greet(effect edit console CLI)
    print "hello world!"

def main()
    CLI = console() 
    greet() # equivalent to CLI.greet()
```

Let us say that we want to read some user input, now. For numbers, this can be 
done by passing the console as an argument to the number type name. This calls
a corresponding function. Sidenote that operations are valid only between numbers 
of the same type. So we need to write '1.0' with the dot to indicate a float number
(as opposed to, say, `1` that is a natural non-negative number). Reading
from the console is not an automatic effect, to avoid doing so accidentally.

```python
import "std/core.s"

def main()
    CLI = console()
    print nn "give a number: "
    x = float CLI
    print nn "its square is: "
    print x*x
```

If you run the above program and provide something that is not a number as input,
it will just terminate. This is NOT a crash, but an error that can be intercepted
and handled. Preface error-prone expressions with a `try` keyword. This actually
evaluates to true/false depending on whether execution was successful or an error
occurred. Use it like below. 

At the very end of our function, the `debug:nocatch()`
function is called to ensure that we have enclosed all potential errors in a `try`
statement. This is recognized during compilation, with the language helping us 
identify missed errors up to that point. In general, there are several helper functions
under the `debug:` and `compiler:` namespaces that help us interact with the compiler
for debugging and more dynamic programs.

```python
import "std/core.s"

def main()
    CLI = console()
    print nn "give a number: "
    if try x = float CLI
        print nn "its square is: "
        print x*x
    else
        print "failed to read number"
    debug:nocatch() # fails compilation if we leave unhandled errors
```

## character buffers

Now we are ready to take one big step and learn about strings.
So far, we used expressions within quotations, which are of the `cstr` type;
they are null-terminated constant strings known at compile-time and packed into 
the data segment of our programs. 

We can also work with dynamic strings of the `str` type. These track more data,
including the first character and size for fast cache-friendly comparisons.

Working with strings requires that we build some memory to store them,
namely a buffer of characters. Four types of memory managment are available, 
the simplest of which is `CHARS = new()` to force each string to 
allocate its own memory on the heap. Such small allocations should be avoided
however, as they are prone to create memory leaks when repeated in loops. Do
not worry about accidentally leaking memory, however: the compiler will not let 
you. 

Notice the capital letters in `CHARS`? Like in `CLI`? All-capitals is a convention to  
indicate effects in general. Since they are passed as arguments automatically and 
repeatedly, this draws attention without being disruptive. 
This time, we are passing the allocator automatically to string creation methods.
But enough talking. Here is some code.

```python
import "std/core.s"

def greet(str name)
    print nn "hello "
    print nn name
    print "!"

def main()
    CLI = console()
    CHARS = new()
    print "what's your name?"
    print nn ">> "
    name = str CLI
    greet name
```

Concatenate strings by "adding" them together. Like below.
Notice the conversion of `cstr` quoted literals to the string 
type. This does not allocate memory at all.

```python
import "std/core.s"

def main()
    CLI = console()
    CHARS = new()
    x = str "hello "
    y = str "world!"
    print x+y
```

Better string allocators should be placed on buffers, that is,
regions in the heap memory (a fancy name for most RAM) that are
allocated once and hold a bunch of data together. Declare and allocate
buffers with patterns like `buf = char[].alloc 4096`. Or, if we were
not fancy in using the dot notation and skipping parentheses,  `buf = alloc(char[], 4096)`.
This declares an empty buffer of characters in `char[]` and then resizes
it to contain `4096` elements. You can construct buffers for any type,
in general.

A character buffer by itself is not enough to serve as an allocator,
because we don't know how much memory we have consumed inside it.
Attach a tracker position by further passing the result through the
`arena` function. That will keep using the buffer unti it's full,
at which point an error will be created.

```python
import "std/core.s"

def main()
    CLI = console()
    CHARS = arena char[].alloc 4096
    x = copy str "hello " # also copy the string onto CHARS For fun
    y = copy str "world!" # also copy the string onto CHARS For fun
    print x+y
```

You might want to mix things up memory management a little. 
For example, you may want the large cumbersome buffer to not persist 
as we go on with our lives. Manually pass
an allocator argument to functions to override whatever effect they
are automatically grabbing. The next example adds `cstr` directly to 
treat them as strings, thus creating several intermediate addition
outcomes stored in a large buffer. But the result can be copied on
a new memory location via the -you guessed it- `new()` allocator.

```python
import "std/core.s"

def create_greeting()
    CHARS = arena char[].alloc 4096
    return new().copy "hello"+" "+"world"+"!"

def main()
    CLI = console()
    print create_greeting()
```

At this point, we need to have ... *the talk*. About memory management.
First of all, if you want programs to be truly efficient, it is important
to understand when copying memory is just not needed. For example, say
that we want to rewrite the above snippet to use the minimum memory (and
maximum speed!) possible. 

Ideally, we would declare an arena of appropriate size, copy data onto it once,
and finally treat the whole arena buffer as a string. And below is how to
implement this ideal scenario.

```python
import "std/core.s"

def create_greeting()
    # create str representation of cstr to get their length with 'len'
    # this has no cost because the sizes would be computed later and
    # useless data (like the first string character) are discarded automatically
    s1 = str "hello"
    s2 = str " "
    s3 = str "world"
    s4 = str "!"
    CHARS = arena char[].alloc len(s1)+len(s2)+len(s3)+len(s4)
    copy s1
    copy s2
    copy s2
    copy s4
    return str(status CHARS from 0) # from 0 to end of allocated characters

def main()
    CLI = console()
    print create_greeting()
```

Let us ignore what exactly the details of the syntax for declaring a string
up to the current allocated characters. For something more important: the above code 
has a lot of repetition and thus is prone to typographical error bugs (did you notice 
that `copy s2` appearing twice by accident?) and code extensibility issues. 
Can we generalize it? The answer should be obvious: create a
buffer *of strings* and place the elements there. *Smoλ* gives is a shorthand
for the allocation too by comma-separating items inside square brackets.

Note that this is merely a string buffer. Buffer elements can be accessed 
or set at specific positions, using `buf[position]=value` but this syntax
is not used below. Instead a `for` loop goes through all buffer
elements.


```python
import "std/core.s"

def create_greeting()
    parts = [
        str "hello",
        str " ",
        str "world",
        str "!"
    ]
    size = mut 0 # mutable value = allows overwriting it
    for counter_part in parts 
        size = size + len counter_part
    CHARS = arena char[].alloc size
    for part in parts
        copy part
    return str(status CHARS from 0)

def main()
    CLI = console()
    print create_greeting()
```

Or, just rewrite the whole thing as a helper function that
concatenates a string list. There exists an extract cost for such a generalization; 
allocating the list of strings. Evaluate your practical needs accordingly. For example,
you may prefer to just ... print the strings instead of concatenating them beforehand.

```python
import "std/core.s"

def total_length(str[] parts)
    size = mut 0
    for counter_part in parts 
        size = size + len counter_part
    return size

def concat(str[] parts)
    CHARS = arena char[].alloc total_length parts
    for part in parts
        copy part
    return str(status CHARS from 0)

def main()
    CLI = console()
    print concat [
        str "hello",
        str " ",
        str "world",
        str "!"
    ]
```

## literals

Above we saw the convenient syntax `str(status CHARS from 0)`, so now is a
good time to mention some stuff about *smoλ*'s type system - you will see why 
momentarily. The whole system is deep, but on a day-to-day use the most
important features are m unions, type checking at compile time, and
literal types. The mystery `from` that comes out of nowhere is a string
literally treated as a keyword, but to understand and fully appreciate this statement 
we need to understand the rest.


To begin with, you can have functions with different arguments but the same names. 
This is known as polymorphism. Here is an example, though usually we assign the
same conceptual name to similar operations.


```python
import "std/core.s"

def double_it(nat x) # natural numbers = unsigned integers
    return x*2

def double_it(float x)
    return x*2.0

def main()
    CLI = console()
    print double_it 1.0 # prints 2.0
    print double_it 1   # prints 2
```

Type unions can be written as `type1|type2|...` and express
alternatives. That is, the above implementation can be rewritten
like below.

```python
import "std/core.s"

def double_it(nat|float x)
    return x+x

def main()
    CLI = console()
    print double_it 1.0 # prints 2.0
    print double_it 1   # prints 2
```

This code "cheats" that it does not show how to
obtain a properly typed value of "2". 
This is surprisingly non-trivial in that we need to 
obtain, among all the natural and float number converters,
the ones that *could* have output `x`. The set of those functions is
`type (nat|float)->x`. Then, we pass `2` as an argument to select
the converter that actually can convert it to the same type as `x`.
This is shown below, but let us not take up some time here because
it is more of a curio than a frequently occuring pattern.

```python
import "std/core.s"

def like(nat value, nat|float prototype)
    return type (nat|float)->prototype value

def double_it(nat|float x)
    return x*2.like x

def main()
    CLI = console()
    print double_it 1.0 # prints 2.0
    print double_it 1   # prints 2
```

What actually needs mentioning is you can change
how a function behaves depending on its inpus using
the `is` operator to make a check. This check is 
resolved during compilation, meaning that it does
not affect runtime performance whatsoever.

```python
import "std/core.s"

def double_nat(nat|float x)
    # this function only doubles naturals
    if x is nat
        return x*2
    return x

def main()
    CLI = console()
    print double_nat 1.0 # prints 1.0
    print double_nat 1   # prints 2
```

Main usage of this mechanism is to have
optional arguments by checking against 
the `blank` type, corresponding to the
outcome of the `()` expression. Like in
the next snippet. Blank variables can
be overwritten by convention.


```python
import "std/core.s"

def inc(float x, float|blank by)
    if by is blank
        by = 1.0
    return x+by

def main()
    CLI = console()
    print inc 1.0        # prints 2.0
    print inc (1.0, 4.0) # prints 5.0
```

You can name type unions by writing with this mixture of assignment 
and function definition syntax: `def Num = nat|float`. And the same
syntax can be used to defined what was mentioned previously: literal
types. We will cover here only string literals, which is what's mainly
useful. First get a glimpse of how they work.


```python
import "std/core.s"

def greeting = "hello world!"
def main()
    CLI = console()
    print greeting
```

Easy? 

Ok, the language goes to great pains to be intuitive, so this looks like a constant
declaration. But `def name = ...` is actually used to declare *unions*. ONLY. So where's the type?

Each string literal is a type onto itself when treated as part of a union.
There is just the convention that, when used
within code, it is automatically lowered to its equivalent `cstr` representation. But
you can do something like the following. See how the string literal is the type of the
argument. Furthermore, `type "hello"` can be used to reference a string literal type 
within code.

```python
import "std/core.s"

def message("hello" _useless_var)
    return "hello world!"

def message("bye" _useless_var)
    return "goodbye"
    
def main()
    CLI = console()
    print message type "hello"
    print message type "bye"
```

Actually, variable names are optional in function signatures, so you can rewrite 
the above like so.

```python
import "std/core.s"

def message("hello")
    return "hello world!"

def message("bye")
    return "goodbye"
    
def main()
    CLI = console()
    print message type "hello"
    print message type "bye"
```

Variaables associated with literal types can only be matched to literals
of the same type. But use the `compiler:literal` function to retrieve the
actual value from the compiler. Remember that this is all done during compilation 
with no runtime overhead. Oh, and you can also type-check with `is` normally!

```python
import "std/core.s"

def greet(effect edit console CLI, "hello"|"hi" greeting)
    print nn compiler:literal greeting
    if greeting is "hello" # 'is' starts type parsing
        print " world"
    print "!"

def main()
    CLI = console()
    greet type "hi" # prints hi!
```

Fine, so we saw how we can run a bunch of stuff. How does this relate
to the `str(status CHARS from 0)` syntax? We are actually allowed to
use string literals as keywords within tuples/function arguments by replacing
the comma. This counts as interweaving the keyword's corresponding literal
as an argument. Here is a simple example.


```python
import "std/core.s"

def print(effect edit console CLI, float start, "upto", float end)
    print nn "["
    print nn start
    print nn ","
    print nn end
    print nn "]" # inclusive range

def print(effect edit console CLI, float start, "to", float end)
    print nn "["
    print nn start
    print nn ","
    print nn end
    print nn ")" # exclusive range

def main()
    CLI = console()
    print(0.0 upto 1.0) # prints '[0.0,1.0]', equivalent to print(0.0, type "upto", 1.0)
    print(0.0 to 1.0)   # prints '[0.0,1.0)'
```

Now, we can just tell that there exists a string initialization
in the form `def str(char[] buf, nat end, "from" nat start)`. So
the expression we investigating first unpacks the arena back to a buffer
and position pair with `status CHARS`, passes those as the first two
arguments, and then uses `"from"` as a type literal to select the
appropriate string creation function.