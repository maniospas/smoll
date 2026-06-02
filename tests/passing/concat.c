#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1531t=" ";
const char* const __t1543t="hi";
const char* const __t1559t="manios";
const char* const __t1551t="name";
const char* const __t377t="\n";
const char* const __t1547t="my";
const char* const __t1555t="is";
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

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1512t(char** __t1575t, uint64_t* __t1576t, uint16_t* __t1577t, uint16_t* __t1578t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__t1575t=unsafe_ptr;
  *__t1576t=unsafe_size;
  *__t1577t=unsafe_offset;
  *__t1578t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t1579t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1579t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t1580t) {
  char* allocated=*__t1580t;
  if(allocated){
  free(allocated);
  }
  *__t1580t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1581t) {
  int value=0;
  *__t1581t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1582t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1582t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1583t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1583t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1584t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1584t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1585t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1585t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1586t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1586t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1587t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1587t=z;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1588t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1588t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t1589t) {
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
  *__t1589t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t1590t, uint64_t* __t1591t, uint16_t* __t1592t, uint16_t* __t1593t, uint64_t size, char** __t1594t, uint64_t* __t1595t, uint16_t* __t1596t, uint16_t* __t1597t) {
  char* buffer__unsafe_ptr=*__t1590t;
  uint64_t buffer__unsafe_size=*__t1591t;
  uint16_t buffer__unsafe_offset=*__t1592t;
  uint16_t buffer__unsafe_align=*__t1593t;
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
  *__t1590t=buffer__unsafe_ptr;
  *__t1591t=buffer__unsafe_size;
  *__t1592t=buffer__unsafe_offset;
  *__t1593t=buffer__unsafe_align;
  *__t1594t=buffer__unsafe_ptr;
  *__t1595t=buffer__unsafe_size;
  *__t1596t=buffer__unsafe_offset;
  *__t1597t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1598t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1598t=z;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1599t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1599t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1600t) {
  *__t1600t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1601t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1601t=__t511t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1602t, uint64_t* __t1603t, uint16_t* __t1604t, uint16_t* __t1605t, uint64_t i, char** __t1606t) {
  char* buffer__unsafe_ptr=*__t1602t;
  uint64_t buffer__unsafe_size=*__t1603t;
  uint16_t buffer__unsafe_offset=*__t1604t;
  uint16_t buffer__unsafe_align=*__t1605t;
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
  *__t1602t=buffer__unsafe_ptr;
  *__t1603t=buffer__unsafe_size;
  *__t1604t=buffer__unsafe_offset;
  *__t1605t=buffer__unsafe_align;
  *__t1606t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t1607t, uint64_t* __t1608t, uint16_t* __t1609t, uint16_t* __t1610t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1607t=unsafe_ptr;
  *__t1608t=unsafe_size;
  *__t1609t=unsafe_offset;
  *__t1610t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1611t) {
  *__t1611t=to;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1612t) {
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
  *__t1612t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t641t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1613t, uint64_t* __t1614t, uint64_t* __t1615t, char* __t1616t) {
  goto __t_return;
  __t_return:
  *__t1613t=unsafe_ptr;
  *__t1614t=dat__pos;
  *__t1615t=dat__length;
  *__t1616t=dat__first;
}

static inline __attribute__((always_inline)) int str__t645t(char* CHARS__unsafe_ptr, uint64_t CHARS__unsafe_size, uint16_t CHARS__unsafe_offset, uint16_t CHARS__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1617t, uint64_t* __t1618t, uint64_t* __t1619t, char* __t1620t) {
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
  *__t1617t=__t652t__unsafe_ptr;
  *__t1618t=__t652t__dat__pos;
  *__t1619t=__t652t__dat__length;
  *__t1620t=__t652t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t677t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1621t, uint64_t* __t1622t, uint64_t* __t1623t, char* __t1624t) {
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
  *__t1621t=__t682t__unsafe_ptr;
  *__t1622t=__t682t__dat__pos;
  *__t1623t=__t682t__dat__length;
  *__t1624t=__t682t__dat__first;
  
  return __t_errcode;
}

int str__t683t(const char* c, char** __t1625t, uint64_t* __t1626t, uint64_t* __t1627t, char* __t1628t) {
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
  *__t1625t=__t690t__unsafe_ptr;
  *__t1626t=__t690t__dat__pos;
  *__t1627t=__t690t__dat__length;
  *__t1628t=__t690t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t1629t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1629t=z;
}

static inline __attribute__((always_inline)) int nat16__t1483t(uint64_t x, uint16_t* __t1630t) {
  uint64_t __t1484t=0;
  char __t1485t__=0;
  uint16_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1484t=65535;
  gt__t275t(x,__t1484t,&__t1485t__);
  if(__t1485t__){
  __t_errcode=36;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1630t=value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int strdat__t1490t(uint64_t _pos, uint64_t _length, uint16_t* __t1631t, uint16_t* __t1632t) {
  uint16_t __t1491t__=0;
  uint16_t pos=0;
  uint16_t __t1492t__=0;
  uint16_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat16__t1483t(_pos,&__t1491t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1491t__;
  __t_errcode=nat16__t1483t(_length,&__t1492t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1492t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1631t=pos;
  *__t1632t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1493t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __t1633t, uint16_t* __t1634t, uint16_t* __t1635t) {
  char* unsafe_ptr=0;
  uint16_t __t1494t__pos=0;
  uint16_t __t1494t__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __t_errcode=strdat__t1490t(s__dat__pos,s__dat__length,&__t1494t__pos,&__t1494t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  dat__pos=__t1494t__pos;
  dat__length=__t1494t__length;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1633t=unsafe_ptr;
  *__t1634t=dat__pos;
  *__t1635t=dat__length;
  
  return __t_errcode;
}

int str__t1496t(const char* s, char** __t1636t, uint16_t* __t1637t, uint16_t* __t1638t) {
  char* __t1497t__unsafe_ptr=0;
  uint64_t __t1497t__dat__pos=0;
  uint64_t __t1497t__dat__length=0;
  char __t1497t__dat__first=0;
  char* __t1498t__unsafe_ptr=0;
  uint16_t __t1498t__dat__pos=0;
  uint16_t __t1498t__dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t683t(s,&__t1497t__unsafe_ptr,&__t1497t__dat__pos,&__t1497t__dat__length,&__t1497t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1493t(__t1497t__unsafe_ptr,__t1497t__dat__pos,__t1497t__dat__length,__t1497t__dat__first,&__t1498t__unsafe_ptr,&__t1498t__dat__pos,&__t1498t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1636t=__t1498t__unsafe_ptr;
  *__t1637t=__t1498t__dat__pos;
  *__t1638t=__t1498t__dat__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1515t(char** __t1639t, uint64_t* __t1640t, uint16_t* __t1641t, uint16_t* __t1642t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1639t=unsafe_ptr;
  *__t1640t=unsafe_size;
  *__t1641t=unsafe_offset;
  *__t1642t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t486t(uint64_t x, uint64_t* __t1643t) {
  uint64_t __t487t=0;
  uint64_t __t488t__=0;
  __t487t=1024;
  mul__t198t(x,__t487t,&__t488t__);
  goto __t_return;
  __t_return:
  *__t1643t=__t488t__;
}

static inline __attribute__((always_inline)) void bufpos__t632t(char** __t1644t, uint64_t* __t1645t, uint16_t* __t1646t, uint16_t* __t1647t, char** __t1648t, uint64_t* __t1649t, uint16_t* __t1650t, uint16_t* __t1651t, uint64_t* __t1652t) {
  char* buf__unsafe_ptr=*__t1644t;
  uint64_t buf__unsafe_size=*__t1645t;
  uint16_t buf__unsafe_offset=*__t1646t;
  uint16_t buf__unsafe_align=*__t1647t;
  uint64_t __t633t=0;
  uint64_t __t634t=0;
  uint64_t pos=0;
  __t633t=0;
  __t634t=__t633t;
  pos=__t634t;
  goto __t_return;
  __t_return:
  *__t1644t=buf__unsafe_ptr;
  *__t1645t=buf__unsafe_size;
  *__t1646t=buf__unsafe_offset;
  *__t1647t=buf__unsafe_align;
  *__t1648t=buf__unsafe_ptr;
  *__t1649t=buf__unsafe_size;
  *__t1650t=buf__unsafe_offset;
  *__t1651t=buf__unsafe_align;
  *__t1652t=pos;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1653t) {
  goto __t_return;
  __t_return:
  *__t1653t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t467t(uint64_t to, uint64_t* __t1654t, uint64_t* __t1655t) {
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
  *__t1654t=from;
  *__t1655t=to;
}

static inline __attribute__((always_inline)) int next__t476t(uint64_t* __t1656t, uint64_t r__to, uint64_t* __t1657t) {
  uint64_t r__from=*__t1656t;
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
  *__t1656t=r__from;
  *__t1657t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t643t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t1658t, uint64_t* __t1659t, uint64_t* __t1660t, char* __t1661t) {
  char* first_pos=0;
  char first=0;
  char* __t644t__unsafe_ptr=0;
  uint64_t __t644t__dat__pos=0;
  uint64_t __t644t__dat__length=0;
  char __t644t__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__t641t(unsafe_ptr,pos,length,first,&__t644t__unsafe_ptr,&__t644t__dat__pos,&__t644t__dat__length,&__t644t__dat__first);
  goto __t_return;
  __t_return:
  *__t1658t=__t644t__unsafe_ptr;
  *__t1659t=__t644t__dat__pos;
  *__t1660t=__t644t__dat__length;
  *__t1661t=__t644t__dat__first;
}

static inline __attribute__((always_inline)) void unpack__t1499t(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __t1662t, uint64_t* __t1663t, uint64_t* __t1664t, char* __t1665t) {
  uint64_t __t1500t__=0;
  uint64_t __t1501t__=0;
  char* __t1502t__unsafe_ptr=0;
  uint64_t __t1502t__dat__pos=0;
  uint64_t __t1502t__dat__length=0;
  char __t1502t__dat__first=0;
  nat__t512t(m__dat__pos,&__t1500t__);
  nat__t512t(m__dat__length,&__t1501t__);
  str__t643t(m__unsafe_ptr,__t1500t__,__t1501t__,&__t1502t__unsafe_ptr,&__t1502t__dat__pos,&__t1502t__dat__length,&__t1502t__dat__first);
  goto __t_return;
  __t_return:
  *__t1662t=__t1502t__unsafe_ptr;
  *__t1663t=__t1502t__dat__pos;
  *__t1664t=__t1502t__dat__length;
  *__t1665t=__t1502t__dat__first;
}

static inline __attribute__((always_inline)) void str__t676t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1666t, uint64_t* __t1667t, uint64_t* __t1668t, char* __t1669t) {
  goto __t_return;
  __t_return:
  *__t1666t=other__unsafe_ptr;
  *__t1667t=other__dat__pos;
  *__t1668t=other__dat__length;
  *__t1669t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t691t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1670t) {
  goto __t_return;
  __t_return:
  *__t1670t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__t749t(char** __t1671t, uint64_t* __t1672t, uint16_t* __t1673t, uint16_t* __t1674t, uint64_t* __t1675t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1676t, uint64_t* __t1677t, uint64_t* __t1678t, char* __t1679t) {
  char* CHARS__buf__unsafe_ptr=*__t1671t;
  uint64_t CHARS__buf__unsafe_size=*__t1672t;
  uint16_t CHARS__buf__unsafe_offset=*__t1673t;
  uint16_t CHARS__buf__unsafe_align=*__t1674t;
  uint64_t CHARS__pos=*__t1675t;
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
  *__t1671t=CHARS__buf__unsafe_ptr;
  *__t1672t=CHARS__buf__unsafe_size;
  *__t1673t=CHARS__buf__unsafe_offset;
  *__t1674t=CHARS__buf__unsafe_align;
  *__t1675t=CHARS__pos;
  *__t1676t=__t757t__unsafe_ptr;
  *__t1677t=__t757t__dat__pos;
  *__t1678t=__t757t__dat__length;
  *__t1679t=__t757t__dat__first;
  
  return __t_errcode;
}

int copy__t758t(char** __t1680t, uint64_t* __t1681t, uint16_t* __t1682t, uint16_t* __t1683t, uint64_t* __t1684t, const char* _other, char** __t1685t, uint64_t* __t1686t, uint64_t* __t1687t, char* __t1688t) {
  char* CHARS__buf__unsafe_ptr=*__t1680t;
  uint64_t CHARS__buf__unsafe_size=*__t1681t;
  uint16_t CHARS__buf__unsafe_offset=*__t1682t;
  uint16_t CHARS__buf__unsafe_align=*__t1683t;
  uint64_t CHARS__pos=*__t1684t;
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
  *__t1680t=CHARS__buf__unsafe_ptr;
  *__t1681t=CHARS__buf__unsafe_size;
  *__t1682t=CHARS__buf__unsafe_offset;
  *__t1683t=CHARS__buf__unsafe_align;
  *__t1684t=CHARS__pos;
  *__t1685t=__t766t__unsafe_ptr;
  *__t1686t=__t766t__dat__pos;
  *__t1687t=__t766t__dat__length;
  *__t1688t=__t766t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1514t(char* buff__unsafe_ptr, uint64_t buff__unsafe_size, uint16_t buff__unsafe_offset, uint16_t buff__unsafe_align, char** __t1689t, uint64_t* __t1690t, uint64_t* __t1691t, char* __t1692t) {
  char* __t1517t__unsafe_ptr=0;
  uint64_t __t1517t__unsafe_size=0;
  uint16_t __t1517t__unsafe_offset=0;
  uint16_t __t1517t__unsafe_align=0;
  uint64_t __t1518t=0;
  uint64_t __t1519t__=0;
  char* __t1520t__unsafe_ptr=0;
  uint64_t __t1520t__unsafe_size=0;
  uint16_t __t1520t__unsafe_offset=0;
  uint16_t __t1520t__unsafe_align=0;
  char __t1521t____t517t__=0;
  char* __t1522t__buf__unsafe_ptr=0;
  uint64_t __t1522t__buf__unsafe_size=0;
  uint16_t __t1522t__buf__unsafe_offset=0;
  uint16_t __t1522t__buf__unsafe_align=0;
  uint64_t __t1522t__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __t1523t__=0;
  uint64_t __t1524t__from=0;
  uint64_t __t1524t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __t1525t=0;
  uint64_t __t1526t__=0;
  uint64_t i=0;
  char* __t1527t__=0;
  char* __t1528t__unsafe_ptr=0;
  uint16_t __t1528t__dat__pos=0;
  uint16_t __t1528t__dat__length=0;
  char* __t1529t__unsafe_ptr=0;
  uint64_t __t1529t__dat__pos=0;
  uint64_t __t1529t__dat__length=0;
  char __t1529t__dat__first=0;
  char* __t1530t__unsafe_ptr=0;
  uint64_t __t1530t__dat__pos=0;
  uint64_t __t1530t__dat__length=0;
  char __t1530t__dat__first=0;
  char* __t1532t__unsafe_ptr=0;
  uint64_t __t1532t__dat__pos=0;
  uint64_t __t1532t__dat__length=0;
  char __t1532t__dat__first=0;
  char* __t1533t__unsafe_ptr=0;
  uint64_t __t1533t__dat__pos=0;
  uint64_t __t1533t__dat__length=0;
  char __t1533t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1515t(&__t1517t__unsafe_ptr,&__t1517t__unsafe_size,&__t1517t__unsafe_offset,&__t1517t__unsafe_align);
  __t1518t=4;
  KB__t486t(__t1518t,&__t1519t__);
  __t_errcode=alloc__t515t(&__t1517t__unsafe_ptr,&__t1517t__unsafe_size,&__t1517t__unsafe_offset,&__t1517t__unsafe_align,__t1519t__,&__t1520t__unsafe_ptr,&__t1520t__unsafe_size,&__t1520t__unsafe_offset,&__t1520t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t632t(&__t1520t__unsafe_ptr,&__t1520t__unsafe_size,&__t1520t__unsafe_offset,&__t1520t__unsafe_align,&__t1522t__buf__unsafe_ptr,&__t1522t__buf__unsafe_size,&__t1522t__buf__unsafe_offset,&__t1522t__buf__unsafe_align,&__t1522t__pos);
  mem__pos=__t1522t__pos;
  len__t604t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1523t__);
  range__t467t(__t1523t__,&__t1524t__from,&__t1524t__to);
  iter__from=__t1524t__from;
  iter__to=__t1524t__to;
  start=mem__pos;
  while(1){
  __t_complain=next__t476t(&iter__from,iter__to,&__t1526t__);
  __t1525t=__t_complain;
  i=__t1526t__;
  __t1525t=__t1525t==0;
  if(!__t1525t){
  break;
  }
  __t_errcode=get__t597t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__t1527t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1527t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1528t__unsafe_ptr,__t1527t__,8);
  memcpy(&__t1528t__dat__pos,__t1527t__+8,2);
  memcpy(&__t1528t__dat__length,__t1527t__+10,2);
  unpack__t1499t(__t1528t__unsafe_ptr,__t1528t__dat__pos,__t1528t__dat__length,&__t1529t__unsafe_ptr,&__t1529t__dat__pos,&__t1529t__dat__length,&__t1529t__dat__first);
  __t_errcode=copy__t749t(&__t1520t__unsafe_ptr,&__t1520t__unsafe_size,&__t1520t__unsafe_offset,&__t1520t__unsafe_align,&mem__pos,__t1529t__unsafe_ptr,__t1529t__dat__pos,__t1529t__dat__length,__t1529t__dat__first,&__t1530t__unsafe_ptr,&__t1530t__dat__pos,&__t1530t__dat__length,&__t1530t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t758t(&__t1520t__unsafe_ptr,&__t1520t__unsafe_size,&__t1520t__unsafe_offset,&__t1520t__unsafe_align,&mem__pos,__t1531t,&__t1532t__unsafe_ptr,&__t1532t__dat__pos,&__t1532t__dat__length,&__t1532t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=str__t677t(__t1520t__unsafe_ptr,__t1520t__unsafe_size,__t1520t__unsafe_offset,__t1520t__unsafe_align,start,mem__pos,&__t1533t__unsafe_ptr,&__t1533t__dat__pos,&__t1533t__dat__length,&__t1533t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1533t__unsafe_ptr=__t1520t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t442t(__t1533t__unsafe_ptr,&__t1521t____t517t__);
  if(__t1521t____t517t__){
  free__t508t(&__t1533t__unsafe_ptr);
  }
  __t_return:
  *__t1689t=__t1533t__unsafe_ptr;
  *__t1690t=__t1533t__dat__pos;
  *__t1691t=__t1533t__dat__length;
  *__t1692t=__t1533t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t386t(uint64_t value, const char* endl) {
  int __t387t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t791t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t792t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1534t() {
  char* __t1536t__unsafe_ptr=0;
  uint64_t __t1536t__unsafe_size=0;
  uint16_t __t1536t__unsafe_offset=0;
  uint16_t __t1536t__unsafe_align=0;
  char* __t1537t__unsafe_ptr=0;
  uint64_t __t1537t__unsafe_size=0;
  uint16_t __t1537t__unsafe_offset=0;
  uint16_t __t1537t__unsafe_align=0;
  uint64_t __t1538t=0;
  char* __t1539t__unsafe_ptr=0;
  uint64_t __t1539t__unsafe_size=0;
  uint16_t __t1539t__unsafe_offset=0;
  uint16_t __t1539t__unsafe_align=0;
  char __t1540t____t517t__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __t1541t=0;
  char* __t1542t__=0;
  char* __t1544t__unsafe_ptr=0;
  uint16_t __t1544t__dat__pos=0;
  uint16_t __t1544t__dat__length=0;
  uint64_t __t1545t=0;
  char* __t1546t__=0;
  char* __t1548t__unsafe_ptr=0;
  uint16_t __t1548t__dat__pos=0;
  uint16_t __t1548t__dat__length=0;
  uint64_t __t1549t=0;
  char* __t1550t__=0;
  char* __t1552t__unsafe_ptr=0;
  uint16_t __t1552t__dat__pos=0;
  uint16_t __t1552t__dat__length=0;
  uint64_t __t1553t=0;
  char* __t1554t__=0;
  char* __t1556t__unsafe_ptr=0;
  uint16_t __t1556t__dat__pos=0;
  uint16_t __t1556t__dat__length=0;
  uint64_t __t1557t=0;
  char* __t1558t__=0;
  char* __t1560t__unsafe_ptr=0;
  uint16_t __t1560t__dat__pos=0;
  uint16_t __t1560t__dat__length=0;
  uint64_t __t1561t=0;
  char* __t1562t__=0;
  char* __t1563t__unsafe_ptr=0;
  uint64_t __t1563t__dat__pos=0;
  uint64_t __t1563t__dat__length=0;
  char __t1563t__dat__first=0;
  char __t1564t____t1521t____t517t__=0;
  char* __t1565t__unsafe_ptr=0;
  uint16_t __t1565t__dat__pos=0;
  uint16_t __t1565t__dat__length=0;
  uint64_t __t1566t__=0;
  uint64_t __t1567t__from=0;
  uint64_t __t1567t__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __t1568t=0;
  uint64_t __t1569t__=0;
  uint64_t j=0;
  char* __t1571t__=0;
  char* __t1572t__unsafe_ptr=0;
  uint16_t __t1572t__dat__pos=0;
  uint16_t __t1572t__dat__length=0;
  char* __t1573t__unsafe_ptr=0;
  uint64_t __t1573t__dat__pos=0;
  uint64_t __t1573t__dat__length=0;
  char __t1573t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  str____t_buffer____buffer__t1512t(&__t1536t__unsafe_ptr,&__t1536t__unsafe_size,&__t1536t__unsafe_offset,&__t1536t__unsafe_align);
  __t1537t__unsafe_ptr=__t1536t__unsafe_ptr;
  __t1537t__unsafe_size=__t1536t__unsafe_size;
  __t1537t__unsafe_offset=__t1536t__unsafe_offset;
  __t1537t__unsafe_align=__t1536t__unsafe_align;
  __t1538t=6;
  __t_errcode=alloc__t515t(&__t1537t__unsafe_ptr,&__t1537t__unsafe_size,&__t1537t__unsafe_offset,&__t1537t__unsafe_align,__t1538t,&__t1539t__unsafe_ptr,&__t1539t__unsafe_size,&__t1539t__unsafe_offset,&__t1539t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buff__unsafe_ptr=__t1539t__unsafe_ptr;
  buff__unsafe_size=__t1539t__unsafe_size;
  buff__unsafe_offset=__t1539t__unsafe_offset;
  buff__unsafe_align=__t1539t__unsafe_align;
  __t1541t=0;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1541t,&__t1542t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1496t(__t1543t,&__t1544t__unsafe_ptr,&__t1544t__dat__pos,&__t1544t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1542t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1542t__,&__t1544t__unsafe_ptr,8);
  memcpy(__t1542t__+8,&__t1544t__dat__pos,2);
  memcpy(__t1542t__+10,&__t1544t__dat__length,2);
  __t1545t=1;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1545t,&__t1546t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1496t(__t1547t,&__t1548t__unsafe_ptr,&__t1548t__dat__pos,&__t1548t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1546t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1546t__,&__t1548t__unsafe_ptr,8);
  memcpy(__t1546t__+8,&__t1548t__dat__pos,2);
  memcpy(__t1546t__+10,&__t1548t__dat__length,2);
  __t1549t=2;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1549t,&__t1550t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1496t(__t1551t,&__t1552t__unsafe_ptr,&__t1552t__dat__pos,&__t1552t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1550t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1550t__,&__t1552t__unsafe_ptr,8);
  memcpy(__t1550t__+8,&__t1552t__dat__pos,2);
  memcpy(__t1550t__+10,&__t1552t__dat__length,2);
  __t1553t=3;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1553t,&__t1554t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1496t(__t1555t,&__t1556t__unsafe_ptr,&__t1556t__dat__pos,&__t1556t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1554t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1554t__,&__t1556t__unsafe_ptr,8);
  memcpy(__t1554t__+8,&__t1556t__dat__pos,2);
  memcpy(__t1554t__+10,&__t1556t__dat__length,2);
  __t1557t=4;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1557t,&__t1558t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1496t(__t1559t,&__t1560t__unsafe_ptr,&__t1560t__dat__pos,&__t1560t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1558t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1558t__,&__t1560t__unsafe_ptr,8);
  memcpy(__t1558t__+8,&__t1560t__dat__pos,2);
  memcpy(__t1558t__+10,&__t1560t__dat__length,2);
  __t1561t=5;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1561t,&__t1562t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=concat__t1514t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1563t__unsafe_ptr,&__t1563t__dat__pos,&__t1563t__dat__length,&__t1563t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1493t(__t1563t__unsafe_ptr,__t1563t__dat__pos,__t1563t__dat__length,__t1563t__dat__first,&__t1565t__unsafe_ptr,&__t1565t__dat__pos,&__t1565t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1562t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1562t__,&__t1565t__unsafe_ptr,8);
  memcpy(__t1562t__+8,&__t1565t__dat__pos,2);
  memcpy(__t1562t__+10,&__t1565t__dat__length,2);
  len__t604t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1566t__);
  range__t467t(__t1566t__,&__t1567t__from,&__t1567t__to);
  full_iter__from=__t1567t__from;
  full_iter__to=__t1567t__to;
  while(1){
  __t_complain=next__t476t(&full_iter__from,full_iter__to,&__t1569t__);
  __t1568t=__t_complain;
  j=__t1569t__;
  __t1568t=__t1568t==0;
  if(!__t1568t){
  break;
  }
  print__t386t(j,__t1531t);
  __t_errcode=get__t597t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__t1571t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1571t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1572t__unsafe_ptr,__t1571t__,8);
  memcpy(&__t1572t__dat__pos,__t1571t__+8,2);
  memcpy(&__t1572t__dat__length,__t1571t__+10,2);
  unpack__t1499t(__t1572t__unsafe_ptr,__t1572t__dat__pos,__t1572t__dat__length,&__t1573t__unsafe_ptr,&__t1573t__dat__pos,&__t1573t__dat__length,&__t1573t__dat__first);
  print__t791t(__t1573t__unsafe_ptr,__t1573t__dat__pos,__t1573t__dat__length,__t1573t__dat__first);
  }
  
  __t_failure:exists__t442t(__t1563t__unsafe_ptr,&__t1564t____t1521t____t517t__);
  if(__t1564t____t1521t____t517t__){
  free__t508t(&__t1563t__unsafe_ptr);
  }
  exists__t442t(__t1539t__unsafe_ptr,&__t1540t____t517t__);
  if(__t1540t____t517t__){
  free__t508t(&__t1539t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1534t();return 0;}