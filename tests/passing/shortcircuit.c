#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void point__t1551t(double x, double y, double* __t1590t, double* __t1591t) {
  *__t1590t=x;
  *__t1591t=y;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1592t) {
  int value=0;
  *__t1592t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1593t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1593t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1594t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1594t=__t73t__;
}

static inline __attribute__((always_inline)) void gt__t254t(double x, double y, char* __t1595t) {
  int __t255t__=0;
  char z=0;
  is_different__t71t(x,y,&__t255t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1595t=z;
}

static inline __attribute__((always_inline)) void all_positives__t1556t(double p__x, double p__y, char* __t1596t) {
  double __t1557t=0;
  char __t1558t__=0;
  double __t1559t=0;
  char __t1560t__=0;
  char __t1561t=0;
  __t1557t=0.0;
  gt__t254t(p__x,__t1557t,&__t1558t__);
  if(__t1558t__){
  __t1559t=0.0;
  gt__t254t(p__y,__t1559t,&__t1560t__);
  __t1561t=__t1560t__;
  }
  goto __t_return;
  __t_return:
  *__t1596t=__t1561t;
}

static inline __attribute__((always_inline)) void neg__t150t(double x, double* __t1597t) {
  double z=0;
  z=(0-x);
  goto __t_return;
  __t_return:
  *__t1597t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1598t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1598t=z;
}

static inline __attribute__((always_inline)) void add__t1552t(double p1__x, double p1__y, double p2__x, double p2__y, double* __t1599t, double* __t1600t) {
  double __t1553t__=0;
  double __t1554t__=0;
  double __t1555t__x=0;
  double __t1555t__y=0;
  add__t153t(p1__x,p2__x,&__t1553t__);
  add__t153t(p1__y,p2__y,&__t1554t__);
  point__t1551t(__t1553t__,__t1554t__,&__t1555t__x,&__t1555t__y);
  goto __t_return;
  __t_return:
  *__t1599t=__t1555t__x;
  *__t1600t=__t1555t__y;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1601t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1601t=z;
}

static inline __attribute__((always_inline)) void not__t1562t(double p__x, double p__y, double* __t1602t, double* __t1603t) {
  double __t1563t=0;
  double __t1564t=0;
  double __t1565t__x=0;
  double __t1565t__y=0;
  __t1563t=0.0;
  __t1564t=0.0;
  point__t1551t(__t1563t,__t1564t,&__t1565t__x,&__t1565t__y);
  goto __t_return;
  __t_return:
  *__t1602t=__t1565t__x;
  *__t1603t=__t1565t__y;
}

static inline __attribute__((always_inline)) void main__t1566t() {
  double __t1568t=0;
  double __t1569t=0;
  double __t1570t__x=0;
  double __t1570t__y=0;
  double __t1571t__x=0;
  double __t1571t__y=0;
  double p__x=0;
  double p__y=0;
  char __t1572t__=0;
  double __t1573t=0;
  double __t1574t__=0;
  double __t1575t=0;
  double __t1576t__=0;
  double __t1577t__x=0;
  double __t1577t__y=0;
  double __t1578t__x=0;
  double __t1578t__y=0;
  char __t1581t__=0;
  char __t1582t__=0;
  double __t1583t=0;
  double __t1584t=0;
  double __t1585t__t1583t=0;
  double __t1585t__t1584t=0;
  double __t1586t__x=0;
  double __t1586t__y=0;
  double __t1587t__x=0;
  double __t1587t__y=0;
  console__t366t();
  __t1568t=10.0;
  __t1569t=20.0;
  point__t1551t(__t1568t,__t1569t,&__t1570t__x,&__t1570t__y);
  __t1571t__x=__t1570t__x;
  __t1571t__y=__t1570t__y;
  p__x=__t1571t__x;
  p__y=__t1571t__y;
  all_positives__t1556t(p__x,p__y,&__t1572t__);
  if(__t1572t__){
  __t1573t=30.0;
  neg__t150t(__t1573t,&__t1574t__);
  __t1575t=30.0;
  neg__t150t(__t1575t,&__t1576t__);
  add__t1552t(p__x,p__y,__t1574t__,__t1576t__,&__t1577t__x,&__t1577t__y);
  __t1578t__x=__t1577t__x;
  __t1578t__y=__t1577t__y;
  }
  p__x=__t1578t__x;
  p__y=__t1578t__y;
  print__t385t(p__x);
  print__t385t(p__y);
  all_positives__t1556t(p__x,p__y,&__t1581t__);
  not__t28t(__t1581t__,&__t1582t__);
  if(!__t1582t__){
  __t1583t=1.0;
  __t1584t=1.0;
  __t1585t__t1583t=__t1583t;
  __t1585t__t1584t=__t1584t;
  }
  else{
  __t1585t__t1583t=0;
  not__t1562t(__t1585t__t1583t,__t1585t__t1584t,&__t1586t__x,&__t1586t__y);
  __t1585t__t1583t=__t1586t__x;
  __t1585t__t1584t=__t1586t__y;
  __t1585t__t1584t=0;
  not__t1562t(__t1585t__t1583t,__t1585t__t1584t,&__t1587t__x,&__t1587t__y);
  __t1585t__t1583t=__t1587t__x;
  __t1585t__t1584t=__t1587t__y;
  }
  p__x=__t1585t__t1583t;
  p__y=__t1585t__t1584t;
  print__t385t(p__x);
  print__t385t(p__y);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1566t();return 0;}