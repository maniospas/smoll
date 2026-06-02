#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1469t="123";
const char* const __t1086t="-";
const char* const __t1180t=".";
const char* const __t377t="\n";
const char* const __t1089t="+";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t1472t, uint64_t* __t1473t, uint16_t* __t1474t, uint16_t* __t1475t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1472t=unsafe_ptr;
  *__t1473t=unsafe_size;
  *__t1474t=unsafe_offset;
  *__t1475t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1476t) {
  *__t1476t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1477t) {
  int value=0;
  *__t1477t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1478t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1478t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1479t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1479t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1480t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1480t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1481t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1481t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1482t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1482t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1483t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1483t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1484t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1484t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1485t) {
  *__t1485t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1486t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1486t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1487t) {
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
  *__t1487t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1488t, uint64_t* __t1489t, uint64_t* __t1490t, char* __t1491t) {
  goto __t_return;
  __t_return:
  *__t1488t=unsafe_ptr;
  *__t1489t=dat__pos;
  *__t1490t=dat__length;
  *__t1491t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1492t, uint64_t* __t1493t, uint64_t* __t1494t, char* __t1495t) {
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
  *__t1492t=__t643t__unsafe_ptr;
  *__t1493t=__t643t__dat__pos;
  *__t1494t=__t643t__dat__length;
  *__t1495t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1496t, uint64_t* __t1497t, uint64_t* __t1498t, char* __t1499t) {
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
  *__t1496t=__t673t__unsafe_ptr;
  *__t1497t=__t673t__dat__pos;
  *__t1498t=__t673t__dat__length;
  *__t1499t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t1500t, uint64_t* __t1501t, uint64_t* __t1502t, char* __t1503t) {
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
  *__t1500t=__t681t__unsafe_ptr;
  *__t1501t=__t681t__dat__pos;
  *__t1502t=__t681t__dat__length;
  *__t1503t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1504t) {
  goto __t_return;
  __t_return:
  *__t1504t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1505t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1505t=z;
}

static inline __attribute__((always_inline)) void get__t825t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1506t) {
  uint64_t __t826t__=0;
  char* __t827t__=0;
  add__t174t(s__dat__pos,i,&__t826t__);
  add__t510t(s__unsafe_ptr,__t826t__,&__t827t__);
  goto __t_return;
  __t_return:
  *__t1506t=__t827t__;
}

static inline __attribute__((always_inline)) void char__t684t(const char* s, char* __t1507t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t1507t=c;
}

static inline __attribute__((always_inline)) void eq__t685t(char x, char y, char* __t1508t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1508t=z;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1509t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1509t=z;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1510t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1510t=z;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1511t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1511t=__t72t__;
}

static inline __attribute__((always_inline)) void mul__t176t(double x, double y, double* __t1512t) {
  int __t177t__=0;
  double z=0;
  is_different__t70t(x,y,&__t177t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1512t=z;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t1513t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1513t=z;
}

static inline __attribute__((always_inline)) void sub__t325t(double x, double y, double* __t1514t) {
  int __t326t__=0;
  int __t327t=0;
  int __t328t=0;
  double z=0;
  is_different__t70t(x,y,&__t326t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t1514t=z;
}

static inline __attribute__((always_inline)) int float__t1342t(const char* _s, double* __t1515t) {
  char* __t1343t__unsafe_ptr=0;
  uint64_t __t1343t__dat__pos=0;
  uint64_t __t1343t__dat__length=0;
  char __t1343t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  uint64_t __t1344t=0;
  uint64_t __t1345t__=0;
  char __t1346t__=0;
  double __t1347t=0;
  double __t1348t=0;
  double number=0;
  uint64_t __t1349t=0;
  uint64_t __t1350t=0;
  uint64_t i=0;
  uint64_t __t1351t=0;
  uint64_t __t1352t__=0;
  char __t1353t__=0;
  uint64_t __t1354t=0;
  uint64_t __t1355t=0;
  uint64_t __t1356t=0;
  char* __t1357t__=0;
  char __t1358t__value=0;
  char __t1359t__=0;
  char __t1360t__=0;
  char negative=0;
  char* __t1365t__=0;
  char __t1366t__value=0;
  char __t1367t__=0;
  char __t1368t__=0;
  uint64_t __t1369t=0;
  uint64_t __t1370t__=0;
  uint64_t __t1371t__=0;
  char __t1372t__=0;
  uint64_t __t1361t=0;
  uint64_t __t1362t__=0;
  uint64_t __t1363t__=0;
  char __t1364t__=0;
  uint64_t __t1373t__=0;
  char __t1374t__=0;
  char* __t1375t__=0;
  char __t1376t__value=0;
  char c=0;
  char is_digit=0;
  double digit=0;
  char __t1377t__=0;
  char __t1378t__=0;
  char is_dot=0;
  uint64_t __t1379t=0;
  uint64_t __t1380t__=0;
  char __t1381t__=0;
  double __t1382t=0;
  double __t1383t__=0;
  double __t1384t__=0;
  uint64_t __t1385t=0;
  uint64_t __t1386t__=0;
  uint64_t __t1387t__=0;
  char __t1388t__=0;
  double __t1389t=0;
  double __t1390t=0;
  double base=0;
  uint64_t __t1391t__=0;
  char __t1392t__=0;
  char* __t1393t__=0;
  char __t1394t__value=0;
  char d=0;
  char is_decimal_digit=0;
  double decimal_digit=0;
  char __t1395t__=0;
  double __t1396t__=0;
  double __t1397t__=0;
  double __t1398t=0;
  double __t1399t__=0;
  uint64_t __t1400t=0;
  uint64_t __t1401t__=0;
  double __t1402t=0;
  double __t1403t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t674t(_s,&__t1343t__unsafe_ptr,&__t1343t__dat__pos,&__t1343t__dat__length,&__t1343t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1343t__unsafe_ptr;
  s__dat__pos=__t1343t__dat__pos;
  s__dat__length=__t1343t__dat__length;
  s__dat__first=__t1343t__dat__first;
  __t1344t=0;
  len__t682t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1345t__);
  eq__t119t(__t1344t,__t1345t__,&__t1346t__);
  if(__t1346t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1347t=0.0;
  __t1348t=__t1347t;
  number=__t1348t;
  __t1349t=0;
  __t1350t=__t1349t;
  i=__t1350t;
  __t1351t=0;
  len__t682t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1352t__);
  eq__t119t(__t1351t,__t1352t__,&__t1353t__);
  if(__t1353t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1354t=0;
  __t1355t=__t1354t;
  i=__t1355t;
  __t1356t=0;
  get__t825t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,__t1356t,&__t1357t__);
  if(!__t1357t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1358t__value,__t1357t__,1);
  char__t684t(__t1086t,&__t1359t__);
  eq__t685t(__t1358t__value,__t1359t__,&__t1360t__);
  negative=__t1360t__;
  if(negative){
  __t1361t=1;
  add__t174t(i,__t1361t,&__t1362t__);
  i=__t1362t__;
  len__t682t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1363t__);
  eq__t119t(i,__t1363t__,&__t1364t__);
  if(__t1364t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  else{
  get__t825t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1365t__);
  if(!__t1365t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1366t__value,__t1365t__,1);
  char__t684t(__t1089t,&__t1367t__);
  eq__t685t(__t1366t__value,__t1367t__,&__t1368t__);
  if(__t1368t__){
  __t1369t=1;
  add__t174t(i,__t1369t,&__t1370t__);
  i=__t1370t__;
  len__t682t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1371t__);
  eq__t119t(i,__t1371t__,&__t1372t__);
  if(__t1372t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  }
  while(1){
  len__t682t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1373t__);
  lt__t251t(i,__t1373t__,&__t1374t__);
  if(!__t1374t__){
  break;
  }
  get__t825t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1375t__);
  if(!__t1375t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1376t__value,__t1375t__,1);
  c=__t1376t__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  char__t684t(__t1180t,&__t1377t__);
  eq__t685t(c,__t1377t__,&__t1378t__);
  is_dot=__t1378t__;
  if(is_dot){
  __t1379t=1;
  add__t174t(i,__t1379t,&__t1380t__);
  i=__t1380t__;
  break;
  }
  not__t27t(is_digit,&__t1381t__);
  if(__t1381t__){
  __t_errcode=33;
  goto __t_failure;
  }
  __t1382t=10.0;
  mul__t176t(number,__t1382t,&__t1383t__);
  add__t152t(__t1383t__,digit,&__t1384t__);
  number=__t1384t__;
  __t1385t=1;
  add__t174t(i,__t1385t,&__t1386t__);
  i=__t1386t__;
  }
  if(is_dot){
  len__t682t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1387t__);
  eq__t119t(i,__t1387t__,&__t1388t__);
  if(__t1388t__){
  __t_errcode=34;
  goto __t_failure;
  }
  __t1389t=0.1;
  __t1390t=__t1389t;
  base=__t1390t;
  while(1){
  len__t682t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1391t__);
  lt__t251t(i,__t1391t__,&__t1392t__);
  if(!__t1392t__){
  break;
  }
  get__t825t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1393t__);
  if(!__t1393t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1394t__value,__t1393t__,1);
  d=__t1394t__value;
  is_decimal_digit=d>='0'&&d<='9';
  decimal_digit=d-'0';
  not__t27t(is_decimal_digit,&__t1395t__);
  if(__t1395t__){
  __t_errcode=33;
  goto __t_failure;
  }
  mul__t176t(decimal_digit,base,&__t1396t__);
  add__t152t(number,__t1396t__,&__t1397t__);
  number=__t1397t__;
  __t1398t=0.1;
  mul__t176t(base,__t1398t,&__t1399t__);
  base=__t1399t__;
  __t1400t=1;
  add__t174t(i,__t1400t,&__t1401t__);
  i=__t1401t__;
  }
  }
  if(negative){
  __t1402t=0.0;
  sub__t325t(__t1402t,number,&__t1403t__);
  number=__t1403t__;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1515t=number;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t380t(double value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1467t() {
  double __t1470t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t_errcode=float__t1342t(__t1469t,&__t1470t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t380t(__t1470t__);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1467t();return 0;}