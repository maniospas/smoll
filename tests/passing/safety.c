#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1527t="going to deallocate of size: ";
const char* const __t370t="";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1510t(char** __t1547t, uint64_t* __t1548t, uint16_t* __t1549t, uint16_t* __t1550t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1547t=unsafe_ptr;
  *__t1548t=unsafe_size;
  *__t1549t=unsafe_offset;
  *__t1550t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t1551t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1551t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t1552t) {
  char* allocated=*__t1552t;
  if(allocated){
  free(allocated);
  }
  *__t1552t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1553t) {
  int value=0;
  *__t1553t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1554t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1554t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1555t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1555t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1556t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1556t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1557t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1557t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t1558t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1558t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1559t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1559t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1560t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1560t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t1561t) {
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
  *__t1561t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t1562t, uint64_t* __t1563t, uint16_t* __t1564t, uint16_t* __t1565t, uint64_t size, char** __t1566t, uint64_t* __t1567t, uint16_t* __t1568t, uint16_t* __t1569t) {
  char* buffer__unsafe_ptr=*__t1562t;
  uint64_t buffer__unsafe_size=*__t1563t;
  uint16_t buffer__unsafe_offset=*__t1564t;
  uint16_t buffer__unsafe_align=*__t1565t;
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
  *__t1562t=buffer__unsafe_ptr;
  *__t1563t=buffer__unsafe_size;
  *__t1564t=buffer__unsafe_offset;
  *__t1565t=buffer__unsafe_align;
  *__t1566t=buffer__unsafe_ptr;
  *__t1567t=buffer__unsafe_size;
  *__t1568t=buffer__unsafe_offset;
  *__t1569t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1570t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1570t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1571t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1571t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1572t) {
  *__t1572t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t1573t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t1573t=__t512t__;
}

static inline __attribute__((always_inline)) int mutget__t591t(char** __t1574t, uint64_t* __t1575t, uint16_t* __t1576t, uint16_t* __t1577t, uint64_t i, char** __t1578t) {
  char* buffer__unsafe_ptr=*__t1574t;
  uint64_t buffer__unsafe_size=*__t1575t;
  uint16_t buffer__unsafe_offset=*__t1576t;
  uint16_t buffer__unsafe_align=*__t1577t;
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
  *__t1574t=buffer__unsafe_ptr;
  *__t1575t=buffer__unsafe_size;
  *__t1576t=buffer__unsafe_offset;
  *__t1577t=buffer__unsafe_align;
  *__t1578t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1579t) {
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
  *__t1579t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t381t(double value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t374t(const char* value, const char* endl) {
  int __t375t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1580t) {
  goto __t_return;
  __t_return:
  *__t1580t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t389t(uint64_t value) {
  int __t390t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__t1509t(char** __t1581t, uint64_t* __t1582t, uint16_t* __t1583t, uint16_t* __t1584t) {
  char* __t1512t__unsafe_ptr=0;
  uint64_t __t1512t__unsafe_size=0;
  uint16_t __t1512t__unsafe_offset=0;
  uint16_t __t1512t__unsafe_align=0;
  char* __t1513t__unsafe_ptr=0;
  uint64_t __t1513t__unsafe_size=0;
  uint16_t __t1513t__unsafe_offset=0;
  uint16_t __t1513t__unsafe_align=0;
  uint64_t __t1514t=0;
  char* __t1515t__unsafe_ptr=0;
  uint64_t __t1515t__unsafe_size=0;
  uint16_t __t1515t__unsafe_offset=0;
  uint16_t __t1515t__unsafe_align=0;
  char __t1516t____t518t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1517t=0;
  char* __t1518t__=0;
  double __t1519t=0;
  uint64_t __t1520t=0;
  char* __t1521t__=0;
  double __t1522t=0;
  uint64_t __t1523t=0;
  char* __t1524t__=0;
  double __t1525t__number=0;
  uint64_t __t1529t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1510t(&__t1512t__unsafe_ptr,&__t1512t__unsafe_size,&__t1512t__unsafe_offset,&__t1512t__unsafe_align);
  __t1513t__unsafe_ptr=__t1512t__unsafe_ptr;
  __t1513t__unsafe_size=__t1512t__unsafe_size;
  __t1513t__unsafe_offset=__t1512t__unsafe_offset;
  __t1513t__unsafe_align=__t1512t__unsafe_align;
  __t1514t=2;
  __t_errcode=alloc__t516t(&__t1513t__unsafe_ptr,&__t1513t__unsafe_size,&__t1513t__unsafe_offset,&__t1513t__unsafe_align,__t1514t,&__t1515t__unsafe_ptr,&__t1515t__unsafe_size,&__t1515t__unsafe_offset,&__t1515t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t1515t__unsafe_ptr;
  x__unsafe_size=__t1515t__unsafe_size;
  x__unsafe_offset=__t1515t__unsafe_offset;
  x__unsafe_align=__t1515t__unsafe_align;
  __t1517t=0;
  __t_errcode=mutget__t591t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1517t,&__t1518t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1519t=1.0;
  if(!__t1518t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1518t__,&__t1519t,8);
  __t1520t=1;
  __t_errcode=mutget__t591t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1520t,&__t1521t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1522t=2.0;
  if(!__t1521t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1521t__,&__t1522t,8);
  __t1523t=1;
  __t_errcode=get__t598t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__t1523t,&__t1524t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1524t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1525t__number,__t1524t__,8);
  print__t381t(__t1525t__number);
  goto __t_return;
  
  __t_failure:print__t374t(__t1527t,__t370t);
  len__t605t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,&x__unsafe_size);
  print__t389t(x__unsafe_size);
  exists__t443t(x__unsafe_ptr,&__t1516t____t518t__);
  if(__t1516t____t518t__){
  free__t509t(&x__unsafe_ptr);
  }
  __t_return:
  *__t1581t=x__unsafe_ptr;
  *__t1582t=x__unsafe_size;
  *__t1583t=x__unsafe_offset;
  *__t1584t=x__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1531t(char** __t1585t, uint64_t* __t1586t, uint16_t* __t1587t, uint16_t* __t1588t, char** __t1589t, uint64_t* __t1590t, uint16_t* __t1591t, uint16_t* __t1592t, char** __t1593t, uint64_t* __t1594t, uint16_t* __t1595t, uint16_t* __t1596t) {
  char* __t1532t__unsafe_ptr=0;
  uint64_t __t1532t__unsafe_size=0;
  uint16_t __t1532t__unsafe_offset=0;
  uint16_t __t1532t__unsafe_align=0;
  char __t1533t____t1516t____t518t__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint16_t t__unsafe_offset=0;
  uint16_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint16_t j__unsafe_offset=0;
  uint16_t j__unsafe_align=0;
  char* __t1534t__unsafe_ptr=0;
  uint64_t __t1534t__unsafe_size=0;
  uint16_t __t1534t__unsafe_offset=0;
  uint16_t __t1534t__unsafe_align=0;
  char* __t1535t__unsafe_ptr=0;
  uint64_t __t1535t__unsafe_size=0;
  uint16_t __t1535t__unsafe_offset=0;
  uint16_t __t1535t__unsafe_align=0;
  uint64_t __t1536t=0;
  char* __t1537t__unsafe_ptr=0;
  uint64_t __t1537t__unsafe_size=0;
  uint16_t __t1537t__unsafe_offset=0;
  uint16_t __t1537t__unsafe_align=0;
  char __t1538t____t518t__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint16_t k__unsafe_offset=0;
  uint16_t k__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test1__t1509t(&__t1532t__unsafe_ptr,&__t1532t__unsafe_size,&__t1532t__unsafe_offset,&__t1532t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__unsafe_ptr=__t1532t__unsafe_ptr;
  t__unsafe_size=__t1532t__unsafe_size;
  t__unsafe_offset=__t1532t__unsafe_offset;
  t__unsafe_align=__t1532t__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_offset=t__unsafe_offset;
  j__unsafe_align=t__unsafe_align;
  float____t_buffer____buffer__t1510t(&__t1534t__unsafe_ptr,&__t1534t__unsafe_size,&__t1534t__unsafe_offset,&__t1534t__unsafe_align);
  __t1535t__unsafe_ptr=__t1534t__unsafe_ptr;
  __t1535t__unsafe_size=__t1534t__unsafe_size;
  __t1535t__unsafe_offset=__t1534t__unsafe_offset;
  __t1535t__unsafe_align=__t1534t__unsafe_align;
  __t1536t=3;
  __t_errcode=alloc__t516t(&__t1535t__unsafe_ptr,&__t1535t__unsafe_size,&__t1535t__unsafe_offset,&__t1535t__unsafe_align,__t1536t,&__t1537t__unsafe_ptr,&__t1537t__unsafe_size,&__t1537t__unsafe_offset,&__t1537t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  k__unsafe_ptr=__t1537t__unsafe_ptr;
  k__unsafe_size=__t1537t__unsafe_size;
  k__unsafe_offset=__t1537t__unsafe_offset;
  k__unsafe_align=__t1537t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t443t(k__unsafe_ptr,&__t1538t____t518t__);
  if(__t1538t____t518t__){
  free__t509t(&k__unsafe_ptr);
  }
  print__t374t(__t1527t,__t370t);
  len__t605t(t__unsafe_ptr,t__unsafe_size,t__unsafe_offset,t__unsafe_align,&t__unsafe_size);
  print__t389t(t__unsafe_size);
  exists__t443t(t__unsafe_ptr,&__t1533t____t1516t____t518t__);
  if(__t1533t____t1516t____t518t__){
  free__t509t(&t__unsafe_ptr);
  }
  __t_return:
  *__t1585t=t__unsafe_ptr;
  *__t1586t=t__unsafe_size;
  *__t1587t=t__unsafe_offset;
  *__t1588t=t__unsafe_align;
  *__t1589t=j__unsafe_ptr;
  *__t1590t=j__unsafe_size;
  *__t1591t=j__unsafe_offset;
  *__t1592t=j__unsafe_align;
  *__t1593t=k__unsafe_ptr;
  *__t1594t=k__unsafe_size;
  *__t1595t=k__unsafe_offset;
  *__t1596t=k__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1539t() {
  char* __t1541t__t__unsafe_ptr=0;
  uint64_t __t1541t__t__unsafe_size=0;
  uint16_t __t1541t__t__unsafe_offset=0;
  uint16_t __t1541t__t__unsafe_align=0;
  char* __t1541t__j__unsafe_ptr=0;
  uint64_t __t1541t__j__unsafe_size=0;
  uint16_t __t1541t__j__unsafe_offset=0;
  uint16_t __t1541t__j__unsafe_align=0;
  char* __t1541t__k__unsafe_ptr=0;
  uint64_t __t1541t__k__unsafe_size=0;
  uint16_t __t1541t__k__unsafe_offset=0;
  uint16_t __t1541t__k__unsafe_align=0;
  char __t1542t____t1533t____t1516t____t518t__=0;
  char __t1542t____t1538t____t518t__=0;
  char* t__t__unsafe_ptr=0;
  uint64_t t__t__unsafe_size=0;
  uint16_t t__t__unsafe_offset=0;
  uint16_t t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  uint64_t t__j__unsafe_size=0;
  uint16_t t__j__unsafe_offset=0;
  uint16_t t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  uint64_t t__k__unsafe_size=0;
  uint16_t t__k__unsafe_offset=0;
  uint16_t t__k__unsafe_align=0;
  uint64_t __t1543t=0;
  char* __t1544t__=0;
  double __t1545t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test2__t1531t(&__t1541t__t__unsafe_ptr,&__t1541t__t__unsafe_size,&__t1541t__t__unsafe_offset,&__t1541t__t__unsafe_align,&__t1541t__j__unsafe_ptr,&__t1541t__j__unsafe_size,&__t1541t__j__unsafe_offset,&__t1541t__j__unsafe_align,&__t1541t__k__unsafe_ptr,&__t1541t__k__unsafe_size,&__t1541t__k__unsafe_offset,&__t1541t__k__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__t__unsafe_ptr=__t1541t__t__unsafe_ptr;
  t__t__unsafe_size=__t1541t__t__unsafe_size;
  t__t__unsafe_offset=__t1541t__t__unsafe_offset;
  t__t__unsafe_align=__t1541t__t__unsafe_align;
  t__j__unsafe_ptr=__t1541t__j__unsafe_ptr;
  t__j__unsafe_size=__t1541t__j__unsafe_size;
  t__j__unsafe_offset=__t1541t__j__unsafe_offset;
  t__j__unsafe_align=__t1541t__j__unsafe_align;
  t__k__unsafe_ptr=__t1541t__k__unsafe_ptr;
  t__k__unsafe_size=__t1541t__k__unsafe_size;
  t__k__unsafe_offset=__t1541t__k__unsafe_offset;
  t__k__unsafe_align=__t1541t__k__unsafe_align;
  __t1543t=1;
  __t_errcode=get__t598t(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_offset,t__t__unsafe_align,__t1543t,&__t1544t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1544t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1545t__number,__t1544t__,8);
  print__t381t(__t1545t__number);
  
  __t_failure:exists__t443t(__t1541t__k__unsafe_ptr,&__t1542t____t1538t____t518t__);
  if(__t1542t____t1538t____t518t__){
  free__t509t(&__t1541t__k__unsafe_ptr);
  }
  print__t374t(__t1527t,__t370t);
  len__t605t(__t1541t__t__unsafe_ptr,__t1541t__t__unsafe_size,__t1541t__t__unsafe_offset,__t1541t__t__unsafe_align,&__t1541t__t__unsafe_size);
  print__t389t(__t1541t__t__unsafe_size);
  exists__t443t(__t1541t__t__unsafe_ptr,&__t1542t____t1533t____t1516t____t518t__);
  if(__t1542t____t1533t____t1516t____t518t__){
  free__t509t(&__t1541t__t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1539t();return 0;}