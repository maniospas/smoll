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

static inline __attribute__((always_inline)) void false__t10t(int* __t5802t) {
  int value=0;
  *__t5802t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5803t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5803t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5804t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5804t=__t73t__;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t5805t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5805t=z;
}

static inline __attribute__((always_inline)) void bits__t448t(uint64_t value, uint64_t* __t5806t) {
  goto __t_return;
  __t_return:
  *__t5806t=value;
}

static inline __attribute__((always_inline)) void bits__t452t(double x, uint64_t* __t5807t) {
  uint64_t z=0;
  uint64_t __t453t__value=0;
  z=0;
  memcpy(&z,&x,8);
  bits__t448t(z,&__t453t__value);
  goto __t_return;
  __t_return:
  *__t5807t=__t453t__value;
}

static inline __attribute__((always_inline)) void bits__t450t(int64_t x, uint64_t* __t5808t) {
  uint64_t z=0;
  uint64_t __t451t__value=0;
  z=x;
  bits__t448t(z,&__t451t__value);
  goto __t_return;
  __t_return:
  *__t5808t=__t451t__value;
}

static inline __attribute__((always_inline)) void band__t464t(uint64_t x__value, uint64_t y__value, uint64_t* __t5809t) {
  uint64_t z=0;
  uint64_t __t465t__value=0;
  z=(x__value&y__value);
  bits__t448t(z,&__t465t__value);
  goto __t_return;
  __t_return:
  *__t5809t=__t465t__value;
}

static inline __attribute__((always_inline)) void float__t457t(uint64_t x__value, double* __t5810t) {
  double z=0;
  z=0;
  memcpy(&z,&x__value,8);
  goto __t_return;
  __t_return:
  *__t5810t=z;
}

static inline __attribute__((always_inline)) void abs__t1844t(double x, double* __t5811t) {
  int64_t c=0;
  uint64_t __t1845t__value=0;
  uint64_t __t1846t__value=0;
  uint64_t __t1847t__value=0;
  double __t1848t__=0;
  c=0x7FFFFFFFFFFFFFFF;
  bits__t452t(x,&__t1845t__value);
  bits__t450t(c,&__t1846t__value);
  band__t464t(__t1845t__value,__t1846t__value,&__t1847t__value);
  float__t457t(__t1847t__value,&__t1848t__);
  goto __t_return;
  __t_return:
  *__t5811t=__t1848t__;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t5795t() {
  double __t5797t=0;
  double __t5798t=0;
  double __t5799t__=0;
  double __t5800t__=0;
  console__t366t();
  __t5797t=0.0;
  __t5798t=1000023.2423;
  sub__t326t(__t5797t,__t5798t,&__t5799t__);
  abs__t1844t(__t5799t__,&__t5800t__);
  print__t385t(__t5800t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5795t();return 0;}