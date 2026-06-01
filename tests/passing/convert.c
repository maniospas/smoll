#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t374t="\n";
const char* const __t1086t="-";
const char* const __t1180t=".";
const char* const __t1468t="123";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t554t(char** __t1471t, uint64_t* __t1472t, uint16_t* __t1473t, uint16_t* __t1474t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1471t=unsafe_ptr;
  *__t1472t=unsafe_size;
  *__t1473t=unsafe_offset;
  *__t1474t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1475t) {
  *__t1475t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1476t) {
  int value=0;
  *__t1476t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1477t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1477t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1478t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1478t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1479t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1479t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1480t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1480t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1481t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1481t=z;
}

static inline __attribute__((always_inline)) void nat__t509t(uint16_t x, uint64_t* __t1482t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1482t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1483t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1483t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1484t) {
  *__t1484t=to;
}

static inline __attribute__((always_inline)) void add__t507t(char* allocated, uint64_t offset, char** __t1485t) {
  char* element=0;
  char* __t508t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t508t__);
  goto __t_return;
  __t_return:
  *__t1485t=__t508t__;
}

static inline __attribute__((always_inline)) int get__t594t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1486t) {
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
  *__t1486t=__t600t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t629t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1487t, uint64_t* __t1488t, uint64_t* __t1489t, char* __t1490t) {
  goto __t_return;
  __t_return:
  *__t1487t=unsafe_ptr;
  *__t1488t=dat__pos;
  *__t1489t=dat__length;
  *__t1490t=dat__first;
}

static inline __attribute__((always_inline)) int str__t633t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1491t, uint64_t* __t1492t, uint64_t* __t1493t, char* __t1494t) {
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
  *__t1491t=__t640t__unsafe_ptr;
  *__t1492t=__t640t__dat__pos;
  *__t1493t=__t640t__dat__length;
  *__t1494t=__t640t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t665t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1495t, uint64_t* __t1496t, uint64_t* __t1497t, char* __t1498t) {
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
  *__t1495t=__t670t__unsafe_ptr;
  *__t1496t=__t670t__dat__pos;
  *__t1497t=__t670t__dat__length;
  *__t1498t=__t670t__dat__first;
  
  return __t_errcode;
}

int str__t671t(const char* c, char** __t1499t, uint64_t* __t1500t, uint64_t* __t1501t, char* __t1502t) {
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
  *__t1499t=__t678t__unsafe_ptr;
  *__t1500t=__t678t__dat__pos;
  *__t1501t=__t678t__dat__length;
  *__t1502t=__t678t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t679t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1503t) {
  goto __t_return;
  __t_return:
  *__t1503t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1504t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1504t=z;
}

static inline __attribute__((always_inline)) void get__t822t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1505t) {
  uint64_t __t823t__=0;
  char* __t824t__=0;
  add__t174t(s__dat__pos,i,&__t823t__);
  add__t507t(s__unsafe_ptr,__t823t__,&__t824t__);
  goto __t_return;
  __t_return:
  *__t1505t=__t824t__;
}

static inline __attribute__((always_inline)) void char__t681t(const char* s, char* __t1506t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t1506t=c;
}

static inline __attribute__((always_inline)) void eq__t682t(char x, char y, char* __t1507t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1507t=z;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1508t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1508t=z;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1509t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1509t=z;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1510t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1510t=__t72t__;
}

static inline __attribute__((always_inline)) void mul__t176t(double x, double y, double* __t1511t) {
  int __t177t__=0;
  double z=0;
  is_different__t70t(x,y,&__t177t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1511t=z;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t1512t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1512t=z;
}

static inline __attribute__((always_inline)) void sub__t325t(double x, double y, double* __t1513t) {
  int __t326t__=0;
  int __t327t=0;
  int __t328t=0;
  double z=0;
  is_different__t70t(x,y,&__t326t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t1513t=z;
}

static inline __attribute__((always_inline)) int float__t1342t(const char* _s, double* __t1514t) {
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
  __t_errcode=str__t671t(_s,&__t1343t__unsafe_ptr,&__t1343t__dat__pos,&__t1343t__dat__length,&__t1343t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1343t__unsafe_ptr;
  s__dat__pos=__t1343t__dat__pos;
  s__dat__length=__t1343t__dat__length;
  s__dat__first=__t1343t__dat__first;
  __t1344t=0;
  len__t679t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1345t__);
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
  len__t679t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1352t__);
  eq__t119t(__t1351t,__t1352t__,&__t1353t__);
  if(__t1353t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1354t=0;
  __t1355t=__t1354t;
  i=__t1355t;
  __t1356t=0;
  get__t822t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,__t1356t,&__t1357t__);
  if(!__t1357t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1358t__value,__t1357t__,1);
  char__t681t(__t1086t,&__t1359t__);
  eq__t682t(__t1358t__value,__t1359t__,&__t1360t__);
  negative=__t1360t__;
  if(negative){
  __t1361t=1;
  add__t174t(i,__t1361t,&__t1362t__);
  i=__t1362t__;
  len__t679t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1363t__);
  eq__t119t(i,__t1363t__,&__t1364t__);
  if(__t1364t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  else{
  get__t822t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1365t__);
  if(!__t1365t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1366t__value,__t1365t__,1);
  char__t681t(__t1089t,&__t1367t__);
  eq__t682t(__t1366t__value,__t1367t__,&__t1368t__);
  if(__t1368t__){
  __t1369t=1;
  add__t174t(i,__t1369t,&__t1370t__);
  i=__t1370t__;
  len__t679t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1371t__);
  eq__t119t(i,__t1371t__,&__t1372t__);
  if(__t1372t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  }
  while(1){
  len__t679t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1373t__);
  lt__t251t(i,__t1373t__,&__t1374t__);
  if(!__t1374t__){
  break;
  }
  get__t822t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1375t__);
  if(!__t1375t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1376t__value,__t1375t__,1);
  c=__t1376t__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  char__t681t(__t1180t,&__t1377t__);
  eq__t682t(c,__t1377t__,&__t1378t__);
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
  len__t679t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1387t__);
  eq__t119t(i,__t1387t__,&__t1388t__);
  if(__t1388t__){
  __t_errcode=34;
  goto __t_failure;
  }
  __t1389t=0.1;
  __t1390t=__t1389t;
  base=__t1390t;
  while(1){
  len__t679t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1391t__);
  lt__t251t(i,__t1391t__,&__t1392t__);
  if(!__t1392t__){
  break;
  }
  get__t822t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1393t__);
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
  *__t1514t=number;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t377t(double value) {
  int __t378t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1467t() {
  double __t1469t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=float__t1342t(__t1468t,&__t1469t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t377t(__t1469t__);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1467t();return 0;}