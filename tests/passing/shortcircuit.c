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
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
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

static inline __attribute__((always_inline)) void point__t1612t(double x, double y, double* __t1651t, double* __t1652t) {
  *__t1651t=x;
  *__t1652t=y;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1653t) {
  int value=0;
  *__t1653t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1654t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1654t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1655t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1655t=__t73t__;
}

static inline __attribute__((always_inline)) void gt__t254t(double x, double y, char* __t1656t) {
  int __t255t__=0;
  char z=0;
  is_different__t71t(x,y,&__t255t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1656t=z;
}

static inline __attribute__((always_inline)) void all_positives__t1617t(double p__x, double p__y, char* __t1657t) {
  double __t1618t=0;
  char __t1619t__=0;
  double __t1620t=0;
  char __t1621t__=0;
  char __t1622t=0;
  __t1618t=0.0;
  gt__t254t(p__x,__t1618t,&__t1619t__);
  if(__t1619t__){
  __t1620t=0.0;
  gt__t254t(p__y,__t1620t,&__t1621t__);
  __t1622t=__t1621t__;
  }
  goto __t_return;
  __t_return:
  *__t1657t=__t1622t;
}

static inline __attribute__((always_inline)) void neg__t150t(double x, double* __t1658t) {
  double z=0;
  z=(0-x);
  goto __t_return;
  __t_return:
  *__t1658t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1659t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1659t=z;
}

static inline __attribute__((always_inline)) void add__t1613t(double p1__x, double p1__y, double p2__x, double p2__y, double* __t1660t, double* __t1661t) {
  double __t1614t__=0;
  double __t1615t__=0;
  double __t1616t__x=0;
  double __t1616t__y=0;
  add__t153t(p1__x,p2__x,&__t1614t__);
  add__t153t(p1__y,p2__y,&__t1615t__);
  point__t1612t(__t1614t__,__t1615t__,&__t1616t__x,&__t1616t__y);
  goto __t_return;
  __t_return:
  *__t1660t=__t1616t__x;
  *__t1661t=__t1616t__y;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1662t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1662t=z;
}

static inline __attribute__((always_inline)) void not__t1623t(double p__x, double p__y, double* __t1663t, double* __t1664t) {
  double __t1624t=0;
  double __t1625t=0;
  double __t1626t__x=0;
  double __t1626t__y=0;
  __t1624t=0.0;
  __t1625t=0.0;
  point__t1612t(__t1624t,__t1625t,&__t1626t__x,&__t1626t__y);
  goto __t_return;
  __t_return:
  *__t1663t=__t1626t__x;
  *__t1664t=__t1626t__y;
}

static inline __attribute__((always_inline)) void main__t1627t() {
  double __t1629t=0;
  double __t1630t=0;
  double __t1631t__x=0;
  double __t1631t__y=0;
  double __t1632t__x=0;
  double __t1632t__y=0;
  double p__x=0;
  double p__y=0;
  char __t1633t__=0;
  double __t1634t=0;
  double __t1635t__=0;
  double __t1636t=0;
  double __t1637t__=0;
  double __t1638t__x=0;
  double __t1638t__y=0;
  double __t1639t__x=0;
  double __t1639t__y=0;
  char __t1642t__=0;
  char __t1643t__=0;
  double __t1644t=0;
  double __t1645t=0;
  double __t1646t__t1644t=0;
  double __t1646t__t1645t=0;
  double __t1647t__x=0;
  double __t1647t__y=0;
  double __t1648t__x=0;
  double __t1648t__y=0;
  console__t366t();
  __t1629t=10.0;
  __t1630t=20.0;
  point__t1612t(__t1629t,__t1630t,&__t1631t__x,&__t1631t__y);
  __t1632t__x=__t1631t__x;
  __t1632t__y=__t1631t__y;
  p__x=__t1632t__x;
  p__y=__t1632t__y;
  all_positives__t1617t(p__x,p__y,&__t1633t__);
  if(__t1633t__){
  __t1634t=30.0;
  neg__t150t(__t1634t,&__t1635t__);
  __t1636t=30.0;
  neg__t150t(__t1636t,&__t1637t__);
  add__t1613t(p__x,p__y,__t1635t__,__t1637t__,&__t1638t__x,&__t1638t__y);
  __t1639t__x=__t1638t__x;
  __t1639t__y=__t1638t__y;
  }
  p__x=__t1639t__x;
  p__y=__t1639t__y;
  print__t385t(p__x);
  print__t385t(p__y);
  all_positives__t1617t(p__x,p__y,&__t1642t__);
  not__t28t(__t1642t__,&__t1643t__);
  if(!__t1643t__){
  __t1644t=1.0;
  __t1645t=1.0;
  __t1646t__t1644t=__t1644t;
  __t1646t__t1645t=__t1645t;
  }
  else{
  __t1646t__t1644t=0;
  not__t1623t(__t1646t__t1644t,__t1646t__t1645t,&__t1647t__x,&__t1647t__y);
  __t1646t__t1644t=__t1647t__x;
  __t1646t__t1645t=__t1647t__y;
  __t1646t__t1645t=0;
  not__t1623t(__t1646t__t1644t,__t1646t__t1645t,&__t1648t__x,&__t1648t__y);
  __t1646t__t1644t=__t1648t__x;
  __t1646t__t1645t=__t1648t__y;
  }
  p__x=__t1646t__t1644t;
  p__y=__t1646t__t1645t;
  print__t385t(p__x);
  print__t385t(p__y);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1627t();return 0;}