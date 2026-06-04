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

static inline __attribute__((always_inline)) void point__t1844t(double x, double y, double* __t1883t, double* __t1884t) {
  *__t1883t=x;
  *__t1884t=y;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1885t) {
  int value=0;
  *__t1885t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1886t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1886t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1887t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1887t=__t73t__;
}

static inline __attribute__((always_inline)) void gt__t254t(double x, double y, char* __t1888t) {
  int __t255t__=0;
  char z=0;
  is_different__t71t(x,y,&__t255t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1888t=z;
}

static inline __attribute__((always_inline)) void all_positives__t1849t(double p__x, double p__y, char* __t1889t) {
  double __t1850t=0;
  char __t1851t__=0;
  double __t1852t=0;
  char __t1853t__=0;
  char __t1854t=0;
  __t1850t=0.0;
  gt__t254t(p__x,__t1850t,&__t1851t__);
  if(__t1851t__){
  __t1852t=0.0;
  gt__t254t(p__y,__t1852t,&__t1853t__);
  __t1854t=__t1853t__;
  }
  goto __t_return;
  __t_return:
  *__t1889t=__t1854t;
}

static inline __attribute__((always_inline)) void neg__t150t(double x, double* __t1890t) {
  double z=0;
  z=(0-x);
  goto __t_return;
  __t_return:
  *__t1890t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1891t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1891t=z;
}

static inline __attribute__((always_inline)) void add__t1845t(double p1__x, double p1__y, double p2__x, double p2__y, double* __t1892t, double* __t1893t) {
  double __t1846t__=0;
  double __t1847t__=0;
  double __t1848t__x=0;
  double __t1848t__y=0;
  add__t153t(p1__x,p2__x,&__t1846t__);
  add__t153t(p1__y,p2__y,&__t1847t__);
  point__t1844t(__t1846t__,__t1847t__,&__t1848t__x,&__t1848t__y);
  goto __t_return;
  __t_return:
  *__t1892t=__t1848t__x;
  *__t1893t=__t1848t__y;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1894t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1894t=z;
}

static inline __attribute__((always_inline)) void not__t1855t(double p__x, double p__y, double* __t1895t, double* __t1896t) {
  double __t1856t=0;
  double __t1857t=0;
  double __t1858t__x=0;
  double __t1858t__y=0;
  __t1856t=0.0;
  __t1857t=0.0;
  point__t1844t(__t1856t,__t1857t,&__t1858t__x,&__t1858t__y);
  goto __t_return;
  __t_return:
  *__t1895t=__t1858t__x;
  *__t1896t=__t1858t__y;
}

static inline __attribute__((always_inline)) void main__t1859t() {
  double __t1861t=0;
  double __t1862t=0;
  double __t1863t__x=0;
  double __t1863t__y=0;
  double __t1864t__x=0;
  double __t1864t__y=0;
  double p__x=0;
  double p__y=0;
  char __t1865t__=0;
  double __t1866t=0;
  double __t1867t__=0;
  double __t1868t=0;
  double __t1869t__=0;
  double __t1870t__x=0;
  double __t1870t__y=0;
  double __t1871t__x=0;
  double __t1871t__y=0;
  char __t1874t__=0;
  char __t1875t__=0;
  double __t1876t=0;
  double __t1877t=0;
  double __t1878t__t1876t=0;
  double __t1878t__t1877t=0;
  double __t1879t__x=0;
  double __t1879t__y=0;
  double __t1880t__x=0;
  double __t1880t__y=0;
  console__t366t();
  __t1861t=10.0;
  __t1862t=20.0;
  point__t1844t(__t1861t,__t1862t,&__t1863t__x,&__t1863t__y);
  __t1864t__x=__t1863t__x;
  __t1864t__y=__t1863t__y;
  p__x=__t1864t__x;
  p__y=__t1864t__y;
  all_positives__t1849t(p__x,p__y,&__t1865t__);
  if(__t1865t__){
  __t1866t=30.0;
  neg__t150t(__t1866t,&__t1867t__);
  __t1868t=30.0;
  neg__t150t(__t1868t,&__t1869t__);
  add__t1845t(p__x,p__y,__t1867t__,__t1869t__,&__t1870t__x,&__t1870t__y);
  __t1871t__x=__t1870t__x;
  __t1871t__y=__t1870t__y;
  }
  p__x=__t1871t__x;
  p__y=__t1871t__y;
  print__t385t(p__x);
  print__t385t(p__y);
  all_positives__t1849t(p__x,p__y,&__t1874t__);
  not__t28t(__t1874t__,&__t1875t__);
  if(!__t1875t__){
  __t1876t=1.0;
  __t1877t=1.0;
  __t1878t__t1876t=__t1876t;
  __t1878t__t1877t=__t1877t;
  }
  else{
  __t1878t__t1876t=0;
  not__t1855t(__t1878t__t1876t,__t1878t__t1877t,&__t1879t__x,&__t1879t__y);
  __t1878t__t1876t=__t1879t__x;
  __t1878t__t1877t=__t1879t__y;
  __t1878t__t1877t=0;
  not__t1855t(__t1878t__t1876t,__t1878t__t1877t,&__t1880t__x,&__t1880t__y);
  __t1878t__t1876t=__t1880t__x;
  __t1878t__t1877t=__t1880t__y;
  }
  p__x=__t1878t__t1876t;
  p__y=__t1878t__t1877t;
  print__t385t(p__x);
  print__t385t(p__y);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1859t();return 0;}