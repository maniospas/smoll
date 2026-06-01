#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1468t(char** __t1491t, uint64_t* __t1492t, uint16_t* __t1493t, uint16_t* __t1494t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1491t=unsafe_ptr;
  *__t1492t=unsafe_size;
  *__t1493t=unsafe_offset;
  *__t1494t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t1495t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1495t=z;
}

static inline __attribute__((always_inline)) void free__t505t(char** __t1496t) {
  char* allocated=*__t1496t;
  if(allocated){
  free(allocated);
  }
  *__t1496t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1497t) {
  int value=0;
  *__t1497t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1498t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1498t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1499t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1499t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1500t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1500t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1501t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1501t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t1502t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1502t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1503t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1503t=z;
}

static inline __attribute__((always_inline)) void zero__t506t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1504t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1504t=z;
}

static inline __attribute__((always_inline)) int alloc__t498t(uint64_t bytes, char** __t1505t) {
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
  *__t1505t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t512t(char** __t1506t, uint64_t* __t1507t, uint16_t* __t1508t, uint16_t* __t1509t, uint64_t size, char** __t1510t, uint64_t* __t1511t, uint16_t* __t1512t, uint16_t* __t1513t) {
  char* buffer__unsafe_ptr=*__t1506t;
  uint64_t buffer__unsafe_size=*__t1507t;
  uint16_t buffer__unsafe_offset=*__t1508t;
  uint16_t buffer__unsafe_align=*__t1509t;
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
  *__t1506t=buffer__unsafe_ptr;
  *__t1507t=buffer__unsafe_size;
  *__t1508t=buffer__unsafe_offset;
  *__t1509t=buffer__unsafe_align;
  *__t1510t=buffer__unsafe_ptr;
  *__t1511t=buffer__unsafe_size;
  *__t1512t=buffer__unsafe_offset;
  *__t1513t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t601t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1514t) {
  goto __t_return;
  __t_return:
  *__t1514t=buffer__unsafe_size;
}

int list__t602t(char** __t1515t, uint64_t* __t1516t, uint16_t* __t1517t, uint16_t* __t1518t, char** __t1519t, uint64_t* __t1520t, uint16_t* __t1521t, uint16_t* __t1522t, uint64_t* __t1523t) {
  char* _buffer__unsafe_ptr=*__t1515t;
  uint64_t _buffer__unsafe_size=*__t1516t;
  uint16_t _buffer__unsafe_offset=*__t1517t;
  uint16_t _buffer__unsafe_align=*__t1518t;
  uint64_t __t603t=0;
  char* __t604t__unsafe_ptr=0;
  uint64_t __t604t__unsafe_size=0;
  uint16_t __t604t__unsafe_offset=0;
  uint16_t __t604t__unsafe_align=0;
  char __t605t____t514t__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __t606t__=0;
  uint64_t __t607t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t603t=1;
  __t_errcode=alloc__t512t(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__t603t,&__t604t__unsafe_ptr,&__t604t__unsafe_size,&__t604t__unsafe_offset,&__t604t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t604t__unsafe_ptr;
  buffer__unsafe_size=__t604t__unsafe_size;
  buffer__unsafe_offset=__t604t__unsafe_offset;
  buffer__unsafe_align=__t604t__unsafe_align;
  len__t601t(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__t606t__);
  __t607t=__t606t__;
  length=__t607t;
  goto __t_return;
  
  __t_failure:exists__t439t(buffer__unsafe_ptr,&__t605t____t514t__);
  if(__t605t____t514t__){
  free__t505t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1515t=_buffer__unsafe_ptr;
  *__t1516t=_buffer__unsafe_size;
  *__t1517t=_buffer__unsafe_offset;
  *__t1518t=_buffer__unsafe_align;
  *__t1519t=buffer__unsafe_ptr;
  *__t1520t=buffer__unsafe_size;
  *__t1521t=buffer__unsafe_offset;
  *__t1522t=buffer__unsafe_align;
  *__t1523t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1524t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1524t=z;
}

static inline __attribute__((always_inline)) int div__t224t(uint64_t x, uint64_t y, uint64_t* __t1525t) {
  int __t225t__=0;
  uint64_t zero=0;
  char __t226t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t225t__);
  zero=0;
  eq__t119t(y,zero,&__t226t__);
  if(__t226t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1525t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1526t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1526t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1527t) {
  *__t1527t=to;
}

static inline __attribute__((always_inline)) int realloc__t501t(char* allocated, uint64_t bytes, char** __t1528t) {
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
  *__t1528t=__t504t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1529t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1529t=z;
}

static inline __attribute__((always_inline)) int resize__t560t(char** __t1530t, uint64_t* __t1531t, uint16_t* __t1532t, uint16_t* __t1533t, uint64_t size, char** __t1534t, uint64_t* __t1535t, uint16_t* __t1536t, uint16_t* __t1537t) {
  char* buffer__unsafe_ptr=*__t1530t;
  uint64_t buffer__unsafe_size=*__t1531t;
  uint16_t buffer__unsafe_offset=*__t1532t;
  uint16_t buffer__unsafe_align=*__t1533t;
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
  *__t1530t=buffer__unsafe_ptr;
  *__t1531t=buffer__unsafe_size;
  *__t1532t=buffer__unsafe_offset;
  *__t1533t=buffer__unsafe_align;
  *__t1534t=buffer__unsafe_ptr;
  *__t1535t=buffer__unsafe_size;
  *__t1536t=buffer__unsafe_offset;
  *__t1537t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t1538t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t1538t=__t508t__;
}

static inline __attribute__((always_inline)) int mutget__t587t(char** __t1539t, uint64_t* __t1540t, uint16_t* __t1541t, uint16_t* __t1542t, uint64_t i, char** __t1543t) {
  char* buffer__unsafe_ptr=*__t1539t;
  uint64_t buffer__unsafe_size=*__t1540t;
  uint16_t buffer__unsafe_offset=*__t1541t;
  uint16_t buffer__unsafe_align=*__t1542t;
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
  *__t1539t=buffer__unsafe_ptr;
  *__t1540t=buffer__unsafe_size;
  *__t1541t=buffer__unsafe_offset;
  *__t1542t=buffer__unsafe_align;
  *__t1543t=__t593t__;
  
  return __t_errcode;
}

int push__t615t(char** __t1544t, uint64_t* __t1545t, uint16_t* __t1546t, uint16_t* __t1547t, uint64_t* __t1548t, char** __t1549t) {
  char* l__buffer__unsafe_ptr=*__t1544t;
  uint64_t l__buffer__unsafe_size=*__t1545t;
  uint16_t l__buffer__unsafe_offset=*__t1546t;
  uint16_t l__buffer__unsafe_align=*__t1547t;
  uint64_t l__length=*__t1548t;
  uint64_t prev_length=0;
  uint64_t __t616t__=0;
  char __t617t__=0;
  uint64_t __t618t=0;
  uint64_t __t619t__=0;
  uint64_t __t620t=0;
  uint64_t __t621t__=0;
  uint64_t __t622t__=0;
  char* __t623t__unsafe_ptr=0;
  uint64_t __t623t__unsafe_size=0;
  uint16_t __t623t__unsafe_offset=0;
  uint16_t __t623t__unsafe_align=0;
  uint64_t __t624t=0;
  uint64_t __t625t__=0;
  char* __t626t__=0;
  char* val=0;
  int __t_errcode=0;
  int __t_complain=0;
  prev_length=l__length;
  len__t601t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,&__t616t__);
  ge__t323t(prev_length,__t616t__,&__t617t__);
  if(__t617t__){
  __t618t=2;
  __t_errcode=div__t224t(prev_length,__t618t,&__t619t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t620t=1;
  add__t174t(__t619t__,__t620t,&__t621t__);
  add__t174t(prev_length,__t621t__,&__t622t__);
  __t_errcode=resize__t560t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,__t622t__,&__t623t__unsafe_ptr,&__t623t__unsafe_size,&__t623t__unsafe_offset,&__t623t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  l__buffer__unsafe_ptr=__t623t__unsafe_ptr;
  l__buffer__unsafe_size=__t623t__unsafe_size;
  l__buffer__unsafe_offset=__t623t__unsafe_offset;
  l__buffer__unsafe_align=__t623t__unsafe_align;
  }
  __t624t=1;
  add__t174t(prev_length,__t624t,&__t625t__);
  l__length=__t625t__;
  __t_errcode=mutget__t587t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,prev_length,&__t626t__);
  if(__t_errcode){
  goto __t_failure;
  }
  val=__t626t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1544t=l__buffer__unsafe_ptr;
  *__t1545t=l__buffer__unsafe_size;
  *__t1546t=l__buffer__unsafe_offset;
  *__t1547t=l__buffer__unsafe_align;
  *__t1548t=l__length;
  *__t1549t=val;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t612t(char** __t1550t, uint64_t* __t1551t, uint16_t* __t1552t, uint16_t* __t1553t, uint64_t* __t1554t, uint64_t pos, char** __t1555t) {
  char* l__buffer__unsafe_ptr=*__t1550t;
  uint64_t l__buffer__unsafe_size=*__t1551t;
  uint16_t l__buffer__unsafe_offset=*__t1552t;
  uint16_t l__buffer__unsafe_align=*__t1553t;
  uint64_t l__length=*__t1554t;
  char __t613t__=0;
  char* __t614t__=0;
  char* ret=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(pos,l__length,&__t613t__);
  if(__t613t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=mutget__t587t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,pos,&__t614t__);
  if(__t_errcode){
  goto __t_failure;
  }
  ret=__t614t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1550t=l__buffer__unsafe_ptr;
  *__t1551t=l__buffer__unsafe_size;
  *__t1552t=l__buffer__unsafe_offset;
  *__t1553t=l__buffer__unsafe_align;
  *__t1554t=l__length;
  *__t1555t=ret;
  
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

static inline __attribute__((always_inline)) int get__t609t(char* l__buffer__unsafe_ptr, uint64_t l__buffer__unsafe_size, uint16_t l__buffer__unsafe_offset, uint16_t l__buffer__unsafe_align, uint64_t l__length, uint64_t pos, char** __t1557t) {
  char __t610t__=0;
  char* __t611t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(pos,l__length,&__t610t__);
  if(__t610t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=get__t594t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,pos,&__t611t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1557t=__t611t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t377t(double value) {
  int __t378t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1467t() {
  char* __t1470t__unsafe_ptr=0;
  uint64_t __t1470t__unsafe_size=0;
  uint16_t __t1470t__unsafe_offset=0;
  uint16_t __t1470t__unsafe_align=0;
  char* __t1471t__unsafe_ptr=0;
  uint64_t __t1471t__unsafe_size=0;
  uint16_t __t1471t__unsafe_offset=0;
  uint16_t __t1471t__unsafe_align=0;
  char* __t1472t__buffer__unsafe_ptr=0;
  uint64_t __t1472t__buffer__unsafe_size=0;
  uint16_t __t1472t__buffer__unsafe_offset=0;
  uint16_t __t1472t__buffer__unsafe_align=0;
  uint64_t __t1472t__length=0;
  char __t1473t____t605t____t514t__=0;
  char* li__buffer__unsafe_ptr=0;
  uint64_t li__buffer__unsafe_size=0;
  uint16_t li__buffer__unsafe_offset=0;
  uint16_t li__buffer__unsafe_align=0;
  uint64_t li__length=0;
  char* __t1474t__=0;
  double __t1475t=0;
  char* __t1476t__=0;
  double __t1477t=0;
  char* __t1478t__=0;
  double __t1479t=0;
  uint64_t __t1480t=0;
  char* __t1481t__=0;
  double __t1482t=0;
  uint64_t __t1483t=0;
  char* __t1484t__=0;
  double __t1485t__number=0;
  uint64_t __t1487t=0;
  char* __t1488t__=0;
  double __t1489t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1468t(&__t1470t__unsafe_ptr,&__t1470t__unsafe_size,&__t1470t__unsafe_offset,&__t1470t__unsafe_align);
  __t1471t__unsafe_ptr=__t1470t__unsafe_ptr;
  __t1471t__unsafe_size=__t1470t__unsafe_size;
  __t1471t__unsafe_offset=__t1470t__unsafe_offset;
  __t1471t__unsafe_align=__t1470t__unsafe_align;
  __t_errcode=list__t602t(&__t1471t__unsafe_ptr,&__t1471t__unsafe_size,&__t1471t__unsafe_offset,&__t1471t__unsafe_align,&__t1472t__buffer__unsafe_ptr,&__t1472t__buffer__unsafe_size,&__t1472t__buffer__unsafe_offset,&__t1472t__buffer__unsafe_align,&__t1472t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=push__t615t(&__t1471t__unsafe_ptr,&__t1471t__unsafe_size,&__t1471t__unsafe_offset,&__t1471t__unsafe_align,&__t1471t__unsafe_size,&__t1474t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1475t=0.1;
  if(!__t1474t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1474t__,&__t1475t,8);
  __t_errcode=push__t615t(&__t1471t__unsafe_ptr,&__t1471t__unsafe_size,&__t1471t__unsafe_offset,&__t1471t__unsafe_align,&__t1471t__unsafe_size,&__t1476t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1477t=0.1;
  if(!__t1476t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1476t__,&__t1477t,8);
  __t_errcode=push__t615t(&__t1471t__unsafe_ptr,&__t1471t__unsafe_size,&__t1471t__unsafe_offset,&__t1471t__unsafe_align,&__t1471t__unsafe_size,&__t1478t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1479t=0.1;
  if(!__t1478t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1478t__,&__t1479t,8);
  __t1480t=1;
  __t_errcode=mutget__t612t(&__t1471t__unsafe_ptr,&__t1471t__unsafe_size,&__t1471t__unsafe_offset,&__t1471t__unsafe_align,&__t1471t__unsafe_size,__t1480t,&__t1481t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1482t=0.2;
  if(!__t1481t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1481t__,&__t1482t,8);
  __t1483t=0;
  __t_errcode=get__t609t(__t1471t__unsafe_ptr,__t1471t__unsafe_size,__t1471t__unsafe_offset,__t1471t__unsafe_align,__t1471t__unsafe_size,__t1483t,&__t1484t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1484t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1485t__number,__t1484t__,8);
  print__t377t(__t1485t__number);
  __t1487t=1;
  __t_errcode=get__t609t(__t1471t__unsafe_ptr,__t1471t__unsafe_size,__t1471t__unsafe_offset,__t1471t__unsafe_align,__t1471t__unsafe_size,__t1487t,&__t1488t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1488t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1489t__number,__t1488t__,8);
  print__t377t(__t1489t__number);
  
  __t_failure:exists__t439t(__t1472t__buffer__unsafe_ptr,&__t1473t____t605t____t514t__);
  if(__t1473t____t605t____t514t__){
  free__t505t(&__t1472t__buffer__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1467t();return 0;}