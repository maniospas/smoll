#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1510t=" ";
const char* const __t1508t="hello";
const char* const __t377t="\n";
const char* const __t1512t="world!";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1500t(char** __t1517t, uint64_t* __t1518t, uint16_t* __t1519t, uint16_t* __t1520t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1517t=unsafe_ptr;
  *__t1518t=unsafe_size;
  *__t1519t=unsafe_offset;
  *__t1520t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1521t) {
  int value=0;
  *__t1521t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1522t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1522t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1523t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1523t=__t96t__;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1524t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1524t=z;
}

static inline __attribute__((always_inline)) void KB__t486t(uint64_t x, uint64_t* __t1525t) {
  uint64_t __t487t=0;
  uint64_t __t488t__=0;
  __t487t=1024;
  mul__t198t(x,__t487t,&__t488t__);
  goto __t_return;
  __t_return:
  *__t1525t=__t488t__;
}

static inline __attribute__((always_inline)) void exists__t442t(char* x, char* __t1526t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1526t=z;
}

static inline __attribute__((always_inline)) void free__t508t(char** __t1527t) {
  char* allocated=*__t1527t;
  if(allocated){
  free(allocated);
  }
  *__t1527t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1528t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1528t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1529t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1529t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1530t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1530t=value;
}

static inline __attribute__((always_inline)) void zero__t509t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1531t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1531t=z;
}

static inline __attribute__((always_inline)) int alloc__t501t(uint64_t bytes, char** __t1532t) {
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
  *__t1532t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t515t(char** __t1533t, uint64_t* __t1534t, uint16_t* __t1535t, uint16_t* __t1536t, uint64_t size, char** __t1537t, uint64_t* __t1538t, uint16_t* __t1539t, uint16_t* __t1540t) {
  char* buffer__unsafe_ptr=*__t1533t;
  uint64_t buffer__unsafe_size=*__t1534t;
  uint16_t buffer__unsafe_offset=*__t1535t;
  uint16_t buffer__unsafe_align=*__t1536t;
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
  *__t1533t=buffer__unsafe_ptr;
  *__t1534t=buffer__unsafe_size;
  *__t1535t=buffer__unsafe_offset;
  *__t1536t=buffer__unsafe_align;
  *__t1537t=buffer__unsafe_ptr;
  *__t1538t=buffer__unsafe_size;
  *__t1539t=buffer__unsafe_offset;
  *__t1540t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t632t(char** __t1541t, uint64_t* __t1542t, uint16_t* __t1543t, uint16_t* __t1544t, char** __t1545t, uint64_t* __t1546t, uint16_t* __t1547t, uint16_t* __t1548t, uint64_t* __t1549t) {
  char* buf__unsafe_ptr=*__t1541t;
  uint64_t buf__unsafe_size=*__t1542t;
  uint16_t buf__unsafe_offset=*__t1543t;
  uint16_t buf__unsafe_align=*__t1544t;
  uint64_t __t633t=0;
  uint64_t __t634t=0;
  uint64_t pos=0;
  __t633t=0;
  __t634t=__t633t;
  pos=__t634t;
  goto __t_return;
  __t_return:
  *__t1541t=buf__unsafe_ptr;
  *__t1542t=buf__unsafe_size;
  *__t1543t=buf__unsafe_offset;
  *__t1544t=buf__unsafe_align;
  *__t1545t=buf__unsafe_ptr;
  *__t1546t=buf__unsafe_size;
  *__t1547t=buf__unsafe_offset;
  *__t1548t=buf__unsafe_align;
  *__t1549t=pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t1550t, uint64_t* __t1551t, uint16_t* __t1552t, uint16_t* __t1553t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1550t=unsafe_ptr;
  *__t1551t=unsafe_size;
  *__t1552t=unsafe_offset;
  *__t1553t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1554t) {
  *__t1554t=to;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1555t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1555t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1556t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1556t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1557t) {
  *__t1557t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1558t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1558t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1559t) {
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
  *__t1559t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t641t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1560t, uint64_t* __t1561t, uint64_t* __t1562t, char* __t1563t) {
  goto __t_return;
  __t_return:
  *__t1560t=unsafe_ptr;
  *__t1561t=dat__pos;
  *__t1562t=dat__length;
  *__t1563t=dat__first;
}

static inline __attribute__((always_inline)) int str__t645t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1564t, uint64_t* __t1565t, uint64_t* __t1566t, char* __t1567t) {
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
  unsafe_ptr=buf__unsafe_ptr;
  nat__t512t(buf__unsafe_align,&__t646t__);
  __t647t=1;
  neq__t143t(__t646t__,__t647t,&__t648t__);
  if(__t648t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t512t(buf__unsafe_offset,&__t649t__);
  __t650t=0;
  neq__t143t(__t649t__,__t650t,&__t651t__);
  if(__t651t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t641t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t652t__unsafe_ptr,&__t652t__dat__pos,&__t652t__dat__length,&__t652t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1564t=__t652t__unsafe_ptr;
  *__t1565t=__t652t__dat__pos;
  *__t1566t=__t652t__dat__length;
  *__t1567t=__t652t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t680t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1568t, uint64_t* __t1569t, uint64_t* __t1570t, char* __t1571t) {
  uint64_t __t681t=0;
  char __t682t__=0;
  char* __t683t__=0;
  char __t684t__value=0;
  char first=0;
  char* __t685t__unsafe_ptr=0;
  uint64_t __t685t__dat__pos=0;
  uint64_t __t685t__dat__length=0;
  char __t685t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t681t=0;
  neq__t143t(length,__t681t,&__t682t__);
  if(__t682t__){
  __t_errcode=get__t597t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t683t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t683t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t684t__value,__t683t__,1);
  first=__t684t__value;
  }
  __t_errcode=str__t645t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t685t__unsafe_ptr,&__t685t__dat__pos,&__t685t__dat__length,&__t685t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1568t=__t685t__unsafe_ptr;
  *__t1569t=__t685t__dat__pos;
  *__t1570t=__t685t__dat__length;
  *__t1571t=__t685t__dat__first;
  
  return __t_errcode;
}

int str__t693t(const char* c, char** __t1572t, uint64_t* __t1573t, uint64_t* __t1574t, char* __t1575t) {
  char* __t694t__unsafe_ptr=0;
  uint64_t __t694t__unsafe_size=0;
  uint16_t __t694t__unsafe_offset=0;
  uint16_t __t694t__unsafe_align=0;
  char* __t695t__unsafe_ptr=0;
  uint64_t __t695t__unsafe_size=0;
  uint16_t __t695t__unsafe_offset=0;
  uint16_t __t695t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t696t__=0;
  uint64_t length=0;
  uint64_t __t697t=0;
  uint64_t __t698t__=0;
  uint64_t __t699t=0;
  char* __t701t__unsafe_ptr=0;
  uint64_t __t701t__dat__pos=0;
  uint64_t __t701t__dat__length=0;
  char __t701t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t557t(&__t694t__unsafe_ptr,&__t694t__unsafe_size,&__t694t__unsafe_offset,&__t694t__unsafe_align);
  __t695t__unsafe_ptr=__t694t__unsafe_ptr;
  __t695t__unsafe_size=__t694t__unsafe_size;
  __t695t__unsafe_offset=__t694t__unsafe_offset;
  __t695t__unsafe_align=__t694t__unsafe_align;
  buf__unsafe_ptr=__t695t__unsafe_ptr;
  buf__unsafe_size=__t695t__unsafe_size;
  buf__unsafe_offset=__t695t__unsafe_offset;
  buf__unsafe_align=__t695t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t696t__);
  buf__unsafe_ptr=__t696t__;
  if(c){
  length=strlen(c);
  }
  __t697t=1;
  add__t174t(length,__t697t,&__t698t__);
  buf__unsafe_size=__t698t__;
  __t699t=0;
  __t_errcode=str__t680t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t699t,length,&__t701t__unsafe_ptr,&__t701t__dat__pos,&__t701t__dat__length,&__t701t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1572t=__t701t__unsafe_ptr;
  *__t1573t=__t701t__dat__pos;
  *__t1574t=__t701t__dat__length;
  *__t1575t=__t701t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t702t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1576t) {
  goto __t_return;
  __t_return:
  *__t1576t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1577t) {
  goto __t_return;
  __t_return:
  *__t1577t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t275t(uint64_t x, uint64_t y, char* __t1578t) {
  int __t276t__=0;
  char z=0;
  is_different__t94t(x,y,&__t276t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1578t=z;
}

int copy__t771t(char** __t1579t, uint64_t* __t1580t, uint16_t* __t1581t, uint16_t* __t1582t, uint64_t* __t1583t, const char* _other, char** __t1584t, uint64_t* __t1585t, uint64_t* __t1586t, char* __t1587t) {
  char* CHARS__buf__unsafe_ptr=*__t1579t;
  uint64_t CHARS__buf__unsafe_size=*__t1580t;
  uint16_t CHARS__buf__unsafe_offset=*__t1581t;
  uint16_t CHARS__buf__unsafe_align=*__t1582t;
  uint64_t CHARS__pos=*__t1583t;
  char* __t772t__unsafe_ptr=0;
  uint64_t __t772t__dat__pos=0;
  uint64_t __t772t__dat__length=0;
  char __t772t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t773t__=0;
  uint64_t __t774t__=0;
  uint64_t next_pos=0;
  uint64_t __t775t__=0;
  char __t776t__=0;
  uint64_t __t777t=0;
  uint64_t __t778t__=0;
  uint64_t prev_pos=0;
  char* __t779t__unsafe_ptr=0;
  uint64_t __t779t__dat__pos=0;
  uint64_t __t779t__dat__length=0;
  char __t779t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t693t(_other,&__t772t__unsafe_ptr,&__t772t__dat__pos,&__t772t__dat__length,&__t772t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t772t__unsafe_ptr;
  other__dat__pos=__t772t__dat__pos;
  other__dat__length=__t772t__dat__length;
  other__dat__first=__t772t__dat__first;
  len__t702t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t773t__);
  add__t174t(CHARS__pos,__t773t__,&__t774t__);
  next_pos=__t774t__;
  len__t604t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t775t__);
  gt__t275t(next_pos,__t775t__,&__t776t__);
  if(__t776t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t777t=0;
  add__t174t(CHARS__pos,__t777t,&__t778t__);
  prev_pos=__t778t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t645t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t779t__unsafe_ptr,&__t779t__dat__pos,&__t779t__dat__length,&__t779t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1579t=CHARS__buf__unsafe_ptr;
  *__t1580t=CHARS__buf__unsafe_size;
  *__t1581t=CHARS__buf__unsafe_offset;
  *__t1582t=CHARS__buf__unsafe_align;
  *__t1583t=CHARS__pos;
  *__t1584t=__t779t__unsafe_ptr;
  *__t1585t=__t779t__dat__pos;
  *__t1586t=__t779t__dat__length;
  *__t1587t=__t779t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1588t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1588t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t1589t) {
  int __t352t__=0;
  int __t353t=0;
  int __t354t=0;
  char __t355t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t352t__);
  lt__t251t(x,y,&__t355t__);
  if(__t355t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1589t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t689t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t1590t, uint64_t* __t1591t, uint64_t* __t1592t, char* __t1593t) {
  uint64_t __t691t__=0;
  char* __t692t__unsafe_ptr=0;
  uint64_t __t692t__dat__pos=0;
  uint64_t __t692t__dat__length=0;
  char __t692t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t351t(endpos,pos,&__t691t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t680t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t691t__,&__t692t__unsafe_ptr,&__t692t__dat__pos,&__t692t__dat__length,&__t692t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1590t=__t692t__unsafe_ptr;
  *__t1591t=__t692t__dat__pos;
  *__t1592t=__t692t__dat__length;
  *__t1593t=__t692t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t804t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t805t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1498t() {
  char* __t1502t__unsafe_ptr=0;
  uint64_t __t1502t__unsafe_size=0;
  uint16_t __t1502t__unsafe_offset=0;
  uint16_t __t1502t__unsafe_align=0;
  uint64_t __t1503t=0;
  uint64_t __t1504t__=0;
  char* __t1505t__unsafe_ptr=0;
  uint64_t __t1505t__unsafe_size=0;
  uint16_t __t1505t__unsafe_offset=0;
  uint16_t __t1505t__unsafe_align=0;
  char __t1506t____t517t__=0;
  char* __t1507t__buf__unsafe_ptr=0;
  uint64_t __t1507t__buf__unsafe_size=0;
  uint16_t __t1507t__buf__unsafe_offset=0;
  uint16_t __t1507t__buf__unsafe_align=0;
  uint64_t __t1507t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint16_t CHARS__buf__unsafe_offset=0;
  uint16_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  uint64_t start=0;
  char* __t1509t__unsafe_ptr=0;
  uint64_t __t1509t__dat__pos=0;
  uint64_t __t1509t__dat__length=0;
  char __t1509t__dat__first=0;
  char* __t1511t__unsafe_ptr=0;
  uint64_t __t1511t__dat__pos=0;
  uint64_t __t1511t__dat__length=0;
  char __t1511t__dat__first=0;
  char* __t1513t__unsafe_ptr=0;
  uint64_t __t1513t__dat__pos=0;
  uint64_t __t1513t__dat__length=0;
  char __t1513t__dat__first=0;
  char* __t1515t__unsafe_ptr=0;
  uint64_t __t1515t__dat__pos=0;
  uint64_t __t1515t__dat__length=0;
  char __t1515t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  char____t_buffer____buffer__t1500t(&__t1502t__unsafe_ptr,&__t1502t__unsafe_size,&__t1502t__unsafe_offset,&__t1502t__unsafe_align);
  __t1503t=4;
  KB__t486t(__t1503t,&__t1504t__);
  __t_errcode=alloc__t515t(&__t1502t__unsafe_ptr,&__t1502t__unsafe_size,&__t1502t__unsafe_offset,&__t1502t__unsafe_align,__t1504t__,&__t1505t__unsafe_ptr,&__t1505t__unsafe_size,&__t1505t__unsafe_offset,&__t1505t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t632t(&__t1505t__unsafe_ptr,&__t1505t__unsafe_size,&__t1505t__unsafe_offset,&__t1505t__unsafe_align,&__t1507t__buf__unsafe_ptr,&__t1507t__buf__unsafe_size,&__t1507t__buf__unsafe_offset,&__t1507t__buf__unsafe_align,&__t1507t__pos);
  CHARS__buf__unsafe_ptr=__t1507t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t1507t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t1507t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t1507t__buf__unsafe_align;
  CHARS__pos=__t1507t__pos;
  start=CHARS__pos;
  __t_errcode=copy__t771t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1508t,&__t1509t__unsafe_ptr,&__t1509t__dat__pos,&__t1509t__dat__length,&__t1509t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t771t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1510t,&__t1511t__unsafe_ptr,&__t1511t__dat__pos,&__t1511t__dat__length,&__t1511t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t771t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1512t,&__t1513t__unsafe_ptr,&__t1513t__dat__pos,&__t1513t__dat__length,&__t1513t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t689t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,CHARS__pos,start,&__t1515t__unsafe_ptr,&__t1515t__dat__pos,&__t1515t__dat__length,&__t1515t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t804t(__t1515t__unsafe_ptr,__t1515t__dat__pos,__t1515t__dat__length,__t1515t__dat__first);
  
  __t_failure:exists__t442t(__t1505t__unsafe_ptr,&__t1506t____t517t__);
  if(__t1506t____t517t__){
  free__t508t(&__t1505t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1498t();return 0;}