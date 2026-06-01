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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1491t(char** __t1522t, uint64_t* __t1523t, uint16_t* __t1524t, uint16_t* __t1525t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1522t=unsafe_ptr;
  *__t1523t=unsafe_size;
  *__t1524t=unsafe_offset;
  *__t1525t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t1526t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1526t=z;
}

static inline __attribute__((always_inline)) void free__t505t(char** __t1527t) {
  char* allocated=*__t1527t;
  if(allocated){
  free(allocated);
  }
  *__t1527t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1528t) {
  int value=0;
  *__t1528t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1529t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1529t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1530t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1530t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1531t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1531t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1532t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1532t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t1533t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1533t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1534t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1534t=z;
}

static inline __attribute__((always_inline)) void zero__t506t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1535t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1535t=z;
}

static inline __attribute__((always_inline)) int alloc__t498t(uint64_t bytes, char** __t1536t) {
  char* allocated=0;
  char __t499t__=0;
  char __t500t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t439t(allocated,&__t499t__);
  not__t27t(__t499t__,&__t500t__);
  if(__t500t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1536t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t512t(char** __t1537t, uint64_t* __t1538t, uint16_t* __t1539t, uint16_t* __t1540t, uint64_t size, char** __t1541t, uint64_t* __t1542t, uint16_t* __t1543t, uint16_t* __t1544t) {
  char* buffer__unsafe_ptr=*__t1537t;
  uint64_t buffer__unsafe_size=*__t1538t;
  uint16_t buffer__unsafe_offset=*__t1539t;
  uint16_t buffer__unsafe_align=*__t1540t;
  int __t513t=0;
  char __t514t__=0;
  char __t516t__=0;
  uint64_t __t517t=0;
  char __t518t__=0;
  uint64_t __t519t=0;
  uint64_t __t520t__=0;
  uint64_t __t521t__=0;
  uint64_t __t523t=0;
  char __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t __t526t__=0;
  uint64_t bytes=0;
  uint64_t __t527t=0;
  char __t528t__=0;
  char* __t529t__=0;
  uint64_t __t530t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t516t__);
  if(__t516t__){
  __t517t=0;
  neq__t143t(size,__t517t,&__t518t__);
  if(__t518t__){
  __t519t=0;
  nat__t509t(buffer__unsafe_align,&__t520t__);
  mul__t198t(__t520t__,size,&__t521t__);
  zero__t506t(buffer__unsafe_ptr,__t519t,__t521t__);
  }
  goto __t_return;
  }
  __t523t=0;
  neq__t143t(buffer__unsafe_size,__t523t,&__t524t__);
  if(__t524t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t525t__);
  mul__t198t(__t525t__,size,&__t526t__);
  bytes=__t526t__;
  __t527t=0;
  eq__t119t(bytes,__t527t,&__t528t__);
  if(__t528t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t498t(bytes,&__t529t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t529t__;
  __t530t=0;
  zero__t506t(buffer__unsafe_ptr,__t530t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t439t(buffer__unsafe_ptr,&__t514t__);
  if(__t514t__){
  free__t505t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1537t=buffer__unsafe_ptr;
  *__t1538t=buffer__unsafe_size;
  *__t1539t=buffer__unsafe_offset;
  *__t1540t=buffer__unsafe_align;
  *__t1541t=buffer__unsafe_ptr;
  *__t1542t=buffer__unsafe_size;
  *__t1543t=buffer__unsafe_offset;
  *__t1544t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1545t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1545t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1546t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1546t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1547t) {
  *__t1547t=to;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t1548t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t1548t=__t508t__;
}

static inline __attribute__((always_inline)) int mutget__t587t(char** __t1549t, uint64_t* __t1550t, uint16_t* __t1551t, uint16_t* __t1552t, uint64_t i, char** __t1553t) {
  char* buffer__unsafe_ptr=*__t1549t;
  uint64_t buffer__unsafe_size=*__t1550t;
  uint16_t buffer__unsafe_offset=*__t1551t;
  uint16_t buffer__unsafe_align=*__t1552t;
  char __t588t__=0;
  uint64_t __t589t__=0;
  uint64_t __t590t__=0;
  uint64_t __t591t__=0;
  uint64_t __t592t__=0;
  char* __t593t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t588t__);
  if(__t588t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t589t__);
  mul__t198t(i,__t589t__,&__t590t__);
  nat__t509t(buffer__unsafe_offset,&__t591t__);
  add__t174t(__t590t__,__t591t__,&__t592t__);
  add__t507t(buffer__unsafe_ptr,__t592t__,&__t593t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1549t=buffer__unsafe_ptr;
  *__t1550t=buffer__unsafe_size;
  *__t1551t=buffer__unsafe_offset;
  *__t1552t=buffer__unsafe_align;
  *__t1553t=__t593t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1467t(double x, double y, double* __t1554t, double* __t1555t) {
  goto __t_return;
  __t_return:
  *__t1554t=x;
  *__t1555t=y;
}

static inline __attribute__((always_inline)) void Point3D__t1487t(double x, double y, double z, double* __t1556t, double* __t1557t, double* __t1558t) {
  double __t1488t__x=0;
  double __t1488t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1467t(x,y,&__t1488t__x,&__t1488t__y);
  plane__x=__t1488t__x;
  plane__y=__t1488t__y;
  goto __t_return;
  __t_return:
  *__t1556t=plane__x;
  *__t1557t=plane__y;
  *__t1558t=z;
}

static inline __attribute__((always_inline)) void len__t601t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1559t) {
  goto __t_return;
  __t_return:
  *__t1559t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1560t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1560t=z;
}

static inline __attribute__((always_inline)) int get__t594t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1561t) {
  char __t595t__=0;
  uint64_t __t596t__=0;
  uint64_t __t597t__=0;
  uint64_t __t598t__=0;
  uint64_t __t599t__=0;
  char* __t600t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t595t__);
  if(__t595t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t596t__);
  mul__t198t(i,__t596t__,&__t597t__);
  nat__t509t(buffer__unsafe_offset,&__t598t__);
  add__t174t(__t597t__,__t598t__,&__t599t__);
  add__t507t(buffer__unsafe_ptr,__t599t__,&__t600t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1561t=__t600t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1562t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1562t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t1563t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1563t=z;
}

static inline __attribute__((always_inline)) int sum__t1470t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1564t, double* __t1565t) {
  double __t1471t=0;
  double __t1472t=0;
  double x=0;
  double __t1473t=0;
  double __t1474t=0;
  double y=0;
  uint64_t __t1475t=0;
  uint64_t __t1476t=0;
  uint64_t i=0;
  uint64_t __t1477t__=0;
  char __t1478t__=0;
  char* __t1479t__=0;
  double __t1480t__x=0;
  double __t1480t__y=0;
  double __t1481t__=0;
  char* __t1482t__=0;
  double __t1483t__x=0;
  double __t1483t__y=0;
  double __t1484t__=0;
  uint64_t __t1485t=0;
  uint64_t __t1486t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1471t=0.0;
  __t1472t=__t1471t;
  x=__t1472t;
  __t1473t=0.0;
  __t1474t=__t1473t;
  y=__t1474t;
  __t1475t=0;
  __t1476t=__t1475t;
  i=__t1476t;
  while(1){
  len__t601t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1477t__);
  lt__t251t(i,__t1477t__,&__t1478t__);
  if(!__t1478t__){
  break;
  }
  __t_errcode=get__t594t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1479t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1479t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1480t__x,__t1479t__,8);
  memcpy(&__t1480t__y,__t1479t__+8,8);
  add__t152t(x,__t1480t__x,&__t1481t__);
  x=__t1481t__;
  __t_errcode=get__t594t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1482t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1482t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1483t__x,__t1482t__,8);
  memcpy(&__t1483t__y,__t1482t__+8,8);
  add__t152t(y,__t1483t__y,&__t1484t__);
  y=__t1484t__;
  __t1485t=1;
  add__t174t(i,__t1485t,&__t1486t__);
  i=__t1486t__;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1564t=x;
  *__t1565t=y;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t377t(double value) {
  int __t378t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1490t() {
  char* __t1493t__unsafe_ptr=0;
  uint64_t __t1493t__unsafe_size=0;
  uint16_t __t1493t__unsafe_offset=0;
  uint16_t __t1493t__unsafe_align=0;
  uint64_t __t1494t=0;
  char* __t1495t__unsafe_ptr=0;
  uint64_t __t1495t__unsafe_size=0;
  uint16_t __t1495t__unsafe_offset=0;
  uint16_t __t1495t__unsafe_align=0;
  char __t1496t____t514t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1497t=0;
  char* __t1498t__=0;
  double __t1499t=0;
  double __t1500t=0;
  double __t1501t=0;
  double __t1502t=0;
  double __t1503t=0;
  double __t1504t=0;
  double __t1505t__plane__x=0;
  double __t1505t__plane__y=0;
  double __t1505t__z=0;
  uint64_t __t1506t=0;
  char* __t1507t__=0;
  double __t1508t=0;
  double __t1509t=0;
  double __t1510t=0;
  double __t1511t=0;
  double __t1512t=0;
  double __t1513t=0;
  double __t1514t__plane__x=0;
  double __t1514t__plane__y=0;
  double __t1514t__z=0;
  char* __t1515t__unsafe_ptr=0;
  uint64_t __t1515t__unsafe_size=0;
  uint16_t __t1515t__unsafe_offset=0;
  uint16_t __t1515t__unsafe_align=0;
  double __t1519t__x=0;
  double __t1519t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  Point3D____t_buffer____buffer__t1491t(&__t1493t__unsafe_ptr,&__t1493t__unsafe_size,&__t1493t__unsafe_offset,&__t1493t__unsafe_align);
  __t1494t=10;
  __t_errcode=alloc__t512t(&__t1493t__unsafe_ptr,&__t1493t__unsafe_size,&__t1493t__unsafe_offset,&__t1493t__unsafe_align,__t1494t,&__t1495t__unsafe_ptr,&__t1495t__unsafe_size,&__t1495t__unsafe_offset,&__t1495t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1495t__unsafe_ptr;
  points__unsafe_size=__t1495t__unsafe_size;
  points__unsafe_offset=__t1495t__unsafe_offset;
  points__unsafe_align=__t1495t__unsafe_align;
  __t1497t=0;
  __t_errcode=mutget__t587t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1497t,&__t1498t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1499t=1.0;
  __t1500t=__t1499t;
  __t1501t=2.0;
  __t1502t=__t1501t;
  __t1503t=3.0;
  __t1504t=__t1503t;
  Point3D__t1487t(__t1500t,__t1502t,__t1504t,&__t1505t__plane__x,&__t1505t__plane__y,&__t1505t__z);
  if(!__t1498t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1498t__,&__t1505t__plane__x,8);
  memcpy(__t1498t__+8,&__t1505t__plane__y,8);
  memcpy(__t1498t__+16,&__t1505t__z,8);
  __t1506t=1;
  __t_errcode=mutget__t587t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1506t,&__t1507t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1508t=1.0;
  __t1509t=__t1508t;
  __t1510t=2.0;
  __t1511t=__t1510t;
  __t1512t=3.0;
  __t1513t=__t1512t;
  Point3D__t1487t(__t1509t,__t1511t,__t1513t,&__t1514t__plane__x,&__t1514t__plane__y,&__t1514t__z);
  if(!__t1507t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1507t__,&__t1514t__plane__x,8);
  memcpy(__t1507t__+8,&__t1514t__plane__y,8);
  memcpy(__t1507t__+16,&__t1514t__z,8);
  __t1515t__unsafe_ptr=points__unsafe_ptr;
  __t1515t__unsafe_size=points__unsafe_size;
  __t1515t__unsafe_offset=points__unsafe_offset+0;
  __t1515t__unsafe_align=points__unsafe_align;
  __t_errcode=sum__t1470t(__t1515t__unsafe_ptr,__t1515t__unsafe_size,__t1515t__unsafe_offset,__t1515t__unsafe_align,&__t1519t__x,&__t1519t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1519t__x;
  sums__y=__t1519t__y;
  print__t377t(sums__x);
  print__t377t(sums__y);
  
  __t_failure:exists__t439t(__t1495t__unsafe_ptr,&__t1496t____t514t__);
  if(__t1496t____t514t__){
  free__t505t(&__t1495t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1490t();return 0;}