#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t378t="\n";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void point__t1509t(double x, double y, double* __t1548t, double* __t1549t) {
  *__t1548t=x;
  *__t1549t=y;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1550t) {
  int value=0;
  *__t1550t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1551t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1551t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1552t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1552t=__t73t__;
}

static inline __attribute__((always_inline)) void gt__t254t(double x, double y, char* __t1553t) {
  int __t255t__=0;
  char z=0;
  is_different__t71t(x,y,&__t255t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1553t=z;
}

static inline __attribute__((always_inline)) void all_positives__t1514t(double p__x, double p__y, char* __t1554t) {
  double __t1515t=0;
  char __t1516t__=0;
  double __t1517t=0;
  char __t1518t__=0;
  char __t1519t=0;
  __t1515t=0.0;
  gt__t254t(p__x,__t1515t,&__t1516t__);
  if(__t1516t__){
  __t1517t=0.0;
  gt__t254t(p__y,__t1517t,&__t1518t__);
  __t1519t=__t1518t__;
  }
  goto __t_return;
  __t_return:
  *__t1554t=__t1519t;
}

static inline __attribute__((always_inline)) void neg__t150t(double x, double* __t1555t) {
  double z=0;
  z=(0-x);
  goto __t_return;
  __t_return:
  *__t1555t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1556t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1556t=z;
}

static inline __attribute__((always_inline)) void add__t1510t(double p1__x, double p1__y, double p2__x, double p2__y, double* __t1557t, double* __t1558t) {
  double __t1511t__=0;
  double __t1512t__=0;
  double __t1513t__x=0;
  double __t1513t__y=0;
  add__t153t(p1__x,p2__x,&__t1511t__);
  add__t153t(p1__y,p2__y,&__t1512t__);
  point__t1509t(__t1511t__,__t1512t__,&__t1513t__x,&__t1513t__y);
  goto __t_return;
  __t_return:
  *__t1557t=__t1513t__x;
  *__t1558t=__t1513t__y;
}

static inline __attribute__((always_inline)) void print__t381t(double value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1559t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1559t=z;
}

static inline __attribute__((always_inline)) void not__t1520t(double p__x, double p__y, double* __t1560t, double* __t1561t) {
  double __t1521t=0;
  double __t1522t=0;
  double __t1523t__x=0;
  double __t1523t__y=0;
  __t1521t=0.0;
  __t1522t=0.0;
  point__t1509t(__t1521t,__t1522t,&__t1523t__x,&__t1523t__y);
  goto __t_return;
  __t_return:
  *__t1560t=__t1523t__x;
  *__t1561t=__t1523t__y;
}

static inline __attribute__((always_inline)) void main__t1524t() {
  double __t1526t=0;
  double __t1527t=0;
  double __t1528t__x=0;
  double __t1528t__y=0;
  double __t1529t__x=0;
  double __t1529t__y=0;
  double p__x=0;
  double p__y=0;
  char __t1530t__=0;
  double __t1531t=0;
  double __t1532t__=0;
  double __t1533t=0;
  double __t1534t__=0;
  double __t1535t__x=0;
  double __t1535t__y=0;
  double __t1536t__x=0;
  double __t1536t__y=0;
  char __t1539t__=0;
  char __t1540t__=0;
  double __t1541t=0;
  double __t1542t=0;
  double __t1543t__t1541t=0;
  double __t1543t__t1542t=0;
  double __t1544t__x=0;
  double __t1544t__y=0;
  double __t1545t__x=0;
  double __t1545t__y=0;
  console__t366t();
  __t1526t=10.0;
  __t1527t=20.0;
  point__t1509t(__t1526t,__t1527t,&__t1528t__x,&__t1528t__y);
  __t1529t__x=__t1528t__x;
  __t1529t__y=__t1528t__y;
  p__x=__t1529t__x;
  p__y=__t1529t__y;
  all_positives__t1514t(p__x,p__y,&__t1530t__);
  if(__t1530t__){
  __t1531t=30.0;
  neg__t150t(__t1531t,&__t1532t__);
  __t1533t=30.0;
  neg__t150t(__t1533t,&__t1534t__);
  add__t1510t(p__x,p__y,__t1532t__,__t1534t__,&__t1535t__x,&__t1535t__y);
  __t1536t__x=__t1535t__x;
  __t1536t__y=__t1535t__y;
  }
  p__x=__t1536t__x;
  p__y=__t1536t__y;
  print__t381t(p__x);
  print__t381t(p__y);
  all_positives__t1514t(p__x,p__y,&__t1539t__);
  not__t28t(__t1539t__,&__t1540t__);
  if(!__t1540t__){
  __t1541t=1.0;
  __t1542t=1.0;
  __t1543t__t1541t=__t1541t;
  __t1543t__t1542t=__t1542t;
  }
  else{
  __t1543t__t1541t=0;
  not__t1520t(__t1543t__t1541t,__t1543t__t1542t,&__t1544t__x,&__t1544t__y);
  __t1543t__t1541t=__t1544t__x;
  __t1543t__t1542t=__t1544t__y;
  __t1543t__t1542t=0;
  not__t1520t(__t1543t__t1541t,__t1543t__t1542t,&__t1545t__x,&__t1545t__y);
  __t1543t__t1541t=__t1545t__x;
  __t1543t__t1542t=__t1545t__y;
  }
  p__x=__t1543t__t1541t;
  p__y=__t1543t__t1542t;
  print__t381t(p__x);
  print__t381t(p__y);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1524t();return 0;}