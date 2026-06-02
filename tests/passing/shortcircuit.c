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

static inline __attribute__((always_inline)) void point__t1480t(double x, double y, double* __t1519t, double* __t1520t) {
  *__t1519t=x;
  *__t1520t=y;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1521t) {
  int value=0;
  *__t1521t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1522t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1522t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1523t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1523t=__t72t__;
}

static inline __attribute__((always_inline)) void gt__t253t(double x, double y, char* __t1524t) {
  int __t254t__=0;
  char z=0;
  is_different__t70t(x,y,&__t254t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1524t=z;
}

static inline __attribute__((always_inline)) void all_positives__t1485t(double p__x, double p__y, char* __t1525t) {
  double __t1486t=0;
  char __t1487t__=0;
  double __t1488t=0;
  char __t1489t__=0;
  char __t1490t=0;
  __t1486t=0.0;
  gt__t253t(p__x,__t1486t,&__t1487t__);
  if(__t1487t__){
  __t1488t=0.0;
  gt__t253t(p__y,__t1488t,&__t1489t__);
  __t1490t=__t1489t__;
  }
  goto __t_return;
  __t_return:
  *__t1525t=__t1490t;
}

static inline __attribute__((always_inline)) void neg__t149t(double x, double* __t1526t) {
  double z=0;
  z=(0-x);
  goto __t_return;
  __t_return:
  *__t1526t=z;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t1527t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1527t=z;
}

static inline __attribute__((always_inline)) void add__t1481t(double p1__x, double p1__y, double p2__x, double p2__y, double* __t1528t, double* __t1529t) {
  double __t1482t__=0;
  double __t1483t__=0;
  double __t1484t__x=0;
  double __t1484t__y=0;
  add__t152t(p1__x,p2__x,&__t1482t__);
  add__t152t(p1__y,p2__y,&__t1483t__);
  point__t1480t(__t1482t__,__t1483t__,&__t1484t__x,&__t1484t__y);
  goto __t_return;
  __t_return:
  *__t1528t=__t1484t__x;
  *__t1529t=__t1484t__y;
}

static inline __attribute__((always_inline)) void print__t380t(double value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1530t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1530t=z;
}

static inline __attribute__((always_inline)) void not__t1491t(double p__x, double p__y, double* __t1531t, double* __t1532t) {
  double __t1492t=0;
  double __t1493t=0;
  double __t1494t__x=0;
  double __t1494t__y=0;
  __t1492t=0.0;
  __t1493t=0.0;
  point__t1480t(__t1492t,__t1493t,&__t1494t__x,&__t1494t__y);
  goto __t_return;
  __t_return:
  *__t1531t=__t1494t__x;
  *__t1532t=__t1494t__y;
}

static inline __attribute__((always_inline)) void main__t1495t() {
  double __t1497t=0;
  double __t1498t=0;
  double __t1499t__x=0;
  double __t1499t__y=0;
  double __t1500t__x=0;
  double __t1500t__y=0;
  double p__x=0;
  double p__y=0;
  char __t1501t__=0;
  double __t1502t=0;
  double __t1503t__=0;
  double __t1504t=0;
  double __t1505t__=0;
  double __t1506t__x=0;
  double __t1506t__y=0;
  double __t1507t__x=0;
  double __t1507t__y=0;
  char __t1510t__=0;
  char __t1511t__=0;
  double __t1512t=0;
  double __t1513t=0;
  double __t1514t__t1512t=0;
  double __t1514t__t1513t=0;
  double __t1515t__x=0;
  double __t1515t__y=0;
  double __t1516t__x=0;
  double __t1516t__y=0;
  console__t365t();
  __t1497t=10.0;
  __t1498t=20.0;
  point__t1480t(__t1497t,__t1498t,&__t1499t__x,&__t1499t__y);
  __t1500t__x=__t1499t__x;
  __t1500t__y=__t1499t__y;
  p__x=__t1500t__x;
  p__y=__t1500t__y;
  all_positives__t1485t(p__x,p__y,&__t1501t__);
  if(__t1501t__){
  __t1502t=30.0;
  neg__t149t(__t1502t,&__t1503t__);
  __t1504t=30.0;
  neg__t149t(__t1504t,&__t1505t__);
  add__t1481t(p__x,p__y,__t1503t__,__t1505t__,&__t1506t__x,&__t1506t__y);
  __t1507t__x=__t1506t__x;
  __t1507t__y=__t1506t__y;
  }
  p__x=__t1507t__x;
  p__y=__t1507t__y;
  print__t380t(p__x);
  print__t380t(p__y);
  all_positives__t1485t(p__x,p__y,&__t1510t__);
  not__t27t(__t1510t__,&__t1511t__);
  if(!__t1511t__){
  __t1512t=1.0;
  __t1513t=1.0;
  __t1514t__t1512t=__t1512t;
  __t1514t__t1513t=__t1513t;
  }
  else{
  __t1514t__t1512t=0;
  not__t1491t(__t1514t__t1512t,__t1514t__t1513t,&__t1515t__x,&__t1515t__y);
  __t1514t__t1512t=__t1515t__x;
  __t1514t__t1513t=__t1515t__y;
  __t1514t__t1513t=0;
  not__t1491t(__t1514t__t1512t,__t1514t__t1513t,&__t1516t__x,&__t1516t__y);
  __t1514t__t1512t=__t1516t__x;
  __t1514t__t1513t=__t1516t__y;
  }
  p__x=__t1514t__t1512t;
  p__y=__t1514t__t1513t;
  print__t380t(p__x);
  print__t380t(p__y);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1495t();return 0;}