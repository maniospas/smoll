#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1788v="one";
static const char* __temp_all_errcodes[35] = {"noerr",
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

static inline __attribute__((always_inline)) void which__temp1786v() {
  print__temp363v(__temp1788v);
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1807v) {
  int value=0;
  *__temp1807v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1808v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1808v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1809v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1809v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1810v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1810v=z;
}

static inline __attribute__((always_inline)) void inc__temp1773v(uint64_t x, uint64_t* __temp1811v) {
  uint64_t __temp1774v=0;
  uint64_t __temp1775v__=0;
  __temp1774v=1;
  add__temp170v(x,__temp1774v,&__temp1775v__);
  goto __temp_return;
  __temp_return:
  *__temp1811v=__temp1775v__;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__temp1776v(uint64_t x, uint64_t* __temp1812v) {
  uint64_t __temp1777v=0;
  uint64_t __temp1778v__=0;
  __temp1777v=1;
  add__temp170v(x,__temp1777v,&__temp1778v__);
  goto __temp_return;
  __temp_return:
  *__temp1812v=__temp1778v__;
}

static inline __attribute__((always_inline)) void inc__temp1779v(uint64_t x, uint64_t* __temp1813v) {
  uint64_t __temp1780v=0;
  uint64_t __temp1781v__=0;
  __temp1780v=2;
  add__temp170v(x,__temp1780v,&__temp1781v__);
  goto __temp_return;
  __temp_return:
  *__temp1813v=__temp1781v__;
}

static inline __attribute__((always_inline)) void main__temp1794v() {
  uint64_t __temp1797v=0;
  uint64_t __temp1798v__=0;
  uint64_t __temp1800v=0;
  uint64_t __temp1801v__=0;
  uint64_t __temp1803v=0;
  uint64_t __temp1805v__=0;
  which__temp1786v();
  __temp1797v=0;
  inc__temp1773v(__temp1797v,&__temp1798v__);
  print__temp376v(__temp1798v__);
  __temp1800v=0;
  inc__temp1776v(__temp1800v,&__temp1801v__);
  print__temp376v(__temp1801v__);
  __temp1803v=0;
  inc__temp1779v(__temp1803v,&__temp1805v__);
  print__temp376v(__temp1805v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1794v();return 0;}