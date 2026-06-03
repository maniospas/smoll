#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1553t="123";
const char* const __t1172t="+";
const char* const __t1263t=".";
const char* const __t1169t="-";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t676t(char** __t1556t, uint64_t* __t1557t, uint16_t* __t1558t, uint16_t* __t1559t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1556t=unsafe_ptr;
  *__t1557t=unsafe_size;
  *__t1558t=unsafe_offset;
  *__t1559t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1560t) {
  *__t1560t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1561t) {
  int value=0;
  *__t1561t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1562t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1562t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1563t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1563t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1564t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1564t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1565t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1565t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1566t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1566t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1567t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1567t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1568t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1568t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1569t) {
  *__t1569t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1570t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1570t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t636t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1571t) {
  char __t637t__=0;
  uint64_t __t638t__=0;
  uint64_t __t639t__=0;
  uint64_t __t640t__=0;
  uint64_t __t641t__=0;
  char* __t642t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t637t__);
  if(__t637t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t638t__);
  mul__t199t(i,__t638t__,&__t639t__);
  nat__t507t(buffer__unsafe_offset,&__t640t__);
  add__t175t(__t639t__,__t640t__,&__t641t__);
  add__t505t(buffer__unsafe_ptr,__t641t__,&__t642t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1571t=__t642t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t684t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1572t, uint64_t* __t1573t, uint64_t* __t1574t, char* __t1575t) {
  goto __t_return;
  __t_return:
  *__t1572t=unsafe_ptr;
  *__t1573t=dat__pos;
  *__t1574t=dat__length;
  *__t1575t=dat__first;
}

static inline __attribute__((always_inline)) int str__t688t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1576t, uint64_t* __t1577t, uint64_t* __t1578t, char* __t1579t) {
  char* unsafe_ptr=0;
  uint64_t __t689t__=0;
  uint64_t __t690t=0;
  char __t691t__=0;
  uint64_t __t692t__=0;
  uint64_t __t693t=0;
  char __t694t__=0;
  char* __t695t__unsafe_ptr=0;
  uint64_t __t695t__dat__pos=0;
  uint64_t __t695t__dat__length=0;
  char __t695t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t507t(buf__unsafe_align,&__t689t__);
  __t690t=1;
  neq__t144t(__t689t__,__t690t,&__t691t__);
  if(__t691t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t692t__);
  __t693t=0;
  neq__t144t(__t692t__,__t693t,&__t694t__);
  if(__t694t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t684t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t695t__unsafe_ptr,&__t695t__dat__pos,&__t695t__dat__length,&__t695t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1576t=__t695t__unsafe_ptr;
  *__t1577t=__t695t__dat__pos;
  *__t1578t=__t695t__dat__length;
  *__t1579t=__t695t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t723t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1580t, uint64_t* __t1581t, uint64_t* __t1582t, char* __t1583t) {
  uint64_t __t724t=0;
  char __t725t__=0;
  char* __t726t__=0;
  char __t727t__value=0;
  char first=0;
  char* __t728t__unsafe_ptr=0;
  uint64_t __t728t__dat__pos=0;
  uint64_t __t728t__dat__length=0;
  char __t728t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t724t=0;
  neq__t144t(length,__t724t,&__t725t__);
  if(__t725t__){
  __t_errcode=get__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t726t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t726t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t727t__value,__t726t__,1);
  first=__t727t__value;
  }
  __t_errcode=str__t688t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t728t__unsafe_ptr,&__t728t__dat__pos,&__t728t__dat__length,&__t728t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1580t=__t728t__unsafe_ptr;
  *__t1581t=__t728t__dat__pos;
  *__t1582t=__t728t__dat__length;
  *__t1583t=__t728t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t746t(const char* c, char** __t1584t, uint64_t* __t1585t, uint64_t* __t1586t, char* __t1587t) {
  char* __t747t__unsafe_ptr=0;
  uint64_t __t747t__unsafe_size=0;
  uint16_t __t747t__unsafe_offset=0;
  uint16_t __t747t__unsafe_align=0;
  char* __t748t__unsafe_ptr=0;
  uint64_t __t748t__unsafe_size=0;
  uint16_t __t748t__unsafe_offset=0;
  uint16_t __t748t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t749t__=0;
  uint64_t length=0;
  uint64_t __t750t=0;
  uint64_t __t751t__=0;
  uint64_t __t752t=0;
  char* __t754t__unsafe_ptr=0;
  uint64_t __t754t__dat__pos=0;
  uint64_t __t754t__dat__length=0;
  char __t754t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t676t(&__t747t__unsafe_ptr,&__t747t__unsafe_size,&__t747t__unsafe_offset,&__t747t__unsafe_align);
  __t748t__unsafe_ptr=__t747t__unsafe_ptr;
  __t748t__unsafe_size=__t747t__unsafe_size;
  __t748t__unsafe_offset=__t747t__unsafe_offset;
  __t748t__unsafe_align=__t747t__unsafe_align;
  buf__unsafe_ptr=__t748t__unsafe_ptr;
  buf__unsafe_size=__t748t__unsafe_size;
  buf__unsafe_offset=__t748t__unsafe_offset;
  buf__unsafe_align=__t748t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t749t__);
  buf__unsafe_ptr=__t749t__;
  if(c){
  length=strlen(c);
  }
  __t750t=1;
  add__t175t(length,__t750t,&__t751t__);
  buf__unsafe_size=__t751t__;
  __t752t=0;
  __t_errcode=str__t723t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t752t,length,&__t754t__unsafe_ptr,&__t754t__dat__pos,&__t754t__dat__length,&__t754t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1584t=__t754t__unsafe_ptr;
  *__t1585t=__t754t__dat__pos;
  *__t1586t=__t754t__dat__length;
  *__t1587t=__t754t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t755t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1588t) {
  goto __t_return;
  __t_return:
  *__t1588t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1589t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1589t=z;
}

static inline __attribute__((always_inline)) void get__t928t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1590t) {
  uint64_t __t929t__=0;
  char* __t930t__=0;
  add__t175t(s__dat__pos,i,&__t929t__);
  add__t505t(s__unsafe_ptr,__t929t__,&__t930t__);
  goto __t_return;
  __t_return:
  *__t1590t=__t930t__;
}

static inline __attribute__((always_inline)) void char__t757t(const char* s, char* __t1591t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t1591t=c;
}

static inline __attribute__((always_inline)) void eq__t758t(char x, char y, char* __t1592t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1592t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1593t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1593t=z;
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1594t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1594t=z;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1595t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1595t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t1596t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1596t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1597t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1597t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t1598t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t1598t=z;
}

static inline __attribute__((always_inline)) int float__t1426t(const char* _s, double* __t1599t) {
  char* __t1427t__unsafe_ptr=0;
  uint64_t __t1427t__dat__pos=0;
  uint64_t __t1427t__dat__length=0;
  char __t1427t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  uint64_t __t1428t=0;
  uint64_t __t1429t__=0;
  char __t1430t__=0;
  double __t1431t=0;
  double __t1432t=0;
  double number=0;
  uint64_t __t1433t=0;
  uint64_t __t1434t=0;
  uint64_t i=0;
  uint64_t __t1435t=0;
  uint64_t __t1436t__=0;
  char __t1437t__=0;
  uint64_t __t1438t=0;
  uint64_t __t1439t=0;
  uint64_t __t1440t=0;
  char* __t1441t__=0;
  char __t1442t__value=0;
  char __t1443t__=0;
  char __t1444t__=0;
  char negative=0;
  char* __t1449t__=0;
  char __t1450t__value=0;
  char __t1451t__=0;
  char __t1452t__=0;
  uint64_t __t1453t=0;
  uint64_t __t1454t__=0;
  uint64_t __t1455t__=0;
  char __t1456t__=0;
  uint64_t __t1445t=0;
  uint64_t __t1446t__=0;
  uint64_t __t1447t__=0;
  char __t1448t__=0;
  uint64_t __t1457t__=0;
  char __t1458t__=0;
  char* __t1459t__=0;
  char __t1460t__value=0;
  char c=0;
  char is_digit=0;
  double digit=0;
  char __t1461t__=0;
  char __t1462t__=0;
  char is_dot=0;
  uint64_t __t1463t=0;
  uint64_t __t1464t__=0;
  char __t1465t__=0;
  double __t1466t=0;
  double __t1467t__=0;
  double __t1468t__=0;
  uint64_t __t1469t=0;
  uint64_t __t1470t__=0;
  uint64_t __t1471t__=0;
  char __t1472t__=0;
  double __t1473t=0;
  double __t1474t=0;
  double base=0;
  uint64_t __t1475t__=0;
  char __t1476t__=0;
  char* __t1477t__=0;
  char __t1478t__value=0;
  char d=0;
  char is_decimal_digit=0;
  double decimal_digit=0;
  char __t1479t__=0;
  double __t1480t__=0;
  double __t1481t__=0;
  double __t1482t=0;
  double __t1483t__=0;
  uint64_t __t1484t=0;
  uint64_t __t1485t__=0;
  double __t1486t=0;
  double __t1487t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t746t(_s,&__t1427t__unsafe_ptr,&__t1427t__dat__pos,&__t1427t__dat__length,&__t1427t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1427t__unsafe_ptr;
  s__dat__pos=__t1427t__dat__pos;
  s__dat__length=__t1427t__dat__length;
  s__dat__first=__t1427t__dat__first;
  __t1428t=0;
  len__t755t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1429t__);
  eq__t120t(__t1428t,__t1429t__,&__t1430t__);
  if(__t1430t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1431t=0.0;
  __t1432t=__t1431t;
  number=__t1432t;
  __t1433t=0;
  __t1434t=__t1433t;
  i=__t1434t;
  __t1435t=0;
  len__t755t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1436t__);
  eq__t120t(__t1435t,__t1436t__,&__t1437t__);
  if(__t1437t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1438t=0;
  __t1439t=__t1438t;
  i=__t1439t;
  __t1440t=0;
  get__t928t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,__t1440t,&__t1441t__);
  if(!__t1441t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1442t__value,__t1441t__,1);
  char__t757t(__t1169t,&__t1443t__);
  eq__t758t(__t1442t__value,__t1443t__,&__t1444t__);
  negative=__t1444t__;
  if(negative){
  __t1445t=1;
  add__t175t(i,__t1445t,&__t1446t__);
  i=__t1446t__;
  len__t755t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1447t__);
  eq__t120t(i,__t1447t__,&__t1448t__);
  if(__t1448t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  else{
  get__t928t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1449t__);
  if(!__t1449t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1450t__value,__t1449t__,1);
  char__t757t(__t1172t,&__t1451t__);
  eq__t758t(__t1450t__value,__t1451t__,&__t1452t__);
  if(__t1452t__){
  __t1453t=1;
  add__t175t(i,__t1453t,&__t1454t__);
  i=__t1454t__;
  len__t755t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1455t__);
  eq__t120t(i,__t1455t__,&__t1456t__);
  if(__t1456t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  }
  while(1){
  len__t755t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1457t__);
  lt__t252t(i,__t1457t__,&__t1458t__);
  if(!__t1458t__){
  break;
  }
  get__t928t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1459t__);
  if(!__t1459t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1460t__value,__t1459t__,1);
  c=__t1460t__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  char__t757t(__t1263t,&__t1461t__);
  eq__t758t(c,__t1461t__,&__t1462t__);
  is_dot=__t1462t__;
  if(is_dot){
  __t1463t=1;
  add__t175t(i,__t1463t,&__t1464t__);
  i=__t1464t__;
  break;
  }
  not__t28t(is_digit,&__t1465t__);
  if(__t1465t__){
  __t_errcode=33;
  goto __t_failure;
  }
  __t1466t=10.0;
  mul__t177t(number,__t1466t,&__t1467t__);
  add__t153t(__t1467t__,digit,&__t1468t__);
  number=__t1468t__;
  __t1469t=1;
  add__t175t(i,__t1469t,&__t1470t__);
  i=__t1470t__;
  }
  if(is_dot){
  len__t755t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1471t__);
  eq__t120t(i,__t1471t__,&__t1472t__);
  if(__t1472t__){
  __t_errcode=34;
  goto __t_failure;
  }
  __t1473t=0.1;
  __t1474t=__t1473t;
  base=__t1474t;
  while(1){
  len__t755t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1475t__);
  lt__t252t(i,__t1475t__,&__t1476t__);
  if(!__t1476t__){
  break;
  }
  get__t928t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1477t__);
  if(!__t1477t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1478t__value,__t1477t__,1);
  d=__t1478t__value;
  is_decimal_digit=d>='0'&&d<='9';
  decimal_digit=d-'0';
  not__t28t(is_decimal_digit,&__t1479t__);
  if(__t1479t__){
  __t_errcode=33;
  goto __t_failure;
  }
  mul__t177t(decimal_digit,base,&__t1480t__);
  add__t153t(number,__t1480t__,&__t1481t__);
  number=__t1481t__;
  __t1482t=0.1;
  mul__t177t(base,__t1482t,&__t1483t__);
  base=__t1483t__;
  __t1484t=1;
  add__t175t(i,__t1484t,&__t1485t__);
  i=__t1485t__;
  }
  }
  if(negative){
  __t1486t=0.0;
  sub__t326t(__t1486t,number,&__t1487t__);
  number=__t1487t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1599t=number;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1551t() {
  double __t1554t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=float__t1426t(__t1553t,&__t1554t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t385t(__t1554t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1551t();return 0;}