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

static inline __attribute__((always_inline)) void point__t1555t(double x, double y, double* __t1594t, double* __t1595t) {
  *__t1594t=x;
  *__t1595t=y;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1596t) {
  int value=0;
  *__t1596t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1597t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1597t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1598t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1598t=__t73t__;
}

static inline __attribute__((always_inline)) void gt__t254t(double x, double y, char* __t1599t) {
  int __t255t__=0;
  char z=0;
  is_different__t71t(x,y,&__t255t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1599t=z;
}

static inline __attribute__((always_inline)) void all_positives__t1560t(double p__x, double p__y, char* __t1600t) {
  double __t1561t=0;
  char __t1562t__=0;
  double __t1563t=0;
  char __t1564t__=0;
  char __t1565t=0;
  __t1561t=0.0;
  gt__t254t(p__x,__t1561t,&__t1562t__);
  if(__t1562t__){
  __t1563t=0.0;
  gt__t254t(p__y,__t1563t,&__t1564t__);
  __t1565t=__t1564t__;
  }
  goto __t_return;
  __t_return:
  *__t1600t=__t1565t;
}

static inline __attribute__((always_inline)) void neg__t150t(double x, double* __t1601t) {
  double z=0;
  z=(0-x);
  goto __t_return;
  __t_return:
  *__t1601t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1602t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1602t=z;
}

static inline __attribute__((always_inline)) void add__t1556t(double p1__x, double p1__y, double p2__x, double p2__y, double* __t1603t, double* __t1604t) {
  double __t1557t__=0;
  double __t1558t__=0;
  double __t1559t__x=0;
  double __t1559t__y=0;
  add__t153t(p1__x,p2__x,&__t1557t__);
  add__t153t(p1__y,p2__y,&__t1558t__);
  point__t1555t(__t1557t__,__t1558t__,&__t1559t__x,&__t1559t__y);
  goto __t_return;
  __t_return:
  *__t1603t=__t1559t__x;
  *__t1604t=__t1559t__y;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1605t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1605t=z;
}

static inline __attribute__((always_inline)) void not__t1566t(double p__x, double p__y, double* __t1606t, double* __t1607t) {
  double __t1567t=0;
  double __t1568t=0;
  double __t1569t__x=0;
  double __t1569t__y=0;
  __t1567t=0.0;
  __t1568t=0.0;
  point__t1555t(__t1567t,__t1568t,&__t1569t__x,&__t1569t__y);
  goto __t_return;
  __t_return:
  *__t1606t=__t1569t__x;
  *__t1607t=__t1569t__y;
}

static inline __attribute__((always_inline)) void main__t1570t() {
  double __t1572t=0;
  double __t1573t=0;
  double __t1574t__x=0;
  double __t1574t__y=0;
  double __t1575t__x=0;
  double __t1575t__y=0;
  double p__x=0;
  double p__y=0;
  char __t1576t__=0;
  double __t1577t=0;
  double __t1578t__=0;
  double __t1579t=0;
  double __t1580t__=0;
  double __t1581t__x=0;
  double __t1581t__y=0;
  double __t1582t__x=0;
  double __t1582t__y=0;
  char __t1585t__=0;
  char __t1586t__=0;
  double __t1587t=0;
  double __t1588t=0;
  double __t1589t__t1587t=0;
  double __t1589t__t1588t=0;
  double __t1590t__x=0;
  double __t1590t__y=0;
  double __t1591t__x=0;
  double __t1591t__y=0;
  console__t366t();
  __t1572t=10.0;
  __t1573t=20.0;
  point__t1555t(__t1572t,__t1573t,&__t1574t__x,&__t1574t__y);
  __t1575t__x=__t1574t__x;
  __t1575t__y=__t1574t__y;
  p__x=__t1575t__x;
  p__y=__t1575t__y;
  all_positives__t1560t(p__x,p__y,&__t1576t__);
  if(__t1576t__){
  __t1577t=30.0;
  neg__t150t(__t1577t,&__t1578t__);
  __t1579t=30.0;
  neg__t150t(__t1579t,&__t1580t__);
  add__t1556t(p__x,p__y,__t1578t__,__t1580t__,&__t1581t__x,&__t1581t__y);
  __t1582t__x=__t1581t__x;
  __t1582t__y=__t1581t__y;
  }
  p__x=__t1582t__x;
  p__y=__t1582t__y;
  print__t385t(p__x);
  print__t385t(p__y);
  all_positives__t1560t(p__x,p__y,&__t1585t__);
  not__t28t(__t1585t__,&__t1586t__);
  if(!__t1586t__){
  __t1587t=1.0;
  __t1588t=1.0;
  __t1589t__t1587t=__t1587t;
  __t1589t__t1588t=__t1588t;
  }
  else{
  __t1589t__t1587t=0;
  not__t1566t(__t1589t__t1587t,__t1589t__t1588t,&__t1590t__x,&__t1590t__y);
  __t1589t__t1587t=__t1590t__x;
  __t1589t__t1588t=__t1590t__y;
  __t1589t__t1588t=0;
  not__t1566t(__t1589t__t1587t,__t1589t__t1588t,&__t1591t__x,&__t1591t__y);
  __t1589t__t1587t=__t1591t__x;
  __t1589t__t1588t=__t1591t__y;
  }
  p__x=__t1589t__t1587t;
  p__y=__t1589t__t1588t;
  print__t385t(p__x);
  print__t385t(p__y);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1570t();return 0;}