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
[find](#find) 
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
[min](#min) 
[max](#max) 
[var](#var) 
[std](#std) 
[self](#self) 
[accumulator](#accumulator) 
[append](#append) 
[pearson](#pearson) 
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
[line](#line) 
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
[restore\_stdout](#restore\_stdout) 
[stdout\_to\_err](#stdout\_to\_err) 
[assert](#assert) 
[test](#test) 
</div>

# cstr
### cstr - constant string
*Defined in: builtins line 1*

```rust
cstr() -> (cstr)
```

### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 207*

```rust
cstr(cstr cstr, str) -> (cstr)
```

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3

</details>


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 207*

```rust
cstr(unsafe_temp) -> (cstr)
```

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 207*

```rust
cstr(unsafe_temp) -> (cstr)
```

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### cstr - a cstr description of an error code
*Defined in: std/core/error.s line 19*

```rust
cstr(catch) -> (cstr)
```

Error codes should *not* be compared numerically against
given numbers, as their numbering changes for different
programs. Instead, they should be converted to a cstr
string with this function, which can then be compared.
This comparison is also one numerical comparison, as
care is taken for all cstr to point to the same memory
location.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


# int
### int - a signed integer value
*Defined in: builtins line 1*

```rust
int() -> (int)
```

Represents values in the range `2^-63 to 2^63-1`.

### int - cast to int
*Defined in: std/core/convert.s line 89*

```rust
int(bits) -> (int)
```

Converts a bit representation to the corresponding integer.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### int - cast to int
*Defined in: std/core/convert.s line 29*

```rust
int(nat) -> (int)
```

Overflows are mapped to negative integers without any numerical safeguards.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 7

</details>


### int - cast to int
*Defined in: std/core/convert.s line 29*

```rust
int(int) -> (int)
```

Serves as a tautology function for code that parses on multiple number types.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 7

</details>


### int - cast to int
*Defined in: std/core/convert.s line 29*

```rust
int(float) -> (int)
```

May lose information due to truncating.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 7

</details>


### int - reads an integer from the console
*Defined in: std/core/convertstr.s line 36*

```rust
int(console) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 50
- Transpiled C size: 527

</details>

<details><summary>Potential errors</summary>

2. null pointer
24. unexpected end of console read
25. user input was not a float
15. out of bounds
</details>


### int - converts a string to an integer
*Defined in: std/core/convertstr.s line 149*

```rust
int(str) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 604

</details>

<details><summary>Potential errors</summary>

2. null pointer
27. invalid int conversion from empty string
28. invalid int conversion from string with only a sign
29. invalid integer int from non-number string
15. out of bounds
</details>


### int - converts a string to an integer
*Defined in: std/core/convertstr.s line 149*

```rust
int(cstr) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 58
- Transpiled C size: 598

</details>

<details><summary>Potential errors</summary>

2. null pointer
27. invalid int conversion from empty string
28. invalid int conversion from string with only a sign
29. invalid integer int from non-number string
15. out of bounds
</details>


# nat
### nat - an unsigned integer value
*Defined in: builtins line 1*

```rust
nat() -> (nat)
```

Represents values in the range `0 to 2^64-1`.

### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat32) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat16) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 84*

```rust
nat(bits) -> (nat)
```

Converts a bit representation to the corresponding natural number.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 51*

```rust
nat(char) -> (nat)
```

Converting a character to a natural number considers
its bit representation interpreted as an unsigned number.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

```rust
nat(nat) -> (nat)
```

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 7

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

```rust
nat(int) -> (nat)
```

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

</details>

<details><summary>Potential errors</summary>

8. cannot convert negative int to nat
</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

```rust
nat(float) -> (nat)
```

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

</details>

<details><summary>Potential errors</summary>

7. cannot convert negative float to nat
</details>


### nat - reads an unsigned integer from the console
*Defined in: std/core/convertstr.s line 60*

```rust
nat(console) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 390

</details>

<details><summary>Potential errors</summary>

25. user input was not a float
2. null pointer
15. out of bounds
</details>


### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s line 172*

```rust
nat(str) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 328

</details>

<details><summary>Potential errors</summary>

2. null pointer
31. invalid nat conversion from non-number string
30. invalid nat conversion from empty string
15. out of bounds
</details>


### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s line 172*

```rust
nat(cstr) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 322

</details>

<details><summary>Potential errors</summary>

2. null pointer
31. invalid nat conversion from non-number string
30. invalid nat conversion from empty string
15. out of bounds
</details>


# nat32
### nat32 - a 32-bit unsigned integer value
*Defined in: builtins line 1*

```rust
nat32() -> (nat32)
```

Represents values in the range `0 to 2^32-1`.

### nat32
*Defined in: std/core/allocators.s line 152*

```rust
nat32(nat) -> (nat32)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat32 - convert unsigned number to 32 bits
*Defined in: std/mini.s line 38*

```rust
nat32(nat) -> (nat32)
```

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

60. nat value too large to pack in nat32
</details>


# nat16
### nat16 - a 16-bit unsigned integer value
*Defined in: builtins line 1*

```rust
nat16() -> (nat16)
```

Represents values in the range `0 to 2^16-1`.

### nat16 - convert unsigned number to 16 bits
*Defined in: std/mini.s line 30*

```rust
nat16(nat) -> (nat16)
```

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

59. nat value too large to pack in nat16
</details>


# nat8
### nat8 - a 8-bit unsigned integer value
*Defined in: builtins line 1*

```rust
nat8() -> (nat8)
```

Represents values in the range `0 to 255`.

### nat8 - convert unsigned number to 8 bits
*Defined in: std/mini.s line 22*

```rust
nat8(nat) -> (nat8)
```

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

58. nat value too large to pack in nat8
</details>


# float
### float
*Defined in: builtins line 1*

```rust
float() -> (float)
```

### float - cast to float
*Defined in: std/core/convert.s line 95*

```rust
float(bits) -> (float)
```

Converts a bit representation to the corresponding float number.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 18

</details>


### float - cast to float
*Defined in: std/core/convert.s line 20*

```rust
float(nat) -> (float)
```

May lose information because floats are not exact representation of all integers.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 15

</details>


### float - cast to float
*Defined in: std/core/convert.s line 20*

```rust
float(int) -> (float)
```

May lose information because floats are not exact representation of all integers.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 15

</details>


### float - cast to float
*Defined in: std/core/convert.s line 20*

```rust
float(float) -> (float)
```

Serves as a tautology function for code that parses on multiple number types.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 15

</details>


### float - reads a float from the console
*Defined in: std/core/convertstr.s line 80*

```rust
float(console) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 67
- Transpiled C size: 722

</details>

<details><summary>Potential errors</summary>

2. null pointer
24. unexpected end of console read
25. user input was not a float
15. out of bounds
</details>


### float - converts a string to a float
*Defined in: std/core/convertstr.s line 184*

```rust
float(str) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 89
- Transpiled C size: 928

</details>

<details><summary>Potential errors</summary>

32. invalid float conversion from empty string
33. invalid float conversion from string with only a sign
2. null pointer
34. invalid float conversion from non-number string
35. invalid float conversion from string without a value after the dot
15. out of bounds
</details>


### float - converts a string to a float
*Defined in: std/core/convertstr.s line 184*

```rust
float(cstr) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 85
- Transpiled C size: 922

</details>

<details><summary>Potential errors</summary>

32. invalid float conversion from empty string
33. invalid float conversion from string with only a sign
2. null pointer
34. invalid float conversion from non-number string
35. invalid float conversion from string without a value after the dot
15. out of bounds
</details>


# bool
### bool - boolean value
*Defined in: builtins line 1*

```rust
bool() -> (bool)
```

Can only be `true` or `false`.

# err
### err
*Defined by the compiler*

```rust
err() -> (err)
```

# blank
### blank - empty tuple
*Defined in: builtins line 1*

```rust
blank() -> ()
```

This is the type of non-existent variables, empty parantheses, and functions of no returns.

# char
### char - a character
*Defined in: builtins line 1*

```rust
char() -> (char)
```

Represents characters in the numeric range `0 to 255`.

### char - treat as character
*Defined in: std/core/string.s line 115*

```rust
char(cstr) -> (char)
```

The first character of a string is extracted,
for example to write `c = char \"C\"`.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 14

</details>


### char - treat as character
*Defined in: std/core/string.s line 109*

```rust
char(str) -> (char)
```

The first character of a string is extracted,
for example to write `c = char str \"C\"`.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### char
*Defined in: std/core/convertstr.s line 24*

```rust
char(console) -> (char)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

24. unexpected end of console read
</details>


# any
### any - any type
*Defined in: builtins line 1*

```rust
any() -> ()
```

Represents a generic for buffers and pointers for type-independent code that can be matched to a concrete type later.
This type ordains special treatment by the compiler.

# eq
### eq - equals
*Defined in: std/core/numbers.s line 56*

```rust
eq(any ptr x, any ptr y) -> (bool)
```

Compares the address of two pointers.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### eq - equals
*Defined in: std/core/numbers.s line 40*

```rust
eq(catch x, catch y) -> (bool)
```

Compares two error messages. This comparison is
used only for comparing error messages produced
by the same running program.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### eq - equals
*Defined in: std/core/numbers.s line 26*

```rust
eq(nat x, nat y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### eq - equals
*Defined in: std/core/numbers.s line 26*

```rust
eq(int x, int y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### eq - equals
*Defined in: std/core/numbers.s line 26*

```rust
eq(float x, float y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### eq - equals
*Defined in: std/core/bool.s line 82*

```rust
eq(bool value, false) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### eq - equals
*Defined in: std/core/bool.s line 78*

```rust
eq(false, bool value) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### eq - equals
*Defined in: std/core/bool.s line 74*

```rust
eq(bool value, true) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


### eq - equals
*Defined in: std/core/bool.s line 70*

```rust
eq(true, bool value) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


### eq - equals
*Defined in: std/core/bool.s line 51*

```rust
eq(false, true) -> (false)
```

This is a compile-time operation that does not evoke any runtime booleans.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9

</details>


### eq - equals
*Defined in: std/core/bool.s line 46*

```rust
eq(true, false) -> (false)
```

This is a compile-time operation that does not evoke any runtime booleans.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9

</details>


### eq - equals
*Defined in: std/core/bool.s line 41*

```rust
eq(false, false) -> (true)
```

This is a compile-time operation that does not evoke any runtime booleans.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9

</details>


### eq - equals
*Defined in: std/core/bool.s line 36*

```rust
eq(true, true) -> (true)
```

This is a compile-time operation that does not evoke any runtime booleans.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9

</details>


### eq - equals
*Defined in: std/core/bool.s line 20*

```rust
eq(bool x, bool y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9

</details>


### eq - equals
*Defined in: std/core/string.s line 283*

```rust
eq(cstr x, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 77

</details>


### eq - equals
*Defined in: std/core/string.s line 277*

```rust
eq(str, cstr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 77

</details>


### eq - equals
*Defined in: std/core/string.s line 250*

```rust
eq(str, str) -> (bool)
```

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

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 105

</details>


### eq - equals
*Defined in: std/core/string.s line 241*

```rust
eq(cstr x, cstr y) -> (bool)
```

Comparing two cstrs is as simple as comparing their addresses,
so this operation is exceedingly lightweight and a convenient
means for checking for runtime tags. The compier enforces that
two same-content cstr will always have the same memory address.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### eq - equals
*Defined in: std/core/string.s line 122*

```rust
eq(char x, char y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(float ptr _x, float _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(float ptr _x, float ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 43*

```rust
eq(cstr ptr x, cstr ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 61

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 43*

```rust
eq(cstr ptr x, str ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 103

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 43*

```rust
eq(str ptr x, cstr ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 103

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 43*

```rust
eq(str ptr x, str ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 145

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 39*

```rust
eq(cstr x, cstr ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 37

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 39*

```rust
eq(cstr x, str ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 39*

```rust
eq(str, cstr ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 43

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 39*

```rust
eq(str, str ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 85

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 35*

```rust
eq(cstr ptr x, cstr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 37

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 35*

```rust
eq(cstr ptr x, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 43

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 35*

```rust
eq(str ptr x, cstr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 35*

```rust
eq(str ptr x, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 85

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(nat _x, nat ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(int _x, int ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(float _x, float ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(nat ptr _x, nat _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(nat ptr _x, nat ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(int ptr _x, int _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### eq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 63*

```rust
eq(int ptr _x, int ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


# neq
### neq - not equal
*Defined in: std/core/numbers.s line 48*

```rust
neq(catch x, catch y) -> (bool)
```

Compares two error messages. This comparison is
used only for comparing error messages produced
by the same running program.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### neq - not equal
*Defined in: std/core/numbers.s line 33*

```rust
neq(nat x, nat y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### neq - not equal
*Defined in: std/core/numbers.s line 33*

```rust
neq(int x, int y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### neq - not equal
*Defined in: std/core/numbers.s line 33*

```rust
neq(float x, float y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### neq - not equal
*Defined in: std/core/bool.s line 90*

```rust
neq(bool x, false y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21

</details>


### neq - not equal
*Defined in: std/core/bool.s line 90*

```rust
neq(bool x, true y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21

</details>


### neq - not equal
*Defined in: std/core/bool.s line 86*

```rust
neq(false x, bool y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21

</details>


### neq - not equal
*Defined in: std/core/bool.s line 86*

```rust
neq(true x, bool y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21

</details>


### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(false x, false y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21

</details>


### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(false x, true y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21

</details>


### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(true x, false y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21

</details>


### neq - not equal
*Defined in: std/core/bool.s line 66*

```rust
neq(true x, true y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21

</details>


### neq - not equal
*Defined in: std/core/bool.s line 25*

```rust
neq(bool x, bool y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9

</details>


### neq - not equal
*Defined in: std/unsafe.s line 19*

```rust
neq(any ptr x, any ptr y) -> (bool)
```

Compares the address of two pointers.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### neq - not equals
*Defined in: std/core/string.s line 289*

```rust
neq(cstr x, cstr y) -> (bool)
```

Negates the outcome of equality checks between cstr and strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 21

</details>


### neq - not equals
*Defined in: std/core/string.s line 289*

```rust
neq(cstr x, str) -> (bool)
```

Negates the outcome of equality checks between cstr and strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 27

</details>


### neq - not equals
*Defined in: std/core/string.s line 289*

```rust
neq(str, cstr y) -> (bool)
```

Negates the outcome of equality checks between cstr and strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 27

</details>


### neq - not equals
*Defined in: std/core/string.s line 289*

```rust
neq(str, str) -> (bool)
```

Negates the outcome of equality checks between cstr and strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 33

</details>


### neq - not equals
*Defined in: std/core/string.s line 127*

```rust
neq(char x, char y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 55*

```rust
neq(cstr ptr x, cstr ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 61

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 55*

```rust
neq(cstr ptr x, str ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 103

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 55*

```rust
neq(str ptr x, cstr ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 103

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 55*

```rust
neq(str ptr x, str ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 145

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 51*

```rust
neq(cstr x, cstr ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 37

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 51*

```rust
neq(cstr x, str ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 51*

```rust
neq(str, cstr ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 43

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 51*

```rust
neq(str, str ptr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 85

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 47*

```rust
neq(cstr ptr x, cstr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 37

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 47*

```rust
neq(cstr ptr x, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 43

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 47*

```rust
neq(str ptr x, cstr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 47*

```rust
neq(str ptr x, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 85

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(nat _x, nat ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(int _x, int ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(float _x, float ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(nat ptr _x, nat _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(nat ptr _x, nat ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(int ptr _x, int _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(int ptr _x, int ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(float ptr _x, float _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### neq - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 73*

```rust
neq(float ptr _x, float ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


# not
### not - logical inverse
*Defined in: std/core/bool.s line 61*

```rust
not(false) -> (true)
```

This is a compile-time operation on the compiler::false type rather than a runtime boolean.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 9

</details>


### not - logical inverse
*Defined in: std/core/bool.s line 56*

```rust
not(true) -> (false)
```

This is a compile-time operation on the compiler::true type rather than a runtime boolean.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 9

</details>


### not - logical inverse
*Defined in: std/core/bool.s line 30*

```rust
not(bool) -> (bool)
```

This operates on boolean values at runtime.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 14

</details>


# Number
### nat - an unsigned integer value
*Defined in: builtins line 1*

```rust
nat() -> (nat)
```

Represents values in the range `0 to 2^64-1`.

### float
*Defined in: builtins line 1*

```rust
float() -> (float)
```

### int - a signed integer value
*Defined in: builtins line 1*

```rust
int() -> (int)
```

Represents values in the range `2^-63 to 2^63-1`.

# is\_different
### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(nat x, nat y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(nat x, int y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(nat x, float y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(int x, nat y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(int x, int y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(int x, float y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(float x, nat y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(float x, int y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### is\_different
*Defined in: std/core/numbers.s line 23*

```rust
is_different(float x, float y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


# neg
### neg - negative of a number
*Defined in: std/core/numbers.s line 62*

```rust
neg(nat) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 11

</details>


### neg - negative of a number
*Defined in: std/core/numbers.s line 62*

```rust
neg(int) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 11

</details>


### neg - negative of a number
*Defined in: std/core/numbers.s line 62*

```rust
neg(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 11

</details>


# add
### add - add
*Defined in: std/core/numbers.s line 67*

```rust
add(nat x, nat y) -> (nat)
```

Adds two numbers of the same type. This is an overload for the + operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### add - add
*Defined in: std/core/numbers.s line 67*

```rust
add(int x, int y) -> (int)
```

Adds two numbers of the same type. This is an overload for the + operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### add - add
*Defined in: std/core/numbers.s line 67*

```rust
add(float x, float y) -> (float)
```

Adds two numbers of the same type. This is an overload for the + operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### add - pointer addition
*Defined in: std/unsafe.s line 65*

```rust
add(any ptr allocated, nat offset) -> (any ptr {follows any ptr allocated})
```

Adds a natural number offset to a pointer.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 446*

```rust
add(edit arena, cstr _s1, cstr _s2) -> (str) with effects CHARS
```

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

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 164
- Transpiled C size: 980

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 446*

```rust
add(edit arena, cstr _s1, str) -> (str) with effects CHARS
```

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

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 168
- Transpiled C size: 986

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 446*

```rust
add(edit arena, str, cstr _s2) -> (str) with effects CHARS
```

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

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 168
- Transpiled C size: 986

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 446*

```rust
add(edit arena, str, str) -> (str) with effects CHARS
```

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

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 172
- Transpiled C size: 992

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 420*

```rust
add(edit list, cstr _s1, cstr _s2) -> (str) with effects CHARS
```

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 104
- Transpiled C size: 483

</details>

<details><summary>Potential errors</summary>

4. division by zero
11. reallocation failed
14. cannot resize an unallocated or freed buffer
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 420*

```rust
add(edit list, cstr _s1, str) -> (str) with effects CHARS
```

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 108
- Transpiled C size: 489

</details>

<details><summary>Potential errors</summary>

4. division by zero
11. reallocation failed
14. cannot resize an unallocated or freed buffer
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 420*

```rust
add(edit list, str, cstr _s2) -> (str) with effects CHARS
```

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 108
- Transpiled C size: 489

</details>

<details><summary>Potential errors</summary>

4. division by zero
11. reallocation failed
14. cannot resize an unallocated or freed buffer
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 420*

```rust
add(edit list, str, str) -> (str) with effects CHARS
```

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 112
- Transpiled C size: 495

</details>

<details><summary>Potential errors</summary>

4. division by zero
11. reallocation failed
14. cannot resize an unallocated or freed buffer
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 420*

```rust
add(edit circular, cstr _s1, cstr _s2) -> (str) with effects CHARS
```

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 104
- Transpiled C size: 483

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 420*

```rust
add(edit circular, cstr _s1, str) -> (str) with effects CHARS
```

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 108
- Transpiled C size: 489

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 420*

```rust
add(edit circular, str, cstr _s2) -> (str) with effects CHARS
```

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 108
- Transpiled C size: 489

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 420*

```rust
add(edit circular, str, str) -> (str) with effects CHARS
```

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 112
- Transpiled C size: 495

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 420*

```rust
add(new CHARS, cstr _s1, cstr _s2) -> (str) with effects CHARS
```

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 100
- Transpiled C size: 492

</details>

<details><summary>Potential errors</summary>

10. allocation failed
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### add - concatenate two strings
*Defined in: std/core/string.s line 420*

```rust
add(new CHARS, cstr _s1, str) -> (str) with effects CHARS
```

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 104
- Transpiled C size: 498

</details>

<details><summary>Potential errors</summary>

10. allocation failed
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### add - concatenate two strings
*Defined in: std/core/string.s line 420*

```rust
add(new CHARS, str, cstr _s2) -> (str) with effects CHARS
```

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 104
- Transpiled C size: 498

</details>

<details><summary>Potential errors</summary>

10. allocation failed
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### add - concatenate two strings
*Defined in: std/core/string.s line 420*

```rust
add(new CHARS, str, str) -> (str) with effects CHARS
```

The result is placed on an allocator effect CHARS.
This implementation creates a new allocation and is therefore
slower compared to using a simple arena, circular buffer, or even
an automatically resized list. Since that allocation defers its
deallocation too, it cannot be returned from nested code blocks.
Switch to a different character allocator to produce more dynamic
yet safe and fast code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 108
- Transpiled C size: 504

</details>

<details><summary>Potential errors</summary>

10. allocation failed
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### add - vector addition
*Defined in: std/sci/vec.s line 93*

```rust
add(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 49

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 93*

```rust
add(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 49

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 93*

```rust
add(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### add - vector addition
*Defined in: std/sci/vec.s line 82*

```rust
add(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 82*

```rust
add(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
65. different vector sizes
2. null pointer
17. does not fit in circular arena
63. can only place vectors on contiguous buffers
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 82*

```rust
add(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 82*

```rust
add(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
65. different vector sizes
2. null pointer
16. arena is out of space
63. can only place vectors on contiguous buffers
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 82*

```rust
add(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 210

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### add - vector addition
*Defined in: std/sci/vec.s line 82*

```rust
add(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 248

</details>

<details><summary>Potential errors</summary>

65. different vector sizes
10. allocation failed
2. null pointer
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(nat _x, nat ptr _y) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(int _x, int ptr _y) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(float _x, float ptr _y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(nat ptr _x, nat _y) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(nat ptr _x, nat ptr _y) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(int ptr _x, int _y) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(int ptr _x, int ptr _y) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(float ptr _x, float _y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### add - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 83*

```rust
add(float ptr _x, float ptr _y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


# mul
### mul - multiply with
*Defined in: std/core/numbers.s line 75*

```rust
mul(nat x, nat y) -> (nat)
```

Multiplies two numbers of the same type. This is an overload for the * operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### mul - multiply with
*Defined in: std/core/numbers.s line 75*

```rust
mul(int x, int y) -> (int)
```

Multiplies two numbers of the same type. This is an overload for the * operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### mul - multiply with
*Defined in: std/core/numbers.s line 75*

```rust
mul(float x, float y) -> (float)
```

Multiplies two numbers of the same type. This is an overload for the * operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 129*

```rust
mul(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 49

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 129*

```rust
mul(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 49

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 129*

```rust
mul(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mul - vector multiplication
*Defined in: std/sci/vec.s line 118*

```rust
mul(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 118*

```rust
mul(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
65. different vector sizes
2. null pointer
17. does not fit in circular arena
63. can only place vectors on contiguous buffers
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 118*

```rust
mul(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 118*

```rust
mul(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
65. different vector sizes
2. null pointer
16. arena is out of space
63. can only place vectors on contiguous buffers
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 118*

```rust
mul(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 210

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mul - vector multiplication
*Defined in: std/sci/vec.s line 118*

```rust
mul(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 248

</details>

<details><summary>Potential errors</summary>

65. different vector sizes
10. allocation failed
2. null pointer
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 99*

```rust
mul(new FLOATS, mat, vec) -> (mut vec) with effects FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 54
- Transpiled C size: 423

</details>

<details><summary>Potential errors</summary>

2. null pointer
74. matrix columns must match vector length
10. allocation failed
15. out of bounds
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 79*

```rust
mul(edit circular, coo, mat) -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 520

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
72. row out of bounds
73. column out of bounds
76. inner dimensions must agree
17. does not fit in circular arena
</details>


### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 79*

```rust
mul(edit arena, coo, mat) -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 520

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
72. row out of bounds
73. column out of bounds
76. inner dimensions must agree
16. arena is out of space
</details>


### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 79*

```rust
mul(new FLOATS, coo, mat) -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 505

</details>

<details><summary>Potential errors</summary>

2. null pointer
72. row out of bounds
73. column out of bounds
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
76. inner dimensions must agree
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 69*

```rust
mul(edit circular, vec, coo) -> (mut vec) with effects FLOATS
```

*Warning: the expression `self(v)*m` yields wrong values

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 46
- Transpiled C size: 388

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
75. vector length must match matrix rows
15. out of bounds
63. can only place vectors on contiguous buffers
</details>


### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 69*

```rust
mul(edit arena, vec, coo) -> (mut vec) with effects FLOATS
```

*Warning: the expression `self(v)*m` yields wrong values

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 46
- Transpiled C size: 388

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
75. vector length must match matrix rows
15. out of bounds
63. can only place vectors on contiguous buffers
</details>


### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 69*

```rust
mul(new FLOATS, vec, coo) -> (mut vec) with effects FLOATS
```

*Warning: the expression `self(v)*m` yields wrong values

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 373

</details>

<details><summary>Potential errors</summary>

2. null pointer
10. allocation failed
75. vector length must match matrix rows
15. out of bounds
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 61*

```rust
mul(edit circular, coo, vec) -> (mut vec) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 388

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
74. matrix columns must match vector length
15. out of bounds
63. can only place vectors on contiguous buffers
</details>


### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 61*

```rust
mul(edit arena, coo, vec) -> (mut vec) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 388

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
74. matrix columns must match vector length
15. out of bounds
63. can only place vectors on contiguous buffers
</details>


### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 61*

```rust
mul(new FLOATS, coo, vec) -> (mut vec) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 373

</details>

<details><summary>Potential errors</summary>

2. null pointer
74. matrix columns must match vector length
10. allocation failed
15. out of bounds
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 123*

```rust
mul(edit circular, mat, mat) -> (mut mat) with effects FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 85
- Transpiled C size: 596

</details>

<details><summary>Potential errors</summary>

17. does not fit in circular arena
2. null pointer
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
72. row out of bounds
73. column out of bounds
76. inner dimensions must agree
</details>


### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 123*

```rust
mul(edit arena, mat, mat) -> (mut mat) with effects FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 85
- Transpiled C size: 596

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
2. null pointer
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
72. row out of bounds
73. column out of bounds
76. inner dimensions must agree
</details>


### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 123*

```rust
mul(new FLOATS, mat, mat) -> (mut mat) with effects FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 581

</details>

<details><summary>Potential errors</summary>

2. null pointer
12. cannot allocate a buffer of unsized type
72. row out of bounds
73. column out of bounds
10. allocation failed
76. inner dimensions must agree
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 111*

```rust
mul(edit circular, vec, mat) -> (mut vec) with effects FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 438

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
75. vector length must match matrix rows
15. out of bounds
63. can only place vectors on contiguous buffers
</details>


### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 111*

```rust
mul(edit arena, vec, mat) -> (mut vec) with effects FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 438

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
75. vector length must match matrix rows
15. out of bounds
63. can only place vectors on contiguous buffers
</details>


### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 111*

```rust
mul(new FLOATS, vec, mat) -> (mut vec) with effects FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 54
- Transpiled C size: 423

</details>

<details><summary>Potential errors</summary>

2. null pointer
10. allocation failed
75. vector length must match matrix rows
15. out of bounds
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 99*

```rust
mul(edit circular, mat, vec) -> (mut vec) with effects FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 438

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
74. matrix columns must match vector length
15. out of bounds
63. can only place vectors on contiguous buffers
</details>


### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 99*

```rust
mul(edit arena, mat, vec) -> (mut vec) with effects FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 438

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
74. matrix columns must match vector length
15. out of bounds
63. can only place vectors on contiguous buffers
</details>


### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(nat _x, nat ptr _y) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(int _x, int ptr _y) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(float _x, float ptr _y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(nat ptr _x, nat _y) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(nat ptr _x, nat ptr _y) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(int ptr _x, int _y) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(int ptr _x, int ptr _y) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(float ptr _x, float _y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### mul - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 103*

```rust
mul(float ptr _x, float ptr _y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


# div
### div - divide by
*Defined in: std/core/numbers.s line 83*

```rust
div(nat x, nat y) -> (nat)
```

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 46

</details>

<details><summary>Potential errors</summary>

4. division by zero
</details>


### div - divide by
*Defined in: std/core/numbers.s line 83*

```rust
div(nat x, nat y, "unsafe_assume_nonzero") -> (nat)
```

Divides two numbers of the same type. This is an overload for the / operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19

</details>


### div - divide by
*Defined in: std/core/numbers.s line 83*

```rust
div(int x, int y) -> (int)
```

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 46

</details>

<details><summary>Potential errors</summary>

4. division by zero
</details>


### div - divide by
*Defined in: std/core/numbers.s line 83*

```rust
div(int x, int y, "unsafe_assume_nonzero") -> (int)
```

Divides two numbers of the same type. This is an overload for the / operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19

</details>


### div - divide by
*Defined in: std/core/numbers.s line 83*

```rust
div(float x, float y) -> (float)
```

Divides two numbers of the same type. This is an overload for the / operator.
Safeguards against division by zero.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 46

</details>

<details><summary>Potential errors</summary>

4. division by zero
</details>


### div - divide by
*Defined in: std/core/numbers.s line 83*

```rust
div(float x, float y, "unsafe_assume_nonzero") -> (float)
```

Divides two numbers of the same type. This is an overload for the / operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19

</details>


### div - vector division
*Defined in: std/sci/vec.s line 167*

```rust
div(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 226

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
4. division by zero
63. can only place vectors on contiguous buffers
</details>


### div - vector division
*Defined in: std/sci/vec.s line 167*

```rust
div(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 226

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
4. division by zero
63. can only place vectors on contiguous buffers
</details>


### div - vector division
*Defined in: std/sci/vec.s line 167*

```rust
div(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 211

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
4. division by zero
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### div - vector division
*Defined in: std/sci/vec.s line 155*

```rust
div(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 240

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
4. division by zero
63. can only place vectors on contiguous buffers
</details>


### div - vector division
*Defined in: std/sci/vec.s line 155*

```rust
div(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 278

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
65. different vector sizes
2. null pointer
17. does not fit in circular arena
4. division by zero
63. can only place vectors on contiguous buffers
</details>


### div - vector division
*Defined in: std/sci/vec.s line 155*

```rust
div(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 240

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
4. division by zero
63. can only place vectors on contiguous buffers
</details>


### div - vector division
*Defined in: std/sci/vec.s line 155*

```rust
div(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 278

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
65. different vector sizes
2. null pointer
16. arena is out of space
4. division by zero
63. can only place vectors on contiguous buffers
</details>


### div - vector division
*Defined in: std/sci/vec.s line 155*

```rust
div(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 31
- Transpiled C size: 225

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
4. division by zero
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### div - vector division
*Defined in: std/sci/vec.s line 155*

```rust
div(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 263

</details>

<details><summary>Potential errors</summary>

65. different vector sizes
10. allocation failed
2. null pointer
4. division by zero
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(float _x, float ptr _y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
</details>


### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(nat ptr _x, nat _y) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
</details>


### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(nat ptr _x, nat ptr _y) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 90

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
</details>


### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(int ptr _x, int _y) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
</details>


### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(int ptr _x, int ptr _y) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 90

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
</details>


### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(float ptr _x, float _y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
</details>


### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(float ptr _x, float ptr _y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 90

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
</details>


### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(nat _x, nat ptr _y) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
</details>


### div - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 113*

```rust
div(int _x, int ptr _y) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
</details>


# mod
### mod - modulo by
*Defined in: std/core/numbers.s line 96*

```rust
mod(nat x, nat y) -> (nat)
```

Computes the modulo between two natural numbers. This is an overload for the % operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 36

</details>

<details><summary>Potential errors</summary>

5. modulo by zero
</details>


### mod - modulo by
*Defined in: std/core/numbers.s line 96*

```rust
mod(nat x, nat y, "unsafe_assume_nonzero") -> (nat)
```

Computes the modulo between two natural numbers. This is an overload for the % operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


# lt
### lt - less than
*Defined in: std/core/numbers.s line 106*

```rust
lt(nat x, nat y) -> (bool)
```

Compares two numbers of the same type. This is an overload for the < operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### lt - less than
*Defined in: std/core/numbers.s line 106*

```rust
lt(int x, int y) -> (bool)
```

Compares two numbers of the same type. This is an overload for the < operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### lt - less than
*Defined in: std/core/numbers.s line 106*

```rust
lt(float x, float y) -> (bool)
```

Compares two numbers of the same type. This is an overload for the < operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(nat _x, nat ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(int _x, int ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(float _x, float ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(nat ptr _x, nat _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(nat ptr _x, nat ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(int ptr _x, int _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(int ptr _x, int ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(float ptr _x, float _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### lt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 123*

```rust
lt(float ptr _x, float ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


# gt
### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s line 114*

```rust
gt(nat x, nat y) -> (bool)
```

greater than

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s line 114*

```rust
gt(int x, int y) -> (bool)
```

greater than

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### gt - Compares two numbers of the same type. This is an overload for the > operator.
*Defined in: std/core/numbers.s line 114*

```rust
gt(float x, float y) -> (bool)
```

greater than

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(nat _x, nat ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(int _x, int ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(float _x, float ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(nat ptr _x, nat _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(nat ptr _x, nat ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(int ptr _x, int _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(int ptr _x, int ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(float ptr _x, float _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### gt - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 133*

```rust
gt(float ptr _x, float ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


# le
### le - less than or equal to
*Defined in: std/core/numbers.s line 122*

```rust
le(float x, float y) -> (bool)
```

Compares two numbers of the same type. This is an overload for the <= operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### le - less than or equal to
*Defined in: std/core/numbers.s line 122*

```rust
le(nat x, nat y) -> (bool)
```

Compares two numbers of the same type. This is an overload for the <= operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### le - less than or equal to
*Defined in: std/core/numbers.s line 122*

```rust
le(int x, int y) -> (bool)
```

Compares two numbers of the same type. This is an overload for the <= operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(nat _x, nat ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(int _x, int ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(float _x, float ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(nat ptr _x, nat _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(nat ptr _x, nat ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(int ptr _x, int _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(int ptr _x, int ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(float ptr _x, float _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### le - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 143*

```rust
le(float ptr _x, float ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


# ge
### ge - greater than or equal to
*Defined in: std/core/numbers.s line 130*

```rust
ge(nat x, nat y) -> (bool)
```

Compares two numbers of the same type. This is an overload for the >= operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### ge - greater than or equal to
*Defined in: std/core/numbers.s line 130*

```rust
ge(int x, int y) -> (bool)
```

Compares two numbers of the same type. This is an overload for the >= operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### ge - greater than or equal to
*Defined in: std/core/numbers.s line 130*

```rust
ge(float x, float y) -> (bool)
```

Compares two numbers of the same type. This is an overload for the >= operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(nat _x, nat ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(int _x, int ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(float _x, float ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(nat ptr _x, nat _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(nat ptr _x, nat ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(int ptr _x, int _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(int ptr _x, int ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(float ptr _x, float _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### ge - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 153*

```rust
ge(float ptr _x, float ptr _y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


# sub
### sub - subtract by
*Defined in: std/core/numbers.s line 150*

```rust
sub(nat x, nat y, "assume_smaller") -> (nat)
```

Subtracts two natural numbers without underflow check. This is an overload for the - operator,
for example used like below. This overload never fails and instead adds 0xFFFFFFFFFFFFFFFF to
the result if it would produce a negative.
```rust
0-(1 assume_smaller)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### sub - subtract by
*Defined in: std/core/numbers.s line 138*

```rust
sub(nat x, nat y) -> (nat)
```

Subtracts two numbers of the same type. This is an overload for the - operator.
Natural numbers are safeguarded against acquiring negative results, which would overflow.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

</details>

<details><summary>Potential errors</summary>

6. nat subtraction would yield a negative
</details>


### sub - subtract by
*Defined in: std/core/numbers.s line 138*

```rust
sub(int x, int y) -> (int)
```

Subtracts two numbers of the same type. This is an overload for the - operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19

</details>


### sub - subtract by
*Defined in: std/core/numbers.s line 138*

```rust
sub(float x, float y) -> (float)
```

Subtracts two numbers of the same type. This is an overload for the - operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19

</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 109*

```rust
sub(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 215

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 109*

```rust
sub(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 215

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 109*

```rust
sub(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 200

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### sub - vector subtraction
*Defined in: std/sci/vec.s line 98*

```rust
sub(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 98*

```rust
sub(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
65. different vector sizes
2. null pointer
17. does not fit in circular arena
63. can only place vectors on contiguous buffers
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 98*

```rust
sub(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 98*

```rust
sub(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
65. different vector sizes
2. null pointer
16. arena is out of space
63. can only place vectors on contiguous buffers
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 98*

```rust
sub(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 210

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### sub - vector subtraction
*Defined in: std/sci/vec.s line 98*

```rust
sub(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 248

</details>

<details><summary>Potential errors</summary>

65. different vector sizes
10. allocation failed
2. null pointer
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(nat _x, nat ptr _y) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
</details>


### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(int _x, int ptr _y) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(float _x, float ptr _y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(nat ptr _x, nat _y) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
</details>


### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(nat ptr _x, nat ptr _y) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 90

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
</details>


### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(int ptr _x, int _y) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(int ptr _x, int ptr _y) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(float ptr _x, float _y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 68

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### sub - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 93*

```rust
sub(float ptr _x, float ptr _y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 79

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


# pow
### pow - exponentiate by
*Defined in: std/core/numbers.s line 161*

```rust
pow(nat x, nat y) -> (mut nat)
```

Exponentiates a natural number by another.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 84

</details>


### pow
*Defined in: std/sci/math.s line 89*

```rust
pow(float x, float y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 12

</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 146*

```rust
pow(edit circular, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 215

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 146*

```rust
pow(edit arena, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 215

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 146*

```rust
pow(new FLOATS, float v1, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 200

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 135*

```rust
pow(edit circular, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 135*

```rust
pow(edit circular, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
65. different vector sizes
2. null pointer
17. does not fit in circular arena
63. can only place vectors on contiguous buffers
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 135*

```rust
pow(edit arena, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 135*

```rust
pow(edit arena, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
65. different vector sizes
2. null pointer
16. arena is out of space
63. can only place vectors on contiguous buffers
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 135*

```rust
pow(new FLOATS, vec, float v2) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 210

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### pow - vector exponentiation
*Defined in: std/sci/vec.s line 135*

```rust
pow(new FLOATS, vec, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 248

</details>

<details><summary>Potential errors</summary>

65. different vector sizes
10. allocation failed
2. null pointer
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# console
### console - references the system console
*Defined in: std/core/print.s line 20*

```rust
console() -> (console)
```

As a singleton, the console should usually be instantiated
in the `main()` function and then passed to dependent calls, for example via an
an effect for convenience. Standard library print functions provide the CLI effect
and you can propagate to this by prepending `effect edit console CLI` to function
arguments.

The console is a zero-cost abstraction in that it does not transfer any data
but relies on singleton safety to synchronize io across threads.
Quickly print internals for debugging with `unsafe_console()`.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


# unsafe\_console
### unsafe\_console - references the system console unsafely
*Defined in: std/core/print.s line 35*

```rust
unsafe_console() -> (mut console)
```

This is convenient for print debugging by writing `unsafe_console().print ...`
without needing to evoke an effect to pass the normally singleton console.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


# print
### print - prints a boolean
*Defined in: std/core/print.s line 97*

```rust
print(console CLI, false) -> () with effects CLI
```

Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 11

</details>


### print - prints a boolean
*Defined in: std/core/print.s line 97*

```rust
print(console CLI, false, cstr endl) -> () with effects CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 7

</details>


### print - prints a boolean
*Defined in: std/core/print.s line 90*

```rust
print(console CLI, true) -> () with effects CLI
```

Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 11

</details>


### print - prints a boolean
*Defined in: std/core/print.s line 90*

```rust
print(console CLI, true, cstr endl) -> () with effects CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 7

</details>


### print - prints a boolean
*Defined in: std/core/print.s line 83*

```rust
print(console CLI, bool value) -> () with effects CLI
```

Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 31

</details>


### print - prints a boolean
*Defined in: std/core/print.s line 83*

```rust
print(console CLI, bool value, cstr endl) -> () with effects CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 27

</details>


### print - prints an unsigned integer
*Defined in: std/core/print.s line 76*

```rust
print(console CLI, nat value) -> () with effects CLI
```

Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 13

</details>


### print - prints an unsigned integer
*Defined in: std/core/print.s line 76*

```rust
print(console CLI, nat value, cstr endl) -> () with effects CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### print - prints an integer
*Defined in: std/core/print.s line 69*

```rust
print(console CLI, int value) -> () with effects CLI
```

Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 13

</details>


### print - prints an integer
*Defined in: std/core/print.s line 69*

```rust
print(console CLI, int value, cstr endl) -> () with effects CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### print - prints a float
*Defined in: std/core/print.s line 61*

```rust
print(console CLI, float value) -> () with effects CLI
```

To pre-specified 6 decimal digits.
Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 13

</details>


### print - prints a float
*Defined in: std/core/print.s line 61*

```rust
print(console CLI, float value, cstr endl) -> () with effects CLI
```

To pre-specified 6 decimal digits.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### print - prints a cstr
*Defined in: std/core/print.s line 54*

```rust
print(console CLI, cstr value) -> () with effects CLI
```

Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 13

</details>


### print - prints a cstr
*Defined in: std/core/print.s line 54*

```rust
print(console CLI, cstr value, cstr endl) -> () with effects CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### print - flushes the print buffer on the console
*Defined in: std/core/print.s line 43*

```rust
print(console CLI, "flush") -> () with effects CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 5

</details>


### print - print a character
*Defined in: std/core/string.s line 325*

```rust
print(console CLI, char c) -> () with effects CLI
```

Ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 13

</details>


### print - print a character
*Defined in: std/core/string.s line 325*

```rust
print(console CLI, char c, cstr endl) -> () with effects CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### print - print a string
*Defined in: std/core/string.s line 311*

```rust
print(console CLI, str) -> () with effects CLI
```

Ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 17

</details>


### print - print a string
*Defined in: std/core/string.s line 311*

```rust
print(console CLI, str, cstr endl) -> () with effects CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 13

</details>


### print - print a vector
*Defined in: std/sci/vec.s line 261*

```rust
print(console CLI, vec) -> () with effects CLI
```

Prints as a row, such as [ 1.0  2.0  3.0 ]

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 234

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
</details>


### print - print a vector
*Defined in: std/sci/vec.s line 261*

```rust
print(console CLI, vec, cstr endl) -> () with effects CLI
```

Prints as a row, such as [ 1.0  2.0  3.0 ]

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 31
- Transpiled C size: 230

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
</details>


### print - print sparse matrix
*Defined in: std/sci/coo.s line 95*

```rust
print(console CLI, coo) -> () with effects CLI
```

Prints it as coordinate as list: (i, j): v

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 182

</details>


### print - print sparse matrix
*Defined in: std/sci/coo.s line 95*

```rust
print(console CLI, coo, cstr endl) -> () with effects CLI
```

Prints it as coordinate as list: (i, j): v

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 178

</details>


### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s line 137*

```rust
print(console CLI, mat) -> () with effects CLI
```

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 88
- Transpiled C size: 838

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
</details>


### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s line 137*

```rust
print(console CLI, mat, cstr endl) -> () with effects CLI
```

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 87
- Transpiled C size: 834

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
</details>


# nn
### nn - no new line
*Defined in: std/core/print.s line 47*

```rust
nn(nat) -> (nat value, cstr)
```

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### nn - no new line
*Defined in: std/core/print.s line 47*

```rust
nn(int) -> (int value, cstr)
```

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### nn - no new line
*Defined in: std/core/print.s line 47*

```rust
nn(float) -> (float value, cstr)
```

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### nn - no new line
*Defined in: std/core/print.s line 47*

```rust
nn(cstr) -> (cstr value, cstr)
```

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### nn - no new line
*Defined in: std/core/string.s line 413*

```rust
nn(str) -> (str, cstr)
```

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without a new line.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 7

</details>


### nn - no new line
*Defined in: std/sci/vec.s line 254*

```rust
nn(vec) -> (vec, cstr)
```

Given a value, creates a tuple of (value, \"\").
This enables the pattern 'print nn value'
to print without a new line.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 7

</details>


# supports\_ansi
### supports\_ansi
*Defined in: std/core/print.s line 104*

```rust
supports_ansi(console) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 9

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[supports_ansi()]`*
# colors
### colors
*Defined in: std/core/print.s line 109*

```rust
colors(console) -> (colors)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 13

</details>


<details><summary>Defered calls</summary>

```rust
```
</details>

# set
### set
*Defined in: std/core/print.s line 182*

```rust
set(colors, "reset_underline") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 180*

```rust
set(colors, "reset_bold") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 178*

```rust
set(colors, "reset_bg") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 176*

```rust
set(colors, "reset_color") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 174*

```rust
set(colors, "reset") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 172*

```rust
set(colors, "strikethrough") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 170*

```rust
set(colors, "reverse") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 168*

```rust
set(colors, "blink") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 166*

```rust
set(colors, "underline") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 164*

```rust
set(colors, "italic") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 162*

```rust
set(colors, "dim") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 160*

```rust
set(colors, "bold") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 158*

```rust
set(colors, "bg_black") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 156*

```rust
set(colors, "bg_white") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 154*

```rust
set(colors, "bg_cyan") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 152*

```rust
set(colors, "bg_magenta") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 150*

```rust
set(colors, "bg_blue") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 148*

```rust
set(colors, "bg_yellow") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 146*

```rust
set(colors, "bg_green") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 144*

```rust
set(colors, "bg_red") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 142*

```rust
set(colors, "bright_white") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 140*

```rust
set(colors, "bright_cyan") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 138*

```rust
set(colors, "bright_magenta") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 136*

```rust
set(colors, "bright_blue") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 134*

```rust
set(colors, "bright_yellow") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 132*

```rust
set(colors, "bright_green") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 130*

```rust
set(colors, "bright_red") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 128*

```rust
set(colors, "black") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 126*

```rust
set(colors, "white") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 124*

```rust
set(colors, "cyan") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 122*

```rust
set(colors, "magenta") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 120*

```rust
set(colors, "blue") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 118*

```rust
set(colors, "yellow") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 116*

```rust
set(colors, "green") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### set
*Defined in: std/core/print.s line 114*

```rust
set(colors, "red") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


# exists
### exists - checks that a pointer exists
*Defined in: std/core/convert.s line 58*

```rust
exists(any ptr) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 9

</details>


### exists - checks whether a cstr is not zero-initialized
*Defined in: std/core/string.s line 32*

```rust
exists(cstr) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 9

</details>


### exists
*Defined in: std/graphics.s line 153*

```rust
exists(Texture) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 31

</details>


# bits
### bits - bit representation
*Defined in: std/core/convert.s line 76*

```rust
bits(float) -> (bits)
```

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 26

</details>


### bits - bit representation
*Defined in: std/core/convert.s line 69*

```rust
bits(int) -> (bits)
```

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 15

</details>


### bits - bit representation
*Defined in: std/core/convert.s line 63*

```rust
bits(nat) -> (bits)
```

Retrives the bit representation of a number of shift
arithmetics and bitwise operations.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# lshift
### lshift - left shift
*Defined in: std/core/convert.s line 102*

```rust
lshift(bits, nat y) -> (bits)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19

</details>


# rshift
### rshift - right shift
*Defined in: std/core/convert.s line 107*

```rust
rshift(bits, nat y) -> (bits)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19

</details>


# xor
### xor - bitwise xor
*Defined in: std/core/convert.s line 112*

```rust
xor(bits, bits) -> (bits)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 19

</details>


# band
### band - bitwise and
*Defined in: std/core/convert.s line 117*

```rust
band(bits, bits) -> (bits)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 19

</details>


# bor
### bor - bitwise or
*Defined in: std/core/convert.s line 122*

```rust
bor(bits, bits) -> (bits)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 19

</details>


# of
### of - yields a pair of nats
*Defined in: std/core/range.s line 34*

```rust
of(nat from, "len", nat length) -> (nat from, nat)
```

Represents the range [from, from+length] where 'from' and 'length' are the arguments.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 13

</details>


### of - yields a pair of nats
*Defined in: std/core/range.s line 29*

```rust
of(nat from, "upto", nat to) -> (nat from, nat)
```

Represents the range [from, to] where 'from' and 'to' are the arguments.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 17

</details>


### of - yields a pair of nats
*Defined in: std/core/range.s line 24*

```rust
of(nat from, "to", nat to) -> (nat from, nat to)
```

Represents the range [from, to) where 'from' and 'to' are the arguments.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


### of - yields a pair of nats
*Defined in: std/core/range.s line 19*

```rust
of(nat) -> (nat, nat to)
```

Represents the range [0, to) where 'to' its  its arguments.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


# range
### range - constructs a range
*Defined in: std/core/range.s line 39*

```rust
range(nat _from, nat to) -> (edit range)
```

Endpoints are natural numbers (unsigned integers). This is handy for several kinds of iteration.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 11

</details>


# next
### next - next range number
*Defined in: std/core/range.s line 45*

```rust
next(edit range) -> (nat)
```

This increments the r.from position and returns the previous one.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 48

</details>

<details><summary>Potential errors</summary>

9. iteration end
</details>


### next
*Defined in: std/map.s line 54*

```rust
next(robinhood_nat_entry[], mut nat pos) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 346

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### next
*Defined in: std/map.s line 54*

```rust
next(robinhood_str_entry[], mut nat pos) -> (mut str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 556

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### next - Computes the next random number of a Rand sequence.
*Defined in: std/rand.s line 88*

```rust
next(mut Rand) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 79

</details>


# get
### get - immutable pointer to buffer element
*Defined in: std/core/array.s line 100*

```rust
get(any[], nat i) -> (any ptr {follows any ptr buffer.unsafe_ptr})
```

This uses pointer arithmetics to index the buffer, basically performing the operation
`i*buffer.unsafe_align+buffer.unsafe_offset`. Fresh buffers have zero offset and alignment
equal to element size, but more complicated situations arise in situations where sub-buffers
are retrieved or sliced.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 72

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### get - immutable pointer to buffer element
*Defined in: std/core/array.s line 100*

```rust
get(any[], nat i, "unsafe_assume_inbounds") -> (any ptr {follows any ptr buffer.unsafe_ptr})
```

This uses pointer arithmetics to index the buffer, basically performing the operation
`i*buffer.unsafe_align+buffer.unsafe_offset`. Fresh buffers have zero offset and alignment
equal to element size, but more complicated situations arise in situations where sub-buffers
are retrieved or sliced.

*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 49

</details>


### get - assert that a number plus range start lies in the range
*Defined in: std/core/range.s line 54*

```rust
get(range, nat _pos) -> (nat)
```

The item itself is returned. This lets the range be used as an iterator
per a pattern like `for i in range 10 ...`.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 40

</details>

<details><summary>Potential errors</summary>

9. iteration end
</details>


### get - get a list element pointer
*Defined in: std/core/allocators.s line 100*

```rust
get(list, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 53

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### get - get a list element pointer
*Defined in: std/core/allocators.s line 100*

```rust
get(list, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 53

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### get - get a list element pointer
*Defined in: std/core/allocators.s line 100*

```rust
get(circular, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 30

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### get - get a list element pointer
*Defined in: std/core/allocators.s line 61*

```rust
get(arena, nat pos) -> (any ptr {follows any ptr l.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 53

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### get - get a list element pointer
*Defined in: std/core/allocators.s line 61*

```rust
get(arena, nat pos, "unsafe_assume_inbounds") -> (any ptr {follows any ptr l.buf.unsafe_ptr})
```


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 19

</details>


### get - a character in a string
*Defined in: std/core/string.s line 318*

```rust
get(str, nat i) -> (char ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 46

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### get - a character in a string
*Defined in: std/core/string.s line 318*

```rust
get(str, nat i, "unsafe_assume_inbounds") -> (char ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 23

</details>


### get - get a hash map entry
*Defined in: std/map.s line 44*

```rust
get(robinhood_nat_entry[], any[], nat key) -> (any ptr {follows any ptr values.unsafe_ptr})
```

Implemented for string or cstr keys but buffer of any values.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 57

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
56. index not found
15. out of bounds
</details>


### get - get a hash map entry
*Defined in: std/map.s line 34*

```rust
get(robinhood_str_entry[], any[], str) -> (any ptr {follows any ptr values.unsafe_ptr})
```

Implemented for string or cstr keys but buffer of any values.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 86

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
56. index not found
15. out of bounds
</details>


### get - get a hash map entry
*Defined in: std/map.s line 34*

```rust
get(robinhood_str_entry[], any[], cstr key) -> (any ptr {follows any ptr values.unsafe_ptr})
```

Implemented for string or cstr keys but buffer of any values.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 80

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
56. index not found
15. out of bounds
</details>


### get
*Defined in: std/io.s line 26*

```rust
get(edit circular, edit open, nat) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 46

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
39. end of file
15. out of bounds
</details>


### get
*Defined in: std/io.s line 26*

```rust
get(edit circular, edit terminal, nat) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

48. not open file
2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
39. end of file
15. out of bounds
</details>


### get
*Defined in: std/io.s line 26*

```rust
get(edit circular, edit write, nat) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

48. not open file
2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
39. end of file
15. out of bounds
</details>


### get
*Defined in: std/io.s line 26*

```rust
get(edit circular, edit write, nat) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

48. not open file
2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
39. end of file
15. out of bounds
</details>


### get
*Defined in: std/io.s line 26*

```rust
get(edit circular, edit open, nat) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

48. not open file
2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
39. end of file
15. out of bounds
</details>


### get
*Defined in: std/io.s line 26*

```rust
get(edit circular, edit open, nat) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

48. not open file
2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
39. end of file
15. out of bounds
</details>


### get
*Defined in: std/io.s line 26*

```rust
get(edit arena, edit open, nat) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 46

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
39. end of file
15. out of bounds
</details>


### get
*Defined in: std/io.s line 26*

```rust
get(edit arena, edit terminal, nat) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

48. not open file
2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
39. end of file
15. out of bounds
</details>


### get
*Defined in: std/io.s line 26*

```rust
get(edit arena, edit write, nat) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

48. not open file
2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
39. end of file
15. out of bounds
</details>


### get
*Defined in: std/io.s line 26*

```rust
get(edit arena, edit write, nat) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

48. not open file
2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
39. end of file
15. out of bounds
</details>


### get
*Defined in: std/io.s line 26*

```rust
get(edit arena, edit open, nat) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

48. not open file
2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
39. end of file
15. out of bounds
</details>


### get
*Defined in: std/io.s line 26*

```rust
get(edit arena, edit open, nat) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

48. not open file
2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
39. end of file
15. out of bounds
</details>


### get
*Defined in: std/io.s line 23*

```rust
get(edit open, nat) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 32

</details>

<details><summary>Potential errors</summary>

54. not open dir
55. end of dir
</details>


### get - a get request
*Defined in: std/net/fetch.s line 88*

```rust
get(edit circular, cstr url) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
61. curl initialization failed
62. out of memory while reading response
15. out of bounds
</details>


### get - a get request
*Defined in: std/net/fetch.s line 88*

```rust
get(edit circular, str) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 81

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### get - a get request
*Defined in: std/net/fetch.s line 88*

```rust
get(edit arena, cstr url) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
61. curl initialization failed
62. out of memory while reading response
15. out of bounds
</details>


### get - a get request
*Defined in: std/net/fetch.s line 88*

```rust
get(edit arena, str) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 81

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### get - a get request
*Defined in: std/net/fetch.s line 88*

```rust
get(new CHARS, cstr url) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 60

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
61. curl initialization failed
62. out of memory while reading response
15. out of bounds
</details>


<details><summary>Defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### get - a get request
*Defined in: std/net/fetch.s line 88*

```rust
get(new CHARS, str) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 66

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


<details><summary>Defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### get - get a vector element at given position
*Defined in: std/sci/vec.s line 67*

```rust
get(vec, nat i) -> (float ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 60

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### get - get a vector element at given position
*Defined in: std/sci/vec.s line 67*

```rust
get(vec, nat i, "unsafe_assume_inbounds") -> (float ptr)
```


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 37

</details>


### get - reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 65*

```rust
get(mat, nat i, nat j) -> (float ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 103

</details>

<details><summary>Potential errors</summary>

72. row out of bounds
73. column out of bounds
</details>


### get - reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 65*

```rust
get(mat, nat i, nat j, "unsafe_assume_inbounds") -> (float ptr)
```


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 57

</details>


### get - get a sparse element
*Defined in: std/sci/coo.s line 43*

```rust
get(coo, nat k) -> (sparse_element ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 50

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### get - get a sparse element
*Defined in: std/sci/coo.s line 43*

```rust
get(coo, nat k, "unsafe_assume_inbounds") -> (sparse_element ptr)
```


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 27

</details>


# KB
### KB - kilobytes to bytes
*Defined in: std/core/units.s line 19*

```rust
KB(nat) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 17

</details>


# MB
### MB - megabytes to bytes
*Defined in: std/core/units.s line 23*

```rust
MB(nat) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 31

</details>


# GB
### GB - gigabytes to bytes
*Defined in: std/core/units.s line 27*

```rust
GB(nat) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 45

</details>


# alloc
### alloc - allocate a char[] buffer
*Defined in: std/core/array.s line 59*

```rust
alloc(nat) -> (edit char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 58

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

```rust
alloc(edit any[]) -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 217

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

```rust
alloc(edit any[], "unsafe_leaky") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 190

</details>

<details><summary>Potential errors</summary>

10. allocation failed
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

```rust
alloc(edit any[], "dirty") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 236

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

```rust
alloc(edit any[], "dirty", "unsafe_leaky") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 209

</details>

<details><summary>Potential errors</summary>

10. allocation failed
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

```rust
alloc(edit any[], "unsafe_first") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 25
- Transpiled C size: 177

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

```rust
alloc(edit any[], "unsafe_first", "unsafe_leaky") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 150

</details>

<details><summary>Potential errors</summary>

10. allocation failed
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

```rust
alloc(edit any[], nat size) -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 209

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

```rust
alloc(edit any[], nat size, "unsafe_leaky") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 25
- Transpiled C size: 182

</details>

<details><summary>Potential errors</summary>

10. allocation failed
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

```rust
alloc(edit any[], nat size, "dirty") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 228

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

```rust
alloc(edit any[], nat size, "dirty", "unsafe_leaky") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 201

</details>

<details><summary>Potential errors</summary>

10. allocation failed
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

```rust
alloc(edit any[], nat size, "unsafe_first") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 169

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 28*

```rust
alloc(edit any[], nat size, "unsafe_first", "unsafe_leaky") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 142

</details>

<details><summary>Potential errors</summary>

10. allocation failed
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocate memory
*Defined in: std/unsafe.s line 25*

```rust
alloc(nat) -> (mut any ptr)
```

Allocates a memory of the provided size in bytes.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 39

</details>

<details><summary>Potential errors</summary>

10. allocation failed
</details>


### alloc
*Defined in: std/core/string.s line 26*

```rust
alloc(new CHARS, nat length) -> (mut allocated) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 167

</details>

<details><summary>Potential errors</summary>

10. allocation failed
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - list allocation
*Defined in: std/core/allocators.s line 136*

```rust
alloc(edit list) -> (edit allocated)
```

Creates room for one element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 214

</details>

<details><summary>Potential errors</summary>

11. reallocation failed
4. division by zero
14. cannot resize an unallocated or freed buffer
</details>


### alloc - list allocation
*Defined in: std/core/allocators.s line 136*

```rust
alloc(edit list, nat length) -> (edit allocated)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 206

</details>

<details><summary>Potential errors</summary>

11. reallocation failed
4. division by zero
14. cannot resize an unallocated or freed buffer
</details>


### alloc - list allocation
*Defined in: std/core/allocators.s line 136*

```rust
alloc(edit list) -> (edit allocated)
```

Creates room for one element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 214

</details>

<details><summary>Potential errors</summary>

11. reallocation failed
4. division by zero
14. cannot resize an unallocated or freed buffer
</details>


### alloc - list allocation
*Defined in: std/core/allocators.s line 136*

```rust
alloc(edit list, nat length) -> (edit allocated)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 206

</details>

<details><summary>Potential errors</summary>

11. reallocation failed
4. division by zero
14. cannot resize an unallocated or freed buffer
</details>


### alloc - circular arena allocation
*Defined in: std/core/allocators.s line 122*

```rust
alloc(edit circular) -> (edit allocated)
```

Creates room for one element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 165

</details>

<details><summary>Potential errors</summary>

17. does not fit in circular arena
</details>


### alloc - circular arena allocation
*Defined in: std/core/allocators.s line 122*

```rust
alloc(edit circular, nat length) -> (edit allocated)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

17. does not fit in circular arena
</details>


### alloc - arena allocation
*Defined in: std/core/allocators.s line 111*

```rust
alloc(edit arena) -> (edit allocated)
```

Creates room for one element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 116

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
</details>


### alloc - arena allocation
*Defined in: std/core/allocators.s line 111*

```rust
alloc(edit arena, nat length) -> (edit allocated)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 108

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
</details>


### alloc
*Defined in: std/tag.s line 40*

```rust
alloc(cstr) -> (mut char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 98
- Transpiled C size: 627

</details>

<details><summary>Potential errors</summary>

2. null pointer
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
16. arena is out of space
81. empty input name
82. cannot tag a structural type
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc
*Defined in: std/tag.s line 40*

```rust
alloc(cstr surface, cstr obj) -> (mut char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 112
- Transpiled C size: 755

</details>

<details><summary>Potential errors</summary>

2. null pointer
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
16. arena is out of space
81. empty input name
82. cannot tag a structural type
83. tag surface cannot be structural type
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# resize
### resize - resize the buffer
*Defined in: std/core/array.s line 63*

```rust
resize(edit any[], nat size) -> (edit any[])
```

For stability of data structures, this does nothing if the previous size is the same or less.
If old size was zero, an error is created instead of allocating so that this does not leak
resources.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 163

</details>

<details><summary>Potential errors</summary>

11. reallocation failed
14. cannot resize an unallocated or freed buffer
</details>


### resize - resize the buffer
*Defined in: std/core/array.s line 63*

```rust
resize(edit any[], nat size, "unsafe") -> (edit any[])
```

For stability of data structures, this does nothing if the previous size is the same or less.
If old size was zero, an error is created instead of allocating so that this does not leak
resources.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 101

</details>

<details><summary>Potential errors</summary>

11. reallocation failed
</details>


# last
### last - mutable pointer to the last buffer element
*Defined in: std/core/array.s line 81*

```rust
last(edit any[]) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 111

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


# mutget
### mutget - mutable pointer to buffer element
*Defined in: std/core/array.s line 87*

```rust
mutget(edit any[], nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```

This uses pointer arithmetics to index the buffer, basically performing the operation
`i*buffer.unsafe_align+buffer.unsafe_offset`. Fresh buffers have zero offset and alignment
equal to element size, but more complicated situations arise in situations where sub-buffers
are retrieved or sliced.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 72

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### mutget - mutable pointer to buffer element
*Defined in: std/core/array.s line 87*

```rust
mutget(edit any[], nat i, "unsafe_assume_inbounds") -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```

This uses pointer arithmetics to index the buffer, basically performing the operation
`i*buffer.unsafe_align+buffer.unsafe_offset`. Fresh buffers have zero offset and alignment
equal to element size, but more complicated situations arise in situations where sub-buffers
are retrieved or sliced.

*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 49

</details>


### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 107*

```rust
mutget(edit list, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 107*

```rust
mutget(edit list, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 107*

```rust
mutget(edit circular, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### mutget - get a mutable list element pointer
*Defined in: std/core/allocators.s line 71*

```rust
mutget(edit arena, nat pos) -> (mut any ptr {follows any ptr l.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 57

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### mutget - get a mutable list element pointer
*Defined in: std/core/allocators.s line 71*

```rust
mutget(edit arena, nat pos, "unsafe_assume_inbounds") -> (mut any ptr {follows any ptr l.buf.unsafe_ptr})
```


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 23

</details>


### mutget - get a mutable hash map entry
*Defined in: std/map.s line 49*

```rust
mutget(edit robinhood_nat_entry[], edit any[], nat key) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```

Implemented for string or cstr keys but buffer of any values.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 65

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
57. string buffer is full
15. out of bounds
</details>


### mutget - get a mutable hash map entry
*Defined in: std/map.s line 39*

```rust
mutget(edit robinhood_str_entry[], edit any[], str) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```

Implemented for string or cstr keys but buffer of any values.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 94

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
57. string buffer is full
15. out of bounds
</details>


### mutget - get a mutable hash map entry
*Defined in: std/map.s line 39*

```rust
mutget(edit robinhood_str_entry[], edit any[], cstr key) -> (mut any ptr {follows any ptr values.unsafe_ptr})
```

Implemented for string or cstr keys but buffer of any values.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 88

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
57. string buffer is full
15. out of bounds
</details>


### mutget - modify a vector element at given position
*Defined in: std/sci/vec.s line 61*

```rust
mutget(edit vec, nat i) -> (mut float ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 60

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### mutget - modify a vector element at given position
*Defined in: std/sci/vec.s line 61*

```rust
mutget(edit vec, nat i, "unsafe_assume_inbounds") -> (mut float ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 37

</details>


### mutget - mutable reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 59*

```rust
mutget(edit mat, nat i, nat j) -> (mut float ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 103

</details>

<details><summary>Potential errors</summary>

72. row out of bounds
73. column out of bounds
</details>


### mutget - mutable reference to a sparse element
*Defined in: std/sci/coo.s line 52*

```rust
mutget(edit coo, nat k) -> (mut sparse_element ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 50

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### mutget - mutable reference to a sparse element
*Defined in: std/sci/coo.s line 52*

```rust
mutget(edit coo, nat k, "unsafe_assume_inbounds") -> (mut sparse_element ptr)
```


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 27

</details>


# len
### len - string length
*Defined in: std/core/string.s line 105*

```rust
len(str) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### len
*Defined in: std/core/allocators.s line 97*

```rust
len(list) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### len
*Defined in: std/core/allocators.s line 97*

```rust
len(list) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### len - allocated arena size
*Defined in: std/core/allocators.s line 46*

```rust
len(arena) -> (nat)
```

This is not the total arena size, but rather the number
of elements actively in use.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### len - the number of buffer elements
*Defined in: std/core/array.s line 113*

```rust
len(any[]) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### len - vectot length
*Defined in: std/sci/vec.s line 57*

```rust
len(vec) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 3

</details>


# new
### new - allocations on new bufs
*Defined in: std/core/allocators.s line 21*

```rust
new() -> (new)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3

</details>


# arena
### arena
*Defined in: std/core/string.s line 23*

```rust
arena("char__t9t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena - a buffer and mutable position pair
*Defined in: std/core/allocators.s line 37*

```rust
arena(edit any[]) -> (edit arena)
```

The position starts from 0. This structure is often used
to track the size of allocated data within the buffer.
Contrary to circular buffers, arenas are not freed automatically
and therefore eventually run out of space. However, they come
with data integrity guarantees.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 39

</details>


### arena - a buffer and mutable position pair
*Defined in: std/core/allocators.s line 25*

```rust
arena(edit any[], nat _pos) -> (edit arena)
```

This structure is often used to track the size of allocated
data within the buffer.
Contrary to circular buffers, arenas are not freed automatically
and therefore eventually run out of space. However, they come
with data integrity guarantees. Attach a garbage
collector to an arena per `gc arena alloc 4` (or construct it
with another allocator).

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 11

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t661t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t619t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t615t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t611t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t4t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t3595t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t3529t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t3250t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 281*

```rust
arena(edit vec) -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 120

</details>


# allocated
### allocated
*Defined in: std/core/allocators.s line 52*

```rust
allocated(edit any[], nat pos) -> (edit allocated)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


# status
### status - convert to a nameless buffer and position pair
*Defined in: std/core/allocators.s line 55*

```rust
status(allocated) -> (any[] {follows any ptr self.buf.unsafe_ptr}, nat)
```

This unpacking is used to pass an arena's state or allocated
memory data as part of structural input.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 23

</details>


### status - convert to a nameless buffer and position pair
*Defined in: std/core/allocators.s line 55*

```rust
status(arena) -> (any[] {follows any ptr self.buf.unsafe_ptr}, nat)
```

This unpacking is used to pass an arena's state or allocated
memory data as part of structural input.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 23

</details>


# circular
### circular
*Defined in: std/core/string.s line 24*

```rust
circular("char__t9t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular - circular buffer
*Defined in: std/core/allocators.s line 81*

```rust
circular(edit any[]) -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 15

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t3595t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t3529t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t3250t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t661t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t619t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t615t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t611t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t4t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


# list
### list
*Defined in: std/core/string.s line 25*

```rust
list("char__t9t") -> (edit list)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list - list buffer management
*Defined in: std/core/allocators.s line 86*

```rust
list(edit any[], "external") -> (edit list)
```

List defined over a mutable buf that is automatically managed and resized.
A capacity is maintained so that resizes are not performed too frequently.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 47

</details>


### list - list buffer management
*Defined in: std/core/allocators.s line 86*

```rust
list(edit any[]) -> (edit list)
```

List defined over a mutable buf that is automatically managed and resized.
A capacity is maintained so that resizes are not performed too frequently.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 91

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t3595t") -> (edit list)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t3529t") -> (edit list)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t3250t") -> (edit list)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t661t") -> (edit list)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t619t") -> (edit list)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t615t") -> (edit list)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t611t") -> (edit list)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t4t") -> (edit list)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# at
### at - get a mutable pointer to the last buffer element
*Defined in: std/core/allocators.s line 148*

```rust
at(edit allocated) -> (mut any ptr {follows any ptr surface.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

15. out of bounds
</details>


### at - find or add an item in a robinhood_entry list
*Defined in: std/hash.s line 88*

```rust
at(edit robinhood_nat_entry[], nat _k) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 54
- Transpiled C size: 721

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
57. string buffer is full
15. out of bounds
</details>


### at - find or add an item in a robinhood_entry list
*Defined in: std/hash.s line 88*

```rust
at(edit robinhood_str_entry[], str) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 102
- Transpiled C size: 1054

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
57. string buffer is full
15. out of bounds
</details>


### at - find or add an item in a robinhood_entry list
*Defined in: std/hash.s line 88*

```rust
at(edit robinhood_str_entry[], cstr _k) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 98
- Transpiled C size: 1048

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
57. string buffer is full
15. out of bounds
</details>


### at
*Defined in: std/sci/vec.s line 79*

```rust
at(vec, nat i) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 41

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### at
*Defined in: std/sci/vec.s line 76*

```rust
at(float number, nat i) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# slice
### slice - a buffer subregion of an arena
*Defined in: std/core/allocators.s line 156*

```rust
slice(edit arena, nat length) -> (mut any[] {follows any ptr surface.buf.unsafe_ptr})
```

This allocates a region of a given number of elements
within an arena and returns a buffer interface wrapping
it. It is an alternative to allocating buffers on the
heap.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 173

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 406*

```rust
slice(str, str, str) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 46
- Transpiled C size: 222

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
23. not found
15. out of bounds
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 406*

```rust
slice(str, str, cstr _to) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 216

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
23. not found
15. out of bounds
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 406*

```rust
slice(str, cstr _from, str) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 216

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
23. not found
15. out of bounds
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 406*

```rust
slice(str, cstr _from, cstr _to) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 210

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
23. not found
15. out of bounds
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 406*

```rust
slice(cstr _s, str, str) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 216

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
23. not found
15. out of bounds
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 406*

```rust
slice(cstr _s, str, cstr _to) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 210

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
23. not found
15. out of bounds
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 406*

```rust
slice(cstr _s, cstr _from, str) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 210

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
23. not found
15. out of bounds
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 406*

```rust
slice(cstr _s, cstr _from, cstr _to) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 204

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
23. not found
15. out of bounds
</details>


### slice - get a substring view into a string
*Defined in: std/core/string.s line 332*

```rust
slice(str, nat from, nat to) -> (str)
```

This operation does not perform any additional allocations
or memory moves and is thus convenient for parsing code.
Explicitly copy the result to move it away from volatile
memory, such as circular buffers.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 286

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
15. out of bounds
</details>


### slice - get a substring view into a string
*Defined in: std/core/string.s line 332*

```rust
slice(cstr _s, nat from, nat to) -> (str)
```

This operation does not perform any additional allocations
or memory moves and is thus convenient for parsing code.
Explicitly copy the result to move it away from volatile
memory, such as circular buffers.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 280

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
15. out of bounds
</details>


# char\_allocator
### list
*Defined in: std/core/string.s line 25*

```rust
list("char__t9t") -> (edit list)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### circular
*Defined in: std/core/string.s line 24*

```rust
circular("char__t9t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/core/string.s line 23*

```rust
arena("char__t9t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### new - allocations on new bufs
*Defined in: std/core/allocators.s line 21*

```rust
new() -> (new)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3

</details>


# strdat
### strdat - string data without the buffer storage
*Defined in: std/core/string.s line 37*

```rust
strdat(nat pos, nat length, char first) -> (nat pos, nat length, char first)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


### strdat
*Defined in: std/mini.s line 57*

```rust
strdat(nat _pos, nat _length) -> (nat16 pos, nat16 length)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 49

</details>

<details><summary>Potential errors</summary>

59. nat value too large to pack in nat16
</details>


# str
### str - convert to string
*Defined in: std/core/string.s line 93*

```rust
str(cstr) -> (str)
```

Defines an implicit constant buffer using the cstr's memory data.
Subsequent comparisons no longer use the underlying pointer value.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 169

</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 86*

```rust
str(char[], nat endpos, "from", nat pos) -> (str)
```

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 62

</details>

<details><summary>Potential errors</summary>

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
15. out of bounds
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 77*

```rust
str(char[], nat pos, "to", nat endpos) -> (str)
```

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 143

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
15. out of bounds
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 69*

```rust
str(char[], nat pos, "len", nat length) -> (str)
```

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 118

</details>

<details><summary>Potential errors</summary>

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds
</details>


### str - tautology function for strings
*Defined in: std/core/string.s line 65*

```rust
str(str) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 57*

```rust
str(char[]) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 165

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds
</details>


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 57*

```rust
str(char[], nat length) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 147

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 50*

```rust
str(char[], nat dat.pos, nat dat.length, char dat.first) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 100

</details>

<details><summary>Potential errors</summary>

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 45*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 43

</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 41*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### str - reads a string from the console
*Defined in: std/core/convertstr.s line 114*

```rust
str(new CHARS, console console) -> (str) with effects CHARS
```

The read string is placed onto memory that keeps being reallocated to accommodate its size.
The resulting memory will consume exactly the required size in bytes.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 486

</details>

<details><summary>Potential errors</summary>

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
24. unexpected end of console read
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### str - reads a string from the console
*Defined in: std/core/convertstr.s line 114*

```rust
str(edit arena, console console) -> (str) with effects CHARS
```

The read string is placed on an arena while consuming only the necessarily minimum size.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 47
- Transpiled C size: 279

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
24. unexpected end of console read
26. read string does not fit on buffer
</details>


### str - create a compact str
*Defined in: std/mini.s line 70*

```rust
str(cstr) -> (str)
```

The created str variation should be used only for storng and
retrieving data with 'unpack' for memory efficiency.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 51

</details>

<details><summary>Potential errors</summary>

59. nat value too large to pack in nat16
</details>


### str - create a compact str
*Defined in: std/mini.s line 62*

```rust
str(str) -> (str)
```

The created str variation should be used only for storng and
retrieving data with 'unpack' for memory efficiency.

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 39

</details>

<details><summary>Potential errors</summary>

59. nat value too large to pack in nat16
</details>


### str - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 59*

```rust
str(cstr ptr) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 44

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### str - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 59*

```rust
str(str ptr) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 86

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


# copy
### copy - copy a string
*Defined in: std/core/string.s line 132*

```rust
copy(edit list, cstr _other) -> (str) with effects CHARS
```

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 171

</details>

<details><summary>Potential errors</summary>

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
4. division by zero
11. reallocation failed
14. cannot resize an unallocated or freed buffer
</details>


### copy - copy a string
*Defined in: std/core/string.s line 132*

```rust
copy(edit list, str) -> (str) with effects CHARS
```

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 177

</details>

<details><summary>Potential errors</summary>

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
4. division by zero
11. reallocation failed
14. cannot resize an unallocated or freed buffer
</details>


### copy - copy a string
*Defined in: std/core/string.s line 132*

```rust
copy(edit circular, cstr _other) -> (str) with effects CHARS
```

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 171

</details>

<details><summary>Potential errors</summary>

17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### copy - copy a string
*Defined in: std/core/string.s line 132*

```rust
copy(edit circular, str) -> (str) with effects CHARS
```

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 177

</details>

<details><summary>Potential errors</summary>

17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### copy - copy a string
*Defined in: std/core/string.s line 132*

```rust
copy(edit arena, cstr _other) -> (str) with effects CHARS
```

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 171

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### copy - copy a string
*Defined in: std/core/string.s line 132*

```rust
copy(edit arena, str) -> (str) with effects CHARS
```

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 177

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### copy - copy a string
*Defined in: std/core/string.s line 132*

```rust
copy(new CHARS, cstr _other) -> (str) with effects CHARS
```

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 156

</details>

<details><summary>Potential errors</summary>

19. can only define strings on non-offset buffers
10. allocation failed
18. can only define strings on contiguous buffers
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### copy - copy a string
*Defined in: std/core/string.s line 132*

```rust
copy(new CHARS, str) -> (str) with effects CHARS
```

The result is a fresh string in a new memory surface effect CHARS.
The result is guaranteed to be a bit-correct replica of the
string immediately after. But, even though strings cannot be edited,
their supporting memory can be corrupted with new data, especially
when they are placed on reused arenas or circular buffers. That
said, that would be a logical bug of insufficient sizing or
sequencing. Strings remain valid slices of allocated memory regions
without runtime failures; they always preserve their size.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 162

</details>

<details><summary>Potential errors</summary>

19. can only define strings on non-offset buffers
10. allocation failed
18. can only define strings on contiguous buffers
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### copy - convert a number to a string
*Defined in: std/core/string.s line 556*

```rust
copy(edit list, float n) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 134
- Transpiled C size: 1209

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
7. cannot convert negative float to nat
11. reallocation failed
14. cannot resize an unallocated or freed buffer
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### copy - convert a number to a string
*Defined in: std/core/string.s line 556*

```rust
copy(edit circular, float n) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 134
- Transpiled C size: 1209

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
7. cannot convert negative float to nat
15. out of bounds
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### copy - convert a number to a string
*Defined in: std/core/string.s line 556*

```rust
copy(edit arena, float n) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 134
- Transpiled C size: 1209

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
7. cannot convert negative float to nat
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### copy - convert a number to a string
*Defined in: std/core/string.s line 556*

```rust
copy(new CHARS, float n) -> (str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 128
- Transpiled C size: 1194

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
7. cannot convert negative float to nat
10. allocation failed
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### copy - convert a number to a string
*Defined in: std/core/string.s line 495*

```rust
copy(edit list, nat n) -> (str) with effects CHARS
```

The result is placed on a character memory surface effect CHARS.
Example:
```
CHARS = edit list char[]
s = copy 123
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 476

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
11. reallocation failed
14. cannot resize an unallocated or freed buffer
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### copy - convert a number to a string
*Defined in: std/core/string.s line 495*

```rust
copy(edit circular, nat n) -> (str) with effects CHARS
```

The result is placed on a character memory surface effect CHARS.
Example:
```
CHARS = edit circular alloc 10
s = copy 123
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 476

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
17. does not fit in circular arena
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### copy - convert a number to a string
*Defined in: std/core/string.s line 495*

```rust
copy(edit arena, nat n) -> (str) with effects CHARS
```

The result is placed on a character memory surface effect CHARS.
Example:
```
CHARS = edit arena alloc 10
s = copy 123
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 476

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### copy - convert a number to a string
*Defined in: std/core/string.s line 495*

```rust
copy(new CHARS, nat n) -> (str) with effects CHARS
```

The result is placed on a character memory surface effect CHARS.
Example:
```
CHARS = new()
s = copy 123
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 73
- Transpiled C size: 461

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### copy - copy a vector
*Defined in: std/sci/vec.s line 272*

```rust
copy(edit circular, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 205

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### copy - copy a vector
*Defined in: std/sci/vec.s line 272*

```rust
copy(edit arena, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 205

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
63. can only place vectors on contiguous buffers
</details>


### copy - copy a vector
*Defined in: std/sci/vec.s line 272*

```rust
copy(new FLOATS, vec) -> (mut vec) with effects FLOATS
```

Grabs a FLOATS for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 190

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# copy\_null\_terminated
### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s line 294*

```rust
copy_null_terminated(edit arena, cstr _other) -> (str) with effects CHARS
```

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 205

</details>

<details><summary>Potential errors</summary>

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
21. string buffer out of memory
</details>


### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s line 294*

```rust
copy_null_terminated(edit arena, str) -> (str) with effects CHARS
```

Constructs the copy on the buffer at a given position and returns it.
The position is mutated to indicate where the string ends (e.g., to copy more strings).
This operation may fail if the string does not fit the current allocation - prefer copying on a `list mut char[]` instead.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 211

</details>

<details><summary>Potential errors</summary>

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
21. string buffer out of memory
</details>


### copy\_null\_terminated - create null terminated string
*Defined in: std/core/string.s line 149*

```rust
copy_null_terminated(new CHARS, str) -> (str) with effects CHARS
```

Copies a string to a new buffer while ensuring null termination.
This is mainly useful for supporting 'cstr unsafe_temp'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 31
- Transpiled C size: 168

</details>

<details><summary>Potential errors</summary>

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# unsafe\_temp
### unsafe\_temp - tautology function for cstr
*Defined in: std/core/string.s line 201*

```rust
unsafe_temp(cstr) -> (cstr cstr, str)
```

This is mainly used as a stt-input counterpart for converting str|cstr to cstr.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 36

</details>


### unsafe\_temp - convert a string to a temporary null-terminated (cstr,str) pair
*Defined in: std/core/string.s line 160*

```rust
unsafe_temp(str) -> (unsafe_temp)
```

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

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### unsafe\_temp - convert a string to a temporary null-terminated (cstr,str) pair
*Defined in: std/core/string.s line 160*

```rust
unsafe_temp(str, str) -> (unsafe_temp)
```

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

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 48
- Transpiled C size: 244

</details>

<details><summary>Potential errors</summary>

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# endpos
### endpos - the end position of a string
*Defined in: std/core/string.s line 213*

```rust
endpos(str) -> (nat)
```

This position is computed relative to its start in its
enclosing buffer.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 13

</details>


# revalidate
### revalidate - re-obtains the string's first charcater
*Defined in: std/core/string.s line 219*

```rust
revalidate(str) -> (str)
```

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

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 24

</details>


# starts\_with
### starts\_with - check whether a string starts with a particular substring sequence
*Defined in: std/core/string.s line 346*

```rust
starts_with(str, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 213

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
15. out of bounds
</details>


### starts\_with - check whether a string starts with a particular substring sequence
*Defined in: std/core/string.s line 346*

```rust
starts_with(str, cstr _needle) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 207

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
15. out of bounds
</details>


### starts\_with - check whether a string starts with a particular substring sequence
*Defined in: std/core/string.s line 346*

```rust
starts_with(cstr _stack, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 207

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
15. out of bounds
</details>


### starts\_with - check whether a string starts with a particular substring sequence
*Defined in: std/core/string.s line 346*

```rust
starts_with(cstr _stack, cstr _needle) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 201

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
15. out of bounds
</details>


# ends\_with
### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 354*

```rust
ends_with(str, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 47
- Transpiled C size: 223

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
15. out of bounds
</details>


### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 354*

```rust
ends_with(str, cstr _needle) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 217

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
15. out of bounds
</details>


### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 354*

```rust
ends_with(cstr _stack, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 217

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
15. out of bounds
</details>


### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 354*

```rust
ends_with(cstr _stack, cstr _needle) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 211

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. slice out of string bounds
15. out of bounds
</details>


# contains
### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 372*

```rust
contains(str, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 356

</details>


### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 372*

```rust
contains(str, cstr _needle) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 350

</details>


### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 372*

```rust
contains(cstr _stack, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 350

</details>


### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 372*

```rust
contains(cstr _stack, cstr _needle) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 52
- Transpiled C size: 344

</details>


### contains - check whether a string contains a needle character
*Defined in: std/core/string.s line 364*

```rust
contains(str, char needle) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 255

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### contains - check whether a string contains a needle character
*Defined in: std/core/string.s line 364*

```rust
contains(cstr _stack, char needle) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 249

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


# find
### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(str, str) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 364

</details>

<details><summary>Potential errors</summary>

23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(str, str, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 67
- Transpiled C size: 427

</details>

<details><summary>Potential errors</summary>

23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(str, str, nat _skip) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 69
- Transpiled C size: 423

</details>

<details><summary>Potential errors</summary>

6. nat subtraction would yield a negative
23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(str, str, nat _skip, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 74
- Transpiled C size: 486

</details>

<details><summary>Potential errors</summary>

6. nat subtraction would yield a negative
23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(str, cstr _needle) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 58
- Transpiled C size: 358

</details>

<details><summary>Potential errors</summary>

23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(str, cstr _needle, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 63
- Transpiled C size: 421

</details>

<details><summary>Potential errors</summary>

23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(str, cstr _needle, nat _skip) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 65
- Transpiled C size: 417

</details>

<details><summary>Potential errors</summary>

6. nat subtraction would yield a negative
23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(str, cstr _needle, nat _skip, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 70
- Transpiled C size: 480

</details>

<details><summary>Potential errors</summary>

6. nat subtraction would yield a negative
23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(cstr _stack, str) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 58
- Transpiled C size: 358

</details>

<details><summary>Potential errors</summary>

23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(cstr _stack, str, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 63
- Transpiled C size: 421

</details>

<details><summary>Potential errors</summary>

23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(cstr _stack, str, nat _skip) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 65
- Transpiled C size: 417

</details>

<details><summary>Potential errors</summary>

6. nat subtraction would yield a negative
23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(cstr _stack, str, nat _skip, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 70
- Transpiled C size: 480

</details>

<details><summary>Potential errors</summary>

6. nat subtraction would yield a negative
23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(cstr _stack, cstr _needle) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 54
- Transpiled C size: 352

</details>

<details><summary>Potential errors</summary>

23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(cstr _stack, cstr _needle, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 59
- Transpiled C size: 415

</details>

<details><summary>Potential errors</summary>

23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(cstr _stack, cstr _needle, nat _skip) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 61
- Transpiled C size: 411

</details>

<details><summary>Potential errors</summary>

6. nat subtraction would yield a negative
23. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 385*

```rust
find(cstr _stack, cstr _needle, nat _skip, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 66
- Transpiled C size: 474

</details>

<details><summary>Potential errors</summary>

6. nat subtraction would yield a negative
23. not found
</details>


### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(nat[], nat _k) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 439

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
56. index not found
15. out of bounds
</details>


### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(str[], str) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 625

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
56. index not found
15. out of bounds
</details>


### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(str[], cstr _k) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 75
- Transpiled C size: 619

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
56. index not found
15. out of bounds
</details>


### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(robinhood_nat_entry[], nat _k) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 46
- Transpiled C size: 473

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
56. index not found
15. out of bounds
</details>


### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(robinhood_str_entry[], str) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 82
- Transpiled C size: 659

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
56. index not found
15. out of bounds
</details>


### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(robinhood_str_entry[], cstr _k) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 78
- Transpiled C size: 653

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
6. nat subtraction would yield a negative
56. index not found
15. out of bounds
</details>


# empty
### empty - checks that a string does not have any character
*Defined in: std/core/string.s line 489*

```rust
empty(str) -> (bool)
```

Prefer this check because its cstr-checking counterpar is faster
than casting to a string.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 31

</details>


### empty - checks that a cstr does not have any characters
*Defined in: std/core/string.s line 481*

```rust
empty(cstr) -> (bool)
```

There are two conditions checked: a) that the cstr is an emptry
pair of brackets, b) that the cstr is zero-initialized, corresponding
to a null memory address. This function is faster than '0==len str c',
as there is no need to actually traverse the character contents.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 59

</details>


# is\_number
### is\_number
*Defined in: std/core/convertstr.s line 31*

```rust
is_number(char) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 29

</details>


# rotl
### rotl
*Defined in: std/rand.s line 26*

```rust
rotl(nat x, nat k) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 27

</details>


# splitmix64
### splitmix64 - time seed
*Defined in: std/rand.s line 55*

```rust
splitmix64() -> (nat)
```

Computes the seed of a splitmix64 sequence using the clock
as the source of entropy.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 62

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[time.time_ns()]`*
### splitmix64 - next random number
*Defined in: std/rand.s line 33*

```rust
splitmix64(mut nat) -> (mut nat)
```

Computes the next random number of a splitmix64 sequence using the mutable 
unsigned int argument as state to be updated. This is NOT cryptographically 
secure and also has small period of 2^64 so usage is not recommended for 
long-running sequences. It is, however, faster than computing a next Rand 
state with next. If you do not provide a seed, a number obtained from the 
current time is provided. That can only be the start of a sequence, and 
marked as a leaking resource to prevent time-based randomization (which is 
not random).

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 65

</details>


# Rand
### Rand - random number generator
*Defined in: std/rand.s line 80*

```rust
Rand() -> (edit Rand)
```

Xoshiro256plus random numbers from https://prng.di.unimi.it/
These and are NOT cryptographically secure.
This a structural type for storing the progress of random number generators 
on four u64 state fields. This version defaults to a time-based seed. Its period is 2^256-1.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 26

</details>


### Rand - random number generator
*Defined in: std/rand.s line 65*

```rust
Rand(nat) -> (edit Rand)
```

Xoshiro256plus random numbers from https://prng.di.unimi.it/
These and are NOT cryptographically secure.
This a structural type for storing the progress of random number generators 
on four u64 state fields. The version is seed-initalized. Its period is 2^256-1.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 79

</details>


# Hashable
### nat - an unsigned integer value
*Defined in: builtins line 1*

```rust
nat() -> (nat)
```

Represents values in the range `0 to 2^64-1`.

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

### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat32) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat
*Defined in: std/core/array.s line 24*

```rust
nat(nat16) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### float - cast to float
*Defined in: std/core/convert.s line 95*

```rust
float(bits) -> (float)
```

Converts a bit representation to the corresponding float number.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 18

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 84*

```rust
nat(bits) -> (nat)
```

Converts a bit representation to the corresponding natural number.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 51*

```rust
nat(char) -> (nat)
```

Converting a character to a natural number considers
its bit representation interpreted as an unsigned number.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

```rust
nat(nat) -> (nat)
```

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 7

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

```rust
nat(int) -> (nat)
```

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

</details>

<details><summary>Potential errors</summary>

8. cannot convert negative int to nat
</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 40*

```rust
nat(float) -> (nat)
```

Converting to natural numbers loses information.
 Failed on negative input because it typically indicates a later error in buffer indexing.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

</details>

<details><summary>Potential errors</summary>

7. cannot convert negative float to nat
</details>


### float - cast to float
*Defined in: std/core/convert.s line 20*

```rust
float(nat) -> (float)
```

May lose information because floats are not exact representation of all integers.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 15

</details>


### float - cast to float
*Defined in: std/core/convert.s line 20*

```rust
float(int) -> (float)
```

May lose information because floats are not exact representation of all integers.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 15

</details>


### float - cast to float
*Defined in: std/core/convert.s line 20*

```rust
float(float) -> (float)
```

Serves as a tautology function for code that parses on multiple number types.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 15

</details>


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 207*

```rust
cstr(cstr cstr, str) -> (cstr)
```

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3

</details>


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 207*

```rust
cstr(unsafe_temp) -> (cstr)
```

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 207*

```rust
cstr(unsafe_temp) -> (cstr)
```

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### str - convert to string
*Defined in: std/core/string.s line 93*

```rust
str(cstr) -> (str)
```

Defines an implicit constant buffer using the cstr's memory data.
Subsequent comparisons no longer use the underlying pointer value.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 169

</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 86*

```rust
str(char[], nat endpos, "from", nat pos) -> (str)
```

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 62

</details>

<details><summary>Potential errors</summary>

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
15. out of bounds
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 77*

```rust
str(char[], nat pos, "to", nat endpos) -> (str)
```

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 143

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
15. out of bounds
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 69*

```rust
str(char[], nat pos, "len", nat length) -> (str)
```

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 118

</details>

<details><summary>Potential errors</summary>

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds
</details>


### str - tautology function for strings
*Defined in: std/core/string.s line 65*

```rust
str(str) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 57*

```rust
str(char[]) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 165

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds
</details>


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 57*

```rust
str(char[], nat length) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 147

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 50*

```rust
str(char[], nat dat.pos, nat dat.length, char dat.first) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 100

</details>

<details><summary>Potential errors</summary>

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 45*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 43

</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 41*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


# hash
### hash
*Defined in: std/hash.s line 29*

```rust
hash(nat k, nat size) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 200

</details>

<details><summary>Potential errors</summary>

5. modulo by zero
</details>


### hash
*Defined in: std/hash.s line 23*

```rust
hash(str, nat size) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 31
- Transpiled C size: 253

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
15. out of bounds
</details>


# to\_hash\_base
### to\_hash\_base
*Defined in: std/hash.s line 43*

```rust
to_hash_base(nat) -> (bits)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### to\_hash\_base
*Defined in: std/hash.s line 43*

```rust
to_hash_base(int) -> (bits)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### to\_hash\_base
*Defined in: std/hash.s line 43*

```rust
to_hash_base(float) -> (bits)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### to\_hash\_base
*Defined in: std/hash.s line 40*

```rust
to_hash_base(cstr) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 20

</details>


### to\_hash\_base
*Defined in: std/hash.s line 40*

```rust
to_hash_base(str) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 26

</details>


# robinhood\_str\_entry
### robinhood\_str\_entry
*Defined in: std/hash.s line 46*

```rust
robinhood_str_entry(str, nat cost) -> (str, nat cost)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3

</details>


# robinhood\_nat\_entry
### robinhood\_nat\_entry
*Defined in: std/hash.s line 49*

```rust
robinhood_nat_entry(nat s, nat cost) -> (nat s, nat cost)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# robinhood\_entry
### robinhood\_nat\_entry
*Defined in: std/hash.s line 49*

```rust
robinhood_nat_entry(nat s, nat cost) -> (nat s, nat cost)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


### robinhood\_str\_entry
*Defined in: std/hash.s line 46*

```rust
robinhood_str_entry(str, nat cost) -> (str, nat cost)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3

</details>


# raw
### raw
*Defined in: std/hash.s line 60*

```rust
raw(cstr) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 20

</details>


### raw
*Defined in: std/hash.s line 57*

```rust
raw(nat) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3

</details>


### raw
*Defined in: std/hash.s line 57*

```rust
raw(str) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### raw
*Defined in: std/hash.s line 54*

```rust
raw(nat s, nat cost) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


### raw
*Defined in: std/hash.s line 54*

```rust
raw(str, nat cost) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3

</details>


# is\_zero
### is\_zero
*Defined in: std/hash.s line 66*

```rust
is_zero(nat) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 17

</details>


### is\_zero
*Defined in: std/hash.s line 63*

```rust
is_zero(str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 31

</details>


# strmap
### strmap - a string map
*Defined in: std/map.s line 20*

```rust
strmap(edit any[]) -> (mut robinhood_str_entry[], edit any[])
```

Maps string indexes to the buffer provided using a robinhood scheme.
Map size is static and cannot be adjusted after initialization.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 104

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# natmap
### natmap - a natural number map
*Defined in: std/map.s line 27*

```rust
natmap(edit any[]) -> (mut robinhood_nat_entry[], edit any[])
```

Maps number indexes to the buffer provided using a robinhood scheme.
Map size is static and cannot be adjusted after initialization.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 104

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# unpack
### unpack
*Defined in: std/mini.s line 82*

```rust
unpack(char[], nat16 dat.pos, nat16 dat.length) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 19
- Transpiled C size: 95

</details>

<details><summary>Potential errors</summary>

20. string does not fit on buffer
</details>


### unpack - unpack a compact str
*Defined in: std/mini.s line 76*

```rust
unpack(str) -> (str)
```

The created compact str is unpacked into its 'nat'-using representation
that is more efficient for computations in 64-bit architectures.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 40

</details>


# post
### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit circular, cstr url, cstr _body) -> (nat status, str) with effects CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 123

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
61. curl initialization failed
62. out of memory while reading response
15. out of bounds
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit circular, cstr url, cstr _body, cstr content_type) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 119

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
61. curl initialization failed
62. out of memory while reading response
15. out of bounds
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit circular, cstr url, str) -> (nat status, str) with effects CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 140

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit circular, cstr url, str, cstr content_type) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 136

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit circular, str, cstr _body) -> (nat status, str) with effects CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 129

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit circular, str, cstr _body, cstr content_type) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 125

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit circular, str, str) -> (nat status, str) with effects CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 146

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit circular, str, str, cstr content_type) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 142

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit arena, cstr url, cstr _body) -> (nat status, str) with effects CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 123

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
61. curl initialization failed
62. out of memory while reading response
15. out of bounds
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit arena, cstr url, cstr _body, cstr content_type) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 119

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
61. curl initialization failed
62. out of memory while reading response
15. out of bounds
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit arena, cstr url, str) -> (nat status, str) with effects CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 140

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit arena, cstr url, str, cstr content_type) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 136

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit arena, str, cstr _body) -> (nat status, str) with effects CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 129

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit arena, str, cstr _body, cstr content_type) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 125

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit arena, str, str) -> (nat status, str) with effects CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 146

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(edit arena, str, str, cstr content_type) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 142

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(new CHARS, cstr url, cstr _body) -> (nat status, str) with effects CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 108

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
61. curl initialization failed
62. out of memory while reading response
15. out of bounds
</details>


<details><summary>Defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(new CHARS, cstr url, cstr _body, cstr content_type) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 104

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
61. curl initialization failed
62. out of memory while reading response
15. out of bounds
</details>


<details><summary>Defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(new CHARS, cstr url, str) -> (nat status, str) with effects CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 125

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


<details><summary>Defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(new CHARS, cstr url, str, cstr content_type) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 121

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


<details><summary>Defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(new CHARS, str, cstr _body) -> (nat status, str) with effects CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 114

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


<details><summary>Defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(new CHARS, str, cstr _body, cstr content_type) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 110

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


<details><summary>Defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(new CHARS, str, str) -> (nat status, str) with effects CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 131

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


<details><summary>Defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - a post request
*Defined in: std/net/fetch.s line 92*

```rust
post(new CHARS, str, str, cstr content_type) -> (nat status, str) with effects CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 127

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
61. curl initialization failed
62. out of memory while reading response
</details>


<details><summary>Defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

# abs
### abs
*Defined in: std/sci/math.s line 27*

```rust
abs(int) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 46

</details>


### abs
*Defined in: std/sci/math.s line 20*

```rust
abs(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 38

</details>


# sqrt
### sqrt
*Defined in: std/sci/math.s line 34*

```rust
sqrt(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


# sin
### sin
*Defined in: std/sci/math.s line 39*

```rust
sin(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


# cos
### cos
*Defined in: std/sci/math.s line 44*

```rust
cos(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


# log
### log
*Defined in: std/sci/math.s line 49*

```rust
log(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


# tan
### tan
*Defined in: std/sci/math.s line 54*

```rust
tan(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


# floor
### floor
*Defined in: std/sci/math.s line 59*

```rust
floor(float) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


# asin
### asin
*Defined in: std/sci/math.s line 64*

```rust
asin(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


# acos
### acos
*Defined in: std/sci/math.s line 69*

```rust
acos(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


# atan
### atan
*Defined in: std/sci/math.s line 79*

```rust
atan(float x, float y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 12

</details>


### atan
*Defined in: std/sci/math.s line 74*

```rust
atan(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


# exp
### exp
*Defined in: std/sci/math.s line 84*

```rust
exp(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


# isnan
### isnan
*Defined in: std/sci/math.s line 94*

```rust
isnan(float) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 14

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[math.isnan(x)]`*
# isinf
### isinf
*Defined in: std/sci/math.s line 100*

```rust
isinf(float) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 14

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[math.isinf(x)]`*
# vec
### vec - vector type declaration
*Defined in: std/sci/unsafe.s line 19*

```rust
vec(float ptr unsafe_ptr, nat pos, nat length) -> (mut vec)
```

Warning: directly calling this constructor without safety checks is unsafe.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 15

</details>


### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit circular, nat length) -> (mut vec) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 204

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
63. can only place vectors on contiguous buffers
</details>


### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit circular, nat length, "dirty") -> (mut vec) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
63. can only place vectors on contiguous buffers
</details>


### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit arena, nat length) -> (mut vec) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 204

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
63. can only place vectors on contiguous buffers
</details>


### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit arena, nat length, "dirty") -> (mut vec) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
63. can only place vectors on contiguous buffers
</details>


### vec - treat a float buffer as a vector
*Defined in: std/sci/vec.s line 36*

```rust
vec(edit float[]) -> (mut vec)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 109

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
63. can only place vectors on contiguous buffers
</details>


### vec - vector on a new buffer
*Defined in: std/sci/vec.s line 28*

```rust
vec(new FLOATS, nat length) -> (mut vec) with effects FLOATS
```

Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 123

</details>

<details><summary>Potential errors</summary>

10. allocation failed
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### vec - vector on a new buffer
*Defined in: std/sci/vec.s line 28*

```rust
vec(new FLOATS, nat length, "dirty") -> (mut vec) with effects FLOATS
```

Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 96

</details>

<details><summary>Potential errors</summary>

10. allocation failed
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### vec - view a matrix as a vector
*Defined in: std/sci/mat.s line 86*

```rust
vec(mat) -> (mut vec)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 31

</details>


# mat
### mat - matrix type declaration
*Defined in: std/sci/unsafe.s line 24*

```rust
mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride) -> (mut mat)
```

Warning: directly calling this constructor without safety checks is unsafe.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 23

</details>


### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 75*

```rust
mat(vec, "col") -> (mut mat)
```

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 91

</details>


### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 75*

```rust
mat(vec, "row") -> (mut mat)
```

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 87

</details>


### mat - matrix on an existing float[] buffer
*Defined in: std/sci/mat.s line 53*

```rust
mat(edit float[], nat rows) -> (mut mat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 167

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
4. division by zero
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
71. buffer size not divisible by vector rows
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit circular, nat rows, nat cols) -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 228

</details>

<details><summary>Potential errors</summary>

17. does not fit in circular arena
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit circular, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 181

</details>

<details><summary>Potential errors</summary>

17. does not fit in circular arena
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit arena, nat rows, nat cols) -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 228

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit arena, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 181

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
</details>


### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols) -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 116

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# sparse\_element
### sparse\_element
*Defined in: std/sci/unsafe.s line 29*

```rust
sparse_element(nat row, nat col, float value) -> (nat row, nat col, float value)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


# coo
### coo - coo sparse matrix type declaration
*Defined in: std/sci/unsafe.s line 32*

```rust
coo(sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz) -> (mut coo)
```

Warning: directly calling this constructor without safety checks is unsafe.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 19

</details>


### coo
*Defined in: std/sci/coo.s line 40*

```rust
coo(sparse_element[], nat rows, nat cols) -> (mut coo)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 40

</details>


### coo - allocate a sparse matrix
*Defined in: std/sci/coo.s line 34*

```rust
coo(nat rows, nat cols, nat nnz) -> (mut coo)
```

This creates a new buffer of sparse elements for convenience.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 97

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# float\_allocator
### new - allocations on new bufs
*Defined in: std/core/allocators.s line 21*

```rust
new() -> (new)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t661t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t619t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t615t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t611t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t4t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t3595t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t3529t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t3250t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t661t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t619t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t615t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t611t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t4t") -> (edit circular)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t3595t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t3529t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t3250t") -> (edit arena)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


# constvec
### constvec - treat an immutable float buffer as an immutable vector
*Defined in: std/sci/vec.s line 42*

```rust
constvec(float[]) -> (vec)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 109

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
63. can only place vectors on contiguous buffers
</details>


# reduce
### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", vec, "add", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 339

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", vec, "add") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 295

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", vec, "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 327

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", vec, "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 277

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", vec, "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 275

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", vec) -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 231

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, vec, "mul", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 292

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, vec, "mul", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 242

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, vec, "mul", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 240

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, vec, "mul") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 196

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, vec, "add", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 292

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, vec, "add", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 242

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, vec, "add", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 240

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, vec, "add") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 196

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, vec, "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 228

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, vec, "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 178

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, vec, "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 176

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, vec) -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 132

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 300

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 250

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 248

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 204

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "add", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 300

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "add", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 250

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "add", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 248

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "add") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 204

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 236

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 186

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 184

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec) -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 140

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "rel", vec, "mul", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 501

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "rel", vec, "mul", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 451

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "rel", vec, "mul", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 449

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "rel", vec, "mul") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 405

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "rel", vec, "add", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 501

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "rel", vec, "add", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 451

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "rel", vec, "add", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 449

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "rel", vec, "add") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 405

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "rel", vec, "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 52
- Transpiled C size: 437

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "rel", vec, "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 387

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "rel", vec, "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 385

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "rel", vec) -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 341

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "sub", vec, "mul", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 48
- Transpiled C size: 391

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "sub", vec, "mul", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 341

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "sub", vec, "mul", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 339

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "sub", vec, "add", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 48
- Transpiled C size: 391

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "sub", vec, "add", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 341

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "sub", vec, "mul") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 295

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "sub", vec, "add", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 339

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "sub", vec, "add") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 295

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "sub", vec, "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 327

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "sub", vec, "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 277

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "sub", vec, "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 275

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "sub", vec) -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 231

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", vec, "mul", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 47
- Transpiled C size: 391

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", vec, "mul", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 341

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", vec, "mul", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 339

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", vec, "mul") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 295

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", vec, "add", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 48
- Transpiled C size: 391

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 176*

```rust
reduce(vec, "mul", vec, "add", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 341

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


# dot
### dot - dot product
*Defined in: std/sci/vec.s line 212*

```rust
dot(vec, vec) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 32

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


# sum
### sum - sum
*Defined in: std/sci/vec.s line 216*

```rust
sum(vec) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 15

</details>


### sum - sum of all elements
*Defined in: std/sci/coo.s line 125*

```rust
sum(coo, "all") -> (mut float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 19
- Transpiled C size: 158

</details>


### sum - sum of each column
*Defined in: std/sci/coo.s line 117*

```rust
sum(edit circular, coo, "col") -> (mut vec) with effects FLOATS
```

result[j] = sum of all stored values in column j

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 306

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
15. out of bounds
63. can only place vectors on contiguous buffers
</details>


### sum - sum of each column
*Defined in: std/sci/coo.s line 117*

```rust
sum(edit arena, coo, "col") -> (mut vec) with effects FLOATS
```

result[j] = sum of all stored values in column j

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 306

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
15. out of bounds
63. can only place vectors on contiguous buffers
</details>


### sum - sum of each column
*Defined in: std/sci/coo.s line 117*

```rust
sum(new FLOATS, coo, "col") -> (mut vec) with effects FLOATS
```

result[j] = sum of all stored values in column j

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 291

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
15. out of bounds
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### sum - sum of each row
*Defined in: std/sci/coo.s line 109*

```rust
sum(edit circular, coo, "row") -> (mut vec) with effects FLOATS
```

result[i] = sum of all stored values in row i

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 306

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
17. does not fit in circular arena
2. null pointer
15. out of bounds
63. can only place vectors on contiguous buffers
</details>


### sum - sum of each row
*Defined in: std/sci/coo.s line 109*

```rust
sum(edit arena, coo, "row") -> (mut vec) with effects FLOATS
```

result[i] = sum of all stored values in row i

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 306

</details>

<details><summary>Potential errors</summary>

64. cannot place vectors on buffer offsets
16. arena is out of space
2. null pointer
15. out of bounds
63. can only place vectors on contiguous buffers
</details>


### sum - sum of each row
*Defined in: std/sci/coo.s line 109*

```rust
sum(new FLOATS, coo, "row") -> (mut vec) with effects FLOATS
```

result[i] = sum of all stored values in row i

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 291

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
15. out of bounds
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# mean
### mean
*Defined in: std/sci/stats.s line 32*

```rust
mean(accumulator) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 32

</details>

<details><summary>Potential errors</summary>

4. division by zero
</details>


### mean - mean value
*Defined in: std/sci/vec.s line 220*

```rust
mean(vec) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 56

</details>

<details><summary>Potential errors</summary>

4. division by zero
</details>


# min
### min - minimum value
*Defined in: std/sci/vec.s line 224*

```rust
min(vec) -> (mut float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 179

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


# max
### max - maximum value
*Defined in: std/sci/vec.s line 231*

```rust
max(vec) -> (mut float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 179

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


# var
### var - variance
*Defined in: std/sci/vec.s line 239*

```rust
var(vec) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 25
- Transpiled C size: 250

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
</details>


# std
### std
*Defined in: std/sci/stats.s line 35*

```rust
std(accumulator) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 87

</details>

<details><summary>Potential errors</summary>

4. division by zero
</details>


### std - standard deviation
*Defined in: std/sci/vec.s line 250*

```rust
std(vec) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
</details>


# self
### self
*Defined in: std/sci/vec.s line 288*

```rust
self(mut vec) -> (edit arena, mut vec)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 28

</details>


# accumulator
### accumulator
*Defined in: std/sci/stats.s line 21*

```rust
accumulator() -> (edit accumulator)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 39

</details>


# append
### append
*Defined in: std/sci/stats.s line 27*

```rust
append(edit accumulator, float value) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 56

</details>


# pearson
### pearson - pearson correlation between the values of two vectors
*Defined in: std/sci/stats.s line 40*

```rust
pearson(vec, vec) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 76
- Transpiled C size: 637

</details>

<details><summary>Potential errors</summary>

2. null pointer
66. vectors must have the same length
67. at least two values required
68. undefined for constant vectors
4. division by zero
</details>


# rows
### rows - number of rows
*Defined in: std/sci/mat.s line 22*

```rust
rows(mat) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3

</details>


### rows - number of rows
*Defined in: std/sci/coo.s line 22*

```rust
rows(coo) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


# cols
### cols - number of columns
*Defined in: std/sci/mat.s line 26*

```rust
cols(mat) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3

</details>


### cols - number of columns
*Defined in: std/sci/coo.s line 26*

```rust
cols(coo) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


# constmat
### constmat - immutable matrix on an immutable float[] buffer
*Defined in: std/sci/mat.s line 47*

```rust
constmat(float[], nat rows) -> (mat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 167

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
4. division by zero
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
71. buffer size not divisible by vector rows
</details>


# mutvec
### mutvec - view a matrix as a vector
*Defined in: std/sci/mat.s line 90*

```rust
mutvec(mat) -> (mut vec)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 31

</details>


# row
### row - view matrix row as a vector
*Defined in: std/sci/mat.s line 94*

```rust
row(mat, nat i) -> (mut vec)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 64

</details>

<details><summary>Potential errors</summary>

72. row out of bounds
</details>


# nnz
### nnz - number of stored non-zero entries
*Defined in: std/sci/coo.s line 30*

```rust
nnz(coo) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


# todense
### todense - convert to dense mat
*Defined in: std/sci/coo.s line 88*

```rust
todense(edit circular, coo) -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 276

</details>

<details><summary>Potential errors</summary>

17. does not fit in circular arena
2. null pointer
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
72. row out of bounds
73. column out of bounds
</details>


### todense - convert to dense mat
*Defined in: std/sci/coo.s line 88*

```rust
todense(edit arena, coo) -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 276

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
2. null pointer
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
72. row out of bounds
73. column out of bounds
</details>


### todense - convert to dense mat
*Defined in: std/sci/coo.s line 88*

```rust
todense(new FLOATS, coo) -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 261

</details>

<details><summary>Potential errors</summary>

2. null pointer
72. row out of bounds
73. column out of bounds
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# matrix
### coo - coo sparse matrix type declaration
*Defined in: std/sci/unsafe.s line 32*

```rust
coo(sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz) -> (mut coo)
```

Warning: directly calling this constructor without safety checks is unsafe.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 19

</details>


### mat - matrix type declaration
*Defined in: std/sci/unsafe.s line 24*

```rust
mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride) -> (mut mat)
```

Warning: directly calling this constructor without safety checks is unsafe.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 23

</details>


### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 75*

```rust
mat(vec, "col") -> (mut mat)
```

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 91

</details>


### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 75*

```rust
mat(vec, "row") -> (mut mat)
```

A 'type \"row\"' or 'type \"col\"' marker is needed
to indicate the new matrix's orientation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 87

</details>


### mat - matrix on an existing float[] buffer
*Defined in: std/sci/mat.s line 53*

```rust
mat(edit float[], nat rows) -> (mut mat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 167

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
4. division by zero
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
71. buffer size not divisible by vector rows
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit circular, nat rows, nat cols) -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 228

</details>

<details><summary>Potential errors</summary>

17. does not fit in circular arena
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit circular, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 181

</details>

<details><summary>Potential errors</summary>

17. does not fit in circular arena
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit arena, nat rows, nat cols) -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 228

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 37*

```rust
mat(edit arena, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 181

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
69. can only place matrices on contiguous buffers
70. cannot place matrices on buffer offsets
</details>


### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols) -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols, "dirty") -> (mut mat) with effects FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 116

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### coo
*Defined in: std/sci/coo.s line 40*

```rust
coo(sparse_element[], nat rows, nat cols) -> (mut coo)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 40

</details>


### coo - allocate a sparse matrix
*Defined in: std/sci/coo.s line 34*

```rust
coo(nat rows, nat cols, nat nnz) -> (mut coo)
```

This creates a new buffer of sparse elements for convenience.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 97

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# tagged
### tagged - blank tag structure
*Defined in: std/tag.s line 20*

```rust
tagged(cstr) -> (tagged)
```

Ensures that 'tag ptr' has a unique type and allocates at least a cstr's
(a pointer's) worth of storage so that tag checking is always valid.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# unsafe\_match
### unsafe\_match
*Defined in: std/tag.s line 26*

```rust
unsafe_match(tagged ptr obj, cstr name, any ptr type) -> (mut any ptr {follows any ptr type})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 98

</details>

<details><summary>Potential errors</summary>

80. does not match
2. null pointer
</details>


# unsafe\_defer\_free
### unsafe\_defer\_free
*Defined in: std/tag.s line 31*

```rust
unsafe_defer_free(mut tagged ptr) -> (mut tagged ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3

</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# tagged\_alloc
### tagged\_alloc
*Defined in: std/tag.s line 36*

```rust
tagged_alloc(edit arena, nat size) -> (mut char ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 120

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
15. out of bounds
</details>


# match
### match
*Defined in: std/tag.s line 63*

```rust
match(cstr obj, cstr type_name) -> (mut char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 73
- Transpiled C size: 433

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### match
*Defined in: std/pipe.s line 123*

```rust
match(cstr obj, cstr type_name) -> (mut char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 73
- Transpiled C size: 433

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
16. arena is out of space
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# pipe
### pipe - blank pipe structure
*Defined in: std/pipe.s line 21*

```rust
pipe(cstr) -> (pipe)
```

Ensures that 'pipe ptr' has a unique type and allocates at least a cstr's
(a pointer's) + sizeof(mutex_t) worth of storage so that tag checking and
mutex checking are always valid.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# mutex\_size
### mutex\_size
*Defined in: std/pipe.s line 28*

```rust
mutex_size() -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 10

</details>


# unsafe\_pipe\_lock
### unsafe\_pipe\_lock
*Defined in: std/pipe.s line 32*

```rust
unsafe_pipe_lock(pipe ptr) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 27

</details>


# unsafe\_pipe\_unlock
### unsafe\_pipe\_unlock
*Defined in: std/pipe.s line 36*

```rust
unsafe_pipe_unlock(pipe ptr) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 27

</details>


# with
### with - gain ownership of a pipe
*Defined in: std/pipe.s line 40*

```rust
with(pipe ptr) -> (with)
```

This blocks other threads from accessing its data.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 8

</details>


<details><summary>Defered calls</summary>

```rust
unsafe_pipe_unlock(pipe ptr) -> ()
```
</details>

# system\_thread
### system\_thread
*Defined in: std/pipe.s line 48*

```rust
system_thread(any ptr) -> (system_thread)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# unsafe\_spawn
### unsafe\_spawn
*Defined in: std/pipe.s line 51*

```rust
unsafe_spawn((pipe ptr) -> () func, pipe ptr input) -> (system_thread)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 31

</details>


# join
### join
*Defined in: std/pipe.s line 56*

```rust
join(system_thread) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 19

</details>


# cpu
### cpu
*Defined in: std/pipe.s line 60*

```rust
cpu(nat) -> (cpu)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# growing\_thread\_pool
### growing\_thread\_pool
*Defined in: std/pipe.s line 63*

```rust
growing_thread_pool(cpu) -> (edit growing_thread_pool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 140

</details>

<details><summary>Potential errors</summary>

10. allocation failed
2. null pointer
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

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
</details>

# thread
### thread
*Defined in: std/pipe.s line 73*

```rust
thread(edit growing_thread_pool, (pipe ptr) -> () func, pipe ptr input) -> (mut system_thread) with effects THREADS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 120

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
2. null pointer
15. out of bounds
</details>


# unsafe\_pipe\_match
### unsafe\_pipe\_match
*Defined in: std/pipe.s line 78*

```rust
unsafe_pipe_match(with, cstr name, any ptr type) -> (mut any ptr {follows any ptr type})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 114

</details>

<details><summary>Potential errors</summary>

80. does not match
2. null pointer
</details>


# unsafe\_pipe\_defer\_free
### unsafe\_pipe\_defer\_free
*Defined in: std/pipe.s line 83*

```rust
unsafe_pipe_defer_free(mut pipe ptr) -> (mut pipe ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3

</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# unsafe\_pipe\_mutax\_init
### unsafe\_pipe\_mutax\_init
*Defined in: std/pipe.s line 88*

```rust
unsafe_pipe_mutax_init(mut pipe ptr) -> (mut pipe ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 30

</details>


<details><summary>Defered calls</summary>

```rust
add(any ptr allocated, nat offset) -> (any ptr {follows any ptr allocated})
```
</details>

# pipe\_alloc
### pipe\_alloc
*Defined in: std/pipe.s line 96*

```rust
pipe_alloc(edit arena, nat size) -> (mut char ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 120

</details>

<details><summary>Potential errors</summary>

16. arena is out of space
15. out of bounds
</details>


# shared
### shared
*Defined in: std/pipe.s line 100*

```rust
shared(cstr) -> (mut char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 98
- Transpiled C size: 627

</details>

<details><summary>Potential errors</summary>

2. null pointer
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
16. arena is out of space
81. empty input name
82. cannot tag a structural type
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### shared
*Defined in: std/pipe.s line 100*

```rust
shared(cstr surface, cstr obj) -> (mut char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 112
- Transpiled C size: 755

</details>

<details><summary>Potential errors</summary>

2. null pointer
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
15. out of bounds
16. arena is out of space
81. empty input name
82. cannot tag a structural type
83. tag surface cannot be structural type
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# realloc
### realloc - reallocate memory
*Defined in: std/unsafe.s line 34*

```rust
realloc(any ptr allocated, nat bytes) -> (any ptr {follows any ptr allocated})
```

Reallocates an allocated memory pointer, potentially invalidating
the original one without any safety. As a stopgap measure against
unforeseen complications, this function is set to invalidate all
pointers in the calling context and parrent contexts, BESIDES
calling function mutable arguments and calling function outputs,
as those have the intent of immediate reuse.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 71

</details>

<details><summary>Potential errors</summary>

11. reallocation failed
</details>


# free
### free - free memory
*Defined in: std/unsafe.s line 51*

```rust
free(mut any ptr) -> ()
```

Frees allocated memory.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 15

</details>


# zero
### zero - set memory to zero
*Defined in: std/unsafe.s line 58*

```rust
zero(any ptr allocated, nat from, nat to) -> ()
```

Memsets a memory region to zero.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 9

</details>


# color
### color
*Defined in: std/graphics.s line 21*

```rust
color(nat _r, nat _g, nat _b) -> (nat8 r, nat8 g, nat8 b, nat8 a)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 103

</details>

<details><summary>Potential errors</summary>

58. nat value too large to pack in nat8
</details>


### color
*Defined in: std/graphics.s line 21*

```rust
color(nat _r, nat _g, nat _b, nat _a) -> (nat8 r, nat8 g, nat8 b, nat8 a)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 95

</details>

<details><summary>Potential errors</summary>

58. nat value too large to pack in nat8
</details>


# position
### position
*Defined in: std/graphics.s line 30*

```rust
position(float x, float y) -> (float x, float y)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# size
### size
*Defined in: std/graphics.s line 33*

```rust
size(float width, float height) -> (float width, float height)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# unsafe\_open\_window
### unsafe\_open\_window
*Defined in: std/graphics.s line 36*

```rust
unsafe_open_window(float size.width, float size.height, cstr title, cstr font_path) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 104

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `(pyray.set_trace_log_level(pyray.LOG_NONE), pyray.init_window(int($size__width),int($size__height),$title),pyray.set_target_fps(60),memory.set_global('font', pyray.load_font_ex($font_path,128,None,0) if $font_path else pyray.get_font_default()))`*
# window
### window
*Defined in: std/graphics.s line 49*

```rust
window(float size.width, float size.height, cstr title, cstr font_path) -> (edit window)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 26

</details>


# is\_open
### is\_open
*Defined in: std/graphics.s line 73*

```rust
is_open(edit window) -> (bool) with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 17

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[not pyray.window_should_close()]`*
# unsafe\_begin\_drawing
### unsafe\_begin\_drawing
*Defined in: std/graphics.s line 78*

```rust
unsafe_begin_drawing() -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 0
- Transpiled C size: 4

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.begin_drawing()`*
# unsafe\_end\_drawing
### unsafe\_end\_drawing
*Defined in: std/graphics.s line 82*

```rust
unsafe_end_drawing() -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 4

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.end_drawing()`*
# draw
### draw
*Defined in: std/graphics.s line 88*

```rust
draw(edit window) -> (bool) with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 28

</details>

<details><summary>Potential errors</summary>

78. alopeny drawing on window
</details>


<details><summary>Defered calls</summary>

```rust
unsafe_end_drawing() -> ()
```
</details>

# clear
### clear
*Defined in: std/graphics.s line 97*

```rust
clear(edit window, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 16

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.clear_background(pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# text
### text
*Defined in: std/graphics.s line 127*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 53

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_pro(memory.globals['font'].font,str($txt),pyray.Vector2($pos__x,$pos__y),pyray.Vector2($origin__x,$origin__y),$rotation,$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 127*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 53

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_pro(memory.globals['font'].font,str($txt),pyray.Vector2($pos__x,$pos__y),pyray.Vector2($origin__x,$origin__y),$rotation,$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 114*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 42

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_ex(memory.globals['font'],str($txt),pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 114*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 42

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_ex(memory.globals['font'],str($txt),pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 101*

```rust
text(edit window, cstr txt, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 35

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_ex(memory.globals['font'],$txt,pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# sleep
### sleep
*Defined in: std/graphics.s line 142*

```rust
sleep(nat) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 13

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `time.sleep($seconds*0.001)`*
# TextureData
### TextureData
*Defined in: std/graphics.s line 146*

```rust
TextureData(nat id, float size.width, float size.height, nat mipmaps, nat format) -> (nat id, float size.width, float size.height, nat mipmaps, nat format)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


# Texture
### Texture
*Defined in: std/graphics.s line 149*

```rust
Texture(nat id, float size.width, float size.height, nat mipmaps, nat format) -> (Texture)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 136

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# open
### open
*Defined in: std/graphics.s line 156*

```rust
open(cstr) -> (Texture)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 87

</details>

<details><summary>Potential errors</summary>

10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# texture
### texture
*Defined in: std/graphics.s line 218*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float size.width, float size.height, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 258

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### texture
*Defined in: std/graphics.s line 205*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float scale, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 262

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### texture
*Defined in: std/graphics.s line 191*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float size.width, float size.height, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float rotation) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 285

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
15. out of bounds
</details>


### texture
*Defined in: std/graphics.s line 179*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float scale, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float rotation) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 219

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


### texture
*Defined in: std/graphics.s line 169*

```rust
texture(edit window, Texture, float pos.x, float pos.y, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 201

</details>

<details><summary>Potential errors</summary>

2. null pointer
15. out of bounds
</details>


# circ
### circ
*Defined in: std/graphics.s line 231*

```rust
circ(edit window, float pos.x, float pos.y, float radius, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 36

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_circle_v(pyray.Vector2($pos__x,$pos__y),$radius,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### circ
*Defined in: std/graphics.s line 318*

```rust
circ(edit window, float pos.x, float pos.y, float radius, "line", nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 69

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_ring(pyray.Vector2($pos__x,$pos__y),max(0,$radius-$thickness),$radius,0,360,64,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# ellipse
### ellipse
*Defined in: std/graphics.s line 251*

```rust
ellipse(edit window, float pos.x, float pos.y, float radius.x, float radius.y, "line", nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 36

</details>


### ellipse
*Defined in: std/graphics.s line 241*

```rust
ellipse(edit window, float pos.x, float pos.y, float radius.x, float radius.y, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 41

</details>


# line
### line
*Defined in: std/graphics.s line 261*

```rust
line(edit window, float p1.x, float p1.y, float p2.x, float p2.y, float thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 51

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_line_ex(pyray.Vector2($p1__x,$p1__y),pyray.Vector2($p2__x,$p2__y),$thickness,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# rect
### rect
*Defined in: std/graphics.s line 282*

```rust
rect(edit window, float pos.x, float pos.y, float size.width, float size.height, "line", nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 46

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_rectangle_lines_ex(pyray.Rectangle($pos__x,$pos__y,$size__width,$size__height),$thickness,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### rect
*Defined in: std/graphics.s line 272*

```rust
rect(edit window, float pos.x, float pos.y, float size.width, float size.height, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 24

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_rectangle(int($pos__x),int($pos__y),int($size__width),int($size__height),pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### rect
*Defined in: std/graphics.s line 286*

```rust
rect(edit window, float pos.x, float pos.y, float size.width, float size.height, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 58

</details>


# tri
### tri
*Defined in: std/graphics.s line 307*

```rust
tri(edit window, float p1.x, float p1.y, float p2.x, float p2.y, float p3.x, float p3.y, "line", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 61

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_triangle_lines(pyray.Vector2($p1__x,$p1__y),pyray.Vector2($p2__x,$p2__y),pyray.Vector2($p3__x,$p3__y),pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### tri
*Defined in: std/graphics.s line 296*

```rust
tri(edit window, float p1.x, float p1.y, float p2.x, float p2.y, float p3.x, float p3.y, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 61

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_triangle(pyray.Vector2($p1__x,$p1__y),pyray.Vector2($p2__x,$p2__y),pyray.Vector2($p3__x,$p3__y),pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# dt
### dt
*Defined in: std/graphics.s line 335*

```rust
dt(window) -> (float) with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 9

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.get_frame_time()]`*
# uptime
### uptime
*Defined in: std/graphics.s line 340*

```rust
uptime(window) -> (float) with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 9

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.get_time()]`*
# key\_down
### key\_down
*Defined in: std/graphics.s line 345*

```rust
key_down(window, nat key) -> (bool) with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_key_down($key)]`*
# key\_pressed
### key\_pressed
*Defined in: std/graphics.s line 350*

```rust
key_pressed(edit window, nat key) -> (bool) with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_key_pressed($key)]`*
# key\_released
### key\_released
*Defined in: std/graphics.s line 355*

```rust
key_released(edit window, nat key) -> (bool) with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_key_released($key)]`*
# mouse\_pos
### mouse\_pos
*Defined in: std/graphics.s line 360*

```rust
mouse_pos(window) -> (float x, float y) with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 28

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[(lambda p=pyray.get_mouse_position():(p.x,p.y))()]`*
# mouse\_down
### mouse\_down
*Defined in: std/graphics.s line 368*

```rust
mouse_down(window, nat button) -> (bool) with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_mouse_button_down($button)]`*
# mouse\_pressed
### mouse\_pressed
*Defined in: std/graphics.s line 373*

```rust
mouse_pressed(edit window, nat button) -> (bool) with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_mouse_button_pressed($button)]`*
# mouse\_wheel
### mouse\_wheel
*Defined in: std/graphics.s line 378*

```rust
mouse_wheel(window) -> (float) with effects WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 9

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.get_mouse_wheel_move()]`*
# KEY\_NULL

*Defined in: std/graphics.s line 383*

```rust
() -> (0)
```

# KEY\_APOSTROPHE

*Defined in: std/graphics.s line 384*

```rust
() -> (39)
```

# KEY\_COMMA

*Defined in: std/graphics.s line 385*

```rust
() -> (44)
```

# KEY\_MINUS

*Defined in: std/graphics.s line 386*

```rust
() -> (45)
```

# KEY\_PERIOD

*Defined in: std/graphics.s line 387*

```rust
() -> (46)
```

# KEY\_SLASH

*Defined in: std/graphics.s line 388*

```rust
() -> (47)
```

# KEY\_ZERO

*Defined in: std/graphics.s line 389*

```rust
() -> (48)
```

# KEY\_ONE

*Defined in: std/graphics.s line 390*

```rust
() -> (49)
```

# KEY\_TWO

*Defined in: std/graphics.s line 391*

```rust
() -> (50)
```

# KEY\_THREE

*Defined in: std/graphics.s line 392*

```rust
() -> (51)
```

# KEY\_FOUR

*Defined in: std/graphics.s line 393*

```rust
() -> (52)
```

# KEY\_FIVE

*Defined in: std/graphics.s line 394*

```rust
() -> (53)
```

# KEY\_SIX

*Defined in: std/graphics.s line 395*

```rust
() -> (54)
```

# KEY\_SEVEN

*Defined in: std/graphics.s line 396*

```rust
() -> (55)
```

# KEY\_EIGHT

*Defined in: std/graphics.s line 397*

```rust
() -> (56)
```

# KEY\_NINE

*Defined in: std/graphics.s line 398*

```rust
() -> (57)
```

# KEY\_SEMICOLON

*Defined in: std/graphics.s line 399*

```rust
() -> (59)
```

# KEY\_EQUAL

*Defined in: std/graphics.s line 400*

```rust
() -> (61)
```

# KEY\_A

*Defined in: std/graphics.s line 401*

```rust
() -> (65)
```

# KEY\_B

*Defined in: std/graphics.s line 402*

```rust
() -> (66)
```

# KEY\_C

*Defined in: std/graphics.s line 403*

```rust
() -> (67)
```

# KEY\_D

*Defined in: std/graphics.s line 404*

```rust
() -> (68)
```

# KEY\_E

*Defined in: std/graphics.s line 405*

```rust
() -> (69)
```

# KEY\_F

*Defined in: std/graphics.s line 406*

```rust
() -> (70)
```

# KEY\_G

*Defined in: std/graphics.s line 407*

```rust
() -> (71)
```

# KEY\_H

*Defined in: std/graphics.s line 408*

```rust
() -> (72)
```

# KEY\_I

*Defined in: std/graphics.s line 409*

```rust
() -> (73)
```

# KEY\_J

*Defined in: std/graphics.s line 410*

```rust
() -> (74)
```

# KEY\_K

*Defined in: std/graphics.s line 411*

```rust
() -> (75)
```

# KEY\_L

*Defined in: std/graphics.s line 412*

```rust
() -> (76)
```

# KEY\_M

*Defined in: std/graphics.s line 413*

```rust
() -> (77)
```

# KEY\_N

*Defined in: std/graphics.s line 414*

```rust
() -> (78)
```

# KEY\_O

*Defined in: std/graphics.s line 415*

```rust
() -> (79)
```

# KEY\_P

*Defined in: std/graphics.s line 416*

```rust
() -> (80)
```

# KEY\_Q

*Defined in: std/graphics.s line 417*

```rust
() -> (81)
```

# KEY\_R

*Defined in: std/graphics.s line 418*

```rust
() -> (82)
```

# KEY\_S

*Defined in: std/graphics.s line 419*

```rust
() -> (83)
```

# KEY\_T

*Defined in: std/graphics.s line 420*

```rust
() -> (84)
```

# KEY\_U

*Defined in: std/graphics.s line 421*

```rust
() -> (85)
```

# KEY\_V

*Defined in: std/graphics.s line 422*

```rust
() -> (86)
```

# KEY\_W

*Defined in: std/graphics.s line 423*

```rust
() -> (87)
```

# KEY\_X

*Defined in: std/graphics.s line 424*

```rust
() -> (88)
```

# KEY\_Y

*Defined in: std/graphics.s line 425*

```rust
() -> (89)
```

# KEY\_Z

*Defined in: std/graphics.s line 426*

```rust
() -> (90)
```

# KEY\_LEFT\_BRACKET

*Defined in: std/graphics.s line 427*

```rust
() -> (91)
```

# KEY\_BACKSLASH

*Defined in: std/graphics.s line 428*

```rust
() -> (92)
```

# KEY\_RIGHT\_BRACKET

*Defined in: std/graphics.s line 429*

```rust
() -> (93)
```

# KEY\_GRAVE

*Defined in: std/graphics.s line 430*

```rust
() -> (96)
```

# KEY\_SPACE

*Defined in: std/graphics.s line 431*

```rust
() -> (32)
```

# KEY\_ESCAPE

*Defined in: std/graphics.s line 432*

```rust
() -> (256)
```

# KEY\_ENTER

*Defined in: std/graphics.s line 433*

```rust
() -> (257)
```

# KEY\_TAB

*Defined in: std/graphics.s line 434*

```rust
() -> (258)
```

# KEY\_BACKSPACE

*Defined in: std/graphics.s line 435*

```rust
() -> (259)
```

# KEY\_INSERT

*Defined in: std/graphics.s line 436*

```rust
() -> (260)
```

# KEY\_DELETE

*Defined in: std/graphics.s line 437*

```rust
() -> (261)
```

# KEY\_RIGHT

*Defined in: std/graphics.s line 438*

```rust
() -> (262)
```

# KEY\_LEFT

*Defined in: std/graphics.s line 439*

```rust
() -> (263)
```

# KEY\_DOWN

*Defined in: std/graphics.s line 440*

```rust
() -> (264)
```

# KEY\_UP

*Defined in: std/graphics.s line 441*

```rust
() -> (265)
```

# KEY\_PAGE\_UP

*Defined in: std/graphics.s line 442*

```rust
() -> (266)
```

# KEY\_PAGE\_DOWN

*Defined in: std/graphics.s line 443*

```rust
() -> (267)
```

# KEY\_HOME

*Defined in: std/graphics.s line 444*

```rust
() -> (268)
```

# KEY\_END

*Defined in: std/graphics.s line 445*

```rust
() -> (269)
```

# KEY\_CAPS\_LOCK

*Defined in: std/graphics.s line 446*

```rust
() -> (280)
```

# KEY\_SCROLL\_LOCK

*Defined in: std/graphics.s line 447*

```rust
() -> (281)
```

# KEY\_NUM\_LOCK

*Defined in: std/graphics.s line 448*

```rust
() -> (282)
```

# KEY\_PRINT\_SCREEN

*Defined in: std/graphics.s line 449*

```rust
() -> (283)
```

# KEY\_PAUSE

*Defined in: std/graphics.s line 450*

```rust
() -> (284)
```

# KEY\_F1

*Defined in: std/graphics.s line 451*

```rust
() -> (290)
```

# KEY\_F2

*Defined in: std/graphics.s line 452*

```rust
() -> (291)
```

# KEY\_F3

*Defined in: std/graphics.s line 453*

```rust
() -> (292)
```

# KEY\_F4

*Defined in: std/graphics.s line 454*

```rust
() -> (293)
```

# KEY\_F5

*Defined in: std/graphics.s line 455*

```rust
() -> (294)
```

# KEY\_F6

*Defined in: std/graphics.s line 456*

```rust
() -> (295)
```

# KEY\_F7

*Defined in: std/graphics.s line 457*

```rust
() -> (296)
```

# KEY\_F8

*Defined in: std/graphics.s line 458*

```rust
() -> (297)
```

# KEY\_F9

*Defined in: std/graphics.s line 459*

```rust
() -> (298)
```

# KEY\_F10

*Defined in: std/graphics.s line 460*

```rust
() -> (299)
```

# KEY\_F11

*Defined in: std/graphics.s line 461*

```rust
() -> (300)
```

# KEY\_F12

*Defined in: std/graphics.s line 462*

```rust
() -> (301)
```

# KEY\_LEFT\_SHIFT

*Defined in: std/graphics.s line 463*

```rust
() -> (340)
```

# KEY\_LEFT\_CONTROL

*Defined in: std/graphics.s line 464*

```rust
() -> (341)
```

# KEY\_LEFT\_ALT

*Defined in: std/graphics.s line 465*

```rust
() -> (342)
```

# KEY\_LEFT\_SUPER

*Defined in: std/graphics.s line 466*

```rust
() -> (343)
```

# KEY\_RIGHT\_SHIFT

*Defined in: std/graphics.s line 467*

```rust
() -> (344)
```

# KEY\_RIGHT\_CONTROL

*Defined in: std/graphics.s line 468*

```rust
() -> (345)
```

# KEY\_RIGHT\_ALT

*Defined in: std/graphics.s line 469*

```rust
() -> (346)
```

# KEY\_RIGHT\_SUPER

*Defined in: std/graphics.s line 470*

```rust
() -> (347)
```

# KEY\_KB\_MENU

*Defined in: std/graphics.s line 471*

```rust
() -> (348)
```

# KEY\_KP\_0

*Defined in: std/graphics.s line 472*

```rust
() -> (320)
```

# KEY\_KP\_1

*Defined in: std/graphics.s line 473*

```rust
() -> (321)
```

# KEY\_KP\_2

*Defined in: std/graphics.s line 474*

```rust
() -> (322)
```

# KEY\_KP\_3

*Defined in: std/graphics.s line 475*

```rust
() -> (323)
```

# KEY\_KP\_4

*Defined in: std/graphics.s line 476*

```rust
() -> (324)
```

# KEY\_KP\_5

*Defined in: std/graphics.s line 477*

```rust
() -> (325)
```

# KEY\_KP\_6

*Defined in: std/graphics.s line 478*

```rust
() -> (326)
```

# KEY\_KP\_7

*Defined in: std/graphics.s line 479*

```rust
() -> (327)
```

# KEY\_KP\_8

*Defined in: std/graphics.s line 480*

```rust
() -> (328)
```

# KEY\_KP\_9

*Defined in: std/graphics.s line 481*

```rust
() -> (329)
```

# KEY\_KP\_DECIMAL

*Defined in: std/graphics.s line 482*

```rust
() -> (330)
```

# KEY\_KP\_DIVIDE

*Defined in: std/graphics.s line 483*

```rust
() -> (331)
```

# KEY\_KP\_MULTIPLY

*Defined in: std/graphics.s line 484*

```rust
() -> (332)
```

# KEY\_KP\_SUBTRACT

*Defined in: std/graphics.s line 485*

```rust
() -> (333)
```

# KEY\_KP\_ADD

*Defined in: std/graphics.s line 486*

```rust
() -> (334)
```

# KEY\_KP\_ENTER

*Defined in: std/graphics.s line 487*

```rust
() -> (335)
```

# KEY\_KP\_EQUAL

*Defined in: std/graphics.s line 488*

```rust
() -> (336)
```

# KEY\_BACK

*Defined in: std/graphics.s line 489*

```rust
() -> (4)
```

# KEY\_MENU

*Defined in: std/graphics.s line 490*

```rust
() -> (5)
```

# KEY\_VOLUME\_UP

*Defined in: std/graphics.s line 491*

```rust
() -> (24)
```

# KEY\_VOLUME\_DOWN

*Defined in: std/graphics.s line 492*

```rust
() -> (25)
```

# NumberOrPtr
### nat - an unsigned integer value
*Defined in: builtins line 1*

```rust
nat() -> (nat)
```

Represents values in the range `0 to 2^64-1`.

### float
*Defined in: builtins line 1*

```rust
float() -> (float)
```

### int - a signed integer value
*Defined in: builtins line 1*

```rust
int() -> (int)
```

Represents values in the range `2^-63 to 2^63-1`.

### nat ptr
*Defined in: std/ptrpeek.s line 20*

```rust
nat ptr() -> (mut nat ptr)
```

### int ptr
*Defined in: std/ptrpeek.s line 20*

```rust
int ptr() -> (mut int ptr)
```

### float ptr
*Defined in: std/ptrpeek.s line 20*

```rust
float ptr() -> (mut float ptr)
```

# to\_number
### to\_number
*Defined in: std/ptrpeek.s line 21*

```rust
to_number(nat) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


### to\_number
*Defined in: std/ptrpeek.s line 21*

```rust
to_number(int) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


### to\_number
*Defined in: std/ptrpeek.s line 21*

```rust
to_number(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


### to\_number
*Defined in: std/ptrpeek.s line 21*

```rust
to_number(nat ptr) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 27

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### to\_number
*Defined in: std/ptrpeek.s line 21*

```rust
to_number(int ptr) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 27

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### to\_number
*Defined in: std/ptrpeek.s line 21*

```rust
to_number(float ptr) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 27

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


# already\_defined
### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat x, nat y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat x, int y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat x, float y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat x, nat ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat x, int ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat x, float ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int x, nat y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int x, int y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int x, float y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int x, nat ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int x, int ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int x, float ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float x, nat y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float x, int y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float x, float y) -> (true)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float x, nat ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float x, int ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float x, float ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat ptr x, nat y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat ptr x, int y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat ptr x, float y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat ptr x, nat ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat ptr x, int ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(nat ptr x, float ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int ptr x, nat y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int ptr x, int y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int ptr x, float y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int ptr x, nat ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int ptr x, int ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(int ptr x, float ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float ptr x, nat y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float ptr x, int y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float ptr x, float y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float ptr x, nat ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float ptr x, int ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### already\_defined
*Defined in: std/ptrpeek.s line 27*

```rust
already_defined(float ptr x, float ptr y) -> (false)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


# String
### cstr - constant string
*Defined in: builtins line 1*

```rust
cstr() -> (cstr)
```

### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 207*

```rust
cstr(cstr cstr, str) -> (cstr)
```

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3

</details>


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 207*

```rust
cstr(unsafe_temp) -> (cstr)
```

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 207*

```rust
cstr(unsafe_temp) -> (cstr)
```

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### str - convert to string
*Defined in: std/core/string.s line 93*

```rust
str(cstr) -> (str)
```

Defines an implicit constant buffer using the cstr's memory data.
Subsequent comparisons no longer use the underlying pointer value.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 169

</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 86*

```rust
str(char[], nat endpos, "from", nat pos) -> (str)
```

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 62

</details>

<details><summary>Potential errors</summary>

2. null pointer
19. can only define strings on non-offset buffers
18. can only define strings on contiguous buffers
6. nat subtraction would yield a negative
15. out of bounds
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 77*

```rust
str(char[], nat pos, "to", nat endpos) -> (str)
```

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 143

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
6. nat subtraction would yield a negative
15. out of bounds
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 69*

```rust
str(char[], nat pos, "len", nat length) -> (str)
```

The string automatically detects the first character,
which is generally tracked for fewer indirections
on comparisons of unequal strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 118

</details>

<details><summary>Potential errors</summary>

19. can only define strings on non-offset buffers
2. null pointer
18. can only define strings on contiguous buffers
15. out of bounds
</details>


### str - tautology function for strings
*Defined in: std/core/string.s line 65*

```rust
str(str) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 57*

```rust
str(char[]) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 165

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds
</details>


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 57*

```rust
str(char[], nat length) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 147

</details>

<details><summary>Potential errors</summary>

2. null pointer
18. can only define strings on contiguous buffers
20. string does not fit on buffer
19. can only define strings on non-offset buffers
15. out of bounds
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 50*

```rust
str(char[], nat dat.pos, nat dat.length, char dat.first) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 100

</details>

<details><summary>Potential errors</summary>

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 45*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 43

</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 41*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### str - reads a string from the console
*Defined in: std/core/convertstr.s line 114*

```rust
str(new CHARS, console console) -> (str) with effects CHARS
```

The read string is placed onto memory that keeps being reallocated to accommodate its size.
The resulting memory will consume exactly the required size in bytes.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 486

</details>

<details><summary>Potential errors</summary>

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
24. unexpected end of console read
</details>


<details><summary>Defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### cstr - a cstr description of an error code
*Defined in: std/core/error.s line 19*

```rust
cstr(catch) -> (cstr)
```

Error codes should *not* be compared numerically against
given numbers, as their numbering changes for different
programs. Instead, they should be converted to a cstr
string with this function, which can then be compared.
This comparison is also one numerical comparison, as
care is taken for all cstr to point to the same memory
location.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


### str - reads a string from the console
*Defined in: std/core/convertstr.s line 114*

```rust
str(edit arena, console console) -> (str) with effects CHARS
```

The read string is placed on an arena while consuming only the necessarily minimum size.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 47
- Transpiled C size: 279

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
15. out of bounds
18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
24. unexpected end of console read
26. read string does not fit on buffer
</details>


# run
### run
*Defined in: std/test.s line 5*

```rust
run(console CLI, str) -> (cstr) with effects CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 160

</details>

<details><summary>Potential errors</summary>

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
37. failed to start process
38. process terminated with unhandled non-zero exit code
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


### run
*Defined in: std/test.s line 5*

```rust
run(console CLI, cstr command) -> (cstr) with effects CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 154

</details>

<details><summary>Potential errors</summary>

37. failed to start process
38. process terminated with unhandled non-zero exit code
</details>


# print\_marker
### print\_marker - prints a test status marker
*Defined in: std/test.s line 12*

```rust
print_marker(colors, "pending") -> () with effects colors
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 96

</details>


### print\_marker - prints a test status marker
*Defined in: std/test.s line 12*

```rust
print_marker(colors, "failure") -> () with effects colors
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 96

</details>


### print\_marker - prints a test status marker
*Defined in: std/test.s line 12*

```rust
print_marker(colors, "success") -> () with effects colors
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 96

</details>


# restore\_stdout
### restore\_stdout
*Defined in: std/test.s line 28*

```rust
restore_stdout(int) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 17

</details>


# stdout\_to\_err
### stdout\_to\_err - temporarily redirect stdout to stderr
*Defined in: std/test.s line 33*

```rust
stdout_to_err(console) -> (int) with effects CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 22

</details>


<details><summary>Defered calls</summary>

```rust
restore_stdout(int) -> ()
```
</details>

# assert
### assert - assert a condition given a corresponding message
*Defined in: std/test.s line 43*

```rust
assert(console CLI, bool condition, cstr text) -> () with effects CLI
```

This outputs to stderr, so that asserts are printed
even if stout is suppressed during the 'test' function.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 25
- Transpiled C size: 115

</details>

<details><summary>Potential errors</summary>

84. assert failed
</details>


# test
### test - prints and tests a system command
*Defined in: std/test.s line 65*

```rust
test(colors, str) -> (bool) with effects colors
```

Returns whether the command succeeded or not.
A completion assert is performed at the end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 122

</details>

<details><summary>Potential errors</summary>

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
37. failed to start process
38. process terminated with unhandled non-zero exit code
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


### test - prints and tests a system command
*Defined in: std/test.s line 65*

```rust
test(colors, str, bool should_fail) -> (bool) with effects colors
```

Returns whether the command succeeded or not.
A completion assert is performed at the end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 159

</details>

<details><summary>Potential errors</summary>

18. can only define strings on contiguous buffers
19. can only define strings on non-offset buffers
37. failed to start process
38. process terminated with unhandled non-zero exit code
10. allocation failed
12. cannot allocate a buffer of unsized type
13. cannot resize buffers with alloc; it promises no data reallocation
</details>


