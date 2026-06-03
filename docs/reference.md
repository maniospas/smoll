<div class="toc" markdown="1">

**Section 1. Basic Syntax**<br>
_1.1._ [import](#import) <br>
_1.2._ [calling notation](#calling-notation) <br>
_1.3._ [mutability](#mutability) <br>
_1.4._ [types](#types) <br>
_1.5._ [type mutability](#type-mutability) <br>
_1.6._ [conditions](#conditions)<br>
_1.7._ [recursion](#recursion) <br>
_1.8._ [effects](#recursion) <br>
_1.9._ [unions](#unions) <br>
_1.10._ [literal types](#literal-types) <br>
_1.11._ [conditional compilation and default arguments](#conditional-compilation-and-default-arguments)<br>
_1.12._ [compile-time evaluation](#compile-time-evaluation)


**Section 2. Safe Resources**<br>
_2.1._ [buffers](#buffers)<br>
_2.2._ [{pointers}](#pointers)<br>
_2.3._ [{substructures}](#substructures)<br>
_2.4._ [stable references](#stable-references)<br>
_2.5._ [try and fail](#try-and-fail)<br>
_2.6._ [{iterators}](#iterators)<br>
_2.7._ [{defer}](#defer)<br>
_2.8._ [catching errors](#catching-errors)<br>
_2.9._ [allocator-effects](#allocator-effects)<br>
_2.10._ [{debugging tools}](#debugging-tools)<br>
_2.11._ [{bounded compute}](#bounded-compute)<br>

**Section 3. Standard Library**<br>
_3.1._ [lists](#lists)<br>
_3.2._ [strings](#strings)<br>
_3.3._ [maps](#maps)<br>
_3.4._ [io](#io)<br>
_3.5._ [processes](#processes)<br>
_3.6._ [random](#random)<br>
_3.7._ [{mini and bits}](#mini-and-bits)<br>
_3.8._ [vectors](#vectors)<br>
_3.9._ [graphics](#graphics)<br>
_3.10._ [process and web](#process-and-web)<br>

{...} are advanced functionality

</div>

# Section 1. Basic Syntax

## import

Here is how to import the entire contents of another source code
file. The `print` and `console` functions are imported from the core. 
Assigning to the CLI variable tells the program to print to the
command line interface, that is, the currently open terminal. 
This is actually an [effect](#effects), though up until learning about
those just treat it as boilerplate for most simple programs.

```python
import "std/core.s"

def main()
    # this is a line comment, by the way
    CLI = console() 
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
    CLI = console() 
    print "hello world!"
```


You can also import a file as a namespace to access its
contents with the `:` notation. This is more verbose
but unambiguous, like below. You can even access child
namespaces.

```python
import "std/core.s" as core

def main()
    CLI = console() 
    core:print "hello world!"
```

If you want to import something specific, use `:` within
the import statement. You can use the path instead of the
namespace name too, for example to bring a single function 
from a file.

```python
import "std/core.s":print

def main()
    CLI = console() 
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
    CLI = console() 
    p = (1,2)
    print add p
    print add(1,2)
```

The `.` operator can also pipe some data
into the beginning of a function like below. This
works as a notation for calling functions like class 
methods. You can always refer to functions
within namespaces.

```python
# an atypical import structure for demonstration
import "std/core.s" as core

def main()
    CLI = console() 
    x1 = 1
    x2 = x1.core:add 1
    core:print x2.core:add 2
```

In general, avoid needless parentheses,
as the snippet below does (`f1 f2 ... args` is a chain of 
function calls). One particularly useful function
from the standard library's core is `nn`, standing
for *no \n* that basically takes numbers or strings
as inputs and outputs a tuple of the same value accompanied 
by *""*. This is passed into the `print` function, 
whose optional second argument determines the line ending; *"\n"* 
by default but this time we prevent that to no end the line.

```python
import "std/core.s"

def main()
    CLI = console() 
    print nn "hello " # equivalent to print("hello", "")
    print "world!" 
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
    CLI = console() 
    x = mut 1  # mutable - we want to mutate it further
    x = x+2
    x = x+3
    print x
```


## types

All functions declare corresponding types via their returned values.
That is, you can use the function's name to refer to data with
equivalent structure. Below is an example, where the
`nat` type represents to natural numbers/non-negative integers.
 Other builtin types are `bool`, `int`, `float`, and `cstr` for
string literals. It bears stressing that, when you see integer
numbers in the code, these are always natural numbers. This is 
a deliberate choise to enforce memory safety later.

```python
import "std/core.s"

def toinfinity(nat start)
    pos = mut start
    return (start, pos)

def next(edit toinfinity r)
    r.pos = r.pos+1

def main()
    CLI = console() 
    r = toinfinity 0
    next r # proper loops later
    print r.pos
    print add r
```

The example above uses the `.` notation to obtain  
a value packed in a type by name. This name is determined
by the returned value's name.

Types like the above are structurally matched, as we did
when applying `add` to the range construct. This structural
typing is rich but can be kind of unsafe if you do not keep
track of your data shapes in that you may accidentally allow
applying the same functions to unforeseen data structures. This
weakness is also its stronges theoretical benefit, though; it
becomes a determine only for structures that also require some
relational invariant between values.

To prevent implicit structural matches, 
use the following `class` notation to wrap the returned value.
You will mainly want to do so when the relations between class
field values (e.g., a character buffer and its used size) is
important to safeguard.

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
    CLI = console() 
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
    CLI = console() 
    f = Field(1.0, 2.0, 3.0, 4.0)
    print f.a.x+f.b.y # prints 5.0
```

One notable singleton in the standard library is the `console`
used to represent the system terminal in which the program 
is running. Being a singleton forces sequential execution order,
even in programs that leverage parallelism. Below is an example
where this singleton is used to also read a float number. Similar 
methods exist for reading strings on buffers, or other number types.

```python
import "std/core.s"

def main()
    CLI = console() 
    print nn "Give a number: "
    x = float CLI
    print nn "Its square is: "
    print x*x
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
    CLI = console() 
    t = mut Test()
    t = Test()
    print(t.x) 
```

Strip away any mutation capabilities by using `const` like `mut`.

```python
import "std/core.s"

def Test()
    x = mut 1
    y = 2
    return class(x, y)

def main()
    CLI = console() 
    t = Test()
    print t.x # prints 1
    t.x = 0
    print t.x # prints 0
    print t.y # prints 2
```

All function arguments are considered `const`.
If you want to preserve their type's mutable fields
without allowing a full rewrite use `edit`.

```python
import "std/core.s"

def Test()
    x = mut 1
    y = 2
    return class(x, y)

def test(edit Test t)
    t.x = 10 # allowed only thanks to 'edit'
    print t.x

def main()
    CLI = console() 
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
    CLI = console() 
    x = 1.0-2.0
    if x<0.0
        print "x is negative"
    print "done"
```

You can have one-liners for conditions and loops,
like the following version.

```python
import "std/core.s"

def main()
    CLI = console()
    x = 1.0-2.0
    if x<0.0 print "x is negative"
    else if x==0.0 print "x is zero"
    else print "x is positive"
```

```python
import "std/core.s"

def main()
    CLI = console()
    x = 1.0-2.0
    if x<0.0 sgn = "-" else sgn = "+"
    print nn "sign is: "
    print sgn
```

Loops are similar to conditions, but execute multiple
times until they check to false. You can use `continue` 
to skip the rest of the current loop and `break` to halt it. 
Here is a simple example. Please do not write code like this.

```python
import "std/core.s"

def main()
    CLI = console() 
    i = mut 0
    while true # overengineered
        if i==5 
            break # stop this way
        if i==3
            i = i+1 # skip printing 3 
            continue 
        print i
        i = i+1
```

A more efficient way to write loops, is with the `for variable in iterator`
pattern, which uses iterators that have the means to
obtain the next element. The `range` iterator, for example, 
takes an end number or a pair of start and end numbers and allows
calling `next` to retrieve the next value until the end
is reached (non-inclusively). Iterators safely try to keep producting new
elements until they fail to do so (any kind of failure stops them).
Underneath, they desugar to [error code semantics](#try-and-fail).
More on iterators later.

```python
import "std/core.s"

def main()
    CLI = console() 
    for i in range 10
        print i
```

*Smoλ* provides `and` and `or` operators. These work on boolean variables
like normal, but have two more properties:

- They "short-circuit" the right-hand side of the expression if the result can already be inferred from the left operand. For example, the expression `x and complicate_check(y)` does not run the function if `x` is false, whereas `x or complicate_check(y)` does not run the function if it's true.
- Non-boolean values can be provided for the right-hand operand, in which case the expression's result has the same type as the operand. In case of short-circuiting `x = false and y` sets `x` to be a zero-initialized copy of `y` (zero initialization is always valid), whereas `x = true or y` set the result to be `not y` given that a function `not` exists.

Below is an example that highlights the short-circuiting properties of logical operators.

```python
import "std/core.s"

def point(float x, float y)
def add(point p1, point p2)
    return point(p1.x+p2.x, p1.y+p2.y)
def all_positives(point p)
    return p.x>0.0 and p.y>0.0
def not(point p)
    return point(1.0-p.x, 1.0-p.y)
def main()
    CLI = console() 
    p = mut point(10.0, 20.0)
    # 'neg' to make numbers negative
    p = (all_positives p) and add(p, neg 30.0, neg 30.0) 
    print p.x # -20.0
    print p.y # -10.0
    p = (not all_positives p) or (1.0,1.0)
    print p.x # 1.0
    print p.y # 1.0
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
    CLI = console()
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

Smoλ's type system is deliberately
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
    CLI = console()
    print fib(10) # prints 89
```


But sometimes we really need unbounded recursion, right?
A simple trick is to declare returns that never run, like below. 
Why returns that "never" run are useful in edge cases 
will be discussed later, in the [bounded compute](#bounded-compute) 
section. For now, just it suffices to say that "never" does not actually
mean never.

```python
import "std/core.s"

rec wooo()
    CLI = console()
    if false return blank()
    print "wooo"

def main()
    wooo()
```



## effects

No, don't run!

*Smoλ* deliberately avoids a complicated effect system; it just presents the ability to pass
some arguments implicitly from the calling scope. In the standard library later, this mechanism
is mainly used for passing memory allocators around. However, we have already seen a much more 
fundamental usage in declaring `CLI = console()` in almost all our main functions.

You can have the `effect` keyword before an argument in a function's signature to
declare an effect. There is no other difference in how you would write or call the function.
You only get one additional benefit; the compiler will try to pull variables with the same name 
from the calling scope. Effects can only be placed at the start of funtion, and gathered
scope variables will be placed there too. 

Below is an example. Avoid using effects when not needed for clarity, as they introduce 
calling complexity in that you are not explicitly passing arguments around.
That said, you can explicitly pass all function arguments,
in which case functions are called normally and nothing is gathered; this prevents 
accidental implicit behavior. By convention, CAPITALIZE effect names so that assigning to them
is made explicit by the code.

```python
import "std/core.s"

def inc(effect nat INCREMENT, effect mut nat COUNTER, nat number)
    COUNTER = COUNTER+1
    return number+INCREMENT

def main()
    CLI = console()
    COUNTER = mut 0
    INCREMENT = 1
    print inc inc inc 9      # prints 12
    print inc(3, COUNTER, 4) # prints 7
    print COUNTER            # prints 4 ('inc' was called four times)
```

Seing the above example, we can finally (and only now!) learn how to print
in functions other than `main`; pass the CLI effect. Like below. Importantly,
the console is a `singleton()` and thus can be created only at one place in
a program. The added boilerplate is well worth the effort; even the console
initialization is used to ensure that a printable console exists.


```python
import "std/core.s"

def greet(effect mut console CLI)
    print "hello world"

def main()
    CLI = console()
    greet()
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
import "std/core.s":print

def unsafe_add(float x, float|int y)
    {builtins:float z=x+y;}
    return z

def main()
    CLI = console()
    print unsafe_add (1.0, int 2)
```

Type alternatives can also be named for reusability.
This is called a union type in that it brings together
several alterantives to be referenced via the same name.
An example follows.

```python
import "builtins"
import "std/core.s":print

def Number = float|int|nat
def unsafe_add(Number x, Number y)
    {builtins:float z=x+y;}
    return z

def main()
    CLI = console()
    print unsafe_add (1.0, 2)
```


*Warning: You can skip the more complicated aspects of the type system in the rest of this subsection. Unlike `|`, they are only rarely needed, especially in well-structured code that defines types incrementally.*

In truth, *smoλ* implements a linear type system, but this
was hidden till this point because people tend to shy away
from reading technical terms. Practically, it means
that -in addition to type unions- you can also get the intersection
of type unions with the `&` symbol. Use parantheses like normal.

Next is an example where, say, we define a `float` function that returns
something other than a builtin float number. We can get the intersection
of all float definitions that are also numbers, or all those definitions
that are not numbers with the '\` symbol, which is the mathematical 
symbol for set differces.

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
    CLI = console()
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
out of the ordinary. By the way, prefer CAPITALIZING
literal types (so capitals indicate either effects or literals).

```python
import "std/core.s"

def INCREMENT = 1
def inc(nat x)
    return x+INCREMENT

def main()
    CLI = console()
    print inc 0  # prints 1
```

But literal types can also select which
function to call, like below. Doing so requires retrieving
the literal's type by evaluating `type value`, where value
can be a string or number literal.

```python
import "std/core.s"

def VERSION = "two"
def version(effect mut console CLI, "one") # just a literal type
    print "version one"
def version(effect mut console CLI, "two")
    print "version two"

def main()
    CLI = console()
    v = type "two"
    version v # calls the correct version
    version type VERSION # calls the same version
```

Literal types are still types and are associated to named variables.
For example, `"two" number_name` is a valid function argument of type `"two"`.
This is not a value and yout cannot, say, print it.

But you can get back the value associated value with the type via 
the `compiler:literal` function. 
That is, `compiler:literal type "two"` yields the `cstr` value `"two"`.
This way, you can extract values from the type system.
An example that restricts how functions are called is presented next.

```python
import "std/core.s"

def inc(nat x, blank|1|2 inc)
    if inc is blank  # check if exists - see next section
        inc = type 1 # literal convertible
    return x+compiler:literal inc

def main()
    CLI = console()
    print inc 0           # prints 1
    print inc (0, type 2) # prints 2
```

Check whether a variable belongs to a
literal type by performing an `is` check to obtain
a boolean value. Contrary to the zero-cost conditional 
compilation of the next section, which has zero runtime
overhead, literal types may be resolved
to several runtime checks.

```python
import "std/core.s"

def ENUM = "A"|"B"|"C"
def answer_schemas(ENUM first, ENUM second, nat minutes_to_answer)
def answers(cstr first, cstr second, nat minutes_to_answer)

def main()
    CLI = console()
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

Literal types culminate in a feature that allows usage of the type name as a language keyword
in place of a comma separator. In particular, two tuple elements (such as function arguments)
can be separated by a single word instead of commas, and that word resolves to a variable of
the same-named type literal. Below is an example.

Do remember that this syntax replaces the comma separator. So it occurs after an expression 
ends. Therefore, to convert two literals
back-to-back, you need use a placeholder with no outputs as an argument, 
like `blank()`. But you can still have a literal at the end of an expression.

```python
import "std/core.s"

def modify(mut nat x, "add", "one")
    x = x+1
def modify(mut nat x, "add", nat y)
    x = x+y
def modify(mut nat x, "sub", nat y)
    x = x-y
def main()
    CLI = console()
    x = mut 5
    modify(x add 3)
    modify(x add blank() one)
    print x # prints 9
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
import "std/core.s"

def typed_print(effect mut console CLI, nat|int|float|cstr value) 
    if value is nat|int|float
        print nn "this is a number: "
    else
        print nn "this is a string: "
    print value

def main()
    CLI = console()
    typed_print 1
    typed_print 2.0
    typed_print "test"
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
    CLI = console()
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
occur only during compilation and do not affect running time.

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
    CLI = console()
    print inc 2.0  # prints 3.0
    print inc(2,2) # prints 4
```

## compile-time evaluation

Rember value literals? There exists actually a more general mechanism
that packs a tuple of values onto a literal after evaluating them at
compilation time. This evaluation uses a lightweight built-in interpreter
and is initiated with the `compt` keyword. Next is an example.

```python
import "std/core.s"

def VALUES = compt (1,2)
def main()
    CLI = console()
    print add VALUES
```

Next is a more complicated scenario where several functions
build a temporary `cstr` to be used during exectuion. The interpreter
is robust against even unsafe functions by showing errors when
things go wrong. Normal pointers cannot be literals and therefore
we could not just pack a `str`.

```python
import "std/core.s"

def CONSTANT = compt cstr unsafe_temp add(arena alloc 128, "hello", " world!")
def main()
    CLI = console()
    print CONSTANT
    print CONSTANT=="hello world!" # 'true'
    # the above check is correct even if the
    # comparison of cstr is done via pointers
```

Even simple memory layouts (that do not nest pointer indirection) can 
be ported from `compt` as constants. An example using vector operations
is shown below. See more about [vectors](#vectors) later; for now it
is important to see that a constant data segment is ported over to 
runtime.

```python
import "std/core.s"
import "std/sci.s"

def ones = compt vec [1.0, 1.0]
def main()
    CLI = console()
    v = mut vec [5.0, 10.0]
    allocator = arena float[].alloc 128
    v = v+ones
    print v[0] # prints 6.0
    print v[1] # prints 11.0
```

Lastly, leverage this mechanism to run code during compilations, like below.

```python
import "std/core.s"

def main()
    compt print "compiling"
    print "running"
```

*Warning: Compile-time evaluation is computationally bounded by force, operating in a few KB of memory, and up to a million unoptimized operations that translate to less than a second of running time in modern computers. However, overusing this feature may still make your programs slow.*


# Section 2. Safe Resources

## buffers

Buffers are memory-allocated collections of items
and can be declared as `T[]`, where *T* is a type.
Create and allocate a buffer with a pattern that looks likt this:
`buf = float[].alloc 4`. This creates a new buffer storing float nubmers
(has type `float[]`) that contains four numbers.

Allocation will create an error if it is called on an existing
buffer to change its number of
elements from non-zero to something different.
In those cases, use `resize` instead, though the exact usage of
this is covered in [stable references](#stable-references).

A second important feature is the element access operator `buffer[pos]`,
which can be used to extract an object stored at a specific position. 
In general, this operator is implemented by overloading the `get` 
and `mutget` functions; beware that details involve pointers
tackled in the next section. 
Use `buffer[pos] = value` to copy some data on a buffer's element.

All buffer indexes are referenced by `nat` numbers, that is, natural 
numbers/non-negative integers. This is the default integer type, assumed
when writing numbers like `1` to avoid a whole area of logic bugs associated 
with negative indexes. Next is an example of buffer usage.

```python
import "std/core.s"

def main()
    CLI = console()
    buf = float[].alloc 10 # allocate 10 elements
    print buf[0] # prints 0, as buffers are zero-initialized
    buf[1] = 1.0
    print buf[1]
```

The outcome of allocation is a mutable buffer. Declare this as 
as `const` to forcefully disallow content modifications or resizing. 
That said, function arguments are `const` unless indicated otherwise 
so tere will only rarely be need to use this keyword.
Below is any example of how the compiler enforces this constraint.
The compiler does track some additional information like element size
in bytes and, importantly, if there are dependent buffers from which
the type is inferred. 

In this setting, it is not allowed to wrongfully promote the buffer *buf* to
being mutable; elevating buffer or -more generally- pointer pemissions
from constant to mutable is not allowed for safety.

```python
import "std/core.s"

def create()
    buf = float[].alloc 2
    buf[0] = 1.0
    buf[1] = 2.0
    return const buf

def main()
    CLI = console()
    buf = create()
    print buf[0]
    buf[1] = 1.0 # CREATES AN ERROR
```

<div class="console">
<code class="output">
[<span style="color:orange">+</span>] process      tests/test.s
<span style="color:#F056AC">type error: could not resolve any call for 'mutget(const float[] {element size 8} {follows float ptr ..unsafe_ptr}, nat) -> any'</span>
    alternatives
    - mutget(edit any[] {element size ?}, nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
    - mutget(list, nat pos) -> (mut any ptr ret {follows any ptr l.buffer.unsafe_ptr})
at tests/test.s line 5 column 12
    buf[1] = 1.0 # CREATES AN ERROR
       <span style="color:red">^</span>
</code>
</div>

Use `any` as the type to mark functions with type-agnostic
buffer operations. The original type cannot be retrieved back while
those functions are running, but this operation is still 
useful for writing generic code that depends on memory contents
and data sizes packed within buffer metadata. If you run a 
function with such generic typing, the compiler identifies
the correct output types for buffers of pointers. For example,
the abovedescribed allocation mechanism is implemented
for generic buffers and automatically converted back into
the input buffer type.

```python
import "std/core.s"

def print(any[] buffer)
    CLI = console()
    print(len buffer, " elements in buffer\n")

def main()
    x = float[]
    print(x)
```

For function arguments that need to be specialized
on a buffer type, declare an intermediate
type like below.

```python
import "std/core.s"

def named_buffer(str name, edit any[] buf)
    return class(name, buf)

def named_strbuffer()
    return named_buffer(str "", str[])

def populate(edit named_strbuffer named) # for str[] only
    named.buf[0] = str "hello"
    named.buf[1] = str "world"

def main()
    CLI = console()
    elements = named_buffer(str "greeting", str[])
    elements.buf = elements.buf.alloc 2
    populate elements
    print elements.buf[0]
    print elements.buf[1]
```

Below is a convenient shorthand for creating and populating
a buffer with comma-separated contents by placing those within
`[...]`. Do note that buffer types use no contents in the brackets
normally. Under the hood, the currently available `alloc` function 
is used to make the allocation.

```python
import "std/core.s"

def print(effect mut console CLI, cstr[] sentences)
    for sentence in sentences
        print sentence

def main()
    CLI = console()
    print ["hello world!", "... and goodbye for now."]
```

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

*Smoλ*'s compiler checks on pointer safety and creates error if
it cannot prove safe behavior. By not relying on programmatic
semantics, a wide breadth of programs is allowed. It will mainly
ask you to return together all values whose internal pointers may
have become tangled due to function calling and returning. For example,
if you allocate a character buffer to place strings inside that you store on 
a second buffer of strings, the compiler requires that the two buffers
are returned together.
Or you may be asked to not invalidate with `del` memory that is used elsewhere.

Functions declare pointer arguments per `any ptr`, `float ptr`, etc.
Below is an example.

```python
import "std/core.s"

def main()
    CLI = console()
    buf = float[].alloc 1
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

def Point2D(float x, float y)
    return class(x,y)

def Point3D(float x, float y, float z)
    plane = Point2D(x,y)
    return (plane,class(z))

def main()
    CLI = console()
    points = Point3D[].alloc 10
    points[0] = Point3D(1.0,2.0,3.0)
    plane = points@plane # can move this around
    print plane@x[0]
    print points[0].plane.x # equivalent data path
```

## stable references

You can work with data that reference other data
in that they are updated together. This is similar
to pointers, but comes under the safety 
restriction that you cannot change where references
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
    CLI = console()
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

References *are not types* but just some
property attached to local variables. Below is an 
example where a buffer needs to be resized and
this requires stable handling through `ref`.

```python
import "std/core.s"

def main()
    CLI = console()
    buf = ref alloc (mut float[], 10) # 'ref' is mandatory to resize later
    buf[1] = 1.0
    buf.resize 20
    print buf[1]
```

Below is a more complicated example, where a list is used
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
    CLI = console()
    s = test()
    print s.s1
    print s.s2
```

You can -and often should- mark the arguments of functions
with `ref` instead of `mut` or `const` to indicate that the
*contents* of memory pointers or other resources might change
but that their internals are safeguarded. This is not usually
needed.


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

def always_fail(effect mut console CLI)
    print "we are failing"
    fail "we failed!"

def main()
    CLI = console()
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
    CLI = console()
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

Finally, returns from failing
functions are just zero-initialized, but `try` has a boolean outcome that shows whether
an error is intercepted. Below is an example that safeguards against failing allocation.

```python
import "std/core.s"

def vector(nat size)
    return float[].alloc size

def main()
    CLI = console()
    if not try v = vector pow(1024,6)
        print "failed to allocate"
    print(len v, " numbers allocated\n")
```

Since failure is a fast abstraction in *smoλ*, it is also the implementation
mechanism for trying to produce next values. Below is an example, 
where `for` loops are syntactic desugar to something similar.

```python
import "std/core.s"

def main()
    CLI = console()
    it = range 5
    while try i=next it
        print i
```

## iterators

*Warning: This subsection is about creating your own iterators and can be skipped in the first reading.*

We can now full grasp the concept of iterating across 
some data structure. Recall that this is done like
below. The expression after `in` is evaluated first
and forms the iterator that we are traversing, whose
values are assigned to `i`. This is equivalent to 
the previous section's last example; the `for` loop
is converted into a `while try`.

```python
import "std/core.s"

def main()
    CLI = console()
    for i in range 10
        print i   # prints 0,1,2...,9
```

However, iterators do not apply arbitary functions
but instead employ the `get(data, nat index)` function 
that overloads the `data[index]` operator for indexes
that are natural numbers. In truth, the range ieration
examples is equivalent like the next one.

```python
import "std/core.s"

def main()
    CLI = console()
    iterator = range 10
    hidden_index = mut 0
    while try i=iterator[hidden_index]
        hidden_index = hidden_index+1
        print i   # prints 0,1,2...,9
```

If the outcome of the `get` is a pointer, it automatically
dereferenced so that you can readily iterate across buffers,
like below.

```python
import "std/core.s"

def main()
    CLI = console()
    for i in [1,2,3]
        print i
```

The hidden index can be mutated and used to keep track 
of the iteration state, even when the iterator itself
is constant. But you can always skip it. For example,
next is a program that keeps the iteration state inside
the data.

```python
import "std/core.s"

def solution(mut nat x, mut nat y)
def get(edit solution s, nat) # skip the iteration index argument
    s.x = (s.x+1)/2
    s.y = (s.y+1)/2
    if s.x==s.y fail "converged"
    if s.x>s.y return s.x-s.y
    return s.y-s.x

def main()
    CLI = console()
    sol = solution(mut 32, mut 19)
    for diff in sol 
        print nn "difference "
        print diff
    print sol.x
```

## defer

*Warning: Deferred execution is mainly useful for safe resource handling when unsafely creating new types of resources. This can be skipped.*

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
    CLI = console()
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
    CLI = console()
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
    CLI = console()
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
    CLI = console()
    proc = mut process:read "echo \"hello world!\""
    try bye_error()
    del proc

    if try error = compiler:catch()
        print cstr error # prints 'bye!' if no process error
        fail error       # can fail with error codes too
```

## allocator effects

Where effects are the most useful is overloading operations that require
external resources. The next example demonstrates this using vectors
from the corresponding standard library [section](#vectors).
The *FLOATS* effect is used to pass a shared preallocated memory buffer
to all needed vector construction. Effects do not propagate outwards,
so you can only look at function signatures to know which effects can
be declared. For example, one of the possible
additions involving vectors, which is used by the `+` operator,
is declared as `add(effect edit vec_allocator allocator, vec v1, vec v2)`.

```python
import "std/core.s"
import "std/sci.s"

def main()
    CLI = console()
    FLOATS = arena float[].alloc 128
    v1 = vec 10 # vector of 10 elements
    v2 = vec 10
    v1[0] = 1.0
    v2[0] = 2.0
    result = v1+v2
    print result[0]
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
    CLI = console()
    s1 = str "s1"
    s2 = str "s2"
    debug:print type "--- main ---" # prints '"--- main ---"' at compile time
    s = debug:print (s1,s2)         # prints 'const str, const str' at compile time
    print s # ERROR due to undefined print, but the above still prints
```

Finally, assert that a specific point in a function does not lie within a loop
or condition with the `debug:branchless()` check. This asserts that there is no 
conditional compilation going on, with the compiler creating an error otherwis, 
and can be used to ensure that conditions not accidentally evaluated at runtime. 
The next example uses it to verify that  there is no runtime overhead from a particularly
complicated comparison - this is skipped because the difference in the types of *a* and *b*'
suffices to make a judgement, even if enums usually require runtime checking.

```python
import "std/core.s"

def test1(nat a, nat b, "one"|"two")
def test2(float a, float b, "one"|"two")

def main()
    CLI = console()
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

rec wooo(effect edit range recursion_safety, nat i)
    next recursion_safety
    if false return blank() # do not return anything
    return wooo(i+1)

def main()
    CLI = console()
    recursion_safety = range 14 # recursive depth limit in playground
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
    CLI = console()
    li = ref list mut float[]
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
its length, and its first character for fast cache-friendly comparisons. The first character 
is `\0` for empty strings.

`cstr` data are trivially convertible to strings. 
Below is an example, where printing is also implemented for
strings. Theoretically, this extracts the size and first
character too, but such data are ignored if not needed.

```python
import "std/core.s"

def main()
    CLI = console()
    print str "hello world!"
```
You can convert string contents to numeric types. 
This creates errors on failure.

```python
import "std/core.s"

def main()
    CLI = console()
    print float "123"
```

Strings can be copied on a pair of buffer and mutable position inside it `char[], mut nat`.
This structure is used a lot when creating buffers for memory management and is called an
`arena`. In general, arenas are just buffer and position pairs of a specific type. Later we
will also use them to store `float` vector contents.

```python
import "std/core.s"

def main()
    CLI = console()
    buf = arena alloc KB 4 # equivalent to buf = (alloc KB 4, mut 0)
    s = buf.copy "hello world!"
    print s
```

To make code read more naturally, character arenas can be set to a CHARS effect.
Recall that effects are arguments that are automatically retrieved from the calling
location based on their name.

```python
import "std/core.s"

def main()
    CLI = console()
    CHARS = arena alloc KB 4 # effect for placing string data
    s = copy "hello world!"
    print s
```

Also copy strings on buffers managed by lists, which can also be used 
as a CHARS effect to manage string allocations.
DO use `ref` for stability, as potential list resizing
could invalidate the pointer where the string thinks the buffer starts,
and the compiler would correctly point that out and refuse to progress
on an erroneous program.

```python
import "std/core.s"

def main()
    CLI = console()
    CHARS = ref list mut char[]
    s1 = copy "hello world!" # would have been invalidated if we did not use `ref`
    s2 = copy "hello world!"
    print s1
    print s2
```

Finally, strings provide the `add` function as a combination of a CHARS effect
to place a concatenated outcome, and two individual strings or cstr. By means
of automatically passing CHARS (normal effect behavior) this function be treated
as a `+` operation like below.

```python
import "std/core.s"

def main()
    CLI = console()
    CHARS = arena char[].alloc KB 4
    s1 = copy "hello"
    s2 = copy "world!"
    print s1+" "+s2
``` 

That said, it is preferred to copy strings onto
buffers at consecutive places for more efficient operations. The above string addition
is rewritten in the next snippet to use less than half space onto the buffer.
Note usage of the literal `from` via the comma-less syntax sugar for [literals](#literal-types). 
This indicates that the construction should be
structurally matched to the variation `str(char[] buffer, nat end, "from", nat start)`.
There also exists the variation `str(char[] buffer, nat start, "to", nat length)`.

```python
import "std/core.s"

def main()
    CLI = console()
    CHARS = arena alloc KB 4
    start = CHARS.pos
    copy "hello"
    copy " "
    copy "world!"
    print str(CHARS from start)
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
    CLI = console()
    map = mut strmap str[].alloc 128
    map["hello"] = str "hello world!"
    map["manio"] = str "it's a me, manio."
    print map["hello"]
    print map["manio"]
    
    it = arena map.keys
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
line, like below. This needs a `char[]` buffer 
-or a `arena` on that charcater buffer- on which to 
store lines.

```python
import "std/core.s"
import "std/io.s"

def main()
    CLI = console()
    f = file:read "README.md"
    mem = char[].alloc KB 4 # max 4 KB chunk size, on char[] by default
    for line in (mem, f)
        print nn "|"
        print nn line
    print "" # only now print a new line
```

Similarly, create a file for writing like below. Can also delete it,
or even defer its deletion to when the file is no longer in use.

```python
import "std/core.s"
import "std/io.s"

def main()
    CLI = console()
    f = file:write "tmp.txt"
    f.print "hello world"
    defer 
        dir:remove "tmp.txt"
```

Above was a first introduction to the `dir` namespace for directory 
operations. Below is how to iterate through directory contents. This
yields temporarily available strings. Availability means that the
contents of those strings may be corrupted even if they remain memory
safe.

```python
import "std/core.s"
import "std/io.s"

def main()
    CLI = console()
    dir = mut dir:read "."
    for entry in dir
        print(entry, " ")
        if dir:is_file entry print "file"
        else print "dir"
```

## processes

Processes can also be read similarly to files. To begin with, a blocking system process
that fails on non-zero error code can be evoked like below.

```python
import "std/core.s"
import "std/io.s"

def main()
    CLI = console()
    success = try system "echo \"hello world!\""
    print success
```

One can also open and communicate with running processes
similarly to files.

```python
import "std/core.s"
import "std/io.s":process as proc

def main()
    CLI = console()
    process = proc:process "ls"
    buf = arena char[].alloc KB 4 # example with growing position
    for line in (buf, process)
        print line
```

Equivalently, manually release the process to wait for its conclusion.
As resource release code intercepts erroneous termination with `try`,
check on this with `compiler:catch()`.  To propagate or otherwise
handle the intercepted errors, use a pattern like below.

```python
import "std/core.s"
import "std/io.s":process as proc

def main()
    CLI = console()
    process = proc:process "ls"
    del process
    if try error = compiler:catch()
        fail error # can fail on error codes too
```

## random

Retrieving random numbers can be done from the namesake standard library module.
There are two types of random numbers available out-of-the-box: *splitmix64* for
faster computations with only 64-bit random state and *Xoshiro256plus* for 256-bit
random state that is better for longer random sequences. 
**Neither of these is cryptographically secure.**

The `splitmix64` function acts on a mutable `nat` state to produce a next
random `nat` number, or -if no argument is provided- creates a mutable seed that uses the
system clock as a source of entropy. Here is an example.

```python
import "std/core.s"
import "std/rand.s"

def main()
    CLI = console()
    seed = mut splitmix64()
    print splitmix64 seed 
    print splitmix64 seed
```

*Xoshiro256plus* is meant to compute random numbers in the range [0,1] and is recommended
for long-running programs. Use this unless you know what you are doing, or need cryptographically
secure random numbers (these are NOT sscure). Initialize it per `Rand()` and call `next` to
retrieve next random values.

```python
import "std/core.s"
import "std/rand.s"

def main()
    CLI = console()
    rand = mut Rand()
    print next rand
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
    mem = arena char[].alloc KB 4
    iter = range len buff
    start = mem.pos
    while try i=next iter
        mem.copy mini:unpack buff[i]
        mem.copy " "
    return str(mem.buf,start,mem.pos)

def main()
    CLI = console()
    buff = mini:str[].alloc 6
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

The standard library provides the means of conducting scientific computations
via matrix and vector arithmetics. Everything is stored in underlying `float[]`
buffers that can be set as *allocator* effects and imported from the *std/sci.s* 
file. Let us start with a quick preview of a vector. Vector elements can be
set and read as if working on buffers, but additional operations are provided.

```python
import "std/core.s"
import "std/sci.s"

def main()
    CLI = console()
    v = vec [1.0, 2.0, 0.0, 0.0, 0.0]
    print ("(sum, mean, std) = (", "")
    print (sum v, ", ")
    print (mean v, ", ")
    print (std v, ")\n")
```

Vectors can be placed on `arena` buffer-position pairs, as well as
on circular buffer constructs that restart from the starting position 
after the end.

```python
import "std/core.s"
import "std/sci.s"

def safe_main()
    allocator  = ref circular float[].alloc 200 # used by vector operation effects
    allocator2 = ref circular float[].alloc 200 # useless 
    v1 = vec 10
    v2 = vec 10
    v1[0] = 1.0
    v2[0] = 2.0

    v = mut vec 10
    for i in range 5
        v = 2.0*(v1+v2+v)
        #v = allocator2.mul(2.0, v1+v2+v) # THIS WOULD CREATE AN ERROR
    print v[0]
    
def main()
    CLI = console()
    try safe_main()
    if try error=compiler:catch()
        print cstr error
```

An extension of vectors are matrices. These are defined
with similar patterns, including the consumption of
a whole `float[]` buffer to be split into a number of rows.
Matrix multiplication and matrix-vector multiplication are also
implemented.

```python
import "std/core.s"
import "std/sci.s"

def main()
    CLI = console()
    FLOATS = new() # allocate to new memory whenever needed

    a = mat [
        1.0, 0.0, 2.0,
        0.0, 3.0, 1.0
    ].any 2 # create a tuple of the (data,2) without parentheses

    a[0,0]=1.0

    x = vec [1.0, 2.0, 3.0]
    print nn "a*x"
    print a*x

    u = vec [1.0, 2.0]
    print nn "u*a"
    print u*a

    b = mat [
        1.0, 2.0,
        3.0, 4.0,
        5.0, 6.0
    ].any 3

    print "a*b"
    print a*b
```

## graphics

Graphics for games of desktop applications are supported
via *raylib*. Below is an example that moves sevral circles
around in a window.


```python
import "std/core.s"
import "std/sci.s" as sci
import "std/graphics.s" as graphics

def Circle(float _cx, float _cy, float _vx, float _vy, float _radius)
    cx = mut _cx
    cy = mut _cy
    vx = mut _vx
    vy = mut _vy
    radius = mut _radius
    return (cx,cy,vx,vy,radius)

def process(mut Circle ptr _self, float dt)
    self = _self.. # unpack
    self.cx = self.cx + self.vx * dt
    self.cy = self.cy + self.vy * dt
    if self.cx - self.radius < 0.0
        self.cx = self.radius
        self.vx = sci:abs self.vx
    if self.cx + self.radius > 800.0
        self.cx = 800.0 - self.radius
        self.vx = 0.0-(sci:abs self.vx)
    if self.cy - self.radius < 0.0
        self.cy = self.radius
        self.vy = sci:abs self.vy
    if self.cy + self.radius > 600.0
        self.cy = 600.0 - self.radius
        self.vy = 0.0-(sci:abs self.vy)
    _self << self

def draw(Circle self, edit graphics:Window win)
    white  = graphics:Color(255, 255, 255)
    teal   = graphics:Color(0,   200, 180)
    shadow = graphics:Color(0,   200, 180, 60)
    pos = (self.cx, self.cy)
    win
    .graphics:circ(self.cx + 4.0, self.cy + 4.0, self.radius, shadow)
    .graphics:circ(pos, self.radius, teal)
    .graphics:circ_line(pos, nat self.radius, 2, white)

def main()
    win = graphics:Size(800.0, 600.0).graphics:Window "Circles"

    N = 1000
    circles = Circle[].alloc N
    for create_circle&& in circles
        i = float compiler:for_counter() # builtin way of enumerating
        create_circle << Circle(400.0, 300.0, 200.0-i, 160.0+i, 30.0)

    while graphics:is_open win
        dt = graphics:dt()
        for proc_circle&& in circles # mutable pointer
            proc_circle.process dt
        frame = graphics:draw win
        win.graphics:clear graphics:Color(20, 20, 60)
        for draw_circle in circles
            draw_circle.draw win
        del frame
```

## process and web

One part of *smoλ*'s design philosophy is that programs should be able to communicate with
other programs to form an ecosystem in each machine. For example, why should someone embed
[CURL](https://curl.se/) and corresponding security features in their executable when they
can have the battle-tested command line tool at their disposal?

*This is not static linking!* It is actively encouraged to communicate with operating system
processes when the latter are longer-running. Then, system error codes are propagated as
normal failure. Of course, this vision requires a robust way of communicating with the operating
system. This is done via the `process` namespace under the `std.io.s` include like below that is
directly copied from the library. This dynamically constructs a command string on a buffer
and uses it to run a system process. The deferred process deletion can be force-executed via `del`,
thus waiting for the process's end. This may leave a notification of non-zero exit code, 
which can be caught afterwards to check for successful termination.

*Warning: System commands are not available in the online playground.*

```python
import "std/core.s"
import "std/io.s"

def run(cstr|str command)
    proc = mut process:read command
    del proc # force resource deallocation = end the process
    if try error = compiler:catch()
        print cstr error

def main()
    CLI = console()
    CHARS = arena char[].alloc 256
    path = "./tests/passing/"
    copy "./smoll "
    copy path
    test_dir = dir:read path
    for entry in test_dir # do not move the position
        if not entry.ends_with ".s" continue
        command = CHARS.buf.str endpos copy_null_terminated(local CHARS, str entry)
        print command
        run command
```

The next example demonstrates usage of CURL via the `web` namespace in the same include.
You might recognize this example from the language's front page.
The main usage pattern consists of passing a string or cstr url into the `web:get` function
to create a temporary file. The function returns the remporary file's path.
Of course, programmatic integration of libCURL functionality is still viable via 
C code injection, but is left outside of the standard library for now.

```python
import "std/core.s"
import "std/io.s"

def CHUNK_SIZE = 4096
def README = "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/README.md"

def main()
    CLI = console()
    mem = char[].alloc CHUNK_SIZE # pipe argument with dot, parentheses optional for one argument
    f = file:read web:get README  # save to .tmp with system curl and read it
    size = mut 0
    for line in (mem, f) # iterator defined over a (memory buffer, file) tuple
        size = size+len line
    print(size, " bytes downloaded\n")
```

*Info: The above pattern incurs some overhead in saving the file but will be further optimized in future language versions, for example with memory mapped files. Safety will remain the main concern of smoλ in all deployment settings.*
