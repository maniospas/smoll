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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1534t(char** __t1565t, uint64_t* __t1566t, uint16_t* __t1567t, uint16_t* __t1568t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1565t=unsafe_ptr;
  *__t1566t=unsafe_size;
  *__t1567t=unsafe_offset;
  *__t1568t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t1569t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1569t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t1570t) {
  char* allocated=*__t1570t;
  if(allocated){
  free(allocated);
  }
  *__t1570t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1571t) {
  int value=0;
  *__t1571t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1572t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1572t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1573t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1573t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1574t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1574t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1575t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1575t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t1576t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1576t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1577t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1577t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1578t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1578t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t1579t) {
  char* allocated=0;
  char __t503t__=0;
  char __t504t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t443t(allocated,&__t503t__);
  not__t28t(__t503t__,&__t504t__);
  if(__t504t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1579t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t1580t, uint64_t* __t1581t, uint16_t* __t1582t, uint16_t* __t1583t, uint64_t size, char** __t1584t, uint64_t* __t1585t, uint16_t* __t1586t, uint16_t* __t1587t) {
  char* buffer__unsafe_ptr=*__t1580t;
  uint64_t buffer__unsafe_size=*__t1581t;
  uint16_t buffer__unsafe_offset=*__t1582t;
  uint16_t buffer__unsafe_align=*__t1583t;
  int __t517t=0;
  char __t518t__=0;
  char __t520t__=0;
  uint64_t __t521t=0;
  char __t522t__=0;
  uint64_t __t523t=0;
  uint64_t __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t __t527t=0;
  char __t528t__=0;
  uint64_t __t529t__=0;
  uint64_t __t530t__=0;
  uint64_t bytes=0;
  uint64_t __t531t=0;
  char __t532t__=0;
  char* __t533t__=0;
  uint64_t __t534t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t520t__);
  if(__t520t__){
  __t521t=0;
  neq__t144t(size,__t521t,&__t522t__);
  if(__t522t__){
  __t523t=0;
  nat__t513t(buffer__unsafe_align,&__t524t__);
  mul__t199t(__t524t__,size,&__t525t__);
  zero__t510t(buffer__unsafe_ptr,__t523t,__t525t__);
  }
  goto __t_return;
  }
  __t527t=0;
  neq__t144t(buffer__unsafe_size,__t527t,&__t528t__);
  if(__t528t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t529t__);
  mul__t199t(__t529t__,size,&__t530t__);
  bytes=__t530t__;
  __t531t=0;
  eq__t120t(bytes,__t531t,&__t532t__);
  if(__t532t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t502t(bytes,&__t533t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t533t__;
  __t534t=0;
  zero__t510t(buffer__unsafe_ptr,__t534t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t443t(buffer__unsafe_ptr,&__t518t__);
  if(__t518t__){
  free__t509t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1580t=buffer__unsafe_ptr;
  *__t1581t=buffer__unsafe_size;
  *__t1582t=buffer__unsafe_offset;
  *__t1583t=buffer__unsafe_align;
  *__t1584t=buffer__unsafe_ptr;
  *__t1585t=buffer__unsafe_size;
  *__t1586t=buffer__unsafe_offset;
  *__t1587t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1588t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1588t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1589t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1589t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1590t) {
  *__t1590t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t1591t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t1591t=__t512t__;
}

static inline __attribute__((always_inline)) int mutget__t591t(char** __t1592t, uint64_t* __t1593t, uint16_t* __t1594t, uint16_t* __t1595t, uint64_t i, char** __t1596t) {
  char* buffer__unsafe_ptr=*__t1592t;
  uint64_t buffer__unsafe_size=*__t1593t;
  uint16_t buffer__unsafe_offset=*__t1594t;
  uint16_t buffer__unsafe_align=*__t1595t;
  char __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  uint64_t __t596t__=0;
  char* __t597t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t592t__);
  if(__t592t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t593t__);
  mul__t199t(i,__t593t__,&__t594t__);
  nat__t513t(buffer__unsafe_offset,&__t595t__);
  add__t175t(__t594t__,__t595t__,&__t596t__);
  add__t511t(buffer__unsafe_ptr,__t596t__,&__t597t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1592t=buffer__unsafe_ptr;
  *__t1593t=buffer__unsafe_size;
  *__t1594t=buffer__unsafe_offset;
  *__t1595t=buffer__unsafe_align;
  *__t1596t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1509t(double x, double y, double* __t1597t, double* __t1598t) {
  goto __t_return;
  __t_return:
  *__t1597t=x;
  *__t1598t=y;
}

static inline __attribute__((always_inline)) void Point3D__t1529t(double x, double y, double z, double* __t1599t, double* __t1600t, double* __t1601t) {
  double __t1530t__x=0;
  double __t1530t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1509t(x,y,&__t1530t__x,&__t1530t__y);
  plane__x=__t1530t__x;
  plane__y=__t1530t__y;
  goto __t_return;
  __t_return:
  *__t1599t=plane__x;
  *__t1600t=plane__y;
  *__t1601t=z;
}

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1602t) {
  goto __t_return;
  __t_return:
  *__t1602t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1603t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1603t=z;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1604t) {
  char __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  uint64_t __t603t__=0;
  char* __t604t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t599t__);
  if(__t599t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t600t__);
  mul__t199t(i,__t600t__,&__t601t__);
  nat__t513t(buffer__unsafe_offset,&__t602t__);
  add__t175t(__t601t__,__t602t__,&__t603t__);
  add__t511t(buffer__unsafe_ptr,__t603t__,&__t604t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1604t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1605t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1605t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1606t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1606t=z;
}

static inline __attribute__((always_inline)) int sum__t1512t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1607t, double* __t1608t) {
  double __t1513t=0;
  double __t1514t=0;
  double x=0;
  double __t1515t=0;
  double __t1516t=0;
  double y=0;
  uint64_t __t1517t=0;
  uint64_t __t1518t=0;
  uint64_t i=0;
  uint64_t __t1519t__=0;
  char __t1520t__=0;
  char* __t1521t__=0;
  double __t1522t__x=0;
  double __t1522t__y=0;
  double __t1523t__=0;
  char* __t1524t__=0;
  double __t1525t__x=0;
  double __t1525t__y=0;
  double __t1526t__=0;
  uint64_t __t1527t=0;
  uint64_t __t1528t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1513t=0.0;
  __t1514t=__t1513t;
  x=__t1514t;
  __t1515t=0.0;
  __t1516t=__t1515t;
  y=__t1516t;
  __t1517t=0;
  __t1518t=__t1517t;
  i=__t1518t;
  while(1){
  len__t605t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1519t__);
  lt__t252t(i,__t1519t__,&__t1520t__);
  if(!__t1520t__){
  break;
  }
  __t_errcode=get__t598t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1521t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1521t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1522t__x,__t1521t__,8);
  memcpy(&__t1522t__y,__t1521t__+8,8);
  add__t153t(x,__t1522t__x,&__t1523t__);
  x=__t1523t__;
  __t_errcode=get__t598t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1524t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1524t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1525t__x,__t1524t__,8);
  memcpy(&__t1525t__y,__t1524t__+8,8);
  add__t153t(y,__t1525t__y,&__t1526t__);
  y=__t1526t__;
  __t1527t=1;
  add__t175t(i,__t1527t,&__t1528t__);
  i=__t1528t__;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1607t=x;
  *__t1608t=y;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t381t(double value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1532t() {
  char* __t1536t__unsafe_ptr=0;
  uint64_t __t1536t__unsafe_size=0;
  uint16_t __t1536t__unsafe_offset=0;
  uint16_t __t1536t__unsafe_align=0;
  uint64_t __t1537t=0;
  char* __t1538t__unsafe_ptr=0;
  uint64_t __t1538t__unsafe_size=0;
  uint16_t __t1538t__unsafe_offset=0;
  uint16_t __t1538t__unsafe_align=0;
  char __t1539t____t518t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1540t=0;
  char* __t1541t__=0;
  double __t1542t=0;
  double __t1543t=0;
  double __t1544t=0;
  double __t1545t=0;
  double __t1546t=0;
  double __t1547t=0;
  double __t1548t__plane__x=0;
  double __t1548t__plane__y=0;
  double __t1548t__z=0;
  uint64_t __t1549t=0;
  char* __t1550t__=0;
  double __t1551t=0;
  double __t1552t=0;
  double __t1553t=0;
  double __t1554t=0;
  double __t1555t=0;
  double __t1556t=0;
  double __t1557t__plane__x=0;
  double __t1557t__plane__y=0;
  double __t1557t__z=0;
  char* __t1558t__unsafe_ptr=0;
  uint64_t __t1558t__unsafe_size=0;
  uint16_t __t1558t__unsafe_offset=0;
  uint16_t __t1558t__unsafe_align=0;
  double __t1562t__x=0;
  double __t1562t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  Point3D____t_buffer____buffer__t1534t(&__t1536t__unsafe_ptr,&__t1536t__unsafe_size,&__t1536t__unsafe_offset,&__t1536t__unsafe_align);
  __t1537t=10;
  __t_errcode=alloc__t516t(&__t1536t__unsafe_ptr,&__t1536t__unsafe_size,&__t1536t__unsafe_offset,&__t1536t__unsafe_align,__t1537t,&__t1538t__unsafe_ptr,&__t1538t__unsafe_size,&__t1538t__unsafe_offset,&__t1538t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1538t__unsafe_ptr;
  points__unsafe_size=__t1538t__unsafe_size;
  points__unsafe_offset=__t1538t__unsafe_offset;
  points__unsafe_align=__t1538t__unsafe_align;
  __t1540t=0;
  __t_errcode=mutget__t591t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1540t,&__t1541t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1542t=1.0;
  __t1543t=__t1542t;
  __t1544t=2.0;
  __t1545t=__t1544t;
  __t1546t=3.0;
  __t1547t=__t1546t;
  Point3D__t1529t(__t1543t,__t1545t,__t1547t,&__t1548t__plane__x,&__t1548t__plane__y,&__t1548t__z);
  if(!__t1541t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1541t__,&__t1548t__plane__x,8);
  memcpy(__t1541t__+8,&__t1548t__plane__y,8);
  memcpy(__t1541t__+16,&__t1548t__z,8);
  __t1549t=1;
  __t_errcode=mutget__t591t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1549t,&__t1550t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1551t=1.0;
  __t1552t=__t1551t;
  __t1553t=2.0;
  __t1554t=__t1553t;
  __t1555t=3.0;
  __t1556t=__t1555t;
  Point3D__t1529t(__t1552t,__t1554t,__t1556t,&__t1557t__plane__x,&__t1557t__plane__y,&__t1557t__z);
  if(!__t1550t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1550t__,&__t1557t__plane__x,8);
  memcpy(__t1550t__+8,&__t1557t__plane__y,8);
  memcpy(__t1550t__+16,&__t1557t__z,8);
  __t1558t__unsafe_ptr=points__unsafe_ptr;
  __t1558t__unsafe_size=points__unsafe_size;
  __t1558t__unsafe_offset=points__unsafe_offset+0;
  __t1558t__unsafe_align=points__unsafe_align;
  __t_errcode=sum__t1512t(__t1558t__unsafe_ptr,__t1558t__unsafe_size,__t1558t__unsafe_offset,__t1558t__unsafe_align,&__t1562t__x,&__t1562t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1562t__x;
  sums__y=__t1562t__y;
  print__t381t(sums__x);
  print__t381t(sums__y);
  
  __t_failure:exists__t443t(__t1538t__unsafe_ptr,&__t1539t____t518t__);
  if(__t1539t____t518t__){
  free__t509t(&__t1538t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1532t();return 0;}