#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1518t="123";
const char* const __t1520t="456";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1510t(char** __t1528t, uint64_t* __t1529t, uint16_t* __t1530t, uint16_t* __t1531t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1528t=unsafe_ptr;
  *__t1529t=unsafe_size;
  *__t1530t=unsafe_offset;
  *__t1531t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t1532t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1532t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t1533t) {
  char* allocated=*__t1533t;
  if(allocated){
  free(allocated);
  }
  *__t1533t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1534t) {
  int value=0;
  *__t1534t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1535t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1535t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1536t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1536t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1537t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1537t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1538t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1538t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t1539t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1539t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1540t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1540t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1541t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1541t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t1542t) {
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
  *__t1542t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t1543t, uint64_t* __t1544t, uint16_t* __t1545t, uint16_t* __t1546t, uint64_t size, char** __t1547t, uint64_t* __t1548t, uint16_t* __t1549t, uint16_t* __t1550t) {
  char* buffer__unsafe_ptr=*__t1543t;
  uint64_t buffer__unsafe_size=*__t1544t;
  uint16_t buffer__unsafe_offset=*__t1545t;
  uint16_t buffer__unsafe_align=*__t1546t;
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
  *__t1543t=buffer__unsafe_ptr;
  *__t1544t=buffer__unsafe_size;
  *__t1545t=buffer__unsafe_offset;
  *__t1546t=buffer__unsafe_align;
  *__t1547t=buffer__unsafe_ptr;
  *__t1548t=buffer__unsafe_size;
  *__t1549t=buffer__unsafe_offset;
  *__t1550t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1551t) {
  goto __t_return;
  __t_return:
  *__t1551t=buffer__unsafe_size;
}

int list__t606t(char** __t1552t, uint64_t* __t1553t, uint16_t* __t1554t, uint16_t* __t1555t, char** __t1556t, uint64_t* __t1557t, uint16_t* __t1558t, uint16_t* __t1559t, uint64_t* __t1560t) {
  char* _buffer__unsafe_ptr=*__t1552t;
  uint64_t _buffer__unsafe_size=*__t1553t;
  uint16_t _buffer__unsafe_offset=*__t1554t;
  uint16_t _buffer__unsafe_align=*__t1555t;
  uint64_t __t607t=0;
  char* __t608t__unsafe_ptr=0;
  uint64_t __t608t__unsafe_size=0;
  uint16_t __t608t__unsafe_offset=0;
  uint16_t __t608t__unsafe_align=0;
  char __t609t____t518t__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __t610t__=0;
  uint64_t __t611t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t607t=1;
  __t_errcode=alloc__t516t(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__t607t,&__t608t__unsafe_ptr,&__t608t__unsafe_size,&__t608t__unsafe_offset,&__t608t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t608t__unsafe_ptr;
  buffer__unsafe_size=__t608t__unsafe_size;
  buffer__unsafe_offset=__t608t__unsafe_offset;
  buffer__unsafe_align=__t608t__unsafe_align;
  len__t605t(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__t610t__);
  __t611t=__t610t__;
  length=__t611t;
  goto __t_return;
  
  __t_failure:exists__t443t(buffer__unsafe_ptr,&__t609t____t518t__);
  if(__t609t____t518t__){
  free__t509t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1552t=_buffer__unsafe_ptr;
  *__t1553t=_buffer__unsafe_size;
  *__t1554t=_buffer__unsafe_offset;
  *__t1555t=_buffer__unsafe_align;
  *__t1556t=buffer__unsafe_ptr;
  *__t1557t=buffer__unsafe_size;
  *__t1558t=buffer__unsafe_offset;
  *__t1559t=buffer__unsafe_align;
  *__t1560t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1561t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1561t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1562t) {
  *__t1562t=to;
}

static inline __attribute__((always_inline)) int realloc__t505t(char* allocated, uint64_t bytes, char** __t1563t) {
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
  *__t1563t=__t508t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1564t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1564t=z;
}

static inline __attribute__((always_inline)) int resize__t564t(char** __t1565t, uint64_t* __t1566t, uint16_t* __t1567t, uint16_t* __t1568t, uint64_t size, char** __t1569t, uint64_t* __t1570t, uint16_t* __t1571t, uint16_t* __t1572t) {
  char* buffer__unsafe_ptr=*__t1565t;
  uint64_t buffer__unsafe_size=*__t1566t;
  uint16_t buffer__unsafe_offset=*__t1567t;
  uint16_t buffer__unsafe_align=*__t1568t;
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
  *__t1565t=buffer__unsafe_ptr;
  *__t1566t=buffer__unsafe_size;
  *__t1567t=buffer__unsafe_offset;
  *__t1568t=buffer__unsafe_align;
  *__t1569t=buffer__unsafe_ptr;
  *__t1570t=buffer__unsafe_size;
  *__t1571t=buffer__unsafe_offset;
  *__t1572t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t1573t, uint64_t* __t1574t, uint16_t* __t1575t, uint16_t* __t1576t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1573t=unsafe_ptr;
  *__t1574t=unsafe_size;
  *__t1575t=unsafe_offset;
  *__t1576t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1577t) {
  *__t1577t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1578t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1578t=z;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t1579t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t1579t=__t512t__;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1580t) {
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
  *__t1580t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t642t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1581t, uint64_t* __t1582t, uint64_t* __t1583t, char* __t1584t) {
  goto __t_return;
  __t_return:
  *__t1581t=unsafe_ptr;
  *__t1582t=dat__pos;
  *__t1583t=dat__length;
  *__t1584t=dat__first;
}

static inline __attribute__((always_inline)) int str__t646t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1585t, uint64_t* __t1586t, uint64_t* __t1587t, char* __t1588t) {
  char* unsafe_ptr=0;
  uint64_t __t647t__=0;
  uint64_t __t648t=0;
  char __t649t__=0;
  uint64_t __t650t__=0;
  uint64_t __t651t=0;
  char __t652t__=0;
  char* __t653t__unsafe_ptr=0;
  uint64_t __t653t__dat__pos=0;
  uint64_t __t653t__dat__length=0;
  char __t653t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t513t(buf__unsafe_align,&__t647t__);
  __t648t=1;
  neq__t144t(__t647t__,__t648t,&__t649t__);
  if(__t649t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t513t(buf__unsafe_offset,&__t650t__);
  __t651t=0;
  neq__t144t(__t650t__,__t651t,&__t652t__);
  if(__t652t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t642t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t653t__unsafe_ptr,&__t653t__dat__pos,&__t653t__dat__length,&__t653t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1585t=__t653t__unsafe_ptr;
  *__t1586t=__t653t__dat__pos;
  *__t1587t=__t653t__dat__length;
  *__t1588t=__t653t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t681t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1589t, uint64_t* __t1590t, uint64_t* __t1591t, char* __t1592t) {
  uint64_t __t682t=0;
  char __t683t__=0;
  char* __t684t__=0;
  char __t685t__value=0;
  char first=0;
  char* __t686t__unsafe_ptr=0;
  uint64_t __t686t__dat__pos=0;
  uint64_t __t686t__dat__length=0;
  char __t686t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t682t=0;
  neq__t144t(length,__t682t,&__t683t__);
  if(__t683t__){
  __t_errcode=get__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t684t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t684t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t685t__value,__t684t__,1);
  first=__t685t__value;
  }
  __t_errcode=str__t646t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t686t__unsafe_ptr,&__t686t__dat__pos,&__t686t__dat__length,&__t686t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1589t=__t686t__unsafe_ptr;
  *__t1590t=__t686t__dat__pos;
  *__t1591t=__t686t__dat__length;
  *__t1592t=__t686t__dat__first;
  
  return __t_errcode;
}

int str__t704t(const char* c, char** __t1593t, uint64_t* __t1594t, uint64_t* __t1595t, char* __t1596t) {
  char* __t705t__unsafe_ptr=0;
  uint64_t __t705t__unsafe_size=0;
  uint16_t __t705t__unsafe_offset=0;
  uint16_t __t705t__unsafe_align=0;
  char* __t706t__unsafe_ptr=0;
  uint64_t __t706t__unsafe_size=0;
  uint16_t __t706t__unsafe_offset=0;
  uint16_t __t706t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t707t__=0;
  uint64_t length=0;
  uint64_t __t708t=0;
  uint64_t __t709t__=0;
  uint64_t __t710t=0;
  char* __t712t__unsafe_ptr=0;
  uint64_t __t712t__dat__pos=0;
  uint64_t __t712t__dat__length=0;
  char __t712t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t558t(&__t705t__unsafe_ptr,&__t705t__unsafe_size,&__t705t__unsafe_offset,&__t705t__unsafe_align);
  __t706t__unsafe_ptr=__t705t__unsafe_ptr;
  __t706t__unsafe_size=__t705t__unsafe_size;
  __t706t__unsafe_offset=__t705t__unsafe_offset;
  __t706t__unsafe_align=__t705t__unsafe_align;
  buf__unsafe_ptr=__t706t__unsafe_ptr;
  buf__unsafe_size=__t706t__unsafe_size;
  buf__unsafe_offset=__t706t__unsafe_offset;
  buf__unsafe_align=__t706t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t707t__);
  buf__unsafe_ptr=__t707t__;
  if(c){
  length=strlen(c);
  }
  __t708t=1;
  add__t175t(length,__t708t,&__t709t__);
  buf__unsafe_size=__t709t__;
  __t710t=0;
  __t_errcode=str__t681t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t710t,length,&__t712t__unsafe_ptr,&__t712t__dat__pos,&__t712t__dat__length,&__t712t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1593t=__t712t__unsafe_ptr;
  *__t1594t=__t712t__dat__pos;
  *__t1595t=__t712t__dat__length;
  *__t1596t=__t712t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t713t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1597t) {
  goto __t_return;
  __t_return:
  *__t1597t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t148t(char* x, char* y, char* __t1598t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1598t=z;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t1599t) {
  int __t226t__=0;
  uint64_t zero=0;
  char __t227t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t226t__);
  zero=0;
  eq__t120t(y,zero,&__t227t__);
  if(__t227t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1599t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t677t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1600t, uint64_t* __t1601t, uint64_t* __t1602t, char* __t1603t) {
  goto __t_return;
  __t_return:
  *__t1600t=other__unsafe_ptr;
  *__t1601t=other__dat__pos;
  *__t1602t=other__dat__length;
  *__t1603t=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1604t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1604t=z;
}

static inline __attribute__((always_inline)) int copy__t805t(char** __t1605t, uint64_t* __t1606t, uint16_t* __t1607t, uint16_t* __t1608t, uint64_t* __t1609t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1610t, uint64_t* __t1611t, uint64_t* __t1612t, char* __t1613t) {
  char* CHARS__buf__unsafe_ptr=*__t1605t;
  uint64_t CHARS__buf__unsafe_size=*__t1606t;
  uint16_t CHARS__buf__unsafe_offset=*__t1607t;
  uint16_t CHARS__buf__unsafe_align=*__t1608t;
  uint64_t CHARS__pos=*__t1609t;
  char* __t806t__unsafe_ptr=0;
  uint64_t __t806t__dat__pos=0;
  uint64_t __t806t__dat__length=0;
  char __t806t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t807t__=0;
  uint64_t __t808t__=0;
  uint64_t next_pos=0;
  uint64_t __t809t__=0;
  char __t810t__=0;
  uint64_t __t811t=0;
  uint64_t __t812t__=0;
  uint64_t prev_pos=0;
  char* __t813t__unsafe_ptr=0;
  uint64_t __t813t__dat__pos=0;
  uint64_t __t813t__dat__length=0;
  char __t813t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t677t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t806t__unsafe_ptr,&__t806t__dat__pos,&__t806t__dat__length,&__t806t__dat__first);
  other__unsafe_ptr=__t806t__unsafe_ptr;
  other__dat__pos=__t806t__dat__pos;
  other__dat__length=__t806t__dat__length;
  other__dat__first=__t806t__dat__first;
  len__t713t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t807t__);
  add__t175t(CHARS__pos,__t807t__,&__t808t__);
  next_pos=__t808t__;
  len__t605t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t809t__);
  gt__t276t(next_pos,__t809t__,&__t810t__);
  if(__t810t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t811t=0;
  add__t175t(CHARS__pos,__t811t,&__t812t__);
  prev_pos=__t812t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t646t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t813t__unsafe_ptr,&__t813t__dat__pos,&__t813t__dat__length,&__t813t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1605t=CHARS__buf__unsafe_ptr;
  *__t1606t=CHARS__buf__unsafe_size;
  *__t1607t=CHARS__buf__unsafe_offset;
  *__t1608t=CHARS__buf__unsafe_align;
  *__t1609t=CHARS__pos;
  *__t1610t=__t813t__unsafe_ptr;
  *__t1611t=__t813t__dat__pos;
  *__t1612t=__t813t__dat__length;
  *__t1613t=__t813t__dat__first;
  
  return __t_errcode;
}

int copy__t871t(char** __t1614t, uint64_t* __t1615t, uint16_t* __t1616t, uint16_t* __t1617t, uint64_t* __t1618t, const char* _other, char** __t1619t, uint64_t* __t1620t, uint64_t* __t1621t, char* __t1622t) {
  char* CHARS__buffer__unsafe_ptr=*__t1614t;
  uint64_t CHARS__buffer__unsafe_size=*__t1615t;
  uint16_t CHARS__buffer__unsafe_offset=*__t1616t;
  uint16_t CHARS__buffer__unsafe_align=*__t1617t;
  uint64_t CHARS__length=*__t1618t;
  char* __t872t__unsafe_ptr=0;
  uint64_t __t872t__dat__pos=0;
  uint64_t __t872t__dat__length=0;
  char __t872t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t873t=0;
  uint64_t prev_prev_length=0;
  uint64_t __t874t__=0;
  uint64_t __t875t__=0;
  uint64_t prev_length=0;
  char __t876t__=0;
  uint64_t __t877t__=0;
  char __t878t__=0;
  uint64_t __t879t=0;
  uint64_t __t880t__=0;
  uint64_t __t881t=0;
  uint64_t __t882t__=0;
  uint64_t __t883t__=0;
  char* __t884t__unsafe_ptr=0;
  uint64_t __t884t__unsafe_size=0;
  uint16_t __t884t__unsafe_offset=0;
  uint16_t __t884t__unsafe_align=0;
  char* __t885t__unsafe_ptr=0;
  uint64_t __t885t__dat__pos=0;
  uint64_t __t885t__dat__length=0;
  char __t885t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t704t(_other,&__t872t__unsafe_ptr,&__t872t__dat__pos,&__t872t__dat__length,&__t872t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t872t__unsafe_ptr;
  other__dat__pos=__t872t__dat__pos;
  other__dat__length=__t872t__dat__length;
  other__dat__first=__t872t__dat__first;
  __t873t=CHARS__length;
  prev_prev_length=__t873t;
  len__t713t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t874t__);
  add__t175t(CHARS__length,__t874t__,&__t875t__);
  prev_length=__t875t__;
  eq__t148t(other__unsafe_ptr,CHARS__buffer__unsafe_ptr,&__t876t__);
  if(__t876t__){
  __t_errcode=21;
  goto __t_failure;
  }
  len__t605t(CHARS__buffer__unsafe_ptr,CHARS__buffer__unsafe_size,CHARS__buffer__unsafe_offset,CHARS__buffer__unsafe_align,&__t877t__);
  ge__t324t(prev_length,__t877t__,&__t878t__);
  if(__t878t__){
  __t879t=2;
  __t_errcode=div__t225t(prev_length,__t879t,&__t880t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t881t=1;
  add__t175t(__t880t__,__t881t,&__t882t__);
  add__t175t(prev_length,__t882t__,&__t883t__);
  __t_errcode=resize__t564t(&CHARS__buffer__unsafe_ptr,&CHARS__buffer__unsafe_size,&CHARS__buffer__unsafe_offset,&CHARS__buffer__unsafe_align,__t883t__,&__t884t__unsafe_ptr,&__t884t__unsafe_size,&__t884t__unsafe_offset,&__t884t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  CHARS__buffer__unsafe_ptr=__t884t__unsafe_ptr;
  CHARS__buffer__unsafe_size=__t884t__unsafe_size;
  CHARS__buffer__unsafe_offset=__t884t__unsafe_offset;
  CHARS__buffer__unsafe_align=__t884t__unsafe_align;
  }
  CHARS__length=prev_length;
  __t_errcode=copy__t805t(&CHARS__buffer__unsafe_ptr,&CHARS__buffer__unsafe_size,&CHARS__buffer__unsafe_offset,&CHARS__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t885t__unsafe_ptr,&__t885t__dat__pos,&__t885t__dat__length,&__t885t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1614t=CHARS__buffer__unsafe_ptr;
  *__t1615t=CHARS__buffer__unsafe_size;
  *__t1616t=CHARS__buffer__unsafe_offset;
  *__t1617t=CHARS__buffer__unsafe_align;
  *__t1618t=CHARS__length;
  *__t1619t=__t885t__unsafe_ptr;
  *__t1620t=__t885t__dat__pos;
  *__t1621t=__t885t__dat__length;
  *__t1622t=__t885t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t1509t(char** __t1623t, uint64_t* __t1624t, uint64_t* __t1625t, char* __t1626t, char** __t1627t, uint64_t* __t1628t, uint64_t* __t1629t, char* __t1630t) {
  char* __t1512t__unsafe_ptr=0;
  uint64_t __t1512t__unsafe_size=0;
  uint16_t __t1512t__unsafe_offset=0;
  uint16_t __t1512t__unsafe_align=0;
  char* __t1513t__unsafe_ptr=0;
  uint64_t __t1513t__unsafe_size=0;
  uint16_t __t1513t__unsafe_offset=0;
  uint16_t __t1513t__unsafe_align=0;
  char* __t1514t__buffer__unsafe_ptr=0;
  uint64_t __t1514t__buffer__unsafe_size=0;
  uint16_t __t1514t__buffer__unsafe_offset=0;
  uint16_t __t1514t__buffer__unsafe_align=0;
  uint64_t __t1514t__length=0;
  char __t1515t____t609t____t518t__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint16_t mem__buffer__unsafe_offset=0;
  uint16_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __t1516t=0;
  char* __t1517t__unsafe_ptr=0;
  uint64_t __t1517t__unsafe_size=0;
  uint16_t __t1517t__unsafe_offset=0;
  uint16_t __t1517t__unsafe_align=0;
  char* __t1519t__unsafe_ptr=0;
  uint64_t __t1519t__dat__pos=0;
  uint64_t __t1519t__dat__length=0;
  char __t1519t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1521t__unsafe_ptr=0;
  uint64_t __t1521t__dat__pos=0;
  uint64_t __t1521t__dat__length=0;
  char __t1521t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1510t(&__t1512t__unsafe_ptr,&__t1512t__unsafe_size,&__t1512t__unsafe_offset,&__t1512t__unsafe_align);
  __t1513t__unsafe_ptr=__t1512t__unsafe_ptr;
  __t1513t__unsafe_size=__t1512t__unsafe_size;
  __t1513t__unsafe_offset=__t1512t__unsafe_offset;
  __t1513t__unsafe_align=__t1512t__unsafe_align;
  __t_errcode=list__t606t(&__t1513t__unsafe_ptr,&__t1513t__unsafe_size,&__t1513t__unsafe_offset,&__t1513t__unsafe_align,&__t1514t__buffer__unsafe_ptr,&__t1514t__buffer__unsafe_size,&__t1514t__buffer__unsafe_offset,&__t1514t__buffer__unsafe_align,&__t1514t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1516t=100;
  __t_errcode=resize__t564t(&__t1514t__buffer__unsafe_ptr,&__t1514t__buffer__unsafe_size,&__t1514t__buffer__unsafe_offset,&__t1514t__buffer__unsafe_align,__t1516t,&__t1517t__unsafe_ptr,&__t1517t__unsafe_size,&__t1517t__unsafe_offset,&__t1517t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t871t(&__t1514t__buffer__unsafe_ptr,&__t1514t__buffer__unsafe_size,&__t1514t__buffer__unsafe_offset,&__t1514t__buffer__unsafe_align,&__t1514t__length,__t1518t,&__t1519t__unsafe_ptr,&__t1519t__dat__pos,&__t1519t__dat__length,&__t1519t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t1519t__dat__pos;
  s1__dat__length=__t1519t__dat__length;
  s1__dat__first=__t1519t__dat__first;
  __t_errcode=copy__t871t(&__t1514t__buffer__unsafe_ptr,&__t1514t__buffer__unsafe_size,&__t1514t__buffer__unsafe_offset,&__t1514t__buffer__unsafe_align,&__t1514t__length,__t1520t,&__t1521t__unsafe_ptr,&__t1521t__dat__pos,&__t1521t__dat__length,&__t1521t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t1521t__dat__pos;
  s2__dat__length=__t1521t__dat__length;
  s2__dat__first=__t1521t__dat__first;
  s1__unsafe_ptr=__t1514t__buffer__unsafe_ptr;
  s2__unsafe_ptr=__t1514t__buffer__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t443t(s1__unsafe_ptr,&__t1515t____t609t____t518t__);
  if(__t1515t____t609t____t518t__){
  free__t509t(&s1__unsafe_ptr);
  }
  __t_return:
  *__t1623t=s1__unsafe_ptr;
  *__t1624t=s1__dat__pos;
  *__t1625t=s1__dat__length;
  *__t1626t=s1__dat__first;
  *__t1627t=s2__unsafe_ptr;
  *__t1628t=s2__dat__pos;
  *__t1629t=s2__dat__length;
  *__t1630t=s2__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t847t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t848t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1522t() {
  char* __t1524t__s1__unsafe_ptr=0;
  uint64_t __t1524t__s1__dat__pos=0;
  uint64_t __t1524t__s1__dat__length=0;
  char __t1524t__s1__dat__first=0;
  char* __t1524t__s2__unsafe_ptr=0;
  uint64_t __t1524t__s2__dat__pos=0;
  uint64_t __t1524t__s2__dat__length=0;
  char __t1524t__s2__dat__first=0;
  char __t1525t____t1515t____t609t____t518t__=0;
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
  console__t366t();
  __t_errcode=test__t1509t(&__t1524t__s1__unsafe_ptr,&__t1524t__s1__dat__pos,&__t1524t__s1__dat__length,&__t1524t__s1__dat__first,&__t1524t__s2__unsafe_ptr,&__t1524t__s2__dat__pos,&__t1524t__s2__dat__length,&__t1524t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t1524t__s1__unsafe_ptr;
  s__s1__dat__pos=__t1524t__s1__dat__pos;
  s__s1__dat__length=__t1524t__s1__dat__length;
  s__s1__dat__first=__t1524t__s1__dat__first;
  s__s2__unsafe_ptr=__t1524t__s2__unsafe_ptr;
  s__s2__dat__pos=__t1524t__s2__dat__pos;
  s__s2__dat__length=__t1524t__s2__dat__length;
  s__s2__dat__first=__t1524t__s2__dat__first;
  print__t847t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t847t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:exists__t443t(__t1524t__s1__unsafe_ptr,&__t1525t____t1515t____t609t____t518t__);
  if(__t1525t____t1515t____t609t____t518t__){
  free__t509t(&__t1524t__s1__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1522t();return 0;}