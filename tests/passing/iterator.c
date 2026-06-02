#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1525t="hello world!";
const char* const __t1530t="... and goodbye for now.";
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

static inline __attribute__((always_inline)) void range__t468t(uint64_t to, uint64_t* __t1536t, uint64_t* __t1537t) {
  int __t469t=0;
  uint64_t __t470t=0;
  uint64_t _from=0;
  uint64_t __t471t=0;
  uint64_t from=0;
  __t470t=0;
  _from=__t470t;
  __t471t=_from;
  from=__t471t;
  goto __t_return;
  __t_return:
  *__t1536t=from;
  *__t1537t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1538t) {
  int value=0;
  *__t1538t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1539t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1539t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1540t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1540t=__t97t__;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1541t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1541t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1542t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1542t=z;
}

static inline __attribute__((always_inline)) int get__t484t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t1543t) {
  char __t485t__=0;
  char __t486t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,r__to,&__t485t__);
  if(__t485t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t252t(pos,r__from,&__t486t__);
  if(__t486t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1543t=pos;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t389t(uint64_t value) {
  int __t390t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr____buffer__t1528t(char** __t1544t, uint64_t* __t1545t, uint16_t* __t1546t, uint16_t* __t1547t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1544t=unsafe_ptr;
  *__t1545t=unsafe_size;
  *__t1546t=unsafe_offset;
  *__t1547t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t1548t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1548t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t1549t) {
  char* allocated=*__t1549t;
  if(allocated){
  free(allocated);
  }
  *__t1549t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1550t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1550t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1551t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1551t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t1552t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1552t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1553t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1553t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1554t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1554t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t1555t) {
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
  *__t1555t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t1556t, uint64_t* __t1557t, uint16_t* __t1558t, uint16_t* __t1559t, uint64_t size, char** __t1560t, uint64_t* __t1561t, uint16_t* __t1562t, uint16_t* __t1563t) {
  char* buffer__unsafe_ptr=*__t1556t;
  uint64_t buffer__unsafe_size=*__t1557t;
  uint16_t buffer__unsafe_offset=*__t1558t;
  uint16_t buffer__unsafe_align=*__t1559t;
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
  *__t1556t=buffer__unsafe_ptr;
  *__t1557t=buffer__unsafe_size;
  *__t1558t=buffer__unsafe_offset;
  *__t1559t=buffer__unsafe_align;
  *__t1560t=buffer__unsafe_ptr;
  *__t1561t=buffer__unsafe_size;
  *__t1562t=buffer__unsafe_offset;
  *__t1563t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1564t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1564t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1565t) {
  *__t1565t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t1566t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t1566t=__t512t__;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1567t) {
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
  *__t1567t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t376t(const char* value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t1511t(char* sentences__unsafe_ptr, uint64_t sentences__unsafe_size, uint16_t sentences__unsafe_offset, uint16_t sentences__unsafe_align) {
  uint64_t __t1512t=0;
  char __t1513t=0;
  char* __t1514t__=0;
  const char* __t1515t__value__cstr=0;
  const char* sentence=0;
  int __t_complain=0;
  __t1512t=0;
  while(1){
  __t_complain=get__t598t(sentences__unsafe_ptr,sentences__unsafe_size,sentences__unsafe_offset,sentences__unsafe_align,__t1512t,&__t1514t__);
  __t1513t=__t_complain;
  if(!__t1514t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t1515t__value__cstr,__t1514t__,8);
  }
  sentence=__t1515t__value__cstr;
  __t1513t=__t1513t==0;
  __t1512t=__t1512t+1;
  if(!__t1513t){
  break;
  }
  print__t376t(sentence);
  }
}

static inline __attribute__((always_inline)) int main__t1517t() {
  uint64_t __t1519t=0;
  uint64_t __t1520t=0;
  uint64_t __t1521t__from=0;
  uint64_t __t1521t__to=0;
  char __t1522t=0;
  uint64_t __t1523t__=0;
  uint64_t i=0;
  char* __t1531t__unsafe_ptr=0;
  uint64_t __t1531t__unsafe_size=0;
  uint16_t __t1531t__unsafe_offset=0;
  uint16_t __t1531t__unsafe_align=0;
  uint64_t __t1532t=0;
  char* __t1533t__unsafe_ptr=0;
  uint64_t __t1533t__unsafe_size=0;
  uint16_t __t1533t__unsafe_offset=0;
  uint16_t __t1533t__unsafe_align=0;
  char __t1534t____t518t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t1520t=10;
  range__t468t(__t1520t,&__t1521t__from,&__t1521t__to);
  __t1519t=0;
  while(1){
  __t_complain=get__t484t(__t1521t__from,__t1521t__to,__t1519t,&__t1523t__);
  __t1522t=__t_complain;
  i=__t1523t__;
  __t1522t=__t1522t==0;
  __t1519t=__t1519t+1;
  if(!__t1522t){
  break;
  }
  print__t389t(i);
  }
  cstr____buffer__t1528t(&__t1531t__unsafe_ptr,&__t1531t__unsafe_size,&__t1531t__unsafe_offset,&__t1531t__unsafe_align);
  __t1532t=2;
  __t_errcode=alloc__t516t(&__t1531t__unsafe_ptr,&__t1531t__unsafe_size,&__t1531t__unsafe_offset,&__t1531t__unsafe_align,__t1532t,&__t1533t__unsafe_ptr,&__t1533t__unsafe_size,&__t1533t__unsafe_offset,&__t1533t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1531t__unsafe_ptr,&__t1525t,8);
  memcpy(__t1531t__unsafe_ptr+8,&__t1530t,8);
  print__t1511t(__t1531t__unsafe_ptr,__t1531t__unsafe_size,__t1531t__unsafe_offset,__t1531t__unsafe_align);
  
  __t_failure:exists__t443t(__t1533t__unsafe_ptr,&__t1534t____t518t__);
  if(__t1534t____t518t__){
  free__t509t(&__t1533t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1517t();return 0;}