# Command line apps with smoλ

*This tutorial builds on the core concepts of <a href="learn.html">learn smoλ</a>, 
such as effects, errors, strings, buffers and allocators.*

## console input and output

Import `std.core` and automatically ask the copiler to create a console via the
main's CLI argument.The CHARS argument also tells our program to use
the `new()` character allocator for string management. Once these two effects
are in place, read and print from the console. Reading strings grabe the CHARS
from the current context to serve as an allocator (more on allocators later).
By the way, `nn` modifies whast is passed to the print function that removes the 
new line from its end.

<details>
<summary>How `print nn` works.</summary>
Printing accepts a string (`str` or `cstr` - the dynamic
vs statically allocated string types) and an optional line ending `cstr`. Then, the
function `nn` is defined to remove the new line ending, which is the default
when no line ending is provided, by replacing it with `""`.
</details>

```python
import std.core

def main(CLI, new CHARS)
    print nn "what's your name? "
    name = str CLI
    print nn "hello " # print("hello", "")
    print name
```

You can also read numbers from the console without neding any memory.
Intercept invalid input errors with the `try` mechanism, and errors
propagate so that helper functions are not cluttered with error handling.
By the way, look how we asked the function to automatically grab CLI
from its calling context via `on`.

```python
import std.core

def read_number(on CLI, cstr message)
    print nn message
    return float CLI

def main(CLI)
    while not try x = read_number CLI
        print "invalid number"
    print nn "its square is: "
    print x*x
    debug::no_unhandled_error() # verifies during compilation that there are no unhandled errors
```

## command-line arguments

Import `std.io.process` to, among other things, work with arguments supplied when the program starts.
Unless you want to import operator overloads for addition/multiplication/etc.,
it is good practice to load files under a namespace (here: `proc`).

```python
import std.core
import std.io.process as proc

def main(CLI)
    for arg in proc::args()
        print str arg # first arg is the process name
```

For simple flag handling, use the following functions
to check if they exist or the value following them. The last
case either fails if the flag is not found, or can be made
to return a string default. Finally, there are several ways
of interacting with the system, such as directly calling
`proc::system` with a command line command.

```python
import std.core
import std.io.process as proc

def main(CLI)
    count = nat process::arg_after("--count", "1")
    print nn "count: "
    print count
    if proc::arg_exists "--verbose"
        print "in dir with contents"
    print proc::system "ls"
```

## working with strings

Most CLI programs spend a lot of time processing text, where quoted
literals are `cstr` and enjoy some fast comparisons between themselves.
Runtime strings are `str` and can either be converted from literals
or be obtained from CHARS allocator effect. Previously we passed a 
`new CHARS` argument to main, and indeed some allocators can be
automatically created this way. However, the snippet below creates a 
custom arena allocator of a fixed capacity instead; arenas are fast
because the involve near-zero indirection. We also use the same allocator 
for string addition. Can use `circular` instead of `arena` to reuse
content once full; this is safe (no failures due to space consumption
for strings that fit inside) and theoretically supports an indefinite 
amount of operations. However, it may corrupt earlier strings if you 
set too small capacity.

```python
import std.core

def main(CLI)
    # pass the result of one memory allocation to the arena
    CHARS = edit arena alloc 4096
    print nn "name: "
    name = str CLI
    greeting = "hello "+name+"!"
    print greeting
```

Common string operations are presented below. These work with 
both `str` and `cstr`. Slicing is a zero-cost abstraction that
does not copy string data but instead offsers a view; in general
all strings are treated as a view onto character buffers.

```python
import std.core

def main(CLI)
    message = "I like bananas!"
    print message.starts_with "I like"
    print message.ends_with "!"
    print message.contains "anana"
    print message.slice of 3         # prints "I l"
    print message.slice of (3 to 6)  # prints "ike"
    print message.slice of (3 len 3) # prints "ike"
```
