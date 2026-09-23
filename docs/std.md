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
[CLI](#cli) 
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
[bnot](#bnot) 
[tochar](#tochar) 
[slice](#slice) 
[mask](#mask) 
[of](#of) 
[range](#range) 
[mutget](#mutget) 
[get](#get) 
[KB](#kb) 
[MB](#mb) 
[GB](#gb) 
[alloc](#alloc) 
[resize](#resize) 
[last](#last) 
[len](#len) 
[new](#new) 
[bucket\_contents](#bucket\_contents) 
[bucket](#bucket) 
[arena](#arena) 
[allocated](#allocated) 
[status](#status) 
[circular](#circular) 
[list](#list) 
[unsafe\_alloc](#unsafe\_alloc) 
[at](#at) 
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
[ok](#ok) 
[WHICHERR](#whicherr) 
[printf](#printf) 
[os\_name](#os\_name) 
[argument](#argument) 
[args](#args) 
[arg\_exists](#arg\_exists) 
[arg\_after](#arg\_after) 
[breakpoint](#breakpoint) 
[pclose](#pclose) 
[popen](#popen) 
[open](#open) 
[chunk](#chunk) 
[line](#line) 
[system\_return](#system\_return) 
[safe](#safe) 
[system](#system) 
[write](#write) 
[terminal](#terminal) 
[File](#file) 
[to\_start](#to\_start) 
[to\_end](#to\_end) 
[seek](#seek) 
[position](#position) 
[raw\_print](#raw\_print) 
[string\_pair](#string\_pair) 
[is\_dir](#is\_dir) 
[create\_dir](#create\_dir) 
[is\_file](#is\_file) 
[wait\_file](#wait\_file) 
[remove](#remove) 
[closedir](#closedir) 
[raw\_entry](#raw\_entry) 
[entry](#entry) 
[raw\_get](#raw\_get) 
[rotl](#rotl) 
[splitmix64](#splitmix64) 
[Rand](#rand) 
[next](#next) 
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
[iter](#iter) 
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
[bucket\_or\_new](#bucket\_or\_new) 
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
[lane](#lane) 
[pipe\_data](#pipe\_data) 
[pipe](#pipe) 
[unsafe\_pipe\_lock](#unsafe\_pipe\_lock) 
[unsafe\_pipe\_unlock](#unsafe\_pipe\_unlock) 
[unsafe\_pipe\_own](#unsafe\_pipe\_own) 
[unsafe\_pipe\_disown](#unsafe\_pipe\_disown) 
[unsafe\_spawn](#unsafe\_spawn) 
[join](#join) 
[cpu](#cpu) 
[growing\_thread\_pool](#growing\_thread\_pool) 
[thread](#thread) 
[unsafe\_pipe\_data\_match](#unsafe\_pipe\_data\_match) 
[unsafe\_pipe\_data\_mutex\_init](#unsafe\_pipe\_data\_mutex\_init) 
[pipe\_data\_alloc](#pipe\_data\_alloc) 
[shared](#shared) 
[unsafe\_blob](#unsafe\_blob) 
[blob](#blob) 
[as](#as) 
[find\_compatible\_size](#find\_compatible\_size) 
[realloc](#realloc) 
[free](#free) 
[zero](#zero) 
[dereference\_ptr](#dereference\_ptr) 
[color](#color) 
[size](#size) 
[unsafe\_open\_window](#unsafe\_open\_window) 
[window](#window) 
[WINDOW](#window) 
[is\_open](#is\_open) 
[unsafe\_begin\_drawing](#unsafe\_begin\_drawing) 
[unsafe\_end\_drawing](#unsafe\_end\_drawing) 
[draw](#draw) 
[clear](#clear) 
[text](#text) 
[sleep](#sleep) 
[TextureData](#texturedata) 
[Texture](#texture) 
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
[restore\_stdout](#restore\_stdout) 
[stdout\_to\_err](#stdout\_to\_err) 
[assert](#assert) 
[test](#test) 
[time](#time) 
</div>

# cstr
### cstr - constant string
*Defined in: builtins line 1*

```rust
cstr
```

### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 218*

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
*Defined in: std/core/string.s line 218*

```rust
cstr(unsafe_temp {tag, cstr cstr, str}) -> (cstr)
```

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 218*

```rust
cstr(unsafe_temp {tag, cstr cstr, str}) -> (cstr)
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
cstr(last_error) -> (cstr)
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
int
```

Represents values in the range `2^-63 to 2^63-1`.

### int - cast to int
*Defined in: std/core/convert.s line 75*

```rust
int(bits {tag, nat value}) -> (int)
```

Converts a bit representation to the corresponding integer.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### int - cast to int
*Defined in: std/core/convert.s line 27*

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
*Defined in: std/core/convert.s line 27*

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
*Defined in: std/core/convert.s line 27*

```rust
int(float) -> (int)
```

May lose information due to truncating.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 7

</details>


### int - converts a string to an integer
*Defined in: std/core/convertstr.s line 150*

```rust
int(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 604

</details>

<details><summary>Potential errors</summary>

2. null pointer
35. invalid int conversion from empty string
36. invalid int conversion from string with only a sign
37. invalid integer int from non-number string
22. out of bounds
</details>


### int - converts a string to an integer
*Defined in: std/core/convertstr.s line 150*

```rust
int(cstr) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 58
- Transpiled C size: 598

</details>

<details><summary>Potential errors</summary>

2. null pointer
35. invalid int conversion from empty string
36. invalid int conversion from string with only a sign
37. invalid integer int from non-number string
22. out of bounds
</details>


### int - reads an integer from the console
*Defined in: std/core/convertstr.s line 36*

```rust
int(console {tag}) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 50
- Transpiled C size: 527

</details>

<details><summary>Potential errors</summary>

32. user input was not a float
2. null pointer
22. out of bounds
31. unexpected end of console read
</details>


# nat
### nat - an unsigned integer value
*Defined in: builtins line 1*

```rust
nat
```

Represents values in the range `0 to 2^64-1`.

### nat - retrieved unsigned number from lesser-bit unsigned number
*Defined in: std/core/convert.s line 170*

```rust
nat(nat32) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat - retrieved unsigned number from lesser-bit unsigned number
*Defined in: std/core/convert.s line 170*

```rust
nat(nat16) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat - retrieved unsigned number from lesser-bit unsigned number
*Defined in: std/core/convert.s line 170*

```rust
nat(nat8) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 70*

```rust
nat(bits {tag, nat value}) -> (nat)
```

Converts a bit representation to the corresponding natural number.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 35*

```rust
nat(nat) -> (nat)
```

Converting to natural numbers loses information.
 Fails on negative inputs to guard against assumption errors.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 7

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 35*

```rust
nat(int) -> (nat)
```

Converting to natural numbers loses information.
 Fails on negative inputs to guard against assumption errors.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

</details>

<details><summary>Potential errors</summary>

8. cannot convert negative int to nat
</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 35*

```rust
nat(float) -> (nat)
```

Converting to natural numbers loses information.
 Fails on negative inputs to guard against assumption errors.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

</details>

<details><summary>Potential errors</summary>

7. cannot convert negative float to nat
</details>


### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s line 173*

```rust
nat(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 329

</details>

<details><summary>Potential errors</summary>

2. null pointer
39. invalid nat conversion from non-number string
38. invalid nat conversion from empty string
22. out of bounds
</details>


### nat - converts a string to an unsigned integer
*Defined in: std/core/convertstr.s line 173*

```rust
nat(cstr) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 323

</details>

<details><summary>Potential errors</summary>

2. null pointer
39. invalid nat conversion from non-number string
38. invalid nat conversion from empty string
22. out of bounds
</details>


### nat - reads an unsigned integer from the console
*Defined in: std/core/convertstr.s line 60*

```rust
nat(console {tag}) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 390

</details>

<details><summary>Potential errors</summary>

33. user input was not a natural number
2. null pointer
22. out of bounds
</details>


# nat32
### nat32 - a 32-bit unsigned integer value
*Defined in: builtins line 1*

```rust
nat32
```

Represents values in the range `0 to 2^32-1`.

### nat32 - retrieved 32-bit unsigned number from lesser-bit unsigned number
*Defined in: std/core/convert.s line 175*

```rust
nat32(nat16) -> (nat32)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat32 - retrieved 32-bit unsigned number from lesser-bit unsigned number
*Defined in: std/core/convert.s line 175*

```rust
nat32(nat8) -> (nat32)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat32 - convert unsigned number to 32-bit unsigned number
*Defined in: std/core/convert.s line 162*

```rust
nat32(nat x, "truncate") -> (nat32)
```

The conversion truncates the given input, if it would not fit.
For example, 4294967295 becomes 1.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[x%4294967295]`*
### nat32 - convert unsigned number to 32-bit unsigned number
*Defined in: std/core/convert.s line 154*

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

11. nat value too large to pack in nat32
</details>


# nat16
### nat16 - a 16-bit unsigned integer value
*Defined in: builtins line 1*

```rust
nat16
```

Represents values in the range `0 to 2^16-1`.

### nat16 - retrieved 16-bit unsigned number from lesser-bit unsigned number
*Defined in: std/core/convert.s line 180*

```rust
nat16(nat8) -> (nat16)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat16 - convert unsigned number to 16-bit unsigned number
*Defined in: std/core/convert.s line 147*

```rust
nat16(nat x, "truncate") -> (nat16)
```

This conversion truncates the given input, if it would not fit.
For example, 65536 becomes 1.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### nat16 - convert unsigned number to 16-bit unsigned number
*Defined in: std/core/convert.s line 139*

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

10. nat value too large to pack in nat16
</details>


# nat8
### nat8 - a 8-bit unsigned integer value
*Defined in: builtins line 1*

```rust
nat8
```

Represents values in the range `0 to 255`.

### nat8 - convert a character to 8-bit unsigned number
*Defined in: std/core/convert.s line 132*

```rust
nat8(char) -> (nat8)
```

The conversion checks whether the previous value fits in the new one.
If it does not, this operation can fail.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat8 - convert unsigned number to 8-bit unsigned number
*Defined in: std/core/convert.s line 120*

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

9. nat value too large to pack in nat8
</details>


# float
### float
*Defined in: builtins line 1*

```rust
float
```

### float - cast to float
*Defined in: std/core/convert.s line 81*

```rust
float(bits {tag, nat value}) -> (float)
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

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### float - cast to float
*Defined in: std/core/convert.s line 20*

```rust
float(int) -> (float)
```

May lose information because floats are not exact representation of all integers.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### float - cast to float
*Defined in: std/core/convert.s line 20*

```rust
float(float) -> (float)
```

Serves as a tautology function for code that parses on multiple number types.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### float - converts a string to a float
*Defined in: std/core/convertstr.s line 185*

```rust
float(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 89
- Transpiled C size: 928

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
40. invalid float conversion from empty string
41. invalid float conversion from string with only a sign
42. invalid float conversion from non-number string
43. invalid float conversion from string without a value after the dot
</details>


### float - converts a string to a float
*Defined in: std/core/convertstr.s line 185*

```rust
float(cstr) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 85
- Transpiled C size: 922

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
40. invalid float conversion from empty string
41. invalid float conversion from string with only a sign
42. invalid float conversion from non-number string
43. invalid float conversion from string without a value after the dot
</details>


### float - reads a float from the console
*Defined in: std/core/convertstr.s line 80*

```rust
float(console {tag}) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 67
- Transpiled C size: 722

</details>

<details><summary>Potential errors</summary>

32. user input was not a float
2. null pointer
22. out of bounds
31. unexpected end of console read
</details>


# bool
### bool - boolean value
*Defined in: builtins line 1*

```rust
bool
```

Can only be `true` or `false`.

# err
### err
*Defined by the compiler*

```rust
err
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
char
```

Represents characters in the numeric range `0 to 255`.

### char - treat as character
*Defined in: std/core/string.s line 115*

```rust
char(cstr) -> (char)
```

The first character of a string is extracted,
for example to write `c = char "C"`.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 20

</details>


### char - treat as character
*Defined in: std/core/string.s line 109*

```rust
char(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (char)
```

The first character of a string is extracted,
for example to write `c = char str "C"`.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### char
*Defined in: std/core/convertstr.s line 24*

```rust
char(console {tag}) -> (char)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

31. unexpected end of console read
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
*Defined in: std/core/numbers.s line 54*

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
*Defined in: std/core/numbers.s line 38*

```rust
eq(last_error x, last_error y) -> (bool)
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
*Defined in: std/core/string.s line 295*

```rust
eq(cstr x, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 77

</details>


### eq - equals
*Defined in: std/core/string.s line 289*

```rust
eq(str, cstr y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 77

</details>


### eq - equals
*Defined in: std/core/string.s line 261*

```rust
eq(str, str) -> (bool)
```

This implementation avoids indirection by checking for the first
string character first, which will typically be stored only one
indirection away instead of two, and is thus very friendly to
CPU cache usage when manipulating strings.

It is interesting to consider what happens
should the memory surfaces where strings are stored be corrupted
by replacing string data while the string is still used in code
(this is a logical bug but memory-safe). In that case, two strings
could have the exact same contents but be deemed not equal to
each other. This contradiction occurs only when active strings
are overwritten with new data, and is in fact a good way to check
for logical inconsistencies. In the rare cases where you want
to guarantee the outcome of this equality under data corruptions
use `eq(revalidate x, revalidate y)`
to re-retrieve the first characters. This is still faster than
full comparison of large strings, given that most string comparisons
yield false.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 105

</details>


### eq - equals
*Defined in: std/core/string.s line 252*

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

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
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

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
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

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
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

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
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

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
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

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
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


# neq
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
*Defined in: std/core/numbers.s line 46*

```rust
neq(last_error x, last_error y) -> (bool)
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
*Defined in: std/core/numbers.s line 32*

```rust
neq(nat x, nat y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### neq - not equal
*Defined in: std/core/numbers.s line 32*

```rust
neq(int x, int y) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### neq - not equal
*Defined in: std/core/numbers.s line 32*

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
*Defined in: std/core/string.s line 301*

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
*Defined in: std/core/string.s line 301*

```rust
neq(cstr x, str) -> (bool)
```

Negates the outcome of equality checks between cstr and strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 27

</details>


### neq - not equals
*Defined in: std/core/string.s line 301*

```rust
neq(str, cstr y) -> (bool)
```

Negates the outcome of equality checks between cstr and strings.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 27

</details>


### neq - not equals
*Defined in: std/core/string.s line 301*

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

- Level of abstraction: 0 to 10 (0 are builtins or raw C code, 1 calls those, etc.)
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

- Level of abstraction: 0 to 10 (0 are builtins or raw C code, 1 calls those, etc.)
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

- Level of abstraction: 0 to 10 (0 are builtins or raw C code, 1 calls those, etc.)
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

- Level of abstraction: 0 to 10 (0 are builtins or raw C code, 1 calls those, etc.)
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

- Level of abstraction: 0 to 10 (0 are builtins or raw C code, 1 calls those, etc.)
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

- Level of abstraction: 0 to 10 (0 are builtins or raw C code, 1 calls those, etc.)
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
nat
```

Represents values in the range `0 to 2^64-1`.

### float
*Defined in: builtins line 1*

```rust
float
```

### int - a signed integer value
*Defined in: builtins line 1*

```rust
int
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
*Defined in: std/core/numbers.s line 60*

```rust
neg(nat) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 11

</details>


### neg - negative of a number
*Defined in: std/core/numbers.s line 60*

```rust
neg(int) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 11

</details>


### neg - negative of a number
*Defined in: std/core/numbers.s line 60*

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
*Defined in: std/core/numbers.s line 65*

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
*Defined in: std/core/numbers.s line 65*

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
*Defined in: std/core/numbers.s line 65*

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
*Defined in: std/unsafe.s line 66*

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
*Defined in: std/core/string.s line 458*

```rust
add(edit arena, cstr _s1, cstr _s2) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

The result is placed on an allocator effect CHARS.
This implementation ensures that consecutively allocated strings, or
adding to strings placed at the end of buffers, does not needlessly
copy memory. This way, consecutive additions do not copy the previous
result before appending to it. For example, consider the following:
```python
import std.core
def main()
    CLI = edit console()
    CHARS = edit arena alloc 10
    s1 = copy 123
    s2 = copy 456
    s3 = s1+s2
    print s3+copy(78)+copy(9)
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
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 458*

```rust
add(edit arena, cstr _s1, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

The result is placed on an allocator effect CHARS.
This implementation ensures that consecutively allocated strings, or
adding to strings placed at the end of buffers, does not needlessly
copy memory. This way, consecutive additions do not copy the previous
result before appending to it. For example, consider the following:
```python
import std.core
def main()
    CLI = edit console()
    CHARS = edit arena alloc 10
    s1 = copy 123
    s2 = copy 456
    s3 = s1+s2
    print s3+copy(78)+copy(9)
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
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 458*

```rust
add(edit arena, str, cstr _s2) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

The result is placed on an allocator effect CHARS.
This implementation ensures that consecutively allocated strings, or
adding to strings placed at the end of buffers, does not needlessly
copy memory. This way, consecutive additions do not copy the previous
result before appending to it. For example, consider the following:
```python
import std.core
def main()
    CLI = edit console()
    CHARS = edit arena alloc 10
    s1 = copy 123
    s2 = copy 456
    s3 = s1+s2
    print s3+copy(78)+copy(9)
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
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 458*

```rust
add(edit arena, str, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

The result is placed on an allocator effect CHARS.
This implementation ensures that consecutively allocated strings, or
adding to strings placed at the end of buffers, does not needlessly
copy memory. This way, consecutive additions do not copy the previous
result before appending to it. For example, consider the following:
```python
import std.core
def main()
    CLI = edit console()
    CHARS = edit arena alloc 10
    s1 = copy 123
    s2 = copy 456
    s3 = s1+s2
    print s3+copy(78)+copy(9)
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
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(edit list, cstr _s1, cstr _s2) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
18. reallocation failed
21. cannot resize an unallocated or freed buffer
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(edit list, cstr _s1, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
18. reallocation failed
21. cannot resize an unallocated or freed buffer
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(edit list, str, cstr _s2) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
18. reallocation failed
21. cannot resize an unallocated or freed buffer
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(edit list, str, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
18. reallocation failed
21. cannot resize an unallocated or freed buffer
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(edit circular, cstr _s1, cstr _s2) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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

23. arena is out of space
24. does not fit in circular arena
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(edit circular, cstr _s1, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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

23. arena is out of space
24. does not fit in circular arena
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(edit circular, str, cstr _s2) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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

23. arena is out of space
24. does not fit in circular arena
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(edit circular, str, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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

23. arena is out of space
24. does not fit in circular arena
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(edit bucket, cstr _s1, cstr _s2) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- SSA variables: 99
- Transpiled C size: 471

</details>

<details><summary>Potential errors</summary>

2. null pointer
17. allocation failed
18. reallocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(edit bucket, cstr _s1, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- SSA variables: 103
- Transpiled C size: 477

</details>

<details><summary>Potential errors</summary>

2. null pointer
17. allocation failed
18. reallocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(edit bucket, str, cstr _s2) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- SSA variables: 103
- Transpiled C size: 477

</details>

<details><summary>Potential errors</summary>

2. null pointer
17. allocation failed
18. reallocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(edit bucket, str, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- SSA variables: 107
- Transpiled C size: 483

</details>

<details><summary>Potential errors</summary>

2. null pointer
17. allocation failed
18. reallocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(new CHARS, cstr _s1, cstr _s2) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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

17. allocation failed
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(new CHARS, cstr _s1, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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

17. allocation failed
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(new CHARS, str, cstr _s2) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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

17. allocation failed
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### add - concatenate two strings
*Defined in: std/core/string.s line 432*

```rust
add(new CHARS, str, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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

17. allocation failed
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### add - vector addition
*Defined in: std/sci/vec.s line 120*

```rust
add(edit circular, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 49

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 120*

```rust
add(edit arena, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 49

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 120*

```rust
add(edit bucket, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 37

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 120*

```rust
add(new FLOATS, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 110*

```rust
add(edit circular, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 216

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 110*

```rust
add(edit circular, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 254

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
71. different vector sizes
24. does not fit in circular arena
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 110*

```rust
add(edit arena, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 216

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 110*

```rust
add(edit arena, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 254

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
71. different vector sizes
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 110*

```rust
add(edit bucket, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 203

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 110*

```rust
add(edit bucket, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 241

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
71. different vector sizes
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 110*

```rust
add(new FLOATS, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 201

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### add - vector addition
*Defined in: std/sci/vec.s line 110*

```rust
add(new FLOATS, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 239

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
71. different vector sizes
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


# mul
### mul - multiply with
*Defined in: std/core/numbers.s line 72*

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
*Defined in: std/core/numbers.s line 72*

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
*Defined in: std/core/numbers.s line 72*

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
*Defined in: std/sci/vec.s line 154*

```rust
mul(edit circular, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 49

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 154*

```rust
mul(edit arena, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 49

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 154*

```rust
mul(edit bucket, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 37

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 154*

```rust
mul(new FLOATS, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 144*

```rust
mul(edit circular, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 216

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 144*

```rust
mul(edit circular, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 254

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
71. different vector sizes
24. does not fit in circular arena
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 144*

```rust
mul(edit arena, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 216

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 144*

```rust
mul(edit arena, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 254

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
71. different vector sizes
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 144*

```rust
mul(edit bucket, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 203

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 144*

```rust
mul(edit bucket, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 241

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
71. different vector sizes
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 144*

```rust
mul(new FLOATS, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 201

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### mul - vector multiplication
*Defined in: std/sci/vec.s line 144*

```rust
mul(new FLOATS, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 239

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
71. different vector sizes
</details>


### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 79*

```rust
mul(edit circular, coo, mat) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 521

</details>

<details><summary>Potential errors</summary>

2. null pointer
75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
78. row out of bounds
79. column out of bounds
82. inner dimensions must agree
24. does not fit in circular arena
</details>


### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 79*

```rust
mul(edit arena, coo, mat) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 521

</details>

<details><summary>Potential errors</summary>

2. null pointer
75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
78. row out of bounds
79. column out of bounds
82. inner dimensions must agree
23. arena is out of space
</details>


### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 79*

```rust
mul(edit bucket, coo, mat) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 57
- Transpiled C size: 509

</details>

<details><summary>Potential errors</summary>

2. null pointer
78. row out of bounds
79. column out of bounds
17. allocation failed
82. inner dimensions must agree
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mul - sparse*dense matrix multiplication
*Defined in: std/sci/coo.s line 79*

```rust
mul(new FLOATS, coo, mat) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 506

</details>

<details><summary>Potential errors</summary>

2. null pointer
78. row out of bounds
79. column out of bounds
17. allocation failed
82. inner dimensions must agree
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 69*

```rust
mul(edit circular, vec, coo) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

*Warning: The expression `self(v)*m` yields wrong values

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 46
- Transpiled C size: 388

</details>

<details><summary>Potential errors</summary>

81. vector length must match matrix rows
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
22. out of bounds
24. does not fit in circular arena
</details>


### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 69*

```rust
mul(edit arena, vec, coo) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

*Warning: The expression `self(v)*m` yields wrong values

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 46
- Transpiled C size: 388

</details>

<details><summary>Potential errors</summary>

81. vector length must match matrix rows
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
22. out of bounds
</details>


### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 69*

```rust
mul(edit bucket, vec, coo) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

*Warning: The expression `self(v)*m` yields wrong values

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 375

</details>

<details><summary>Potential errors</summary>

81. vector length must match matrix rows
2. null pointer
17. allocation failed
22. out of bounds
</details>


### mul - vector*sparse matrix multiplication
*Defined in: std/sci/coo.s line 69*

```rust
mul(new FLOATS, vec, coo) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

*Warning: The expression `self(v)*m` yields wrong values

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 373

</details>

<details><summary>Potential errors</summary>

81. vector length must match matrix rows
2. null pointer
17. allocation failed
22. out of bounds
</details>


### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 61*

```rust
mul(edit circular, coo, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 388

</details>

<details><summary>Potential errors</summary>

80. matrix columns must match vector length
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
22. out of bounds
24. does not fit in circular arena
</details>


### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 61*

```rust
mul(edit arena, coo, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 388

</details>

<details><summary>Potential errors</summary>

80. matrix columns must match vector length
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
22. out of bounds
</details>


### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 61*

```rust
mul(edit bucket, coo, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 375

</details>

<details><summary>Potential errors</summary>

80. matrix columns must match vector length
17. allocation failed
2. null pointer
22. out of bounds
</details>


### mul - sparse matrix*vector multiplication
*Defined in: std/sci/coo.s line 61*

```rust
mul(new FLOATS, coo, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 373

</details>

<details><summary>Potential errors</summary>

80. matrix columns must match vector length
17. allocation failed
2. null pointer
22. out of bounds
</details>


### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 124*

```rust
mul(edit circular, mat, mat) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 85
- Transpiled C size: 599

</details>

<details><summary>Potential errors</summary>

2. null pointer
82. inner dimensions must agree
24. does not fit in circular arena
75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
78. row out of bounds
79. column out of bounds
</details>


### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 124*

```rust
mul(edit arena, mat, mat) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 85
- Transpiled C size: 599

</details>

<details><summary>Potential errors</summary>

2. null pointer
82. inner dimensions must agree
23. arena is out of space
75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
78. row out of bounds
79. column out of bounds
</details>


### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 124*

```rust
mul(edit bucket, mat, mat) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 80
- Transpiled C size: 587

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
82. inner dimensions must agree
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
78. row out of bounds
79. column out of bounds
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mul - matrix-matrix multiplication
*Defined in: std/sci/mat.s line 124*

```rust
mul(new FLOATS, mat, mat) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 584

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
82. inner dimensions must agree
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
78. row out of bounds
79. column out of bounds
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 112*

```rust
mul(edit circular, vec, mat) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 440

</details>

<details><summary>Potential errors</summary>

81. vector length must match matrix rows
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
22. out of bounds
24. does not fit in circular arena
</details>


### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 112*

```rust
mul(edit arena, vec, mat) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 440

</details>

<details><summary>Potential errors</summary>

81. vector length must match matrix rows
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
22. out of bounds
</details>


### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 112*

```rust
mul(edit bucket, vec, mat) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 55
- Transpiled C size: 427

</details>

<details><summary>Potential errors</summary>

81. vector length must match matrix rows
2. null pointer
17. allocation failed
22. out of bounds
</details>


### mul - vector-matrix multiplication
*Defined in: std/sci/mat.s line 112*

```rust
mul(new FLOATS, vec, mat) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 54
- Transpiled C size: 425

</details>

<details><summary>Potential errors</summary>

81. vector length must match matrix rows
2. null pointer
17. allocation failed
22. out of bounds
</details>


### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 100*

```rust
mul(edit circular, mat, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 440

</details>

<details><summary>Potential errors</summary>

80. matrix columns must match vector length
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
22. out of bounds
24. does not fit in circular arena
</details>


### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 100*

```rust
mul(edit arena, mat, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 440

</details>

<details><summary>Potential errors</summary>

80. matrix columns must match vector length
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
22. out of bounds
</details>


### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 100*

```rust
mul(edit bucket, mat, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 55
- Transpiled C size: 427

</details>

<details><summary>Potential errors</summary>

80. matrix columns must match vector length
17. allocation failed
2. null pointer
22. out of bounds
</details>


### mul - matrix-vector multiplication
*Defined in: std/sci/mat.s line 100*

```rust
mul(new FLOATS, mat, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs an allocator for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 54
- Transpiled C size: 425

</details>

<details><summary>Potential errors</summary>

80. matrix columns must match vector length
17. allocation failed
2. null pointer
22. out of bounds
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
*Defined in: std/core/numbers.s line 79*

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
*Defined in: std/core/numbers.s line 79*

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
*Defined in: std/core/numbers.s line 79*

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
*Defined in: std/core/numbers.s line 79*

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
*Defined in: std/core/numbers.s line 79*

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
*Defined in: std/core/numbers.s line 79*

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
*Defined in: std/sci/vec.s line 190*

```rust
div(edit circular, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 217

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
24. does not fit in circular arena
</details>


### div - vector division
*Defined in: std/sci/vec.s line 190*

```rust
div(edit arena, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 217

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
</details>


### div - vector division
*Defined in: std/sci/vec.s line 190*

```rust
div(edit bucket, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 204

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
4. division by zero
</details>


### div - vector division
*Defined in: std/sci/vec.s line 190*

```rust
div(new FLOATS, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 202

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
4. division by zero
</details>


### div - vector division
*Defined in: std/sci/vec.s line 179*

```rust
div(edit circular, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 231

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
24. does not fit in circular arena
</details>


### div - vector division
*Defined in: std/sci/vec.s line 179*

```rust
div(edit circular, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 269

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
71. different vector sizes
24. does not fit in circular arena
</details>


### div - vector division
*Defined in: std/sci/vec.s line 179*

```rust
div(edit arena, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 231

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
</details>


### div - vector division
*Defined in: std/sci/vec.s line 179*

```rust
div(edit arena, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 269

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
71. different vector sizes
</details>


### div - vector division
*Defined in: std/sci/vec.s line 179*

```rust
div(edit bucket, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 218

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
4. division by zero
</details>


### div - vector division
*Defined in: std/sci/vec.s line 179*

```rust
div(edit bucket, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 256

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
4. division by zero
71. different vector sizes
</details>


### div - vector division
*Defined in: std/sci/vec.s line 179*

```rust
div(new FLOATS, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 216

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
4. division by zero
</details>


### div - vector division
*Defined in: std/sci/vec.s line 179*

```rust
div(new FLOATS, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 254

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
4. division by zero
71. different vector sizes
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


# mod
### mod - modulo by
*Defined in: std/core/numbers.s line 92*

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
*Defined in: std/core/numbers.s line 92*

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
*Defined in: std/core/numbers.s line 100*

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
*Defined in: std/core/numbers.s line 100*

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
*Defined in: std/core/numbers.s line 100*

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
*Defined in: std/core/numbers.s line 107*

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
*Defined in: std/core/numbers.s line 107*

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
*Defined in: std/core/numbers.s line 107*

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


# le
### le - less than or equal to
*Defined in: std/core/numbers.s line 114*

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
*Defined in: std/core/numbers.s line 114*

```rust
le(int x, int y) -> (bool)
```

Compares two numbers of the same type. This is an overload for the <= operator.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 3 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### le - less than or equal to
*Defined in: std/core/numbers.s line 114*

```rust
le(float x, float y) -> (bool)
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
*Defined in: std/core/numbers.s line 121*

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
*Defined in: std/core/numbers.s line 121*

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
*Defined in: std/core/numbers.s line 121*

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
*Defined in: std/core/numbers.s line 159*

```rust
sub(nat x, nat y, "test_smaller") -> (nat)
```

Subtracts two natural numbers without underflow check. This is an overload for the - operator,
for example used like below. This overload fails but uses an `expected_fail` rather than typical
failure so that compiling in `--debug` mode does not show an error message.
```python
import std.core
def main(on CLI)
    if try result=0-(1 test_smaller): print result
    else: print "would be negative"
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 32

</details>

<details><summary>Potential errors</summary>

6. nat subtraction would yield a negative
</details>


### sub - subtract by
*Defined in: std/core/numbers.s line 146*

```rust
sub(nat x, nat y, "assume_smaller") -> (nat)
```

Subtracts two natural numbers without underflow check. This is an overload for the - operator,
for example used like below. This overload never fails and instead adds 0xFFFFFFFFFFFFFFFF to
the result if it would produce a negative.
```python
import std.core
def main(on CLI)
    print 0-(1 assume_smaller)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 9

</details>


### sub - subtract by
*Defined in: std/core/numbers.s line 128*

```rust
sub(nat x, nat y) -> (nat)
```

Subtracts two numbers of the same type. This is an overload for the - operator.
Natural numbers are safeguarded against acquiring negative results, which would overflow.
There exist overloaded variations of natural number substraction that skip or completely
remove the failure mode. For example, this variation overflows:
```python
import std.core
def main(on CLI)
    print 5-3
    print 0-(1 assume_smaller)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

</details>

<details><summary>Potential errors</summary>

6. nat subtraction would yield a negative
</details>


### sub - subtract by
*Defined in: std/core/numbers.s line 128*

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
*Defined in: std/core/numbers.s line 128*

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
*Defined in: std/sci/vec.s line 135*

```rust
sub(edit circular, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 206

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 135*

```rust
sub(edit arena, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 206

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 135*

```rust
sub(edit bucket, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 193

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 135*

```rust
sub(new FLOATS, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 31
- Transpiled C size: 191

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 125*

```rust
sub(edit circular, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 125*

```rust
sub(edit circular, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
71. different vector sizes
24. does not fit in circular arena
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 125*

```rust
sub(edit arena, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 225

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 125*

```rust
sub(edit arena, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 263

</details>

<details><summary>Potential errors</summary>

2. null pointer
23. arena is out of space
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
71. different vector sizes
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 125*

```rust
sub(edit bucket, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 31
- Transpiled C size: 212

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 125*

```rust
sub(edit bucket, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 250

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
71. different vector sizes
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 125*

```rust
sub(new FLOATS, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 210

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### sub - vector subtraction
*Defined in: std/sci/vec.s line 125*

```rust
sub(new FLOATS, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 248

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
71. different vector sizes
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
*Defined in: std/core/numbers.s line 174*

```rust
pow(nat x, nat y) -> (mut nat)
```

Exponentiates a natural number by another.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 84

</details>


### pow - exponentiate by
*Defined in: std/sci/math.s line 98*

```rust
pow(float x, float y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 12

</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 170*

```rust
pow(new FLOATS, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 191

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 160*

```rust
pow(edit circular, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 216

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 160*

```rust
pow(edit circular, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 254

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
71. different vector sizes
24. does not fit in circular arena
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 160*

```rust
pow(edit arena, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 216

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 160*

```rust
pow(edit arena, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 254

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
71. different vector sizes
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 160*

```rust
pow(edit bucket, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 203

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 160*

```rust
pow(edit bucket, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 241

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
71. different vector sizes
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 160*

```rust
pow(new FLOATS, vec, float v2) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 201

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 160*

```rust
pow(new FLOATS, vec, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 239

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
71. different vector sizes
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 170*

```rust
pow(edit circular, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 206

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 170*

```rust
pow(edit arena, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 206

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
</details>


### pow - vector exponentiation
*Defined in: std/sci/vec.s line 170*

```rust
pow(edit bucket, float v1, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS allocator effect to store the result.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 193

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


# console
### console - references the system console unsafely
*Defined in: std/core/print.s line 36*

```rust
console("unsafe") -> (mut console {tag})
```

This is convenient for print debugging by writing `console(type "unsafe").print ...`
without needing to evoke an effect to pass the normally singleton console.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 11

</details>


### console - references the system console
*Defined in: std/core/print.s line 20*

```rust
console() -> (console {tag})
```

As a singleton, the console should usually be instantiated
in the `main()` function and then passed to dependent calls, for example via an
an effect for convenience. Standard library print functions provide the CLI effect
and you can propagate to this by prepending `on CLI` to function
arguments.
The console is a zero-cost abstraction in that it does not transfer any data
but relies on singleton safety to synchronize io across threads.
Quickly print internals for debugging with `unsafe_console()`.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


# CLI
### console - references the system console
*Defined in: std/core/print.s line 20*

```rust
console() -> (console {tag})
```

As a singleton, the console should usually be instantiated
in the `main()` function and then passed to dependent calls, for example via an
an effect for convenience. Standard library print functions provide the CLI effect
and you can propagate to this by prepending `on CLI` to function
arguments.
The console is a zero-cost abstraction in that it does not transfer any data
but relies on singleton safety to synchronize io across threads.
Quickly print internals for debugging with `unsafe_console()`.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


# print
### print - prints a boolean
*Defined in: std/core/print.s line 98*

```rust
print(console CLI, false) -> () on CLI
```

Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 14

</details>


### print - prints a boolean
*Defined in: std/core/print.s line 98*

```rust
print(console CLI, false, cstr endl) -> () on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 10

</details>


### print - prints a boolean
*Defined in: std/core/print.s line 91*

```rust
print(console CLI, true) -> () on CLI
```

Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 14

</details>


### print - prints a boolean
*Defined in: std/core/print.s line 91*

```rust
print(console CLI, true, cstr endl) -> () on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 10

</details>


### print - prints a boolean
*Defined in: std/core/print.s line 84*

```rust
print(console CLI, bool value) -> () on CLI
```

Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 34

</details>


### print - prints a boolean
*Defined in: std/core/print.s line 84*

```rust
print(console CLI, bool value, cstr endl) -> () on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 30

</details>


### print - prints an unsigned integer
*Defined in: std/core/print.s line 77*

```rust
print(console CLI, nat value) -> () on CLI
```

Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 16

</details>


### print - prints an unsigned integer
*Defined in: std/core/print.s line 77*

```rust
print(console CLI, nat value, cstr endl) -> () on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 12

</details>


### print - prints an integer
*Defined in: std/core/print.s line 70*

```rust
print(console CLI, int value) -> () on CLI
```

Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 16

</details>


### print - prints an integer
*Defined in: std/core/print.s line 70*

```rust
print(console CLI, int value, cstr endl) -> () on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 12

</details>


### print - prints a float
*Defined in: std/core/print.s line 62*

```rust
print(console CLI, float value) -> () on CLI
```

To pre-specified 6 decimal digits.
Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 16

</details>


### print - prints a float
*Defined in: std/core/print.s line 62*

```rust
print(console CLI, float value, cstr endl) -> () on CLI
```

To pre-specified 6 decimal digits.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 12

</details>


### print - prints a cstr
*Defined in: std/core/print.s line 55*

```rust
print(console CLI, cstr value) -> () on CLI
```

Automatically ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 16

</details>


### print - prints a cstr
*Defined in: std/core/print.s line 55*

```rust
print(console CLI, cstr value, cstr endl) -> () on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 12

</details>


### print - flushes the print buffer on the console
*Defined in: std/core/print.s line 44*

```rust
print(console CLI, "flush") -> () on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 8

</details>


### print - print a character
*Defined in: std/core/string.s line 337*

```rust
print(console CLI, char c) -> () on CLI
```

Ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 16

</details>


### print - print a character
*Defined in: std/core/string.s line 337*

```rust
print(console CLI, char c, cstr endl) -> () on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 12

</details>


### print - print a string
*Defined in: std/core/string.s line 323*

```rust
print(console CLI, str) -> () on CLI
```

Ends the line too.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 20

</details>


### print - print a string
*Defined in: std/core/string.s line 323*

```rust
print(console CLI, str, cstr endl) -> () on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 16

</details>


### print
*Defined in: std/io/file.s line 163*

```rust
print(edit write, str) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 113

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### print
*Defined in: std/io/file.s line 163*

```rust
print(edit write, str, cstr endl) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 109

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### print
*Defined in: std/io/file.s line 163*

```rust
print(edit write, cstr text) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 107

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### print
*Defined in: std/io/file.s line 163*

```rust
print(edit write, cstr text, cstr endl) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 103

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### print
*Defined in: std/io/file.s line 163*

```rust
print(edit write, str) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 113

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### print
*Defined in: std/io/file.s line 163*

```rust
print(edit write, str, cstr endl) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 109

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### print
*Defined in: std/io/file.s line 163*

```rust
print(edit terminal, cstr text) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 107

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### print
*Defined in: std/io/file.s line 163*

```rust
print(edit terminal, cstr text, cstr endl) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 103

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### print
*Defined in: std/io/file.s line 163*

```rust
print(edit terminal, str) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 113

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### print
*Defined in: std/io/file.s line 163*

```rust
print(edit terminal, str, cstr endl) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 109

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### print - flushes file contents to the disk
*Defined in: std/io/file.s line 168*

```rust
print(edit write, "flush") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 40

</details>

<details><summary>Potential errors</summary>

60. failed to flush file contents
</details>


### print - flushes file contents to the disk
*Defined in: std/io/file.s line 168*

```rust
print(edit write, "flush") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 40

</details>

<details><summary>Potential errors</summary>

60. failed to flush file contents
</details>


### print
*Defined in: std/io/file.s line 163*

```rust
print(edit write, cstr text) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 107

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### print
*Defined in: std/io/file.s line 163*

```rust
print(edit write, cstr text, cstr endl) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 103

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### print - print a vector
*Defined in: std/sci/vec.s line 284*

```rust
print(console CLI, vec) -> () on CLI
```

Prints as a row, such as [ 1.0  2.0  3.0 ]

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 227

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### print - print a vector
*Defined in: std/sci/vec.s line 284*

```rust
print(console CLI, vec, cstr endl) -> () on CLI
```

Prints as a row, such as [ 1.0  2.0  3.0 ]

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 31
- Transpiled C size: 223

</details>

<details><summary>Potential errors</summary>

2. null pointer
</details>


### print - print sparse matrix
*Defined in: std/sci/coo.s line 95*

```rust
print(console CLI, coo) -> () on CLI
```

Prints it as coordinate as list: (i, j): v

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 185

</details>


### print - print sparse matrix
*Defined in: std/sci/coo.s line 95*

```rust
print(console CLI, coo, cstr endl) -> () on CLI
```

Prints it as coordinate as list: (i, j): v

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 181

</details>


### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s line 138*

```rust
print(console CLI, mat) -> () on CLI
```

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 88
- Transpiled C size: 843

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
</details>


### print - print a matrix with aligned brackets
*Defined in: std/sci/mat.s line 138*

```rust
print(console CLI, mat, cstr endl) -> () on CLI
```

single-row matrices stay on one line; taller ones get top/mid/bottom brackets

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 87
- Transpiled C size: 839

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
</details>


# nn
### nn - no new line
*Defined in: std/core/print.s line 48*

```rust
nn(nat) -> (nat value, cstr)
```

Given a value, creates a tuple of (value, "").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### nn - no new line
*Defined in: std/core/print.s line 48*

```rust
nn(int) -> (int value, cstr)
```

Given a value, creates a tuple of (value, "").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### nn - no new line
*Defined in: std/core/print.s line 48*

```rust
nn(float) -> (float value, cstr)
```

Given a value, creates a tuple of (value, "").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### nn - no new line
*Defined in: std/core/print.s line 48*

```rust
nn(cstr) -> (cstr value, cstr)
```

Given a value, creates a tuple of (value, "").
This enables the pattern 'print nn value'
to print without automatically adding a new line.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### nn - no new line
*Defined in: std/core/string.s line 425*

```rust
nn(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (str, cstr)
```

Given a value, creates a tuple of (value, "").
This enables the pattern 'print nn value'
to print without a new line.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 7

</details>


### nn - no new line
*Defined in: std/sci/vec.s line 277*

```rust
nn(vec {tag, float ptr unsafe_ptr, nat pos, nat length}) -> (vec, cstr)
```

Given a value, creates a tuple of (value, "").
This enables the pattern 'print nn value'
to print without a new line.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 7

</details>


# supports\_ansi
### supports\_ansi
*Defined in: std/core/print.s line 105*

```rust
supports_ansi(console {tag}) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 9

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[supports_ansi()]`*
# colors
### colors
*Defined in: std/core/print.s line 110*

```rust
colors(console {tag}) -> (colors {tag, console CLI, bool initialized})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 13

</details>


<details><summary>defered calls</summary>

```rust
```
</details>

# set
### set
*Defined in: std/core/print.s line 145*

```rust
set(colors, "bg_red") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 143*

```rust
set(colors, "bright_white") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 141*

```rust
set(colors, "bright_cyan") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 139*

```rust
set(colors, "bright_magenta") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 137*

```rust
set(colors, "bright_blue") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 135*

```rust
set(colors, "bright_yellow") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 133*

```rust
set(colors, "bright_green") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 131*

```rust
set(colors, "bright_red") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 129*

```rust
set(colors, "black") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 127*

```rust
set(colors, "white") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 125*

```rust
set(colors, "cyan") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 123*

```rust
set(colors, "magenta") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 121*

```rust
set(colors, "blue") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 119*

```rust
set(colors, "yellow") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 117*

```rust
set(colors, "green") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 115*

```rust
set(colors, "red") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 183*

```rust
set(colors, "reset_underline") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 181*

```rust
set(colors, "reset_bold") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 179*

```rust
set(colors, "reset_bg") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 177*

```rust
set(colors, "reset_color") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 175*

```rust
set(colors, "reset") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 173*

```rust
set(colors, "strikethrough") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 171*

```rust
set(colors, "reverse") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 169*

```rust
set(colors, "blink") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 167*

```rust
set(colors, "underline") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 165*

```rust
set(colors, "italic") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 163*

```rust
set(colors, "dim") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 161*

```rust
set(colors, "bold") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 159*

```rust
set(colors, "bg_black") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 157*

```rust
set(colors, "bg_white") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 155*

```rust
set(colors, "bg_cyan") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 153*

```rust
set(colors, "bg_magenta") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 151*

```rust
set(colors, "bg_blue") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 149*

```rust
set(colors, "bg_yellow") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


### set
*Defined in: std/core/print.s line 147*

```rust
set(colors, "bg_green") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 14

</details>


# exists
### exists - checks that a pointer exists
*Defined in: std/core/convert.s line 44*

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
*Defined in: std/graphics.s line 165*

```rust
exists(Texture {tag, nat,float,float,nat,nat[]}) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 31

</details>


# bits
### bits - converts a character to its bit representation
*Defined in: std/core/convert.s line 189*

```rust
bits(char) -> (bits {tag, nat value})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### bits - converts unsigned numbers to bits
*Defined in: std/core/convert.s line 185*

```rust
bits(nat32) -> (bits {tag, nat value})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### bits - converts unsigned numbers to bits
*Defined in: std/core/convert.s line 185*

```rust
bits(nat16) -> (bits {tag, nat value})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### bits - converts unsigned numbers to bits
*Defined in: std/core/convert.s line 185*

```rust
bits(nat8) -> (bits {tag, nat value})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 19

</details>


### bits - bit representation
*Defined in: std/core/convert.s line 62*

```rust
bits(float) -> (bits {tag, nat value})
```

Retrieves the bit representation of a number of shift
arithmetics and bitwise operations.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 26

</details>


### bits - bit representation
*Defined in: std/core/convert.s line 55*

```rust
bits(int) -> (bits {tag, nat value})
```

Retrieves the bit representation of a number of shift
arithmetics and bitwise operations.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 15

</details>


### bits - bit representation
*Defined in: std/core/convert.s line 49*

```rust
bits(nat) -> (bits {tag, nat value})
```

Retrieves the bit representation of a number of shift
arithmetics and bitwise operations.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# lshift
### lshift - left shift
*Defined in: std/core/convert.s line 88*

```rust
lshift(bits, nat y) -> (bits {tag, nat value})
```

Reminder that bits store 64 bits and thus this shift should
be casted to lower-bit numbers (e.g., nat16) to truncate leading ones.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19

</details>


# rshift
### rshift - right shift
*Defined in: std/core/convert.s line 95*

```rust
rshift(bits, nat y) -> (bits {tag, nat value})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 19

</details>


# xor
### xor - bitwise xor
*Defined in: std/core/convert.s line 100*

```rust
xor(bits, bits) -> (bits {tag, nat value})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 19

</details>


# band
### band - bitwise and
*Defined in: std/core/convert.s line 105*

```rust
band(bits, bits) -> (bits {tag, nat value})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 19

</details>


# bor
### bor - bitwise or
*Defined in: std/core/convert.s line 110*

```rust
bor(bits, bits) -> (bits {tag, nat value})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 19

</details>


# bnot
### bnot - bitwise negation
*Defined in: std/core/convert.s line 115*

```rust
bnot(bits {tag, nat value}) -> (bits {tag, nat value})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 16

</details>


# tochar
### tochar
*Defined in: std/core/convert.s line 128*

```rust
tochar(nat8) -> (char)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


# slice
### slice - extract a range of bits
*Defined in: std/core/convert.s line 193*

```rust
slice(bits, nat from, nat to) -> (bits {tag, nat value})
```

The extracted range is shifted down so that `from` becomes bit 0.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 196

</details>

<details><summary>Potential errors</summary>

12. slice start cannot be greater than slice end
13. cannot slice beyond 64 bits
6. nat subtraction would yield a negative
</details>


### slice - a buffer subregion of an arena
*Defined in: std/core/allocators.s line 235*

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
- Transpiled C size: 184

</details>

<details><summary>Potential errors</summary>

11. nat value too large to pack in nat32
23. arena is out of space
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 418*

```rust
slice(cstr _s, str, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 216

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
29. slice out of string bounds
30. not found
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 418*

```rust
slice(cstr _s, str, cstr _to) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 210

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
29. slice out of string bounds
30. not found
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 418*

```rust
slice(cstr _s, cstr _from, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 210

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
29. slice out of string bounds
30. not found
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 418*

```rust
slice(cstr _s, cstr _from, cstr _to) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 204

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
29. slice out of string bounds
30. not found
</details>


### slice - get a substring view into a string
*Defined in: std/core/string.s line 344*

```rust
slice(str, nat from, nat to) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
29. slice out of string bounds
22. out of bounds
</details>


### slice - get a substring view into a string
*Defined in: std/core/string.s line 344*

```rust
slice(cstr _s, nat from, nat to) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
29. slice out of string bounds
22. out of bounds
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 418*

```rust
slice(str, str, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 46
- Transpiled C size: 222

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
29. slice out of string bounds
30. not found
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 418*

```rust
slice(str, str, cstr _to) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 216

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
29. slice out of string bounds
30. not found
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 418*

```rust
slice(str, cstr _from, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 216

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
29. slice out of string bounds
30. not found
</details>


### slice - slice a string based on a prefix and postfix (those are not included in the found substring)
*Defined in: std/core/string.s line 418*

```rust
slice(str, cstr _from, cstr _to) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 210

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
29. slice out of string bounds
30. not found
</details>


# mask
### mask - overwrite a range of bits
*Defined in: std/core/convert.s line 203*

```rust
mask(bits, nat from, nat to, bits) -> (bits {tag, nat value})
```

The provided value must fit entirely inside the selected bit range.
Bit 0 of `other` is written at position `from`.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 46
- Transpiled C size: 269

</details>

<details><summary>Potential errors</summary>

15. value does not fit in bit slice
13. cannot slice beyond 64 bits
14. slice start cannot be greater than or equal to slice end
6. nat subtraction would yield a negative
</details>


# of
### of - yields a pair of nats based on an interval specification
*Defined in: std/core/range.s line 34*

```rust
of(nat from, "len", nat length) -> (nat from, nat to)
```

Represents the range [from, from+length).

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 17

</details>


### of - yields a pair of nats based on an interval specification
*Defined in: std/core/range.s line 29*

```rust
of(nat from, "upto", nat to) -> (nat from, nat)
```

Represents the range [from, to].

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 17

</details>


### of - yields a pair of nats based on an interval specification
*Defined in: std/core/range.s line 24*

```rust
of(nat from, "to", nat to) -> (nat from, nat to)
```

Represents the range [from, to).

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


### of - yields a pair of nats based on an interval specification
*Defined in: std/core/range.s line 19*

```rust
of(nat) -> (nat from, nat to)
```

Represents the range [0, to).

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


# range
### range - constructs a range
*Defined in: std/core/range.s line 39*

```rust
range(nat _from, nat to) -> (edit range {tag, mut nat from, nat to})
```

Endpoints are natural numbers (unsigned integers). This is handy for several kinds of iteration.
When iterating over ranges, it matters whether they are constant or not in whether the first
element is modified to track iteration progress or not. Also use 'of' to construct descriptive
ranges. Example:
```python
import std.core
def main(on CLI)
    r = range of(0 to 3)
    for i in r: print i
    print r.from
```
In this example, the final print retains value 0 because the range is constant,
which evokes the constant range 'get' iterator. However, if the range was mutable,
the starting position would be modified via the 'mutget' iterator to consume its elements.
In most usage scenarios this does not matter, as the range would be a temporary creation.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 25

</details>


# mutget
### mutget - next range number
*Defined in: std/core/range.s line 59*

```rust
mutget(edit range {tag, mut nat from, nat to}) -> (nat)
```

This increments the range `from` position and returns the previous one.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 48

</details>

<details><summary>Potential errors</summary>

16. iteration end
</details>


### mutget - next range number
*Defined in: std/core/range.s line 59*

```rust
mutget(edit range, nat skipped) -> (nat)
```

This increments the range `from` position and returns the previous one.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 48

</details>

<details><summary>Potential errors</summary>

16. iteration end
</details>


### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 145*

```rust
mutget(edit list, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

22. out of bounds
</details>


### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 145*

```rust
mutget(edit list, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

22. out of bounds
</details>


### mutget - get a list element pointer
*Defined in: std/core/allocators.s line 145*

```rust
mutget(edit circular, nat pos) -> (mut any ptr {follows any ptr self.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

22. out of bounds
</details>


### mutget - get a mutable list element pointer
*Defined in: std/core/allocators.s line 109*

```rust
mutget(edit arena, nat pos) -> (mut any ptr {follows any ptr l.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 57

</details>

<details><summary>Potential errors</summary>

22. out of bounds
</details>


### mutget - get a mutable list element pointer
*Defined in: std/core/allocators.s line 109*

```rust
mutget(edit arena, nat pos, "unsafe_assume_inbounds") -> (mut any ptr {follows any ptr l.buf.unsafe_ptr})
```


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 23

</details>


### mutget - mutable pointer to buffer element
*Defined in: std/core/array.s line 83*

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

22. out of bounds
</details>


### mutget - mutable pointer to buffer element
*Defined in: std/core/array.s line 83*

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


### mutget
*Defined in: std/io.s line 26*

```rust
mutget(edit circular, edit open, nat nat) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 46

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### mutget
*Defined in: std/io.s line 26*

```rust
mutget(edit circular, edit terminal, nat nat) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### mutget
*Defined in: std/io.s line 26*

```rust
mutget(edit circular, edit write, nat nat) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### mutget
*Defined in: std/io.s line 26*

```rust
mutget(edit circular, edit write, nat nat) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### mutget
*Defined in: std/io.s line 26*

```rust
mutget(edit circular, edit open, nat nat) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### mutget
*Defined in: std/io.s line 26*

```rust
mutget(edit circular, edit open, nat nat) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### mutget
*Defined in: std/io.s line 26*

```rust
mutget(edit arena, edit open, nat nat) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 46

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### mutget
*Defined in: std/io.s line 26*

```rust
mutget(edit arena, edit terminal, nat nat) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### mutget
*Defined in: std/io.s line 26*

```rust
mutget(edit arena, edit write, nat nat) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### mutget
*Defined in: std/io.s line 26*

```rust
mutget(edit arena, edit write, nat nat) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### mutget
*Defined in: std/io.s line 26*

```rust
mutget(edit arena, edit open, nat nat) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### mutget
*Defined in: std/io.s line 26*

```rust
mutget(edit arena, edit open, nat nat) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### mutget
*Defined in: std/io.s line 23*

```rust
mutget(edit open, nat nat) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 32

</details>

<details><summary>Potential errors</summary>

64. end of dir
63. not open dir
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
66. string buffer is full
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
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
66. string buffer is full
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
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
66. string buffer is full
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
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

22. out of bounds
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

22. out of bounds
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


### mutget - mutable reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 60*

```rust
mutget(edit mat, nat i, nat j) -> (mut float ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 103

</details>

<details><summary>Potential errors</summary>

78. row out of bounds
79. column out of bounds
</details>


# get
### get - assert that a number plus range start lies in the range
*Defined in: std/core/range.s line 67*

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

16. iteration end
</details>


### get - get a list element pointer
*Defined in: std/core/allocators.s line 138*

```rust
get(list, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 53

</details>

<details><summary>Potential errors</summary>

22. out of bounds
</details>


### get - get a list element pointer
*Defined in: std/core/allocators.s line 138*

```rust
get(list, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 53

</details>

<details><summary>Potential errors</summary>

22. out of bounds
</details>


### get - get a list element pointer
*Defined in: std/core/allocators.s line 138*

```rust
get(circular, nat pos) -> (any ptr {follows any ptr self.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 30

</details>

<details><summary>Potential errors</summary>

22. out of bounds
</details>


### get - get a list element pointer
*Defined in: std/core/allocators.s line 99*

```rust
get(arena, nat pos) -> (any ptr {follows any ptr l.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 53

</details>

<details><summary>Potential errors</summary>

22. out of bounds
</details>


### get - get a list element pointer
*Defined in: std/core/allocators.s line 99*

```rust
get(arena, nat pos, "unsafe_assume_inbounds") -> (any ptr {follows any ptr l.buf.unsafe_ptr})
```


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 19

</details>


### get - immutable pointer to buffer element
*Defined in: std/core/array.s line 96*

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

22. out of bounds
</details>


### get - immutable pointer to buffer element
*Defined in: std/core/array.s line 96*

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


### get - a character in a string
*Defined in: std/core/string.s line 330*

```rust
get(str, nat i) -> (char ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 46

</details>

<details><summary>Potential errors</summary>

22. out of bounds
</details>


### get - a character in a string
*Defined in: std/core/string.s line 330*

```rust
get(str, nat i, "unsafe_assume_inbounds") -> (char ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 23

</details>


### get - GET with system curl
*Defined in: std/io/web.s line 31*

```rust
get(console CLI, cstr url) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CLI
```

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.
This version downloads to a '.tmp' file.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 88

</details>

<details><summary>Potential errors</summary>

2. null pointer
17. allocation failed
50. unsanitized command: shell metacharacter detected
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
51. system call failed
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
27. string does not fit on buffer
</details>


### get - GET with system curl
*Defined in: std/io/web.s line 31*

```rust
get(console CLI, cstr url, cstr path) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CLI
```

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 19
- Transpiled C size: 84

</details>

<details><summary>Potential errors</summary>

2. null pointer
17. allocation failed
50. unsanitized command: shell metacharacter detected
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
51. system call failed
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
27. string does not fit on buffer
</details>


### get - GET with system curl
*Defined in: std/io/web.s line 31*

```rust
get(console CLI, cstr url, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CLI
```

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 96

</details>

<details><summary>Potential errors</summary>

2. null pointer
17. allocation failed
50. unsanitized command: shell metacharacter detected
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
51. system call failed
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
27. string does not fit on buffer
</details>


### get - GET with system curl
*Defined in: std/io/web.s line 31*

```rust
get(console CLI, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CLI
```

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.
This version downloads to a '.tmp' file.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 94

</details>

<details><summary>Potential errors</summary>

2. null pointer
17. allocation failed
50. unsanitized command: shell metacharacter detected
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
51. system call failed
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
27. string does not fit on buffer
</details>


### get - GET with system curl
*Defined in: std/io/web.s line 31*

```rust
get(console CLI, str, cstr path) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CLI
```

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 90

</details>

<details><summary>Potential errors</summary>

2. null pointer
17. allocation failed
50. unsanitized command: shell metacharacter detected
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
51. system call failed
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
27. string does not fit on buffer
</details>


### get - GET with system curl
*Defined in: std/io/web.s line 31*

```rust
get(console CLI, str, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CLI
```

This creates a GET request using the system's curl.
This implementation is ideal for obtaining individual
files without additional dependencies. Retrieved data
are saved to a specified file path, overwriting it.
For ease of use, the path is returned.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 102

</details>

<details><summary>Potential errors</summary>

2. null pointer
17. allocation failed
50. unsanitized command: shell metacharacter detected
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
51. system call failed
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
27. string does not fit on buffer
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

65. index not found
2. null pointer
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
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

65. index not found
2. null pointer
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
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

65. index not found
2. null pointer
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
</details>


### get - REST get request
*Defined in: std/net/fetch.s line 92*

```rust
get(edit circular, cstr url) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### get - REST get request
*Defined in: std/net/fetch.s line 92*

```rust
get(edit circular, str) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 81

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### get - REST get request
*Defined in: std/net/fetch.s line 92*

```rust
get(edit arena, cstr url) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### get - REST get request
*Defined in: std/net/fetch.s line 92*

```rust
get(edit arena, str) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 81

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### get - REST get request
*Defined in: std/net/fetch.s line 92*

```rust
get(new CHARS, cstr url) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 60

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### get - REST get request
*Defined in: std/net/fetch.s line 92*

```rust
get(new CHARS, str) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 66

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### get - get an iterated vector element at given position
*Defined in: std/sci/vec.s line 99*

```rust
get(iter, nat i) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 64

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
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

22. out of bounds
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

22. out of bounds
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


### get - reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 66*

```rust
get(mat, nat i, nat j) -> (float ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 103

</details>

<details><summary>Potential errors</summary>

78. row out of bounds
79. column out of bounds
</details>


### get - reference to matrix element (i,j)
*Defined in: std/sci/mat.s line 66*

```rust
get(mat, nat i, nat j, "unsafe_assume_inbounds") -> (float ptr)
```


*Warning: This version disables internal bound checks, assuming that proper bounds are guaranteed by its caller.*

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 57

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

17. allocation failed
</details>


### alloc
*Defined in: std/core/string.s line 26*

```rust
alloc(new CHARS, nat length) -> (mut allocated {tag, mut char[], mut nat pos}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 167

</details>

<details><summary>Potential errors</summary>

17. allocation failed
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - list allocation
*Defined in: std/core/allocators.s line 219*

```rust
alloc(edit list {tag, mut any[], mut nat length}) -> (edit allocated {tag, edit any[] {follows any ptr allocator.buf.unsafe_ptr}, nat pos})
```

Creates room for one element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 214

</details>

<details><summary>Potential errors</summary>

18. reallocation failed
4. division by zero
21. cannot resize an unallocated or freed buffer
</details>


### alloc - list allocation
*Defined in: std/core/allocators.s line 219*

```rust
alloc(edit list, nat length) -> (edit allocated {tag, edit any[] {follows any ptr allocator.buf.unsafe_ptr}, nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 206

</details>

<details><summary>Potential errors</summary>

18. reallocation failed
4. division by zero
21. cannot resize an unallocated or freed buffer
</details>


### alloc - list allocation
*Defined in: std/core/allocators.s line 219*

```rust
alloc(edit list {tag, mut any[], mut nat length}) -> (edit allocated {tag, edit any[] {follows any ptr allocator.buf.unsafe_ptr}, nat pos})
```

Creates room for one element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 214

</details>

<details><summary>Potential errors</summary>

18. reallocation failed
4. division by zero
21. cannot resize an unallocated or freed buffer
</details>


### alloc - list allocation
*Defined in: std/core/allocators.s line 219*

```rust
alloc(edit list, nat length) -> (edit allocated {tag, edit any[] {follows any ptr allocator.buf.unsafe_ptr}, nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 206

</details>

<details><summary>Potential errors</summary>

18. reallocation failed
4. division by zero
21. cannot resize an unallocated or freed buffer
</details>


### alloc - circular arena allocation
*Defined in: std/core/allocators.s line 205*

```rust
alloc(edit circular {tag, edit any[], mut nat pos}) -> (edit allocated {tag, edit any[] {follows any ptr allocator.buf.unsafe_ptr}, nat pos})
```

Creates room for one element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 165

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
</details>


### alloc - circular arena allocation
*Defined in: std/core/allocators.s line 205*

```rust
alloc(edit circular, nat length) -> (edit allocated {tag, edit any[] {follows any ptr allocator.buf.unsafe_ptr}, nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
</details>


### alloc - allocates a buffer
*Defined in: std/core/allocators.s line 179*

```rust
alloc(edit any[], edit bucket) -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. The allocated memory is tracked alongside others on
an allocation bucket, so that they are released all together. This strategy entangles the
return with the bucket, but at least ensures that only one easy-to-track bucket should be
moved across functions.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 220

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
18. reallocation failed
</details>


### alloc - allocates a buffer
*Defined in: std/core/allocators.s line 179*

```rust
alloc(edit any[], edit bucket, "dirty") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. The allocated memory is tracked alongside others on
an allocation bucket, so that they are released all together. This strategy entangles the
return with the bucket, but at least ensures that only one easy-to-track bucket should be
moved across functions.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 31
- Transpiled C size: 239

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
18. reallocation failed
</details>


### alloc - allocates a buffer
*Defined in: std/core/allocators.s line 179*

```rust
alloc(edit any[], edit bucket, "unsafe_first") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. The allocated memory is tracked alongside others on
an allocation bucket, so that they are released all together. This strategy entangles the
return with the bucket, but at least ensures that only one easy-to-track bucket should be
moved across functions.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 180

</details>

<details><summary>Potential errors</summary>

18. reallocation failed
17. allocation failed
2. null pointer
19. cannot allocate a buffer of unsized type
</details>


### alloc - allocates a buffer
*Defined in: std/core/allocators.s line 179*

```rust
alloc(edit any[], edit bucket, nat size) -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. The allocated memory is tracked alongside others on
an allocation bucket, so that they are released all together. This strategy entangles the
return with the bucket, but at least ensures that only one easy-to-track bucket should be
moved across functions.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 212

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
18. reallocation failed
</details>


### alloc - allocates a buffer
*Defined in: std/core/allocators.s line 179*

```rust
alloc(edit any[], edit bucket, nat size, "dirty") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. The allocated memory is tracked alongside others on
an allocation bucket, so that they are released all together. This strategy entangles the
return with the bucket, but at least ensures that only one easy-to-track bucket should be
moved across functions.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 231

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
18. reallocation failed
</details>


### alloc - allocates a buffer
*Defined in: std/core/allocators.s line 179*

```rust
alloc(edit any[], edit bucket, nat size, "unsafe_first") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. The allocated memory is tracked alongside others on
an allocation bucket, so that they are released all together. This strategy entangles the
return with the bucket, but at least ensures that only one easy-to-track bucket should be
moved across functions.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 172

</details>

<details><summary>Potential errors</summary>

18. reallocation failed
17. allocation failed
2. null pointer
19. cannot allocate a buffer of unsized type
</details>


### alloc - arena allocation
*Defined in: std/core/allocators.s line 149*

```rust
alloc(edit arena {tag, edit any[], mut nat pos}) -> (edit allocated {tag, edit any[] {follows any ptr allocator.buf.unsafe_ptr}, nat pos})
```

Creates room for one element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 116

</details>

<details><summary>Potential errors</summary>

23. arena is out of space
</details>


### alloc - arena allocation
*Defined in: std/core/allocators.s line 149*

```rust
alloc(edit arena, nat length) -> (edit allocated {tag, edit any[] {follows any ptr allocator.buf.unsafe_ptr}, nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 108

</details>

<details><summary>Potential errors</summary>

23. arena is out of space
</details>


### alloc - allocate a char[] buffer
*Defined in: std/core/array.s line 55*

```rust
alloc(nat) -> (mut char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 123

</details>

<details><summary>Potential errors</summary>

17. allocation failed
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 23*

```rust
alloc(edit any[]) -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 217

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 23*

```rust
alloc(edit any[], "unsafe_leaky") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 190

</details>

<details><summary>Potential errors</summary>

17. allocation failed
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


### alloc - allocates a buffer
*Defined in: std/core/array.s line 23*

```rust
alloc(edit any[], "dirty") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 236

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 23*

```rust
alloc(edit any[], "dirty", "unsafe_leaky") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 209

</details>

<details><summary>Potential errors</summary>

17. allocation failed
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


### alloc - allocates a buffer
*Defined in: std/core/array.s line 23*

```rust
alloc(edit any[], "unsafe_first") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 177

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 23*

```rust
alloc(edit any[], "unsafe_first", "unsafe_leaky") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.
This version allocates a buffer of ONE element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 25
- Transpiled C size: 150

</details>

<details><summary>Potential errors</summary>

17. allocation failed
</details>


### alloc - allocates a buffer
*Defined in: std/core/array.s line 23*

```rust
alloc(edit any[], nat size) -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 209

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 23*

```rust
alloc(edit any[], nat size, "unsafe_leaky") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 182

</details>

<details><summary>Potential errors</summary>

17. allocation failed
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


### alloc - allocates a buffer
*Defined in: std/core/array.s line 23*

```rust
alloc(edit any[], nat size, "dirty") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 228

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 23*

```rust
alloc(edit any[], nat size, "dirty", "unsafe_leaky") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 201

</details>

<details><summary>Potential errors</summary>

17. allocation failed
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


### alloc - allocates a buffer
*Defined in: std/core/array.s line 23*

```rust
alloc(edit any[], nat size, "unsafe_first") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 25
- Transpiled C size: 169

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### alloc - allocates a buffer
*Defined in: std/core/array.s line 23*

```rust
alloc(edit any[], nat size, "unsafe_first", "unsafe_leaky") -> (edit any[])
```

Allocates an empty buffer and zero-initializes it. This is stable with regards to pointers,
as it never reallocates an allocation. Consider freeing the buffer first with `del buffer` to
allocate again, or use `buffer.resize new_size` once a first non-zero allocation has been made.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 142

</details>

<details><summary>Potential errors</summary>

17. allocation failed
</details>


### alloc
*Defined in: std/core/string.s line 132*

```rust
alloc(edit bucket, nat length) -> (edit allocated {tag, edit char[], nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 97

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
18. reallocation failed
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
26. can only define strings on non-offset buffers
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
23. arena is out of space
88. empty input name
89. cannot tag a structural type
90. tag surface cannot be structural type
25. can only define strings on contiguous buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
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
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
23. arena is out of space
88. empty input name
89. cannot tag a structural type
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# resize
### resize - resize the buffer
*Defined in: std/core/array.s line 60*

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

18. reallocation failed
21. cannot resize an unallocated or freed buffer
</details>


### resize - resize the buffer
*Defined in: std/core/array.s line 60*

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

18. reallocation failed
</details>


# last
### last - mutable pointer to the last buffer element
*Defined in: std/core/array.s line 77*

```rust
last(edit any[]) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 111

</details>

<details><summary>Potential errors</summary>

22. out of bounds
</details>


# len
### len
*Defined in: std/core/allocators.s line 135*

```rust
len(list {tag, any[], nat length}) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### len
*Defined in: std/core/allocators.s line 135*

```rust
len(list {tag, any[], nat length}) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### len - allocated arena size
*Defined in: std/core/allocators.s line 84*

```rust
len(arena {tag, any[], nat pos}) -> (nat)
```

This is not the total arena size, but rather the number
of elements actively in use.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### len - the number of buffer elements
*Defined in: std/core/array.s line 109*

```rust
len(any[]) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### len - string length
*Defined in: std/core/string.s line 105*

```rust
len(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### len - vectot length
*Defined in: std/sci/vec.s line 57*

```rust
len(vec {tag, float ptr unsafe_ptr, nat pos, nat length}) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 3

</details>


# new
### new - allocations on new memory
*Defined in: std/core/allocators.s line 22*

```rust
new() -> (new {tag})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3

</details>


# bucket\_contents
### bucket\_contents
*Defined in: std/core/allocators.s line 26*

```rust
bucket_contents() -> (edit bucket_contents {tag, mut any ptr elements {follows any ptr ..}, mut nat size, mut nat allocated})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 64

</details>

<details><summary>Potential errors</summary>

17. allocation failed
</details>


# bucket
### bucket - grouped allocations on new memory
*Defined in: std/core/allocators.s line 33*

```rust
bucket() -> (edit bucket {tag, mut bucket_contents ptr unsafe_ptr})
```

This is similar to 'new' but moves all allocated memory together,
releasing it only when there is no further use for any of its contents.
Do note that this operation is typically the lazy way out,
as it acquires and releases memory using one extra layer of indirection
compared to structures like arenas. On the other hand, it's pretty versatile
for holding conditional results. Example:
```python
import std.core
def conditional(bool case)
    CHARS = edit bucket()
    if case: s = copy 123
    else:    s = copy 345
    return (s, CHARS) # this would not be possible with 'CHARS = new()'
def main()
    CLI = edit console()
    print conditional true
    print conditional false
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 70

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
of(nat) -> (nat from, nat to)
range(nat _from, nat to) -> (edit range {tag, mut nat from, nat to})
mutget(edit range, nat skipped) -> (nat)
ptr
mul(nat x, nat y) -> (nat)
add(any ptr allocated, nat offset) -> (any ptr {follows any ptr allocated})
dereference_ptr(any ptr) -> (any ptr)
free(mut any ptr) -> ()
free(mut any ptr) -> ()
free(mut any ptr) -> ()
```
</details>

# arena
### arena
*Defined in: std/core/string.s line 23*

```rust
arena("char__t9t") -> (edit arena {tag, edit char[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena - a buffer and mutable position pair
*Defined in: std/core/allocators.s line 75*

```rust
arena(edit any[]) -> (edit arena {tag, edit any[] {follows any ptr buf.unsafe_ptr}, mut nat pos})
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
*Defined in: std/core/allocators.s line 63*

```rust
arena(edit any[], nat _pos) -> (edit arena {tag, edit any[], mut nat pos})
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
arena("float__t4186t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t4120t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t3829t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t664t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t625t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t623t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t621t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t4t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 304*

```rust
arena(edit vec {tag, mut float ptr unsafe_ptr, nat pos, nat length}) -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 120

</details>


# allocated
### allocated
*Defined in: std/core/allocators.s line 90*

```rust
allocated(edit any[], nat pos) -> (edit allocated {tag, edit any[], nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


# status
### status - convert to a nameless buffer and position pair
*Defined in: std/core/allocators.s line 93*

```rust
status(allocated {tag, any[], nat pos}) -> (any[] {follows any ptr self.buf.unsafe_ptr}, nat)
```

This unpacking is used to pass an arena's state or allocated
memory data as part of structural input.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 23

</details>


### status - convert to a nameless buffer and position pair
*Defined in: std/core/allocators.s line 93*

```rust
status(arena {tag, any[], nat pos}) -> (any[] {follows any ptr self.buf.unsafe_ptr}, nat)
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
circular("char__t9t") -> (edit circular {tag, edit char[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular - circular buffer
*Defined in: std/core/allocators.s line 119*

```rust
circular(edit any[]) -> (edit circular {tag, edit any[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 15

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t4186t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t4120t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t3829t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t664t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t625t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t623t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t621t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t4t") -> (edit circular {tag, edit float[], mut nat pos})
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
list("char__t9t") -> (edit list {tag, mut char[], mut nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list - list buffer management
*Defined in: std/core/allocators.s line 124*

```rust
list(edit any[], "external") -> (edit list {tag, mut any[] {follows any ptr _buf.unsafe_ptr}, mut nat length})
```

List defined over a mutable buf that is automatically managed and resized.
A capacity is maintained so that resizes are not performed too frequently.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 47

</details>


### list - list buffer management
*Defined in: std/core/allocators.s line 124*

```rust
list(edit any[]) -> (edit list {tag, mut any[] {follows any ptr _buf.unsafe_ptr}, mut nat length})
```

List defined over a mutable buf that is automatically managed and resized.
A capacity is maintained so that resizes are not performed too frequently.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 91

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t4186t") -> (edit list {tag, mut float[], mut nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t4120t") -> (edit list {tag, mut float[], mut nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t3829t") -> (edit list {tag, mut float[], mut nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t664t") -> (edit list {tag, mut float[], mut nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t625t") -> (edit list {tag, mut float[], mut nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t623t") -> (edit list {tag, mut float[], mut nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t621t") -> (edit list {tag, mut float[], mut nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### list
*Defined in: std/sci/vec.s line 25*

```rust
list("float__t4t") -> (edit list {tag, mut float[], mut nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# unsafe\_alloc
### unsafe\_alloc - bucket allocation
*Defined in: std/core/allocators.s line 160*

```rust
unsafe_alloc(edit bucket {tag, mut bucket_contents ptr unsafe_ptr}) -> (mut any ptr {follows any ptr ..})
```

Creates room for one element.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 337

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
18. reallocation failed
</details>


### unsafe\_alloc - bucket allocation
*Defined in: std/core/allocators.s line 160*

```rust
unsafe_alloc(edit bucket, nat bytes) -> (mut any ptr {follows any ptr ..})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 329

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
18. reallocation failed
</details>


# at
### at - get a mutable pointer to the last buffer element
*Defined in: std/core/allocators.s line 231*

```rust
at(edit allocated {tag, edit any[], nat pos}) -> (mut any ptr {follows any ptr surface.buf.unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 34

</details>

<details><summary>Potential errors</summary>

22. out of bounds
</details>


### at - find or add an item in a robinhood_entry list
*Defined in: std/hash.s line 87*

```rust
at(edit robinhood_str_entry[], str) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 102
- Transpiled C size: 1051

</details>

<details><summary>Potential errors</summary>

2. null pointer
66. string buffer is full
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
</details>


### at - find or add an item in a robinhood_entry list
*Defined in: std/hash.s line 87*

```rust
at(edit robinhood_str_entry[], cstr _k) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 98
- Transpiled C size: 1045

</details>

<details><summary>Potential errors</summary>

2. null pointer
66. string buffer is full
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
</details>


### at - find or add an item in a robinhood_entry list
*Defined in: std/hash.s line 87*

```rust
at(edit robinhood_nat_entry[], nat _k) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 54
- Transpiled C size: 718

</details>

<details><summary>Potential errors</summary>

2. null pointer
66. string buffer is full
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
</details>


### at
*Defined in: std/sci/vec.s line 107*

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
*Defined in: std/sci/vec.s line 104*

```rust
at(float number, nat i) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# char\_allocator
### list
*Defined in: std/core/string.s line 25*

```rust
list("char__t9t") -> (edit list {tag, mut char[], mut nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 59

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### circular
*Defined in: std/core/string.s line 24*

```rust
circular("char__t9t") -> (edit circular {tag, edit char[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/core/string.s line 23*

```rust
arena("char__t9t") -> (edit arena {tag, edit char[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### bucket - grouped allocations on new memory
*Defined in: std/core/allocators.s line 33*

```rust
bucket() -> (edit bucket {tag, mut bucket_contents ptr unsafe_ptr})
```

This is similar to 'new' but moves all allocated memory together,
releasing it only when there is no further use for any of its contents.
Do note that this operation is typically the lazy way out,
as it acquires and releases memory using one extra layer of indirection
compared to structures like arenas. On the other hand, it's pretty versatile
for holding conditional results. Example:
```python
import std.core
def conditional(bool case)
    CHARS = edit bucket()
    if case: s = copy 123
    else:    s = copy 345
    return (s, CHARS) # this would not be possible with 'CHARS = new()'
def main()
    CLI = edit console()
    print conditional true
    print conditional false
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 70

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
of(nat) -> (nat from, nat to)
range(nat _from, nat to) -> (edit range {tag, mut nat from, nat to})
mutget(edit range, nat skipped) -> (nat)
ptr
mul(nat x, nat y) -> (nat)
add(any ptr allocated, nat offset) -> (any ptr {follows any ptr allocated})
dereference_ptr(any ptr) -> (any ptr)
free(mut any ptr) -> ()
free(mut any ptr) -> ()
free(mut any ptr) -> ()
```
</details>

### new - allocations on new memory
*Defined in: std/core/allocators.s line 22*

```rust
new() -> (new {tag})
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
*Defined in: std/mini.s line 22*

```rust
strdat(nat _pos, nat _length) -> (nat16 pos, nat16 length)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 49

</details>

<details><summary>Potential errors</summary>

10. nat value too large to pack in nat16
</details>


# str
### str - tautology function for strings
*Defined in: std/core/string.s line 65*

```rust
str(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 57*

```rust
str(char[]) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 165

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
27. string does not fit on buffer
</details>


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 57*

```rust
str(char[], nat length) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 147

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
27. string does not fit on buffer
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 50*

```rust
str(char[], nat dat.pos, nat dat.length, char dat.first) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 100

</details>

<details><summary>Potential errors</summary>

25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 45*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 43

</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 41*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### str - convert to string
*Defined in: std/core/string.s line 93*

```rust
str(cstr) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
str(char[], nat endpos, "from", nat pos) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 77*

```rust
str(char[], nat pos, "to", nat endpos) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 69*

```rust
str(char[], nat pos, "len", nat length) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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

25. can only define strings on contiguous buffers
2. null pointer
26. can only define strings on non-offset buffers
22. out of bounds
</details>


### str - reads a string from the console
*Defined in: std/core/convertstr.s line 113*

```rust
str(edit arena, console console) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

The read string is placed on an arena while consuming only the necessarily minimum size.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 47
- Transpiled C size: 279

</details>

<details><summary>Potential errors</summary>

34. read string does not fit on buffer
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
31. unexpected end of console read
</details>


### str - reads a string from the console
*Defined in: std/core/convertstr.s line 113*

```rust
str(new CHARS, console console) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

The read string is placed onto memory that keeps being reallocated to accommodate its size.
The resulting memory will consume exactly the required size in bytes.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 87
- Transpiled C size: 543

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
17. allocation failed
18. reallocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
21. cannot resize an unallocated or freed buffer
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
31. unexpected end of console read
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### str
*Defined in: std/io/process.s line 30*

```rust
str(argument {tag, cstr unsafe_value}) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 20

</details>


### str - create a compact str
*Defined in: std/mini.s line 35*

```rust
str(cstr) -> (str {tag, char ptr unsafe_ptr, nat16 dat.pos, nat16 dat.length})
```

The created str variation should be used only for storng and
retrieving data with 'unpack' for memory efficiency.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 51

</details>

<details><summary>Potential errors</summary>

10. nat value too large to pack in nat16
</details>


### str - create a compact str
*Defined in: std/mini.s line 27*

```rust
str(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (str {tag, char ptr unsafe_ptr, nat16 dat.pos, nat16 dat.length})
```

The created str variation should be used only for storng and
retrieving data with 'unpack' for memory efficiency.

<details><summary>Complexity</summary>

- Level of abstraction: 2 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 39

</details>

<details><summary>Potential errors</summary>

10. nat value too large to pack in nat16
</details>


### str - overloads an operator while dereferencing pointer data
*Defined in: std/ptrpeek.s line 59*

```rust
str(cstr ptr) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
str(str ptr) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
*Defined in: std/core/string.s line 143*

```rust
copy(edit list, cstr _other) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

18. reallocation failed
4. division by zero
21. cannot resize an unallocated or freed buffer
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - copy a string
*Defined in: std/core/string.s line 143*

```rust
copy(edit list, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- Transpiled C size: 163

</details>

<details><summary>Potential errors</summary>

18. reallocation failed
4. division by zero
21. cannot resize an unallocated or freed buffer
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - copy a string
*Defined in: std/core/string.s line 143*

```rust
copy(edit circular, cstr _other) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - copy a string
*Defined in: std/core/string.s line 143*

```rust
copy(edit circular, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- Transpiled C size: 163

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - copy a string
*Defined in: std/core/string.s line 143*

```rust
copy(edit arena, cstr _other) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
23. arena is out of space
</details>


### copy - copy a string
*Defined in: std/core/string.s line 143*

```rust
copy(edit arena, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- Transpiled C size: 163

</details>

<details><summary>Potential errors</summary>

25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
23. arena is out of space
</details>


### copy - copy a string
*Defined in: std/core/string.s line 143*

```rust
copy(edit bucket, cstr _other) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- SSA variables: 33
- Transpiled C size: 145

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
18. reallocation failed
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - copy a string
*Defined in: std/core/string.s line 143*

```rust
copy(edit bucket, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- SSA variables: 37
- Transpiled C size: 151

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
18. reallocation failed
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - copy a string
*Defined in: std/core/string.s line 143*

```rust
copy(new CHARS, cstr _other) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- Transpiled C size: 142

</details>

<details><summary>Potential errors</summary>

17. allocation failed
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### copy - copy a string
*Defined in: std/core/string.s line 143*

```rust
copy(new CHARS, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- Transpiled C size: 148

</details>

<details><summary>Potential errors</summary>

17. allocation failed
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### copy
*Defined in: std/core/string.s line 135*

```rust
copy(edit list, char other) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 131

</details>

<details><summary>Potential errors</summary>

18. reallocation failed
4. division by zero
21. cannot resize an unallocated or freed buffer
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy
*Defined in: std/core/string.s line 135*

```rust
copy(edit circular, char other) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 131

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy
*Defined in: std/core/string.s line 135*

```rust
copy(edit arena, char other) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 131

</details>

<details><summary>Potential errors</summary>

25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
23. arena is out of space
</details>


### copy
*Defined in: std/core/string.s line 135*

```rust
copy(edit bucket, char other) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 25
- Transpiled C size: 119

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
18. reallocation failed
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy
*Defined in: std/core/string.s line 135*

```rust
copy(new CHARS, char other) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 116

</details>

<details><summary>Potential errors</summary>

17. allocation failed
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### copy - convert a number to a string
*Defined in: std/core/string.s line 571*

```rust
copy(edit circular, float n) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 134
- Transpiled C size: 1210

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
7. cannot convert negative float to nat
22. out of bounds
24. does not fit in circular arena
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - convert a number to a string
*Defined in: std/core/string.s line 571*

```rust
copy(edit arena, float n) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 134
- Transpiled C size: 1210

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
7. cannot convert negative float to nat
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - convert a number to a string
*Defined in: std/core/string.s line 571*

```rust
copy(edit bucket, float n) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 129
- Transpiled C size: 1198

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
7. cannot convert negative float to nat
17. allocation failed
18. reallocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - convert a number to a string
*Defined in: std/core/string.s line 571*

```rust
copy(new CHARS, float n) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 128
- Transpiled C size: 1195

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
7. cannot convert negative float to nat
17. allocation failed
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### copy - convert a number to a string
*Defined in: std/core/string.s line 510*

```rust
copy(edit list, nat n) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- Transpiled C size: 477

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
18. reallocation failed
21. cannot resize an unallocated or freed buffer
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - convert a number to a string
*Defined in: std/core/string.s line 510*

```rust
copy(edit circular, nat n) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- Transpiled C size: 477

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
24. does not fit in circular arena
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - convert a number to a string
*Defined in: std/core/string.s line 510*

```rust
copy(edit arena, nat n) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- Transpiled C size: 477

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - convert a number to a string
*Defined in: std/core/string.s line 510*

```rust
copy(edit bucket, nat n) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

The result is placed on a character memory surface effect CHARS.
Example:
```
s = copy 123
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 74
- Transpiled C size: 465

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
17. allocation failed
18. reallocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - convert a number to a string
*Defined in: std/core/string.s line 510*

```rust
copy(new CHARS, nat n) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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
- Transpiled C size: 462

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
17. allocation failed
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### copy - convert a number to a string
*Defined in: std/core/string.s line 571*

```rust
copy(edit list, float n) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 134
- Transpiled C size: 1210

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
7. cannot convert negative float to nat
18. reallocation failed
21. cannot resize an unallocated or freed buffer
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### copy - copy a vector
*Defined in: std/sci/vec.s line 295*

```rust
copy(edit circular, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 205

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
</details>


### copy - copy a vector
*Defined in: std/sci/vec.s line 295*

```rust
copy(edit arena, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 205

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
</details>


### copy - copy a vector
*Defined in: std/sci/vec.s line 295*

```rust
copy(edit bucket, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 192

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


### copy - copy a vector
*Defined in: std/sci/vec.s line 295*

```rust
copy(new FLOATS, vec) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Grabs a FLOATS for the result as an effect.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 190

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
</details>


# copy\_null\_terminated
### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s line 306*

```rust
copy_null_terminated(edit arena, cstr _other) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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

25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
28. string buffer out of memory
</details>


### copy\_null\_terminated - copy a string while adding null termination
*Defined in: std/core/string.s line 306*

```rust
copy_null_terminated(edit arena, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
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

25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
28. string buffer out of memory
</details>


### copy\_null\_terminated - create null terminated string
*Defined in: std/core/string.s line 161*

```rust
copy_null_terminated(new CHARS, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

Copies a string to a new buffer while ensuring null termination.
This is mainly useful for supporting 'cstr unsafe_temp'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 168

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# unsafe\_temp
### unsafe\_temp - tautology function for cstr
*Defined in: std/core/string.s line 212*

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
*Defined in: std/core/string.s line 173*

```rust
unsafe_temp(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (unsafe_temp {tag, cstr cstr, str})
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

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### unsafe\_temp - convert a string to a temporary null-terminated (cstr,str) pair
*Defined in: std/core/string.s line 173*

```rust
unsafe_temp(str, str) -> (unsafe_temp {tag, cstr cstr, str})
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

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# endpos
### endpos - the end position of a string
*Defined in: std/core/string.s line 224*

```rust
endpos(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (nat)
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
*Defined in: std/core/string.s line 230*

```rust
revalidate(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
*Defined in: std/core/string.s line 358*

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
29. slice out of string bounds
22. out of bounds
</details>


### starts\_with - check whether a string starts with a particular substring sequence
*Defined in: std/core/string.s line 358*

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
29. slice out of string bounds
22. out of bounds
</details>


### starts\_with - check whether a string starts with a particular substring sequence
*Defined in: std/core/string.s line 358*

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
29. slice out of string bounds
22. out of bounds
</details>


### starts\_with - check whether a string starts with a particular substring sequence
*Defined in: std/core/string.s line 358*

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
29. slice out of string bounds
22. out of bounds
</details>


# ends\_with
### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 366*

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
29. slice out of string bounds
22. out of bounds
</details>


### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 366*

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
29. slice out of string bounds
22. out of bounds
</details>


### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 366*

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
29. slice out of string bounds
22. out of bounds
</details>


### ends\_with - check whether a string ends with a particular substring sequence
*Defined in: std/core/string.s line 366*

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
29. slice out of string bounds
22. out of bounds
</details>


# contains
### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 384*

```rust
contains(str, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 357

</details>


### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 384*

```rust
contains(str, cstr _needle) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 351

</details>


### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 384*

```rust
contains(cstr _stack, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 351

</details>


### contains - check whether a string contains a needle substring
*Defined in: std/core/string.s line 384*

```rust
contains(cstr _stack, cstr _needle) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 52
- Transpiled C size: 345

</details>


### contains - check whether a string contains a needle character
*Defined in: std/core/string.s line 376*

```rust
contains(str, char needle) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 256

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### contains - check whether a string contains a needle character
*Defined in: std/core/string.s line 376*

```rust
contains(cstr _stack, char needle) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 250

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


# find
### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(str, str) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 361

</details>

<details><summary>Potential errors</summary>

30. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(str, str, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 67
- Transpiled C size: 424

</details>

<details><summary>Potential errors</summary>

30. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(str, str, nat _skip) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 69
- Transpiled C size: 420

</details>

<details><summary>Potential errors</summary>

30. not found
6. nat subtraction would yield a negative
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(str, str, nat _skip, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 74
- Transpiled C size: 483

</details>

<details><summary>Potential errors</summary>

30. not found
6. nat subtraction would yield a negative
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(str, cstr _needle) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 58
- Transpiled C size: 355

</details>

<details><summary>Potential errors</summary>

30. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(str, cstr _needle, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 63
- Transpiled C size: 418

</details>

<details><summary>Potential errors</summary>

30. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(str, cstr _needle, nat _skip) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 65
- Transpiled C size: 414

</details>

<details><summary>Potential errors</summary>

30. not found
6. nat subtraction would yield a negative
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(str, cstr _needle, nat _skip, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 70
- Transpiled C size: 477

</details>

<details><summary>Potential errors</summary>

30. not found
6. nat subtraction would yield a negative
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(cstr _stack, str) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 58
- Transpiled C size: 355

</details>

<details><summary>Potential errors</summary>

30. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(cstr _stack, str, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 63
- Transpiled C size: 418

</details>

<details><summary>Potential errors</summary>

30. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(cstr _stack, str, nat _skip) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 65
- Transpiled C size: 414

</details>

<details><summary>Potential errors</summary>

30. not found
6. nat subtraction would yield a negative
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(cstr _stack, str, nat _skip, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 70
- Transpiled C size: 477

</details>

<details><summary>Potential errors</summary>

30. not found
6. nat subtraction would yield a negative
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(cstr _stack, cstr _needle) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 54
- Transpiled C size: 349

</details>

<details><summary>Potential errors</summary>

30. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(cstr _stack, cstr _needle, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 59
- Transpiled C size: 412

</details>

<details><summary>Potential errors</summary>

30. not found
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(cstr _stack, cstr _needle, nat _skip) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 61
- Transpiled C size: 408

</details>

<details><summary>Potential errors</summary>

30. not found
6. nat subtraction would yield a negative
</details>


### find - find within a string a needle substring's first ocurence
*Defined in: std/core/string.s line 397*

```rust
find(cstr _stack, cstr _needle, nat _skip, "end_pos") -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 66
- Transpiled C size: 471

</details>

<details><summary>Potential errors</summary>

30. not found
6. nat subtraction would yield a negative
</details>


### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(nat[], nat _k) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 436

</details>

<details><summary>Potential errors</summary>

65. index not found
2. null pointer
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
</details>


### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(str[], str) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 79
- Transpiled C size: 622

</details>

<details><summary>Potential errors</summary>

65. index not found
2. null pointer
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
</details>


### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(str[], cstr _k) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 75
- Transpiled C size: 616

</details>

<details><summary>Potential errors</summary>

65. index not found
2. null pointer
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
</details>


### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(robinhood_nat_entry[], nat _k) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 46
- Transpiled C size: 470

</details>

<details><summary>Potential errors</summary>

65. index not found
2. null pointer
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
</details>


### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(robinhood_str_entry[], str) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 82
- Transpiled C size: 656

</details>

<details><summary>Potential errors</summary>

65. index not found
2. null pointer
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
</details>


### find - find an item in a robinhood_entry list
*Defined in: std/hash.s line 69*

```rust
find(robinhood_str_entry[], cstr _k) -> (mut nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 78
- Transpiled C size: 650

</details>

<details><summary>Potential errors</summary>

65. index not found
2. null pointer
5. modulo by zero
22. out of bounds
6. nat subtraction would yield a negative
</details>


# empty
### empty - checks that a string does not have any character
*Defined in: std/core/string.s line 504*

```rust
empty(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (bool)
```

Prefer this check because its cstr-checking counterpar is faster
than casting to a string.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 31

</details>


### empty - checks that a cstr does not have any characters
*Defined in: std/core/string.s line 496*

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


# ok
### ok - checks that an error code is an error
*Defined in: std/core/error.s line 31*

```rust
ok(last_error) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 11

</details>


# WHICHERR
### WHICHERR - automatically print exit errors
*Defined in: std/core/error.s line 36*

```rust
WHICHERR() -> (WHICHERR {tag, bool init})
```

This function defers error printing, including in
case of failure. Since it has not arguments, it can beprovided
to the `main` function as an automatically created parameter
that prints encountered error messages rather than silently
exiting on unhandled errors. You can show errors by
compiling with --debug, but this WHICHERR no overhead
during runtime and can thus be used in production versions
for minimal error checking support. Declaring it in the
main's title is just declarative syntax sugar for calling.
Example:
```python
import std.core
def main(on CLI, WHICHERR)
    print "what's your name"
    name = str CLI
    if empty name: fail "why no name?"
    macro<printf> "hello {name}!\n"
```
*Warning: This is mainly intended for consumption by the
main function, as it uses a thread-unsafe console handler
that does not respect singleton console rules.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 11

</details>


<details><summary>defered calls</summary>

```rust
ok(last_error) -> (bool)
not(bool) -> (bool)
console("unsafe") -> (mut console {tag})
cstr(last_error) -> (cstr)
print(console CLI, cstr value) -> () on CLI
```
</details>

# printf
### printf - prints a formatted string
*Defined in: std/core/format.s line 4*

```rust
printf(cstr) -> (mut char[])
```

This splits the provided string into subsegments and bracketed expressions.
Ignoring empty substrings, the same function call is made for all substrings
and expressions. Example, where the default applied call is `print nn`:
```python
import std.core
def main(on CLI)
    macro<printf> "hello {1+1} word\n"
```
This variation outputs an empty buffer.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 165
- Transpiled C size: 1234

</details>

<details><summary>Potential errors</summary>

2. null pointer
44. imbalanced brackets
17. allocation failed
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### printf - emmits string formatting code
*Defined in: std/core/format.s line 4*

```rust
printf(cstr func, cstr args) -> (mut char[])
```

This splits the provided string into subsegments and bracketed expressions.
Ignoring empty substrings, the same function call is made for all substrings
and expressions.
The results are placed on a buffer; this makes no allocation in case of blank types,
but otherwise this pattern can be used to apply the same conceptual transformation on heterogeneous
data to yield the same output. Printing like above is the main intended use, but
consider the logic of the following example too:
```python
import std.core
import std.format::F
def inc(nat x)
    return float(x+1)
def inc(float x)
    return x+1.0
def main()
    CLI = edit console()
    v = macro<printf>("inc", "{1}{5.0}")
    print v[0] # 2.0
    print v[1] # 6.0
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 164
- Transpiled C size: 1230

</details>

<details><summary>Potential errors</summary>

2. null pointer
44. imbalanced brackets
17. allocation failed
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# os\_name
### os\_name - the operating system name
*Defined in: std/io/process.s line 20*

```rust
os_name() -> (cstr)
```

One of "linux", "windows", "mac".

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 7

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[memory.write_cstr(os.name)]`*
# argument
### argument
*Defined in: std/io/process.s line 27*

```rust
argument(cstr) -> (argument {tag, cstr unsafe_value})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# args
### args - process arguments
*Defined in: std/io/process.s line 33*

```rust
args() -> (argument[])
```

This buffer is stable and accessible from anywhere.
The first argument is the executable name.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 46

</details>


# arg\_exists
### arg\_exists
*Defined in: std/io/process.s line 42*

```rust
arg_exists(cstr) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 169

</details>


# arg\_after
### arg\_after
*Defined in: std/io/process.s line 47*

```rust
arg_after(cstr flag, cstr default_value) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 46
- Transpiled C size: 343

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### arg\_after
*Defined in: std/io/process.s line 47*

```rust
arg_after(cstr flag, str) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 50
- Transpiled C size: 349

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### arg\_after
*Defined in: std/io/process.s line 47*

```rust
arg_after(cstr) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 314

</details>

<details><summary>Potential errors</summary>

2. null pointer
45. arg not found
22. out of bounds
</details>


# breakpoint
### breakpoint - checks for SIGINT
*Defined in: std/io/process.s line 55*

```rust
breakpoint(console {tag}) -> () on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 174

</details>

<details><summary>Potential errors</summary>

46. interrupted by user
</details>


# pclose
### pclose
*Defined in: std/io/process.s line 72*

```rust
pclose(any ptr) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 42

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[(lambda proc=memory.get_foreign($unsafe_ptr),memory=memory:not memory.close_foreign($unsafe_ptr) or proc.wait() or proc.returncode)()]`*
# popen
### popen
*Defined in: std/io/process.s line 78*

```rust
popen(cstr) -> (any ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 21

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[memory.register_foreign(subprocess.Popen($cmd.split(),stdout=subprocess.PIPE,stderr=subprocess.PIPE), 'process '+$cmd)]`*
# open
### open - loads a path as a openable file
*Defined in: std/io/file.s line 36*

```rust
open(str, "binary") -> (edit open {tag, mut any ptr unsafe_ptr})
```

The file name is not maintained and must be tracked externally, if needed.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
52. failed to open file
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### open - loads a path as a openable file
*Defined in: std/io/file.s line 36*

```rust
open(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (edit open {tag, mut any ptr unsafe_ptr})
```

The file name is not maintained and must be tracked externally, if needed.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
52. failed to open file
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### open - loads a path as a openable file
*Defined in: std/io/file.s line 20*

```rust
open(cstr path, "binary") -> (edit open {tag, mut any ptr unsafe_ptr})
```

The file name is not maintained and must be tracked externally, if needed.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 93

</details>

<details><summary>Potential errors</summary>

52. failed to open file
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### open - loads a path as a openable file
*Defined in: std/io/file.s line 20*

```rust
open(cstr) -> (edit open {tag, mut any ptr unsafe_ptr})
```

The file name is not maintained and must be tracked externally, if needed.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

52. failed to open file
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### open - create a system process
*Defined in: std/io/process.s line 95*

```rust
open(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (edit open {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

48. process terminated with unhandled non-zero exit code
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
47. failed to start process
</details>


<details><summary>defered calls</summary>

```rust
exists(any ptr) -> (bool)
pclose(any ptr) -> (int)
int(nat) -> (int)
neq(int x, int y) -> (bool)
```
</details>

### open - create a system process
*Defined in: std/io/process.s line 83*

```rust
open(cstr) -> (edit open {tag, mut any ptr unsafe_ptr {follows any ptr ..}})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 44

</details>

<details><summary>Potential errors</summary>

48. process terminated with unhandled non-zero exit code
47. failed to start process
</details>


<details><summary>defered calls</summary>

```rust
exists(any ptr) -> (bool)
pclose(any ptr) -> (int)
int(nat) -> (int)
neq(int x, int y) -> (bool)
```
</details>

### open
*Defined in: std/io/dir.s line 102*

```rust
open(str, str) -> (edit open {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 83

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
52. failed to open file
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
closedir(any ptr) -> ()
```
</details>

### open
*Defined in: std/io/dir.s line 102*

```rust
open(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (edit open {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
52. failed to open file
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
closedir(any ptr) -> ()
```
</details>

### open - loads a cstr path as a openable directory
*Defined in: std/io/dir.s line 90*

```rust
open(cstr) -> (edit open {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 43

</details>

<details><summary>Potential errors</summary>

52. failed to open file
</details>


<details><summary>defered calls</summary>

```rust
closedir(any ptr) -> ()
```
</details>

*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[memory.register_foreign(os.scandir($path), 'dir '+$path)]`*
### open
*Defined in: std/graphics.s line 168*

```rust
open(cstr) -> (Texture {tag, nat,float,float,nat,nat[]})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 87

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### open - gain ownership of a pipe for writing
*Defined in: std/pipe.s line 93*

```rust
open(pipe, "writer") -> (edit open {tag, mut pipe})
```

This blocks other threads from accessing its data.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 19
- Transpiled C size: 98

</details>

<details><summary>Potential errors</summary>

2. null pointer
91. mutex too large to fit on allocated lane of 64 bytes
93. cannot write pipe while it's being read
94. cannot write to pipe from multiple sources
</details>


<details><summary>defered calls</summary>

```rust
unsafe_pipe_disown(pipe, "writer") -> ()
```
</details>

### open - gain ownership of a pipe for reading only
*Defined in: std/pipe.s line 85*

```rust
open(pipe, "reader") -> (open {tag, pipe})
```

This fails if elsewhere there was ownership for writing

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 67

</details>

<details><summary>Potential errors</summary>

2. null pointer
91. mutex too large to fit on allocated lane of 64 bytes
92. cannot read pipe while it's being written
</details>


<details><summary>defered calls</summary>

```rust
unsafe_pipe_disown(pipe, "reader") -> ()
```
</details>

# chunk
### chunk - next line
*Defined in: std/io/file.s line 107*

```rust
chunk(edit char[], edit terminal) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

Retrieves the next chunk of data from a file,
and stores it on a char[] buffer at a given position.
A string representation of the stored data is returned,
but do note that this may interweave null character data
because strings are defined over char[] buffers.
The read chunk will have size up to the remainder size of
the buffer, so it is better (safer) to access character data
from the result.
An error is created if the buffer's size is exceeded.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 209

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### chunk - next line
*Defined in: std/io/file.s line 107*

```rust
chunk(edit char[], edit write) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

Retrieves the next chunk of data from a file,
and stores it on a char[] buffer at a given position.
A string representation of the stored data is returned,
but do note that this may interweave null character data
because strings are defined over char[] buffers.
The read chunk will have size up to the remainder size of
the buffer, so it is better (safer) to access character data
from the result.
An error is created if the buffer's size is exceeded.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 209

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### chunk - next line
*Defined in: std/io/file.s line 107*

```rust
chunk(edit char[], edit write) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

Retrieves the next chunk of data from a file,
and stores it on a char[] buffer at a given position.
A string representation of the stored data is returned,
but do note that this may interweave null character data
because strings are defined over char[] buffers.
The read chunk will have size up to the remainder size of
the buffer, so it is better (safer) to access character data
from the result.
An error is created if the buffer's size is exceeded.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 209

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### chunk - next line
*Defined in: std/io/file.s line 107*

```rust
chunk(edit char[], edit open) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

Retrieves the next chunk of data from a file,
and stores it on a char[] buffer at a given position.
A string representation of the stored data is returned,
but do note that this may interweave null character data
because strings are defined over char[] buffers.
The read chunk will have size up to the remainder size of
the buffer, so it is better (safer) to access character data
from the result.
An error is created if the buffer's size is exceeded.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 209

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### chunk - next line
*Defined in: std/io/file.s line 107*

```rust
chunk(edit char[], edit open) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

Retrieves the next chunk of data from a file,
and stores it on a char[] buffer at a given position.
A string representation of the stored data is returned,
but do note that this may interweave null character data
because strings are defined over char[] buffers.
The read chunk will have size up to the remainder size of
the buffer, so it is better (safer) to access character data
from the result.
An error is created if the buffer's size is exceeded.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 209

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### chunk - next line
*Defined in: std/io/file.s line 107*

```rust
chunk(edit char[], mut nat pos, edit terminal) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

Retrieves the next chunk of data from a file,
and stores it on a char[] buffer at a given position.
A string representation of the stored data is returned,
but do note that this may interweave null character data
because strings are defined over char[] buffers.
The read chunk will have size up to the remainder size of
the buffer, so it is better (safer) to access character data
from the result.
An error is created if the buffer's size is exceeded.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 197

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### chunk - next line
*Defined in: std/io/file.s line 107*

```rust
chunk(edit char[], mut nat pos, edit write) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

Retrieves the next chunk of data from a file,
and stores it on a char[] buffer at a given position.
A string representation of the stored data is returned,
but do note that this may interweave null character data
because strings are defined over char[] buffers.
The read chunk will have size up to the remainder size of
the buffer, so it is better (safer) to access character data
from the result.
An error is created if the buffer's size is exceeded.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 197

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### chunk - next line
*Defined in: std/io/file.s line 107*

```rust
chunk(edit char[], mut nat pos, edit write) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

Retrieves the next chunk of data from a file,
and stores it on a char[] buffer at a given position.
A string representation of the stored data is returned,
but do note that this may interweave null character data
because strings are defined over char[] buffers.
The read chunk will have size up to the remainder size of
the buffer, so it is better (safer) to access character data
from the result.
An error is created if the buffer's size is exceeded.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 197

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### chunk - next line
*Defined in: std/io/file.s line 107*

```rust
chunk(edit char[], mut nat pos, edit open) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

Retrieves the next chunk of data from a file,
and stores it on a char[] buffer at a given position.
A string representation of the stored data is returned,
but do note that this may interweave null character data
because strings are defined over char[] buffers.
The read chunk will have size up to the remainder size of
the buffer, so it is better (safer) to access character data
from the result.
An error is created if the buffer's size is exceeded.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 197

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### chunk - next line
*Defined in: std/io/file.s line 107*

```rust
chunk(edit char[], mut nat pos, edit open) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

Retrieves the next chunk of data from a file,
and stores it on a char[] buffer at a given position.
A string representation of the stored data is returned,
but do note that this may interweave null character data
because strings are defined over char[] buffers.
The read chunk will have size up to the remainder size of
the buffer, so it is better (safer) to access character data
from the result.
An error is created if the buffer's size is exceeded.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 197

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### chunk - next line
*Defined in: std/io/process.s line 99*

```rust
chunk(char[], open) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

Retrieves the next chunk of data outputted by a process into its stdout,
and stores it on a char[] buffer at a given position.
A string representation of the stored data are returned.
An error is created if the buffer's
size is exceeded.
The starting position is the buffer's beginning.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 176

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### chunk - next line
*Defined in: std/io/process.s line 99*

```rust
chunk(char[], mut nat pos, open) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

Retrieves the next chunk of data outputted by a process into its stdout,
and stores it on a char[] buffer at a given position.
A string representation of the stored data are returned.
An error is created if the buffer's
size is exceeded.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 164

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


# line
### line - next line
*Defined in: std/io/file.s line 130*

```rust
line(edit circular, edit terminal) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

Retrieves the next line from a file,
and stores it on a CHARS storage effect.
A string representation of the stored data are returned.
The result may not end at a
new line character, in case the line does not fit onto the buffer
at once, in which case it requires multiple opens, or at the
output stream's end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 192

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
49. end of file
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### line - next line
*Defined in: std/io/file.s line 130*

```rust
line(edit circular, edit write) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

Retrieves the next line from a file,
and stores it on a CHARS storage effect.
A string representation of the stored data are returned.
The result may not end at a
new line character, in case the line does not fit onto the buffer
at once, in which case it requires multiple opens, or at the
output stream's end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 192

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
49. end of file
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### line - next line
*Defined in: std/io/file.s line 130*

```rust
line(edit circular, edit write) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

Retrieves the next line from a file,
and stores it on a CHARS storage effect.
A string representation of the stored data are returned.
The result may not end at a
new line character, in case the line does not fit onto the buffer
at once, in which case it requires multiple opens, or at the
output stream's end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 192

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
49. end of file
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### line - next line
*Defined in: std/io/file.s line 130*

```rust
line(edit circular, edit open) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

Retrieves the next line from a file,
and stores it on a CHARS storage effect.
A string representation of the stored data are returned.
The result may not end at a
new line character, in case the line does not fit onto the buffer
at once, in which case it requires multiple opens, or at the
output stream's end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 192

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
49. end of file
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### line - next line
*Defined in: std/io/file.s line 130*

```rust
line(edit circular, edit open) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

Retrieves the next line from a file,
and stores it on a CHARS storage effect.
A string representation of the stored data are returned.
The result may not end at a
new line character, in case the line does not fit onto the buffer
at once, in which case it requires multiple opens, or at the
output stream's end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 192

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
49. end of file
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### line - next line
*Defined in: std/io/file.s line 130*

```rust
line(edit arena, edit terminal) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

Retrieves the next line from a file,
and stores it on a CHARS storage effect.
A string representation of the stored data are returned.
The result may not end at a
new line character, in case the line does not fit onto the buffer
at once, in which case it requires multiple opens, or at the
output stream's end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 188

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
49. end of file
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### line - next line
*Defined in: std/io/file.s line 130*

```rust
line(edit arena, edit write) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

Retrieves the next line from a file,
and stores it on a CHARS storage effect.
A string representation of the stored data are returned.
The result may not end at a
new line character, in case the line does not fit onto the buffer
at once, in which case it requires multiple opens, or at the
output stream's end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 188

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
49. end of file
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### line - next line
*Defined in: std/io/file.s line 130*

```rust
line(edit arena, edit write) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

Retrieves the next line from a file,
and stores it on a CHARS storage effect.
A string representation of the stored data are returned.
The result may not end at a
new line character, in case the line does not fit onto the buffer
at once, in which case it requires multiple opens, or at the
output stream's end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 188

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
49. end of file
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### line - next line
*Defined in: std/io/file.s line 130*

```rust
line(edit arena, edit open) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

Retrieves the next line from a file,
and stores it on a CHARS storage effect.
A string representation of the stored data are returned.
The result may not end at a
new line character, in case the line does not fit onto the buffer
at once, in which case it requires multiple opens, or at the
output stream's end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 188

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
49. end of file
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### line - next line
*Defined in: std/io/file.s line 130*

```rust
line(edit arena, edit open) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

Retrieves the next line from a file,
and stores it on a CHARS storage effect.
A string representation of the stored data are returned.
The result may not end at a
new line character, in case the line does not fit onto the buffer
at once, in which case it requires multiple opens, or at the
output stream's end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 188

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
49. end of file
22. out of bounds
57. not open file
26. can only define strings on non-offset buffers
25. can only define strings on contiguous buffers
</details>


### line - next line
*Defined in: std/io/process.s line 118*

```rust
line(edit circular, open) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

Retrieves the next line outputted by a process into its stdout,
and stores it on a CHARS storage effect.
A string representation of the stored data are returned.
The result may not end at a
new line character, in case the line does not fit onto the buffer
at once, in which case it requires multiple opens, or at the
output stream's end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 163

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### line - next line
*Defined in: std/io/process.s line 118*

```rust
line(edit arena, open) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

Retrieves the next line outputted by a process into its stdout,
and stores it on a CHARS storage effect.
A string representation of the stored data are returned.
The result may not end at a
new line character, in case the line does not fit onto the buffer
at once, in which case it requires multiple opens, or at the
output stream's end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 159

</details>

<details><summary>Potential errors</summary>

49. end of file
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### line
*Defined in: std/graphics.s line 273*

```rust
line(edit window, float p1.x, float p1.y, float p2.x, float p2.y, float thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 54

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_line_ex(pyray.Vector2($p1__x,$p1__y),pyray.Vector2($p2__x,$p2__y),$thickness,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# system\_return
### system\_return
*Defined in: std/io/process.s line 141*

```rust
system_return(cstr) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[os.system($cmd)]`*
# safe
### safe - checks whether a shell command is unsanitized
*Defined in: std/io/process.s line 146*

```rust
safe(cstr) -> (cstr)
```

If it is unsanitized by containing shell characters, this fails.
Otherwise, the command is just returned.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 20

</details>

<details><summary>Potential errors</summary>

50. unsanitized command: shell metacharacter detected
</details>


# system
### system - system command
*Defined in: std/io/process.s line 155*

```rust
system(console CLI, str) -> () on CLI
```

Runs a system command and waits until that completes.
Fails if the return code is non-zero, but does not expose that code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 122

</details>

<details><summary>Potential errors</summary>

17. allocation failed
50. unsanitized command: shell metacharacter detected
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
51. system call failed
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### system - system command
*Defined in: std/io/process.s line 155*

```rust
system(console CLI, cstr _cmd) -> () on CLI
```

Runs a system command and waits until that completes.
Fails if the return code is non-zero, but does not expose that code.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 105

</details>

<details><summary>Potential errors</summary>

50. unsanitized command: shell metacharacter detected
51. system call failed
</details>


# write
### write - creates a new file at cstr path as a writable object, fails if it already exists
*Defined in: std/io/file.s line 54*

```rust
write(str, "binary") -> (edit write {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
53. failed to create file
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### write - creates a new file at cstr path as a writable object, fails if it already exists
*Defined in: std/io/file.s line 54*

```rust
write(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (edit write {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
53. failed to create file
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### write - creates a new file at cstr path as a writable object, fails if it already exists
*Defined in: std/io/file.s line 42*

```rust
write(cstr path, "binary") -> (edit write {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 93

</details>

<details><summary>Potential errors</summary>

53. failed to create file
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### write - creates a new file at cstr path as a writable object, fails if it already exists
*Defined in: std/io/file.s line 42*

```rust
write(cstr) -> (edit write {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

53. failed to create file
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

# terminal
### terminal - opens a new system writable interactive terminal, fails if no display is available
*Defined in: std/io/file.s line 59*

```rust
terminal() -> (edit terminal {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 65

</details>

<details><summary>Potential errors</summary>

54. cannot open a new terminal in the current environment
55. failed to open new terminal
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

# File
### terminal - opens a new system writable interactive terminal, fails if no display is available
*Defined in: std/io/file.s line 59*

```rust
terminal() -> (edit terminal {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 65

</details>

<details><summary>Potential errors</summary>

54. cannot open a new terminal in the current environment
55. failed to open new terminal
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### write - creates a new file at cstr path as a writable object, fails if it already exists
*Defined in: std/io/file.s line 54*

```rust
write(str, "binary") -> (edit write {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
53. failed to create file
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### write - creates a new file at cstr path as a writable object, fails if it already exists
*Defined in: std/io/file.s line 54*

```rust
write(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (edit write {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
53. failed to create file
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### write - creates a new file at cstr path as a writable object, fails if it already exists
*Defined in: std/io/file.s line 42*

```rust
write(cstr path, "binary") -> (edit write {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 93

</details>

<details><summary>Potential errors</summary>

53. failed to create file
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### write - creates a new file at cstr path as a writable object, fails if it already exists
*Defined in: std/io/file.s line 42*

```rust
write(cstr) -> (edit write {tag, mut any ptr unsafe_ptr})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

53. failed to create file
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### open - loads a path as a openable file
*Defined in: std/io/file.s line 36*

```rust
open(str, "binary") -> (edit open {tag, mut any ptr unsafe_ptr})
```

The file name is not maintained and must be tracked externally, if needed.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
52. failed to open file
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### open - loads a path as a openable file
*Defined in: std/io/file.s line 36*

```rust
open(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (edit open {tag, mut any ptr unsafe_ptr})
```

The file name is not maintained and must be tracked externally, if needed.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 75

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
52. failed to open file
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### open - loads a path as a openable file
*Defined in: std/io/file.s line 20*

```rust
open(cstr path, "binary") -> (edit open {tag, mut any ptr unsafe_ptr})
```

The file name is not maintained and must be tracked externally, if needed.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 93

</details>

<details><summary>Potential errors</summary>

52. failed to open file
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

### open - loads a path as a openable file
*Defined in: std/io/file.s line 20*

```rust
open(cstr) -> (edit open {tag, mut any ptr unsafe_ptr})
```

The file name is not maintained and must be tracked externally, if needed.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

52. failed to open file
</details>


<details><summary>defered calls</summary>

```rust
```
</details>

# to\_start
### to\_start - move to file start
*Defined in: std/io/file.s line 72*

```rust
to_start(edit terminal {tag, mut any ptr unsafe_ptr}) -> ()
```

Moves the file opening position to the start of the file.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

56. failed to move to start of closed file
</details>


### to\_start - move to file start
*Defined in: std/io/file.s line 72*

```rust
to_start(edit write {tag, mut any ptr unsafe_ptr}) -> ()
```

Moves the file opening position to the start of the file.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

56. failed to move to start of closed file
</details>


### to\_start - move to file start
*Defined in: std/io/file.s line 72*

```rust
to_start(edit write {tag, mut any ptr unsafe_ptr}) -> ()
```

Moves the file opening position to the start of the file.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

56. failed to move to start of closed file
</details>


### to\_start - move to file start
*Defined in: std/io/file.s line 72*

```rust
to_start(edit open {tag, mut any ptr unsafe_ptr}) -> ()
```

Moves the file opening position to the start of the file.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

56. failed to move to start of closed file
</details>


### to\_start - move to file start
*Defined in: std/io/file.s line 72*

```rust
to_start(edit open {tag, mut any ptr unsafe_ptr}) -> ()
```

Moves the file opening position to the start of the file.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

56. failed to move to start of closed file
</details>


# to\_end
### to\_end - move to file end
*Defined in: std/io/file.s line 78*

```rust
to_end(edit terminal {tag, mut any ptr unsafe_ptr}) -> ()
```

Moves the file opening position to the end of the file
but does not close it.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### to\_end - move to file end
*Defined in: std/io/file.s line 78*

```rust
to_end(edit write {tag, mut any ptr unsafe_ptr}) -> ()
```

Moves the file opening position to the end of the file
but does not close it.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### to\_end - move to file end
*Defined in: std/io/file.s line 78*

```rust
to_end(edit write {tag, mut any ptr unsafe_ptr}) -> ()
```

Moves the file opening position to the end of the file
but does not close it.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### to\_end - move to file end
*Defined in: std/io/file.s line 78*

```rust
to_end(edit open {tag, mut any ptr unsafe_ptr}) -> ()
```

Moves the file opening position to the end of the file
but does not close it.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### to\_end - move to file end
*Defined in: std/io/file.s line 78*

```rust
to_end(edit open {tag, mut any ptr unsafe_ptr}) -> ()
```

Moves the file opening position to the end of the file
but does not close it.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


# seek
### seek - move backward in the file
*Defined in: std/io/file.s line 95*

```rust
seek(edit terminal, nat idx, "backward") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move backward in the file
*Defined in: std/io/file.s line 95*

```rust
seek(edit write, nat idx, "backward") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move backward in the file
*Defined in: std/io/file.s line 95*

```rust
seek(edit write, nat idx, "backward") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move backward in the file
*Defined in: std/io/file.s line 95*

```rust
seek(edit open, nat idx, "backward") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move backward in the file
*Defined in: std/io/file.s line 95*

```rust
seek(edit open, nat idx, "backward") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 47

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move forward in the file
*Defined in: std/io/file.s line 90*

```rust
seek(edit terminal, nat idx, "forward") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move forward in the file
*Defined in: std/io/file.s line 90*

```rust
seek(edit write, nat idx, "forward") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move forward in the file
*Defined in: std/io/file.s line 90*

```rust
seek(edit write, nat idx, "forward") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move forward in the file
*Defined in: std/io/file.s line 90*

```rust
seek(edit open, nat idx, "forward") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move forward in the file
*Defined in: std/io/file.s line 90*

```rust
seek(edit open, nat idx, "forward") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move to a specific position to a file
*Defined in: std/io/file.s line 85*

```rust
seek(edit terminal, nat idx) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move to a specific position to a file
*Defined in: std/io/file.s line 85*

```rust
seek(edit terminal, nat idx, "set") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move to a specific position to a file
*Defined in: std/io/file.s line 85*

```rust
seek(edit write, nat idx) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move to a specific position to a file
*Defined in: std/io/file.s line 85*

```rust
seek(edit write, nat idx, "set") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move to a specific position to a file
*Defined in: std/io/file.s line 85*

```rust
seek(edit write, nat idx) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move to a specific position to a file
*Defined in: std/io/file.s line 85*

```rust
seek(edit write, nat idx, "set") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move to a specific position to a file
*Defined in: std/io/file.s line 85*

```rust
seek(edit open, nat idx) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move to a specific position to a file
*Defined in: std/io/file.s line 85*

```rust
seek(edit open, nat idx, "set") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move to a specific position to a file
*Defined in: std/io/file.s line 85*

```rust
seek(edit open, nat idx) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### seek - move to a specific position to a file
*Defined in: std/io/file.s line 85*

```rust
seek(edit open, nat idx, "set") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 45

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


# position
### position - get the current position in the file
*Defined in: std/io/file.s line 100*

```rust
position(edit terminal {tag, mut any ptr unsafe_ptr}) -> (nat)
```

This can be passed as input to 'seek'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 43

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### position - get the current position in the file
*Defined in: std/io/file.s line 100*

```rust
position(edit write {tag, mut any ptr unsafe_ptr}) -> (nat)
```

This can be passed as input to 'seek'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 43

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### position - get the current position in the file
*Defined in: std/io/file.s line 100*

```rust
position(edit write {tag, mut any ptr unsafe_ptr}) -> (nat)
```

This can be passed as input to 'seek'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 43

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### position - get the current position in the file
*Defined in: std/io/file.s line 100*

```rust
position(edit open {tag, mut any ptr unsafe_ptr}) -> (nat)
```

This can be passed as input to 'seek'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 43

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


### position - get the current position in the file
*Defined in: std/io/file.s line 100*

```rust
position(edit open {tag, mut any ptr unsafe_ptr}) -> (nat)
```

This can be passed as input to 'seek'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 43

</details>

<details><summary>Potential errors</summary>

57. not open file
</details>


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


# raw\_print
### raw\_print - writes a string to a write file
*Defined in: std/io/file.s line 153*

```rust
raw_print(edit write, str) -> ()
```

This is a common body underneath the file print functions,
so prefer those.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 112

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### raw\_print - writes a string to a write file
*Defined in: std/io/file.s line 153*

```rust
raw_print(edit write, str) -> ()
```

This is a common body underneath the file print functions,
so prefer those.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 112

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


### raw\_print - writes a string to a write file
*Defined in: std/io/file.s line 153*

```rust
raw_print(edit terminal, str) -> ()
```

This is a common body underneath the file print functions,
so prefer those.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 112

</details>

<details><summary>Potential errors</summary>

58. failed to write to closed file
59. failed to write to file
</details>


# string\_pair
### string\_pair
*Defined in: std/io/dir.s line 20*

```rust
string_pair(str, str) -> (str, str)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 3

</details>


# is\_dir
### is\_dir - checks whether a path points to an existing directory
*Defined in: std/io/dir.s line 32*

```rust
is_dir(str, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 72

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### is\_dir - checks whether a path points to an existing directory
*Defined in: std/io/dir.s line 32*

```rust
is_dir(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 64

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### is\_dir - checks whether a path points to an existing directory
*Defined in: std/io/dir.s line 23*

```rust
is_dir(cstr) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 10

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[os.path.isdir($path)]`*
# create\_dir
### create\_dir
*Defined in: std/io/dir.s line 48*

```rust
create_dir(str, str) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 80

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
61. failed to create directory
</details>


### create\_dir
*Defined in: std/io/dir.s line 48*

```rust
create_dir(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 72

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
61. failed to create directory
</details>


### create\_dir - creates a directory at a cstr path, fails if it already exists or cannot be created
*Defined in: std/io/dir.s line 39*

```rust
create_dir(cstr) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 31

</details>

<details><summary>Potential errors</summary>

61. failed to create directory
</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[os.path.mkdir($path)]`*
# is\_file
### is\_file - checks whether a path points to an existing file
*Defined in: std/io/dir.s line 57*

```rust
is_file(str, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 19
- Transpiled C size: 72

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### is\_file - checks whether a path points to an existing file
*Defined in: std/io/dir.s line 57*

```rust
is_file(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 64

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### is\_file - checks whether a path points to an existing file
*Defined in: std/io/dir.s line 51*

```rust
is_file(cstr) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[os.path.exists($path)]`*
# wait\_file
### wait\_file - checks whether a path points to an existing file
*Defined in: std/io/dir.s line 72*

```rust
wait_file(str, str) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 19
- Transpiled C size: 72

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### wait\_file - checks whether a path points to an existing file
*Defined in: std/io/dir.s line 72*

```rust
wait_file(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 64

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### wait\_file - checks whether a path points to an existing file
*Defined in: std/io/dir.s line 61*

```rust
wait_file(cstr) -> (bool)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 15

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[os.path.exists($path)]`*
# remove
### remove - removes a file at a path, fails if it cannot be removed
*Defined in: std/io/dir.s line 76*

```rust
remove(str, str) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 110

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
62. failed to remove file
</details>


### remove - removes a file at a path, fails if it cannot be removed
*Defined in: std/io/dir.s line 76*

```rust
remove(cstr) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 85

</details>

<details><summary>Potential errors</summary>

62. failed to remove file
</details>


### remove - removes a file at a path, fails if it cannot be removed
*Defined in: std/io/dir.s line 76*

```rust
remove(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 102

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
62. failed to remove file
</details>


# closedir
### closedir
*Defined in: std/io/dir.s line 83*

```rust
closedir(any ptr) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 22

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `memory.get_foreign($unsafe_ptr).close() or memory.close_foreign($unsafe_ptr)`*
# raw\_entry
### raw\_entry
*Defined in: std/io/dir.s line 105*

```rust
raw_entry(edit open {tag, mut any ptr unsafe_ptr}) -> (cstr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 89

</details>

<details><summary>Potential errors</summary>

64. end of dir
63. not open dir
</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[safeguard(lambda memory=memory: memory.write_cstr(next(memory.get_foreign($f__unsafe_ptr)).name), ExpectedException('end of dir'))]`*
# entry
### entry - the next entry of an open dir
*Defined in: std/io/dir.s line 115*

```rust
entry(edit open {tag, mut any ptr unsafe_ptr}) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

This value is modified as you continue opening
from the same directory.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 40

</details>

<details><summary>Potential errors</summary>

64. end of dir
63. not open dir
</details>


# raw\_get
### raw\_get
*Defined in: std/io/web.s line 20*

```rust
raw_get(console CLI, str, str) -> () on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 96
- Transpiled C size: 540

</details>

<details><summary>Potential errors</summary>

2. null pointer
17. allocation failed
50. unsanitized command: shell metacharacter detected
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
51. system call failed
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
27. string does not fit on buffer
</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `download(memory.as_str($url__unsafe_ptr+$url__dat__pos, $url__dat__length), memory.as_str($path__unsafe_ptr+$path__dat__pos, $path__dat__length))`*
# rotl
### rotl - rotate and shift operation needed for xoshiro sequences
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
*Defined in: std/rand.s line 56*

```rust
splitmix64("time") -> (nat)
```

Computes the seed of a splitmix64 sequence using the clock
as the source of entropy.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 64

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[time.time_ns()]`*
### splitmix64 - next random number
*Defined in: std/rand.s line 34*

```rust
splitmix64(mut nat) -> (mut nat)
```

Computes the next number of a splitmix64 random sequence using the mutable 
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
*Defined in: std/rand.s line 81*

```rust
Rand() -> (edit Rand {tag, mut nat s0, mut nat s1, mut nat s2, mut nat s3})
```

Xoshiro256plus random numbers from https://prng.di.unimi.it/
These and are NOT cryptographically secure.
This a structural type for storing the progress of random number generators 
on four nat state fields. This version defaults to a time-based seed. Its period is 2^256-1.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 26

</details>


### Rand - random number generator
*Defined in: std/rand.s line 68*

```rust
Rand(nat) -> (edit Rand {tag, mut nat s0, mut nat s1, mut nat s2, mut nat s3})
```

Xoshiro256plus random numbers from https://prng.di.unimi.it/
These and are NOT cryptographically secure.
This a type for storing the progress of random number generators 
on four nat state fields. The version is seed-initalized. Its period is 2^256-1.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 79

</details>


# next
### next - next random number
*Defined in: std/rand.s line 89*

```rust
next(mut Rand {tag, mut nat s0, mut nat s1, mut nat s2, mut nat s3}) -> (float)
```

Computes the next random number of a Rand sequence.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 79

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
22. out of bounds
</details>


### next
*Defined in: std/map.s line 54*

```rust
next(robinhood_str_entry[], mut nat pos) -> (mut str {tag, mut char ptr unsafe_ptr, mut nat dat.pos, mut nat dat.length, mut char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 62
- Transpiled C size: 556

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


# Hashable
### nat - an unsigned integer value
*Defined in: builtins line 1*

```rust
nat
```

Represents values in the range `0 to 2^64-1`.

### float
*Defined in: builtins line 1*

```rust
float
```

### cstr - constant string
*Defined in: builtins line 1*

```rust
cstr
```

### nat - retrieved unsigned number from lesser-bit unsigned number
*Defined in: std/core/convert.s line 170*

```rust
nat(nat32) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat - retrieved unsigned number from lesser-bit unsigned number
*Defined in: std/core/convert.s line 170*

```rust
nat(nat16) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### nat - retrieved unsigned number from lesser-bit unsigned number
*Defined in: std/core/convert.s line 170*

```rust
nat(nat8) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


### float - cast to float
*Defined in: std/core/convert.s line 81*

```rust
float(bits {tag, nat value}) -> (float)
```

Converts a bit representation to the corresponding float number.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 18

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 70*

```rust
nat(bits {tag, nat value}) -> (nat)
```

Converts a bit representation to the corresponding natural number.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 35*

```rust
nat(nat) -> (nat)
```

Converting to natural numbers loses information.
 Fails on negative inputs to guard against assumption errors.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 7

</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 35*

```rust
nat(int) -> (nat)
```

Converting to natural numbers loses information.
 Fails on negative inputs to guard against assumption errors.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 42

</details>

<details><summary>Potential errors</summary>

8. cannot convert negative int to nat
</details>


### nat - cast to nat
*Defined in: std/core/convert.s line 35*

```rust
nat(float) -> (nat)
```

Converting to natural numbers loses information.
 Fails on negative inputs to guard against assumption errors.

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

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### float - cast to float
*Defined in: std/core/convert.s line 20*

```rust
float(int) -> (float)
```

May lose information because floats are not exact representation of all integers.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### float - cast to float
*Defined in: std/core/convert.s line 20*

```rust
float(float) -> (float)
```

Serves as a tautology function for code that parses on multiple number types.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 7

</details>


### str - tautology function for strings
*Defined in: std/core/string.s line 65*

```rust
str(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 57*

```rust
str(char[]) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 165

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
27. string does not fit on buffer
</details>


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 57*

```rust
str(char[], nat length) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 147

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
27. string does not fit on buffer
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 50*

```rust
str(char[], nat dat.pos, nat dat.length, char dat.first) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 100

</details>

<details><summary>Potential errors</summary>

25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 45*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 43

</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 41*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 218*

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
*Defined in: std/core/string.s line 218*

```rust
cstr(unsafe_temp {tag, cstr cstr, str}) -> (cstr)
```

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 218*

```rust
cstr(unsafe_temp {tag, cstr cstr, str}) -> (cstr)
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
str(cstr) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
str(char[], nat endpos, "from", nat pos) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 77*

```rust
str(char[], nat pos, "to", nat endpos) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 69*

```rust
str(char[], nat pos, "len", nat length) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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

25. can only define strings on contiguous buffers
2. null pointer
26. can only define strings on non-offset buffers
22. out of bounds
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
- SSA variables: 32
- Transpiled C size: 262

</details>

<details><summary>Potential errors</summary>

2. null pointer
5. modulo by zero
22. out of bounds
</details>


# to\_hash\_base
### to\_hash\_base
*Defined in: std/hash.s line 43*

```rust
to_hash_base(nat) -> (bits {tag, nat value})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### to\_hash\_base
*Defined in: std/hash.s line 43*

```rust
to_hash_base(int) -> (bits {tag, nat value})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### to\_hash\_base
*Defined in: std/hash.s line 43*

```rust
to_hash_base(float) -> (bits {tag, nat value})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 11

</details>


### to\_hash\_base
*Defined in: std/hash.s line 40*

```rust
to_hash_base(cstr) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 20

</details>


### to\_hash\_base
*Defined in: std/hash.s line 40*

```rust
to_hash_base(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
raw(cstr) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
raw(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
raw(str, nat cost) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
is_zero(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (bool)
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

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

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

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# unpack
### unpack
*Defined in: std/mini.s line 47*

```rust
unpack(char[], nat16 dat.pos, nat16 dat.length) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 19
- Transpiled C size: 95

</details>

<details><summary>Potential errors</summary>

27. string does not fit on buffer
</details>


### unpack - unpack a compact str
*Defined in: std/mini.s line 41*

```rust
unpack(str {tag, char ptr unsafe_ptr, nat16 dat.pos, nat16 dat.length}) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

The created compact str is unpacked into its 'nat'-using representation
that is more efficient for computations in 64-bit architectures.

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 40

</details>


# post
### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit circular, cstr url, cstr _body) -> (nat status, str) on CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 123

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit circular, cstr url, cstr _body, cstr content_type) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 119

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit circular, cstr url, str) -> (nat status, str) on CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 140

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit circular, cstr url, str, cstr content_type) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 136

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit circular, str, cstr _body) -> (nat status, str) on CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 129

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit circular, str, cstr _body, cstr content_type) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 125

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit circular, str, str) -> (nat status, str) on CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 146

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit circular, str, str, cstr content_type) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 142

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit arena, cstr url, cstr _body) -> (nat status, str) on CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 123

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit arena, cstr url, cstr _body, cstr content_type) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 119

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit arena, cstr url, str) -> (nat status, str) on CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 140

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit arena, cstr url, str, cstr content_type) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 136

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit arena, str, cstr _body) -> (nat status, str) on CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 129

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit arena, str, cstr _body, cstr content_type) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 125

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit arena, str, str) -> (nat status, str) on CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 146

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(edit arena, str, str, cstr content_type) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 142

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(new CHARS, cstr url, cstr _body) -> (nat status, str) on CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 108

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(new CHARS, cstr url, cstr _body, cstr content_type) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 104

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(new CHARS, cstr url, str) -> (nat status, str) on CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 125

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(new CHARS, cstr url, str, cstr content_type) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 121

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(new CHARS, str, cstr _body) -> (nat status, str) on CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 114

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(new CHARS, str, cstr _body, cstr content_type) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 110

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(new CHARS, str, str) -> (nat status, str) on CHARS
```

The default application/json content type is used.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 131

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

### post - REST post request
*Defined in: std/net/fetch.s line 96*

```rust
post(new CHARS, str, str, cstr content_type) -> (nat status, str) on CHARS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 127

</details>

<details><summary>Potential errors</summary>

2. null pointer
67. curl initialization failed
68. out of memory while reading response
6. nat subtraction would yield a negative
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
exists(any ptr) -> (bool)
free(mut any ptr) -> ()
```
</details>

# abs
### abs - absolute value
*Defined in: std/sci/math.s line 20*

```rust
abs(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 38

</details>


### abs - absolute value
*Defined in: std/sci/math.s line 28*

```rust
abs(int) -> (int)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 46

</details>


# sqrt
### sqrt - square root
*Defined in: std/sci/math.s line 36*

```rust
sqrt(float) -> (float)
```

There exists only a float version. Other numbers must be cast to
float to obtain their square root.
```python
import std.core
def main(on CLI)
    print nat sqrt float 4

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


# sin
### sin
*Defined in: std/sci/math.s line 48*

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
*Defined in: std/sci/math.s line 53*

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
*Defined in: std/sci/math.s line 58*

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
*Defined in: std/sci/math.s line 63*

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
*Defined in: std/sci/math.s line 68*

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
*Defined in: std/sci/math.s line 73*

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
*Defined in: std/sci/math.s line 78*

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
*Defined in: std/sci/math.s line 88*

```rust
atan(float x, float y) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 12

</details>


### atan
*Defined in: std/sci/math.s line 83*

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
*Defined in: std/sci/math.s line 93*

```rust
exp(float) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 10

</details>


# isnan
### isnan - Checks if a float number is nan, for example due to
*Defined in: std/sci/math.s line 104*

```rust
isnan(float) -> (bool)
```

division by zero or infinities being involved in computations.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 14

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[math.isnan(x)]`*
# isinf
### isinf - is infinity
*Defined in: std/sci/math.s line 112*

```rust
isinf(float) -> (bool)
```

Checks if a float number is positive or negative infinity.

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
vec(float ptr unsafe_ptr, nat pos, nat length) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length})
```

Warning: Directly calling this constructor without safety checks is unsafe.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 8
- Transpiled C size: 15

</details>


### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit circular, nat length) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 204

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
</details>


### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit circular, nat length, "dirty") -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
</details>


### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit arena, nat length) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 204

</details>

<details><summary>Potential errors</summary>

69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
</details>


### vec - vector allocation
*Defined in: std/sci/vec.s line 48*

```rust
vec(edit arena, nat length, "dirty") -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
</details>


### vec - treat a float buffer as a vector
*Defined in: std/sci/vec.s line 36*

```rust
vec(edit float[]) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 109

</details>

<details><summary>Potential errors</summary>

69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
</details>


### vec - vector on a new buffer
*Defined in: std/sci/vec.s line 28*

```rust
vec(bucket, nat length) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 123

</details>

<details><summary>Potential errors</summary>

17. allocation failed
</details>


### vec - vector on a new buffer
*Defined in: std/sci/vec.s line 28*

```rust
vec(bucket, nat length, "dirty") -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 96

</details>

<details><summary>Potential errors</summary>

17. allocation failed
</details>


### vec - vector on a new buffer
*Defined in: std/sci/vec.s line 28*

```rust
vec(new FLOATS, nat length) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 28
- Transpiled C size: 123

</details>

<details><summary>Potential errors</summary>

17. allocation failed
</details>


### vec - vector on a new buffer
*Defined in: std/sci/vec.s line 28*

```rust
vec(new FLOATS, nat length, "dirty") -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

Has the provided length. Requires a 'new()' allocator to denote that the vector will be placed on a new buffer.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 96

</details>

<details><summary>Potential errors</summary>

17. allocation failed
</details>


### vec - view a matrix as a vector
*Defined in: std/sci/mat.s line 87*

```rust
vec(mat {tag, float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride}) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length})
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
mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride})
```

Warning: Directly calling this constructor without safety checks is unsafe.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 23

</details>


### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(edit bucket, nat rows, nat cols, "dirty") -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 116

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols, "dirty") -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 116

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 76*

```rust
mat(vec, "col") -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride})
```

A 'type "row"' or 'type "col"' marker is needed
to indicate the new matrix's orientation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 94

</details>


### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 76*

```rust
mat(vec, "row") -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride})
```

A 'type "row"' or 'type "col"' marker is needed
to indicate the new matrix's orientation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 90

</details>


### mat - matrix on an existing float[] buffer
*Defined in: std/sci/mat.s line 54*

```rust
mat(edit float[], nat rows) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 167

</details>

<details><summary>Potential errors</summary>

4. division by zero
23. arena is out of space
75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
77. buffer size not divisible by vector rows
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 38*

```rust
mat(edit circular, nat rows, nat cols) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 228

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 38*

```rust
mat(edit circular, nat rows, nat cols, "dirty") -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 181

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 38*

```rust
mat(edit arena, nat rows, nat cols) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 228

</details>

<details><summary>Potential errors</summary>

75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
23. arena is out of space
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 38*

```rust
mat(edit arena, nat rows, nat cols, "dirty") -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 181

</details>

<details><summary>Potential errors</summary>

75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
23. arena is out of space
</details>


### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(edit bucket, nat rows, nat cols) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

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
coo(sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz) -> (mut coo {tag, mut sparse_element ptr unsafe_ptr, mut nat rows, mut nat cols, mut nat nnz})
```

Warning: Directly calling this constructor without safety checks is unsafe.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 19

</details>


### coo
*Defined in: std/sci/coo.s line 40*

```rust
coo(sparse_element[], nat rows, nat cols) -> (mut coo {tag, mut sparse_element ptr unsafe_ptr, mut nat rows, mut nat cols, mut nat nnz})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 40

</details>


### coo - allocate a sparse matrix
*Defined in: std/sci/coo.s line 34*

```rust
coo(nat rows, nat cols, nat nnz) -> (mut coo {tag, mut sparse_element ptr unsafe_ptr, mut nat rows, mut nat cols, mut nat nnz})
```

This creates a new buffer of sparse elements for convenience.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 97

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# float\_allocator
### bucket - grouped allocations on new memory
*Defined in: std/core/allocators.s line 33*

```rust
bucket() -> (edit bucket {tag, mut bucket_contents ptr unsafe_ptr})
```

This is similar to 'new' but moves all allocated memory together,
releasing it only when there is no further use for any of its contents.
Do note that this operation is typically the lazy way out,
as it acquires and releases memory using one extra layer of indirection
compared to structures like arenas. On the other hand, it's pretty versatile
for holding conditional results. Example:
```python
import std.core
def conditional(bool case)
    CHARS = edit bucket()
    if case: s = copy 123
    else:    s = copy 345
    return (s, CHARS) # this would not be possible with 'CHARS = new()'
def main()
    CLI = edit console()
    print conditional true
    print conditional false
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 70

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
of(nat) -> (nat from, nat to)
range(nat _from, nat to) -> (edit range {tag, mut nat from, nat to})
mutget(edit range, nat skipped) -> (nat)
ptr
mul(nat x, nat y) -> (nat)
add(any ptr allocated, nat offset) -> (any ptr {follows any ptr allocated})
dereference_ptr(any ptr) -> (any ptr)
free(mut any ptr) -> ()
free(mut any ptr) -> ()
free(mut any ptr) -> ()
```
</details>

### new - allocations on new memory
*Defined in: std/core/allocators.s line 22*

```rust
new() -> (new {tag})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t4186t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t4120t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t3829t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t664t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t625t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t623t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t621t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### circular
*Defined in: std/sci/vec.s line 24*

```rust
circular("float__t4t") -> (edit circular {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t4186t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t4120t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t3829t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t664t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t625t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t623t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t621t") -> (edit arena {tag, edit float[], mut nat pos})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 48

</details>


### arena
*Defined in: std/sci/vec.s line 23*

```rust
arena("float__t4t") -> (edit arena {tag, edit float[], mut nat pos})
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
constvec(float[]) -> (vec {tag, float ptr unsafe_ptr, nat pos, nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 109

</details>

<details><summary>Potential errors</summary>

69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
</details>


# iter
### iter - a zero-cost wrapper over vectors for iteration
*Defined in: std/sci/vec.s line 76*

```rust
iter(vec {tag, float ptr unsafe_ptr, nat pos, nat length}) -> (iter {tag, vec})
```

This has no additional storage; not even state tracking.
Its only purpose is to support a 'get' function that
provides an expected instead of normal failure during
debugging, in order for vector loops to not appear in
in stack traces. The normal '"out of bounds"' failure
is reframed as an '"iteration end"' expected failure,
as if a 'range' was used. You can still iterate over
the underlying vector, but debug mode will print too
many stack traces when iterating within other loops. Example:
```python
# main.s
import std.core
def main()
    CLI = edit console()
    v = [1.0,2.0,3.0]
    for i in iter v: print i
```
If this example is compiled with './smoll main.s --debug'
there will be no error stack trace.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


# reduce
### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "sub", vec, "mul", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 52
- Transpiled C size: 382

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "sub", vec, "mul", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 332

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "sub", vec, "mul", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 330

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "sub", vec, "add", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 52
- Transpiled C size: 382

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "sub", vec, "add", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 332

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "sub", vec, "mul") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 286

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "sub", vec, "add", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 330

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "sub", vec, "add") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 286

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "sub", vec, "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 48
- Transpiled C size: 318

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "sub", vec, "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 268

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "sub", vec, "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 266

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "sub", vec) -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 222

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", vec, "mul", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 51
- Transpiled C size: 382

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", vec, "mul", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 48
- Transpiled C size: 332

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", vec, "mul", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 48
- Transpiled C size: 330

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", vec, "mul") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 286

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", vec, "add", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 52
- Transpiled C size: 382

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", vec, "add", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 332

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", vec, "add", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 330

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", vec, "add") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 286

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", vec, "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 48
- Transpiled C size: 318

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", vec, "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 268

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", vec, "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 266

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", vec) -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 222

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, vec, "mul", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 283

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, vec, "mul", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 233

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, vec, "mul", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 231

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, vec, "mul") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 187

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, vec, "add", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 45
- Transpiled C size: 283

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, vec, "add", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 233

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, vec, "add", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 42
- Transpiled C size: 231

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, vec, "add") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 187

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, vec, "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 41
- Transpiled C size: 219

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, vec, "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 169

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, vec, "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 167

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, vec) -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 123

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 291

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 241

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 239

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "mul") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 195

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "add", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 291

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "add", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 241

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "add", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 239

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "add") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 195

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 227

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 177

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 36
- Transpiled C size: 175

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec {tag, float ptr unsafe_ptr, nat pos, nat length}) -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 131

</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "rel", vec, "mul", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 492

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "rel", vec, "mul", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 57
- Transpiled C size: 442

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "rel", vec, "mul", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 57
- Transpiled C size: 440

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "rel", vec, "mul") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 396

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "rel", vec, "add", "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 60
- Transpiled C size: 492

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "rel", vec, "add", "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 57
- Transpiled C size: 442

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "rel", vec, "add", "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 57
- Transpiled C size: 440

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "rel", vec, "add") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 396

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "rel", vec, "l2") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 428

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "rel", vec, "sqr") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 378

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "rel", vec, "abs") -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 53
- Transpiled C size: 376

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
22. out of bounds
</details>


### reduce - reduce a vector to one value
*Defined in: std/sci/vec.s line 199*

```rust
reduce(vec, "rel", vec) -> (float)
```

You can specify an additive or multiplicative reduction,
as well as some transformation that can be applied.
A second vector can also be provided to be subtracted or obtain relative value differences
without allocating any memory for operation results.
All computations are branchless, as literals are optimized away during compilation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 49
- Transpiled C size: 332

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
22. out of bounds
</details>


# dot
### dot - dot product
*Defined in: std/sci/vec.s line 235*

```rust
dot(vec, vec) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 32

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


# sum
### sum - sum
*Defined in: std/sci/vec.s line 239*

```rust
sum(vec {tag, float ptr unsafe_ptr, nat pos, nat length}) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
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
sum(edit circular, coo, "col") -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

result[j] = sum of all stored values in column j

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 306

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
22. out of bounds
24. does not fit in circular arena
</details>


### sum - sum of each column
*Defined in: std/sci/coo.s line 117*

```rust
sum(edit arena, coo, "col") -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

result[j] = sum of all stored values in column j

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 306

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
22. out of bounds
</details>


### sum - sum of each column
*Defined in: std/sci/coo.s line 117*

```rust
sum(edit bucket, coo, "col") -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

result[j] = sum of all stored values in column j

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 293

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
22. out of bounds
</details>


### sum - sum of each column
*Defined in: std/sci/coo.s line 117*

```rust
sum(new FLOATS, coo, "col") -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

result[j] = sum of all stored values in column j

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 291

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
22. out of bounds
</details>


### sum - sum of each row
*Defined in: std/sci/coo.s line 109*

```rust
sum(edit circular, coo, "row") -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

result[i] = sum of all stored values in row i

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 306

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
22. out of bounds
24. does not fit in circular arena
</details>


### sum - sum of each row
*Defined in: std/sci/coo.s line 109*

```rust
sum(edit arena, coo, "row") -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

result[i] = sum of all stored values in row i

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 38
- Transpiled C size: 306

</details>

<details><summary>Potential errors</summary>

2. null pointer
69. can only place vectors on contiguous buffers
70. cannot place vectors on buffer offsets
23. arena is out of space
22. out of bounds
</details>


### sum - sum of each row
*Defined in: std/sci/coo.s line 109*

```rust
sum(edit bucket, coo, "row") -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

result[i] = sum of all stored values in row i

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 293

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
22. out of bounds
</details>


### sum - sum of each row
*Defined in: std/sci/coo.s line 109*

```rust
sum(new FLOATS, coo, "row") -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) on FLOATS
```

result[i] = sum of all stored values in row i

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 291

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
22. out of bounds
</details>


# mean
### mean
*Defined in: std/sci/stats.s line 32*

```rust
mean(accumulator {tag, float sums, float square_sums, nat count}) -> (float)
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
*Defined in: std/sci/vec.s line 243*

```rust
mean(vec {tag, float ptr unsafe_ptr, nat pos, nat length}) -> (float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 7 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 56

</details>

<details><summary>Potential errors</summary>

4. division by zero
</details>


# min
### min - minimum value
*Defined in: std/sci/vec.s line 247*

```rust
min(vec {tag, float ptr unsafe_ptr, nat pos, nat length}) -> (mut float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 179

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


# max
### max - maximum value
*Defined in: std/sci/vec.s line 254*

```rust
max(vec {tag, float ptr unsafe_ptr, nat pos, nat length}) -> (mut float)
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 179

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


# var
### var - variance
*Defined in: std/sci/vec.s line 262*

```rust
var(vec {tag, float ptr unsafe_ptr, nat pos, nat length}) -> (float)
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
std(accumulator {tag, float sums, float square_sums, nat count}) -> (float)
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
*Defined in: std/sci/vec.s line 273*

```rust
std(vec {tag, float ptr unsafe_ptr, nat pos, nat length}) -> (float)
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
*Defined in: std/sci/vec.s line 311*

```rust
self(mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length}) -> (edit arena, mut vec)
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
accumulator() -> (edit accumulator {tag, mut float sums, mut float square_sums, mut nat count})
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
- Transpiled C size: 59

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
- Transpiled C size: 638

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
72. vectors must have the same length
73. at least two values required
74. undefined for constant vectors
</details>


# rows
### rows - number of rows
*Defined in: std/sci/mat.s line 22*

```rust
rows(mat {tag, float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride}) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3

</details>


### rows - number of rows
*Defined in: std/sci/coo.s line 22*

```rust
rows(coo {tag, sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz}) -> (nat)
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
cols(mat {tag, float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride}) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 3

</details>


### cols - number of columns
*Defined in: std/sci/coo.s line 26*

```rust
cols(coo {tag, sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz}) -> (nat)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


# bucket\_or\_new
### bucket - grouped allocations on new memory
*Defined in: std/core/allocators.s line 33*

```rust
bucket() -> (edit bucket {tag, mut bucket_contents ptr unsafe_ptr})
```

This is similar to 'new' but moves all allocated memory together,
releasing it only when there is no further use for any of its contents.
Do note that this operation is typically the lazy way out,
as it acquires and releases memory using one extra layer of indirection
compared to structures like arenas. On the other hand, it's pretty versatile
for holding conditional results. Example:
```python
import std.core
def conditional(bool case)
    CHARS = edit bucket()
    if case: s = copy 123
    else:    s = copy 345
    return (s, CHARS) # this would not be possible with 'CHARS = new()'
def main()
    CLI = edit console()
    print conditional true
    print conditional false
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 70

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
of(nat) -> (nat from, nat to)
range(nat _from, nat to) -> (edit range {tag, mut nat from, nat to})
mutget(edit range, nat skipped) -> (nat)
ptr
mul(nat x, nat y) -> (nat)
add(any ptr allocated, nat offset) -> (any ptr {follows any ptr allocated})
dereference_ptr(any ptr) -> (any ptr)
free(mut any ptr) -> ()
free(mut any ptr) -> ()
free(mut any ptr) -> ()
```
</details>

### new - allocations on new memory
*Defined in: std/core/allocators.s line 22*

```rust
new() -> (new {tag})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 3

</details>


# constmat
### constmat - immutable matrix on an immutable float[] buffer
*Defined in: std/sci/mat.s line 48*

```rust
constmat(float[], nat rows) -> (mat {tag, float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 167

</details>

<details><summary>Potential errors</summary>

4. division by zero
23. arena is out of space
75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
77. buffer size not divisible by vector rows
</details>


# mutvec
### mutvec - view a matrix as a vector
*Defined in: std/sci/mat.s line 91*

```rust
mutvec(mat {tag, float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride}) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 11
- Transpiled C size: 31

</details>


# row
### row - view matrix row as a vector
*Defined in: std/sci/mat.s line 95*

```rust
row(mat, nat i) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 64

</details>

<details><summary>Potential errors</summary>

78. row out of bounds
</details>


# nnz
### nnz - number of stored non-zero entries
*Defined in: std/sci/coo.s line 30*

```rust
nnz(coo {tag, sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz}) -> (nat)
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
todense(edit circular, coo) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 276

</details>

<details><summary>Potential errors</summary>

2. null pointer
24. does not fit in circular arena
75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
78. row out of bounds
79. column out of bounds
</details>


### todense - convert to dense mat
*Defined in: std/sci/coo.s line 88*

```rust
todense(edit arena, coo) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 276

</details>

<details><summary>Potential errors</summary>

2. null pointer
23. arena is out of space
75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
78. row out of bounds
79. column out of bounds
</details>


### todense - convert to dense mat
*Defined in: std/sci/coo.s line 88*

```rust
todense(edit bucket, coo) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 264

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
78. row out of bounds
79. column out of bounds
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### todense - convert to dense mat
*Defined in: std/sci/coo.s line 88*

```rust
todense(new FLOATS, coo) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 261

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
78. row out of bounds
79. column out of bounds
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# matrix
### coo - coo sparse matrix type declaration
*Defined in: std/sci/unsafe.s line 32*

```rust
coo(sparse_element ptr unsafe_ptr, nat rows, nat cols, nat nnz) -> (mut coo {tag, mut sparse_element ptr unsafe_ptr, mut nat rows, mut nat cols, mut nat nnz})
```

Warning: Directly calling this constructor without safety checks is unsafe.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 19

</details>


### mat - matrix type declaration
*Defined in: std/sci/unsafe.s line 24*

```rust
mat(float ptr unsafe_ptr, nat pos, nat rows, nat cols, nat stride) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride})
```

Warning: Directly calling this constructor without safety checks is unsafe.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 23

</details>


### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(edit bucket, nat rows, nat cols, "dirty") -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 30
- Transpiled C size: 116

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 32
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(new FLOATS, nat rows, nat cols, "dirty") -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 116

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### coo
*Defined in: std/sci/coo.s line 40*

```rust
coo(sparse_element[], nat rows, nat cols) -> (mut coo {tag, mut sparse_element ptr unsafe_ptr, mut nat rows, mut nat cols, mut nat nnz})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 40

</details>


### coo - allocate a sparse matrix
*Defined in: std/sci/coo.s line 34*

```rust
coo(nat rows, nat cols, nat nnz) -> (mut coo {tag, mut sparse_element ptr unsafe_ptr, mut nat rows, mut nat cols, mut nat nnz})
```

This creates a new buffer of sparse elements for convenience.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 97

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 76*

```rust
mat(vec, "col") -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride})
```

A 'type "row"' or 'type "col"' marker is needed
to indicate the new matrix's orientation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 94

</details>


### mat - view a vector as a matrix on the same memory
*Defined in: std/sci/mat.s line 76*

```rust
mat(vec, "row") -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride})
```

A 'type "row"' or 'type "col"' marker is needed
to indicate the new matrix's orientation.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 90

</details>


### mat - matrix on an existing float[] buffer
*Defined in: std/sci/mat.s line 54*

```rust
mat(edit float[], nat rows) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 26
- Transpiled C size: 167

</details>

<details><summary>Potential errors</summary>

4. division by zero
23. arena is out of space
75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
77. buffer size not divisible by vector rows
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 38*

```rust
mat(edit circular, nat rows, nat cols) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 228

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 38*

```rust
mat(edit circular, nat rows, nat cols, "dirty") -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 181

</details>

<details><summary>Potential errors</summary>

24. does not fit in circular arena
75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 38*

```rust
mat(edit arena, nat rows, nat cols) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 43
- Transpiled C size: 228

</details>

<details><summary>Potential errors</summary>

75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
23. arena is out of space
</details>


### mat - matrix on an existing vecpos
*Defined in: std/sci/mat.s line 38*

```rust
mat(edit arena, nat rows, nat cols, "dirty") -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 181

</details>

<details><summary>Potential errors</summary>

75. can only place matrices on contiguous buffers
76. cannot place matrices on buffer offsets
23. arena is out of space
</details>


### mat - matrix on a fresh buffer
*Defined in: std/sci/mat.s line 30*

```rust
mat(edit bucket, nat rows, nat cols) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) on FLOATS
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 33
- Transpiled C size: 157

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# tagged
### tagged - blank tag structure
*Defined in: std/tag.s line 20*

```rust
tagged(cstr) -> (tagged {tag, cstr value})
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

2. null pointer
87. does not match
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


<details><summary>defered calls</summary>

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

22. out of bounds
23. arena is out of space
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

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### match
*Defined in: std/pipe.s line 189*

```rust
match(cstr pipe, cstr type_name) -> (mut char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 76
- Transpiled C size: 475

</details>

<details><summary>Potential errors</summary>

2. null pointer
99. functors cannot be matched
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# lane
### lane
*Defined in: std/pipe.s line 21*

```rust
lane(nat) -> (mut char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 89
- Transpiled C size: 641

</details>

<details><summary>Potential errors</summary>

17. allocation failed
6. nat subtraction would yield a negative
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# pipe\_data
### pipe\_data - blank pipe_data structure
*Defined in: std/pipe.s line 37*

```rust
pipe_data(cstr value, nat max_stored_size) -> (edit pipe_data {tag, cstr value, mut nat readers, mut nat writers, nat max_stored_size, nat, nat, nat, nat, nat})
```

Ensures that 'pipe_data ptr' has a unique type and allocates at least a cstr's
(a pointer's) + sizeof(mutex_t) worth of storage so that tag checking and
mutex checking are always valid. Mutex size is assumed to be less than 40 bytes
across all systems. The pipe stores state information that is used for various
access operations.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 77

</details>


# pipe
### pipe - a pip for thread data transfer
*Defined in: std/pipe.s line 49*

```rust
pipe(pipe_data ptr) -> (pipe {tag, pipe_data ptr unsafe_data})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# unsafe\_pipe\_lock
### unsafe\_pipe\_lock
*Defined in: std/pipe.s line 53*

```rust
unsafe_pipe_lock(pipe {tag, pipe_data ptr unsafe_data}) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 70

</details>

<details><summary>Potential errors</summary>

2. null pointer
91. mutex too large to fit on allocated lane of 64 bytes
</details>


# unsafe\_pipe\_unlock
### unsafe\_pipe\_unlock
*Defined in: std/pipe.s line 59*

```rust
unsafe_pipe_unlock(pipe {tag, pipe_data ptr unsafe_data}) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 70

</details>

<details><summary>Potential errors</summary>

2. null pointer
91. mutex too large to fit on allocated lane of 64 bytes
</details>


# unsafe\_pipe\_own
### unsafe\_pipe\_own
*Defined in: std/pipe.s line 65*

```rust
unsafe_pipe_own(pipe, "writer") -> (pipe, nat readers, nat writers)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 221

</details>

<details><summary>Potential errors</summary>

2. null pointer
91. mutex too large to fit on allocated lane of 64 bytes
</details>


### unsafe\_pipe\_own
*Defined in: std/pipe.s line 65*

```rust
unsafe_pipe_own(pipe, "reader") -> (pipe, nat readers, nat writers)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 221

</details>

<details><summary>Potential errors</summary>

2. null pointer
91. mutex too large to fit on allocated lane of 64 bytes
</details>


# unsafe\_pipe\_disown
### unsafe\_pipe\_disown
*Defined in: std/pipe.s line 79*

```rust
unsafe_pipe_disown(pipe, "writer") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 180

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
91. mutex too large to fit on allocated lane of 64 bytes
</details>


### unsafe\_pipe\_disown
*Defined in: std/pipe.s line 79*

```rust
unsafe_pipe_disown(pipe, "reader") -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 180

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
91. mutex too large to fit on allocated lane of 64 bytes
</details>


# unsafe\_spawn
### unsafe\_spawn
*Defined in: std/pipe.s line 109*

```rust
unsafe_spawn((pipe {tag, pipe_data ptr}) -> () func, pipe) -> (edit unsafe_spawn {tag, mut any ptr unsafe_ptr {follows any ptr _unsafe_ptr}})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 23

</details>


# join
### join
*Defined in: std/pipe.s line 114*

```rust
join(edit unsafe_spawn {tag, mut any ptr unsafe_ptr}) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 22

</details>


# cpu
### cpu - an abstraction for the cpu
*Defined in: std/pipe.s line 118*

```rust
cpu(nat) -> (cpu {tag, nat cores})
```

For now, the number of cores need to be manually inputted.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 3

</details>


# growing\_thread\_pool
### growing\_thread\_pool - a thread pool
*Defined in: std/pipe.s line 123*

```rust
growing_thread_pool(cpu, nat shared_storage) -> (edit growing_thread_pool {tag, cpu, mut arena, mut arena, mut bool joined}) on CPU
```

This consumes all CPU cores, and can spawn up to
that many threads. Completed threads cannot be
recovered, but new ones can be added until the
pool is full. This can be used to spawn several
workers at program start.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 80
- Transpiled C size: 238

</details>

<details><summary>Potential errors</summary>

17. allocation failed
2. null pointer
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
```rust
free(mut any ptr) -> ()
```
```rust
not(bool) -> (bool)
len(any[]) -> (nat)
of(nat) -> (nat from, nat to)
range(nat _from, nat to) -> (edit range {tag, mut nat from, nat to})
mutget(edit range, nat skipped) -> (nat)
mutget(edit any[], nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})
join(edit unsafe_spawn {tag, mut any ptr unsafe_ptr}) -> ()
```
</details>

# thread
### thread
*Defined in: std/pipe.s line 140*

```rust
thread(edit growing_thread_pool, (pipe {tag, pipe_data ptr}) -> () func, pipe) -> (mut unsafe_spawn {tag, mut any ptr unsafe_ptr {follows any ptr ..unsafe_ptr}}) on THREADS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 35
- Transpiled C size: 120

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
23. arena is out of space
</details>


# unsafe\_pipe\_data\_match
### unsafe\_pipe\_data\_match
*Defined in: std/pipe.s line 150*

```rust
unsafe_pipe_data_match(open, cstr name, any ptr type) -> (mut any ptr {follows any ptr type})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 98

</details>

<details><summary>Potential errors</summary>

2. null pointer
95. type does not match pipe contents
</details>


### unsafe\_pipe\_data\_match
*Defined in: std/pipe.s line 145*

```rust
unsafe_pipe_data_match(open, cstr name, any ptr type) -> (any ptr {follows any ptr type})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 98

</details>

<details><summary>Potential errors</summary>

2. null pointer
95. type does not match pipe contents
</details>


# unsafe\_pipe\_data\_mutex\_init
### unsafe\_pipe\_data\_mutex\_init
*Defined in: std/pipe.s line 155*

```rust
unsafe_pipe_data_mutex_init(mut pipe_data ptr) -> (mut pipe_data ptr)
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 30

</details>


<details><summary>defered calls</summary>

```rust
add(any ptr allocated, nat offset) -> (any ptr {follows any ptr allocated})
```
</details>

# pipe\_data\_alloc
### pipe\_data\_alloc
*Defined in: std/pipe.s line 163*

```rust
pipe_data_alloc(edit growing_thread_pool, nat size) -> (mut char ptr) on THREADS
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 27
- Transpiled C size: 80

</details>

<details><summary>Potential errors</summary>

22. out of bounds
23. arena is out of space
</details>


# shared
### shared
*Defined in: std/pipe.s line 166*

```rust
shared(cstr) -> (mut char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 125
- Transpiled C size: 879

</details>

<details><summary>Potential errors</summary>

96. structural types cannot be shared
97. functors cannot be shared
2. null pointer
98. shared surface cannot be a structural type
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
23. arena is out of space
88. empty input name
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### shared
*Defined in: std/pipe.s line 166*

```rust
shared(cstr surface, cstr obj) -> (mut char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 124
- Transpiled C size: 875

</details>

<details><summary>Potential errors</summary>

96. structural types cannot be shared
97. functors cannot be shared
2. null pointer
98. shared surface cannot be a structural type
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
22. out of bounds
23. arena is out of space
88. empty input name
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# unsafe\_blob
### unsafe\_blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 19*

```rust
unsafe_blob(any ptr unsafe_ptr, 64) -> (unsafe_blob {tag, any ptr unsafe_ptr, 64})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


### unsafe\_blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 19*

```rust
unsafe_blob(any ptr unsafe_ptr, 32) -> (unsafe_blob {tag, any ptr unsafe_ptr, 32})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


### unsafe\_blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 19*

```rust
unsafe_blob(any ptr unsafe_ptr, 16) -> (unsafe_blob {tag, any ptr unsafe_ptr, 16})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


### unsafe\_blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 19*

```rust
unsafe_blob(any ptr unsafe_ptr, 8) -> (unsafe_blob {tag, any ptr unsafe_ptr, 8})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


### unsafe\_blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 19*

```rust
unsafe_blob(any ptr unsafe_ptr, 4) -> (unsafe_blob {tag, any ptr unsafe_ptr, 4})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


### unsafe\_blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 19*

```rust
unsafe_blob(any ptr unsafe_ptr, 2) -> (unsafe_blob {tag, any ptr unsafe_ptr, 2})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


### unsafe\_blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 19*

```rust
unsafe_blob(any ptr unsafe_ptr, 1) -> (unsafe_blob {tag, any ptr unsafe_ptr, 1})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 3

</details>


# blob
### blob - macro for creating a blob given a data pointer
*Defined in: std/blob.s line 53*

```rust
blob(cstr) -> (mut char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 56
- Transpiled C size: 320

</details>

<details><summary>Potential errors</summary>

17. allocation failed
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

### blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 23*

```rust
blob(64) -> (unsafe_blob {tag, any ptr unsafe_ptr {follows any ptr ..}, 64})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 21

</details>


### blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 23*

```rust
blob(32) -> (unsafe_blob {tag, any ptr unsafe_ptr {follows any ptr ..}, 32})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 21

</details>


### blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 23*

```rust
blob(16) -> (unsafe_blob {tag, any ptr unsafe_ptr {follows any ptr ..}, 16})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 21

</details>


### blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 23*

```rust
blob(8) -> (unsafe_blob {tag, any ptr unsafe_ptr {follows any ptr ..}, 8})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 21

</details>


### blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 23*

```rust
blob(4) -> (unsafe_blob {tag, any ptr unsafe_ptr {follows any ptr ..}, 4})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 21

</details>


### blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 23*

```rust
blob(2) -> (unsafe_blob {tag, any ptr unsafe_ptr {follows any ptr ..}, 2})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 21

</details>


### blob - a pointer to an in-memory blob of data fixed size
*Defined in: std/blob.s line 23*

```rust
blob(1) -> (unsafe_blob {tag, any ptr unsafe_ptr {follows any ptr ..}, 1})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 21

</details>


# as
### as - reinterpret a blob of data as a character array
*Defined in: std/blob.s line 28*

```rust
as(unsafe_blob, char[]) -> (char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 160

</details>

<details><summary>Potential errors</summary>

11. nat value too large to pack in nat32
100. cannot cast a blob onto an already allocated array
</details>


### as - reinterpret a blob of data as a character array
*Defined in: std/blob.s line 28*

```rust
as(unsafe_blob, char[]) -> (char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 160

</details>

<details><summary>Potential errors</summary>

11. nat value too large to pack in nat32
100. cannot cast a blob onto an already allocated array
</details>


### as - reinterpret a blob of data as a character array
*Defined in: std/blob.s line 28*

```rust
as(unsafe_blob, char[]) -> (char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 160

</details>

<details><summary>Potential errors</summary>

11. nat value too large to pack in nat32
100. cannot cast a blob onto an already allocated array
</details>


### as - reinterpret a blob of data as a character array
*Defined in: std/blob.s line 28*

```rust
as(unsafe_blob, char[]) -> (char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 160

</details>

<details><summary>Potential errors</summary>

11. nat value too large to pack in nat32
100. cannot cast a blob onto an already allocated array
</details>


### as - reinterpret a blob of data as a character array
*Defined in: std/blob.s line 28*

```rust
as(unsafe_blob, char[]) -> (char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 160

</details>

<details><summary>Potential errors</summary>

11. nat value too large to pack in nat32
100. cannot cast a blob onto an already allocated array
</details>


### as - reinterpret a blob of data as a character array
*Defined in: std/blob.s line 28*

```rust
as(unsafe_blob, char[]) -> (char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 160

</details>

<details><summary>Potential errors</summary>

11. nat value too large to pack in nat32
100. cannot cast a blob onto an already allocated array
</details>


### as - reinterpret a blob of data as a character array
*Defined in: std/blob.s line 28*

```rust
as(unsafe_blob, char[]) -> (char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 24
- Transpiled C size: 160

</details>

<details><summary>Potential errors</summary>

11. nat value too large to pack in nat32
100. cannot cast a blob onto an already allocated array
</details>


# find\_compatible\_size
### find\_compatible\_size - macro for determining blob sizes that are lesser than the data structure
*Defined in: std/blob.s line 39*

```rust
find_compatible_size(nat) -> (mut char[])
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 96
- Transpiled C size: 685

</details>

<details><summary>Potential errors</summary>

2. null pointer
6. nat subtraction would yield a negative
17. allocation failed
22. out of bounds
23. arena is out of space
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


<details><summary>defered calls</summary>

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
- SSA variables: 7
- Transpiled C size: 71

</details>

<details><summary>Potential errors</summary>

18. reallocation failed
</details>


### realloc - reallocate memory
*Defined in: std/unsafe.s line 34*

```rust
realloc(any ptr allocated, nat bytes, "super_unsafe") -> (any ptr {follows any ptr allocated})
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
- SSA variables: 8
- Transpiled C size: 71

</details>

<details><summary>Potential errors</summary>

18. reallocation failed
</details>


# free
### free - free memory
*Defined in: std/unsafe.s line 52*

```rust
free(mut any ptr) -> ()
```

Frees allocated memory.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 18

</details>


# zero
### zero - set memory to zero
*Defined in: std/unsafe.s line 59*

```rust
zero(any ptr allocated, nat from, nat to) -> ()
```

Memsets a memory region to zero.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 3
- Transpiled C size: 12

</details>


# dereference\_ptr
### dereference\_ptr - dereference a pointer pointing to a pointer
*Defined in: std/unsafe.s line 74*

```rust
dereference_ptr(any ptr) -> (any ptr)
```

Pointers directly pointing to pointers induce both indirection
and unsafety to the degree that idiomatic code just cannot do
without massive safety violations that the unsafety-inducing
model is not equipped to bypass without invalidating the
type system or derefencing mechanisms. This function performs
a well-controlled indirection instead that does not leave
any safety tracking residues AT ALL when called.
To make absolutely sure that using this is properly understood
the result is an immutable pointer, which often needs to be pass
through `unsafe_mut`, for example to be freed.

*Warning: Its usage in unsafe and guarded under std/unsafe.s.*

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 31

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

9. nat value too large to pack in nat8
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

9. nat value too large to pack in nat8
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
- SSA variables: 9
- Transpiled C size: 134

</details>

<details><summary>Potential errors</summary>

84. failed to open window
</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `(pyray.set_trace_log_level(pyray.LOG_NONE), pyray.init_window(int($size__width),int($size__height),$title),pyray.set_target_fps(60),memory.set_global('font', pyray.load_font_ex($font_path,128,None,0) if $font_path else pyray.get_font_default()))`*
# window
### window
*Defined in: std/graphics.s line 51*

```rust
window(float size.width, float size.height, cstr title, cstr font_path) -> (edit window {tag, float size.width, float size.height, cstr title, mut bool ready})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 37

</details>

<details><summary>Potential errors</summary>

84. failed to open window
</details>


# WINDOW
### window
*Defined in: std/graphics.s line 51*

```rust
window(float size.width, float size.height, cstr title, cstr font_path) -> (edit window {tag, float size.width, float size.height, cstr title, mut bool ready})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 12
- Transpiled C size: 37

</details>

<details><summary>Potential errors</summary>

84. failed to open window
</details>


# is\_open
### is\_open
*Defined in: std/graphics.s line 85*

```rust
is_open(edit window {tag, float size.width, float size.height, cstr title, mut bool ready}) -> (bool) on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 17

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[not pyray.window_should_close()]`*
# unsafe\_begin\_drawing
### unsafe\_begin\_drawing
*Defined in: std/graphics.s line 90*

```rust
unsafe_begin_drawing() -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 0
- Transpiled C size: 7

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.begin_drawing()`*
# unsafe\_end\_drawing
### unsafe\_end\_drawing
*Defined in: std/graphics.s line 94*

```rust
unsafe_end_drawing() -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 7

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.end_drawing()`*
# draw
### draw
*Defined in: std/graphics.s line 100*

```rust
draw(edit window {tag, float size.width, float size.height, cstr title, mut bool ready}) -> (bool) on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 1 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 28

</details>

<details><summary>Potential errors</summary>

85. already drawing on window
</details>


<details><summary>defered calls</summary>

```rust
unsafe_end_drawing() -> ()
```
</details>

# clear
### clear
*Defined in: std/graphics.s line 109*

```rust
clear(edit window, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 19

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.clear_background(pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# text
### text
*Defined in: std/graphics.s line 139*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 56

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_pro(memory.globals['font'].font,str($txt),pyray.Vector2($pos__x,$pos__y),pyray.Vector2($origin__x,$origin__y),$rotation,$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 139*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 56

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_pro(memory.globals['font'].font,str($txt),pyray.Vector2($pos__x,$pos__y),pyray.Vector2($origin__x,$origin__y),$rotation,$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 126*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 45

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_ex(memory.globals['font'],str($txt),pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 126*

```rust
text(edit window, str, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 17
- Transpiled C size: 45

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_ex(memory.globals['font'],str($txt),pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### text
*Defined in: std/graphics.s line 113*

```rust
text(edit window, cstr txt, float pos.x, float pos.y, float size, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 38

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_text_ex(memory.globals['font'],$txt,pyray.Vector2($pos__x,$pos__y),$size,1.0,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# sleep
### sleep
*Defined in: std/graphics.s line 154*

```rust
sleep(nat) -> ()
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 16

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `time.sleep($seconds*0.001)`*
### sleep - sleeps for a provided number of seconds
*Defined in: std/time.s line 3*

```rust
sleep(float secs, "skip_on_negative") -> ()
```

Other sleep functions may exist in the standard library,
but this requires no extra linkage.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 35

</details>

<details><summary>Potential errors</summary>

102. can only sleep for non-negative seconds
</details>


### sleep - sleeps for a provided number of seconds
*Defined in: std/time.s line 3*

```rust
sleep(float) -> ()
```

Other sleep functions may exist in the standard library,
but this requires no extra linkage.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 4
- Transpiled C size: 35

</details>

<details><summary>Potential errors</summary>

102. can only sleep for non-negative seconds
</details>


# TextureData
### TextureData
*Defined in: std/graphics.s line 158*

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
*Defined in: std/graphics.s line 161*

```rust
Texture(nat id, float size.width, float size.height, nat mipmaps, nat format) -> (Texture {tag, nat,float,float,nat,nat[]})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 136

</details>

<details><summary>Potential errors</summary>

17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# texture
### texture
*Defined in: std/graphics.s line 230*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float size.width, float size.height, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 40
- Transpiled C size: 261

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### texture
*Defined in: std/graphics.s line 217*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float scale, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 39
- Transpiled C size: 265

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### texture
*Defined in: std/graphics.s line 203*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float size.width, float size.height, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float rotation) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 44
- Transpiled C size: 288

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
22. out of bounds
</details>


### texture
*Defined in: std/graphics.s line 191*

```rust
texture(edit window, Texture, float pos.x, float pos.y, float scale, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float rotation) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 37
- Transpiled C size: 222

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


### texture
*Defined in: std/graphics.s line 181*

```rust
texture(edit window, Texture, float pos.x, float pos.y, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 34
- Transpiled C size: 204

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
</details>


# circ
### circ
*Defined in: std/graphics.s line 330*

```rust
circ(edit window, float pos.x, float pos.y, float radius, "line", nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 108

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_ring(pyray.Vector2($pos__x,$pos__y),max(0,$radius-$thickness),$radius,0,360,64,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### circ
*Defined in: std/graphics.s line 243*

```rust
circ(edit window, float pos.x, float pos.y, float radius, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 13
- Transpiled C size: 39

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_circle_v(pyray.Vector2($pos__x,$pos__y),$radius,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# ellipse
### ellipse
*Defined in: std/graphics.s line 263*

```rust
ellipse(edit window, float pos.x, float pos.y, float radius.x, float radius.y, "line", nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 39

</details>


### ellipse
*Defined in: std/graphics.s line 253*

```rust
ellipse(edit window, float pos.x, float pos.y, float radius.x, float radius.y, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 44

</details>


# rect
### rect
*Defined in: std/graphics.s line 298*

```rust
rect(edit window, float pos.x, float pos.y, float size.width, float size.height, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a, "rotate", float origin.x, float origin.y, float rotation) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 18
- Transpiled C size: 61

</details>


### rect
*Defined in: std/graphics.s line 294*

```rust
rect(edit window, float pos.x, float pos.y, float size.width, float size.height, "line", nat thickness, nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 15
- Transpiled C size: 49

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_rectangle_lines_ex(pyray.Rectangle($pos__x,$pos__y,$size__width,$size__height),$thickness,pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### rect
*Defined in: std/graphics.s line 284*

```rust
rect(edit window, float pos.x, float pos.y, float size.width, float size.height, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 14
- Transpiled C size: 27

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_rectangle(int($pos__x),int($pos__y),int($size__width),int($size__height),pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# tri
### tri
*Defined in: std/graphics.s line 319*

```rust
tri(edit window, float p1.x, float p1.y, float p2.x, float p2.y, float p3.x, float p3.y, "line", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 64

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_triangle_lines(pyray.Vector2($p1__x,$p1__y),pyray.Vector2($p2__x,$p2__y),pyray.Vector2($p3__x,$p3__y),pyray.Color($color__r,$color__g,$color__b,$color__a))`*
### tri
*Defined in: std/graphics.s line 308*

```rust
tri(edit window, float p1.x, float p1.y, float p2.x, float p2.y, float p3.x, float p3.y, "solid", nat8 color.r, nat8 color.g, nat8 color.b, nat8 color.a) -> () on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 16
- Transpiled C size: 64

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `pyray.draw_triangle(pyray.Vector2($p1__x,$p1__y),pyray.Vector2($p2__x,$p2__y),pyray.Vector2($p3__x,$p3__y),pyray.Color($color__r,$color__g,$color__b,$color__a))`*
# dt
### dt
*Defined in: std/graphics.s line 348*

```rust
dt(window {tag, float size.width, float size.height, cstr title, bool ready}) -> (float) on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 9

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.get_frame_time()]`*
# uptime
### uptime
*Defined in: std/graphics.s line 353*

```rust
uptime(window {tag, float size.width, float size.height, cstr title, bool ready}) -> (float) on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 9

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.get_time()]`*
# key\_down
### key\_down
*Defined in: std/graphics.s line 358*

```rust
key_down(window, nat key) -> (bool) on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_key_down($key)]`*
# key\_pressed
### key\_pressed
*Defined in: std/graphics.s line 363*

```rust
key_pressed(edit window, nat key) -> (bool) on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_key_pressed($key)]`*
# key\_released
### key\_released
*Defined in: std/graphics.s line 368*

```rust
key_released(edit window, nat key) -> (bool) on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_key_released($key)]`*
# mouse\_pos
### mouse\_pos
*Defined in: std/graphics.s line 373*

```rust
mouse_pos(window {tag, float size.width, float size.height, cstr title, bool ready}) -> (float x, float y) on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 9
- Transpiled C size: 28

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[(lambda p=pyray.get_mouse_position():(p.x,p.y))()]`*
# mouse\_down
### mouse\_down
*Defined in: std/graphics.s line 381*

```rust
mouse_down(window, nat button) -> (bool) on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_mouse_button_down($button)]`*
# mouse\_pressed
### mouse\_pressed
*Defined in: std/graphics.s line 386*

```rust
mouse_pressed(edit window, nat button) -> (bool) on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 10

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.is_mouse_button_pressed($button)]`*
# mouse\_wheel
### mouse\_wheel
*Defined in: std/graphics.s line 391*

```rust
mouse_wheel(window {tag, float size.width, float size.height, cstr title, bool ready}) -> (float) on WINDOW
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 6
- Transpiled C size: 9

</details>


*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `[pyray.get_mouse_wheel_move()]`*
# KEY\_NULL

*Defined in: std/graphics.s line 396*

```rust
() -> (0)
```

# KEY\_APOSTROPHE

*Defined in: std/graphics.s line 397*

```rust
() -> (39)
```

# KEY\_COMMA

*Defined in: std/graphics.s line 398*

```rust
() -> (44)
```

# KEY\_MINUS

*Defined in: std/graphics.s line 399*

```rust
() -> (45)
```

# KEY\_PERIOD

*Defined in: std/graphics.s line 400*

```rust
() -> (46)
```

# KEY\_SLASH

*Defined in: std/graphics.s line 401*

```rust
() -> (47)
```

# KEY\_ZERO

*Defined in: std/graphics.s line 402*

```rust
() -> (48)
```

# KEY\_ONE

*Defined in: std/graphics.s line 403*

```rust
() -> (49)
```

# KEY\_TWO

*Defined in: std/graphics.s line 404*

```rust
() -> (50)
```

# KEY\_THREE

*Defined in: std/graphics.s line 405*

```rust
() -> (51)
```

# KEY\_FOUR

*Defined in: std/graphics.s line 406*

```rust
() -> (52)
```

# KEY\_FIVE

*Defined in: std/graphics.s line 407*

```rust
() -> (53)
```

# KEY\_SIX

*Defined in: std/graphics.s line 408*

```rust
() -> (54)
```

# KEY\_SEVEN

*Defined in: std/graphics.s line 409*

```rust
() -> (55)
```

# KEY\_EIGHT

*Defined in: std/graphics.s line 410*

```rust
() -> (56)
```

# KEY\_NINE

*Defined in: std/graphics.s line 411*

```rust
() -> (57)
```

# KEY\_SEMICOLON

*Defined in: std/graphics.s line 412*

```rust
() -> (59)
```

# KEY\_EQUAL

*Defined in: std/graphics.s line 413*

```rust
() -> (61)
```

# KEY\_A

*Defined in: std/graphics.s line 414*

```rust
() -> (65)
```

# KEY\_B

*Defined in: std/graphics.s line 415*

```rust
() -> (66)
```

# KEY\_C

*Defined in: std/graphics.s line 416*

```rust
() -> (67)
```

# KEY\_D

*Defined in: std/graphics.s line 417*

```rust
() -> (68)
```

# KEY\_E

*Defined in: std/graphics.s line 418*

```rust
() -> (69)
```

# KEY\_F

*Defined in: std/graphics.s line 419*

```rust
() -> (70)
```

# KEY\_G

*Defined in: std/graphics.s line 420*

```rust
() -> (71)
```

# KEY\_H

*Defined in: std/graphics.s line 421*

```rust
() -> (72)
```

# KEY\_I

*Defined in: std/graphics.s line 422*

```rust
() -> (73)
```

# KEY\_J

*Defined in: std/graphics.s line 423*

```rust
() -> (74)
```

# KEY\_K

*Defined in: std/graphics.s line 424*

```rust
() -> (75)
```

# KEY\_L

*Defined in: std/graphics.s line 425*

```rust
() -> (76)
```

# KEY\_M

*Defined in: std/graphics.s line 426*

```rust
() -> (77)
```

# KEY\_N

*Defined in: std/graphics.s line 427*

```rust
() -> (78)
```

# KEY\_O

*Defined in: std/graphics.s line 428*

```rust
() -> (79)
```

# KEY\_P

*Defined in: std/graphics.s line 429*

```rust
() -> (80)
```

# KEY\_Q

*Defined in: std/graphics.s line 430*

```rust
() -> (81)
```

# KEY\_R

*Defined in: std/graphics.s line 431*

```rust
() -> (82)
```

# KEY\_S

*Defined in: std/graphics.s line 432*

```rust
() -> (83)
```

# KEY\_T

*Defined in: std/graphics.s line 433*

```rust
() -> (84)
```

# KEY\_U

*Defined in: std/graphics.s line 434*

```rust
() -> (85)
```

# KEY\_V

*Defined in: std/graphics.s line 435*

```rust
() -> (86)
```

# KEY\_W

*Defined in: std/graphics.s line 436*

```rust
() -> (87)
```

# KEY\_X

*Defined in: std/graphics.s line 437*

```rust
() -> (88)
```

# KEY\_Y

*Defined in: std/graphics.s line 438*

```rust
() -> (89)
```

# KEY\_Z

*Defined in: std/graphics.s line 439*

```rust
() -> (90)
```

# KEY\_LEFT\_BRACKET

*Defined in: std/graphics.s line 440*

```rust
() -> (91)
```

# KEY\_BACKSLASH

*Defined in: std/graphics.s line 441*

```rust
() -> (92)
```

# KEY\_RIGHT\_BRACKET

*Defined in: std/graphics.s line 442*

```rust
() -> (93)
```

# KEY\_GRAVE

*Defined in: std/graphics.s line 443*

```rust
() -> (96)
```

# KEY\_SPACE

*Defined in: std/graphics.s line 444*

```rust
() -> (32)
```

# KEY\_ESCAPE

*Defined in: std/graphics.s line 445*

```rust
() -> (256)
```

# KEY\_ENTER

*Defined in: std/graphics.s line 446*

```rust
() -> (257)
```

# KEY\_TAB

*Defined in: std/graphics.s line 447*

```rust
() -> (258)
```

# KEY\_BACKSPACE

*Defined in: std/graphics.s line 448*

```rust
() -> (259)
```

# KEY\_INSERT

*Defined in: std/graphics.s line 449*

```rust
() -> (260)
```

# KEY\_DELETE

*Defined in: std/graphics.s line 450*

```rust
() -> (261)
```

# KEY\_RIGHT

*Defined in: std/graphics.s line 451*

```rust
() -> (262)
```

# KEY\_LEFT

*Defined in: std/graphics.s line 452*

```rust
() -> (263)
```

# KEY\_DOWN

*Defined in: std/graphics.s line 453*

```rust
() -> (264)
```

# KEY\_UP

*Defined in: std/graphics.s line 454*

```rust
() -> (265)
```

# KEY\_PAGE\_UP

*Defined in: std/graphics.s line 455*

```rust
() -> (266)
```

# KEY\_PAGE\_DOWN

*Defined in: std/graphics.s line 456*

```rust
() -> (267)
```

# KEY\_HOME

*Defined in: std/graphics.s line 457*

```rust
() -> (268)
```

# KEY\_END

*Defined in: std/graphics.s line 458*

```rust
() -> (269)
```

# KEY\_CAPS\_LOCK

*Defined in: std/graphics.s line 459*

```rust
() -> (280)
```

# KEY\_SCROLL\_LOCK

*Defined in: std/graphics.s line 460*

```rust
() -> (281)
```

# KEY\_NUM\_LOCK

*Defined in: std/graphics.s line 461*

```rust
() -> (282)
```

# KEY\_PRINT\_SCREEN

*Defined in: std/graphics.s line 462*

```rust
() -> (283)
```

# KEY\_PAUSE

*Defined in: std/graphics.s line 463*

```rust
() -> (284)
```

# KEY\_F1

*Defined in: std/graphics.s line 464*

```rust
() -> (290)
```

# KEY\_F2

*Defined in: std/graphics.s line 465*

```rust
() -> (291)
```

# KEY\_F3

*Defined in: std/graphics.s line 466*

```rust
() -> (292)
```

# KEY\_F4

*Defined in: std/graphics.s line 467*

```rust
() -> (293)
```

# KEY\_F5

*Defined in: std/graphics.s line 468*

```rust
() -> (294)
```

# KEY\_F6

*Defined in: std/graphics.s line 469*

```rust
() -> (295)
```

# KEY\_F7

*Defined in: std/graphics.s line 470*

```rust
() -> (296)
```

# KEY\_F8

*Defined in: std/graphics.s line 471*

```rust
() -> (297)
```

# KEY\_F9

*Defined in: std/graphics.s line 472*

```rust
() -> (298)
```

# KEY\_F10

*Defined in: std/graphics.s line 473*

```rust
() -> (299)
```

# KEY\_F11

*Defined in: std/graphics.s line 474*

```rust
() -> (300)
```

# KEY\_F12

*Defined in: std/graphics.s line 475*

```rust
() -> (301)
```

# KEY\_LEFT\_SHIFT

*Defined in: std/graphics.s line 476*

```rust
() -> (340)
```

# KEY\_LEFT\_CONTROL

*Defined in: std/graphics.s line 477*

```rust
() -> (341)
```

# KEY\_LEFT\_ALT

*Defined in: std/graphics.s line 478*

```rust
() -> (342)
```

# KEY\_LEFT\_SUPER

*Defined in: std/graphics.s line 479*

```rust
() -> (343)
```

# KEY\_RIGHT\_SHIFT

*Defined in: std/graphics.s line 480*

```rust
() -> (344)
```

# KEY\_RIGHT\_CONTROL

*Defined in: std/graphics.s line 481*

```rust
() -> (345)
```

# KEY\_RIGHT\_ALT

*Defined in: std/graphics.s line 482*

```rust
() -> (346)
```

# KEY\_RIGHT\_SUPER

*Defined in: std/graphics.s line 483*

```rust
() -> (347)
```

# KEY\_KB\_MENU

*Defined in: std/graphics.s line 484*

```rust
() -> (348)
```

# KEY\_KP\_0

*Defined in: std/graphics.s line 485*

```rust
() -> (320)
```

# KEY\_KP\_1

*Defined in: std/graphics.s line 486*

```rust
() -> (321)
```

# KEY\_KP\_2

*Defined in: std/graphics.s line 487*

```rust
() -> (322)
```

# KEY\_KP\_3

*Defined in: std/graphics.s line 488*

```rust
() -> (323)
```

# KEY\_KP\_4

*Defined in: std/graphics.s line 489*

```rust
() -> (324)
```

# KEY\_KP\_5

*Defined in: std/graphics.s line 490*

```rust
() -> (325)
```

# KEY\_KP\_6

*Defined in: std/graphics.s line 491*

```rust
() -> (326)
```

# KEY\_KP\_7

*Defined in: std/graphics.s line 492*

```rust
() -> (327)
```

# KEY\_KP\_8

*Defined in: std/graphics.s line 493*

```rust
() -> (328)
```

# KEY\_KP\_9

*Defined in: std/graphics.s line 494*

```rust
() -> (329)
```

# KEY\_KP\_DECIMAL

*Defined in: std/graphics.s line 495*

```rust
() -> (330)
```

# KEY\_KP\_DIVIDE

*Defined in: std/graphics.s line 496*

```rust
() -> (331)
```

# KEY\_KP\_MULTIPLY

*Defined in: std/graphics.s line 497*

```rust
() -> (332)
```

# KEY\_KP\_SUBTRACT

*Defined in: std/graphics.s line 498*

```rust
() -> (333)
```

# KEY\_KP\_ADD

*Defined in: std/graphics.s line 499*

```rust
() -> (334)
```

# KEY\_KP\_ENTER

*Defined in: std/graphics.s line 500*

```rust
() -> (335)
```

# KEY\_KP\_EQUAL

*Defined in: std/graphics.s line 501*

```rust
() -> (336)
```

# KEY\_BACK

*Defined in: std/graphics.s line 502*

```rust
() -> (4)
```

# KEY\_MENU

*Defined in: std/graphics.s line 503*

```rust
() -> (5)
```

# KEY\_VOLUME\_UP

*Defined in: std/graphics.s line 504*

```rust
() -> (24)
```

# KEY\_VOLUME\_DOWN

*Defined in: std/graphics.s line 505*

```rust
() -> (25)
```

# NumberOrPtr
### nat - an unsigned integer value
*Defined in: builtins line 1*

```rust
nat
```

Represents values in the range `0 to 2^64-1`.

### float
*Defined in: builtins line 1*

```rust
float
```

### int - a signed integer value
*Defined in: builtins line 1*

```rust
int
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
cstr
```

### str - tautology function for strings
*Defined in: std/core/string.s line 65*

```rust
str(str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 57*

```rust
str(char[]) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 21
- Transpiled C size: 165

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
27. string does not fit on buffer
</details>


### str - a string residing on the full breadth of a buffer
*Defined in: std/core/string.s line 57*

```rust
str(char[], nat length) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 147

</details>

<details><summary>Potential errors</summary>

2. null pointer
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
27. string does not fit on buffer
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 50*

```rust
str(char[], nat dat.pos, nat dat.length, char dat.first) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 4 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 20
- Transpiled C size: 100

</details>

<details><summary>Potential errors</summary>

25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 45*

```rust
str(char ptr unsafe_ptr, nat pos, nat length) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 10
- Transpiled C size: 43

</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 41*

```rust
str(char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 5
- Transpiled C size: 3

</details>


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 218*

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
*Defined in: std/core/string.s line 218*

```rust
cstr(unsafe_temp {tag, cstr cstr, str}) -> (cstr)
```

This function's return is meant to be passed to operating system calls,
or to comptime returns with the pattern 'cstr unsafe_temp string_value'.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 7
- Transpiled C size: 3

</details>


### cstr - extract the cstr from unsafe_temp string
*Defined in: std/core/string.s line 218*

```rust
cstr(unsafe_temp {tag, cstr cstr, str}) -> (cstr)
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
str(cstr) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
str(char[], nat endpos, "from", nat pos) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 77*

```rust
str(char[], nat pos, "to", nat endpos) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
</details>


### str - a string residing on a buffer
*Defined in: std/core/string.s line 69*

```rust
str(char[], nat pos, "len", nat length) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})
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

25. can only define strings on contiguous buffers
2. null pointer
26. can only define strings on non-offset buffers
22. out of bounds
</details>


### cstr - a cstr description of an error code
*Defined in: std/core/error.s line 19*

```rust
cstr(last_error) -> (cstr)
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
*Defined in: std/core/convertstr.s line 113*

```rust
str(edit arena, console console) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

The read string is placed on an arena while consuming only the necessarily minimum size.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 47
- Transpiled C size: 279

</details>

<details><summary>Potential errors</summary>

34. read string does not fit on buffer
2. null pointer
6. nat subtraction would yield a negative
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
31. unexpected end of console read
</details>


### str - reads a string from the console
*Defined in: std/core/convertstr.s line 113*

```rust
str(new CHARS, console console) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first}) on CHARS
```

The read string is placed onto memory that keeps being reallocated to accommodate its size.
The resulting memory will consume exactly the required size in bytes.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 6 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 87
- Transpiled C size: 543

</details>

<details><summary>Potential errors</summary>

2. null pointer
4. division by zero
6. nat subtraction would yield a negative
17. allocation failed
18. reallocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
21. cannot resize an unallocated or freed buffer
22. out of bounds
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
31. unexpected end of console read
</details>


<details><summary>defered calls</summary>

```rust
free(mut any ptr) -> ()
```
</details>

# run
### run
*Defined in: std/test.s line 5*

```rust
run(console CLI, str) -> (cstr) on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 8 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 23
- Transpiled C size: 156

</details>

<details><summary>Potential errors</summary>

48. process terminated with unhandled non-zero exit code
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
47. failed to start process
</details>


### run
*Defined in: std/test.s line 5*

```rust
run(console CLI, cstr command) -> (cstr) on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 5 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 19
- Transpiled C size: 150

</details>

<details><summary>Potential errors</summary>

48. process terminated with unhandled non-zero exit code
47. failed to start process
</details>


# print\_marker
### print\_marker - prints a test status marker
*Defined in: std/test.s line 12*

```rust
print_marker(colors, "pending") -> () on colors
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 99

</details>


### print\_marker - prints a test status marker
*Defined in: std/test.s line 12*

```rust
print_marker(colors, "failure") -> () on colors
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 99

</details>


### print\_marker - prints a test status marker
*Defined in: std/test.s line 12*

```rust
print_marker(colors, "success") -> () on colors
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 22
- Transpiled C size: 99

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
- Transpiled C size: 20

</details>


# stdout\_to\_err
### stdout\_to\_err - temporarily redirect stdout to stderr
*Defined in: std/test.s line 33*

```rust
stdout_to_err(console {tag}) -> (int) on CLI
```

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 1 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 2
- Transpiled C size: 22

</details>


<details><summary>defered calls</summary>

```rust
restore_stdout(int) -> ()
```
</details>

# assert
### assert - assert a condition given a corresponding message
*Defined in: std/test.s line 43*

```rust
assert(console CLI, bool condition, cstr text) -> () on CLI
```

This outputs to stderr, so that asserts are printed
even if stout is suppressed during the 'test' function.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 2 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 25
- Transpiled C size: 118

</details>

<details><summary>Potential errors</summary>

101. assert failed
</details>


# test
### test - prints and tests a system command
*Defined in: std/test.s line 65*

```rust
test(colors, str) -> (bool) on colors
```

Returns whether the command succeeded or not.
A completion assert is performed at the end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 25
- Transpiled C size: 128

</details>

<details><summary>Potential errors</summary>

48. process terminated with unhandled non-zero exit code
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
47. failed to start process
</details>


### test - prints and tests a system command
*Defined in: std/test.s line 65*

```rust
test(colors, str, bool should_fail) -> (bool) on colors
```

Returns whether the command succeeded or not.
A completion assert is performed at the end.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 9 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 29
- Transpiled C size: 165

</details>

<details><summary>Potential errors</summary>

48. process terminated with unhandled non-zero exit code
17. allocation failed
19. cannot allocate a buffer of unsized type
20. cannot resize buffers with alloc; it promises no data reallocation
25. can only define strings on contiguous buffers
26. can only define strings on non-offset buffers
47. failed to start process
</details>


# time
### time - number of seconds since the program start
*Defined in: std/time.s line 12*

```rust
time() -> (float)
```

Other time measurement functions may exist in the standard
library, but this requires no extra linkage.

<details><summary>Complexity</summary>

- Level of abstraction: 0 to 0 (0 are builtins or raw C code, 1 calls those, etc.)
- SSA variables: 1
- Transpiled C size: 9

</details>


