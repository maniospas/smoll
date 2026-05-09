#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
const char* const __temp350v="\n";
static const char* __temp_all_errcodes[28] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated buffer",
"out of bounds",
"string does not fit on buffer",
"cannot extend the string's left side outside its right range",
"string buffer out of memory",
"string out of bounds",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
"user input was not a float",
"invalid int conversion from empty string",
"invalid int conversion from string with only a sign",
"invalid integer int from non-number string",
"invalid nat conversion from empty string",
"invalid nat conversion from non-number string",
"invalid float conversion from empty string",
"invalid float conversion from string with only a sign",
"invalid float conversion from non-number string",
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1204v) {
  int value=0;
  *__temp1204v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1205v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1205v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1206v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1206v=__temp87v__;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1207v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1207v=z;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1198v() {
  unsigned long long __temp1199v=0;
  unsigned long long __temp1200v=0;
  unsigned long long x=0;
  unsigned long long __temp1201v=0;
  unsigned long long __temp1202v__=0;
  __temp1199v=1;
  __temp1200v=__temp1199v;
  x=__temp1200v;
  __temp1201v=2;
  x=__temp1201v;
  add__temp110v(x,x,&__temp1202v__);
  print__temp361v(__temp1202v__);
}

int main() {main__temp1198v();return 0;}