#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1099t="-";
const char* const __t1102t="+";
const char* const __t1193t=".";
const char* const __t377t="\n";
const char* const __t1482t="123";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t557t(char** __t1485t, uint64_t* __t1486t, uint16_t* __t1487t, uint16_t* __t1488t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1485t=unsafe_ptr;
  *__t1486t=unsafe_size;
  *__t1487t=unsafe_offset;
  *__t1488t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1489t) {
  *__t1489t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1490t) {
  int value=0;
  *__t1490t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1491t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1491t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1492t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1492t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t174t(uint64_t x, uint64_t y, uint64_t* __t1493t) {
  int __t175t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t175t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1493t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1494t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1494t=z;
}

static inline __attribute__((always_inline)) void ge__t323t(uint64_t x, uint64_t y, char* __t1495t) {
  int __t324t__=0;
  char z=0;
  is_different__t94t(x,y,&__t324t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1495t=z;
}

static inline __attribute__((always_inline)) void nat__t512t(uint16_t x, uint64_t* __t1496t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1496t=value;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t1497t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1497t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1498t) {
  *__t1498t=to;
}

static inline __attribute__((always_inline)) void add__t510t(char* allocated, uint64_t offset, char** __t1499t) {
  char* element=0;
  char* __t511t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t511t__);
  goto __t_return;
  __t_return:
  *__t1499t=__t511t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1500t) {
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
  *__t1500t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t641t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1501t, uint64_t* __t1502t, uint64_t* __t1503t, char* __t1504t) {
  goto __t_return;
  __t_return:
  *__t1501t=unsafe_ptr;
  *__t1502t=dat__pos;
  *__t1503t=dat__length;
  *__t1504t=dat__first;
}

static inline __attribute__((always_inline)) int str__t645t(char* CHARS__unsafe_ptr, uint64_t CHARS__unsafe_size, uint16_t CHARS__unsafe_offset, uint16_t CHARS__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1505t, uint64_t* __t1506t, uint64_t* __t1507t, char* __t1508t) {
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
  *__t1505t=__t652t__unsafe_ptr;
  *__t1506t=__t652t__dat__pos;
  *__t1507t=__t652t__dat__length;
  *__t1508t=__t652t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t677t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1509t, uint64_t* __t1510t, uint64_t* __t1511t, char* __t1512t) {
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
  *__t1509t=__t682t__unsafe_ptr;
  *__t1510t=__t682t__dat__pos;
  *__t1511t=__t682t__dat__length;
  *__t1512t=__t682t__dat__first;
  
  return __t_errcode;
}

int str__t683t(const char* c, char** __t1513t, uint64_t* __t1514t, uint64_t* __t1515t, char* __t1516t) {
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
  *__t1513t=__t690t__unsafe_ptr;
  *__t1514t=__t690t__dat__pos;
  *__t1515t=__t690t__dat__length;
  *__t1516t=__t690t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t691t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1517t) {
  goto __t_return;
  __t_return:
  *__t1517t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1518t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1518t=z;
}

static inline __attribute__((always_inline)) void get__t830t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1519t) {
  uint64_t __t831t__=0;
  char* __t832t__=0;
  add__t174t(s__dat__pos,i,&__t831t__);
  add__t510t(s__unsafe_ptr,__t831t__,&__t832t__);
  goto __t_return;
  __t_return:
  *__t1519t=__t832t__;
}

static inline __attribute__((always_inline)) void char__t693t(const char* s, char* __t1520t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t1520t=c;
}

static inline __attribute__((always_inline)) void eq__t694t(char x, char y, char* __t1521t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1521t=z;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t1522t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1522t=z;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1523t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1523t=z;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1524t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1524t=__t72t__;
}

static inline __attribute__((always_inline)) void mul__t176t(double x, double y, double* __t1525t) {
  int __t177t__=0;
  double z=0;
  is_different__t70t(x,y,&__t177t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1525t=z;
}

static inline __attribute__((always_inline)) void add__t152t(double x, double y, double* __t1526t) {
  int __t153t__=0;
  double z=0;
  is_different__t70t(x,y,&__t153t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1526t=z;
}

static inline __attribute__((always_inline)) void sub__t325t(double x, double y, double* __t1527t) {
  int __t326t__=0;
  int __t327t=0;
  int __t328t=0;
  double z=0;
  is_different__t70t(x,y,&__t326t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t1527t=z;
}

static inline __attribute__((always_inline)) int float__t1355t(const char* _s, double* __t1528t) {
  char* __t1356t__unsafe_ptr=0;
  uint64_t __t1356t__dat__pos=0;
  uint64_t __t1356t__dat__length=0;
  char __t1356t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  uint64_t __t1357t=0;
  uint64_t __t1358t__=0;
  char __t1359t__=0;
  double __t1360t=0;
  double __t1361t=0;
  double number=0;
  uint64_t __t1362t=0;
  uint64_t __t1363t=0;
  uint64_t i=0;
  uint64_t __t1364t=0;
  uint64_t __t1365t__=0;
  char __t1366t__=0;
  uint64_t __t1367t=0;
  uint64_t __t1368t=0;
  uint64_t __t1369t=0;
  char* __t1370t__=0;
  char __t1371t__value=0;
  char __t1372t__=0;
  char __t1373t__=0;
  char negative=0;
  char* __t1378t__=0;
  char __t1379t__value=0;
  char __t1380t__=0;
  char __t1381t__=0;
  uint64_t __t1382t=0;
  uint64_t __t1383t__=0;
  uint64_t __t1384t__=0;
  char __t1385t__=0;
  uint64_t __t1374t=0;
  uint64_t __t1375t__=0;
  uint64_t __t1376t__=0;
  char __t1377t__=0;
  uint64_t __t1386t__=0;
  char __t1387t__=0;
  char* __t1388t__=0;
  char __t1389t__value=0;
  char c=0;
  char is_digit=0;
  double digit=0;
  char __t1390t__=0;
  char __t1391t__=0;
  char is_dot=0;
  uint64_t __t1392t=0;
  uint64_t __t1393t__=0;
  char __t1394t__=0;
  double __t1395t=0;
  double __t1396t__=0;
  double __t1397t__=0;
  uint64_t __t1398t=0;
  uint64_t __t1399t__=0;
  uint64_t __t1400t__=0;
  char __t1401t__=0;
  double __t1402t=0;
  double __t1403t=0;
  double base=0;
  uint64_t __t1404t__=0;
  char __t1405t__=0;
  char* __t1406t__=0;
  char __t1407t__value=0;
  char d=0;
  char is_decimal_digit=0;
  double decimal_digit=0;
  char __t1408t__=0;
  double __t1409t__=0;
  double __t1410t__=0;
  double __t1411t=0;
  double __t1412t__=0;
  uint64_t __t1413t=0;
  uint64_t __t1414t__=0;
  double __t1415t=0;
  double __t1416t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t683t(_s,&__t1356t__unsafe_ptr,&__t1356t__dat__pos,&__t1356t__dat__length,&__t1356t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1356t__unsafe_ptr;
  s__dat__pos=__t1356t__dat__pos;
  s__dat__length=__t1356t__dat__length;
  s__dat__first=__t1356t__dat__first;
  __t1357t=0;
  len__t691t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1358t__);
  eq__t119t(__t1357t,__t1358t__,&__t1359t__);
  if(__t1359t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1360t=0.0;
  __t1361t=__t1360t;
  number=__t1361t;
  __t1362t=0;
  __t1363t=__t1362t;
  i=__t1363t;
  __t1364t=0;
  len__t691t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1365t__);
  eq__t119t(__t1364t,__t1365t__,&__t1366t__);
  if(__t1366t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1367t=0;
  __t1368t=__t1367t;
  i=__t1368t;
  __t1369t=0;
  get__t830t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,__t1369t,&__t1370t__);
  if(!__t1370t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1371t__value,__t1370t__,1);
  char__t693t(__t1099t,&__t1372t__);
  eq__t694t(__t1371t__value,__t1372t__,&__t1373t__);
  negative=__t1373t__;
  if(negative){
  __t1374t=1;
  add__t174t(i,__t1374t,&__t1375t__);
  i=__t1375t__;
  len__t691t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1376t__);
  eq__t119t(i,__t1376t__,&__t1377t__);
  if(__t1377t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  else{
  get__t830t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1378t__);
  if(!__t1378t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1379t__value,__t1378t__,1);
  char__t693t(__t1102t,&__t1380t__);
  eq__t694t(__t1379t__value,__t1380t__,&__t1381t__);
  if(__t1381t__){
  __t1382t=1;
  add__t174t(i,__t1382t,&__t1383t__);
  i=__t1383t__;
  len__t691t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1384t__);
  eq__t119t(i,__t1384t__,&__t1385t__);
  if(__t1385t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  }
  while(1){
  len__t691t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1386t__);
  lt__t251t(i,__t1386t__,&__t1387t__);
  if(!__t1387t__){
  break;
  }
  get__t830t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1388t__);
  if(!__t1388t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1389t__value,__t1388t__,1);
  c=__t1389t__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  char__t693t(__t1193t,&__t1390t__);
  eq__t694t(c,__t1390t__,&__t1391t__);
  is_dot=__t1391t__;
  if(is_dot){
  __t1392t=1;
  add__t174t(i,__t1392t,&__t1393t__);
  i=__t1393t__;
  break;
  }
  not__t27t(is_digit,&__t1394t__);
  if(__t1394t__){
  __t_errcode=33;
  goto __t_failure;
  }
  __t1395t=10.0;
  mul__t176t(number,__t1395t,&__t1396t__);
  add__t152t(__t1396t__,digit,&__t1397t__);
  number=__t1397t__;
  __t1398t=1;
  add__t174t(i,__t1398t,&__t1399t__);
  i=__t1399t__;
  }
  if(is_dot){
  len__t691t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1400t__);
  eq__t119t(i,__t1400t__,&__t1401t__);
  if(__t1401t__){
  __t_errcode=34;
  goto __t_failure;
  }
  __t1402t=0.1;
  __t1403t=__t1402t;
  base=__t1403t;
  while(1){
  len__t691t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1404t__);
  lt__t251t(i,__t1404t__,&__t1405t__);
  if(!__t1405t__){
  break;
  }
  get__t830t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1406t__);
  if(!__t1406t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1407t__value,__t1406t__,1);
  d=__t1407t__value;
  is_decimal_digit=d>='0'&&d<='9';
  decimal_digit=d-'0';
  not__t27t(is_decimal_digit,&__t1408t__);
  if(__t1408t__){
  __t_errcode=33;
  goto __t_failure;
  }
  mul__t176t(decimal_digit,base,&__t1409t__);
  add__t152t(number,__t1409t__,&__t1410t__);
  number=__t1410t__;
  __t1411t=0.1;
  mul__t176t(base,__t1411t,&__t1412t__);
  base=__t1412t__;
  __t1413t=1;
  add__t174t(i,__t1413t,&__t1414t__);
  i=__t1414t__;
  }
  }
  if(negative){
  __t1415t=0.0;
  sub__t325t(__t1415t,number,&__t1416t__);
  number=__t1416t__;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1528t=number;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t380t(double value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1480t() {
  double __t1483t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t365t();
  __t_errcode=float__t1355t(__t1482t,&__t1483t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t380t(__t1483t__);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1480t();return 0;}