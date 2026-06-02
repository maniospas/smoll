#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1539t="it's a me";
const char* const __t1517t="surnname  ";
const char* const __t378t="\n";
const char* const __t370t="";
const char* const __t1512t="-------------------";
const char* const __t1541t="mario";
const char* const __t1514t="name      ";
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

static inline __attribute__((always_inline)) void Person____t_buffer____buffer__t1522t(char** __t1565t, uint64_t* __t1566t, uint16_t* __t1567t, uint16_t* __t1568t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__t1565t=unsafe_ptr;
  *__t1566t=unsafe_size;
  *__t1567t=unsafe_offset;
  *__t1568t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t1569t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1569t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t1570t) {
  char* allocated=*__t1570t;
  if(allocated){
  free(allocated);
  }
  *__t1570t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1571t) {
  int value=0;
  *__t1571t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1572t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1572t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1573t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1573t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1574t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1574t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1575t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1575t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t1576t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1576t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1577t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1577t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1578t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1578t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t1579t) {
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
  *__t1579t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t516t(char** __t1580t, uint64_t* __t1581t, uint16_t* __t1582t, uint16_t* __t1583t, uint64_t size, char** __t1584t, uint64_t* __t1585t, uint16_t* __t1586t, uint16_t* __t1587t) {
  char* buffer__unsafe_ptr=*__t1580t;
  uint64_t buffer__unsafe_size=*__t1581t;
  uint16_t buffer__unsafe_offset=*__t1582t;
  uint16_t buffer__unsafe_align=*__t1583t;
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
  *__t1580t=buffer__unsafe_ptr;
  *__t1581t=buffer__unsafe_size;
  *__t1582t=buffer__unsafe_offset;
  *__t1583t=buffer__unsafe_align;
  *__t1584t=buffer__unsafe_ptr;
  *__t1585t=buffer__unsafe_size;
  *__t1586t=buffer__unsafe_offset;
  *__t1587t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1528t(char** __t1588t, uint64_t* __t1589t, uint16_t* __t1590t, uint16_t* __t1591t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1588t=unsafe_ptr;
  *__t1589t=unsafe_size;
  *__t1590t=unsafe_offset;
  *__t1591t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t487t(uint64_t x, uint64_t* __t1592t) {
  uint64_t __t488t=0;
  uint64_t __t489t__=0;
  __t488t=1024;
  mul__t199t(x,__t488t,&__t489t__);
  goto __t_return;
  __t_return:
  *__t1592t=__t489t__;
}

static inline __attribute__((always_inline)) void arena__t633t(char** __t1593t, uint64_t* __t1594t, uint16_t* __t1595t, uint16_t* __t1596t, char** __t1597t, uint64_t* __t1598t, uint16_t* __t1599t, uint16_t* __t1600t, uint64_t* __t1601t) {
  char* buf__unsafe_ptr=*__t1593t;
  uint64_t buf__unsafe_size=*__t1594t;
  uint16_t buf__unsafe_offset=*__t1595t;
  uint16_t buf__unsafe_align=*__t1596t;
  uint64_t __t634t=0;
  uint64_t __t635t=0;
  uint64_t pos=0;
  __t634t=0;
  __t635t=__t634t;
  pos=__t635t;
  goto __t_return;
  __t_return:
  *__t1593t=buf__unsafe_ptr;
  *__t1594t=buf__unsafe_size;
  *__t1595t=buf__unsafe_offset;
  *__t1596t=buf__unsafe_align;
  *__t1597t=buf__unsafe_ptr;
  *__t1598t=buf__unsafe_size;
  *__t1599t=buf__unsafe_offset;
  *__t1600t=buf__unsafe_align;
  *__t1601t=pos;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1602t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1602t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1603t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1603t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1604t) {
  *__t1604t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t1605t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t1605t=__t512t__;
}

static inline __attribute__((always_inline)) int mutget__t591t(char** __t1606t, uint64_t* __t1607t, uint16_t* __t1608t, uint16_t* __t1609t, uint64_t i, char** __t1610t) {
  char* buffer__unsafe_ptr=*__t1606t;
  uint64_t buffer__unsafe_size=*__t1607t;
  uint16_t buffer__unsafe_offset=*__t1608t;
  uint16_t buffer__unsafe_align=*__t1609t;
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
  *__t1606t=buffer__unsafe_ptr;
  *__t1607t=buffer__unsafe_size;
  *__t1608t=buffer__unsafe_offset;
  *__t1609t=buffer__unsafe_align;
  *__t1610t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t1611t, uint64_t* __t1612t, uint16_t* __t1613t, uint16_t* __t1614t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1611t=unsafe_ptr;
  *__t1612t=unsafe_size;
  *__t1613t=unsafe_offset;
  *__t1614t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1615t) {
  *__t1615t=to;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1616t) {
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
  *__t1616t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t642t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1617t, uint64_t* __t1618t, uint64_t* __t1619t, char* __t1620t) {
  goto __t_return;
  __t_return:
  *__t1617t=unsafe_ptr;
  *__t1618t=dat__pos;
  *__t1619t=dat__length;
  *__t1620t=dat__first;
}

static inline __attribute__((always_inline)) int str__t646t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1621t, uint64_t* __t1622t, uint64_t* __t1623t, char* __t1624t) {
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
  *__t1621t=__t653t__unsafe_ptr;
  *__t1622t=__t653t__dat__pos;
  *__t1623t=__t653t__dat__length;
  *__t1624t=__t653t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t681t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1625t, uint64_t* __t1626t, uint64_t* __t1627t, char* __t1628t) {
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
  *__t1625t=__t686t__unsafe_ptr;
  *__t1626t=__t686t__dat__pos;
  *__t1627t=__t686t__dat__length;
  *__t1628t=__t686t__dat__first;
  
  return __t_errcode;
}

int str__t704t(const char* c, char** __t1629t, uint64_t* __t1630t, uint64_t* __t1631t, char* __t1632t) {
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
  *__t1629t=__t712t__unsafe_ptr;
  *__t1630t=__t712t__dat__pos;
  *__t1631t=__t712t__dat__length;
  *__t1632t=__t712t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t713t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1633t) {
  goto __t_return;
  __t_return:
  *__t1633t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1634t) {
  goto __t_return;
  __t_return:
  *__t1634t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t1635t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1635t=z;
}

int copy__t814t(char** __t1636t, uint64_t* __t1637t, uint16_t* __t1638t, uint16_t* __t1639t, uint64_t* __t1640t, const char* _other, char** __t1641t, uint64_t* __t1642t, uint64_t* __t1643t, char* __t1644t) {
  char* CHARS__buf__unsafe_ptr=*__t1636t;
  uint64_t CHARS__buf__unsafe_size=*__t1637t;
  uint16_t CHARS__buf__unsafe_offset=*__t1638t;
  uint16_t CHARS__buf__unsafe_align=*__t1639t;
  uint64_t CHARS__pos=*__t1640t;
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
  *__t1636t=CHARS__buf__unsafe_ptr;
  *__t1637t=CHARS__buf__unsafe_size;
  *__t1638t=CHARS__buf__unsafe_offset;
  *__t1639t=CHARS__buf__unsafe_align;
  *__t1640t=CHARS__pos;
  *__t1641t=__t822t__unsafe_ptr;
  *__t1642t=__t822t__dat__pos;
  *__t1643t=__t822t__dat__length;
  *__t1644t=__t822t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Person__t1509t(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __t1645t, uint64_t* __t1646t, uint64_t* __t1647t, char* __t1648t, char** __t1649t, uint64_t* __t1650t, uint64_t* __t1651t, char* __t1652t) {
  goto __t_return;
  __t_return:
  *__t1645t=name__unsafe_ptr;
  *__t1646t=name__dat__pos;
  *__t1647t=name__dat__length;
  *__t1648t=name__dat__first;
  *__t1649t=surname__unsafe_ptr;
  *__t1650t=surname__dat__pos;
  *__t1651t=surname__dat__length;
  *__t1652t=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__t376t(const char* value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t374t(const char* value, const char* endl) {
  int __t375t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t847t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t848t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t1511t(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__t376t(__t1512t);
  print__t374t(__t1514t,__t370t);
  print__t847t(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__t374t(__t1517t,__t370t);
  print__t847t(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__t376t(__t1512t);
}

static inline __attribute__((always_inline)) int test__t1521t(char** __t1653t, uint64_t* __t1654t, uint16_t* __t1655t, uint16_t* __t1656t, uint64_t* __t1657t, char** __t1658t, uint64_t* __t1659t, uint16_t* __t1660t, uint16_t* __t1661t) {
  char* __t1524t__unsafe_ptr=0;
  uint64_t __t1524t__unsafe_size=0;
  uint16_t __t1524t__unsafe_offset=0;
  uint16_t __t1524t__unsafe_align=0;
  uint64_t __t1525t=0;
  char* __t1526t__unsafe_ptr=0;
  uint64_t __t1526t__unsafe_size=0;
  uint16_t __t1526t__unsafe_offset=0;
  uint16_t __t1526t__unsafe_align=0;
  char __t1527t____t518t__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __t1530t__unsafe_ptr=0;
  uint64_t __t1530t__unsafe_size=0;
  uint16_t __t1530t__unsafe_offset=0;
  uint16_t __t1530t__unsafe_align=0;
  uint64_t __t1531t=0;
  uint64_t __t1532t__=0;
  char* __t1533t__unsafe_ptr=0;
  uint64_t __t1533t__unsafe_size=0;
  uint16_t __t1533t__unsafe_offset=0;
  uint16_t __t1533t__unsafe_align=0;
  char __t1534t____t518t__=0;
  char* __t1535t__buf__unsafe_ptr=0;
  uint64_t __t1535t__buf__unsafe_size=0;
  uint16_t __t1535t__buf__unsafe_offset=0;
  uint16_t __t1535t__buf__unsafe_align=0;
  uint64_t __t1535t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __t1536t=0;
  char* __t1537t__=0;
  uint64_t __t1538t=0;
  char* __t1540t__unsafe_ptr=0;
  uint64_t __t1540t__dat__pos=0;
  uint64_t __t1540t__dat__length=0;
  char __t1540t__dat__first=0;
  char* __t1542t__unsafe_ptr=0;
  uint64_t __t1542t__dat__pos=0;
  uint64_t __t1542t__dat__length=0;
  char __t1542t__dat__first=0;
  char* __t1543t__name__unsafe_ptr=0;
  uint64_t __t1543t__name__dat__pos=0;
  uint64_t __t1543t__name__dat__length=0;
  char __t1543t__name__dat__first=0;
  char* __t1543t__surname__unsafe_ptr=0;
  uint64_t __t1543t__surname__dat__pos=0;
  uint64_t __t1543t__surname__dat__length=0;
  char __t1543t__surname__dat__first=0;
  uint64_t __t1544t=0;
  char* __t1545t__=0;
  char* __t1546t__name__unsafe_ptr=0;
  uint64_t __t1546t__name__dat__pos=0;
  uint64_t __t1546t__name__dat__length=0;
  char __t1546t__name__dat__first=0;
  char* __t1546t__surname__unsafe_ptr=0;
  uint64_t __t1546t__surname__dat__pos=0;
  uint64_t __t1546t__surname__dat__length=0;
  char __t1546t__surname__dat__first=0;
  char* __t1548t__unsafe_ptr=0;
  uint64_t __t1548t__unsafe_size=0;
  uint16_t __t1548t__unsafe_offset=0;
  uint16_t __t1548t__unsafe_align=0;
  char* __t1552t__unsafe_ptr=0;
  uint64_t __t1552t__unsafe_size=0;
  uint16_t __t1552t__unsafe_offset=0;
  uint16_t __t1552t__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  Person____t_buffer____buffer__t1522t(&__t1524t__unsafe_ptr,&__t1524t__unsafe_size,&__t1524t__unsafe_offset,&__t1524t__unsafe_align);
  __t1525t=4;
  __t_errcode=alloc__t516t(&__t1524t__unsafe_ptr,&__t1524t__unsafe_size,&__t1524t__unsafe_offset,&__t1524t__unsafe_align,__t1525t,&__t1526t__unsafe_ptr,&__t1526t__unsafe_size,&__t1526t__unsafe_offset,&__t1526t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  people__unsafe_ptr=__t1526t__unsafe_ptr;
  people__unsafe_size=__t1526t__unsafe_size;
  people__unsafe_offset=__t1526t__unsafe_offset;
  people__unsafe_align=__t1526t__unsafe_align;
  char____t_buffer____buffer__t1528t(&__t1530t__unsafe_ptr,&__t1530t__unsafe_size,&__t1530t__unsafe_offset,&__t1530t__unsafe_align);
  __t1531t=4;
  KB__t487t(__t1531t,&__t1532t__);
  __t_errcode=alloc__t516t(&__t1530t__unsafe_ptr,&__t1530t__unsafe_size,&__t1530t__unsafe_offset,&__t1530t__unsafe_align,__t1532t__,&__t1533t__unsafe_ptr,&__t1533t__unsafe_size,&__t1533t__unsafe_offset,&__t1533t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t633t(&__t1533t__unsafe_ptr,&__t1533t__unsafe_size,&__t1533t__unsafe_offset,&__t1533t__unsafe_align,&__t1535t__buf__unsafe_ptr,&__t1535t__buf__unsafe_size,&__t1535t__buf__unsafe_offset,&__t1535t__buf__unsafe_align,&__t1535t__pos);
  buf__buf__unsafe_ptr=__t1535t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1535t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1535t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1535t__buf__unsafe_align;
  buf__pos=__t1535t__pos;
  __t1536t=0;
  __t_errcode=mutget__t591t(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__t1536t,&__t1537t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1538t=0;
  __t_errcode=copy__t814t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1539t,&__t1540t__unsafe_ptr,&__t1540t__dat__pos,&__t1540t__dat__length,&__t1540t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t814t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1541t,&__t1542t__unsafe_ptr,&__t1542t__dat__pos,&__t1542t__dat__length,&__t1542t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  Person__t1509t(__t1538t,__t1540t__unsafe_ptr,__t1540t__dat__pos,__t1540t__dat__length,__t1540t__dat__first,__t1542t__unsafe_ptr,__t1542t__dat__pos,__t1542t__dat__length,__t1542t__dat__first,&__t1543t__name__unsafe_ptr,&__t1543t__name__dat__pos,&__t1543t__name__dat__length,&__t1543t__name__dat__first,&__t1543t__surname__unsafe_ptr,&__t1543t__surname__dat__pos,&__t1543t__surname__dat__length,&__t1543t__surname__dat__first);
  if(!__t1537t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1537t__,&__t1543t__name__unsafe_ptr,8);
  memcpy(__t1537t__+8,&__t1543t__name__dat__pos,8);
  memcpy(__t1537t__+16,&__t1543t__name__dat__length,8);
  memcpy(__t1537t__+24,&__t1543t__name__dat__first,1);
  memcpy(__t1537t__+25,&__t1543t__surname__unsafe_ptr,8);
  memcpy(__t1537t__+33,&__t1543t__surname__dat__pos,8);
  memcpy(__t1537t__+41,&__t1543t__surname__dat__length,8);
  memcpy(__t1537t__+49,&__t1543t__surname__dat__first,1);
  __t1544t=0;
  __t_errcode=get__t598t(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__t1544t,&__t1545t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1545t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1546t__name__unsafe_ptr,__t1545t__,8);
  memcpy(&__t1546t__name__dat__pos,__t1545t__+8,8);
  memcpy(&__t1546t__name__dat__length,__t1545t__+16,8);
  memcpy(&__t1546t__name__dat__first,__t1545t__+24,1);
  memcpy(&__t1546t__surname__unsafe_ptr,__t1545t__+25,8);
  memcpy(&__t1546t__surname__dat__pos,__t1545t__+33,8);
  memcpy(&__t1546t__surname__dat__length,__t1545t__+41,8);
  memcpy(&__t1546t__surname__dat__first,__t1545t__+49,1);
  print__t1511t(__t1546t__name__unsafe_ptr,__t1546t__name__dat__pos,__t1546t__name__dat__length,__t1546t__name__dat__first,__t1546t__surname__unsafe_ptr,__t1546t__surname__dat__pos,__t1546t__surname__dat__length,__t1546t__surname__dat__first);
  __t1548t__unsafe_ptr=people__unsafe_ptr;
  __t1548t__unsafe_size=people__unsafe_size;
  __t1548t__unsafe_offset=people__unsafe_offset+0;
  __t1548t__unsafe_align=people__unsafe_align;
  __t1552t__unsafe_ptr=__t1548t__unsafe_ptr;
  __t1552t__unsafe_size=__t1548t__unsafe_size;
  __t1552t__unsafe_offset=__t1548t__unsafe_offset+8;
  __t1552t__unsafe_align=__t1548t__unsafe_align;
  dat__unsafe_ptr=__t1552t__unsafe_ptr;
  dat__unsafe_size=__t1552t__unsafe_size;
  dat__unsafe_offset=__t1552t__unsafe_offset;
  dat__unsafe_align=__t1552t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t443t(buf__buf__unsafe_ptr,&__t1534t____t518t__);
  if(__t1534t____t518t__){
  free__t509t(&buf__buf__unsafe_ptr);
  }
  exists__t443t(dat__unsafe_ptr,&__t1527t____t518t__);
  if(__t1527t____t518t__){
  free__t509t(&dat__unsafe_ptr);
  }
  __t_return:
  *__t1653t=buf__buf__unsafe_ptr;
  *__t1654t=buf__buf__unsafe_size;
  *__t1655t=buf__buf__unsafe_offset;
  *__t1656t=buf__buf__unsafe_align;
  *__t1657t=buf__pos;
  *__t1658t=dat__unsafe_ptr;
  *__t1659t=dat__unsafe_size;
  *__t1660t=dat__unsafe_offset;
  *__t1661t=dat__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1556t() {
  char* __t1558t__buf__buf__unsafe_ptr=0;
  uint64_t __t1558t__buf__buf__unsafe_size=0;
  uint16_t __t1558t__buf__buf__unsafe_offset=0;
  uint16_t __t1558t__buf__buf__unsafe_align=0;
  uint64_t __t1558t__buf__pos=0;
  char* __t1558t__dat__unsafe_ptr=0;
  uint64_t __t1558t__dat__unsafe_size=0;
  uint16_t __t1558t__dat__unsafe_offset=0;
  uint16_t __t1558t__dat__unsafe_align=0;
  char __t1559t____t1527t____t518t__=0;
  char __t1559t____t1534t____t518t__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __t1560t=0;
  char* __t1561t__=0;
  uint64_t __t1562t__pos=0;
  uint64_t __t1562t__length=0;
  char __t1562t__first=0;
  char* __t1563t__unsafe_ptr=0;
  uint64_t __t1563t__dat__pos=0;
  uint64_t __t1563t__dat__length=0;
  char __t1563t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test__t1521t(&__t1558t__buf__buf__unsafe_ptr,&__t1558t__buf__buf__unsafe_size,&__t1558t__buf__buf__unsafe_offset,&__t1558t__buf__buf__unsafe_align,&__t1558t__buf__pos,&__t1558t__dat__unsafe_ptr,&__t1558t__dat__unsafe_size,&__t1558t__dat__unsafe_offset,&__t1558t__dat__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__buf__buf__unsafe_ptr=__t1558t__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__t1558t__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__t1558t__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__t1558t__buf__buf__unsafe_align;
  t__buf__pos=__t1558t__buf__pos;
  t__dat__unsafe_ptr=__t1558t__dat__unsafe_ptr;
  t__dat__unsafe_size=__t1558t__dat__unsafe_size;
  t__dat__unsafe_offset=__t1558t__dat__unsafe_offset;
  t__dat__unsafe_align=__t1558t__dat__unsafe_align;
  __t1560t=0;
  __t_errcode=get__t598t(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__t1560t,&__t1561t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1561t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1562t__pos,__t1561t__,8);
  memcpy(&__t1562t__length,__t1561t__+8,8);
  memcpy(&__t1562t__first,__t1561t__+16,1);
  __t_errcode=str__t646t(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__t1562t__pos,__t1562t__length,__t1562t__first,&__t1563t__unsafe_ptr,&__t1563t__dat__pos,&__t1563t__dat__length,&__t1563t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t847t(__t1563t__unsafe_ptr,__t1563t__dat__pos,__t1563t__dat__length,__t1563t__dat__first);
  
  __t_failure:exists__t443t(__t1558t__buf__buf__unsafe_ptr,&__t1559t____t1534t____t518t__);
  if(__t1559t____t1534t____t518t__){
  free__t509t(&__t1558t__buf__buf__unsafe_ptr);
  }
  exists__t443t(__t1558t__dat__unsafe_ptr,&__t1559t____t1527t____t518t__);
  if(__t1559t____t1527t____t518t__){
  free__t509t(&__t1558t__dat__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1556t();return 0;}