#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1483t="-------------------";
const char* const __t1488t="surnname  ";
const char* const __t1510t="it's a me";
const char* const __t1512t="mario";
const char* const __t377t="\n";
const char* const __t1485t="name      ";
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

static inline __attribute__((always_inline)) void Person____t_buffer____buffer__t1493t(char** __t1536t, uint64_t* __t1537t, uint16_t* __t1538t, uint16_t* __t1539t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__t1536t=unsafe_ptr;
  *__t1537t=unsafe_size;
  *__t1538t=unsafe_offset;
  *__t1539t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t1540t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1540t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t1541t) {
  char* allocated=*__t1541t;
  if(allocated){
  free(allocated);
  }
  *__t1541t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1542t) {
  int value=0;
  *__t1542t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1543t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1543t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1544t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1544t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1545t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1545t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1546t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1546t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1547t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1547t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1548t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1548t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1549t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1549t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t1550t) {
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
  *__t1550t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t1551t, uint64_t* __t1552t, uint16_t* __t1553t, uint16_t* __t1554t, uint64_t size, char** __t1555t, uint64_t* __t1556t, uint16_t* __t1557t, uint16_t* __t1558t) {
  char* buffer__unsafe_ptr=*__t1551t;
  uint64_t buffer__unsafe_size=*__t1552t;
  uint16_t buffer__unsafe_offset=*__t1553t;
  uint16_t buffer__unsafe_align=*__t1554t;
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
  *__t1551t=buffer__unsafe_ptr;
  *__t1552t=buffer__unsafe_size;
  *__t1553t=buffer__unsafe_offset;
  *__t1554t=buffer__unsafe_align;
  *__t1555t=buffer__unsafe_ptr;
  *__t1556t=buffer__unsafe_size;
  *__t1557t=buffer__unsafe_offset;
  *__t1558t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1499t(char** __t1559t, uint64_t* __t1560t, uint16_t* __t1561t, uint16_t* __t1562t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1559t=unsafe_ptr;
  *__t1560t=unsafe_size;
  *__t1561t=unsafe_offset;
  *__t1562t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t486t(uint64_t x, uint64_t* __t1563t) {
  uint64_t __t487t=0;
  uint64_t __t488t__=0;
  __t487t=1024;
  mul__t198t(x,__t487t,&__t488t__);
  goto __t_return;
  __t_return:
  *__t1563t=__t488t__;
}

static inline __attribute__((always_inline)) void bufpos__t632t(char** __t1564t, uint64_t* __t1565t, uint16_t* __t1566t, uint16_t* __t1567t, char** __t1568t, uint64_t* __t1569t, uint16_t* __t1570t, uint16_t* __t1571t, uint64_t* __t1572t) {
  char* buf__unsafe_ptr=*__t1564t;
  uint64_t buf__unsafe_size=*__t1565t;
  uint16_t buf__unsafe_offset=*__t1566t;
  uint16_t buf__unsafe_align=*__t1567t;
  uint64_t __t633t=0;
  uint64_t __t634t=0;
  uint64_t pos=0;
  __t633t=0;
  __t634t=__t633t;
  pos=__t634t;
  goto __t_return;
  __t_return:
  *__t1564t=buf__unsafe_ptr;
  *__t1565t=buf__unsafe_size;
  *__t1566t=buf__unsafe_offset;
  *__t1567t=buf__unsafe_align;
  *__t1568t=buf__unsafe_ptr;
  *__t1569t=buf__unsafe_size;
  *__t1570t=buf__unsafe_offset;
  *__t1571t=buf__unsafe_align;
  *__t1572t=pos;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1573t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1573t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1574t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1574t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1575t) {
  *__t1575t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1576t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1576t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1577t, uint64_t* __t1578t, uint16_t* __t1579t, uint16_t* __t1580t, uint64_t i, char** __t1581t) {
  char* buffer__unsafe_ptr=*__t1577t;
  uint64_t buffer__unsafe_size=*__t1578t;
  uint16_t buffer__unsafe_offset=*__t1579t;
  uint16_t buffer__unsafe_align=*__t1580t;
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
  *__t1577t=buffer__unsafe_ptr;
  *__t1578t=buffer__unsafe_size;
  *__t1579t=buffer__unsafe_offset;
  *__t1580t=buffer__unsafe_align;
  *__t1581t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t1582t, uint64_t* __t1583t, uint16_t* __t1584t, uint16_t* __t1585t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1582t=unsafe_ptr;
  *__t1583t=unsafe_size;
  *__t1584t=unsafe_offset;
  *__t1585t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1586t) {
  *__t1586t=to;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1587t) {
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
  *__t1587t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t641t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1588t, uint64_t* __t1589t, uint64_t* __t1590t, char* __t1591t) {
  goto __t_return;
  __t_return:
  *__t1588t=unsafe_ptr;
  *__t1589t=dat__pos;
  *__t1590t=dat__length;
  *__t1591t=dat__first;
}

static inline __attribute__((always_inline)) int str__t645t(char* CHARS__unsafe_ptr, uint64_t CHARS__unsafe_size, uint16_t CHARS__unsafe_offset, uint16_t CHARS__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1592t, uint64_t* __t1593t, uint64_t* __t1594t, char* __t1595t) {
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
  *__t1592t=__t652t__unsafe_ptr;
  *__t1593t=__t652t__dat__pos;
  *__t1594t=__t652t__dat__length;
  *__t1595t=__t652t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t677t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1596t, uint64_t* __t1597t, uint64_t* __t1598t, char* __t1599t) {
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
  *__t1596t=__t682t__unsafe_ptr;
  *__t1597t=__t682t__dat__pos;
  *__t1598t=__t682t__dat__length;
  *__t1599t=__t682t__dat__first;
  
  return __t_errcode;
}

int str__t683t(const char* c, char** __t1600t, uint64_t* __t1601t, uint64_t* __t1602t, char* __t1603t) {
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
  *__t1600t=__t690t__unsafe_ptr;
  *__t1601t=__t690t__dat__pos;
  *__t1602t=__t690t__dat__length;
  *__t1603t=__t690t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t691t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1604t) {
  goto __t_return;
  __t_return:
  *__t1604t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1605t) {
  goto __t_return;
  __t_return:
  *__t1605t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t1606t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1606t=z;
}

int copy__t758t(char** __t1607t, uint64_t* __t1608t, uint16_t* __t1609t, uint16_t* __t1610t, uint64_t* __t1611t, const char* _other, char** __t1612t, uint64_t* __t1613t, uint64_t* __t1614t, char* __t1615t) {
  char* CHARS__buf__unsafe_ptr=*__t1607t;
  uint64_t CHARS__buf__unsafe_size=*__t1608t;
  uint16_t CHARS__buf__unsafe_offset=*__t1609t;
  uint16_t CHARS__buf__unsafe_align=*__t1610t;
  uint64_t CHARS__pos=*__t1611t;
  char* __t759t__unsafe_ptr=0;
  uint64_t __t759t__dat__pos=0;
  uint64_t __t759t__dat__length=0;
  char __t759t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t760t__=0;
  uint64_t __t761t__=0;
  uint64_t next_pos=0;
  uint64_t __t762t__=0;
  char __t763t__=0;
  uint64_t __t764t=0;
  uint64_t __t765t__=0;
  uint64_t prev_pos=0;
  char* __t766t__unsafe_ptr=0;
  uint64_t __t766t__dat__pos=0;
  uint64_t __t766t__dat__length=0;
  char __t766t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t683t(_other,&__t759t__unsafe_ptr,&__t759t__dat__pos,&__t759t__dat__length,&__t759t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t759t__unsafe_ptr;
  other__dat__pos=__t759t__dat__pos;
  other__dat__length=__t759t__dat__length;
  other__dat__first=__t759t__dat__first;
  len__t691t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t760t__);
  add__t174t(CHARS__pos,__t760t__,&__t761t__);
  next_pos=__t761t__;
  len__t604t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t762t__);
  gt__t275t(next_pos,__t762t__,&__t763t__);
  if(__t763t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t764t=0;
  add__t174t(CHARS__pos,__t764t,&__t765t__);
  prev_pos=__t765t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t645t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t766t__unsafe_ptr,&__t766t__dat__pos,&__t766t__dat__length,&__t766t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1607t=CHARS__buf__unsafe_ptr;
  *__t1608t=CHARS__buf__unsafe_size;
  *__t1609t=CHARS__buf__unsafe_offset;
  *__t1610t=CHARS__buf__unsafe_align;
  *__t1611t=CHARS__pos;
  *__t1612t=__t766t__unsafe_ptr;
  *__t1613t=__t766t__dat__pos;
  *__t1614t=__t766t__dat__length;
  *__t1615t=__t766t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Person__t1480t(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __t1616t, uint64_t* __t1617t, uint64_t* __t1618t, char* __t1619t, char** __t1620t, uint64_t* __t1621t, uint64_t* __t1622t, char* __t1623t) {
  goto __t_return;
  __t_return:
  *__t1616t=name__unsafe_ptr;
  *__t1617t=name__dat__pos;
  *__t1618t=name__dat__length;
  *__t1619t=name__dat__first;
  *__t1620t=surname__unsafe_ptr;
  *__t1621t=surname__dat__pos;
  *__t1622t=surname__dat__length;
  *__t1623t=surname__dat__first;
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

static inline __attribute__((always_inline)) void print__t791t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t792t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t1482t(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__t375t(__t1483t);
  print__t373t(__t1485t,__t369t);
  print__t791t(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__t373t(__t1488t,__t369t);
  print__t791t(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__t375t(__t1483t);
}

static inline __attribute__((always_inline)) int test__t1492t(char** __t1624t, uint64_t* __t1625t, uint16_t* __t1626t, uint16_t* __t1627t, uint64_t* __t1628t, char** __t1629t, uint64_t* __t1630t, uint16_t* __t1631t, uint16_t* __t1632t) {
  char* __t1495t__unsafe_ptr=0;
  uint64_t __t1495t__unsafe_size=0;
  uint16_t __t1495t__unsafe_offset=0;
  uint16_t __t1495t__unsafe_align=0;
  uint64_t __t1496t=0;
  char* __t1497t__unsafe_ptr=0;
  uint64_t __t1497t__unsafe_size=0;
  uint16_t __t1497t__unsafe_offset=0;
  uint16_t __t1497t__unsafe_align=0;
  char __t1498t____t517t__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __t1501t__unsafe_ptr=0;
  uint64_t __t1501t__unsafe_size=0;
  uint16_t __t1501t__unsafe_offset=0;
  uint16_t __t1501t__unsafe_align=0;
  uint64_t __t1502t=0;
  uint64_t __t1503t__=0;
  char* __t1504t__unsafe_ptr=0;
  uint64_t __t1504t__unsafe_size=0;
  uint16_t __t1504t__unsafe_offset=0;
  uint16_t __t1504t__unsafe_align=0;
  char __t1505t____t517t__=0;
  char* __t1506t__buf__unsafe_ptr=0;
  uint64_t __t1506t__buf__unsafe_size=0;
  uint16_t __t1506t__buf__unsafe_offset=0;
  uint16_t __t1506t__buf__unsafe_align=0;
  uint64_t __t1506t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __t1507t=0;
  char* __t1508t__=0;
  uint64_t __t1509t=0;
  char* __t1511t__unsafe_ptr=0;
  uint64_t __t1511t__dat__pos=0;
  uint64_t __t1511t__dat__length=0;
  char __t1511t__dat__first=0;
  char* __t1513t__unsafe_ptr=0;
  uint64_t __t1513t__dat__pos=0;
  uint64_t __t1513t__dat__length=0;
  char __t1513t__dat__first=0;
  char* __t1514t__name__unsafe_ptr=0;
  uint64_t __t1514t__name__dat__pos=0;
  uint64_t __t1514t__name__dat__length=0;
  char __t1514t__name__dat__first=0;
  char* __t1514t__surname__unsafe_ptr=0;
  uint64_t __t1514t__surname__dat__pos=0;
  uint64_t __t1514t__surname__dat__length=0;
  char __t1514t__surname__dat__first=0;
  uint64_t __t1515t=0;
  char* __t1516t__=0;
  char* __t1517t__name__unsafe_ptr=0;
  uint64_t __t1517t__name__dat__pos=0;
  uint64_t __t1517t__name__dat__length=0;
  char __t1517t__name__dat__first=0;
  char* __t1517t__surname__unsafe_ptr=0;
  uint64_t __t1517t__surname__dat__pos=0;
  uint64_t __t1517t__surname__dat__length=0;
  char __t1517t__surname__dat__first=0;
  char* __t1519t__unsafe_ptr=0;
  uint64_t __t1519t__unsafe_size=0;
  uint16_t __t1519t__unsafe_offset=0;
  uint16_t __t1519t__unsafe_align=0;
  char* __t1523t__unsafe_ptr=0;
  uint64_t __t1523t__unsafe_size=0;
  uint16_t __t1523t__unsafe_offset=0;
  uint16_t __t1523t__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  Person____t_buffer____buffer__t1493t(&__t1495t__unsafe_ptr,&__t1495t__unsafe_size,&__t1495t__unsafe_offset,&__t1495t__unsafe_align);
  __t1496t=4;
  __t_errcode=alloc__t515t(&__t1495t__unsafe_ptr,&__t1495t__unsafe_size,&__t1495t__unsafe_offset,&__t1495t__unsafe_align,__t1496t,&__t1497t__unsafe_ptr,&__t1497t__unsafe_size,&__t1497t__unsafe_offset,&__t1497t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  people__unsafe_ptr=__t1497t__unsafe_ptr;
  people__unsafe_size=__t1497t__unsafe_size;
  people__unsafe_offset=__t1497t__unsafe_offset;
  people__unsafe_align=__t1497t__unsafe_align;
  char____t_buffer____buffer__t1499t(&__t1501t__unsafe_ptr,&__t1501t__unsafe_size,&__t1501t__unsafe_offset,&__t1501t__unsafe_align);
  __t1502t=4;
  KB__t486t(__t1502t,&__t1503t__);
  __t_errcode=alloc__t515t(&__t1501t__unsafe_ptr,&__t1501t__unsafe_size,&__t1501t__unsafe_offset,&__t1501t__unsafe_align,__t1503t__,&__t1504t__unsafe_ptr,&__t1504t__unsafe_size,&__t1504t__unsafe_offset,&__t1504t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t632t(&__t1504t__unsafe_ptr,&__t1504t__unsafe_size,&__t1504t__unsafe_offset,&__t1504t__unsafe_align,&__t1506t__buf__unsafe_ptr,&__t1506t__buf__unsafe_size,&__t1506t__buf__unsafe_offset,&__t1506t__buf__unsafe_align,&__t1506t__pos);
  buf__buf__unsafe_ptr=__t1506t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1506t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1506t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1506t__buf__unsafe_align;
  buf__pos=__t1506t__pos;
  __t1507t=0;
  __t_errcode=mutget__t590t(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__t1507t,&__t1508t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1509t=0;
  __t_errcode=copy__t758t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1510t,&__t1511t__unsafe_ptr,&__t1511t__dat__pos,&__t1511t__dat__length,&__t1511t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t758t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1512t,&__t1513t__unsafe_ptr,&__t1513t__dat__pos,&__t1513t__dat__length,&__t1513t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  Person__t1480t(__t1509t,__t1511t__unsafe_ptr,__t1511t__dat__pos,__t1511t__dat__length,__t1511t__dat__first,__t1513t__unsafe_ptr,__t1513t__dat__pos,__t1513t__dat__length,__t1513t__dat__first,&__t1514t__name__unsafe_ptr,&__t1514t__name__dat__pos,&__t1514t__name__dat__length,&__t1514t__name__dat__first,&__t1514t__surname__unsafe_ptr,&__t1514t__surname__dat__pos,&__t1514t__surname__dat__length,&__t1514t__surname__dat__first);
  if(!__t1508t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1508t__,&__t1514t__name__unsafe_ptr,8);
  memcpy(__t1508t__+8,&__t1514t__name__dat__pos,8);
  memcpy(__t1508t__+16,&__t1514t__name__dat__length,8);
  memcpy(__t1508t__+24,&__t1514t__name__dat__first,1);
  memcpy(__t1508t__+25,&__t1514t__surname__unsafe_ptr,8);
  memcpy(__t1508t__+33,&__t1514t__surname__dat__pos,8);
  memcpy(__t1508t__+41,&__t1514t__surname__dat__length,8);
  memcpy(__t1508t__+49,&__t1514t__surname__dat__first,1);
  __t1515t=0;
  __t_errcode=get__t597t(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__t1515t,&__t1516t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1516t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1517t__name__unsafe_ptr,__t1516t__,8);
  memcpy(&__t1517t__name__dat__pos,__t1516t__+8,8);
  memcpy(&__t1517t__name__dat__length,__t1516t__+16,8);
  memcpy(&__t1517t__name__dat__first,__t1516t__+24,1);
  memcpy(&__t1517t__surname__unsafe_ptr,__t1516t__+25,8);
  memcpy(&__t1517t__surname__dat__pos,__t1516t__+33,8);
  memcpy(&__t1517t__surname__dat__length,__t1516t__+41,8);
  memcpy(&__t1517t__surname__dat__first,__t1516t__+49,1);
  print__t1482t(__t1517t__name__unsafe_ptr,__t1517t__name__dat__pos,__t1517t__name__dat__length,__t1517t__name__dat__first,__t1517t__surname__unsafe_ptr,__t1517t__surname__dat__pos,__t1517t__surname__dat__length,__t1517t__surname__dat__first);
  __t1519t__unsafe_ptr=people__unsafe_ptr;
  __t1519t__unsafe_size=people__unsafe_size;
  __t1519t__unsafe_offset=people__unsafe_offset+0;
  __t1519t__unsafe_align=people__unsafe_align;
  __t1523t__unsafe_ptr=__t1519t__unsafe_ptr;
  __t1523t__unsafe_size=__t1519t__unsafe_size;
  __t1523t__unsafe_offset=__t1519t__unsafe_offset+8;
  __t1523t__unsafe_align=__t1519t__unsafe_align;
  dat__unsafe_ptr=__t1523t__unsafe_ptr;
  dat__unsafe_size=__t1523t__unsafe_size;
  dat__unsafe_offset=__t1523t__unsafe_offset;
  dat__unsafe_align=__t1523t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t442t(buf__buf__unsafe_ptr,&__t1505t____t517t__);
  if(__t1505t____t517t__){
  free__t508t(&buf__buf__unsafe_ptr);
  }
  exists__t442t(dat__unsafe_ptr,&__t1498t____t517t__);
  if(__t1498t____t517t__){
  free__t508t(&dat__unsafe_ptr);
  }
  __t_return:
  *__t1624t=buf__buf__unsafe_ptr;
  *__t1625t=buf__buf__unsafe_size;
  *__t1626t=buf__buf__unsafe_offset;
  *__t1627t=buf__buf__unsafe_align;
  *__t1628t=buf__pos;
  *__t1629t=dat__unsafe_ptr;
  *__t1630t=dat__unsafe_size;
  *__t1631t=dat__unsafe_offset;
  *__t1632t=dat__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1527t() {
  char* __t1529t__buf__buf__unsafe_ptr=0;
  uint64_t __t1529t__buf__buf__unsafe_size=0;
  uint16_t __t1529t__buf__buf__unsafe_offset=0;
  uint16_t __t1529t__buf__buf__unsafe_align=0;
  uint64_t __t1529t__buf__pos=0;
  char* __t1529t__dat__unsafe_ptr=0;
  uint64_t __t1529t__dat__unsafe_size=0;
  uint16_t __t1529t__dat__unsafe_offset=0;
  uint16_t __t1529t__dat__unsafe_align=0;
  char __t1530t____t1498t____t517t__=0;
  char __t1530t____t1505t____t517t__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __t1531t=0;
  char* __t1532t__=0;
  uint64_t __t1533t__pos=0;
  uint64_t __t1533t__length=0;
  char __t1533t__first=0;
  char* __t1534t__unsafe_ptr=0;
  uint64_t __t1534t__dat__pos=0;
  uint64_t __t1534t__dat__length=0;
  char __t1534t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t_errcode=test__t1492t(&__t1529t__buf__buf__unsafe_ptr,&__t1529t__buf__buf__unsafe_size,&__t1529t__buf__buf__unsafe_offset,&__t1529t__buf__buf__unsafe_align,&__t1529t__buf__pos,&__t1529t__dat__unsafe_ptr,&__t1529t__dat__unsafe_size,&__t1529t__dat__unsafe_offset,&__t1529t__dat__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__buf__buf__unsafe_ptr=__t1529t__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__t1529t__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__t1529t__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__t1529t__buf__buf__unsafe_align;
  t__buf__pos=__t1529t__buf__pos;
  t__dat__unsafe_ptr=__t1529t__dat__unsafe_ptr;
  t__dat__unsafe_size=__t1529t__dat__unsafe_size;
  t__dat__unsafe_offset=__t1529t__dat__unsafe_offset;
  t__dat__unsafe_align=__t1529t__dat__unsafe_align;
  __t1531t=0;
  __t_errcode=get__t597t(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__t1531t,&__t1532t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1532t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1533t__pos,__t1532t__,8);
  memcpy(&__t1533t__length,__t1532t__+8,8);
  memcpy(&__t1533t__first,__t1532t__+16,1);
  __t_errcode=str__t645t(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__t1533t__pos,__t1533t__length,__t1533t__first,&__t1534t__unsafe_ptr,&__t1534t__dat__pos,&__t1534t__dat__length,&__t1534t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t791t(__t1534t__unsafe_ptr,__t1534t__dat__pos,__t1534t__dat__length,__t1534t__dat__first);
  
  __t_failure:exists__t442t(__t1529t__buf__buf__unsafe_ptr,&__t1530t____t1505t____t517t__);
  if(__t1530t____t1505t____t517t__){
  free__t508t(&__t1529t__buf__buf__unsafe_ptr);
  }
  exists__t442t(__t1529t__dat__unsafe_ptr,&__t1530t____t1498t____t517t__);
  if(__t1530t____t1498t____t517t__){
  free__t508t(&__t1529t__dat__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1527t();return 0;}