#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1469t(char** __t1492t, uint64_t* __t1493t, uint16_t* __t1494t, uint16_t* __t1495t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1492t=unsafe_ptr;
  *__t1493t=unsafe_size;
  *__t1494t=unsafe_offset;
  *__t1495t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t1496t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1496t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t1497t) {
  char* allocated=*__t1497t;
  if(allocated){
  free(allocated);
  }
  *__t1497t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1498t) {
  int value=0;
  *__t1498t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1499t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1499t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1500t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1500t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1501t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1501t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1502t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1502t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1503t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1503t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1504t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1504t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1505t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1505t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t1506t) {
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
  *__t1506t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t1507t, uint64_t* __t1508t, uint16_t* __t1509t, uint16_t* __t1510t, uint64_t size, char** __t1511t, uint64_t* __t1512t, uint16_t* __t1513t, uint16_t* __t1514t) {
  char* buffer__unsafe_ptr=*__t1507t;
  uint64_t buffer__unsafe_size=*__t1508t;
  uint16_t buffer__unsafe_offset=*__t1509t;
  uint16_t buffer__unsafe_align=*__t1510t;
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
  *__t1507t=buffer__unsafe_ptr;
  *__t1508t=buffer__unsafe_size;
  *__t1509t=buffer__unsafe_offset;
  *__t1510t=buffer__unsafe_align;
  *__t1511t=buffer__unsafe_ptr;
  *__t1512t=buffer__unsafe_size;
  *__t1513t=buffer__unsafe_offset;
  *__t1514t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1515t) {
  goto __t_return;
  __t_return:
  *__t1515t=buffer__unsafe_size;
}

int list__t605t(char** __t1516t, uint64_t* __t1517t, uint16_t* __t1518t, uint16_t* __t1519t, char** __t1520t, uint64_t* __t1521t, uint16_t* __t1522t, uint16_t* __t1523t, uint64_t* __t1524t) {
  char* _buffer__unsafe_ptr=*__t1516t;
  uint64_t _buffer__unsafe_size=*__t1517t;
  uint16_t _buffer__unsafe_offset=*__t1518t;
  uint16_t _buffer__unsafe_align=*__t1519t;
  uint64_t __t606t=0;
  char* __t607t__unsafe_ptr=0;
  uint64_t __t607t__unsafe_size=0;
  uint16_t __t607t__unsafe_offset=0;
  uint16_t __t607t__unsafe_align=0;
  char __t608t____t517t__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __t609t__=0;
  uint64_t __t610t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t606t=1;
  __t_errcode=alloc__t515t(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__t606t,&__t607t__unsafe_ptr,&__t607t__unsafe_size,&__t607t__unsafe_offset,&__t607t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t607t__unsafe_ptr;
  buffer__unsafe_size=__t607t__unsafe_size;
  buffer__unsafe_offset=__t607t__unsafe_offset;
  buffer__unsafe_align=__t607t__unsafe_align;
  len__t604t(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__t609t__);
  __t610t=__t609t__;
  length=__t610t;
  goto __t_return;
  
  __t_failure:exists__t442t(buffer__unsafe_ptr,&__t608t____t517t__);
  if(__t608t____t517t__){
  free__t508t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1516t=_buffer__unsafe_ptr;
  *__t1517t=_buffer__unsafe_size;
  *__t1518t=_buffer__unsafe_offset;
  *__t1519t=_buffer__unsafe_align;
  *__t1520t=buffer__unsafe_ptr;
  *__t1521t=buffer__unsafe_size;
  *__t1522t=buffer__unsafe_offset;
  *__t1523t=buffer__unsafe_align;
  *__t1524t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1525t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1525t=z;
}

static inline __attribute__((always_inline)) int div__t224t(uint64_t x, uint64_t y, uint64_t* __t1526t) {
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
  *__t1526t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1527t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1527t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1528t) {
  *__t1528t=to;
}

static inline __attribute__((always_inline)) int realloc__t504t(char* allocated, uint64_t bytes, char** __t1529t) {
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
  *__t1529t=__t507t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1530t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1530t=z;
}

static inline __attribute__((always_inline)) int resize__t563t(char** __t1531t, uint64_t* __t1532t, uint16_t* __t1533t, uint16_t* __t1534t, uint64_t size, char** __t1535t, uint64_t* __t1536t, uint16_t* __t1537t, uint16_t* __t1538t) {
  char* buffer__unsafe_ptr=*__t1531t;
  uint64_t buffer__unsafe_size=*__t1532t;
  uint16_t buffer__unsafe_offset=*__t1533t;
  uint16_t buffer__unsafe_align=*__t1534t;
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
  *__t1531t=buffer__unsafe_ptr;
  *__t1532t=buffer__unsafe_size;
  *__t1533t=buffer__unsafe_offset;
  *__t1534t=buffer__unsafe_align;
  *__t1535t=buffer__unsafe_ptr;
  *__t1536t=buffer__unsafe_size;
  *__t1537t=buffer__unsafe_offset;
  *__t1538t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1539t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1539t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1540t, uint64_t* __t1541t, uint16_t* __t1542t, uint16_t* __t1543t, uint64_t i, char** __t1544t) {
  char* buffer__unsafe_ptr=*__t1540t;
  uint64_t buffer__unsafe_size=*__t1541t;
  uint16_t buffer__unsafe_offset=*__t1542t;
  uint16_t buffer__unsafe_align=*__t1543t;
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
  *__t1540t=buffer__unsafe_ptr;
  *__t1541t=buffer__unsafe_size;
  *__t1542t=buffer__unsafe_offset;
  *__t1543t=buffer__unsafe_align;
  *__t1544t=__t596t__;
  
  return __t_errcode;
}

int push__t618t(char** __t1545t, uint64_t* __t1546t, uint16_t* __t1547t, uint16_t* __t1548t, uint64_t* __t1549t, char** __t1550t) {
  char* l__buffer__unsafe_ptr=*__t1545t;
  uint64_t l__buffer__unsafe_size=*__t1546t;
  uint16_t l__buffer__unsafe_offset=*__t1547t;
  uint16_t l__buffer__unsafe_align=*__t1548t;
  uint64_t l__length=*__t1549t;
  uint64_t prev_length=0;
  uint64_t __t619t__=0;
  char __t620t__=0;
  uint64_t __t621t=0;
  uint64_t __t622t__=0;
  uint64_t __t623t=0;
  uint64_t __t624t__=0;
  uint64_t __t625t__=0;
  char* __t626t__unsafe_ptr=0;
  uint64_t __t626t__unsafe_size=0;
  uint16_t __t626t__unsafe_offset=0;
  uint16_t __t626t__unsafe_align=0;
  uint64_t __t627t=0;
  uint64_t __t628t__=0;
  char* __t629t__=0;
  char* val=0;
  int __t_errcode=0;
  int __t_complain=0;
  prev_length=l__length;
  len__t604t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,&__t619t__);
  ge__t323t(prev_length,__t619t__,&__t620t__);
  if(__t620t__){
  __t621t=2;
  __t_errcode=div__t224t(prev_length,__t621t,&__t622t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t623t=1;
  add__t174t(__t622t__,__t623t,&__t624t__);
  add__t174t(prev_length,__t624t__,&__t625t__);
  __t_errcode=resize__t563t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,__t625t__,&__t626t__unsafe_ptr,&__t626t__unsafe_size,&__t626t__unsafe_offset,&__t626t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  l__buffer__unsafe_ptr=__t626t__unsafe_ptr;
  l__buffer__unsafe_size=__t626t__unsafe_size;
  l__buffer__unsafe_offset=__t626t__unsafe_offset;
  l__buffer__unsafe_align=__t626t__unsafe_align;
  }
  __t627t=1;
  add__t174t(prev_length,__t627t,&__t628t__);
  l__length=__t628t__;
  __t_errcode=mutget__t590t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,prev_length,&__t629t__);
  if(__t_errcode){
  goto __t_failure;
  }
  val=__t629t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1545t=l__buffer__unsafe_ptr;
  *__t1546t=l__buffer__unsafe_size;
  *__t1547t=l__buffer__unsafe_offset;
  *__t1548t=l__buffer__unsafe_align;
  *__t1549t=l__length;
  *__t1550t=val;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t615t(char** __t1551t, uint64_t* __t1552t, uint16_t* __t1553t, uint16_t* __t1554t, uint64_t* __t1555t, uint64_t pos, char** __t1556t) {
  char* l__buffer__unsafe_ptr=*__t1551t;
  uint64_t l__buffer__unsafe_size=*__t1552t;
  uint16_t l__buffer__unsafe_offset=*__t1553t;
  uint16_t l__buffer__unsafe_align=*__t1554t;
  uint64_t l__length=*__t1555t;
  char __t616t__=0;
  char* __t617t__=0;
  char* ret=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(pos,l__length,&__t616t__);
  if(__t616t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=mutget__t590t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,pos,&__t617t__);
  if(__t_errcode){
  goto __t_failure;
  }
  ret=__t617t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1551t=l__buffer__unsafe_ptr;
  *__t1552t=l__buffer__unsafe_size;
  *__t1553t=l__buffer__unsafe_offset;
  *__t1554t=l__buffer__unsafe_align;
  *__t1555t=l__length;
  *__t1556t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1557t) {
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
  *__t1557t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t612t(char* l__buffer__unsafe_ptr, uint64_t l__buffer__unsafe_size, uint16_t l__buffer__unsafe_offset, uint16_t l__buffer__unsafe_align, uint64_t l__length, uint64_t pos, char** __t1558t) {
  char __t613t__=0;
  char* __t614t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(pos,l__length,&__t613t__);
  if(__t613t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=get__t597t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,pos,&__t614t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1558t=__t614t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t380t(double value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1467t() {
  char* __t1471t__unsafe_ptr=0;
  uint64_t __t1471t__unsafe_size=0;
  uint16_t __t1471t__unsafe_offset=0;
  uint16_t __t1471t__unsafe_align=0;
  char* __t1472t__unsafe_ptr=0;
  uint64_t __t1472t__unsafe_size=0;
  uint16_t __t1472t__unsafe_offset=0;
  uint16_t __t1472t__unsafe_align=0;
  char* __t1473t__buffer__unsafe_ptr=0;
  uint64_t __t1473t__buffer__unsafe_size=0;
  uint16_t __t1473t__buffer__unsafe_offset=0;
  uint16_t __t1473t__buffer__unsafe_align=0;
  uint64_t __t1473t__length=0;
  char __t1474t____t608t____t517t__=0;
  char* li__buffer__unsafe_ptr=0;
  uint64_t li__buffer__unsafe_size=0;
  uint16_t li__buffer__unsafe_offset=0;
  uint16_t li__buffer__unsafe_align=0;
  uint64_t li__length=0;
  char* __t1475t__=0;
  double __t1476t=0;
  char* __t1477t__=0;
  double __t1478t=0;
  char* __t1479t__=0;
  double __t1480t=0;
  uint64_t __t1481t=0;
  char* __t1482t__=0;
  double __t1483t=0;
  uint64_t __t1484t=0;
  char* __t1485t__=0;
  double __t1486t__number=0;
  uint64_t __t1488t=0;
  char* __t1489t__=0;
  double __t1490t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  float____t_buffer____buffer__t1469t(&__t1471t__unsafe_ptr,&__t1471t__unsafe_size,&__t1471t__unsafe_offset,&__t1471t__unsafe_align);
  __t1472t__unsafe_ptr=__t1471t__unsafe_ptr;
  __t1472t__unsafe_size=__t1471t__unsafe_size;
  __t1472t__unsafe_offset=__t1471t__unsafe_offset;
  __t1472t__unsafe_align=__t1471t__unsafe_align;
  __t_errcode=list__t605t(&__t1472t__unsafe_ptr,&__t1472t__unsafe_size,&__t1472t__unsafe_offset,&__t1472t__unsafe_align,&__t1473t__buffer__unsafe_ptr,&__t1473t__buffer__unsafe_size,&__t1473t__buffer__unsafe_offset,&__t1473t__buffer__unsafe_align,&__t1473t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=push__t618t(&__t1472t__unsafe_ptr,&__t1472t__unsafe_size,&__t1472t__unsafe_offset,&__t1472t__unsafe_align,&__t1472t__unsafe_size,&__t1475t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1476t=0.1;
  if(!__t1475t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1475t__,&__t1476t,8);
  __t_errcode=push__t618t(&__t1472t__unsafe_ptr,&__t1472t__unsafe_size,&__t1472t__unsafe_offset,&__t1472t__unsafe_align,&__t1472t__unsafe_size,&__t1477t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1478t=0.1;
  if(!__t1477t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1477t__,&__t1478t,8);
  __t_errcode=push__t618t(&__t1472t__unsafe_ptr,&__t1472t__unsafe_size,&__t1472t__unsafe_offset,&__t1472t__unsafe_align,&__t1472t__unsafe_size,&__t1479t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1480t=0.1;
  if(!__t1479t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1479t__,&__t1480t,8);
  __t1481t=1;
  __t_errcode=mutget__t615t(&__t1472t__unsafe_ptr,&__t1472t__unsafe_size,&__t1472t__unsafe_offset,&__t1472t__unsafe_align,&__t1472t__unsafe_size,__t1481t,&__t1482t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1483t=0.2;
  if(!__t1482t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1482t__,&__t1483t,8);
  __t1484t=0;
  __t_errcode=get__t612t(__t1472t__unsafe_ptr,__t1472t__unsafe_size,__t1472t__unsafe_offset,__t1472t__unsafe_align,__t1472t__unsafe_size,__t1484t,&__t1485t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1485t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1486t__number,__t1485t__,8);
  print__t380t(__t1486t__number);
  __t1488t=1;
  __t_errcode=get__t612t(__t1472t__unsafe_ptr,__t1472t__unsafe_size,__t1472t__unsafe_offset,__t1472t__unsafe_align,__t1472t__unsafe_size,__t1488t,&__t1489t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1489t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1490t__number,__t1489t__,8);
  print__t380t(__t1490t__number);
  
  __t_failure:exists__t442t(__t1473t__buffer__unsafe_ptr,&__t1474t____t608t____t517t__);
  if(__t1474t____t608t____t517t__){
  free__t508t(&__t1473t__buffer__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1467t();return 0;}