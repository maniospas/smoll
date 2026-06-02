<div class="toc" markdown="1">[cstr](#cstr) 
[int](#int) 
[nat](#nat) 
[nat32](#nat32) 
[nat16](#nat16) 
[nat8](#nat8) 
[float](#float) 
[bool](#bool) 
[err](#err) 
[blank](#blank) 
[char](#char) 
[any](#any) 
[eq](#eq) 
[neq](#neq) 
[not](#not) 
[Number](#number) 
[is\_different](#is\_different) 
[neg](#neg) 
[add](#add) 
[mul](#mul) 
[div](#div) 
[mod](#mod) 
[lt](#lt) 
[gt](#gt) 
[le](#le) 
[ge](#ge) 
[sub](#sub) 
[pow](#pow) 
[console](#console) 
[flush](#flush) 
[nn](#nn) 
[print](#print) 
[exists](#exists) 
[bits](#bits) 
[lshift](#lshift) 
[rshift](#rshift) 
[xor](#xor) 
[and](#and) 
[or](#or) 
[range](#range) 
[next](#next) 
[get](#get) 
[KB](#kb) 
[MB](#mb) 
[GB](#gb) 
[len](#len) 
[new](#new) 
[bufpos](#bufpos) 
[strbufpos](#strbufpos) 
[circular](#circular) 
[str](#str) 
[copy](#copy) 
[copy\_null\_terminated](#copy\_null\_terminated) 
[unsafe\_temp](#unsafe\_temp) 
[endpos](#endpos) 
[slice](#slice) 
[starts\_with](#starts\_with) 
[ends\_with](#ends\_with) 
[contains](#contains) 
[alloc](#alloc) 
[resize](#resize) 
[last](#last) 
[mutlast](#mutlast) 
[mutget](#mutget) 
[list](#list) 
[push](#push) 
[is\_number](#is\_number) 
[splitmix64](#splitmix64) 
[Rand](#rand) 
[hash](#hash) 
[to\_hash\_base](#to\_hash\_base) 
[robinhood\_str\_entry](#robinhood\_str\_entry) 
[robinhood\_nat\_entry](#robinhood\_nat\_entry) 
[robinhood\_entry](#robinhood\_entry) 
[raw](#raw) 
[is\_zero](#is\_zero) 
[find](#find) 
[at](#at) 
[strmap](#strmap) 
[natmap](#natmap) 
[unpack](#unpack) 
[abs](#abs) 
[sqrt](#sqrt) 
[sin](#sin) 
[cos](#cos) 
[log](#log) 
[tan](#tan) 
[floor](#floor) 
[asin](#asin) 
[acos](#acos) 
[atan](#atan) 
[exp](#exp) 
[vec](#vec) 
[newvec](#newvec) 
[vecpos](#vecpos) 
[vec\_allocator](#vec\_allocator) 
[constvec](#constvec) 
[reduce](#reduce) 
[sum](#sum) 
[mean](#mean) 
[var](#var) 
[std](#std) 
[mat](#mat) 
[rows](#rows) 
[cols](#cols) 
[constmat](#constmat) 
[mutvec](#mutvec) 
[row](#row) 
[realloc](#realloc) 
[free](#free) 
[zero](#zero) 
</div>

# cstr
### cstr - constant string
*Defined by the compiler*

```rust
cstr() -> (cstr value)
```

### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(cstr value.cstr, str) -> (cstr value.cstr)
```

### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr value.cstr)
```

### cstr - a cstr description of an error code
*Defined in: std/core/error.s*

Error codes should *not* be compared numerically against
given numbers, as their numbering changes for different
programs. Instead, they should be converted to a cstr
string with this function, which can then be compared.
This comparison is also one numerical comparison, as
care is taken for all cstr to point to the same memory
location.

```rust
cstr(catch value) -> (cstr ret)
```

# int
### int - a signed integer value
*Defined by the compiler*

Represents values in the range `2^-63 to 2^63-1`.

```rust
int() -> (int value)
```

### int - cast to int
*Defined in: std/core/convert.s*

Converts a bit representation to the corresponding integer.

```rust
int(bits) -> (int z)
```

### int - cast to int
*Defined in: std/core/convert.s*

Overflows are mapped to negative integers and are not protected against.

```rust
int(nat x) -> (int z)
```

### int - cast to int
*Defined in: std/core/convert.s*

Serves as a tautology function for code that parses on multiple number types.

```rust
int(int x) -> (int z)
```

### int - cast to int
*Defined in: std/core/convert.s*

May lose information due to truncating.

```rust
int(float x) -> (int z)
```

### int - converts a string to an integer
*Defined in: std/core/convertstr.s*

```rust
int(str) -> (int number)
```
Potential errors:

27. invalid int conversion from string with only a sign
26. invalid int conversion from empty string
2. null pointer
28. invalid integer int from non-number string

### int - converts a string to an integer
*Defined in: std/core/convertstr.s*

```rust
int(cstr _s) -> (int number)
```
Potential errors:

2. null pointer
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
26. invalid int conversion from empty string
27. invalid int conversion from string with only a sign
28. invalid integer int from non-number string

### int - reads an integer from the console
*Defined in: std/core/convertstr.s*

```rust
int(console console) -> (mut int number)
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
23. unexpected end of console read
24. user input was not a float

# nat
### nat - an unsigned integer value
*Defined by the compiler*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat value)
```

### nat - cast to nat
*Defined in: std/core/convert.s*

Converts a bit representation to the corresponding natural number.

```rust
nat(bits) -> (nat)
```

### nat - cast to nat
*Defined in: std/core/convert.s*

Converting a character to a natural number considers
its bit representation interpreted as an unsigned number.

```rust
nat(char x) -> (nat value)
```

### nat - cast to nat
*Defined in: std/core/convert.s*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(nat x) -> (nat value)
```

### nat - cast to nat
*Defined in: std/core/convert.s*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(int x) -> (nat value)
```
Potential errors:

7. cannot convert negative int to id

### nat - cast to nat
*Defined in: std/core/convert.s*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(float x) -> (nat value)
```
Potential errors:

6. cannot convert negative float to id

### nat
*Defined in: std/core/array.s*

```rust
nat(nat16 x) -> (nat value)
```

### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s*

```rust
nat(str) -> (nat number)
```
Potential errors:

8. iteration end
2. null pointer
29. invalid nat conversion from empty string
30. invalid nat conversion from non-number string

### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s*

```rust
nat(cstr _s) -> (nat number)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
8. iteration end
29. invalid nat conversion from empty string
30. invalid nat conversion from non-number string
15. out of bounds

### nat - reads an unsigned integer from the console
*Defined in: std/core/convertstr.s*

```rust
nat(console console) -> (mut nat number)
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
23. unexpected end of console read
24. user input was not a float

### nat - retrieved unsigned number from 32 bits
*Defined in: std/mini.s*

```rust
nat(nat32 x) -> (nat value)
```

# nat32
### nat32 - a 32-bit unsigned integer value
*Defined by the compiler*

Represents values in the range `0 to 2^32-1`.

```rust
nat32() -> (nat32 value)
```

### nat32 - convert unsigned number to 32 bits
*Defined in: std/mini.s*

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

```rust
nat32(nat x) -> (nat32 value)
```
Potential errors:

57. nat value too large to pack in nat32

# nat16
### nat16 - a 16-bit unsigned integer value
*Defined by the compiler*

Represents values in the range `0 to 2^16-1`.

```rust
nat16() -> (nat16 value)
```

### nat16 - convert unsigned number to 16 bits
*Defined in: std/mini.s*

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

```rust
nat16(nat x) -> (nat16 value)
```
Potential errors:

56. nat value too large to pack in nat16

# nat8
### nat8 - a 8-bit unsigned integer value
*Defined by the compiler*

Represents values in the range `0 to 255`.

```rust
nat8() -> (nat8 value)
```

### nat8 - convert unsigned number to 8 bits
*Defined in: std/mini.s*

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

```rust
nat8(nat x) -> (nat8 value)
```
Potential errors:

55. nat value too large to pack in nat8

# float
### float
*Defined by the compiler*

```rust
float() -> (float value)
```

### float - cast to float
*Defined in: std/core/convert.s*

Serves as a tautology function for code that parses on multiple number types.

```rust
float(float x) -> (float z)
```

### float - cast to float
*Defined in: std/core/convert.s*

May lose information because floats are not exact representation of all integers.

```rust
float(int x) -> (float z)
```

### float - cast to float
*Defined in: std/core/convert.s*

May lose information because floats are not exact representation of all integers.

```rust
float(nat x) -> (float z)
```

### float - cast to float
*Defined in: std/core/convert.s*

Converts a bit representation to the corresponding float number.

```rust
float(bits) -> (float z)
```

### float - converts a string to a float
*Defined in: std/core/convertstr.s*

```rust
float(str) -> (float number)
```
Potential errors:

32. invalid float conversion from string with only a sign
33. invalid float conversion from non-number string
2. null pointer
34. invalid float conversion from string without a value after the dot
31. invalid float conversion from empty string

### float - converts a string to a float
*Defined in: std/core/convertstr.s*

```rust
float(cstr _s) -> (float number)
```
Potential errors:

32. invalid float conversion from string with only a sign
33. invalid float conversion from non-number string
2. null pointer
34. invalid float conversion from string without a value after the dot
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
31. invalid float conversion from empty string

### float - reads a float from the console
*Defined in: std/core/convertstr.s*

```rust
float(console console) -> (mut float number)
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
23. unexpected end of console read
24. user input was not a float

# bool
### bool - boolean value
*Defined by the compiler*

Can only be `true` or `false`.

```rust
bool() -> (bool value)
```

# err
### err
*Defined by the compiler*

```rust
err() -> (err value)
```

# blank
### void
*Defined by the compiler*

```rust
void() -> ()
```

# char
### char - a character
*Defined by the compiler*

Represents characters in the numeric range `0 to 255`.

```rust
char() -> (char value)
```

### char - treat as character
*Defined in: std/core/string.s*

The first character of a string is extracted,
for example to write `c = char \"C\"`.

```rust
char(cstr s) -> (char c)
```

### char - treat as character
*Defined in: std/core/string.s*

The first character of a string is extracted,
for example to write `c = char str \"C\"`.

```rust
char(str) -> (char s.dat.first)
```

### char
*Defined in: std/core/convertstr.s*

```rust
char(console) -> (char c)
```
Potential errors:

23. unexpected end of console read

# any
### any - any type
*Defined by the compiler*

Represents a generic for buffers and pointers for type-independent code that can be matched to a concrete type later.

```rust
any() -> ()
```

# eq
### eq - equals
*Defined in: std/core/numbers.s*

Compares the address of two pointers.

```rust
eq(any ptr x, any ptr y) -> (bool z)
```

### eq - eqqual to
*Defined in: std/core/numbers.s*

Compares two error messages. This comparison is
used only for comparing error messages produced
by the same running program.

```rust
eq(catch x, catch y) -> (bool z)
```

### eq - equals
*Defined in: std/core/numbers.s*

```rust
eq(nat x, nat y) -> (bool z)
```

### eq - equals
*Defined in: std/core/numbers.s*

```rust
eq(int x, int y) -> (bool z)
```

### eq - equals
*Defined in: std/core/numbers.s*

```rust
eq(float x, float y) -> (bool z)
```

### eq - equals
*Defined in: std/core/bool.s*

```rust
eq(bool value, false) -> (bool)
```

### eq - equals
*Defined in: std/core/bool.s*

```rust
eq(false, bool value) -> (bool)
```

### eq - equals
*Defined in: std/core/bool.s*

```rust
eq(bool value, true) -> (bool value)
```

### eq - equals
*Defined in: std/core/bool.s*

```rust
eq(true, bool value) -> (bool value)
```

### eq - equals
*Defined in: std/core/bool.s*

This is a compile-time operations that does not evoke any runtime booleans.

```rust
eq(false, true) -> (false)
```

### eq - equals
*Defined in: std/core/bool.s*

This is a compile-time operations that does not evoke any runtime booleans.

```rust
eq(true, false) -> (false)
```

### eq - equals
*Defined in: std/core/bool.s*

This is a compile-time operations that does not evoke any runtime booleans.

```rust
eq(false, false) -> (true)
```

### eq - equals
*Defined in: std/core/bool.s*

```rust
eq(bool x, bool y) -> (bool z)
```

### eq - equals
*Defined in: std/core/bool.s*

This is a compile-time operations that does not evoke any runtime booleans.

```rust
eq(true, true) -> (true)
```

### eq - equals
*Defined in: std/core/string.s*

```rust
eq(cstr x, str) -> (bool)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
15. out of bounds

### eq - equals
*Defined in: std/core/string.s*

```rust
eq(str, cstr y) -> (bool)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
15. out of bounds

### eq - equals
*Defined in: std/core/string.s*

```rust
eq(str, str) -> (bool)
```

### eq - equals
*Defined in: std/core/string.s*

```rust
eq(cstr x, cstr y) -> (bool z)
```

### eq - equals
*Defined in: std/core/string.s*

```rust
eq(char x, char y) -> (bool z)
```

# neq
### neq - not equal
*Defined in: std/core/numbers.s*

Compares the address of two pointers.

```rust
neq(any ptr x, any ptr y) -> (bool z)
```

### neq - not equal
*Defined in: std/core/numbers.s*

Compares two error messages. This comparison is
used only for comparing error messages produced
by the same running program.

```rust
neq(catch x, catch y) -> (bool z)
```

### neq - not equal
*Defined in: std/core/numbers.s*

```rust
neq(nat x, nat y) -> (bool z)
```

### neq - not equal
*Defined in: std/core/numbers.s*

```rust
neq(int x, int y) -> (bool z)
```

### neq - not equal
*Defined in: std/core/numbers.s*

```rust
neq(float x, float y) -> (bool z)
```

### neq - not equal
*Defined in: std/core/bool.s*

```rust
neq(bool x, false y) -> (bool)
```

### neq - not equal
*Defined in: std/core/bool.s*

```rust
neq(bool x, true y) -> (bool)
```

### neq - not equal
*Defined in: std/core/bool.s*

```rust
neq(false x, bool y) -> (bool)
```

### neq - not equal
*Defined in: std/core/bool.s*

```rust
neq(true x, bool y) -> (bool)
```

### neq - not equal
*Defined in: std/core/bool.s*

```rust
neq(false x, false y) -> (false)
```

### neq - not equal
*Defined in: std/core/bool.s*

```rust
neq(false x, true y) -> (true)
```

### neq - not equal
*Defined in: std/core/bool.s*

```rust
neq(true x, false y) -> (true)
```

### neq - not equal
*Defined in: std/core/bool.s*

```rust
neq(true x, true y) -> (false)
```

### neq - not equal
*Defined in: std/core/bool.s*

```rust
neq(bool x, bool y) -> (bool z)
```

### neq - not equals
*Defined in: std/core/string.s*

```rust
neq(cstr x, cstr y) -> (bool)
```

### neq - not equals
*Defined in: std/core/string.s*

```rust
neq(cstr x, str) -> (bool)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
15. out of bounds

### neq - not equals
*Defined in: std/core/string.s*

```rust
neq(str, cstr y) -> (bool)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
15. out of bounds

### neq - not equals
*Defined in: std/core/string.s*

```rust
neq(str, str) -> (bool)
```

### neq - not equals
*Defined in: std/core/string.s*

```rust
neq(char x, char y) -> (bool z)
```

# not
### not - logical inverse
*Defined in: std/core/bool.s*

This is a compile-time operations on the compiler:false type rather than a runtime boolean.

```rust
not(false) -> (true)
```

### not - logical inverse
*Defined in: std/core/bool.s*

This is a compile-time operations on the compiler:true type rather than a runtime boolean.

```rust
not(true) -> (false)
```

### not - logical inverse
*Defined in: std/core/bool.s*

This operates on boolean values at runtime.

```rust
not(bool value) -> (bool z)
```

# Number
### nat - an unsigned integer value
*Defined by the compiler*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat value)
```

### float
*Defined by the compiler*

```rust
float() -> (float value)
```

### int - a signed integer value
*Defined by the compiler*

Represents values in the range `2^-63 to 2^63-1`.

```rust
int() -> (int value)
```

# is\_different
### is\_different
*Defined in: std/core/numbers.s*

```rust
is_different(nat x, nat y) -> (false)
```

### is\_different
*Defined in: std/core/numbers.s*

```rust
is_different(nat x, int y) -> (true)
```

### is\_different
*Defined in: std/core/numbers.s*

```rust
is_different(nat x, float y) -> (true)
```

### is\_different
*Defined in: std/core/numbers.s*

```rust
is_different(int x, nat y) -> (true)
```

### is\_different
*Defined in: std/core/numbers.s*

```rust
is_different(int x, int y) -> (false)
```

### is\_different
*Defined in: std/core/numbers.s*

```rust
is_different(int x, float y) -> (true)
```

### is\_different
*Defined in: std/core/numbers.s*

```rust
is_different(float x, nat y) -> (true)
```

### is\_different
*Defined in: std/core/numbers.s*

```rust
is_different(float x, int y) -> (true)
```

### is\_different
*Defined in: std/core/numbers.s*

```rust
is_different(float x, float y) -> (false)
```

# neg
### neg - negative of a number
*Defined in: std/core/numbers.s*

```rust
neg(nat x) -> (nat z)
```

### neg - negative of a number
*Defined in: std/core/numbers.s*

```rust
neg(int x) -> (int z)
```

### neg - negative of a number
*Defined in: std/core/numbers.s*

```rust
neg(float x) -> (float z)
```

# add
### add - add
*Defined in: std/core/numbers.s*

Adds two numbers of the same type. This is an overload for the + operator.

```rust
add(nat x, nat y) -> (nat z)
```

### add - add
*Defined in: std/core/numbers.s*

Adds two numbers of the same type. This is an overload for the + operator.

```rust
add(int x, int y) -> (int z)
```

### add - add
*Defined in: std/core/numbers.s*

Adds two numbers of the same type. This is an overload for the + operator.

```rust
add(float x, float y) -> (float z)
```

### add - pointer addition
*Defined in: std/unsafe.s*

Adds a natural number offset to a pointer.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
add(any ptr allocated, nat offset) -> (any ptr {follows any ptr allocated})
```

### add
*Defined in: std/core/string.s*

```rust
add(edit char[] {element size 1}, mut nat CHARS.pos, cstr s1, cstr s2) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
20. string buffer out of memory
5. nat subtraction would yield a negative
15. out of bounds

### add
*Defined in: std/core/string.s*

```rust
add(edit char[] {element size 1}, mut nat CHARS.pos, cstr s1, str) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
20. string buffer out of memory
5. nat subtraction would yield a negative
15. out of bounds

### add
*Defined in: std/core/string.s*

```rust
add(edit char[] {element size 1}, mut nat CHARS.pos, str, cstr s2) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
20. string buffer out of memory
5. nat subtraction would yield a negative
15. out of bounds

### add
*Defined in: std/core/string.s*

```rust
add(edit char[] {element size 1}, mut nat CHARS.pos, str, str) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
20. string buffer out of memory
5. nat subtraction would yield a negative
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
add(circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
add(edit float[] {element size 8}, mut nat FLOATS.pos, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
add(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### add - vector addition
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
add(circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
add(circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
61. different vector sizes

### add - vector addition
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
add(edit float[] {element size 8}, mut nat FLOATS.pos, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
61. different vector sizes

### add - vector addition
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
add(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### add - vector addition
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
add(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
61. different vector sizes


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### add - vector addition
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
add(edit float[] {element size 8}, mut nat FLOATS.pos, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

# mul
### mul - multiply with
*Defined in: std/core/numbers.s*

Multiplies two numbers of the same type. This is an overload for the * operator.

```rust
mul(nat x, nat y) -> (nat z)
```

### mul - multiply with
*Defined in: std/core/numbers.s*

Multiplies two numbers of the same type. This is an overload for the * operator.

```rust
mul(int x, int y) -> (int z)
```

### mul - multiply with
*Defined in: std/core/numbers.s*

Multiplies two numbers of the same type. This is an overload for the * operator.

```rust
mul(float x, float y) -> (float z)
```

### mul - vector multiplication
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
mul(circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
mul(edit float[] {element size 8}, mut nat FLOATS.pos, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
mul(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### mul - vector multiplication
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
mul(circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
mul(circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
61. different vector sizes
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
mul(edit float[] {element size 8}, mut nat FLOATS.pos, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
mul(edit float[] {element size 8}, mut nat FLOATS.pos, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
61. different vector sizes
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
mul(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### mul - vector multiplication
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
mul(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
13. cannot allocate a buffer of unsized type
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
61. different vector sizes
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s*

Grabs an allocator for the result as an effect.

```rust
mul(edit float[] {element size 8}, mut nat FLOATS.pos, mat, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

64. matrix exceeds buffer limits
2. null pointer
67. column out of bounds
66. row out of bounds
70. inner dimensions must agree
8. iteration end
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, mat, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

2. null pointer
66. row out of bounds
67. column out of bounds
70. inner dimensions must agree
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s*

Grabs an allocator for the result as an effect.

```rust
mul(edit float[] {element size 8}, mut nat FLOATS.pos, vec, mat) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
66. row out of bounds
67. column out of bounds
69. vector length must match matrix rows
8. iteration end
15. out of bounds
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits

### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, vec, mat) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
66. row out of bounds
67. column out of bounds
69. vector length must match matrix rows
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s*

Grabs an allocator for the result as an effect.

```rust
mul(edit float[] {element size 8}, mut nat FLOATS.pos, mat, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
66. row out of bounds
68. matrix columns must match vector length
67. column out of bounds
8. iteration end
15. out of bounds
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits

### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, mat, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
66. row out of bounds
68. matrix columns must match vector length
67. column out of bounds
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
# div
### div - divide by
*Defined in: std/core/numbers.s*

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

```rust
div(nat x, nat y) -> (nat z)
```
Potential errors:

3. division by zero 

### div - divide by
*Defined in: std/core/numbers.s*

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

```rust
div(int x, int y) -> (int z)
```
Potential errors:

3. division by zero 

### div - divide by
*Defined in: std/core/numbers.s*

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

```rust
div(float x, float y) -> (float z)
```
Potential errors:

3. division by zero 

### div - vector division
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
div(circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
div(circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
61. different vector sizes
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
div(edit float[] {element size 8}, mut nat FLOATS.pos, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
div(edit float[] {element size 8}, mut nat FLOATS.pos, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
61. different vector sizes
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
div(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### div - vector division
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
div(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
13. cannot allocate a buffer of unsized type
3. division by zero 
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
61. different vector sizes
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### div - vector division
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
div(circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
div(edit float[] {element size 8}, mut nat FLOATS.pos, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
div(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
# mod
### mod - modulo by
*Defined in: std/core/numbers.s*

Computes the modulo between two natural numbers. This is an overload for the % operator.

```rust
mod(nat x, nat y) -> (nat z)
```
Potential errors:

4. modulo by zero 

# lt
### lt - less than
*Defined in: std/core/numbers.s*

Compares two numbers of the same type. This is an overload for the < operator.

```rust
lt(float x, float y) -> (bool z)
```

### lt - less than
*Defined in: std/core/numbers.s*

Compares two numbers of the same type. This is an overload for the < operator.

```rust
lt(int x, int y) -> (bool z)
```

### lt - less than
*Defined in: std/core/numbers.s*

Compares two numbers of the same type. This is an overload for the < operator.

```rust
lt(nat x, nat y) -> (bool z)
```

# gt
### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s*

greater than

```rust
gt(int x, int y) -> (bool z)
```

### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s*

greater than

```rust
gt(nat x, nat y) -> (bool z)
```

### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s*

greater than

```rust
gt(float x, float y) -> (bool z)
```

# le
### le - less than or equal to
*Defined in: std/core/numbers.s*

Compares two numbers of the same type. This is an overload for the <= operator.

```rust
le(float x, float y) -> (bool z)
```

### le - less than or equal to
*Defined in: std/core/numbers.s*

Compares two numbers of the same type. This is an overload for the <= operator.

```rust
le(int x, int y) -> (bool z)
```

### le - less than or equal to
*Defined in: std/core/numbers.s*

Compares two numbers of the same type. This is an overload for the <= operator.

```rust
le(nat x, nat y) -> (bool z)
```

# ge
### ge - greater than or equal to
*Defined in: std/core/numbers.s*

Compares two numbers of the same type. This is an overload for the >= operator.

```rust
ge(nat x, nat y) -> (bool z)
```

### ge - greater than or equal to
*Defined in: std/core/numbers.s*

Compares two numbers of the same type. This is an overload for the >= operator.

```rust
ge(int x, int y) -> (bool z)
```

### ge - greater than or equal to
*Defined in: std/core/numbers.s*

Compares two numbers of the same type. This is an overload for the >= operator.

```rust
ge(float x, float y) -> (bool z)
```

# sub
### sub - subtract by
*Defined in: std/core/numbers.s*

Subtracts two numbers of the same type. This is an overload for the - operator.

```rust
sub(int x, int y) -> (int z)
```

### sub - subtract by
*Defined in: std/core/numbers.s*

Subtracts two numbers of the same type. This is an overload for the - operator.

```rust
sub(float x, float y) -> (float z)
```

### sub - subtract by
*Defined in: std/core/numbers.s*

Subtracts two numbers of the same type. This is an overload for the - operator.
Natural numbers are safeguarded against acquiring negative results, which would overflow.

```rust
sub(nat x, nat y) -> (nat z)
```
Potential errors:

5. nat subtraction would yield a negative

### sub - vector subtraction
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
sub(circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
sub(edit float[] {element size 8}, mut nat FLOATS.pos, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
sub(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### sub - vector subtraction
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
sub(circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
sub(circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
61. different vector sizes
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
sub(edit float[] {element size 8}, mut nat FLOATS.pos, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
sub(edit float[] {element size 8}, mut nat FLOATS.pos, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits
61. different vector sizes
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
sub(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### sub - vector subtraction
*Defined in: std/sci/vec.s*

Grabs an FLOATS for the result as an effect.

```rust
sub(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
13. cannot allocate a buffer of unsized type
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
61. different vector sizes
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
# pow
### pow - exponentiate by
*Defined in: std/core/numbers.s*

Exponentiates a natural number by another.

```rust
pow(nat x, nat y) -> (mut nat ret)
```

### pow
*Defined in: std/sci/math.s*

```rust
pow(float x, float y) -> (float z)
```

# console
### console - references the system console
*Defined in: std/core/print.s*

```rust
console() -> (console)
```

# flush
### flush - flushes the print buffer on the console
*Defined in: std/core/print.s*

```rust
flush(console CLI) -> () with effects CLI
```

# nn
### nn - no new line
*Defined in: std/core/print.s*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(nat value) -> (nat value, cstr)
```

### nn - no new line
*Defined in: std/core/print.s*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(int value) -> (int value, cstr)
```

### nn - no new line
*Defined in: std/core/print.s*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(float value) -> (float value, cstr)
```

### nn - no new line
*Defined in: std/core/print.s*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(cstr value) -> (cstr value, cstr)
```

### nn - no new line
*Defined in: std/core/string.s*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without a new line.

```rust
nn(str) -> (str, cstr)
```

### nn - no new line
*Defined in: std/sci/vec.s*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without a new line.

```rust
nn(vec) -> (vec, cstr)
```

# print
### print - prints a boolean
*Defined in: std/core/print.s*

Automatically ends the line too.

```rust
print(console CLI, bool value) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s*

```rust
print(console CLI, true, cstr endl) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s*

Automatically ends the line too.

```rust
print(console CLI, true) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s*

```rust
print(console CLI, false, cstr endl) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s*

Automatically ends the line too.

```rust
print(console CLI, false) -> () with effects CLI
```

### print - print a string
*Defined in: std/core/string.s*

Ends the line too.

```rust
print(console CLI, str) -> () with effects CLI
```

### print - print a string
*Defined in: std/core/string.s*

```rust
print(console CLI, str, cstr endl) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s*

```rust
print(console CLI, bool value, cstr endl) -> () with effects CLI
```

### print - prints an unsigned integer
*Defined in: std/core/print.s*

Automatically ends the line too.

```rust
print(console CLI, nat value) -> () with effects CLI
```

### print - prints an unsigned integer
*Defined in: std/core/print.s*

```rust
print(console CLI, nat value, cstr endl) -> () with effects CLI
```

### print - prints an integer
*Defined in: std/core/print.s*

Automatically ends the line too.

```rust
print(console CLI, int value) -> () with effects CLI
```

### print - prints an integer
*Defined in: std/core/print.s*

```rust
print(console CLI, int value, cstr endl) -> () with effects CLI
```

### print - prints a float
*Defined in: std/core/print.s*

To pre-specified 6 decimal digits.
Automatically ends the line too.

```rust
print(console CLI, float value) -> () with effects CLI
```

### print - prints a float
*Defined in: std/core/print.s*

To pre-specified 6 decimal digits.

```rust
print(console CLI, float value, cstr endl) -> () with effects CLI
```

### print - prints a cstr
*Defined in: std/core/print.s*

Automatically ends the line too.

```rust
print(console CLI, cstr value) -> () with effects CLI
```

### print - prints a cstr
*Defined in: std/core/print.s*

```rust
print(console CLI, cstr value, cstr endl) -> () with effects CLI
```

### print - writes a cstr to a write file
*Defined in: std/io/file.s*

```rust
print(write, cstr text) -> ()
```
Potential errors:

47. failed to write to closed file

### print - writes a cstr to a write file
*Defined in: std/io/file.s*

```rust
print(write, cstr text) -> ()
```
Potential errors:

47. failed to write to closed file

### print - writes a cstr to a write file
*Defined in: std/io/file.s*

```rust
print(terminal, cstr text) -> ()
```
Potential errors:

47. failed to write to closed file

### print - writes a string to a write file
*Defined in: std/io/file.s*

```rust
print(write, str) -> ()
```
Potential errors:

48. failed to write to file
47. failed to write to closed file

### print - writes a string to a write file
*Defined in: std/io/file.s*

```rust
print(write, str) -> ()
```
Potential errors:

48. failed to write to file
47. failed to write to closed file

### print - writes a string to a write file
*Defined in: std/io/file.s*

```rust
print(terminal, str) -> ()
```
Potential errors:

48. failed to write to file
47. failed to write to closed file

### print - print a character
*Defined in: std/core/string.s*

Ends the line too.

```rust
print(console CLI, char c) -> () with effects CLI
```

### print - print a character
*Defined in: std/core/string.s*

```rust
print(console CLI, char c, cstr endl) -> () with effects CLI
```

### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s*

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

```rust
print(console CLI, mat) -> () with effects CLI
```
Potential errors:

2. null pointer
67. column out of bounds
66. row out of bounds
5. nat subtraction would yield a negative
8. iteration end

### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s*

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

```rust
print(console CLI, mat, cstr endl) -> () with effects CLI
```
Potential errors:

2. null pointer
67. column out of bounds
66. row out of bounds
5. nat subtraction would yield a negative
8. iteration end

### print - print a vector
*Defined in: std/sci/vec.s*

Prints as a row, such as [ 1.0  2.0  3.0 ]

```rust
print(console CLI, vec) -> () with effects CLI
```
Potential errors:

8. iteration end
2. null pointer
5. nat subtraction would yield a negative
15. out of bounds

### print - print a vector
*Defined in: std/sci/vec.s*

Prints as a row, such as [ 1.0  2.0  3.0 ]

```rust
print(console CLI, vec, cstr endl) -> () with effects CLI
```
Potential errors:

8. iteration end
2. null pointer
5. nat subtraction would yield a negative
15. out of bounds

# exists
### exists - checks that a pointer exists
*Defined in: std/core/convert.s*

```rust
exists(any ptr x) -> (bool z)
```

### exists - checks whether a cstr is not zero-initialized
*Defined in: std/core/string.s*

```rust
exists(cstr c) -> (bool z)
```

# bits
### bits - bit representation
*Defined in: std/core/convert.s*

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

```rust
bits(float x) -> (bits)
```

### bits - bit representation
*Defined in: std/core/convert.s*

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

```rust
bits(int x) -> (bits)
```

### bits - bit representation
*Defined in: std/core/convert.s*

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

```rust
bits(nat value) -> (bits)
```

# lshift
### lshift - left shift
*Defined in: std/core/convert.s*

```rust
lshift(bits, nat y) -> (bits)
```

# rshift
### rshift - right shift
*Defined in: std/core/convert.s*

```rust
rshift(bits, nat y) -> (bits)
```

# xor
### xor - bitwise xor
*Defined in: std/core/convert.s*

```rust
xor(bits, bits) -> (bits)
```

# and
### and - bitwise and
*Defined in: std/core/convert.s*

```rust
and(bits, bits) -> (bits)
```

# or
### or - bitwise or
*Defined in: std/core/convert.s*

```rust
or(bits, bits) -> (bits)
```

# range
### range - constructs a range given its unsigned integer endpoints
*Defined in: std/core/range.s*

the range's start is assumed to be zero

```rust
range(nat to) -> (range)
```

### range - constructs a range given its unsigned integer endpoints
*Defined in: std/core/range.s*

```rust
range(nat _from, nat to) -> (range)
```

# next
### next
*Defined in: std/core/range.s*

```rust
next(range) -> (nat ret)
```
Potential errors:

8. iteration end

### next
*Defined in: std/core/range.s*

```rust
next(range) -> (nat ret)
```
Potential errors:

8. iteration end

### next
*Defined in: std/map.s*

```rust
next(robinhood_str_entry[] {element size 33}, mut nat pos) -> (mut str)
```
Potential errors:

2. null pointer
15. out of bounds

### next
*Defined in: std/map.s*

```rust
next(robinhood_nat_entry[] {element size 16}, mut nat pos) -> (mut nat)
```
Potential errors:

2. null pointer
15. out of bounds

### next - Computes the next random number of a Rand sequence.
*Defined in: std/rand.s*

```rust
next(mut Rand) -> (float value)
```

# get
### get - get a list element pointer
*Defined in: std/core/array.s*

```rust
get(list, nat pos) -> (any ptr {follows any ptr l.buffer.unsafe_ptr})
```
Potential errors:

15. out of bounds

### get - get a pointer to a buffer element
*Defined in: std/core/array.s*

```rust
get(any[] {element size ?}, nat i) -> (any ptr {follows any ptr buffer.unsafe_ptr})
```
Potential errors:

15. out of bounds

### get
*Defined in: std/core/range.s*

```rust
get(range, nat pos) -> (nat pos)
```
Potential errors:

8. iteration end
9. iterator range

### get
*Defined in: std/core/range.s*

```rust
get(range, nat pos) -> (nat pos)
```
Potential errors:

8. iteration end
9. iterator range

### get
*Defined in: std/io.s*

```rust
get(edit char[] {element size 1}, write, nat) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get - a character in a string
*Defined in: std/core/string.s*

```rust
get(str, nat i) -> (char ptr {follows char ptr s.unsafe_ptr})
```

### get - get a hash map entry
*Defined in: std/map.s*

Implemented for string or cstr keys but buffer of any values.

```rust
get(robinhood_nat_entry[] {element size 16}, any[] {element size ?}, nat key) -> (any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
53. index not found
8. iteration end
15. out of bounds

### get - get a hash map entry
*Defined in: std/map.s*

Implemented for string or cstr keys but buffer of any values.

```rust
get(robinhood_str_entry[] {element size 33}, any[] {element size ?}, str) -> (any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
53. index not found
8. iteration end
15. out of bounds

### get - get a hash map entry
*Defined in: std/map.s*

Implemented for string or cstr keys but buffer of any values.

```rust
get(robinhood_str_entry[] {element size 33}, any[] {element size ?}, cstr key) -> (any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
8. iteration end
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
53. index not found

### get
*Defined in: std/io.s*

```rust
get(edit char[] {element size 1}, read, nat) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
37. end of file
5. nat subtraction would yield a negative
15. out of bounds

### get
*Defined in: std/io.s*

```rust
get(edit char[] {element size 1}, terminal, nat) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s*

```rust
get(edit char[] {element size 1}, write, nat) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s*

```rust
get(edit char[] {element size 1}, read, nat) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s*

```rust
get(edit char[] {element size 1}, read, nat) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s*

```rust
get(edit char[] {element size 1}, mut nat pos, read, nat) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
37. end of file
5. nat subtraction would yield a negative
15. out of bounds

### get
*Defined in: std/io.s*

```rust
get(edit char[] {element size 1}, mut nat pos, terminal, nat) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s*

```rust
get(edit char[] {element size 1}, mut nat pos, write, nat) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s*

```rust
get(edit char[] {element size 1}, mut nat pos, write, nat) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s*

```rust
get(edit char[] {element size 1}, mut nat pos, read, nat) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s*

```rust
get(edit char[] {element size 1}, mut nat pos, read, nat) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s*

```rust
get(read, nat) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
51. not open dir
52. end of dir
15. out of bounds

### get - GET with system curl
*Defined in: std/io/web.s*

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.
This version downloads to a '.tmp' file.

```rust
get(console CLI, cstr url) -> (str) with effects CLI
```
Potential errors:

2. null pointer
38. unsanitized command: shell metacharacter detected
39. system call failed
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
18. string does not fit on buffer
20. string buffer out of memory

### get - GET with system curl
*Defined in: std/io/web.s*

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.

```rust
get(console CLI, cstr url, cstr path) -> (str) with effects CLI
```
Potential errors:

2. null pointer
38. unsanitized command: shell metacharacter detected
39. system call failed
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
18. string does not fit on buffer
20. string buffer out of memory

### get - GET with system curl
*Defined in: std/io/web.s*

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.

```rust
get(console CLI, cstr url, str) -> (str) with effects CLI
```
Potential errors:

2. null pointer
38. unsanitized command: shell metacharacter detected
39. system call failed
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
18. string does not fit on buffer
20. string buffer out of memory

### get - GET with system curl
*Defined in: std/io/web.s*

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.
This version downloads to a '.tmp' file.

```rust
get(console CLI, str) -> (str) with effects CLI
```
Potential errors:

2. null pointer
38. unsanitized command: shell metacharacter detected
39. system call failed
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
18. string does not fit on buffer
20. string buffer out of memory

### get - GET with system curl
*Defined in: std/io/web.s*

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.

```rust
get(console CLI, str, cstr path) -> (str) with effects CLI
```
Potential errors:

2. null pointer
38. unsanitized command: shell metacharacter detected
39. system call failed
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
18. string does not fit on buffer
20. string buffer out of memory

### get - GET with system curl
*Defined in: std/io/web.s*

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.

```rust
get(console CLI, str, str) -> (str) with effects CLI
```
Potential errors:

2. null pointer
38. unsanitized command: shell metacharacter detected
39. system call failed
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
18. string does not fit on buffer
20. string buffer out of memory

### get - get a vector element at given position
*Defined in: std/sci/vec.s*

```rust
get(vec, nat i) -> (float ptr {follows float ptr v.unsafe_ptr})
```
Potential errors:

15. out of bounds

### get - reference to matrix element (i,j)
*Defined in: std/sci/mat.s*

```rust
get(mat, nat i, nat j) -> (float ptr {follows float ptr m.unsafe_ptr})
```
Potential errors:

66. row out of bounds
67. column out of bounds

# KB
### KB - kilobytes to bytes
*Defined in: std/core/units.s*

```rust
KB(nat x) -> (nat)
```

# MB
### MB - megabytes to bytes
*Defined in: std/core/units.s*

```rust
MB(nat x) -> (nat)
```

# GB
### GB - gigabytes to bytes
*Defined in: std/core/units.s*

```rust
GB(nat x) -> (nat)
```

# len
### len - string length
*Defined in: std/core/string.s*

```rust
len(str) -> (nat s.dat.length)
```

### len - the number of buffer elements
*Defined in: std/core/array.s*

```rust
len(any[] {element size ?}) -> (nat buffer.unsafe_size)
```

### len - vectot length
*Defined in: std/sci/vec.s*

```rust
len(vec) -> (nat v.length)
```

# new
### new - allocations on new buffers
*Defined in: std/core/string.s*

```rust
new() -> (new)
```

# bufpos
### bufpos - a buffer and mutable position pair
*Defined in: std/core/string.s*

The position starts from 0. This structure is often used
to maintain stable references within the buffer.

```rust
bufpos(edit any[] {element size ?}) -> (edit any[] {element size ?}, mut nat pos)
```

# strbufpos
### strbufpos - bufpos specialized for char[] buffers
*Defined in: std/core/string.s*

This is used to indicate a pair of a character buffer and a mutable position.
It is used as a string allocator so that they new ones can be created or copied
at the buffer at the given position and the position then progresses to accomodate
further string additions.

```rust
strbufpos(edit char[] {element size 1}) -> (edit char[] {element size 1} {follows char ptr buf.unsafe_ptr}, mut nat)
```

# circular
### circular - circular buffer
*Defined in: std/core/string.s*

```rust
circular(any[] {element size ?}, mut nat pos, nat length) -> (circular)
```

### circular - circular float buffer
*Defined in: std/sci/vec.s*

Is used as FLOATS

```rust
circular(edit float[] {element size 8}) -> (circular)
```
Potential errors:

5. nat subtraction would yield a negative

### circular - circular float buffer
*Defined in: std/sci/vec.s*

Is used as FLOATS

```rust
circular(edit float[] {element size 8}, nat length) -> (circular)
```

### circular - circular float buffer
*Defined in: std/sci/vec.s*

Is used as FLOATS

```rust
circular(edit float[] {element size 8}, mut nat pos) -> (circular)
```
Potential errors:

5. nat subtraction would yield a negative

# str
### str - convert to string
*Defined in: std/core/string.s*

Defines an implicit constant buffer using the cstr's memory data.
Subsequent comparisons no longer use the underlying pointer value.

```rust
str(cstr c) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
15. out of bounds

### str - declare a string on a list's char[] buffer
*Defined in: std/core/string.s*

```rust
str(list) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
18. string does not fit on buffer
2. null pointer
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[] {element size 1}, nat endpos, "from", nat pos) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[] {element size 1}, nat pos, "to", nat endpos) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[] {element size 1}, nat pos, "lento", nat length) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
15. out of bounds

### str - tautology function for strings
*Defined in: std/core/string.s*

```rust
str(str) -> (str)
```

### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s*

```rust
str(char[] {element size 1}) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
18. string does not fit on buffer
2. null pointer
15. out of bounds

### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s*

```rust
str(char[] {element size 1}, nat length) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
18. string does not fit on buffer
2. null pointer
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s*

```rust
str(char[] {element size 1}, nat dat.pos, nat dat.length, char dat.first) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers

### str - a string residing on a buffer
*Defined in: std/core/string.s*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str)
```

### str - a string residing on a buffer
*Defined in: std/core/string.s*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str)
```

### str - reads a string from the console into buf at pos, returns the read slice
*Defined in: std/core/convertstr.s*

```rust
str(edit char[] {element size 1}, mut nat pos, console console) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
25. read string does not fit on buffer
15. out of bounds

### str - create a compact str
*Defined in: std/mini.s*

The created str variation should be used only for storng and
retrieving data with 'unpack' for memory efficiency.

```rust
str(cstr s) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
56. nat value too large to pack in nat16
15. out of bounds

### str - create a compact str
*Defined in: std/mini.s*

The created str variation should be used only for storng and
retrieving data with 'unpack' for memory efficiency.

```rust
str(str) -> (str)
```
Potential errors:

56. nat value too large to pack in nat16

# copy
### copy - copy a string
*Defined in: std/core/string.s*

Constructs the copy on a buffer managed by a list.
The list may automatically resize its managed buffer to fit the new string.
This operation therefore destabilizes memory, and the `.dat` segment of strings should be obtained.

```rust
copy(list, cstr _other) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
3. division by zero 
11. reallocation failed
14. cannot resize an unallocated or freed buffer
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
20. string buffer out of memory
21. cannot copy onto the same buffer

### copy - copy a string
*Defined in: std/core/string.s*

Constructs the copy on a buffer managed by a list.
The list may automatically resize its managed buffer to fit the new string.
This operation therefore destabilizes memory, and the `.dat` segment of strings should be obtained.

```rust
copy(list, str) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
3. division by zero 
20. string buffer out of memory
21. cannot copy onto the same buffer
11. reallocation failed
14. cannot resize an unallocated or freed buffer

### copy - copy a string
*Defined in: std/core/string.s*

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

```rust
copy(edit char[] {element size 1}, mut nat CHARS.pos, cstr _other) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
20. string buffer out of memory
15. out of bounds

### copy - copy a string
*Defined in: std/core/string.s*

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

```rust
copy(edit char[] {element size 1}, mut nat CHARS.pos, str) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
20. string buffer out of memory

### copy - copies a character as a string
*Defined in: std/core/string.s*

Copies a new character at a given buffer a number of times
Then, returns a string corresponding to the copied region.
The character is automatically set to be repeated one time.

```rust
copy(edit char[] {element size 1}, mut nat CHARS.pos, char character) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
19. character copy does not fit on buffer
15. out of bounds

### copy - copies a character as a string
*Defined in: std/core/string.s*

Copies a new character at a given buffer a number of times
Then, returns a string corresponding to the copied region.

```rust
copy(edit char[] {element size 1}, mut nat CHARS.pos, char character, nat repeat) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
19. character copy does not fit on buffer
15. out of bounds

### copy - copy a string to a new buffer
*Defined in: std/core/string.s*

```rust
copy(new CHARS, cstr _other) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### copy - copy a string to a new buffer
*Defined in: std/core/string.s*

```rust
copy(new CHARS, str) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
# copy\_null\_terminated
### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s*

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

```rust
copy_null_terminated(edit char[] {element size 1}, mut nat CHARS.pos, cstr _other) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
20. string buffer out of memory
15. out of bounds

### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s*

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

```rust
copy_null_terminated(edit char[] {element size 1}, mut nat CHARS.pos, str) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
20. string buffer out of memory

### copy\_null\_terminated - create null terminated string
*Defined in: std/core/string.s*

Copies a string to a new buffer while ensuring null termination.
This is mainly useful for supporting 'cstr unsafe_temp'.

```rust
copy_null_terminated(new CHARS, str) -> (str) with effects CHARS
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
# unsafe\_temp
### unsafe\_temp - tautology function for cstr
*Defined in: std/core/string.s*

This is mainly used as a stt-input counterpart for converting str|cstr to cstr.

```rust
unsafe_temp(cstr cstr) -> (cstr cstr, str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
15. out of bounds

### unsafe\_temp - convert a string to a temporary null-terminated (cstr,str) pair
*Defined in: std/core/string.s*

This function's return is meant to be passed to operating system calls,
or return from compt with the pattern 'cstr unsafe_temp string_value'.
It will become invalid once the calling site ends.
It also does not admit proper cstr equality comparisons via pointer values
that reflect contents; it will always compare equal only to itself.
An optimization that safely checks the last element and one position beyond
the buffer's contents for null termination is also employed. Modifying the
string buffer in any capacity
invalidates the null termination property, so in general do not manipulate
strings while this is used in code; use it only for its intended purposes.

*Warning: This is unsafe, unless 'cstr unsafe_temp' is the last call before
passing data to 'system' or 'compt'.*

*Info: This is safe to run during 'compt' in that the latter will fail gracefully.*

```rust
unsafe_temp(str) -> (unsafe_temp)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
# endpos
### endpos - the end position of a string
*Defined in: std/core/string.s*

This position is computed relative to its start in its
enclosing buffer.

```rust
endpos(str) -> (nat)
```

# slice
### slice
*Defined in: std/core/string.s*

```rust
slice(str, nat from, nat to) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

# starts\_with
### starts\_with
*Defined in: std/core/string.s*

```rust
starts_with(str, str) -> (bool)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### starts\_with
*Defined in: std/core/string.s*

```rust
starts_with(str, cstr _needle) -> (bool)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### starts\_with
*Defined in: std/core/string.s*

```rust
starts_with(cstr _stack, str) -> (bool)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### starts\_with
*Defined in: std/core/string.s*

```rust
starts_with(cstr _stack, cstr _needle) -> (bool)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

# ends\_with
### ends\_with
*Defined in: std/core/string.s*

```rust
ends_with(str, str) -> (bool)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### ends\_with
*Defined in: std/core/string.s*

```rust
ends_with(str, cstr _needle) -> (bool)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### ends\_with
*Defined in: std/core/string.s*

```rust
ends_with(cstr _stack, str) -> (bool)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### ends\_with
*Defined in: std/core/string.s*

```rust
ends_with(cstr _stack, cstr _needle) -> (bool)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

# contains
### contains
*Defined in: std/core/string.s*

```rust
contains(str, str) -> (bool)
```
Potential errors:

2. null pointer
5. nat subtraction would yield a negative
8. iteration end
9. iterator range
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
22. slice out of string bounds

### contains
*Defined in: std/core/string.s*

```rust
contains(str, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
5. nat subtraction would yield a negative
8. iteration end
9. iterator range
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
22. slice out of string bounds

### contains
*Defined in: std/core/string.s*

```rust
contains(cstr _stack, str) -> (bool)
```
Potential errors:

2. null pointer
5. nat subtraction would yield a negative
8. iteration end
9. iterator range
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
22. slice out of string bounds

### contains
*Defined in: std/core/string.s*

```rust
contains(cstr _stack, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
5. nat subtraction would yield a negative
8. iteration end
9. iterator range
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
22. slice out of string bounds

### contains
*Defined in: std/core/string.s*

```rust
contains(str, char needle) -> (bool)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer

### contains
*Defined in: std/core/string.s*

```rust
contains(cstr _stack, char needle) -> (bool)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
8. iteration end
9. iterator range
15. out of bounds

# alloc
### alloc - allocate a char[] buffer
*Defined in: std/core/array.s*

```rust
alloc(nat size) -> (edit char[] {element size 1} {follows char ptr ..unsafe_ptr})
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. For convenience for usage within loops, allocation
of the same size only zero-initializes the buffer. If a different size is given, and the
buffer is non-empty, this fails. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.
This version allocates a buffer of ONE element, which can be used for stable indirection.

```rust
alloc(edit any[] {element size ?}) -> (edit any[] {element size ?})
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. For convenience for usage within loops, allocation
of the same size only zero-initializes the buffer. If a different size is given, and the
buffer is non-empty, this fails. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.

```rust
alloc(edit any[] {element size ?}, nat size) -> (edit any[] {element size ?})
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### alloc - allocate memory
*Defined in: std/unsafe.s*

Allocates a memory of the provided size in bytes.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
alloc(nat bytes) -> (any ptr allocated)
```
Potential errors:

10. allocation failed

# resize
### resize - resize the buffer
*Defined in: std/core/array.s*

This does nothing if the previous size is the same or less, frees the buffer if new size is zero.
If old size was zero, an error is created instead of allocating so that this does not leak
resources.

```rust
resize(edit any[] {element size ?}, nat size) -> (edit any[] {element size ?})
```
Potential errors:

11. reallocation failed
14. cannot resize an unallocated or freed buffer

# last
### last - get a pointer to the last buffer element
*Defined in: std/core/array.s*

```rust
last(any[] {element size ?}) -> (any ptr {follows any ptr buffer.unsafe_ptr})
```
Potential errors:

5. nat subtraction would yield a negative
15. out of bounds

# mutlast
### mutlast - get a mutable pointer to the last buffer element
*Defined in: std/core/array.s*

```rust
mutlast(edit any[] {element size ?}) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```
Potential errors:

5. nat subtraction would yield a negative
15. out of bounds

# mutget
### mutget - get a mutable list element pointer
*Defined in: std/core/array.s*

```rust
mutget(list, nat pos) -> (mut any ptr ret {follows any ptr l.buffer.unsafe_ptr})
```
Potential errors:

15. out of bounds

### mutget - get a mutable pointer to a buffer element
*Defined in: std/core/array.s*

```rust
mutget(edit any[] {element size ?}, nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```
Potential errors:

15. out of bounds

### mutget - get a mutable hash map entry
*Defined in: std/map.s*

Implemented for string or cstr keys but buffer of any values.

```rust
mutget(edit robinhood_nat_entry[] {element size 16}, mut any[] {element size ?}, nat key) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
54. string buffer is full
8. iteration end
15. out of bounds

### mutget - get a mutable hash map entry
*Defined in: std/map.s*

Implemented for string or cstr keys but buffer of any values.

```rust
mutget(edit robinhood_str_entry[] {element size 33}, mut any[] {element size ?}, str) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
54. string buffer is full
8. iteration end
15. out of bounds

### mutget - get a mutable hash map entry
*Defined in: std/map.s*

Implemented for string or cstr keys but buffer of any values.

```rust
mutget(edit robinhood_str_entry[] {element size 33}, mut any[] {element size ?}, cstr key) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
8. iteration end
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
54. string buffer is full

### mutget - modify a vector element at given position
*Defined in: std/sci/vec.s*

```rust
mutget(vec, nat i) -> (mut float ptr {follows float ptr v.unsafe_ptr})
```
Potential errors:

15. out of bounds

### mutget - mutable reference to matrix element (i,j)
*Defined in: std/sci/mat.s*

```rust
mutget(mat, nat i, nat j) -> (mut float ptr {follows float ptr m.unsafe_ptr})
```
Potential errors:

66. row out of bounds
67. column out of bounds

# list
### list - list of buffer
*Defined in: std/core/array.s*

List defined over a mutable buffer that is automatically managed and resized.
A capacity is maintained so that resizes are not performed too frequently.

```rust
list(mut any[] {element size ?}) -> (list)
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
# push
### push - get a mutable pointer to a new list element
*Defined in: std/core/array.s*

Grows the list and returns a mutable pointer to the newlly created last element.

```rust
push(list) -> (mut any ptr val {follows any ptr l.buffer.unsafe_ptr})
```
Potential errors:

3. division by zero 
11. reallocation failed
14. cannot resize an unallocated or freed buffer
15. out of bounds

# is\_number
### is\_number
*Defined in: std/core/convertstr.s*

```rust
is_number(char c) -> (bool)
```

# splitmix64
### splitmix64 - time seed
*Defined in: std/rand.s*

Computes the seed of a splitmix64 sequence using the clock
as the source of entropy.

```rust
splitmix64() -> (nat seed)
```

*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencues! The executed code is: `[time.time_ns()]`*
### splitmix64 - next random number
*Defined in: std/rand.s*

Computes the next random number of a splitmix64 sequence using the mutable 
unsigned int argument as state to be updated. This is NOT cryptographically 
secure and also has small period of 2^64 so usage is not recommended for 
long-running sequences. It is, however, faster than computing a next Rand 
state with next. If you do not provide a seed, a number obtained from the 
current time is provided. That can only be the start of a sequence, and 
marked as a leaking resource to prevent time-based randomization (which is 
not random).

```rust
splitmix64(mut nat x) -> (mut nat)
```

# Rand
### Rand - random number generator
*Defined in: std/rand.s*

Xoshiro256plus random numbers from https://prng.di.unimi.it/
These and are NOT cryptographically secure.
This a structural type for storing the progress of random number generators 
on four u64 state fields. This version defaults to a time-based seed. Its period is 2^256-1.

```rust
Rand() -> (Rand)
```

### Rand - random number generator
*Defined in: std/rand.s*

Xoshiro256plus random numbers from https://prng.di.unimi.it/
These and are NOT cryptographically secure.
This a structural type for storing the progress of random number generators 
on four u64 state fields. The version is seed-initalized. Its period is 2^256-1.

```rust
Rand(nat seed) -> (Rand)
```

# hash
### hash
*Defined in: std/hash.s*

```rust
hash(nat k, nat size) -> (nat)
```
Potential errors:

4. modulo by zero 

### hash
*Defined in: std/hash.s*

```rust
hash(str, nat size) -> (nat)
```
Potential errors:

8. iteration end
2. null pointer
4. modulo by zero 

# to\_hash\_base
### to\_hash\_base
*Defined in: std/hash.s*

```rust
to_hash_base(nat k) -> (bits)
```

### to\_hash\_base
*Defined in: std/hash.s*

```rust
to_hash_base(int k) -> (bits)
```

### to\_hash\_base
*Defined in: std/hash.s*

```rust
to_hash_base(float k) -> (bits)
```

### to\_hash\_base
*Defined in: std/hash.s*

```rust
to_hash_base(cstr k) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
15. out of bounds

### to\_hash\_base
*Defined in: std/hash.s*

```rust
to_hash_base(str) -> (str)
```

# robinhood\_str\_entry
### robinhood\_str\_entry
*Defined in: std/hash.s*

```rust
robinhood_str_entry(str, nat cost) -> (str, nat cost)
```

# robinhood\_nat\_entry
### robinhood\_nat\_entry
*Defined in: std/hash.s*

```rust
robinhood_nat_entry(nat s, nat cost) -> (nat s, nat cost)
```

# robinhood\_entry
### robinhood\_nat\_entry
*Defined in: std/hash.s*

```rust
robinhood_nat_entry(nat s, nat cost) -> (nat s, nat cost)
```

### robinhood\_str\_entry
*Defined in: std/hash.s*

```rust
robinhood_str_entry(str, nat cost) -> (str, nat cost)
```

# raw
### raw
*Defined in: std/hash.s*

```rust
raw(cstr r) -> (str)
```
Potential errors:

16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
2. null pointer
15. out of bounds

### raw
*Defined in: std/hash.s*

```rust
raw(nat r) -> (nat r)
```

### raw
*Defined in: std/hash.s*

```rust
raw(str) -> (str)
```

### raw
*Defined in: std/hash.s*

```rust
raw(nat r.s, nat r.cost) -> (nat r.s)
```

### raw
*Defined in: std/hash.s*

```rust
raw(str, nat r.cost) -> (str)
```

# is\_zero
### is\_zero
*Defined in: std/hash.s*

```rust
is_zero(nat k) -> (bool)
```

### is\_zero
*Defined in: std/hash.s*

```rust
is_zero(str) -> (bool)
```

# find
### find
*Defined in: std/hash.s*

```rust
find(nat[] {element size 8}, nat _k) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
53. index not found
8. iteration end
15. out of bounds

### find
*Defined in: std/hash.s*

```rust
find(str[] {element size 25}, str) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
53. index not found
8. iteration end
15. out of bounds

### find
*Defined in: std/hash.s*

```rust
find(str[] {element size 25}, cstr _k) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
8. iteration end
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
53. index not found

### find
*Defined in: std/hash.s*

```rust
find(robinhood_nat_entry[] {element size 16}, nat _k) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
53. index not found
8. iteration end
15. out of bounds

### find
*Defined in: std/hash.s*

```rust
find(robinhood_str_entry[] {element size 33}, str) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
53. index not found
8. iteration end
15. out of bounds

### find
*Defined in: std/hash.s*

```rust
find(robinhood_str_entry[] {element size 33}, cstr _k) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
8. iteration end
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
53. index not found

# at
### at
*Defined in: std/hash.s*

```rust
at(edit robinhood_str_entry[] {element size 33}, cstr _k) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
8. iteration end
15. out of bounds
16. can only define strings on contiguous buffers
17. can only define strings on non-offset buffers
54. string buffer is full

### at
*Defined in: std/hash.s*

```rust
at(edit robinhood_str_entry[] {element size 33}, str) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
54. string buffer is full
8. iteration end
15. out of bounds

### at
*Defined in: std/hash.s*

```rust
at(edit robinhood_nat_entry[] {element size 16}, nat _k) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
54. string buffer is full
8. iteration end
15. out of bounds

# strmap
### strmap - a string map
*Defined in: std/map.s*

Maps string indexes to the buffer provided using a robinhood scheme.
Map size is static and cannot be adjusted after initialization.

```rust
strmap(edit any[] {element size ?}) -> (edit robinhood_str_entry[] {element size 33} {follows robinhood_str_entry ptr ..unsafe_ptr}, edit any[] {element size ?})
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
# natmap
### natmap - a natural number map
*Defined in: std/map.s*

Maps number indexes to the buffer provided using a robinhood scheme.
Map size is static and cannot be adjusted after initialization.

```rust
natmap(edit any[] {element size ?}) -> (edit robinhood_nat_entry[] {element size 16} {follows robinhood_nat_entry ptr ..unsafe_ptr}, edit any[] {element size ?})
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
# unpack
### unpack
*Defined in: std/mini.s*

```rust
unpack(char[] {element size 1}, nat16 dat.pos, nat16 dat.length) -> (str)
```
Potential errors:

18. string does not fit on buffer

### unpack - unpack a compact str
*Defined in: std/mini.s*

The created compact str is unpacked into its 'nat'-using representation
that is more efficient for computations in 64-bit architectures.

```rust
unpack(str) -> (str)
```

# abs
### abs
*Defined in: std/sci/math.s*

```rust
abs(int x) -> (int)
```

### abs
*Defined in: std/sci/math.s*

```rust
abs(float x) -> (float)
```

# sqrt
### sqrt
*Defined in: std/sci/math.s*

```rust
sqrt(float x) -> (float z)
```

# sin
### sin
*Defined in: std/sci/math.s*

```rust
sin(float x) -> (float z)
```

# cos
### cos
*Defined in: std/sci/math.s*

```rust
cos(float x) -> (float z)
```

# log
### log
*Defined in: std/sci/math.s*

```rust
log(float x) -> (float z)
```

# tan
### tan
*Defined in: std/sci/math.s*

```rust
tan(float x) -> (float z)
```

# floor
### floor
*Defined in: std/sci/math.s*

```rust
floor(float x) -> (int z)
```

# asin
### asin
*Defined in: std/sci/math.s*

```rust
asin(float x) -> (float z)
```

# acos
### acos
*Defined in: std/sci/math.s*

```rust
acos(float x) -> (float z)
```

# atan
### atan
*Defined in: std/sci/math.s*

```rust
atan(float x, float y) -> (float z)
```

### atan
*Defined in: std/sci/math.s*

```rust
atan(float x) -> (float z)
```

# exp
### exp
*Defined in: std/sci/math.s*

```rust
exp(float x) -> (float z)
```

# vec
### vec - vector on an existing buffer
*Defined in: std/sci/vec.s*

Has the provided length. Can grab a circular buffer FLOATS as an effect, so that only the length is provided.

```rust
vec(circular, nat length) -> (mut vec) with effects FLOATS
```
Potential errors:

58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits

### vec - vector on an existing buffer
*Defined in: std/sci/vec.s*

Has the provided length. Can grab the buffer and mutable position allocator as an effect, so that only the length is provided.

```rust
vec(edit float[] {element size 8}, mut nat FLOATS.pos, nat length) -> (mut vec) with effects FLOATS
```
Potential errors:

58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. vector exceeeds buffer limits

### vec - treat a float buffer as a vector
*Defined in: std/sci/vec.s*

```rust
vec(edit float[] {element size 8}) -> (mut vec)
```
Potential errors:

58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### vec - vector on a new buffer
*Defined in: std/sci/vec.s*

Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer.

```rust
vec(new FLOATS, nat length) -> (mut vec) with effects FLOATS
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
### vec - view a matrix as a vector
*Defined in: std/sci/mat.s*

```rust
vec(mat) -> (mut vec)
```

# newvec
### newvec
*Defined in: std/sci/vec.s*

```rust
newvec() -> (new)
```

# vecpos
### vecpos
*Defined in: std/sci/vec.s*

```rust
vecpos(edit float[] {element size 8}, mut nat pos) -> (edit float[] {element size 8}, mut nat pos)
```

# vec\_allocator
### vecpos
*Defined in: std/sci/vec.s*

```rust
vecpos(edit float[] {element size 8}, mut nat pos) -> (edit float[] {element size 8}, mut nat pos)
```

### newvec
*Defined in: std/sci/vec.s*

```rust
newvec() -> (new)
```

# constvec
### constvec - treat an immutable float buffer as an immutable vector
*Defined in: std/sci/vec.s*

```rust
constvec(float[] {element size 8}) -> (vec)
```
Potential errors:

58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

# reduce
### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.

```rust
reduce(vec, "mul", "sqr") -> (float ret)
```
Potential errors:

8. iteration end
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.

```rust
reduce(vec, "mul") -> (float ret)
```
Potential errors:

8. iteration end
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.

```rust
reduce(vec, "add", "sqr") -> (float ret)
```
Potential errors:

8. iteration end
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.

```rust
reduce(vec, "add") -> (float ret)
```
Potential errors:

8. iteration end
2. null pointer
15. out of bounds

# sum
### sum - sum
*Defined in: std/sci/vec.s*

```rust
sum(vec) -> (float)
```
Potential errors:

8. iteration end
2. null pointer
15. out of bounds

# mean
### mean - mean value
*Defined in: std/sci/vec.s*

```rust
mean(vec) -> (float)
```
Potential errors:

8. iteration end
2. null pointer
3. division by zero 
15. out of bounds

# var
### var - variance
*Defined in: std/sci/vec.s*

```rust
var(vec) -> (float)
```
Potential errors:

8. iteration end
2. null pointer
3. division by zero 
15. out of bounds

# std
### std - standard deviation
*Defined in: std/sci/vec.s*

```rust
std(vec) -> (float)
```
Potential errors:

8. iteration end
2. null pointer
3. division by zero 
15. out of bounds

# mat
### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "col") -> (mut mat)
```

### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "row") -> (mut mat)
```

### mat - matrix on a circular buffer
*Defined in: std/sci/mat.s*

```rust
mat(circular, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

64. matrix exceeds buffer limits
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on a circular buffer
*Defined in: std/sci/mat.s*

```rust
mat(circular, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

64. matrix exceeds buffer limits
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing float[] buffer
*Defined in: std/sci/mat.s*

```rust
mat(edit float[] {element size 8}, nat rows) -> (mut mat)
```
Potential errors:

64. matrix exceeds buffer limits
65. buffer size not divisible by vector rows
3. division by zero 
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s*

```rust
mat(edit float[] {element size 8}, mut nat FLOATS.pos, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

64. matrix exceeds buffer limits
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s*

```rust
mat(new FLOATS, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr x) -> (bool z)
free(mut any ptr allocated) -> ()
```
# rows
### rows - number of rows
*Defined in: std/sci/mat.s*

```rust
rows(mat) -> (nat m.rows)
```

# cols
### cols - number of columns
*Defined in: std/sci/mat.s*

```rust
cols(mat) -> (nat m.cols)
```

# constmat
### constmat - immutable matrix on an immutable float[] buffer
*Defined in: std/sci/mat.s*

```rust
constmat(float[] {element size 8}, nat rows) -> (mat)
```
Potential errors:

64. matrix exceeds buffer limits
65. buffer size not divisible by vector rows
3. division by zero 
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

# mutvec
### mutvec - view a matrix as a vector
*Defined in: std/sci/mat.s*

```rust
mutvec(mat) -> (mut vec)
```

# row
### row - view matrix row as a vector
*Defined in: std/sci/mat.s*

```rust
row(mat, nat i) -> (mut vec)
```
Potential errors:

66. row out of bounds

# realloc
### realloc - reallocate memory
*Defined in: std/unsafe.s*

Reallocates an allocated memory pointer, potentially invalidating
the original one without any safety.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
realloc(any ptr allocated, nat bytes) -> (any ptr {follows any ptr allocated})
```
Potential errors:

11. reallocation failed

# free
### free - free memory
*Defined in: std/unsafe.s*

Frees allocated memory.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
free(mut any ptr allocated) -> ()
```

# zero
### zero - set memory to zero
*Defined in: std/unsafe.s*

Memsets a memory region to zero.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
zero(any ptr allocated, nat from, nat to) -> ()
```

