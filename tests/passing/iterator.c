#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1487t="... and goodbye for now.";
const char* const __t1482t="hello world!";
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

static inline __attribute__((always_inline)) void range__t464t(uint64_t to, uint64_t* __t1493t, uint64_t* __t1494t) {
  int __t465t=0;
  uint64_t __t466t=0;
  uint64_t _from=0;
  uint64_t __t467t=0;
  uint64_t from=0;
  __t466t=0;
  _from=__t466t;
  __t467t=_from;
  from=__t467t;
  goto __t_return;
  __t_return:
  *__t1493t=from;
  *__t1494t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1495t) {
  int value=0;
  *__t1495t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1496t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1496t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1497t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1497t=__t96t__;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1498t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1498t=z;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1499t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1499t=z;
}

static inline __attribute__((always_inline)) int get__t480t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t1500t) {
  char __t481t__=0;
  char __t482t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(pos,r__to,&__t481t__);
  if(__t481t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t251t(pos,r__from,&__t482t__);
  if(__t482t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1500t=pos;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(uint64_t value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr____buffer__t1485t(char** __t1501t, uint64_t* __t1502t, uint16_t* __t1503t, uint16_t* __t1504t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1501t=unsafe_ptr;
  *__t1502t=unsafe_size;
  *__t1503t=unsafe_offset;
  *__t1504t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t1505t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1505t=z;
}

static inline __attribute__((always_inline)) void free__t505t(char** __t1506t) {
  char* allocated=*__t1506t;
  if(allocated){
  free(allocated);
  }
  *__t1506t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1507t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1507t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1508t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1508t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t1509t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1509t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1510t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1510t=z;
}

static inline __attribute__((always_inline)) void zero__t506t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1511t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1511t=z;
}

static inline __attribute__((always_inline)) int alloc__t498t(uint64_t bytes, char** __t1512t) {
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
  *__t1512t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t512t(char** __t1513t, uint64_t* __t1514t, uint16_t* __t1515t, uint16_t* __t1516t, uint64_t size, char** __t1517t, uint64_t* __t1518t, uint16_t* __t1519t, uint16_t* __t1520t) {
  char* buffer__unsafe_ptr=*__t1513t;
  uint64_t buffer__unsafe_size=*__t1514t;
  uint16_t buffer__unsafe_offset=*__t1515t;
  uint16_t buffer__unsafe_align=*__t1516t;
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
  *__t1513t=buffer__unsafe_ptr;
  *__t1514t=buffer__unsafe_size;
  *__t1515t=buffer__unsafe_offset;
  *__t1516t=buffer__unsafe_align;
  *__t1517t=buffer__unsafe_ptr;
  *__t1518t=buffer__unsafe_size;
  *__t1519t=buffer__unsafe_offset;
  *__t1520t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1521t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1521t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1522t) {
  *__t1522t=to;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t1523t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t1523t=__t508t__;
}

static inline __attribute__((always_inline)) int get__t594t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1524t) {
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
  *__t1524t=__t600t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t372t(const char* value) {
  int __t373t=0;
  const char* endl=0;
  endl=__t374t;
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
  __t_complain=get__t594t(sentences__unsafe_ptr,sentences__unsafe_size,sentences__unsafe_offset,sentences__unsafe_align,__t1470t,&__t1472t__);
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
  print__t372t(sentence);
  }
}

static inline __attribute__((always_inline)) int main__t1475t() {
  uint64_t __t1476t=0;
  uint64_t __t1477t=0;
  uint64_t __t1478t__from=0;
  uint64_t __t1478t__to=0;
  char __t1479t=0;
  uint64_t __t1480t__=0;
  uint64_t i=0;
  char* __t1488t__unsafe_ptr=0;
  uint64_t __t1488t__unsafe_size=0;
  uint16_t __t1488t__unsafe_offset=0;
  uint16_t __t1488t__unsafe_align=0;
  uint64_t __t1489t=0;
  char* __t1490t__unsafe_ptr=0;
  uint64_t __t1490t__unsafe_size=0;
  uint16_t __t1490t__unsafe_offset=0;
  uint16_t __t1490t__unsafe_align=0;
  char __t1491t____t514t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1477t=10;
  range__t464t(__t1477t,&__t1478t__from,&__t1478t__to);
  __t1476t=0;
  while(1){
  __t_complain=get__t480t(__t1478t__from,__t1478t__to,__t1476t,&__t1480t__);
  __t1479t=__t_complain;
  i=__t1480t__;
  __t1479t=__t1479t==0;
  __t1476t=__t1476t+1;
  if(!__t1479t){
  break;
  }
  print__t385t(i);
  }
  cstr____buffer__t1485t(&__t1488t__unsafe_ptr,&__t1488t__unsafe_size,&__t1488t__unsafe_offset,&__t1488t__unsafe_align);
  __t1489t=2;
  __t_errcode=alloc__t512t(&__t1488t__unsafe_ptr,&__t1488t__unsafe_size,&__t1488t__unsafe_offset,&__t1488t__unsafe_align,__t1489t,&__t1490t__unsafe_ptr,&__t1490t__unsafe_size,&__t1490t__unsafe_offset,&__t1490t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1488t__unsafe_ptr,&__t1482t,8);
  memcpy(__t1488t__unsafe_ptr+8,&__t1487t,8);
  print__t1469t(__t1488t__unsafe_ptr,__t1488t__unsafe_size,__t1488t__unsafe_offset,__t1488t__unsafe_align);
  
  __t_failure:exists__t439t(__t1490t__unsafe_ptr,&__t1491t____t514t__);
  if(__t1491t____t514t__){
  free__t505t(&__t1490t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1475t();return 0;}