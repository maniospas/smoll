#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1787v="one";
static const char* __temp_all_errcodes[36] = {"noerr",
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
"cannot resize a buffer offset",
"cannot resize a buffer with spacing",
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
"invalid float conversion from string without a value after the dot",
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void which__temp1785v() {
  print__temp363v(__temp1787v);
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1806v) {
  int value=0;
  *__temp1806v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1807v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1807v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1808v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1808v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1809v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1809v=z;
}

static inline __attribute__((always_inline)) void inc__temp1772v(uint64_t x, uint64_t* __temp1810v) {
  uint64_t __temp1773v=0;
  uint64_t __temp1774v__=0;
  __temp1773v=1;
  add__temp170v(x,__temp1773v,&__temp1774v__);
  goto __temp_return;
  __temp_return:
  *__temp1810v=__temp1774v__;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__temp1775v(uint64_t x, uint64_t* __temp1811v) {
  uint64_t __temp1776v=0;
  uint64_t __temp1777v__=0;
  __temp1776v=1;
  add__temp170v(x,__temp1776v,&__temp1777v__);
  goto __temp_return;
  __temp_return:
  *__temp1811v=__temp1777v__;
}

static inline __attribute__((always_inline)) void inc__temp1778v(uint64_t x, uint64_t* __temp1812v) {
  uint64_t __temp1779v=0;
  uint64_t __temp1780v__=0;
  __temp1779v=2;
  add__temp170v(x,__temp1779v,&__temp1780v__);
  goto __temp_return;
  __temp_return:
  *__temp1812v=__temp1780v__;
}

static inline __attribute__((always_inline)) void main__temp1793v() {
  uint64_t __temp1796v=0;
  uint64_t __temp1797v__=0;
  uint64_t __temp1799v=0;
  uint64_t __temp1800v__=0;
  uint64_t __temp1802v=0;
  uint64_t __temp1804v__=0;
  which__temp1785v();
  __temp1796v=0;
  inc__temp1772v(__temp1796v,&__temp1797v__);
  print__temp376v(__temp1797v__);
  __temp1799v=0;
  inc__temp1775v(__temp1799v,&__temp1800v__);
  print__temp376v(__temp1800v__);
  __temp1802v=0;
  inc__temp1778v(__temp1802v,&__temp1804v__);
  print__temp376v(__temp1804v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1793v();return 0;}