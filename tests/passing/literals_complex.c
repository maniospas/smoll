#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1806t="one";
const char* const __t365t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
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
"read string does not fit on buffer",
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

static inline __attribute__((always_inline)) void print__t363t(const char* value) {
  int __t364t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void which__t1804t() {
  print__t363t(__t1806t);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1825t) {
  int value=0;
  *__t1825t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1826t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1826t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1827t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1827t=__t95t__;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1828t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1828t=z;
}

static inline __attribute__((always_inline)) void inc__t1791t(uint64_t x, uint64_t* __t1829t) {
  uint64_t __t1792t=0;
  uint64_t __t1793t__=0;
  __t1792t=1;
  add__t170t(x,__t1792t,&__t1793t__);
  goto __t_return;
  __t_return:
  *__t1829t=__t1793t__;
}

static inline __attribute__((always_inline)) void print__t376t(uint64_t value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t1794t(uint64_t x, uint64_t* __t1830t) {
  uint64_t __t1795t=0;
  uint64_t __t1796t__=0;
  __t1795t=1;
  add__t170t(x,__t1795t,&__t1796t__);
  goto __t_return;
  __t_return:
  *__t1830t=__t1796t__;
}

static inline __attribute__((always_inline)) void inc__t1797t(uint64_t x, uint64_t* __t1831t) {
  uint64_t __t1798t=0;
  uint64_t __t1799t__=0;
  __t1798t=2;
  add__t170t(x,__t1798t,&__t1799t__);
  goto __t_return;
  __t_return:
  *__t1831t=__t1799t__;
}

static inline __attribute__((always_inline)) void main__t1812t() {
  uint64_t __t1815t=0;
  uint64_t __t1816t__=0;
  uint64_t __t1818t=0;
  uint64_t __t1819t__=0;
  uint64_t __t1821t=0;
  uint64_t __t1823t__=0;
  which__t1804t();
  __t1815t=0;
  inc__t1791t(__t1815t,&__t1816t__);
  print__t376t(__t1816t__);
  __t1818t=0;
  inc__t1794t(__t1818t,&__t1819t__);
  print__t376t(__t1819t__);
  __t1821t=0;
  inc__t1797t(__t1821t,&__t1823t__);
  print__t376t(__t1823t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1812t();return 0;}