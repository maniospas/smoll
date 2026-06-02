#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t377t="\n";
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

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void true__t11t(int* __t1555t) {
  int value=0;
  *__t1555t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t1556t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t1556t=__t39t__;
}

static inline __attribute__((always_inline)) void float__t410t(uint64_t x, double* __t1557t) {
  int __t411t=0;
  int __t412t__=0;
  int __t413t=0;
  double z=0;
  not__t38t(__t411t,&__t412t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1557t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1558t) {
  int value=0;
  *__t1558t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1559t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1559t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1560t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1560t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t1561t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1561t=z;
}

static inline __attribute__((always_inline)) void inc__t1495t(double x, double* __t1562t) {
  int __t1496t=0;
  uint64_t __t1497t=0;
  double __t1498t__=0;
  double value=0;
  int __t1499t=0;
  int __t1500t__=0;
  double __t1501t__=0;
  __t1497t=1;
  float__t410t(__t1497t,&__t1498t__);
  value=__t1498t__;
  not__t36t(__t1499t,&__t1500t__);
  add__t152t(x,value,&__t1501t__);
  goto __t_return;
  __t_return:
  *__t1562t=__t1501t__;
}

static inline __attribute__((always_inline)) void print__t380t(double value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1563t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1563t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1564t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1564t=z;
}

static inline __attribute__((always_inline)) void inc__t1534t(uint64_t x, uint64_t value, uint64_t* __t1565t) {
  int __t1535t=0;
  int __t1536t=0;
  int __t1537t__=0;
  uint64_t __t1538t__=0;
  not__t36t(__t1536t,&__t1537t__);
  add__t174t(x,value,&__t1538t__);
  goto __t_return;
  __t_return:
  *__t1565t=__t1538t__;
}

static inline __attribute__((always_inline)) void print__t388t(uint64_t value) {
  int __t389t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1546t() {
  double __t1548t=0;
  double __t1549t__=0;
  uint64_t __t1551t=0;
  uint64_t __t1552t=0;
  uint64_t __t1553t__=0;
  console__t365t();
  __t1548t=2.0;
  inc__t1495t(__t1548t,&__t1549t__);
  print__t380t(__t1549t__);
  __t1551t=2;
  __t1552t=2;
  inc__t1534t(__t1551t,__t1552t,&__t1553t__);
  print__t388t(__t1553t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1546t();return 0;}