#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1759v="one";
const char* const __temp364v="\n";
static const char* __temp_all_errcodes[31] = {"noerr",
"error",
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
"invalid float conversion from string without a value after the dot",
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void print__temp362v(const char* value) {
  int __temp363v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void which__temp1757v() {
  print__temp362v(__temp1759v);
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1778v) {
  int value=0;
  *__temp1778v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1779v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1779v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1780v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1780v=__temp94v__;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1781v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1781v=z;
}

static inline __attribute__((always_inline)) void inc__temp1747v(uint64_t x, uint64_t* __temp1782v) {
  uint64_t __temp1748v=0;
  uint64_t __temp1749v__=0;
  __temp1748v=1;
  add__temp169v(x,__temp1748v,&__temp1749v__);
  goto __temp_return;
  __temp_return:
  *__temp1782v=__temp1749v__;
}

static inline __attribute__((always_inline)) void print__temp375v(uint64_t value) {
  int __temp376v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__temp1744v(uint64_t x, uint64_t* __temp1783v) {
  uint64_t __temp1745v=0;
  uint64_t __temp1746v__=0;
  __temp1745v=1;
  add__temp169v(x,__temp1745v,&__temp1746v__);
  goto __temp_return;
  __temp_return:
  *__temp1783v=__temp1746v__;
}

static inline __attribute__((always_inline)) void inc__temp1750v(uint64_t x, uint64_t* __temp1784v) {
  uint64_t __temp1751v=0;
  uint64_t __temp1752v__=0;
  __temp1751v=2;
  add__temp169v(x,__temp1751v,&__temp1752v__);
  goto __temp_return;
  __temp_return:
  *__temp1784v=__temp1752v__;
}

static inline __attribute__((always_inline)) void main__temp1765v() {
  uint64_t __temp1768v=0;
  uint64_t __temp1769v__=0;
  uint64_t __temp1771v=0;
  uint64_t __temp1772v__=0;
  uint64_t __temp1774v=0;
  uint64_t __temp1776v__=0;
  which__temp1757v();
  __temp1768v=0;
  inc__temp1747v(__temp1768v,&__temp1769v__);
  print__temp375v(__temp1769v__);
  __temp1771v=0;
  inc__temp1744v(__temp1771v,&__temp1772v__);
  print__temp375v(__temp1772v__);
  __temp1774v=0;
  inc__temp1750v(__temp1774v,&__temp1776v__);
  print__temp375v(__temp1776v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1765v();return 0;}