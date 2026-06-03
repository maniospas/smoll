#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
static const char* __t_all_errcodes[48] = {"noerr",
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
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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
"vector exceeeds buffer limits",
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"matrix exceeds buffer limits",
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

static inline __attribute__((always_inline)) void false__t10t(int* __t6919t) {
  int value=0;
  *__t6919t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t6920t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t6920t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t6921t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t6921t=__t73t__;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t6922t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t6922t=z;
}

static inline __attribute__((always_inline)) void bits__t448t(uint64_t value, uint64_t* __t6923t) {
  goto __t_return;
  __t_return:
  *__t6923t=value;
}

static inline __attribute__((always_inline)) void bits__t452t(double x, uint64_t* __t6924t) {
  uint64_t z=0;
  uint64_t __t453t__value=0;
  z=0;
  memcpy(&z,&x,8);
  bits__t448t(z,&__t453t__value);
  goto __t_return;
  __t_return:
  *__t6924t=__t453t__value;
}

static inline __attribute__((always_inline)) void rshift__t460t(uint64_t x__value, uint64_t y, uint64_t* __t6925t) {
  uint64_t z=0;
  uint64_t __t461t__value=0;
  z=(x__value>>y);
  bits__t448t(z,&__t461t__value);
  goto __t_return;
  __t_return:
  *__t6925t=__t461t__value;
}

static inline __attribute__((always_inline)) void bits__t450t(int64_t x, uint64_t* __t6926t) {
  uint64_t z=0;
  uint64_t __t451t__value=0;
  z=x;
  bits__t448t(z,&__t451t__value);
  goto __t_return;
  __t_return:
  *__t6926t=__t451t__value;
}

static inline __attribute__((always_inline)) void band__t464t(uint64_t x__value, uint64_t y__value, uint64_t* __t6927t) {
  uint64_t z=0;
  uint64_t __t465t__value=0;
  z=(x__value&y__value);
  bits__t448t(z,&__t465t__value);
  goto __t_return;
  __t_return:
  *__t6927t=__t465t__value;
}

static inline __attribute__((always_inline)) void float__t457t(uint64_t x__value, double* __t6928t) {
  double z=0;
  z=0;
  memcpy(&z,&x__value,8);
  goto __t_return;
  __t_return:
  *__t6928t=z;
}

static inline __attribute__((always_inline)) void abs__t2071t(double x, double* __t6929t) {
  uint64_t __t2072t__value=0;
  uint64_t __t2073t=0;
  uint64_t __t2074t__value=0;
  uint64_t mask__value=0;
  int64_t c=0;
  uint64_t __t2075t__value=0;
  uint64_t __t2076t__value=0;
  uint64_t __t2077t__value=0;
  double __t2078t__=0;
  bits__t452t(x,&__t2072t__value);
  __t2073t=63;
  rshift__t460t(__t2072t__value,__t2073t,&__t2074t__value);
  mask__value=__t2074t__value;
  c=0x7FFFFFFFFFFFFFFF;
  bits__t452t(x,&__t2075t__value);
  bits__t450t(c,&__t2076t__value);
  band__t464t(__t2075t__value,__t2076t__value,&__t2077t__value);
  float__t457t(__t2077t__value,&__t2078t__);
  goto __t_return;
  __t_return:
  *__t6929t=__t2078t__;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t6912t() {
  double __t6914t=0;
  double __t6915t=0;
  double __t6916t__=0;
  double __t6917t__=0;
  console__t366t();
  __t6914t=0.0;
  __t6915t=1000023.2423;
  sub__t326t(__t6914t,__t6915t,&__t6916t__);
  abs__t2071t(__t6916t__,&__t6917t__);
  print__t385t(__t6917t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t6912t();return 0;}