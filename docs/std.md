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
[revalidate](#revalidate) 
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
[post](#post) 
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
[pipe](#pipe) 
[mutex\_size](#mutex\_size) 
[unsafe\_pipe\_lock](#unsafe\_pipe\_lock) 
[unsafe\_pipe\_unlock](#unsafe\_pipe\_unlock) 
[with](#with) 
[system\_thread](#system\_thread) 
[unsafe\_spawn](#unsafe\_spawn) 
[join](#join) 
[cpu](#cpu) 
[growing\_thread\_pool](#growing\_thread\_pool) 
[thread](#thread) 
[unsafe\_pipe\_match](#unsafe\_pipe\_match) 
[unsafe\_pipe\_defer\_free](#unsafe\_pipe\_defer\_free) 
[unsafe\_pipe\_mutax\_init](#unsafe\_pipe\_mutax\_init) 
[pipe\_alloc](#pipe\_alloc) 
[shared](#shared) 
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
[NumberOrPtr](#numberorptr) 
[to\_number](#to\_number) 
[already\_defined](#already\_defined) 
[String](#string) 
[run](#run) 
[print\_marker](#print\_marker) 
[test](#test) 
</div>

# cstr
### cstr - constant string
*Defined in: builtins line 1*

```rust
cstr() -> (cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 205*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(cstr cstr, str) -> (cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 205*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 205*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3


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
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10


# int
### int - a signed integer value
*Defined in: builtins line 1*

Represents values in the range `2^-63 to 2^63-1`.

```rust
int() -> (int)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### int - cast to int
*Defined in: std/core/convert.s line 89*

Converts a bit representation to the corresponding integer.

```rust
int(bits) -> (int)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7


### int - cast to int
*Defined in: std/core/convert.s line 29*

Overflows are mapped to negative integers without any numerical safeguards.

```rust
int(nat) -> (int)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 7


### int - cast to int
*Defined in: std/core/convert.s line 29*

Serves as a tautology function for code that parses on multiple number types.

```rust
int(int) -> (int)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 7


### int - cast to int
*Defined in: std/core/convert.s line 29*

May lose information due to truncating.

```rust
int(float) -> (int)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 7


### int - converts a string to an integer
*Defined in: std/core/convertstr.s line 149*

```rust
int(str) -> (int)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 604

Potential errors:

2. null pointer
26. invalid int conversion from empty string
27. invalid int conversion from string with only a sign
28. invalid integer int from non-number string
15. out of bounds

### int - converts a string to an integer
*Defined in: std/core/convertstr.s line 149*

```rust
int(cstr) -> (int)
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 58
- Transpiled C size: 598

Potential errors:

2. null pointer
26. invalid int conversion from empty string
27. invalid int conversion from string with only a sign
28. invalid integer int from non-number string
15. out of bounds

### int - reads an integer from the console
*Defined in: std/core/convertstr.s line 36*

```rust
int(console) -> (int)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 50
- Transpiled C size: 527

Potential errors:

2. null pointer
23. unexpected end of console read
24. user input was not a float
15. out of bounds

# nat
### nat - an unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat32) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7


### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat16) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7


### nat - cast to nat
*Defined in: std/core/convert.s line 84*

Converts a bit representation to the corresponding natural number.

```rust
nat(bits) -> (nat)
```
Complexity:

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### nat - cast to nat
*Defined in: std/core/convert.s line 51*

Converting a character to a natural number considers
its bit representation interpreted as an unsigned number.

```rust
nat(char) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(nat) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 7


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(int) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

Potential errors:

8. cannot convert negative int to nat

### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(float) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

Potential errors:

7. cannot convert negative float to nat

### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s line 172*

```rust
nat(str) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 328

Potential errors:

2. null pointer
29. invalid nat conversion from empty string
30. invalid nat conversion from non-number string
15. out of bounds

### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s line 172*

```rust
nat(cstr) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 322

Potential errors:

2. null pointer
29. invalid nat conversion from empty string
30. invalid nat conversion from non-number string
15. out of bounds

### nat - reads an unsigned integer from the console
*Defined in: std/core/convertstr.s line 60*

```rust
nat(console) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 390

Potential errors:

24. user input was not a float
2. null pointer
15. out of bounds

# nat32
### nat32 - a 32-bit unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^32-1`.

```rust
nat32() -> (nat32)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### nat32
*Defined in: std/core/allocators.s line 154*

```rust
nat32(nat) -> (nat32)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7


### nat32 - convert unsigned number to 32 bits
*Defined in: std/mini.s line 38*

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

```rust
nat32(nat) -> (nat32)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 34

Potential errors:

58. nat value too large to pack in nat32

# nat16
### nat16 - a 16-bit unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^16-1`.

```rust
nat16() -> (nat16)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### nat16 - convert unsigned number to 16 bits
*Defined in: std/mini.s line 30*

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

```rust
nat16(nat) -> (nat16)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 34

Potential errors:

57. nat value too large to pack in nat16

# nat8
### nat8 - a 8-bit unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 255`.

```rust
nat8() -> (nat8)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### nat8 - convert unsigned number to 8 bits
*Defined in: std/mini.s line 22*

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

```rust
nat8(nat) -> (nat8)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 34

Potential errors:

56. nat value too large to pack in nat8

# float
### float
*Defined in: builtins line 1*

```rust
float() -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### float - cast to float
*Defined in: std/core/convert.s line 95*

Converts a bit representation to the corresponding float number.

```rust
float(bits) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 18


### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(nat) -> (float)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 15


### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(int) -> (float)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 15


### float - cast to float
*Defined in: std/core/convert.s line 20*

Serves as a tautology function for code that parses on multiple number types.

```rust
float(float) -> (float)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 15


### float - converts a string to a float
*Defined in: std/core/convertstr.s line 184*

```rust
float(cstr) -> (float)
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 85
- Transpiled C size: 922

Potential errors:

32. invalid float conversion from string with only a sign
33. invalid float conversion from non-number string
2. null pointer
34. invalid float conversion from string without a value after the dot
31. invalid float conversion from empty string
15. out of bounds

### float - reads a float from the console
*Defined in: std/core/convertstr.s line 80*

```rust
float(console) -> (float)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 67
- Transpiled C size: 722

Potential errors:

2. null pointer
23. unexpected end of console read
24. user input was not a float
15. out of bounds

### float - converts a string to a float
*Defined in: std/core/convertstr.s line 184*

```rust
float(str) -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 89
- Transpiled C size: 928

Potential errors:

32. invalid float conversion from string with only a sign
33. invalid float conversion from non-number string
2. null pointer
34. invalid float conversion from string without a value after the dot
31. invalid float conversion from empty string
15. out of bounds

# bool
### bool - boolean value
*Defined in: builtins line 1*

Can only be `true` or `false`.

```rust
bool() -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# err
### err
*Defined by the compiler*

```rust
err() -> (err)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# blank
### blank - empty tuple
*Defined in: builtins line 1*

This is the type of non-existent variables, empty parantheses, and functions of no returns.

```rust
blank() -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 0
- Transpiled C size: 0


# char
### char - a character
*Defined in: builtins line 1*

Represents characters in the numeric range `0 to 255`.

```rust
char() -> (char)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### char - treat as character
*Defined in: std/core/string.s line 113*

The first character of a string is extracted,
for example to write `c = char \"C\"`.

```rust
char(cstr) -> (char)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 14


### char - treat as character
*Defined in: std/core/string.s line 107*

The first character of a string is extracted,
for example to write `c = char str \"C\"`.

```rust
char(str) -> (char)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


### char
*Defined in: std/core/convertstr.s line 24*

```rust
char(console) -> (char)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 34

Potential errors:

23. unexpected end of console read

# any
### any - any type
*Defined in: builtins line 1*

Represents a generic for buffers and pointers for type-independent code that can be matched to a concrete type later.
This type ordains special treatment by the compiler.

```rust
any() -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 0
- Transpiled C size: 0


# eq
### eq - equals
*Defined in: std/core/bool.s line 82*

```rust
eq(bool value, false) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### eq - equals
*Defined in: std/core/bool.s line 78*

```rust
eq(false, bool value) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### eq - equals
*Defined in: std/core/bool.s line 74*

```rust
eq(bool value, true) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


### eq - equals
*Defined in: std/core/bool.s line 70*

```rust
eq(true, bool value) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


### eq - equals
*Defined in: std/core/bool.s line 51*

This is a compile-time operation that does not evoke any runtime booleans.

```rust
eq(false, true) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9


### eq - equals
*Defined in: std/core/bool.s line 46*

This is a compile-time operation that does not evoke any runtime booleans.

```rust
eq(true, false) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9


### eq - equals
*Defined in: std/core/bool.s line 41*

This is a compile-time operation that does not evoke any runtime booleans.

```rust
eq(false, false) -> (true)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9


### eq - equals
*Defined in: std/core/bool.s line 36*

This is a compile-time operation that does not evoke any runtime booleans.

```rust
eq(true, true) -> (true)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9


### eq - equals
*Defined in: std/core/bool.s line 20*

```rust
eq(bool x, bool y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9


### eq - equals
*Defined in: std/core/numbers.s line 56*

Compares the address of two pointers.

```rust
eq(any ptr x, any ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### eq - equals
*Defined in: std/core/numbers.s line 40*

Compares two error messages. This comparison is
used only for comparing error messages produced
by the same running program.

```rust
eq(catch x, catch y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### eq - equals
*Defined in: std/core/numbers.s line 26*

```rust
eq(nat x, nat y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### eq - equals
*Defined in: std/core/numbers.s line 26*

```rust
eq(int x, int y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### eq - equals
*Defined in: std/core/numbers.s line 26*

```rust
eq(float x, float y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### eq - equals
*Defined in: std/core/string.s line 281*

```rust
eq(cstr x, str) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 77


### eq - equals
*Defined in: std/core/string.s line 275*

```rust
eq(str, cstr y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 77


### eq - equals
*Defined in: std/core/string.s line 248*

This implementation avoids indirection by checking for the first
string character first, which will typically be stored only one
indirection away instead of two, and is thus very friendly to
CPU cache usage when manipulating strings.
It is interesting to consider what happens
should the memory surfaces where strings are stored are corrupted
by replacing string data while the string is still used in code
(this is a logical bug but memory-safe). In that case, two strings
could have the exact same contents but be deemed not equal to
each other. This contradiction occurs only when active strings
are overwritten with new data, and is in fact a good way to check
for logical inconsistencies. In the rare cases where you want
to guarantee the outcome of this equality under data corruptions
use 'eq(revalidate x, revalidate y)'
to re-retrieve the first characters. This is still faster than
full comparison of large strings, given that most string comparisons
yield false.

```rust
eq(str, str) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 105


### eq - equals
*Defined in: std/core/string.s line 239*

Comparing two cstrs is as simple as comparing their addresses,
so this operation is exceedingly lightweight and a convenient
means for checking for runtime tags. The compier enforces that
two same-content cstr will always have the same memory address.

```rust
eq(cstr x, cstr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### eq - equals
*Defined in: std/core/string.s line 120*

```rust
eq(char x, char y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 43*

```rust
eq(cstr ptr x, cstr ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 61

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 43*

```rust
eq(cstr ptr x, str ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 103

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 43*

```rust
eq(str ptr x, cstr ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 103

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 43*

```rust
eq(str ptr x, str ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 145

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 39*

```rust
eq(cstr x, cstr ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 37

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 39*

```rust
eq(cstr x, str ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 79

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 39*

```rust
eq(str, cstr ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 43

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 39*

```rust
eq(str, str ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 85

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 35*

```rust
eq(cstr ptr x, cstr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 37

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 35*

```rust
eq(cstr ptr x, str) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 43

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 35*

```rust
eq(str ptr x, cstr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 79

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 35*

```rust
eq(str ptr x, str) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 85

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(nat _x, nat ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(int _x, int ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(float _x, float ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(nat ptr _x, nat _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(nat ptr _x, nat ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(int ptr _x, int _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(int ptr _x, int ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(float ptr _x, float _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(float ptr _x, float ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

# neq
### neq - not equal
*Defined in: std/core/bool.s line 86*

```rust
neq(true x, bool y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21


### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(false x, false y) -> (false)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21


### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(false x, true y) -> (true)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21


### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(true x, false y) -> (true)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21


### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(true x, true y) -> (false)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21


### neq - not equal
*Defined in: std/core/bool.s line 25*

```rust
neq(bool x, bool y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9


### neq - not equal
*Defined in: std/core/numbers.s line 48*

Compares two error messages. This comparison is
used only for comparing error messages produced
by the same running program.

```rust
neq(catch x, catch y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### neq - not equal
*Defined in: std/core/numbers.s line 33*

```rust
neq(nat x, nat y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### neq - not equal
*Defined in: std/core/numbers.s line 33*

```rust
neq(int x, int y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### neq - not equal
*Defined in: std/core/numbers.s line 33*

```rust
neq(float x, float y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### neq - not equal
*Defined in: std/core/bool.s line 90*

```rust
neq(bool x, false y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21


### neq - not equal
*Defined in: std/core/bool.s line 90*

```rust
neq(bool x, true y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21


### neq - not equal
*Defined in: std/core/bool.s line 86*

```rust
neq(false x, bool y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21


### neq - not equal
*Defined in: std/unsafe.s line 19*

Compares the address of two pointers.

```rust
neq(any ptr x, any ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### neq - not equals
*Defined in: std/core/string.s line 287*

Negates the outcome of equality checks between cstr and strings.

```rust
neq(cstr x, cstr y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21


### neq - not equals
*Defined in: std/core/string.s line 287*

Negates the outcome of equality checks between cstr and strings.

```rust
neq(cstr x, str) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 27


### neq - not equals
*Defined in: std/core/string.s line 287*

Negates the outcome of equality checks between cstr and strings.

```rust
neq(str, cstr y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 27


### neq - not equals
*Defined in: std/core/string.s line 287*

Negates the outcome of equality checks between cstr and strings.

```rust
neq(str, str) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 33


### neq - not equals
*Defined in: std/core/string.s line 125*

```rust
neq(char x, char y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 47*

```rust
neq(cstr ptr x, cstr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 37

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 47*

```rust
neq(cstr ptr x, str) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 43

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 47*

```rust
neq(str ptr x, cstr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 79

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 47*

```rust
neq(str ptr x, str) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 85

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(nat _x, nat ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(int _x, int ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(float _x, float ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(nat ptr _x, nat _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(nat ptr _x, nat ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(int ptr _x, int _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(int ptr _x, int ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(float ptr _x, float _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(float ptr _x, float ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 55*

```rust
neq(cstr ptr x, cstr ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 61

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 55*

```rust
neq(cstr ptr x, str ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 103

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 55*

```rust
neq(str ptr x, cstr ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 103

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 55*

```rust
neq(str ptr x, str ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 145

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 51*

```rust
neq(cstr x, cstr ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 37

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 51*

```rust
neq(cstr x, str ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 79

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 51*

```rust
neq(str, cstr ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 43

Potential errors:

2. null pointer

### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 51*

```rust
neq(str, str ptr y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 85

Potential errors:

2. null pointer

# not
### not - logical inverse
*Defined in: std/core/bool.s line 61*

This is a compile-time operation on the compiler::false type rather than a runtime boolean.

```rust
not(false) -> (true)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 9


### not - logical inverse
*Defined in: std/core/bool.s line 56*

This is a compile-time operation on the compiler::true type rather than a runtime boolean.

```rust
not(true) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 9


### not - logical inverse
*Defined in: std/core/bool.s line 30*

This operates on boolean values at runtime.

```rust
not(bool) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 14


# Number
### nat - an unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### float
*Defined in: builtins line 1*

```rust
float() -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### int - a signed integer value
*Defined in: builtins line 1*

Represents values in the range `2^-63 to 2^63-1`.

```rust
int() -> (int)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# is\_different
### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(nat x, nat y) -> (false)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(nat x, int y) -> (true)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(nat x, float y) -> (true)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(int x, nat y) -> (true)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(int x, int y) -> (false)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(int x, float y) -> (true)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(float x, nat y) -> (true)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(float x, int y) -> (true)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(float x, float y) -> (false)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


# neg
### neg - negative of a number
*Defined in: std/core/numbers.s line 62*

```rust
neg(nat) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 11


### neg - negative of a number
*Defined in: std/core/numbers.s line 62*

```rust
neg(int) -> (int)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 11


### neg - negative of a number
*Defined in: std/core/numbers.s line 62*

```rust
neg(float) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 11


# add
### add - add
*Defined in: std/core/numbers.s line 67*

Adds two numbers of the same type. This is an overload for the + operator.

```rust
add(nat x, nat y) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### add - add
*Defined in: std/core/numbers.s line 67*

Adds two numbers of the same type. This is an overload for the + operator.

```rust
add(int x, int y) -> (int)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### add - add
*Defined in: std/core/numbers.s line 67*

Adds two numbers of the same type. This is an overload for the + operator.

```rust
add(float x, float y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### add - pointer addition
*Defined in: std/unsafe.s line 65*

Adds a natural number offset to a pointer.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
add(any ptr allocated, nat offset) -> (any ptr {follows any ptr allocated})
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### add - concatenate two strings
*Defined in: std/core/string.s line 411*

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
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 158
- Transpiled C size: 952

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 411*

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
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 162
- Transpiled C size: 958

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 411*

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
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 162
- Transpiled C size: 958

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 411*

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
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 166
- Transpiled C size: 964

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 390*

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

```rust
add(edit list, cstr _s1, cstr _s2) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 97
- Transpiled C size: 455

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
*Defined in: std/core/string.s line 390*

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

```rust
add(edit list, cstr _s1, str) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 101
- Transpiled C size: 461

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
*Defined in: std/core/string.s line 390*

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

```rust
add(edit list, str, cstr _s2) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 101
- Transpiled C size: 461

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
*Defined in: std/core/string.s line 390*

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

```rust
add(edit list, str, str) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 105
- Transpiled C size: 467

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
*Defined in: std/core/string.s line 390*

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

```rust
add(edit circular, cstr _s1, cstr _s2) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 97
- Transpiled C size: 455

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 390*

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

```rust
add(edit circular, cstr _s1, str) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 101
- Transpiled C size: 461

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 390*

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

```rust
add(edit circular, str, cstr _s2) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 101
- Transpiled C size: 461

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 390*

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

```rust
add(edit circular, str, str) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 105
- Transpiled C size: 467

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### add - concatenate two strings
*Defined in: std/core/string.s line 390*

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

```rust
add(new CHARS, cstr _s1, cstr _s2) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 91
- Transpiled C size: 440

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
*Defined in: std/core/string.s line 390*

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

```rust
add(new CHARS, cstr _s1, str) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 95
- Transpiled C size: 446

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
*Defined in: std/core/string.s line 390*

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

```rust
add(new CHARS, str, cstr _s2) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 95
- Transpiled C size: 446

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
*Defined in: std/core/string.s line 390*

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

```rust
add(new CHARS, str, str) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 99
- Transpiled C size: 452

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
*Defined in: std/sci/vec.s line 93*

Grabs a FLOATS allocator effect to store the result.

```rust
add(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 49

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### add - vector addition
*Defined in: std/sci/vec.s line 93*

Grabs a FLOATS allocator effect to store the result.

```rust
add(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 49

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### add - vector addition
*Defined in: std/sci/vec.s line 93*

Grabs a FLOATS allocator effect to store the result.

```rust
add(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 34

Potential errors:

10. allocation failed
2. null pointer


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### add - vector addition
*Defined in: std/sci/vec.s line 82*

Grabs a FLOATS allocator effect to store the result.

```rust
add(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### add - vector addition
*Defined in: std/sci/vec.s line 82*

Grabs a FLOATS allocator effect to store the result.

```rust
add(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
63. different vector sizes

### add - vector addition
*Defined in: std/sci/vec.s line 82*

Grabs a FLOATS allocator effect to store the result.

```rust
add(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### add - vector addition
*Defined in: std/sci/vec.s line 82*

Grabs a FLOATS allocator effect to store the result.

```rust
add(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
63. different vector sizes

### add - vector addition
*Defined in: std/sci/vec.s line 82*

Grabs a FLOATS allocator effect to store the result.

```rust
add(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 210

Potential errors:

10. allocation failed
2. null pointer


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### add - vector addition
*Defined in: std/sci/vec.s line 82*

Grabs a FLOATS allocator effect to store the result.

```rust
add(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 248

Potential errors:

10. allocation failed
2. null pointer
63. different vector sizes


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(nat _x, nat ptr _y) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(int _x, int ptr _y) -> (int)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(float _x, float ptr _y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(nat ptr _x, nat _y) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(nat ptr _x, nat ptr _y) -> (nat)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(int ptr _x, int _y) -> (int)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(int ptr _x, int ptr _y) -> (int)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(float ptr _x, float _y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(float ptr _x, float ptr _y) -> (float)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

# mul
### mul - multiply with
*Defined in: std/core/numbers.s line 75*

Multiplies two numbers of the same type. This is an overload for the * operator.

```rust
mul(nat x, nat y) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### mul - multiply with
*Defined in: std/core/numbers.s line 75*

Multiplies two numbers of the same type. This is an overload for the * operator.

```rust
mul(int x, int y) -> (int)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### mul - multiply with
*Defined in: std/core/numbers.s line 75*

Multiplies two numbers of the same type. This is an overload for the * operator.

```rust
mul(float x, float y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### mul - vector multiplication
*Defined in: std/sci/vec.s line 129*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 49

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### mul - vector multiplication
*Defined in: std/sci/vec.s line 129*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 49

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### mul - vector multiplication
*Defined in: std/sci/vec.s line 129*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 34

Potential errors:

10. allocation failed
2. null pointer


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - vector multiplication
*Defined in: std/sci/vec.s line 118*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### mul - vector multiplication
*Defined in: std/sci/vec.s line 118*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
63. different vector sizes

### mul - vector multiplication
*Defined in: std/sci/vec.s line 118*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### mul - vector multiplication
*Defined in: std/sci/vec.s line 118*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
63. different vector sizes

### mul - vector multiplication
*Defined in: std/sci/vec.s line 118*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 210

Potential errors:

10. allocation failed
2. null pointer


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - vector multiplication
*Defined in: std/sci/vec.s line 118*

Grabs a FLOATS allocator effect to store the result.

```rust
mul(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 248

Potential errors:

10. allocation failed
2. null pointer
63. different vector sizes


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 79*

```rust
mul(edit circular, coo, mat) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 520

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
2. null pointer
67. row out of bounds
68. column out of bounds
71. inner dimensions must agree
17. does not fit in circular arena

### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 79*

```rust
mul(edit arena, coo, mat) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 520

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
2. null pointer
67. row out of bounds
68. column out of bounds
71. inner dimensions must agree
16. arena is out of space

### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 79*

```rust
mul(new FLOATS, coo, mat) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 505

Potential errors:

2. null pointer
67. row out of bounds
68. column out of bounds
71. inner dimensions must agree
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 69*

*Warning: the expression `self(v)*m` yields wrong values

```rust
mul(edit circular, vec, coo) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 46
- Transpiled C size: 388

Potential errors:

17. does not fit in circular arena
2. null pointer
70. vector length must match matrix rows
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 69*

*Warning: the expression `self(v)*m` yields wrong values

```rust
mul(edit arena, vec, coo) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 46
- Transpiled C size: 388

Potential errors:

16. arena is out of space
2. null pointer
70. vector length must match matrix rows
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 69*

*Warning: the expression `self(v)*m` yields wrong values

```rust
mul(new FLOATS, vec, coo) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 373

Potential errors:

2. null pointer
70. vector length must match matrix rows
10. allocation failed
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 61*

```rust
mul(edit circular, coo, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 388

Potential errors:

17. does not fit in circular arena
2. null pointer
69. matrix columns must match vector length
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
15. out of bounds

### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 61*

```rust
mul(edit arena, coo, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 388

Potential errors:

16. arena is out of space
2. null pointer
69. matrix columns must match vector length
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
15. out of bounds

### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 61*

```rust
mul(new FLOATS, coo, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 373

Potential errors:

2. null pointer
69. matrix columns must match vector length
10. allocation failed
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 123*

Grabs an allocator for the result as an effect.

```rust
mul(edit circular, mat, mat) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 85
- Transpiled C size: 596

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
2. null pointer
17. does not fit in circular arena
67. row out of bounds
68. column out of bounds
71. inner dimensions must agree

### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 123*

Grabs an allocator for the result as an effect.

```rust
mul(edit arena, mat, mat) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 85
- Transpiled C size: 596

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
2. null pointer
16. arena is out of space
67. row out of bounds
68. column out of bounds
71. inner dimensions must agree

### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 123*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, mat, mat) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 581

Potential errors:

2. null pointer
67. row out of bounds
68. column out of bounds
71. inner dimensions must agree
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 111*

Grabs an allocator for the result as an effect.

```rust
mul(edit circular, vec, mat) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 438

Potential errors:

17. does not fit in circular arena
2. null pointer
70. vector length must match matrix rows
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 111*

Grabs an allocator for the result as an effect.

```rust
mul(edit arena, vec, mat) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 438

Potential errors:

16. arena is out of space
2. null pointer
70. vector length must match matrix rows
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
15. out of bounds

### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 111*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, vec, mat) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 54
- Transpiled C size: 423

Potential errors:

10. allocation failed
2. null pointer
70. vector length must match matrix rows
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 99*

Grabs an allocator for the result as an effect.

```rust
mul(edit circular, mat, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 438

Potential errors:

17. does not fit in circular arena
2. null pointer
69. matrix columns must match vector length
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
15. out of bounds

### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 99*

Grabs an allocator for the result as an effect.

```rust
mul(edit arena, mat, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 438

Potential errors:

16. arena is out of space
2. null pointer
69. matrix columns must match vector length
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
15. out of bounds

### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 99*

Grabs an allocator for the result as an effect.

```rust
mul(new FLOATS, mat, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 54
- Transpiled C size: 423

Potential errors:

10. allocation failed
2. null pointer
69. matrix columns must match vector length
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(float _x, float ptr _y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(nat ptr _x, nat _y) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(nat ptr _x, nat ptr _y) -> (nat)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(int ptr _x, int _y) -> (int)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(int ptr _x, int ptr _y) -> (int)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(float ptr _x, float _y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(float ptr _x, float ptr _y) -> (float)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(nat _x, nat ptr _y) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(int _x, int ptr _y) -> (int)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

# div
### div - divide by
*Defined in: std/core/numbers.s line 83*

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

```rust
div(nat x, nat y) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 46

Potential errors:

4. division by zero

### div - divide by
*Defined in: std/core/numbers.s line 83*

Divides two numbers of the same type. This is an overload for the / operator.

```rust
div(nat x, nat y, "unsafe_assume_nonzero") -> (nat)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19


### div - divide by
*Defined in: std/core/numbers.s line 83*

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

```rust
div(int x, int y) -> (int)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 46

Potential errors:

4. division by zero

### div - divide by
*Defined in: std/core/numbers.s line 83*

Divides two numbers of the same type. This is an overload for the / operator.

```rust
div(int x, int y, "unsafe_assume_nonzero") -> (int)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19


### div - divide by
*Defined in: std/core/numbers.s line 83*

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

```rust
div(float x, float y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 46

Potential errors:

4. division by zero

### div - divide by
*Defined in: std/core/numbers.s line 83*

Divides two numbers of the same type. This is an overload for the / operator.

```rust
div(float x, float y, "unsafe_assume_nonzero") -> (float)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19


### div - vector division
*Defined in: std/sci/vec.s line 167*

Grabs a FLOATS allocator effect to store the result.

```rust
div(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 226

Potential errors:

17. does not fit in circular arena
2. null pointer
4. division by zero
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### div - vector division
*Defined in: std/sci/vec.s line 167*

Grabs a FLOATS allocator effect to store the result.

```rust
div(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 226

Potential errors:

16. arena is out of space
2. null pointer
4. division by zero
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### div - vector division
*Defined in: std/sci/vec.s line 167*

Grabs a FLOATS allocator effect to store the result.

```rust
div(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 211

Potential errors:

10. allocation failed
2. null pointer
4. division by zero


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### div - vector division
*Defined in: std/sci/vec.s line 155*

Grabs a FLOATS allocator effect to store the result.

```rust
div(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 240

Potential errors:

17. does not fit in circular arena
2. null pointer
4. division by zero
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### div - vector division
*Defined in: std/sci/vec.s line 155*

Grabs a FLOATS allocator effect to store the result.

```rust
div(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 278

Potential errors:

17. does not fit in circular arena
2. null pointer
4. division by zero
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
63. different vector sizes

### div - vector division
*Defined in: std/sci/vec.s line 155*

Grabs a FLOATS allocator effect to store the result.

```rust
div(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 240

Potential errors:

16. arena is out of space
2. null pointer
4. division by zero
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### div - vector division
*Defined in: std/sci/vec.s line 155*

Grabs a FLOATS allocator effect to store the result.

```rust
div(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 278

Potential errors:

16. arena is out of space
2. null pointer
4. division by zero
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
63. different vector sizes

### div - vector division
*Defined in: std/sci/vec.s line 155*

Grabs a FLOATS allocator effect to store the result.

```rust
div(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 31
- Transpiled C size: 225

Potential errors:

10. allocation failed
2. null pointer
4. division by zero


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### div - vector division
*Defined in: std/sci/vec.s line 155*

Grabs a FLOATS allocator effect to store the result.

```rust
div(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 263

Potential errors:

10. allocation failed
2. null pointer
4. division by zero
63. different vector sizes


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(nat _x, nat ptr _y) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer
4. division by zero

### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(int _x, int ptr _y) -> (int)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer
4. division by zero

### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(float _x, float ptr _y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer
4. division by zero

### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(nat ptr _x, nat _y) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer
4. division by zero

### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(nat ptr _x, nat ptr _y) -> (nat)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 90

Potential errors:

2. null pointer
4. division by zero

### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(int ptr _x, int _y) -> (int)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer
4. division by zero

### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(int ptr _x, int ptr _y) -> (int)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 90

Potential errors:

2. null pointer
4. division by zero

### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(float ptr _x, float _y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer
4. division by zero

### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(float ptr _x, float ptr _y) -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 90

Potential errors:

2. null pointer
4. division by zero

# mod
### mod - modulo by
*Defined in: std/core/numbers.s line 96*

Computes the modulo between two natural numbers. This is an overload for the % operator.

```rust
mod(nat x, nat y) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 36

Potential errors:

5. modulo by zero

### mod - modulo by
*Defined in: std/core/numbers.s line 96*

Computes the modulo between two natural numbers. This is an overload for the % operator.

```rust
mod(nat x, nat y, "unsafe_assume_nonzero") -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


# lt
### lt - less than
*Defined in: std/core/numbers.s line 106*

Compares two numbers of the same type. This is an overload for the < operator.

```rust
lt(nat x, nat y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### lt - less than
*Defined in: std/core/numbers.s line 106*

Compares two numbers of the same type. This is an overload for the < operator.

```rust
lt(int x, int y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### lt - less than
*Defined in: std/core/numbers.s line 106*

Compares two numbers of the same type. This is an overload for the < operator.

```rust
lt(float x, float y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(nat _x, nat ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(int _x, int ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(float _x, float ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(nat ptr _x, nat _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(nat ptr _x, nat ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(int ptr _x, int _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(int ptr _x, int ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(float ptr _x, float _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(float ptr _x, float ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

# gt
### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s line 114*

greater than

```rust
gt(nat x, nat y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s line 114*

greater than

```rust
gt(int x, int y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s line 114*

greater than

```rust
gt(float x, float y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(nat _x, nat ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(int _x, int ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(float _x, float ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(nat ptr _x, nat _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(nat ptr _x, nat ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(int ptr _x, int _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(int ptr _x, int ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(float ptr _x, float _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(float ptr _x, float ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

# le
### le - less than or equal to
*Defined in: std/core/numbers.s line 122*

Compares two numbers of the same type. This is an overload for the <= operator.

```rust
le(nat x, nat y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### le - less than or equal to
*Defined in: std/core/numbers.s line 122*

Compares two numbers of the same type. This is an overload for the <= operator.

```rust
le(int x, int y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### le - less than or equal to
*Defined in: std/core/numbers.s line 122*

Compares two numbers of the same type. This is an overload for the <= operator.

```rust
le(float x, float y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(nat _x, nat ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(int _x, int ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(float _x, float ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(nat ptr _x, nat _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(nat ptr _x, nat ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(int ptr _x, int _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(int ptr _x, int ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(float ptr _x, float _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(float ptr _x, float ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

# ge
### ge - greater than or equal to
*Defined in: std/core/numbers.s line 130*

Compares two numbers of the same type. This is an overload for the >= operator.

```rust
ge(nat x, nat y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### ge - greater than or equal to
*Defined in: std/core/numbers.s line 130*

Compares two numbers of the same type. This is an overload for the >= operator.

```rust
ge(int x, int y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### ge - greater than or equal to
*Defined in: std/core/numbers.s line 130*

Compares two numbers of the same type. This is an overload for the >= operator.

```rust
ge(float x, float y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19


### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(nat _x, nat ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(int _x, int ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(float _x, float ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(nat ptr _x, nat _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(nat ptr _x, nat ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(int ptr _x, int _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(int ptr _x, int ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(float ptr _x, float _y) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(float ptr _x, float ptr _y) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

# sub
### sub - subtract by
*Defined in: std/core/numbers.s line 150*

Subtracts two natural numbers without underflow check. This is an overload for the - operator,
for example used like below. This overload never fails and instead adds 0xFFFFFFFFFFFFFFFF to
the result if it would produce a negative.
```rust
0-(1 assume_smaller)
```

```rust
sub(nat x, nat y, "assume_smaller") -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### sub - subtract by
*Defined in: std/core/numbers.s line 138*

Subtracts two numbers of the same type. This is an overload for the - operator.
Natural numbers are safeguarded against acquiring negative results, which would overflow.

```rust
sub(nat x, nat y) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

Potential errors:

6. nat subtraction would yield a negative

### sub - subtract by
*Defined in: std/core/numbers.s line 138*

Subtracts two numbers of the same type. This is an overload for the - operator.

```rust
sub(int x, int y) -> (int)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19


### sub - subtract by
*Defined in: std/core/numbers.s line 138*

Subtracts two numbers of the same type. This is an overload for the - operator.

```rust
sub(float x, float y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19


### sub - vector subtraction
*Defined in: std/sci/vec.s line 109*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 215

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### sub - vector subtraction
*Defined in: std/sci/vec.s line 109*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 215

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### sub - vector subtraction
*Defined in: std/sci/vec.s line 109*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 200

Potential errors:

10. allocation failed
2. null pointer


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### sub - vector subtraction
*Defined in: std/sci/vec.s line 98*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### sub - vector subtraction
*Defined in: std/sci/vec.s line 98*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
63. different vector sizes

### sub - vector subtraction
*Defined in: std/sci/vec.s line 98*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### sub - vector subtraction
*Defined in: std/sci/vec.s line 98*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
63. different vector sizes

### sub - vector subtraction
*Defined in: std/sci/vec.s line 98*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 210

Potential errors:

10. allocation failed
2. null pointer


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### sub - vector subtraction
*Defined in: std/sci/vec.s line 98*

Grabs a FLOATS allocator effect to store the result.

```rust
sub(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 248

Potential errors:

10. allocation failed
2. null pointer
63. different vector sizes


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(nat _x, nat ptr _y) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer
6. nat subtraction would yield a negative

### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(int _x, int ptr _y) -> (int)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(float _x, float ptr _y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(nat ptr _x, nat _y) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer
6. nat subtraction would yield a negative

### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(nat ptr _x, nat ptr _y) -> (nat)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 90

Potential errors:

2. null pointer
6. nat subtraction would yield a negative

### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(int ptr _x, int _y) -> (int)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(int ptr _x, int ptr _y) -> (int)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(float ptr _x, float _y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

Potential errors:

2. null pointer

### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(float ptr _x, float ptr _y) -> (float)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

Potential errors:

2. null pointer

# pow
### pow - exponentiate by
*Defined in: std/core/numbers.s line 161*

Exponentiates a natural number by another.

```rust
pow(nat x, nat y) -> (mut nat)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 84


### pow
*Defined in: std/sci/math.s line 89*

```rust
pow(float x, float y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 12


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 135*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
63. different vector sizes

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 135*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 135*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
63. different vector sizes

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 135*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 210

Potential errors:

10. allocation failed
2. null pointer


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### pow - vector exponentiation
*Defined in: std/sci/vec.s line 135*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 248

Potential errors:

10. allocation failed
2. null pointer
63. different vector sizes


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### pow - vector exponentiation
*Defined in: std/sci/vec.s line 146*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 215

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 146*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 215

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 146*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 200

Potential errors:

10. allocation failed
2. null pointer


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### pow - vector exponentiation
*Defined in: std/sci/vec.s line 135*

Grabs a FLOATS allocator effect to store the result.

```rust
pow(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

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
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3


# unsafe\_console
### unsafe\_console - references the system console unsafely
*Defined in: std/core/print.s line 35*

This is convenient for print debugging by writing `unsafe_console().print ...`
without needing to evoke an effect to pass the normally singleton console.

```rust
unsafe_console() -> (mut console)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


# print
### print - prints a boolean
*Defined in: std/core/print.s line 97*

Automatically ends the line too.

```rust
print(console CLI, false) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 11


### print - prints a boolean
*Defined in: std/core/print.s line 97*

```rust
print(console CLI, false, cstr endl) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 7


### print - prints a boolean
*Defined in: std/core/print.s line 90*

Automatically ends the line too.

```rust
print(console CLI, true) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 11


### print - prints a boolean
*Defined in: std/core/print.s line 90*

```rust
print(console CLI, true, cstr endl) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 7


### print - prints a boolean
*Defined in: std/core/print.s line 83*

Automatically ends the line too.

```rust
print(console CLI, bool value) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 31


### print - prints a boolean
*Defined in: std/core/print.s line 83*

```rust
print(console CLI, bool value, cstr endl) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 27


### print - prints an unsigned integer
*Defined in: std/core/print.s line 76*

Automatically ends the line too.

```rust
print(console CLI, nat value) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 13


### print - prints an unsigned integer
*Defined in: std/core/print.s line 76*

```rust
print(console CLI, nat value, cstr endl) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### print - prints an integer
*Defined in: std/core/print.s line 69*

Automatically ends the line too.

```rust
print(console CLI, int value) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 13


### print - prints an integer
*Defined in: std/core/print.s line 69*

```rust
print(console CLI, int value, cstr endl) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### print - prints a float
*Defined in: std/core/print.s line 61*

To pre-specified 6 decimal digits.
Automatically ends the line too.

```rust
print(console CLI, float value) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 13


### print - prints a float
*Defined in: std/core/print.s line 61*

To pre-specified 6 decimal digits.

```rust
print(console CLI, float value, cstr endl) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### print - prints a cstr
*Defined in: std/core/print.s line 54*

Automatically ends the line too.

```rust
print(console CLI, cstr value) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 13


### print - prints a cstr
*Defined in: std/core/print.s line 54*

```rust
print(console CLI, cstr value, cstr endl) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### print - flushes the print buffer on the console
*Defined in: std/core/print.s line 43*

```rust
print(console CLI, "flush") -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 5


### print - print a character
*Defined in: std/core/string.s line 323*

Ends the line too.

```rust
print(console CLI, char c) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 13


### print - print a character
*Defined in: std/core/string.s line 323*

```rust
print(console CLI, char c, cstr endl) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### print - print a string
*Defined in: std/core/string.s line 309*

Ends the line too.

```rust
print(console CLI, str) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 17


### print - print a string
*Defined in: std/core/string.s line 309*

```rust
print(console CLI, str, cstr endl) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 13


### print - print sparse matrix
*Defined in: std/sci/coo.s line 95*

Prints it as coordinate as list: (i, j): v

```rust
print(console CLI, coo) -> () with effects CLI
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 182

No failing errors, but can catch these intercepted ones:

2. null pointer

### print - print sparse matrix
*Defined in: std/sci/coo.s line 95*

Prints it as coordinate as list: (i, j): v

```rust
print(console CLI, coo, cstr endl) -> () with effects CLI
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 178

No failing errors, but can catch these intercepted ones:

2. null pointer

### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s line 137*

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

```rust
print(console CLI, mat) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 88
- Transpiled C size: 838

Potential errors:

2. null pointer
6. nat subtraction would yield a negative

### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s line 137*

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

```rust
print(console CLI, mat, cstr endl) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 87
- Transpiled C size: 834

Potential errors:

2. null pointer
6. nat subtraction would yield a negative

### print - print a vector
*Defined in: std/sci/vec.s line 246*

Prints as a row, such as [ 1.0  2.0  3.0 ]

```rust
print(console CLI, vec) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 234

Potential errors:

2. null pointer
6. nat subtraction would yield a negative

### print - print a vector
*Defined in: std/sci/vec.s line 246*

Prints as a row, such as [ 1.0  2.0  3.0 ]

```rust
print(console CLI, vec, cstr endl) -> () with effects CLI
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 31
- Transpiled C size: 230

Potential errors:

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
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7


### nn - no new line
*Defined in: std/core/print.s line 47*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(int) -> (int value, cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7


### nn - no new line
*Defined in: std/core/print.s line 47*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(float) -> (float value, cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7


### nn - no new line
*Defined in: std/core/print.s line 47*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

```rust
nn(cstr) -> (cstr value, cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7


### nn - no new line
*Defined in: std/core/string.s line 383*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without a new line.

```rust
nn(str) -> (str, cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 7


### nn - no new line
*Defined in: std/sci/vec.s line 239*

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without a new line.

```rust
nn(vec) -> (vec, cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 7


# supports\_ansi
### supports\_ansi
*Defined in: std/core/print.s line 104*

```rust
supports_ansi(console) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 9


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[supports_ansi()]`*
# colors
### colors
*Defined in: std/core/print.s line 109*

```rust
colors(console) -> (colors)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 13



Returned values defer use of the following functions:
```rust
```
# set
### set
*Defined in: std/core/print.s line 156*

```rust
set(colors, "bg_white") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 154*

```rust
set(colors, "bg_cyan") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 152*

```rust
set(colors, "bg_magenta") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 150*

```rust
set(colors, "bg_blue") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 148*

```rust
set(colors, "bg_yellow") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 146*

```rust
set(colors, "bg_green") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 144*

```rust
set(colors, "bg_red") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 142*

```rust
set(colors, "bright_white") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 140*

```rust
set(colors, "bright_cyan") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 138*

```rust
set(colors, "bright_magenta") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 136*

```rust
set(colors, "bright_blue") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 134*

```rust
set(colors, "bright_yellow") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 132*

```rust
set(colors, "bright_green") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 130*

```rust
set(colors, "bright_red") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 128*

```rust
set(colors, "black") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 126*

```rust
set(colors, "white") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 124*

```rust
set(colors, "cyan") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 122*

```rust
set(colors, "magenta") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 120*

```rust
set(colors, "blue") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 118*

```rust
set(colors, "yellow") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 116*

```rust
set(colors, "green") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 114*

```rust
set(colors, "red") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 182*

```rust
set(colors, "reset_underline") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 180*

```rust
set(colors, "reset_bold") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 178*

```rust
set(colors, "reset_bg") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 176*

```rust
set(colors, "reset_color") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 174*

```rust
set(colors, "reset") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 172*

```rust
set(colors, "strikethrough") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 170*

```rust
set(colors, "reverse") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 168*

```rust
set(colors, "blink") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 166*

```rust
set(colors, "underline") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 164*

```rust
set(colors, "italic") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 162*

```rust
set(colors, "dim") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 160*

```rust
set(colors, "bold") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


### set
*Defined in: std/core/print.s line 158*

```rust
set(colors, "bg_black") -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11


# exists
### exists - checks that a pointer exists
*Defined in: std/core/convert.s line 58*

```rust
exists(any ptr) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 9


### exists - checks whether a cstr is not zero-initialized
*Defined in: std/core/string.s line 30*

```rust
exists(cstr) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 9


### exists
*Defined in: std/graphics.s line 153*

```rust
exists(Texture) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 31


# bits
### bits - bit representation
*Defined in: std/core/convert.s line 76*

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

```rust
bits(float) -> (bits)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 26


### bits - bit representation
*Defined in: std/core/convert.s line 69*

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

```rust
bits(int) -> (bits)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 15


### bits - bit representation
*Defined in: std/core/convert.s line 63*

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

```rust
bits(nat) -> (bits)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


# lshift
### lshift - left shift
*Defined in: std/core/convert.s line 102*

```rust
lshift(bits, nat y) -> (bits)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19


# rshift
### rshift - right shift
*Defined in: std/core/convert.s line 107*

```rust
rshift(bits, nat y) -> (bits)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19


# xor
### xor - bitwise xor
*Defined in: std/core/convert.s line 112*

```rust
xor(bits, bits) -> (bits)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 19


# band
### band - bitwise and
*Defined in: std/core/convert.s line 117*

```rust
band(bits, bits) -> (bits)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 19


# bor
### bor - bitwise or
*Defined in: std/core/convert.s line 122*

```rust
bor(bits, bits) -> (bits)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 19


# of
### of - yields a pair of nats
*Defined in: std/core/range.s line 34*

Represents the range [from, from+length] where 'from' and 'length' are the arguments.

```rust
of(nat from, "len", nat length) -> (nat from, nat)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 13


### of - yields a pair of nats
*Defined in: std/core/range.s line 29*

Represents the range [from, to] where 'from' and 'to' are the arguments.

```rust
of(nat from, "upto", nat to) -> (nat from, nat)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 17


### of - yields a pair of nats
*Defined in: std/core/range.s line 24*

Represents the range [from, to) where 'from' and 'to' are the arguments.

```rust
of(nat from, "to", nat to) -> (nat from, nat to)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3


### of - yields a pair of nats
*Defined in: std/core/range.s line 19*

Represents the range [0, to) where 'to' its  its arguments.

```rust
of(nat) -> (nat, nat to)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7


# range
### range - constructs a range
*Defined in: std/core/range.s line 39*

Endpoints are natural numbers (unsigned integers). This is handy for several kinds of iteration.

```rust
range(nat _from, nat to) -> (edit range)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 11


# next
### next - next range number
*Defined in: std/core/range.s line 45*

This increments the r.from position and returns the previous one.

```rust
next(edit range) -> (nat)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 48

Potential errors:

9. iteration end

### next
*Defined in: std/map.s line 54*

```rust
next(robinhood_nat_entry[], mut nat pos) -> (mut nat)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 346

Potential errors:

2. null pointer
15. out of bounds

### next
*Defined in: std/map.s line 54*

```rust
next(robinhood_str_entry[], mut nat pos) -> (mut str)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 556

Potential errors:

2. null pointer
15. out of bounds

### next - Computes the next random number of a Rand sequence.
*Defined in: std/rand.s line 88*

```rust
next(mut Rand) -> (float)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 79


# get
### get - immutable pointer to buffer element
*Defined in: std/core/array.s line 100*

This uses pointer arithmetics to index the buffer, basically performing the operation
`i*buffer.unsafe_align+buffer.unsafe_offset`. Fresh buffers have zero offset and alignment
equal to element size, but more complicated situations arise in situations where sub-buffers
are retrieved or sliced.

```rust
get(any[], nat i) -> (any ptr {follows any ptr buffer.unsafe_ptr})
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 72

Potential errors:

15. out of bounds

### get - immutable pointer to buffer element
*Defined in: std/core/array.s line 100*

This uses pointer arithmetics to index the buffer, basically performing the operation
`i*buffer.unsafe_align+buffer.unsafe_offset`. Fresh buffers have zero offset and alignment
equal to element size, but more complicated situations arise in situations where sub-buffers
are retrieved or sliced.

*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

```rust
get(any[], nat i, "unsafe_assume_inbounds") -> (any ptr {follows any ptr buffer.unsafe_ptr})
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 49


### get - assert that a number plus range start lies in the range
*Defined in: std/core/range.s line 54*

The item itself is returned. This lets the range be used as an iterator
per a pattern like `for i in range 10 ...`.

```rust
get(range, nat _pos) -> (nat)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 40

Potential errors:

9. iteration end

### get - a character in a string
*Defined in: std/core/string.s line 316*

```rust
get(str, nat i) -> (char ptr)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 46

Potential errors:

15. out of bounds

### get - a character in a string
*Defined in: std/core/string.s line 316*

```rust
get(str, nat i, "unsafe_assume_inbounds") -> (char ptr)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 23


### get - get a list element pointer
*Defined in: std/core/allocators.s line 102*

```rust
get(list, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 53

Potential errors:

15. out of bounds

### get - get a list element pointer
*Defined in: std/core/allocators.s line 102*

```rust
get(list, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 53

Potential errors:

15. out of bounds

### get - get a list element pointer
*Defined in: std/core/allocators.s line 102*

```rust
get(circular, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```
Complexity:

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 30

Potential errors:

15. out of bounds

### get - get a list element pointer
*Defined in: std/core/allocators.s line 63*

```rust
get(arena, nat pos) -> (any ptr {follows any ptr l.buf.unsafe_ptr})
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 53

Potential errors:

15. out of bounds

### get - get a list element pointer
*Defined in: std/core/allocators.s line 63*


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

```rust
get(arena, nat pos, "unsafe_assume_inbounds") -> (any ptr {follows any ptr l.buf.unsafe_ptr})
```
Complexity:

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 19


### get - get a hash map entry
*Defined in: std/map.s line 44*

Implemented for string or cstr keys but buffer of any values.

```rust
get(robinhood_nat_entry[], any[], nat key) -> (any ptr {follows any ptr values.unsafe_ptr})
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 57

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
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 86

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
Complexity:

- Level of abstraction: 1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 80

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
54. index not found
15. out of bounds

### get
*Defined in: std/io.s line 26*

```rust
get(edit circular, edit open, nat) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 46

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
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

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
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

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
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

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
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

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
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

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
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 46

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
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

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
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

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
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

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
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

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
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

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
Complexity:

- Level of abstraction: 2 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 32

Potential errors:

52. not open dir
53. end of dir

### get - a get request
*Defined in: std/net/fetch.s line 88*

```rust
get(edit circular, cstr url) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 75

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
59. curl initialization failed
60. out of memory while reading response
15. out of bounds

### get - a get request
*Defined in: std/net/fetch.s line 88*

```rust
get(edit circular, str) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 81

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### get - a get request
*Defined in: std/net/fetch.s line 88*

```rust
get(edit arena, cstr url) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 75

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
59. curl initialization failed
60. out of memory while reading response
15. out of bounds

### get - a get request
*Defined in: std/net/fetch.s line 88*

```rust
get(edit arena, str) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 81

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### get - a get request
*Defined in: std/net/fetch.s line 88*

```rust
get(new CHARS, cstr url) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 60

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
59. curl initialization failed
60. out of memory while reading response
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### get - a get request
*Defined in: std/net/fetch.s line 88*

```rust
get(new CHARS, str) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 66

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### get - get a vector element at given position
*Defined in: std/sci/vec.s line 67*

```rust
get(vec, nat i) -> (float ptr)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 60

Potential errors:

15. out of bounds

### get - get a vector element at given position
*Defined in: std/sci/vec.s line 67*


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

```rust
get(vec, nat i, "unsafe_assume_inbounds") -> (float ptr)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 37


### get - get a sparse element
*Defined in: std/sci/coo.s line 43*

```rust
get(coo, nat k) -> (sparse_element ptr)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 50

Potential errors:

15. out of bounds

### get - get a sparse element
*Defined in: std/sci/coo.s line 43*


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

```rust
get(coo, nat k, "unsafe_assume_inbounds") -> (sparse_element ptr)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 27


### get - reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 65*

```rust
get(mat, nat i, nat j) -> (float ptr)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 103

Potential errors:

67. row out of bounds
68. column out of bounds

### get - reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 65*


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

```rust
get(mat, nat i, nat j, "unsafe_assume_inbounds") -> (float ptr)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 57


# KB
### KB - kilobytes to bytes
*Defined in: std/core/units.s line 19*

```rust
KB(nat) -> (nat)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 17


# MB
### MB - megabytes to bytes
*Defined in: std/core/units.s line 23*

```rust
MB(nat) -> (nat)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 31


# GB
### GB - gigabytes to bytes
*Defined in: std/core/units.s line 27*

```rust
GB(nat) -> (nat)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 45


# alloc
### alloc - allocate a char[] buffer
*Defined in: std/core/array.s line 59*

```rust
alloc(nat) -> (edit char[])
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 58

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
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

```rust
alloc(edit any[]) -> (edit any[])
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 217

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
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

```rust
alloc(edit any[], "unsafe_leaky") -> (edit any[])
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 190

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
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

```rust
alloc(edit any[], "dirty") -> (edit any[])
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 236

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
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

```rust
alloc(edit any[], "dirty", "unsafe_leaky") -> (edit any[])
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 209

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
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

```rust
alloc(edit any[], "unsafe_first") -> (edit any[])
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 25
- Transpiled C size: 177

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
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

```rust
alloc(edit any[], "unsafe_first", "unsafe_leaky") -> (edit any[])
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 150

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
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size) -> (edit any[])
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 209

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
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size, "unsafe_leaky") -> (edit any[])
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 25
- Transpiled C size: 182

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
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size, "dirty") -> (edit any[])
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 228

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
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size, "dirty", "unsafe_leaky") -> (edit any[])
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 201

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
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size, "unsafe_first") -> (edit any[])
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 169

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
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

```rust
alloc(edit any[], nat size, "unsafe_first", "unsafe_leaky") -> (edit any[])
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 142

Potential errors:

10. allocation failed


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - allocate memory
*Defined in: std/unsafe.s line 25*

Allocates a memory of the provided size in bytes.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
alloc(nat) -> (mut any ptr)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 39

Potential errors:

10. allocation failed

### alloc
*Defined in: std/core/string.s line 26*

```rust
alloc(new CHARS, nat length) -> (edit allocated) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 94

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### alloc - list allocation
*Defined in: std/core/allocators.s line 138*

Creates room for one element.

```rust
alloc(edit list) -> (edit allocated)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 214

Potential errors:

11. reallocation failed
4. division by zero
14. cannot resize an unallocated or freed buffer

### alloc - list allocation
*Defined in: std/core/allocators.s line 138*

```rust
alloc(edit list, nat length) -> (edit allocated)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 206

Potential errors:

11. reallocation failed
4. division by zero
14. cannot resize an unallocated or freed buffer

### alloc - list allocation
*Defined in: std/core/allocators.s line 138*

Creates room for one element.

```rust
alloc(edit list) -> (edit allocated)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 214

Potential errors:

11. reallocation failed
4. division by zero
14. cannot resize an unallocated or freed buffer

### alloc - list allocation
*Defined in: std/core/allocators.s line 138*

```rust
alloc(edit list, nat length) -> (edit allocated)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 206

Potential errors:

11. reallocation failed
4. division by zero
14. cannot resize an unallocated or freed buffer

### alloc - circular arena allocation
*Defined in: std/core/allocators.s line 124*

Creates room for one element.

```rust
alloc(edit circular) -> (edit allocated)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 165

Potential errors:

17. does not fit in circular arena

### alloc - circular arena allocation
*Defined in: std/core/allocators.s line 124*

```rust
alloc(edit circular, nat length) -> (edit allocated)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 157

Potential errors:

17. does not fit in circular arena

### alloc - arena allocation
*Defined in: std/core/allocators.s line 113*

Creates room for one element.

```rust
alloc(edit arena) -> (edit allocated)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 116

Potential errors:

16. arena is out of space

### alloc - arena allocation
*Defined in: std/core/allocators.s line 113*

```rust
alloc(edit arena, nat length) -> (edit allocated)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 108

Potential errors:

16. arena is out of space

### alloc
*Defined in: std/tag.s line 40*

```rust
alloc(cstr) -> (mut char[])
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 98
- Transpiled C size: 627

Potential errors:

2. null pointer
10. allocation failed
74. empty input name
75. cannot tag a structural type
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
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 112
- Transpiled C size: 755

Potential errors:

2. null pointer
10. allocation failed
74. empty input name
75. cannot tag a structural type
13. cannot resize buffers with alloc; it promises no data reallocation
76. tag surface cannot be structural type
12. cannot allocate a buffer of unsized type
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
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 163

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
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 101

Potential errors:

11. reallocation failed

# last
### last - mutable pointer to the last buffer element
*Defined in: std/core/array.s line 81*

```rust
last(edit any[]) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 111

Potential errors:

15. out of bounds

# mutget
### mutget - mutable pointer to buffer element
*Defined in: std/core/array.s line 87*

This uses pointer arithmetics to index the buffer, basically performing the operation
`i*buffer.unsafe_align+buffer.unsafe_offset`. Fresh buffers have zero offset and alignment
equal to element size, but more complicated situations arise in situations where sub-buffers
are retrieved or sliced.

```rust
mutget(edit any[], nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 72

Potential errors:

15. out of bounds

### mutget - mutable pointer to buffer element
*Defined in: std/core/array.s line 87*

This uses pointer arithmetics to index the buffer, basically performing the operation
`i*buffer.unsafe_align+buffer.unsafe_offset`. Fresh buffers have zero offset and alignment
equal to element size, but more complicated situations arise in situations where sub-buffers
are retrieved or sliced.

*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

```rust
mutget(edit any[], nat i, "unsafe_assume_inbounds") -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 49


### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 109*

```rust
mutget(edit list, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```
Complexity:

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 34

Potential errors:

15. out of bounds

### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 109*

```rust
mutget(edit list, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```
Complexity:

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 34

Potential errors:

15. out of bounds

### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 109*

```rust
mutget(edit circular, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```
Complexity:

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 34

Potential errors:

15. out of bounds

### mutget - get a mutable list element pointer
*Defined in: std/core/allocators.s line 73*

```rust
mutget(edit arena, nat pos) -> (mut any ptr {follows any ptr l.buf.unsafe_ptr})
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 57

Potential errors:

15. out of bounds

### mutget - get a mutable list element pointer
*Defined in: std/core/allocators.s line 73*


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

```rust
mutget(edit arena, nat pos, "unsafe_assume_inbounds") -> (mut any ptr {follows any ptr l.buf.unsafe_ptr})
```
Complexity:

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 23


### mutget - get a mutable hash map entry
*Defined in: std/map.s line 49*

Implemented for string or cstr keys but buffer of any values.

```rust
mutget(edit robinhood_nat_entry[], edit any[], nat key) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 65

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
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 94

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
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 88

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
55. string buffer is full
15. out of bounds

### mutget - modify a vector element at given position
*Defined in: std/sci/vec.s line 61*

```rust
mutget(edit vec, nat i) -> (mut float ptr)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 60

Potential errors:

15. out of bounds

### mutget - modify a vector element at given position
*Defined in: std/sci/vec.s line 61*

```rust
mutget(edit vec, nat i, "unsafe_assume_inbounds") -> (mut float ptr)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 37


### mutget - mutable reference to a sparse element
*Defined in: std/sci/coo.s line 52*

```rust
mutget(edit coo, nat k) -> (mut sparse_element ptr)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 50

Potential errors:

15. out of bounds

### mutget - mutable reference to a sparse element
*Defined in: std/sci/coo.s line 52*


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

```rust
mutget(edit coo, nat k, "unsafe_assume_inbounds") -> (mut sparse_element ptr)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 27


### mutget - mutable reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 59*

```rust
mutget(edit mat, nat i, nat j) -> (mut float ptr)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 103

Potential errors:

67. row out of bounds
68. column out of bounds

# len
### len - the number of buffer elements
*Defined in: std/core/array.s line 113*

```rust
len(any[]) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


### len - string length
*Defined in: std/core/string.s line 103*

```rust
len(str) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


### len
*Defined in: std/core/allocators.s line 99*

```rust
len(list) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3


### len
*Defined in: std/core/allocators.s line 99*

```rust
len(list) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3


### len - vectot length
*Defined in: std/sci/vec.s line 57*

```rust
len(vec) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 3


# new
### new - allocations on new bufs
*Defined in: std/core/allocators.s line 21*

```rust
new() -> (new)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3


# arena
### arena
*Defined in: std/core/string.s line 23*

```rust
arena("char__t9t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


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
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 39


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
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 11


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t2721t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t2655t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t2376t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t661t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t619t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t615t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t611t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t4t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 266*

```rust
arena(edit vec) -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 120


# length
### length - allocated arena size
*Defined in: std/core/allocators.s line 48*

This is not the total arena size, but rather the number
of elements actively in use.

```rust
length(arena) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3


# allocated
### allocated
*Defined in: std/core/allocators.s line 54*

```rust
allocated(edit any[], nat pos) -> (edit allocated)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3


# status
### status - convert to a nameless buffer and position pair
*Defined in: std/core/allocators.s line 57*

This unpacking is used to pass an arena's state or allocated
memory data as part of structural input.

```rust
status(allocated) -> (any[] {follows any ptr self.buf.unsafe_ptr}, nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 23


### status - convert to a nameless buffer and position pair
*Defined in: std/core/allocators.s line 57*

This unpacking is used to pass an arena's state or allocated
memory data as part of structural input.

```rust
status(arena) -> (any[] {follows any ptr self.buf.unsafe_ptr}, nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 23


# circular
### circular
*Defined in: std/core/string.s line 24*

```rust
circular("char__t9t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular - circular buffer
*Defined in: std/core/allocators.s line 83*

```rust
circular(edit any[]) -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 15


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t2721t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t2655t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t2376t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t661t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t619t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t615t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t611t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t4t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


# list
### list
*Defined in: std/core/string.s line 25*

```rust
list("char__t9t") -> (edit list)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### list - list buffer management
*Defined in: std/core/allocators.s line 88*

List defined over a mutable buf that is automatically managed and resized.
A capacity is maintained so that resizes are not performed too frequently.

```rust
list(edit any[], "external") -> (edit list)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 47


### list - list buffer management
*Defined in: std/core/allocators.s line 88*

List defined over a mutable buf that is automatically managed and resized.
A capacity is maintained so that resizes are not performed too frequently.

```rust
list(edit any[]) -> (edit list)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 91

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
list("float__t2721t") -> (edit list)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

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
list("float__t2655t") -> (edit list)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

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
list("float__t2376t") -> (edit list)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

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
list("float__t661t") -> (edit list)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

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
list("float__t619t") -> (edit list)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

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
list("float__t615t") -> (edit list)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

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
list("float__t611t") -> (edit list)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

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
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

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
*Defined in: std/core/allocators.s line 150*

```rust
at(edit allocated) -> (mut any ptr {follows any ptr surface.buf.unsafe_ptr})
```
Complexity:

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 34

Potential errors:

15. out of bounds

### at - find or add an item in a robinhood_entry list
*Defined in: std/hash.s line 88*

```rust
at(edit robinhood_nat_entry[], nat _k) -> (mut nat)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 54
- Transpiled C size: 721

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
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 102
- Transpiled C size: 1054

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
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 98
- Transpiled C size: 1048

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
55. string buffer is full
15. out of bounds

### at
*Defined in: std/sci/vec.s line 79*

```rust
at(vec, nat i) -> (float)
```
Complexity:

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 41

Potential errors:

2. null pointer

### at
*Defined in: std/sci/vec.s line 76*

```rust
at(float number, nat i) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


# slice
### slice - get a substring view into a string
*Defined in: std/core/string.s line 330*

This operation does not perform any additional allocations
or memory moves and is thus convenient for parsing code.
Explicitly copy the result to move it away from volatile
memory, such as circular buffers.

```rust
slice(str, nat from, nat to) -> (str)
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 286

Potential errors:

2. null pointer
22. slice out of string bounds
15. out of bounds

### slice - get a substring view into a string
*Defined in: std/core/string.s line 330*

This operation does not perform any additional allocations
or memory moves and is thus convenient for parsing code.
Explicitly copy the result to move it away from volatile
memory, such as circular buffers.

```rust
slice(cstr _s, nat from, nat to) -> (str)
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 280

Potential errors:

2. null pointer
22. slice out of string bounds
15. out of bounds

### slice - a buffer subregion of an arena
*Defined in: std/core/allocators.s line 158*

This allocates a region of a given number of elements
within an arena and returns a buffer interface wrapping
it. It is an alternative to allocating buffers on the
heap.

```rust
slice(edit arena, nat length) -> (mut any[] {follows any ptr surface.buf.unsafe_ptr})
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 173

Potential errors:

16. arena is out of space

# char\_allocator
### new - allocations on new bufs
*Defined in: std/core/allocators.s line 21*

```rust
new() -> (new)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3


### list
*Defined in: std/core/string.s line 25*

```rust
list("char__t9t") -> (edit list)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

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
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/core/string.s line 23*

```rust
arena("char__t9t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


# strdat
### strdat - string data without the buffer storage
*Defined in: std/core/string.s line 35*

```rust
strdat(nat pos, nat length, char first) -> (nat pos, nat length, char first)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3


### strdat
*Defined in: std/mini.s line 57*

```rust
strdat(nat _pos, nat _length) -> (nat16 pos, nat16 length)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 49

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
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 169


### str - a string residing on a buffer
*Defined in: std/core/string.s line 84*

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

```rust
str(char[], nat endpos, "from", nat pos) -> (str)
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 62

Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 75*

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

```rust
str(char[], nat pos, "to", nat endpos) -> (str)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 143

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 67*

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

```rust
str(char[], nat pos, "len", nat length) -> (str)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 118

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
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 55*

```rust
str(char[]) -> (str)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 165

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
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 147

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
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 100

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### str - a string residing on a buffer
*Defined in: std/core/string.s line 43*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 43


### str - a string residing on a buffer
*Defined in: std/core/string.s line 39*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


### str - reads a string from the console
*Defined in: std/core/convertstr.s line 114*

The read string is placed on an arena while consuming only the necessarily minimum size.

```rust
str(edit arena, console console) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 47
- Transpiled C size: 279

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
23. unexpected end of console read
25. read string does not fit on buffer

### str - reads a string from the console
*Defined in: std/core/convertstr.s line 114*

The read string is placed onto memory that keeps being reallocated to accommodate its size.
The resulting memory will consume exactly the required size in bytes.

```rust
str(new CHARS, console console) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 486

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
### str - create a compact str
*Defined in: std/mini.s line 70*

The created str variation should be used only for storng and
retrieving data with 'unpack' for memory efficiency.

```rust
str(cstr) -> (str)
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 51

Potential errors:

57. nat value too large to pack in nat16

### str - create a compact str
*Defined in: std/mini.s line 62*

The created str variation should be used only for storng and
retrieving data with 'unpack' for memory efficiency.

```rust
str(str) -> (str)
```
Complexity:

- Level of abstraction: 2 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 39

Potential errors:

57. nat value too large to pack in nat16

### str - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 59*

```rust
str(cstr ptr) -> (str)
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 44

Potential errors:

2. null pointer

### str - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 59*

```rust
str(str ptr) -> (str)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 86

Potential errors:

2. null pointer

# copy
### copy - copy a string
*Defined in: std/core/string.s line 130*

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

```rust
copy(edit list, cstr _other) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 171

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
4. division by zero
11. reallocation failed
14. cannot resize an unallocated or freed buffer

### copy - copy a string
*Defined in: std/core/string.s line 130*

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

```rust
copy(edit list, str) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 177

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
4. division by zero
11. reallocation failed
14. cannot resize an unallocated or freed buffer

### copy - copy a string
*Defined in: std/core/string.s line 130*

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

```rust
copy(edit circular, cstr _other) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 171

Potential errors:

17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - copy a string
*Defined in: std/core/string.s line 130*

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

```rust
copy(edit circular, str) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 177

Potential errors:

17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - copy a string
*Defined in: std/core/string.s line 130*

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

```rust
copy(edit arena, cstr _other) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 171

Potential errors:

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - copy a string
*Defined in: std/core/string.s line 130*

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

```rust
copy(edit arena, str) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 177

Potential errors:

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - copy a string
*Defined in: std/core/string.s line 130*

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

```rust
copy(new CHARS, cstr _other) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 156

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
### copy - copy a string
*Defined in: std/core/string.s line 130*

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

```rust
copy(new CHARS, str) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 162

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
### copy - convert a number to a string
*Defined in: std/core/string.s line 459*

The result is placed on a character memory surface effect CHARS.
Example:
```
CHARS = edit list char[]
s = copy 123
```

```rust
copy(edit list, nat n) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 476

Potential errors:

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
11. reallocation failed
14. cannot resize an unallocated or freed buffer
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - convert a number to a string
*Defined in: std/core/string.s line 459*

The result is placed on a character memory surface effect CHARS.
Example:
```
CHARS = edit circular alloc 10
s = copy 123
```

```rust
copy(edit circular, nat n) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 476

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - convert a number to a string
*Defined in: std/core/string.s line 459*

The result is placed on a character memory surface effect CHARS.
Example:
```
CHARS = edit arena alloc 10
s = copy 123
```

```rust
copy(edit arena, nat n) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 476

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### copy - convert a number to a string
*Defined in: std/core/string.s line 459*

The result is placed on a character memory surface effect CHARS.
Example:
```
CHARS = new()
s = copy 123
```

```rust
copy(new CHARS, nat n) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 73
- Transpiled C size: 461

Potential errors:

2. null pointer
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
### copy - copy a vector
*Defined in: std/sci/vec.s line 257*

Grabs a FLOATS for the result as an effect.

```rust
copy(edit circular, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 205

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### copy - copy a vector
*Defined in: std/sci/vec.s line 257*

Grabs a FLOATS for the result as an effect.

```rust
copy(edit arena, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 205

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### copy - copy a vector
*Defined in: std/sci/vec.s line 257*

Grabs a FLOATS for the result as an effect.

```rust
copy(new FLOATS, vec) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 190

Potential errors:

10. allocation failed
2. null pointer


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# copy\_null\_terminated
### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s line 292*

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

```rust
copy_null_terminated(edit arena, cstr _other) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 205

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
21. string buffer out of memory

### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s line 292*

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

```rust
copy_null_terminated(edit arena, str) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 211

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
21. string buffer out of memory

### copy\_null\_terminated - create null terminated string
*Defined in: std/core/string.s line 147*

Copies a string to a new buffer while ensuring null termination.
This is mainly useful for supporting 'cstr unsafe_temp'.

```rust
copy_null_terminated(new CHARS, str) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 31
- Transpiled C size: 168

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
*Defined in: std/core/string.s line 199*

This is mainly used as a stt-input counterpart for converting str|cstr to cstr.

```rust
unsafe_temp(cstr) -> (cstr cstr, str)
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 36


### unsafe\_temp - convert a string to a temporary null-terminated (cstr,str) pair
*Defined in: std/core/string.s line 158*

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
passing data to 'compt' or 'macro'.*

*Info: This is safe to run during 'compt' or 'macro' in that the latter will fail gracefully.*

```rust
unsafe_temp(str) -> (unsafe_temp)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 75

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
*Defined in: std/core/string.s line 158*

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
passing data to 'compt' or 'macro'.*

*Info: This is safe to run during 'compt' or 'macro' in that the latter will fail gracefully.*

```rust
unsafe_temp(str, str) -> (unsafe_temp)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 48
- Transpiled C size: 244

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
*Defined in: std/core/string.s line 211*

This position is computed relative to its start in its
enclosing buffer.

```rust
endpos(str) -> (nat)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 13


# revalidate
### revalidate - re-obtains the string's first charcater
*Defined in: std/core/string.s line 217*

This operation should be rarely used, if at all.
It basically re-retrieves the first character of
the string from its supporting memory surface.
Normal bug-free code can continue to operate properly
even without this operation, but if memory gets
corrupted you can use this operation to obtain
a string that properly matches the underlying memory
for its new data. Here is an example:
```
CHARS = edit arena alloc 8
s1 = copy 123      # place '123' on the arena
CHARS.pos = 0      # manually reset the arena
copy 456           # place different data on the arena
print s1.dat.first # prints 1 (wrong cached first character)
print s1           # prints 456
s2 = revalidate s1
print s2.dat.first # prints 2
```

```rust
revalidate(str) -> (str)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 24


# starts\_with
### starts\_with - check whether a string starts with a particular substring sequence
*Defined in: std/core/string.s line 344*

```rust
starts_with(str, str) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 213

Potential errors:

2. null pointer
22. slice out of string bounds
15. out of bounds

### starts\_with - check whether a string starts with a particular substring sequence
*Defined in: std/core/string.s line 344*

```rust
starts_with(str, cstr _needle) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 207

Potential errors:

2. null pointer
22. slice out of string bounds
15. out of bounds

### starts\_with - check whether a string starts with a particular substring sequence
*Defined in: std/core/string.s line 344*

```rust
starts_with(cstr _stack, str) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 207

Potential errors:

2. null pointer
22. slice out of string bounds
15. out of bounds

### starts\_with - check whether a string starts with a particular substring sequence
*Defined in: std/core/string.s line 344*

```rust
starts_with(cstr _stack, cstr _needle) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 201

Potential errors:

2. null pointer
22. slice out of string bounds
15. out of bounds

# ends\_with
### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 352*

```rust
ends_with(str, str) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 47
- Transpiled C size: 223

Potential errors:

2. null pointer
22. slice out of string bounds
15. out of bounds

### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 352*

```rust
ends_with(str, cstr _needle) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 217

Potential errors:

2. null pointer
22. slice out of string bounds
15. out of bounds

### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 352*

```rust
ends_with(cstr _stack, str) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 217

Potential errors:

2. null pointer
22. slice out of string bounds
15. out of bounds

### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 352*

```rust
ends_with(cstr _stack, cstr _needle) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 211

Potential errors:

2. null pointer
22. slice out of string bounds
15. out of bounds

# contains
### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 370*

```rust
contains(str, str) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 356


### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 370*

```rust
contains(str, cstr _needle) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 350


### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 370*

```rust
contains(cstr _stack, str) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 350


### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 370*

```rust
contains(cstr _stack, cstr _needle) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 52
- Transpiled C size: 344


### contains - check whether a string contains a needle character
*Defined in: std/core/string.s line 362*

```rust
contains(str, char needle) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 255

Potential errors:

2. null pointer
15. out of bounds

### contains - check whether a string contains a needle character
*Defined in: std/core/string.s line 362*

```rust
contains(cstr _stack, char needle) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 249

Potential errors:

2. null pointer
15. out of bounds

# empty
### empty - checks that a string does not have any character
*Defined in: std/core/string.s line 453*

Prefer this check because its cstr-checking counterpar is faster
than casting to a string.

```rust
empty(str) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 31


### empty - checks that a cstr does not have any characters
*Defined in: std/core/string.s line 445*

There are two conditions checked: a) that the cstr is an emptry
pair of brackets, b) that the cstr is zero-initialized, corresponding
to a null memory address. This function is faster than '0==len str c',
as there is no need to actually traverse the character contents.

```rust
empty(cstr) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 59


# is\_number
### is\_number
*Defined in: std/core/convertstr.s line 31*

```rust
is_number(char) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 29


# rotl
### rotl
*Defined in: std/rand.s line 26*

```rust
rotl(nat x, nat k) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 27


# splitmix64
### splitmix64 - time seed
*Defined in: std/rand.s line 55*

Computes the seed of a splitmix64 sequence using the clock
as the source of entropy.

```rust
splitmix64() -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 62


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
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 65


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
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 26


### Rand - random number generator
*Defined in: std/rand.s line 65*

Xoshiro256plus random numbers from https://prng.di.unimi.it/
These and are NOT cryptographically secure.
This a structural type for storing the progress of random number generators 
on four u64 state fields. The version is seed-initalized. Its period is 2^256-1.

```rust
Rand(nat) -> (edit Rand)
```
Complexity:

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 79


# Hashable
### nat - an unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### float
*Defined in: builtins line 1*

```rust
float() -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### cstr - constant string
*Defined in: builtins line 1*

```rust
cstr() -> (cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat32) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7


### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat16) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7


### float - cast to float
*Defined in: std/core/convert.s line 95*

Converts a bit representation to the corresponding float number.

```rust
float(bits) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 18


### nat - cast to nat
*Defined in: std/core/convert.s line 84*

Converts a bit representation to the corresponding natural number.

```rust
nat(bits) -> (nat)
```
Complexity:

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### nat - cast to nat
*Defined in: std/core/convert.s line 51*

Converting a character to a natural number considers
its bit representation interpreted as an unsigned number.

```rust
nat(char) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(nat) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 7


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(int) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

Potential errors:

8. cannot convert negative int to nat

### nat - cast to nat
*Defined in: std/core/convert.s line 40*

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

```rust
nat(float) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

Potential errors:

7. cannot convert negative float to nat

### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(nat) -> (float)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 15


### float - cast to float
*Defined in: std/core/convert.s line 20*

May lose information because floats are not exact representation of all integers.

```rust
float(int) -> (float)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 15


### float - cast to float
*Defined in: std/core/convert.s line 20*

Serves as a tautology function for code that parses on multiple number types.

```rust
float(float) -> (float)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 15


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 205*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(cstr cstr, str) -> (cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 205*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 205*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3


### str - convert to string
*Defined in: std/core/string.s line 91*

Defines an implicit constant buffer using the cstr's memory data.
Subsequent comparisons no longer use the underlying pointer value.

```rust
str(cstr) -> (str)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 169


### str - a string residing on a buffer
*Defined in: std/core/string.s line 84*

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

```rust
str(char[], nat endpos, "from", nat pos) -> (str)
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 62

Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 75*

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

```rust
str(char[], nat pos, "to", nat endpos) -> (str)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 143

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 67*

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

```rust
str(char[], nat pos, "len", nat length) -> (str)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 118

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
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 55*

```rust
str(char[]) -> (str)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 165

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
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 147

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
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 100

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### str - a string residing on a buffer
*Defined in: std/core/string.s line 43*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 43


### str - a string residing on a buffer
*Defined in: std/core/string.s line 39*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


# hash
### hash
*Defined in: std/hash.s line 29*

```rust
hash(nat k, nat size) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 200

Potential errors:

5. modulo by zero

### hash
*Defined in: std/hash.s line 23*

```rust
hash(str, nat size) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 31
- Transpiled C size: 253

Potential errors:

2. null pointer
5. modulo by zero
15. out of bounds

# to\_hash\_base
### to\_hash\_base
*Defined in: std/hash.s line 43*

```rust
to_hash_base(nat) -> (bits)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### to\_hash\_base
*Defined in: std/hash.s line 43*

```rust
to_hash_base(int) -> (bits)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### to\_hash\_base
*Defined in: std/hash.s line 43*

```rust
to_hash_base(float) -> (bits)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11


### to\_hash\_base
*Defined in: std/hash.s line 40*

```rust
to_hash_base(cstr) -> (str)
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 20


### to\_hash\_base
*Defined in: std/hash.s line 40*

```rust
to_hash_base(str) -> (str)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 26


# robinhood\_str\_entry
### robinhood\_str\_entry
*Defined in: std/hash.s line 46*

```rust
robinhood_str_entry(str, nat cost) -> (str, nat cost)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3


# robinhood\_nat\_entry
### robinhood\_nat\_entry
*Defined in: std/hash.s line 49*

```rust
robinhood_nat_entry(nat s, nat cost) -> (nat s, nat cost)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


# robinhood\_entry
### robinhood\_nat\_entry
*Defined in: std/hash.s line 49*

```rust
robinhood_nat_entry(nat s, nat cost) -> (nat s, nat cost)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


### robinhood\_str\_entry
*Defined in: std/hash.s line 46*

```rust
robinhood_str_entry(str, nat cost) -> (str, nat cost)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3


# raw
### raw
*Defined in: std/hash.s line 60*

```rust
raw(cstr) -> (str)
```
Complexity:

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 20


### raw
*Defined in: std/hash.s line 57*

```rust
raw(nat) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3


### raw
*Defined in: std/hash.s line 57*

```rust
raw(str) -> (str)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


### raw
*Defined in: std/hash.s line 54*

```rust
raw(nat s, nat cost) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


### raw
*Defined in: std/hash.s line 54*

```rust
raw(str, nat cost) -> (str)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3


# is\_zero
### is\_zero
*Defined in: std/hash.s line 66*

```rust
is_zero(nat) -> (bool)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 17


### is\_zero
*Defined in: std/hash.s line 63*

```rust
is_zero(str) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 31


# find
### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(nat[], nat _k) -> (mut nat)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 439

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
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 625

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
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 75
- Transpiled C size: 619

Potential errors:

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
54. index not found
15. out of bounds

### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(robinhood_nat_entry[], nat _k) -> (mut nat)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 46
- Transpiled C size: 473

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
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 82
- Transpiled C size: 659

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
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 78
- Transpiled C size: 653

Potential errors:

2. null pointer
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
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 104

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
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 104

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
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 19
- Transpiled C size: 95

Potential errors:

20. string does not fit on buffer

### unpack - unpack a compact str
*Defined in: std/mini.s line 76*

The created compact str is unpacked into its 'nat'-using representation
that is more efficient for computations in 64-bit architectures.

```rust
unpack(str) -> (str)
```
Complexity:

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 40


# post
### post - a post request
*Defined in: std/net/fetch.s line 92*

The default application/json content type is used.

```rust
post(edit circular, cstr url, cstr _body) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 123

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
59. curl initialization failed
60. out of memory while reading response
15. out of bounds

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit circular, cstr url, cstr _body, cstr content_type) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 119

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
59. curl initialization failed
60. out of memory while reading response
15. out of bounds

### post - a post request
*Defined in: std/net/fetch.s line 92*

The default application/json content type is used.

```rust
post(edit circular, cstr url, str) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 140

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit circular, cstr url, str, cstr content_type) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 136

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### post - a post request
*Defined in: std/net/fetch.s line 92*

The default application/json content type is used.

```rust
post(edit circular, str, cstr _body) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 129

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit circular, str, cstr _body, cstr content_type) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 125

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### post - a post request
*Defined in: std/net/fetch.s line 92*

The default application/json content type is used.

```rust
post(edit circular, str, str) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 146

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit circular, str, str, cstr content_type) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 142

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### post - a post request
*Defined in: std/net/fetch.s line 92*

The default application/json content type is used.

```rust
post(edit arena, cstr url, cstr _body) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 123

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
59. curl initialization failed
60. out of memory while reading response
15. out of bounds

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit arena, cstr url, cstr _body, cstr content_type) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 119

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
59. curl initialization failed
60. out of memory while reading response
15. out of bounds

### post - a post request
*Defined in: std/net/fetch.s line 92*

The default application/json content type is used.

```rust
post(edit arena, cstr url, str) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 140

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit arena, cstr url, str, cstr content_type) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 136

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### post - a post request
*Defined in: std/net/fetch.s line 92*

The default application/json content type is used.

```rust
post(edit arena, str, cstr _body) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 129

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit arena, str, cstr _body, cstr content_type) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 125

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### post - a post request
*Defined in: std/net/fetch.s line 92*

The default application/json content type is used.

```rust
post(edit arena, str, str) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 146

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit arena, str, str, cstr content_type) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 142

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response

### post - a post request
*Defined in: std/net/fetch.s line 92*

The default application/json content type is used.

```rust
post(new CHARS, cstr url, cstr _body) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 108

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
59. curl initialization failed
60. out of memory while reading response
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(new CHARS, cstr url, cstr _body, cstr content_type) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 104

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
59. curl initialization failed
60. out of memory while reading response
15. out of bounds


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### post - a post request
*Defined in: std/net/fetch.s line 92*

The default application/json content type is used.

```rust
post(new CHARS, cstr url, str) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 125

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(new CHARS, cstr url, str, cstr content_type) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 121

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### post - a post request
*Defined in: std/net/fetch.s line 92*

The default application/json content type is used.

```rust
post(new CHARS, str, cstr _body) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 114

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(new CHARS, str, cstr _body, cstr content_type) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 110

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### post - a post request
*Defined in: std/net/fetch.s line 92*

The default application/json content type is used.

```rust
post(new CHARS, str, str) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 131

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(new CHARS, str, str, cstr content_type) -> (nat status, str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 127

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
59. curl initialization failed
60. out of memory while reading response


Returned values defer use of the following functions:
```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
# abs
### abs
*Defined in: std/sci/math.s line 27*

```rust
abs(int) -> (int)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 46


### abs
*Defined in: std/sci/math.s line 20*

```rust
abs(float) -> (float)
```
Complexity:

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 38


# sqrt
### sqrt
*Defined in: std/sci/math.s line 34*

```rust
sqrt(float) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10


# sin
### sin
*Defined in: std/sci/math.s line 39*

```rust
sin(float) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10


# cos
### cos
*Defined in: std/sci/math.s line 44*

```rust
cos(float) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10


# log
### log
*Defined in: std/sci/math.s line 49*

```rust
log(float) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10


# tan
### tan
*Defined in: std/sci/math.s line 54*

```rust
tan(float) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10


# floor
### floor
*Defined in: std/sci/math.s line 59*

```rust
floor(float) -> (int)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10


# asin
### asin
*Defined in: std/sci/math.s line 64*

```rust
asin(float) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10


# acos
### acos
*Defined in: std/sci/math.s line 69*

```rust
acos(float) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10


# atan
### atan
*Defined in: std/sci/math.s line 79*

```rust
atan(float x, float y) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 12


### atan
*Defined in: std/sci/math.s line 74*

```rust
atan(float) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10


# exp
### exp
*Defined in: std/sci/math.s line 84*

```rust
exp(float) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10


# isnan
### isnan
*Defined in: std/sci/math.s line 94*

```rust
isnan(float) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 14


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[math.isnan(x)]`*
# isinf
### isinf
*Defined in: std/sci/math.s line 100*

```rust
isinf(float) -> (bool)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 14


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[math.isinf(x)]`*
# vec
### vec - vector type declaration
*Defined in: std/sci/unsafe.s line 19*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
vec(float ptr unsafe_ptr, nat pos, nat length) -> (mut vec)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 15


### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit circular, nat length) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 204

Potential errors:

17. does not fit in circular arena
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit circular, nat length, "dirty") -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 157

Potential errors:

17. does not fit in circular arena
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit arena, nat length) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 204

Potential errors:

16. arena is out of space
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit arena, nat length, "dirty") -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 157

Potential errors:

16. arena is out of space
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### vec - treat a float buffer as a vector
*Defined in: std/sci/vec.s line 36*

```rust
vec(edit float[]) -> (mut vec)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 109

Potential errors:

61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

### vec - vector on a new buffer
*Defined in: std/sci/vec.s line 28*

Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer.

```rust
vec(new FLOATS, nat length) -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 123

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
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 96

Potential errors:

10. allocation failed


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### vec - view a matrix as a vector
*Defined in: std/sci/mat.s line 86*

```rust
vec(mat) -> (mut vec)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 31


# mat
### mat - matrix type declaration
*Defined in: std/sci/unsafe.s line 24*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride) -> (mut mat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 23


### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 75*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "col") -> (mut mat)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 91


### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 75*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "row") -> (mut mat)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 87


### mat - matrix on an existing float[] buffer
*Defined in: std/sci/mat.s line 53*

```rust
mat(edit float[], nat rows) -> (mut mat)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 167

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
66. buffer size not divisible by vector rows
16. arena is out of space
4. division by zero

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit circular, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 228

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
17. does not fit in circular arena

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit circular, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 181

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
17. does not fit in circular arena

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit arena, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 228

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
16. arena is out of space

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit arena, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 181

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
16. arena is out of space

### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 157

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
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 116

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# sparse\_element
### sparse\_element
*Defined in: std/sci/unsafe.s line 29*

```rust
sparse_element(nat row, nat col, float value) -> (nat row, nat col, float value)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3


# coo
### coo - coo sparse matrix type declaration
*Defined in: std/sci/unsafe.s line 32*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
coo(sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz) -> (mut coo)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 19


### coo
*Defined in: std/sci/coo.s line 40*

```rust
coo(sparse_element[], nat rows, nat cols) -> (mut coo)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 40


### coo - allocate a sparse matrix
*Defined in: std/sci/coo.s line 34*

This creates a new buffer of sparse elements for convenience.

```rust
coo(nat rows, nat cols, nat nnz) -> (mut coo)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 97

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
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t2721t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t2655t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t2376t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t661t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t619t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t615t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t611t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t4t") -> (edit circular)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t2721t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t2655t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t2376t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t661t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t619t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t615t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t611t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t4t") -> (edit arena)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48


# constvec
### constvec - treat an immutable float buffer as an immutable vector
*Defined in: std/sci/vec.s line 42*

```rust
constvec(float[]) -> (vec)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 109

Potential errors:

61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets

# reduce
### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul", "l2") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 48
- Transpiled C size: 391

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul", "sqr") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 341

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul", "abs") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 339

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add", "l2") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 48
- Transpiled C size: 391

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add", "sqr") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 341

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "mul") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 295

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add", "abs") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 339

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "add") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 295

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "l2") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 327

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "sqr") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 277

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec, "abs") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 275

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sub", vec) -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 231

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul", "l2") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 47
- Transpiled C size: 391

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul", "sqr") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 341

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul", "abs") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 339

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "mul") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 295

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add", "l2") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 48
- Transpiled C size: 391

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add", "sqr") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 341

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add", "abs") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 339

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "add") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 295

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "l2") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 327

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "sqr") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 277

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec, "abs") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 275

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", vec) -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 231

Potential errors:

2. null pointer
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul", "l2") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 292

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul", "sqr") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 242

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul", "abs") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 240

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "mul") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 196

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add", "l2") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 292

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add", "sqr") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 242

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add", "abs") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 240

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "add") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 196

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "l2") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 228

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "sqr") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 178

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec, "abs") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 176

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, vec) -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 132

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", "l2") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 300

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", "sqr") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 250

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul", "abs") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 248

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "mul") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 204

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add", "l2") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 300

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add", "sqr") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 250

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add", "abs") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 248

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "add") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 204

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "l2") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 236

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "sqr") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 186

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "abs") -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 184

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec) -> (float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 140

No failing errors, but can catch these intercepted ones:

2. null pointer

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "mul", "l2") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 501

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "mul", "sqr") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 451

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "mul", "abs") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 449

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "mul") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 405

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "add", "l2") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 501

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "add", "sqr") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 451

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "add", "abs") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 449

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "add") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 405

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "l2") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 52
- Transpiled C size: 437

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "sqr") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 387

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec, "abs") -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 385

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

```rust
reduce(vec, "rel", vec) -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 341

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

# dot
### dot - dot product
*Defined in: std/sci/vec.s line 212*

```rust
dot(vec, vec) -> (float)
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 32

Potential errors:

2. null pointer
15. out of bounds

# sum
### sum - sum of each column
*Defined in: std/sci/coo.s line 117*

result[j] = sum of all stored values in column j

```rust
sum(new FLOATS, coo, "col") -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 291

Potential errors:

10. allocation failed
2. null pointer
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### sum - sum of each row
*Defined in: std/sci/coo.s line 109*

result[i] = sum of all stored values in row i

```rust
sum(edit circular, coo, "row") -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 306

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
15. out of bounds

### sum - sum of each row
*Defined in: std/sci/coo.s line 109*

result[i] = sum of all stored values in row i

```rust
sum(edit arena, coo, "row") -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 306

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
15. out of bounds

### sum - sum of each row
*Defined in: std/sci/coo.s line 109*

result[i] = sum of all stored values in row i

```rust
sum(new FLOATS, coo, "row") -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 291

Potential errors:

10. allocation failed
2. null pointer
15. out of bounds


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### sum - sum
*Defined in: std/sci/vec.s line 216*

```rust
sum(vec) -> (float)
```
Complexity:

- Level of abstraction: 2 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 15


### sum - sum of all elements
*Defined in: std/sci/coo.s line 125*

```rust
sum(coo, "all") -> (mut float)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 19
- Transpiled C size: 158

No failing errors, but can catch these intercepted ones:

2. null pointer

### sum - sum of each column
*Defined in: std/sci/coo.s line 117*

result[j] = sum of all stored values in column j

```rust
sum(edit circular, coo, "col") -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 306

Potential errors:

17. does not fit in circular arena
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
15. out of bounds

### sum - sum of each column
*Defined in: std/sci/coo.s line 117*

result[j] = sum of all stored values in column j

```rust
sum(edit arena, coo, "col") -> (mut vec) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 306

Potential errors:

16. arena is out of space
2. null pointer
61. can only place vectors on contiguous buffers
62. cannot place vectors on buffer offsets
15. out of bounds

# mean
### mean - mean value
*Defined in: std/sci/vec.s line 220*

```rust
mean(vec) -> (float)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 56

Potential errors:

4. division by zero

# var
### var - variance
*Defined in: std/sci/vec.s line 224*

```rust
var(vec) -> (float)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 25
- Transpiled C size: 250

Potential errors:

2. null pointer
4. division by zero

# std
### std - standard deviation
*Defined in: std/sci/vec.s line 235*

```rust
std(vec) -> (float)
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 34

Potential errors:

2. null pointer
4. division by zero

# self
### self
*Defined in: std/sci/vec.s line 273*

```rust
self(mut vec) -> (edit arena, mut vec)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 28


# rows
### rows - number of rows
*Defined in: std/sci/coo.s line 22*

```rust
rows(coo) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


### rows - number of rows
*Defined in: std/sci/mat.s line 22*

```rust
rows(mat) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3


# cols
### cols - number of columns
*Defined in: std/sci/coo.s line 26*

```rust
cols(coo) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


### cols - number of columns
*Defined in: std/sci/mat.s line 26*

```rust
cols(mat) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3


# constmat
### constmat - immutable matrix on an immutable float[] buffer
*Defined in: std/sci/mat.s line 47*

```rust
constmat(float[], nat rows) -> (mat)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 167

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
66. buffer size not divisible by vector rows
16. arena is out of space
4. division by zero

# mutvec
### mutvec - view a matrix as a vector
*Defined in: std/sci/mat.s line 90*

```rust
mutvec(mat) -> (mut vec)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 31


# row
### row - view matrix row as a vector
*Defined in: std/sci/mat.s line 94*

```rust
row(mat, nat i) -> (mut vec)
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 64

Potential errors:

67. row out of bounds

# nnz
### nnz - number of stored non-zero entries
*Defined in: std/sci/coo.s line 30*

```rust
nnz(coo) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


# todense
### todense - convert to dense mat
*Defined in: std/sci/coo.s line 88*

```rust
todense(edit circular, coo) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 276

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
2. null pointer
17. does not fit in circular arena
67. row out of bounds
68. column out of bounds

### todense - convert to dense mat
*Defined in: std/sci/coo.s line 88*

```rust
todense(edit arena, coo) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 276

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
2. null pointer
16. arena is out of space
67. row out of bounds
68. column out of bounds

### todense - convert to dense mat
*Defined in: std/sci/coo.s line 88*

```rust
todense(new FLOATS, coo) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 261

Potential errors:

2. null pointer
67. row out of bounds
68. column out of bounds
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# matrix
### mat - matrix type declaration
*Defined in: std/sci/unsafe.s line 24*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride) -> (mut mat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 23


### coo - coo sparse matrix type declaration
*Defined in: std/sci/unsafe.s line 32*

Warning: directly calling this constructor without safety checks is unsafe.

```rust
coo(sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz) -> (mut coo)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 19


### coo
*Defined in: std/sci/coo.s line 40*

```rust
coo(sparse_element[], nat rows, nat cols) -> (mut coo)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 40


### coo - allocate a sparse matrix
*Defined in: std/sci/coo.s line 34*

This creates a new buffer of sparse elements for convenience.

```rust
coo(nat rows, nat cols, nat nnz) -> (mut coo)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 97

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 75*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "col") -> (mut mat)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 91


### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 75*

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

```rust
mat(vec, "row") -> (mut mat)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 87


### mat - matrix on an existing float[] buffer
*Defined in: std/sci/mat.s line 53*

```rust
mat(edit float[], nat rows) -> (mut mat)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 167

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
66. buffer size not divisible by vector rows
16. arena is out of space
4. division by zero

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit circular, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 228

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
17. does not fit in circular arena

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit circular, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 181

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
17. does not fit in circular arena

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit arena, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 228

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
16. arena is out of space

### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit arena, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 181

Potential errors:

64. can only place matrices on contiguous buffers
65. cannot place matrices on buffer offsets
16. arena is out of space

### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols) -> (mut mat) with effects FLOATS
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 157

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
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 116

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# tagged
### tagged - blank tag structure
*Defined in: std/tag.s line 20*

Ensures that 'tag ptr' has a unique type and allocates at least a cstr's
(a pointer's) worth of storage so that tag checking is always valid.

```rust
tagged(cstr) -> (tagged)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


# unsafe\_match
### unsafe\_match
*Defined in: std/tag.s line 26*

```rust
unsafe_match(tagged ptr obj, cstr name, any ptr type) -> (mut any ptr {follows any ptr type})
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 98

Potential errors:

73. does not match
2. null pointer

# unsafe\_defer\_free
### unsafe\_defer\_free
*Defined in: std/tag.s line 31*

```rust
unsafe_defer_free(mut tagged ptr) -> (mut tagged ptr)
```
Complexity:

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3



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
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 120

Potential errors:

16. arena is out of space
15. out of bounds

# match
### match
*Defined in: std/tag.s line 63*

```rust
match(cstr obj, cstr type_name) -> (mut char[])
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 73
- Transpiled C size: 433

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
### match
*Defined in: std/pipe.s line 123*

```rust
match(cstr obj, cstr type_name) -> (mut char[])
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 73
- Transpiled C size: 433

Potential errors:

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# pipe
### pipe - blank pipe structure
*Defined in: std/pipe.s line 21*

Ensures that 'pipe ptr' has a unique type and allocates at least a cstr's
(a pointer's) + sizeof(mutex_t) worth of storage so that tag checking and
mutex checking are always valid.

```rust
pipe(cstr) -> (pipe)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


# mutex\_size
### mutex\_size
*Defined in: std/pipe.s line 28*

```rust
mutex_size() -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 10


# unsafe\_pipe\_lock
### unsafe\_pipe\_lock
*Defined in: std/pipe.s line 32*

```rust
unsafe_pipe_lock(pipe ptr) -> ()
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 27


# unsafe\_pipe\_unlock
### unsafe\_pipe\_unlock
*Defined in: std/pipe.s line 36*

```rust
unsafe_pipe_unlock(pipe ptr) -> ()
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 27


# with
### with - gain ownership of a pipe
*Defined in: std/pipe.s line 40*

This blocks other threads from accessing its data.

```rust
with(pipe ptr) -> (with)
```
Complexity:

- Level of abstraction: 1 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 8



Returned values defer use of the following functions:
```rust
unsafe_pipe_unlock(pipe ptr) -> ()
```
# system\_thread
### system\_thread
*Defined in: std/pipe.s line 48*

```rust
system_thread(any ptr) -> (system_thread)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


# unsafe\_spawn
### unsafe\_spawn
*Defined in: std/pipe.s line 51*

```rust
unsafe_spawn((pipe ptr) -> () func, pipe ptr input) -> (system_thread)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 31


# join
### join
*Defined in: std/pipe.s line 56*

```rust
join(system_thread) -> ()
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 19


# cpu
### cpu
*Defined in: std/pipe.s line 60*

```rust
cpu(nat) -> (cpu)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


# growing\_thread\_pool
### growing\_thread\_pool
*Defined in: std/pipe.s line 63*

```rust
growing_thread_pool(cpu) -> (edit growing_thread_pool)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 140

Potential errors:

10. allocation failed
2. null pointer
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation


Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
```rust
not(bool) -> (bool)
len(any[]) -> (nat)
of(nat) -> (nat, nat to)
range(nat _from, nat to) -> (edit range)
get(range, nat _pos) -> (nat)
mutget(edit any[], nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
join(system_thread) -> ()
```
# thread
### thread
*Defined in: std/pipe.s line 73*

```rust
thread(edit growing_thread_pool, (pipe ptr) -> () func, pipe ptr input) -> (mut system_thread) with effects THREADS
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 120

Potential errors:

16. arena is out of space
2. null pointer
15. out of bounds

# unsafe\_pipe\_match
### unsafe\_pipe\_match
*Defined in: std/pipe.s line 78*

```rust
unsafe_pipe_match(with, cstr name, any ptr type) -> (mut any ptr {follows any ptr type})
```
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 114

Potential errors:

73. does not match
2. null pointer

# unsafe\_pipe\_defer\_free
### unsafe\_pipe\_defer\_free
*Defined in: std/pipe.s line 83*

```rust
unsafe_pipe_defer_free(mut pipe ptr) -> (mut pipe ptr)
```
Complexity:

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3



Returned values defer use of the following functions:
```rust
free(mut any ptr) -> ()
```
# unsafe\_pipe\_mutax\_init
### unsafe\_pipe\_mutax\_init
*Defined in: std/pipe.s line 88*

```rust
unsafe_pipe_mutax_init(mut pipe ptr) -> (mut pipe ptr)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 30



Returned values defer use of the following functions:
```rust
add(any ptr allocated, nat offset) -> (any ptr {follows any ptr allocated})
```
# pipe\_alloc
### pipe\_alloc
*Defined in: std/pipe.s line 96*

```rust
pipe_alloc(edit arena, nat size) -> (mut char ptr)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 120

Potential errors:

16. arena is out of space
15. out of bounds

# shared
### shared
*Defined in: std/pipe.s line 100*

```rust
shared(cstr) -> (mut char[])
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 98
- Transpiled C size: 627

Potential errors:

2. null pointer
10. allocation failed
74. empty input name
75. cannot tag a structural type
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
### shared
*Defined in: std/pipe.s line 100*

```rust
shared(cstr surface, cstr obj) -> (mut char[])
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 112
- Transpiled C size: 755

Potential errors:

2. null pointer
10. allocation failed
74. empty input name
75. cannot tag a structural type
13. cannot resize buffers with alloc; it promises no data reallocation
76. tag surface cannot be structural type
12. cannot allocate a buffer of unsized type
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
*Defined in: std/unsafe.s line 34*

Reallocates an allocated memory pointer, potentially invalidating
the original one without any safety. As a stopgap measure against
unforeseen complications, this function is set to invalidate all
pointers in the calling context and parrent contexts, BESIDES
calling function mutable arguments and calling function outputs,
as those have the intent of immediate reuse.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
realloc(any ptr allocated, nat bytes) -> (any ptr {follows any ptr allocated})
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 71

Potential errors:

11. reallocation failed

# free
### free - free memory
*Defined in: std/unsafe.s line 51*

Frees allocated memory.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
free(mut any ptr) -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 15


# zero
### zero - set memory to zero
*Defined in: std/unsafe.s line 58*

Memsets a memory region to zero.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

```rust
zero(any ptr allocated, nat from, nat to) -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9


# color
### color
*Defined in: std/graphics.s line 21*

```rust
color(nat _r, nat _g, nat _b) -> (nat8 r, nat8 g, nat8 b, nat8 a)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 103

Potential errors:

56. nat value too large to pack in nat8

### color
*Defined in: std/graphics.s line 21*

```rust
color(nat _r, nat _g, nat _b, nat _a) -> (nat8 r, nat8 g, nat8 b, nat8 a)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 95

Potential errors:

56. nat value too large to pack in nat8

# position
### position
*Defined in: std/graphics.s line 30*

```rust
position(float x, float y) -> (float x, float y)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


# size
### size
*Defined in: std/graphics.s line 33*

```rust
size(float width, float height) -> (float width, float height)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


# unsafe\_open\_window
### unsafe\_open\_window
*Defined in: std/graphics.s line 36*

```rust
unsafe_open_window(float size.width, float size.height, cstr title, cstr font_path) -> ()
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 104


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `(pyray.set_trace_log_level(pyray.LOG_NONE), pyray.init_window(int($size__width),int($size__height),$title),pyray.set_target_fps(60),memory.set_global('font', pyray.load_font_ex($font_path,128,None,0) if $font_path else pyray.get_font_default()))`*
# window
### window
*Defined in: std/graphics.s line 49*

```rust
window(float size.width, float size.height, cstr title, cstr font_path) -> (edit window)
```
Complexity:

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 26


# is\_open
### is\_open
*Defined in: std/graphics.s line 73*

```rust
is_open(edit window) -> (bool) with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 17


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[not pyray.window_should_close()]`*
# unsafe\_begin\_drawing
### unsafe\_begin\_drawing
*Defined in: std/graphics.s line 78*

```rust
unsafe_begin_drawing() -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 0
- Transpiled C size: 4


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.begin_drawing()`*
# unsafe\_end\_drawing
### unsafe\_end\_drawing
*Defined in: std/graphics.s line 82*

```rust
unsafe_end_drawing() -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 4


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.end_drawing()`*
# draw
### draw
*Defined in: std/graphics.s line 88*

```rust
draw(edit window) -> (bool) with effects WINDOW
```
Complexity:

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 28

Potential errors:

77. alopeny drawing on window


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
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 16


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.clear_background(pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# text
### text
*Defined in: std/graphics.s line 127*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 53


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_pro(memory.globals['font'].font,str($txt),pyray.Vector2($pos__x,$pos__y),pyray.Vector2($origin__x,$origin__y),$rotation,$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 127*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 53


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_pro(memory.globals['font'].font,str($txt),pyray.Vector2($pos__x,$pos__y),pyray.Vector2($origin__x,$origin__y),$rotation,$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 114*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 42


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_ex(memory.globals['font'],str($txt),pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 114*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 42


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_ex(memory.globals['font'],str($txt),pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 101*

```rust
text(edit window, cstr txt, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 35


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_ex(memory.globals['font'],$txt,pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# sleep
### sleep
*Defined in: std/graphics.s line 142*

```rust
sleep(nat) -> ()
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 13


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `time.sleep($seconds*0.001)`*
# TextureData
### TextureData
*Defined in: std/graphics.s line 146*

```rust
TextureData(nat id, float size.width, float size.height, nat mipmaps, nat format) -> (nat id, float size.width, float size.height, nat mipmaps, nat format)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


# Texture
### Texture
*Defined in: std/graphics.s line 149*

```rust
Texture(nat id, float size.width, float size.height, nat mipmaps, nat format) -> (Texture)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 136

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
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 87

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
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 258

Potential errors:

2. null pointer
15. out of bounds

### texture
*Defined in: std/graphics.s line 205*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float scale, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 262

Potential errors:

2. null pointer
15. out of bounds

### texture
*Defined in: std/graphics.s line 191*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float size.width, float size.height, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float rotation) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 285

Potential errors:

2. null pointer
4. division by zero
15. out of bounds

### texture
*Defined in: std/graphics.s line 179*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float scale, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float rotation) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 219

Potential errors:

2. null pointer
15. out of bounds

### texture
*Defined in: std/graphics.s line 169*

```rust
texture(edit window, Texture, float pos.x, float pos.y, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 201

Potential errors:

2. null pointer
15. out of bounds

# circ
### circ
*Defined in: std/graphics.s line 307*

```rust
circ(edit window, float pos.x, float pos.y, float radius, "line", nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 69


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_ring(pyray.Vector2($pos__x,$pos__y),max(0,$radius-$thickness),$radius,0,360,64,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### circ
*Defined in: std/graphics.s line 231*

```rust
circ(edit window, float pos.x, float pos.y, float radius, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 36


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_circle_v(pyray.Vector2($pos__x,$pos__y),$radius,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# ellipse
### ellipse
*Defined in: std/graphics.s line 251*

```rust
ellipse(edit window, float pos.x, float pos.y, float radius.x, float radius.y, "line", nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 36


### ellipse
*Defined in: std/graphics.s line 241*

```rust
ellipse(edit window, float pos.x, float pos.y, float radius.x, float radius.y, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 41


# rect
### rect
*Defined in: std/graphics.s line 275*

```rust
rect(edit window, float pos.x, float pos.y, float size.width, float size.height, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 58


### rect
*Defined in: std/graphics.s line 271*

```rust
rect(edit window, float pos.x, float pos.y, float size.width, float size.height, "line", nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 46


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_rectangle_lines_ex(pyray.Rectangle($pos__x,$pos__y,$size__width,$size__height),$thickness,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### rect
*Defined in: std/graphics.s line 261*

```rust
rect(edit window, float pos.x, float pos.y, float size.width, float size.height, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 24


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_rectangle(int($pos__x),int($pos__y),int($size__width),int($size__height),pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# tri
### tri
*Defined in: std/graphics.s line 296*

```rust
tri(edit window, float p1.x, float p1.y, float p2.x, float p2.y, float p3.x, float p3.y, "line", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 61


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_triangle_lines(pyray.Vector2($p1__x,$p1__y),pyray.Vector2($p2__x,$p2__y),pyray.Vector2($p3__x,$p3__y),pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### tri
*Defined in: std/graphics.s line 285*

```rust
tri(edit window, float p1.x, float p1.y, float p2.x, float p2.y, float p3.x, float p3.y, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 61


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_triangle(pyray.Vector2($p1__x,$p1__y),pyray.Vector2($p2__x,$p2__y),pyray.Vector2($p3__x,$p3__y),pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# dt
### dt
*Defined in: std/graphics.s line 324*

```rust
dt(window) -> (float) with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 9


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.get_frame_time()]`*
# uptime
### uptime
*Defined in: std/graphics.s line 329*

```rust
uptime(window) -> (float) with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 9


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.get_time()]`*
# key\_down
### key\_down
*Defined in: std/graphics.s line 334*

```rust
key_down(window, nat key) -> (bool) with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_key_down($key)]`*
# key\_pressed
### key\_pressed
*Defined in: std/graphics.s line 339*

```rust
key_pressed(edit window, nat key) -> (bool) with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_key_pressed($key)]`*
# key\_released
### key\_released
*Defined in: std/graphics.s line 344*

```rust
key_released(edit window, nat key) -> (bool) with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_key_released($key)]`*
# mouse\_pos
### mouse\_pos
*Defined in: std/graphics.s line 349*

```rust
mouse_pos(window) -> (float x, float y) with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 28


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[(lambda p=pyray.get_mouse_position():(p.x,p.y))()]`*
# mouse\_down
### mouse\_down
*Defined in: std/graphics.s line 357*

```rust
mouse_down(window, nat button) -> (bool) with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_mouse_button_down($button)]`*
# mouse\_pressed
### mouse\_pressed
*Defined in: std/graphics.s line 362*

```rust
mouse_pressed(edit window, nat button) -> (bool) with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_mouse_button_pressed($button)]`*
# mouse\_wheel
### mouse\_wheel
*Defined in: std/graphics.s line 367*

```rust
mouse_wheel(window) -> (float) with effects WINDOW
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 9


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.get_mouse_wheel_move()]`*
# KEY\_NULL

*Defined in: std/graphics.s line 372*

```rust
() -> (0)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_APOSTROPHE

*Defined in: std/graphics.s line 373*

```rust
() -> (39)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_COMMA

*Defined in: std/graphics.s line 374*

```rust
() -> (44)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_MINUS

*Defined in: std/graphics.s line 375*

```rust
() -> (45)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_PERIOD

*Defined in: std/graphics.s line 376*

```rust
() -> (46)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_SLASH

*Defined in: std/graphics.s line 377*

```rust
() -> (47)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_ZERO

*Defined in: std/graphics.s line 378*

```rust
() -> (48)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_ONE

*Defined in: std/graphics.s line 379*

```rust
() -> (49)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_TWO

*Defined in: std/graphics.s line 380*

```rust
() -> (50)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_THREE

*Defined in: std/graphics.s line 381*

```rust
() -> (51)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_FOUR

*Defined in: std/graphics.s line 382*

```rust
() -> (52)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_FIVE

*Defined in: std/graphics.s line 383*

```rust
() -> (53)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_SIX

*Defined in: std/graphics.s line 384*

```rust
() -> (54)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_SEVEN

*Defined in: std/graphics.s line 385*

```rust
() -> (55)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_EIGHT

*Defined in: std/graphics.s line 386*

```rust
() -> (56)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_NINE

*Defined in: std/graphics.s line 387*

```rust
() -> (57)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_SEMICOLON

*Defined in: std/graphics.s line 388*

```rust
() -> (59)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_EQUAL

*Defined in: std/graphics.s line 389*

```rust
() -> (61)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_A

*Defined in: std/graphics.s line 390*

```rust
() -> (65)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_B

*Defined in: std/graphics.s line 391*

```rust
() -> (66)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_C

*Defined in: std/graphics.s line 392*

```rust
() -> (67)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_D

*Defined in: std/graphics.s line 393*

```rust
() -> (68)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_E

*Defined in: std/graphics.s line 394*

```rust
() -> (69)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_F

*Defined in: std/graphics.s line 395*

```rust
() -> (70)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_G

*Defined in: std/graphics.s line 396*

```rust
() -> (71)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_H

*Defined in: std/graphics.s line 397*

```rust
() -> (72)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_I

*Defined in: std/graphics.s line 398*

```rust
() -> (73)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_J

*Defined in: std/graphics.s line 399*

```rust
() -> (74)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_K

*Defined in: std/graphics.s line 400*

```rust
() -> (75)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_L

*Defined in: std/graphics.s line 401*

```rust
() -> (76)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_M

*Defined in: std/graphics.s line 402*

```rust
() -> (77)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_N

*Defined in: std/graphics.s line 403*

```rust
() -> (78)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_O

*Defined in: std/graphics.s line 404*

```rust
() -> (79)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_P

*Defined in: std/graphics.s line 405*

```rust
() -> (80)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_Q

*Defined in: std/graphics.s line 406*

```rust
() -> (81)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_R

*Defined in: std/graphics.s line 407*

```rust
() -> (82)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_S

*Defined in: std/graphics.s line 408*

```rust
() -> (83)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_T

*Defined in: std/graphics.s line 409*

```rust
() -> (84)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_U

*Defined in: std/graphics.s line 410*

```rust
() -> (85)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_V

*Defined in: std/graphics.s line 411*

```rust
() -> (86)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_W

*Defined in: std/graphics.s line 412*

```rust
() -> (87)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_X

*Defined in: std/graphics.s line 413*

```rust
() -> (88)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_Y

*Defined in: std/graphics.s line 414*

```rust
() -> (89)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_Z

*Defined in: std/graphics.s line 415*

```rust
() -> (90)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_LEFT\_BRACKET

*Defined in: std/graphics.s line 416*

```rust
() -> (91)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_BACKSLASH

*Defined in: std/graphics.s line 417*

```rust
() -> (92)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_RIGHT\_BRACKET

*Defined in: std/graphics.s line 418*

```rust
() -> (93)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_GRAVE

*Defined in: std/graphics.s line 419*

```rust
() -> (96)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_SPACE

*Defined in: std/graphics.s line 420*

```rust
() -> (32)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_ESCAPE

*Defined in: std/graphics.s line 421*

```rust
() -> (256)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_ENTER

*Defined in: std/graphics.s line 422*

```rust
() -> (257)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_TAB

*Defined in: std/graphics.s line 423*

```rust
() -> (258)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_BACKSPACE

*Defined in: std/graphics.s line 424*

```rust
() -> (259)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_INSERT

*Defined in: std/graphics.s line 425*

```rust
() -> (260)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_DELETE

*Defined in: std/graphics.s line 426*

```rust
() -> (261)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_RIGHT

*Defined in: std/graphics.s line 427*

```rust
() -> (262)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_LEFT

*Defined in: std/graphics.s line 428*

```rust
() -> (263)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_DOWN

*Defined in: std/graphics.s line 429*

```rust
() -> (264)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_UP

*Defined in: std/graphics.s line 430*

```rust
() -> (265)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_PAGE\_UP

*Defined in: std/graphics.s line 431*

```rust
() -> (266)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_PAGE\_DOWN

*Defined in: std/graphics.s line 432*

```rust
() -> (267)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_HOME

*Defined in: std/graphics.s line 433*

```rust
() -> (268)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_END

*Defined in: std/graphics.s line 434*

```rust
() -> (269)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_CAPS\_LOCK

*Defined in: std/graphics.s line 435*

```rust
() -> (280)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_SCROLL\_LOCK

*Defined in: std/graphics.s line 436*

```rust
() -> (281)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_NUM\_LOCK

*Defined in: std/graphics.s line 437*

```rust
() -> (282)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_PRINT\_SCREEN

*Defined in: std/graphics.s line 438*

```rust
() -> (283)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_PAUSE

*Defined in: std/graphics.s line 439*

```rust
() -> (284)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_F1

*Defined in: std/graphics.s line 440*

```rust
() -> (290)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_F2

*Defined in: std/graphics.s line 441*

```rust
() -> (291)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_F3

*Defined in: std/graphics.s line 442*

```rust
() -> (292)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_F4

*Defined in: std/graphics.s line 443*

```rust
() -> (293)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_F5

*Defined in: std/graphics.s line 444*

```rust
() -> (294)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_F6

*Defined in: std/graphics.s line 445*

```rust
() -> (295)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_F7

*Defined in: std/graphics.s line 446*

```rust
() -> (296)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_F8

*Defined in: std/graphics.s line 447*

```rust
() -> (297)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_F9

*Defined in: std/graphics.s line 448*

```rust
() -> (298)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_F10

*Defined in: std/graphics.s line 449*

```rust
() -> (299)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_F11

*Defined in: std/graphics.s line 450*

```rust
() -> (300)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_F12

*Defined in: std/graphics.s line 451*

```rust
() -> (301)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_LEFT\_SHIFT

*Defined in: std/graphics.s line 452*

```rust
() -> (340)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_LEFT\_CONTROL

*Defined in: std/graphics.s line 453*

```rust
() -> (341)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_LEFT\_ALT

*Defined in: std/graphics.s line 454*

```rust
() -> (342)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_LEFT\_SUPER

*Defined in: std/graphics.s line 455*

```rust
() -> (343)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_RIGHT\_SHIFT

*Defined in: std/graphics.s line 456*

```rust
() -> (344)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_RIGHT\_CONTROL

*Defined in: std/graphics.s line 457*

```rust
() -> (345)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_RIGHT\_ALT

*Defined in: std/graphics.s line 458*

```rust
() -> (346)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_RIGHT\_SUPER

*Defined in: std/graphics.s line 459*

```rust
() -> (347)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KB\_MENU

*Defined in: std/graphics.s line 460*

```rust
() -> (348)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_0

*Defined in: std/graphics.s line 461*

```rust
() -> (320)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_1

*Defined in: std/graphics.s line 462*

```rust
() -> (321)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_2

*Defined in: std/graphics.s line 463*

```rust
() -> (322)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_3

*Defined in: std/graphics.s line 464*

```rust
() -> (323)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_4

*Defined in: std/graphics.s line 465*

```rust
() -> (324)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_5

*Defined in: std/graphics.s line 466*

```rust
() -> (325)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_6

*Defined in: std/graphics.s line 467*

```rust
() -> (326)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_7

*Defined in: std/graphics.s line 468*

```rust
() -> (327)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_8

*Defined in: std/graphics.s line 469*

```rust
() -> (328)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_9

*Defined in: std/graphics.s line 470*

```rust
() -> (329)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_DECIMAL

*Defined in: std/graphics.s line 471*

```rust
() -> (330)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_DIVIDE

*Defined in: std/graphics.s line 472*

```rust
() -> (331)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_MULTIPLY

*Defined in: std/graphics.s line 473*

```rust
() -> (332)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_SUBTRACT

*Defined in: std/graphics.s line 474*

```rust
() -> (333)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_ADD

*Defined in: std/graphics.s line 475*

```rust
() -> (334)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_ENTER

*Defined in: std/graphics.s line 476*

```rust
() -> (335)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_KP\_EQUAL

*Defined in: std/graphics.s line 477*

```rust
() -> (336)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_BACK

*Defined in: std/graphics.s line 478*

```rust
() -> (4)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_MENU

*Defined in: std/graphics.s line 479*

```rust
() -> (5)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_VOLUME\_UP

*Defined in: std/graphics.s line 480*

```rust
() -> (24)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# KEY\_VOLUME\_DOWN

*Defined in: std/graphics.s line 481*

```rust
() -> (25)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# NumberOrPtr
### nat - an unsigned integer value
*Defined in: builtins line 1*

Represents values in the range `0 to 2^64-1`.

```rust
nat() -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### float
*Defined in: builtins line 1*

```rust
float() -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### int - a signed integer value
*Defined in: builtins line 1*

Represents values in the range `2^-63 to 2^63-1`.

```rust
int() -> (int)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### nat ptr
*Defined in: std/ptrpeek.s line 20*

```rust
nat ptr() -> (mut nat ptr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### int ptr
*Defined in: std/ptrpeek.s line 20*

```rust
int ptr() -> (mut int ptr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### float ptr
*Defined in: std/ptrpeek.s line 20*

```rust
float ptr() -> (mut float ptr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


# to\_number
### to\_number
*Defined in: std/ptrpeek.s line 21*

```rust
to_number(nat) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


### to\_number
*Defined in: std/ptrpeek.s line 21*

```rust
to_number(int) -> (int)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


### to\_number
*Defined in: std/ptrpeek.s line 21*

```rust
to_number(float) -> (float)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3


### to\_number
*Defined in: std/ptrpeek.s line 21*

```rust
to_number(nat ptr) -> (nat)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 27

Potential errors:

2. null pointer

### to\_number
*Defined in: std/ptrpeek.s line 21*

```rust
to_number(int ptr) -> (int)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 27

Potential errors:

2. null pointer

### to\_number
*Defined in: std/ptrpeek.s line 21*

```rust
to_number(float ptr) -> (float)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 27

Potential errors:

2. null pointer

# already\_defined
### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat x, nat y) -> (true)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat x, int y) -> (true)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat x, float y) -> (true)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat x, nat ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat x, int ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat x, float ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int x, nat y) -> (true)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int x, int y) -> (true)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int x, float y) -> (true)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int x, nat ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int x, int ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int x, float ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float x, nat y) -> (true)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float x, int y) -> (true)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float x, float y) -> (true)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float x, nat ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float x, int ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float x, float ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat ptr x, nat y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat ptr x, int y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat ptr x, float y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat ptr x, nat ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat ptr x, int ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat ptr x, float ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int ptr x, nat y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int ptr x, int y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int ptr x, float y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int ptr x, nat ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int ptr x, int ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int ptr x, float ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float ptr x, nat y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float ptr x, int y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float ptr x, float y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float ptr x, nat ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float ptr x, int ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float ptr x, float ptr y) -> (false)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9


# String
### cstr - constant string
*Defined in: builtins line 1*

```rust
cstr() -> (cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 0


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 205*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(cstr cstr, str) -> (cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 205*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 205*

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

```rust
cstr(unsafe_temp) -> (cstr)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3


### str - convert to string
*Defined in: std/core/string.s line 91*

Defines an implicit constant buffer using the cstr's memory data.
Subsequent comparisons no longer use the underlying pointer value.

```rust
str(cstr) -> (str)
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 169


### str - a string residing on a buffer
*Defined in: std/core/string.s line 84*

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

```rust
str(char[], nat endpos, "from", nat pos) -> (str)
```
Complexity:

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 62

Potential errors:

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 75*

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

```rust
str(char[], nat pos, "to", nat endpos) -> (str)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 143

Potential errors:

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
15. out of bounds

### str - a string residing on a buffer
*Defined in: std/core/string.s line 67*

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

```rust
str(char[], nat pos, "len", nat length) -> (str)
```
Complexity:

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 118

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
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 55*

```rust
str(char[]) -> (str)
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 165

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
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 147

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
Complexity:

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 100

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers

### str - a string residing on a buffer
*Defined in: std/core/string.s line 43*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str)
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 43


### str - a string residing on a buffer
*Defined in: std/core/string.s line 39*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str)
```
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3


### str - reads a string from the console
*Defined in: std/core/convertstr.s line 114*

The read string is placed on an arena while consuming only the necessarily minimum size.

```rust
str(edit arena, console console) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 47
- Transpiled C size: 279

Potential errors:

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
23. unexpected end of console read
25. read string does not fit on buffer

### str - reads a string from the console
*Defined in: std/core/convertstr.s line 114*

The read string is placed onto memory that keeps being reallocated to accommodate its size.
The resulting memory will consume exactly the required size in bytes.

```rust
str(new CHARS, console console) -> (str) with effects CHARS
```
Complexity:

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 486

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
Complexity:

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10


# run
### run
*Defined in: std/test.s line 5*

```rust
run(console CLI, cstr command) -> (cstr) with effects CLI
```
Complexity:

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 154

Potential errors:

36. failed to start process
37. process terminated with unhandled non-zero exit code

### run
*Defined in: std/test.s line 5*

```rust
run(console CLI, str) -> (cstr) with effects CLI
```
Complexity:

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 160

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
36. failed to start process
37. process terminated with unhandled non-zero exit code
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation

# print\_marker
### print\_marker
*Defined in: std/test.s line 12*

```rust
print_marker(colors, "pending") -> () with effects colors
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 96


### print\_marker
*Defined in: std/test.s line 12*

```rust
print_marker(colors, "failure") -> () with effects colors
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 96


### print\_marker
*Defined in: std/test.s line 12*

```rust
print_marker(colors, "success") -> () with effects colors
```
Complexity:

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 96


# test
### test - prints and tests a system command
*Defined in: std/test.s line 27*

Returns whether the command succeeded or not.
The command itself is prepended by a waiting symbols,
that is converted to a success or failure one, depending
on the command's exit code.

```rust
test(colors, str) -> (bool) with effects colors
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 182

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
36. failed to start process
37. process terminated with unhandled non-zero exit code
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation

### test - prints and tests a system command
*Defined in: std/test.s line 27*

Returns whether the command succeeded or not.
The command itself is prepended by a waiting symbols,
that is converted to a success or failure one, depending
on the command's exit code.

```rust
test(colors, str, bool should_fail) -> (bool) with effects colors
```
Complexity:

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 219

Potential errors:

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
36. failed to start process
37. process terminated with unhandled non-zero exit code
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation

