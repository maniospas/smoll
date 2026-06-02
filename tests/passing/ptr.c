#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1484t=",";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1494t(char** __t1538t, uint64_t* __t1539t, uint16_t* __t1540t, uint16_t* __t1541t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1538t=unsafe_ptr;
  *__t1539t=unsafe_size;
  *__t1540t=unsafe_offset;
  *__t1541t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t1542t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1542t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t1543t) {
  char* allocated=*__t1543t;
  if(allocated){
  free(allocated);
  }
  *__t1543t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1544t) {
  int value=0;
  *__t1544t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1545t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1545t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1546t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1546t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1547t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1547t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1548t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1548t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1549t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1549t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1550t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1550t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1551t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1551t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t1552t) {
  char* allocated=0;
  char __t502t__=0;
  char __t503t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t442t(allocated,&__t502t__);
  not__t27t(__t502t__,&__t503t__);
  if(__t503t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1552t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t1553t, uint64_t* __t1554t, uint16_t* __t1555t, uint16_t* __t1556t, uint64_t size, char** __t1557t, uint64_t* __t1558t, uint16_t* __t1559t, uint16_t* __t1560t) {
  char* buffer__unsafe_ptr=*__t1553t;
  uint64_t buffer__unsafe_size=*__t1554t;
  uint16_t buffer__unsafe_offset=*__t1555t;
  uint16_t buffer__unsafe_align=*__t1556t;
  int __t516t=0;
  char __t517t__=0;
  char __t519t__=0;
  uint64_t __t520t=0;
  char __t521t__=0;
  uint64_t __t522t=0;
  uint64_t __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t __t526t=0;
  char __t527t__=0;
  uint64_t __t528t__=0;
  uint64_t __t529t__=0;
  uint64_t bytes=0;
  uint64_t __t530t=0;
  char __t531t__=0;
  char* __t532t__=0;
  uint64_t __t533t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t519t__);
  if(__t519t__){
  __t520t=0;
  neq__t143t(size,__t520t,&__t521t__);
  if(__t521t__){
  __t522t=0;
  nat__t512t(buffer__unsafe_align,&__t523t__);
  mul__t198t(__t523t__,size,&__t524t__);
  zero__t509t(buffer__unsafe_ptr,__t522t,__t524t__);
  }
  goto __t_return;
  }
  __t526t=0;
  neq__t143t(buffer__unsafe_size,__t526t,&__t527t__);
  if(__t527t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t528t__);
  mul__t198t(__t528t__,size,&__t529t__);
  bytes=__t529t__;
  __t530t=0;
  eq__t119t(bytes,__t530t,&__t531t__);
  if(__t531t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t501t(bytes,&__t532t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t532t__;
  __t533t=0;
  zero__t509t(buffer__unsafe_ptr,__t533t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(buffer__unsafe_ptr,&__t517t__);
  if(__t517t__){
  free__t508t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1553t=buffer__unsafe_ptr;
  *__t1554t=buffer__unsafe_size;
  *__t1555t=buffer__unsafe_offset;
  *__t1556t=buffer__unsafe_align;
  *__t1557t=buffer__unsafe_ptr;
  *__t1558t=buffer__unsafe_size;
  *__t1559t=buffer__unsafe_offset;
  *__t1560t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1561t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1561t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1562t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1562t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1563t) {
  *__t1563t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1564t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1564t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1565t, uint64_t* __t1566t, uint16_t* __t1567t, uint16_t* __t1568t, uint64_t i, char** __t1569t) {
  char* buffer__unsafe_ptr=*__t1565t;
  uint64_t buffer__unsafe_size=*__t1566t;
  uint16_t buffer__unsafe_offset=*__t1567t;
  uint16_t buffer__unsafe_align=*__t1568t;
  char __t591t__=0;
  uint64_t __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  char* __t596t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t591t__);
  if(__t591t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t592t__);
  mul__t198t(i,__t592t__,&__t593t__);
  nat__t512t(buffer__unsafe_offset,&__t594t__);
  add__t174t(__t593t__,__t594t__,&__t595t__);
  add__t510t(buffer__unsafe_ptr,__t595t__,&__t596t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1565t=buffer__unsafe_ptr;
  *__t1566t=buffer__unsafe_size;
  *__t1567t=buffer__unsafe_offset;
  *__t1568t=buffer__unsafe_align;
  *__t1569t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1570t) {
  char __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  char* __t603t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(i,buffer__unsafe_size,&__t598t__);
  if(__t598t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t599t__);
  mul__t198t(i,__t599t__,&__t600t__);
  nat__t512t(buffer__unsafe_offset,&__t601t__);
  add__t174t(__t600t__,__t601t__,&__t602t__);
  add__t510t(buffer__unsafe_ptr,__t602t__,&__t603t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1570t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t380t(double value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__t504t(char* allocated, uint64_t bytes, char** __t1571t) {
  char* new_allocated=0;
  char __t505t__=0;
  char __t506t__=0;
  char* __t507t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t442t(new_allocated,&__t505t__);
  not__t27t(__t505t__,&__t506t__);
  if(__t506t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t21t(new_allocated,allocated,&__t507t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1571t=__t507t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1572t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1572t=z;
}

static inline __attribute__((always_inline)) int resize__t563t(char** __t1573t, uint64_t* __t1574t, uint16_t* __t1575t, uint16_t* __t1576t, uint64_t size, char** __t1577t, uint64_t* __t1578t, uint16_t* __t1579t, uint16_t* __t1580t) {
  char* buffer__unsafe_ptr=*__t1573t;
  uint64_t buffer__unsafe_size=*__t1574t;
  uint16_t buffer__unsafe_offset=*__t1575t;
  uint16_t buffer__unsafe_align=*__t1576t;
  char __t564t__=0;
  uint64_t __t565t=0;
  char __t566t__=0;
  uint64_t __t567t__=0;
  uint64_t __t568t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t569t__=0;
  uint64_t __t570t__=0;
  uint64_t bytes=0;
  char* __t571t__=0;
  char __t572t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(buffer__unsafe_size,size,&__t564t__);
  if(__t564t__){
  goto __t_return;
  }
  __t565t=0;
  eq__t119t(buffer__unsafe_size,__t565t,&__t566t__);
  if(__t566t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t567t__);
  mul__t198t(buffer__unsafe_size,__t567t__,&__t568t__);
  prev_bytes=__t568t__;
  buffer__unsafe_size=size;
  nat__t512t(buffer__unsafe_align,&__t569t__);
  mul__t198t(__t569t__,size,&__t570t__);
  bytes=__t570t__;
  __t_errcode=realloc__t504t(buffer__unsafe_ptr,bytes,&__t571t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t571t__;
  lt__t251t(prev_bytes,bytes,&__t572t__);
  if(__t572t__){
  zero__t509t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1573t=buffer__unsafe_ptr;
  *__t1574t=buffer__unsafe_size;
  *__t1575t=buffer__unsafe_offset;
  *__t1576t=buffer__unsafe_align;
  *__t1577t=buffer__unsafe_ptr;
  *__t1578t=buffer__unsafe_size;
  *__t1579t=buffer__unsafe_offset;
  *__t1580t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t1581t) {
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
  *__t1581t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t582t(char** __t1582t, uint64_t* __t1583t, uint16_t* __t1584t, uint16_t* __t1585t, char** __t1586t) {
  char* buffer__unsafe_ptr=*__t1582t;
  uint64_t buffer__unsafe_size=*__t1583t;
  uint16_t buffer__unsafe_offset=*__t1584t;
  uint16_t buffer__unsafe_align=*__t1585t;
  uint64_t __t583t=0;
  char __t584t__=0;
  uint64_t __t585t=0;
  uint64_t __t586t__=0;
  uint64_t __t587t__=0;
  uint64_t __t588t__=0;
  char* __t589t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t583t=0;
  eq__t119t(__t583t,buffer__unsafe_size,&__t584t__);
  if(__t584t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t585t=1;
  __t_errcode=sub__t351t(buffer__unsafe_size,__t585t,&__t586t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t512t(buffer__unsafe_align,&__t587t__);
  mul__t198t(__t586t__,__t587t__,&__t588t__);
  add__t510t(buffer__unsafe_ptr,__t588t__,&__t589t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1582t=buffer__unsafe_ptr;
  *__t1583t=buffer__unsafe_size;
  *__t1584t=buffer__unsafe_offset;
  *__t1585t=buffer__unsafe_align;
  *__t1586t=__t589t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Field____t_buffer____buffer__t1513t(char** __t1587t, uint64_t* __t1588t, uint16_t* __t1589t, uint16_t* __t1590t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=32;
  *__t1587t=unsafe_ptr;
  *__t1588t=unsafe_size;
  *__t1589t=unsafe_offset;
  *__t1590t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t378t(double value, const char* endl) {
  int __t379t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__t1482t(char* f) {
  double __t1483t__a__x=0;
  double __t1483t__a__y=0;
  double __t1483t__b__x=0;
  double __t1483t__b__y=0;
  double __t1486t__a__x=0;
  double __t1486t__a__y=0;
  double __t1486t__b__x=0;
  double __t1486t__b__y=0;
  double __t1488t__a__x=0;
  double __t1488t__a__y=0;
  double __t1488t__b__x=0;
  double __t1488t__b__y=0;
  double __t1490t__a__x=0;
  double __t1490t__a__y=0;
  double __t1490t__b__x=0;
  double __t1490t__b__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1483t__a__x,f,8);
  memcpy(&__t1483t__a__y,f+8,8);
  memcpy(&__t1483t__b__x,f+16,8);
  memcpy(&__t1483t__b__y,f+24,8);
  print__t378t(__t1483t__a__x,__t1484t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1486t__a__x,f,8);
  memcpy(&__t1486t__a__y,f+8,8);
  memcpy(&__t1486t__b__x,f+16,8);
  memcpy(&__t1486t__b__y,f+24,8);
  print__t378t(__t1486t__a__y,__t1484t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1488t__a__x,f,8);
  memcpy(&__t1488t__a__y,f+8,8);
  memcpy(&__t1488t__b__x,f+16,8);
  memcpy(&__t1488t__b__y,f+24,8);
  print__t378t(__t1488t__b__x,__t1484t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1490t__a__x,f,8);
  memcpy(&__t1490t__a__y,f+8,8);
  memcpy(&__t1490t__b__x,f+16,8);
  memcpy(&__t1490t__b__y,f+24,8);
  print__t380t(__t1490t__b__y);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1492t() {
  char* __t1496t__unsafe_ptr=0;
  uint64_t __t1496t__unsafe_size=0;
  uint16_t __t1496t__unsafe_offset=0;
  uint16_t __t1496t__unsafe_align=0;
  uint64_t __t1497t=0;
  char* __t1498t__unsafe_ptr=0;
  uint64_t __t1498t__unsafe_size=0;
  uint16_t __t1498t__unsafe_offset=0;
  uint16_t __t1498t__unsafe_align=0;
  char __t1499t____t517t__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint16_t f__unsafe_offset=0;
  uint16_t f__unsafe_align=0;
  uint64_t __t1500t=0;
  char* __t1501t__=0;
  double __t1502t=0;
  uint64_t __t1503t=0;
  char* __t1504t__=0;
  double __t1505t__value=0;
  uint64_t __t1507t=0;
  char* __t1508t__=0;
  char* f0=0;
  double __t1509t__value=0;
  uint64_t __t1510t=0;
  char* __t1511t__unsafe_ptr=0;
  uint64_t __t1511t__unsafe_size=0;
  uint16_t __t1511t__unsafe_offset=0;
  uint16_t __t1511t__unsafe_align=0;
  char* __t1512t__=0;
  char* __t1515t__unsafe_ptr=0;
  uint64_t __t1515t__unsafe_size=0;
  uint16_t __t1515t__unsafe_offset=0;
  uint16_t __t1515t__unsafe_align=0;
  char* __t1516t__unsafe_ptr=0;
  uint64_t __t1516t__unsafe_size=0;
  uint16_t __t1516t__unsafe_offset=0;
  uint16_t __t1516t__unsafe_align=0;
  uint64_t __t1517t=0;
  char* __t1518t__unsafe_ptr=0;
  uint64_t __t1518t__unsafe_size=0;
  uint16_t __t1518t__unsafe_offset=0;
  uint16_t __t1518t__unsafe_align=0;
  char __t1519t____t517t__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint16_t p__unsafe_offset=0;
  uint16_t p__unsafe_align=0;
  uint64_t __t1520t=0;
  char* __t1521t__=0;
  double __t1522t=0;
  double __t1523t=0;
  double __t1524t=0;
  double __t1525t=0;
  uint64_t __t1526t=0;
  char* __t1527t__=0;
  double __t1529t=0;
  char* __t1530t__unsafe_ptr=0;
  uint64_t __t1530t__unsafe_size=0;
  uint16_t __t1530t__unsafe_offset=0;
  uint16_t __t1530t__unsafe_align=0;
  char* __t1531t__unsafe_ptr=0;
  uint64_t __t1531t__unsafe_size=0;
  uint16_t __t1531t__unsafe_offset=0;
  uint16_t __t1531t__unsafe_align=0;
  uint64_t __t1532t=0;
  char* __t1533t__unsafe_ptr=0;
  uint64_t __t1533t__unsafe_size=0;
  uint16_t __t1533t__unsafe_offset=0;
  uint16_t __t1533t__unsafe_align=0;
  char __t1534t____t517t__=0;
  char* __t1535t__=0;
  char* n=0;
  double __t1536t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  float____t_buffer____buffer__t1494t(&__t1496t__unsafe_ptr,&__t1496t__unsafe_size,&__t1496t__unsafe_offset,&__t1496t__unsafe_align);
  __t1497t=1;
  __t_errcode=alloc__t515t(&__t1496t__unsafe_ptr,&__t1496t__unsafe_size,&__t1496t__unsafe_offset,&__t1496t__unsafe_align,__t1497t,&__t1498t__unsafe_ptr,&__t1498t__unsafe_size,&__t1498t__unsafe_offset,&__t1498t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1500t=0;
  __t_errcode=mutget__t590t(&__t1498t__unsafe_ptr,&__t1498t__unsafe_size,&__t1498t__unsafe_offset,&__t1498t__unsafe_align,__t1500t,&__t1501t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1502t=1.0;
  if(!__t1501t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1501t__,&__t1502t,8);
  __t1503t=0;
  __t_errcode=get__t597t(__t1498t__unsafe_ptr,__t1498t__unsafe_size,__t1498t__unsafe_offset,__t1498t__unsafe_align,__t1503t,&__t1504t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1504t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1505t__value,__t1504t__,8);
  print__t380t(__t1505t__value);
  __t1507t=0;
  __t_errcode=mutget__t590t(&__t1498t__unsafe_ptr,&__t1498t__unsafe_size,&__t1498t__unsafe_offset,&__t1498t__unsafe_align,__t1507t,&__t1508t__);
  if(__t_errcode){
  goto __t_failure;
  }
  f0=__t1508t__;
  if(!f0){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1509t__value,f0,8);
  __t1510t=2;
  __t_errcode=resize__t563t(&__t1498t__unsafe_ptr,&__t1498t__unsafe_size,&__t1498t__unsafe_offset,&__t1498t__unsafe_align,__t1510t,&__t1511t__unsafe_ptr,&__t1511t__unsafe_size,&__t1511t__unsafe_offset,&__t1511t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t582t(&__t1498t__unsafe_ptr,&__t1498t__unsafe_size,&__t1498t__unsafe_offset,&__t1498t__unsafe_align,&__t1512t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1512t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1512t__,&__t1509t__value,8);
  Field____t_buffer____buffer__t1513t(&__t1515t__unsafe_ptr,&__t1515t__unsafe_size,&__t1515t__unsafe_offset,&__t1515t__unsafe_align);
  __t1516t__unsafe_ptr=__t1515t__unsafe_ptr;
  __t1516t__unsafe_size=__t1515t__unsafe_size;
  __t1516t__unsafe_offset=__t1515t__unsafe_offset;
  __t1516t__unsafe_align=__t1515t__unsafe_align;
  __t1517t=1;
  __t_errcode=alloc__t515t(&__t1516t__unsafe_ptr,&__t1516t__unsafe_size,&__t1516t__unsafe_offset,&__t1516t__unsafe_align,__t1517t,&__t1518t__unsafe_ptr,&__t1518t__unsafe_size,&__t1518t__unsafe_offset,&__t1518t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t1518t__unsafe_ptr;
  p__unsafe_size=__t1518t__unsafe_size;
  p__unsafe_offset=__t1518t__unsafe_offset;
  p__unsafe_align=__t1518t__unsafe_align;
  __t1520t=0;
  __t_errcode=mutget__t590t(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_offset,&p__unsafe_align,__t1520t,&__t1521t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1522t=1.0;
  __t1523t=2.0;
  __t1524t=3.0;
  __t1525t=4.0;
  if(!__t1521t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1521t__,&__t1522t,8);
  memcpy(__t1521t__+8,&__t1523t,8);
  memcpy(__t1521t__+16,&__t1524t,8);
  memcpy(__t1521t__+24,&__t1525t,8);
  __t1526t=0;
  __t_errcode=get__t597t(p__unsafe_ptr,p__unsafe_size,p__unsafe_offset,p__unsafe_align,__t1526t,&__t1527t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1482t(__t1527t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1529t=1.0;
  float____t_buffer____buffer__t1494t(&__t1530t__unsafe_ptr,&__t1530t__unsafe_size,&__t1530t__unsafe_offset,&__t1530t__unsafe_align);
  __t1531t__unsafe_ptr=__t1530t__unsafe_ptr;
  __t1531t__unsafe_size=__t1530t__unsafe_size;
  __t1531t__unsafe_offset=__t1530t__unsafe_offset;
  __t1531t__unsafe_align=__t1530t__unsafe_align;
  __t1532t=1;
  __t_errcode=alloc__t515t(&__t1531t__unsafe_ptr,&__t1531t__unsafe_size,&__t1531t__unsafe_offset,&__t1531t__unsafe_align,__t1532t,&__t1533t__unsafe_ptr,&__t1533t__unsafe_size,&__t1533t__unsafe_offset,&__t1533t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t582t(&__t1533t__unsafe_ptr,&__t1533t__unsafe_size,&__t1533t__unsafe_offset,&__t1533t__unsafe_align,&__t1535t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1535t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1535t__,&__t1529t,8);
  n=__t1535t__;
  if(!n){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1536t__value,n,8);
  print__t380t(__t1536t__value);
  
  __t_failure:exists__t442t(__t1533t__unsafe_ptr,&__t1534t____t517t__);
  if(__t1534t____t517t__){
  free__t508t(&__t1533t__unsafe_ptr);
  }
  exists__t442t(__t1518t__unsafe_ptr,&__t1519t____t517t__);
  if(__t1519t____t517t__){
  free__t508t(&__t1518t__unsafe_ptr);
  }
  exists__t442t(__t1498t__unsafe_ptr,&__t1499t____t517t__);
  if(__t1499t____t517t__){
  free__t508t(&__t1498t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1492t();return 0;}