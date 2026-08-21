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
[print](#print) 
[nn](#nn) 
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
[mutget](#mutget) 
[len](#len) 
[new](#new) 
[arena](#arena) 
[length](#length) 
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
[empty](#empty) 
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
[unsafe\_open\_window](#unsafe\_open\_window) 
[window](#window) 
[is\_open](#is\_open) 
[unsafe\_begin\_drawing](#unsafe\_begin\_drawing) 
[unsafe\_end\_drawing](#unsafe\_end\_drawing) 
[draw](#draw) 
[clear](#clear) 
[text](#text) 
[sleep](#sleep) 
[TextureData](#texturedata) 
[Texture](#texture) 
[open](#open) 
[texture](#texture) 
[circ](#circ) 
[ellipse](#ellipse) 
[rect](#rect) 
[tri](#tri) 
[dt](#dt) 
[uptime](#uptime) 
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
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 195*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(cstr cstr, str) -> (cstr)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 195*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 195*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


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
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# int
### int - a signed integer value
*Defined in: builtins line 1*

Represents values in the range `2^-63 to 2^63-1`.

```rust
int() -> (int)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### int - cast to int
*Defined in: std/core/convert.s line 89*

Converts a bit representation to the corresponding integer.

```rust
int(bits) -> (int)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### int - cast to int
*Defined in: std/core/convert.s line 29*

Overflows are mapped to negative integers without any numerical safeguards.

```rust
int(nat) -> (int)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### int - cast to int
*Defined in: std/core/convert.s line 29*

Serves as a tautology function for code that parses on multiple number types.

```rust
int(int) -> (int)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### int - cast to int
*Defined in: std/core/convert.s line 29*

May lose information due to truncating.

```rust
int(float) -> (int)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### int - reads an integer from the console
*Defined in: std/core/convertstr.s line 36*

```rust
int(console) -> (int)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
23. unexpected end of console read
24. user input was not a float

### int - converts a string to an integer
*Defined in: std/core/convertstr.s line 149*

```rust
int(str) -> (int)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
26. invalid int conversion from empty string
27. invalid int conversion from string with only a sign
28. invalid integer int from non-number string

# nat
### nat - an unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat32) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat16) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat - cast to nat
*Defined in: std/core/convert.s line 84*

Converts a bit representation to the corresponding natural number.

```rust
nat(bits) -> (nat)
```
Level of abstraction:

1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### nat - cast to nat
*Defined in: std/core/convert.s line 51*

Converting a character to a natural number considers
its bit representation interpreted as an unsigned number.

```rust
nat(char) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(nat) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(int) -> (nat)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

8. cannot convert negative int to nat

### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(float) -> (nat)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

7. cannot convert negative float to nat

### nat - reads an unsigned integer from the console
*Defined in: std/core/convertstr.s line 60*

```rust
nat(console) -> (nat)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
24. user input was not a float

### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s line 172*

```rust
nat(str) -> (nat)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
29. invalid nat conversion from empty string
30. invalid nat conversion from non-number string

### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s line 172*

```rust
nat(cstr) -> (nat)
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
29. invalid nat conversion from empty string
30. invalid nat conversion from non-number string

# nat32
### nat32 - a 32-bit unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^32-1`.

```rust
nat32() -> (nat32)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat32
*Defined in: std/core/allocators.s line 143*

```rust
nat32(nat) -> (nat32)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat32 - convert unsigned number to 32 bits
*Defined in: std/mini.s line 38*

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

```rust
nat32(nat) -> (nat32)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

58. nat value too large to pack in nat32

# nat16
### nat16 - a 16-bit unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^16-1`.

```rust
nat16() -> (nat16)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat16 - convert unsigned number to 16 bits
*Defined in: std/mini.s line 30*

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

```rust
nat16(nat) -> (nat16)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

57. nat value too large to pack in nat16

# nat8
### nat8 - a 8-bit unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 255`.

```rust
nat8() -> (nat8)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat8 - convert unsigned number to 8 bits
*Defined in: std/mini.s line 22*

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

```rust
nat8(nat) -> (nat8)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

56. nat value too large to pack in nat8

# float
### float
*Defined in: builtins line 1*

```rust
float() -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### float - cast to float
*Defined in: std/core/convert.s line 95*

Converts a bit representation to the corresponding float number.

```rust
float(bits) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(nat) -> (float)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(int) -> (float)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### float - cast to float
*Defined in: std/core/convert.s line 20*

Serves as a tautology function for code that parses on multiple number types.

```rust
float(float) -> (float)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### float - reads a float from the console
*Defined in: std/core/convertstr.s line 80*

```rust
float(console) -> (float)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
23. unexpected end of console read
24. user input was not a float

### float - converts a string to a float
*Defined in: std/core/convertstr.s line 184*

```rust
float(str) -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

32. invalid float conversion from string with only a sign
33. invalid float conversion from non-number string
2. null pointer
34. invalid float conversion from string without a value after the dot
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
31. invalid float conversion from empty string

# bool
### bool - boolean value
*Defined in: builtins line 1*

Can only be `true` or `false`.

```rust
bool() -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# err
### err
*Defined by the compiler*

```rust
err() -> (err)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# blank
### blank - empty tuple
*Defined in: builtins line 1*

This is the type of non-existent variables, empty parantheses, and functions of no returns.

```rust
blank() -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# char
### char - a character
*Defined in: builtins line 1*

Represents characters in the numeric range `0 to 255`.

```rust
char() -> (char)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### char
*Defined in: std/core/convertstr.s line 24*

```rust
char(console) -> (char)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

23. unexpected end of console read

### char - treat as character
*Defined in: std/core/string.s line 112*

The first character of a string is extracted,
for example to write `c = char \"C\"`.

```rust
char(cstr) -> (char)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### char - treat as character
*Defined in: std/core/string.s line 106*

The first character of a string is extracted,
for example to write `c = char str \"C\"`.

```rust
char(str) -> (char)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# any
### any - any type
*Defined in: builtins line 1*

Represents a generic for buffers and pointers for type-independent code that can be matched to a concrete type later.
This type ordains special treatment by the compiler.

```rust
any() -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# eq
### eq - equals
*Defined in: std/core/bool.s line 82*

```rust
eq(bool value, false) -> (bool)
```
Level of abstraction:

1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/bool.s line 78*

```rust
eq(false, bool value) -> (bool)
```
Level of abstraction:

1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/bool.s line 74*

```rust
eq(bool value, true) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/bool.s line 70*

```rust
eq(true, bool value) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/bool.s line 51*

This is a compile-time operation that does not evoke any runtime booleans.

```rust
eq(false, true) -> (false)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/bool.s line 46*

This is a compile-time operation that does not evoke any runtime booleans.

```rust
eq(true, false) -> (false)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/bool.s line 41*

This is a compile-time operation that does not evoke any runtime booleans.

```rust
eq(false, false) -> (true)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/bool.s line 36*

This is a compile-time operation that does not evoke any runtime booleans.

```rust
eq(true, true) -> (true)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/bool.s line 20*

```rust
eq(bool x, bool y) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/numbers.s line 56*

Compares the address of two pointers.

```rust
eq(any ptr x, any ptr y) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/numbers.s line 40*

Compares two error messages. This comparison is
used only for comparing error messages produced
by the same running program.

```rust
eq(catch x, catch y) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/numbers.s line 26*

```rust
eq(nat x, nat y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/numbers.s line 26*

```rust
eq(int x, int y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/numbers.s line 26*

```rust
eq(float x, float y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/string.s line 228*

```rust
eq(cstr x, str) -> (bool)
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### eq - equals
*Defined in: std/core/string.s line 222*

```rust
eq(str, cstr y) -> (bool)
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### eq - equals
*Defined in: std/core/string.s line 212*

```rust
eq(str, str) -> (bool)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/string.s line 207*

```rust
eq(cstr x, cstr y) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### eq - equals
*Defined in: std/core/string.s line 119*

```rust
eq(char x, char y) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# neq
### neq - not equal
*Defined in: std/core/bool.s line 86*

```rust
neq(true x, bool y) -> (bool)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(false x, false y) -> (false)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(false x, true y) -> (true)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(true x, false y) -> (true)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(true x, true y) -> (false)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equal
*Defined in: std/core/bool.s line 25*

```rust
neq(bool x, bool y) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equal
*Defined in: std/core/numbers.s line 62*

Compares the address of two pointers.

```rust
neq(any ptr x, any ptr y) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equal
*Defined in: std/core/numbers.s line 48*

Compares two error messages. This comparison is
used only for comparing error messages produced
by the same running program.

```rust
neq(catch x, catch y) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equal
*Defined in: std/core/numbers.s line 33*

```rust
neq(nat x, nat y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equal
*Defined in: std/core/numbers.s line 33*

```rust
neq(int x, int y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equal
*Defined in: std/core/numbers.s line 33*

```rust
neq(float x, float y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equal
*Defined in: std/core/bool.s line 90*

```rust
neq(bool x, false y) -> (bool)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equal
*Defined in: std/core/bool.s line 90*

```rust
neq(bool x, true y) -> (bool)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equal
*Defined in: std/core/bool.s line 86*

```rust
neq(false x, bool y) -> (bool)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equals
*Defined in: std/core/string.s line 234*

```rust
neq(cstr x, cstr y) -> (bool)
```
Level of abstraction:

1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equals
*Defined in: std/core/string.s line 234*

```rust
neq(cstr x, str) -> (bool)
```
Level of abstraction:

1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### neq - not equals
*Defined in: std/core/string.s line 234*

```rust
neq(str, cstr y) -> (bool)
```
Level of abstraction:

1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### neq - not equals
*Defined in: std/core/string.s line 234*

```rust
neq(str, str) -> (bool)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)


### neq - not equals
*Defined in: std/core/string.s line 124*

```rust
neq(char x, char y) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# not
### not - logical inverse
*Defined in: std/core/bool.s line 61*

This is a compile-time operation on the compiler::false type rather than a runtime boolean.

```rust
not(false) -> (true)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### not - logical inverse
*Defined in: std/core/bool.s line 56*

This is a compile-time operation on the compiler::true type rather than a runtime boolean.

```rust
not(true) -> (false)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### not - logical inverse
*Defined in: std/core/bool.s line 30*

This operates on boolean values at runtime.

```rust
not(bool) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# Number
### nat - an unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### float
*Defined in: builtins line 1*

```rust
float() -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### int - a signed integer value
*Defined in: builtins line 1*

Represents values in the range `2^-63 to 2^63-1`.

```rust
int() -> (int)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# is\_different
### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(nat x, nat y) -> (false)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(nat x, int y) -> (true)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(nat x, float y) -> (true)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(int x, nat y) -> (true)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(int x, int y) -> (false)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(int x, float y) -> (true)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(float x, nat y) -> (true)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(float x, int y) -> (true)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(float x, float y) -> (false)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


# neg
### neg - negative of a number
*Defined in: std/core/numbers.s line 68*

```rust
neg(nat) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### neg - negative of a number
*Defined in: std/core/numbers.s line 68*

```rust
neg(int) -> (int)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### neg - negative of a number
*Defined in: std/core/numbers.s line 68*

```rust
neg(float) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# add
### add - add
*Defined in: std/core/numbers.s line 73*

Adds two numbers of the same type. This is an overload for the + operator.

```rust
add(nat x, nat y) -> (nat)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### add - add
*Defined in: std/core/numbers.s line 73*

Adds two numbers of the same type. This is an overload for the + operator.

```rust
add(int x, int y) -> (int)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### add - add
*Defined in: std/core/numbers.s line 73*

Adds two numbers of the same type. This is an overload for the + operator.

```rust
add(float x, float y) -> (float)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### add - pointer addition
*Defined in: std/unsafe.s line 54*

Adds a natural number offset to a pointer.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
add(any ptr allocated, nat offset) -> (any ptr {follows any ptr allocated})
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### add - concatenate two strings
*Defined in: std/core/string.s line 343*

The result is placed on an allocator effect CHARS.
This implementation ensures that consecutively allocated strings, or
adding to strings placed at the end of buffers, does not needlessly
copy memory. This way, consecutive additions do not copy the previous
result before appending to it. For example, consider the following:
```
CHARS = edit arena alloc 10
s1 = copy 123
s2 = copy 456
s3 = s1+s2
result = s3+copy(78)+copy(9)
```
The snippet fits the result in a contiguous area on the arena's buffer,
with only one copying operation for each character. This does not
magically optimize all copying operations, but it does makes most
convenient optimizatins when allocating and immediately concatenating.

```rust
add(edit arena, cstr _s1, cstr _s2) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 343*

The result is placed on an allocator effect CHARS.
This implementation ensures that consecutively allocated strings, or
adding to strings placed at the end of buffers, does not needlessly
copy memory. This way, consecutive additions do not copy the previous
result before appending to it. For example, consider the following:
```
CHARS = edit arena alloc 10
s1 = copy 123
s2 = copy 456
s3 = s1+s2
result = s3+copy(78)+copy(9)
```
The snippet fits the result in a contiguous area on the arena's buffer,
with only one copying operation for each character. This does not
magically optimize all copying operations, but it does makes most
convenient optimizatins when allocating and immediately concatenating.

```rust
add(edit arena, cstr _s1, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 343*

The result is placed on an allocator effect CHARS.
This implementation ensures that consecutively allocated strings, or
adding to strings placed at the end of buffers, does not needlessly
copy memory. This way, consecutive additions do not copy the previous
result before appending to it. For example, consider the following:
```
CHARS = edit arena alloc 10
s1 = copy 123
s2 = copy 456
s3 = s1+s2
result = s3+copy(78)+copy(9)
```
The snippet fits the result in a contiguous area on the arena's buffer,
with only one copying operation for each character. This does not
magically optimize all copying operations, but it does makes most
convenient optimizatins when allocating and immediately concatenating.

```rust
add(edit arena, str, cstr _s2) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 343*

The result is placed on an allocator effect CHARS.
This implementation ensures that consecutively allocated strings, or
adding to strings placed at the end of buffers, does not needlessly
copy memory. This way, consecutive additions do not copy the previous
result before appending to it. For example, consider the following:
```
CHARS = edit arena alloc 10
s1 = copy 123
s2 = copy 456
s3 = s1+s2
result = s3+copy(78)+copy(9)
```
The snippet fits the result in a contiguous area on the arena's buffer,
with only one copying operation for each character. This does not
magically optimize all copying operations, but it does makes most
convenient optimizatins when allocating and immediately concatenating.

```rust
add(edit arena, str, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 332*

The result is placed on an allocator effect CHARS.

```rust
add(edit list, cstr _s1, cstr _s2) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

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

### add - concatenate two strings
*Defined in: std/core/string.s line 332*

The result is placed on an allocator effect CHARS.

```rust
add(edit list, cstr _s1, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

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

### add - concatenate two strings
*Defined in: std/core/string.s line 332*

The result is placed on an allocator effect CHARS.

```rust
add(edit list, str, cstr _s2) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

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

### add - concatenate two strings
*Defined in: std/core/string.s line 332*

The result is placed on an allocator effect CHARS.

```rust
add(edit list, str, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

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

### add - concatenate two strings
*Defined in: std/core/string.s line 332*

The result is placed on an allocator effect CHARS.

```rust
add(edit circular, cstr _s1, cstr _s2) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 332*

The result is placed on an allocator effect CHARS.

```rust
add(edit circular, cstr _s1, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 332*

The result is placed on an allocator effect CHARS.

```rust
add(edit circular, str, cstr _s2) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 332*

The result is placed on an allocator effect CHARS.

```rust
add(edit circular, str, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 332*

The result is placed on an allocator effect CHARS.

```rust
add(new CHARS, cstr _s1, cstr _s2) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### add - concatenate two strings
*Defined in: std/core/string.s line 332*

The result is placed on an allocator effect CHARS.

```rust
add(new CHARS, cstr _s1, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### add - concatenate two strings
*Defined in: std/core/string.s line 332*

The result is placed on an allocator effect CHARS.

```rust
add(new CHARS, str, cstr _s2) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### add - concatenate two strings
*Defined in: std/core/string.s line 332*

The result is placed on an allocator effect CHARS.

```rust
add(new CHARS, str, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### add - vector addition
*Defined in: std/sci/vec.s line 88*

Grabs a FLOATS allocator effect to store the result.

```rust
add(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 88*

Grabs a FLOATS allocator effect to store the result.

```rust
add(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 88*

Grabs a FLOATS allocator effect to store the result.

```rust
add(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
2. null pointer
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### add - vector addition
*Defined in: std/sci/vec.s line 77*

Grabs a FLOATS allocator effect to store the result.

```rust
add(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 77*

Grabs a FLOATS allocator effect to store the result.

```rust
add(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 77*

Grabs a FLOATS allocator effect to store the result.

```rust
add(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 77*

Grabs a FLOATS allocator effect to store the result.

```rust
add(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### add - vector addition
*Defined in: std/sci/vec.s line 77*

Grabs a FLOATS allocator effect to store the result.

```rust
add(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
2. null pointer
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### add - vector addition
*Defined in: std/sci/vec.s line 77*

Grabs a FLOATS allocator effect to store the result.

```rust
add(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
10. allocation failed
61. different vector sizes
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# mul
### mul - multiply with
*Defined in: std/core/numbers.s line 81*

Multiplies two numbers of the same type. This is an overload for the * operator.

```rust
mul(nat x, nat y) -> (nat)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### mul - multiply with
*Defined in: std/core/numbers.s line 81*

Multiplies two numbers of the same type. This is an overload for the * operator.

```rust
mul(int x, int y) -> (int)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### mul - multiply with
*Defined in: std/core/numbers.s line 81*

Multiplies two numbers of the same type. This is an overload for the * operator.

```rust
mul(float x, float y) -> (float)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### mul - vector multiplication
*Defined in: std/sci/vec.s line 123*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
2. null pointer
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - vector multiplication
*Defined in: std/sci/vec.s line 112*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 112*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 112*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 112*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 112*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
2. null pointer
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - vector multiplication
*Defined in: std/sci/vec.s line 112*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
10. allocation failed
61. different vector sizes
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - vector multiplication
*Defined in: std/sci/vec.s line 123*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector multiplication
*Defined in: std/sci/vec.s line 123*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 71*

```rust
mul(edit circular, coo, mat) -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
69. inner dimensions must agree
17. does not fit in circular arena
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 71*

```rust
mul(edit arena, coo, mat) -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
69. inner dimensions must agree
16. arena is out of space
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 71*

```rust
mul(new FLOATS, coo, mat) -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
69. inner dimensions must agree
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 61*

*Warning: the expression `self(v)*m` yields wrong values

```rust
mul(edit circular, vec, coo) -> (mut vec) with effects FLOATS
```
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
68. vector length must match matrix rows
10. allocation failed
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 53*

```rust
mul(edit circular, coo, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
67. matrix columns must match vector length
10. allocation failed
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 119*

Grabs an allocator for the result as an effect.

```rust
mul(edit circular, mat, mat) -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
66. column out of bounds
2. null pointer
69. inner dimensions must agree
17. does not fit in circular arena
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 119*

Grabs an allocator for the result as an effect.

```rust
mul(edit arena, mat, mat) -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
66. column out of bounds
2. null pointer
69. inner dimensions must agree
16. arena is out of space
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 119*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, mat, mat) -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
66. column out of bounds
2. null pointer
69. inner dimensions must agree
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 107*

Grabs an allocator for the result as an effect.

```rust
mul(edit circular, vec, mat) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
68. vector length must match matrix rows
15. out of bounds
17. does not fit in circular arena
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 107*

Grabs an allocator for the result as an effect.

```rust
mul(edit arena, vec, mat) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
68. vector length must match matrix rows
15. out of bounds
16. arena is out of space
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 107*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, vec, mat) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
68. vector length must match matrix rows
10. allocation failed
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 95*

Grabs an allocator for the result as an effect.

```rust
mul(edit circular, mat, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
66. column out of bounds
67. matrix columns must match vector length
2. null pointer
15. out of bounds
17. does not fit in circular arena
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 95*

Grabs an allocator for the result as an effect.

```rust
mul(edit arena, mat, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
66. column out of bounds
67. matrix columns must match vector length
2. null pointer
15. out of bounds
16. arena is out of space
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 95*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, mat, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
2. null pointer
67. matrix columns must match vector length
66. column out of bounds
10. allocation failed
15. out of bounds


Returned values defer use of the following functions:
```rust
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
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

4. division by zero

### div - divide by
*Defined in: std/core/numbers.s line 89*

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

```rust
div(int x, int y) -> (int)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

4. division by zero

### div - divide by
*Defined in: std/core/numbers.s line 89*

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

```rust
div(float x, float y) -> (float)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

4. division by zero

### div - vector division
*Defined in: std/sci/vec.s line 160*

Grabs a FLOATS allocator effect to store the result.

```rust
div(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
4. division by zero
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s line 160*

Grabs a FLOATS allocator effect to store the result.

```rust
div(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
4. division by zero
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s line 160*

Grabs a FLOATS allocator effect to store the result.

```rust
div(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
2. null pointer
4. division by zero
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### div - vector division
*Defined in: std/sci/vec.s line 148*

Grabs a FLOATS allocator effect to store the result.

```rust
div(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
4. division by zero
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s line 148*

Grabs a FLOATS allocator effect to store the result.

```rust
div(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
4. division by zero
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s line 148*

Grabs a FLOATS allocator effect to store the result.

```rust
div(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
4. division by zero
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s line 148*

Grabs a FLOATS allocator effect to store the result.

```rust
div(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
4. division by zero
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### div - vector division
*Defined in: std/sci/vec.s line 148*

Grabs a FLOATS allocator effect to store the result.

```rust
div(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
2. null pointer
4. division by zero
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### div - vector division
*Defined in: std/sci/vec.s line 148*

Grabs a FLOATS allocator effect to store the result.

```rust
div(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
10. allocation failed
61. different vector sizes
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# mod
### mod - modulo by
*Defined in: std/core/numbers.s line 101*

Computes the modulo between two natural numbers. This is an overload for the % operator.

```rust
mod(nat x, nat y) -> (nat)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

5. modulo by zero

# lt
### lt - less than
*Defined in: std/core/numbers.s line 110*

Compares two numbers of the same type. This is an overload for the < operator.

```rust
lt(nat x, nat y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### lt - less than
*Defined in: std/core/numbers.s line 110*

Compares two numbers of the same type. This is an overload for the < operator.

```rust
lt(int x, int y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### lt - less than
*Defined in: std/core/numbers.s line 110*

Compares two numbers of the same type. This is an overload for the < operator.

```rust
lt(float x, float y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


# gt
### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s line 118*

greater than

```rust
gt(nat x, nat y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s line 118*

greater than

```rust
gt(int x, int y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s line 118*

greater than

```rust
gt(float x, float y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


# le
### le - less than or equal to
*Defined in: std/core/numbers.s line 126*

Compares two numbers of the same type. This is an overload for the <= operator.

```rust
le(nat x, nat y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### le - less than or equal to
*Defined in: std/core/numbers.s line 126*

Compares two numbers of the same type. This is an overload for the <= operator.

```rust
le(int x, int y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### le - less than or equal to
*Defined in: std/core/numbers.s line 126*

Compares two numbers of the same type. This is an overload for the <= operator.

```rust
le(float x, float y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


# ge
### ge - greater than or equal to
*Defined in: std/core/numbers.s line 134*

Compares two numbers of the same type. This is an overload for the >= operator.

```rust
ge(nat x, nat y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### ge - greater than or equal to
*Defined in: std/core/numbers.s line 134*

Compares two numbers of the same type. This is an overload for the >= operator.

```rust
ge(int x, int y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### ge - greater than or equal to
*Defined in: std/core/numbers.s line 134*

Compares two numbers of the same type. This is an overload for the >= operator.

```rust
ge(float x, float y) -> (bool)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


# sub
### sub - subtract by
*Defined in: std/core/numbers.s line 142*

Subtracts two numbers of the same type. This is an overload for the - operator.
Natural numbers are safeguarded against acquiring negative results, which would overflow.

```rust
sub(nat x, nat y) -> (nat)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

6. nat subtraction would yield a negative

### sub - subtract by
*Defined in: std/core/numbers.s line 142*

Subtracts two numbers of the same type. This is an overload for the - operator.

```rust
sub(int x, int y) -> (int)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### sub - subtract by
*Defined in: std/core/numbers.s line 142*

Subtracts two numbers of the same type. This is an overload for the - operator.

```rust
sub(float x, float y) -> (float)
```
Level of abstraction:

0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)


### sub - vector subtraction
*Defined in: std/sci/vec.s line 104*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 104*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 104*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
2. null pointer
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### sub - vector subtraction
*Defined in: std/sci/vec.s line 93*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 93*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 93*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 93*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### sub - vector subtraction
*Defined in: std/sci/vec.s line 93*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
2. null pointer
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### sub - vector subtraction
*Defined in: std/sci/vec.s line 93*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
10. allocation failed
61. different vector sizes
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# pow
### pow - exponentiate by
*Defined in: std/core/numbers.s line 154*

Exponentiates a natural number by another.

```rust
pow(nat x, nat y) -> (mut nat)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


### pow
*Defined in: std/sci/math.s line 89*

```rust
pow(float x, float y) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 140*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 140*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 140*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
2. null pointer
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### pow - vector exponentiation
*Defined in: std/sci/vec.s line 129*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 129*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 129*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 129*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
61. different vector sizes
15. out of bounds

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 129*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
2. null pointer
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### pow - vector exponentiation
*Defined in: std/sci/vec.s line 129*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
10. allocation failed
61. different vector sizes
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
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
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# unsafe\_console
### unsafe\_console - references the system console unsafely
*Defined in: std/core/print.s line 35*

This is convenient for print debugging by writing `unsafe_console().print ...`
without needing to evoke an effect to pass the normally singleton console.

```rust
unsafe_console() -> (console)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


# print
### print - prints a boolean
*Defined in: std/core/print.s line 97*

Automatically ends the line too.

```rust
print(console CLI, false) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - prints a boolean
*Defined in: std/core/print.s line 97*

```rust
print(console CLI, false, cstr endl) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - prints a boolean
*Defined in: std/core/print.s line 90*

Automatically ends the line too.

```rust
print(console CLI, true) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - prints a boolean
*Defined in: std/core/print.s line 90*

```rust
print(console CLI, true, cstr endl) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - prints a boolean
*Defined in: std/core/print.s line 83*

Automatically ends the line too.

```rust
print(console CLI, bool value) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - prints a boolean
*Defined in: std/core/print.s line 83*

```rust
print(console CLI, bool value, cstr endl) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - prints an unsigned integer
*Defined in: std/core/print.s line 76*

Automatically ends the line too.

```rust
print(console CLI, nat value) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - prints an unsigned integer
*Defined in: std/core/print.s line 76*

```rust
print(console CLI, nat value, cstr endl) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - prints an integer
*Defined in: std/core/print.s line 69*

Automatically ends the line too.

```rust
print(console CLI, int value) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - prints an integer
*Defined in: std/core/print.s line 69*

```rust
print(console CLI, int value, cstr endl) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - prints a float
*Defined in: std/core/print.s line 61*

To pre-specified 6 decimal digits.
Automatically ends the line too.

```rust
print(console CLI, float value) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - prints a float
*Defined in: std/core/print.s line 61*

To pre-specified 6 decimal digits.

```rust
print(console CLI, float value, cstr endl) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - prints a cstr
*Defined in: std/core/print.s line 54*

Automatically ends the line too.

```rust
print(console CLI, cstr value) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - prints a cstr
*Defined in: std/core/print.s line 54*

```rust
print(console CLI, cstr value, cstr endl) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - flushes the print buffer on the console
*Defined in: std/core/print.s line 43*

```rust
print(console CLI, "flush") -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - print a character
*Defined in: std/core/string.s line 266*

Ends the line too.

```rust
print(console CLI, char c) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - print a character
*Defined in: std/core/string.s line 266*

```rust
print(console CLI, char c, cstr endl) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - print a string
*Defined in: std/core/string.s line 255*

Ends the line too.

```rust
print(console CLI, str) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - print a string
*Defined in: std/core/string.s line 255*

```rust
print(console CLI, str, cstr endl) -> () with effects CLI
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### print - print a vector
*Defined in: std/sci/vec.s line 238*

Prints as a row, such as [ 1.0  2.0  3.0 ]

```rust
print(console CLI, vec) -> () with effects CLI
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds

### print - print a vector
*Defined in: std/sci/vec.s line 238*

Prints as a row, such as [ 1.0  2.0  3.0 ]

```rust
print(console CLI, vec, cstr endl) -> () with effects CLI
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds

### print - print sparse matrix
*Defined in: std/sci/coo.s line 87*

Prints it as coordinate as list: (i, j): v

```rust
print(console CLI, coo) -> () with effects CLI
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### print - print sparse matrix
*Defined in: std/sci/coo.s line 87*

Prints it as coordinate as list: (i, j): v

```rust
print(console CLI, coo, cstr endl) -> () with effects CLI
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s line 133*

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

```rust
print(console CLI, mat) -> () with effects CLI
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
66. column out of bounds
2. null pointer
6. nat subtraction would yield a negative

### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s line 133*

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

```rust
print(console CLI, mat, cstr endl) -> () with effects CLI
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
66. column out of bounds
2. null pointer
6. nat subtraction would yield a negative

# nn
### nn - no new line
*Defined in: std/core/print.s line 47*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(nat) -> (nat value, cstr)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nn - no new line
*Defined in: std/core/print.s line 47*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(int) -> (int value, cstr)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nn - no new line
*Defined in: std/core/print.s line 47*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(float) -> (float value, cstr)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nn - no new line
*Defined in: std/core/print.s line 47*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(cstr) -> (cstr value, cstr)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nn - no new line
*Defined in: std/core/string.s line 325*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without a new line.

```rust
nn(str) -> (str, cstr)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nn - no new line
*Defined in: std/sci/vec.s line 231*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without a new line.

```rust
nn(vec) -> (vec, cstr)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# supports\_ansi
### supports\_ansi
*Defined in: std/core/print.s line 104*

```rust
supports_ansi(console) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[supports_ansi()]`*
# colors
### colors
*Defined in: std/core/print.s line 109*

```rust
colors(console) -> (colors)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)



Returned values defer use of the following functions:
```rust
```
# set
### set
*Defined in: std/core/print.s line 168*

```rust
set(colors, "blink") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 166*

```rust
set(colors, "underline") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 164*

```rust
set(colors, "italic") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 162*

```rust
set(colors, "dim") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 160*

```rust
set(colors, "bold") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 158*

```rust
set(colors, "bg_black") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 156*

```rust
set(colors, "bg_white") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 154*

```rust
set(colors, "bg_cyan") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 152*

```rust
set(colors, "bg_magenta") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 150*

```rust
set(colors, "bg_blue") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 148*

```rust
set(colors, "bg_yellow") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 146*

```rust
set(colors, "bg_green") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 144*

```rust
set(colors, "bg_red") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 142*

```rust
set(colors, "bright_white") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 140*

```rust
set(colors, "bright_cyan") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 138*

```rust
set(colors, "bright_magenta") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 136*

```rust
set(colors, "bright_blue") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 134*

```rust
set(colors, "bright_yellow") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 132*

```rust
set(colors, "bright_green") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 130*

```rust
set(colors, "bright_red") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 128*

```rust
set(colors, "black") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 126*

```rust
set(colors, "white") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 124*

```rust
set(colors, "cyan") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 122*

```rust
set(colors, "magenta") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 120*

```rust
set(colors, "blue") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 118*

```rust
set(colors, "yellow") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 116*

```rust
set(colors, "green") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 114*

```rust
set(colors, "red") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 182*

```rust
set(colors, "reset_underline") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 180*

```rust
set(colors, "reset_bold") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 178*

```rust
set(colors, "reset_bg") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 176*

```rust
set(colors, "reset_color") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 174*

```rust
set(colors, "reset") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 172*

```rust
set(colors, "strikethrough") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### set
*Defined in: std/core/print.s line 170*

```rust
set(colors, "reverse") -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# exists
### exists - checks that a pointer exists
*Defined in: std/core/convert.s line 58*

```rust
exists(any ptr) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### exists - checks whether a cstr is not zero-initialized
*Defined in: std/core/string.s line 30*

```rust
exists(cstr) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### exists
*Defined in: std/graphics.s line 153*

```rust
exists(Texture) -> (bool)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


# bits
### bits - bit representation
*Defined in: std/core/convert.s line 76*

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

```rust
bits(float) -> (bits)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### bits - bit representation
*Defined in: std/core/convert.s line 69*

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

```rust
bits(int) -> (bits)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### bits - bit representation
*Defined in: std/core/convert.s line 63*

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

```rust
bits(nat) -> (bits)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# lshift
### lshift - left shift
*Defined in: std/core/convert.s line 102*

```rust
lshift(bits, nat y) -> (bits)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


# rshift
### rshift - right shift
*Defined in: std/core/convert.s line 107*

```rust
rshift(bits, nat y) -> (bits)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


# xor
### xor - bitwise xor
*Defined in: std/core/convert.s line 112*

```rust
xor(bits, bits) -> (bits)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


# band
### band - bitwise and
*Defined in: std/core/convert.s line 117*

```rust
band(bits, bits) -> (bits)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


# bor
### bor - bitwise or
*Defined in: std/core/convert.s line 122*

```rust
bor(bits, bits) -> (bits)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


# of
### of - yields a pair of nats
*Defined in: std/core/range.s line 34*

Represents the range [from, from+length] where 'from' and 'length' are the arguments.

```rust
of(nat from, "len", nat length) -> (nat from, nat)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


### of - yields a pair of nats
*Defined in: std/core/range.s line 29*

Represents the range [from, to] where 'from' and 'to' are the arguments.

```rust
of(nat from, "upto", nat to) -> (nat from, nat)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


### of - yields a pair of nats
*Defined in: std/core/range.s line 24*

Represents the range [from, to) where 'from' and 'to' are the arguments.

```rust
of(nat from, "to", nat to) -> (nat from, nat to)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### of - yields a pair of nats
*Defined in: std/core/range.s line 19*

Represents the range [0, to) where 'to' its  its arguments.

```rust
of(nat) -> (nat, nat to)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# range
### range - constructs a range
*Defined in: std/core/range.s line 39*

Endpoints are natural numbers (unsigned integers). This is handy for several kinds of iteration.

```rust
range(nat _from, nat to) -> (edit range)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# next
### next - next range number
*Defined in: std/core/range.s line 45*

This increments the r.from position and returns the previous one.

```rust
next(edit range) -> (nat)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

9. iteration end

### next
*Defined in: std/map.s line 54*

```rust
next(robinhood_nat_entry[], mut nat pos) -> (mut nat)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### next
*Defined in: std/map.s line 54*

```rust
next(robinhood_str_entry[], mut nat pos) -> (mut str)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### next - Computes the next random number of a Rand sequence.
*Defined in: std/rand.s line 88*

```rust
next(mut Rand) -> (float)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


# get
### get - get a list element pointer
*Defined in: std/core/allocators.s line 92*

```rust
get(circular, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```
Level of abstraction:

2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### get - get a list element pointer
*Defined in: std/core/allocators.s line 63*

```rust
get(arena, nat pos) -> (any ptr {follows any ptr l.buf.unsafe_ptr})
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### get - immutable pointer to buffer element
*Defined in: std/core/array.s line 93*

```rust
get(any[], nat i) -> (any ptr {follows any ptr buffer.unsafe_ptr})
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### get - assert that a number plus range start lies in the range
*Defined in: std/core/range.s line 54*

The item itself is returned. This lets the range be used as an iterator
per a pattern like `for i in range 10 ...`.

```rust
get(range, nat _pos) -> (nat)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

9. iteration end

### get - a character in a string
*Defined in: std/core/string.s line 262*

```rust
get(str, nat i) -> (char ptr)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


### get - get a list element pointer
*Defined in: std/core/allocators.s line 92*

```rust
get(list, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### get - get a list element pointer
*Defined in: std/core/allocators.s line 92*

```rust
get(list, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### get - get a hash map entry
*Defined in: std/map.s line 44*

Implemented for string or cstr keys but buffer of any values.

```rust
get(robinhood_nat_entry[], any[], nat key) -> (any ptr {follows any ptr values.unsafe_ptr})
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
54. index not found
15. out of bounds

### get - get a hash map entry
*Defined in: std/map.s line 34*

Implemented for string or cstr keys but buffer of any values.

```rust
get(robinhood_str_entry[], any[], str) -> (any ptr {follows any ptr values.unsafe_ptr})
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
54. index not found
15. out of bounds

### get - get a hash map entry
*Defined in: std/map.s line 34*

Implemented for string or cstr keys but buffer of any values.

```rust
get(robinhood_str_entry[], any[], cstr key) -> (any ptr {follows any ptr values.unsafe_ptr})
```
Level of abstraction:

1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
5. modulo by zero
6. nat subtraction would yield a negative
54. index not found
15. out of bounds

### get
*Defined in: std/io.s line 26*

```rust
get(edit circular, edit open, nat) -> (str) with effects CHARS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds

### get
*Defined in: std/io.s line 26*

```rust
get(edit circular, edit terminal, nat) -> (str) with effects CHARS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 26*

```rust
get(edit circular, edit write, nat) -> (str) with effects CHARS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 26*

```rust
get(edit circular, edit write, nat) -> (str) with effects CHARS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 26*

```rust
get(edit circular, edit open, nat) -> (str) with effects CHARS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 26*

```rust
get(edit circular, edit open, nat) -> (str) with effects CHARS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 26*

```rust
get(edit arena, edit open, nat) -> (str) with effects CHARS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds

### get
*Defined in: std/io.s line 26*

```rust
get(edit arena, edit terminal, nat) -> (str) with effects CHARS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 26*

```rust
get(edit arena, edit write, nat) -> (str) with effects CHARS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 26*

```rust
get(edit arena, edit write, nat) -> (str) with effects CHARS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 26*

```rust
get(edit arena, edit open, nat) -> (str) with effects CHARS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 26*

```rust
get(edit arena, edit open, nat) -> (str) with effects CHARS
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
38. end of file
6. nat subtraction would yield a negative
15. out of bounds
47. not open file

### get
*Defined in: std/io.s line 23*

```rust
get(edit open, nat) -> (str)
```
Level of abstraction:

2 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
52. not open dir
53. end of dir
18. can only define strings on contiguous buffers
15. out of bounds

### get - get a vector element at given position
*Defined in: std/sci/vec.s line 66*

```rust
get(vec, nat i) -> (float ptr)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### get - get a sparse element
*Defined in: std/sci/coo.s line 43*

```rust
get(coo, nat k) -> (sparse_element ptr)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### get - reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 65*

```rust
get(mat, nat i, nat j) -> (float ptr)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
66. column out of bounds

# KB
### KB - kilobytes to bytes
*Defined in: std/core/units.s line 19*

```rust
KB(nat) -> (nat)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


# MB
### MB - megabytes to bytes
*Defined in: std/core/units.s line 23*

```rust
MB(nat) -> (nat)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


# GB
### GB - gigabytes to bytes
*Defined in: std/core/units.s line 27*

```rust
GB(nat) -> (nat)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


# alloc
### alloc - allocate a char[] buffer
*Defined in: std/core/array.s line 59*

```rust
alloc(nat) -> (edit char[])
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.
This version allocates a buffer of ONE element, which can be used for stable indirection.

```rust
alloc(edit any[]) -> (edit any[])
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.
This version allocates a buffer of ONE element, which can be used for stable indirection.

```rust
alloc(edit any[], "unsafe_leaky") -> (edit any[])
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.
This version allocates a buffer of ONE element, which can be used for stable indirection.

```rust
alloc(edit any[], "dirty") -> (edit any[])
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.
This version allocates a buffer of ONE element, which can be used for stable indirection.

```rust
alloc(edit any[], "dirty", "unsafe_leaky") -> (edit any[])
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.
This version allocates a buffer of ONE element, which can be used for stable indirection.

```rust
alloc(edit any[], "unsafe_first") -> (edit any[])
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.
This version allocates a buffer of ONE element, which can be used for stable indirection.

```rust
alloc(edit any[], "unsafe_first", "unsafe_leaky") -> (edit any[])
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size) -> (edit any[])
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size, "unsafe_leaky") -> (edit any[])
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size, "dirty") -> (edit any[])
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size, "dirty", "unsafe_leaky") -> (edit any[])
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size, "unsafe_first") -> (edit any[])
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use 'buffer.resize new_size' once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size, "unsafe_first", "unsafe_leaky") -> (edit any[])
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocate memory
*Defined in: std/unsafe.s line 19*

Allocates a memory of the provided size in bytes.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
alloc(nat) -> (mut any ptr)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed

### alloc
*Defined in: std/core/string.s line 26*

```rust
alloc(new CHARS, nat length) -> (edit allocated) with effects CHARS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - list allocation
*Defined in: std/core/allocators.s line 127*

Creates room for one element.

```rust
alloc(edit list) -> (edit allocated)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

11. reallocation failed
4. division by zero
14. cannot resize an unallocated or freed buffer

### alloc - list allocation
*Defined in: std/core/allocators.s line 127*

```rust
alloc(edit list, nat length) -> (edit allocated)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

11. reallocation failed
4. division by zero
14. cannot resize an unallocated or freed buffer

### alloc - list allocation
*Defined in: std/core/allocators.s line 127*

Creates room for one element.

```rust
alloc(edit list) -> (edit allocated)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

11. reallocation failed
4. division by zero
14. cannot resize an unallocated or freed buffer

### alloc - list allocation
*Defined in: std/core/allocators.s line 127*

```rust
alloc(edit list, nat length) -> (edit allocated)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

11. reallocation failed
4. division by zero
14. cannot resize an unallocated or freed buffer

### alloc - circular arena allocation
*Defined in: std/core/allocators.s line 113*

Creates room for one element.

```rust
alloc(edit circular) -> (edit allocated)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena

### alloc - circular arena allocation
*Defined in: std/core/allocators.s line 113*

```rust
alloc(edit circular, nat length) -> (edit allocated)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena

### alloc - arena allocation
*Defined in: std/core/allocators.s line 102*

Creates room for one element.

```rust
alloc(edit arena) -> (edit allocated)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space

### alloc - arena allocation
*Defined in: std/core/allocators.s line 102*

```rust
alloc(edit arena, nat length) -> (edit allocated)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space

### alloc
*Defined in: std/tag.s line 40*

```rust
alloc(cstr) -> (mut char[])
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
71. empty input name
72. cannot tag a structural type
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc
*Defined in: std/tag.s line 40*

```rust
alloc(cstr surface, cstr obj) -> (mut char[])
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
71. empty input name
72. cannot tag a structural type
73. tag surface cannot be structural type
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# resize
### resize - resize the buffer
*Defined in: std/core/array.s line 63*

For stability of data structures, this does nothing if the previous size is the same or less.
If old size was zero, an error is created instead of allocating so that this does not leak
resources.

```rust
resize(edit any[], nat size) -> (edit any[])
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

11. reallocation failed
14. cannot resize an unallocated or freed buffer

### resize - resize the buffer
*Defined in: std/core/array.s line 63*

For stability of data structures, this does nothing if the previous size is the same or less.
If old size was zero, an error is created instead of allocating so that this does not leak
resources.

```rust
resize(edit any[], nat size, "unsafe") -> (edit any[])
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

11. reallocation failed

# last
### last - mutable pointer to the last buffer element
*Defined in: std/core/array.s line 81*

```rust
last(edit any[]) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

6. nat subtraction would yield a negative
15. out of bounds

# mutget
### mutget - get a mutable list element pointer
*Defined in: std/core/allocators.s line 68*

```rust
mutget(edit arena, nat pos) -> (mut any ptr {follows any ptr l.buf.unsafe_ptr})
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### mutget - mutable pointer to buffer element
*Defined in: std/core/array.s line 87*

```rust
mutget(edit any[], nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 98*

```rust
mutget(edit list, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```
Level of abstraction:

2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 98*

```rust
mutget(edit list, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```
Level of abstraction:

2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 98*

```rust
mutget(edit circular, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```
Level of abstraction:

2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### mutget - get a mutable hash map entry
*Defined in: std/map.s line 49*

Implemented for string or cstr keys but buffer of any values.

```rust
mutget(edit robinhood_nat_entry[], edit any[], nat key) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
55. string buffer is full
15. out of bounds

### mutget - get a mutable hash map entry
*Defined in: std/map.s line 39*

Implemented for string or cstr keys but buffer of any values.

```rust
mutget(edit robinhood_str_entry[], edit any[], str) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
55. string buffer is full
15. out of bounds

### mutget - get a mutable hash map entry
*Defined in: std/map.s line 39*

Implemented for string or cstr keys but buffer of any values.

```rust
mutget(edit robinhood_str_entry[], edit any[], cstr key) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
5. modulo by zero
6. nat subtraction would yield a negative
55. string buffer is full
15. out of bounds

### mutget - modify a vector element at given position
*Defined in: std/sci/vec.s line 61*

```rust
mutget(edit vec, nat i) -> (mut float ptr)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### mutget - mutable reference to a sparse element
*Defined in: std/sci/coo.s line 48*

```rust
mutget(edit coo, nat k) -> (mut sparse_element ptr)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### mutget - mutable reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 59*

```rust
mutget(edit mat, nat i, nat j) -> (mut float ptr)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
66. column out of bounds

# len
### len
*Defined in: std/core/allocators.s line 89*

```rust
len(list) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### len
*Defined in: std/core/allocators.s line 89*

```rust
len(list) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### len - the number of buffer elements
*Defined in: std/core/array.s line 99*

```rust
len(any[]) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### len - string length
*Defined in: std/core/string.s line 102*

```rust
len(str) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### len - vectot length
*Defined in: std/sci/vec.s line 57*

```rust
len(vec) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# new
### new - allocations on new bufs
*Defined in: std/core/allocators.s line 21*

```rust
new() -> (new)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# arena
### arena - a buffer and mutable position pair
*Defined in: std/core/allocators.s line 37*

The position starts from 0. This structure is often used
to track the size of allocated data within the buffer.
Contrary to circular buffers, arenas are not freed automatically
and therefore eventually run out of space. However, they come
with data integrity guarantees. Attach a garbage
collector to an arena per `gc arena alloc 4` (or construct it
with another allocator).

```rust
arena(edit any[]) -> (edit arena)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### arena - a buffer and mutable position pair
*Defined in: std/core/allocators.s line 25*

This structure is often used to track the size of allocated
data within the buffer.
Contrary to circular buffers, arenas are not freed automatically
and therefore eventually run out of space. However, they come
with data integrity guarantees. Attach a garbage
collector to an arena per `gc arena alloc 4` (or construct it
with another allocator).

```rust
arena(edit any[], nat _pos) -> (edit arena)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/core/string.s line 23*

```rust
arena("char__t9t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t2615t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t2549t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t2270t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t622t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t580t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t576t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t572t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t4t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 257*

```rust
arena(edit vec) -> (edit arena)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


# length
### length - allocated arena size
*Defined in: std/core/allocators.s line 48*

This is not the total arena size, but rather the number
of elements actively in use.

```rust
length(arena) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# allocated
### allocated
*Defined in: std/core/allocators.s line 54*

```rust
allocated(edit any[], nat pos) -> (edit allocated)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# status
### status - convert to a nameless buffer and position pair
*Defined in: std/core/allocators.s line 57*

This unpacking is used to pass an arena's state or allocated
memory data as part of structural input.

```rust
status(allocated) -> (any[] {follows any ptr self.buf.unsafe_ptr}, nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### status - convert to a nameless buffer and position pair
*Defined in: std/core/allocators.s line 57*

This unpacking is used to pass an arena's state or allocated
memory data as part of structural input.

```rust
status(arena) -> (any[] {follows any ptr self.buf.unsafe_ptr}, nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# circular
### circular - circular buffer
*Defined in: std/core/allocators.s line 73*

```rust
circular(edit any[]) -> (edit circular)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/core/string.s line 24*

```rust
circular("char__t9t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t2615t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t2549t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t2270t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t622t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t580t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t576t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t572t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t4t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


# list
### list - list buffer management
*Defined in: std/core/allocators.s line 78*

List defined over a mutable buf that is automatically managed and resized.
A capacity is maintained so that resizes are not performed too frequently.

```rust
list(edit any[], "external") -> (edit list)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### list - list buffer management
*Defined in: std/core/allocators.s line 78*

List defined over a mutable buf that is automatically managed and resized.
A capacity is maintained so that resizes are not performed too frequently.

```rust
list(edit any[]) -> (edit list)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### list
*Defined in: std/core/string.s line 25*

```rust
list("char__t9t") -> (edit list)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t2615t") -> (edit list)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t2549t") -> (edit list)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t2270t") -> (edit list)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t622t") -> (edit list)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t580t") -> (edit list)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t576t") -> (edit list)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t572t") -> (edit list)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t4t") -> (edit list)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# at
### at - get a mutable pointer to the last buffer element
*Defined in: std/core/allocators.s line 139*

```rust
at(edit allocated) -> (mut any ptr {follows any ptr surface.buf.unsafe_ptr})
```
Level of abstraction:

2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

15. out of bounds

### at - find or add an item in a robinhood_entry list
*Defined in: std/hash.s line 88*

```rust
at(edit robinhood_nat_entry[], nat _k) -> (mut nat)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
55. string buffer is full
15. out of bounds

### at - find or add an item in a robinhood_entry list
*Defined in: std/hash.s line 88*

```rust
at(edit robinhood_str_entry[], str) -> (mut nat)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
55. string buffer is full
15. out of bounds

### at - find or add an item in a robinhood_entry list
*Defined in: std/hash.s line 88*

```rust
at(edit robinhood_str_entry[], cstr _k) -> (mut nat)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

18. can only define strings on contiguous buffers
2. null pointer
19. can only define strings on non-offset buffers
5. modulo by zero
6. nat subtraction would yield a negative
55. string buffer is full
15. out of bounds

### at
*Defined in: std/sci/vec.s line 74*

```rust
at(vec, nat i) -> (float)
```
Level of abstraction:

2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### at
*Defined in: std/sci/vec.s line 71*

```rust
at(float number, nat i) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# slice
### slice - get a substring view into a string
*Defined in: std/core/string.s line 273*

This operation does not perform any additional allocations
or memory moves and is thus convenient for parsing code.
Explicitly copy the result to move it away from volatile
memory, such as circular buffers.

```rust
slice(str, nat from, nat to) -> (str)
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds
6. nat subtraction would yield a negative
15. out of bounds

### slice - get a substring view into a string
*Defined in: std/core/string.s line 273*

This operation does not perform any additional allocations
or memory moves and is thus convenient for parsing code.
Explicitly copy the result to move it away from volatile
memory, such as circular buffers.

```rust
slice(cstr _s, nat from, nat to) -> (str)
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds
6. nat subtraction would yield a negative
15. out of bounds

### slice - a buffer subregion of an arena
*Defined in: std/core/allocators.s line 147*

This allocates a region of a given number of elements
within an arena and returns a buffer interface wrapping
it. It is an alternative to allocating buffers on the
heap.

```rust
slice(edit arena, nat length) -> (mut any[] {follows any ptr surface.buf.unsafe_ptr})
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space

# char\_allocator
### new - allocations on new bufs
*Defined in: std/core/allocators.s line 21*

```rust
new() -> (new)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### list
*Defined in: std/core/string.s line 25*

```rust
list("char__t9t") -> (edit list)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### circular
*Defined in: std/core/string.s line 24*

```rust
circular("char__t9t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/core/string.s line 23*

```rust
arena("char__t9t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


# strdat
### strdat - string data without the buffer storage
*Defined in: std/core/string.s line 35*

```rust
strdat(nat pos, nat length, char first) -> (nat pos, nat length, char first)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### strdat
*Defined in: std/mini.s line 57*

```rust
strdat(nat _pos, nat _length) -> (nat16 pos, nat16 length)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

57. nat value too large to pack in nat16

# str
### str - reads a string from the console
*Defined in: std/core/convertstr.s line 114*

The read string is placed onto memory that keeps being reallocated to accommodate its size.
The resulting memory will consume exactly the required size in bytes.

```rust
str(new CHARS, console console) -> (str) with effects CHARS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
10. allocation failed
11. reallocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
14. cannot resize an unallocated or freed buffer
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
23. unexpected end of console read


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### str - convert to string
*Defined in: std/core/string.s line 91*

Defines an implicit constant buffer using the cstr's memory data.
Subsequent comparisons no longer use the underlying pointer value.

```rust
str(cstr) -> (str)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 55*

```rust
str(char[]) -> (str)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds

### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 55*

```rust
str(char[], nat length) -> (str)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 48*

```rust
str(char[], nat dat.pos, nat dat.length, char dat.first) -> (str)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### str - a string residing on a buffer
*Defined in: std/core/string.s line 43*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### str - a string residing on a buffer
*Defined in: std/core/string.s line 39*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### str - reads a string from the console
*Defined in: std/core/convertstr.s line 114*

The read string is placed on an arena while consuming only the necessarily minimum size.

```rust
str(edit arena, console console) -> (str) with effects CHARS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
23. unexpected end of console read
25. read string does not fit on buffer

### str - create a compact str
*Defined in: std/mini.s line 70*

The created str variation should be used only for storng and
retrieving data with 'unpack' for memory efficiency.

```rust
str(cstr) -> (str)
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
57. nat value too large to pack in nat16
15. out of bounds

### str - create a compact str
*Defined in: std/mini.s line 62*

The created str variation should be used only for storng and
retrieving data with 'unpack' for memory efficiency.

```rust
str(str) -> (str)
```
Level of abstraction:

2 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

57. nat value too large to pack in nat16

# copy
### copy
*Defined in: std/core/string.s line 385*

```rust
copy(edit list, nat n) -> (str) with effects CHARS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
5. modulo by zero
6. nat subtraction would yield a negative
11. reallocation failed
14. cannot resize an unallocated or freed buffer
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy
*Defined in: std/core/string.s line 385*

```rust
copy(edit circular, nat n) -> (str) with effects CHARS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
5. modulo by zero
6. nat subtraction would yield a negative
15. out of bounds
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy
*Defined in: std/core/string.s line 385*

```rust
copy(edit arena, nat n) -> (str) with effects CHARS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
5. modulo by zero
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy
*Defined in: std/core/string.s line 385*

```rust
copy(new CHARS, nat n) -> (str) with effects CHARS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
5. modulo by zero
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(edit list, cstr _other) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
11. reallocation failed
14. cannot resize an unallocated or freed buffer
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(edit list, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
15. out of bounds

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(edit circular, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(edit arena, cstr _other) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
15. out of bounds

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(edit arena, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(new CHARS, cstr _other) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### copy - copy a string to a new buffer
*Defined in: std/core/string.s line 129*

```rust
copy(new CHARS, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### copy - copy a vector
*Defined in: std/sci/vec.s line 249*

Grabs a FLOATS for the result as an effect.

```rust
copy(edit circular, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### copy - copy a vector
*Defined in: std/sci/vec.s line 249*

Grabs a FLOATS for the result as an effect.

```rust
copy(edit arena, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
2. null pointer
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets
15. out of bounds

### copy - copy a vector
*Defined in: std/sci/vec.s line 249*

Grabs a FLOATS for the result as an effect.

```rust
copy(new FLOATS, vec) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
2. null pointer
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# copy\_null\_terminated
### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s line 238*

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

```rust
copy_null_terminated(edit arena, cstr _other) -> (str) with effects CHARS
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
21. string buffer out of memory
15. out of bounds

### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s line 238*

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

```rust
copy_null_terminated(edit arena, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
21. string buffer out of memory

### copy\_null\_terminated - create null terminated string
*Defined in: std/core/string.s line 137*

Copies a string to a new buffer while ensuring null termination.
This is mainly useful for supporting 'cstr unsafe_temp'.

```rust
copy_null_terminated(new CHARS, str) -> (str) with effects CHARS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# unsafe\_temp
### unsafe\_temp - tautology function for cstr
*Defined in: std/core/string.s line 189*

This is mainly used as a stt-input counterpart for converting str|cstr to cstr.

```rust
unsafe_temp(cstr) -> (cstr cstr, str)
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### unsafe\_temp - convert a string to a temporary null-terminated (cstr,str) pair
*Defined in: std/core/string.s line 148*

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
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### unsafe\_temp - convert a string to a temporary null-terminated (cstr,str) pair
*Defined in: std/core/string.s line 148*

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
unsafe_temp(str, str) -> (unsafe_temp)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# endpos
### endpos - the end position of a string
*Defined in: std/core/string.s line 201*

This position is computed relative to its start in its
enclosing buffer.

```rust
endpos(str) -> (nat)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


# starts\_with
### starts\_with - check whether a string startswith a particular substring sequence
*Defined in: std/core/string.s line 287*

```rust
starts_with(str, str) -> (bool)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds
6. nat subtraction would yield a negative
15. out of bounds

### starts\_with - check whether a string startswith a particular substring sequence
*Defined in: std/core/string.s line 287*

```rust
starts_with(str, cstr _needle) -> (bool)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds

### starts\_with - check whether a string startswith a particular substring sequence
*Defined in: std/core/string.s line 287*

```rust
starts_with(cstr _stack, str) -> (bool)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds

### starts\_with - check whether a string startswith a particular substring sequence
*Defined in: std/core/string.s line 287*

```rust
starts_with(cstr _stack, cstr _needle) -> (bool)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds

# ends\_with
### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 295*

```rust
ends_with(str, str) -> (bool)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 295*

```rust
ends_with(str, cstr _needle) -> (bool)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds

### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 295*

```rust
ends_with(cstr _stack, str) -> (bool)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds

### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 295*

```rust
ends_with(cstr _stack, cstr _needle) -> (bool)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds

# contains
### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 313*

```rust
contains(str, str) -> (bool)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
22. slice out of string bounds
15. out of bounds

### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 313*

```rust
contains(str, cstr _needle) -> (bool)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds

### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 313*

```rust
contains(cstr _stack, str) -> (bool)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds

### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 313*

```rust
contains(cstr _stack, cstr _needle) -> (bool)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
22. slice out of string bounds

### contains - check whether a string contains a needle character
*Defined in: std/core/string.s line 305*

```rust
contains(str, char needle) -> (bool)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer

### contains - check whether a string contains a needle character
*Defined in: std/core/string.s line 305*

```rust
contains(cstr _stack, char needle) -> (bool)
```
Level of abstraction:

0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

# empty
### empty
*Defined in: std/core/string.s line 381*

```rust
empty(str) -> (bool)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


### empty - checks whether a cstr is not zero-initialized
*Defined in: std/core/string.s line 377*

```rust
empty(cstr) -> (bool)
```
Level of abstraction:

1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


# is\_number
### is\_number
*Defined in: std/core/convertstr.s line 31*

```rust
is_number(char) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# rotl
### rotl
*Defined in: std/rand.s line 26*

```rust
rotl(nat x, nat k) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# splitmix64
### splitmix64 - time seed
*Defined in: std/rand.s line 55*

Computes the seed of a splitmix64 sequence using the clock
as the source of entropy.

```rust
splitmix64() -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


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
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


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
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### Rand - random number generator
*Defined in: std/rand.s line 65*

Xoshiro256plus random numbers from https://prng.di.unimi.it/
These and are NOT cryptographically secure.
This a structural type for storing the progress of random number generators 
on four u64 state fields. The version is seed-initalized. Its period is 2^256-1.

```rust
Rand(nat) -> (edit Rand)
```
Level of abstraction:

1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


# Hashable
### nat - an unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### float
*Defined in: builtins line 1*

```rust
float() -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### cstr - constant string
*Defined in: builtins line 1*

```rust
cstr() -> (cstr)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat32) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat16) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### float - cast to float
*Defined in: std/core/convert.s line 95*

Converts a bit representation to the corresponding float number.

```rust
float(bits) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat - cast to nat
*Defined in: std/core/convert.s line 84*

Converts a bit representation to the corresponding natural number.

```rust
nat(bits) -> (nat)
```
Level of abstraction:

1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### nat - cast to nat
*Defined in: std/core/convert.s line 51*

Converting a character to a natural number considers
its bit representation interpreted as an unsigned number.

```rust
nat(char) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(nat) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(int) -> (nat)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

8. cannot convert negative int to nat

### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(float) -> (nat)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

7. cannot convert negative float to nat

### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(nat) -> (float)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(int) -> (float)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### float - cast to float
*Defined in: std/core/convert.s line 20*

Serves as a tautology function for code that parses on multiple number types.

```rust
float(float) -> (float)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 195*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(cstr cstr, str) -> (cstr)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 195*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 195*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### str - convert to string
*Defined in: std/core/string.s line 91*

Defines an implicit constant buffer using the cstr's memory data.
Subsequent comparisons no longer use the underlying pointer value.

```rust
str(cstr) -> (str)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 55*

```rust
str(char[]) -> (str)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds

### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 55*

```rust
str(char[], nat length) -> (str)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 48*

```rust
str(char[], nat dat.pos, nat dat.length, char dat.first) -> (str)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### str - a string residing on a buffer
*Defined in: std/core/string.s line 43*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### str - a string residing on a buffer
*Defined in: std/core/string.s line 39*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# hash
### hash
*Defined in: std/hash.s line 29*

```rust
hash(nat k, nat size) -> (nat)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

5. modulo by zero

### hash
*Defined in: std/hash.s line 23*

```rust
hash(str, nat size) -> (nat)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
5. modulo by zero

# to\_hash\_base
### to\_hash\_base
*Defined in: std/hash.s line 43*

```rust
to_hash_base(nat) -> (bits)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### to\_hash\_base
*Defined in: std/hash.s line 43*

```rust
to_hash_base(int) -> (bits)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### to\_hash\_base
*Defined in: std/hash.s line 43*

```rust
to_hash_base(float) -> (bits)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### to\_hash\_base
*Defined in: std/hash.s line 40*

```rust
to_hash_base(cstr) -> (str)
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### to\_hash\_base
*Defined in: std/hash.s line 40*

```rust
to_hash_base(str) -> (str)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


# robinhood\_str\_entry
### robinhood\_str\_entry
*Defined in: std/hash.s line 46*

```rust
robinhood_str_entry(str, nat cost) -> (str, nat cost)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# robinhood\_nat\_entry
### robinhood\_nat\_entry
*Defined in: std/hash.s line 49*

```rust
robinhood_nat_entry(nat s, nat cost) -> (nat s, nat cost)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# robinhood\_entry
### robinhood\_nat\_entry
*Defined in: std/hash.s line 49*

```rust
robinhood_nat_entry(nat s, nat cost) -> (nat s, nat cost)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### robinhood\_str\_entry
*Defined in: std/hash.s line 46*

```rust
robinhood_str_entry(str, nat cost) -> (str, nat cost)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# raw
### raw
*Defined in: std/hash.s line 60*

```rust
raw(cstr) -> (str)
```
Level of abstraction:

1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds

### raw
*Defined in: std/hash.s line 57*

```rust
raw(nat) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### raw
*Defined in: std/hash.s line 57*

```rust
raw(str) -> (str)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### raw
*Defined in: std/hash.s line 54*

```rust
raw(nat s, nat cost) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### raw
*Defined in: std/hash.s line 54*

```rust
raw(str, nat cost) -> (str)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# is\_zero
### is\_zero
*Defined in: std/hash.s line 66*

```rust
is_zero(nat) -> (bool)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


### is\_zero
*Defined in: std/hash.s line 63*

```rust
is_zero(str) -> (bool)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


# find
### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(nat[], nat _k) -> (mut nat)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
54. index not found
15. out of bounds

### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(str[], str) -> (mut nat)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
54. index not found
15. out of bounds

### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(str[], cstr _k) -> (mut nat)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

18. can only define strings on contiguous buffers
2. null pointer
19. can only define strings on non-offset buffers
5. modulo by zero
6. nat subtraction would yield a negative
54. index not found
15. out of bounds

### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(robinhood_nat_entry[], nat _k) -> (mut nat)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
54. index not found
15. out of bounds

### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(robinhood_str_entry[], str) -> (mut nat)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
54. index not found
15. out of bounds

### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(robinhood_str_entry[], cstr _k) -> (mut nat)
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

18. can only define strings on contiguous buffers
2. null pointer
19. can only define strings on non-offset buffers
5. modulo by zero
6. nat subtraction would yield a negative
54. index not found
15. out of bounds

# strmap
### strmap - a string map
*Defined in: std/map.s line 20*

Maps string indexes to the buffer provided using a robinhood scheme.
Map size is static and cannot be adjusted after initialization.

```rust
strmap(edit any[]) -> (mut robinhood_str_entry[], edit any[])
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# natmap
### natmap - a natural number map
*Defined in: std/map.s line 27*

Maps number indexes to the buffer provided using a robinhood scheme.
Map size is static and cannot be adjusted after initialization.

```rust
natmap(edit any[]) -> (mut robinhood_nat_entry[], edit any[])
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# unpack
### unpack
*Defined in: std/mini.s line 82*

```rust
unpack(char[], nat16 dat.pos, nat16 dat.length) -> (str)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

20. string does not fit on buffer

### unpack - unpack a compact str
*Defined in: std/mini.s line 76*

The created compact str is unpacked into its 'nat'-using representation
that is more efficient for computations in 64-bit architectures.

```rust
unpack(str) -> (str)
```
Level of abstraction:

1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


# abs
### abs
*Defined in: std/sci/math.s line 27*

```rust
abs(int) -> (int)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


### abs
*Defined in: std/sci/math.s line 20*

```rust
abs(float) -> (float)
```
Level of abstraction:

1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


# sqrt
### sqrt
*Defined in: std/sci/math.s line 34*

```rust
sqrt(float) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# sin
### sin
*Defined in: std/sci/math.s line 39*

```rust
sin(float) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# cos
### cos
*Defined in: std/sci/math.s line 44*

```rust
cos(float) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# log
### log
*Defined in: std/sci/math.s line 49*

```rust
log(float) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# tan
### tan
*Defined in: std/sci/math.s line 54*

```rust
tan(float) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# floor
### floor
*Defined in: std/sci/math.s line 59*

```rust
floor(float) -> (int)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# asin
### asin
*Defined in: std/sci/math.s line 64*

```rust
asin(float) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# acos
### acos
*Defined in: std/sci/math.s line 69*

```rust
acos(float) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# atan
### atan
*Defined in: std/sci/math.s line 74*

```rust
atan(float) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### atan
*Defined in: std/sci/math.s line 79*

```rust
atan(float x, float y) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# exp
### exp
*Defined in: std/sci/math.s line 84*

```rust
exp(float) -> (float)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# isnan
### isnan
*Defined in: std/sci/math.s line 94*

```rust
isnan(float) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[math.isnan(x)]`*
# isinf
### isinf
*Defined in: std/sci/math.s line 100*

```rust
isinf(float) -> (bool)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[math.isinf(x)]`*
# vec
### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit circular, nat length) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit circular, nat length, "dirty") -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit arena, nat length) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit arena, nat length, "dirty") -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### vec - treat a float buffer as a vector
*Defined in: std/sci/vec.s line 36*

```rust
vec(edit float[]) -> (mut vec)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

### vec - vector on a new buffer
*Defined in: std/sci/vec.s line 28*

Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer.

```rust
vec(new FLOATS, nat length) -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### vec - vector on a new buffer
*Defined in: std/sci/vec.s line 28*

Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer.

```rust
vec(new FLOATS, nat length, "dirty") -> (mut vec) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### vec - vector type declaration
*Defined in: std/sci/unsafe.s line 19*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
vec(float ptr unsafe_ptr, nat pos, nat length) -> (mut vec)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### vec - view a matrix as a vector
*Defined in: std/sci/mat.s line 82*

```rust
vec(mat) -> (mut vec)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


# mat
### mat - matrix type declaration
*Defined in: std/sci/unsafe.s line 24*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride) -> (mut mat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit circular, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit arena, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit arena, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 71*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "col") -> (mut mat)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 71*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "row") -> (mut mat)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### mat - matrix on an existing float[] buffer
*Defined in: std/sci/mat.s line 53*

```rust
mat(edit float[], nat rows) -> (mut mat)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

64. buffer size not divisible by vector rows
16. arena is out of space
4. division by zero
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit circular, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

# sparse\_element
### sparse\_element
*Defined in: std/sci/unsafe.s line 29*

```rust
sparse_element(nat row, nat col, float value) -> (nat row, nat col, float value)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# coo
### coo - coo sparse matrix type declaration
*Defined in: std/sci/unsafe.s line 31*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
coo(sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz) -> (mut coo)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### coo
*Defined in: std/sci/coo.s line 40*

```rust
coo(sparse_element[], nat rows, nat cols) -> (mut coo)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### coo - allocate a sparse matrix
*Defined in: std/sci/coo.s line 34*

This creates a new buffer of sparse elements for convenience.

```rust
coo(nat rows, nat cols, nat nnz) -> (mut coo)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# float\_allocator
### new - allocations on new bufs
*Defined in: std/core/allocators.s line 21*

```rust
new() -> (new)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t2615t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t2549t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t2270t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t622t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t580t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t576t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t572t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t4t") -> (edit circular)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t2615t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t2549t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t2270t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t622t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t580t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t576t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t572t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t4t") -> (edit arena)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


# constvec
### constvec - treat an immutable float buffer as an immutable vector
*Defined in: std/sci/vec.s line 42*

```rust
constvec(float[]) -> (vec)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

59. can only place vectors on contiguous buffers
60. cannot place vectors on buffer offsets

# reduce
### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add", "l2") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add", "sqr") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add", "abs") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "l2") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "sqr") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "abs") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec) -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul", "l2") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul", "sqr") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul", "abs") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add", "l2") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add", "sqr") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add", "abs") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "l2") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "sqr") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "abs") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec) -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul", "l2") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul", "sqr") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul", "abs") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add", "l2") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add", "sqr") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add", "abs") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "l2") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "sqr") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "abs") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec) -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", "l2") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", "sqr") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", "abs") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add", "l2") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add", "sqr") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add", "abs") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "l2") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sqr") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "abs") -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec) -> (float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "mul", "l2") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "mul", "sqr") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "mul", "abs") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "mul") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "add", "l2") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "add", "sqr") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "add", "abs") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "add") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "l2") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "sqr") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "abs") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec) -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul", "l2") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul", "sqr") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 168*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul", "abs") -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

# dot
### dot - dot product
*Defined in: std/sci/vec.s line 204*

```rust
dot(vec, vec) -> (float)
```
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

# sum
### sum - sum
*Defined in: std/sci/vec.s line 208*

```rust
sum(vec) -> (float)
```
Level of abstraction:

2 to 6 (0 are builtins or raw C code, 1 calls those, etc.)


### sum - sum of all elements
*Defined in: std/sci/coo.s line 117*

```rust
sum(coo, "all") -> (mut float)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

No failing errors, but can catch these intercepted ones:

2. null pointer

### sum - sum of each column
*Defined in: std/sci/coo.s line 109*

result[j] = sum of all stored values in column j

```rust
sum(edit circular, coo, "col") -> (mut vec) with effects FLOATS
```
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
2. null pointer
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### sum - sum of each row
*Defined in: std/sci/coo.s line 101*

result[i] = sum of all stored values in row i

```rust
sum(edit circular, coo, "row") -> (mut vec) with effects FLOATS
```
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
2. null pointer
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# mean
### mean - mean value
*Defined in: std/sci/vec.s line 212*

```rust
mean(vec) -> (float)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

4. division by zero

# var
### var - variance
*Defined in: std/sci/vec.s line 216*

```rust
var(vec) -> (float)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero

# std
### std - standard deviation
*Defined in: std/sci/vec.s line 227*

```rust
std(vec) -> (float)
```
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero

# self
### self
*Defined in: std/sci/vec.s line 264*

```rust
self(edit vec) -> (edit arena, edit vec)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)


# rows
### rows - number of rows
*Defined in: std/sci/mat.s line 22*

```rust
rows(mat) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### rows - number of rows
*Defined in: std/sci/coo.s line 22*

```rust
rows(coo) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# cols
### cols - number of columns
*Defined in: std/sci/mat.s line 26*

```rust
cols(mat) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### cols - number of columns
*Defined in: std/sci/coo.s line 26*

```rust
cols(coo) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# constmat
### constmat - immutable matrix on an immutable float[] buffer
*Defined in: std/sci/mat.s line 47*

```rust
constmat(float[], nat rows) -> (mat)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

64. buffer size not divisible by vector rows
16. arena is out of space
4. division by zero
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

# mutvec
### mutvec - view a matrix as a vector
*Defined in: std/sci/mat.s line 86*

```rust
mutvec(mat) -> (mut vec)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)


# row
### row - view matrix row as a vector
*Defined in: std/sci/mat.s line 90*

```rust
row(mat, nat i) -> (mut vec)
```
Level of abstraction:

0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds

# nnz
### nnz - number of stored non-zero entries
*Defined in: std/sci/coo.s line 30*

```rust
nnz(coo) -> (nat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# todense
### todense - convert to dense mat
*Defined in: std/sci/coo.s line 80*

```rust
todense(edit circular, coo) -> (mut mat) with effects FLOATS
```
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
2. null pointer
65. row out of bounds
66. column out of bounds
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### todense - convert to dense mat
*Defined in: std/sci/coo.s line 80*

```rust
todense(edit arena, coo) -> (mut mat) with effects FLOATS
```
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
65. row out of bounds
2. null pointer
66. column out of bounds
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### todense - convert to dense mat
*Defined in: std/sci/coo.s line 80*

```rust
todense(new FLOATS, coo) -> (mut mat) with effects FLOATS
```
Level of abstraction:

1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

65. row out of bounds
2. null pointer
66. column out of bounds
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# matrix
### coo - coo sparse matrix type declaration
*Defined in: std/sci/unsafe.s line 31*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
coo(sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz) -> (mut coo)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### mat - matrix type declaration
*Defined in: std/sci/unsafe.s line 24*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride) -> (mut mat)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit circular, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit arena, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit arena, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### coo
*Defined in: std/sci/coo.s line 40*

```rust
coo(sparse_element[], nat rows, nat cols) -> (mut coo)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### coo - allocate a sparse matrix
*Defined in: std/sci/coo.s line 34*

This creates a new buffer of sparse elements for convenience.

```rust
coo(nat rows, nat cols, nat nnz) -> (mut coo)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 71*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "col") -> (mut mat)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 71*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "row") -> (mut mat)
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


### mat - matrix on an existing float[] buffer
*Defined in: std/sci/mat.s line 53*

```rust
mat(edit float[], nat rows) -> (mut mat)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

64. buffer size not divisible by vector rows
16. arena is out of space
4. division by zero
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit circular, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

17. does not fit in circular arena
62. can only place matrices on contiguous buffers
63. cannot place matrices on buffer offsets

# tagged
### tagged - blank tag structure
*Defined in: std/tag.s line 20*

Ensures that 'tag ptr' has a unique type and allocates at least a cstr's
(a pointer's) worth of storage so that tag checking is always valid.

```rust
tagged(cstr) -> (tagged)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# unsafe\_match
### unsafe\_match
*Defined in: std/tag.s line 26*

```rust
unsafe_match(tagged ptr obj, cstr name, any ptr type) -> (mut any ptr {follows any ptr type})
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
70. does not match

# unsafe\_defer\_free
### unsafe\_defer\_free
*Defined in: std/tag.s line 31*

```rust
unsafe_defer_free(mut tagged ptr) -> (mut tagged ptr)
```
Level of abstraction:

1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)



Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# tagged\_alloc
### tagged\_alloc
*Defined in: std/tag.s line 36*

```rust
tagged_alloc(edit arena, nat size) -> (mut char ptr)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

16. arena is out of space
15. out of bounds

# match
### match
*Defined in: std/tag.s line 63*

```rust
match(cstr obj, cstr type_name) -> (mut char[])
```
Level of abstraction:

0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
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
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)

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
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# zero
### zero - set memory to zero
*Defined in: std/unsafe.s line 47*

Memsets a memory region to zero.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
zero(any ptr allocated, nat from, nat to) -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# color
### color
*Defined in: std/graphics.s line 21*

```rust
color(nat _r, nat _g, nat _b) -> (nat8 r, nat8 g, nat8 b, nat8 a)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

56. nat value too large to pack in nat8

### color
*Defined in: std/graphics.s line 21*

```rust
color(nat _r, nat _g, nat _b, nat _a) -> (nat8 r, nat8 g, nat8 b, nat8 a)
```
Level of abstraction:

1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

56. nat value too large to pack in nat8

# position
### position
*Defined in: std/graphics.s line 30*

```rust
position(float x, float y) -> (float x, float y)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# size
### size
*Defined in: std/graphics.s line 33*

```rust
size(float width, float height) -> (float width, float height)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# unsafe\_open\_window
### unsafe\_open\_window
*Defined in: std/graphics.s line 36*

```rust
unsafe_open_window(float size.width, float size.height, cstr title, cstr font_path) -> ()
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `(pyray.set_trace_log_level(pyray.LOG_NONE), pyray.init_window(int($size__width),int($size__height),$title),pyray.set_target_fps(60),memory.set_global('font', pyray.load_font_ex($font_path,128,None,0) if $font_path else pyray.get_font_default()))`*
# window
### window
*Defined in: std/graphics.s line 49*

```rust
window(float size.width, float size.height, cstr title, cstr font_path) -> (edit window)
```
Level of abstraction:

0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)


# is\_open
### is\_open
*Defined in: std/graphics.s line 73*

```rust
is_open(edit window) -> (bool) with effects WINDOW
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[not pyray.window_should_close()]`*
# unsafe\_begin\_drawing
### unsafe\_begin\_drawing
*Defined in: std/graphics.s line 78*

```rust
unsafe_begin_drawing() -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.begin_drawing()`*
# unsafe\_end\_drawing
### unsafe\_end\_drawing
*Defined in: std/graphics.s line 82*

```rust
unsafe_end_drawing() -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.end_drawing()`*
# draw
### draw
*Defined in: std/graphics.s line 88*

```rust
draw(edit window) -> (bool) with effects WINDOW
```
Level of abstraction:

1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

74. alopeny drawing on window


Returned values defer use of the following functions:
```rust
unsafe_end_drawing() -> ()
```
# clear
### clear
*Defined in: std/graphics.s line 97*

```rust
clear(edit window, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.clear_background(pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# text
### text
*Defined in: std/graphics.s line 127*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_pro(memory.globals['font'].font,str($txt),pyray.Vector2($pos__x,$pos__y),pyray.Vector2($origin__x,$origin__y),$rotation,$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 127*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_pro(memory.globals['font'].font,str($txt),pyray.Vector2($pos__x,$pos__y),pyray.Vector2($origin__x,$origin__y),$rotation,$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 114*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_ex(memory.globals['font'],str($txt),pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 114*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_ex(memory.globals['font'],str($txt),pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 101*

```rust
text(edit window, cstr txt, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_ex(memory.globals['font'],$txt,pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# sleep
### sleep
*Defined in: std/graphics.s line 142*

```rust
sleep(nat) -> ()
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `time.sleep($seconds*0.001)`*
# TextureData
### TextureData
*Defined in: std/graphics.s line 146*

```rust
TextureData(nat id, float size.width, float size.height, nat mipmaps, nat format) -> (nat id, float size.width, float size.height, nat mipmaps, nat format)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# Texture
### Texture
*Defined in: std/graphics.s line 149*

```rust
Texture(nat id, float size.width, float size.height, nat mipmaps, nat format) -> (Texture)
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# open
### open
*Defined in: std/graphics.s line 156*

```rust
open(cstr) -> (Texture)
```
Level of abstraction:

0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# texture
### texture
*Defined in: std/graphics.s line 218*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float size.width, float size.height, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### texture
*Defined in: std/graphics.s line 205*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float scale, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### texture
*Defined in: std/graphics.s line 191*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float size.width, float size.height, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float rotation) -> () with effects WINDOW
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### texture
*Defined in: std/graphics.s line 179*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float scale, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float rotation) -> () with effects WINDOW
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

### texture
*Defined in: std/graphics.s line 169*

```rust
texture(edit window, Texture, float pos.x, float pos.y, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Level of abstraction:

0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)

Potential errors:

2. null pointer
15. out of bounds

# circ
### circ
*Defined in: std/graphics.s line 307*

```rust
circ(edit window, float pos.x, float pos.y, float radius, "line", nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_ring(pyray.Vector2($pos__x,$pos__y),max(0,$radius-$thickness),$radius,0,360,64,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### circ
*Defined in: std/graphics.s line 231*

```rust
circ(edit window, float pos.x, float pos.y, float radius, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_circle_v(pyray.Vector2($pos__x,$pos__y),$radius,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# ellipse
### ellipse
*Defined in: std/graphics.s line 251*

```rust
ellipse(edit window, float pos.x, float pos.y, float radius.x, float radius.y, "line", nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### ellipse
*Defined in: std/graphics.s line 241*

```rust
ellipse(edit window, float pos.x, float pos.y, float radius.x, float radius.y, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# rect
### rect
*Defined in: std/graphics.s line 275*

```rust
rect(edit window, float pos.x, float pos.y, float size.width, float size.height, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


### rect
*Defined in: std/graphics.s line 271*

```rust
rect(edit window, float pos.x, float pos.y, float size.width, float size.height, "line", nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_rectangle_lines_ex(pyray.Rectangle($pos__x,$pos__y,$size__width,$size__height),$thickness,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### rect
*Defined in: std/graphics.s line 261*

```rust
rect(edit window, float pos.x, float pos.y, float size.width, float size.height, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_rectangle(int($pos__x),int($pos__y),int($size__width),int($size__height),pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# tri
### tri
*Defined in: std/graphics.s line 296*

```rust
tri(edit window, float p1.x, float p1.y, float p2.x, float p2.y, float p3.x, float p3.y, "line", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_triangle_lines(pyray.Vector2($p1__x,$p1__y),pyray.Vector2($p2__x,$p2__y),pyray.Vector2($p3__x,$p3__y),pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### tri
*Defined in: std/graphics.s line 285*

```rust
tri(edit window, float p1.x, float p1.y, float p2.x, float p2.y, float p3.x, float p3.y, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_triangle(pyray.Vector2($p1__x,$p1__y),pyray.Vector2($p2__x,$p2__y),pyray.Vector2($p3__x,$p3__y),pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# dt
### dt
*Defined in: std/graphics.s line 324*

```rust
dt(window) -> (float) with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.get_frame_time()]`*
# uptime
### uptime
*Defined in: std/graphics.s line 329*

```rust
uptime(window) -> (float) with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.get_time()]`*
# key\_down
### key\_down
*Defined in: std/graphics.s line 334*

```rust
key_down(window, nat key) -> (bool) with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_key_down($key)]`*
# key\_pressed
### key\_pressed
*Defined in: std/graphics.s line 339*

```rust
key_pressed(edit window, nat key) -> (bool) with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_key_pressed($key)]`*
# key\_released
### key\_released
*Defined in: std/graphics.s line 344*

```rust
key_released(edit window, nat key) -> (bool) with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_key_released($key)]`*
# mouse\_pos
### mouse\_pos
*Defined in: std/graphics.s line 349*

```rust
mouse_pos(window) -> (float x, float y) with effects WINDOW
```
Level of abstraction:

0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[(lambda p=pyray.get_mouse_position():(p.x,p.y))()]`*
# mouse\_down
### mouse\_down
*Defined in: std/graphics.s line 357*

```rust
mouse_down(window, nat button) -> (bool) with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_mouse_button_down($button)]`*
# mouse\_pressed
### mouse\_pressed
*Defined in: std/graphics.s line 362*

```rust
mouse_pressed(edit window, nat button) -> (bool) with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_mouse_button_pressed($button)]`*
# mouse\_wheel
### mouse\_wheel
*Defined in: std/graphics.s line 367*

```rust
mouse_wheel(window) -> (float) with effects WINDOW
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.get_mouse_wheel_move()]`*
# KEY\_NULL

*Defined in: std/graphics.s line 372*

```rust
() -> (0)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_APOSTROPHE

*Defined in: std/graphics.s line 373*

```rust
() -> (39)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_COMMA

*Defined in: std/graphics.s line 374*

```rust
() -> (44)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_MINUS

*Defined in: std/graphics.s line 375*

```rust
() -> (45)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_PERIOD

*Defined in: std/graphics.s line 376*

```rust
() -> (46)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_SLASH

*Defined in: std/graphics.s line 377*

```rust
() -> (47)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_ZERO

*Defined in: std/graphics.s line 378*

```rust
() -> (48)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_ONE

*Defined in: std/graphics.s line 379*

```rust
() -> (49)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_TWO

*Defined in: std/graphics.s line 380*

```rust
() -> (50)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_THREE

*Defined in: std/graphics.s line 381*

```rust
() -> (51)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_FOUR

*Defined in: std/graphics.s line 382*

```rust
() -> (52)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_FIVE

*Defined in: std/graphics.s line 383*

```rust
() -> (53)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_SIX

*Defined in: std/graphics.s line 384*

```rust
() -> (54)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_SEVEN

*Defined in: std/graphics.s line 385*

```rust
() -> (55)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_EIGHT

*Defined in: std/graphics.s line 386*

```rust
() -> (56)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_NINE

*Defined in: std/graphics.s line 387*

```rust
() -> (57)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_SEMICOLON

*Defined in: std/graphics.s line 388*

```rust
() -> (59)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_EQUAL

*Defined in: std/graphics.s line 389*

```rust
() -> (61)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_A

*Defined in: std/graphics.s line 390*

```rust
() -> (65)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_B

*Defined in: std/graphics.s line 391*

```rust
() -> (66)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_C

*Defined in: std/graphics.s line 392*

```rust
() -> (67)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_D

*Defined in: std/graphics.s line 393*

```rust
() -> (68)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_E

*Defined in: std/graphics.s line 394*

```rust
() -> (69)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_F

*Defined in: std/graphics.s line 395*

```rust
() -> (70)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_G

*Defined in: std/graphics.s line 396*

```rust
() -> (71)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_H

*Defined in: std/graphics.s line 397*

```rust
() -> (72)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_I

*Defined in: std/graphics.s line 398*

```rust
() -> (73)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_J

*Defined in: std/graphics.s line 399*

```rust
() -> (74)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_K

*Defined in: std/graphics.s line 400*

```rust
() -> (75)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_L

*Defined in: std/graphics.s line 401*

```rust
() -> (76)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_M

*Defined in: std/graphics.s line 402*

```rust
() -> (77)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_N

*Defined in: std/graphics.s line 403*

```rust
() -> (78)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_O

*Defined in: std/graphics.s line 404*

```rust
() -> (79)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_P

*Defined in: std/graphics.s line 405*

```rust
() -> (80)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_Q

*Defined in: std/graphics.s line 406*

```rust
() -> (81)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_R

*Defined in: std/graphics.s line 407*

```rust
() -> (82)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_S

*Defined in: std/graphics.s line 408*

```rust
() -> (83)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_T

*Defined in: std/graphics.s line 409*

```rust
() -> (84)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_U

*Defined in: std/graphics.s line 410*

```rust
() -> (85)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_V

*Defined in: std/graphics.s line 411*

```rust
() -> (86)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_W

*Defined in: std/graphics.s line 412*

```rust
() -> (87)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_X

*Defined in: std/graphics.s line 413*

```rust
() -> (88)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_Y

*Defined in: std/graphics.s line 414*

```rust
() -> (89)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_Z

*Defined in: std/graphics.s line 415*

```rust
() -> (90)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_LEFT\_BRACKET

*Defined in: std/graphics.s line 416*

```rust
() -> (91)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_BACKSLASH

*Defined in: std/graphics.s line 417*

```rust
() -> (92)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_RIGHT\_BRACKET

*Defined in: std/graphics.s line 418*

```rust
() -> (93)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_GRAVE

*Defined in: std/graphics.s line 419*

```rust
() -> (96)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_SPACE

*Defined in: std/graphics.s line 420*

```rust
() -> (32)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_ESCAPE

*Defined in: std/graphics.s line 421*

```rust
() -> (256)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_ENTER

*Defined in: std/graphics.s line 422*

```rust
() -> (257)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_TAB

*Defined in: std/graphics.s line 423*

```rust
() -> (258)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_BACKSPACE

*Defined in: std/graphics.s line 424*

```rust
() -> (259)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_INSERT

*Defined in: std/graphics.s line 425*

```rust
() -> (260)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_DELETE

*Defined in: std/graphics.s line 426*

```rust
() -> (261)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_RIGHT

*Defined in: std/graphics.s line 427*

```rust
() -> (262)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_LEFT

*Defined in: std/graphics.s line 428*

```rust
() -> (263)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_DOWN

*Defined in: std/graphics.s line 429*

```rust
() -> (264)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_UP

*Defined in: std/graphics.s line 430*

```rust
() -> (265)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_PAGE\_UP

*Defined in: std/graphics.s line 431*

```rust
() -> (266)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_PAGE\_DOWN

*Defined in: std/graphics.s line 432*

```rust
() -> (267)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_HOME

*Defined in: std/graphics.s line 433*

```rust
() -> (268)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_END

*Defined in: std/graphics.s line 434*

```rust
() -> (269)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_CAPS\_LOCK

*Defined in: std/graphics.s line 435*

```rust
() -> (280)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_SCROLL\_LOCK

*Defined in: std/graphics.s line 436*

```rust
() -> (281)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_NUM\_LOCK

*Defined in: std/graphics.s line 437*

```rust
() -> (282)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_PRINT\_SCREEN

*Defined in: std/graphics.s line 438*

```rust
() -> (283)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_PAUSE

*Defined in: std/graphics.s line 439*

```rust
() -> (284)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_F1

*Defined in: std/graphics.s line 440*

```rust
() -> (290)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_F2

*Defined in: std/graphics.s line 441*

```rust
() -> (291)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_F3

*Defined in: std/graphics.s line 442*

```rust
() -> (292)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_F4

*Defined in: std/graphics.s line 443*

```rust
() -> (293)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_F5

*Defined in: std/graphics.s line 444*

```rust
() -> (294)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_F6

*Defined in: std/graphics.s line 445*

```rust
() -> (295)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_F7

*Defined in: std/graphics.s line 446*

```rust
() -> (296)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_F8

*Defined in: std/graphics.s line 447*

```rust
() -> (297)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_F9

*Defined in: std/graphics.s line 448*

```rust
() -> (298)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_F10

*Defined in: std/graphics.s line 449*

```rust
() -> (299)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_F11

*Defined in: std/graphics.s line 450*

```rust
() -> (300)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_F12

*Defined in: std/graphics.s line 451*

```rust
() -> (301)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_LEFT\_SHIFT

*Defined in: std/graphics.s line 452*

```rust
() -> (340)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_LEFT\_CONTROL

*Defined in: std/graphics.s line 453*

```rust
() -> (341)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_LEFT\_ALT

*Defined in: std/graphics.s line 454*

```rust
() -> (342)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_LEFT\_SUPER

*Defined in: std/graphics.s line 455*

```rust
() -> (343)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_RIGHT\_SHIFT

*Defined in: std/graphics.s line 456*

```rust
() -> (344)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_RIGHT\_CONTROL

*Defined in: std/graphics.s line 457*

```rust
() -> (345)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_RIGHT\_ALT

*Defined in: std/graphics.s line 458*

```rust
() -> (346)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_RIGHT\_SUPER

*Defined in: std/graphics.s line 459*

```rust
() -> (347)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KB\_MENU

*Defined in: std/graphics.s line 460*

```rust
() -> (348)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_0

*Defined in: std/graphics.s line 461*

```rust
() -> (320)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_1

*Defined in: std/graphics.s line 462*

```rust
() -> (321)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_2

*Defined in: std/graphics.s line 463*

```rust
() -> (322)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_3

*Defined in: std/graphics.s line 464*

```rust
() -> (323)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_4

*Defined in: std/graphics.s line 465*

```rust
() -> (324)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_5

*Defined in: std/graphics.s line 466*

```rust
() -> (325)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_6

*Defined in: std/graphics.s line 467*

```rust
() -> (326)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_7

*Defined in: std/graphics.s line 468*

```rust
() -> (327)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_8

*Defined in: std/graphics.s line 469*

```rust
() -> (328)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_9

*Defined in: std/graphics.s line 470*

```rust
() -> (329)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_DECIMAL

*Defined in: std/graphics.s line 471*

```rust
() -> (330)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_DIVIDE

*Defined in: std/graphics.s line 472*

```rust
() -> (331)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_MULTIPLY

*Defined in: std/graphics.s line 473*

```rust
() -> (332)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_SUBTRACT

*Defined in: std/graphics.s line 474*

```rust
() -> (333)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_ADD

*Defined in: std/graphics.s line 475*

```rust
() -> (334)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_ENTER

*Defined in: std/graphics.s line 476*

```rust
() -> (335)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_KP\_EQUAL

*Defined in: std/graphics.s line 477*

```rust
() -> (336)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_BACK

*Defined in: std/graphics.s line 478*

```rust
() -> (4)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_MENU

*Defined in: std/graphics.s line 479*

```rust
() -> (5)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_VOLUME\_UP

*Defined in: std/graphics.s line 480*

```rust
() -> (24)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


# KEY\_VOLUME\_DOWN

*Defined in: std/graphics.s line 481*

```rust
() -> (25)
```
Level of abstraction:

0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)


