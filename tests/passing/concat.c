#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1537t="name";
const char* const __t374t="\n";
const char* const __t1545t="manios";
const char* const __t1529t="hi";
const char* const __t1541t="is";
const char* const __t1518t=" ";
const char* const __t1533t="my";
static const char* __t_all_errcodes[38] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32"
};

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1499t(char** __t1561t, uint64_t* __t1562t, uint16_t* __t1563t, uint16_t* __t1564t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__t1561t=unsafe_ptr;
  *__t1562t=unsafe_size;
  *__t1563t=unsafe_offset;
  *__t1564t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t1565t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1565t=z;
}

static inline __attribute__((always_inline)) void free__t505t(char** __t1566t) {
  char* allocated=*__t1566t;
  if(allocated){
  free(allocated);
  }
  *__t1566t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1567t) {
  int value=0;
  *__t1567t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1568t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1568t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1569t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1569t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1570t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1570t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1571t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1571t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t1572t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1572t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1573t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1573t=z;
}

static inline __attribute__((always_inline)) void zero__t506t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1574t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1574t=z;
}

static inline __attribute__((always_inline)) int alloc__t498t(uint64_t bytes, char** __t1575t) {
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
  *__t1575t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t512t(char** __t1576t, uint64_t* __t1577t, uint16_t* __t1578t, uint16_t* __t1579t, uint64_t size, char** __t1580t, uint64_t* __t1581t, uint16_t* __t1582t, uint16_t* __t1583t) {
  char* buffer__unsafe_ptr=*__t1576t;
  uint64_t buffer__unsafe_size=*__t1577t;
  uint16_t buffer__unsafe_offset=*__t1578t;
  uint16_t buffer__unsafe_align=*__t1579t;
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
  *__t1576t=buffer__unsafe_ptr;
  *__t1577t=buffer__unsafe_size;
  *__t1578t=buffer__unsafe_offset;
  *__t1579t=buffer__unsafe_align;
  *__t1580t=buffer__unsafe_ptr;
  *__t1581t=buffer__unsafe_size;
  *__t1582t=buffer__unsafe_offset;
  *__t1583t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1584t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1584t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1585t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1585t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1586t) {
  *__t1586t=to;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t1587t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t1587t=__t508t__;
}

static inline __attribute__((always_inline)) int mutget__t587t(char** __t1588t, uint64_t* __t1589t, uint16_t* __t1590t, uint16_t* __t1591t, uint64_t i, char** __t1592t) {
  char* buffer__unsafe_ptr=*__t1588t;
  uint64_t buffer__unsafe_size=*__t1589t;
  uint16_t buffer__unsafe_offset=*__t1590t;
  uint16_t buffer__unsafe_align=*__t1591t;
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
  *__t1588t=buffer__unsafe_ptr;
  *__t1589t=buffer__unsafe_size;
  *__t1590t=buffer__unsafe_offset;
  *__t1591t=buffer__unsafe_align;
  *__t1592t=__t593t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t554t(char** __t1593t, uint64_t* __t1594t, uint16_t* __t1595t, uint16_t* __t1596t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1593t=unsafe_ptr;
  *__t1594t=unsafe_size;
  *__t1595t=unsafe_offset;
  *__t1596t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1597t) {
  *__t1597t=to;
}

static inline __attribute__((always_inline)) int get__t594t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1598t) {
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
  *__t1598t=__t600t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t629t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1599t, uint64_t* __t1600t, uint64_t* __t1601t, char* __t1602t) {
  goto __t_return;
  __t_return:
  *__t1599t=unsafe_ptr;
  *__t1600t=dat__pos;
  *__t1601t=dat__length;
  *__t1602t=dat__first;
}

static inline __attribute__((always_inline)) int str__t633t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1603t, uint64_t* __t1604t, uint64_t* __t1605t, char* __t1606t) {
  char* unsafe_ptr=0;
  uint64_t __t634t__=0;
  uint64_t __t635t=0;
  char __t636t__=0;
  uint64_t __t637t__=0;
  uint64_t __t638t=0;
  char __t639t__=0;
  char* __t640t__unsafe_ptr=0;
  uint64_t __t640t__dat__pos=0;
  uint64_t __t640t__dat__length=0;
  char __t640t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t509t(buf__unsafe_align,&__t634t__);
  __t635t=1;
  neq__t143t(__t634t__,__t635t,&__t636t__);
  if(__t636t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t509t(buf__unsafe_offset,&__t637t__);
  __t638t=0;
  neq__t143t(__t637t__,__t638t,&__t639t__);
  if(__t639t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t629t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t640t__unsafe_ptr,&__t640t__dat__pos,&__t640t__dat__length,&__t640t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1603t=__t640t__unsafe_ptr;
  *__t1604t=__t640t__dat__pos;
  *__t1605t=__t640t__dat__length;
  *__t1606t=__t640t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t665t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1607t, uint64_t* __t1608t, uint64_t* __t1609t, char* __t1610t) {
  uint64_t __t666t=0;
  char __t667t__=0;
  char* __t668t__=0;
  char __t669t__value=0;
  char first=0;
  char* __t670t__unsafe_ptr=0;
  uint64_t __t670t__dat__pos=0;
  uint64_t __t670t__dat__length=0;
  char __t670t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t666t=0;
  neq__t143t(length,__t666t,&__t667t__);
  if(__t667t__){
  __t_errcode=get__t594t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t668t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t668t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t669t__value,__t668t__,1);
  first=__t669t__value;
  }
  __t_errcode=str__t633t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t670t__unsafe_ptr,&__t670t__dat__pos,&__t670t__dat__length,&__t670t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1607t=__t670t__unsafe_ptr;
  *__t1608t=__t670t__dat__pos;
  *__t1609t=__t670t__dat__length;
  *__t1610t=__t670t__dat__first;
  
  return __t_errcode;
}

int str__t671t(const char* c, char** __t1611t, uint64_t* __t1612t, uint64_t* __t1613t, char* __t1614t) {
  char* __t672t__unsafe_ptr=0;
  uint64_t __t672t__unsafe_size=0;
  uint16_t __t672t__unsafe_offset=0;
  uint16_t __t672t__unsafe_align=0;
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__unsafe_size=0;
  uint16_t __t673t__unsafe_offset=0;
  uint16_t __t673t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t674t__=0;
  uint64_t length=0;
  uint64_t __t675t=0;
  uint64_t __t676t__=0;
  uint64_t __t677t=0;
  char* __t678t__unsafe_ptr=0;
  uint64_t __t678t__dat__pos=0;
  uint64_t __t678t__dat__length=0;
  char __t678t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t554t(&__t672t__unsafe_ptr,&__t672t__unsafe_size,&__t672t__unsafe_offset,&__t672t__unsafe_align);
  __t673t__unsafe_ptr=__t672t__unsafe_ptr;
  __t673t__unsafe_size=__t672t__unsafe_size;
  __t673t__unsafe_offset=__t672t__unsafe_offset;
  __t673t__unsafe_align=__t672t__unsafe_align;
  buf__unsafe_ptr=__t673t__unsafe_ptr;
  buf__unsafe_size=__t673t__unsafe_size;
  buf__unsafe_offset=__t673t__unsafe_offset;
  buf__unsafe_align=__t673t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t674t__);
  buf__unsafe_ptr=__t674t__;
  if(c){
  length=strlen(c);
  }
  __t675t=1;
  add__t174t(length,__t675t,&__t676t__);
  buf__unsafe_size=__t676t__;
  __t677t=0;
  __t_errcode=str__t665t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t677t,length,&__t678t__unsafe_ptr,&__t678t__dat__pos,&__t678t__dat__length,&__t678t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1611t=__t678t__unsafe_ptr;
  *__t1612t=__t678t__dat__pos;
  *__t1613t=__t678t__dat__length;
  *__t1614t=__t678t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t1615t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1615t=z;
}

static inline __attribute__((always_inline)) int nat16__t1470t(uint64_t x, uint16_t* __t1616t) {
  uint64_t __t1471t=0;
  char __t1472t__=0;
  uint16_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1471t=65535;
  gt__t275t(x,__t1471t,&__t1472t__);
  if(__t1472t__){
  __t_errcode=36;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1616t=value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int strdat__t1477t(uint64_t _pos, uint64_t _length, uint16_t* __t1617t, uint16_t* __t1618t) {
  uint16_t __t1478t__=0;
  uint16_t pos=0;
  uint16_t __t1479t__=0;
  uint16_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat16__t1470t(_pos,&__t1478t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1478t__;
  __t_errcode=nat16__t1470t(_length,&__t1479t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1479t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1617t=pos;
  *__t1618t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1480t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __t1619t, uint16_t* __t1620t, uint16_t* __t1621t) {
  char* unsafe_ptr=0;
  uint16_t __t1481t__pos=0;
  uint16_t __t1481t__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __t_errcode=strdat__t1477t(s__dat__pos,s__dat__length,&__t1481t__pos,&__t1481t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  dat__pos=__t1481t__pos;
  dat__length=__t1481t__length;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1619t=unsafe_ptr;
  *__t1620t=dat__pos;
  *__t1621t=dat__length;
  
  return __t_errcode;
}

int str__t1483t(const char* s, char** __t1622t, uint16_t* __t1623t, uint16_t* __t1624t) {
  char* __t1484t__unsafe_ptr=0;
  uint64_t __t1484t__dat__pos=0;
  uint64_t __t1484t__dat__length=0;
  char __t1484t__dat__first=0;
  char* __t1485t__unsafe_ptr=0;
  uint16_t __t1485t__dat__pos=0;
  uint16_t __t1485t__dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t671t(s,&__t1484t__unsafe_ptr,&__t1484t__dat__pos,&__t1484t__dat__length,&__t1484t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1480t(__t1484t__unsafe_ptr,__t1484t__dat__pos,__t1484t__dat__length,__t1484t__dat__first,&__t1485t__unsafe_ptr,&__t1485t__dat__pos,&__t1485t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1622t=__t1485t__unsafe_ptr;
  *__t1623t=__t1485t__dat__pos;
  *__t1624t=__t1485t__dat__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1502t(char** __t1625t, uint64_t* __t1626t, uint16_t* __t1627t, uint16_t* __t1628t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1625t=unsafe_ptr;
  *__t1626t=unsafe_size;
  *__t1627t=unsafe_offset;
  *__t1628t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t483t(uint64_t x, uint64_t* __t1629t) {
  uint64_t __t484t=0;
  uint64_t __t485t__=0;
  __t484t=1024;
  mul__t198t(x,__t484t,&__t485t__);
  goto __t_return;
  __t_return:
  *__t1629t=__t485t__;
}

static inline __attribute__((always_inline)) void bufpos__t721t(char** __t1630t, uint64_t* __t1631t, uint16_t* __t1632t, uint16_t* __t1633t, char** __t1634t, uint64_t* __t1635t, uint16_t* __t1636t, uint16_t* __t1637t, uint64_t* __t1638t) {
  char* buf__unsafe_ptr=*__t1630t;
  uint64_t buf__unsafe_size=*__t1631t;
  uint16_t buf__unsafe_offset=*__t1632t;
  uint16_t buf__unsafe_align=*__t1633t;
  uint64_t __t722t=0;
  uint64_t __t723t=0;
  uint64_t pos=0;
  __t722t=0;
  __t723t=__t722t;
  pos=__t723t;
  goto __t_return;
  __t_return:
  *__t1630t=buf__unsafe_ptr;
  *__t1631t=buf__unsafe_size;
  *__t1632t=buf__unsafe_offset;
  *__t1633t=buf__unsafe_align;
  *__t1634t=buf__unsafe_ptr;
  *__t1635t=buf__unsafe_size;
  *__t1636t=buf__unsafe_offset;
  *__t1637t=buf__unsafe_align;
  *__t1638t=pos;
}

static inline __attribute__((always_inline)) void len__t601t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1639t) {
  goto __t_return;
  __t_return:
  *__t1639t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t464t(uint64_t to, uint64_t* __t1640t, uint64_t* __t1641t) {
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
  *__t1640t=from;
  *__t1641t=to;
}

static inline __attribute__((always_inline)) int next__t473t(uint64_t* __t1642t, uint64_t r__to, uint64_t* __t1643t) {
  uint64_t r__from=*__t1642t;
  char __t474t__=0;
  uint64_t ret=0;
  uint64_t __t475t=0;
  uint64_t __t476t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(r__from,r__to,&__t474t__);
  if(__t474t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t475t=1;
  add__t174t(ret,__t475t,&__t476t__);
  r__from=__t476t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1642t=r__from;
  *__t1643t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t631t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t1644t, uint64_t* __t1645t, uint64_t* __t1646t, char* __t1647t) {
  char* first_pos=0;
  char first=0;
  char* __t632t__unsafe_ptr=0;
  uint64_t __t632t__dat__pos=0;
  uint64_t __t632t__dat__length=0;
  char __t632t__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__t629t(unsafe_ptr,pos,length,first,&__t632t__unsafe_ptr,&__t632t__dat__pos,&__t632t__dat__length,&__t632t__dat__first);
  goto __t_return;
  __t_return:
  *__t1644t=__t632t__unsafe_ptr;
  *__t1645t=__t632t__dat__pos;
  *__t1646t=__t632t__dat__length;
  *__t1647t=__t632t__dat__first;
}

static inline __attribute__((always_inline)) void unpack__t1486t(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __t1648t, uint64_t* __t1649t, uint64_t* __t1650t, char* __t1651t) {
  uint64_t __t1487t__=0;
  uint64_t __t1488t__=0;
  char* __t1489t__unsafe_ptr=0;
  uint64_t __t1489t__dat__pos=0;
  uint64_t __t1489t__dat__length=0;
  char __t1489t__dat__first=0;
  nat__t509t(m__dat__pos,&__t1487t__);
  nat__t509t(m__dat__length,&__t1488t__);
  str__t631t(m__unsafe_ptr,__t1487t__,__t1488t__,&__t1489t__unsafe_ptr,&__t1489t__dat__pos,&__t1489t__dat__length,&__t1489t__dat__first);
  goto __t_return;
  __t_return:
  *__t1648t=__t1489t__unsafe_ptr;
  *__t1649t=__t1489t__dat__pos;
  *__t1650t=__t1489t__dat__length;
  *__t1651t=__t1489t__dat__first;
}

static inline __attribute__((always_inline)) void str__t664t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1652t, uint64_t* __t1653t, uint64_t* __t1654t, char* __t1655t) {
  goto __t_return;
  __t_return:
  *__t1652t=other__unsafe_ptr;
  *__t1653t=other__dat__pos;
  *__t1654t=other__dat__length;
  *__t1655t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t679t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1656t) {
  goto __t_return;
  __t_return:
  *__t1656t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__t741t(char** __t1657t, uint64_t* __t1658t, uint16_t* __t1659t, uint16_t* __t1660t, uint64_t* __t1661t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1662t, uint64_t* __t1663t, uint64_t* __t1664t, char* __t1665t) {
  char* buf__unsafe_ptr=*__t1657t;
  uint64_t buf__unsafe_size=*__t1658t;
  uint16_t buf__unsafe_offset=*__t1659t;
  uint16_t buf__unsafe_align=*__t1660t;
  uint64_t pos=*__t1661t;
  char* __t742t__unsafe_ptr=0;
  uint64_t __t742t__dat__pos=0;
  uint64_t __t742t__dat__length=0;
  char __t742t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t743t__=0;
  uint64_t __t744t__=0;
  uint64_t next_pos=0;
  uint64_t __t745t__=0;
  char __t746t__=0;
  uint64_t __t747t=0;
  uint64_t __t748t__=0;
  uint64_t prev_pos=0;
  char* __t749t__unsafe_ptr=0;
  uint64_t __t749t__dat__pos=0;
  uint64_t __t749t__dat__length=0;
  char __t749t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t664t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t742t__unsafe_ptr,&__t742t__dat__pos,&__t742t__dat__length,&__t742t__dat__first);
  other__unsafe_ptr=__t742t__unsafe_ptr;
  other__dat__pos=__t742t__dat__pos;
  other__dat__length=__t742t__dat__length;
  other__dat__first=__t742t__dat__first;
  len__t679t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t743t__);
  add__t174t(pos,__t743t__,&__t744t__);
  next_pos=__t744t__;
  len__t601t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t745t__);
  gt__t275t(next_pos,__t745t__,&__t746t__);
  if(__t746t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t747t=0;
  add__t174t(pos,__t747t,&__t748t__);
  prev_pos=__t748t__;
  pos=next_pos;
  __t_errcode=str__t633t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t749t__unsafe_ptr,&__t749t__dat__pos,&__t749t__dat__length,&__t749t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1657t=buf__unsafe_ptr;
  *__t1658t=buf__unsafe_size;
  *__t1659t=buf__unsafe_offset;
  *__t1660t=buf__unsafe_align;
  *__t1661t=pos;
  *__t1662t=__t749t__unsafe_ptr;
  *__t1663t=__t749t__dat__pos;
  *__t1664t=__t749t__dat__length;
  *__t1665t=__t749t__dat__first;
  
  return __t_errcode;
}

int copy__t750t(char** __t1666t, uint64_t* __t1667t, uint16_t* __t1668t, uint16_t* __t1669t, uint64_t* __t1670t, const char* _other, char** __t1671t, uint64_t* __t1672t, uint64_t* __t1673t, char* __t1674t) {
  char* buf__unsafe_ptr=*__t1666t;
  uint64_t buf__unsafe_size=*__t1667t;
  uint16_t buf__unsafe_offset=*__t1668t;
  uint16_t buf__unsafe_align=*__t1669t;
  uint64_t pos=*__t1670t;
  char* __t751t__unsafe_ptr=0;
  uint64_t __t751t__dat__pos=0;
  uint64_t __t751t__dat__length=0;
  char __t751t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t752t__=0;
  uint64_t __t753t__=0;
  uint64_t next_pos=0;
  uint64_t __t754t__=0;
  char __t755t__=0;
  uint64_t __t756t=0;
  uint64_t __t757t__=0;
  uint64_t prev_pos=0;
  char* __t758t__unsafe_ptr=0;
  uint64_t __t758t__dat__pos=0;
  uint64_t __t758t__dat__length=0;
  char __t758t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t671t(_other,&__t751t__unsafe_ptr,&__t751t__dat__pos,&__t751t__dat__length,&__t751t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t751t__unsafe_ptr;
  other__dat__pos=__t751t__dat__pos;
  other__dat__length=__t751t__dat__length;
  other__dat__first=__t751t__dat__first;
  len__t679t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t752t__);
  add__t174t(pos,__t752t__,&__t753t__);
  next_pos=__t753t__;
  len__t601t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t754t__);
  gt__t275t(next_pos,__t754t__,&__t755t__);
  if(__t755t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t756t=0;
  add__t174t(pos,__t756t,&__t757t__);
  prev_pos=__t757t__;
  pos=next_pos;
  __t_errcode=str__t633t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t758t__unsafe_ptr,&__t758t__dat__pos,&__t758t__dat__length,&__t758t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1666t=buf__unsafe_ptr;
  *__t1667t=buf__unsafe_size;
  *__t1668t=buf__unsafe_offset;
  *__t1669t=buf__unsafe_align;
  *__t1670t=pos;
  *__t1671t=__t758t__unsafe_ptr;
  *__t1672t=__t758t__dat__pos;
  *__t1673t=__t758t__dat__length;
  *__t1674t=__t758t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1501t(char* buff__unsafe_ptr, uint64_t buff__unsafe_size, uint16_t buff__unsafe_offset, uint16_t buff__unsafe_align, char** __t1675t, uint64_t* __t1676t, uint64_t* __t1677t, char* __t1678t) {
  char* __t1504t__unsafe_ptr=0;
  uint64_t __t1504t__unsafe_size=0;
  uint16_t __t1504t__unsafe_offset=0;
  uint16_t __t1504t__unsafe_align=0;
  uint64_t __t1505t=0;
  uint64_t __t1506t__=0;
  char* __t1507t__unsafe_ptr=0;
  uint64_t __t1507t__unsafe_size=0;
  uint16_t __t1507t__unsafe_offset=0;
  uint16_t __t1507t__unsafe_align=0;
  char __t1508t____t514t__=0;
  char* __t1509t__buf__unsafe_ptr=0;
  uint64_t __t1509t__buf__unsafe_size=0;
  uint16_t __t1509t__buf__unsafe_offset=0;
  uint16_t __t1509t__buf__unsafe_align=0;
  uint64_t __t1509t__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __t1510t__=0;
  uint64_t __t1511t__from=0;
  uint64_t __t1511t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __t1512t=0;
  uint64_t __t1513t__=0;
  uint64_t i=0;
  char* __t1514t__=0;
  char* __t1515t__unsafe_ptr=0;
  uint16_t __t1515t__dat__pos=0;
  uint16_t __t1515t__dat__length=0;
  char* __t1516t__unsafe_ptr=0;
  uint64_t __t1516t__dat__pos=0;
  uint64_t __t1516t__dat__length=0;
  char __t1516t__dat__first=0;
  char* __t1517t__unsafe_ptr=0;
  uint64_t __t1517t__dat__pos=0;
  uint64_t __t1517t__dat__length=0;
  char __t1517t__dat__first=0;
  char* __t1519t__unsafe_ptr=0;
  uint64_t __t1519t__dat__pos=0;
  uint64_t __t1519t__dat__length=0;
  char __t1519t__dat__first=0;
  char* __t1520t__unsafe_ptr=0;
  uint64_t __t1520t__dat__pos=0;
  uint64_t __t1520t__dat__length=0;
  char __t1520t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1502t(&__t1504t__unsafe_ptr,&__t1504t__unsafe_size,&__t1504t__unsafe_offset,&__t1504t__unsafe_align);
  __t1505t=4;
  KB__t483t(__t1505t,&__t1506t__);
  __t_errcode=alloc__t512t(&__t1504t__unsafe_ptr,&__t1504t__unsafe_size,&__t1504t__unsafe_offset,&__t1504t__unsafe_align,__t1506t__,&__t1507t__unsafe_ptr,&__t1507t__unsafe_size,&__t1507t__unsafe_offset,&__t1507t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t721t(&__t1507t__unsafe_ptr,&__t1507t__unsafe_size,&__t1507t__unsafe_offset,&__t1507t__unsafe_align,&__t1509t__buf__unsafe_ptr,&__t1509t__buf__unsafe_size,&__t1509t__buf__unsafe_offset,&__t1509t__buf__unsafe_align,&__t1509t__pos);
  mem__pos=__t1509t__pos;
  len__t601t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1510t__);
  range__t464t(__t1510t__,&__t1511t__from,&__t1511t__to);
  iter__from=__t1511t__from;
  iter__to=__t1511t__to;
  start=mem__pos;
  while(1){
  __t_complain=next__t473t(&iter__from,iter__to,&__t1513t__);
  __t1512t=__t_complain;
  i=__t1513t__;
  __t1512t=__t1512t==0;
  if(!__t1512t){
  break;
  }
  __t_errcode=get__t594t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__t1514t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1514t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1515t__unsafe_ptr,__t1514t__,8);
  memcpy(&__t1515t__dat__pos,__t1514t__+8,2);
  memcpy(&__t1515t__dat__length,__t1514t__+10,2);
  unpack__t1486t(__t1515t__unsafe_ptr,__t1515t__dat__pos,__t1515t__dat__length,&__t1516t__unsafe_ptr,&__t1516t__dat__pos,&__t1516t__dat__length,&__t1516t__dat__first);
  __t_errcode=copy__t741t(&__t1507t__unsafe_ptr,&__t1507t__unsafe_size,&__t1507t__unsafe_offset,&__t1507t__unsafe_align,&mem__pos,__t1516t__unsafe_ptr,__t1516t__dat__pos,__t1516t__dat__length,__t1516t__dat__first,&__t1517t__unsafe_ptr,&__t1517t__dat__pos,&__t1517t__dat__length,&__t1517t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t750t(&__t1507t__unsafe_ptr,&__t1507t__unsafe_size,&__t1507t__unsafe_offset,&__t1507t__unsafe_align,&mem__pos,__t1518t,&__t1519t__unsafe_ptr,&__t1519t__dat__pos,&__t1519t__dat__length,&__t1519t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=str__t665t(__t1507t__unsafe_ptr,__t1507t__unsafe_size,__t1507t__unsafe_offset,__t1507t__unsafe_align,start,mem__pos,&__t1520t__unsafe_ptr,&__t1520t__dat__pos,&__t1520t__dat__length,&__t1520t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1520t__unsafe_ptr=__t1507t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t439t(__t1520t__unsafe_ptr,&__t1508t____t514t__);
  if(__t1508t____t514t__){
  free__t505t(&__t1520t__unsafe_ptr);
  }
  __t_return:
  *__t1675t=__t1520t__unsafe_ptr;
  *__t1676t=__t1520t__dat__pos;
  *__t1677t=__t1520t__dat__length;
  *__t1678t=__t1520t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t383t(uint64_t value, const char* endl) {
  int __t384t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t783t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t784t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1521t() {
  char* __t1522t__unsafe_ptr=0;
  uint64_t __t1522t__unsafe_size=0;
  uint16_t __t1522t__unsafe_offset=0;
  uint16_t __t1522t__unsafe_align=0;
  char* __t1523t__unsafe_ptr=0;
  uint64_t __t1523t__unsafe_size=0;
  uint16_t __t1523t__unsafe_offset=0;
  uint16_t __t1523t__unsafe_align=0;
  uint64_t __t1524t=0;
  char* __t1525t__unsafe_ptr=0;
  uint64_t __t1525t__unsafe_size=0;
  uint16_t __t1525t__unsafe_offset=0;
  uint16_t __t1525t__unsafe_align=0;
  char __t1526t____t514t__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __t1527t=0;
  char* __t1528t__=0;
  char* __t1530t__unsafe_ptr=0;
  uint16_t __t1530t__dat__pos=0;
  uint16_t __t1530t__dat__length=0;
  uint64_t __t1531t=0;
  char* __t1532t__=0;
  char* __t1534t__unsafe_ptr=0;
  uint16_t __t1534t__dat__pos=0;
  uint16_t __t1534t__dat__length=0;
  uint64_t __t1535t=0;
  char* __t1536t__=0;
  char* __t1538t__unsafe_ptr=0;
  uint16_t __t1538t__dat__pos=0;
  uint16_t __t1538t__dat__length=0;
  uint64_t __t1539t=0;
  char* __t1540t__=0;
  char* __t1542t__unsafe_ptr=0;
  uint16_t __t1542t__dat__pos=0;
  uint16_t __t1542t__dat__length=0;
  uint64_t __t1543t=0;
  char* __t1544t__=0;
  char* __t1546t__unsafe_ptr=0;
  uint16_t __t1546t__dat__pos=0;
  uint16_t __t1546t__dat__length=0;
  uint64_t __t1547t=0;
  char* __t1548t__=0;
  char* __t1549t__unsafe_ptr=0;
  uint64_t __t1549t__dat__pos=0;
  uint64_t __t1549t__dat__length=0;
  char __t1549t__dat__first=0;
  char __t1550t____t1508t____t514t__=0;
  char* __t1551t__unsafe_ptr=0;
  uint16_t __t1551t__dat__pos=0;
  uint16_t __t1551t__dat__length=0;
  uint64_t __t1552t__=0;
  uint64_t __t1553t__from=0;
  uint64_t __t1553t__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __t1554t=0;
  uint64_t __t1555t__=0;
  uint64_t j=0;
  char* __t1557t__=0;
  char* __t1558t__unsafe_ptr=0;
  uint16_t __t1558t__dat__pos=0;
  uint16_t __t1558t__dat__length=0;
  char* __t1559t__unsafe_ptr=0;
  uint64_t __t1559t__dat__pos=0;
  uint64_t __t1559t__dat__length=0;
  char __t1559t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t1499t(&__t1522t__unsafe_ptr,&__t1522t__unsafe_size,&__t1522t__unsafe_offset,&__t1522t__unsafe_align);
  __t1523t__unsafe_ptr=__t1522t__unsafe_ptr;
  __t1523t__unsafe_size=__t1522t__unsafe_size;
  __t1523t__unsafe_offset=__t1522t__unsafe_offset;
  __t1523t__unsafe_align=__t1522t__unsafe_align;
  __t1524t=6;
  __t_errcode=alloc__t512t(&__t1523t__unsafe_ptr,&__t1523t__unsafe_size,&__t1523t__unsafe_offset,&__t1523t__unsafe_align,__t1524t,&__t1525t__unsafe_ptr,&__t1525t__unsafe_size,&__t1525t__unsafe_offset,&__t1525t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buff__unsafe_ptr=__t1525t__unsafe_ptr;
  buff__unsafe_size=__t1525t__unsafe_size;
  buff__unsafe_offset=__t1525t__unsafe_offset;
  buff__unsafe_align=__t1525t__unsafe_align;
  __t1527t=0;
  __t_errcode=mutget__t587t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1527t,&__t1528t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1483t(__t1529t,&__t1530t__unsafe_ptr,&__t1530t__dat__pos,&__t1530t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1528t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1528t__,&__t1530t__unsafe_ptr,8);
  memcpy(__t1528t__+8,&__t1530t__dat__pos,2);
  memcpy(__t1528t__+10,&__t1530t__dat__length,2);
  __t1531t=1;
  __t_errcode=mutget__t587t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1531t,&__t1532t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1483t(__t1533t,&__t1534t__unsafe_ptr,&__t1534t__dat__pos,&__t1534t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1532t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1532t__,&__t1534t__unsafe_ptr,8);
  memcpy(__t1532t__+8,&__t1534t__dat__pos,2);
  memcpy(__t1532t__+10,&__t1534t__dat__length,2);
  __t1535t=2;
  __t_errcode=mutget__t587t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1535t,&__t1536t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1483t(__t1537t,&__t1538t__unsafe_ptr,&__t1538t__dat__pos,&__t1538t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1536t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1536t__,&__t1538t__unsafe_ptr,8);
  memcpy(__t1536t__+8,&__t1538t__dat__pos,2);
  memcpy(__t1536t__+10,&__t1538t__dat__length,2);
  __t1539t=3;
  __t_errcode=mutget__t587t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1539t,&__t1540t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1483t(__t1541t,&__t1542t__unsafe_ptr,&__t1542t__dat__pos,&__t1542t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1540t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1540t__,&__t1542t__unsafe_ptr,8);
  memcpy(__t1540t__+8,&__t1542t__dat__pos,2);
  memcpy(__t1540t__+10,&__t1542t__dat__length,2);
  __t1543t=4;
  __t_errcode=mutget__t587t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1543t,&__t1544t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1483t(__t1545t,&__t1546t__unsafe_ptr,&__t1546t__dat__pos,&__t1546t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1544t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1544t__,&__t1546t__unsafe_ptr,8);
  memcpy(__t1544t__+8,&__t1546t__dat__pos,2);
  memcpy(__t1544t__+10,&__t1546t__dat__length,2);
  __t1547t=5;
  __t_errcode=mutget__t587t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1547t,&__t1548t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=concat__t1501t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1549t__unsafe_ptr,&__t1549t__dat__pos,&__t1549t__dat__length,&__t1549t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1480t(__t1549t__unsafe_ptr,__t1549t__dat__pos,__t1549t__dat__length,__t1549t__dat__first,&__t1551t__unsafe_ptr,&__t1551t__dat__pos,&__t1551t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1548t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1548t__,&__t1551t__unsafe_ptr,8);
  memcpy(__t1548t__+8,&__t1551t__dat__pos,2);
  memcpy(__t1548t__+10,&__t1551t__dat__length,2);
  len__t601t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1552t__);
  range__t464t(__t1552t__,&__t1553t__from,&__t1553t__to);
  full_iter__from=__t1553t__from;
  full_iter__to=__t1553t__to;
  while(1){
  __t_complain=next__t473t(&full_iter__from,full_iter__to,&__t1555t__);
  __t1554t=__t_complain;
  j=__t1555t__;
  __t1554t=__t1554t==0;
  if(!__t1554t){
  break;
  }
  print__t383t(j,__t1518t);
  __t_errcode=get__t594t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__t1557t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1557t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1558t__unsafe_ptr,__t1557t__,8);
  memcpy(&__t1558t__dat__pos,__t1557t__+8,2);
  memcpy(&__t1558t__dat__length,__t1557t__+10,2);
  unpack__t1486t(__t1558t__unsafe_ptr,__t1558t__dat__pos,__t1558t__dat__length,&__t1559t__unsafe_ptr,&__t1559t__dat__pos,&__t1559t__dat__length,&__t1559t__dat__first);
  print__t783t(__t1559t__unsafe_ptr,__t1559t__dat__pos,__t1559t__dat__length,__t1559t__dat__first);
  }
  
  __t_failure:exists__t439t(__t1549t__unsafe_ptr,&__t1550t____t1508t____t514t__);
  if(__t1550t____t1508t____t514t__){
  free__t505t(&__t1549t__unsafe_ptr);
  }
  exists__t439t(__t1525t__unsafe_ptr,&__t1526t____t514t__);
  if(__t1526t____t514t__){
  free__t505t(&__t1525t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1521t();return 0;}