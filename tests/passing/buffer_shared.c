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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1511t(char** __t1531t, uint64_t* __t1532t, uint16_t* __t1533t, uint16_t* __t1534t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1531t=unsafe_ptr;
  *__t1532t=unsafe_size;
  *__t1533t=unsafe_offset;
  *__t1534t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t1535t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1535t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t1536t) {
  char* allocated=*__t1536t;
  if(allocated){
  free(allocated);
  }
  *__t1536t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1537t) {
  int value=0;
  *__t1537t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1538t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1538t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1539t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1539t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1540t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1540t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1541t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1541t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t1542t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1542t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1543t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1543t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1544t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1544t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t1545t) {
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
  *__t1545t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t1546t, uint64_t* __t1547t, uint16_t* __t1548t, uint16_t* __t1549t, uint64_t size, char** __t1550t, uint64_t* __t1551t, uint16_t* __t1552t, uint16_t* __t1553t) {
  char* buffer__unsafe_ptr=*__t1546t;
  uint64_t buffer__unsafe_size=*__t1547t;
  uint16_t buffer__unsafe_offset=*__t1548t;
  uint16_t buffer__unsafe_align=*__t1549t;
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
  *__t1546t=buffer__unsafe_ptr;
  *__t1547t=buffer__unsafe_size;
  *__t1548t=buffer__unsafe_offset;
  *__t1549t=buffer__unsafe_align;
  *__t1550t=buffer__unsafe_ptr;
  *__t1551t=buffer__unsafe_size;
  *__t1552t=buffer__unsafe_offset;
  *__t1553t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1554t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1554t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1555t) {
  *__t1555t=to;
}

static inline __attribute__((always_inline)) int realloc__t505t(char* allocated, uint64_t bytes, char** __t1556t) {
  char* new_allocated=0;
  char __t506t__=0;
  char __t507t__=0;
  char* __t508t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t443t(new_allocated,&__t506t__);
  not__t28t(__t506t__,&__t507t__);
  if(__t507t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t22t(new_allocated,allocated,&__t508t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1556t=__t508t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1557t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1557t=z;
}

static inline __attribute__((always_inline)) int resize__t564t(char** __t1558t, uint64_t* __t1559t, uint16_t* __t1560t, uint16_t* __t1561t, uint64_t size, char** __t1562t, uint64_t* __t1563t, uint16_t* __t1564t, uint16_t* __t1565t) {
  char* buffer__unsafe_ptr=*__t1558t;
  uint64_t buffer__unsafe_size=*__t1559t;
  uint16_t buffer__unsafe_offset=*__t1560t;
  uint16_t buffer__unsafe_align=*__t1561t;
  char __t565t__=0;
  uint64_t __t566t=0;
  char __t567t__=0;
  uint64_t __t568t__=0;
  uint64_t __t569t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t570t__=0;
  uint64_t __t571t__=0;
  uint64_t bytes=0;
  char* __t572t__=0;
  char __t573t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(buffer__unsafe_size,size,&__t565t__);
  if(__t565t__){
  goto __t_return;
  }
  __t566t=0;
  eq__t120t(buffer__unsafe_size,__t566t,&__t567t__);
  if(__t567t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t568t__);
  mul__t199t(buffer__unsafe_size,__t568t__,&__t569t__);
  prev_bytes=__t569t__;
  buffer__unsafe_size=size;
  nat__t513t(buffer__unsafe_align,&__t570t__);
  mul__t199t(__t570t__,size,&__t571t__);
  bytes=__t571t__;
  __t_errcode=realloc__t505t(buffer__unsafe_ptr,bytes,&__t572t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t572t__;
  lt__t252t(prev_bytes,bytes,&__t573t__);
  if(__t573t__){
  zero__t510t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1558t=buffer__unsafe_ptr;
  *__t1559t=buffer__unsafe_size;
  *__t1560t=buffer__unsafe_offset;
  *__t1561t=buffer__unsafe_align;
  *__t1562t=buffer__unsafe_ptr;
  *__t1563t=buffer__unsafe_size;
  *__t1564t=buffer__unsafe_offset;
  *__t1565t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1566t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1566t=z;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t1567t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t1567t=__t512t__;
}

static inline __attribute__((always_inline)) int mutget__t591t(char** __t1568t, uint64_t* __t1569t, uint16_t* __t1570t, uint16_t* __t1571t, uint64_t i, char** __t1572t) {
  char* buffer__unsafe_ptr=*__t1568t;
  uint64_t buffer__unsafe_size=*__t1569t;
  uint16_t buffer__unsafe_offset=*__t1570t;
  uint16_t buffer__unsafe_align=*__t1571t;
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
  *__t1568t=buffer__unsafe_ptr;
  *__t1569t=buffer__unsafe_size;
  *__t1570t=buffer__unsafe_offset;
  *__t1571t=buffer__unsafe_align;
  *__t1572t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1573t) {
  goto __t_return;
  __t_return:
  *__t1573t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t389t(uint64_t value) {
  int __t390t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1574t) {
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
  *__t1574t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t381t(double value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1509t() {
  char* __t1513t__unsafe_ptr=0;
  uint64_t __t1513t__unsafe_size=0;
  uint16_t __t1513t__unsafe_offset=0;
  uint16_t __t1513t__unsafe_align=0;
  char* __t1514t__unsafe_ptr=0;
  uint64_t __t1514t__unsafe_size=0;
  uint16_t __t1514t__unsafe_offset=0;
  uint16_t __t1514t__unsafe_align=0;
  char* buf1__unsafe_ptr=0;
  uint64_t buf1__unsafe_size=0;
  uint16_t buf1__unsafe_offset=0;
  uint16_t buf1__unsafe_align=0;
  uint64_t __t1515t=0;
  char* __t1516t__unsafe_ptr=0;
  uint64_t __t1516t__unsafe_size=0;
  uint16_t __t1516t__unsafe_offset=0;
  uint16_t __t1516t__unsafe_align=0;
  char __t1517t____t518t__=0;
  uint64_t __t1518t=0;
  char* __t1519t__unsafe_ptr=0;
  uint64_t __t1519t__unsafe_size=0;
  uint16_t __t1519t__unsafe_offset=0;
  uint16_t __t1519t__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  uint64_t buf2__unsafe_size=0;
  uint16_t buf2__unsafe_offset=0;
  uint16_t buf2__unsafe_align=0;
  uint64_t __t1520t=0;
  char* __t1521t__=0;
  double __t1522t=0;
  uint64_t __t1523t__=0;
  uint64_t __t1525t__=0;
  uint64_t __t1527t=0;
  char* __t1528t__=0;
  double __t1529t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t1511t(&__t1513t__unsafe_ptr,&__t1513t__unsafe_size,&__t1513t__unsafe_offset,&__t1513t__unsafe_align);
  __t1514t__unsafe_ptr=__t1513t__unsafe_ptr;
  __t1514t__unsafe_size=__t1513t__unsafe_size;
  __t1514t__unsafe_offset=__t1513t__unsafe_offset;
  __t1514t__unsafe_align=__t1513t__unsafe_align;
  __t1515t=20;
  __t_errcode=alloc__t516t(&__t1514t__unsafe_ptr,&__t1514t__unsafe_size,&__t1514t__unsafe_offset,&__t1514t__unsafe_align,__t1515t,&__t1516t__unsafe_ptr,&__t1516t__unsafe_size,&__t1516t__unsafe_offset,&__t1516t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1518t=10;
  __t_errcode=resize__t564t(&__t1514t__unsafe_ptr,&__t1514t__unsafe_size,&__t1514t__unsafe_offset,&__t1514t__unsafe_align,__t1518t,&__t1519t__unsafe_ptr,&__t1519t__unsafe_size,&__t1519t__unsafe_offset,&__t1519t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1520t=0;
  __t_errcode=mutget__t591t(&__t1514t__unsafe_ptr,&__t1514t__unsafe_size,&__t1514t__unsafe_offset,&__t1514t__unsafe_align,__t1520t,&__t1521t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1522t=1.0;
  if(!__t1521t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1521t__,&__t1522t,8);
  len__t605t(__t1514t__unsafe_ptr,__t1514t__unsafe_size,__t1514t__unsafe_offset,__t1514t__unsafe_align,&__t1523t__);
  print__t389t(__t1514t__unsafe_size);
  len__t605t(__t1514t__unsafe_ptr,__t1514t__unsafe_size,__t1514t__unsafe_offset,__t1514t__unsafe_align,&__t1525t__);
  print__t389t(__t1514t__unsafe_size);
  __t1527t=0;
  __t_errcode=get__t598t(__t1514t__unsafe_ptr,__t1514t__unsafe_size,__t1514t__unsafe_offset,__t1514t__unsafe_align,__t1527t,&__t1528t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1528t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1529t__number,__t1528t__,8);
  print__t381t(__t1529t__number);
  
  __t_failure:exists__t443t(__t1516t__unsafe_ptr,&__t1517t____t518t__);
  if(__t1517t____t518t__){
  free__t509t(&__t1516t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1509t();return 0;}