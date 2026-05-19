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
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1277v) {
  int value=0;
  *__temp1277v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1278v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1278v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1279v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1279v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1280v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) void inc__temp1253v(uint64_t x, uint64_t* __temp1281v) {
  int __temp1254v=0;
  uint64_t __temp1257v=0;
  uint64_t __temp1258v__=0;
  __temp1257v=1;
  add__temp170v(x,__temp1257v,&__temp1258v__);
  goto __temp_return;
  __temp_return:
  *__temp1281v=__temp1258v__;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__temp1264v(uint64_t x, uint64_t* __temp1282v) {
  int __temp1265v=0;
  uint64_t __temp1267v=0;
  uint64_t __temp1268v__=0;
  __temp1267v=2;
  add__temp170v(x,__temp1267v,&__temp1268v__);
  goto __temp_return;
  __temp_return:
  *__temp1282v=__temp1268v__;
}

static inline __attribute__((always_inline)) void main__temp1269v() {
  uint64_t __temp1270v=0;
  uint64_t __temp1271v__=0;
  uint64_t __temp1273v=0;
  uint64_t __temp1275v__=0;
  __temp1270v=0;
  inc__temp1253v(__temp1270v,&__temp1271v__);
  print__temp376v(__temp1271v__);
  __temp1273v=0;
  inc__temp1264v(__temp1273v,&__temp1275v__);
  print__temp376v(__temp1275v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1269v();return 0;}