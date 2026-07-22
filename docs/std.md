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
[supports\_ansi](#supports\_ansi) 
[colors](#colors) 
[set](#set) 
[exists](#exists) 
[bits](#bits) 
[lshift](#lshift) 
[rshift](#rshift) 
[xor](#xor) 
[band](#band) 
[bor](#bor) 
[of](#of) 
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
[slice](#slice) 
[char\_allocator](#char\_allocator) 
[strdat](#strdat) 
[str](#str) 
[copy](#copy) 
[copy\_null\_terminated](#copy\_null\_terminated) 
[unsafe\_temp](#unsafe\_temp) 
[endpos](#endpos) 
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
[float\_allocator](#float\_allocator) 
[constvec](#constvec) 
[reduce](#reduce) 
[dot](#dot) 
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
[tagged](#tagged) 
[unsafe\_match](#unsafe\_match) 
[unsafe\_defer\_free](#unsafe\_defer\_free) 
[tagged\_alloc](#tagged\_alloc) 
[match](#match) 
[realloc](#realloc) 
[free](#free) 
[zero](#zero) 
[color](#color) 
[position](#position) 
[size](#size) 
[window](#window) 
[is\_open](#is\_open) 
[draw](#draw) 
[clear](#clear) 
[text](#text) 
[text\_rotated](#text\_rotated) 
[TextureData](#texturedata) 
[Texture](#texture) 
[open](#open) 
[circ](#circ) 
[rect](#rect) 
[rect\_line](#rect\_line) 
[circ\_line](#circ\_line) 
[dt](#dt) 
[key\_down](#key\_down) 
[key\_pressed](#key\_pressed) 
[key\_released](#key\_released) 
[mouse\_pos](#mouse\_pos) 
[mouse\_down](#mouse\_down) 
[mouse\_pressed](#mouse\_pressed) 
[mouse\_wheel](#mouse\_wheel) 
[KEY\_NULL](#key\_null) 
[KEY\_APOSTROPHE](#key\_apostrophe) 
[KEY\_COMMA](#key\_comma) 
[KEY\_MINUS](#key\_minus) 
[KEY\_PERIOD](#key\_period) 
[KEY\_SLASH](#key\_slash) 
[KEY\_ZERO](#key\_zero) 
[KEY\_ONE](#key\_one) 
[KEY\_TWO](#key\_two) 
[KEY\_THREE](#key\_three) 
[KEY\_FOUR](#key\_four) 
[KEY\_FIVE](#key\_five) 
[KEY\_SIX](#key\_six) 
[KEY\_SEVEN](#key\_seven) 
[KEY\_EIGHT](#key\_eight) 
[KEY\_NINE](#key\_nine) 
[KEY\_SEMICOLON](#key\_semicolon) 
[KEY\_EQUAL](#key\_equal) 
[KEY\_A](#key\_a) 
[KEY\_B](#key\_b) 
[KEY\_C](#key\_c) 
[KEY\_D](#key\_d) 
[KEY\_E](#key\_e) 
[KEY\_F](#key\_f) 
[KEY\_G](#key\_g) 
[KEY\_H](#key\_h) 
[KEY\_I](#key\_i) 
[KEY\_J](#key\_j) 
[KEY\_K](#key\_k) 
[KEY\_L](#key\_l) 
[KEY\_M](#key\_m) 
[KEY\_N](#key\_n) 
[KEY\_O](#key\_o) 
[KEY\_P](#key\_p) 
[KEY\_Q](#key\_q) 
[KEY\_R](#key\_r) 
[KEY\_S](#key\_s) 
[KEY\_T](#key\_t) 
[KEY\_U](#key\_u) 
[KEY\_V](#key\_v) 
[KEY\_W](#key\_w) 
[KEY\_X](#key\_x) 
[KEY\_Y](#key\_y) 
[KEY\_Z](#key\_z) 
[KEY\_LEFT\_BRACKET](#key\_left\_bracket) 
[KEY\_BACKSLASH](#key\_backslash) 
[KEY\_RIGHT\_BRACKET](#key\_right\_bracket) 
[KEY\_GRAVE](#key\_grave) 
[KEY\_SPACE](#key\_space) 
[KEY\_ESCAPE](#key\_escape) 
[KEY\_ENTER](#key\_enter) 
[KEY\_TAB](#key\_tab) 
[KEY\_BACKSPACE](#key\_backspace) 
[KEY\_INSERT](#key\_insert) 
[KEY\_DELETE](#key\_delete) 
[KEY\_RIGHT](#key\_right) 
[KEY\_LEFT](#key\_left) 
[KEY\_DOWN](#key\_down) 
[KEY\_UP](#key\_up) 
[KEY\_PAGE\_UP](#key\_page\_up) 
[KEY\_PAGE\_DOWN](#key\_page\_down) 
[KEY\_HOME](#key\_home) 
[KEY\_END](#key\_end) 
[KEY\_CAPS\_LOCK](#key\_caps\_lock) 
[KEY\_SCROLL\_LOCK](#key\_scroll\_lock) 
[KEY\_NUM\_LOCK](#key\_num\_lock) 
[KEY\_PRINT\_SCREEN](#key\_print\_screen) 
[KEY\_PAUSE](#key\_pause) 
[KEY\_F1](#key\_f1) 
[KEY\_F2](#key\_f2) 
[KEY\_F3](#key\_f3) 
[KEY\_F4](#key\_f4) 
[KEY\_F5](#key\_f5) 
[KEY\_F6](#key\_f6) 
[KEY\_F7](#key\_f7) 
[KEY\_F8](#key\_f8) 
[KEY\_F9](#key\_f9) 
[KEY\_F10](#key\_f10) 
[KEY\_F11](#key\_f11) 
[KEY\_F12](#key\_f12) 
[KEY\_LEFT\_SHIFT](#key\_left\_shift) 
[KEY\_LEFT\_CONTROL](#key\_left\_control) 
[KEY\_LEFT\_ALT](#key\_left\_alt) 
[KEY\_LEFT\_SUPER](#key\_left\_super) 
[KEY\_RIGHT\_SHIFT](#key\_right\_shift) 
[KEY\_RIGHT\_CONTROL](#key\_right\_control) 
[KEY\_RIGHT\_ALT](#key\_right\_alt) 
[KEY\_RIGHT\_SUPER](#key\_right\_super) 
[KEY\_KB\_MENU](#key\_kb\_menu) 
[KEY\_KP\_0](#key\_kp\_0) 
[KEY\_KP\_1](#key\_kp\_1) 
[KEY\_KP\_2](#key\_kp\_2) 
[KEY\_KP\_3](#key\_kp\_3) 
[KEY\_KP\_4](#key\_kp\_4) 
[KEY\_KP\_5](#key\_kp\_5) 
[KEY\_KP\_6](#key\_kp\_6) 
[KEY\_KP\_7](#key\_kp\_7) 
[KEY\_KP\_8](#key\_kp\_8) 
[KEY\_KP\_9](#key\_kp\_9) 
[KEY\_KP\_DECIMAL](#key\_kp\_decimal) 
[KEY\_KP\_DIVIDE](#key\_kp\_divide) 
[KEY\_KP\_MULTIPLY](#key\_kp\_multiply) 
[KEY\_KP\_SUBTRACT](#key\_kp\_subtract) 
[KEY\_KP\_ADD](#key\_kp\_add) 
[KEY\_KP\_ENTER](#key\_kp\_enter) 
[KEY\_KP\_EQUAL](#key\_kp\_equal) 
[KEY\_BACK](#key\_back) 
[KEY\_MENU](#key\_menu) 
[KEY\_VOLUME\_UP](#key\_volume\_up) 
[KEY\_VOLUME\_DOWN](#key\_volume\_down) 
</div>

# cstr
### cstr - constant string
*Defined in: builtins line 1*

```rust
cstr() -> (cstr)
```

### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 174*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(cstr cstr, str) -> (cstr)
```

### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 174*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
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

# int
### int - a signed integer value
*Defined in: builtins line 1*

Represents values in the range `2^-63 to 2^63-1`.

```rust
int() -> (int)
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

### int - cast to int
*Defined in: std/core/convert.s line 29*

Overflows are mapped to negative integers and are not protected against.

```rust
int(nat) -> (int)
```

### int - converts a string to an integer
*Defined in: std/core/convertstr.s line 149*

```rust
int(str) -> (int)
```
Potential errors:

27. invalid int conversion from string with only a sign
26. invalid int conversion from empty string
2. null pointer
28. invalid integer int from non-number string

### int - converts a string to an integer
*Defined in: std/core/convertstr.s line 149*

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
*Defined in: std/core/convertstr.s line 36*

```rust
int(console) -> (int)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
23. unexpected end of console read
24. user input was not a float
9. iteration end
15. out of bounds

# nat
### nat - an unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat)
```

### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat16) -> (nat)
```

### nat - cast to nat
*Defined in: std/core/convert.s line 84*

Converts a bit representation to the corresponding natural number.

```rust
nat(bits) -> (nat)
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

8. cannot convert negative int to id

### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(float) -> (nat)
```
Potential errors:

7. cannot convert negative float to id

### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s line 172*

```rust
nat(str) -> (nat)
```
Potential errors:

9. iteration end
2. null pointer
29. invalid nat conversion from empty string
30. invalid nat conversion from non-number string

### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s line 172*

```rust
nat(cstr) -> (nat)
```
Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
9. iteration end
29. invalid nat conversion from empty string
30. invalid nat conversion from non-number string
15. out of bounds

### nat - reads an unsigned integer from the console
*Defined in: std/core/convertstr.s line 60*

```rust
nat(console) -> (nat)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
23. unexpected end of console read
24. user input was not a float
9. iteration end
15. out of bounds

### nat - retrieved unsigned number from 32 bits
*Defined in: std/mini.s line 30*

```rust
nat(nat32) -> (nat)
```

# nat32
### nat32 - a 32-bit unsigned integer value
*Defined in: builtins line 1*

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

58. nat value too large to pack in nat32

# nat16
### nat16 - a 16-bit unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^16-1`.

```rust
nat16() -> (nat16)
```

### nat16
*Defined in: std/core/allocators.s line 101*

```rust
nat16(nat) -> (nat16)
```

### nat16 - convert unsigned number to 16 bits
*Defined in: std/mini.s line 14*

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

```rust
nat16(nat) -> (nat16)
```
Potential errors:

57. nat value too large to pack in nat16

# nat8
### nat8 - a 8-bit unsigned integer value
*Defined in: builtins line 1*

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

56. nat value too large to pack in nat8

# float
### float
*Defined in: builtins line 1*

```rust
float() -> (float)
```

### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(nat) -> (float)
```

### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(int) -> (float)
```

### float - cast to float
*Defined in: std/core/convert.s line 20*

Serves as a tautology function for code that parses on multiple number types.

```rust
float(float) -> (float)
```

### float - cast to float
*Defined in: std/core/convert.s line 95*

Converts a bit representation to the corresponding float number.

```rust
float(bits) -> (float)
```

### float - converts a string to a float
*Defined in: std/core/convertstr.s line 184*

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
*Defined in: std/core/convertstr.s line 184*

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
*Defined in: std/core/convertstr.s line 80*

```rust
float(console) -> (float)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
23. unexpected end of console read
24. user input was not a float
9. iteration end
15. out of bounds

# bool
### bool - boolean value
*Defined in: builtins line 1*

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
### blank - empty tuple
*Defined in: builtins line 1*

This is the type of non-existent variables, empty parantheses, and functions of no returns.

```rust
blank() -> ()
```

# char
### char - a character
*Defined in: builtins line 1*

Represents characters in the numeric range `0 to 255`.

```rust
char() -> (char)
```

### char - treat as character
*Defined in: std/core/string.s line 112*

The first character of a string is extracted,
for example to write `c = char \"C\"`.

```rust
char(cstr) -> (char)
```

### char - treat as character
*Defined in: std/core/string.s line 106*

The first character of a string is extracted,
for example to write `c = char str \"C\"`.

```rust
char(str) -> (char)
```

### char
*Defined in: std/core/convertstr.s line 24*

```rust
char(console) -> (char)
```
Potential errors:

23. unexpected end of console read

# any
### any - any type
*Defined in: builtins line 1*

Represents a generic for buffers and pointers for type-independent code that can be matched to a concrete type later.

```rust
any() -> ()
```

# eq
### eq - equals
*Defined in: std/core/numbers.s line 26*

```rust
eq(int x, int y) -> (bool)
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
eq(false, true) -> (false)
```

### eq - equals
*Defined in: std/core/bool.s line 46*

This is a compile-time operations that does not evoke any runtime booleans.

```rust
eq(true, false) -> (false)
```

### eq - equals
*Defined in: std/core/bool.s line 41*

This is a compile-time operations that does not evoke any runtime booleans.

```rust
eq(false, false) -> (true)
```

### eq - equals
*Defined in: std/core/bool.s line 36*

This is a compile-time operations that does not evoke any runtime booleans.

```rust
eq(true, true) -> (true)
```

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
eq(nat x, nat y) -> (bool)
```

### eq - equals
*Defined in: std/core/string.s line 207*

```rust
eq(cstr x, str) -> (bool)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### eq - equals
*Defined in: std/core/string.s line 201*

```rust
eq(str, cstr y) -> (bool)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### eq - equals
*Defined in: std/core/string.s line 191*

```rust
eq(str, str) -> (bool)
```

### eq - equals
*Defined in: std/core/string.s line 186*

```rust
eq(cstr x, cstr y) -> (bool)
```

### eq - equals
*Defined in: std/core/string.s line 119*

```rust
eq(char x, char y) -> (bool)
```

# neq
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

### neq - not equals
*Defined in: std/core/string.s line 213*

```rust
neq(cstr x, cstr y) -> (bool)
```

### neq - not equals
*Defined in: std/core/string.s line 213*

```rust
neq(cstr x, str) -> (bool)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### neq - not equals
*Defined in: std/core/string.s line 213*

```rust
neq(str, cstr y) -> (bool)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### neq - not equals
*Defined in: std/core/string.s line 213*

```rust
neq(str, str) -> (bool)
```

### neq - not equals
*Defined in: std/core/string.s line 124*

```rust
neq(char x, char y) -> (bool)
```

# not
### not - logical inverse
*Defined in: std/core/bool.s line 61*

This is a compile-time operations on the compiler::false type rather than a runtime boolean.

```rust
not(false) -> (true)
```

### not - logical inverse
*Defined in: std/core/bool.s line 56*

This is a compile-time operations on the compiler::true type rather than a runtime boolean.

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
*Defined in: builtins line 1*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat)
```

### float
*Defined in: builtins line 1*

```rust
float() -> (float)
```

### int - a signed integer value
*Defined in: builtins line 1*

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

### add
*Defined in: std/core/string.s line 302*

```rust
add(edit list, cstr _s1, cstr _s2) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
4. division by zero 
6. nat subtraction would yield a negative
11. reallocation failed
14. cannot resize an unallocated or freed buffer
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add
*Defined in: std/core/string.s line 302*

```rust
add(edit list, cstr _s1, str) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
4. division by zero 
6. nat subtraction would yield a negative
11. reallocation failed
14. cannot resize an unallocated or freed buffer
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add
*Defined in: std/core/string.s line 302*

```rust
add(edit list, str, cstr _s2) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
4. division by zero 
6. nat subtraction would yield a negative
11. reallocation failed
14. cannot resize an unallocated or freed buffer
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add
*Defined in: std/core/string.s line 302*

```rust
add(edit list, str, str) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
4. division by zero 
6. nat subtraction would yield a negative
11. reallocation failed
14. cannot resize an unallocated or freed buffer
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add
*Defined in: std/core/string.s line 302*

```rust
add(edit circular, cstr _s1, cstr _s2) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
2. null pointer
6. nat subtraction would yield a negative
15. out of bounds

### add
*Defined in: std/core/string.s line 302*

```rust
add(edit circular, cstr _s1, str) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
2. null pointer
6. nat subtraction would yield a negative
15. out of bounds

### add
*Defined in: std/core/string.s line 302*

```rust
add(edit circular, str, cstr _s2) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
2. null pointer
6. nat subtraction would yield a negative
15. out of bounds

### add
*Defined in: std/core/string.s line 302*

```rust
add(edit circular, str, str) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
2. null pointer
6. nat subtraction would yield a negative
15. out of bounds

### add
*Defined in: std/core/string.s line 302*

```rust
add(edit arena, cstr _s1, cstr _s2) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
2. null pointer
6. nat subtraction would yield a negative
15. out of bounds

### add
*Defined in: std/core/string.s line 302*

```rust
add(edit arena, cstr _s1, str) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
2. null pointer
6. nat subtraction would yield a negative
15. out of bounds

### add
*Defined in: std/core/string.s line 302*

```rust
add(edit arena, str, cstr _s2) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
2. null pointer
6. nat subtraction would yield a negative
15. out of bounds

### add
*Defined in: std/core/string.s line 302*

```rust
add(edit arena, str, str) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
2. null pointer
6. nat subtraction would yield a negative
15. out of bounds

### add
*Defined in: std/core/string.s line 302*

```rust
add(new CHARS, cstr _s1, cstr _s2) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### add
*Defined in: std/core/string.s line 302*

```rust
add(new CHARS, cstr _s1, str) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### add
*Defined in: std/core/string.s line 302*

```rust
add(new CHARS, str, cstr _s2) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### add
*Defined in: std/core/string.s line 302*

```rust
add(new CHARS, str, str) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### add - vector addition
*Defined in: std/sci/vec.s line 72*

Grabs an FLOATS for the result as an effect.

```rust
add(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 72*

Grabs an FLOATS for the result as an effect.

```rust
add(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 72*

Grabs an FLOATS for the result as an effect.

```rust
add(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
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
### add - vector addition
*Defined in: std/sci/vec.s line 61*

Grabs an FLOATS for the result as an effect.

```rust
add(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 61*

Grabs an FLOATS for the result as an effect.

```rust
add(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 61*

Grabs an FLOATS for the result as an effect.

```rust
add(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 61*

Grabs an FLOATS for the result as an effect.

```rust
add(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 61*

Grabs an FLOATS for the result as an effect.

```rust
add(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
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
### add - vector addition
*Defined in: std/sci/vec.s line 61*

Grabs an FLOATS for the result as an effect.

```rust
add(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
13. cannot allocate a buffer of unsized type
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
61. different vector sizes
15. out of bounds


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
mul(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 107*

Grabs an FLOATS for the result as an effect.

```rust
mul(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 107*

Grabs an FLOATS for the result as an effect.

```rust
mul(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
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
### mul - vector multiplication
*Defined in: std/sci/vec.s line 96*

Grabs an FLOATS for the result as an effect.

```rust
mul(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 96*

Grabs an FLOATS for the result as an effect.

```rust
mul(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 96*

Grabs an FLOATS for the result as an effect.

```rust
mul(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 96*

Grabs an FLOATS for the result as an effect.

```rust
mul(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 96*

Grabs an FLOATS for the result as an effect.

```rust
mul(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
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
### mul - vector multiplication
*Defined in: std/sci/vec.s line 96*

Grabs an FLOATS for the result as an effect.

```rust
mul(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
13. cannot allocate a buffer of unsized type
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
61. different vector sizes
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 102*

Grabs an allocator for the result as an effect.

```rust
mul(edit circular, mat, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
69. inner dimensions must agree
9. iteration end
17. does not fit in circular arena
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 102*

Grabs an allocator for the result as an effect.

```rust
mul(edit arena, mat, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
69. inner dimensions must agree
9. iteration end
16. arena is out of space
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 102*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, mat, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
69. inner dimensions must agree
9. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 90*

Grabs an allocator for the result as an effect.

```rust
mul(edit circular, vec, mat) -> (mut vec) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
68. vector length must match matrix rows
9. iteration end
15. out of bounds
17. does not fit in circular arena
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 90*

Grabs an allocator for the result as an effect.

```rust
mul(edit arena, vec, mat) -> (mut vec) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
68. vector length must match matrix rows
9. iteration end
15. out of bounds
16. arena is out of space
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 90*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, vec, mat) -> (mut vec) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
68. vector length must match matrix rows
9. iteration end
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
mul(edit circular, mat, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
67. matrix columns must match vector length
66. column out of bounds
9. iteration end
15. out of bounds
17. does not fit in circular arena
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 78*

Grabs an allocator for the result as an effect.

```rust
mul(edit arena, mat, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
67. matrix columns must match vector length
66. column out of bounds
9. iteration end
15. out of bounds
16. arena is out of space
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 78*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, mat, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
67. matrix columns must match vector length
66. column out of bounds
9. iteration end
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
mul(edit circular, coo, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
69. inner dimensions must agree
9. iteration end
15. out of bounds
17. does not fit in circular arena
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 71*

```rust
mul(edit arena, coo, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
69. inner dimensions must agree
9. iteration end
15. out of bounds
16. arena is out of space
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 71*

```rust
mul(new FLOATS, coo, mat) -> (mut mat) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
69. inner dimensions must agree
9. iteration end
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
mul(edit circular, vec, coo) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
68. vector length must match matrix rows
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 61*

*Warning: the expression `self(v)*m` yields wrong values

```rust
mul(edit arena, vec, coo) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
68. vector length must match matrix rows
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 61*

*Warning: the expression `self(v)*m` yields wrong values

```rust
mul(new FLOATS, vec, coo) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
68. vector length must match matrix rows
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 53*

```rust
mul(edit circular, coo, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
67. matrix columns must match vector length
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 53*

```rust
mul(edit arena, coo, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
67. matrix columns must match vector length
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 53*

```rust
mul(new FLOATS, coo, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
67. matrix columns must match vector length
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

4. division by zero 

### div - divide by
*Defined in: std/core/numbers.s line 89*

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

```rust
div(int x, int y) -> (int)
```
Potential errors:

4. division by zero 

### div - divide by
*Defined in: std/core/numbers.s line 89*

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

```rust
div(float x, float y) -> (float)
```
Potential errors:

4. division by zero 

### div - vector division
*Defined in: std/sci/vec.s line 144*

Grabs an FLOATS for the result as an effect.

```rust
div(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
4. division by zero 
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s line 144*

Grabs an FLOATS for the result as an effect.

```rust
div(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
4. division by zero 
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s line 144*

Grabs an FLOATS for the result as an effect.

```rust
div(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
4. division by zero 
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
*Defined in: std/sci/vec.s line 132*

Grabs an FLOATS for the result as an effect.

```rust
div(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
4. division by zero 
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s line 132*

Grabs an FLOATS for the result as an effect.

```rust
div(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
4. division by zero 
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s line 132*

Grabs an FLOATS for the result as an effect.

```rust
div(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
4. division by zero 
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s line 132*

Grabs an FLOATS for the result as an effect.

```rust
div(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
4. division by zero 
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s line 132*

Grabs an FLOATS for the result as an effect.

```rust
div(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
4. division by zero 
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
*Defined in: std/sci/vec.s line 132*

Grabs an FLOATS for the result as an effect.

```rust
div(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
13. cannot allocate a buffer of unsized type
4. division by zero 
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
61. different vector sizes
15. out of bounds


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

5. modulo by zero 

# lt
### lt - less than
*Defined in: std/core/numbers.s line 110*

Compares two numbers of the same type. This is an overload for the < operator.

```rust
lt(nat x, nat y) -> (bool)
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
lt(float x, float y) -> (bool)
```

# gt
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
gt(int x, int y) -> (bool)
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
le(nat x, nat y) -> (bool)
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
le(float x, float y) -> (bool)
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
Natural numbers are safeguarded against acquiring negative results, which would overflow.

```rust
sub(nat x, nat y) -> (nat)
```
Potential errors:

6. nat subtraction would yield a negative

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

### sub - vector subtraction
*Defined in: std/sci/vec.s line 88*

Grabs an FLOATS for the result as an effect.

```rust
sub(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 88*

Grabs an FLOATS for the result as an effect.

```rust
sub(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 88*

Grabs an FLOATS for the result as an effect.

```rust
sub(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
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
### sub - vector subtraction
*Defined in: std/sci/vec.s line 77*

Grabs an FLOATS for the result as an effect.

```rust
sub(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 77*

Grabs an FLOATS for the result as an effect.

```rust
sub(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 77*

Grabs an FLOATS for the result as an effect.

```rust
sub(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 77*

Grabs an FLOATS for the result as an effect.

```rust
sub(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 77*

Grabs an FLOATS for the result as an effect.

```rust
sub(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
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
### sub - vector subtraction
*Defined in: std/sci/vec.s line 77*

Grabs an FLOATS for the result as an effect.

```rust
sub(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
13. cannot allocate a buffer of unsized type
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
61. different vector sizes
15. out of bounds


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
*Defined in: std/sci/vec.s line 124*

Grabs an FLOATS for the result as an effect.

```rust
pow(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 124*

Grabs an FLOATS for the result as an effect.

```rust
pow(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 124*

Grabs an FLOATS for the result as an effect.

```rust
pow(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
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
### pow - vector exponentiation
*Defined in: std/sci/vec.s line 113*

Grabs an FLOATS for the result as an effect.

```rust
pow(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 113*

Grabs an FLOATS for the result as an effect.

```rust
pow(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 113*

Grabs an FLOATS for the result as an effect.

```rust
pow(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 113*

Grabs an FLOATS for the result as an effect.

```rust
pow(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 113*

Grabs an FLOATS for the result as an effect.

```rust
pow(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
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
### pow - vector exponentiation
*Defined in: std/sci/vec.s line 113*

Grabs an FLOATS for the result as an effect.

```rust
pow(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

2. null pointer
13. cannot allocate a buffer of unsized type
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
61. different vector sizes
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### pow
*Defined in: std/sci/math.s line 69*

```rust
pow(float x, float y) -> (float)
```

# console
### console - references the system console
*Defined in: std/core/print.s line 20*

As a singleton, the console should usually be instantiated
in the `main()` function and then passed to dependent calls, for example via an
an effect for convenience. Standard library print functions provide the CLI effect
and you can propagate to this by prepending `effect edit console CLI` to function
arguments.

The console is a zero-cost abstraction in that it does not transfer any data
but relies on singleton safety to synchronize io across threads.
Quickly print internals for debugging with `unsafe_console()`.

```rust
console() -> (console)
```

# unsafe\_console
### unsafe\_console - references the system console unsafely
*Defined in: std/core/print.s line 35*

This is convenient for print debugging by writing `unsafe_console().print ...`
without needing to evoke an effect to pass the normally singleton console.

```rust
unsafe_console() -> (console)
```

# flush
### flush - flushes the print buffer on the console
*Defined in: std/core/print.s line 43*

```rust
flush(console) -> () with effects CLI
```

# nn
### nn - no new line
*Defined in: std/core/print.s line 47*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(nat) -> (nat value, cstr)
```

### nn - no new line
*Defined in: std/core/print.s line 47*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(int) -> (int value, cstr)
```

### nn - no new line
*Defined in: std/core/print.s line 47*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(float) -> (float value, cstr)
```

### nn - no new line
*Defined in: std/core/print.s line 47*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(cstr) -> (cstr value, cstr)
```

### nn - no new line
*Defined in: std/core/string.s line 295*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without a new line.

```rust
nn(str) -> (str, cstr)
```

### nn - no new line
*Defined in: std/sci/vec.s line 215*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without a new line.

```rust
nn(vec) -> (vec, cstr)
```

# print
### print - prints a boolean
*Defined in: std/core/print.s line 97*

Automatically ends the line too.

```rust
print(console CLI, false) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s line 97*

```rust
print(console CLI, false, cstr endl) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s line 90*

Automatically ends the line too.

```rust
print(console CLI, true) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s line 90*

```rust
print(console CLI, true, cstr endl) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s line 83*

Automatically ends the line too.

```rust
print(console CLI, bool value) -> () with effects CLI
```

### print - prints a boolean
*Defined in: std/core/print.s line 83*

```rust
print(console CLI, bool value, cstr endl) -> () with effects CLI
```

### print - prints an unsigned integer
*Defined in: std/core/print.s line 76*

Automatically ends the line too.

```rust
print(console CLI, nat value) -> () with effects CLI
```

### print - prints an unsigned integer
*Defined in: std/core/print.s line 76*

```rust
print(console CLI, nat value, cstr endl) -> () with effects CLI
```

### print - prints an integer
*Defined in: std/core/print.s line 69*

Automatically ends the line too.

```rust
print(console CLI, int value) -> () with effects CLI
```

### print - prints an integer
*Defined in: std/core/print.s line 69*

```rust
print(console CLI, int value, cstr endl) -> () with effects CLI
```

### print - prints a float
*Defined in: std/core/print.s line 61*

To pre-specified 6 decimal digits.
Automatically ends the line too.

```rust
print(console CLI, float value) -> () with effects CLI
```

### print - prints a float
*Defined in: std/core/print.s line 61*

To pre-specified 6 decimal digits.

```rust
print(console CLI, float value, cstr endl) -> () with effects CLI
```

### print - prints a cstr
*Defined in: std/core/print.s line 54*

Automatically ends the line too.

```rust
print(console CLI, cstr value) -> () with effects CLI
```

### print - prints a cstr
*Defined in: std/core/print.s line 54*

```rust
print(console CLI, cstr value, cstr endl) -> () with effects CLI
```

### print - print a character
*Defined in: std/core/string.s line 245*

Ends the line too.

```rust
print(console CLI, char c) -> () with effects CLI
```

### print - print a character
*Defined in: std/core/string.s line 245*

```rust
print(console CLI, char c, cstr endl) -> () with effects CLI
```

### print - print a string
*Defined in: std/core/string.s line 234*

Ends the line too.

```rust
print(console CLI, str) -> () with effects CLI
```

### print - print a string
*Defined in: std/core/string.s line 234*

```rust
print(console CLI, str, cstr endl) -> () with effects CLI
```

### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s line 116*

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

```rust
print(console CLI, mat) -> () with effects CLI
```
Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
6. nat subtraction would yield a negative
9. iteration end

### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s line 116*

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

```rust
print(console CLI, mat, cstr endl) -> () with effects CLI
```
Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
6. nat subtraction would yield a negative
9. iteration end

### print - print a vector
*Defined in: std/sci/vec.s line 222*

Prints as a row, such as [ 1.0  2.0  3.0 ]

```rust
print(console CLI, vec) -> () with effects CLI
```
Potential errors:

9. iteration end
2. null pointer
6. nat subtraction would yield a negative
15. out of bounds

### print - print a vector
*Defined in: std/sci/vec.s line 222*

Prints as a row, such as [ 1.0  2.0  3.0 ]

```rust
print(console CLI, vec, cstr endl) -> () with effects CLI
```
Potential errors:

9. iteration end
2. null pointer
6. nat subtraction would yield a negative
15. out of bounds

### print - print sparse matrix
*Defined in: std/sci/coo.s line 87*

Prints it as coordinate as list: (i, j): v

```rust
print(console CLI, coo) -> () with effects CLI
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### print - print sparse matrix
*Defined in: std/sci/coo.s line 87*

Prints it as coordinate as list: (i, j): v

```rust
print(console CLI, coo, cstr endl) -> () with effects CLI
```
No failing errors, but can catch these intercepted ones:

2. null pointer

# supports\_ansi
### supports\_ansi
*Defined in: std/core/print.s line 104*

```rust
supports_ansi(console) -> (bool)
```

*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[supports_ansi()]`*
# colors
### colors
*Defined in: std/core/print.s line 109*

```rust
colors(console) -> (colors)
```


Returned values defer use of the following functions:
```rust
```
# set
### set
*Defined in: std/core/print.s line 182*

```rust
set(colors, "reset_underline") -> ()
```

### set
*Defined in: std/core/print.s line 180*

```rust
set(colors, "reset_bold") -> ()
```

### set
*Defined in: std/core/print.s line 178*

```rust
set(colors, "reset_bg") -> ()
```

### set
*Defined in: std/core/print.s line 176*

```rust
set(colors, "reset_color") -> ()
```

### set
*Defined in: std/core/print.s line 174*

```rust
set(colors, "reset") -> ()
```

### set
*Defined in: std/core/print.s line 172*

```rust
set(colors, "strikethrough") -> ()
```

### set
*Defined in: std/core/print.s line 170*

```rust
set(colors, "reverse") -> ()
```

### set
*Defined in: std/core/print.s line 168*

```rust
set(colors, "blink") -> ()
```

### set
*Defined in: std/core/print.s line 166*

```rust
set(colors, "underline") -> ()
```

### set
*Defined in: std/core/print.s line 164*

```rust
set(colors, "italic") -> ()
```

### set
*Defined in: std/core/print.s line 162*

```rust
set(colors, "dim") -> ()
```

### set
*Defined in: std/core/print.s line 160*

```rust
set(colors, "bold") -> ()
```

### set
*Defined in: std/core/print.s line 158*

```rust
set(colors, "bg_black") -> ()
```

### set
*Defined in: std/core/print.s line 156*

```rust
set(colors, "bg_white") -> ()
```

### set
*Defined in: std/core/print.s line 154*

```rust
set(colors, "bg_cyan") -> ()
```

### set
*Defined in: std/core/print.s line 152*

```rust
set(colors, "bg_magenta") -> ()
```

### set
*Defined in: std/core/print.s line 150*

```rust
set(colors, "bg_blue") -> ()
```

### set
*Defined in: std/core/print.s line 148*

```rust
set(colors, "bg_yellow") -> ()
```

### set
*Defined in: std/core/print.s line 146*

```rust
set(colors, "bg_green") -> ()
```

### set
*Defined in: std/core/print.s line 144*

```rust
set(colors, "bg_red") -> ()
```

### set
*Defined in: std/core/print.s line 142*

```rust
set(colors, "bright_white") -> ()
```

### set
*Defined in: std/core/print.s line 140*

```rust
set(colors, "bright_cyan") -> ()
```

### set
*Defined in: std/core/print.s line 138*

```rust
set(colors, "bright_magenta") -> ()
```

### set
*Defined in: std/core/print.s line 136*

```rust
set(colors, "bright_blue") -> ()
```

### set
*Defined in: std/core/print.s line 134*

```rust
set(colors, "bright_yellow") -> ()
```

### set
*Defined in: std/core/print.s line 132*

```rust
set(colors, "bright_green") -> ()
```

### set
*Defined in: std/core/print.s line 130*

```rust
set(colors, "bright_red") -> ()
```

### set
*Defined in: std/core/print.s line 128*

```rust
set(colors, "black") -> ()
```

### set
*Defined in: std/core/print.s line 126*

```rust
set(colors, "white") -> ()
```

### set
*Defined in: std/core/print.s line 124*

```rust
set(colors, "cyan") -> ()
```

### set
*Defined in: std/core/print.s line 122*

```rust
set(colors, "magenta") -> ()
```

### set
*Defined in: std/core/print.s line 120*

```rust
set(colors, "blue") -> ()
```

### set
*Defined in: std/core/print.s line 118*

```rust
set(colors, "yellow") -> ()
```

### set
*Defined in: std/core/print.s line 116*

```rust
set(colors, "green") -> ()
```

### set
*Defined in: std/core/print.s line 114*

```rust
set(colors, "red") -> ()
```

# exists
### exists - checks whether a cstr is not zero-initialized
*Defined in: std/core/string.s line 30*

```rust
exists(cstr) -> (bool)
```

### exists - checks that a pointer exists
*Defined in: std/core/convert.s line 58*

```rust
exists(any ptr) -> (bool)
```

### exists
*Defined in: std/graphics.s line 97*

```rust
exists(Texture) -> (bool)
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

# of
### of - yields a pair of nats
*Defined in: std/core/range.s line 34*

Represents the range [from, from+length] where 'from' and 'length' are the arguments.

```rust
of(nat from, "len", nat length) -> (nat from, nat)
```

### of - yields a pair of nats
*Defined in: std/core/range.s line 29*

Represents the range [from, to] where 'from' and 'to' are the arguments.

```rust
of(nat from, "upto", nat to) -> (nat from, nat)
```

### of - yields a pair of nats
*Defined in: std/core/range.s line 24*

Represents the range [from, to) where 'from' and 'to' are the arguments.

```rust
of(nat from, "to", nat to) -> (nat from, nat to)
```

### of - yields a pair of nats
*Defined in: std/core/range.s line 19*

Represents the range [0, to) where 'to' its  its arguments.

```rust
of(nat) -> (nat, nat to)
```

# range
### range - constructs a range
*Defined in: std/core/range.s line 39*

Endpoints are natural numbers (unsigned integers). This is handy for several kinds of iteration.

```rust
range(nat _from, nat to) -> (edit range)
```

# next
### next - next range number
*Defined in: std/core/range.s line 45*

This increments the r.from position and returns the previous one.

```rust
next(edit range) -> (nat)
```
Potential errors:

9. iteration end

### next
*Defined in: std/map.s line 38*

```rust
next(robinhood_nat_entry[], mut nat pos) -> (mut nat)
```
Potential errors:

2. null pointer
15. out of bounds

### next
*Defined in: std/map.s line 38*

```rust
next(robinhood_str_entry[], mut nat pos) -> (mut str)
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
### get - a character in a string
*Defined in: std/core/string.s line 241*

```rust
get(str, nat i) -> (char ptr)
```

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
*Defined in: std/core/array.s line 89*

```rust
get(any[], nat i) -> (any ptr {follows any ptr buffer.unsafe_ptr})
```
Potential errors:

15. out of bounds

### get - assert that a number plus range start lies in the range
*Defined in: std/core/range.s line 54*

The item itself is returned. This lets the range be used as an iterator
per a pattern like `for i in range 10 ...`.

```rust
get(range, nat _pos) -> (nat)
```
Potential errors:

9. iteration end

### get - get a hash map entry
*Defined in: std/map.s line 28*

Implemented for string or cstr keys but buffer of any values.

```rust
get(robinhood_nat_entry[], any[], nat key) -> (any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
5. modulo by zero 
54. index not found
6. nat subtraction would yield a negative
9. iteration end
15. out of bounds

### get - get a hash map entry
*Defined in: std/map.s line 18*

Implemented for string or cstr keys but buffer of any values.

```rust
get(robinhood_str_entry[], any[], str) -> (any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
5. modulo by zero 
54. index not found
6. nat subtraction would yield a negative
9. iteration end
15. out of bounds

### get - get a hash map entry
*Defined in: std/map.s line 18*

Implemented for string or cstr keys but buffer of any values.

```rust
get(robinhood_str_entry[], any[], cstr key) -> (any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
5. modulo by zero 
6. nat subtraction would yield a negative
9. iteration end
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
54. index not found

### get
*Defined in: std/io.s line 10*

```rust
get(edit circular, edit open, nat) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds

### get
*Defined in: std/io.s line 10*

```rust
get(edit circular, edit terminal, nat) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
38. end of file
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 10*

```rust
get(edit circular, edit write, nat) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
38. end of file
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 10*

```rust
get(edit circular, edit write, nat) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
38. end of file
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 10*

```rust
get(edit circular, edit open, nat) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
38. end of file
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 10*

```rust
get(edit circular, edit open, nat) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
38. end of file
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 10*

```rust
get(edit arena, edit open, nat) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds

### get
*Defined in: std/io.s line 10*

```rust
get(edit arena, edit terminal, nat) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
38. end of file
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 10*

```rust
get(edit arena, edit write, nat) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
38. end of file
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 10*

```rust
get(edit arena, edit write, nat) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
38. end of file
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 10*

```rust
get(edit arena, edit open, nat) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
38. end of file
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 10*

```rust
get(edit arena, edit open, nat) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
38. end of file
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 7*

```rust
get(edit open, nat) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
52. not open dir
53. end of dir
18. can only define strings on contiguous buffers
15. out of bounds

### get - get a vector element at given position
*Defined in: std/sci/vec.s line 50*

```rust
get(vec, nat i) -> (float ptr)
```
Potential errors:

15. out of bounds

### get - get a sparse element
*Defined in: std/sci/coo.s line 43*

```rust
get(coo, nat k) -> (sparse_element ptr)
```
Potential errors:

15. out of bounds

### get - reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 49*

```rust
get(mat, nat i, nat j) -> (float ptr)
```
Potential errors:

65. row out of bounds
66. column out of bounds

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
### alloc
*Defined in: std/core/string.s line 26*

```rust
alloc(new CHARS, nat length) -> (edit allocated) with effects CHARS
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
*Defined in: std/core/allocators.s line 85*

Creates room for one element.

```rust
alloc(edit list) -> (edit allocated)
```
Potential errors:

11. reallocation failed
4. division by zero 
14. cannot resize an unallocated or freed buffer

### alloc - list allocation
*Defined in: std/core/allocators.s line 85*

```rust
alloc(edit list, nat length) -> (edit allocated)
```
Potential errors:

11. reallocation failed
4. division by zero 
14. cannot resize an unallocated or freed buffer

### alloc - circular arena allocation
*Defined in: std/core/allocators.s line 71*

Creates room for one element.

```rust
alloc(edit circular) -> (edit allocated)
```
Potential errors:

17. does not fit in circular arena

### alloc - circular arena allocation
*Defined in: std/core/allocators.s line 71*

```rust
alloc(edit circular, nat length) -> (edit allocated)
```
Potential errors:

17. does not fit in circular arena

### alloc - arena allocation
*Defined in: std/core/allocators.s line 60*

Creates room for one element.

```rust
alloc(edit arena) -> (edit allocated)
```
Potential errors:

16. arena is out of space

### alloc - arena allocation
*Defined in: std/core/allocators.s line 60*

```rust
alloc(edit arena, nat length) -> (edit allocated)
```
Potential errors:

16. arena is out of space

### alloc - allocate a char[] buffer
*Defined in: std/core/array.s line 52*

```rust
alloc(nat) -> (edit char[])
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
alloc(nat) -> (mut any ptr)
```
Potential errors:

10. allocation failed

### alloc
*Defined in: std/tag.s line 24*

```rust
alloc(cstr) -> (mut char[])
```
Potential errors:

2. null pointer
71. empty input name
72. cannot tag a structural type
9. iteration end
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### alloc
*Defined in: std/tag.s line 24*

```rust
alloc(cstr surface, cstr obj) -> (mut char[])
```
Potential errors:

2. null pointer
71. empty input name
72. cannot tag a structural type
73. tag surface cannot be structural type
10. allocation failed
9. iteration end
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# resize
### resize - resize the buffer
*Defined in: std/core/array.s line 56*

For stability of data structures, this does nothing if the previous size is the same or less.
If old size was zero, an error is created instead of allocating so that this does not leak
resources.

```rust
resize(edit any[], nat size) -> (edit any[])
```
Potential errors:

11. reallocation failed
14. cannot resize an unallocated or freed buffer

### resize - resize the buffer
*Defined in: std/core/array.s line 56*

For stability of data structures, this does nothing if the previous size is the same or less.
If old size was zero, an error is created instead of allocating so that this does not leak
resources.

```rust
resize(edit any[], nat size, "unsafe") -> (edit any[])
```
Potential errors:

11. reallocation failed

# last
### last - get a pointer to the last buffer element
*Defined in: std/core/array.s line 74*

```rust
last(any[]) -> (any ptr {follows any ptr buffer.unsafe_ptr})
```
Potential errors:

6. nat subtraction would yield a negative
15. out of bounds

# mutlast
### mutlast - get a mutable pointer to the last buffer element
*Defined in: std/core/array.s line 79*

```rust
mutlast(edit any[]) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```
Potential errors:

6. nat subtraction would yield a negative
15. out of bounds

# mutget
### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 56*

```rust
mutget(edit list, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```
Potential errors:

15. out of bounds

### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 56*

```rust
mutget(edit circular, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```
Potential errors:

15. out of bounds

### mutget - get a mutable pointer to a buffer element
*Defined in: std/core/array.s line 84*

```rust
mutget(edit any[], nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```
Potential errors:

15. out of bounds

### mutget - get a mutable hash map entry
*Defined in: std/map.s line 33*

Implemented for string or cstr keys but buffer of any values.

```rust
mutget(edit robinhood_nat_entry[], edit any[], nat key) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
5. modulo by zero 
6. nat subtraction would yield a negative
55. string buffer is full
9. iteration end
15. out of bounds

### mutget - get a mutable hash map entry
*Defined in: std/map.s line 23*

Implemented for string or cstr keys but buffer of any values.

```rust
mutget(edit robinhood_str_entry[], edit any[], str) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
5. modulo by zero 
6. nat subtraction would yield a negative
55. string buffer is full
9. iteration end
15. out of bounds

### mutget - get a mutable hash map entry
*Defined in: std/map.s line 23*

Implemented for string or cstr keys but buffer of any values.

```rust
mutget(edit robinhood_str_entry[], edit any[], cstr key) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```
Potential errors:

2. null pointer
5. modulo by zero 
6. nat subtraction would yield a negative
9. iteration end
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
55. string buffer is full

### mutget - modify a vector element at given position
*Defined in: std/sci/vec.s line 45*

```rust
mutget(edit vec, nat i) -> (mut float ptr)
```
Potential errors:

15. out of bounds

### mutget - mutable reference to a sparse element
*Defined in: std/sci/coo.s line 48*

```rust
mutget(edit coo, nat k) -> (mut sparse_element ptr)
```
Potential errors:

15. out of bounds

### mutget - mutable reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 43*

```rust
mutget(edit mat, nat i, nat j) -> (mut float ptr)
```
Potential errors:

65. row out of bounds
66. column out of bounds

# len
### len - string length
*Defined in: std/core/string.s line 102*

```rust
len(str) -> (nat)
```

### len - the number of buffer elements
*Defined in: std/core/array.s line 94*

```rust
len(any[]) -> (nat)
```

### len - vectot length
*Defined in: std/sci/vec.s line 41*

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
### arena
*Defined in: std/core/string.s line 23*

```rust
arena("char") -> (edit arena)
```

### arena - a buffer and mutable position pair
*Defined in: std/core/allocators.s line 16*

The position starts from 0. This structure is often used
to track the size of allocated data within the buffer.

```rust
arena(edit any[]) -> (edit arena)
```

### arena - a buffer and mutable position pair
*Defined in: std/core/allocators.s line 9*

The position starts from 0. This structure is often used
to track the size of allocated data within the buffer.

```rust
arena(edit any[], nat _pos) -> (edit arena)
```

### arena
*Defined in: std/sci/vec.s line 7*

```rust
arena("float") -> (edit arena)
```

### arena
*Defined in: std/sci/vec.s line 241*

```rust
arena(edit vec) -> (edit arena)
```

# allocated
### allocated
*Defined in: std/core/allocators.s line 22*

```rust
allocated(edit any[], nat pos) -> (edit allocated)
```

# status
### status - convert to a nameless buffer and position pair
*Defined in: std/core/allocators.s line 25*

This unpacking is used to pass an arena's state or allocated
memory data as part of structural input.

```rust
status(allocated) -> (any[] {follows any ptr self.buf.unsafe_ptr}, nat)
```

### status - convert to a nameless buffer and position pair
*Defined in: std/core/allocators.s line 25*

This unpacking is used to pass an arena's state or allocated
memory data as part of structural input.

```rust
status(arena) -> (any[] {follows any ptr self.buf.unsafe_ptr}, nat)
```

# circular
### circular
*Defined in: std/core/string.s line 24*

```rust
circular("char") -> (edit circular)
```

### circular - circular buf
*Defined in: std/core/allocators.s line 39*

```rust
circular(edit any[]) -> (edit circular)
```

### circular
*Defined in: std/sci/vec.s line 8*

```rust
circular("float") -> (edit circular)
```

# list
### list
*Defined in: std/core/string.s line 25*

```rust
list("char") -> (edit list)
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
### list - list of buf
*Defined in: std/core/allocators.s line 44*

List defined over a mutable buf that is automatically managed and resized.
A capacity is maintained so that resizes are not performed too frequently.

```rust
list(edit any[]) -> (edit list)
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
### list
*Defined in: std/sci/vec.s line 9*

```rust
list("float") -> (edit list)
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
at(edit allocated) -> (mut any ptr {follows any ptr surface.buf.unsafe_ptr})
```
Potential errors:

15. out of bounds

### at - find or add an item in a robinhood_entry list
*Defined in: std/hash.s line 72*

```rust
at(edit robinhood_nat_entry[], nat _k) -> (mut nat)
```
Potential errors:

2. null pointer
5. modulo by zero 
6. nat subtraction would yield a negative
55. string buffer is full
9. iteration end
15. out of bounds

### at - find or add an item in a robinhood_entry list
*Defined in: std/hash.s line 72*

```rust
at(edit robinhood_str_entry[], str) -> (mut nat)
```
Potential errors:

2. null pointer
5. modulo by zero 
6. nat subtraction would yield a negative
55. string buffer is full
9. iteration end
15. out of bounds

### at - find or add an item in a robinhood_entry list
*Defined in: std/hash.s line 72*

```rust
at(edit robinhood_str_entry[], cstr _k) -> (mut nat)
```
Potential errors:

2. null pointer
5. modulo by zero 
6. nat subtraction would yield a negative
9. iteration end
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
55. string buffer is full

### at
*Defined in: std/sci/vec.s line 58*

```rust
at(vec, nat i) -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### at
*Defined in: std/sci/vec.s line 55*

```rust
at(float number, nat i) -> (float)
```

# slice
### slice
*Defined in: std/core/string.s line 252*

```rust
slice(str, nat from, nat to) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
22. slice out of string bounds
6. nat subtraction would yield a negative
15. out of bounds

### slice
*Defined in: std/core/string.s line 252*

```rust
slice(cstr _s, nat from, nat to) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
22. slice out of string bounds
6. nat subtraction would yield a negative
15. out of bounds

### slice
*Defined in: std/core/allocators.s line 105*

```rust
slice(edit arena, nat length) -> (mut any[] {follows any ptr surface.buf.unsafe_ptr})
```
Potential errors:

16. arena is out of space

# char\_allocator
### list
*Defined in: std/core/string.s line 25*

```rust
list("char") -> (edit list)
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
### circular
*Defined in: std/core/string.s line 24*

```rust
circular("char") -> (edit circular)
```

### arena
*Defined in: std/core/string.s line 23*

```rust
arena("char") -> (edit arena)
```

### new - allocations on new bufs
*Defined in: std/core/allocators.s line 5*

```rust
new() -> (new)
```

# strdat
### strdat - string data without the buffer storage
*Defined in: std/core/string.s line 35*

```rust
strdat(nat pos, nat length, char first) -> (nat pos, nat length, char first)
```

### strdat
*Defined in: std/mini.s line 41*

```rust
strdat(nat _pos, nat _length) -> (nat16 pos, nat16 length)
```
Potential errors:

57. nat value too large to pack in nat16

# str
### str - convert to string
*Defined in: std/core/string.s line 91*

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
*Defined in: std/core/string.s line 84*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[], nat endpos, "from", nat pos) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 75*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[], nat pos, "to", nat endpos) -> (str)
```
Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 67*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[], nat pos, "len", nat length) -> (str)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### str - tautology function for strings
*Defined in: std/core/string.s line 63*

```rust
str(str) -> (str)
```

### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 55*

```rust
str(char[]) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
20. string does not fit on buffer
15. out of bounds

### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 55*

```rust
str(char[], nat length) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
20. string does not fit on buffer
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 48*

```rust
str(char[], nat dat.pos, nat dat.length, char dat.first) -> (str)
```
Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### str - a string residing on a buffer
*Defined in: std/core/string.s line 43*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str)
```

### str - a string residing on a buffer
*Defined in: std/core/string.s line 39*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str)
```

### str - reads a string from the console
*Defined in: std/core/convertstr.s line 114*

The read string is placed on an arena while consuming only the necessarily minimum size.

```rust
str(edit arena, console console) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
23. unexpected end of console read
25. read string does not fit on buffer
15. out of bounds

### str - reads a string from the console
*Defined in: std/core/convertstr.s line 114*

The read string is placed onto memory that keeps being reallocated to accommodate its size.
The resulting memory will consume exactly the required size in bytes.

```rust
str(new CHARS, console console) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
4. division by zero 
6. nat subtraction would yield a negative
10. allocation failed
11. reallocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
14. cannot resize an unallocated or freed buffer
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
23. unexpected end of console read


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
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
57. nat value too large to pack in nat16
15. out of bounds

### str - create a compact str
*Defined in: std/mini.s line 46*

The created str variation should be used only for storng and
retrieving data with 'unpack' for memory efficiency.

```rust
str(str) -> (str)
```
Potential errors:

57. nat value too large to pack in nat16

# copy
### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(edit list, cstr _other) -> (str) with effects CHARS
```
Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
4. division by zero 
2. null pointer
11. reallocation failed
14. cannot resize an unallocated or freed buffer
15. out of bounds

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(edit list, str) -> (str) with effects CHARS
```
Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
4. division by zero 
11. reallocation failed
14. cannot resize an unallocated or freed buffer

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(edit circular, cstr _other) -> (str) with effects CHARS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
15. out of bounds

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(edit circular, str) -> (str) with effects CHARS
```
Potential errors:

17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(edit arena, cstr _other) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
15. out of bounds

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(edit arena, str) -> (str) with effects CHARS
```
Potential errors:

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(new CHARS, cstr _other) -> (str) with effects CHARS
```
Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
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
*Defined in: std/core/string.s line 129*

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
*Defined in: std/sci/vec.s line 233*

Grabs a FLOATS for the result as an effect.

```rust
copy(edit circular, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### copy - copy a vector
*Defined in: std/sci/vec.s line 233*

Grabs a FLOATS for the result as an effect.

```rust
copy(edit arena, vec) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### copy - copy a vector
*Defined in: std/sci/vec.s line 233*

Grabs a FLOATS for the result as an effect.

```rust
copy(new FLOATS, vec) -> (mut vec) with effects FLOATS
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
# copy\_null\_terminated
### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s line 217*

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

```rust
copy_null_terminated(edit arena, cstr _other) -> (str) with effects CHARS
```
Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
2. null pointer
21. string buffer out of memory
15. out of bounds

### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s line 217*

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

```rust
copy_null_terminated(edit arena, str) -> (str) with effects CHARS
```
Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
21. string buffer out of memory

### copy\_null\_terminated - create null terminated string
*Defined in: std/core/string.s line 136*

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
# unsafe\_temp
### unsafe\_temp - tautology function for cstr
*Defined in: std/core/string.s line 168*

This is mainly used as a stt-input counterpart for converting str|cstr to cstr.

```rust
unsafe_temp(cstr) -> (cstr cstr, str)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### unsafe\_temp - convert a string to a temporary null-terminated (cstr,str) pair
*Defined in: std/core/string.s line 146*

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
# endpos
### endpos - the end position of a string
*Defined in: std/core/string.s line 180*

This position is computed relative to its start in its
enclosing buffer.

```rust
endpos(str) -> (nat)
```

# starts\_with
### starts\_with
*Defined in: std/core/string.s line 261*

```rust
starts_with(str, str) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
22. slice out of string bounds
6. nat subtraction would yield a negative
15. out of bounds

### starts\_with
*Defined in: std/core/string.s line 261*

```rust
starts_with(str, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
22. slice out of string bounds
6. nat subtraction would yield a negative
15. out of bounds

### starts\_with
*Defined in: std/core/string.s line 261*

```rust
starts_with(cstr _stack, str) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
22. slice out of string bounds
6. nat subtraction would yield a negative
15. out of bounds

### starts\_with
*Defined in: std/core/string.s line 261*

```rust
starts_with(cstr _stack, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
22. slice out of string bounds
6. nat subtraction would yield a negative
15. out of bounds

# ends\_with
### ends\_with
*Defined in: std/core/string.s line 268*

```rust
ends_with(str, str) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### ends\_with
*Defined in: std/core/string.s line 268*

```rust
ends_with(str, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### ends\_with
*Defined in: std/core/string.s line 268*

```rust
ends_with(cstr _stack, str) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### ends\_with
*Defined in: std/core/string.s line 268*

```rust
ends_with(cstr _stack, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

# contains
### contains
*Defined in: std/core/string.s line 284*

```rust
contains(cstr _stack, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
22. slice out of string bounds
9. iteration end
15. out of bounds

### contains
*Defined in: std/core/string.s line 277*

```rust
contains(str, char needle) -> (bool)
```
Potential errors:

9. iteration end
2. null pointer

### contains
*Defined in: std/core/string.s line 277*

```rust
contains(cstr _stack, char needle) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
9. iteration end
15. out of bounds

### contains
*Defined in: std/core/string.s line 284*

```rust
contains(str, str) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
22. slice out of string bounds
9. iteration end
15. out of bounds

### contains
*Defined in: std/core/string.s line 284*

```rust
contains(str, cstr _needle) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
22. slice out of string bounds
9. iteration end
15. out of bounds

### contains
*Defined in: std/core/string.s line 284*

```rust
contains(cstr _stack, str) -> (bool)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
22. slice out of string bounds
9. iteration end
15. out of bounds

# is\_number
### is\_number
*Defined in: std/core/convertstr.s line 31*

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

*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[time.time_ns()]`*
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
Rand() -> (edit Rand)
```

### Rand - random number generator
*Defined in: std/rand.s line 65*

Xoshiro256plus random numbers from https://prng.di.unimi.it/
These and are NOT cryptographically secure.
This a structural type for storing the progress of random number generators 
on four u64 state fields. The version is seed-initalized. Its period is 2^256-1.

```rust
Rand(nat) -> (edit Rand)
```

# Hashable
### nat - an unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat)
```

### float
*Defined in: builtins line 1*

```rust
float() -> (float)
```

### cstr - constant string
*Defined in: builtins line 1*

```rust
cstr() -> (cstr)
```

### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(nat) -> (float)
```

### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(int) -> (float)
```

### float - cast to float
*Defined in: std/core/convert.s line 20*

Serves as a tautology function for code that parses on multiple number types.

```rust
float(float) -> (float)
```

### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 174*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(cstr cstr, str) -> (cstr)
```

### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 174*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
```

### str - convert to string
*Defined in: std/core/string.s line 91*

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
*Defined in: std/core/string.s line 84*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[], nat endpos, "from", nat pos) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 75*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[], nat pos, "to", nat endpos) -> (str)
```
Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 67*

The string automatically detects the first character,
which is generally tracked for fewer negative indirections
on negative comparisons.

```rust
str(char[], nat pos, "len", nat length) -> (str)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### str - tautology function for strings
*Defined in: std/core/string.s line 63*

```rust
str(str) -> (str)
```

### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 55*

```rust
str(char[]) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
20. string does not fit on buffer
15. out of bounds

### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 55*

```rust
str(char[], nat length) -> (str)
```
Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
20. string does not fit on buffer
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 48*

```rust
str(char[], nat dat.pos, nat dat.length, char dat.first) -> (str)
```
Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### str - a string residing on a buffer
*Defined in: std/core/string.s line 43*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str)
```

### str - a string residing on a buffer
*Defined in: std/core/string.s line 39*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str)
```

### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat16) -> (nat)
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

8. cannot convert negative int to id

### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(float) -> (nat)
```
Potential errors:

7. cannot convert negative float to id

# hash
### hash
*Defined in: std/hash.s line 13*

```rust
hash(nat k, nat size) -> (nat)
```
Potential errors:

5. modulo by zero 

### hash
*Defined in: std/hash.s line 7*

```rust
hash(str, nat size) -> (nat)
```
Potential errors:

9. iteration end
2. null pointer
5. modulo by zero 

# to\_hash\_base
### to\_hash\_base
*Defined in: std/hash.s line 27*

```rust
to_hash_base(nat) -> (bits)
```

### to\_hash\_base
*Defined in: std/hash.s line 27*

```rust
to_hash_base(int) -> (bits)
```

### to\_hash\_base
*Defined in: std/hash.s line 27*

```rust
to_hash_base(float) -> (bits)
```

### to\_hash\_base
*Defined in: std/hash.s line 24*

```rust
to_hash_base(cstr) -> (str)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### to\_hash\_base
*Defined in: std/hash.s line 24*

```rust
to_hash_base(str) -> (str)
```

# robinhood\_str\_entry
### robinhood\_str\_entry
*Defined in: std/hash.s line 30*

```rust
robinhood_str_entry(str, nat cost) -> (str, nat cost)
```

# robinhood\_nat\_entry
### robinhood\_nat\_entry
*Defined in: std/hash.s line 33*

```rust
robinhood_nat_entry(nat s, nat cost) -> (nat s, nat cost)
```

# robinhood\_entry
### robinhood\_nat\_entry
*Defined in: std/hash.s line 33*

```rust
robinhood_nat_entry(nat s, nat cost) -> (nat s, nat cost)
```

### robinhood\_str\_entry
*Defined in: std/hash.s line 30*

```rust
robinhood_str_entry(str, nat cost) -> (str, nat cost)
```

# raw
### raw
*Defined in: std/hash.s line 44*

```rust
raw(cstr) -> (str)
```
Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### raw
*Defined in: std/hash.s line 41*

```rust
raw(nat) -> (nat)
```

### raw
*Defined in: std/hash.s line 41*

```rust
raw(str) -> (str)
```

### raw
*Defined in: std/hash.s line 38*

```rust
raw(nat s, nat cost) -> (nat)
```

### raw
*Defined in: std/hash.s line 38*

```rust
raw(str, nat cost) -> (str)
```

# is\_zero
### is\_zero
*Defined in: std/hash.s line 50*

```rust
is_zero(nat) -> (bool)
```

### is\_zero
*Defined in: std/hash.s line 47*

```rust
is_zero(str) -> (bool)
```

# find
### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 53*

```rust
find(nat[], nat _k) -> (mut nat)
```
Potential errors:

2. null pointer
5. modulo by zero 
54. index not found
6. nat subtraction would yield a negative
9. iteration end
15. out of bounds

### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 53*

```rust
find(str[], str) -> (mut nat)
```
Potential errors:

2. null pointer
5. modulo by zero 
54. index not found
6. nat subtraction would yield a negative
9. iteration end
15. out of bounds

### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 53*

```rust
find(str[], cstr _k) -> (mut nat)
```
Potential errors:

2. null pointer
5. modulo by zero 
6. nat subtraction would yield a negative
9. iteration end
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
54. index not found

### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 53*

```rust
find(robinhood_nat_entry[], nat _k) -> (mut nat)
```
Potential errors:

2. null pointer
5. modulo by zero 
54. index not found
6. nat subtraction would yield a negative
9. iteration end
15. out of bounds

### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 53*

```rust
find(robinhood_str_entry[], str) -> (mut nat)
```
Potential errors:

2. null pointer
5. modulo by zero 
54. index not found
6. nat subtraction would yield a negative
9. iteration end
15. out of bounds

### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 53*

```rust
find(robinhood_str_entry[], cstr _k) -> (mut nat)
```
Potential errors:

2. null pointer
5. modulo by zero 
6. nat subtraction would yield a negative
9. iteration end
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
54. index not found

# strmap
### strmap - a string map
*Defined in: std/map.s line 4*

Maps string indexes to the buffer provided using a robinhood scheme.
Map size is static and cannot be adjusted after initialization.

```rust
strmap(edit any[]) -> (mut robinhood_str_entry[], edit any[])
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
natmap(edit any[]) -> (mut robinhood_nat_entry[], edit any[])
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
unpack(char[], nat16 dat.pos, nat16 dat.length) -> (str)
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

*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[abs($x)]`*
### abs
*Defined in: std/sci/math.s line 4*

```rust
abs(float) -> (float)
```

*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[abs($x)]`*
# sqrt
### sqrt
*Defined in: std/sci/math.s line 14*

```rust
sqrt(float) -> (float)
```

# sin
### sin
*Defined in: std/sci/math.s line 19*

```rust
sin(float) -> (float)
```

# cos
### cos
*Defined in: std/sci/math.s line 24*

```rust
cos(float) -> (float)
```

# log
### log
*Defined in: std/sci/math.s line 29*

```rust
log(float) -> (float)
```

# tan
### tan
*Defined in: std/sci/math.s line 34*

```rust
tan(float) -> (float)
```

# floor
### floor
*Defined in: std/sci/math.s line 39*

```rust
floor(float) -> (int)
```

# asin
### asin
*Defined in: std/sci/math.s line 44*

```rust
asin(float) -> (float)
```

# acos
### acos
*Defined in: std/sci/math.s line 49*

```rust
acos(float) -> (float)
```

# atan
### atan
*Defined in: std/sci/math.s line 59*

```rust
atan(float x, float y) -> (float)
```

### atan
*Defined in: std/sci/math.s line 54*

```rust
atan(float) -> (float)
```

# exp
### exp
*Defined in: std/sci/math.s line 64*

```rust
exp(float) -> (float)
```

# isnan
### isnan
*Defined in: std/sci/math.s line 74*

```rust
isnan(float) -> (bool)
```

*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[math.isnan(x)]`*
# isinf
### isinf
*Defined in: std/sci/math.s line 80*

```rust
isinf(float) -> (bool)
```

*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[math.isinf(x)]`*
# vec
### vec - vector allocation
*Defined in: std/sci/vec.s line 32*

```rust
vec(edit circular, nat length) -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### vec - vector allocation
*Defined in: std/sci/vec.s line 32*

```rust
vec(edit circular, nat length, "dirty") -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### vec - vector allocation
*Defined in: std/sci/vec.s line 32*

```rust
vec(edit arena, nat length) -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### vec - vector allocation
*Defined in: std/sci/vec.s line 32*

```rust
vec(edit arena, nat length, "dirty") -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### vec - treat a float buffer as a vector
*Defined in: std/sci/vec.s line 20*

```rust
vec(edit float[]) -> (mut vec)
```
Potential errors:

59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### vec - vector on a new buffer
*Defined in: std/sci/vec.s line 12*

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
*Defined in: std/sci/vec.s line 12*

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
vec(float ptr unsafe_ptr, nat pos, nat length) -> (mut vec)
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
mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride) -> (mut mat)
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
mat(edit float[], nat rows) -> (mut mat)
```
Potential errors:

64. buffer size not divisible by vector rows
16. arena is out of space
4. division by zero 
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(edit circular, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(edit circular, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(edit arena, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

16. arena is out of space
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(edit arena, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Potential errors:

16. arena is out of space
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

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
*Defined in: std/sci/unsafe.s line 15*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
coo(sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz) -> (mut coo)
```

### coo
*Defined in: std/sci/coo.s line 40*

```rust
coo(sparse_element[], nat rows, nat cols) -> (mut coo)
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
# float\_allocator
### new - allocations on new bufs
*Defined in: std/core/allocators.s line 5*

```rust
new() -> (new)
```

### circular
*Defined in: std/sci/vec.s line 8*

```rust
circular("float") -> (edit circular)
```

### arena
*Defined in: std/sci/vec.s line 7*

```rust
arena("float") -> (edit arena)
```

# constvec
### constvec - treat an immutable float buffer as an immutable vector
*Defined in: std/sci/vec.s line 26*

```rust
constvec(float[]) -> (vec)
```
Potential errors:

59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

# reduce
### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "l2") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sqr") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "abs") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec) -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

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
4. division by zero 
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

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
4. division by zero 
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

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
4. division by zero 
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

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
4. division by zero 
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

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
4. division by zero 
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

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
4. division by zero 
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

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
4. division by zero 
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

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
4. division by zero 
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

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
4. division by zero 
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

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
4. division by zero 
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

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
4. division by zero 
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

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
4. division by zero 
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul", "l2") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul", "sqr") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul", "abs") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add", "l2") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add", "sqr") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add", "abs") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "l2") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "sqr") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "abs") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec) -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul", "l2") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul", "sqr") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul", "abs") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add", "l2") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add", "sqr") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add", "abs") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "l2") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "sqr") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "abs") -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec) -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul", "l2") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul", "sqr") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul", "abs") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add", "l2") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add", "sqr") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add", "abs") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "l2") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "sqr") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "abs") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec) -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", "l2") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", "sqr") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", "abs") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add", "l2") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add", "sqr") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add", "abs") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 152*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add") -> (float)
```
No failing errors, but can catch these intercepted ones:

2. null pointer

# dot
### dot - dot product
*Defined in: std/sci/vec.s line 188*

```rust
dot(vec, vec) -> (float)
```
Potential errors:

2. null pointer
15. out of bounds

# sum
### sum - sum
*Defined in: std/sci/vec.s line 192*

```rust
sum(vec) -> (float)
```

### sum - sum of each column
*Defined in: std/sci/coo.s line 109*

result[j] = sum of all stored values in column j

```rust
sum(edit circular, coo, "col") -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### sum - sum of each column
*Defined in: std/sci/coo.s line 109*

result[j] = sum of all stored values in column j

```rust
sum(edit arena, coo, "col") -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### sum - sum of each column
*Defined in: std/sci/coo.s line 109*

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
*Defined in: std/sci/coo.s line 101*

result[i] = sum of all stored values in row i

```rust
sum(edit circular, coo, "row") -> (mut vec) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### sum - sum of each row
*Defined in: std/sci/coo.s line 101*

result[i] = sum of all stored values in row i

```rust
sum(edit arena, coo, "row") -> (mut vec) with effects FLOATS
```
Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### sum - sum of each row
*Defined in: std/sci/coo.s line 101*

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
*Defined in: std/sci/vec.s line 196*

```rust
mean(vec) -> (float)
```
Potential errors:

2. null pointer
4. division by zero 

# var
### var - variance
*Defined in: std/sci/vec.s line 200*

```rust
var(vec) -> (float)
```
Potential errors:

2. null pointer
4. division by zero 
15. out of bounds

# std
### std - standard deviation
*Defined in: std/sci/vec.s line 211*

```rust
std(vec) -> (float)
```
Potential errors:

2. null pointer
4. division by zero 
15. out of bounds

# self
### self
*Defined in: std/sci/vec.s line 248*

```rust
self(edit vec) -> (edit arena, edit vec)
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
constmat(float[], nat rows) -> (mat)
```
Potential errors:

64. buffer size not divisible by vector rows
16. arena is out of space
4. division by zero 
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

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

65. row out of bounds

# nnz
### nnz - number of stored non-zero entries
*Defined in: std/sci/coo.s line 30*

```rust
nnz(coo) -> (nat)
```

# todense
### todense - convert to dense mat
*Defined in: std/sci/coo.s line 80*

```rust
todense(edit circular, coo) -> (mut mat) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
17. does not fit in circular arena
15. out of bounds
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### todense - convert to dense mat
*Defined in: std/sci/coo.s line 80*

```rust
todense(edit arena, coo) -> (mut mat) with effects FLOATS
```
Potential errors:

16. arena is out of space
65. row out of bounds
2. null pointer
66. column out of bounds
15. out of bounds
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### todense - convert to dense mat
*Defined in: std/sci/coo.s line 80*

```rust
todense(new FLOATS, coo) -> (mut mat) with effects FLOATS
```
Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
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
*Defined in: std/sci/unsafe.s line 15*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
coo(sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz) -> (mut coo)
```

### mat - matrix type declaration
*Defined in: std/sci/unsafe.s line 8*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride) -> (mut mat)
```

### coo
*Defined in: std/sci/coo.s line 40*

```rust
coo(sparse_element[], nat rows, nat cols) -> (mut coo)
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
mat(edit float[], nat rows) -> (mut mat)
```
Potential errors:

64. buffer size not divisible by vector rows
16. arena is out of space
4. division by zero 
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(edit circular, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(edit circular, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Potential errors:

17. does not fit in circular arena
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(edit arena, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Potential errors:

16. arena is out of space
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 21*

```rust
mat(edit arena, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Potential errors:

16. arena is out of space
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

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
# tagged
### tagged - blank tag structure
*Defined in: std/tag.s line 4*

Ensures that 'tag ptr' has a unique type and allocates at least a cstr's
(a pointer's) worth of storage so that tag checking is always valid.

```rust
tagged(cstr) -> (tagged)
```

# unsafe\_match
### unsafe\_match
*Defined in: std/tag.s line 10*

```rust
unsafe_match(tagged ptr obj, cstr name, any ptr type) -> (mut any ptr {follows any ptr type})
```
Potential errors:

2. null pointer
70. does not match

# unsafe\_defer\_free
### unsafe\_defer\_free
*Defined in: std/tag.s line 15*

```rust
unsafe_defer_free(mut tagged ptr) -> (mut tagged ptr)
```


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# tagged\_alloc
### tagged\_alloc
*Defined in: std/tag.s line 20*

```rust
tagged_alloc(edit arena, nat size) -> (mut char ptr)
```
Potential errors:

16. arena is out of space
15. out of bounds

# match
### match
*Defined in: std/tag.s line 47*

```rust
match(cstr obj, cstr type_name) -> (mut char[])
```
Potential errors:

2. null pointer
10. allocation failed
12. cannot resize buffers with alloc; it promises no data reallocation
13. cannot allocate a buffer of unsized type
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


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

# color
### color
*Defined in: std/graphics.s line 5*

```rust
color(nat _r, nat _g, nat _b, nat _a) -> (nat8 r, nat8 g, nat8 b, nat8 a)
```
Potential errors:

56. nat value too large to pack in nat8

### color
*Defined in: std/graphics.s line 5*

```rust
color(nat _r, nat _g, nat _b) -> (nat8 r, nat8 g, nat8 b, nat8 a)
```
Potential errors:

56. nat value too large to pack in nat8

# position
### position
*Defined in: std/graphics.s line 14*

```rust
position(float x, float y) -> (float x, float y)
```

# size
### size
*Defined in: std/graphics.s line 17*

```rust
size(float width, float height) -> (float width, float height)
```

# window
### window
*Defined in: std/graphics.s line 20*

```rust
window(float size.width, float size.height, cstr title, cstr font_path) -> (edit window)
```

# is\_open
### is\_open
*Defined in: std/graphics.s line 36*

```rust
is_open(edit window) -> (bool) with effects WINDOW
```

# draw
### draw
*Defined in: std/graphics.s line 135*

```rust
draw(edit window, Texture, float pos.x, float pos.y, float rotation, float size.width, float size.height, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Potential errors:

2. null pointer
4. division by zero 
15. out of bounds

### draw
*Defined in: std/graphics.s line 123*

```rust
draw(edit window, Texture, float pos.x, float pos.y, float rotation, float scale, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Potential errors:

2. null pointer
15. out of bounds

### draw
*Defined in: std/graphics.s line 113*

```rust
draw(edit window, Texture, float pos.x, float pos.y, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Potential errors:

2. null pointer
15. out of bounds

### draw
*Defined in: std/graphics.s line 40*

```rust
draw(edit window) -> (bool) with effects WINDOW
```
Potential errors:

74. alopeny drawing on window


Returned values defer use of the following functions:
```rust
```
# clear
### clear
*Defined in: std/graphics.s line 49*

```rust
clear(edit window, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

# text
### text
*Defined in: std/graphics.s line 64*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

### text
*Defined in: std/graphics.s line 64*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

### text
*Defined in: std/graphics.s line 52*

```rust
text(edit window, cstr txt, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

# text\_rotated
### text\_rotated
*Defined in: std/graphics.s line 76*

```rust
text_rotated(edit window, str, float pos.x, float pos.y, float origin.x, float origin.y, float rotation, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

### text\_rotated
*Defined in: std/graphics.s line 76*

```rust
text_rotated(edit window, str, float pos.x, float pos.y, float origin.x, float origin.y, float rotation, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

# TextureData
### TextureData
*Defined in: std/graphics.s line 90*

```rust
TextureData(nat id, float size.width, float size.height, nat mipmaps, nat format) -> (nat id, float size.width, float size.height, nat mipmaps, nat format)
```

# Texture
### Texture
*Defined in: std/graphics.s line 93*

```rust
Texture(nat id, float size.width, float size.height, nat mipmaps, nat format) -> (Texture)
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
# open
### open
*Defined in: std/graphics.s line 100*

```rust
open(cstr) -> (Texture)
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
# circ
### circ
*Defined in: std/graphics.s line 149*

```rust
circ(edit window, float pos.x, float pos.y, float radius, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

# rect
### rect
*Defined in: std/graphics.s line 158*

```rust
rect(edit window, float pos.x, float pos.y, float size.width, float size.height, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

# rect\_line
### rect\_line
*Defined in: std/graphics.s line 167*

```rust
rect_line(edit window, float pos.x, float pos.y, float size.width, float size.height, nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

# circ\_line
### circ\_line
*Defined in: std/graphics.s line 170*

```rust
circ_line(edit window, float pos.x, float pos.y, nat radius, nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

# dt
### dt
*Defined in: std/graphics.s line 186*

```rust
dt(window) -> (float) with effects WINDOW
```

# key\_down
### key\_down
*Defined in: std/graphics.s line 190*

```rust
key_down(window, nat key) -> (bool) with effects WINDOW
```

# key\_pressed
### key\_pressed
*Defined in: std/graphics.s line 194*

```rust
key_pressed(edit window, nat key) -> (bool) with effects WINDOW
```

# key\_released
### key\_released
*Defined in: std/graphics.s line 198*

```rust
key_released(edit window, nat key) -> (bool) with effects WINDOW
```

# mouse\_pos
### mouse\_pos
*Defined in: std/graphics.s line 202*

```rust
mouse_pos(window) -> (float x, float y) with effects WINDOW
```

# mouse\_down
### mouse\_down
*Defined in: std/graphics.s line 209*

```rust
mouse_down(window, nat button) -> (bool) with effects WINDOW
```

# mouse\_pressed
### mouse\_pressed
*Defined in: std/graphics.s line 213*

```rust
mouse_pressed(edit window, nat button) -> (bool) with effects WINDOW
```

# mouse\_wheel
### mouse\_wheel
*Defined in: std/graphics.s line 217*

```rust
mouse_wheel(window) -> (float) with effects WINDOW
```

# KEY\_NULL
### \_\_t7663t
*Defined in: std/graphics.s line 221*

```rust
() -> (0)
```

# KEY\_APOSTROPHE
### \_\_t7666t
*Defined in: std/graphics.s line 222*

```rust
() -> (39)
```

# KEY\_COMMA
### \_\_t7669t
*Defined in: std/graphics.s line 223*

```rust
() -> (44)
```

# KEY\_MINUS
### \_\_t7672t
*Defined in: std/graphics.s line 224*

```rust
() -> (45)
```

# KEY\_PERIOD
### \_\_t7675t
*Defined in: std/graphics.s line 225*

```rust
() -> (46)
```

# KEY\_SLASH
### \_\_t7678t
*Defined in: std/graphics.s line 226*

```rust
() -> (47)
```

# KEY\_ZERO
### \_\_t7681t
*Defined in: std/graphics.s line 227*

```rust
() -> (48)
```

# KEY\_ONE
### \_\_t7684t
*Defined in: std/graphics.s line 228*

```rust
() -> (49)
```

# KEY\_TWO
### \_\_t7687t
*Defined in: std/graphics.s line 229*

```rust
() -> (50)
```

# KEY\_THREE
### \_\_t7690t
*Defined in: std/graphics.s line 230*

```rust
() -> (51)
```

# KEY\_FOUR
### \_\_t7693t
*Defined in: std/graphics.s line 231*

```rust
() -> (52)
```

# KEY\_FIVE
### \_\_t7696t
*Defined in: std/graphics.s line 232*

```rust
() -> (53)
```

# KEY\_SIX
### \_\_t7699t
*Defined in: std/graphics.s line 233*

```rust
() -> (54)
```

# KEY\_SEVEN
### \_\_t7702t
*Defined in: std/graphics.s line 234*

```rust
() -> (55)
```

# KEY\_EIGHT
### \_\_t7705t
*Defined in: std/graphics.s line 235*

```rust
() -> (56)
```

# KEY\_NINE
### \_\_t7708t
*Defined in: std/graphics.s line 236*

```rust
() -> (57)
```

# KEY\_SEMICOLON
### \_\_t7711t
*Defined in: std/graphics.s line 237*

```rust
() -> (59)
```

# KEY\_EQUAL
### \_\_t7714t
*Defined in: std/graphics.s line 238*

```rust
() -> (61)
```

# KEY\_A
### \_\_t7717t
*Defined in: std/graphics.s line 239*

```rust
() -> (65)
```

# KEY\_B
### \_\_t7720t
*Defined in: std/graphics.s line 240*

```rust
() -> (66)
```

# KEY\_C
### \_\_t7723t
*Defined in: std/graphics.s line 241*

```rust
() -> (67)
```

# KEY\_D
### \_\_t7726t
*Defined in: std/graphics.s line 242*

```rust
() -> (68)
```

# KEY\_E
### \_\_t7729t
*Defined in: std/graphics.s line 243*

```rust
() -> (69)
```

# KEY\_F
### \_\_t7732t
*Defined in: std/graphics.s line 244*

```rust
() -> (70)
```

# KEY\_G
### \_\_t7735t
*Defined in: std/graphics.s line 245*

```rust
() -> (71)
```

# KEY\_H
### \_\_t7738t
*Defined in: std/graphics.s line 246*

```rust
() -> (72)
```

# KEY\_I
### \_\_t7741t
*Defined in: std/graphics.s line 247*

```rust
() -> (73)
```

# KEY\_J
### \_\_t7744t
*Defined in: std/graphics.s line 248*

```rust
() -> (74)
```

# KEY\_K
### \_\_t7747t
*Defined in: std/graphics.s line 249*

```rust
() -> (75)
```

# KEY\_L
### \_\_t7750t
*Defined in: std/graphics.s line 250*

```rust
() -> (76)
```

# KEY\_M
### \_\_t7753t
*Defined in: std/graphics.s line 251*

```rust
() -> (77)
```

# KEY\_N
### \_\_t7756t
*Defined in: std/graphics.s line 252*

```rust
() -> (78)
```

# KEY\_O
### \_\_t7759t
*Defined in: std/graphics.s line 253*

```rust
() -> (79)
```

# KEY\_P
### \_\_t7762t
*Defined in: std/graphics.s line 254*

```rust
() -> (80)
```

# KEY\_Q
### \_\_t7765t
*Defined in: std/graphics.s line 255*

```rust
() -> (81)
```

# KEY\_R
### \_\_t7768t
*Defined in: std/graphics.s line 256*

```rust
() -> (82)
```

# KEY\_S
### \_\_t7771t
*Defined in: std/graphics.s line 257*

```rust
() -> (83)
```

# KEY\_T
### \_\_t7774t
*Defined in: std/graphics.s line 258*

```rust
() -> (84)
```

# KEY\_U
### \_\_t7777t
*Defined in: std/graphics.s line 259*

```rust
() -> (85)
```

# KEY\_V
### \_\_t7780t
*Defined in: std/graphics.s line 260*

```rust
() -> (86)
```

# KEY\_W
### \_\_t7783t
*Defined in: std/graphics.s line 261*

```rust
() -> (87)
```

# KEY\_X
### \_\_t7786t
*Defined in: std/graphics.s line 262*

```rust
() -> (88)
```

# KEY\_Y
### \_\_t7789t
*Defined in: std/graphics.s line 263*

```rust
() -> (89)
```

# KEY\_Z
### \_\_t7792t
*Defined in: std/graphics.s line 264*

```rust
() -> (90)
```

# KEY\_LEFT\_BRACKET
### \_\_t7795t
*Defined in: std/graphics.s line 265*

```rust
() -> (91)
```

# KEY\_BACKSLASH
### \_\_t7798t
*Defined in: std/graphics.s line 266*

```rust
() -> (92)
```

# KEY\_RIGHT\_BRACKET
### \_\_t7801t
*Defined in: std/graphics.s line 267*

```rust
() -> (93)
```

# KEY\_GRAVE
### \_\_t7804t
*Defined in: std/graphics.s line 268*

```rust
() -> (96)
```

# KEY\_SPACE
### \_\_t7807t
*Defined in: std/graphics.s line 269*

```rust
() -> (32)
```

# KEY\_ESCAPE
### \_\_t7810t
*Defined in: std/graphics.s line 270*

```rust
() -> (256)
```

# KEY\_ENTER
### \_\_t7813t
*Defined in: std/graphics.s line 271*

```rust
() -> (257)
```

# KEY\_TAB
### \_\_t7816t
*Defined in: std/graphics.s line 272*

```rust
() -> (258)
```

# KEY\_BACKSPACE
### \_\_t7819t
*Defined in: std/graphics.s line 273*

```rust
() -> (259)
```

# KEY\_INSERT
### \_\_t7822t
*Defined in: std/graphics.s line 274*

```rust
() -> (260)
```

# KEY\_DELETE
### \_\_t7825t
*Defined in: std/graphics.s line 275*

```rust
() -> (261)
```

# KEY\_RIGHT
### \_\_t7828t
*Defined in: std/graphics.s line 276*

```rust
() -> (262)
```

# KEY\_LEFT
### \_\_t7831t
*Defined in: std/graphics.s line 277*

```rust
() -> (263)
```

# KEY\_DOWN
### \_\_t7834t
*Defined in: std/graphics.s line 278*

```rust
() -> (264)
```

# KEY\_UP
### \_\_t7837t
*Defined in: std/graphics.s line 279*

```rust
() -> (265)
```

# KEY\_PAGE\_UP
### \_\_t7840t
*Defined in: std/graphics.s line 280*

```rust
() -> (266)
```

# KEY\_PAGE\_DOWN
### \_\_t7843t
*Defined in: std/graphics.s line 281*

```rust
() -> (267)
```

# KEY\_HOME
### \_\_t7846t
*Defined in: std/graphics.s line 282*

```rust
() -> (268)
```

# KEY\_END
### \_\_t7849t
*Defined in: std/graphics.s line 283*

```rust
() -> (269)
```

# KEY\_CAPS\_LOCK
### \_\_t7852t
*Defined in: std/graphics.s line 284*

```rust
() -> (280)
```

# KEY\_SCROLL\_LOCK
### \_\_t7855t
*Defined in: std/graphics.s line 285*

```rust
() -> (281)
```

# KEY\_NUM\_LOCK
### \_\_t7858t
*Defined in: std/graphics.s line 286*

```rust
() -> (282)
```

# KEY\_PRINT\_SCREEN
### \_\_t7861t
*Defined in: std/graphics.s line 287*

```rust
() -> (283)
```

# KEY\_PAUSE
### \_\_t7864t
*Defined in: std/graphics.s line 288*

```rust
() -> (284)
```

# KEY\_F1
### \_\_t7867t
*Defined in: std/graphics.s line 289*

```rust
() -> (290)
```

# KEY\_F2
### \_\_t7870t
*Defined in: std/graphics.s line 290*

```rust
() -> (291)
```

# KEY\_F3
### \_\_t7873t
*Defined in: std/graphics.s line 291*

```rust
() -> (292)
```

# KEY\_F4
### \_\_t7876t
*Defined in: std/graphics.s line 292*

```rust
() -> (293)
```

# KEY\_F5
### \_\_t7879t
*Defined in: std/graphics.s line 293*

```rust
() -> (294)
```

# KEY\_F6
### \_\_t7882t
*Defined in: std/graphics.s line 294*

```rust
() -> (295)
```

# KEY\_F7
### \_\_t7885t
*Defined in: std/graphics.s line 295*

```rust
() -> (296)
```

# KEY\_F8
### \_\_t7888t
*Defined in: std/graphics.s line 296*

```rust
() -> (297)
```

# KEY\_F9
### \_\_t7891t
*Defined in: std/graphics.s line 297*

```rust
() -> (298)
```

# KEY\_F10
### \_\_t7894t
*Defined in: std/graphics.s line 298*

```rust
() -> (299)
```

# KEY\_F11
### \_\_t7897t
*Defined in: std/graphics.s line 299*

```rust
() -> (300)
```

# KEY\_F12
### \_\_t7900t
*Defined in: std/graphics.s line 300*

```rust
() -> (301)
```

# KEY\_LEFT\_SHIFT
### \_\_t7903t
*Defined in: std/graphics.s line 301*

```rust
() -> (340)
```

# KEY\_LEFT\_CONTROL
### \_\_t7906t
*Defined in: std/graphics.s line 302*

```rust
() -> (341)
```

# KEY\_LEFT\_ALT
### \_\_t7909t
*Defined in: std/graphics.s line 303*

```rust
() -> (342)
```

# KEY\_LEFT\_SUPER
### \_\_t7912t
*Defined in: std/graphics.s line 304*

```rust
() -> (343)
```

# KEY\_RIGHT\_SHIFT
### \_\_t7915t
*Defined in: std/graphics.s line 305*

```rust
() -> (344)
```

# KEY\_RIGHT\_CONTROL
### \_\_t7918t
*Defined in: std/graphics.s line 306*

```rust
() -> (345)
```

# KEY\_RIGHT\_ALT
### \_\_t7921t
*Defined in: std/graphics.s line 307*

```rust
() -> (346)
```

# KEY\_RIGHT\_SUPER
### \_\_t7924t
*Defined in: std/graphics.s line 308*

```rust
() -> (347)
```

# KEY\_KB\_MENU
### \_\_t7927t
*Defined in: std/graphics.s line 309*

```rust
() -> (348)
```

# KEY\_KP\_0
### \_\_t7930t
*Defined in: std/graphics.s line 310*

```rust
() -> (320)
```

# KEY\_KP\_1
### \_\_t7933t
*Defined in: std/graphics.s line 311*

```rust
() -> (321)
```

# KEY\_KP\_2
### \_\_t7936t
*Defined in: std/graphics.s line 312*

```rust
() -> (322)
```

# KEY\_KP\_3
### \_\_t7939t
*Defined in: std/graphics.s line 313*

```rust
() -> (323)
```

# KEY\_KP\_4
### \_\_t7942t
*Defined in: std/graphics.s line 314*

```rust
() -> (324)
```

# KEY\_KP\_5
### \_\_t7945t
*Defined in: std/graphics.s line 315*

```rust
() -> (325)
```

# KEY\_KP\_6
### \_\_t7948t
*Defined in: std/graphics.s line 316*

```rust
() -> (326)
```

# KEY\_KP\_7
### \_\_t7951t
*Defined in: std/graphics.s line 317*

```rust
() -> (327)
```

# KEY\_KP\_8
### \_\_t7954t
*Defined in: std/graphics.s line 318*

```rust
() -> (328)
```

# KEY\_KP\_9
### \_\_t7957t
*Defined in: std/graphics.s line 319*

```rust
() -> (329)
```

# KEY\_KP\_DECIMAL
### \_\_t7960t
*Defined in: std/graphics.s line 320*

```rust
() -> (330)
```

# KEY\_KP\_DIVIDE
### \_\_t7963t
*Defined in: std/graphics.s line 321*

```rust
() -> (331)
```

# KEY\_KP\_MULTIPLY
### \_\_t7966t
*Defined in: std/graphics.s line 322*

```rust
() -> (332)
```

# KEY\_KP\_SUBTRACT
### \_\_t7969t
*Defined in: std/graphics.s line 323*

```rust
() -> (333)
```

# KEY\_KP\_ADD
### \_\_t7972t
*Defined in: std/graphics.s line 324*

```rust
() -> (334)
```

# KEY\_KP\_ENTER
### \_\_t7975t
*Defined in: std/graphics.s line 325*

```rust
() -> (335)
```

# KEY\_KP\_EQUAL
### \_\_t7978t
*Defined in: std/graphics.s line 326*

```rust
() -> (336)
```

# KEY\_BACK
### \_\_t7981t
*Defined in: std/graphics.s line 327*

```rust
() -> (4)
```

# KEY\_MENU
### \_\_t7984t
*Defined in: std/graphics.s line 328*

```rust
() -> (5)
```

# KEY\_VOLUME\_UP
### \_\_t7987t
*Defined in: std/graphics.s line 329*

```rust
() -> (24)
```

# KEY\_VOLUME\_DOWN
### \_\_t7990t
*Defined in: std/graphics.s line 330*

```rust
() -> (25)
```

