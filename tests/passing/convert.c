#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1230t="-";
const char* const __t1324t=".";
const char* const __t1233t="+";
const char* const __t382t="\n";
const char* const __t1614t="123";
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
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t763t(char** __t1617t, uint64_t* __t1618t, uint16_t* __t1619t, uint16_t* __t1620t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1617t=unsafe_ptr;
  *__t1618t=unsafe_size;
  *__t1619t=unsafe_offset;
  *__t1620t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1621t) {
  *__t1621t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1622t) {
  int value=0;
  *__t1622t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1623t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1623t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1624t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1624t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1625t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1625t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1626t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1626t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1627t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1627t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1628t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1628t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1629t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1629t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1630t) {
  *__t1630t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1631t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1631t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1632t) {
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
  *__t1632t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t783t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1633t, uint64_t* __t1634t, uint64_t* __t1635t, char* __t1636t) {
  goto __t_return;
  __t_return:
  *__t1633t=unsafe_ptr;
  *__t1634t=dat__pos;
  *__t1635t=dat__length;
  *__t1636t=dat__first;
}

static inline __attribute__((always_inline)) int str__t787t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1637t, uint64_t* __t1638t, uint64_t* __t1639t, char* __t1640t) {
  char* unsafe_ptr=0;
  uint64_t __t788t__=0;
  uint64_t __t789t=0;
  char __t790t__=0;
  uint64_t __t791t__=0;
  uint64_t __t792t=0;
  char __t793t__=0;
  char* __t794t__unsafe_ptr=0;
  uint64_t __t794t__dat__pos=0;
  uint64_t __t794t__dat__length=0;
  char __t794t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t507t(buf__unsafe_align,&__t788t__);
  __t789t=1;
  neq__t144t(__t788t__,__t789t,&__t790t__);
  if(__t790t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t791t__);
  __t792t=0;
  neq__t144t(__t791t__,__t792t,&__t793t__);
  if(__t793t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t783t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t794t__unsafe_ptr,&__t794t__dat__pos,&__t794t__dat__length,&__t794t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1637t=__t794t__unsafe_ptr;
  *__t1638t=__t794t__dat__pos;
  *__t1639t=__t794t__dat__length;
  *__t1640t=__t794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t822t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1641t, uint64_t* __t1642t, uint64_t* __t1643t, char* __t1644t) {
  uint64_t __t823t=0;
  char __t824t__=0;
  char* __t825t__=0;
  char __t826t__value=0;
  char first=0;
  char* __t827t__unsafe_ptr=0;
  uint64_t __t827t__dat__pos=0;
  uint64_t __t827t__dat__length=0;
  char __t827t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t823t=0;
  neq__t144t(length,__t823t,&__t824t__);
  if(__t824t__){
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t825t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t825t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t826t__value,__t825t__,1);
  first=__t826t__value;
  }
  __t_errcode=str__t787t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t827t__unsafe_ptr,&__t827t__dat__pos,&__t827t__dat__length,&__t827t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1641t=__t827t__unsafe_ptr;
  *__t1642t=__t827t__dat__pos;
  *__t1643t=__t827t__dat__length;
  *__t1644t=__t827t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t845t(const char* c, char** __t1645t, uint64_t* __t1646t, uint64_t* __t1647t, char* __t1648t) {
  char* __t846t__unsafe_ptr=0;
  uint64_t __t846t__unsafe_size=0;
  uint16_t __t846t__unsafe_offset=0;
  uint16_t __t846t__unsafe_align=0;
  char* __t847t__unsafe_ptr=0;
  uint64_t __t847t__unsafe_size=0;
  uint16_t __t847t__unsafe_offset=0;
  uint16_t __t847t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t848t__=0;
  uint64_t length=0;
  uint64_t __t849t=0;
  uint64_t __t850t__=0;
  uint64_t __t851t=0;
  char* __t853t__unsafe_ptr=0;
  uint64_t __t853t__dat__pos=0;
  uint64_t __t853t__dat__length=0;
  char __t853t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t763t(&__t846t__unsafe_ptr,&__t846t__unsafe_size,&__t846t__unsafe_offset,&__t846t__unsafe_align);
  __t847t__unsafe_ptr=__t846t__unsafe_ptr;
  __t847t__unsafe_size=__t846t__unsafe_size;
  __t847t__unsafe_offset=__t846t__unsafe_offset;
  __t847t__unsafe_align=__t846t__unsafe_align;
  buf__unsafe_ptr=__t847t__unsafe_ptr;
  buf__unsafe_size=__t847t__unsafe_size;
  buf__unsafe_offset=__t847t__unsafe_offset;
  buf__unsafe_align=__t847t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t848t__);
  buf__unsafe_ptr=__t848t__;
  if(c){
  length=strlen(c);
  }
  __t849t=1;
  add__t175t(length,__t849t,&__t850t__);
  buf__unsafe_size=__t850t__;
  __t851t=0;
  __t_errcode=str__t822t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t851t,length,&__t853t__unsafe_ptr,&__t853t__dat__pos,&__t853t__dat__length,&__t853t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1645t=__t853t__unsafe_ptr;
  *__t1646t=__t853t__dat__pos;
  *__t1647t=__t853t__dat__length;
  *__t1648t=__t853t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t854t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1649t) {
  goto __t_return;
  __t_return:
  *__t1649t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1650t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1650t=z;
}

static inline __attribute__((always_inline)) void get__t989t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1651t) {
  uint64_t __t990t__=0;
  char* __t991t__=0;
  add__t175t(s__dat__pos,i,&__t990t__);
  add__t505t(s__unsafe_ptr,__t990t__,&__t991t__);
  goto __t_return;
  __t_return:
  *__t1651t=__t991t__;
}

static inline __attribute__((always_inline)) void char__t856t(const char* s, char* __t1652t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t1652t=c;
}

static inline __attribute__((always_inline)) void eq__t857t(char x, char y, char* __t1653t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1653t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1654t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1654t=z;
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1655t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1655t=z;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1656t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1656t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t1657t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1657t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1658t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1658t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t1659t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t1659t=z;
}

static inline __attribute__((always_inline)) int float__t1487t(const char* _s, double* __t1660t) {
  char* __t1488t__unsafe_ptr=0;
  uint64_t __t1488t__dat__pos=0;
  uint64_t __t1488t__dat__length=0;
  char __t1488t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  uint64_t __t1489t=0;
  uint64_t __t1490t__=0;
  char __t1491t__=0;
  double __t1492t=0;
  double __t1493t=0;
  double number=0;
  uint64_t __t1494t=0;
  uint64_t __t1495t=0;
  uint64_t i=0;
  uint64_t __t1496t=0;
  uint64_t __t1497t__=0;
  char __t1498t__=0;
  uint64_t __t1499t=0;
  uint64_t __t1500t=0;
  uint64_t __t1501t=0;
  char* __t1502t__=0;
  char __t1503t__value=0;
  char __t1504t__=0;
  char __t1505t__=0;
  char negative=0;
  char* __t1510t__=0;
  char __t1511t__value=0;
  char __t1512t__=0;
  char __t1513t__=0;
  uint64_t __t1514t=0;
  uint64_t __t1515t__=0;
  uint64_t __t1516t__=0;
  char __t1517t__=0;
  uint64_t __t1506t=0;
  uint64_t __t1507t__=0;
  uint64_t __t1508t__=0;
  char __t1509t__=0;
  uint64_t __t1518t__=0;
  char __t1519t__=0;
  char* __t1520t__=0;
  char __t1521t__value=0;
  char c=0;
  char is_digit=0;
  double digit=0;
  char __t1522t__=0;
  char __t1523t__=0;
  char is_dot=0;
  uint64_t __t1524t=0;
  uint64_t __t1525t__=0;
  char __t1526t__=0;
  double __t1527t=0;
  double __t1528t__=0;
  double __t1529t__=0;
  uint64_t __t1530t=0;
  uint64_t __t1531t__=0;
  uint64_t __t1532t__=0;
  char __t1533t__=0;
  double __t1534t=0;
  double __t1535t=0;
  double base=0;
  uint64_t __t1536t__=0;
  char __t1537t__=0;
  char* __t1538t__=0;
  char __t1539t__value=0;
  char d=0;
  char is_decimal_digit=0;
  double decimal_digit=0;
  char __t1540t__=0;
  double __t1541t__=0;
  double __t1542t__=0;
  double __t1543t=0;
  double __t1544t__=0;
  uint64_t __t1545t=0;
  uint64_t __t1546t__=0;
  double __t1547t=0;
  double __t1548t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t845t(_s,&__t1488t__unsafe_ptr,&__t1488t__dat__pos,&__t1488t__dat__length,&__t1488t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1488t__unsafe_ptr;
  s__dat__pos=__t1488t__dat__pos;
  s__dat__length=__t1488t__dat__length;
  s__dat__first=__t1488t__dat__first;
  __t1489t=0;
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1490t__);
  eq__t120t(__t1489t,__t1490t__,&__t1491t__);
  if(__t1491t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1492t=0.0;
  __t1493t=__t1492t;
  number=__t1493t;
  __t1494t=0;
  __t1495t=__t1494t;
  i=__t1495t;
  __t1496t=0;
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1497t__);
  eq__t120t(__t1496t,__t1497t__,&__t1498t__);
  if(__t1498t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1499t=0;
  __t1500t=__t1499t;
  i=__t1500t;
  __t1501t=0;
  get__t989t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,__t1501t,&__t1502t__);
  if(!__t1502t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1503t__value,__t1502t__,1);
  char__t856t(__t1230t,&__t1504t__);
  eq__t857t(__t1503t__value,__t1504t__,&__t1505t__);
  negative=__t1505t__;
  if(negative){
  __t1506t=1;
  add__t175t(i,__t1506t,&__t1507t__);
  i=__t1507t__;
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1508t__);
  eq__t120t(i,__t1508t__,&__t1509t__);
  if(__t1509t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  else{
  get__t989t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1510t__);
  if(!__t1510t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1511t__value,__t1510t__,1);
  char__t856t(__t1233t,&__t1512t__);
  eq__t857t(__t1511t__value,__t1512t__,&__t1513t__);
  if(__t1513t__){
  __t1514t=1;
  add__t175t(i,__t1514t,&__t1515t__);
  i=__t1515t__;
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1516t__);
  eq__t120t(i,__t1516t__,&__t1517t__);
  if(__t1517t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  }
  while(1){
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1518t__);
  lt__t252t(i,__t1518t__,&__t1519t__);
  if(!__t1519t__){
  break;
  }
  get__t989t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1520t__);
  if(!__t1520t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1521t__value,__t1520t__,1);
  c=__t1521t__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  char__t856t(__t1324t,&__t1522t__);
  eq__t857t(c,__t1522t__,&__t1523t__);
  is_dot=__t1523t__;
  if(is_dot){
  __t1524t=1;
  add__t175t(i,__t1524t,&__t1525t__);
  i=__t1525t__;
  break;
  }
  not__t28t(is_digit,&__t1526t__);
  if(__t1526t__){
  __t_errcode=33;
  goto __t_failure;
  }
  __t1527t=10.0;
  mul__t177t(number,__t1527t,&__t1528t__);
  add__t153t(__t1528t__,digit,&__t1529t__);
  number=__t1529t__;
  __t1530t=1;
  add__t175t(i,__t1530t,&__t1531t__);
  i=__t1531t__;
  }
  if(is_dot){
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1532t__);
  eq__t120t(i,__t1532t__,&__t1533t__);
  if(__t1533t__){
  __t_errcode=34;
  goto __t_failure;
  }
  __t1534t=0.1;
  __t1535t=__t1534t;
  base=__t1535t;
  while(1){
  len__t854t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1536t__);
  lt__t252t(i,__t1536t__,&__t1537t__);
  if(!__t1537t__){
  break;
  }
  get__t989t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1538t__);
  if(!__t1538t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1539t__value,__t1538t__,1);
  d=__t1539t__value;
  is_decimal_digit=d>='0'&&d<='9';
  decimal_digit=d-'0';
  not__t28t(is_decimal_digit,&__t1540t__);
  if(__t1540t__){
  __t_errcode=33;
  goto __t_failure;
  }
  mul__t177t(decimal_digit,base,&__t1541t__);
  add__t153t(number,__t1541t__,&__t1542t__);
  number=__t1542t__;
  __t1543t=0.1;
  mul__t177t(base,__t1543t,&__t1544t__);
  base=__t1544t__;
  __t1545t=1;
  add__t175t(i,__t1545t,&__t1546t__);
  i=__t1546t__;
  }
  }
  if(negative){
  __t1547t=0.0;
  sub__t326t(__t1547t,number,&__t1548t__);
  number=__t1548t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1660t=number;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1612t() {
  double __t1615t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=float__t1487t(__t1614t,&__t1615t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t385t(__t1615t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1612t();return 0;}