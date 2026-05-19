#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1786v="one";
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

static inline __attribute__((always_inline)) void which__temp1784v() {
  print__temp363v(__temp1786v);
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1805v) {
  int value=0;
  *__temp1805v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1806v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1806v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1807v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1807v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1808v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1808v=z;
}

static inline __attribute__((always_inline)) void inc__temp1771v(uint64_t x, uint64_t* __temp1809v) {
  uint64_t __temp1772v=0;
  uint64_t __temp1773v__=0;
  __temp1772v=1;
  add__temp170v(x,__temp1772v,&__temp1773v__);
  goto __temp_return;
  __temp_return:
  *__temp1809v=__temp1773v__;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__temp1774v(uint64_t x, uint64_t* __temp1810v) {
  uint64_t __temp1775v=0;
  uint64_t __temp1776v__=0;
  __temp1775v=1;
  add__temp170v(x,__temp1775v,&__temp1776v__);
  goto __temp_return;
  __temp_return:
  *__temp1810v=__temp1776v__;
}

static inline __attribute__((always_inline)) void inc__temp1777v(uint64_t x, uint64_t* __temp1811v) {
  uint64_t __temp1778v=0;
  uint64_t __temp1779v__=0;
  __temp1778v=2;
  add__temp170v(x,__temp1778v,&__temp1779v__);
  goto __temp_return;
  __temp_return:
  *__temp1811v=__temp1779v__;
}

static inline __attribute__((always_inline)) void main__temp1792v() {
  uint64_t __temp1795v=0;
  uint64_t __temp1796v__=0;
  uint64_t __temp1798v=0;
  uint64_t __temp1799v__=0;
  uint64_t __temp1801v=0;
  uint64_t __temp1803v__=0;
  which__temp1784v();
  __temp1795v=0;
  inc__temp1771v(__temp1795v,&__temp1796v__);
  print__temp376v(__temp1796v__);
  __temp1798v=0;
  inc__temp1774v(__temp1798v,&__temp1799v__);
  print__temp376v(__temp1799v__);
  __temp1801v=0;
  inc__temp1777v(__temp1801v,&__temp1803v__);
  print__temp376v(__temp1803v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1792v();return 0;}