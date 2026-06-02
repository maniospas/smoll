#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1511t="123";
const char* const __t1127t="-";
const char* const __t378t="\n";
const char* const __t1130t="+";
const char* const __t1221t=".";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t1514t, uint64_t* __t1515t, uint16_t* __t1516t, uint16_t* __t1517t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1514t=unsafe_ptr;
  *__t1515t=unsafe_size;
  *__t1516t=unsafe_offset;
  *__t1517t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t1518t) {
  *__t1518t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1519t) {
  int value=0;
  *__t1519t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1520t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1520t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1521t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1521t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1522t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1522t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1523t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1523t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1524t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1524t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t1525t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1525t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1526t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1526t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1527t) {
  *__t1527t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t1528t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t1528t=__t512t__;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1529t) {
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
  *__t1529t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t642t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1530t, uint64_t* __t1531t, uint64_t* __t1532t, char* __t1533t) {
  goto __t_return;
  __t_return:
  *__t1530t=unsafe_ptr;
  *__t1531t=dat__pos;
  *__t1532t=dat__length;
  *__t1533t=dat__first;
}

static inline __attribute__((always_inline)) int str__t646t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1534t, uint64_t* __t1535t, uint64_t* __t1536t, char* __t1537t) {
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
  *__t1534t=__t653t__unsafe_ptr;
  *__t1535t=__t653t__dat__pos;
  *__t1536t=__t653t__dat__length;
  *__t1537t=__t653t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t681t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1538t, uint64_t* __t1539t, uint64_t* __t1540t, char* __t1541t) {
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
  *__t1538t=__t686t__unsafe_ptr;
  *__t1539t=__t686t__dat__pos;
  *__t1540t=__t686t__dat__length;
  *__t1541t=__t686t__dat__first;
  
  return __t_errcode;
}

int str__t704t(const char* c, char** __t1542t, uint64_t* __t1543t, uint64_t* __t1544t, char* __t1545t) {
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
  *__t1542t=__t712t__unsafe_ptr;
  *__t1543t=__t712t__dat__pos;
  *__t1544t=__t712t__dat__length;
  *__t1545t=__t712t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t713t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1546t) {
  goto __t_return;
  __t_return:
  *__t1546t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1547t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1547t=z;
}

static inline __attribute__((always_inline)) void get__t886t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1548t) {
  uint64_t __t887t__=0;
  char* __t888t__=0;
  add__t175t(s__dat__pos,i,&__t887t__);
  add__t511t(s__unsafe_ptr,__t887t__,&__t888t__);
  goto __t_return;
  __t_return:
  *__t1548t=__t888t__;
}

static inline __attribute__((always_inline)) void char__t715t(const char* s, char* __t1549t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t1549t=c;
}

static inline __attribute__((always_inline)) void eq__t716t(char x, char y, char* __t1550t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1550t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1551t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1551t=z;
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1552t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1552t=z;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1553t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1553t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t1554t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1554t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1555t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1555t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t1556t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t1556t=z;
}

static inline __attribute__((always_inline)) int float__t1384t(const char* _s, double* __t1557t) {
  char* __t1385t__unsafe_ptr=0;
  uint64_t __t1385t__dat__pos=0;
  uint64_t __t1385t__dat__length=0;
  char __t1385t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  uint64_t __t1386t=0;
  uint64_t __t1387t__=0;
  char __t1388t__=0;
  double __t1389t=0;
  double __t1390t=0;
  double number=0;
  uint64_t __t1391t=0;
  uint64_t __t1392t=0;
  uint64_t i=0;
  uint64_t __t1393t=0;
  uint64_t __t1394t__=0;
  char __t1395t__=0;
  uint64_t __t1396t=0;
  uint64_t __t1397t=0;
  uint64_t __t1398t=0;
  char* __t1399t__=0;
  char __t1400t__value=0;
  char __t1401t__=0;
  char __t1402t__=0;
  char negative=0;
  char* __t1407t__=0;
  char __t1408t__value=0;
  char __t1409t__=0;
  char __t1410t__=0;
  uint64_t __t1411t=0;
  uint64_t __t1412t__=0;
  uint64_t __t1413t__=0;
  char __t1414t__=0;
  uint64_t __t1403t=0;
  uint64_t __t1404t__=0;
  uint64_t __t1405t__=0;
  char __t1406t__=0;
  uint64_t __t1415t__=0;
  char __t1416t__=0;
  char* __t1417t__=0;
  char __t1418t__value=0;
  char c=0;
  char is_digit=0;
  double digit=0;
  char __t1419t__=0;
  char __t1420t__=0;
  char is_dot=0;
  uint64_t __t1421t=0;
  uint64_t __t1422t__=0;
  char __t1423t__=0;
  double __t1424t=0;
  double __t1425t__=0;
  double __t1426t__=0;
  uint64_t __t1427t=0;
  uint64_t __t1428t__=0;
  uint64_t __t1429t__=0;
  char __t1430t__=0;
  double __t1431t=0;
  double __t1432t=0;
  double base=0;
  uint64_t __t1433t__=0;
  char __t1434t__=0;
  char* __t1435t__=0;
  char __t1436t__value=0;
  char d=0;
  char is_decimal_digit=0;
  double decimal_digit=0;
  char __t1437t__=0;
  double __t1438t__=0;
  double __t1439t__=0;
  double __t1440t=0;
  double __t1441t__=0;
  uint64_t __t1442t=0;
  uint64_t __t1443t__=0;
  double __t1444t=0;
  double __t1445t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t704t(_s,&__t1385t__unsafe_ptr,&__t1385t__dat__pos,&__t1385t__dat__length,&__t1385t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1385t__unsafe_ptr;
  s__dat__pos=__t1385t__dat__pos;
  s__dat__length=__t1385t__dat__length;
  s__dat__first=__t1385t__dat__first;
  __t1386t=0;
  len__t713t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1387t__);
  eq__t120t(__t1386t,__t1387t__,&__t1388t__);
  if(__t1388t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1389t=0.0;
  __t1390t=__t1389t;
  number=__t1390t;
  __t1391t=0;
  __t1392t=__t1391t;
  i=__t1392t;
  __t1393t=0;
  len__t713t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1394t__);
  eq__t120t(__t1393t,__t1394t__,&__t1395t__);
  if(__t1395t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1396t=0;
  __t1397t=__t1396t;
  i=__t1397t;
  __t1398t=0;
  get__t886t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,__t1398t,&__t1399t__);
  if(!__t1399t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1400t__value,__t1399t__,1);
  char__t715t(__t1127t,&__t1401t__);
  eq__t716t(__t1400t__value,__t1401t__,&__t1402t__);
  negative=__t1402t__;
  if(negative){
  __t1403t=1;
  add__t175t(i,__t1403t,&__t1404t__);
  i=__t1404t__;
  len__t713t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1405t__);
  eq__t120t(i,__t1405t__,&__t1406t__);
  if(__t1406t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  else{
  get__t886t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1407t__);
  if(!__t1407t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1408t__value,__t1407t__,1);
  char__t715t(__t1130t,&__t1409t__);
  eq__t716t(__t1408t__value,__t1409t__,&__t1410t__);
  if(__t1410t__){
  __t1411t=1;
  add__t175t(i,__t1411t,&__t1412t__);
  i=__t1412t__;
  len__t713t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1413t__);
  eq__t120t(i,__t1413t__,&__t1414t__);
  if(__t1414t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  }
  while(1){
  len__t713t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1415t__);
  lt__t252t(i,__t1415t__,&__t1416t__);
  if(!__t1416t__){
  break;
  }
  get__t886t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1417t__);
  if(!__t1417t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1418t__value,__t1417t__,1);
  c=__t1418t__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  char__t715t(__t1221t,&__t1419t__);
  eq__t716t(c,__t1419t__,&__t1420t__);
  is_dot=__t1420t__;
  if(is_dot){
  __t1421t=1;
  add__t175t(i,__t1421t,&__t1422t__);
  i=__t1422t__;
  break;
  }
  not__t28t(is_digit,&__t1423t__);
  if(__t1423t__){
  __t_errcode=33;
  goto __t_failure;
  }
  __t1424t=10.0;
  mul__t177t(number,__t1424t,&__t1425t__);
  add__t153t(__t1425t__,digit,&__t1426t__);
  number=__t1426t__;
  __t1427t=1;
  add__t175t(i,__t1427t,&__t1428t__);
  i=__t1428t__;
  }
  if(is_dot){
  len__t713t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1429t__);
  eq__t120t(i,__t1429t__,&__t1430t__);
  if(__t1430t__){
  __t_errcode=34;
  goto __t_failure;
  }
  __t1431t=0.1;
  __t1432t=__t1431t;
  base=__t1432t;
  while(1){
  len__t713t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1433t__);
  lt__t252t(i,__t1433t__,&__t1434t__);
  if(!__t1434t__){
  break;
  }
  get__t886t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1435t__);
  if(!__t1435t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1436t__value,__t1435t__,1);
  d=__t1436t__value;
  is_decimal_digit=d>='0'&&d<='9';
  decimal_digit=d-'0';
  not__t28t(is_decimal_digit,&__t1437t__);
  if(__t1437t__){
  __t_errcode=33;
  goto __t_failure;
  }
  mul__t177t(decimal_digit,base,&__t1438t__);
  add__t153t(number,__t1438t__,&__t1439t__);
  number=__t1439t__;
  __t1440t=0.1;
  mul__t177t(base,__t1440t,&__t1441t__);
  base=__t1441t__;
  __t1442t=1;
  add__t175t(i,__t1442t,&__t1443t__);
  i=__t1443t__;
  }
  }
  if(negative){
  __t1444t=0.0;
  sub__t326t(__t1444t,number,&__t1445t__);
  number=__t1445t__;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1557t=number;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t381t(double value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1509t() {
  double __t1512t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=float__t1384t(__t1511t,&__t1512t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t381t(__t1512t__);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1509t();return 0;}