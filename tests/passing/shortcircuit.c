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

static inline __attribute__((always_inline)) void point__t2011t(double x, double y, double* __t2050t, double* __t2051t) {
  *__t2050t=x;
  *__t2051t=y;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2052t) {
  int value=0;
  *__t2052t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2053t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2053t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t2054t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t2054t=__t73t__;
}

static inline __attribute__((always_inline)) void gt__t254t(double x, double y, char* __t2055t) {
  int __t255t__=0;
  char z=0;
  is_different__t71t(x,y,&__t255t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2055t=z;
}

static inline __attribute__((always_inline)) void all_positives__t2016t(double p__x, double p__y, char* __t2056t) {
  double __t2017t=0;
  char __t2018t__=0;
  double __t2019t=0;
  char __t2020t__=0;
  char __t2021t=0;
  __t2017t=0.0;
  gt__t254t(p__x,__t2017t,&__t2018t__);
  if(__t2018t__){
  __t2019t=0.0;
  gt__t254t(p__y,__t2019t,&__t2020t__);
  __t2021t=__t2020t__;
  }
  goto __t_return;
  __t_return:
  *__t2056t=__t2021t;
}

static inline __attribute__((always_inline)) void neg__t150t(double x, double* __t2057t) {
  double z=0;
  z=(0-x);
  goto __t_return;
  __t_return:
  *__t2057t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t2058t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2058t=z;
}

static inline __attribute__((always_inline)) void add__t2012t(double p1__x, double p1__y, double p2__x, double p2__y, double* __t2059t, double* __t2060t) {
  double __t2013t__=0;
  double __t2014t__=0;
  double __t2015t__x=0;
  double __t2015t__y=0;
  add__t153t(p1__x,p2__x,&__t2013t__);
  add__t153t(p1__y,p2__y,&__t2014t__);
  point__t2011t(__t2013t__,__t2014t__,&__t2015t__x,&__t2015t__y);
  goto __t_return;
  __t_return:
  *__t2059t=__t2015t__x;
  *__t2060t=__t2015t__y;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2061t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2061t=z;
}

static inline __attribute__((always_inline)) void not__t2022t(double p__x, double p__y, double* __t2062t, double* __t2063t) {
  double __t2023t=0;
  double __t2024t=0;
  double __t2025t__x=0;
  double __t2025t__y=0;
  __t2023t=0.0;
  __t2024t=0.0;
  point__t2011t(__t2023t,__t2024t,&__t2025t__x,&__t2025t__y);
  goto __t_return;
  __t_return:
  *__t2062t=__t2025t__x;
  *__t2063t=__t2025t__y;
}

static inline __attribute__((always_inline)) void main__t2026t() {
  double __t2028t=0;
  double __t2029t=0;
  double __t2030t__x=0;
  double __t2030t__y=0;
  double __t2031t__x=0;
  double __t2031t__y=0;
  double p__x=0;
  double p__y=0;
  char __t2032t__=0;
  double __t2033t=0;
  double __t2034t__=0;
  double __t2035t=0;
  double __t2036t__=0;
  double __t2037t__x=0;
  double __t2037t__y=0;
  double __t2038t__x=0;
  double __t2038t__y=0;
  char __t2041t__=0;
  char __t2042t__=0;
  double __t2043t=0;
  double __t2044t=0;
  double __t2045t__t2043t=0;
  double __t2045t__t2044t=0;
  double __t2046t__x=0;
  double __t2046t__y=0;
  double __t2047t__x=0;
  double __t2047t__y=0;
  console__t366t();
  __t2028t=10.0;
  __t2029t=20.0;
  point__t2011t(__t2028t,__t2029t,&__t2030t__x,&__t2030t__y);
  __t2031t__x=__t2030t__x;
  __t2031t__y=__t2030t__y;
  p__x=__t2031t__x;
  p__y=__t2031t__y;
  all_positives__t2016t(p__x,p__y,&__t2032t__);
  if(__t2032t__){
  __t2033t=30.0;
  neg__t150t(__t2033t,&__t2034t__);
  __t2035t=30.0;
  neg__t150t(__t2035t,&__t2036t__);
  add__t2012t(p__x,p__y,__t2034t__,__t2036t__,&__t2037t__x,&__t2037t__y);
  __t2038t__x=__t2037t__x;
  __t2038t__y=__t2037t__y;
  }
  p__x=__t2038t__x;
  p__y=__t2038t__y;
  print__t385t(p__x);
  print__t385t(p__y);
  all_positives__t2016t(p__x,p__y,&__t2041t__);
  not__t28t(__t2041t__,&__t2042t__);
  if(!__t2042t__){
  __t2043t=1.0;
  __t2044t=1.0;
  __t2045t__t2043t=__t2043t;
  __t2045t__t2044t=__t2044t;
  }
  else{
  __t2045t__t2043t=0;
  not__t2022t(__t2045t__t2043t,__t2045t__t2044t,&__t2046t__x,&__t2046t__y);
  __t2045t__t2043t=__t2046t__x;
  __t2045t__t2044t=__t2046t__y;
  __t2045t__t2044t=0;
  not__t2022t(__t2045t__t2043t,__t2045t__t2044t,&__t2047t__x,&__t2047t__y);
  __t2045t__t2043t=__t2047t__x;
  __t2045t__t2044t=__t2047t__y;
  }
  p__x=__t2045t__t2043t;
  p__y=__t2045t__t2044t;
  print__t385t(p__x);
  print__t385t(p__y);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2026t();return 0;}