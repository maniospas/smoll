#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1760v="one";
const char* const __temp363v="\n";
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

static inline __attribute__((always_inline)) void print__temp361v(const char* value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void which__temp1758v() {
  print__temp361v(__temp1760v);
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1779v) {
  int value=0;
  *__temp1779v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1780v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1780v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1781v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1781v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1782v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1782v=z;
}

static inline __attribute__((always_inline)) void inc__temp1748v(uint64_t x, uint64_t* __temp1783v) {
  uint64_t __temp1749v=0;
  uint64_t __temp1750v__=0;
  __temp1749v=1;
  add__temp170v(x,__temp1749v,&__temp1750v__);
  goto __temp_return;
  __temp_return:
  *__temp1783v=__temp1750v__;
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value) {
  int __temp375v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__temp1745v(uint64_t x, uint64_t* __temp1784v) {
  uint64_t __temp1746v=0;
  uint64_t __temp1747v__=0;
  __temp1746v=1;
  add__temp170v(x,__temp1746v,&__temp1747v__);
  goto __temp_return;
  __temp_return:
  *__temp1784v=__temp1747v__;
}

static inline __attribute__((always_inline)) void inc__temp1751v(uint64_t x, uint64_t* __temp1785v) {
  uint64_t __temp1752v=0;
  uint64_t __temp1753v__=0;
  __temp1752v=2;
  add__temp170v(x,__temp1752v,&__temp1753v__);
  goto __temp_return;
  __temp_return:
  *__temp1785v=__temp1753v__;
}

static inline __attribute__((always_inline)) void main__temp1766v() {
  uint64_t __temp1769v=0;
  uint64_t __temp1770v__=0;
  uint64_t __temp1772v=0;
  uint64_t __temp1773v__=0;
  uint64_t __temp1775v=0;
  uint64_t __temp1777v__=0;
  which__temp1758v();
  __temp1769v=0;
  inc__temp1748v(__temp1769v,&__temp1770v__);
  print__temp374v(__temp1770v__);
  __temp1772v=0;
  inc__temp1745v(__temp1772v,&__temp1773v__);
  print__temp374v(__temp1773v__);
  __temp1775v=0;
  inc__temp1751v(__temp1775v,&__temp1777v__);
  print__temp374v(__temp1777v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1766v();return 0;}