#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t365t="\n";
static const char* __t_all_errcodes[34] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void float__t392t(uint64_t x, double* __t1277t) {
  double z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t1277t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1278t) {
  int value=0;
  *__t1278t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1279t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1279t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t1280t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t1280t=__t71t__;
}

static inline __attribute__((always_inline)) void mul__t172t(double x, double y, double* __t1281t) {
  int __t173t__=0;
  double z=0;
  is_different__t69t(x,y,&__t173t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1281t=z;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t1282t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1282t=z;
}

static inline __attribute__((always_inline)) void print__t368t(double value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1266t() {
  double __t1267t=0;
  double x=0;
  uint64_t __t1268t=0;
  double __t1269t__=0;
  uint64_t __t1270t=0;
  double __t1271t__=0;
  double __t1272t=0;
  double __t1273t__=0;
  double __t1274t__=0;
  double __t1275t__=0;
  __t1267t=1.0;
  x=__t1267t;
  __t1268t=1;
  float__t392t(__t1268t,&__t1269t__);
  __t1270t=2;
  float__t392t(__t1270t,&__t1271t__);
  __t1272t=2.0;
  mul__t172t(__t1271t__,__t1272t,&__t1273t__);
  add__t148t(__t1269t__,__t1273t__,&__t1274t__);
  add__t148t(x,__t1274t__,&__t1275t__);
  print__t368t(__t1275t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1266t();return 0;}