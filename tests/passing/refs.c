#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
static const char* __temp_all_errcodes[27] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"character copy does not fit on buffer",
"cannot extend the string's left side outside its right range",
"string buffer out of memory",
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

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1188v) {
  int value=0;
  *__temp1188v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1189v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1189v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1190v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1190v=__temp87v__;
}

static inline __attribute__((always_inline)) void add__temp110v(uint64_t x, uint64_t y, uint64_t* __temp1191v) {
  int __temp111v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1191v=z;
}

static inline __attribute__((always_inline)) void print__temp361v(uint64_t value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1182v() {
  uint64_t __temp1183v=0;
  uint64_t __temp1184v=0;
  uint64_t x=0;
  uint64_t y=0;
  uint64_t z=0;
  uint64_t __temp1185v=0;
  uint64_t __temp1186v__=0;
  __temp1183v=1;
  __temp1184v=__temp1183v;
  x=__temp1184v;
  __temp1185v=2;
  x=__temp1185v;
  add__temp110v(x,x,&__temp1186v__);
  print__temp361v(__temp1186v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1182v();return 0;}