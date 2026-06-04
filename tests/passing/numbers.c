#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
static const char* __t_all_errcodes[35] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"iterator range",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot allocate a buffer of unsized type",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"unexpected end of console read",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void true__t11t(int* __t1856t) {
  int value=0;
  *__t1856t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t1857t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t1857t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t415t(uint64_t x, double* __t1858t) {
  int __t416t=0;
  int __t417t__=0;
  int __t418t=0;
  double z=0;
  not__t39t(__t416t,&__t417t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1858t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1859t) {
  int value=0;
  *__t1859t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1860t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1860t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1861t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1861t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t1862t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1862t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1863t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1863t=z;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1844t() {
  double __t1846t=0;
  double x=0;
  uint64_t __t1847t=0;
  double __t1848t__=0;
  uint64_t __t1849t=0;
  double __t1850t__=0;
  double __t1851t=0;
  double __t1852t__=0;
  double __t1853t__=0;
  double __t1854t__=0;
  console__t366t();
  __t1846t=1.0;
  x=__t1846t;
  __t1847t=1;
  float__t415t(__t1847t,&__t1848t__);
  __t1849t=2;
  float__t415t(__t1849t,&__t1850t__);
  __t1851t=2.0;
  mul__t177t(__t1850t__,__t1851t,&__t1852t__);
  add__t153t(__t1848t__,__t1852t__,&__t1853t__);
  add__t153t(x,__t1853t__,&__t1854t__);
  print__t385t(__t1854t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1844t();return 0;}