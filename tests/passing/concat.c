#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1546t="manios";
const char* const __t1534t="my";
const char* const __t1542t="is";
const char* const __t1518t=" ";
const char* const __t377t="\n";
const char* const __t1530t="hi";
const char* const __t1538t="name";
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

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1499t(char** __t1562t, uint64_t* __t1563t, uint16_t* __t1564t, uint16_t* __t1565t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__t1562t=unsafe_ptr;
  *__t1563t=unsafe_size;
  *__t1564t=unsafe_offset;
  *__t1565t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t1566t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1566t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t1567t) {
  char* allocated=*__t1567t;
  if(allocated){
  free(allocated);
  }
  *__t1567t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1568t) {
  int value=0;
  *__t1568t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1569t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1569t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1570t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1570t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1571t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1571t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1572t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1572t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1573t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1573t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1574t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1574t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1575t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1575t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t1576t) {
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
  *__t1576t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t1577t, uint64_t* __t1578t, uint16_t* __t1579t, uint16_t* __t1580t, uint64_t size, char** __t1581t, uint64_t* __t1582t, uint16_t* __t1583t, uint16_t* __t1584t) {
  char* buffer__unsafe_ptr=*__t1577t;
  uint64_t buffer__unsafe_size=*__t1578t;
  uint16_t buffer__unsafe_offset=*__t1579t;
  uint16_t buffer__unsafe_align=*__t1580t;
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
  *__t1577t=buffer__unsafe_ptr;
  *__t1578t=buffer__unsafe_size;
  *__t1579t=buffer__unsafe_offset;
  *__t1580t=buffer__unsafe_align;
  *__t1581t=buffer__unsafe_ptr;
  *__t1582t=buffer__unsafe_size;
  *__t1583t=buffer__unsafe_offset;
  *__t1584t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1585t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1585t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1586t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1586t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1587t) {
  *__t1587t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1588t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1588t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1589t, uint64_t* __t1590t, uint16_t* __t1591t, uint16_t* __t1592t, uint64_t i, char** __t1593t) {
  char* buffer__unsafe_ptr=*__t1589t;
  uint64_t buffer__unsafe_size=*__t1590t;
  uint16_t buffer__unsafe_offset=*__t1591t;
  uint16_t buffer__unsafe_align=*__t1592t;
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
  *__t1589t=buffer__unsafe_ptr;
  *__t1590t=buffer__unsafe_size;
  *__t1591t=buffer__unsafe_offset;
  *__t1592t=buffer__unsafe_align;
  *__t1593t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t1594t, uint64_t* __t1595t, uint16_t* __t1596t, uint16_t* __t1597t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1594t=unsafe_ptr;
  *__t1595t=unsafe_size;
  *__t1596t=unsafe_offset;
  *__t1597t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1598t) {
  *__t1598t=to;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1599t) {
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
  *__t1599t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1600t, uint64_t* __t1601t, uint64_t* __t1602t, char* __t1603t) {
  goto __t_return;
  __t_return:
  *__t1600t=unsafe_ptr;
  *__t1601t=dat__pos;
  *__t1602t=dat__length;
  *__t1603t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1604t, uint64_t* __t1605t, uint64_t* __t1606t, char* __t1607t) {
  char* unsafe_ptr=0;
  uint64_t __t637t__=0;
  uint64_t __t638t=0;
  char __t639t__=0;
  uint64_t __t640t__=0;
  uint64_t __t641t=0;
  char __t642t__=0;
  char* __t643t__unsafe_ptr=0;
  uint64_t __t643t__dat__pos=0;
  uint64_t __t643t__dat__length=0;
  char __t643t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t512t(buf__unsafe_align,&__t637t__);
  __t638t=1;
  neq__t143t(__t637t__,__t638t,&__t639t__);
  if(__t639t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t512t(buf__unsafe_offset,&__t640t__);
  __t641t=0;
  neq__t143t(__t640t__,__t641t,&__t642t__);
  if(__t642t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t632t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t643t__unsafe_ptr,&__t643t__dat__pos,&__t643t__dat__length,&__t643t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1604t=__t643t__unsafe_ptr;
  *__t1605t=__t643t__dat__pos;
  *__t1606t=__t643t__dat__length;
  *__t1607t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1608t, uint64_t* __t1609t, uint64_t* __t1610t, char* __t1611t) {
  uint64_t __t669t=0;
  char __t670t__=0;
  char* __t671t__=0;
  char __t672t__value=0;
  char first=0;
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__dat__pos=0;
  uint64_t __t673t__dat__length=0;
  char __t673t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t669t=0;
  neq__t143t(length,__t669t,&__t670t__);
  if(__t670t__){
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t671t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t671t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t672t__value,__t671t__,1);
  first=__t672t__value;
  }
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t673t__unsafe_ptr,&__t673t__dat__pos,&__t673t__dat__length,&__t673t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1608t=__t673t__unsafe_ptr;
  *__t1609t=__t673t__dat__pos;
  *__t1610t=__t673t__dat__length;
  *__t1611t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t1612t, uint64_t* __t1613t, uint64_t* __t1614t, char* __t1615t) {
  char* __t675t__unsafe_ptr=0;
  uint64_t __t675t__unsafe_size=0;
  uint16_t __t675t__unsafe_offset=0;
  uint16_t __t675t__unsafe_align=0;
  char* __t676t__unsafe_ptr=0;
  uint64_t __t676t__unsafe_size=0;
  uint16_t __t676t__unsafe_offset=0;
  uint16_t __t676t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t677t__=0;
  uint64_t length=0;
  uint64_t __t678t=0;
  uint64_t __t679t__=0;
  uint64_t __t680t=0;
  char* __t681t__unsafe_ptr=0;
  uint64_t __t681t__dat__pos=0;
  uint64_t __t681t__dat__length=0;
  char __t681t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t557t(&__t675t__unsafe_ptr,&__t675t__unsafe_size,&__t675t__unsafe_offset,&__t675t__unsafe_align);
  __t676t__unsafe_ptr=__t675t__unsafe_ptr;
  __t676t__unsafe_size=__t675t__unsafe_size;
  __t676t__unsafe_offset=__t675t__unsafe_offset;
  __t676t__unsafe_align=__t675t__unsafe_align;
  buf__unsafe_ptr=__t676t__unsafe_ptr;
  buf__unsafe_size=__t676t__unsafe_size;
  buf__unsafe_offset=__t676t__unsafe_offset;
  buf__unsafe_align=__t676t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t677t__);
  buf__unsafe_ptr=__t677t__;
  if(c){
  length=strlen(c);
  }
  __t678t=1;
  add__t174t(length,__t678t,&__t679t__);
  buf__unsafe_size=__t679t__;
  __t680t=0;
  __t_errcode=str__t668t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t680t,length,&__t681t__unsafe_ptr,&__t681t__dat__pos,&__t681t__dat__length,&__t681t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1612t=__t681t__unsafe_ptr;
  *__t1613t=__t681t__dat__pos;
  *__t1614t=__t681t__dat__length;
  *__t1615t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t1616t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1616t=z;
}

static inline __attribute__((always_inline)) int nat16__t1470t(uint64_t x, uint16_t* __t1617t) {
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
  *__t1617t=value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int strdat__t1477t(uint64_t _pos, uint64_t _length, uint16_t* __t1618t, uint16_t* __t1619t) {
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
  *__t1618t=pos;
  *__t1619t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1480t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __t1620t, uint16_t* __t1621t, uint16_t* __t1622t) {
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
  *__t1620t=unsafe_ptr;
  *__t1621t=dat__pos;
  *__t1622t=dat__length;
  
  return __t_errcode;
}

int str__t1483t(const char* s, char** __t1623t, uint16_t* __t1624t, uint16_t* __t1625t) {
  char* __t1484t__unsafe_ptr=0;
  uint64_t __t1484t__dat__pos=0;
  uint64_t __t1484t__dat__length=0;
  char __t1484t__dat__first=0;
  char* __t1485t__unsafe_ptr=0;
  uint16_t __t1485t__dat__pos=0;
  uint16_t __t1485t__dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t674t(s,&__t1484t__unsafe_ptr,&__t1484t__dat__pos,&__t1484t__dat__length,&__t1484t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1480t(__t1484t__unsafe_ptr,__t1484t__dat__pos,__t1484t__dat__length,__t1484t__dat__first,&__t1485t__unsafe_ptr,&__t1485t__dat__pos,&__t1485t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1623t=__t1485t__unsafe_ptr;
  *__t1624t=__t1485t__dat__pos;
  *__t1625t=__t1485t__dat__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1502t(char** __t1626t, uint64_t* __t1627t, uint16_t* __t1628t, uint16_t* __t1629t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1626t=unsafe_ptr;
  *__t1627t=unsafe_size;
  *__t1628t=unsafe_offset;
  *__t1629t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t486t(uint64_t x, uint64_t* __t1630t) {
  uint64_t __t487t=0;
  uint64_t __t488t__=0;
  __t487t=1024;
  mul__t198t(x,__t487t,&__t488t__);
  goto __t_return;
  __t_return:
  *__t1630t=__t488t__;
}

static inline __attribute__((always_inline)) void bufpos__t724t(char** __t1631t, uint64_t* __t1632t, uint16_t* __t1633t, uint16_t* __t1634t, char** __t1635t, uint64_t* __t1636t, uint16_t* __t1637t, uint16_t* __t1638t, uint64_t* __t1639t) {
  char* buf__unsafe_ptr=*__t1631t;
  uint64_t buf__unsafe_size=*__t1632t;
  uint16_t buf__unsafe_offset=*__t1633t;
  uint16_t buf__unsafe_align=*__t1634t;
  uint64_t __t725t=0;
  uint64_t __t726t=0;
  uint64_t pos=0;
  __t725t=0;
  __t726t=__t725t;
  pos=__t726t;
  goto __t_return;
  __t_return:
  *__t1631t=buf__unsafe_ptr;
  *__t1632t=buf__unsafe_size;
  *__t1633t=buf__unsafe_offset;
  *__t1634t=buf__unsafe_align;
  *__t1635t=buf__unsafe_ptr;
  *__t1636t=buf__unsafe_size;
  *__t1637t=buf__unsafe_offset;
  *__t1638t=buf__unsafe_align;
  *__t1639t=pos;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1640t) {
  goto __t_return;
  __t_return:
  *__t1640t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t467t(uint64_t to, uint64_t* __t1641t, uint64_t* __t1642t) {
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
  *__t1641t=from;
  *__t1642t=to;
}

static inline __attribute__((always_inline)) int next__t476t(uint64_t* __t1643t, uint64_t r__to, uint64_t* __t1644t) {
  uint64_t r__from=*__t1643t;
  char __t477t__=0;
  uint64_t ret=0;
  uint64_t __t478t=0;
  uint64_t __t479t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t323t(r__from,r__to,&__t477t__);
  if(__t477t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t478t=1;
  add__t174t(ret,__t478t,&__t479t__);
  r__from=__t479t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1643t=r__from;
  *__t1644t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t634t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t1645t, uint64_t* __t1646t, uint64_t* __t1647t, char* __t1648t) {
  char* first_pos=0;
  char first=0;
  char* __t635t__unsafe_ptr=0;
  uint64_t __t635t__dat__pos=0;
  uint64_t __t635t__dat__length=0;
  char __t635t__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__t632t(unsafe_ptr,pos,length,first,&__t635t__unsafe_ptr,&__t635t__dat__pos,&__t635t__dat__length,&__t635t__dat__first);
  goto __t_return;
  __t_return:
  *__t1645t=__t635t__unsafe_ptr;
  *__t1646t=__t635t__dat__pos;
  *__t1647t=__t635t__dat__length;
  *__t1648t=__t635t__dat__first;
}

static inline __attribute__((always_inline)) void unpack__t1486t(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __t1649t, uint64_t* __t1650t, uint64_t* __t1651t, char* __t1652t) {
  uint64_t __t1487t__=0;
  uint64_t __t1488t__=0;
  char* __t1489t__unsafe_ptr=0;
  uint64_t __t1489t__dat__pos=0;
  uint64_t __t1489t__dat__length=0;
  char __t1489t__dat__first=0;
  nat__t512t(m__dat__pos,&__t1487t__);
  nat__t512t(m__dat__length,&__t1488t__);
  str__t634t(m__unsafe_ptr,__t1487t__,__t1488t__,&__t1489t__unsafe_ptr,&__t1489t__dat__pos,&__t1489t__dat__length,&__t1489t__dat__first);
  goto __t_return;
  __t_return:
  *__t1649t=__t1489t__unsafe_ptr;
  *__t1650t=__t1489t__dat__pos;
  *__t1651t=__t1489t__dat__length;
  *__t1652t=__t1489t__dat__first;
}

static inline __attribute__((always_inline)) void str__t667t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1653t, uint64_t* __t1654t, uint64_t* __t1655t, char* __t1656t) {
  goto __t_return;
  __t_return:
  *__t1653t=other__unsafe_ptr;
  *__t1654t=other__dat__pos;
  *__t1655t=other__dat__length;
  *__t1656t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1657t) {
  goto __t_return;
  __t_return:
  *__t1657t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__t744t(char** __t1658t, uint64_t* __t1659t, uint16_t* __t1660t, uint16_t* __t1661t, uint64_t* __t1662t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1663t, uint64_t* __t1664t, uint64_t* __t1665t, char* __t1666t) {
  char* buf__unsafe_ptr=*__t1658t;
  uint64_t buf__unsafe_size=*__t1659t;
  uint16_t buf__unsafe_offset=*__t1660t;
  uint16_t buf__unsafe_align=*__t1661t;
  uint64_t pos=*__t1662t;
  char* __t745t__unsafe_ptr=0;
  uint64_t __t745t__dat__pos=0;
  uint64_t __t745t__dat__length=0;
  char __t745t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t746t__=0;
  uint64_t __t747t__=0;
  uint64_t next_pos=0;
  uint64_t __t748t__=0;
  char __t749t__=0;
  uint64_t __t750t=0;
  uint64_t __t751t__=0;
  uint64_t prev_pos=0;
  char* __t752t__unsafe_ptr=0;
  uint64_t __t752t__dat__pos=0;
  uint64_t __t752t__dat__length=0;
  char __t752t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t667t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t745t__unsafe_ptr,&__t745t__dat__pos,&__t745t__dat__length,&__t745t__dat__first);
  other__unsafe_ptr=__t745t__unsafe_ptr;
  other__dat__pos=__t745t__dat__pos;
  other__dat__length=__t745t__dat__length;
  other__dat__first=__t745t__dat__first;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t746t__);
  add__t174t(pos,__t746t__,&__t747t__);
  next_pos=__t747t__;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t748t__);
  gt__t275t(next_pos,__t748t__,&__t749t__);
  if(__t749t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t750t=0;
  add__t174t(pos,__t750t,&__t751t__);
  prev_pos=__t751t__;
  pos=next_pos;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t752t__unsafe_ptr,&__t752t__dat__pos,&__t752t__dat__length,&__t752t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1658t=buf__unsafe_ptr;
  *__t1659t=buf__unsafe_size;
  *__t1660t=buf__unsafe_offset;
  *__t1661t=buf__unsafe_align;
  *__t1662t=pos;
  *__t1663t=__t752t__unsafe_ptr;
  *__t1664t=__t752t__dat__pos;
  *__t1665t=__t752t__dat__length;
  *__t1666t=__t752t__dat__first;
  
  return __t_errcode;
}

int copy__t753t(char** __t1667t, uint64_t* __t1668t, uint16_t* __t1669t, uint16_t* __t1670t, uint64_t* __t1671t, const char* _other, char** __t1672t, uint64_t* __t1673t, uint64_t* __t1674t, char* __t1675t) {
  char* buf__unsafe_ptr=*__t1667t;
  uint64_t buf__unsafe_size=*__t1668t;
  uint16_t buf__unsafe_offset=*__t1669t;
  uint16_t buf__unsafe_align=*__t1670t;
  uint64_t pos=*__t1671t;
  char* __t754t__unsafe_ptr=0;
  uint64_t __t754t__dat__pos=0;
  uint64_t __t754t__dat__length=0;
  char __t754t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t755t__=0;
  uint64_t __t756t__=0;
  uint64_t next_pos=0;
  uint64_t __t757t__=0;
  char __t758t__=0;
  uint64_t __t759t=0;
  uint64_t __t760t__=0;
  uint64_t prev_pos=0;
  char* __t761t__unsafe_ptr=0;
  uint64_t __t761t__dat__pos=0;
  uint64_t __t761t__dat__length=0;
  char __t761t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t674t(_other,&__t754t__unsafe_ptr,&__t754t__dat__pos,&__t754t__dat__length,&__t754t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t754t__unsafe_ptr;
  other__dat__pos=__t754t__dat__pos;
  other__dat__length=__t754t__dat__length;
  other__dat__first=__t754t__dat__first;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t755t__);
  add__t174t(pos,__t755t__,&__t756t__);
  next_pos=__t756t__;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t757t__);
  gt__t275t(next_pos,__t757t__,&__t758t__);
  if(__t758t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t759t=0;
  add__t174t(pos,__t759t,&__t760t__);
  prev_pos=__t760t__;
  pos=next_pos;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t761t__unsafe_ptr,&__t761t__dat__pos,&__t761t__dat__length,&__t761t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1667t=buf__unsafe_ptr;
  *__t1668t=buf__unsafe_size;
  *__t1669t=buf__unsafe_offset;
  *__t1670t=buf__unsafe_align;
  *__t1671t=pos;
  *__t1672t=__t761t__unsafe_ptr;
  *__t1673t=__t761t__dat__pos;
  *__t1674t=__t761t__dat__length;
  *__t1675t=__t761t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1501t(char* buff__unsafe_ptr, uint64_t buff__unsafe_size, uint16_t buff__unsafe_offset, uint16_t buff__unsafe_align, char** __t1676t, uint64_t* __t1677t, uint64_t* __t1678t, char* __t1679t) {
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
  char __t1508t____t517t__=0;
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
  KB__t486t(__t1505t,&__t1506t__);
  __t_errcode=alloc__t515t(&__t1504t__unsafe_ptr,&__t1504t__unsafe_size,&__t1504t__unsafe_offset,&__t1504t__unsafe_align,__t1506t__,&__t1507t__unsafe_ptr,&__t1507t__unsafe_size,&__t1507t__unsafe_offset,&__t1507t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t724t(&__t1507t__unsafe_ptr,&__t1507t__unsafe_size,&__t1507t__unsafe_offset,&__t1507t__unsafe_align,&__t1509t__buf__unsafe_ptr,&__t1509t__buf__unsafe_size,&__t1509t__buf__unsafe_offset,&__t1509t__buf__unsafe_align,&__t1509t__pos);
  mem__pos=__t1509t__pos;
  len__t604t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1510t__);
  range__t467t(__t1510t__,&__t1511t__from,&__t1511t__to);
  iter__from=__t1511t__from;
  iter__to=__t1511t__to;
  start=mem__pos;
  while(1){
  __t_complain=next__t476t(&iter__from,iter__to,&__t1513t__);
  __t1512t=__t_complain;
  i=__t1513t__;
  __t1512t=__t1512t==0;
  if(!__t1512t){
  break;
  }
  __t_errcode=get__t597t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__t1514t__);
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
  __t_errcode=copy__t744t(&__t1507t__unsafe_ptr,&__t1507t__unsafe_size,&__t1507t__unsafe_offset,&__t1507t__unsafe_align,&mem__pos,__t1516t__unsafe_ptr,__t1516t__dat__pos,__t1516t__dat__length,__t1516t__dat__first,&__t1517t__unsafe_ptr,&__t1517t__dat__pos,&__t1517t__dat__length,&__t1517t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t753t(&__t1507t__unsafe_ptr,&__t1507t__unsafe_size,&__t1507t__unsafe_offset,&__t1507t__unsafe_align,&mem__pos,__t1518t,&__t1519t__unsafe_ptr,&__t1519t__dat__pos,&__t1519t__dat__length,&__t1519t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=str__t668t(__t1507t__unsafe_ptr,__t1507t__unsafe_size,__t1507t__unsafe_offset,__t1507t__unsafe_align,start,mem__pos,&__t1520t__unsafe_ptr,&__t1520t__dat__pos,&__t1520t__dat__length,&__t1520t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1520t__unsafe_ptr=__t1507t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t442t(__t1520t__unsafe_ptr,&__t1508t____t517t__);
  if(__t1508t____t517t__){
  free__t508t(&__t1520t__unsafe_ptr);
  }
  __t_return:
  *__t1676t=__t1520t__unsafe_ptr;
  *__t1677t=__t1520t__dat__pos;
  *__t1678t=__t1520t__dat__length;
  *__t1679t=__t1520t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t386t(uint64_t value, const char* endl) {
  int __t387t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t786t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t787t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1521t() {
  char* __t1523t__unsafe_ptr=0;
  uint64_t __t1523t__unsafe_size=0;
  uint16_t __t1523t__unsafe_offset=0;
  uint16_t __t1523t__unsafe_align=0;
  char* __t1524t__unsafe_ptr=0;
  uint64_t __t1524t__unsafe_size=0;
  uint16_t __t1524t__unsafe_offset=0;
  uint16_t __t1524t__unsafe_align=0;
  uint64_t __t1525t=0;
  char* __t1526t__unsafe_ptr=0;
  uint64_t __t1526t__unsafe_size=0;
  uint16_t __t1526t__unsafe_offset=0;
  uint16_t __t1526t__unsafe_align=0;
  char __t1527t____t517t__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __t1528t=0;
  char* __t1529t__=0;
  char* __t1531t__unsafe_ptr=0;
  uint16_t __t1531t__dat__pos=0;
  uint16_t __t1531t__dat__length=0;
  uint64_t __t1532t=0;
  char* __t1533t__=0;
  char* __t1535t__unsafe_ptr=0;
  uint16_t __t1535t__dat__pos=0;
  uint16_t __t1535t__dat__length=0;
  uint64_t __t1536t=0;
  char* __t1537t__=0;
  char* __t1539t__unsafe_ptr=0;
  uint16_t __t1539t__dat__pos=0;
  uint16_t __t1539t__dat__length=0;
  uint64_t __t1540t=0;
  char* __t1541t__=0;
  char* __t1543t__unsafe_ptr=0;
  uint16_t __t1543t__dat__pos=0;
  uint16_t __t1543t__dat__length=0;
  uint64_t __t1544t=0;
  char* __t1545t__=0;
  char* __t1547t__unsafe_ptr=0;
  uint16_t __t1547t__dat__pos=0;
  uint16_t __t1547t__dat__length=0;
  uint64_t __t1548t=0;
  char* __t1549t__=0;
  char* __t1550t__unsafe_ptr=0;
  uint64_t __t1550t__dat__pos=0;
  uint64_t __t1550t__dat__length=0;
  char __t1550t__dat__first=0;
  char __t1551t____t1508t____t517t__=0;
  char* __t1552t__unsafe_ptr=0;
  uint16_t __t1552t__dat__pos=0;
  uint16_t __t1552t__dat__length=0;
  uint64_t __t1553t__=0;
  uint64_t __t1554t__from=0;
  uint64_t __t1554t__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __t1555t=0;
  uint64_t __t1556t__=0;
  uint64_t j=0;
  char* __t1558t__=0;
  char* __t1559t__unsafe_ptr=0;
  uint16_t __t1559t__dat__pos=0;
  uint16_t __t1559t__dat__length=0;
  char* __t1560t__unsafe_ptr=0;
  uint64_t __t1560t__dat__pos=0;
  uint64_t __t1560t__dat__length=0;
  char __t1560t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  str____t_buffer____buffer__t1499t(&__t1523t__unsafe_ptr,&__t1523t__unsafe_size,&__t1523t__unsafe_offset,&__t1523t__unsafe_align);
  __t1524t__unsafe_ptr=__t1523t__unsafe_ptr;
  __t1524t__unsafe_size=__t1523t__unsafe_size;
  __t1524t__unsafe_offset=__t1523t__unsafe_offset;
  __t1524t__unsafe_align=__t1523t__unsafe_align;
  __t1525t=6;
  __t_errcode=alloc__t515t(&__t1524t__unsafe_ptr,&__t1524t__unsafe_size,&__t1524t__unsafe_offset,&__t1524t__unsafe_align,__t1525t,&__t1526t__unsafe_ptr,&__t1526t__unsafe_size,&__t1526t__unsafe_offset,&__t1526t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buff__unsafe_ptr=__t1526t__unsafe_ptr;
  buff__unsafe_size=__t1526t__unsafe_size;
  buff__unsafe_offset=__t1526t__unsafe_offset;
  buff__unsafe_align=__t1526t__unsafe_align;
  __t1528t=0;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1528t,&__t1529t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1483t(__t1530t,&__t1531t__unsafe_ptr,&__t1531t__dat__pos,&__t1531t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1529t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1529t__,&__t1531t__unsafe_ptr,8);
  memcpy(__t1529t__+8,&__t1531t__dat__pos,2);
  memcpy(__t1529t__+10,&__t1531t__dat__length,2);
  __t1532t=1;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1532t,&__t1533t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1483t(__t1534t,&__t1535t__unsafe_ptr,&__t1535t__dat__pos,&__t1535t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1533t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1533t__,&__t1535t__unsafe_ptr,8);
  memcpy(__t1533t__+8,&__t1535t__dat__pos,2);
  memcpy(__t1533t__+10,&__t1535t__dat__length,2);
  __t1536t=2;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1536t,&__t1537t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1483t(__t1538t,&__t1539t__unsafe_ptr,&__t1539t__dat__pos,&__t1539t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1537t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1537t__,&__t1539t__unsafe_ptr,8);
  memcpy(__t1537t__+8,&__t1539t__dat__pos,2);
  memcpy(__t1537t__+10,&__t1539t__dat__length,2);
  __t1540t=3;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1540t,&__t1541t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1483t(__t1542t,&__t1543t__unsafe_ptr,&__t1543t__dat__pos,&__t1543t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1541t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1541t__,&__t1543t__unsafe_ptr,8);
  memcpy(__t1541t__+8,&__t1543t__dat__pos,2);
  memcpy(__t1541t__+10,&__t1543t__dat__length,2);
  __t1544t=4;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1544t,&__t1545t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1483t(__t1546t,&__t1547t__unsafe_ptr,&__t1547t__dat__pos,&__t1547t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1545t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1545t__,&__t1547t__unsafe_ptr,8);
  memcpy(__t1545t__+8,&__t1547t__dat__pos,2);
  memcpy(__t1545t__+10,&__t1547t__dat__length,2);
  __t1548t=5;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1548t,&__t1549t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=concat__t1501t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1550t__unsafe_ptr,&__t1550t__dat__pos,&__t1550t__dat__length,&__t1550t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1480t(__t1550t__unsafe_ptr,__t1550t__dat__pos,__t1550t__dat__length,__t1550t__dat__first,&__t1552t__unsafe_ptr,&__t1552t__dat__pos,&__t1552t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1549t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1549t__,&__t1552t__unsafe_ptr,8);
  memcpy(__t1549t__+8,&__t1552t__dat__pos,2);
  memcpy(__t1549t__+10,&__t1552t__dat__length,2);
  len__t604t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1553t__);
  range__t467t(__t1553t__,&__t1554t__from,&__t1554t__to);
  full_iter__from=__t1554t__from;
  full_iter__to=__t1554t__to;
  while(1){
  __t_complain=next__t476t(&full_iter__from,full_iter__to,&__t1556t__);
  __t1555t=__t_complain;
  j=__t1556t__;
  __t1555t=__t1555t==0;
  if(!__t1555t){
  break;
  }
  print__t386t(j,__t1518t);
  __t_errcode=get__t597t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__t1558t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1558t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1559t__unsafe_ptr,__t1558t__,8);
  memcpy(&__t1559t__dat__pos,__t1558t__+8,2);
  memcpy(&__t1559t__dat__length,__t1558t__+10,2);
  unpack__t1486t(__t1559t__unsafe_ptr,__t1559t__dat__pos,__t1559t__dat__length,&__t1560t__unsafe_ptr,&__t1560t__dat__pos,&__t1560t__dat__length,&__t1560t__dat__first);
  print__t786t(__t1560t__unsafe_ptr,__t1560t__dat__pos,__t1560t__dat__length,__t1560t__dat__first);
  }
  
  __t_failure:exists__t442t(__t1550t__unsafe_ptr,&__t1551t____t1508t____t517t__);
  if(__t1551t____t1508t____t517t__){
  free__t508t(&__t1550t__unsafe_ptr);
  }
  exists__t442t(__t1526t__unsafe_ptr,&__t1527t____t517t__);
  if(__t1527t____t517t__){
  free__t508t(&__t1526t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1521t();return 0;}