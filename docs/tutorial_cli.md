
<h1>Command line apps with sm<img style="width:1.5rem" src="smoll.png"></img>λ</h1>

<div class="toc" markdown="1">

**Contents**<br>
[print](#print) <br>
[input and error check](#input-and-error-check) <br>
[character buffers](#character-buffers) <br>
[zero-cost type checking](#zero-cost-type-checking) <br>
[literals](#literals) <br>
[colors](#colors) <br>
[string manipulation](#string-manipulation) <br>
[maps](#maps) <br>
[files](#files)

</div>

## print

The main functionality needed to build a command line app is reading arguments 
and user input, and manipulating strings. The input-output device is the console,
which can be declared per `CLI = console()` inside the program's `main` function
serving as an entry point.

Notice the "the" in "the console". You can have only one console in your program;
this is called a *singleton*. If you name the console `CLI`, like below, it is 
automatically passed to console reading and printing functions. By the way, the
language uses indentation to mark code blocks. That is, the contents of a function
must start at a fixed number of tabs inwards for visual alignment.

```python
import "std/core.s"

def main()
    # this is a line comment
    CLI = console()
    print nn "hello " # adds an empty string instead of new line at end of print 
    print "world!"
```

Automatically passing arguments can be done for your own functions too, as in
the net snippet with the `greet` function. To unpack what its one argument means, it first
declares an effect, meaning that it automatically gathers a variable called `CLI`
from its calling scope based on its name. It can be called by also manually passing a first
console variable.
The rest of the argument definition requires that the input should have `mut`
permission, meaning that it is not a constant -the default- but that we may mutate it.
Finally, the `console` type of the argument is declared, followed by its name.

## input and error check

Functions in *smoλ* are need to be followed by their input tuple, with effects
added automatically if needed. `()` is an empty tuple, for tuples with one element
parentheses are optional, and tuples of more elements can be built from multiple
comma-separated values.

```python
import "std/core.s"

def greet(effect mut console CLI)
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

def greet(effect mut console CLI, str name)
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
    x = copy str "hello " # also copy the string onto CHARS for fun
    y = copy str "world!" # also copy the string onto CHARS for fun
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
concatenates a string list. There exists an extra cost for such a generalization; 
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
    # we don't need to grab effects from elsewhere if they are not singletons
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

## zero-cost type checking

Above we saw the convenient syntax `str(status CHARS from 0)`, so now is a
good time to mention some stuff about *smoλ*'s type system - you will see why 
momentarily. The whole system is deep, but on a day-to-day use the most
important features are unions, type checking at compile time, and
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

You can change
how a function behaves depending on its inputs using
the `is` operator within a conditional statement. 
This check is resolved during compilation, meaning that it does
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

## literals

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
declaration. But `def name ...` is actually used to declare *types*. ONLY. So where's the type?

Each string literal is a type onto itself during any sort of type parsing.
There is just the convention that, when used
within code, literal types are automatically lowered to their equivalent `cstr` representations. 
But you can do something like the following, where a string literal is the *type* of the
argument. Then, `type "hello"` can be used to reference a string literal type 
within code and therefore calls the appropriate function. It is important, so it
is worth stressing: *only the same literal types are matched* when resolving
polymorphic functions.

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

Variables associated with literal types can only be matched to literals
of the same type. But use the `compiler:literal` function to retrieve the
actual value from the compiler. Remember that this is all done during compilation 
with no runtime overhead. Oh, and you can also type-check with `is` normally! The 
same mechanism as above grants us zero-cost literal comparison.

```python
import "std/core.s"

def greet(effect mut console CLI, "hello"|"hi" greeting)
    print nn compiler:literal greeting
    if greeting is "hello" # 'is' starts type parsing
        print nn " world"
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

def print(effect mut console CLI, float start, "upto", float end)
    print nn "["
    print nn start
    print nn ","
    print nn end
    print "]" # inclusive range

def print(effect mut console CLI, float start, "to", float end)
    print nn "["
    print nn start
    print nn ","
    print nn end
    print ")" # exclusive range

def main()
    CLI = console()
    print(0.0 upto 1.0) # prints '[0.0,1.0]', equivalent to print(0.0, type "upto", 1.0)
    print(0.0 to 1.0)   # prints '[0.0,1.0)'
```

Armed with this knowledge, we can now learn that the standard library's core, which
have been importing so far, also provides a string initialization
in the form `def str(char[] buf, nat end, "from" nat start)`. So
the expression we are investigating unpacks the `CHARS` arena back 
to an untyped buffer and position pair per `status CHARS`, and passes 
the pair as the first two arguments, followed by the `"from"` literal type
to select the appropriate string creation function.

As a final remark, literal-backed keywords are allowed to 
be the last tuple element. But not the first because there 
is no way to tell if a comma was meant to be used there. 
But you can leverage the blank type, for example constructed via 
`blank()` or `()`, to create an expression that does not add
arguments or runtime cost but which would sill require commas
afterwards, hence enabling literal keyword usage. 

Find en example below, where the same trick is used to
set `()` a literal separator.
Due to literal keywords being only comma replacements, 
you can only find them within parentheses.

```python
import "std/core.s"

def greet(effect mut console CLI, "hello"|"hi" greeting, blank|"world" world, blank|"."|"!" punctuation)
    print nn compiler:literal greeting
    if not world is blank
        print nn " "
        print nn compiler:literal world
    if punctuation is blank
        print ""
    else
        print compiler:literal punctuation

def main()
    CLI = console()
    # the next line prints 'hi world!' while validating it as a chosen pattern
    greet (() hi () world () !)
    # two equivalents
    greet ((), type "hi", (), type "world", (), type "!")
    greet (type "hi", type "world", type "!")
```

All examples above are resolved as zero-cost abstractions during compilation.
For example, while the program is running, it uses only the version(s) of `greet`
that are type-determined during compilation.

## colors

The standard library also allows us to colorize console inputs, at least for
consoles with explicit support of this functionality. This is by default done via
[ANSI](https://en.wikipedia.org/wiki/ANSI_escape_code) color codes, but the
functionality is abstracted away so that it is easier to read and write, and
can potentially change according to different console implementations. 

Below is an example of how to color. We obtain a colorization scheme
for the console that is also a singleton -but not an effect- meaning that it
can be constructed only at one point. This is done to automatically
reset the console to printing black-and-white once colorization ends,
even in case of failures.

```python
import "std/core.s"

def main()
    CLI = console()
    color = colors CLI
    set(color red)
    print "hello red"
    set(color reset)
    print "hello white"
    set(color cyan)
    print "hello cyan"
```

## string manipulation

There are various means of manipulating strings in *smολ*. In general,
functionality discussed applied to both `cstr` and `str` data. We already
saw how strings can be concatenated/added together, but they can also be
compared to check if they are the same, like below. Comparisons
involving only `cstr` are exceptionally slow, as the language ensures that
the the same representations are stored in the same addressed, and therefore
equality lower to just a memory address comparison underneath.

```python
import "std/core.s"

def main()
    print "hello"=="hello"
```

But even strings or mixtures of strings and `cstr` can be compared. The language
tries to be smart about it by tracking the first string character so that, in
combination with the string length, comparisons can be exited early, likely
without bringing useless data in the processor's L1 cache at all. Below is an
example. The conversion to `str` from `cstr|str` alternatives is a fine way
to create reusable libraries, but use only as needed. 

By convention, arguments that will be immediately converted into a common type start
with an underscore. Only strings admit a `len` operation, as implementing the latter
for `cstr` and repeating it can be a hidden expense.

```python
import "std/core.s"

def receive(effect mut console CLI, str|cstr _message)
    message = str _message
    if _message=="hello"
        print "they said hello!"
    else
        print nn "indicipherable message of length"
        print len message

def main()
    CHARS = new()
    print nn ">> "
    message = str CLI
    receive message
```

Several functions can be used to check if strings start with, end with, or just
contain other strings or characters. By the way, retrieve the first character of
a string per `char "mystring"`. You can also retrieve any character by providing
its index per `"mystring"[idx]`. Everything remains safe in that at most errors
will be created.

```python
import "std/core.s"

def main()
    CLI = console()
    test_string = "I like bananas!"
    print test_string.starts_with "I like"
    print test_string.ends_with "!"
    print test_string.contains "apple"

    end_symbols = ")}].,!?"
    if not end_symbols.contains(test_string.str()[0])
        print "valid start"
```

You can also access string slices without copying any
memory like below. Usually, functions that deal with
index ranges accept a starting and non-inclusive end
positions. The `of` function can be used to more
construct the position range using an explicit
string literal qualifier, like below.

```python
import "std/core.s"

def main()
    CLI = console()
    test_string = "I like bananas!"
    print test_string.slice(2, 9)
    print test_string.slice of(2 to 9)    # equivalent
    print test_string.slice of(9)         # 0 to 9
    print test_string.slice of(2 upto 9)  # inclusive range (one more character)
    print test_string.slice of(2 lento 4) # start and length
```

Since we are in the subject of string manipulation, now is a good time
to mention that we can import some more command line functionality from the
process namespace that is part of `"std/io.s"`. That gives access
to the ability to run system commands per `process:system "ls"` or even
read their outputs as if you would files. But the relevant part is 
that we can retrieve the operating system name as a `cstr` value, as well
as command line arguments passed to the running program as a `cstr[]` buffer.
Below is an example.

```python
import "std/core.s"
import "std/io.s"

def main()
    CLI = console()
    print system:os_name()
    for arg in system:args()
        if arg=="--hello" print "hello world!"
```


## maps

As 