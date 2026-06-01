#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1485t="going to deallocate of size: ";
const char* const __t366t="";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1468t(char** __t1504t, uint64_t* __t1505t, uint16_t* __t1506t, uint16_t* __t1507t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1504t=unsafe_ptr;
  *__t1505t=unsafe_size;
  *__t1506t=unsafe_offset;
  *__t1507t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t1508t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1508t=z;
}

static inline __attribute__((always_inline)) void free__t505t(char** __t1509t) {
  char* allocated=*__t1509t;
  if(allocated){
  free(allocated);
  }
  *__t1509t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1510t) {
  int value=0;
  *__t1510t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1511t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1511t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1512t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1512t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1513t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1513t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1514t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1514t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t1515t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1515t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1516t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1516t=z;
}

static inline __attribute__((always_inline)) void zero__t506t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1517t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1517t=z;
}

static inline __attribute__((always_inline)) int alloc__t498t(uint64_t bytes, char** __t1518t) {
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
  *__t1518t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t512t(char** __t1519t, uint64_t* __t1520t, uint16_t* __t1521t, uint16_t* __t1522t, uint64_t size, char** __t1523t, uint64_t* __t1524t, uint16_t* __t1525t, uint16_t* __t1526t) {
  char* buffer__unsafe_ptr=*__t1519t;
  uint64_t buffer__unsafe_size=*__t1520t;
  uint16_t buffer__unsafe_offset=*__t1521t;
  uint16_t buffer__unsafe_align=*__t1522t;
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
  *__t1519t=buffer__unsafe_ptr;
  *__t1520t=buffer__unsafe_size;
  *__t1521t=buffer__unsafe_offset;
  *__t1522t=buffer__unsafe_align;
  *__t1523t=buffer__unsafe_ptr;
  *__t1524t=buffer__unsafe_size;
  *__t1525t=buffer__unsafe_offset;
  *__t1526t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1527t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1527t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1528t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1528t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1529t) {
  *__t1529t=to;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t1530t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t1530t=__t508t__;
}

static inline __attribute__((always_inline)) int mutget__t587t(char** __t1531t, uint64_t* __t1532t, uint16_t* __t1533t, uint16_t* __t1534t, uint64_t i, char** __t1535t) {
  char* buffer__unsafe_ptr=*__t1531t;
  uint64_t buffer__unsafe_size=*__t1532t;
  uint16_t buffer__unsafe_offset=*__t1533t;
  uint16_t buffer__unsafe_align=*__t1534t;
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
  *__t1531t=buffer__unsafe_ptr;
  *__t1532t=buffer__unsafe_size;
  *__t1533t=buffer__unsafe_offset;
  *__t1534t=buffer__unsafe_align;
  *__t1535t=__t593t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t594t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1536t) {
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
  *__t1536t=__t600t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t377t(double value) {
  int __t378t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t370t(const char* value, const char* endl) {
  int __t371t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t601t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1537t) {
  goto __t_return;
  __t_return:
  *__t1537t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t385t(uint64_t value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__t1467t(char** __t1538t, uint64_t* __t1539t, uint16_t* __t1540t, uint16_t* __t1541t) {
  char* __t1470t__unsafe_ptr=0;
  uint64_t __t1470t__unsafe_size=0;
  uint16_t __t1470t__unsafe_offset=0;
  uint16_t __t1470t__unsafe_align=0;
  char* __t1471t__unsafe_ptr=0;
  uint64_t __t1471t__unsafe_size=0;
  uint16_t __t1471t__unsafe_offset=0;
  uint16_t __t1471t__unsafe_align=0;
  uint64_t __t1472t=0;
  char* __t1473t__unsafe_ptr=0;
  uint64_t __t1473t__unsafe_size=0;
  uint16_t __t1473t__unsafe_offset=0;
  uint16_t __t1473t__unsafe_align=0;
  char __t1474t____t514t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1475t=0;
  char* __t1476t__=0;
  double __t1477t=0;
  uint64_t __t1478t=0;
  char* __t1479t__=0;
  double __t1480t=0;
  uint64_t __t1481t=0;
  char* __t1482t__=0;
  double __t1483t__number=0;
  uint64_t __t1487t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1468t(&__t1470t__unsafe_ptr,&__t1470t__unsafe_size,&__t1470t__unsafe_offset,&__t1470t__unsafe_align);
  __t1471t__unsafe_ptr=__t1470t__unsafe_ptr;
  __t1471t__unsafe_size=__t1470t__unsafe_size;
  __t1471t__unsafe_offset=__t1470t__unsafe_offset;
  __t1471t__unsafe_align=__t1470t__unsafe_align;
  __t1472t=2;
  __t_errcode=alloc__t512t(&__t1471t__unsafe_ptr,&__t1471t__unsafe_size,&__t1471t__unsafe_offset,&__t1471t__unsafe_align,__t1472t,&__t1473t__unsafe_ptr,&__t1473t__unsafe_size,&__t1473t__unsafe_offset,&__t1473t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t1473t__unsafe_ptr;
  x__unsafe_size=__t1473t__unsafe_size;
  x__unsafe_offset=__t1473t__unsafe_offset;
  x__unsafe_align=__t1473t__unsafe_align;
  __t1475t=0;
  __t_errcode=mutget__t587t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1475t,&__t1476t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1477t=1.0;
  if(!__t1476t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1476t__,&__t1477t,8);
  __t1478t=1;
  __t_errcode=mutget__t587t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1478t,&__t1479t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1480t=2.0;
  if(!__t1479t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1479t__,&__t1480t,8);
  __t1481t=1;
  __t_errcode=get__t594t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,__t1481t,&__t1482t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1482t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1483t__number,__t1482t__,8);
  print__t377t(__t1483t__number);
  goto __t_return;
  
  __t_failure:print__t370t(__t1485t,__t366t);
  len__t601t(x__unsafe_ptr,x__unsafe_size,x__unsafe_offset,x__unsafe_align,&x__unsafe_size);
  print__t385t(x__unsafe_size);
  exists__t439t(x__unsafe_ptr,&__t1474t____t514t__);
  if(__t1474t____t514t__){
  free__t505t(&x__unsafe_ptr);
  }
  __t_return:
  *__t1538t=x__unsafe_ptr;
  *__t1539t=x__unsafe_size;
  *__t1540t=x__unsafe_offset;
  *__t1541t=x__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1489t(char** __t1542t, uint64_t* __t1543t, uint16_t* __t1544t, uint16_t* __t1545t, char** __t1546t, uint64_t* __t1547t, uint16_t* __t1548t, uint16_t* __t1549t, char** __t1550t, uint64_t* __t1551t, uint16_t* __t1552t, uint16_t* __t1553t) {
  char* __t1490t__unsafe_ptr=0;
  uint64_t __t1490t__unsafe_size=0;
  uint16_t __t1490t__unsafe_offset=0;
  uint16_t __t1490t__unsafe_align=0;
  char __t1491t____t1474t____t514t__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint16_t t__unsafe_offset=0;
  uint16_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint16_t j__unsafe_offset=0;
  uint16_t j__unsafe_align=0;
  char* __t1492t__unsafe_ptr=0;
  uint64_t __t1492t__unsafe_size=0;
  uint16_t __t1492t__unsafe_offset=0;
  uint16_t __t1492t__unsafe_align=0;
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
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint16_t k__unsafe_offset=0;
  uint16_t k__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test1__t1467t(&__t1490t__unsafe_ptr,&__t1490t__unsafe_size,&__t1490t__unsafe_offset,&__t1490t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__unsafe_ptr=__t1490t__unsafe_ptr;
  t__unsafe_size=__t1490t__unsafe_size;
  t__unsafe_offset=__t1490t__unsafe_offset;
  t__unsafe_align=__t1490t__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_offset=t__unsafe_offset;
  j__unsafe_align=t__unsafe_align;
  float____t_buffer____buffer__t1468t(&__t1492t__unsafe_ptr,&__t1492t__unsafe_size,&__t1492t__unsafe_offset,&__t1492t__unsafe_align);
  __t1493t__unsafe_ptr=__t1492t__unsafe_ptr;
  __t1493t__unsafe_size=__t1492t__unsafe_size;
  __t1493t__unsafe_offset=__t1492t__unsafe_offset;
  __t1493t__unsafe_align=__t1492t__unsafe_align;
  __t1494t=3;
  __t_errcode=alloc__t512t(&__t1493t__unsafe_ptr,&__t1493t__unsafe_size,&__t1493t__unsafe_offset,&__t1493t__unsafe_align,__t1494t,&__t1495t__unsafe_ptr,&__t1495t__unsafe_size,&__t1495t__unsafe_offset,&__t1495t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  k__unsafe_ptr=__t1495t__unsafe_ptr;
  k__unsafe_size=__t1495t__unsafe_size;
  k__unsafe_offset=__t1495t__unsafe_offset;
  k__unsafe_align=__t1495t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t439t(k__unsafe_ptr,&__t1496t____t514t__);
  if(__t1496t____t514t__){
  free__t505t(&k__unsafe_ptr);
  }
  print__t370t(__t1485t,__t366t);
  len__t601t(t__unsafe_ptr,t__unsafe_size,t__unsafe_offset,t__unsafe_align,&t__unsafe_size);
  print__t385t(t__unsafe_size);
  exists__t439t(t__unsafe_ptr,&__t1491t____t1474t____t514t__);
  if(__t1491t____t1474t____t514t__){
  free__t505t(&t__unsafe_ptr);
  }
  __t_return:
  *__t1542t=t__unsafe_ptr;
  *__t1543t=t__unsafe_size;
  *__t1544t=t__unsafe_offset;
  *__t1545t=t__unsafe_align;
  *__t1546t=j__unsafe_ptr;
  *__t1547t=j__unsafe_size;
  *__t1548t=j__unsafe_offset;
  *__t1549t=j__unsafe_align;
  *__t1550t=k__unsafe_ptr;
  *__t1551t=k__unsafe_size;
  *__t1552t=k__unsafe_offset;
  *__t1553t=k__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1497t() {
  char* __t1498t__t__unsafe_ptr=0;
  uint64_t __t1498t__t__unsafe_size=0;
  uint16_t __t1498t__t__unsafe_offset=0;
  uint16_t __t1498t__t__unsafe_align=0;
  char* __t1498t__j__unsafe_ptr=0;
  uint64_t __t1498t__j__unsafe_size=0;
  uint16_t __t1498t__j__unsafe_offset=0;
  uint16_t __t1498t__j__unsafe_align=0;
  char* __t1498t__k__unsafe_ptr=0;
  uint64_t __t1498t__k__unsafe_size=0;
  uint16_t __t1498t__k__unsafe_offset=0;
  uint16_t __t1498t__k__unsafe_align=0;
  char __t1499t____t1491t____t1474t____t514t__=0;
  char __t1499t____t1496t____t514t__=0;
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
  uint64_t __t1500t=0;
  char* __t1501t__=0;
  double __t1502t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test2__t1489t(&__t1498t__t__unsafe_ptr,&__t1498t__t__unsafe_size,&__t1498t__t__unsafe_offset,&__t1498t__t__unsafe_align,&__t1498t__j__unsafe_ptr,&__t1498t__j__unsafe_size,&__t1498t__j__unsafe_offset,&__t1498t__j__unsafe_align,&__t1498t__k__unsafe_ptr,&__t1498t__k__unsafe_size,&__t1498t__k__unsafe_offset,&__t1498t__k__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__t__unsafe_ptr=__t1498t__t__unsafe_ptr;
  t__t__unsafe_size=__t1498t__t__unsafe_size;
  t__t__unsafe_offset=__t1498t__t__unsafe_offset;
  t__t__unsafe_align=__t1498t__t__unsafe_align;
  t__j__unsafe_ptr=__t1498t__j__unsafe_ptr;
  t__j__unsafe_size=__t1498t__j__unsafe_size;
  t__j__unsafe_offset=__t1498t__j__unsafe_offset;
  t__j__unsafe_align=__t1498t__j__unsafe_align;
  t__k__unsafe_ptr=__t1498t__k__unsafe_ptr;
  t__k__unsafe_size=__t1498t__k__unsafe_size;
  t__k__unsafe_offset=__t1498t__k__unsafe_offset;
  t__k__unsafe_align=__t1498t__k__unsafe_align;
  __t1500t=1;
  __t_errcode=get__t594t(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_offset,t__t__unsafe_align,__t1500t,&__t1501t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1501t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1502t__number,__t1501t__,8);
  print__t377t(__t1502t__number);
  
  __t_failure:exists__t439t(__t1498t__k__unsafe_ptr,&__t1499t____t1496t____t514t__);
  if(__t1499t____t1496t____t514t__){
  free__t505t(&__t1498t__k__unsafe_ptr);
  }
  print__t370t(__t1485t,__t366t);
  len__t601t(__t1498t__t__unsafe_ptr,__t1498t__t__unsafe_size,__t1498t__t__unsafe_offset,__t1498t__t__unsafe_align,&__t1498t__t__unsafe_size);
  print__t385t(__t1498t__t__unsafe_size);
  exists__t439t(__t1498t__t__unsafe_ptr,&__t1499t____t1491t____t1474t____t514t__);
  if(__t1499t____t1491t____t1474t____t514t__){
  free__t505t(&__t1498t__t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1497t();return 0;}