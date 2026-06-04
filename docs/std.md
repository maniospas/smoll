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
[unsafe\_console](#unsafe\_console) 
[flush](#flush) 
[nn](#nn) 
[print](#print) 
[exists](#exists) 
[bits](#bits) 
[lshift](#lshift) 
[rshift](#rshift) 
[xor](#xor) 
[band](#band) 
[bor](#bor) 
[range](#range) 
[next](#next) 
[get](#get) 
[KB](#kb) 
[MB](#mb) 
[GB](#gb) 
[alloc](#alloc) 
[resize](#resize) 
[last](#last) 
[mutlast](#mutlast) 
[mutget](#mutget) 
[len](#len) 
[new](#new) 
[arena](#arena) 
[allocated](#allocated) 
[status](#status) 
[circular](#circular) 
[list](#list) 
[at](#at) 
[char\_arena](#char\_arena) 
[char\_circular](#char\_circular) 
[char\_list](#char\_list) 
[char\_allocator](#char\_allocator) 
[strdat](#strdat) 
[str](#str) 
[copy](#copy) 
[copy\_null\_terminated](#copy\_null\_terminated) 
[unsafe\_temp](#unsafe\_temp) 
[endpos](#endpos) 
[slice](#slice) 
[starts\_with](#starts\_with) 
[ends\_with](#ends\_with) 
[contains](#contains) 
[is\_number](#is\_number) 
[rotl](#rotl) 
[splitmix64](#splitmix64) 
[Rand](#rand) 
[Hashable](#hashable) 
[hash](#hash) 
[to\_hash\_base](#to\_hash\_base) 
[robinhood\_str\_entry](#robinhood\_str\_entry) 
[robinhood\_nat\_entry](#robinhood\_nat\_entry) 
[robinhood\_entry](#robinhood\_entry) 
[raw](#raw) 
[is\_zero](#is\_zero) 
[find](#find) 
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
[isnan](#isnan) 
[isinf](#isinf) 
[vec](#vec) 
[mat](#mat) 
[sparse\_element](#sparse\_element) 
[coo](#coo) 
[float\_arena](#float\_arena) 
[float\_circular](#float\_circular) 
[float\_list](#float\_list) 
[float\_allocator](#float\_allocator) 
[constvec](#constvec) 
[reduce](#reduce) 
[sum](#sum) 
[mean](#mean) 
[var](#var) 
[std](#std) 
[self](#self) 
[rows](#rows) 
[cols](#cols) 
[constmat](#constmat) 
[mutvec](#mutvec) 
[row](#row) 
[nnz](#nnz) 
[todense](#todense) 
[matrix](#matrix) 
[realloc](#realloc) 
[free](#free) 
[zero](#zero) 
</div>

# cstr
### cstr - constant string
*Defined by the compiler*

```rust
cstr() -> (cstr)
```

### cstr - a cstr description of an error code
*Defined in: std/core/error.s line 19*

Error codes should *not* be compared numerically against
given numbers, as their numbering changes for different
programs. Instead, they should be converted to a cstr
string with this function, which can then be compared.
This comparison is also one numerical comparison, as
care is taken for all cstr to point to the same memory
location.

```rust
cstr(catch) -> (cstr)
```

### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 177*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(cstr cstr, str) -> (cstr)
```

### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 177*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
```

# int
### int - a signed integer value
*Defined by the compiler*

Represents values in the range `2^-63 to 2^63-1`.

```rust
int() -> (int)
```

### int - cast to int
*Defined in: std/core/convert.s line 29*

Overflows are mapped to negative integers and are not protected against.

```rust
int(nat) -> (int)
```

### int - cast to int
*Defined in: std/core/convert.s line 29*

Serves as a tautology function for code that parses on multiple number types.

```rust
int(int) -> (int)
```

### int - cast to int
*Defined in: std/core/convert.s line 29*

May lose information due to truncating.

```rust
int(float) -> (int)
```

### int - cast to int
*Defined in: std/core/convert.s line 89*

Converts a bit representation to the corresponding integer.

```rust
int(bits) -> (int)
```

### int - converts a string to an integer
*Defined in: std/core/convertstr.s line 127*

```rust
int(str) -> (int)
```
Potential errors:

27. invalid int conversion from string with only a sign
26. invalid int conversion from empty string
2. null pointer
28. invalid integer int from non-number string

### int - converts a string to an integer
*Defined in: std/core/convertstr.s line 127*

```rust
int(cstr) -> (int)
```
Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
26. invalid int conversion from empty string
27. invalid int conversion from string with only a sign
28. invalid integer int from non-number string
15. out of bounds

### int - reads an integer from the console
*Defined in: std/core/convertstr.s line 35*

```rust
int(console) -> (int)
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
23. unexpected end of console read
24. user input was not a float

# nat
### nat - an unsigned integer value
*Defined by the compiler*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat)
```

### nat - cast to nat
*Defined in: std/core/convert.s line 51*

Converting a character to a natural number considers
its bit representation interpreted as an unsigned number.

```rust
nat(char) -> (nat)
```

### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(nat) -> (nat)
```

### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(int) -> (nat)
```
Potential errors:

7. cannot convert negative int to id

### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(float) -> (nat)
```
Potential errors:

6. cannot convert negative float to id

### nat - cast to nat
*Defined in: std/core/convert.s line 84*

Converts a bit representation to the corresponding natural number.

```rust
nat(bits) -> (nat)
```

### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat16) -> (nat)
```

### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s line 150*

```rust
nat(str) -> (nat)
```
Potential errors:

8. iteration end
2. null pointer
29. invalid nat conversion from empty string
30. invalid nat conversion from non-number string

### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s line 150*

```rust
nat(cstr) -> (nat)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
8. iteration end
29. invalid nat conversion from empty string
30. invalid nat conversion from non-number string
15. out of bounds

### nat - reads an unsigned integer from the console
*Defined in: std/core/convertstr.s line 59*

```rust
nat(console) -> (nat)
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
23. unexpected end of console read
24. user input was not a float

### nat - retrieved unsigned number from 32 bits
*Defined in: std/mini.s line 30*

```rust
nat(nat32) -> (nat)
```

# nat32
### nat32 - a 32-bit unsigned integer value
*Defined by the compiler*

Represents values in the range `0 to 2^32-1`.

```rust
nat32() -> (nat32)
```

### nat32 - convert unsigned number to 32 bits
*Defined in: std/mini.s line 22*

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

```rust
nat32(nat) -> (nat32)
```
Potential errors:

57. nat value too large to pack in nat32

# nat16
### nat16 - a 16-bit unsigned integer value
*Defined by the compiler*

Represents values in the range `0 to 2^16-1`.

```rust
nat16() -> (nat16)
```

### nat16 - convert unsigned number to 16 bits
*Defined in: std/mini.s line 14*

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

```rust
nat16(nat) -> (nat16)
```
Potential errors:

56. nat value too large to pack in nat16

# nat8
### nat8 - a 8-bit unsigned integer value
*Defined by the compiler*

Represents values in the range `0 to 255`.

```rust
nat8() -> (nat8)
```

### nat8 - convert unsigned number to 8 bits
*Defined in: std/mini.s line 6*

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

```rust
nat8(nat) -> (nat8)
```
Potential errors:

55. nat value too large to pack in nat8

# float
### float
*Defined by the compiler*

```rust
float() -> (float)
```

### float - cast to float
*Defined in: std/core/convert.s line 20*

Serves as a tautology function for code that parses on multiple number types.

```rust
float(float) -> (float)
```

### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(int) -> (float)
```

### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(nat) -> (float)
```

### float - cast to float
*Defined in: std/core/convert.s line 95*

Converts a bit representation to the corresponding float number.

```rust
float(bits) -> (float)
```

### float - converts a string to a float
*Defined in: std/core/convertstr.s line 163*

```rust
float(str) -> (float)
```
Potential errors:

32. invalid float conversion from string with only a sign
33. invalid float conversion from non-number string
2. null pointer
34. invalid float conversion from string without a value after the dot
31. invalid float conversion from empty string

### float - converts a string to a float
*Defined in: std/core/convertstr.s line 163*

```rust
float(cstr) -> (float)
```
Potential errors:

32. invalid float conversion from string with only a sign
33. invalid float conversion from non-number string
2. null pointer
34. invalid float conversion from string without a value after the dot
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
31. invalid float conversion from empty string

### float - reads a float from the console
*Defined in: std/core/convertstr.s line 79*

```rust
float(console) -> (float)
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
23. unexpected end of console read
24. user input was not a float

# bool
### bool - boolean value
*Defined by the compiler*

Can only be `true` or `false`.

```rust
bool() -> (bool)
```

# err
### err
*Defined by the compiler*

```rust
err() -> (err)
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
char() -> (char)
```

### char - treat as character
*Defined in: std/core/string.s line 115*

The first character of a string is extracted,
for example to write `c = char \"C\"`.

```rust
char(cstr) -> (char)
```

### char - treat as character
*Defined in: std/core/string.s line 109*

The first character of a string is extracted,
for example to write `c = char str \"C\"`.

```rust
char(str) -> (char)
```

### char
*Defined in: std/core/convertstr.s line 23*

```rust
char(console) -> (char)
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
*Defined in: std/core/bool.s line 20*

```rust
eq(bool x, bool y) -> (bool)
```

### eq - equals
*Defined in: std/core/numbers.s line 56*

Compares the address of two pointers.

```rust
eq(any ptr x, any ptr y) -> (bool)
```

### eq - eqqual to
*Defined in: std/core/numbers.s line 40*

Compares two error messages. This comparison is
used only for comparing error messages produced
by the same running program.

```rust
eq(catch x, catch y) -> (bool)
```

### eq - equals
*Defined in: std/core/numbers.s line 26*

```rust
eq(int x, int y) -> (bool)
```

### eq - equals
*Defined in: std/core/numbers.s line 26*

```rust
eq(nat x, nat y) -> (bool)
```

### eq - equals
*Defined in: std/core/numbers.s line 26*

```rust
eq(float x, float y) -> (bool)
```

### eq - equals
*Defined in: std/core/bool.s line 82*

```rust
eq(bool value, false) -> (bool)
```

### eq - equals
*Defined in: std/core/bool.s line 78*

```rust
eq(false, bool value) -> (bool)
```

### eq - equals
*Defined in: std/core/bool.s line 74*

```rust
eq(bool value, true) -> (bool)
```

### eq - equals
*Defined in: std/core/bool.s line 70*

```rust
eq(true, bool value) -> (bool)
```

### eq - equals
*Defined in: std/core/bool.s line 51*

This is a compile-time operations that does not evoke any runtime booleans.

```rust
eq(false t_anon0, true t_anon1) -> (false)
```

### eq - equals
*Defined in: std/core/bool.s line 46*

This is a compile-time operations that does not evoke any runtime booleans.

```rust
eq(true t_anon0, false t_anon1) -> (false)
```

### eq - equals
*Defined in: std/core/bool.s line 41*

This is a compile-time operations that does not evoke any runtime booleans.

```rust
eq(false t_anon0, false t_anon1) -> (true)
```

### eq - equals
*Defined in: std/core/bool.s line 36*

This is a compile-time operations that does not evoke any runtime booleans.

```rust
eq(true t_anon0, true t_anon1) -> (true)
```

### eq - equals
*Defined in: std/core/string.s line 122*

```rust
eq(char x, char y) -> (bool)
```

### eq - equals
*Defined in: std/core/string.s line 210*

```rust
eq(cstr x, str) -> (bool)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### eq - equals
*Defined in: std/core/string.s line 204*

```rust
eq(str, cstr y) -> (bool)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### eq - equals
*Defined in: std/core/string.s line 194*

```rust
eq(str, str) -> (bool)
```

### eq - equals
*Defined in: std/core/string.s line 189*

```rust
eq(cstr x, cstr y) -> (bool)
```

# neq
### neq - not equal
*Defined in: std/core/numbers.s line 62*

Compares the address of two pointers.

```rust
neq(any ptr x, any ptr y) -> (bool)
```

### neq - not equal
*Defined in: std/core/numbers.s line 48*

Compares two error messages. This comparison is
used only for comparing error messages produced
by the same running program.

```rust
neq(catch x, catch y) -> (bool)
```

### neq - not equal
*Defined in: std/core/numbers.s line 33*

```rust
neq(nat x, nat y) -> (bool)
```

### neq - not equal
*Defined in: std/core/numbers.s line 33*

```rust
neq(int x, int y) -> (bool)
```

### neq - not equal
*Defined in: std/core/numbers.s line 33*

```rust
neq(float x, float y) -> (bool)
```

### neq - not equal
*Defined in: std/core/bool.s line 90*

```rust
neq(bool x, false y) -> (bool)
```

### neq - not equal
*Defined in: std/core/bool.s line 90*

```rust
neq(bool x, true y) -> (bool)
```

### neq - not equal
*Defined in: std/core/bool.s line 86*

```rust
neq(false x, bool y) -> (bool)
```

### neq - not equal
*Defined in: std/core/bool.s line 86*

```rust
neq(true x, bool y) -> (bool)
```

### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(false x, false y) -> (false)
```

### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(false x, true y) -> (true)
```

### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(true x, false y) -> (true)
```

### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(true x, true y) -> (false)
```

### neq - not equal
*Defined in: std/core/bool.s line 25*

```rust
neq(bool x, bool y) -> (bool)
```

### neq - not equals
*Defined in: std/core/string.s line 127*

```rust
neq(char x, char y) -> (bool)
```

### neq - not equals
*Defined in: std/core/string.s line 216*

```rust
neq(cstr x, cstr y) -> (bool)
```

### neq - not equals
*Defined in: std/core/string.s line 216*

```rust
neq(cstr x, str) -> (bool)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### neq - not equals
*Defined in: std/core/string.s line 216*

```rust
neq(str, cstr y) -> (bool)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### neq - not equals
*Defined in: std/core/string.s line 216*

```rust
neq(str, str) -> (bool)
```

# not
### not - logical inverse
*Defined in: std/core/bool.s line 61*

This is a compile-time operations on the compiler:false type rather than a runtime boolean.

```rust
not(false) -> (true)
```

### not - logical inverse
*Defined in: std/core/bool.s line 56*

This is a compile-time operations on the compiler:true type rather than a runtime boolean.

```rust
not(true) -> (false)
```

### not - logical inverse
*Defined in: std/core/bool.s line 30*

This operates on boolean values at runtime.

```rust
not(bool) -> (bool)
```

# Number
### nat - an unsigned integer value
*Defined by the compiler*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat)
```

### float
*Defined by the compiler*

```rust
float() -> (float)
```

### int - a signed integer value
*Defined by the compiler*

Represents values in the range `2^-63 to 2^63-1`.

```rust
int() -> (int)
```

# is\_different
### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(nat x, nat y) -> (false)
```

### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(nat x, int y) -> (true)
```

### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(nat x, float y) -> (true)
```

### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(int x, nat y) -> (true)
```

### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(int x, int y) -> (false)
```

### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(int x, float y) -> (true)
```

### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(float x, nat y) -> (true)
```

### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(float x, int y) -> (true)
```

### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(float x, float y) -> (false)
```

# neg
### neg - negative of a number
*Defined in: std/core/numbers.s line 68*

```rust
neg(nat) -> (nat)
```

### neg - negative of a number
*Defined in: std/core/numbers.s line 68*

```rust
neg(int) -> (int)
```

### neg - negative of a number
*Defined in: std/core/numbers.s line 68*

```rust
neg(float) -> (float)
```

# add
### add - add
*Defined in: std/core/numbers.s line 73*

Adds two numbers of the same type. This is an overload for the + operator.

```rust
add(nat x, nat y) -> (nat)
```

### add - add
*Defined in: std/core/numbers.s line 73*

Adds two numbers of the same type. This is an overload for the + operator.

```rust
add(int x, int y) -> (int)
```

### add - add
*Defined in: std/core/numbers.s line 73*

Adds two numbers of the same type. This is an overload for the + operator.

```rust
add(float x, float y) -> (float)
```

### add - pointer addition
*Defined in: std/unsafe.s line 54*

Adds a natural number offset to a pointer.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
add(any ptr allocated, nat offset) -> (any ptr {follows any ptr allocated})
```

### add - vector addition
*Defined in: std/sci/vec.s line 74*

Grabs an FLOATS for the result as an effect.

```rust
add(circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 74*

Grabs an FLOATS for the result as an effect.

```rust
add(arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 74*

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
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### add - vector addition
*Defined in: std/sci/vec.s line 64*

Grabs an FLOATS for the result as an effect.

```rust
add(circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 64*

Grabs an FLOATS for the result as an effect.

```rust
add(circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
17. does not fit in circular arena
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. different vector sizes

### add - vector addition
*Defined in: std/sci/vec.s line 64*

Grabs an FLOATS for the result as an effect.

```rust
add(arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 64*

Grabs an FLOATS for the result as an effect.

```rust
add(arena, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
16. arena is out of space
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. different vector sizes

### add - vector addition
*Defined in: std/sci/vec.s line 64*

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
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### add - vector addition
*Defined in: std/sci/vec.s line 64*

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
60. different vector sizes


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# mul
### mul - multiply with
*Defined in: std/core/numbers.s line 81*

Multiplies two numbers of the same type. This is an overload for the * operator.

```rust
mul(nat x, nat y) -> (nat)
```

### mul - multiply with
*Defined in: std/core/numbers.s line 81*

Multiplies two numbers of the same type. This is an overload for the * operator.

```rust
mul(int x, int y) -> (int)
```

### mul - multiply with
*Defined in: std/core/numbers.s line 81*

Multiplies two numbers of the same type. This is an overload for the * operator.

```rust
mul(float x, float y) -> (float)
```

### mul - vector multiplication
*Defined in: std/sci/vec.s line 107*

Grabs an FLOATS for the result as an effect.

```rust
mul(circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 107*

Grabs an FLOATS for the result as an effect.

```rust
mul(arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 107*

Grabs an FLOATS for the result as an effect.

```rust
mul(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
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
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mul - vector multiplication
*Defined in: std/sci/vec.s line 97*

Grabs an FLOATS for the result as an effect.

```rust
mul(circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 97*

Grabs an FLOATS for the result as an effect.

```rust
mul(circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
17. does not fit in circular arena
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. different vector sizes

### mul - vector multiplication
*Defined in: std/sci/vec.s line 97*

Grabs an FLOATS for the result as an effect.

```rust
mul(arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 97*

Grabs an FLOATS for the result as an effect.

```rust
mul(arena, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
16. arena is out of space
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. different vector sizes

### mul - vector multiplication
*Defined in: std/sci/vec.s line 97*

Grabs an FLOATS for the result as an effect.

```rust
mul(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
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
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mul - vector multiplication
*Defined in: std/sci/vec.s line 97*

Grabs an FLOATS for the result as an effect.

```rust
mul(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
60. different vector sizes


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 53*

```rust
mul(circular, coo, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
66. matrix columns must match vector length
2. null pointer
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 53*

```rust
mul(arena, coo, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
66. matrix columns must match vector length
2. null pointer
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 53*

```rust
mul(new FLOATS, coo, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

66. matrix columns must match vector length
2. null pointer
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 106*

Grabs an allocator for the result as an effect.

```rust
mul(circular, mat, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

64. row out of bounds
65. column out of bounds
2. null pointer
17. does not fit in circular arena
68. inner dimensions must agree
8. iteration end
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets

### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 106*

Grabs an allocator for the result as an effect.

```rust
mul(arena, mat, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

64. row out of bounds
65. column out of bounds
2. null pointer
68. inner dimensions must agree
8. iteration end
16. arena is out of space
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets

### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 106*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, mat, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

64. row out of bounds
65. column out of bounds
2. null pointer
68. inner dimensions must agree
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 92*

Grabs an allocator for the result as an effect.

```rust
mul(circular, vec, mat) -> (mut vec) with effects FLOATS
```
Potential errors:

64. row out of bounds
65. column out of bounds
2. null pointer
67. vector length must match matrix rows
8. iteration end
15. out of bounds
17. does not fit in circular arena
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 92*

Grabs an allocator for the result as an effect.

```rust
mul(arena, vec, mat) -> (mut vec) with effects FLOATS
```
Potential errors:

64. row out of bounds
65. column out of bounds
2. null pointer
67. vector length must match matrix rows
8. iteration end
15. out of bounds
16. arena is out of space
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 92*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, vec, mat) -> (mut vec) with effects FLOATS
```
Potential errors:

64. row out of bounds
65. column out of bounds
2. null pointer
67. vector length must match matrix rows
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 78*

Grabs an allocator for the result as an effect.

```rust
mul(circular, mat, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

64. row out of bounds
65. column out of bounds
66. matrix columns must match vector length
2. null pointer
8. iteration end
15. out of bounds
17. does not fit in circular arena
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 78*

Grabs an allocator for the result as an effect.

```rust
mul(arena, mat, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

64. row out of bounds
65. column out of bounds
66. matrix columns must match vector length
2. null pointer
8. iteration end
15. out of bounds
16. arena is out of space
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 78*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, mat, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

64. row out of bounds
65. column out of bounds
66. matrix columns must match vector length
2. null pointer
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 71*

```rust
mul(circular, coo, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

64. row out of bounds
65. column out of bounds
2. null pointer
68. inner dimensions must agree
8. iteration end
15. out of bounds
17. does not fit in circular arena
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets

### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 71*

```rust
mul(arena, coo, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

64. row out of bounds
65. column out of bounds
2. null pointer
68. inner dimensions must agree
8. iteration end
15. out of bounds
16. arena is out of space
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets

### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 71*

```rust
mul(new FLOATS, coo, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

64. row out of bounds
65. column out of bounds
2. null pointer
68. inner dimensions must agree
8. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 61*

*Warning: the expression `self(v)*m` yields wrong values

```rust
mul(circular, vec, coo) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
67. vector length must match matrix rows
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 61*

*Warning: the expression `self(v)*m` yields wrong values

```rust
mul(arena, vec, coo) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
67. vector length must match matrix rows
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 61*

*Warning: the expression `self(v)*m` yields wrong values

```rust
mul(new FLOATS, vec, coo) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
67. vector length must match matrix rows
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# div
### div - divide by
*Defined in: std/core/numbers.s line 89*

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

```rust
div(nat x, nat y) -> (nat)
```
Potential errors:

3. division by zero 

### div - divide by
*Defined in: std/core/numbers.s line 89*

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

```rust
div(int x, int y) -> (int)
```
Potential errors:

3. division by zero 

### div - divide by
*Defined in: std/core/numbers.s line 89*

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

```rust
div(float x, float y) -> (float)
```
Potential errors:

3. division by zero 

### div - vector division
*Defined in: std/sci/vec.s line 142*

Grabs an FLOATS for the result as an effect.

```rust
div(circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds
17. does not fit in circular arena
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### div - vector division
*Defined in: std/sci/vec.s line 142*

Grabs an FLOATS for the result as an effect.

```rust
div(arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds
16. arena is out of space
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### div - vector division
*Defined in: std/sci/vec.s line 142*

Grabs an FLOATS for the result as an effect.

```rust
div(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### div - vector division
*Defined in: std/sci/vec.s line 131*

Grabs an FLOATS for the result as an effect.

```rust
div(circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds
17. does not fit in circular arena
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### div - vector division
*Defined in: std/sci/vec.s line 131*

Grabs an FLOATS for the result as an effect.

```rust
div(circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds
17. does not fit in circular arena
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. different vector sizes

### div - vector division
*Defined in: std/sci/vec.s line 131*

Grabs an FLOATS for the result as an effect.

```rust
div(arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds
16. arena is out of space
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### div - vector division
*Defined in: std/sci/vec.s line 131*

Grabs an FLOATS for the result as an effect.

```rust
div(arena, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds
16. arena is out of space
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. different vector sizes

### div - vector division
*Defined in: std/sci/vec.s line 131*

Grabs an FLOATS for the result as an effect.

```rust
div(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### div - vector division
*Defined in: std/sci/vec.s line 131*

Grabs an FLOATS for the result as an effect.

```rust
div(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
60. different vector sizes


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# mod
### mod - modulo by
*Defined in: std/core/numbers.s line 101*

Computes the modulo between two natural numbers. This is an overload for the % operator.

```rust
mod(nat x, nat y) -> (nat)
```
Potential errors:

4. modulo by zero 

# lt
### lt - less than
*Defined in: std/core/numbers.s line 110*

Compares two numbers of the same type. This is an overload for the < operator.

```rust
lt(float x, float y) -> (bool)
```

### lt - less than
*Defined in: std/core/numbers.s line 110*

Compares two numbers of the same type. This is an overload for the < operator.

```rust
lt(int x, int y) -> (bool)
```

### lt - less than
*Defined in: std/core/numbers.s line 110*

Compares two numbers of the same type. This is an overload for the < operator.

```rust
lt(nat x, nat y) -> (bool)
```

# gt
### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s line 118*

greater than

```rust
gt(int x, int y) -> (bool)
```

### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s line 118*

greater than

```rust
gt(nat x, nat y) -> (bool)
```

### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s line 118*

greater than

```rust
gt(float x, float y) -> (bool)
```

# le
### le - less than or equal to
*Defined in: std/core/numbers.s line 126*

Compares two numbers of the same type. This is an overload for the <= operator.

```rust
le(float x, float y) -> (bool)
```

### le - less than or equal to
*Defined in: std/core/numbers.s line 126*

Compares two numbers of the same type. This is an overload for the <= operator.

```rust
le(int x, int y) -> (bool)
```

### le - less than or equal to
*Defined in: std/core/numbers.s line 126*

Compares two numbers of the same type. This is an overload for the <= operator.

```rust
le(nat x, nat y) -> (bool)
```

# ge
### ge - greater than or equal to
*Defined in: std/core/numbers.s line 134*

Compares two numbers of the same type. This is an overload for the >= operator.

```rust
ge(nat x, nat y) -> (bool)
```

### ge - greater than or equal to
*Defined in: std/core/numbers.s line 134*

Compares two numbers of the same type. This is an overload for the >= operator.

```rust
ge(int x, int y) -> (bool)
```

### ge - greater than or equal to
*Defined in: std/core/numbers.s line 134*

Compares two numbers of the same type. This is an overload for the >= operator.

```rust
ge(float x, float y) -> (bool)
```

# sub
### sub - subtract by
*Defined in: std/core/numbers.s line 142*

Subtracts two numbers of the same type. This is an overload for the - operator.

```rust
sub(int x, int y) -> (int)
```

### sub - subtract by
*Defined in: std/core/numbers.s line 142*

Subtracts two numbers of the same type. This is an overload for the - operator.

```rust
sub(float x, float y) -> (float)
```

### sub - subtract by
*Defined in: std/core/numbers.s line 142*

Subtracts two numbers of the same type. This is an overload for the - operator.
Natural numbers are safeguarded against acquiring negative results, which would overflow.

```rust
sub(nat x, nat y) -> (nat)
```
Potential errors:

5. nat subtraction would yield a negative

### sub - vector subtraction
*Defined in: std/sci/vec.s line 89*

Grabs an FLOATS for the result as an effect.

```rust
sub(circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 89*

Grabs an FLOATS for the result as an effect.

```rust
sub(arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 89*

Grabs an FLOATS for the result as an effect.

```rust
sub(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
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
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### sub - vector subtraction
*Defined in: std/sci/vec.s line 79*

Grabs an FLOATS for the result as an effect.

```rust
sub(circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 79*

Grabs an FLOATS for the result as an effect.

```rust
sub(circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
17. does not fit in circular arena
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. different vector sizes

### sub - vector subtraction
*Defined in: std/sci/vec.s line 79*

Grabs an FLOATS for the result as an effect.

```rust
sub(arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 79*

Grabs an FLOATS for the result as an effect.

```rust
sub(arena, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
16. arena is out of space
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. different vector sizes

### sub - vector subtraction
*Defined in: std/sci/vec.s line 79*

Grabs an FLOATS for the result as an effect.

```rust
sub(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
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
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### sub - vector subtraction
*Defined in: std/sci/vec.s line 79*

Grabs an FLOATS for the result as an effect.

```rust
sub(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
60. different vector sizes


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# pow
### pow - exponentiate by
*Defined in: std/core/numbers.s line 154*

Exponentiates a natural number by another.

```rust
pow(nat x, nat y) -> (mut nat)
```

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 123*

Grabs an FLOATS for the result as an effect.

```rust
pow(circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 123*

Grabs an FLOATS for the result as an effect.

```rust
pow(arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 123*

Grabs an FLOATS for the result as an effect.

```rust
pow(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
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
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### pow - vector exponentiation
*Defined in: std/sci/vec.s line 113*

Grabs an FLOATS for the result as an effect.

```rust
pow(circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 113*

Grabs an FLOATS for the result as an effect.

```rust
pow(circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
17. does not fit in circular arena
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. different vector sizes

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 113*

Grabs an FLOATS for the result as an effect.

```rust
pow(arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 113*

Grabs an FLOATS for the result as an effect.

```rust
pow(arena, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
15. out of bounds
16. arena is out of space
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
60. different vector sizes

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 113*

Grabs an FLOATS for the result as an effect.

```rust
pow(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
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
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### pow - vector exponentiation
*Defined in: std/sci/vec.s line 113*

Grabs an FLOATS for the result as an effect.

```rust
pow(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
8. iteration end
9. iterator range
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
60. different vector sizes


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### pow
*Defined in: std/sci/math.s line 58*

```rust
pow(float x, float y) -> (float)
```

# console
### console - references the system console
*Defined in: std/core/print.s line 20*

As a singleton for program safety, the console should usually be instantiated
in the `main()` function and then passed to dependent calls, for example via an
an effect for convenience. Standard library functions provide the CLI effect
and you can propagate to this by prepending `effect mut console CLI` to function
arguments. This is a zero-cost abstraction in that it does not transfer any data
but only works alongside the safety of the compiler.
To quickly print internals for debugging, use `unsafe_console()` instead.

```rust
console() -> (mut console)
```

# unsafe\_console
### unsafe\_console - references the system console unsafely
*Defined in: std/core/print.s line 31*

This is convenient for print debugging by writing `unsafe_console().print ...`
without needing to evoke an effect to pass the normally singleton console.

```rust
unsafe_console() -> (mut console)
```

# flush
### flush - flushes the print buffer on the console
*Defined in: std/core/print.s line 39*

```rust
flush(mut console) -> () with effects CLI
```

# nn
### nn - no new line
*Defined in: std/core/print.s line 43*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(nat) -> (nat value, cstr)
```

### nn - no new line
*Defined in: std/core/print.s line 43*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(int) -> (int value, cstr)
```

### nn - no new line
*Defined in: std/core/print.s line 43*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(float) -> (float value, cstr)
```

### nn - no new line
*Defined in: std/core/print.s line 43*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(cstr) -> (cstr value, cstr)
```

### nn - no new line
*Defined in: std/core/string.s line 298*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without a new line.

```rust
nn(str) -> (str, cstr)
```

### nn - no new line
*Defined in: std/sci/vec.s line 209*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without a new line.

```rust
nn(vec) -> (vec, cstr)
```

# print
### print - prints an unsigned integer
*Defined in: std/core/print.s line 72*

```rust
print(mut console CLI, nat value, cstr endl) -> () with effects CLI
```

### print - prints an unsigned integer
*Defined in: std/core/print.s line 72*

Automatically ends the line too.

```rust
print(mut console CLI, nat value) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s line 79*

```rust
print(mut console CLI, bool value, cstr endl) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s line 79*

Automatically ends the line too.

```rust
print(mut console CLI, bool value) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s line 86*

```rust
print(mut console CLI, true, cstr endl) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s line 86*

Automatically ends the line too.

```rust
print(mut console CLI, true) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s line 93*

```rust
print(mut console CLI, false, cstr endl) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s line 93*

Automatically ends the line too.

```rust
print(mut console CLI, false) -> () with effects CLI
```

### print - prints an integer
*Defined in: std/core/print.s line 65*

Automatically ends the line too.

```rust
print(mut console CLI, int value) -> () with effects CLI
```

### print - prints an integer
*Defined in: std/core/print.s line 65*

```rust
print(mut console CLI, int value, cstr endl) -> () with effects CLI
```

### print - prints a float
*Defined in: std/core/print.s line 57*

To pre-specified 6 decimal digits.
Automatically ends the line too.

```rust
print(mut console CLI, float value) -> () with effects CLI
```

### print - prints a float
*Defined in: std/core/print.s line 57*

To pre-specified 6 decimal digits.

```rust
print(mut console CLI, float value, cstr endl) -> () with effects CLI
```

### print - prints a cstr
*Defined in: std/core/print.s line 50*

Automatically ends the line too.

```rust
print(mut console CLI, cstr value) -> () with effects CLI
```

### print - prints a cstr
*Defined in: std/core/print.s line 50*

```rust
print(mut console CLI, cstr value, cstr endl) -> () with effects CLI
```

### print - print a character
*Defined in: std/core/string.s line 248*

Ends the line too.

```rust
print(mut console CLI, char c) -> () with effects CLI
```

### print - print a character
*Defined in: std/core/string.s line 248*

```rust
print(mut console CLI, char c, cstr endl) -> () with effects CLI
```

### print - print a string
*Defined in: std/core/string.s line 237*

Ends the line too.

```rust
print(mut console CLI, str) -> () with effects CLI
```

### print - print a string
*Defined in: std/core/string.s line 237*

```rust
print(mut console CLI, str, cstr endl) -> () with effects CLI
```

### print - writes a cstr to a write file
*Defined in: std/io/file.s line 112*

```rust
print(write, cstr text) -> ()
```
Potential errors:

47. failed to write to closed file

### print - writes a cstr to a write file
*Defined in: std/io/file.s line 112*

```rust
print(write, cstr text) -> ()
```
Potential errors:

47. failed to write to closed file

### print - writes a cstr to a write file
*Defined in: std/io/file.s line 112*

```rust
print(terminal, cstr text) -> ()
```
Potential errors:

47. failed to write to closed file

### print - writes a string to a write file
*Defined in: std/io/file.s line 106*

```rust
print(write, str) -> ()
```
Potential errors:

48. failed to write to file
47. failed to write to closed file

### print - writes a string to a write file
*Defined in: std/io/file.s line 106*

```rust
print(write, str) -> ()
```
Potential errors:

48. failed to write to file
47. failed to write to closed file

### print - writes a string to a write file
*Defined in: std/io/file.s line 106*

```rust
print(terminal, str) -> ()
```
Potential errors:

48. failed to write to file
47. failed to write to closed file

### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s line 122*

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

```rust
print(mut console CLI, mat) -> () with effects CLI
```
Potential errors:

64. row out of bounds
65. column out of bounds
2. null pointer
5. nat subtraction would yield a negative
8. iteration end

### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s line 122*

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

```rust
print(mut console CLI, mat, cstr endl) -> () with effects CLI
```
Potential errors:

64. row out of bounds
65. column out of bounds
2. null pointer
5. nat subtraction would yield a negative
8. iteration end

### print - print a vector
*Defined in: std/sci/vec.s line 216*

Prints as a row, such as [ 1.0  2.0  3.0 ]

```rust
print(mut console CLI, vec) -> () with effects CLI
```
Potential errors:

2. null pointer
5. nat subtraction would yield a negative
8. iteration end
9. iterator range
15. out of bounds

### print - print a vector
*Defined in: std/sci/vec.s line 216*

Prints as a row, such as [ 1.0  2.0  3.0 ]

```rust
print(mut console CLI, vec, cstr endl) -> () with effects CLI
```
Potential errors:

2. null pointer
5. nat subtraction would yield a negative
8. iteration end
9. iterator range
15. out of bounds

### print - print sparse matrix
*Defined in: std/sci/coo.s line 88*

Prints it as coordinate as list: (i, j): v

```rust
print(mut console CLI, coo) -> () with effects CLI
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### print - print sparse matrix
*Defined in: std/sci/coo.s line 88*

Prints it as coordinate as list: (i, j): v

```rust
print(mut console CLI, coo, cstr endl) -> () with effects CLI
```
No failing errors, but can catch these intercepted ones:

2. null pointer

# exists
### exists - checks that a pointer exists
*Defined in: std/core/convert.s line 58*

```rust
exists(any ptr) -> (bool)
```

### exists - checks whether a cstr is not zero-initialized
*Defined in: std/core/string.s line 33*

```rust
exists(cstr) -> (bool)
```

# bits
### bits - bit representation
*Defined in: std/core/convert.s line 76*

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

```rust
bits(float) -> (bits)
```

### bits - bit representation
*Defined in: std/core/convert.s line 69*

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

```rust
bits(int) -> (bits)
```

### bits - bit representation
*Defined in: std/core/convert.s line 63*

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

```rust
bits(nat) -> (bits)
```

# lshift
### lshift - left shift
*Defined in: std/core/convert.s line 102*

```rust
lshift(bits, nat y) -> (bits)
```

# rshift
### rshift - right shift
*Defined in: std/core/convert.s line 107*

```rust
rshift(bits, nat y) -> (bits)
```

# xor
### xor - bitwise xor
*Defined in: std/core/convert.s line 112*

```rust
xor(bits, bits) -> (bits)
```

# band
### band - bitwise and
*Defined in: std/core/convert.s line 117*

```rust
band(bits, bits) -> (bits)
```

# bor
### bor - bitwise or
*Defined in: std/core/convert.s line 122*

```rust
bor(bits, bits) -> (bits)
```

# range
### range - constructs a range
*Defined in: std/core/range.s line 25*

Endpoints are natural numbers (unsigned integers). This is handy for several kinds of iteration.

```rust
range(nat) -> (range)
```

### range - constructs a range
*Defined in: std/core/range.s line 19*

Endpoints are natural numbers (unsigned integers). This is handy for several kinds of iteration.

```rust
range(nat _from, nat to) -> (range)
```

# next
### next - next range number
*Defined in: std/core/range.s line 30*

This increments the r.from position and returns the previous one.

```rust
next(range) -> (nat)
```
Potential errors:

8. iteration end

### next
*Defined in: std/map.s line 38*

```rust
next(robinhood_str_entry[] {str, nat cost}, mut nat pos) -> (mut str)
```
Potential errors:

2. null pointer
15. out of bounds

### next
*Defined in: std/map.s line 38*

```rust
next(robinhood_nat_entry[] {nat s, nat cost}, mut nat pos) -> (mut nat)
```
Potential errors:

2. null pointer
15. out of bounds

### next - Computes the next random number of a Rand sequence.
*Defined in: std/rand.s line 88*

```rust
next(mut Rand) -> (float)
```

# get
### get - get a list element pointer
*Defined in: std/core/allocators.s line 52*

```rust
get(list, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```
Potential errors:

15. out of bounds

### get - get a list element pointer
*Defined in: std/core/allocators.s line 52*

```rust
get(circular, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```
Potential errors:

15. out of bounds

### get - get a pointer to a buffer element
*Defined in: std/core/array.s line 88*

```rust
get(any[], nat i) -> (any ptr {follows any ptr buffer.unsafe_ptr})
```
Potential errors:

15. out of bounds

### get - assert that a number lies in the range
*Defined in: std/core/range.s line 39*

The item itself is returned. This lets the range be used as an iterator
per a pattern like `for i in range 10 ...`.

```rust
get(range, nat pos) -> (nat)
```
Potential errors:

8. iteration end
9. iterator range

### get - a character in a string
*Defined in: std/core/string.s line 244*

```rust
get(str, nat i) -> (char ptr {char})
```

### get - get a hash map entry
*Defined in: std/map.s line 28*

Implemented for string or cstr keys but buffer of any values.

```rust
get(robinhood_nat_entry[] {nat s, nat cost}, any[], nat key) -> (any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
53. index not found
8. iteration end
15. out of bounds

### get - get a hash map entry
*Defined in: std/map.s line 18*

Implemented for string or cstr keys but buffer of any values.

```rust
get(robinhood_str_entry[] {str, nat cost}, any[], str) -> (any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
4. modulo by zero 
53. index not found
5. nat subtraction would yield a negative
8. iteration end
15. out of bounds

### get - get a hash map entry
*Defined in: std/map.s line 18*

Implemented for string or cstr keys but buffer of any values.

```rust
get(robinhood_str_entry[] {str, nat cost}, any[], cstr key) -> (any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
8. iteration end
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
53. index not found

### get
*Defined in: std/io.s line 10*

```rust
get(edit char[] {char}, read, nat) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
37. end of file
5. nat subtraction would yield a negative
15. out of bounds

### get
*Defined in: std/io.s line 10*

```rust
get(edit char[] {char}, terminal, nat) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s line 10*

```rust
get(edit char[] {char}, write, nat) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s line 10*

```rust
get(edit char[] {char}, write, nat) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s line 10*

```rust
get(edit char[] {char}, read, nat) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s line 10*

```rust
get(edit char[] {char}, mut nat pos, read, nat) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
37. end of file
5. nat subtraction would yield a negative
15. out of bounds

### get
*Defined in: std/io.s line 10*

```rust
get(edit char[] {char}, mut nat pos, terminal, nat) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s line 10*

```rust
get(edit char[] {char}, mut nat pos, write, nat) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s line 10*

```rust
get(edit char[] {char}, mut nat pos, write, nat) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s line 10*

```rust
get(edit char[] {char}, mut nat pos, read, nat) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s line 10*

```rust
get(edit char[] {char}, mut nat pos, read, nat) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get
*Defined in: std/io.s line 7*

```rust
get(read, nat) -> (str)
```
Potential errors:

2. null pointer
51. not open dir
52. end of dir
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
15. out of bounds

### get - GET with system curl
*Defined in: std/io/web.s line 15*

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.
This version downloads to a '.tmp' file.

```rust
get(mut console CLI, cstr url) -> (str) with effects CLI
```
Potential errors:

2. null pointer
38. unsanitized command: shell metacharacter detected
39. system call failed
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
20. string does not fit on buffer

### get - GET with system curl
*Defined in: std/io/web.s line 15*

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.

```rust
get(mut console CLI, cstr url, cstr path) -> (str) with effects CLI
```
Potential errors:

2. null pointer
38. unsanitized command: shell metacharacter detected
39. system call failed
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
20. string does not fit on buffer

### get - GET with system curl
*Defined in: std/io/web.s line 15*

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.

```rust
get(mut console CLI, cstr url, str) -> (str) with effects CLI
```
Potential errors:

2. null pointer
38. unsanitized command: shell metacharacter detected
39. system call failed
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
20. string does not fit on buffer

### get - GET with system curl
*Defined in: std/io/web.s line 15*

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.
This version downloads to a '.tmp' file.

```rust
get(mut console CLI, str) -> (str) with effects CLI
```
Potential errors:

2. null pointer
38. unsanitized command: shell metacharacter detected
39. system call failed
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
20. string does not fit on buffer

### get - GET with system curl
*Defined in: std/io/web.s line 15*

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.

```rust
get(mut console CLI, str, cstr path) -> (str) with effects CLI
```
Potential errors:

2. null pointer
38. unsanitized command: shell metacharacter detected
39. system call failed
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
20. string does not fit on buffer

### get - GET with system curl
*Defined in: std/io/web.s line 15*

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.

```rust
get(mut console CLI, str, str) -> (str) with effects CLI
```
Potential errors:

2. null pointer
38. unsanitized command: shell metacharacter detected
39. system call failed
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
20. string does not fit on buffer

### get
*Defined in: std/io.s line 10*

```rust
get(edit char[] {char}, read, nat) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
37. end of file
5. nat subtraction would yield a negative
46. not open file
15. out of bounds

### get - get a vector element at given position
*Defined in: std/sci/vec.s line 53*

```rust
get(vec, nat i) -> (float ptr {float})
```
Potential errors:

15. out of bounds

### get - get a sparse element
*Defined in: std/sci/coo.s line 43*

```rust
get(coo, nat k) -> (sparse_element ptr {nat row, nat col, float value})
```
Potential errors:

15. out of bounds

### get - reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 49*

```rust
get(mat, nat i, nat j) -> (float ptr {float})
```
Potential errors:

64. row out of bounds
65. column out of bounds

# KB
### KB - kilobytes to bytes
*Defined in: std/core/units.s line 19*

```rust
KB(nat) -> (nat)
```

# MB
### MB - megabytes to bytes
*Defined in: std/core/units.s line 23*

```rust
MB(nat) -> (nat)
```

# GB
### GB - gigabytes to bytes
*Defined in: std/core/units.s line 27*

```rust
GB(nat) -> (nat)
```

# alloc
### alloc - circular arena allocation
*Defined in: std/core/allocators.s line 71*

```rust
alloc(circular, nat length) -> (allocated)
```
Potential errors:

17. does not fit in circular arena

### alloc - circular arena allocation
*Defined in: std/core/allocators.s line 71*

Creates room for one element.

```rust
alloc(circular) -> (allocated)
```
Potential errors:

17. does not fit in circular arena

### alloc
*Defined in: std/core/string.s line 29*

```rust
alloc(new CHARS, nat length) -> (allocated) with effects CHARS
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### alloc - list allocation
*Defined in: std/core/allocators.s line 84*

Creates room for one element.

```rust
alloc(list) -> (allocated)
```
Potential errors:

3. division by zero 
11. reallocation failed
14. cannot resize an unallocated or freed buffer

### alloc - list allocation
*Defined in: std/core/allocators.s line 84*

```rust
alloc(list, nat length) -> (allocated)
```
Potential errors:

3. division by zero 
11. reallocation failed
14. cannot resize an unallocated or freed buffer

### alloc - arena allocation
*Defined in: std/core/allocators.s line 60*

Creates room for one element.

```rust
alloc(arena) -> (allocated)
```
Potential errors:

16. arena is out of space

### alloc - arena allocation
*Defined in: std/core/allocators.s line 60*

```rust
alloc(arena, nat length) -> (allocated)
```
Potential errors:

16. arena is out of space

### alloc - allocate a char[] buffer
*Defined in: std/core/array.s line 52*

```rust
alloc(nat) -> (edit char[] {char})
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. For convenience for usage within loops, allocation
of the same size only zero-initializes the buffer. If a different size is given, and the
buffer is non-empty, this fails. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.
This version allocates a buffer of ONE element, which can be used for stable indirection.

```rust
alloc(edit any[]) -> (edit any[])
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. For convenience for usage within loops, allocation
of the same size only zero-initializes the buffer. If a different size is given, and the
buffer is non-empty, this fails. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.
This version allocates a buffer of ONE element, which can be used for stable indirection.

```rust
alloc(edit any[], "dirty") -> (edit any[])
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. For convenience for usage within loops, allocation
of the same size only zero-initializes the buffer. If a different size is given, and the
buffer is non-empty, this fails. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size) -> (edit any[])
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. For convenience for usage within loops, allocation
of the same size only zero-initializes the buffer. If a different size is given, and the
buffer is non-empty, this fails. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size, "dirty") -> (edit any[])
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### alloc - allocate memory
*Defined in: std/unsafe.s line 19*

Allocates a memory of the provided size in bytes.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
alloc(nat) -> (any ptr)
```
Potential errors:

10. allocation failed

# resize
### resize - resize the buffer
*Defined in: std/core/array.s line 56*

This does nothing if the previous size is the same or less, frees the buffer if new size is zero.
If old size was zero, an error is created instead of allocating so that this does not leak
resources.

```rust
resize(edit any[], nat size) -> (edit any[])
```
Potential errors:

11. reallocation failed
14. cannot resize an unallocated or freed buffer

# last
### last - get a pointer to the last buffer element
*Defined in: std/core/array.s line 73*

```rust
last(any[]) -> (any ptr {follows any ptr buffer.unsafe_ptr})
```
Potential errors:

5. nat subtraction would yield a negative
15. out of bounds

# mutlast
### mutlast - get a mutable pointer to the last buffer element
*Defined in: std/core/array.s line 78*

```rust
mutlast(edit any[]) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```
Potential errors:

5. nat subtraction would yield a negative
15. out of bounds

# mutget
### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 56*

```rust
mutget(list, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```
Potential errors:

15. out of bounds

### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 56*

```rust
mutget(circular, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```
Potential errors:

15. out of bounds

### mutget - get a mutable pointer to a buffer element
*Defined in: std/core/array.s line 83*

```rust
mutget(edit any[], nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```
Potential errors:

15. out of bounds

### mutget - get a mutable hash map entry
*Defined in: std/map.s line 33*

Implemented for string or cstr keys but buffer of any values.

```rust
mutget(edit robinhood_nat_entry[] {nat s, nat cost}, mut any[], nat key) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
54. string buffer is full
8. iteration end
15. out of bounds

### mutget - get a mutable hash map entry
*Defined in: std/map.s line 23*

Implemented for string or cstr keys but buffer of any values.

```rust
mutget(edit robinhood_str_entry[] {str, nat cost}, mut any[], str) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
54. string buffer is full
8. iteration end
15. out of bounds

### mutget - get a mutable hash map entry
*Defined in: std/map.s line 23*

Implemented for string or cstr keys but buffer of any values.

```rust
mutget(edit robinhood_str_entry[] {str, nat cost}, mut any[], cstr key) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
8. iteration end
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
54. string buffer is full

### mutget - modify a vector element at given position
*Defined in: std/sci/vec.s line 48*

```rust
mutget(vec, nat i) -> (mut float ptr {float})
```
Potential errors:

15. out of bounds

### mutget - mutable reference to a sparse element
*Defined in: std/sci/coo.s line 48*

```rust
mutget(coo, nat k) -> (mut sparse_element ptr {nat row, nat col, float value})
```
Potential errors:

15. out of bounds

### mutget - mutable reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 43*

```rust
mutget(mat, nat i, nat j) -> (mut float ptr {float})
```
Potential errors:

64. row out of bounds
65. column out of bounds

# len
### len - string length
*Defined in: std/core/string.s line 105*

```rust
len(str) -> (nat)
```

### len - the number of buffer elements
*Defined in: std/core/array.s line 93*

```rust
len(any[]) -> (nat)
```

### len - vectot length
*Defined in: std/sci/vec.s line 44*

```rust
len(vec) -> (nat)
```

# new
### new - allocations on new bufs
*Defined in: std/core/allocators.s line 5*

```rust
new() -> (new)
```

# arena
### arena - a buffer and mutable position pair
*Defined in: std/core/allocators.s line 16*

The position starts from 0. This structure is often used
to track the size of allocated data within the buffer.

```rust
arena(edit any[]) -> (arena)
```

### arena - a buffer and mutable position pair
*Defined in: std/core/allocators.s line 9*

The position starts from 0. This structure is often used
to track the size of allocated data within the buffer.

```rust
arena(edit any[], nat _pos) -> (arena)
```

### arena
*Defined in: std/sci/vec.s line 235*

```rust
arena(vec) -> (arena)
```

# allocated
### allocated
*Defined in: std/core/allocators.s line 22*

```rust
allocated(edit any[], nat pos) -> (allocated)
```

# status
### status - convert to a nameless buffer and position pair
*Defined in: std/core/allocators.s line 25*

This unpacking is used to pass an arena's state or allocated
memory data as part of structural input.

```rust
status(allocated) -> (any[] {follows any ptr self.buf.unsafe_ptr}, nat t665t)
```

### status - convert to a nameless buffer and position pair
*Defined in: std/core/allocators.s line 25*

This unpacking is used to pass an arena's state or allocated
memory data as part of structural input.

```rust
status(arena) -> (any[] {follows any ptr self.buf.unsafe_ptr}, nat t662t)
```

# circular
### circular - circular buf
*Defined in: std/core/allocators.s line 39*

```rust
circular(edit any[]) -> (circular)
```

# list
### list - list of buf
*Defined in: std/core/allocators.s line 44*

List defined over a mutable buf that is automatically managed and resized.
A capacity is maintained so that resizes are not performed too frequently.

```rust
list(mut any[]) -> (list)
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# at
### at - get a mutable pointer to the last buffer element
*Defined in: std/core/allocators.s line 97*

```rust
at(allocated) -> (mut any ptr {follows any ptr surface.buf.unsafe_ptr})
```
Potential errors:

15. out of bounds

### at
*Defined in: std/hash.s line 73*

```rust
at(edit robinhood_nat_entry[] {nat s, nat cost}, nat _k) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
54. string buffer is full
8. iteration end
15. out of bounds

### at
*Defined in: std/hash.s line 73*

```rust
at(edit robinhood_str_entry[] {str, nat cost}, cstr _k) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
8. iteration end
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
54. string buffer is full

### at
*Defined in: std/hash.s line 73*

```rust
at(edit robinhood_str_entry[] {str, nat cost}, str) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
54. string buffer is full
8. iteration end
15. out of bounds

### at
*Defined in: std/sci/vec.s line 61*

```rust
at(vec, nat i) -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### at
*Defined in: std/sci/vec.s line 58*

```rust
at(float number, nat i) -> (float)
```

# char\_arena
### char\_arena
*Defined in: std/core/string.s line 23*

```rust
char_arena() -> (arena)
```

# char\_circular
### char\_circular
*Defined in: std/core/string.s line 25*

```rust
char_circular() -> (circular)
```

# char\_list
### char\_list
*Defined in: std/core/string.s line 27*

```rust
char_list() -> (list)
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# char\_allocator
### char\_list
*Defined in: std/core/string.s line 27*

```rust
char_list() -> (list)
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### char\_circular
*Defined in: std/core/string.s line 25*

```rust
char_circular() -> (circular)
```

### char\_arena
*Defined in: std/core/string.s line 23*

```rust
char_arena() -> (arena)
```

### new - allocations on new bufs
*Defined in: std/core/allocators.s line 5*

```rust
new() -> (new)
```

### char\_allocator
*Defined in: std/core/string.s line 305*

```rust
char_allocator(arena, cstr s1, cstr s2) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
5. nat subtraction would yield a negative
15. out of bounds

### char\_allocator
*Defined in: std/core/string.s line 305*

```rust
char_allocator(arena, cstr s1, str) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
15. out of bounds

### char\_allocator
*Defined in: std/core/string.s line 305*

```rust
char_allocator(arena, str, cstr s2) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
15. out of bounds

### char\_allocator
*Defined in: std/core/string.s line 305*

```rust
char_allocator(arena, str, str) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
2. null pointer
5. nat subtraction would yield a negative
15. out of bounds

# strdat
### strdat - string data without the buffer storage
*Defined in: std/core/string.s line 38*

```rust
strdat(nat pos, nat length, char first) -> (nat pos, nat length, char first)
```

### strdat
*Defined in: std/mini.s line 41*

```rust
strdat(nat _pos, nat _length) -> (nat16 pos, nat16 length)
```
Potential errors:

56. nat value too large to pack in nat16

# str
### str - convert to string
*Defined in: std/core/string.s line 94*

Defines an implicit constant buffer using the cstr's memory data.
Subsequent comparisons no longer use the underlying pointer value.

```rust
str(cstr) -> (str)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 87*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[] {char}, nat endpos, "from", nat pos) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
5. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 78*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[] {char}, nat pos, "to", nat endpos) -> (str)
```
Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
5. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 70*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[] {char}, nat pos, "lento", nat length) -> (str)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### str - tautology function for strings
*Defined in: std/core/string.s line 66*

```rust
str(str) -> (str)
```

### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 58*

```rust
str(char[] {char}) -> (str)
```
Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds

### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 58*

```rust
str(char[] {char}, nat length) -> (str)
```
Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 51*

```rust
str(char[] {char}, nat dat.pos, nat dat.length, char dat.first) -> (str)
```
Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### str - a string residing on a buffer
*Defined in: std/core/string.s line 46*

```rust
str(char ptr unsafe_ptr {char}, nat pos, nat length) -> (str)
```

### str - a string residing on a buffer
*Defined in: std/core/string.s line 42*

```rust
str(char ptr unsafe_ptr {char}, nat dat.pos, nat dat.length, char dat.first) -> (str)
```

### str - reads a string from the console into buf at pos, returns the read slice
*Defined in: std/core/convertstr.s line 113*

```rust
str(edit char[] {char}, mut nat pos, console console) -> (str)
```
Potential errors:

2. null pointer
5. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
25. read string does not fit on buffer

### str - create a compact str
*Defined in: std/mini.s line 54*

The created str variation should be used only for storng and
retrieving data with 'unpack' for memory efficiency.

```rust
str(cstr) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
56. nat value too large to pack in nat16
15. out of bounds

### str - create a compact str
*Defined in: std/mini.s line 46*

The created str variation should be used only for storng and
retrieving data with 'unpack' for memory efficiency.

```rust
str(str) -> (str)
```
Potential errors:

56. nat value too large to pack in nat16

# copy
### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 132*

```rust
copy(list, cstr _other) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
3. division by zero 
11. reallocation failed
14. cannot resize an unallocated or freed buffer
15. out of bounds

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 132*

```rust
copy(list, str) -> (str) with effects CHARS
```
Potential errors:

18. can only define strings on contiguous buffers
3. division by zero 
19. can only define strings on non-offset buffers
11. reallocation failed
14. cannot resize an unallocated or freed buffer

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 132*

```rust
copy(circular, cstr _other) -> (str) with effects CHARS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
15. out of bounds

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 132*

```rust
copy(circular, str) -> (str) with effects CHARS
```
Potential errors:

17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 132*

```rust
copy(arena, cstr _other) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
15. out of bounds

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 132*

```rust
copy(arena, str) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 132*

```rust
copy(new CHARS, cstr _other) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 132*

```rust
copy(new CHARS, str) -> (str) with effects CHARS
```
Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### copy - copy a vector
*Defined in: std/sci/vec.s line 227*

Grabs a FLOATS for the result as an effect.

```rust
copy(circular, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### copy - copy a vector
*Defined in: std/sci/vec.s line 227*

Grabs a FLOATS for the result as an effect.

```rust
copy(arena, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
8. iteration end
9. iterator range
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### copy - copy a vector
*Defined in: std/sci/vec.s line 227*

Grabs a FLOATS for the result as an effect.

```rust
copy(new FLOATS, vec) -> (mut vec) with effects FLOATS
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
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# copy\_null\_terminated
### copy\_null\_terminated - create null terminated string
*Defined in: std/core/string.s line 139*

Copies a string to a new buffer while ensuring null termination.
This is mainly useful for supporting 'cstr unsafe_temp'.

```rust
copy_null_terminated(new CHARS, str) -> (str) with effects CHARS
```
Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s line 220*

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

```rust
copy_null_terminated(arena, cstr _other) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
21. string buffer out of memory
15. out of bounds

### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s line 220*

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

```rust
copy_null_terminated(arena, str) -> (str) with effects CHARS
```
Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
21. string buffer out of memory

# unsafe\_temp
### unsafe\_temp - convert a string to a temporary null-terminated (cstr,str) pair
*Defined in: std/core/string.s line 149*

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

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### unsafe\_temp - tautology function for cstr
*Defined in: std/core/string.s line 171*

This is mainly used as a stt-input counterpart for converting str|cstr to cstr.

```rust
unsafe_temp(cstr) -> (cstr cstr, str)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

# endpos
### endpos - the end position of a string
*Defined in: std/core/string.s line 183*

This position is computed relative to its start in its
enclosing buffer.

```rust
endpos(str) -> (nat)
```

# slice
### slice
*Defined in: std/core/string.s line 255*

```rust
slice(str, nat from, nat to) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

# starts\_with
### starts\_with
*Defined in: std/core/string.s line 264*

```rust
starts_with(str, str) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### starts\_with
*Defined in: std/core/string.s line 264*

```rust
starts_with(str, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### starts\_with
*Defined in: std/core/string.s line 264*

```rust
starts_with(cstr _stack, str) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### starts\_with
*Defined in: std/core/string.s line 264*

```rust
starts_with(cstr _stack, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

# ends\_with
### ends\_with
*Defined in: std/core/string.s line 271*

```rust
ends_with(str, str) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### ends\_with
*Defined in: std/core/string.s line 271*

```rust
ends_with(str, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### ends\_with
*Defined in: std/core/string.s line 271*

```rust
ends_with(cstr _stack, str) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### ends\_with
*Defined in: std/core/string.s line 271*

```rust
ends_with(cstr _stack, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
5. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

# contains
### contains
*Defined in: std/core/string.s line 287*

```rust
contains(str, str) -> (bool)
```
Potential errors:

2. null pointer
5. nat subtraction would yield a negative
8. iteration end
9. iterator range
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds

### contains
*Defined in: std/core/string.s line 287*

```rust
contains(str, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
5. nat subtraction would yield a negative
8. iteration end
9. iterator range
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds

### contains
*Defined in: std/core/string.s line 287*

```rust
contains(cstr _stack, str) -> (bool)
```
Potential errors:

2. null pointer
5. nat subtraction would yield a negative
8. iteration end
9. iterator range
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds

### contains
*Defined in: std/core/string.s line 287*

```rust
contains(cstr _stack, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
5. nat subtraction would yield a negative
8. iteration end
9. iterator range
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds

### contains
*Defined in: std/core/string.s line 280*

```rust
contains(str, char needle) -> (bool)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer

### contains
*Defined in: std/core/string.s line 280*

```rust
contains(cstr _stack, char needle) -> (bool)
```
Potential errors:

18. can only define strings on contiguous buffers
2. null pointer
19. can only define strings on non-offset buffers
8. iteration end
9. iterator range
15. out of bounds

# is\_number
### is\_number
*Defined in: std/core/convertstr.s line 30*

```rust
is_number(char) -> (bool)
```

# rotl
### rotl
*Defined in: std/rand.s line 26*

```rust
rotl(nat x, nat k) -> (nat)
```

# splitmix64
### splitmix64 - time seed
*Defined in: std/rand.s line 55*

Computes the seed of a splitmix64 sequence using the clock
as the source of entropy.

```rust
splitmix64() -> (nat)
```

*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencues! The executed code is: `[time.time_ns()]`*
### splitmix64 - next random number
*Defined in: std/rand.s line 33*

Computes the next random number of a splitmix64 sequence using the mutable 
unsigned int argument as state to be updated. This is NOT cryptographically 
secure and also has small period of 2^64 so usage is not recommended for 
long-running sequences. It is, however, faster than computing a next Rand 
state with next. If you do not provide a seed, a number obtained from the 
current time is provided. That can only be the start of a sequence, and 
marked as a leaking resource to prevent time-based randomization (which is 
not random).

```rust
splitmix64(mut nat) -> (mut nat)
```

# Rand
### Rand - random number generator
*Defined in: std/rand.s line 80*

Xoshiro256plus random numbers from https://prng.di.unimi.it/
These and are NOT cryptographically secure.
This a structural type for storing the progress of random number generators 
on four u64 state fields. This version defaults to a time-based seed. Its period is 2^256-1.

```rust
Rand() -> (Rand)
```

### Rand - random number generator
*Defined in: std/rand.s line 65*

Xoshiro256plus random numbers from https://prng.di.unimi.it/
These and are NOT cryptographically secure.
This a structural type for storing the progress of random number generators 
on four u64 state fields. The version is seed-initalized. Its period is 2^256-1.

```rust
Rand(nat) -> (Rand)
```

# Hashable
### nat - an unsigned integer value
*Defined by the compiler*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat)
```

### float
*Defined by the compiler*

```rust
float() -> (float)
```

### cstr - constant string
*Defined by the compiler*

```rust
cstr() -> (cstr)
```

### float - cast to float
*Defined in: std/core/convert.s line 20*

Serves as a tautology function for code that parses on multiple number types.

```rust
float(float) -> (float)
```

### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(int) -> (float)
```

### nat - cast to nat
*Defined in: std/core/convert.s line 51*

Converting a character to a natural number considers
its bit representation interpreted as an unsigned number.

```rust
nat(char) -> (nat)
```

### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(nat) -> (nat)
```

### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(int) -> (nat)
```
Potential errors:

7. cannot convert negative int to id

### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(float) -> (nat)
```
Potential errors:

6. cannot convert negative float to id

### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(nat) -> (float)
```

### float - cast to float
*Defined in: std/core/convert.s line 95*

Converts a bit representation to the corresponding float number.

```rust
float(bits) -> (float)
```

### nat - cast to nat
*Defined in: std/core/convert.s line 84*

Converts a bit representation to the corresponding natural number.

```rust
nat(bits) -> (nat)
```

### str - convert to string
*Defined in: std/core/string.s line 94*

Defines an implicit constant buffer using the cstr's memory data.
Subsequent comparisons no longer use the underlying pointer value.

```rust
str(cstr) -> (str)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 87*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[] {char}, nat endpos, "from", nat pos) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
5. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 78*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[] {char}, nat pos, "to", nat endpos) -> (str)
```
Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
5. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 70*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[] {char}, nat pos, "lento", nat length) -> (str)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### str - tautology function for strings
*Defined in: std/core/string.s line 66*

```rust
str(str) -> (str)
```

### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 58*

```rust
str(char[] {char}) -> (str)
```
Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds

### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 58*

```rust
str(char[] {char}, nat length) -> (str)
```
Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 51*

```rust
str(char[] {char}, nat dat.pos, nat dat.length, char dat.first) -> (str)
```
Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### str - a string residing on a buffer
*Defined in: std/core/string.s line 46*

```rust
str(char ptr unsafe_ptr {char}, nat pos, nat length) -> (str)
```

### str - a string residing on a buffer
*Defined in: std/core/string.s line 42*

```rust
str(char ptr unsafe_ptr {char}, nat dat.pos, nat dat.length, char dat.first) -> (str)
```

### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat16) -> (nat)
```

### cstr - a cstr description of an error code
*Defined in: std/core/error.s line 19*

Error codes should *not* be compared numerically against
given numbers, as their numbering changes for different
programs. Instead, they should be converted to a cstr
string with this function, which can then be compared.
This comparison is also one numerical comparison, as
care is taken for all cstr to point to the same memory
location.

```rust
cstr(catch) -> (cstr)
```

### str - reads a string from the console into buf at pos, returns the read slice
*Defined in: std/core/convertstr.s line 113*

```rust
str(edit char[] {char}, mut nat pos, console console) -> (str)
```
Potential errors:

2. null pointer
5. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
25. read string does not fit on buffer

### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 177*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(cstr cstr, str) -> (cstr)
```

### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 177*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
```

# hash
### hash
*Defined in: std/hash.s line 14*

```rust
hash(nat k, nat size) -> (nat)
```
Potential errors:

4. modulo by zero 

### hash
*Defined in: std/hash.s line 7*

```rust
hash(str, nat size) -> (nat)
```
Potential errors:

8. iteration end
2. null pointer
4. modulo by zero 

# to\_hash\_base
### to\_hash\_base
*Defined in: std/hash.s line 28*

```rust
to_hash_base(nat) -> (bits)
```

### to\_hash\_base
*Defined in: std/hash.s line 28*

```rust
to_hash_base(int) -> (bits)
```

### to\_hash\_base
*Defined in: std/hash.s line 28*

```rust
to_hash_base(float) -> (bits)
```

### to\_hash\_base
*Defined in: std/hash.s line 25*

```rust
to_hash_base(cstr) -> (str)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### to\_hash\_base
*Defined in: std/hash.s line 25*

```rust
to_hash_base(str) -> (str)
```

# robinhood\_str\_entry
### robinhood\_str\_entry
*Defined in: std/hash.s line 31*

```rust
robinhood_str_entry(str, nat cost) -> (str, nat cost)
```

# robinhood\_nat\_entry
### robinhood\_nat\_entry
*Defined in: std/hash.s line 34*

```rust
robinhood_nat_entry(nat s, nat cost) -> (nat s, nat cost)
```

# robinhood\_entry
### robinhood\_nat\_entry
*Defined in: std/hash.s line 34*

```rust
robinhood_nat_entry(nat s, nat cost) -> (nat s, nat cost)
```

### robinhood\_str\_entry
*Defined in: std/hash.s line 31*

```rust
robinhood_str_entry(str, nat cost) -> (str, nat cost)
```

# raw
### raw
*Defined in: std/hash.s line 45*

```rust
raw(cstr) -> (str)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### raw
*Defined in: std/hash.s line 42*

```rust
raw(nat) -> (nat)
```

### raw
*Defined in: std/hash.s line 42*

```rust
raw(str) -> (str)
```

### raw
*Defined in: std/hash.s line 39*

```rust
raw(nat s, nat cost) -> (nat)
```

### raw
*Defined in: std/hash.s line 39*

```rust
raw(str, nat cost) -> (str)
```

# is\_zero
### is\_zero
*Defined in: std/hash.s line 51*

```rust
is_zero(nat) -> (bool)
```

### is\_zero
*Defined in: std/hash.s line 48*

```rust
is_zero(str) -> (bool)
```

# find
### find
*Defined in: std/hash.s line 54*

```rust
find(str[] {str}, str) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
53. index not found
5. nat subtraction would yield a negative
8. iteration end
15. out of bounds

### find
*Defined in: std/hash.s line 54*

```rust
find(str[] {str}, cstr _k) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
8. iteration end
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
53. index not found

### find
*Defined in: std/hash.s line 54*

```rust
find(robinhood_nat_entry[] {nat s, nat cost}, nat _k) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
53. index not found
8. iteration end
15. out of bounds

### find
*Defined in: std/hash.s line 54*

```rust
find(nat[] {nat}, nat _k) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
53. index not found
8. iteration end
15. out of bounds

### find
*Defined in: std/hash.s line 54*

```rust
find(robinhood_str_entry[] {str, nat cost}, str) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
53. index not found
5. nat subtraction would yield a negative
8. iteration end
15. out of bounds

### find
*Defined in: std/hash.s line 54*

```rust
find(robinhood_str_entry[] {str, nat cost}, cstr _k) -> (mut nat)
```
Potential errors:

2. null pointer
4. modulo by zero 
5. nat subtraction would yield a negative
8. iteration end
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
53. index not found

# strmap
### strmap - a string map
*Defined in: std/map.s line 4*

Maps string indexes to the buffer provided using a robinhood scheme.
Map size is static and cannot be adjusted after initialization.

```rust
strmap(edit any[]) -> (edit robinhood_str_entry[] {str, nat cost}, edit any[])
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# natmap
### natmap - a natural number map
*Defined in: std/map.s line 11*

Maps number indexes to the buffer provided using a robinhood scheme.
Map size is static and cannot be adjusted after initialization.

```rust
natmap(edit any[]) -> (edit robinhood_nat_entry[] {nat s, nat cost}, edit any[])
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# unpack
### unpack
*Defined in: std/mini.s line 66*

```rust
unpack(char[] {char}, nat16 dat.pos, nat16 dat.length) -> (str)
```
Potential errors:

20. string does not fit on buffer

### unpack - unpack a compact str
*Defined in: std/mini.s line 60*

The created compact str is unpacked into its 'nat'-using representation
that is more efficient for computations in 64-bit architectures.

```rust
unpack(str) -> (str)
```

# abs
### abs
*Defined in: std/sci/math.s line 9*

```rust
abs(int) -> (nat)
```

*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencues! The executed code is: `[-$x]`*
### abs
*Defined in: std/sci/math.s line 4*

```rust
abs(float) -> (float)
```

*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencues! The executed code is: `[-$x]`*
# sqrt
### sqrt
*Defined in: std/sci/math.s line 14*

```rust
sqrt(float) -> (float)
```

# sin
### sin
*Defined in: std/sci/math.s line 18*

```rust
sin(float) -> (float)
```

# cos
### cos
*Defined in: std/sci/math.s line 22*

```rust
cos(float) -> (float)
```

# log
### log
*Defined in: std/sci/math.s line 26*

```rust
log(float) -> (float)
```

# tan
### tan
*Defined in: std/sci/math.s line 30*

```rust
tan(float) -> (float)
```

# floor
### floor
*Defined in: std/sci/math.s line 34*

```rust
floor(float) -> (int)
```

# asin
### asin
*Defined in: std/sci/math.s line 38*

```rust
asin(float) -> (float)
```

# acos
### acos
*Defined in: std/sci/math.s line 42*

```rust
acos(float) -> (float)
```

# atan
### atan
*Defined in: std/sci/math.s line 50*

```rust
atan(float x, float y) -> (float)
```

### atan
*Defined in: std/sci/math.s line 46*

```rust
atan(float) -> (float)
```

# exp
### exp
*Defined in: std/sci/math.s line 54*

```rust
exp(float) -> (float)
```

# isnan
### isnan
*Defined in: std/sci/math.s line 63*

```rust
isnan(float) -> (bool)
```

*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencues! The executed code is: `[math.isnan(x)]`*
# isinf
### isinf
*Defined in: std/sci/math.s line 68*

```rust
isinf(float) -> (bool)
```

*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencues! The executed code is: `[math.isinf(x)]`*
# vec
### vec - vector allocation
*Defined in: std/sci/vec.s line 34*

```rust
vec(arena, nat length) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### vec - vector allocation
*Defined in: std/sci/vec.s line 34*

```rust
vec(circular, nat length) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### vec - vector allocation
*Defined in: std/sci/vec.s line 34*

```rust
vec(circular, nat length, "dirty") -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### vec - vector allocation
*Defined in: std/sci/vec.s line 34*

```rust
vec(arena, nat length, "dirty") -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### vec - treat a float buffer as a vector
*Defined in: std/sci/vec.s line 22*

```rust
vec(edit float[] {float}) -> (mut vec)
```
Potential errors:

58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

### vec - vector on a new buffer
*Defined in: std/sci/vec.s line 14*

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
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### vec - vector on a new buffer
*Defined in: std/sci/vec.s line 14*

Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer.

```rust
vec(new FLOATS, nat length, "dirty") -> (mut vec) with effects FLOATS
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### vec - vector type declaration
*Defined in: std/sci/unsafe.s line 3*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
vec(float ptr unsafe_ptr {float}, nat pos, nat length) -> (mut vec)
```

### vec - view a matrix as a vector
*Defined in: std/sci/mat.s line 65*

```rust
vec(mat) -> (mut vec)
```

# mat
### mat - matrix type declaration
*Defined in: std/sci/unsafe.s line 8*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
mat(float ptr unsafe_ptr {float}, nat pos, nat rows, nat cols, nat stride) -> (mut mat)
```

### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 55*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "col") -> (mut mat)
```

### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 55*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "row") -> (mut mat)
```

### mat - matrix on an existing float[] buffer
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit float[] {float}, nat rows) -> (mut mat)
```
Potential errors:

16. arena is out of space
3. division by zero 
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets
63. buffer size not divisible by vector rows

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(circular, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(circular, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(arena, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

16. arena is out of space
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(arena, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Potential errors:

16. arena is out of space
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets

### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 14*

```rust
mat(new FLOATS, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 14*

```rust
mat(new FLOATS, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# sparse\_element
### sparse\_element
*Defined in: std/sci/unsafe.s line 13*

```rust
sparse_element(nat row, nat col, float value) -> (nat row, nat col, float value)
```

# coo
### coo - coo sparse matrix type declaration
*Defined in: std/sci/unsafe.s line 14*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
coo(sparse_element ptr unsafe_ptr {nat row, nat col, float value}, nat rows, nat cols, nat nnz) -> (mut coo)
```

### coo
*Defined in: std/sci/coo.s line 40*

```rust
coo(sparse_element[] {nat row, nat col, float value}, nat rows, nat cols) -> (mut coo)
```

### coo - allocate a sparse matrix
*Defined in: std/sci/coo.s line 34*

This creates a new buffer of sparse elements for convenience.

```rust
coo(nat rows, nat cols, nat nnz) -> (mut coo)
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# float\_arena
### float\_arena
*Defined in: std/sci/vec.s line 6*

```rust
float_arena() -> (arena)
```

# float\_circular
### float\_circular
*Defined in: std/sci/vec.s line 8*

```rust
float_circular() -> (circular)
```

# float\_list
### float\_list
*Defined in: std/sci/vec.s line 10*

```rust
float_list() -> (list)
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# float\_allocator
### new - allocations on new bufs
*Defined in: std/core/allocators.s line 5*

```rust
new() -> (new)
```

### float\_circular
*Defined in: std/sci/vec.s line 8*

```rust
float_circular() -> (circular)
```

### float\_arena
*Defined in: std/sci/vec.s line 6*

```rust
float_arena() -> (arena)
```

# constvec
### constvec - treat an immutable float buffer as an immutable vector
*Defined in: std/sci/vec.s line 28*

```rust
constvec(float[] {float}) -> (vec)
```
Potential errors:

58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets

# reduce
### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", "l2") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", "sqr") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", "abs") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add", "l2") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add", "sqr") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add", "abs") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "l2") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sqr") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "abs") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec) -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec) -> (float)
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "abs") -> (float)
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "sqr") -> (float)
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "l2") -> (float)
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "add") -> (float)
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "add", "abs") -> (float)
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "add", "sqr") -> (float)
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "add", "l2") -> (float)
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "l2") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "sqr") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "abs") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec) -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add", "sqr") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add", "l2") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul", "abs") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul", "sqr") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul", "l2") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add", "abs") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "l2") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "sqr") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "abs") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec) -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add", "sqr") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add", "l2") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add", "abs") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul", "abs") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul", "sqr") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul", "l2") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "mul") -> (float)
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "mul", "abs") -> (float)
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "mul", "sqr") -> (float)
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "mul", "l2") -> (float)
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul", "l2") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul", "sqr") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul", "abs") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add", "l2") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add", "sqr") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add", "abs") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "l2") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "sqr") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "abs") -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 151*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec) -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

# sum
### sum - sum
*Defined in: std/sci/vec.s line 184*

```rust
sum(vec) -> (float)
```
Potential errors:

8. iteration end
9. iterator range
2. null pointer
15. out of bounds

### sum - sum of each column
*Defined in: std/sci/coo.s line 110*

result[j] = sum of all stored values in column j

```rust
sum(circular, coo, "col") -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### sum - sum of each column
*Defined in: std/sci/coo.s line 110*

result[j] = sum of all stored values in column j

```rust
sum(arena, coo, "col") -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### sum - sum of each column
*Defined in: std/sci/coo.s line 110*

result[j] = sum of all stored values in column j

```rust
sum(new FLOATS, coo, "col") -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### sum - sum of each row
*Defined in: std/sci/coo.s line 102*

result[i] = sum of all stored values in row i

```rust
sum(circular, coo, "row") -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### sum - sum of each row
*Defined in: std/sci/coo.s line 102*

result[i] = sum of all stored values in row i

```rust
sum(arena, coo, "row") -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
58. can only place vectors on contiguous buffers
59. cannot place vectors on buffer offsets
15. out of bounds

### sum - sum of each row
*Defined in: std/sci/coo.s line 102*

result[i] = sum of all stored values in row i

```rust
sum(new FLOATS, coo, "row") -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# mean
### mean - mean value
*Defined in: std/sci/vec.s line 188*

```rust
mean(vec) -> (float)
```
Potential errors:

2. null pointer
3. division by zero 
8. iteration end
9. iterator range
15. out of bounds

# var
### var - variance
*Defined in: std/sci/vec.s line 192*

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
*Defined in: std/sci/vec.s line 205*

```rust
std(vec) -> (float)
```
Potential errors:

8. iteration end
2. null pointer
3. division by zero 
15. out of bounds

# self
### self
*Defined in: std/sci/vec.s line 242*

```rust
self(vec) -> (arena, vec)
```

# rows
### rows - number of rows
*Defined in: std/sci/coo.s line 22*

```rust
rows(coo) -> (nat)
```

### rows - number of rows
*Defined in: std/sci/mat.s line 6*

```rust
rows(mat) -> (nat)
```

# cols
### cols - number of columns
*Defined in: std/sci/coo.s line 26*

```rust
cols(coo) -> (nat)
```

### cols - number of columns
*Defined in: std/sci/mat.s line 10*

```rust
cols(mat) -> (nat)
```

# constmat
### constmat - immutable matrix on an immutable float[] buffer
*Defined in: std/sci/mat.s line 31*

```rust
constmat(float[] {float}, nat rows) -> (mat)
```
Potential errors:

16. arena is out of space
3. division by zero 
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets
63. buffer size not divisible by vector rows

# mutvec
### mutvec - view a matrix as a vector
*Defined in: std/sci/mat.s line 69*

```rust
mutvec(mat) -> (mut vec)
```

# row
### row - view matrix row as a vector
*Defined in: std/sci/mat.s line 73*

```rust
row(mat, nat i) -> (mut vec)
```
Potential errors:

64. row out of bounds

# nnz
### nnz - number of stored non-zero entries
*Defined in: std/sci/coo.s line 30*

```rust
nnz(coo) -> (nat)
```

# todense
### todense - convert to dense mat
*Defined in: std/sci/coo.s line 81*

```rust
todense(circular, coo) -> (mut mat) with effects FLOATS
```
Potential errors:

64. row out of bounds
17. does not fit in circular arena
2. null pointer
65. column out of bounds
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets
15. out of bounds

### todense - convert to dense mat
*Defined in: std/sci/coo.s line 81*

```rust
todense(arena, coo) -> (mut mat) with effects FLOATS
```
Potential errors:

16. arena is out of space
64. row out of bounds
2. null pointer
65. column out of bounds
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets
15. out of bounds

### todense - convert to dense mat
*Defined in: std/sci/coo.s line 81*

```rust
todense(new FLOATS, coo) -> (mut mat) with effects FLOATS
```
Potential errors:

64. row out of bounds
65. column out of bounds
2. null pointer
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# matrix
### coo - coo sparse matrix type declaration
*Defined in: std/sci/unsafe.s line 14*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
coo(sparse_element ptr unsafe_ptr {nat row, nat col, float value}, nat rows, nat cols, nat nnz) -> (mut coo)
```

### mat - matrix type declaration
*Defined in: std/sci/unsafe.s line 8*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
mat(float ptr unsafe_ptr {float}, nat pos, nat rows, nat cols, nat stride) -> (mut mat)
```

### coo
*Defined in: std/sci/coo.s line 40*

```rust
coo(sparse_element[] {nat row, nat col, float value}, nat rows, nat cols) -> (mut coo)
```

### coo - allocate a sparse matrix
*Defined in: std/sci/coo.s line 34*

This creates a new buffer of sparse elements for convenience.

```rust
coo(nat rows, nat cols, nat nnz) -> (mut coo)
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 55*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "col") -> (mut mat)
```

### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 55*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "row") -> (mut mat)
```

### mat - matrix on an existing float[] buffer
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit float[] {float}, nat rows) -> (mut mat)
```
Potential errors:

16. arena is out of space
3. division by zero 
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets
63. buffer size not divisible by vector rows

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(circular, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(circular, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(arena, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

16. arena is out of space
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(arena, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Potential errors:

16. arena is out of space
61. can only place matrices on contiguous buffers
62. cannot place matrices on buffer offsets

### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 14*

```rust
mat(new FLOATS, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 14*

```rust
mat(new FLOATS, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Potential errors:

10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# realloc
### realloc - reallocate memory
*Defined in: std/unsafe.s line 28*

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
*Defined in: std/unsafe.s line 40*

Frees allocated memory.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
free(mut any ptr) -> ()
```

# zero
### zero - set memory to zero
*Defined in: std/unsafe.s line 47*

Memsets a memory region to zero.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
zero(any ptr allocated, nat from, nat to) -> ()
```

