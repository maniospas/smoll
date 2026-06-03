#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1566t="456";
const char* const __t382t="\n";
const char* const __t1564t="123";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1556t(char** __t1574t, uint64_t* __t1575t, uint16_t* __t1576t, uint16_t* __t1577t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1574t=unsafe_ptr;
  *__t1575t=unsafe_size;
  *__t1576t=unsafe_offset;
  *__t1577t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1578t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1578t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1579t) {
  char* allocated=*__t1579t;
  if(allocated){
  free(allocated);
  }
  *__t1579t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1580t) {
  int value=0;
  *__t1580t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1581t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1581t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1582t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1582t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1583t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1583t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1584t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1584t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1585t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1585t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1586t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1586t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1587t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1587t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1588t) {
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
  *__t1588t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1589t, uint64_t* __t1590t, uint16_t* __t1591t, uint16_t* __t1592t, uint64_t size, char** __t1593t, uint64_t* __t1594t, uint16_t* __t1595t, uint16_t* __t1596t) {
  char* buffer__unsafe_ptr=*__t1589t;
  uint64_t buffer__unsafe_size=*__t1590t;
  uint16_t buffer__unsafe_offset=*__t1591t;
  uint16_t buffer__unsafe_align=*__t1592t;
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
  *__t1589t=buffer__unsafe_ptr;
  *__t1590t=buffer__unsafe_size;
  *__t1591t=buffer__unsafe_offset;
  *__t1592t=buffer__unsafe_align;
  *__t1593t=buffer__unsafe_ptr;
  *__t1594t=buffer__unsafe_size;
  *__t1595t=buffer__unsafe_offset;
  *__t1596t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1597t) {
  goto __t_return;
  __t_return:
  *__t1597t=buffer__unsafe_size;
}

int list__t648t(char** __t1598t, uint64_t* __t1599t, uint16_t* __t1600t, uint16_t* __t1601t, char** __t1602t, uint64_t* __t1603t, uint16_t* __t1604t, uint16_t* __t1605t, uint64_t* __t1606t) {
  char* _buffer__unsafe_ptr=*__t1598t;
  uint64_t _buffer__unsafe_size=*__t1599t;
  uint16_t _buffer__unsafe_offset=*__t1600t;
  uint16_t _buffer__unsafe_align=*__t1601t;
  uint64_t __t649t=0;
  char* __t650t__unsafe_ptr=0;
  uint64_t __t650t__unsafe_size=0;
  uint16_t __t650t__unsafe_offset=0;
  uint16_t __t650t__unsafe_align=0;
  char __t651t____t534t__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __t652t__=0;
  uint64_t __t653t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t649t=1;
  __t_errcode=alloc__t532t(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__t649t,&__t650t__unsafe_ptr,&__t650t__unsafe_size,&__t650t__unsafe_offset,&__t650t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t650t__unsafe_ptr;
  buffer__unsafe_size=__t650t__unsafe_size;
  buffer__unsafe_offset=__t650t__unsafe_offset;
  buffer__unsafe_align=__t650t__unsafe_align;
  len__t647t(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__t652t__);
  __t653t=__t652t__;
  length=__t653t;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t651t____t534t__);
  if(__t651t____t534t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1598t=_buffer__unsafe_ptr;
  *__t1599t=_buffer__unsafe_size;
  *__t1600t=_buffer__unsafe_offset;
  *__t1601t=_buffer__unsafe_align;
  *__t1602t=buffer__unsafe_ptr;
  *__t1603t=buffer__unsafe_size;
  *__t1604t=buffer__unsafe_offset;
  *__t1605t=buffer__unsafe_align;
  *__t1606t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1607t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1607t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1608t) {
  *__t1608t=to;
}

static inline __attribute__((always_inline)) int realloc__t499t(char* allocated, uint64_t bytes, char** __t1609t) {
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
  *__t1609t=__t502t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1610t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1610t=z;
}

static inline __attribute__((always_inline)) int resize__t602t(char** __t1611t, uint64_t* __t1612t, uint16_t* __t1613t, uint16_t* __t1614t, uint64_t size, char** __t1615t, uint64_t* __t1616t, uint16_t* __t1617t, uint16_t* __t1618t) {
  char* buffer__unsafe_ptr=*__t1611t;
  uint64_t buffer__unsafe_size=*__t1612t;
  uint16_t buffer__unsafe_offset=*__t1613t;
  uint16_t buffer__unsafe_align=*__t1614t;
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
  *__t1611t=buffer__unsafe_ptr;
  *__t1612t=buffer__unsafe_size;
  *__t1613t=buffer__unsafe_offset;
  *__t1614t=buffer__unsafe_align;
  *__t1615t=buffer__unsafe_ptr;
  *__t1616t=buffer__unsafe_size;
  *__t1617t=buffer__unsafe_offset;
  *__t1618t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t680t(char** __t1619t, uint64_t* __t1620t, uint16_t* __t1621t, uint16_t* __t1622t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1619t=unsafe_ptr;
  *__t1620t=unsafe_size;
  *__t1621t=unsafe_offset;
  *__t1622t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1623t) {
  *__t1623t=to;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1624t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1624t=z;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1625t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1625t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1626t) {
  char __t641t__=0;
  uint64_t __t642t__=0;
  uint64_t __t643t__=0;
  uint64_t __t644t__=0;
  uint64_t __t645t__=0;
  char* __t646t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t641t__);
  if(__t641t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t642t__);
  mul__t199t(i,__t642t__,&__t643t__);
  nat__t507t(buffer__unsafe_offset,&__t644t__);
  add__t175t(__t643t__,__t644t__,&__t645t__);
  add__t505t(buffer__unsafe_ptr,__t645t__,&__t646t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1626t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t688t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1627t, uint64_t* __t1628t, uint64_t* __t1629t, char* __t1630t) {
  goto __t_return;
  __t_return:
  *__t1627t=unsafe_ptr;
  *__t1628t=dat__pos;
  *__t1629t=dat__length;
  *__t1630t=dat__first;
}

static inline __attribute__((always_inline)) int str__t692t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1631t, uint64_t* __t1632t, uint64_t* __t1633t, char* __t1634t) {
  char* unsafe_ptr=0;
  uint64_t __t693t__=0;
  uint64_t __t694t=0;
  char __t695t__=0;
  uint64_t __t696t__=0;
  uint64_t __t697t=0;
  char __t698t__=0;
  char* __t699t__unsafe_ptr=0;
  uint64_t __t699t__dat__pos=0;
  uint64_t __t699t__dat__length=0;
  char __t699t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t507t(buf__unsafe_align,&__t693t__);
  __t694t=1;
  neq__t144t(__t693t__,__t694t,&__t695t__);
  if(__t695t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t696t__);
  __t697t=0;
  neq__t144t(__t696t__,__t697t,&__t698t__);
  if(__t698t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t688t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t699t__unsafe_ptr,&__t699t__dat__pos,&__t699t__dat__length,&__t699t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1631t=__t699t__unsafe_ptr;
  *__t1632t=__t699t__dat__pos;
  *__t1633t=__t699t__dat__length;
  *__t1634t=__t699t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t727t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1635t, uint64_t* __t1636t, uint64_t* __t1637t, char* __t1638t) {
  uint64_t __t728t=0;
  char __t729t__=0;
  char* __t730t__=0;
  char __t731t__value=0;
  char first=0;
  char* __t732t__unsafe_ptr=0;
  uint64_t __t732t__dat__pos=0;
  uint64_t __t732t__dat__length=0;
  char __t732t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t728t=0;
  neq__t144t(length,__t728t,&__t729t__);
  if(__t729t__){
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t730t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t730t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t731t__value,__t730t__,1);
  first=__t731t__value;
  }
  __t_errcode=str__t692t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t732t__unsafe_ptr,&__t732t__dat__pos,&__t732t__dat__length,&__t732t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1635t=__t732t__unsafe_ptr;
  *__t1636t=__t732t__dat__pos;
  *__t1637t=__t732t__dat__length;
  *__t1638t=__t732t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t750t(const char* c, char** __t1639t, uint64_t* __t1640t, uint64_t* __t1641t, char* __t1642t) {
  char* __t751t__unsafe_ptr=0;
  uint64_t __t751t__unsafe_size=0;
  uint16_t __t751t__unsafe_offset=0;
  uint16_t __t751t__unsafe_align=0;
  char* __t752t__unsafe_ptr=0;
  uint64_t __t752t__unsafe_size=0;
  uint16_t __t752t__unsafe_offset=0;
  uint16_t __t752t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t753t__=0;
  uint64_t length=0;
  uint64_t __t754t=0;
  uint64_t __t755t__=0;
  uint64_t __t756t=0;
  char* __t758t__unsafe_ptr=0;
  uint64_t __t758t__dat__pos=0;
  uint64_t __t758t__dat__length=0;
  char __t758t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t680t(&__t751t__unsafe_ptr,&__t751t__unsafe_size,&__t751t__unsafe_offset,&__t751t__unsafe_align);
  __t752t__unsafe_ptr=__t751t__unsafe_ptr;
  __t752t__unsafe_size=__t751t__unsafe_size;
  __t752t__unsafe_offset=__t751t__unsafe_offset;
  __t752t__unsafe_align=__t751t__unsafe_align;
  buf__unsafe_ptr=__t752t__unsafe_ptr;
  buf__unsafe_size=__t752t__unsafe_size;
  buf__unsafe_offset=__t752t__unsafe_offset;
  buf__unsafe_align=__t752t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t753t__);
  buf__unsafe_ptr=__t753t__;
  if(c){
  length=strlen(c);
  }
  __t754t=1;
  add__t175t(length,__t754t,&__t755t__);
  buf__unsafe_size=__t755t__;
  __t756t=0;
  __t_errcode=str__t727t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t756t,length,&__t758t__unsafe_ptr,&__t758t__dat__pos,&__t758t__dat__length,&__t758t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1639t=__t758t__unsafe_ptr;
  *__t1640t=__t758t__dat__pos;
  *__t1641t=__t758t__dat__length;
  *__t1642t=__t758t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t759t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1643t) {
  goto __t_return;
  __t_return:
  *__t1643t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t148t(char* x, char* y, char* __t1644t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1644t=z;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t1645t) {
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
  *__t1645t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t723t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1646t, uint64_t* __t1647t, uint64_t* __t1648t, char* __t1649t) {
  goto __t_return;
  __t_return:
  *__t1646t=other__unsafe_ptr;
  *__t1647t=other__dat__pos;
  *__t1648t=other__dat__length;
  *__t1649t=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1650t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1650t=z;
}

static inline __attribute__((always_inline)) int copy__t851t(char** __t1651t, uint64_t* __t1652t, uint16_t* __t1653t, uint16_t* __t1654t, uint64_t* __t1655t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1656t, uint64_t* __t1657t, uint64_t* __t1658t, char* __t1659t) {
  char* CHARS__buf__unsafe_ptr=*__t1651t;
  uint64_t CHARS__buf__unsafe_size=*__t1652t;
  uint16_t CHARS__buf__unsafe_offset=*__t1653t;
  uint16_t CHARS__buf__unsafe_align=*__t1654t;
  uint64_t CHARS__pos=*__t1655t;
  char* __t852t__unsafe_ptr=0;
  uint64_t __t852t__dat__pos=0;
  uint64_t __t852t__dat__length=0;
  char __t852t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t853t__=0;
  uint64_t __t854t__=0;
  uint64_t next_pos=0;
  uint64_t __t855t__=0;
  char __t856t__=0;
  uint64_t __t857t=0;
  uint64_t __t858t__=0;
  uint64_t prev_pos=0;
  char* __t859t__unsafe_ptr=0;
  uint64_t __t859t__dat__pos=0;
  uint64_t __t859t__dat__length=0;
  char __t859t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t723t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t852t__unsafe_ptr,&__t852t__dat__pos,&__t852t__dat__length,&__t852t__dat__first);
  other__unsafe_ptr=__t852t__unsafe_ptr;
  other__dat__pos=__t852t__dat__pos;
  other__dat__length=__t852t__dat__length;
  other__dat__first=__t852t__dat__first;
  len__t759t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t853t__);
  add__t175t(CHARS__pos,__t853t__,&__t854t__);
  next_pos=__t854t__;
  len__t647t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t855t__);
  gt__t276t(next_pos,__t855t__,&__t856t__);
  if(__t856t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t857t=0;
  add__t175t(CHARS__pos,__t857t,&__t858t__);
  prev_pos=__t858t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t692t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t859t__unsafe_ptr,&__t859t__dat__pos,&__t859t__dat__length,&__t859t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1651t=CHARS__buf__unsafe_ptr;
  *__t1652t=CHARS__buf__unsafe_size;
  *__t1653t=CHARS__buf__unsafe_offset;
  *__t1654t=CHARS__buf__unsafe_align;
  *__t1655t=CHARS__pos;
  *__t1656t=__t859t__unsafe_ptr;
  *__t1657t=__t859t__dat__pos;
  *__t1658t=__t859t__dat__length;
  *__t1659t=__t859t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t917t(char** __t1660t, uint64_t* __t1661t, uint16_t* __t1662t, uint16_t* __t1663t, uint64_t* __t1664t, const char* _other, char** __t1665t, uint64_t* __t1666t, uint64_t* __t1667t, char* __t1668t) {
  char* CHARS__buffer__unsafe_ptr=*__t1660t;
  uint64_t CHARS__buffer__unsafe_size=*__t1661t;
  uint16_t CHARS__buffer__unsafe_offset=*__t1662t;
  uint16_t CHARS__buffer__unsafe_align=*__t1663t;
  uint64_t CHARS__length=*__t1664t;
  char* __t918t__unsafe_ptr=0;
  uint64_t __t918t__dat__pos=0;
  uint64_t __t918t__dat__length=0;
  char __t918t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t919t=0;
  uint64_t prev_prev_length=0;
  uint64_t __t920t__=0;
  uint64_t __t921t__=0;
  uint64_t prev_length=0;
  char __t922t__=0;
  uint64_t __t923t__=0;
  char __t924t__=0;
  uint64_t __t925t=0;
  uint64_t __t926t__=0;
  uint64_t __t927t=0;
  uint64_t __t928t__=0;
  uint64_t __t929t__=0;
  char* __t930t__unsafe_ptr=0;
  uint64_t __t930t__unsafe_size=0;
  uint16_t __t930t__unsafe_offset=0;
  uint16_t __t930t__unsafe_align=0;
  char* __t931t__unsafe_ptr=0;
  uint64_t __t931t__dat__pos=0;
  uint64_t __t931t__dat__length=0;
  char __t931t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t750t(_other,&__t918t__unsafe_ptr,&__t918t__dat__pos,&__t918t__dat__length,&__t918t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t918t__unsafe_ptr;
  other__dat__pos=__t918t__dat__pos;
  other__dat__length=__t918t__dat__length;
  other__dat__first=__t918t__dat__first;
  __t919t=CHARS__length;
  prev_prev_length=__t919t;
  len__t759t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t920t__);
  add__t175t(CHARS__length,__t920t__,&__t921t__);
  prev_length=__t921t__;
  eq__t148t(other__unsafe_ptr,CHARS__buffer__unsafe_ptr,&__t922t__);
  if(__t922t__){
  __t_errcode=21;
  goto __t_failure;
  }
  len__t647t(CHARS__buffer__unsafe_ptr,CHARS__buffer__unsafe_size,CHARS__buffer__unsafe_offset,CHARS__buffer__unsafe_align,&__t923t__);
  ge__t324t(prev_length,__t923t__,&__t924t__);
  if(__t924t__){
  __t925t=2;
  __t_errcode=div__t225t(prev_length,__t925t,&__t926t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t927t=1;
  add__t175t(__t926t__,__t927t,&__t928t__);
  add__t175t(prev_length,__t928t__,&__t929t__);
  __t_errcode=resize__t602t(&CHARS__buffer__unsafe_ptr,&CHARS__buffer__unsafe_size,&CHARS__buffer__unsafe_offset,&CHARS__buffer__unsafe_align,__t929t__,&__t930t__unsafe_ptr,&__t930t__unsafe_size,&__t930t__unsafe_offset,&__t930t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  CHARS__buffer__unsafe_ptr=__t930t__unsafe_ptr;
  CHARS__buffer__unsafe_size=__t930t__unsafe_size;
  CHARS__buffer__unsafe_offset=__t930t__unsafe_offset;
  CHARS__buffer__unsafe_align=__t930t__unsafe_align;
  }
  CHARS__length=prev_length;
  __t_errcode=copy__t851t(&CHARS__buffer__unsafe_ptr,&CHARS__buffer__unsafe_size,&CHARS__buffer__unsafe_offset,&CHARS__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t931t__unsafe_ptr,&__t931t__dat__pos,&__t931t__dat__length,&__t931t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1660t=CHARS__buffer__unsafe_ptr;
  *__t1661t=CHARS__buffer__unsafe_size;
  *__t1662t=CHARS__buffer__unsafe_offset;
  *__t1663t=CHARS__buffer__unsafe_align;
  *__t1664t=CHARS__length;
  *__t1665t=__t931t__unsafe_ptr;
  *__t1666t=__t931t__dat__pos;
  *__t1667t=__t931t__dat__length;
  *__t1668t=__t931t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t1555t(char** __t1669t, uint64_t* __t1670t, uint64_t* __t1671t, char* __t1672t, char** __t1673t, uint64_t* __t1674t, uint64_t* __t1675t, char* __t1676t) {
  char* __t1558t__unsafe_ptr=0;
  uint64_t __t1558t__unsafe_size=0;
  uint16_t __t1558t__unsafe_offset=0;
  uint16_t __t1558t__unsafe_align=0;
  char* __t1559t__unsafe_ptr=0;
  uint64_t __t1559t__unsafe_size=0;
  uint16_t __t1559t__unsafe_offset=0;
  uint16_t __t1559t__unsafe_align=0;
  char* __t1560t__buffer__unsafe_ptr=0;
  uint64_t __t1560t__buffer__unsafe_size=0;
  uint16_t __t1560t__buffer__unsafe_offset=0;
  uint16_t __t1560t__buffer__unsafe_align=0;
  uint64_t __t1560t__length=0;
  char __t1561t____t651t____t534t__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint16_t mem__buffer__unsafe_offset=0;
  uint16_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __t1562t=0;
  char* __t1563t__unsafe_ptr=0;
  uint64_t __t1563t__unsafe_size=0;
  uint16_t __t1563t__unsafe_offset=0;
  uint16_t __t1563t__unsafe_align=0;
  char* __t1565t__unsafe_ptr=0;
  uint64_t __t1565t__dat__pos=0;
  uint64_t __t1565t__dat__length=0;
  char __t1565t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1567t__unsafe_ptr=0;
  uint64_t __t1567t__dat__pos=0;
  uint64_t __t1567t__dat__length=0;
  char __t1567t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1556t(&__t1558t__unsafe_ptr,&__t1558t__unsafe_size,&__t1558t__unsafe_offset,&__t1558t__unsafe_align);
  __t1559t__unsafe_ptr=__t1558t__unsafe_ptr;
  __t1559t__unsafe_size=__t1558t__unsafe_size;
  __t1559t__unsafe_offset=__t1558t__unsafe_offset;
  __t1559t__unsafe_align=__t1558t__unsafe_align;
  __t_errcode=list__t648t(&__t1559t__unsafe_ptr,&__t1559t__unsafe_size,&__t1559t__unsafe_offset,&__t1559t__unsafe_align,&__t1560t__buffer__unsafe_ptr,&__t1560t__buffer__unsafe_size,&__t1560t__buffer__unsafe_offset,&__t1560t__buffer__unsafe_align,&__t1560t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1562t=100;
  __t_errcode=resize__t602t(&__t1560t__buffer__unsafe_ptr,&__t1560t__buffer__unsafe_size,&__t1560t__buffer__unsafe_offset,&__t1560t__buffer__unsafe_align,__t1562t,&__t1563t__unsafe_ptr,&__t1563t__unsafe_size,&__t1563t__unsafe_offset,&__t1563t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t917t(&__t1560t__buffer__unsafe_ptr,&__t1560t__buffer__unsafe_size,&__t1560t__buffer__unsafe_offset,&__t1560t__buffer__unsafe_align,&__t1560t__length,__t1564t,&__t1565t__unsafe_ptr,&__t1565t__dat__pos,&__t1565t__dat__length,&__t1565t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t1565t__dat__pos;
  s1__dat__length=__t1565t__dat__length;
  s1__dat__first=__t1565t__dat__first;
  __t_errcode=copy__t917t(&__t1560t__buffer__unsafe_ptr,&__t1560t__buffer__unsafe_size,&__t1560t__buffer__unsafe_offset,&__t1560t__buffer__unsafe_align,&__t1560t__length,__t1566t,&__t1567t__unsafe_ptr,&__t1567t__dat__pos,&__t1567t__dat__length,&__t1567t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t1567t__dat__pos;
  s2__dat__length=__t1567t__dat__length;
  s2__dat__first=__t1567t__dat__first;
  s1__unsafe_ptr=__t1560t__buffer__unsafe_ptr;
  s2__unsafe_ptr=__t1560t__buffer__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t447t(s1__unsafe_ptr,&__t1561t____t651t____t534t__);
  if(__t1561t____t651t____t534t__){
  free__t503t(&s1__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1669t=s1__unsafe_ptr;
  *__t1670t=s1__dat__pos;
  *__t1671t=s1__dat__length;
  *__t1672t=s1__dat__first;
  *__t1673t=s2__unsafe_ptr;
  *__t1674t=s2__dat__pos;
  *__t1675t=s2__dat__length;
  *__t1676t=s2__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t893t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t894t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1568t() {
  char* __t1570t__s1__unsafe_ptr=0;
  uint64_t __t1570t__s1__dat__pos=0;
  uint64_t __t1570t__s1__dat__length=0;
  char __t1570t__s1__dat__first=0;
  char* __t1570t__s2__unsafe_ptr=0;
  uint64_t __t1570t__s2__dat__pos=0;
  uint64_t __t1570t__s2__dat__length=0;
  char __t1570t__s2__dat__first=0;
  char __t1571t____t1561t____t651t____t534t__=0;
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
  __t_errcode=test__t1555t(&__t1570t__s1__unsafe_ptr,&__t1570t__s1__dat__pos,&__t1570t__s1__dat__length,&__t1570t__s1__dat__first,&__t1570t__s2__unsafe_ptr,&__t1570t__s2__dat__pos,&__t1570t__s2__dat__length,&__t1570t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t1570t__s1__unsafe_ptr;
  s__s1__dat__pos=__t1570t__s1__dat__pos;
  s__s1__dat__length=__t1570t__s1__dat__length;
  s__s1__dat__first=__t1570t__s1__dat__first;
  s__s2__unsafe_ptr=__t1570t__s2__unsafe_ptr;
  s__s2__dat__pos=__t1570t__s2__dat__pos;
  s__s2__dat__length=__t1570t__s2__dat__length;
  s__s2__dat__first=__t1570t__s2__dat__first;
  print__t893t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t893t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1570t__s1__unsafe_ptr,&__t1571t____t1561t____t651t____t534t__);
  if(__t1571t____t1561t____t651t____t534t__){
  free__t503t(&__t1570t__s1__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1568t();return 0;}