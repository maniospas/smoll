#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t374t="\n";
const char* const __t1499t="mario";
const char* const __t366t="";
const char* const __t1475t="surnname  ";
const char* const __t1470t="-------------------";
const char* const __t1497t="it's a me";
const char* const __t1472t="name      ";
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

static inline __attribute__((always_inline)) void Person____t_buffer____buffer__t1480t(char** __t1522t, uint64_t* __t1523t, uint16_t* __t1524t, uint16_t* __t1525t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__t1522t=unsafe_ptr;
  *__t1523t=unsafe_size;
  *__t1524t=unsafe_offset;
  *__t1525t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t439t(char* x, char* __t1526t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1526t=z;
}

static inline __attribute__((always_inline)) void free__t505t(char** __t1527t) {
  char* allocated=*__t1527t;
  if(allocated){
  free(allocated);
  }
  *__t1527t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1528t) {
  int value=0;
  *__t1528t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1529t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1529t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1530t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1530t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1531t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1531t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1532t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1532t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t1533t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1533t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1534t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1534t=z;
}

static inline __attribute__((always_inline)) void zero__t506t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1535t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1535t=z;
}

static inline __attribute__((always_inline)) int alloc__t498t(uint64_t bytes, char** __t1536t) {
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
  *__t1536t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t512t(char** __t1537t, uint64_t* __t1538t, uint16_t* __t1539t, uint16_t* __t1540t, uint64_t size, char** __t1541t, uint64_t* __t1542t, uint16_t* __t1543t, uint16_t* __t1544t) {
  char* buffer__unsafe_ptr=*__t1537t;
  uint64_t buffer__unsafe_size=*__t1538t;
  uint16_t buffer__unsafe_offset=*__t1539t;
  uint16_t buffer__unsafe_align=*__t1540t;
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
  *__t1537t=buffer__unsafe_ptr;
  *__t1538t=buffer__unsafe_size;
  *__t1539t=buffer__unsafe_offset;
  *__t1540t=buffer__unsafe_align;
  *__t1541t=buffer__unsafe_ptr;
  *__t1542t=buffer__unsafe_size;
  *__t1543t=buffer__unsafe_offset;
  *__t1544t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1486t(char** __t1545t, uint64_t* __t1546t, uint16_t* __t1547t, uint16_t* __t1548t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1545t=unsafe_ptr;
  *__t1546t=unsafe_size;
  *__t1547t=unsafe_offset;
  *__t1548t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t483t(uint64_t x, uint64_t* __t1549t) {
  uint64_t __t484t=0;
  uint64_t __t485t__=0;
  __t484t=1024;
  mul__t198t(x,__t484t,&__t485t__);
  goto __t_return;
  __t_return:
  *__t1549t=__t485t__;
}

static inline __attribute__((always_inline)) void bufpos__t721t(char** __t1550t, uint64_t* __t1551t, uint16_t* __t1552t, uint16_t* __t1553t, char** __t1554t, uint64_t* __t1555t, uint16_t* __t1556t, uint16_t* __t1557t, uint64_t* __t1558t) {
  char* buf__unsafe_ptr=*__t1550t;
  uint64_t buf__unsafe_size=*__t1551t;
  uint16_t buf__unsafe_offset=*__t1552t;
  uint16_t buf__unsafe_align=*__t1553t;
  uint64_t __t722t=0;
  uint64_t __t723t=0;
  uint64_t pos=0;
  __t722t=0;
  __t723t=__t722t;
  pos=__t723t;
  goto __t_return;
  __t_return:
  *__t1550t=buf__unsafe_ptr;
  *__t1551t=buf__unsafe_size;
  *__t1552t=buf__unsafe_offset;
  *__t1553t=buf__unsafe_align;
  *__t1554t=buf__unsafe_ptr;
  *__t1555t=buf__unsafe_size;
  *__t1556t=buf__unsafe_offset;
  *__t1557t=buf__unsafe_align;
  *__t1558t=pos;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1559t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1559t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1560t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1560t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1561t) {
  *__t1561t=to;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t1562t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t1562t=__t508t__;
}

static inline __attribute__((always_inline)) int mutget__t587t(char** __t1563t, uint64_t* __t1564t, uint16_t* __t1565t, uint16_t* __t1566t, uint64_t i, char** __t1567t) {
  char* buffer__unsafe_ptr=*__t1563t;
  uint64_t buffer__unsafe_size=*__t1564t;
  uint16_t buffer__unsafe_offset=*__t1565t;
  uint16_t buffer__unsafe_align=*__t1566t;
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
  *__t1563t=buffer__unsafe_ptr;
  *__t1564t=buffer__unsafe_size;
  *__t1565t=buffer__unsafe_offset;
  *__t1566t=buffer__unsafe_align;
  *__t1567t=__t593t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t554t(char** __t1568t, uint64_t* __t1569t, uint16_t* __t1570t, uint16_t* __t1571t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1568t=unsafe_ptr;
  *__t1569t=unsafe_size;
  *__t1570t=unsafe_offset;
  *__t1571t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1572t) {
  *__t1572t=to;
}

static inline __attribute__((always_inline)) int get__t594t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1573t) {
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
  *__t1573t=__t600t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t629t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1574t, uint64_t* __t1575t, uint64_t* __t1576t, char* __t1577t) {
  goto __t_return;
  __t_return:
  *__t1574t=unsafe_ptr;
  *__t1575t=dat__pos;
  *__t1576t=dat__length;
  *__t1577t=dat__first;
}

static inline __attribute__((always_inline)) int str__t633t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1578t, uint64_t* __t1579t, uint64_t* __t1580t, char* __t1581t) {
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
  *__t1578t=__t640t__unsafe_ptr;
  *__t1579t=__t640t__dat__pos;
  *__t1580t=__t640t__dat__length;
  *__t1581t=__t640t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t665t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1582t, uint64_t* __t1583t, uint64_t* __t1584t, char* __t1585t) {
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
  *__t1582t=__t670t__unsafe_ptr;
  *__t1583t=__t670t__dat__pos;
  *__t1584t=__t670t__dat__length;
  *__t1585t=__t670t__dat__first;
  
  return __t_errcode;
}

int str__t671t(const char* c, char** __t1586t, uint64_t* __t1587t, uint64_t* __t1588t, char* __t1589t) {
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
  *__t1586t=__t678t__unsafe_ptr;
  *__t1587t=__t678t__dat__pos;
  *__t1588t=__t678t__dat__length;
  *__t1589t=__t678t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t679t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1590t) {
  goto __t_return;
  __t_return:
  *__t1590t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t601t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1591t) {
  goto __t_return;
  __t_return:
  *__t1591t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t1592t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1592t=z;
}

int copy__t750t(char** __t1593t, uint64_t* __t1594t, uint16_t* __t1595t, uint16_t* __t1596t, uint64_t* __t1597t, const char* _other, char** __t1598t, uint64_t* __t1599t, uint64_t* __t1600t, char* __t1601t) {
  char* buf__unsafe_ptr=*__t1593t;
  uint64_t buf__unsafe_size=*__t1594t;
  uint16_t buf__unsafe_offset=*__t1595t;
  uint16_t buf__unsafe_align=*__t1596t;
  uint64_t pos=*__t1597t;
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
  *__t1593t=buf__unsafe_ptr;
  *__t1594t=buf__unsafe_size;
  *__t1595t=buf__unsafe_offset;
  *__t1596t=buf__unsafe_align;
  *__t1597t=pos;
  *__t1598t=__t758t__unsafe_ptr;
  *__t1599t=__t758t__dat__pos;
  *__t1600t=__t758t__dat__length;
  *__t1601t=__t758t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Person__t1467t(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __t1602t, uint64_t* __t1603t, uint64_t* __t1604t, char* __t1605t, char** __t1606t, uint64_t* __t1607t, uint64_t* __t1608t, char* __t1609t) {
  goto __t_return;
  __t_return:
  *__t1602t=name__unsafe_ptr;
  *__t1603t=name__dat__pos;
  *__t1604t=name__dat__length;
  *__t1605t=name__dat__first;
  *__t1606t=surname__unsafe_ptr;
  *__t1607t=surname__dat__pos;
  *__t1608t=surname__dat__length;
  *__t1609t=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__t372t(const char* value) {
  int __t373t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t370t(const char* value, const char* endl) {
  int __t371t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t783t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t784t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t1469t(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__t372t(__t1470t);
  print__t370t(__t1472t,__t366t);
  print__t783t(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__t370t(__t1475t,__t366t);
  print__t783t(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__t372t(__t1470t);
}

static inline __attribute__((always_inline)) int test__t1479t(char** __t1610t, uint64_t* __t1611t, uint16_t* __t1612t, uint16_t* __t1613t, uint64_t* __t1614t, char** __t1615t, uint64_t* __t1616t, uint16_t* __t1617t, uint16_t* __t1618t) {
  char* __t1482t__unsafe_ptr=0;
  uint64_t __t1482t__unsafe_size=0;
  uint16_t __t1482t__unsafe_offset=0;
  uint16_t __t1482t__unsafe_align=0;
  uint64_t __t1483t=0;
  char* __t1484t__unsafe_ptr=0;
  uint64_t __t1484t__unsafe_size=0;
  uint16_t __t1484t__unsafe_offset=0;
  uint16_t __t1484t__unsafe_align=0;
  char __t1485t____t514t__=0;
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
  char __t1492t____t514t__=0;
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
  __t_errcode=alloc__t512t(&__t1482t__unsafe_ptr,&__t1482t__unsafe_size,&__t1482t__unsafe_offset,&__t1482t__unsafe_align,__t1483t,&__t1484t__unsafe_ptr,&__t1484t__unsafe_size,&__t1484t__unsafe_offset,&__t1484t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  people__unsafe_ptr=__t1484t__unsafe_ptr;
  people__unsafe_size=__t1484t__unsafe_size;
  people__unsafe_offset=__t1484t__unsafe_offset;
  people__unsafe_align=__t1484t__unsafe_align;
  char____t_buffer____buffer__t1486t(&__t1488t__unsafe_ptr,&__t1488t__unsafe_size,&__t1488t__unsafe_offset,&__t1488t__unsafe_align);
  __t1489t=4;
  KB__t483t(__t1489t,&__t1490t__);
  __t_errcode=alloc__t512t(&__t1488t__unsafe_ptr,&__t1488t__unsafe_size,&__t1488t__unsafe_offset,&__t1488t__unsafe_align,__t1490t__,&__t1491t__unsafe_ptr,&__t1491t__unsafe_size,&__t1491t__unsafe_offset,&__t1491t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t721t(&__t1491t__unsafe_ptr,&__t1491t__unsafe_size,&__t1491t__unsafe_offset,&__t1491t__unsafe_align,&__t1493t__buf__unsafe_ptr,&__t1493t__buf__unsafe_size,&__t1493t__buf__unsafe_offset,&__t1493t__buf__unsafe_align,&__t1493t__pos);
  buf__buf__unsafe_ptr=__t1493t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1493t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1493t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1493t__buf__unsafe_align;
  buf__pos=__t1493t__pos;
  __t1494t=0;
  __t_errcode=mutget__t587t(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__t1494t,&__t1495t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1496t=0;
  __t_errcode=copy__t750t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1497t,&__t1498t__unsafe_ptr,&__t1498t__dat__pos,&__t1498t__dat__length,&__t1498t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t750t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1499t,&__t1500t__unsafe_ptr,&__t1500t__dat__pos,&__t1500t__dat__length,&__t1500t__dat__first);
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
  __t_errcode=get__t594t(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__t1502t,&__t1503t__);
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
  
  __t_failure:exists__t439t(buf__buf__unsafe_ptr,&__t1492t____t514t__);
  if(__t1492t____t514t__){
  free__t505t(&buf__buf__unsafe_ptr);
  }
  exists__t439t(dat__unsafe_ptr,&__t1485t____t514t__);
  if(__t1485t____t514t__){
  free__t505t(&dat__unsafe_ptr);
  }
  __t_return:
  *__t1610t=buf__buf__unsafe_ptr;
  *__t1611t=buf__buf__unsafe_size;
  *__t1612t=buf__buf__unsafe_offset;
  *__t1613t=buf__buf__unsafe_align;
  *__t1614t=buf__pos;
  *__t1615t=dat__unsafe_ptr;
  *__t1616t=dat__unsafe_size;
  *__t1617t=dat__unsafe_offset;
  *__t1618t=dat__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1514t() {
  char* __t1515t__buf__buf__unsafe_ptr=0;
  uint64_t __t1515t__buf__buf__unsafe_size=0;
  uint16_t __t1515t__buf__buf__unsafe_offset=0;
  uint16_t __t1515t__buf__buf__unsafe_align=0;
  uint64_t __t1515t__buf__pos=0;
  char* __t1515t__dat__unsafe_ptr=0;
  uint64_t __t1515t__dat__unsafe_size=0;
  uint16_t __t1515t__dat__unsafe_offset=0;
  uint16_t __t1515t__dat__unsafe_align=0;
  char __t1516t____t1485t____t514t__=0;
  char __t1516t____t1492t____t514t__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __t1517t=0;
  char* __t1518t__=0;
  uint64_t __t1519t__pos=0;
  uint64_t __t1519t__length=0;
  char __t1519t__first=0;
  char* __t1520t__unsafe_ptr=0;
  uint64_t __t1520t__dat__pos=0;
  uint64_t __t1520t__dat__length=0;
  char __t1520t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test__t1479t(&__t1515t__buf__buf__unsafe_ptr,&__t1515t__buf__buf__unsafe_size,&__t1515t__buf__buf__unsafe_offset,&__t1515t__buf__buf__unsafe_align,&__t1515t__buf__pos,&__t1515t__dat__unsafe_ptr,&__t1515t__dat__unsafe_size,&__t1515t__dat__unsafe_offset,&__t1515t__dat__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__buf__buf__unsafe_ptr=__t1515t__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__t1515t__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__t1515t__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__t1515t__buf__buf__unsafe_align;
  t__buf__pos=__t1515t__buf__pos;
  t__dat__unsafe_ptr=__t1515t__dat__unsafe_ptr;
  t__dat__unsafe_size=__t1515t__dat__unsafe_size;
  t__dat__unsafe_offset=__t1515t__dat__unsafe_offset;
  t__dat__unsafe_align=__t1515t__dat__unsafe_align;
  __t1517t=0;
  __t_errcode=get__t594t(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__t1517t,&__t1518t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1518t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1519t__pos,__t1518t__,8);
  memcpy(&__t1519t__length,__t1518t__+8,8);
  memcpy(&__t1519t__first,__t1518t__+16,1);
  __t_errcode=str__t633t(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__t1519t__pos,__t1519t__length,__t1519t__first,&__t1520t__unsafe_ptr,&__t1520t__dat__pos,&__t1520t__dat__length,&__t1520t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t783t(__t1520t__unsafe_ptr,__t1520t__dat__pos,__t1520t__dat__length,__t1520t__dat__first);
  
  __t_failure:exists__t439t(__t1515t__buf__buf__unsafe_ptr,&__t1516t____t1492t____t514t__);
  if(__t1516t____t1492t____t514t__){
  free__t505t(&__t1515t__buf__buf__unsafe_ptr);
  }
  exists__t439t(__t1515t__dat__unsafe_ptr,&__t1516t____t1485t____t514t__);
  if(__t1516t____t1485t____t514t__){
  free__t505t(&__t1515t__dat__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1514t();return 0;}