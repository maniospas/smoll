#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[33] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"cannot resize a buffer with offset",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
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

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1252v) {
  int value=0;
  *__temp1252v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1253v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1253v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1254v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1254v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1255v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1255v=z;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1246v() {
  uint64_t __temp1247v=0;
  uint64_t __temp1248v=0;
  uint64_t x=0;
  uint64_t y=0;
  uint64_t z=0;
  uint64_t __temp1249v=0;
  uint64_t __temp1250v__=0;
  __temp1247v=1;
  __temp1248v=__temp1247v;
  x=__temp1248v;
  __temp1249v=2;
  x=__temp1249v;
  add__temp170v(x,x,&__temp1250v__);
  print__temp376v(__temp1250v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1246v();return 0;}