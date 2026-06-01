#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t374t="\n";
const char* const __t1471t=",";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1480t(char** __t1524t, uint64_t* __t1525t, uint16_t* __t1526t, uint16_t* __t1527t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1524t=unsafe_ptr;
  *__t1525t=unsafe_size;
  *__t1526t=unsafe_offset;
  *__t1527t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t1528t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1528t=z;
}

static inline __attribute__((always_inline)) void free__t505t(char** __t1529t) {
  char* allocated=*__t1529t;
  if(allocated){
  free(allocated);
  }
  *__t1529t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1530t) {
  int value=0;
  *__t1530t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1531t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1531t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1532t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1532t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1533t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1533t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1534t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1534t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t1535t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1535t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1536t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1536t=z;
}

static inline __attribute__((always_inline)) void zero__t506t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1537t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1537t=z;
}

static inline __attribute__((always_inline)) int alloc__t498t(uint64_t bytes, char** __t1538t) {
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
  *__t1538t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t512t(char** __t1539t, uint64_t* __t1540t, uint16_t* __t1541t, uint16_t* __t1542t, uint64_t size, char** __t1543t, uint64_t* __t1544t, uint16_t* __t1545t, uint16_t* __t1546t) {
  char* buffer__unsafe_ptr=*__t1539t;
  uint64_t buffer__unsafe_size=*__t1540t;
  uint16_t buffer__unsafe_offset=*__t1541t;
  uint16_t buffer__unsafe_align=*__t1542t;
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
  *__t1539t=buffer__unsafe_ptr;
  *__t1540t=buffer__unsafe_size;
  *__t1541t=buffer__unsafe_offset;
  *__t1542t=buffer__unsafe_align;
  *__t1543t=buffer__unsafe_ptr;
  *__t1544t=buffer__unsafe_size;
  *__t1545t=buffer__unsafe_offset;
  *__t1546t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1547t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1547t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1548t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1548t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1549t) {
  *__t1549t=to;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t1550t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t1550t=__t508t__;
}

static inline __attribute__((always_inline)) int mutget__t587t(char** __t1551t, uint64_t* __t1552t, uint16_t* __t1553t, uint16_t* __t1554t, uint64_t i, char** __t1555t) {
  char* buffer__unsafe_ptr=*__t1551t;
  uint64_t buffer__unsafe_size=*__t1552t;
  uint16_t buffer__unsafe_offset=*__t1553t;
  uint16_t buffer__unsafe_align=*__t1554t;
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
  *__t1551t=buffer__unsafe_ptr;
  *__t1552t=buffer__unsafe_size;
  *__t1553t=buffer__unsafe_offset;
  *__t1554t=buffer__unsafe_align;
  *__t1555t=__t593t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t594t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1556t) {
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
  *__t1556t=__t600t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t377t(double value) {
  int __t378t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__t501t(char* allocated, uint64_t bytes, char** __t1557t) {
  char* new_allocated=0;
  char __t502t__=0;
  char __t503t__=0;
  char* __t504t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t439t(new_allocated,&__t502t__);
  not__t27t(__t502t__,&__t503t__);
  if(__t503t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t21t(new_allocated,allocated,&__t504t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1557t=__t504t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1558t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1558t=z;
}

static inline __attribute__((always_inline)) int resize__t560t(char** __t1559t, uint64_t* __t1560t, uint16_t* __t1561t, uint16_t* __t1562t, uint64_t size, char** __t1563t, uint64_t* __t1564t, uint16_t* __t1565t, uint16_t* __t1566t) {
  char* buffer__unsafe_ptr=*__t1559t;
  uint64_t buffer__unsafe_size=*__t1560t;
  uint16_t buffer__unsafe_offset=*__t1561t;
  uint16_t buffer__unsafe_align=*__t1562t;
  char __t561t__=0;
  uint64_t __t562t=0;
  char __t563t__=0;
  uint64_t __t564t__=0;
  uint64_t __t565t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t566t__=0;
  uint64_t __t567t__=0;
  uint64_t bytes=0;
  char* __t568t__=0;
  char __t569t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(buffer__unsafe_size,size,&__t561t__);
  if(__t561t__){
  goto __t_return;
  }
  __t562t=0;
  eq__t119t(buffer__unsafe_size,__t562t,&__t563t__);
  if(__t563t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t564t__);
  mul__t198t(buffer__unsafe_size,__t564t__,&__t565t__);
  prev_bytes=__t565t__;
  buffer__unsafe_size=size;
  nat__t509t(buffer__unsafe_align,&__t566t__);
  mul__t198t(__t566t__,size,&__t567t__);
  bytes=__t567t__;
  __t_errcode=realloc__t501t(buffer__unsafe_ptr,bytes,&__t568t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t568t__;
  lt__t251t(prev_bytes,bytes,&__t569t__);
  if(__t569t__){
  zero__t506t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1559t=buffer__unsafe_ptr;
  *__t1560t=buffer__unsafe_size;
  *__t1561t=buffer__unsafe_offset;
  *__t1562t=buffer__unsafe_align;
  *__t1563t=buffer__unsafe_ptr;
  *__t1564t=buffer__unsafe_size;
  *__t1565t=buffer__unsafe_offset;
  *__t1566t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t1567t) {
  int __t352t__=0;
  int __t353t=0;
  int __t354t=0;
  char __t355t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t352t__);
  lt__t251t(x,y,&__t355t__);
  if(__t355t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1567t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t579t(char** __t1568t, uint64_t* __t1569t, uint16_t* __t1570t, uint16_t* __t1571t, char** __t1572t) {
  char* buffer__unsafe_ptr=*__t1568t;
  uint64_t buffer__unsafe_size=*__t1569t;
  uint16_t buffer__unsafe_offset=*__t1570t;
  uint16_t buffer__unsafe_align=*__t1571t;
  uint64_t __t580t=0;
  char __t581t__=0;
  uint64_t __t582t=0;
  uint64_t __t583t__=0;
  uint64_t __t584t__=0;
  uint64_t __t585t__=0;
  char* __t586t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t580t=0;
  eq__t119t(__t580t,buffer__unsafe_size,&__t581t__);
  if(__t581t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t582t=1;
  __t_errcode=sub__t351t(buffer__unsafe_size,__t582t,&__t583t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t509t(buffer__unsafe_align,&__t584t__);
  mul__t198t(__t583t__,__t584t__,&__t585t__);
  add__t507t(buffer__unsafe_ptr,__t585t__,&__t586t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1568t=buffer__unsafe_ptr;
  *__t1569t=buffer__unsafe_size;
  *__t1570t=buffer__unsafe_offset;
  *__t1571t=buffer__unsafe_align;
  *__t1572t=__t586t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Field____t_buffer____buffer__t1499t(char** __t1573t, uint64_t* __t1574t, uint16_t* __t1575t, uint16_t* __t1576t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=32;
  *__t1573t=unsafe_ptr;
  *__t1574t=unsafe_size;
  *__t1575t=unsafe_offset;
  *__t1576t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t375t(double value, const char* endl) {
  int __t376t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__t1469t(char* f) {
  double __t1470t__a__x=0;
  double __t1470t__a__y=0;
  double __t1470t__b__x=0;
  double __t1470t__b__y=0;
  double __t1473t__a__x=0;
  double __t1473t__a__y=0;
  double __t1473t__b__x=0;
  double __t1473t__b__y=0;
  double __t1475t__a__x=0;
  double __t1475t__a__y=0;
  double __t1475t__b__x=0;
  double __t1475t__b__y=0;
  double __t1477t__a__x=0;
  double __t1477t__a__y=0;
  double __t1477t__b__x=0;
  double __t1477t__b__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1470t__a__x,f,8);
  memcpy(&__t1470t__a__y,f+8,8);
  memcpy(&__t1470t__b__x,f+16,8);
  memcpy(&__t1470t__b__y,f+24,8);
  print__t375t(__t1470t__a__x,__t1471t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1473t__a__x,f,8);
  memcpy(&__t1473t__a__y,f+8,8);
  memcpy(&__t1473t__b__x,f+16,8);
  memcpy(&__t1473t__b__y,f+24,8);
  print__t375t(__t1473t__a__y,__t1471t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1475t__a__x,f,8);
  memcpy(&__t1475t__a__y,f+8,8);
  memcpy(&__t1475t__b__x,f+16,8);
  memcpy(&__t1475t__b__y,f+24,8);
  print__t375t(__t1475t__b__x,__t1471t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1477t__a__x,f,8);
  memcpy(&__t1477t__a__y,f+8,8);
  memcpy(&__t1477t__b__x,f+16,8);
  memcpy(&__t1477t__b__y,f+24,8);
  print__t377t(__t1477t__b__y);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1479t() {
  char* __t1482t__unsafe_ptr=0;
  uint64_t __t1482t__unsafe_size=0;
  uint16_t __t1482t__unsafe_offset=0;
  uint16_t __t1482t__unsafe_align=0;
  uint64_t __t1483t=0;
  char* __t1484t__unsafe_ptr=0;
  uint64_t __t1484t__unsafe_size=0;
  uint16_t __t1484t__unsafe_offset=0;
  uint16_t __t1484t__unsafe_align=0;
  char __t1485t____t514t__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint16_t f__unsafe_offset=0;
  uint16_t f__unsafe_align=0;
  uint64_t __t1486t=0;
  char* __t1487t__=0;
  double __t1488t=0;
  uint64_t __t1489t=0;
  char* __t1490t__=0;
  double __t1491t__z=0;
  uint64_t __t1493t=0;
  char* __t1494t__=0;
  char* f0=0;
  double __t1495t__z=0;
  uint64_t __t1496t=0;
  char* __t1497t__unsafe_ptr=0;
  uint64_t __t1497t__unsafe_size=0;
  uint16_t __t1497t__unsafe_offset=0;
  uint16_t __t1497t__unsafe_align=0;
  char* __t1498t__=0;
  char* __t1501t__unsafe_ptr=0;
  uint64_t __t1501t__unsafe_size=0;
  uint16_t __t1501t__unsafe_offset=0;
  uint16_t __t1501t__unsafe_align=0;
  char* __t1502t__unsafe_ptr=0;
  uint64_t __t1502t__unsafe_size=0;
  uint16_t __t1502t__unsafe_offset=0;
  uint16_t __t1502t__unsafe_align=0;
  uint64_t __t1503t=0;
  char* __t1504t__unsafe_ptr=0;
  uint64_t __t1504t__unsafe_size=0;
  uint16_t __t1504t__unsafe_offset=0;
  uint16_t __t1504t__unsafe_align=0;
  char __t1505t____t514t__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint16_t p__unsafe_offset=0;
  uint16_t p__unsafe_align=0;
  uint64_t __t1506t=0;
  char* __t1507t__=0;
  double __t1508t=0;
  double __t1509t=0;
  double __t1510t=0;
  double __t1511t=0;
  uint64_t __t1512t=0;
  char* __t1513t__=0;
  double __t1515t=0;
  char* __t1516t__unsafe_ptr=0;
  uint64_t __t1516t__unsafe_size=0;
  uint16_t __t1516t__unsafe_offset=0;
  uint16_t __t1516t__unsafe_align=0;
  char* __t1517t__unsafe_ptr=0;
  uint64_t __t1517t__unsafe_size=0;
  uint16_t __t1517t__unsafe_offset=0;
  uint16_t __t1517t__unsafe_align=0;
  uint64_t __t1518t=0;
  char* __t1519t__unsafe_ptr=0;
  uint64_t __t1519t__unsafe_size=0;
  uint16_t __t1519t__unsafe_offset=0;
  uint16_t __t1519t__unsafe_align=0;
  char __t1520t____t514t__=0;
  char* __t1521t__=0;
  char* n=0;
  double __t1522t__z=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1480t(&__t1482t__unsafe_ptr,&__t1482t__unsafe_size,&__t1482t__unsafe_offset,&__t1482t__unsafe_align);
  __t1483t=1;
  __t_errcode=alloc__t512t(&__t1482t__unsafe_ptr,&__t1482t__unsafe_size,&__t1482t__unsafe_offset,&__t1482t__unsafe_align,__t1483t,&__t1484t__unsafe_ptr,&__t1484t__unsafe_size,&__t1484t__unsafe_offset,&__t1484t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1486t=0;
  __t_errcode=mutget__t587t(&__t1484t__unsafe_ptr,&__t1484t__unsafe_size,&__t1484t__unsafe_offset,&__t1484t__unsafe_align,__t1486t,&__t1487t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1488t=1.0;
  if(!__t1487t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1487t__,&__t1488t,8);
  __t1489t=0;
  __t_errcode=get__t594t(__t1484t__unsafe_ptr,__t1484t__unsafe_size,__t1484t__unsafe_offset,__t1484t__unsafe_align,__t1489t,&__t1490t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1490t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1491t__z,__t1490t__,8);
  print__t377t(__t1491t__z);
  __t1493t=0;
  __t_errcode=mutget__t587t(&__t1484t__unsafe_ptr,&__t1484t__unsafe_size,&__t1484t__unsafe_offset,&__t1484t__unsafe_align,__t1493t,&__t1494t__);
  if(__t_errcode){
  goto __t_failure;
  }
  f0=__t1494t__;
  if(!f0){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1495t__z,f0,8);
  __t1496t=2;
  __t_errcode=resize__t560t(&__t1484t__unsafe_ptr,&__t1484t__unsafe_size,&__t1484t__unsafe_offset,&__t1484t__unsafe_align,__t1496t,&__t1497t__unsafe_ptr,&__t1497t__unsafe_size,&__t1497t__unsafe_offset,&__t1497t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t579t(&__t1484t__unsafe_ptr,&__t1484t__unsafe_size,&__t1484t__unsafe_offset,&__t1484t__unsafe_align,&__t1498t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1498t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1498t__,&__t1495t__z,8);
  Field____t_buffer____buffer__t1499t(&__t1501t__unsafe_ptr,&__t1501t__unsafe_size,&__t1501t__unsafe_offset,&__t1501t__unsafe_align);
  __t1502t__unsafe_ptr=__t1501t__unsafe_ptr;
  __t1502t__unsafe_size=__t1501t__unsafe_size;
  __t1502t__unsafe_offset=__t1501t__unsafe_offset;
  __t1502t__unsafe_align=__t1501t__unsafe_align;
  __t1503t=1;
  __t_errcode=alloc__t512t(&__t1502t__unsafe_ptr,&__t1502t__unsafe_size,&__t1502t__unsafe_offset,&__t1502t__unsafe_align,__t1503t,&__t1504t__unsafe_ptr,&__t1504t__unsafe_size,&__t1504t__unsafe_offset,&__t1504t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t1504t__unsafe_ptr;
  p__unsafe_size=__t1504t__unsafe_size;
  p__unsafe_offset=__t1504t__unsafe_offset;
  p__unsafe_align=__t1504t__unsafe_align;
  __t1506t=0;
  __t_errcode=mutget__t587t(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_offset,&p__unsafe_align,__t1506t,&__t1507t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1508t=1.0;
  __t1509t=2.0;
  __t1510t=3.0;
  __t1511t=4.0;
  if(!__t1507t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1507t__,&__t1508t,8);
  memcpy(__t1507t__+8,&__t1509t,8);
  memcpy(__t1507t__+16,&__t1510t,8);
  memcpy(__t1507t__+24,&__t1511t,8);
  __t1512t=0;
  __t_errcode=get__t594t(p__unsafe_ptr,p__unsafe_size,p__unsafe_offset,p__unsafe_align,__t1512t,&__t1513t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1469t(__t1513t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1515t=1.0;
  float____t_buffer____buffer__t1480t(&__t1516t__unsafe_ptr,&__t1516t__unsafe_size,&__t1516t__unsafe_offset,&__t1516t__unsafe_align);
  __t1517t__unsafe_ptr=__t1516t__unsafe_ptr;
  __t1517t__unsafe_size=__t1516t__unsafe_size;
  __t1517t__unsafe_offset=__t1516t__unsafe_offset;
  __t1517t__unsafe_align=__t1516t__unsafe_align;
  __t1518t=1;
  __t_errcode=alloc__t512t(&__t1517t__unsafe_ptr,&__t1517t__unsafe_size,&__t1517t__unsafe_offset,&__t1517t__unsafe_align,__t1518t,&__t1519t__unsafe_ptr,&__t1519t__unsafe_size,&__t1519t__unsafe_offset,&__t1519t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t579t(&__t1519t__unsafe_ptr,&__t1519t__unsafe_size,&__t1519t__unsafe_offset,&__t1519t__unsafe_align,&__t1521t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1521t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1521t__,&__t1515t,8);
  n=__t1521t__;
  if(!n){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1522t__z,n,8);
  print__t377t(__t1522t__z);
  
  __t_failure:exists__t439t(__t1519t__unsafe_ptr,&__t1520t____t514t__);
  if(__t1520t____t514t__){
  free__t505t(&__t1519t__unsafe_ptr);
  }
  exists__t439t(__t1504t__unsafe_ptr,&__t1505t____t514t__);
  if(__t1505t____t514t__){
  free__t505t(&__t1504t__unsafe_ptr);
  }
  exists__t439t(__t1484t__unsafe_ptr,&__t1485t____t514t__);
  if(__t1485t____t514t__){
  free__t505t(&__t1484t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1479t();return 0;}