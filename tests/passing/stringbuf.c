#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1499t="mario";
const char* const __t1475t="surnname  ";
const char* const __t1470t="-------------------";
const char* const __t1497t="it's a me";
const char* const __t377t="\n";
const char* const __t1472t="name      ";
const char* const __t369t="";
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

static inline __attribute__((always_inline)) void Person____t_buffer____buffer__t1480t(char** __t1523t, uint64_t* __t1524t, uint16_t* __t1525t, uint16_t* __t1526t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__t1523t=unsafe_ptr;
  *__t1524t=unsafe_size;
  *__t1525t=unsafe_offset;
  *__t1526t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t1527t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1527t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t1528t) {
  char* allocated=*__t1528t;
  if(allocated){
  free(allocated);
  }
  *__t1528t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1529t) {
  int value=0;
  *__t1529t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1530t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1530t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1531t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1531t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1532t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1532t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1533t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1533t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1534t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1534t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1535t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1535t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1536t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1536t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t1537t) {
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
  *__t1537t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t1538t, uint64_t* __t1539t, uint16_t* __t1540t, uint16_t* __t1541t, uint64_t size, char** __t1542t, uint64_t* __t1543t, uint16_t* __t1544t, uint16_t* __t1545t) {
  char* buffer__unsafe_ptr=*__t1538t;
  uint64_t buffer__unsafe_size=*__t1539t;
  uint16_t buffer__unsafe_offset=*__t1540t;
  uint16_t buffer__unsafe_align=*__t1541t;
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
  *__t1538t=buffer__unsafe_ptr;
  *__t1539t=buffer__unsafe_size;
  *__t1540t=buffer__unsafe_offset;
  *__t1541t=buffer__unsafe_align;
  *__t1542t=buffer__unsafe_ptr;
  *__t1543t=buffer__unsafe_size;
  *__t1544t=buffer__unsafe_offset;
  *__t1545t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1486t(char** __t1546t, uint64_t* __t1547t, uint16_t* __t1548t, uint16_t* __t1549t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1546t=unsafe_ptr;
  *__t1547t=unsafe_size;
  *__t1548t=unsafe_offset;
  *__t1549t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t486t(uint64_t x, uint64_t* __t1550t) {
  uint64_t __t487t=0;
  uint64_t __t488t__=0;
  __t487t=1024;
  mul__t198t(x,__t487t,&__t488t__);
  goto __t_return;
  __t_return:
  *__t1550t=__t488t__;
}

static inline __attribute__((always_inline)) void bufpos__t724t(char** __t1551t, uint64_t* __t1552t, uint16_t* __t1553t, uint16_t* __t1554t, char** __t1555t, uint64_t* __t1556t, uint16_t* __t1557t, uint16_t* __t1558t, uint64_t* __t1559t) {
  char* buf__unsafe_ptr=*__t1551t;
  uint64_t buf__unsafe_size=*__t1552t;
  uint16_t buf__unsafe_offset=*__t1553t;
  uint16_t buf__unsafe_align=*__t1554t;
  uint64_t __t725t=0;
  uint64_t __t726t=0;
  uint64_t pos=0;
  __t725t=0;
  __t726t=__t725t;
  pos=__t726t;
  goto __t_return;
  __t_return:
  *__t1551t=buf__unsafe_ptr;
  *__t1552t=buf__unsafe_size;
  *__t1553t=buf__unsafe_offset;
  *__t1554t=buf__unsafe_align;
  *__t1555t=buf__unsafe_ptr;
  *__t1556t=buf__unsafe_size;
  *__t1557t=buf__unsafe_offset;
  *__t1558t=buf__unsafe_align;
  *__t1559t=pos;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1560t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1560t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1561t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1561t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1562t) {
  *__t1562t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1563t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1563t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1564t, uint64_t* __t1565t, uint16_t* __t1566t, uint16_t* __t1567t, uint64_t i, char** __t1568t) {
  char* buffer__unsafe_ptr=*__t1564t;
  uint64_t buffer__unsafe_size=*__t1565t;
  uint16_t buffer__unsafe_offset=*__t1566t;
  uint16_t buffer__unsafe_align=*__t1567t;
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
  *__t1564t=buffer__unsafe_ptr;
  *__t1565t=buffer__unsafe_size;
  *__t1566t=buffer__unsafe_offset;
  *__t1567t=buffer__unsafe_align;
  *__t1568t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t1569t, uint64_t* __t1570t, uint16_t* __t1571t, uint16_t* __t1572t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1569t=unsafe_ptr;
  *__t1570t=unsafe_size;
  *__t1571t=unsafe_offset;
  *__t1572t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1573t) {
  *__t1573t=to;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1574t) {
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
  *__t1574t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1575t, uint64_t* __t1576t, uint64_t* __t1577t, char* __t1578t) {
  goto __t_return;
  __t_return:
  *__t1575t=unsafe_ptr;
  *__t1576t=dat__pos;
  *__t1577t=dat__length;
  *__t1578t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1579t, uint64_t* __t1580t, uint64_t* __t1581t, char* __t1582t) {
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
  *__t1579t=__t643t__unsafe_ptr;
  *__t1580t=__t643t__dat__pos;
  *__t1581t=__t643t__dat__length;
  *__t1582t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1583t, uint64_t* __t1584t, uint64_t* __t1585t, char* __t1586t) {
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
  *__t1583t=__t673t__unsafe_ptr;
  *__t1584t=__t673t__dat__pos;
  *__t1585t=__t673t__dat__length;
  *__t1586t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t1587t, uint64_t* __t1588t, uint64_t* __t1589t, char* __t1590t) {
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
  *__t1587t=__t681t__unsafe_ptr;
  *__t1588t=__t681t__dat__pos;
  *__t1589t=__t681t__dat__length;
  *__t1590t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1591t) {
  goto __t_return;
  __t_return:
  *__t1591t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1592t) {
  goto __t_return;
  __t_return:
  *__t1592t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t1593t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1593t=z;
}

int copy__t753t(char** __t1594t, uint64_t* __t1595t, uint16_t* __t1596t, uint16_t* __t1597t, uint64_t* __t1598t, const char* _other, char** __t1599t, uint64_t* __t1600t, uint64_t* __t1601t, char* __t1602t) {
  char* buf__unsafe_ptr=*__t1594t;
  uint64_t buf__unsafe_size=*__t1595t;
  uint16_t buf__unsafe_offset=*__t1596t;
  uint16_t buf__unsafe_align=*__t1597t;
  uint64_t pos=*__t1598t;
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
  *__t1594t=buf__unsafe_ptr;
  *__t1595t=buf__unsafe_size;
  *__t1596t=buf__unsafe_offset;
  *__t1597t=buf__unsafe_align;
  *__t1598t=pos;
  *__t1599t=__t761t__unsafe_ptr;
  *__t1600t=__t761t__dat__pos;
  *__t1601t=__t761t__dat__length;
  *__t1602t=__t761t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Person__t1467t(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __t1603t, uint64_t* __t1604t, uint64_t* __t1605t, char* __t1606t, char** __t1607t, uint64_t* __t1608t, uint64_t* __t1609t, char* __t1610t) {
  goto __t_return;
  __t_return:
  *__t1603t=name__unsafe_ptr;
  *__t1604t=name__dat__pos;
  *__t1605t=name__dat__length;
  *__t1606t=name__dat__first;
  *__t1607t=surname__unsafe_ptr;
  *__t1608t=surname__dat__pos;
  *__t1609t=surname__dat__length;
  *__t1610t=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__t375t(const char* value) {
  int __t376t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t373t(const char* value, const char* endl) {
  int __t374t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t786t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t787t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t1469t(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__t375t(__t1470t);
  print__t373t(__t1472t,__t369t);
  print__t786t(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__t373t(__t1475t,__t369t);
  print__t786t(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__t375t(__t1470t);
}

static inline __attribute__((always_inline)) int test__t1479t(char** __t1611t, uint64_t* __t1612t, uint16_t* __t1613t, uint16_t* __t1614t, uint64_t* __t1615t, char** __t1616t, uint64_t* __t1617t, uint16_t* __t1618t, uint16_t* __t1619t) {
  char* __t1482t__unsafe_ptr=0;
  uint64_t __t1482t__unsafe_size=0;
  uint16_t __t1482t__unsafe_offset=0;
  uint16_t __t1482t__unsafe_align=0;
  uint64_t __t1483t=0;
  char* __t1484t__unsafe_ptr=0;
  uint64_t __t1484t__unsafe_size=0;
  uint16_t __t1484t__unsafe_offset=0;
  uint16_t __t1484t__unsafe_align=0;
  char __t1485t____t517t__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __t1488t__unsafe_ptr=0;
  uint64_t __t1488t__unsafe_size=0;
  uint16_t __t1488t__unsafe_offset=0;
  uint16_t __t1488t__unsafe_align=0;
  uint64_t __t1489t=0;
  uint64_t __t1490t__=0;
  char* __t1491t__unsafe_ptr=0;
  uint64_t __t1491t__unsafe_size=0;
  uint16_t __t1491t__unsafe_offset=0;
  uint16_t __t1491t__unsafe_align=0;
  char __t1492t____t517t__=0;
  char* __t1493t__buf__unsafe_ptr=0;
  uint64_t __t1493t__buf__unsafe_size=0;
  uint16_t __t1493t__buf__unsafe_offset=0;
  uint16_t __t1493t__buf__unsafe_align=0;
  uint64_t __t1493t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __t1494t=0;
  char* __t1495t__=0;
  uint64_t __t1496t=0;
  char* __t1498t__unsafe_ptr=0;
  uint64_t __t1498t__dat__pos=0;
  uint64_t __t1498t__dat__length=0;
  char __t1498t__dat__first=0;
  char* __t1500t__unsafe_ptr=0;
  uint64_t __t1500t__dat__pos=0;
  uint64_t __t1500t__dat__length=0;
  char __t1500t__dat__first=0;
  char* __t1501t__name__unsafe_ptr=0;
  uint64_t __t1501t__name__dat__pos=0;
  uint64_t __t1501t__name__dat__length=0;
  char __t1501t__name__dat__first=0;
  char* __t1501t__surname__unsafe_ptr=0;
  uint64_t __t1501t__surname__dat__pos=0;
  uint64_t __t1501t__surname__dat__length=0;
  char __t1501t__surname__dat__first=0;
  uint64_t __t1502t=0;
  char* __t1503t__=0;
  char* __t1504t__name__unsafe_ptr=0;
  uint64_t __t1504t__name__dat__pos=0;
  uint64_t __t1504t__name__dat__length=0;
  char __t1504t__name__dat__first=0;
  char* __t1504t__surname__unsafe_ptr=0;
  uint64_t __t1504t__surname__dat__pos=0;
  uint64_t __t1504t__surname__dat__length=0;
  char __t1504t__surname__dat__first=0;
  char* __t1506t__unsafe_ptr=0;
  uint64_t __t1506t__unsafe_size=0;
  uint16_t __t1506t__unsafe_offset=0;
  uint16_t __t1506t__unsafe_align=0;
  char* __t1510t__unsafe_ptr=0;
  uint64_t __t1510t__unsafe_size=0;
  uint16_t __t1510t__unsafe_offset=0;
  uint16_t __t1510t__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  Person____t_buffer____buffer__t1480t(&__t1482t__unsafe_ptr,&__t1482t__unsafe_size,&__t1482t__unsafe_offset,&__t1482t__unsafe_align);
  __t1483t=4;
  __t_errcode=alloc__t515t(&__t1482t__unsafe_ptr,&__t1482t__unsafe_size,&__t1482t__unsafe_offset,&__t1482t__unsafe_align,__t1483t,&__t1484t__unsafe_ptr,&__t1484t__unsafe_size,&__t1484t__unsafe_offset,&__t1484t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  people__unsafe_ptr=__t1484t__unsafe_ptr;
  people__unsafe_size=__t1484t__unsafe_size;
  people__unsafe_offset=__t1484t__unsafe_offset;
  people__unsafe_align=__t1484t__unsafe_align;
  char____t_buffer____buffer__t1486t(&__t1488t__unsafe_ptr,&__t1488t__unsafe_size,&__t1488t__unsafe_offset,&__t1488t__unsafe_align);
  __t1489t=4;
  KB__t486t(__t1489t,&__t1490t__);
  __t_errcode=alloc__t515t(&__t1488t__unsafe_ptr,&__t1488t__unsafe_size,&__t1488t__unsafe_offset,&__t1488t__unsafe_align,__t1490t__,&__t1491t__unsafe_ptr,&__t1491t__unsafe_size,&__t1491t__unsafe_offset,&__t1491t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t724t(&__t1491t__unsafe_ptr,&__t1491t__unsafe_size,&__t1491t__unsafe_offset,&__t1491t__unsafe_align,&__t1493t__buf__unsafe_ptr,&__t1493t__buf__unsafe_size,&__t1493t__buf__unsafe_offset,&__t1493t__buf__unsafe_align,&__t1493t__pos);
  buf__buf__unsafe_ptr=__t1493t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1493t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1493t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1493t__buf__unsafe_align;
  buf__pos=__t1493t__pos;
  __t1494t=0;
  __t_errcode=mutget__t590t(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__t1494t,&__t1495t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1496t=0;
  __t_errcode=copy__t753t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1497t,&__t1498t__unsafe_ptr,&__t1498t__dat__pos,&__t1498t__dat__length,&__t1498t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t753t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1499t,&__t1500t__unsafe_ptr,&__t1500t__dat__pos,&__t1500t__dat__length,&__t1500t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  Person__t1467t(__t1496t,__t1498t__unsafe_ptr,__t1498t__dat__pos,__t1498t__dat__length,__t1498t__dat__first,__t1500t__unsafe_ptr,__t1500t__dat__pos,__t1500t__dat__length,__t1500t__dat__first,&__t1501t__name__unsafe_ptr,&__t1501t__name__dat__pos,&__t1501t__name__dat__length,&__t1501t__name__dat__first,&__t1501t__surname__unsafe_ptr,&__t1501t__surname__dat__pos,&__t1501t__surname__dat__length,&__t1501t__surname__dat__first);
  if(!__t1495t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1495t__,&__t1501t__name__unsafe_ptr,8);
  memcpy(__t1495t__+8,&__t1501t__name__dat__pos,8);
  memcpy(__t1495t__+16,&__t1501t__name__dat__length,8);
  memcpy(__t1495t__+24,&__t1501t__name__dat__first,1);
  memcpy(__t1495t__+25,&__t1501t__surname__unsafe_ptr,8);
  memcpy(__t1495t__+33,&__t1501t__surname__dat__pos,8);
  memcpy(__t1495t__+41,&__t1501t__surname__dat__length,8);
  memcpy(__t1495t__+49,&__t1501t__surname__dat__first,1);
  __t1502t=0;
  __t_errcode=get__t597t(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__t1502t,&__t1503t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1503t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1504t__name__unsafe_ptr,__t1503t__,8);
  memcpy(&__t1504t__name__dat__pos,__t1503t__+8,8);
  memcpy(&__t1504t__name__dat__length,__t1503t__+16,8);
  memcpy(&__t1504t__name__dat__first,__t1503t__+24,1);
  memcpy(&__t1504t__surname__unsafe_ptr,__t1503t__+25,8);
  memcpy(&__t1504t__surname__dat__pos,__t1503t__+33,8);
  memcpy(&__t1504t__surname__dat__length,__t1503t__+41,8);
  memcpy(&__t1504t__surname__dat__first,__t1503t__+49,1);
  print__t1469t(__t1504t__name__unsafe_ptr,__t1504t__name__dat__pos,__t1504t__name__dat__length,__t1504t__name__dat__first,__t1504t__surname__unsafe_ptr,__t1504t__surname__dat__pos,__t1504t__surname__dat__length,__t1504t__surname__dat__first);
  __t1506t__unsafe_ptr=people__unsafe_ptr;
  __t1506t__unsafe_size=people__unsafe_size;
  __t1506t__unsafe_offset=people__unsafe_offset+0;
  __t1506t__unsafe_align=people__unsafe_align;
  __t1510t__unsafe_ptr=__t1506t__unsafe_ptr;
  __t1510t__unsafe_size=__t1506t__unsafe_size;
  __t1510t__unsafe_offset=__t1506t__unsafe_offset+8;
  __t1510t__unsafe_align=__t1506t__unsafe_align;
  dat__unsafe_ptr=__t1510t__unsafe_ptr;
  dat__unsafe_size=__t1510t__unsafe_size;
  dat__unsafe_offset=__t1510t__unsafe_offset;
  dat__unsafe_align=__t1510t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(buf__buf__unsafe_ptr,&__t1492t____t517t__);
  if(__t1492t____t517t__){
  free__t508t(&buf__buf__unsafe_ptr);
  }
  exists__t442t(dat__unsafe_ptr,&__t1485t____t517t__);
  if(__t1485t____t517t__){
  free__t508t(&dat__unsafe_ptr);
  }
  __t_return:
  *__t1611t=buf__buf__unsafe_ptr;
  *__t1612t=buf__buf__unsafe_size;
  *__t1613t=buf__buf__unsafe_offset;
  *__t1614t=buf__buf__unsafe_align;
  *__t1615t=buf__pos;
  *__t1616t=dat__unsafe_ptr;
  *__t1617t=dat__unsafe_size;
  *__t1618t=dat__unsafe_offset;
  *__t1619t=dat__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1514t() {
  char* __t1516t__buf__buf__unsafe_ptr=0;
  uint64_t __t1516t__buf__buf__unsafe_size=0;
  uint16_t __t1516t__buf__buf__unsafe_offset=0;
  uint16_t __t1516t__buf__buf__unsafe_align=0;
  uint64_t __t1516t__buf__pos=0;
  char* __t1516t__dat__unsafe_ptr=0;
  uint64_t __t1516t__dat__unsafe_size=0;
  uint16_t __t1516t__dat__unsafe_offset=0;
  uint16_t __t1516t__dat__unsafe_align=0;
  char __t1517t____t1485t____t517t__=0;
  char __t1517t____t1492t____t517t__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __t1518t=0;
  char* __t1519t__=0;
  uint64_t __t1520t__pos=0;
  uint64_t __t1520t__length=0;
  char __t1520t__first=0;
  char* __t1521t__unsafe_ptr=0;
  uint64_t __t1521t__dat__pos=0;
  uint64_t __t1521t__dat__length=0;
  char __t1521t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t_errcode=test__t1479t(&__t1516t__buf__buf__unsafe_ptr,&__t1516t__buf__buf__unsafe_size,&__t1516t__buf__buf__unsafe_offset,&__t1516t__buf__buf__unsafe_align,&__t1516t__buf__pos,&__t1516t__dat__unsafe_ptr,&__t1516t__dat__unsafe_size,&__t1516t__dat__unsafe_offset,&__t1516t__dat__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__buf__buf__unsafe_ptr=__t1516t__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__t1516t__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__t1516t__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__t1516t__buf__buf__unsafe_align;
  t__buf__pos=__t1516t__buf__pos;
  t__dat__unsafe_ptr=__t1516t__dat__unsafe_ptr;
  t__dat__unsafe_size=__t1516t__dat__unsafe_size;
  t__dat__unsafe_offset=__t1516t__dat__unsafe_offset;
  t__dat__unsafe_align=__t1516t__dat__unsafe_align;
  __t1518t=0;
  __t_errcode=get__t597t(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__t1518t,&__t1519t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1519t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1520t__pos,__t1519t__,8);
  memcpy(&__t1520t__length,__t1519t__+8,8);
  memcpy(&__t1520t__first,__t1519t__+16,1);
  __t_errcode=str__t636t(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__t1520t__pos,__t1520t__length,__t1520t__first,&__t1521t__unsafe_ptr,&__t1521t__dat__pos,&__t1521t__dat__length,&__t1521t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t786t(__t1521t__unsafe_ptr,__t1521t__dat__pos,__t1521t__dat__length,__t1521t__dat__first);
  
  __t_failure:exists__t442t(__t1516t__buf__buf__unsafe_ptr,&__t1517t____t1492t____t517t__);
  if(__t1517t____t1492t____t517t__){
  free__t508t(&__t1516t__buf__buf__unsafe_ptr);
  }
  exists__t442t(__t1516t__dat__unsafe_ptr,&__t1517t____t1485t____t517t__);
  if(__t1517t____t1485t____t517t__){
  free__t508t(&__t1516t__dat__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1514t();return 0;}