#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
static const char* __t_all_errcodes[46] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"buffer size not divisible by vector rows",
"row out of bounds",
"column out of bounds",
"matrix columns must match vector length",
"vector length must match matrix rows",
"inner dimensions must agree"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void false__t10t(int* __t6105t) {
  int value=0;
  *__t6105t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t6106t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t6106t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t6107t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t6107t=__t73t__;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t6108t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t6108t=z;
}

static inline __attribute__((always_inline)) void bits__t592t(uint64_t value, uint64_t* __t6109t) {
  goto __t_return;
  __t_return:
  *__t6109t=value;
}

static inline __attribute__((always_inline)) void bits__t596t(double x, uint64_t* __t6110t) {
  uint64_t z=0;
  uint64_t __t597t__value=0;
  z=0;
  memcpy(&z,&x,8);
  bits__t592t(z,&__t597t__value);
  goto __t_return;
  __t_return:
  *__t6110t=__t597t__value;
}

static inline __attribute__((always_inline)) void bits__t594t(int64_t x, uint64_t* __t6111t) {
  uint64_t z=0;
  uint64_t __t595t__value=0;
  z=x;
  bits__t592t(z,&__t595t__value);
  goto __t_return;
  __t_return:
  *__t6111t=__t595t__value;
}

static inline __attribute__((always_inline)) void band__t608t(uint64_t x__value, uint64_t y__value, uint64_t* __t6112t) {
  uint64_t z=0;
  uint64_t __t609t__value=0;
  z=(x__value&y__value);
  bits__t592t(z,&__t609t__value);
  goto __t_return;
  __t_return:
  *__t6112t=__t609t__value;
}

static inline __attribute__((always_inline)) void float__t601t(uint64_t x__value, double* __t6113t) {
  double z=0;
  z=0;
  memcpy(&z,&x__value,8);
  goto __t_return;
  __t_return:
  *__t6113t=z;
}

static inline __attribute__((always_inline)) void abs__t2011t(double x, double* __t6114t) {
  int64_t c=0;
  uint64_t __t2012t__value=0;
  uint64_t __t2013t__value=0;
  uint64_t __t2014t__value=0;
  double __t2015t__=0;
  c=0x7FFFFFFFFFFFFFFF;
  bits__t596t(x,&__t2012t__value);
  bits__t594t(c,&__t2013t__value);
  band__t608t(__t2012t__value,__t2013t__value,&__t2014t__value);
  float__t601t(__t2014t__value,&__t2015t__);
  goto __t_return;
  __t_return:
  *__t6114t=__t2015t__;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t6098t() {
  double __t6100t=0;
  double __t6101t=0;
  double __t6102t__=0;
  double __t6103t__=0;
  console__t366t();
  __t6100t=0.0;
  __t6101t=1000023.2423;
  sub__t326t(__t6100t,__t6101t,&__t6102t__);
  abs__t2011t(__t6102t__,&__t6103t__);
  print__t385t(__t6103t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t6098t();return 0;}