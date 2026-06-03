#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1560t="123";
const char* const __t1562t="456";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1552t(char** __t1570t, uint64_t* __t1571t, uint16_t* __t1572t, uint16_t* __t1573t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1570t=unsafe_ptr;
  *__t1571t=unsafe_size;
  *__t1572t=unsafe_offset;
  *__t1573t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1574t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1574t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1575t) {
  char* allocated=*__t1575t;
  if(allocated){
  free(allocated);
  }
  *__t1575t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1576t) {
  int value=0;
  *__t1576t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1577t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1577t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1578t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1578t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1579t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1579t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1580t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1580t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1581t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1581t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1582t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1582t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1583t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1583t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1584t) {
  char* allocated=0;
  char __t497t__=0;
  char __t498t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t447t(allocated,&__t497t__);
  not__t28t(__t497t__,&__t498t__);
  if(__t498t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1584t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1585t, uint64_t* __t1586t, uint16_t* __t1587t, uint16_t* __t1588t, uint64_t size, char** __t1589t, uint64_t* __t1590t, uint16_t* __t1591t, uint16_t* __t1592t) {
  char* buffer__unsafe_ptr=*__t1585t;
  uint64_t buffer__unsafe_size=*__t1586t;
  uint16_t buffer__unsafe_offset=*__t1587t;
  uint16_t buffer__unsafe_align=*__t1588t;
  int __t533t=0;
  char __t534t__=0;
  char __t536t__=0;
  uint64_t __t537t=0;
  char __t538t__=0;
  uint64_t __t539t=0;
  uint64_t __t540t__=0;
  uint64_t __t541t__=0;
  uint64_t __t543t=0;
  char __t544t__=0;
  uint64_t __t545t__=0;
  uint64_t __t546t__=0;
  uint64_t bytes=0;
  uint64_t __t547t=0;
  char __t548t__=0;
  char* __t549t__=0;
  int __t550t=0;
  uint64_t __t551t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t536t__);
  if(__t536t__){
  __t537t=0;
  neq__t144t(size,__t537t,&__t538t__);
  if(__t538t__){
  __t539t=0;
  nat__t507t(buffer__unsafe_align,&__t540t__);
  mul__t199t(__t540t__,size,&__t541t__);
  zero__t504t(buffer__unsafe_ptr,__t539t,__t541t__);
  }
  goto __t_return;
  }
  __t543t=0;
  neq__t144t(buffer__unsafe_size,__t543t,&__t544t__);
  if(__t544t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t545t__);
  mul__t199t(__t545t__,size,&__t546t__);
  bytes=__t546t__;
  __t547t=0;
  eq__t120t(bytes,__t547t,&__t548t__);
  if(__t548t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t496t(bytes,&__t549t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t549t__;
  __t551t=0;
  zero__t504t(buffer__unsafe_ptr,__t551t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t534t__);
  if(__t534t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1585t=buffer__unsafe_ptr;
  *__t1586t=buffer__unsafe_size;
  *__t1587t=buffer__unsafe_offset;
  *__t1588t=buffer__unsafe_align;
  *__t1589t=buffer__unsafe_ptr;
  *__t1590t=buffer__unsafe_size;
  *__t1591t=buffer__unsafe_offset;
  *__t1592t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1593t) {
  goto __t_return;
  __t_return:
  *__t1593t=buffer__unsafe_size;
}

int list__t644t(char** __t1594t, uint64_t* __t1595t, uint16_t* __t1596t, uint16_t* __t1597t, char** __t1598t, uint64_t* __t1599t, uint16_t* __t1600t, uint16_t* __t1601t, uint64_t* __t1602t) {
  char* _buffer__unsafe_ptr=*__t1594t;
  uint64_t _buffer__unsafe_size=*__t1595t;
  uint16_t _buffer__unsafe_offset=*__t1596t;
  uint16_t _buffer__unsafe_align=*__t1597t;
  uint64_t __t645t=0;
  char* __t646t__unsafe_ptr=0;
  uint64_t __t646t__unsafe_size=0;
  uint16_t __t646t__unsafe_offset=0;
  uint16_t __t646t__unsafe_align=0;
  char __t647t____t534t__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __t648t__=0;
  uint64_t __t649t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t645t=1;
  __t_errcode=alloc__t532t(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__t645t,&__t646t__unsafe_ptr,&__t646t__unsafe_size,&__t646t__unsafe_offset,&__t646t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t646t__unsafe_ptr;
  buffer__unsafe_size=__t646t__unsafe_size;
  buffer__unsafe_offset=__t646t__unsafe_offset;
  buffer__unsafe_align=__t646t__unsafe_align;
  len__t643t(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__t648t__);
  __t649t=__t648t__;
  length=__t649t;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t647t____t534t__);
  if(__t647t____t534t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1594t=_buffer__unsafe_ptr;
  *__t1595t=_buffer__unsafe_size;
  *__t1596t=_buffer__unsafe_offset;
  *__t1597t=_buffer__unsafe_align;
  *__t1598t=buffer__unsafe_ptr;
  *__t1599t=buffer__unsafe_size;
  *__t1600t=buffer__unsafe_offset;
  *__t1601t=buffer__unsafe_align;
  *__t1602t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1603t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1603t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1604t) {
  *__t1604t=to;
}

static inline __attribute__((always_inline)) int realloc__t499t(char* allocated, uint64_t bytes, char** __t1605t) {
  char* new_allocated=0;
  char __t500t__=0;
  char __t501t__=0;
  char* __t502t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t447t(new_allocated,&__t500t__);
  not__t28t(__t500t__,&__t501t__);
  if(__t501t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t22t(new_allocated,allocated,&__t502t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1605t=__t502t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1606t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1606t=z;
}

static inline __attribute__((always_inline)) int resize__t602t(char** __t1607t, uint64_t* __t1608t, uint16_t* __t1609t, uint16_t* __t1610t, uint64_t size, char** __t1611t, uint64_t* __t1612t, uint16_t* __t1613t, uint16_t* __t1614t) {
  char* buffer__unsafe_ptr=*__t1607t;
  uint64_t buffer__unsafe_size=*__t1608t;
  uint16_t buffer__unsafe_offset=*__t1609t;
  uint16_t buffer__unsafe_align=*__t1610t;
  char __t603t__=0;
  uint64_t __t604t=0;
  char __t605t__=0;
  uint64_t __t606t__=0;
  uint64_t __t607t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t608t__=0;
  uint64_t __t609t__=0;
  uint64_t bytes=0;
  char* __t610t__=0;
  char __t611t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(buffer__unsafe_size,size,&__t603t__);
  if(__t603t__){
  goto __t_return;
  }
  __t604t=0;
  eq__t120t(buffer__unsafe_size,__t604t,&__t605t__);
  if(__t605t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t606t__);
  mul__t199t(buffer__unsafe_size,__t606t__,&__t607t__);
  prev_bytes=__t607t__;
  buffer__unsafe_size=size;
  nat__t507t(buffer__unsafe_align,&__t608t__);
  mul__t199t(__t608t__,size,&__t609t__);
  bytes=__t609t__;
  __t_errcode=realloc__t499t(buffer__unsafe_ptr,bytes,&__t610t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t610t__;
  lt__t252t(prev_bytes,bytes,&__t611t__);
  if(__t611t__){
  zero__t504t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1607t=buffer__unsafe_ptr;
  *__t1608t=buffer__unsafe_size;
  *__t1609t=buffer__unsafe_offset;
  *__t1610t=buffer__unsafe_align;
  *__t1611t=buffer__unsafe_ptr;
  *__t1612t=buffer__unsafe_size;
  *__t1613t=buffer__unsafe_offset;
  *__t1614t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t676t(char** __t1615t, uint64_t* __t1616t, uint16_t* __t1617t, uint16_t* __t1618t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1615t=unsafe_ptr;
  *__t1616t=unsafe_size;
  *__t1617t=unsafe_offset;
  *__t1618t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1619t) {
  *__t1619t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1620t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1620t=z;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1621t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1621t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t636t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1622t) {
  char __t637t__=0;
  uint64_t __t638t__=0;
  uint64_t __t639t__=0;
  uint64_t __t640t__=0;
  uint64_t __t641t__=0;
  char* __t642t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t637t__);
  if(__t637t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t638t__);
  mul__t199t(i,__t638t__,&__t639t__);
  nat__t507t(buffer__unsafe_offset,&__t640t__);
  add__t175t(__t639t__,__t640t__,&__t641t__);
  add__t505t(buffer__unsafe_ptr,__t641t__,&__t642t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1622t=__t642t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t684t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1623t, uint64_t* __t1624t, uint64_t* __t1625t, char* __t1626t) {
  goto __t_return;
  __t_return:
  *__t1623t=unsafe_ptr;
  *__t1624t=dat__pos;
  *__t1625t=dat__length;
  *__t1626t=dat__first;
}

static inline __attribute__((always_inline)) int str__t688t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1627t, uint64_t* __t1628t, uint64_t* __t1629t, char* __t1630t) {
  char* unsafe_ptr=0;
  uint64_t __t689t__=0;
  uint64_t __t690t=0;
  char __t691t__=0;
  uint64_t __t692t__=0;
  uint64_t __t693t=0;
  char __t694t__=0;
  char* __t695t__unsafe_ptr=0;
  uint64_t __t695t__dat__pos=0;
  uint64_t __t695t__dat__length=0;
  char __t695t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t507t(buf__unsafe_align,&__t689t__);
  __t690t=1;
  neq__t144t(__t689t__,__t690t,&__t691t__);
  if(__t691t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t692t__);
  __t693t=0;
  neq__t144t(__t692t__,__t693t,&__t694t__);
  if(__t694t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t684t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t695t__unsafe_ptr,&__t695t__dat__pos,&__t695t__dat__length,&__t695t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1627t=__t695t__unsafe_ptr;
  *__t1628t=__t695t__dat__pos;
  *__t1629t=__t695t__dat__length;
  *__t1630t=__t695t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t723t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1631t, uint64_t* __t1632t, uint64_t* __t1633t, char* __t1634t) {
  uint64_t __t724t=0;
  char __t725t__=0;
  char* __t726t__=0;
  char __t727t__value=0;
  char first=0;
  char* __t728t__unsafe_ptr=0;
  uint64_t __t728t__dat__pos=0;
  uint64_t __t728t__dat__length=0;
  char __t728t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t724t=0;
  neq__t144t(length,__t724t,&__t725t__);
  if(__t725t__){
  __t_errcode=get__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t726t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t726t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t727t__value,__t726t__,1);
  first=__t727t__value;
  }
  __t_errcode=str__t688t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t728t__unsafe_ptr,&__t728t__dat__pos,&__t728t__dat__length,&__t728t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1631t=__t728t__unsafe_ptr;
  *__t1632t=__t728t__dat__pos;
  *__t1633t=__t728t__dat__length;
  *__t1634t=__t728t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t746t(const char* c, char** __t1635t, uint64_t* __t1636t, uint64_t* __t1637t, char* __t1638t) {
  char* __t747t__unsafe_ptr=0;
  uint64_t __t747t__unsafe_size=0;
  uint16_t __t747t__unsafe_offset=0;
  uint16_t __t747t__unsafe_align=0;
  char* __t748t__unsafe_ptr=0;
  uint64_t __t748t__unsafe_size=0;
  uint16_t __t748t__unsafe_offset=0;
  uint16_t __t748t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t749t__=0;
  uint64_t length=0;
  uint64_t __t750t=0;
  uint64_t __t751t__=0;
  uint64_t __t752t=0;
  char* __t754t__unsafe_ptr=0;
  uint64_t __t754t__dat__pos=0;
  uint64_t __t754t__dat__length=0;
  char __t754t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t676t(&__t747t__unsafe_ptr,&__t747t__unsafe_size,&__t747t__unsafe_offset,&__t747t__unsafe_align);
  __t748t__unsafe_ptr=__t747t__unsafe_ptr;
  __t748t__unsafe_size=__t747t__unsafe_size;
  __t748t__unsafe_offset=__t747t__unsafe_offset;
  __t748t__unsafe_align=__t747t__unsafe_align;
  buf__unsafe_ptr=__t748t__unsafe_ptr;
  buf__unsafe_size=__t748t__unsafe_size;
  buf__unsafe_offset=__t748t__unsafe_offset;
  buf__unsafe_align=__t748t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t749t__);
  buf__unsafe_ptr=__t749t__;
  if(c){
  length=strlen(c);
  }
  __t750t=1;
  add__t175t(length,__t750t,&__t751t__);
  buf__unsafe_size=__t751t__;
  __t752t=0;
  __t_errcode=str__t723t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t752t,length,&__t754t__unsafe_ptr,&__t754t__dat__pos,&__t754t__dat__length,&__t754t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1635t=__t754t__unsafe_ptr;
  *__t1636t=__t754t__dat__pos;
  *__t1637t=__t754t__dat__length;
  *__t1638t=__t754t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t755t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1639t) {
  goto __t_return;
  __t_return:
  *__t1639t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t148t(char* x, char* y, char* __t1640t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1640t=z;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t1641t) {
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
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1641t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t719t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1642t, uint64_t* __t1643t, uint64_t* __t1644t, char* __t1645t) {
  goto __t_return;
  __t_return:
  *__t1642t=other__unsafe_ptr;
  *__t1643t=other__dat__pos;
  *__t1644t=other__dat__length;
  *__t1645t=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1646t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1646t=z;
}

static inline __attribute__((always_inline)) int copy__t847t(char** __t1647t, uint64_t* __t1648t, uint16_t* __t1649t, uint16_t* __t1650t, uint64_t* __t1651t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1652t, uint64_t* __t1653t, uint64_t* __t1654t, char* __t1655t) {
  char* CHARS__buf__unsafe_ptr=*__t1647t;
  uint64_t CHARS__buf__unsafe_size=*__t1648t;
  uint16_t CHARS__buf__unsafe_offset=*__t1649t;
  uint16_t CHARS__buf__unsafe_align=*__t1650t;
  uint64_t CHARS__pos=*__t1651t;
  char* __t848t__unsafe_ptr=0;
  uint64_t __t848t__dat__pos=0;
  uint64_t __t848t__dat__length=0;
  char __t848t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t849t__=0;
  uint64_t __t850t__=0;
  uint64_t next_pos=0;
  uint64_t __t851t__=0;
  char __t852t__=0;
  uint64_t __t853t=0;
  uint64_t __t854t__=0;
  uint64_t prev_pos=0;
  char* __t855t__unsafe_ptr=0;
  uint64_t __t855t__dat__pos=0;
  uint64_t __t855t__dat__length=0;
  char __t855t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t719t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t848t__unsafe_ptr,&__t848t__dat__pos,&__t848t__dat__length,&__t848t__dat__first);
  other__unsafe_ptr=__t848t__unsafe_ptr;
  other__dat__pos=__t848t__dat__pos;
  other__dat__length=__t848t__dat__length;
  other__dat__first=__t848t__dat__first;
  len__t755t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t849t__);
  add__t175t(CHARS__pos,__t849t__,&__t850t__);
  next_pos=__t850t__;
  len__t643t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t851t__);
  gt__t276t(next_pos,__t851t__,&__t852t__);
  if(__t852t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t853t=0;
  add__t175t(CHARS__pos,__t853t,&__t854t__);
  prev_pos=__t854t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t688t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t855t__unsafe_ptr,&__t855t__dat__pos,&__t855t__dat__length,&__t855t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1647t=CHARS__buf__unsafe_ptr;
  *__t1648t=CHARS__buf__unsafe_size;
  *__t1649t=CHARS__buf__unsafe_offset;
  *__t1650t=CHARS__buf__unsafe_align;
  *__t1651t=CHARS__pos;
  *__t1652t=__t855t__unsafe_ptr;
  *__t1653t=__t855t__dat__pos;
  *__t1654t=__t855t__dat__length;
  *__t1655t=__t855t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t913t(char** __t1656t, uint64_t* __t1657t, uint16_t* __t1658t, uint16_t* __t1659t, uint64_t* __t1660t, const char* _other, char** __t1661t, uint64_t* __t1662t, uint64_t* __t1663t, char* __t1664t) {
  char* CHARS__buffer__unsafe_ptr=*__t1656t;
  uint64_t CHARS__buffer__unsafe_size=*__t1657t;
  uint16_t CHARS__buffer__unsafe_offset=*__t1658t;
  uint16_t CHARS__buffer__unsafe_align=*__t1659t;
  uint64_t CHARS__length=*__t1660t;
  char* __t914t__unsafe_ptr=0;
  uint64_t __t914t__dat__pos=0;
  uint64_t __t914t__dat__length=0;
  char __t914t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t915t=0;
  uint64_t prev_prev_length=0;
  uint64_t __t916t__=0;
  uint64_t __t917t__=0;
  uint64_t prev_length=0;
  char __t918t__=0;
  uint64_t __t919t__=0;
  char __t920t__=0;
  uint64_t __t921t=0;
  uint64_t __t922t__=0;
  uint64_t __t923t=0;
  uint64_t __t924t__=0;
  uint64_t __t925t__=0;
  char* __t926t__unsafe_ptr=0;
  uint64_t __t926t__unsafe_size=0;
  uint16_t __t926t__unsafe_offset=0;
  uint16_t __t926t__unsafe_align=0;
  char* __t927t__unsafe_ptr=0;
  uint64_t __t927t__dat__pos=0;
  uint64_t __t927t__dat__length=0;
  char __t927t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t746t(_other,&__t914t__unsafe_ptr,&__t914t__dat__pos,&__t914t__dat__length,&__t914t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t914t__unsafe_ptr;
  other__dat__pos=__t914t__dat__pos;
  other__dat__length=__t914t__dat__length;
  other__dat__first=__t914t__dat__first;
  __t915t=CHARS__length;
  prev_prev_length=__t915t;
  len__t755t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t916t__);
  add__t175t(CHARS__length,__t916t__,&__t917t__);
  prev_length=__t917t__;
  eq__t148t(other__unsafe_ptr,CHARS__buffer__unsafe_ptr,&__t918t__);
  if(__t918t__){
  __t_errcode=21;
  goto __t_failure;
  }
  len__t643t(CHARS__buffer__unsafe_ptr,CHARS__buffer__unsafe_size,CHARS__buffer__unsafe_offset,CHARS__buffer__unsafe_align,&__t919t__);
  ge__t324t(prev_length,__t919t__,&__t920t__);
  if(__t920t__){
  __t921t=2;
  __t_errcode=div__t225t(prev_length,__t921t,&__t922t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t923t=1;
  add__t175t(__t922t__,__t923t,&__t924t__);
  add__t175t(prev_length,__t924t__,&__t925t__);
  __t_errcode=resize__t602t(&CHARS__buffer__unsafe_ptr,&CHARS__buffer__unsafe_size,&CHARS__buffer__unsafe_offset,&CHARS__buffer__unsafe_align,__t925t__,&__t926t__unsafe_ptr,&__t926t__unsafe_size,&__t926t__unsafe_offset,&__t926t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  CHARS__buffer__unsafe_ptr=__t926t__unsafe_ptr;
  CHARS__buffer__unsafe_size=__t926t__unsafe_size;
  CHARS__buffer__unsafe_offset=__t926t__unsafe_offset;
  CHARS__buffer__unsafe_align=__t926t__unsafe_align;
  }
  CHARS__length=prev_length;
  __t_errcode=copy__t847t(&CHARS__buffer__unsafe_ptr,&CHARS__buffer__unsafe_size,&CHARS__buffer__unsafe_offset,&CHARS__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t927t__unsafe_ptr,&__t927t__dat__pos,&__t927t__dat__length,&__t927t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1656t=CHARS__buffer__unsafe_ptr;
  *__t1657t=CHARS__buffer__unsafe_size;
  *__t1658t=CHARS__buffer__unsafe_offset;
  *__t1659t=CHARS__buffer__unsafe_align;
  *__t1660t=CHARS__length;
  *__t1661t=__t927t__unsafe_ptr;
  *__t1662t=__t927t__dat__pos;
  *__t1663t=__t927t__dat__length;
  *__t1664t=__t927t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t1551t(char** __t1665t, uint64_t* __t1666t, uint64_t* __t1667t, char* __t1668t, char** __t1669t, uint64_t* __t1670t, uint64_t* __t1671t, char* __t1672t) {
  char* __t1554t__unsafe_ptr=0;
  uint64_t __t1554t__unsafe_size=0;
  uint16_t __t1554t__unsafe_offset=0;
  uint16_t __t1554t__unsafe_align=0;
  char* __t1555t__unsafe_ptr=0;
  uint64_t __t1555t__unsafe_size=0;
  uint16_t __t1555t__unsafe_offset=0;
  uint16_t __t1555t__unsafe_align=0;
  char* __t1556t__buffer__unsafe_ptr=0;
  uint64_t __t1556t__buffer__unsafe_size=0;
  uint16_t __t1556t__buffer__unsafe_offset=0;
  uint16_t __t1556t__buffer__unsafe_align=0;
  uint64_t __t1556t__length=0;
  char __t1557t____t647t____t534t__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint16_t mem__buffer__unsafe_offset=0;
  uint16_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __t1558t=0;
  char* __t1559t__unsafe_ptr=0;
  uint64_t __t1559t__unsafe_size=0;
  uint16_t __t1559t__unsafe_offset=0;
  uint16_t __t1559t__unsafe_align=0;
  char* __t1561t__unsafe_ptr=0;
  uint64_t __t1561t__dat__pos=0;
  uint64_t __t1561t__dat__length=0;
  char __t1561t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1563t__unsafe_ptr=0;
  uint64_t __t1563t__dat__pos=0;
  uint64_t __t1563t__dat__length=0;
  char __t1563t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1552t(&__t1554t__unsafe_ptr,&__t1554t__unsafe_size,&__t1554t__unsafe_offset,&__t1554t__unsafe_align);
  __t1555t__unsafe_ptr=__t1554t__unsafe_ptr;
  __t1555t__unsafe_size=__t1554t__unsafe_size;
  __t1555t__unsafe_offset=__t1554t__unsafe_offset;
  __t1555t__unsafe_align=__t1554t__unsafe_align;
  __t_errcode=list__t644t(&__t1555t__unsafe_ptr,&__t1555t__unsafe_size,&__t1555t__unsafe_offset,&__t1555t__unsafe_align,&__t1556t__buffer__unsafe_ptr,&__t1556t__buffer__unsafe_size,&__t1556t__buffer__unsafe_offset,&__t1556t__buffer__unsafe_align,&__t1556t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1558t=100;
  __t_errcode=resize__t602t(&__t1556t__buffer__unsafe_ptr,&__t1556t__buffer__unsafe_size,&__t1556t__buffer__unsafe_offset,&__t1556t__buffer__unsafe_align,__t1558t,&__t1559t__unsafe_ptr,&__t1559t__unsafe_size,&__t1559t__unsafe_offset,&__t1559t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t913t(&__t1556t__buffer__unsafe_ptr,&__t1556t__buffer__unsafe_size,&__t1556t__buffer__unsafe_offset,&__t1556t__buffer__unsafe_align,&__t1556t__length,__t1560t,&__t1561t__unsafe_ptr,&__t1561t__dat__pos,&__t1561t__dat__length,&__t1561t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t1561t__dat__pos;
  s1__dat__length=__t1561t__dat__length;
  s1__dat__first=__t1561t__dat__first;
  __t_errcode=copy__t913t(&__t1556t__buffer__unsafe_ptr,&__t1556t__buffer__unsafe_size,&__t1556t__buffer__unsafe_offset,&__t1556t__buffer__unsafe_align,&__t1556t__length,__t1562t,&__t1563t__unsafe_ptr,&__t1563t__dat__pos,&__t1563t__dat__length,&__t1563t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t1563t__dat__pos;
  s2__dat__length=__t1563t__dat__length;
  s2__dat__first=__t1563t__dat__first;
  s1__unsafe_ptr=__t1556t__buffer__unsafe_ptr;
  s2__unsafe_ptr=__t1556t__buffer__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t447t(s2__unsafe_ptr,&__t1557t____t647t____t534t__);
  if(__t1557t____t647t____t534t__){
  free__t503t(&s2__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1665t=s1__unsafe_ptr;
  *__t1666t=s1__dat__pos;
  *__t1667t=s1__dat__length;
  *__t1668t=s1__dat__first;
  *__t1669t=s2__unsafe_ptr;
  *__t1670t=s2__dat__pos;
  *__t1671t=s2__dat__length;
  *__t1672t=s2__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t889t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t890t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1564t() {
  char* __t1566t__s1__unsafe_ptr=0;
  uint64_t __t1566t__s1__dat__pos=0;
  uint64_t __t1566t__s1__dat__length=0;
  char __t1566t__s1__dat__first=0;
  char* __t1566t__s2__unsafe_ptr=0;
  uint64_t __t1566t__s2__dat__pos=0;
  uint64_t __t1566t__s2__dat__length=0;
  char __t1566t__s2__dat__first=0;
  char __t1567t____t1557t____t647t____t534t__=0;
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
  __t_errcode=test__t1551t(&__t1566t__s1__unsafe_ptr,&__t1566t__s1__dat__pos,&__t1566t__s1__dat__length,&__t1566t__s1__dat__first,&__t1566t__s2__unsafe_ptr,&__t1566t__s2__dat__pos,&__t1566t__s2__dat__length,&__t1566t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t1566t__s1__unsafe_ptr;
  s__s1__dat__pos=__t1566t__s1__dat__pos;
  s__s1__dat__length=__t1566t__s1__dat__length;
  s__s1__dat__first=__t1566t__s1__dat__first;
  s__s2__unsafe_ptr=__t1566t__s2__unsafe_ptr;
  s__s2__dat__pos=__t1566t__s2__dat__pos;
  s__s2__dat__length=__t1566t__s2__dat__length;
  s__s2__dat__first=__t1566t__s2__dat__first;
  print__t889t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t889t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1566t__s2__unsafe_ptr,&__t1567t____t1557t____t647t____t534t__);
  if(__t1567t____t1557t____t647t____t534t__){
  free__t503t(&__t1566t__s2__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1564t();return 0;}