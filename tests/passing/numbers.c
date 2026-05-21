#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t370t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
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

static inline __attribute__((always_inline)) void true__t11t(int* __t1320t) {
  int value=0;
  *__t1320t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1321t) {
  int __t38t__=0;
  true__t11t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1321t=__t38t__;
}

static inline __attribute__((always_inline)) void float__t403t(uint64_t x, double* __t1322t) {
  int __t404t=0;
  int __t405t__=0;
  int __t406t=0;
  double z=0;
  not__t37t(__t404t,&__t405t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1322t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1323t) {
  int value=0;
  *__t1323t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1324t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1324t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t1325t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t1325t=__t71t__;
}

static inline __attribute__((always_inline)) void mul__t172t(double x, double y, double* __t1326t) {
  int __t173t__=0;
  double z=0;
  is_different__t69t(x,y,&__t173t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1326t=z;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t1327t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1327t=z;
}

static inline __attribute__((always_inline)) void print__t373t(double value) {
  int __t374t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1309t() {
  double __t1310t=0;
  double x=0;
  uint64_t __t1311t=0;
  double __t1312t__=0;
  uint64_t __t1313t=0;
  double __t1314t__=0;
  double __t1315t=0;
  double __t1316t__=0;
  double __t1317t__=0;
  double __t1318t__=0;
  __t1310t=1.0;
  x=__t1310t;
  __t1311t=1;
  float__t403t(__t1311t,&__t1312t__);
  __t1313t=2;
  float__t403t(__t1313t,&__t1314t__);
  __t1315t=2.0;
  mul__t172t(__t1314t__,__t1315t,&__t1316t__);
  add__t148t(__t1312t__,__t1316t__,&__t1317t__);
  add__t148t(x,__t1317t__,&__t1318t__);
  print__t373t(__t1318t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1309t();return 0;}