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

static inline __attribute__((always_inline)) void true__t11t(int* __t1919t) {
  int value=0;
  *__t1919t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t1920t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t1920t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t415t(uint64_t x, double* __t1921t) {
  int __t416t=0;
  int __t417t__=0;
  int __t418t=0;
  double z=0;
  not__t39t(__t416t,&__t417t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1921t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1922t) {
  int value=0;
  *__t1922t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1923t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1923t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1924t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1924t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1925t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1925t=z;
}

static inline __attribute__((always_inline)) void inc__t1859t(double x, double* __t1926t) {
  int __t1860t=0;
  uint64_t __t1861t=0;
  double __t1862t__=0;
  double value=0;
  int __t1863t=0;
  int __t1864t__=0;
  double __t1865t__=0;
  __t1861t=1;
  float__t415t(__t1861t,&__t1862t__);
  value=__t1862t__;
  not__t37t(__t1863t,&__t1864t__);
  add__t153t(x,value,&__t1865t__);
  goto __t_return;
  __t_return:
  *__t1926t=__t1865t__;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1927t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1927t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1928t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1928t=z;
}

static inline __attribute__((always_inline)) void inc__t1898t(uint64_t x, uint64_t value, uint64_t* __t1929t) {
  int __t1899t=0;
  int __t1900t=0;
  int __t1901t__=0;
  uint64_t __t1902t__=0;
  not__t37t(__t1900t,&__t1901t__);
  add__t175t(x,value,&__t1902t__);
  goto __t_return;
  __t_return:
  *__t1929t=__t1902t__;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1910t() {
  double __t1912t=0;
  double __t1913t__=0;
  uint64_t __t1915t=0;
  uint64_t __t1916t=0;
  uint64_t __t1917t__=0;
  console__t366t();
  __t1912t=2.0;
  inc__t1859t(__t1912t,&__t1913t__);
  print__t385t(__t1913t__);
  __t1915t=2;
  __t1916t=2;
  inc__t1898t(__t1915t,__t1916t,&__t1917t__);
  print__t393t(__t1917t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1910t();return 0;}