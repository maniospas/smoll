#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1489t="123";
const char* const __t377t="\n";
const char* const __t1491t="456";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1481t(char** __t1499t, uint64_t* __t1500t, uint16_t* __t1501t, uint16_t* __t1502t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1499t=unsafe_ptr;
  *__t1500t=unsafe_size;
  *__t1501t=unsafe_offset;
  *__t1502t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t1503t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1503t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t1504t) {
  char* allocated=*__t1504t;
  if(allocated){
  free(allocated);
  }
  *__t1504t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1505t) {
  int value=0;
  *__t1505t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1506t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1506t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1507t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1507t=__t96t__;
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

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1522t) {
  goto __t_return;
  __t_return:
  *__t1522t=buffer__unsafe_size;
}

int list__t605t(char** __t1523t, uint64_t* __t1524t, uint16_t* __t1525t, uint16_t* __t1526t, char** __t1527t, uint64_t* __t1528t, uint16_t* __t1529t, uint16_t* __t1530t, uint64_t* __t1531t) {
  char* _buffer__unsafe_ptr=*__t1523t;
  uint64_t _buffer__unsafe_size=*__t1524t;
  uint16_t _buffer__unsafe_offset=*__t1525t;
  uint16_t _buffer__unsafe_align=*__t1526t;
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
  *__t1523t=_buffer__unsafe_ptr;
  *__t1524t=_buffer__unsafe_size;
  *__t1525t=_buffer__unsafe_offset;
  *__t1526t=_buffer__unsafe_align;
  *__t1527t=buffer__unsafe_ptr;
  *__t1528t=buffer__unsafe_size;
  *__t1529t=buffer__unsafe_offset;
  *__t1530t=buffer__unsafe_align;
  *__t1531t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1532t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1532t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1533t) {
  *__t1533t=to;
}

static inline __attribute__((always_inline)) int realloc__t504t(char* allocated, uint64_t bytes, char** __t1534t) {
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
  *__t1534t=__t507t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1535t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1535t=z;
}

static inline __attribute__((always_inline)) int resize__t563t(char** __t1536t, uint64_t* __t1537t, uint16_t* __t1538t, uint16_t* __t1539t, uint64_t size, char** __t1540t, uint64_t* __t1541t, uint16_t* __t1542t, uint16_t* __t1543t) {
  char* buffer__unsafe_ptr=*__t1536t;
  uint64_t buffer__unsafe_size=*__t1537t;
  uint16_t buffer__unsafe_offset=*__t1538t;
  uint16_t buffer__unsafe_align=*__t1539t;
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
  *__t1536t=buffer__unsafe_ptr;
  *__t1537t=buffer__unsafe_size;
  *__t1538t=buffer__unsafe_offset;
  *__t1539t=buffer__unsafe_align;
  *__t1540t=buffer__unsafe_ptr;
  *__t1541t=buffer__unsafe_size;
  *__t1542t=buffer__unsafe_offset;
  *__t1543t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t1544t, uint64_t* __t1545t, uint16_t* __t1546t, uint16_t* __t1547t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1544t=unsafe_ptr;
  *__t1545t=unsafe_size;
  *__t1546t=unsafe_offset;
  *__t1547t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1548t) {
  *__t1548t=to;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1549t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1549t=z;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1550t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1550t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1551t) {
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
  *__t1551t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t641t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1552t, uint64_t* __t1553t, uint64_t* __t1554t, char* __t1555t) {
  goto __t_return;
  __t_return:
  *__t1552t=unsafe_ptr;
  *__t1553t=dat__pos;
  *__t1554t=dat__length;
  *__t1555t=dat__first;
}

static inline __attribute__((always_inline)) int str__t645t(char* CHARS__unsafe_ptr, uint64_t CHARS__unsafe_size, uint16_t CHARS__unsafe_offset, uint16_t CHARS__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1556t, uint64_t* __t1557t, uint64_t* __t1558t, char* __t1559t) {
  char* unsafe_ptr=0;
  uint64_t __t646t__=0;
  uint64_t __t647t=0;
  char __t648t__=0;
  uint64_t __t649t__=0;
  uint64_t __t650t=0;
  char __t651t__=0;
  char* __t652t__unsafe_ptr=0;
  uint64_t __t652t__dat__pos=0;
  uint64_t __t652t__dat__length=0;
  char __t652t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=CHARS__unsafe_ptr;
  nat__t512t(CHARS__unsafe_align,&__t646t__);
  __t647t=1;
  neq__t143t(__t646t__,__t647t,&__t648t__);
  if(__t648t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t512t(CHARS__unsafe_offset,&__t649t__);
  __t650t=0;
  neq__t143t(__t649t__,__t650t,&__t651t__);
  if(__t651t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t641t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t652t__unsafe_ptr,&__t652t__dat__pos,&__t652t__dat__length,&__t652t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1556t=__t652t__unsafe_ptr;
  *__t1557t=__t652t__dat__pos;
  *__t1558t=__t652t__dat__length;
  *__t1559t=__t652t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t677t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1560t, uint64_t* __t1561t, uint64_t* __t1562t, char* __t1563t) {
  uint64_t __t678t=0;
  char __t679t__=0;
  char* __t680t__=0;
  char __t681t__value=0;
  char first=0;
  char* __t682t__unsafe_ptr=0;
  uint64_t __t682t__dat__pos=0;
  uint64_t __t682t__dat__length=0;
  char __t682t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t678t=0;
  neq__t143t(length,__t678t,&__t679t__);
  if(__t679t__){
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t680t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t680t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t681t__value,__t680t__,1);
  first=__t681t__value;
  }
  __t_errcode=str__t645t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t682t__unsafe_ptr,&__t682t__dat__pos,&__t682t__dat__length,&__t682t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1560t=__t682t__unsafe_ptr;
  *__t1561t=__t682t__dat__pos;
  *__t1562t=__t682t__dat__length;
  *__t1563t=__t682t__dat__first;
  
  return __t_errcode;
}

int str__t683t(const char* c, char** __t1564t, uint64_t* __t1565t, uint64_t* __t1566t, char* __t1567t) {
  char* __t684t__unsafe_ptr=0;
  uint64_t __t684t__unsafe_size=0;
  uint16_t __t684t__unsafe_offset=0;
  uint16_t __t684t__unsafe_align=0;
  char* __t685t__unsafe_ptr=0;
  uint64_t __t685t__unsafe_size=0;
  uint16_t __t685t__unsafe_offset=0;
  uint16_t __t685t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t686t__=0;
  uint64_t length=0;
  uint64_t __t687t=0;
  uint64_t __t688t__=0;
  uint64_t __t689t=0;
  char* __t690t__unsafe_ptr=0;
  uint64_t __t690t__dat__pos=0;
  uint64_t __t690t__dat__length=0;
  char __t690t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t557t(&__t684t__unsafe_ptr,&__t684t__unsafe_size,&__t684t__unsafe_offset,&__t684t__unsafe_align);
  __t685t__unsafe_ptr=__t684t__unsafe_ptr;
  __t685t__unsafe_size=__t684t__unsafe_size;
  __t685t__unsafe_offset=__t684t__unsafe_offset;
  __t685t__unsafe_align=__t684t__unsafe_align;
  buf__unsafe_ptr=__t685t__unsafe_ptr;
  buf__unsafe_size=__t685t__unsafe_size;
  buf__unsafe_offset=__t685t__unsafe_offset;
  buf__unsafe_align=__t685t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t686t__);
  buf__unsafe_ptr=__t686t__;
  if(c){
  length=strlen(c);
  }
  __t687t=1;
  add__t174t(length,__t687t,&__t688t__);
  buf__unsafe_size=__t688t__;
  __t689t=0;
  __t_errcode=str__t677t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t689t,length,&__t690t__unsafe_ptr,&__t690t__dat__pos,&__t690t__dat__length,&__t690t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1564t=__t690t__unsafe_ptr;
  *__t1565t=__t690t__dat__pos;
  *__t1566t=__t690t__dat__length;
  *__t1567t=__t690t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t691t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1568t) {
  goto __t_return;
  __t_return:
  *__t1568t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t147t(char* x, char* y, char* __t1569t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1569t=z;
}

static inline __attribute__((always_inline)) int div__t224t(uint64_t x, uint64_t y, uint64_t* __t1570t) {
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
  *__t1570t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t676t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1571t, uint64_t* __t1572t, uint64_t* __t1573t, char* __t1574t) {
  goto __t_return;
  __t_return:
  *__t1571t=other__unsafe_ptr;
  *__t1572t=other__dat__pos;
  *__t1573t=other__dat__length;
  *__t1574t=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t1575t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1575t=z;
}

static inline __attribute__((always_inline)) int copy__t749t(char** __t1576t, uint64_t* __t1577t, uint16_t* __t1578t, uint16_t* __t1579t, uint64_t* __t1580t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1581t, uint64_t* __t1582t, uint64_t* __t1583t, char* __t1584t) {
  char* CHARS__buf__unsafe_ptr=*__t1576t;
  uint64_t CHARS__buf__unsafe_size=*__t1577t;
  uint16_t CHARS__buf__unsafe_offset=*__t1578t;
  uint16_t CHARS__buf__unsafe_align=*__t1579t;
  uint64_t CHARS__pos=*__t1580t;
  char* __t750t__unsafe_ptr=0;
  uint64_t __t750t__dat__pos=0;
  uint64_t __t750t__dat__length=0;
  char __t750t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t751t__=0;
  uint64_t __t752t__=0;
  uint64_t next_pos=0;
  uint64_t __t753t__=0;
  char __t754t__=0;
  uint64_t __t755t=0;
  uint64_t __t756t__=0;
  uint64_t prev_pos=0;
  char* __t757t__unsafe_ptr=0;
  uint64_t __t757t__dat__pos=0;
  uint64_t __t757t__dat__length=0;
  char __t757t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t676t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t750t__unsafe_ptr,&__t750t__dat__pos,&__t750t__dat__length,&__t750t__dat__first);
  other__unsafe_ptr=__t750t__unsafe_ptr;
  other__dat__pos=__t750t__dat__pos;
  other__dat__length=__t750t__dat__length;
  other__dat__first=__t750t__dat__first;
  len__t691t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t751t__);
  add__t174t(CHARS__pos,__t751t__,&__t752t__);
  next_pos=__t752t__;
  len__t604t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t753t__);
  gt__t275t(next_pos,__t753t__,&__t754t__);
  if(__t754t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t755t=0;
  add__t174t(CHARS__pos,__t755t,&__t756t__);
  prev_pos=__t756t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t645t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t757t__unsafe_ptr,&__t757t__dat__pos,&__t757t__dat__length,&__t757t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1576t=CHARS__buf__unsafe_ptr;
  *__t1577t=CHARS__buf__unsafe_size;
  *__t1578t=CHARS__buf__unsafe_offset;
  *__t1579t=CHARS__buf__unsafe_align;
  *__t1580t=CHARS__pos;
  *__t1581t=__t757t__unsafe_ptr;
  *__t1582t=__t757t__dat__pos;
  *__t1583t=__t757t__dat__length;
  *__t1584t=__t757t__dat__first;
  
  return __t_errcode;
}

int copy__t815t(char** __t1585t, uint64_t* __t1586t, uint16_t* __t1587t, uint16_t* __t1588t, uint64_t* __t1589t, const char* _other, char** __t1590t, uint64_t* __t1591t, uint64_t* __t1592t, char* __t1593t) {
  char* CHARS__buffer__unsafe_ptr=*__t1585t;
  uint64_t CHARS__buffer__unsafe_size=*__t1586t;
  uint16_t CHARS__buffer__unsafe_offset=*__t1587t;
  uint16_t CHARS__buffer__unsafe_align=*__t1588t;
  uint64_t CHARS__length=*__t1589t;
  char* __t816t__unsafe_ptr=0;
  uint64_t __t816t__dat__pos=0;
  uint64_t __t816t__dat__length=0;
  char __t816t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t817t=0;
  uint64_t prev_prev_length=0;
  uint64_t __t818t__=0;
  uint64_t __t819t__=0;
  uint64_t prev_length=0;
  char __t820t__=0;
  uint64_t __t821t__=0;
  char __t822t__=0;
  uint64_t __t823t=0;
  uint64_t __t824t__=0;
  uint64_t __t825t=0;
  uint64_t __t826t__=0;
  uint64_t __t827t__=0;
  char* __t828t__unsafe_ptr=0;
  uint64_t __t828t__unsafe_size=0;
  uint16_t __t828t__unsafe_offset=0;
  uint16_t __t828t__unsafe_align=0;
  char* __t829t__unsafe_ptr=0;
  uint64_t __t829t__dat__pos=0;
  uint64_t __t829t__dat__length=0;
  char __t829t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t683t(_other,&__t816t__unsafe_ptr,&__t816t__dat__pos,&__t816t__dat__length,&__t816t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t816t__unsafe_ptr;
  other__dat__pos=__t816t__dat__pos;
  other__dat__length=__t816t__dat__length;
  other__dat__first=__t816t__dat__first;
  __t817t=CHARS__length;
  prev_prev_length=__t817t;
  len__t691t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t818t__);
  add__t174t(CHARS__length,__t818t__,&__t819t__);
  prev_length=__t819t__;
  eq__t147t(other__unsafe_ptr,CHARS__buffer__unsafe_ptr,&__t820t__);
  if(__t820t__){
  __t_errcode=21;
  goto __t_failure;
  }
  len__t604t(CHARS__buffer__unsafe_ptr,CHARS__buffer__unsafe_size,CHARS__buffer__unsafe_offset,CHARS__buffer__unsafe_align,&__t821t__);
  ge__t323t(prev_length,__t821t__,&__t822t__);
  if(__t822t__){
  __t823t=2;
  __t_errcode=div__t224t(prev_length,__t823t,&__t824t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t825t=1;
  add__t174t(__t824t__,__t825t,&__t826t__);
  add__t174t(prev_length,__t826t__,&__t827t__);
  __t_errcode=resize__t563t(&CHARS__buffer__unsafe_ptr,&CHARS__buffer__unsafe_size,&CHARS__buffer__unsafe_offset,&CHARS__buffer__unsafe_align,__t827t__,&__t828t__unsafe_ptr,&__t828t__unsafe_size,&__t828t__unsafe_offset,&__t828t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  CHARS__buffer__unsafe_ptr=__t828t__unsafe_ptr;
  CHARS__buffer__unsafe_size=__t828t__unsafe_size;
  CHARS__buffer__unsafe_offset=__t828t__unsafe_offset;
  CHARS__buffer__unsafe_align=__t828t__unsafe_align;
  }
  CHARS__length=prev_length;
  __t_errcode=copy__t749t(&CHARS__buffer__unsafe_ptr,&CHARS__buffer__unsafe_size,&CHARS__buffer__unsafe_offset,&CHARS__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t829t__unsafe_ptr,&__t829t__dat__pos,&__t829t__dat__length,&__t829t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1585t=CHARS__buffer__unsafe_ptr;
  *__t1586t=CHARS__buffer__unsafe_size;
  *__t1587t=CHARS__buffer__unsafe_offset;
  *__t1588t=CHARS__buffer__unsafe_align;
  *__t1589t=CHARS__length;
  *__t1590t=__t829t__unsafe_ptr;
  *__t1591t=__t829t__dat__pos;
  *__t1592t=__t829t__dat__length;
  *__t1593t=__t829t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t1480t(char** __t1594t, uint64_t* __t1595t, uint64_t* __t1596t, char* __t1597t, char** __t1598t, uint64_t* __t1599t, uint64_t* __t1600t, char* __t1601t) {
  char* __t1483t__unsafe_ptr=0;
  uint64_t __t1483t__unsafe_size=0;
  uint16_t __t1483t__unsafe_offset=0;
  uint16_t __t1483t__unsafe_align=0;
  char* __t1484t__unsafe_ptr=0;
  uint64_t __t1484t__unsafe_size=0;
  uint16_t __t1484t__unsafe_offset=0;
  uint16_t __t1484t__unsafe_align=0;
  char* __t1485t__buffer__unsafe_ptr=0;
  uint64_t __t1485t__buffer__unsafe_size=0;
  uint16_t __t1485t__buffer__unsafe_offset=0;
  uint16_t __t1485t__buffer__unsafe_align=0;
  uint64_t __t1485t__length=0;
  char __t1486t____t608t____t517t__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint16_t mem__buffer__unsafe_offset=0;
  uint16_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __t1487t=0;
  char* __t1488t__unsafe_ptr=0;
  uint64_t __t1488t__unsafe_size=0;
  uint16_t __t1488t__unsafe_offset=0;
  uint16_t __t1488t__unsafe_align=0;
  char* __t1490t__unsafe_ptr=0;
  uint64_t __t1490t__dat__pos=0;
  uint64_t __t1490t__dat__length=0;
  char __t1490t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1492t__unsafe_ptr=0;
  uint64_t __t1492t__dat__pos=0;
  uint64_t __t1492t__dat__length=0;
  char __t1492t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1481t(&__t1483t__unsafe_ptr,&__t1483t__unsafe_size,&__t1483t__unsafe_offset,&__t1483t__unsafe_align);
  __t1484t__unsafe_ptr=__t1483t__unsafe_ptr;
  __t1484t__unsafe_size=__t1483t__unsafe_size;
  __t1484t__unsafe_offset=__t1483t__unsafe_offset;
  __t1484t__unsafe_align=__t1483t__unsafe_align;
  __t_errcode=list__t605t(&__t1484t__unsafe_ptr,&__t1484t__unsafe_size,&__t1484t__unsafe_offset,&__t1484t__unsafe_align,&__t1485t__buffer__unsafe_ptr,&__t1485t__buffer__unsafe_size,&__t1485t__buffer__unsafe_offset,&__t1485t__buffer__unsafe_align,&__t1485t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1487t=100;
  __t_errcode=resize__t563t(&__t1485t__buffer__unsafe_ptr,&__t1485t__buffer__unsafe_size,&__t1485t__buffer__unsafe_offset,&__t1485t__buffer__unsafe_align,__t1487t,&__t1488t__unsafe_ptr,&__t1488t__unsafe_size,&__t1488t__unsafe_offset,&__t1488t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t815t(&__t1485t__buffer__unsafe_ptr,&__t1485t__buffer__unsafe_size,&__t1485t__buffer__unsafe_offset,&__t1485t__buffer__unsafe_align,&__t1485t__length,__t1489t,&__t1490t__unsafe_ptr,&__t1490t__dat__pos,&__t1490t__dat__length,&__t1490t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t1490t__dat__pos;
  s1__dat__length=__t1490t__dat__length;
  s1__dat__first=__t1490t__dat__first;
  __t_errcode=copy__t815t(&__t1485t__buffer__unsafe_ptr,&__t1485t__buffer__unsafe_size,&__t1485t__buffer__unsafe_offset,&__t1485t__buffer__unsafe_align,&__t1485t__length,__t1491t,&__t1492t__unsafe_ptr,&__t1492t__dat__pos,&__t1492t__dat__length,&__t1492t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t1492t__dat__pos;
  s2__dat__length=__t1492t__dat__length;
  s2__dat__first=__t1492t__dat__first;
  s1__unsafe_ptr=__t1485t__buffer__unsafe_ptr;
  s2__unsafe_ptr=__t1485t__buffer__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t442t(s2__unsafe_ptr,&__t1486t____t608t____t517t__);
  if(__t1486t____t608t____t517t__){
  free__t508t(&s2__unsafe_ptr);
  }
  __t_return:
  *__t1594t=s1__unsafe_ptr;
  *__t1595t=s1__dat__pos;
  *__t1596t=s1__dat__length;
  *__t1597t=s1__dat__first;
  *__t1598t=s2__unsafe_ptr;
  *__t1599t=s2__dat__pos;
  *__t1600t=s2__dat__length;
  *__t1601t=s2__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t791t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t792t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1493t() {
  char* __t1495t__s1__unsafe_ptr=0;
  uint64_t __t1495t__s1__dat__pos=0;
  uint64_t __t1495t__s1__dat__length=0;
  char __t1495t__s1__dat__first=0;
  char* __t1495t__s2__unsafe_ptr=0;
  uint64_t __t1495t__s2__dat__pos=0;
  uint64_t __t1495t__s2__dat__length=0;
  char __t1495t__s2__dat__first=0;
  char __t1496t____t1486t____t608t____t517t__=0;
  char* s__s1__unsafe_ptr=0;
  uint64_t s__s1__dat__pos=0;
  uint64_t s__s1__dat__length=0;
  char s__s1__dat__first=0;
  char* s__s2__unsafe_ptr=0;
  uint64_t s__s2__dat__pos=0;
  uint64_t s__s2__dat__length=0;
  char s__s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t_errcode=test__t1480t(&__t1495t__s1__unsafe_ptr,&__t1495t__s1__dat__pos,&__t1495t__s1__dat__length,&__t1495t__s1__dat__first,&__t1495t__s2__unsafe_ptr,&__t1495t__s2__dat__pos,&__t1495t__s2__dat__length,&__t1495t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t1495t__s1__unsafe_ptr;
  s__s1__dat__pos=__t1495t__s1__dat__pos;
  s__s1__dat__length=__t1495t__s1__dat__length;
  s__s1__dat__first=__t1495t__s1__dat__first;
  s__s2__unsafe_ptr=__t1495t__s2__unsafe_ptr;
  s__s2__dat__pos=__t1495t__s2__dat__pos;
  s__s2__dat__length=__t1495t__s2__dat__length;
  s__s2__dat__first=__t1495t__s2__dat__first;
  print__t791t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t791t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:exists__t442t(__t1495t__s2__unsafe_ptr,&__t1496t____t1486t____t608t____t517t__);
  if(__t1496t____t1486t____t608t____t517t__){
  free__t508t(&__t1495t__s2__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1493t();return 0;}