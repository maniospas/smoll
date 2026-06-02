#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1408t="what's your name";
const char* const __t1411t="hello";
const char* const __t1087t="-";
const char* const __t1090t="+";
const char* const __t1111t=".";
const char* const __t371t="\n";
const char* const __t1414t="!\n";
const char* const __t1134t="\n\r";
const char* const __t1412t=" ";
const char* const __t1417t="Please give a number:";
const char* const __t1084t="\t ";
const char* const __t1421t="invalid number";
const char* const __t1423t="this is its square";
static const char* __t_all_errcodes[37] = {"noerr",
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
"user input was not an int",
"user input was not a nat",
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

static inline __attribute__((always_inline)) void console__t1070t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1401t(char** __t1427t, uint64_t* __t1428t, uint16_t* __t1429t, uint16_t* __t1430t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1427t=unsafe_ptr;
  *__t1428t=unsafe_size;
  *__t1429t=unsafe_offset;
  *__t1430t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1431t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1431t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1432t) {
  char* allocated=*__t1432t;
  if(allocated){
  free(allocated);
  }
  *__t1432t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1433t) {
  int value=0;
  *__t1433t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1434t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1434t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1435t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1435t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1436t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1436t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1437t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1437t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1438t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1438t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1439t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1439t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1440t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1440t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1441t) {
  char* allocated=0;
  char __t496t__=0;
  char __t497t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t436t(allocated,&__t496t__);
  not__t27t(__t496t__,&__t497t__);
  if(__t497t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1441t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1442t, uint64_t* __t1443t, uint16_t* __t1444t, uint16_t* __t1445t, uint64_t size, char** __t1446t, uint64_t* __t1447t, uint16_t* __t1448t, uint16_t* __t1449t) {
  char* buffer__unsafe_ptr=*__t1442t;
  uint64_t buffer__unsafe_size=*__t1443t;
  uint16_t buffer__unsafe_offset=*__t1444t;
  uint16_t buffer__unsafe_align=*__t1445t;
  int __t510t=0;
  char __t511t__=0;
  char __t513t__=0;
  uint64_t __t514t=0;
  char __t515t__=0;
  uint64_t __t516t=0;
  uint64_t __t517t__=0;
  uint64_t __t518t__=0;
  uint64_t __t520t=0;
  char __t521t__=0;
  uint64_t __t522t__=0;
  uint64_t __t523t__=0;
  uint64_t bytes=0;
  uint64_t __t524t=0;
  char __t525t__=0;
  char* __t526t__=0;
  uint64_t __t527t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t513t__);
  if(__t513t__){
  __t514t=0;
  neq__t143t(size,__t514t,&__t515t__);
  if(__t515t__){
  __t516t=0;
  nat__t506t(buffer__unsafe_align,&__t517t__);
  mul__t195t(__t517t__,size,&__t518t__);
  zero__t503t(buffer__unsafe_ptr,__t516t,__t518t__);
  }
  goto __t_return;
  }
  __t520t=0;
  neq__t143t(buffer__unsafe_size,__t520t,&__t521t__);
  if(__t521t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t522t__);
  mul__t195t(__t522t__,size,&__t523t__);
  bytes=__t523t__;
  __t524t=0;
  eq__t119t(bytes,__t524t,&__t525t__);
  if(__t525t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t495t(bytes,&__t526t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t526t__;
  __t527t=0;
  zero__t503t(buffer__unsafe_ptr,__t527t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(buffer__unsafe_ptr,&__t511t__);
  if(__t511t__){
  free__t502t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1442t=buffer__unsafe_ptr;
  *__t1443t=buffer__unsafe_size;
  *__t1444t=buffer__unsafe_offset;
  *__t1445t=buffer__unsafe_align;
  *__t1446t=buffer__unsafe_ptr;
  *__t1447t=buffer__unsafe_size;
  *__t1448t=buffer__unsafe_offset;
  *__t1449t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t718t(char** __t1450t, uint64_t* __t1451t, uint16_t* __t1452t, uint16_t* __t1453t, char** __t1454t, uint64_t* __t1455t, uint16_t* __t1456t, uint16_t* __t1457t, uint64_t* __t1458t) {
  char* buf__unsafe_ptr=*__t1450t;
  uint64_t buf__unsafe_size=*__t1451t;
  uint16_t buf__unsafe_offset=*__t1452t;
  uint16_t buf__unsafe_align=*__t1453t;
  uint64_t __t719t=0;
  uint64_t __t720t=0;
  uint64_t pos=0;
  __t719t=0;
  __t720t=__t719t;
  pos=__t720t;
  goto __t_return;
  __t_return:
  *__t1450t=buf__unsafe_ptr;
  *__t1451t=buf__unsafe_size;
  *__t1452t=buf__unsafe_offset;
  *__t1453t=buf__unsafe_align;
  *__t1454t=buf__unsafe_ptr;
  *__t1455t=buf__unsafe_size;
  *__t1456t=buf__unsafe_offset;
  *__t1457t=buf__unsafe_align;
  *__t1458t=pos;
}

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1459t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1459t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1460t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1460t=z;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1461t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1461t=z;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t1462t) {
  int __t349t__=0;
  int __t350t=0;
  int __t351t=0;
  char __t352t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t349t__);
  lt__t248t(x,y,&__t352t__);
  if(__t352t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1462t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1463t) {
  *__t1463t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1464t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1464t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1465t) {
  char __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  uint64_t __t596t__=0;
  char* __t597t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t592t__);
  if(__t592t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t593t__);
  mul__t195t(i,__t593t__,&__t594t__);
  nat__t506t(buffer__unsafe_offset,&__t595t__);
  add__t171t(__t594t__,__t595t__,&__t596t__);
  add__t504t(buffer__unsafe_ptr,__t596t__,&__t597t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1465t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t626t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1466t, uint64_t* __t1467t, uint64_t* __t1468t, char* __t1469t) {
  goto __t_return;
  __t_return:
  *__t1466t=unsafe_ptr;
  *__t1467t=dat__pos;
  *__t1468t=dat__length;
  *__t1469t=dat__first;
}

static inline __attribute__((always_inline)) int str__t630t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1470t, uint64_t* __t1471t, uint64_t* __t1472t, char* __t1473t) {
  char* unsafe_ptr=0;
  uint64_t __t631t__=0;
  uint64_t __t632t=0;
  char __t633t__=0;
  uint64_t __t634t__=0;
  uint64_t __t635t=0;
  char __t636t__=0;
  char* __t637t__unsafe_ptr=0;
  uint64_t __t637t__dat__pos=0;
  uint64_t __t637t__dat__length=0;
  char __t637t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t506t(buf__unsafe_align,&__t631t__);
  __t632t=1;
  neq__t143t(__t631t__,__t632t,&__t633t__);
  if(__t633t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t634t__);
  __t635t=0;
  neq__t143t(__t634t__,__t635t,&__t636t__);
  if(__t636t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t626t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t637t__unsafe_ptr,&__t637t__dat__pos,&__t637t__dat__length,&__t637t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1470t=__t637t__unsafe_ptr;
  *__t1471t=__t637t__dat__pos;
  *__t1472t=__t637t__dat__length;
  *__t1473t=__t637t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t662t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1474t, uint64_t* __t1475t, uint64_t* __t1476t, char* __t1477t) {
  uint64_t __t663t=0;
  char __t664t__=0;
  char* __t665t__=0;
  char __t666t__value=0;
  char first=0;
  char* __t667t__unsafe_ptr=0;
  uint64_t __t667t__dat__pos=0;
  uint64_t __t667t__dat__length=0;
  char __t667t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t663t=0;
  neq__t143t(length,__t663t,&__t664t__);
  if(__t664t__){
  __t_errcode=get__t591t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t665t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t665t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t666t__value,__t665t__,1);
  first=__t666t__value;
  }
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t667t__unsafe_ptr,&__t667t__dat__pos,&__t667t__dat__length,&__t667t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1474t=__t667t__unsafe_ptr;
  *__t1475t=__t667t__dat__pos;
  *__t1476t=__t667t__dat__length;
  *__t1477t=__t667t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1141t(char** __t1478t, uint64_t* __t1479t, uint16_t* __t1480t, uint16_t* __t1481t, uint64_t* __t1482t, char** __t1483t, uint64_t* __t1484t, uint64_t* __t1485t, char* __t1486t) {
  char* buf__unsafe_ptr=*__t1478t;
  uint64_t buf__unsafe_size=*__t1479t;
  uint16_t buf__unsafe_offset=*__t1480t;
  uint16_t buf__unsafe_align=*__t1481t;
  uint64_t pos=*__t1482t;
  uint64_t __t1142t__=0;
  uint64_t __t1143t=0;
  char __t1144t__=0;
  uint64_t __t1145t__=0;
  uint64_t __t1146t=0;
  char __t1147t__=0;
  uint64_t start=0;
  char __t1148t=0;
  int64_t _c=0;
  char __t1149t__=0;
  char* ptr_pos=0;
  uint64_t __t1150t=0;
  uint64_t __t1151t__=0;
  uint64_t __t1152t__=0;
  char* __t1153t__unsafe_ptr=0;
  uint64_t __t1153t__dat__pos=0;
  uint64_t __t1153t__dat__length=0;
  char __t1153t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t506t(buf__unsafe_align,&__t1142t__);
  __t1143t=1;
  neq__t143t(__t1142t__,__t1143t,&__t1144t__);
  if(__t1144t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t1145t__);
  __t1146t=0;
  neq__t143t(__t1145t__,__t1146t,&__t1147t__);
  if(__t1147t__){
  __t_errcode=17;
  goto __t_failure;
  }
  start=pos;
  while(1){
  __t1148t=1;
  if(!__t1148t){
  break;
  }
  _c=getchar();
  if(_c=='\n'||_c=='\r'||_c==EOF){
  break;
  }
  ge__t320t(pos,buf__unsafe_size,&__t1149t__);
  if(__t1149t__){
  __t_errcode=27;
  goto __t_failure;
  }
  ptr_pos=buf__unsafe_ptr+pos;
  *ptr_pos=_c;
  __t1150t=1;
  add__t171t(pos,__t1150t,&__t1151t__);
  pos=__t1151t__;
  }
  __t_errcode=sub__t348t(pos,start,&__t1152t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t662t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,start,__t1152t__,&__t1153t__unsafe_ptr,&__t1153t__dat__pos,&__t1153t__dat__length,&__t1153t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1478t=buf__unsafe_ptr;
  *__t1479t=buf__unsafe_size;
  *__t1480t=buf__unsafe_offset;
  *__t1481t=buf__unsafe_align;
  *__t1482t=pos;
  *__t1483t=__t1153t__unsafe_ptr;
  *__t1484t=__t1153t__dat__pos;
  *__t1485t=__t1153t__dat__length;
  *__t1486t=__t1153t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t367t(const char* value, const char* endl) {
  int __t368t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t778t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, const char* endl) {
  int __t779t=0;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int char__t1077t(char* __t1487t) {
  int64_t _c=0;
  char iseof=0;
  char c=0;
  int __t_errcode=0;
  int __t_complain=0;
  _c=getchar();
  iseof=(_c==EOF);
  if(iseof){
  __t_errcode=25;
  goto __t_failure;
  }
  c=_c;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1487t=c;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t551t(char** __t1488t, uint64_t* __t1489t, uint16_t* __t1490t, uint16_t* __t1491t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1488t=unsafe_ptr;
  *__t1489t=unsafe_size;
  *__t1490t=unsafe_offset;
  *__t1491t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1492t) {
  *__t1492t=to;
}

int str__t668t(const char* c, char** __t1493t, uint64_t* __t1494t, uint64_t* __t1495t, char* __t1496t) {
  char* __t669t__unsafe_ptr=0;
  uint64_t __t669t__unsafe_size=0;
  uint16_t __t669t__unsafe_offset=0;
  uint16_t __t669t__unsafe_align=0;
  char* __t670t__unsafe_ptr=0;
  uint64_t __t670t__unsafe_size=0;
  uint16_t __t670t__unsafe_offset=0;
  uint16_t __t670t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t671t__=0;
  uint64_t length=0;
  uint64_t __t672t=0;
  uint64_t __t673t__=0;
  uint64_t __t674t=0;
  char* __t675t__unsafe_ptr=0;
  uint64_t __t675t__dat__pos=0;
  uint64_t __t675t__dat__length=0;
  char __t675t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t551t(&__t669t__unsafe_ptr,&__t669t__unsafe_size,&__t669t__unsafe_offset,&__t669t__unsafe_align);
  __t670t__unsafe_ptr=__t669t__unsafe_ptr;
  __t670t__unsafe_size=__t669t__unsafe_size;
  __t670t__unsafe_offset=__t669t__unsafe_offset;
  __t670t__unsafe_align=__t669t__unsafe_align;
  buf__unsafe_ptr=__t670t__unsafe_ptr;
  buf__unsafe_size=__t670t__unsafe_size;
  buf__unsafe_offset=__t670t__unsafe_offset;
  buf__unsafe_align=__t670t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t671t__);
  buf__unsafe_ptr=__t671t__;
  if(c){
  length=strlen(c);
  }
  __t672t=1;
  add__t171t(length,__t672t,&__t673t__);
  buf__unsafe_size=__t673t__;
  __t674t=0;
  __t_errcode=str__t662t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t674t,length,&__t675t__unsafe_ptr,&__t675t__dat__pos,&__t675t__dat__length,&__t675t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1493t=__t675t__unsafe_ptr;
  *__t1494t=__t675t__dat__pos;
  *__t1495t=__t675t__dat__length;
  *__t1496t=__t675t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void eq__t679t(char x, char y, char* __t1497t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1497t=z;
}

static inline __attribute__((always_inline)) void len__t676t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1498t) {
  goto __t_return;
  __t_return:
  *__t1498t=s__dat__length;
}

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t1499t, uint64_t* __t1500t) {
  int __t462t=0;
  uint64_t __t463t=0;
  uint64_t _from=0;
  uint64_t __t464t=0;
  uint64_t from=0;
  __t463t=0;
  _from=__t463t;
  __t464t=_from;
  from=__t464t;
  goto __t_return;
  __t_return:
  *__t1499t=from;
  *__t1500t=to;
}

static inline __attribute__((always_inline)) int get__t477t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t1501t) {
  char __t478t__=0;
  char __t479t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(pos,r__to,&__t478t__);
  if(__t478t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t248t(pos,r__from,&__t479t__);
  if(__t479t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1501t=pos;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t819t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t1502t) {
  uint64_t __t820t__=0;
  char* __t821t__=0;
  add__t171t(s__dat__pos,i,&__t820t__);
  add__t504t(s__unsafe_ptr,__t820t__,&__t821t__);
  goto __t_return;
  __t_return:
  *__t1502t=__t821t__;
}

int contains__t957t(const char* _stack, char needle, char* __t1503t) {
  char* __t958t__unsafe_ptr=0;
  uint64_t __t958t__dat__pos=0;
  uint64_t __t958t__dat__length=0;
  char __t958t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char __t959t__=0;
  char __t960t=0;
  uint64_t __t961t=0;
  uint64_t __t962t__=0;
  uint64_t __t963t__from=0;
  uint64_t __t963t__to=0;
  char __t964t=0;
  uint64_t __t965t__=0;
  uint64_t i=0;
  char* __t966t__=0;
  char __t967t__value=0;
  char __t968t__=0;
  char __t969t=0;
  char __t970t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t668t(_stack,&__t958t__unsafe_ptr,&__t958t__dat__pos,&__t958t__dat__length,&__t958t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  stack__unsafe_ptr=__t958t__unsafe_ptr;
  stack__dat__pos=__t958t__dat__pos;
  stack__dat__length=__t958t__dat__length;
  stack__dat__first=__t958t__dat__first;
  eq__t679t(stack__dat__first,needle,&__t959t__);
  if(__t959t__){
  __t960t=1;
  goto __t_return;
  }
  len__t676t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t962t__);
  range__t461t(__t962t__,&__t963t__from,&__t963t__to);
  __t961t=0;
  while(1){
  __t_complain=get__t477t(__t963t__from,__t963t__to,__t961t,&__t965t__);
  __t964t=__t_complain;
  i=__t965t__;
  __t964t=__t964t==0;
  __t961t=__t961t+1;
  if(!__t964t){
  break;
  }
  get__t819t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,&__t966t__);
  if(!__t966t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t967t__value,__t966t__,1);
  eq__t679t(__t967t__value,needle,&__t968t__);
  if(__t968t__){
  __t969t=1;
  __t960t=__t969t;
  goto __t_return;
  }
  }
  __t970t=0;
  __t960t=__t970t;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1503t=__t960t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t678t(const char* s, char* __t1504t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t1504t=c;
}

static inline __attribute__((always_inline)) void is_number__t1078t(char c, char* __t1505t) {
  char ge=0;
  char le=0;
  char __t1079t=0;
  ge=(c>='0');
  le=(c<='9');
  if(ge){
  __t1079t=le;
  }
  goto __t_return;
  __t_return:
  *__t1505t=__t1079t;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1506t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1506t=__t72t__;
}

static inline __attribute__((always_inline)) void mul__t173t(double x, double y, double* __t1507t) {
  int __t174t__=0;
  double z=0;
  is_different__t70t(x,y,&__t174t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1507t=z;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t1508t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1508t=z;
}

static inline __attribute__((always_inline)) void sub__t322t(double x, double y, double* __t1509t) {
  int __t323t__=0;
  int __t324t=0;
  int __t325t=0;
  double z=0;
  is_different__t70t(x,y,&__t323t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t1509t=z;
}

static inline __attribute__((always_inline)) int float__t1080t(double* __t1510t) {
  char __t1081t=0;
  char __t1082t__=0;
  char __t1083t=0;
  char c=0;
  char __t1085t__=0;
  char __t1086t__=0;
  char __t1088t__=0;
  char __t1089t__=0;
  char neg=0;
  char __t1091t__=0;
  char __t1092t__=0;
  char __t1093t=0;
  char __t1094t__=0;
  char __t1095t__=0;
  double __t1096t=0;
  double __t1097t=0;
  double number=0;
  uint64_t __t1098t=0;
  uint64_t __t1099t=0;
  uint64_t digits=0;
  char __t1100t=0;
  char __t1101t=0;
  char eof=0;
  char __t1102t__=0;
  double digit=0;
  double __t1103t=0;
  double __t1104t__=0;
  double __t1105t__=0;
  uint64_t __t1106t=0;
  uint64_t __t1107t__=0;
  char __t1108t=0;
  char __t1109t__=0;
  char __t1110t__=0;
  char __t1112t__=0;
  char __t1113t__=0;
  char __t1114t__=0;
  char __t1115t=0;
  char __t1116t__=0;
  double __t1117t=0;
  double __t1118t=0;
  double base=0;
  char __t1119t__=0;
  double decimal_digit=0;
  double __t1120t__=0;
  double __t1121t__=0;
  double __t1122t=0;
  double __t1123t__=0;
  uint64_t __t1124t=0;
  uint64_t __t1125t__=0;
  char __t1126t=0;
  char __t1127t__=0;
  char __t1128t__=0;
  double __t1129t=0;
  double __t1130t__=0;
  uint64_t __t1131t=0;
  char __t1132t__=0;
  char __t1133t__=0;
  char __t1135t__=0;
  char __t1136t=0;
  char __t1137t__=0;
  char __t1138t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  while(1){
  __t_complain=char__t1077t(&__t1082t__);
  __t1081t=__t_complain;
  __t1083t=__t1082t__;
  c=__t1083t;
  __t1081t=__t1081t==0;
  if(!__t1081t){
  break;
  }
  __t_errcode=contains__t957t(__t1084t,c,&__t1085t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t27t(__t1085t__,&__t1086t__);
  if(__t1086t__){
  break;
  }
  }
  char__t678t(__t1087t,&__t1088t__);
  eq__t679t(c,__t1088t__,&__t1089t__);
  neg=__t1089t__;
  if(!neg){
  char__t678t(__t1090t,&__t1091t__);
  eq__t679t(c,__t1091t__,&__t1092t__);
  __t1093t=__t1092t__;
  }
  else{
  __t1093t=0;
  not__t27t(__t1093t,&__t1094t__);
  __t1093t=__t1094t__;
  }
  if(__t1093t){
  __t_errcode=char__t1077t(&__t1095t__);
  if(__t_errcode){
  goto __t_failure;
  }
  c=__t1095t__;
  }
  __t1096t=0.0;
  __t1097t=__t1096t;
  number=__t1097t;
  __t1098t=0;
  __t1099t=__t1098t;
  digits=__t1099t;
  __t1100t=0;
  __t1101t=__t1100t;
  eof=__t1101t;
  while(1){
  is_number__t1078t(c,&__t1102t__);
  if(!__t1102t__){
  break;
  }
  digit=(c-'0');
  __t1103t=10.0;
  mul__t173t(number,__t1103t,&__t1104t__);
  add__t149t(__t1104t__,digit,&__t1105t__);
  number=__t1105t__;
  __t1106t=1;
  add__t171t(digits,__t1106t,&__t1107t__);
  digits=__t1107t__;
  __t_complain=char__t1077t(&__t1109t__);
  __t1108t=__t_complain;
  c=__t1109t__;
  __t1108t=__t1108t==0;
  not__t27t(__t1108t,&__t1110t__);
  eof=__t1110t__;
  if(eof){
  break;
  }
  }
  char__t678t(__t1111t,&__t1112t__);
  eq__t679t(c,__t1112t__,&__t1113t__);
  if(__t1113t__){
  not__t27t(eof,&__t1114t__);
  __t1115t=__t1114t__;
  }
  if(__t1115t){
  __t_errcode=char__t1077t(&__t1116t__);
  if(__t_errcode){
  goto __t_failure;
  }
  c=__t1116t__;
  __t1117t=0.1;
  __t1118t=__t1117t;
  base=__t1118t;
  while(1){
  is_number__t1078t(c,&__t1119t__);
  if(!__t1119t__){
  break;
  }
  decimal_digit=(c-'0');
  mul__t173t(decimal_digit,base,&__t1120t__);
  add__t149t(number,__t1120t__,&__t1121t__);
  number=__t1121t__;
  __t1122t=0.1;
  mul__t173t(base,__t1122t,&__t1123t__);
  base=__t1123t__;
  __t1124t=1;
  add__t171t(digits,__t1124t,&__t1125t__);
  digits=__t1125t__;
  __t_complain=char__t1077t(&__t1127t__);
  __t1126t=__t_complain;
  c=__t1127t__;
  __t1126t=__t1126t==0;
  not__t27t(__t1126t,&__t1128t__);
  eof=__t1128t__;
  if(eof){
  break;
  }
  }
  }
  if(neg){
  __t1129t=0.0;
  sub__t322t(__t1129t,number,&__t1130t__);
  number=__t1130t__;
  }
  __t1131t=0;
  eq__t119t(digits,__t1131t,&__t1132t__);
  if(__t1132t__){
  while(1){
  not__t27t(eof,&__t1133t__);
  if(!__t1133t__){
  break;
  }
  __t_errcode=contains__t957t(__t1134t,c,&__t1135t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(__t1135t__){
  break;
  }
  __t_complain=char__t1077t(&__t1137t__);
  __t1136t=__t_complain;
  c=__t1137t__;
  __t1136t=__t1136t==0;
  not__t27t(__t1136t,&__t1138t__);
  eof=__t1138t__;
  }
  __t_errcode=26;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1510t=number;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1399t() {
  char* __t1403t__unsafe_ptr=0;
  uint64_t __t1403t__unsafe_size=0;
  uint16_t __t1403t__unsafe_offset=0;
  uint16_t __t1403t__unsafe_align=0;
  uint64_t __t1404t=0;
  char* __t1405t__unsafe_ptr=0;
  uint64_t __t1405t__unsafe_size=0;
  uint16_t __t1405t__unsafe_offset=0;
  uint16_t __t1405t__unsafe_align=0;
  char __t1406t____t511t__=0;
  char* __t1407t__buf__unsafe_ptr=0;
  uint64_t __t1407t__buf__unsafe_size=0;
  uint16_t __t1407t__buf__unsafe_offset=0;
  uint16_t __t1407t__buf__unsafe_align=0;
  uint64_t __t1407t__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  char* __t1410t__unsafe_ptr=0;
  uint64_t __t1410t__dat__pos=0;
  uint64_t __t1410t__dat__length=0;
  char __t1410t__dat__first=0;
  char* name__unsafe_ptr=0;
  uint64_t name__dat__pos=0;
  uint64_t name__dat__length=0;
  char name__dat__first=0;
  char __t1416t=0;
  double __t1419t__=0;
  double x=0;
  char __t1420t__=0;
  double __t1425t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t1070t();
  char____t_buffer____buffer__t1401t(&__t1403t__unsafe_ptr,&__t1403t__unsafe_size,&__t1403t__unsafe_offset,&__t1403t__unsafe_align);
  __t1404t=1024;
  __t_errcode=alloc__t509t(&__t1403t__unsafe_ptr,&__t1403t__unsafe_size,&__t1403t__unsafe_offset,&__t1403t__unsafe_align,__t1404t,&__t1405t__unsafe_ptr,&__t1405t__unsafe_size,&__t1405t__unsafe_offset,&__t1405t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t718t(&__t1405t__unsafe_ptr,&__t1405t__unsafe_size,&__t1405t__unsafe_offset,&__t1405t__unsafe_align,&__t1407t__buf__unsafe_ptr,&__t1407t__buf__unsafe_size,&__t1407t__buf__unsafe_offset,&__t1407t__buf__unsafe_align,&__t1407t__pos);
  mem__buf__unsafe_ptr=__t1407t__buf__unsafe_ptr;
  mem__buf__unsafe_size=__t1407t__buf__unsafe_size;
  mem__buf__unsafe_offset=__t1407t__buf__unsafe_offset;
  mem__buf__unsafe_align=__t1407t__buf__unsafe_align;
  mem__pos=__t1407t__pos;
  print__t369t(__t1408t);
  __t_errcode=str__t1141t(&mem__buf__unsafe_ptr,&mem__buf__unsafe_size,&mem__buf__unsafe_offset,&mem__buf__unsafe_align,&mem__pos,&__t1410t__unsafe_ptr,&__t1410t__dat__pos,&__t1410t__dat__length,&__t1410t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  name__unsafe_ptr=__t1410t__unsafe_ptr;
  name__dat__pos=__t1410t__dat__pos;
  name__dat__length=__t1410t__dat__length;
  name__dat__first=__t1410t__dat__first;
  print__t367t(__t1411t,__t1412t);
  print__t778t(name__unsafe_ptr,name__dat__pos,name__dat__length,name__dat__first,__t1414t);
  while(1){
  print__t369t(__t1417t);
  __t_complain=float__t1080t(&__t1419t__);
  __t1416t=__t_complain;
  x=__t1419t__;
  __t1416t=__t1416t==0;
  not__t27t(__t1416t,&__t1420t__);
  if(!__t1420t__){
  break;
  }
  print__t369t(__t1421t);
  }
  print__t369t(__t1423t);
  mul__t173t(x,x,&__t1425t__);
  print__t374t(__t1425t__);
  
  __t_failure:exists__t436t(__t1405t__unsafe_ptr,&__t1406t____t511t__);
  if(__t1406t____t511t__){
  free__t502t(&__t1405t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1399t();return 0;}