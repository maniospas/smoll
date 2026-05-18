#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1762v="one";
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

static inline __attribute__((always_inline)) void which__temp1760v() {
  print__temp363v(__temp1762v);
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1781v) {
  int value=0;
  *__temp1781v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1782v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1782v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1783v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1783v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1784v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1784v=z;
}

static inline __attribute__((always_inline)) void inc__temp1747v(uint64_t x, uint64_t* __temp1785v) {
  uint64_t __temp1748v=0;
  uint64_t __temp1749v__=0;
  __temp1748v=1;
  add__temp170v(x,__temp1748v,&__temp1749v__);
  goto __temp_return;
  __temp_return:
  *__temp1785v=__temp1749v__;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__temp1750v(uint64_t x, uint64_t* __temp1786v) {
  uint64_t __temp1751v=0;
  uint64_t __temp1752v__=0;
  __temp1751v=1;
  add__temp170v(x,__temp1751v,&__temp1752v__);
  goto __temp_return;
  __temp_return:
  *__temp1786v=__temp1752v__;
}

static inline __attribute__((always_inline)) void inc__temp1753v(uint64_t x, uint64_t* __temp1787v) {
  uint64_t __temp1754v=0;
  uint64_t __temp1755v__=0;
  __temp1754v=2;
  add__temp170v(x,__temp1754v,&__temp1755v__);
  goto __temp_return;
  __temp_return:
  *__temp1787v=__temp1755v__;
}

static inline __attribute__((always_inline)) void main__temp1768v() {
  uint64_t __temp1771v=0;
  uint64_t __temp1772v__=0;
  uint64_t __temp1774v=0;
  uint64_t __temp1775v__=0;
  uint64_t __temp1777v=0;
  uint64_t __temp1779v__=0;
  which__temp1760v();
  __temp1771v=0;
  inc__temp1747v(__temp1771v,&__temp1772v__);
  print__temp376v(__temp1772v__);
  __temp1774v=0;
  inc__temp1750v(__temp1774v,&__temp1775v__);
  print__temp376v(__temp1775v__);
  __temp1777v=0;
  inc__temp1753v(__temp1777v,&__temp1779v__);
  print__temp376v(__temp1779v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1768v();return 0;}