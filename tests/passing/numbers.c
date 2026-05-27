#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t371t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
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

static inline __attribute__((always_inline)) void true__t11t(int* __t1336t) {
  int value=0;
  *__t1336t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t1337t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t1337t=__t39t__;
}

static inline __attribute__((always_inline)) void float__t404t(uint64_t x, double* __t1338t) {
  int __t405t=0;
  int __t406t__=0;
  int __t407t=0;
  double z=0;
  not__t38t(__t405t,&__t406t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1338t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1339t) {
  int value=0;
  *__t1339t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1340t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1340t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1341t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1341t=__t72t__;
}

static inline __attribute__((always_inline)) void mul__t173t(double x, double y, double* __t1342t) {
  int __t174t__=0;
  double z=0;
  is_different__t70t(x,y,&__t174t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1342t=z;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t1343t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1343t=z;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1325t() {
  double __t1326t=0;
  double x=0;
  uint64_t __t1327t=0;
  double __t1328t__=0;
  uint64_t __t1329t=0;
  double __t1330t__=0;
  double __t1331t=0;
  double __t1332t__=0;
  double __t1333t__=0;
  double __t1334t__=0;
  __t1326t=1.0;
  x=__t1326t;
  __t1327t=1;
  float__t404t(__t1327t,&__t1328t__);
  __t1329t=2;
  float__t404t(__t1329t,&__t1330t__);
  __t1331t=2.0;
  mul__t173t(__t1330t__,__t1331t,&__t1332t__);
  add__t149t(__t1328t__,__t1332t__,&__t1333t__);
  add__t149t(x,__t1333t__,&__t1334t__);
  print__t374t(__t1334t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1325t();return 0;}