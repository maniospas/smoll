#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t374t="\n";
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void true__t11t(int* __t1541t) {
  int value=0;
  *__t1541t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t1542t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t1542t=__t39t__;
}

static inline __attribute__((always_inline)) void float__t407t(uint64_t x, double* __t1543t) {
  int __t408t=0;
  int __t409t__=0;
  int __t410t=0;
  double z=0;
  not__t38t(__t408t,&__t409t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1543t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1544t) {
  int value=0;
  *__t1544t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1545t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1545t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1546t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1546t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t1547t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1547t=z;
}

static inline __attribute__((always_inline)) void inc__t1482t(double x, double* __t1548t) {
  int __t1483t=0;
  uint64_t __t1484t=0;
  double __t1485t__=0;
  double value=0;
  int __t1486t=0;
  int __t1487t__=0;
  double __t1488t__=0;
  __t1484t=1;
  float__t407t(__t1484t,&__t1485t__);
  value=__t1485t__;
  not__t36t(__t1486t,&__t1487t__);
  add__t152t(x,value,&__t1488t__);
  goto __t_return;
  __t_return:
  *__t1548t=__t1488t__;
}

static inline __attribute__((always_inline)) void print__t377t(double value) {
  int __t378t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1549t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1549t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1550t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1550t=z;
}

static inline __attribute__((always_inline)) void inc__t1521t(uint64_t x, uint64_t value, uint64_t* __t1551t) {
  int __t1522t=0;
  int __t1523t=0;
  int __t1524t__=0;
  uint64_t __t1525t__=0;
  not__t36t(__t1523t,&__t1524t__);
  add__t174t(x,value,&__t1525t__);
  goto __t_return;
  __t_return:
  *__t1551t=__t1525t__;
}

static inline __attribute__((always_inline)) void print__t385t(uint64_t value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1533t() {
  double __t1534t=0;
  double __t1535t__=0;
  uint64_t __t1537t=0;
  uint64_t __t1538t=0;
  uint64_t __t1539t__=0;
  __t1534t=2.0;
  inc__t1482t(__t1534t,&__t1535t__);
  print__t377t(__t1535t__);
  __t1537t=2;
  __t1538t=2;
  inc__t1521t(__t1537t,__t1538t,&__t1539t__);
  print__t385t(__t1539t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1533t();return 0;}