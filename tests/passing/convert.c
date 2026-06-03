#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1173t="-";
const char* const __t1557t="123";
const char* const __t1267t=".";
const char* const __t1176t="+";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t680t(char** __t1560t, uint64_t* __t1561t, uint16_t* __t1562t, uint16_t* __t1563t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1560t=unsafe_ptr;
  *__t1561t=unsafe_size;
  *__t1562t=unsafe_offset;
  *__t1563t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1564t) {
  *__t1564t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1565t) {
  int value=0;
  *__t1565t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1566t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1566t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1567t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1567t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1568t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1568t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1569t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1569t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1570t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1570t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1571t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1571t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1572t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1572t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1573t) {
  *__t1573t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1574t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1574t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1575t) {
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
  *__t1575t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t688t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1576t, uint64_t* __t1577t, uint64_t* __t1578t, char* __t1579t) {
  goto __t_return;
  __t_return:
  *__t1576t=unsafe_ptr;
  *__t1577t=dat__pos;
  *__t1578t=dat__length;
  *__t1579t=dat__first;
}

static inline __attribute__((always_inline)) int str__t692t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1580t, uint64_t* __t1581t, uint64_t* __t1582t, char* __t1583t) {
  char* unsafe_ptr=0;
  uint64_t __t693t__=0;
  uint64_t __t694t=0;
  char __t695t__=0;
  uint64_t __t696t__=0;
  uint64_t __t697t=0;
  char __t698t__=0;
  char* __t699t__unsafe_ptr=0;
  uint64_t __t699t__dat__pos=0;
  uint64_t __t699t__dat__length=0;
  char __t699t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t507t(buf__unsafe_align,&__t693t__);
  __t694t=1;
  neq__t144t(__t693t__,__t694t,&__t695t__);
  if(__t695t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t696t__);
  __t697t=0;
  neq__t144t(__t696t__,__t697t,&__t698t__);
  if(__t698t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t688t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t699t__unsafe_ptr,&__t699t__dat__pos,&__t699t__dat__length,&__t699t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1580t=__t699t__unsafe_ptr;
  *__t1581t=__t699t__dat__pos;
  *__t1582t=__t699t__dat__length;
  *__t1583t=__t699t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t727t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1584t, uint64_t* __t1585t, uint64_t* __t1586t, char* __t1587t) {
  uint64_t __t728t=0;
  char __t729t__=0;
  char* __t730t__=0;
  char __t731t__value=0;
  char first=0;
  char* __t732t__unsafe_ptr=0;
  uint64_t __t732t__dat__pos=0;
  uint64_t __t732t__dat__length=0;
  char __t732t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t728t=0;
  neq__t144t(length,__t728t,&__t729t__);
  if(__t729t__){
  __t_errcode=get__t640t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t730t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t730t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t731t__value,__t730t__,1);
  first=__t731t__value;
  }
  __t_errcode=str__t692t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t732t__unsafe_ptr,&__t732t__dat__pos,&__t732t__dat__length,&__t732t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1584t=__t732t__unsafe_ptr;
  *__t1585t=__t732t__dat__pos;
  *__t1586t=__t732t__dat__length;
  *__t1587t=__t732t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t750t(const char* c, char** __t1588t, uint64_t* __t1589t, uint64_t* __t1590t, char* __t1591t) {
  char* __t751t__unsafe_ptr=0;
  uint64_t __t751t__unsafe_size=0;
  uint16_t __t751t__unsafe_offset=0;
  uint16_t __t751t__unsafe_align=0;
  char* __t752t__unsafe_ptr=0;
  uint64_t __t752t__unsafe_size=0;
  uint16_t __t752t__unsafe_offset=0;
  uint16_t __t752t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t753t__=0;
  uint64_t length=0;
  uint64_t __t754t=0;
  uint64_t __t755t__=0;
  uint64_t __t756t=0;
  char* __t758t__unsafe_ptr=0;
  uint64_t __t758t__dat__pos=0;
  uint64_t __t758t__dat__length=0;
  char __t758t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t680t(&__t751t__unsafe_ptr,&__t751t__unsafe_size,&__t751t__unsafe_offset,&__t751t__unsafe_align);
  __t752t__unsafe_ptr=__t751t__unsafe_ptr;
  __t752t__unsafe_size=__t751t__unsafe_size;
  __t752t__unsafe_offset=__t751t__unsafe_offset;
  __t752t__unsafe_align=__t751t__unsafe_align;
  buf__unsafe_ptr=__t752t__unsafe_ptr;
  buf__unsafe_size=__t752t__unsafe_size;
  buf__unsafe_offset=__t752t__unsafe_offset;
  buf__unsafe_align=__t752t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t753t__);
  buf__unsafe_ptr=__t753t__;
  if(c){
  length=strlen(c);
  }
  __t754t=1;
  add__t175t(length,__t754t,&__t755t__);
  buf__unsafe_size=__t755t__;
  __t756t=0;
  __t_errcode=str__t727t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t756t,length,&__t758t__unsafe_ptr,&__t758t__dat__pos,&__t758t__dat__length,&__t758t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1588t=__t758t__unsafe_ptr;
  *__t1589t=__t758t__dat__pos;
  *__t1590t=__t758t__dat__length;
  *__t1591t=__t758t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t759t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1592t) {
  goto __t_return;
  __t_return:
  *__t1592t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1593t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1593t=z;
}

static inline __attribute__((always_inline)) void get__t932t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1594t) {
  uint64_t __t933t__=0;
  char* __t934t__=0;
  add__t175t(s__dat__pos,i,&__t933t__);
  add__t505t(s__unsafe_ptr,__t933t__,&__t934t__);
  goto __t_return;
  __t_return:
  *__t1594t=__t934t__;
}

static inline __attribute__((always_inline)) void char__t761t(const char* s, char* __t1595t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t1595t=c;
}

static inline __attribute__((always_inline)) void eq__t762t(char x, char y, char* __t1596t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1596t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1597t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1597t=z;
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1598t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1598t=z;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1599t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1599t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t1600t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1600t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1601t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1601t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t1602t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t1602t=z;
}

static inline __attribute__((always_inline)) int float__t1430t(const char* _s, double* __t1603t) {
  char* __t1431t__unsafe_ptr=0;
  uint64_t __t1431t__dat__pos=0;
  uint64_t __t1431t__dat__length=0;
  char __t1431t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  uint64_t __t1432t=0;
  uint64_t __t1433t__=0;
  char __t1434t__=0;
  double __t1435t=0;
  double __t1436t=0;
  double number=0;
  uint64_t __t1437t=0;
  uint64_t __t1438t=0;
  uint64_t i=0;
  uint64_t __t1439t=0;
  uint64_t __t1440t__=0;
  char __t1441t__=0;
  uint64_t __t1442t=0;
  uint64_t __t1443t=0;
  uint64_t __t1444t=0;
  char* __t1445t__=0;
  char __t1446t__value=0;
  char __t1447t__=0;
  char __t1448t__=0;
  char negative=0;
  char* __t1453t__=0;
  char __t1454t__value=0;
  char __t1455t__=0;
  char __t1456t__=0;
  uint64_t __t1457t=0;
  uint64_t __t1458t__=0;
  uint64_t __t1459t__=0;
  char __t1460t__=0;
  uint64_t __t1449t=0;
  uint64_t __t1450t__=0;
  uint64_t __t1451t__=0;
  char __t1452t__=0;
  uint64_t __t1461t__=0;
  char __t1462t__=0;
  char* __t1463t__=0;
  char __t1464t__value=0;
  char c=0;
  char is_digit=0;
  double digit=0;
  char __t1465t__=0;
  char __t1466t__=0;
  char is_dot=0;
  uint64_t __t1467t=0;
  uint64_t __t1468t__=0;
  char __t1469t__=0;
  double __t1470t=0;
  double __t1471t__=0;
  double __t1472t__=0;
  uint64_t __t1473t=0;
  uint64_t __t1474t__=0;
  uint64_t __t1475t__=0;
  char __t1476t__=0;
  double __t1477t=0;
  double __t1478t=0;
  double base=0;
  uint64_t __t1479t__=0;
  char __t1480t__=0;
  char* __t1481t__=0;
  char __t1482t__value=0;
  char d=0;
  char is_decimal_digit=0;
  double decimal_digit=0;
  char __t1483t__=0;
  double __t1484t__=0;
  double __t1485t__=0;
  double __t1486t=0;
  double __t1487t__=0;
  uint64_t __t1488t=0;
  uint64_t __t1489t__=0;
  double __t1490t=0;
  double __t1491t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t750t(_s,&__t1431t__unsafe_ptr,&__t1431t__dat__pos,&__t1431t__dat__length,&__t1431t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1431t__unsafe_ptr;
  s__dat__pos=__t1431t__dat__pos;
  s__dat__length=__t1431t__dat__length;
  s__dat__first=__t1431t__dat__first;
  __t1432t=0;
  len__t759t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1433t__);
  eq__t120t(__t1432t,__t1433t__,&__t1434t__);
  if(__t1434t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1435t=0.0;
  __t1436t=__t1435t;
  number=__t1436t;
  __t1437t=0;
  __t1438t=__t1437t;
  i=__t1438t;
  __t1439t=0;
  len__t759t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1440t__);
  eq__t120t(__t1439t,__t1440t__,&__t1441t__);
  if(__t1441t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1442t=0;
  __t1443t=__t1442t;
  i=__t1443t;
  __t1444t=0;
  get__t932t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,__t1444t,&__t1445t__);
  if(!__t1445t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1446t__value,__t1445t__,1);
  char__t761t(__t1173t,&__t1447t__);
  eq__t762t(__t1446t__value,__t1447t__,&__t1448t__);
  negative=__t1448t__;
  if(negative){
  __t1449t=1;
  add__t175t(i,__t1449t,&__t1450t__);
  i=__t1450t__;
  len__t759t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1451t__);
  eq__t120t(i,__t1451t__,&__t1452t__);
  if(__t1452t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  else{
  get__t932t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1453t__);
  if(!__t1453t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1454t__value,__t1453t__,1);
  char__t761t(__t1176t,&__t1455t__);
  eq__t762t(__t1454t__value,__t1455t__,&__t1456t__);
  if(__t1456t__){
  __t1457t=1;
  add__t175t(i,__t1457t,&__t1458t__);
  i=__t1458t__;
  len__t759t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1459t__);
  eq__t120t(i,__t1459t__,&__t1460t__);
  if(__t1460t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  }
  while(1){
  len__t759t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1461t__);
  lt__t252t(i,__t1461t__,&__t1462t__);
  if(!__t1462t__){
  break;
  }
  get__t932t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1463t__);
  if(!__t1463t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1464t__value,__t1463t__,1);
  c=__t1464t__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  char__t761t(__t1267t,&__t1465t__);
  eq__t762t(c,__t1465t__,&__t1466t__);
  is_dot=__t1466t__;
  if(is_dot){
  __t1467t=1;
  add__t175t(i,__t1467t,&__t1468t__);
  i=__t1468t__;
  break;
  }
  not__t28t(is_digit,&__t1469t__);
  if(__t1469t__){
  __t_errcode=33;
  goto __t_failure;
  }
  __t1470t=10.0;
  mul__t177t(number,__t1470t,&__t1471t__);
  add__t153t(__t1471t__,digit,&__t1472t__);
  number=__t1472t__;
  __t1473t=1;
  add__t175t(i,__t1473t,&__t1474t__);
  i=__t1474t__;
  }
  if(is_dot){
  len__t759t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1475t__);
  eq__t120t(i,__t1475t__,&__t1476t__);
  if(__t1476t__){
  __t_errcode=34;
  goto __t_failure;
  }
  __t1477t=0.1;
  __t1478t=__t1477t;
  base=__t1478t;
  while(1){
  len__t759t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1479t__);
  lt__t252t(i,__t1479t__,&__t1480t__);
  if(!__t1480t__){
  break;
  }
  get__t932t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1481t__);
  if(!__t1481t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1482t__value,__t1481t__,1);
  d=__t1482t__value;
  is_decimal_digit=d>='0'&&d<='9';
  decimal_digit=d-'0';
  not__t28t(is_decimal_digit,&__t1483t__);
  if(__t1483t__){
  __t_errcode=33;
  goto __t_failure;
  }
  mul__t177t(decimal_digit,base,&__t1484t__);
  add__t153t(number,__t1484t__,&__t1485t__);
  number=__t1485t__;
  __t1486t=0.1;
  mul__t177t(base,__t1486t,&__t1487t__);
  base=__t1487t__;
  __t1488t=1;
  add__t175t(i,__t1488t,&__t1489t__);
  i=__t1489t__;
  }
  }
  if(negative){
  __t1490t=0.0;
  sub__t326t(__t1490t,number,&__t1491t__);
  number=__t1491t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1603t=number;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1555t() {
  double __t1558t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=float__t1430t(__t1557t,&__t1558t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t385t(__t1558t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1555t();return 0;}