#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1501t="... and goodbye for now.";
const char* const __t377t="\n";
const char* const __t1496t="hello world!";
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

static inline __attribute__((always_inline)) void range__t467t(uint64_t to, uint64_t* __t1507t, uint64_t* __t1508t) {
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
  *__t1507t=from;
  *__t1508t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1509t) {
  int value=0;
  *__t1509t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1510t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1510t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1511t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1511t=__t96t__;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1512t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1512t=z;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1513t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1513t=z;
}

static inline __attribute__((always_inline)) int get__t483t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t1514t) {
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
  *__t1514t=pos;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t388t(uint64_t value) {
  int __t389t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr____buffer__t1499t(char** __t1515t, uint64_t* __t1516t, uint16_t* __t1517t, uint16_t* __t1518t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1515t=unsafe_ptr;
  *__t1516t=unsafe_size;
  *__t1517t=unsafe_offset;
  *__t1518t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t1519t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1519t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t1520t) {
  char* allocated=*__t1520t;
  if(allocated){
  free(allocated);
  }
  *__t1520t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1521t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1521t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1522t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1522t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1523t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1523t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1524t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1524t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1525t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1525t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t1526t) {
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
  *__t1526t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t1527t, uint64_t* __t1528t, uint16_t* __t1529t, uint16_t* __t1530t, uint64_t size, char** __t1531t, uint64_t* __t1532t, uint16_t* __t1533t, uint16_t* __t1534t) {
  char* buffer__unsafe_ptr=*__t1527t;
  uint64_t buffer__unsafe_size=*__t1528t;
  uint16_t buffer__unsafe_offset=*__t1529t;
  uint16_t buffer__unsafe_align=*__t1530t;
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
  *__t1527t=buffer__unsafe_ptr;
  *__t1528t=buffer__unsafe_size;
  *__t1529t=buffer__unsafe_offset;
  *__t1530t=buffer__unsafe_align;
  *__t1531t=buffer__unsafe_ptr;
  *__t1532t=buffer__unsafe_size;
  *__t1533t=buffer__unsafe_offset;
  *__t1534t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1535t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1535t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1536t) {
  *__t1536t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1537t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1537t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1538t) {
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
  *__t1538t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t375t(const char* value) {
  int __t376t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t1482t(char* sentences__unsafe_ptr, uint64_t sentences__unsafe_size, uint16_t sentences__unsafe_offset, uint16_t sentences__unsafe_align) {
  uint64_t __t1483t=0;
  char __t1484t=0;
  char* __t1485t__=0;
  const char* __t1486t__value__cstr=0;
  const char* sentence=0;
  int __t_complain=0;
  __t1483t=0;
  while(1){
  __t_complain=get__t597t(sentences__unsafe_ptr,sentences__unsafe_size,sentences__unsafe_offset,sentences__unsafe_align,__t1483t,&__t1485t__);
  __t1484t=__t_complain;
  if(!__t1485t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t1486t__value__cstr,__t1485t__,8);
  }
  sentence=__t1486t__value__cstr;
  __t1484t=__t1484t==0;
  __t1483t=__t1483t+1;
  if(!__t1484t){
  break;
  }
  print__t375t(sentence);
  }
}

static inline __attribute__((always_inline)) int main__t1488t() {
  uint64_t __t1490t=0;
  uint64_t __t1491t=0;
  uint64_t __t1492t__from=0;
  uint64_t __t1492t__to=0;
  char __t1493t=0;
  uint64_t __t1494t__=0;
  uint64_t i=0;
  char* __t1502t__unsafe_ptr=0;
  uint64_t __t1502t__unsafe_size=0;
  uint16_t __t1502t__unsafe_offset=0;
  uint16_t __t1502t__unsafe_align=0;
  uint64_t __t1503t=0;
  char* __t1504t__unsafe_ptr=0;
  uint64_t __t1504t__unsafe_size=0;
  uint16_t __t1504t__unsafe_offset=0;
  uint16_t __t1504t__unsafe_align=0;
  char __t1505t____t517t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t1491t=10;
  range__t467t(__t1491t,&__t1492t__from,&__t1492t__to);
  __t1490t=0;
  while(1){
  __t_complain=get__t483t(__t1492t__from,__t1492t__to,__t1490t,&__t1494t__);
  __t1493t=__t_complain;
  i=__t1494t__;
  __t1493t=__t1493t==0;
  __t1490t=__t1490t+1;
  if(!__t1493t){
  break;
  }
  print__t388t(i);
  }
  cstr____buffer__t1499t(&__t1502t__unsafe_ptr,&__t1502t__unsafe_size,&__t1502t__unsafe_offset,&__t1502t__unsafe_align);
  __t1503t=2;
  __t_errcode=alloc__t515t(&__t1502t__unsafe_ptr,&__t1502t__unsafe_size,&__t1502t__unsafe_offset,&__t1502t__unsafe_align,__t1503t,&__t1504t__unsafe_ptr,&__t1504t__unsafe_size,&__t1504t__unsafe_offset,&__t1504t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1502t__unsafe_ptr,&__t1496t,8);
  memcpy(__t1502t__unsafe_ptr+8,&__t1501t,8);
  print__t1482t(__t1502t__unsafe_ptr,__t1502t__unsafe_size,__t1502t__unsafe_offset,__t1502t__unsafe_align);
  
  __t_failure:exists__t442t(__t1504t__unsafe_ptr,&__t1505t____t517t__);
  if(__t1505t____t517t__){
  free__t508t(&__t1504t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1488t();return 0;}