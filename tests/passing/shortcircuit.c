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

static inline __attribute__((always_inline)) void point__t1467t(double x, double y, double* __t1505t, double* __t1506t) {
  *__t1505t=x;
  *__t1506t=y;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1507t) {
  int value=0;
  *__t1507t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1508t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1508t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1509t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1509t=__t72t__;
}

static inline __attribute__((always_inline)) void gt__t253t(double x, double y, char* __t1510t) {
  int __t254t__=0;
  char z=0;
  is_different__t70t(x,y,&__t254t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1510t=z;
}

static inline __attribute__((always_inline)) void all_positives__t1472t(double p__x, double p__y, char* __t1511t) {
  double __t1473t=0;
  char __t1474t__=0;
  double __t1475t=0;
  char __t1476t__=0;
  char __t1477t=0;
  __t1473t=0.0;
  gt__t253t(p__x,__t1473t,&__t1474t__);
  if(__t1474t__){
  __t1475t=0.0;
  gt__t253t(p__y,__t1475t,&__t1476t__);
  __t1477t=__t1476t__;
  }
  goto __t_return;
  __t_return:
  *__t1511t=__t1477t;
}

static inline __attribute__((always_inline)) void neg__t149t(double x, double* __t1512t) {
  double z=0;
  z=(0-x);
  goto __t_return;
  __t_return:
  *__t1512t=z;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t1513t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1513t=z;
}

static inline __attribute__((always_inline)) void add__t1468t(double p1__x, double p1__y, double p2__x, double p2__y, double* __t1514t, double* __t1515t) {
  double __t1469t__=0;
  double __t1470t__=0;
  double __t1471t__x=0;
  double __t1471t__y=0;
  add__t152t(p1__x,p2__x,&__t1469t__);
  add__t152t(p1__y,p2__y,&__t1470t__);
  point__t1467t(__t1469t__,__t1470t__,&__t1471t__x,&__t1471t__y);
  goto __t_return;
  __t_return:
  *__t1514t=__t1471t__x;
  *__t1515t=__t1471t__y;
}

static inline __attribute__((always_inline)) void print__t377t(double value) {
  int __t378t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1516t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1516t=z;
}

static inline __attribute__((always_inline)) void not__t1478t(double p__x, double p__y, double* __t1517t, double* __t1518t) {
  double __t1479t=0;
  double __t1480t=0;
  double __t1481t__x=0;
  double __t1481t__y=0;
  __t1479t=0.0;
  __t1480t=0.0;
  point__t1467t(__t1479t,__t1480t,&__t1481t__x,&__t1481t__y);
  goto __t_return;
  __t_return:
  *__t1517t=__t1481t__x;
  *__t1518t=__t1481t__y;
}

static inline __attribute__((always_inline)) void main__t1482t() {
  double __t1483t=0;
  double __t1484t=0;
  double __t1485t__x=0;
  double __t1485t__y=0;
  double __t1486t__x=0;
  double __t1486t__y=0;
  double p__x=0;
  double p__y=0;
  char __t1487t__=0;
  double __t1488t=0;
  double __t1489t__=0;
  double __t1490t=0;
  double __t1491t__=0;
  double __t1492t__x=0;
  double __t1492t__y=0;
  double __t1493t__x=0;
  double __t1493t__y=0;
  char __t1496t__=0;
  char __t1497t__=0;
  double __t1498t=0;
  double __t1499t=0;
  double __t1500t__t1498t=0;
  double __t1500t__t1499t=0;
  double __t1501t__x=0;
  double __t1501t__y=0;
  double __t1502t__x=0;
  double __t1502t__y=0;
  __t1483t=10.0;
  __t1484t=20.0;
  point__t1467t(__t1483t,__t1484t,&__t1485t__x,&__t1485t__y);
  __t1486t__x=__t1485t__x;
  __t1486t__y=__t1485t__y;
  p__x=__t1486t__x;
  p__y=__t1486t__y;
  all_positives__t1472t(p__x,p__y,&__t1487t__);
  if(__t1487t__){
  __t1488t=30.0;
  neg__t149t(__t1488t,&__t1489t__);
  __t1490t=30.0;
  neg__t149t(__t1490t,&__t1491t__);
  add__t1468t(p__x,p__y,__t1489t__,__t1491t__,&__t1492t__x,&__t1492t__y);
  __t1493t__x=__t1492t__x;
  __t1493t__y=__t1492t__y;
  }
  p__x=__t1493t__x;
  p__y=__t1493t__y;
  print__t377t(p__x);
  print__t377t(p__y);
  all_positives__t1472t(p__x,p__y,&__t1496t__);
  not__t27t(__t1496t__,&__t1497t__);
  if(!__t1497t__){
  __t1498t=1.0;
  __t1499t=1.0;
  __t1500t__t1498t=__t1498t;
  __t1500t__t1499t=__t1499t;
  }
  else{
  __t1500t__t1498t=0;
  not__t1478t(__t1500t__t1498t,__t1500t__t1499t,&__t1501t__x,&__t1501t__y);
  __t1500t__t1498t=__t1501t__x;
  __t1500t__t1499t=__t1501t__y;
  __t1500t__t1499t=0;
  not__t1478t(__t1500t__t1498t,__t1500t__t1499t,&__t1502t__x,&__t1502t__y);
  __t1500t__t1498t=__t1502t__x;
  __t1500t__t1499t=__t1502t__y;
  }
  p__x=__t1500t__t1498t;
  p__y=__t1500t__t1499t;
  print__t377t(p__x);
  print__t377t(p__y);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1482t();return 0;}