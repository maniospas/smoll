#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1483t="hello world!";
const char* const __t1488t="... and goodbye for now.";
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

static inline __attribute__((always_inline)) void range__t467t(uint64_t to, uint64_t* __t1494t, uint64_t* __t1495t) {
  int __t468t=0;
  uint64_t __t469t=0;
  uint64_t _from=0;
  uint64_t __t470t=0;
  uint64_t from=0;
  __t469t=0;
  _from=__t469t;
  __t470t=_from;
  from=__t470t;
  goto __t_return;
  __t_return:
  *__t1494t=from;
  *__t1495t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1496t) {
  int value=0;
  *__t1496t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1497t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1497t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1498t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1498t=__t96t__;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1499t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1499t=z;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1500t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1500t=z;
}

static inline __attribute__((always_inline)) int get__t483t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t1501t) {
  char __t484t__=0;
  char __t485t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(pos,r__to,&__t484t__);
  if(__t484t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t251t(pos,r__from,&__t485t__);
  if(__t485t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1501t=pos;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t388t(uint64_t value) {
  int __t389t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr____buffer__t1486t(char** __t1502t, uint64_t* __t1503t, uint16_t* __t1504t, uint16_t* __t1505t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1502t=unsafe_ptr;
  *__t1503t=unsafe_size;
  *__t1504t=unsafe_offset;
  *__t1505t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t1506t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1506t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t1507t) {
  char* allocated=*__t1507t;
  if(allocated){
  free(allocated);
  }
  *__t1507t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1508t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1508t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1509t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1509t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1510t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1510t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1511t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1511t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1512t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1512t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t1513t) {
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
  *__t1513t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t1514t, uint64_t* __t1515t, uint16_t* __t1516t, uint16_t* __t1517t, uint64_t size, char** __t1518t, uint64_t* __t1519t, uint16_t* __t1520t, uint16_t* __t1521t) {
  char* buffer__unsafe_ptr=*__t1514t;
  uint64_t buffer__unsafe_size=*__t1515t;
  uint16_t buffer__unsafe_offset=*__t1516t;
  uint16_t buffer__unsafe_align=*__t1517t;
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
  *__t1514t=buffer__unsafe_ptr;
  *__t1515t=buffer__unsafe_size;
  *__t1516t=buffer__unsafe_offset;
  *__t1517t=buffer__unsafe_align;
  *__t1518t=buffer__unsafe_ptr;
  *__t1519t=buffer__unsafe_size;
  *__t1520t=buffer__unsafe_offset;
  *__t1521t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1522t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1522t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1523t) {
  *__t1523t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1524t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1524t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1525t) {
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
  *__t1525t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t375t(const char* value) {
  int __t376t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t1469t(char* sentences__unsafe_ptr, uint64_t sentences__unsafe_size, uint16_t sentences__unsafe_offset, uint16_t sentences__unsafe_align) {
  uint64_t __t1470t=0;
  char __t1471t=0;
  char* __t1472t__=0;
  const char* __t1473t__value__cstr=0;
  const char* sentence=0;
  int __t_complain=0;
  __t1470t=0;
  while(1){
  __t_complain=get__t597t(sentences__unsafe_ptr,sentences__unsafe_size,sentences__unsafe_offset,sentences__unsafe_align,__t1470t,&__t1472t__);
  __t1471t=__t_complain;
  if(!__t1472t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t1473t__value__cstr,__t1472t__,8);
  }
  sentence=__t1473t__value__cstr;
  __t1471t=__t1471t==0;
  __t1470t=__t1470t+1;
  if(!__t1471t){
  break;
  }
  print__t375t(sentence);
  }
}

static inline __attribute__((always_inline)) int main__t1475t() {
  uint64_t __t1477t=0;
  uint64_t __t1478t=0;
  uint64_t __t1479t__from=0;
  uint64_t __t1479t__to=0;
  char __t1480t=0;
  uint64_t __t1481t__=0;
  uint64_t i=0;
  char* __t1489t__unsafe_ptr=0;
  uint64_t __t1489t__unsafe_size=0;
  uint16_t __t1489t__unsafe_offset=0;
  uint16_t __t1489t__unsafe_align=0;
  uint64_t __t1490t=0;
  char* __t1491t__unsafe_ptr=0;
  uint64_t __t1491t__unsafe_size=0;
  uint16_t __t1491t__unsafe_offset=0;
  uint16_t __t1491t__unsafe_align=0;
  char __t1492t____t517t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t1478t=10;
  range__t467t(__t1478t,&__t1479t__from,&__t1479t__to);
  __t1477t=0;
  while(1){
  __t_complain=get__t483t(__t1479t__from,__t1479t__to,__t1477t,&__t1481t__);
  __t1480t=__t_complain;
  i=__t1481t__;
  __t1480t=__t1480t==0;
  __t1477t=__t1477t+1;
  if(!__t1480t){
  break;
  }
  print__t388t(i);
  }
  cstr____buffer__t1486t(&__t1489t__unsafe_ptr,&__t1489t__unsafe_size,&__t1489t__unsafe_offset,&__t1489t__unsafe_align);
  __t1490t=2;
  __t_errcode=alloc__t515t(&__t1489t__unsafe_ptr,&__t1489t__unsafe_size,&__t1489t__unsafe_offset,&__t1489t__unsafe_align,__t1490t,&__t1491t__unsafe_ptr,&__t1491t__unsafe_size,&__t1491t__unsafe_offset,&__t1491t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1489t__unsafe_ptr,&__t1483t,8);
  memcpy(__t1489t__unsafe_ptr+8,&__t1488t,8);
  print__t1469t(__t1489t__unsafe_ptr,__t1489t__unsafe_size,__t1489t__unsafe_offset,__t1489t__unsafe_align);
  
  __t_failure:exists__t442t(__t1491t__unsafe_ptr,&__t1492t____t517t__);
  if(__t1492t____t517t__){
  free__t508t(&__t1491t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1475t();return 0;}