#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1577t="my";
const char* const __t378t="\n";
const char* const __t1589t="manios";
const char* const __t1581t="name";
const char* const __t1560t=" ";
const char* const __t1573t="hi";
const char* const __t1585t="is";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1541t(char** __t1605t, uint64_t* __t1606t, uint16_t* __t1607t, uint16_t* __t1608t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__t1605t=unsafe_ptr;
  *__t1606t=unsafe_size;
  *__t1607t=unsafe_offset;
  *__t1608t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t1609t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1609t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t1610t) {
  char* allocated=*__t1610t;
  if(allocated){
  free(allocated);
  }
  *__t1610t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1611t) {
  int value=0;
  *__t1611t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1612t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1612t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1613t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1613t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1614t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1614t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1615t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1615t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t1616t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1616t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1617t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1617t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1618t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1618t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t1619t) {
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
  *__t1619t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t1620t, uint64_t* __t1621t, uint16_t* __t1622t, uint16_t* __t1623t, uint64_t size, char** __t1624t, uint64_t* __t1625t, uint16_t* __t1626t, uint16_t* __t1627t) {
  char* buffer__unsafe_ptr=*__t1620t;
  uint64_t buffer__unsafe_size=*__t1621t;
  uint16_t buffer__unsafe_offset=*__t1622t;
  uint16_t buffer__unsafe_align=*__t1623t;
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
  *__t1620t=buffer__unsafe_ptr;
  *__t1621t=buffer__unsafe_size;
  *__t1622t=buffer__unsafe_offset;
  *__t1623t=buffer__unsafe_align;
  *__t1624t=buffer__unsafe_ptr;
  *__t1625t=buffer__unsafe_size;
  *__t1626t=buffer__unsafe_offset;
  *__t1627t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1628t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1628t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1629t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1629t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1630t) {
  *__t1630t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t1631t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t1631t=__t512t__;
}

static inline __attribute__((always_inline)) int mutget__t591t(char** __t1632t, uint64_t* __t1633t, uint16_t* __t1634t, uint16_t* __t1635t, uint64_t i, char** __t1636t) {
  char* buffer__unsafe_ptr=*__t1632t;
  uint64_t buffer__unsafe_size=*__t1633t;
  uint16_t buffer__unsafe_offset=*__t1634t;
  uint16_t buffer__unsafe_align=*__t1635t;
  char __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  uint64_t __t596t__=0;
  char* __t597t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t592t__);
  if(__t592t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t593t__);
  mul__t199t(i,__t593t__,&__t594t__);
  nat__t513t(buffer__unsafe_offset,&__t595t__);
  add__t175t(__t594t__,__t595t__,&__t596t__);
  add__t511t(buffer__unsafe_ptr,__t596t__,&__t597t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1632t=buffer__unsafe_ptr;
  *__t1633t=buffer__unsafe_size;
  *__t1634t=buffer__unsafe_offset;
  *__t1635t=buffer__unsafe_align;
  *__t1636t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t1637t, uint64_t* __t1638t, uint16_t* __t1639t, uint16_t* __t1640t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1637t=unsafe_ptr;
  *__t1638t=unsafe_size;
  *__t1639t=unsafe_offset;
  *__t1640t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1641t) {
  *__t1641t=to;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1642t) {
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
  *__t1642t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t642t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1643t, uint64_t* __t1644t, uint64_t* __t1645t, char* __t1646t) {
  goto __t_return;
  __t_return:
  *__t1643t=unsafe_ptr;
  *__t1644t=dat__pos;
  *__t1645t=dat__length;
  *__t1646t=dat__first;
}

static inline __attribute__((always_inline)) int str__t646t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1647t, uint64_t* __t1648t, uint64_t* __t1649t, char* __t1650t) {
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
  *__t1647t=__t653t__unsafe_ptr;
  *__t1648t=__t653t__dat__pos;
  *__t1649t=__t653t__dat__length;
  *__t1650t=__t653t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t681t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1651t, uint64_t* __t1652t, uint64_t* __t1653t, char* __t1654t) {
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
  *__t1651t=__t686t__unsafe_ptr;
  *__t1652t=__t686t__dat__pos;
  *__t1653t=__t686t__dat__length;
  *__t1654t=__t686t__dat__first;
  
  return __t_errcode;
}

int str__t704t(const char* c, char** __t1655t, uint64_t* __t1656t, uint64_t* __t1657t, char* __t1658t) {
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
  *__t1655t=__t712t__unsafe_ptr;
  *__t1656t=__t712t__dat__pos;
  *__t1657t=__t712t__dat__length;
  *__t1658t=__t712t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1659t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1659t=z;
}

static inline __attribute__((always_inline)) int nat16__t1512t(uint64_t x, uint16_t* __t1660t) {
  uint64_t __t1513t=0;
  char __t1514t__=0;
  uint16_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1513t=65535;
  gt__t276t(x,__t1513t,&__t1514t__);
  if(__t1514t__){
  __t_errcode=36;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1660t=value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int strdat__t1519t(uint64_t _pos, uint64_t _length, uint16_t* __t1661t, uint16_t* __t1662t) {
  uint16_t __t1520t__=0;
  uint16_t pos=0;
  uint16_t __t1521t__=0;
  uint16_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat16__t1512t(_pos,&__t1520t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1520t__;
  __t_errcode=nat16__t1512t(_length,&__t1521t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1521t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1661t=pos;
  *__t1662t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1522t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __t1663t, uint16_t* __t1664t, uint16_t* __t1665t) {
  char* unsafe_ptr=0;
  uint16_t __t1523t__pos=0;
  uint16_t __t1523t__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __t_errcode=strdat__t1519t(s__dat__pos,s__dat__length,&__t1523t__pos,&__t1523t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  dat__pos=__t1523t__pos;
  dat__length=__t1523t__length;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1663t=unsafe_ptr;
  *__t1664t=dat__pos;
  *__t1665t=dat__length;
  
  return __t_errcode;
}

int str__t1525t(const char* s, char** __t1666t, uint16_t* __t1667t, uint16_t* __t1668t) {
  char* __t1526t__unsafe_ptr=0;
  uint64_t __t1526t__dat__pos=0;
  uint64_t __t1526t__dat__length=0;
  char __t1526t__dat__first=0;
  char* __t1527t__unsafe_ptr=0;
  uint16_t __t1527t__dat__pos=0;
  uint16_t __t1527t__dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t704t(s,&__t1526t__unsafe_ptr,&__t1526t__dat__pos,&__t1526t__dat__length,&__t1526t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1522t(__t1526t__unsafe_ptr,__t1526t__dat__pos,__t1526t__dat__length,__t1526t__dat__first,&__t1527t__unsafe_ptr,&__t1527t__dat__pos,&__t1527t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1666t=__t1527t__unsafe_ptr;
  *__t1667t=__t1527t__dat__pos;
  *__t1668t=__t1527t__dat__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1544t(char** __t1669t, uint64_t* __t1670t, uint16_t* __t1671t, uint16_t* __t1672t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1669t=unsafe_ptr;
  *__t1670t=unsafe_size;
  *__t1671t=unsafe_offset;
  *__t1672t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t487t(uint64_t x, uint64_t* __t1673t) {
  uint64_t __t488t=0;
  uint64_t __t489t__=0;
  __t488t=1024;
  mul__t199t(x,__t488t,&__t489t__);
  goto __t_return;
  __t_return:
  *__t1673t=__t489t__;
}

static inline __attribute__((always_inline)) void arena__t633t(char** __t1674t, uint64_t* __t1675t, uint16_t* __t1676t, uint16_t* __t1677t, char** __t1678t, uint64_t* __t1679t, uint16_t* __t1680t, uint16_t* __t1681t, uint64_t* __t1682t) {
  char* buf__unsafe_ptr=*__t1674t;
  uint64_t buf__unsafe_size=*__t1675t;
  uint16_t buf__unsafe_offset=*__t1676t;
  uint16_t buf__unsafe_align=*__t1677t;
  uint64_t __t634t=0;
  uint64_t __t635t=0;
  uint64_t pos=0;
  __t634t=0;
  __t635t=__t634t;
  pos=__t635t;
  goto __t_return;
  __t_return:
  *__t1674t=buf__unsafe_ptr;
  *__t1675t=buf__unsafe_size;
  *__t1676t=buf__unsafe_offset;
  *__t1677t=buf__unsafe_align;
  *__t1678t=buf__unsafe_ptr;
  *__t1679t=buf__unsafe_size;
  *__t1680t=buf__unsafe_offset;
  *__t1681t=buf__unsafe_align;
  *__t1682t=pos;
}

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1683t) {
  goto __t_return;
  __t_return:
  *__t1683t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t to, uint64_t* __t1684t, uint64_t* __t1685t) {
  int __t469t=0;
  uint64_t __t470t=0;
  uint64_t _from=0;
  uint64_t __t471t=0;
  uint64_t from=0;
  __t470t=0;
  _from=__t470t;
  __t471t=_from;
  from=__t471t;
  goto __t_return;
  __t_return:
  *__t1684t=from;
  *__t1685t=to;
}

static inline __attribute__((always_inline)) int next__t477t(uint64_t* __t1686t, uint64_t r__to, uint64_t* __t1687t) {
  uint64_t r__from=*__t1686t;
  char __t478t__=0;
  uint64_t ret=0;
  uint64_t __t479t=0;
  uint64_t __t480t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t478t__);
  if(__t478t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t479t=1;
  add__t175t(ret,__t479t,&__t480t__);
  r__from=__t480t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1686t=r__from;
  *__t1687t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t644t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t1688t, uint64_t* __t1689t, uint64_t* __t1690t, char* __t1691t) {
  char* first_pos=0;
  char first=0;
  char* __t645t__unsafe_ptr=0;
  uint64_t __t645t__dat__pos=0;
  uint64_t __t645t__dat__length=0;
  char __t645t__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__t642t(unsafe_ptr,pos,length,first,&__t645t__unsafe_ptr,&__t645t__dat__pos,&__t645t__dat__length,&__t645t__dat__first);
  goto __t_return;
  __t_return:
  *__t1688t=__t645t__unsafe_ptr;
  *__t1689t=__t645t__dat__pos;
  *__t1690t=__t645t__dat__length;
  *__t1691t=__t645t__dat__first;
}

static inline __attribute__((always_inline)) void unpack__t1528t(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __t1692t, uint64_t* __t1693t, uint64_t* __t1694t, char* __t1695t) {
  uint64_t __t1529t__=0;
  uint64_t __t1530t__=0;
  char* __t1531t__unsafe_ptr=0;
  uint64_t __t1531t__dat__pos=0;
  uint64_t __t1531t__dat__length=0;
  char __t1531t__dat__first=0;
  nat__t513t(m__dat__pos,&__t1529t__);
  nat__t513t(m__dat__length,&__t1530t__);
  str__t644t(m__unsafe_ptr,__t1529t__,__t1530t__,&__t1531t__unsafe_ptr,&__t1531t__dat__pos,&__t1531t__dat__length,&__t1531t__dat__first);
  goto __t_return;
  __t_return:
  *__t1692t=__t1531t__unsafe_ptr;
  *__t1693t=__t1531t__dat__pos;
  *__t1694t=__t1531t__dat__length;
  *__t1695t=__t1531t__dat__first;
}

static inline __attribute__((always_inline)) void str__t677t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1696t, uint64_t* __t1697t, uint64_t* __t1698t, char* __t1699t) {
  goto __t_return;
  __t_return:
  *__t1696t=other__unsafe_ptr;
  *__t1697t=other__dat__pos;
  *__t1698t=other__dat__length;
  *__t1699t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t713t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1700t) {
  goto __t_return;
  __t_return:
  *__t1700t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__t805t(char** __t1701t, uint64_t* __t1702t, uint16_t* __t1703t, uint16_t* __t1704t, uint64_t* __t1705t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1706t, uint64_t* __t1707t, uint64_t* __t1708t, char* __t1709t) {
  char* CHARS__buf__unsafe_ptr=*__t1701t;
  uint64_t CHARS__buf__unsafe_size=*__t1702t;
  uint16_t CHARS__buf__unsafe_offset=*__t1703t;
  uint16_t CHARS__buf__unsafe_align=*__t1704t;
  uint64_t CHARS__pos=*__t1705t;
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
  *__t1701t=CHARS__buf__unsafe_ptr;
  *__t1702t=CHARS__buf__unsafe_size;
  *__t1703t=CHARS__buf__unsafe_offset;
  *__t1704t=CHARS__buf__unsafe_align;
  *__t1705t=CHARS__pos;
  *__t1706t=__t813t__unsafe_ptr;
  *__t1707t=__t813t__dat__pos;
  *__t1708t=__t813t__dat__length;
  *__t1709t=__t813t__dat__first;
  
  return __t_errcode;
}

int copy__t814t(char** __t1710t, uint64_t* __t1711t, uint16_t* __t1712t, uint16_t* __t1713t, uint64_t* __t1714t, const char* _other, char** __t1715t, uint64_t* __t1716t, uint64_t* __t1717t, char* __t1718t) {
  char* CHARS__buf__unsafe_ptr=*__t1710t;
  uint64_t CHARS__buf__unsafe_size=*__t1711t;
  uint16_t CHARS__buf__unsafe_offset=*__t1712t;
  uint16_t CHARS__buf__unsafe_align=*__t1713t;
  uint64_t CHARS__pos=*__t1714t;
  char* __t815t__unsafe_ptr=0;
  uint64_t __t815t__dat__pos=0;
  uint64_t __t815t__dat__length=0;
  char __t815t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t816t__=0;
  uint64_t __t817t__=0;
  uint64_t next_pos=0;
  uint64_t __t818t__=0;
  char __t819t__=0;
  uint64_t __t820t=0;
  uint64_t __t821t__=0;
  uint64_t prev_pos=0;
  char* __t822t__unsafe_ptr=0;
  uint64_t __t822t__dat__pos=0;
  uint64_t __t822t__dat__length=0;
  char __t822t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t704t(_other,&__t815t__unsafe_ptr,&__t815t__dat__pos,&__t815t__dat__length,&__t815t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t815t__unsafe_ptr;
  other__dat__pos=__t815t__dat__pos;
  other__dat__length=__t815t__dat__length;
  other__dat__first=__t815t__dat__first;
  len__t713t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t816t__);
  add__t175t(CHARS__pos,__t816t__,&__t817t__);
  next_pos=__t817t__;
  len__t605t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t818t__);
  gt__t276t(next_pos,__t818t__,&__t819t__);
  if(__t819t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t820t=0;
  add__t175t(CHARS__pos,__t820t,&__t821t__);
  prev_pos=__t821t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t646t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t822t__unsafe_ptr,&__t822t__dat__pos,&__t822t__dat__length,&__t822t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1710t=CHARS__buf__unsafe_ptr;
  *__t1711t=CHARS__buf__unsafe_size;
  *__t1712t=CHARS__buf__unsafe_offset;
  *__t1713t=CHARS__buf__unsafe_align;
  *__t1714t=CHARS__pos;
  *__t1715t=__t822t__unsafe_ptr;
  *__t1716t=__t822t__dat__pos;
  *__t1717t=__t822t__dat__length;
  *__t1718t=__t822t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1719t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1719t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t1720t) {
  int __t353t__=0;
  int __t354t=0;
  int __t355t=0;
  char __t356t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t353t__);
  lt__t252t(x,y,&__t356t__);
  if(__t356t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1720t=z;
  
  return __t_errcode;
}

int str__t690t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t1721t, uint64_t* __t1722t, uint64_t* __t1723t, char* __t1724t) {
  uint64_t __t691t__=0;
  uint64_t length=0;
  uint64_t __t692t=0;
  char __t693t__=0;
  char* __t694t__=0;
  char __t695t__value=0;
  char first=0;
  char* __t696t__unsafe_ptr=0;
  uint64_t __t696t__dat__pos=0;
  uint64_t __t696t__dat__length=0;
  char __t696t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t691t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t691t__;
  __t692t=0;
  neq__t144t(length,__t692t,&__t693t__);
  if(__t693t__){
  __t_errcode=get__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t694t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t694t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t695t__value,__t694t__,1);
  first=__t695t__value;
  }
  __t_errcode=str__t646t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t696t__unsafe_ptr,&__t696t__dat__pos,&__t696t__dat__length,&__t696t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1721t=__t696t__unsafe_ptr;
  *__t1722t=__t696t__dat__pos;
  *__t1723t=__t696t__dat__length;
  *__t1724t=__t696t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1543t(char* buff__unsafe_ptr, uint64_t buff__unsafe_size, uint16_t buff__unsafe_offset, uint16_t buff__unsafe_align, char** __t1725t, uint64_t* __t1726t, uint64_t* __t1727t, char* __t1728t) {
  char* __t1546t__unsafe_ptr=0;
  uint64_t __t1546t__unsafe_size=0;
  uint16_t __t1546t__unsafe_offset=0;
  uint16_t __t1546t__unsafe_align=0;
  uint64_t __t1547t=0;
  uint64_t __t1548t__=0;
  char* __t1549t__unsafe_ptr=0;
  uint64_t __t1549t__unsafe_size=0;
  uint16_t __t1549t__unsafe_offset=0;
  uint16_t __t1549t__unsafe_align=0;
  char __t1550t____t518t__=0;
  char* __t1551t__buf__unsafe_ptr=0;
  uint64_t __t1551t__buf__unsafe_size=0;
  uint16_t __t1551t__buf__unsafe_offset=0;
  uint16_t __t1551t__buf__unsafe_align=0;
  uint64_t __t1551t__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __t1552t__=0;
  uint64_t __t1553t__from=0;
  uint64_t __t1553t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __t1554t=0;
  uint64_t __t1555t__=0;
  uint64_t i=0;
  char* __t1556t__=0;
  char* __t1557t__unsafe_ptr=0;
  uint16_t __t1557t__dat__pos=0;
  uint16_t __t1557t__dat__length=0;
  char* __t1558t__unsafe_ptr=0;
  uint64_t __t1558t__dat__pos=0;
  uint64_t __t1558t__dat__length=0;
  char __t1558t__dat__first=0;
  char* __t1559t__unsafe_ptr=0;
  uint64_t __t1559t__dat__pos=0;
  uint64_t __t1559t__dat__length=0;
  char __t1559t__dat__first=0;
  char* __t1561t__unsafe_ptr=0;
  uint64_t __t1561t__dat__pos=0;
  uint64_t __t1561t__dat__length=0;
  char __t1561t__dat__first=0;
  char* __t1563t__unsafe_ptr=0;
  uint64_t __t1563t__dat__pos=0;
  uint64_t __t1563t__dat__length=0;
  char __t1563t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1544t(&__t1546t__unsafe_ptr,&__t1546t__unsafe_size,&__t1546t__unsafe_offset,&__t1546t__unsafe_align);
  __t1547t=4;
  KB__t487t(__t1547t,&__t1548t__);
  __t_errcode=alloc__t516t(&__t1546t__unsafe_ptr,&__t1546t__unsafe_size,&__t1546t__unsafe_offset,&__t1546t__unsafe_align,__t1548t__,&__t1549t__unsafe_ptr,&__t1549t__unsafe_size,&__t1549t__unsafe_offset,&__t1549t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t633t(&__t1549t__unsafe_ptr,&__t1549t__unsafe_size,&__t1549t__unsafe_offset,&__t1549t__unsafe_align,&__t1551t__buf__unsafe_ptr,&__t1551t__buf__unsafe_size,&__t1551t__buf__unsafe_offset,&__t1551t__buf__unsafe_align,&__t1551t__pos);
  mem__pos=__t1551t__pos;
  len__t605t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1552t__);
  range__t468t(__t1552t__,&__t1553t__from,&__t1553t__to);
  iter__from=__t1553t__from;
  iter__to=__t1553t__to;
  start=mem__pos;
  while(1){
  __t_complain=next__t477t(&iter__from,iter__to,&__t1555t__);
  __t1554t=__t_complain;
  i=__t1555t__;
  __t1554t=__t1554t==0;
  if(!__t1554t){
  break;
  }
  __t_errcode=get__t598t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__t1556t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1556t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1557t__unsafe_ptr,__t1556t__,8);
  memcpy(&__t1557t__dat__pos,__t1556t__+8,2);
  memcpy(&__t1557t__dat__length,__t1556t__+10,2);
  unpack__t1528t(__t1557t__unsafe_ptr,__t1557t__dat__pos,__t1557t__dat__length,&__t1558t__unsafe_ptr,&__t1558t__dat__pos,&__t1558t__dat__length,&__t1558t__dat__first);
  __t_errcode=copy__t805t(&__t1549t__unsafe_ptr,&__t1549t__unsafe_size,&__t1549t__unsafe_offset,&__t1549t__unsafe_align,&mem__pos,__t1558t__unsafe_ptr,__t1558t__dat__pos,__t1558t__dat__length,__t1558t__dat__first,&__t1559t__unsafe_ptr,&__t1559t__dat__pos,&__t1559t__dat__length,&__t1559t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t814t(&__t1549t__unsafe_ptr,&__t1549t__unsafe_size,&__t1549t__unsafe_offset,&__t1549t__unsafe_align,&mem__pos,__t1560t,&__t1561t__unsafe_ptr,&__t1561t__dat__pos,&__t1561t__dat__length,&__t1561t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=str__t690t(__t1549t__unsafe_ptr,__t1549t__unsafe_size,__t1549t__unsafe_offset,__t1549t__unsafe_align,start,mem__pos,&__t1563t__unsafe_ptr,&__t1563t__dat__pos,&__t1563t__dat__length,&__t1563t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1563t__unsafe_ptr=__t1549t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t443t(__t1563t__unsafe_ptr,&__t1550t____t518t__);
  if(__t1550t____t518t__){
  free__t509t(&__t1563t__unsafe_ptr);
  }
  __t_return:
  *__t1725t=__t1563t__unsafe_ptr;
  *__t1726t=__t1563t__dat__pos;
  *__t1727t=__t1563t__dat__length;
  *__t1728t=__t1563t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t387t(uint64_t value, const char* endl) {
  int __t388t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t847t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t848t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1564t() {
  char* __t1566t__unsafe_ptr=0;
  uint64_t __t1566t__unsafe_size=0;
  uint16_t __t1566t__unsafe_offset=0;
  uint16_t __t1566t__unsafe_align=0;
  char* __t1567t__unsafe_ptr=0;
  uint64_t __t1567t__unsafe_size=0;
  uint16_t __t1567t__unsafe_offset=0;
  uint16_t __t1567t__unsafe_align=0;
  uint64_t __t1568t=0;
  char* __t1569t__unsafe_ptr=0;
  uint64_t __t1569t__unsafe_size=0;
  uint16_t __t1569t__unsafe_offset=0;
  uint16_t __t1569t__unsafe_align=0;
  char __t1570t____t518t__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __t1571t=0;
  char* __t1572t__=0;
  char* __t1574t__unsafe_ptr=0;
  uint16_t __t1574t__dat__pos=0;
  uint16_t __t1574t__dat__length=0;
  uint64_t __t1575t=0;
  char* __t1576t__=0;
  char* __t1578t__unsafe_ptr=0;
  uint16_t __t1578t__dat__pos=0;
  uint16_t __t1578t__dat__length=0;
  uint64_t __t1579t=0;
  char* __t1580t__=0;
  char* __t1582t__unsafe_ptr=0;
  uint16_t __t1582t__dat__pos=0;
  uint16_t __t1582t__dat__length=0;
  uint64_t __t1583t=0;
  char* __t1584t__=0;
  char* __t1586t__unsafe_ptr=0;
  uint16_t __t1586t__dat__pos=0;
  uint16_t __t1586t__dat__length=0;
  uint64_t __t1587t=0;
  char* __t1588t__=0;
  char* __t1590t__unsafe_ptr=0;
  uint16_t __t1590t__dat__pos=0;
  uint16_t __t1590t__dat__length=0;
  uint64_t __t1591t=0;
  char* __t1592t__=0;
  char* __t1593t__unsafe_ptr=0;
  uint64_t __t1593t__dat__pos=0;
  uint64_t __t1593t__dat__length=0;
  char __t1593t__dat__first=0;
  char __t1594t____t1550t____t518t__=0;
  char* __t1595t__unsafe_ptr=0;
  uint16_t __t1595t__dat__pos=0;
  uint16_t __t1595t__dat__length=0;
  uint64_t __t1596t__=0;
  uint64_t __t1597t__from=0;
  uint64_t __t1597t__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __t1598t=0;
  uint64_t __t1599t__=0;
  uint64_t j=0;
  char* __t1601t__=0;
  char* __t1602t__unsafe_ptr=0;
  uint16_t __t1602t__dat__pos=0;
  uint16_t __t1602t__dat__length=0;
  char* __t1603t__unsafe_ptr=0;
  uint64_t __t1603t__dat__pos=0;
  uint64_t __t1603t__dat__length=0;
  char __t1603t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  str____t_buffer____buffer__t1541t(&__t1566t__unsafe_ptr,&__t1566t__unsafe_size,&__t1566t__unsafe_offset,&__t1566t__unsafe_align);
  __t1567t__unsafe_ptr=__t1566t__unsafe_ptr;
  __t1567t__unsafe_size=__t1566t__unsafe_size;
  __t1567t__unsafe_offset=__t1566t__unsafe_offset;
  __t1567t__unsafe_align=__t1566t__unsafe_align;
  __t1568t=6;
  __t_errcode=alloc__t516t(&__t1567t__unsafe_ptr,&__t1567t__unsafe_size,&__t1567t__unsafe_offset,&__t1567t__unsafe_align,__t1568t,&__t1569t__unsafe_ptr,&__t1569t__unsafe_size,&__t1569t__unsafe_offset,&__t1569t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buff__unsafe_ptr=__t1569t__unsafe_ptr;
  buff__unsafe_size=__t1569t__unsafe_size;
  buff__unsafe_offset=__t1569t__unsafe_offset;
  buff__unsafe_align=__t1569t__unsafe_align;
  __t1571t=0;
  __t_errcode=mutget__t591t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1571t,&__t1572t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1525t(__t1573t,&__t1574t__unsafe_ptr,&__t1574t__dat__pos,&__t1574t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1572t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1572t__,&__t1574t__unsafe_ptr,8);
  memcpy(__t1572t__+8,&__t1574t__dat__pos,2);
  memcpy(__t1572t__+10,&__t1574t__dat__length,2);
  __t1575t=1;
  __t_errcode=mutget__t591t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1575t,&__t1576t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1525t(__t1577t,&__t1578t__unsafe_ptr,&__t1578t__dat__pos,&__t1578t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1576t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1576t__,&__t1578t__unsafe_ptr,8);
  memcpy(__t1576t__+8,&__t1578t__dat__pos,2);
  memcpy(__t1576t__+10,&__t1578t__dat__length,2);
  __t1579t=2;
  __t_errcode=mutget__t591t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1579t,&__t1580t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1525t(__t1581t,&__t1582t__unsafe_ptr,&__t1582t__dat__pos,&__t1582t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1580t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1580t__,&__t1582t__unsafe_ptr,8);
  memcpy(__t1580t__+8,&__t1582t__dat__pos,2);
  memcpy(__t1580t__+10,&__t1582t__dat__length,2);
  __t1583t=3;
  __t_errcode=mutget__t591t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1583t,&__t1584t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1525t(__t1585t,&__t1586t__unsafe_ptr,&__t1586t__dat__pos,&__t1586t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1584t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1584t__,&__t1586t__unsafe_ptr,8);
  memcpy(__t1584t__+8,&__t1586t__dat__pos,2);
  memcpy(__t1584t__+10,&__t1586t__dat__length,2);
  __t1587t=4;
  __t_errcode=mutget__t591t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1587t,&__t1588t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1525t(__t1589t,&__t1590t__unsafe_ptr,&__t1590t__dat__pos,&__t1590t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1588t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1588t__,&__t1590t__unsafe_ptr,8);
  memcpy(__t1588t__+8,&__t1590t__dat__pos,2);
  memcpy(__t1588t__+10,&__t1590t__dat__length,2);
  __t1591t=5;
  __t_errcode=mutget__t591t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1591t,&__t1592t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=concat__t1543t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1593t__unsafe_ptr,&__t1593t__dat__pos,&__t1593t__dat__length,&__t1593t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1522t(__t1593t__unsafe_ptr,__t1593t__dat__pos,__t1593t__dat__length,__t1593t__dat__first,&__t1595t__unsafe_ptr,&__t1595t__dat__pos,&__t1595t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1592t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1592t__,&__t1595t__unsafe_ptr,8);
  memcpy(__t1592t__+8,&__t1595t__dat__pos,2);
  memcpy(__t1592t__+10,&__t1595t__dat__length,2);
  len__t605t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1596t__);
  range__t468t(__t1596t__,&__t1597t__from,&__t1597t__to);
  full_iter__from=__t1597t__from;
  full_iter__to=__t1597t__to;
  while(1){
  __t_complain=next__t477t(&full_iter__from,full_iter__to,&__t1599t__);
  __t1598t=__t_complain;
  j=__t1599t__;
  __t1598t=__t1598t==0;
  if(!__t1598t){
  break;
  }
  print__t387t(j,__t1560t);
  __t_errcode=get__t598t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__t1601t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1601t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1602t__unsafe_ptr,__t1601t__,8);
  memcpy(&__t1602t__dat__pos,__t1601t__+8,2);
  memcpy(&__t1602t__dat__length,__t1601t__+10,2);
  unpack__t1528t(__t1602t__unsafe_ptr,__t1602t__dat__pos,__t1602t__dat__length,&__t1603t__unsafe_ptr,&__t1603t__dat__pos,&__t1603t__dat__length,&__t1603t__dat__first);
  print__t847t(__t1603t__unsafe_ptr,__t1603t__dat__pos,__t1603t__dat__length,__t1603t__dat__first);
  }
  
  __t_failure:exists__t443t(__t1593t__unsafe_ptr,&__t1594t____t1550t____t518t__);
  if(__t1594t____t1550t____t518t__){
  free__t509t(&__t1593t__unsafe_ptr);
  }
  exists__t443t(__t1569t__unsafe_ptr,&__t1570t____t518t__);
  if(__t1570t____t518t__){
  free__t509t(&__t1569t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1564t();return 0;}