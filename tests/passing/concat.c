#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t370t="\n";
const char* const __t1379t="is";
const char* const __t1371t="my";
const char* const __t1375t="name";
const char* const __t1037t=" ";
const char* const __t1383t="manios";
const char* const __t1367t="hi";
static const char* __t_all_errcodes[38] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
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
"invalid float conversion from string without a value after the dot",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32"
};

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1338t(char** __t1399t, uint64_t* __t1400t, uint16_t* __t1401t, uint16_t* __t1402t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__t1399t=unsafe_ptr;
  *__t1400t=unsafe_size;
  *__t1401t=unsafe_offset;
  *__t1402t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1403t) {
  int value=0;
  *__t1403t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1404t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1404t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1405t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1405t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1406t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1406t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t1407t) {
  char* allocated=*__t1407t;
  if(allocated){
  free(allocated);
  }
  *__t1407t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1408t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1408t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t1409t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1409t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1410t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1410t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t1411t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1411t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1412t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1412t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t1413t) {
  char* allocated=0;
  char __t495t__=0;
  char __t496t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t435t(allocated,&__t495t__);
  not__t26t(__t495t__,&__t496t__);
  if(__t496t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1413t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t1414t, uint64_t* __t1415t, uint16_t* __t1416t, uint16_t* __t1417t, uint64_t size, char** __t1418t, uint64_t* __t1419t, uint16_t* __t1420t, uint16_t* __t1421t) {
  char* buffer__unsafe_ptr=*__t1414t;
  uint64_t buffer__unsafe_size=*__t1415t;
  uint16_t buffer__unsafe_offset=*__t1416t;
  uint16_t buffer__unsafe_align=*__t1417t;
  int __t509t=0;
  uint64_t __t510t=0;
  char __t511t__=0;
  uint64_t __t512t=0;
  char* ptr=0;
  char __t514t__=0;
  uint64_t __t515t=0;
  char __t516t__=0;
  uint64_t __t517t=0;
  uint64_t __t518t__=0;
  uint64_t __t519t__=0;
  char* __t521t__unsafe_ptr=0;
  uint64_t __t521t__unsafe_size=0;
  uint16_t __t521t__unsafe_offset=0;
  uint16_t __t521t__unsafe_align=0;
  uint64_t __t522t=0;
  char __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t bytes=0;
  uint64_t __t526t=0;
  char __t527t__=0;
  char* __t528t__=0;
  uint64_t __t529t=0;
  char* __t531t__unsafe_ptr=0;
  uint64_t __t531t__unsafe_size=0;
  uint16_t __t531t__unsafe_offset=0;
  uint16_t __t531t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t118t(buffer__unsafe_size,size,&__t514t__);
  if(__t514t__){
  __t515t=0;
  neq__t142t(size,__t515t,&__t516t__);
  if(__t516t__){
  __t517t=0;
  nat__t505t(buffer__unsafe_align,&__t518t__);
  mul__t194t(__t518t__,size,&__t519t__);
  zero__t502t(buffer__unsafe_ptr,__t517t,__t519t__);
  }
  __t521t__unsafe_ptr=buffer__unsafe_ptr;
  __t521t__unsafe_size=buffer__unsafe_size;
  __t521t__unsafe_offset=buffer__unsafe_offset;
  __t521t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t522t=0;
  neq__t142t(buffer__unsafe_size,__t522t,&__t523t__);
  if(__t523t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t524t__);
  mul__t194t(__t524t__,size,&__t525t__);
  bytes=__t525t__;
  __t526t=0;
  eq__t118t(bytes,__t526t,&__t527t__);
  if(__t527t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t494t(bytes,&__t528t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t528t__;
  __t529t=0;
  zero__t502t(buffer__unsafe_ptr,__t529t,bytes);
  __t531t__unsafe_ptr=buffer__unsafe_ptr;
  __t531t__unsafe_size=buffer__unsafe_size;
  __t531t__unsafe_offset=buffer__unsafe_offset;
  __t531t__unsafe_align=buffer__unsafe_align;
  __t521t__unsafe_ptr=__t531t__unsafe_ptr;
  __t521t__unsafe_size=__t531t__unsafe_size;
  __t521t__unsafe_offset=__t531t__unsafe_offset;
  __t521t__unsafe_align=__t531t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t510t=0;
  neq__t142t(__t521t__unsafe_size,__t510t,&__t511t__);
  if(__t511t__){
  __t521t__unsafe_size=0;
  __t521t__unsafe_size=__t521t__unsafe_size;
  __t521t__unsafe_ptr=__t521t__unsafe_ptr;
  free__t501t(&__t521t__unsafe_ptr);
  }
  __t_return:
  *__t1414t=buffer__unsafe_ptr;
  *__t1415t=buffer__unsafe_size;
  *__t1416t=buffer__unsafe_offset;
  *__t1417t=buffer__unsafe_align;
  *__t1418t=__t521t__unsafe_ptr;
  *__t1419t=__t521t__unsafe_size;
  *__t1420t=__t521t__unsafe_offset;
  *__t1421t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1422t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1422t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1423t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1423t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1424t) {
  *__t1424t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t1425t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t1425t=__t504t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1426t, uint64_t* __t1427t, uint16_t* __t1428t, uint16_t* __t1429t, uint64_t i, char** __t1430t) {
  char* buffer__unsafe_ptr=*__t1426t;
  uint64_t buffer__unsafe_size=*__t1427t;
  uint16_t buffer__unsafe_offset=*__t1428t;
  uint16_t buffer__unsafe_align=*__t1429t;
  char __t591t__=0;
  uint64_t __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  char* __t596t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t591t__);
  if(__t591t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t592t__);
  mul__t194t(i,__t592t__,&__t593t__);
  nat__t505t(buffer__unsafe_offset,&__t594t__);
  add__t170t(__t593t__,__t594t__,&__t595t__);
  add__t503t(buffer__unsafe_ptr,__t595t__,&__t596t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1426t=buffer__unsafe_ptr;
  *__t1427t=buffer__unsafe_size;
  *__t1428t=buffer__unsafe_offset;
  *__t1429t=buffer__unsafe_align;
  *__t1430t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t1431t, uint64_t* __t1432t, uint16_t* __t1433t, uint16_t* __t1434t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1431t=unsafe_ptr;
  *__t1432t=unsafe_size;
  *__t1433t=unsafe_offset;
  *__t1434t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1435t) {
  *__t1435t=to;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1436t) {
  char __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  char* __t603t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t598t__);
  if(__t598t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t599t__);
  mul__t194t(i,__t599t__,&__t600t__);
  nat__t505t(buffer__unsafe_offset,&__t601t__);
  add__t170t(__t600t__,__t601t__,&__t602t__);
  add__t503t(buffer__unsafe_ptr,__t602t__,&__t603t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1436t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1437t, uint64_t* __t1438t, uint64_t* __t1439t, char* __t1440t) {
  goto __t_return;
  __t_return:
  *__t1437t=unsafe_ptr;
  *__t1438t=dat__pos;
  *__t1439t=dat__length;
  *__t1440t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1441t, uint64_t* __t1442t, uint64_t* __t1443t, char* __t1444t) {
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
  nat__t505t(buf__unsafe_align,&__t637t__);
  __t638t=1;
  neq__t142t(__t637t__,__t638t,&__t639t__);
  if(__t639t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t505t(buf__unsafe_offset,&__t640t__);
  __t641t=0;
  neq__t142t(__t640t__,__t641t,&__t642t__);
  if(__t642t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t632t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t643t__unsafe_ptr,&__t643t__dat__pos,&__t643t__dat__length,&__t643t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1441t=__t643t__unsafe_ptr;
  *__t1442t=__t643t__dat__pos;
  *__t1443t=__t643t__dat__length;
  *__t1444t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1445t, uint64_t* __t1446t, uint64_t* __t1447t, char* __t1448t) {
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
  neq__t142t(length,__t669t,&__t670t__);
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
  *__t1445t=__t673t__unsafe_ptr;
  *__t1446t=__t673t__dat__pos;
  *__t1447t=__t673t__dat__length;
  *__t1448t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t1449t, uint64_t* __t1450t, uint64_t* __t1451t, char* __t1452t) {
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
  char____t_buffer____buffer__t558t(&__t675t__unsafe_ptr,&__t675t__unsafe_size,&__t675t__unsafe_offset,&__t675t__unsafe_align);
  __t676t__unsafe_ptr=__t675t__unsafe_ptr;
  __t676t__unsafe_size=__t675t__unsafe_size;
  __t676t__unsafe_offset=__t675t__unsafe_offset;
  __t676t__unsafe_align=__t675t__unsafe_align;
  buf__unsafe_ptr=__t676t__unsafe_ptr;
  buf__unsafe_size=__t676t__unsafe_size;
  buf__unsafe_offset=__t676t__unsafe_offset;
  buf__unsafe_align=__t676t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t21t(buf__unsafe_ptr,c,&__t677t__);
  buf__unsafe_ptr=__t677t__;
  if(c){
  length=strlen(c);
  }
  __t678t=1;
  add__t170t(length,__t678t,&__t679t__);
  buf__unsafe_size=__t679t__;
  __t680t=0;
  __t_errcode=str__t668t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t680t,length,&__t681t__unsafe_ptr,&__t681t__dat__pos,&__t681t__dat__length,&__t681t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1449t=__t681t__unsafe_ptr;
  *__t1450t=__t681t__dat__pos;
  *__t1451t=__t681t__dat__length;
  *__t1452t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t1453t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1453t=z;
}

static inline __attribute__((always_inline)) int nat16__t1309t(uint64_t x, uint16_t* __t1454t) {
  uint64_t __t1310t=0;
  char __t1311t__=0;
  uint16_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1310t=65535;
  gt__t271t(x,__t1310t,&__t1311t__);
  if(__t1311t__){
  __t_errcode=36;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1454t=value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int strdat__t1316t(uint64_t _pos, uint64_t _length, uint16_t* __t1455t, uint16_t* __t1456t) {
  uint16_t __t1317t__=0;
  uint16_t pos=0;
  uint16_t __t1318t__=0;
  uint16_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat16__t1309t(_pos,&__t1317t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1317t__;
  __t_errcode=nat16__t1309t(_length,&__t1318t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1318t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1455t=pos;
  *__t1456t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1319t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __t1457t, uint16_t* __t1458t, uint16_t* __t1459t) {
  char* unsafe_ptr=0;
  uint16_t __t1320t__pos=0;
  uint16_t __t1320t__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __t_errcode=strdat__t1316t(s__dat__pos,s__dat__length,&__t1320t__pos,&__t1320t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  dat__pos=__t1320t__pos;
  dat__length=__t1320t__length;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1457t=unsafe_ptr;
  *__t1458t=dat__pos;
  *__t1459t=dat__length;
  
  return __t_errcode;
}

int str__t1322t(const char* s, char** __t1460t, uint16_t* __t1461t, uint16_t* __t1462t) {
  char* __t1323t__unsafe_ptr=0;
  uint64_t __t1323t__dat__pos=0;
  uint64_t __t1323t__dat__length=0;
  char __t1323t__dat__first=0;
  char* __t1324t__unsafe_ptr=0;
  uint16_t __t1324t__dat__pos=0;
  uint16_t __t1324t__dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t674t(s,&__t1323t__unsafe_ptr,&__t1323t__dat__pos,&__t1323t__dat__length,&__t1323t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1319t(__t1323t__unsafe_ptr,__t1323t__dat__pos,__t1323t__dat__length,__t1323t__dat__first,&__t1324t__unsafe_ptr,&__t1324t__dat__pos,&__t1324t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1460t=__t1324t__unsafe_ptr;
  *__t1461t=__t1324t__dat__pos;
  *__t1462t=__t1324t__dat__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1341t(char** __t1463t, uint64_t* __t1464t, uint16_t* __t1465t, uint16_t* __t1466t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1463t=unsafe_ptr;
  *__t1464t=unsafe_size;
  *__t1465t=unsafe_offset;
  *__t1466t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t479t(uint64_t x, uint64_t* __t1467t) {
  uint64_t __t480t=0;
  uint64_t __t481t__=0;
  __t480t=1024;
  mul__t194t(x,__t480t,&__t481t__);
  goto __t_return;
  __t_return:
  *__t1467t=__t481t__;
}

static inline __attribute__((always_inline)) void bufpos__t718t(char** __t1468t, uint64_t* __t1469t, uint16_t* __t1470t, uint16_t* __t1471t, char** __t1472t, uint64_t* __t1473t, uint16_t* __t1474t, uint16_t* __t1475t, uint64_t* __t1476t) {
  char* buf__unsafe_ptr=*__t1468t;
  uint64_t buf__unsafe_size=*__t1469t;
  uint16_t buf__unsafe_offset=*__t1470t;
  uint16_t buf__unsafe_align=*__t1471t;
  uint64_t __t719t=0;
  uint64_t __t720t=0;
  uint64_t pos=0;
  __t719t=0;
  __t720t=__t719t;
  pos=__t720t;
  goto __t_return;
  __t_return:
  *__t1468t=buf__unsafe_ptr;
  *__t1469t=buf__unsafe_size;
  *__t1470t=buf__unsafe_offset;
  *__t1471t=buf__unsafe_align;
  *__t1472t=buf__unsafe_ptr;
  *__t1473t=buf__unsafe_size;
  *__t1474t=buf__unsafe_offset;
  *__t1475t=buf__unsafe_align;
  *__t1476t=pos;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1477t) {
  goto __t_return;
  __t_return:
  *__t1477t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t460t(uint64_t to, uint64_t* __t1478t, uint64_t* __t1479t) {
  int __t461t=0;
  uint64_t __t462t=0;
  uint64_t _from=0;
  uint64_t __t463t=0;
  uint64_t from=0;
  __t462t=0;
  _from=__t462t;
  __t463t=_from;
  from=__t463t;
  goto __t_return;
  __t_return:
  *__t1478t=from;
  *__t1479t=to;
}

static inline __attribute__((always_inline)) int next__t469t(uint64_t* __t1480t, uint64_t r__to, uint64_t* __t1481t) {
  uint64_t r__from=*__t1480t;
  char __t470t__=0;
  uint64_t ret=0;
  uint64_t __t471t=0;
  uint64_t __t472t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(r__from,r__to,&__t470t__);
  if(__t470t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t471t=1;
  add__t170t(ret,__t471t,&__t472t__);
  r__from=__t472t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1480t=r__from;
  *__t1481t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t634t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t1482t, uint64_t* __t1483t, uint64_t* __t1484t, char* __t1485t) {
  char* first_pos=0;
  char first=0;
  char* __t635t__unsafe_ptr=0;
  uint64_t __t635t__dat__pos=0;
  uint64_t __t635t__dat__length=0;
  char __t635t__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__t632t(unsafe_ptr,pos,length,first,&__t635t__unsafe_ptr,&__t635t__dat__pos,&__t635t__dat__length,&__t635t__dat__first);
  goto __t_return;
  __t_return:
  *__t1482t=__t635t__unsafe_ptr;
  *__t1483t=__t635t__dat__pos;
  *__t1484t=__t635t__dat__length;
  *__t1485t=__t635t__dat__first;
}

static inline __attribute__((always_inline)) void unpack__t1325t(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __t1486t, uint64_t* __t1487t, uint64_t* __t1488t, char* __t1489t) {
  uint64_t __t1326t__=0;
  uint64_t __t1327t__=0;
  char* __t1328t__unsafe_ptr=0;
  uint64_t __t1328t__dat__pos=0;
  uint64_t __t1328t__dat__length=0;
  char __t1328t__dat__first=0;
  nat__t505t(m__dat__pos,&__t1326t__);
  nat__t505t(m__dat__length,&__t1327t__);
  str__t634t(m__unsafe_ptr,__t1326t__,__t1327t__,&__t1328t__unsafe_ptr,&__t1328t__dat__pos,&__t1328t__dat__length,&__t1328t__dat__first);
  goto __t_return;
  __t_return:
  *__t1486t=__t1328t__unsafe_ptr;
  *__t1487t=__t1328t__dat__pos;
  *__t1488t=__t1328t__dat__length;
  *__t1489t=__t1328t__dat__first;
}

static inline __attribute__((always_inline)) void str__t667t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1490t, uint64_t* __t1491t, uint64_t* __t1492t, char* __t1493t) {
  goto __t_return;
  __t_return:
  *__t1490t=other__unsafe_ptr;
  *__t1491t=other__dat__pos;
  *__t1492t=other__dat__length;
  *__t1493t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1494t) {
  goto __t_return;
  __t_return:
  *__t1494t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__t742t(char** __t1495t, uint64_t* __t1496t, uint16_t* __t1497t, uint16_t* __t1498t, uint64_t* __t1499t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1500t, uint64_t* __t1501t, uint64_t* __t1502t, char* __t1503t) {
  char* buf__unsafe_ptr=*__t1495t;
  uint64_t buf__unsafe_size=*__t1496t;
  uint16_t buf__unsafe_offset=*__t1497t;
  uint16_t buf__unsafe_align=*__t1498t;
  uint64_t pos=*__t1499t;
  char* __t743t__unsafe_ptr=0;
  uint64_t __t743t__dat__pos=0;
  uint64_t __t743t__dat__length=0;
  char __t743t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t744t__=0;
  uint64_t __t745t__=0;
  uint64_t next_pos=0;
  uint64_t __t746t__=0;
  char __t747t__=0;
  uint64_t __t748t=0;
  uint64_t __t749t__=0;
  uint64_t prev_pos=0;
  char* __t750t__unsafe_ptr=0;
  uint64_t __t750t__dat__pos=0;
  uint64_t __t750t__dat__length=0;
  char __t750t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t667t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t743t__unsafe_ptr,&__t743t__dat__pos,&__t743t__dat__length,&__t743t__dat__first);
  other__unsafe_ptr=__t743t__unsafe_ptr;
  other__dat__pos=__t743t__dat__pos;
  other__dat__length=__t743t__dat__length;
  other__dat__first=__t743t__dat__first;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t744t__);
  add__t170t(pos,__t744t__,&__t745t__);
  next_pos=__t745t__;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t746t__);
  gt__t271t(next_pos,__t746t__,&__t747t__);
  if(__t747t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t748t=0;
  add__t170t(pos,__t748t,&__t749t__);
  prev_pos=__t749t__;
  pos=next_pos;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t750t__unsafe_ptr,&__t750t__dat__pos,&__t750t__dat__length,&__t750t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1495t=buf__unsafe_ptr;
  *__t1496t=buf__unsafe_size;
  *__t1497t=buf__unsafe_offset;
  *__t1498t=buf__unsafe_align;
  *__t1499t=pos;
  *__t1500t=__t750t__unsafe_ptr;
  *__t1501t=__t750t__dat__pos;
  *__t1502t=__t750t__dat__length;
  *__t1503t=__t750t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t751t(char** __t1504t, uint64_t* __t1505t, uint16_t* __t1506t, uint16_t* __t1507t, uint64_t* __t1508t, const char* _other, char** __t1509t, uint64_t* __t1510t, uint64_t* __t1511t, char* __t1512t) {
  char* buf__unsafe_ptr=*__t1504t;
  uint64_t buf__unsafe_size=*__t1505t;
  uint16_t buf__unsafe_offset=*__t1506t;
  uint16_t buf__unsafe_align=*__t1507t;
  uint64_t pos=*__t1508t;
  char* __t752t__unsafe_ptr=0;
  uint64_t __t752t__dat__pos=0;
  uint64_t __t752t__dat__length=0;
  char __t752t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t753t__=0;
  uint64_t __t754t__=0;
  uint64_t next_pos=0;
  uint64_t __t755t__=0;
  char __t756t__=0;
  uint64_t __t757t=0;
  uint64_t __t758t__=0;
  uint64_t prev_pos=0;
  char* __t759t__unsafe_ptr=0;
  uint64_t __t759t__dat__pos=0;
  uint64_t __t759t__dat__length=0;
  char __t759t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t674t(_other,&__t752t__unsafe_ptr,&__t752t__dat__pos,&__t752t__dat__length,&__t752t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t752t__unsafe_ptr;
  other__dat__pos=__t752t__dat__pos;
  other__dat__length=__t752t__dat__length;
  other__dat__first=__t752t__dat__first;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t753t__);
  add__t170t(pos,__t753t__,&__t754t__);
  next_pos=__t754t__;
  len__t604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t755t__);
  gt__t271t(next_pos,__t755t__,&__t756t__);
  if(__t756t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t757t=0;
  add__t170t(pos,__t757t,&__t758t__);
  prev_pos=__t758t__;
  pos=next_pos;
  __t_errcode=str__t636t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t759t__unsafe_ptr,&__t759t__dat__pos,&__t759t__dat__length,&__t759t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1504t=buf__unsafe_ptr;
  *__t1505t=buf__unsafe_size;
  *__t1506t=buf__unsafe_offset;
  *__t1507t=buf__unsafe_align;
  *__t1508t=pos;
  *__t1509t=__t759t__unsafe_ptr;
  *__t1510t=__t759t__dat__pos;
  *__t1511t=__t759t__dat__length;
  *__t1512t=__t759t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1340t(char* buff__unsafe_ptr, uint64_t buff__unsafe_size, uint16_t buff__unsafe_offset, uint16_t buff__unsafe_align, char** __t1513t, uint64_t* __t1514t, uint64_t* __t1515t, char* __t1516t) {
  char* __t1343t__unsafe_ptr=0;
  uint64_t __t1343t__unsafe_size=0;
  uint16_t __t1343t__unsafe_offset=0;
  uint16_t __t1343t__unsafe_align=0;
  uint64_t __t1344t=0;
  uint64_t __t1345t__=0;
  char* __t1346t__unsafe_ptr=0;
  uint64_t __t1346t__unsafe_size=0;
  uint16_t __t1346t__unsafe_offset=0;
  uint16_t __t1346t__unsafe_align=0;
  uint64_t __t1347t____t510t=0;
  char __t1347t____t511t__=0;
  char* __t1348t__buf__unsafe_ptr=0;
  uint64_t __t1348t__buf__unsafe_size=0;
  uint16_t __t1348t__buf__unsafe_offset=0;
  uint16_t __t1348t__buf__unsafe_align=0;
  uint64_t __t1348t__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __t1349t__=0;
  uint64_t __t1350t__from=0;
  uint64_t __t1350t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __t1351t=0;
  uint64_t __t1352t__=0;
  uint64_t i=0;
  char* __t1353t__=0;
  char* __t1354t__unsafe_ptr=0;
  uint16_t __t1354t__dat__pos=0;
  uint16_t __t1354t__dat__length=0;
  char* __t1355t__unsafe_ptr=0;
  uint64_t __t1355t__dat__pos=0;
  uint64_t __t1355t__dat__length=0;
  char __t1355t__dat__first=0;
  char* __t1356t__unsafe_ptr=0;
  uint64_t __t1356t__dat__pos=0;
  uint64_t __t1356t__dat__length=0;
  char __t1356t__dat__first=0;
  char* __t1357t__unsafe_ptr=0;
  uint64_t __t1357t__dat__pos=0;
  uint64_t __t1357t__dat__length=0;
  char __t1357t__dat__first=0;
  char* __t1358t__unsafe_ptr=0;
  uint64_t __t1358t__dat__pos=0;
  uint64_t __t1358t__dat__length=0;
  char __t1358t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1341t(&__t1343t__unsafe_ptr,&__t1343t__unsafe_size,&__t1343t__unsafe_offset,&__t1343t__unsafe_align);
  __t1344t=4;
  KB__t479t(__t1344t,&__t1345t__);
  __t_errcode=alloc__t508t(&__t1343t__unsafe_ptr,&__t1343t__unsafe_size,&__t1343t__unsafe_offset,&__t1343t__unsafe_align,__t1345t__,&__t1346t__unsafe_ptr,&__t1346t__unsafe_size,&__t1346t__unsafe_offset,&__t1346t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t718t(&__t1346t__unsafe_ptr,&__t1346t__unsafe_size,&__t1346t__unsafe_offset,&__t1346t__unsafe_align,&__t1348t__buf__unsafe_ptr,&__t1348t__buf__unsafe_size,&__t1348t__buf__unsafe_offset,&__t1348t__buf__unsafe_align,&__t1348t__pos);
  mem__pos=__t1348t__pos;
  len__t604t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1349t__);
  range__t460t(__t1349t__,&__t1350t__from,&__t1350t__to);
  iter__from=__t1350t__from;
  iter__to=__t1350t__to;
  start=mem__pos;
  while(1){
  __t_complain=next__t469t(&iter__from,iter__to,&__t1352t__);
  __t1351t=__t_complain;
  i=__t1352t__;
  __t1351t=__t1351t==0;
  if(!__t1351t){
  break;
  }
  __t_errcode=get__t597t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__t1353t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1353t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1354t__unsafe_ptr,__t1353t__,8);
  memcpy(&__t1354t__dat__pos,__t1353t__+8,2);
  memcpy(&__t1354t__dat__length,__t1353t__+10,2);
  unpack__t1325t(__t1354t__unsafe_ptr,__t1354t__dat__pos,__t1354t__dat__length,&__t1355t__unsafe_ptr,&__t1355t__dat__pos,&__t1355t__dat__length,&__t1355t__dat__first);
  __t_errcode=copy__t742t(&__t1346t__unsafe_ptr,&__t1346t__unsafe_size,&__t1346t__unsafe_offset,&__t1346t__unsafe_align,&mem__pos,__t1355t__unsafe_ptr,__t1355t__dat__pos,__t1355t__dat__length,__t1355t__dat__first,&__t1356t__unsafe_ptr,&__t1356t__dat__pos,&__t1356t__dat__length,&__t1356t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t751t(&__t1346t__unsafe_ptr,&__t1346t__unsafe_size,&__t1346t__unsafe_offset,&__t1346t__unsafe_align,&mem__pos,__t1037t,&__t1357t__unsafe_ptr,&__t1357t__dat__pos,&__t1357t__dat__length,&__t1357t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=str__t668t(__t1346t__unsafe_ptr,__t1346t__unsafe_size,__t1346t__unsafe_offset,__t1346t__unsafe_align,start,mem__pos,&__t1358t__unsafe_ptr,&__t1358t__dat__pos,&__t1358t__dat__length,&__t1358t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1358t__unsafe_ptr=__t1346t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:__t1347t____t510t=0;
  neq__t142t(__t1346t__unsafe_size,__t1347t____t510t,&__t1347t____t511t__);
  if(__t1347t____t511t__){
  __t1346t__unsafe_size=0;
  __t1346t__unsafe_size=__t1346t__unsafe_size;
  __t1358t__unsafe_ptr=__t1358t__unsafe_ptr;
  free__t501t(&__t1358t__unsafe_ptr);
  }
  __t_return:
  *__t1513t=__t1358t__unsafe_ptr;
  *__t1514t=__t1358t__dat__pos;
  *__t1515t=__t1358t__dat__length;
  *__t1516t=__t1358t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t379t(uint64_t value, const char* endl) {
  int __t380t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t784t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t785t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1359t() {
  char* __t1360t__unsafe_ptr=0;
  uint64_t __t1360t__unsafe_size=0;
  uint16_t __t1360t__unsafe_offset=0;
  uint16_t __t1360t__unsafe_align=0;
  char* __t1361t__unsafe_ptr=0;
  uint64_t __t1361t__unsafe_size=0;
  uint16_t __t1361t__unsafe_offset=0;
  uint16_t __t1361t__unsafe_align=0;
  uint64_t __t1362t=0;
  char* __t1363t__unsafe_ptr=0;
  uint64_t __t1363t__unsafe_size=0;
  uint16_t __t1363t__unsafe_offset=0;
  uint16_t __t1363t__unsafe_align=0;
  uint64_t __t1364t____t510t=0;
  char __t1364t____t511t__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __t1365t=0;
  char* __t1366t__=0;
  char* __t1368t__unsafe_ptr=0;
  uint16_t __t1368t__dat__pos=0;
  uint16_t __t1368t__dat__length=0;
  uint64_t __t1369t=0;
  char* __t1370t__=0;
  char* __t1372t__unsafe_ptr=0;
  uint16_t __t1372t__dat__pos=0;
  uint16_t __t1372t__dat__length=0;
  uint64_t __t1373t=0;
  char* __t1374t__=0;
  char* __t1376t__unsafe_ptr=0;
  uint16_t __t1376t__dat__pos=0;
  uint16_t __t1376t__dat__length=0;
  uint64_t __t1377t=0;
  char* __t1378t__=0;
  char* __t1380t__unsafe_ptr=0;
  uint16_t __t1380t__dat__pos=0;
  uint16_t __t1380t__dat__length=0;
  uint64_t __t1381t=0;
  char* __t1382t__=0;
  char* __t1384t__unsafe_ptr=0;
  uint16_t __t1384t__dat__pos=0;
  uint16_t __t1384t__dat__length=0;
  uint64_t __t1385t=0;
  char* __t1386t__=0;
  char* __t1387t__unsafe_ptr=0;
  uint64_t __t1387t__dat__pos=0;
  uint64_t __t1387t__dat__length=0;
  char __t1387t__dat__first=0;
  uint64_t __t1388t____t1347t____t510t=0;
  uint64_t __t1388t____t1346t__unsafe_size=0;
  char __t1388t____t1347t____t511t__=0;
  char* __t1389t__unsafe_ptr=0;
  uint16_t __t1389t__dat__pos=0;
  uint16_t __t1389t__dat__length=0;
  uint64_t __t1390t__=0;
  uint64_t __t1391t__from=0;
  uint64_t __t1391t__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __t1392t=0;
  uint64_t __t1393t__=0;
  uint64_t j=0;
  char* __t1395t__=0;
  char* __t1396t__unsafe_ptr=0;
  uint16_t __t1396t__dat__pos=0;
  uint16_t __t1396t__dat__length=0;
  char* __t1397t__unsafe_ptr=0;
  uint64_t __t1397t__dat__pos=0;
  uint64_t __t1397t__dat__length=0;
  char __t1397t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t1338t(&__t1360t__unsafe_ptr,&__t1360t__unsafe_size,&__t1360t__unsafe_offset,&__t1360t__unsafe_align);
  __t1361t__unsafe_ptr=__t1360t__unsafe_ptr;
  __t1361t__unsafe_size=__t1360t__unsafe_size;
  __t1361t__unsafe_offset=__t1360t__unsafe_offset;
  __t1361t__unsafe_align=__t1360t__unsafe_align;
  __t1362t=6;
  __t_errcode=alloc__t508t(&__t1361t__unsafe_ptr,&__t1361t__unsafe_size,&__t1361t__unsafe_offset,&__t1361t__unsafe_align,__t1362t,&__t1363t__unsafe_ptr,&__t1363t__unsafe_size,&__t1363t__unsafe_offset,&__t1363t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buff__unsafe_ptr=__t1363t__unsafe_ptr;
  buff__unsafe_size=__t1363t__unsafe_size;
  buff__unsafe_offset=__t1363t__unsafe_offset;
  buff__unsafe_align=__t1363t__unsafe_align;
  __t1365t=0;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1365t,&__t1366t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1322t(__t1367t,&__t1368t__unsafe_ptr,&__t1368t__dat__pos,&__t1368t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1366t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1366t__,&__t1368t__unsafe_ptr,8);
  memcpy(__t1366t__+8,&__t1368t__dat__pos,2);
  memcpy(__t1366t__+10,&__t1368t__dat__length,2);
  __t1369t=1;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1369t,&__t1370t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1322t(__t1371t,&__t1372t__unsafe_ptr,&__t1372t__dat__pos,&__t1372t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1370t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1370t__,&__t1372t__unsafe_ptr,8);
  memcpy(__t1370t__+8,&__t1372t__dat__pos,2);
  memcpy(__t1370t__+10,&__t1372t__dat__length,2);
  __t1373t=2;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1373t,&__t1374t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1322t(__t1375t,&__t1376t__unsafe_ptr,&__t1376t__dat__pos,&__t1376t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1374t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1374t__,&__t1376t__unsafe_ptr,8);
  memcpy(__t1374t__+8,&__t1376t__dat__pos,2);
  memcpy(__t1374t__+10,&__t1376t__dat__length,2);
  __t1377t=3;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1377t,&__t1378t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1322t(__t1379t,&__t1380t__unsafe_ptr,&__t1380t__dat__pos,&__t1380t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1378t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1378t__,&__t1380t__unsafe_ptr,8);
  memcpy(__t1378t__+8,&__t1380t__dat__pos,2);
  memcpy(__t1378t__+10,&__t1380t__dat__length,2);
  __t1381t=4;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1381t,&__t1382t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1322t(__t1383t,&__t1384t__unsafe_ptr,&__t1384t__dat__pos,&__t1384t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1382t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1382t__,&__t1384t__unsafe_ptr,8);
  memcpy(__t1382t__+8,&__t1384t__dat__pos,2);
  memcpy(__t1382t__+10,&__t1384t__dat__length,2);
  __t1385t=5;
  __t_errcode=mutget__t590t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1385t,&__t1386t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=concat__t1340t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1387t__unsafe_ptr,&__t1387t__dat__pos,&__t1387t__dat__length,&__t1387t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1319t(__t1387t__unsafe_ptr,__t1387t__dat__pos,__t1387t__dat__length,__t1387t__dat__first,&__t1389t__unsafe_ptr,&__t1389t__dat__pos,&__t1389t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1386t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1386t__,&__t1389t__unsafe_ptr,8);
  memcpy(__t1386t__+8,&__t1389t__dat__pos,2);
  memcpy(__t1386t__+10,&__t1389t__dat__length,2);
  len__t604t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1390t__);
  range__t460t(__t1390t__,&__t1391t__from,&__t1391t__to);
  full_iter__from=__t1391t__from;
  full_iter__to=__t1391t__to;
  while(1){
  __t_complain=next__t469t(&full_iter__from,full_iter__to,&__t1393t__);
  __t1392t=__t_complain;
  j=__t1393t__;
  __t1392t=__t1392t==0;
  if(!__t1392t){
  break;
  }
  print__t379t(j,__t1037t);
  __t_errcode=get__t597t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__t1395t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1395t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1396t__unsafe_ptr,__t1395t__,8);
  memcpy(&__t1396t__dat__pos,__t1395t__+8,2);
  memcpy(&__t1396t__dat__length,__t1395t__+10,2);
  unpack__t1325t(__t1396t__unsafe_ptr,__t1396t__dat__pos,__t1396t__dat__length,&__t1397t__unsafe_ptr,&__t1397t__dat__pos,&__t1397t__dat__length,&__t1397t__dat__first);
  print__t784t(__t1397t__unsafe_ptr,__t1397t__dat__pos,__t1397t__dat__length,__t1397t__dat__first);
  }
  
  __t_failure:__t1388t____t1347t____t510t=0;
  neq__t142t(__t1388t____t1346t__unsafe_size,__t1388t____t1347t____t510t,&__t1388t____t1347t____t511t__);
  if(__t1388t____t1347t____t511t__){
  __t1388t____t1346t__unsafe_size=0;
  __t1388t____t1346t__unsafe_size=__t1388t____t1346t__unsafe_size;
  __t1387t__unsafe_ptr=__t1387t__unsafe_ptr;
  free__t501t(&__t1387t__unsafe_ptr);
  }
  __t1364t____t510t=0;
  neq__t142t(__t1363t__unsafe_size,__t1364t____t510t,&__t1364t____t511t__);
  if(__t1364t____t511t__){
  __t1363t__unsafe_size=0;
  __t1363t__unsafe_size=__t1363t__unsafe_size;
  __t1363t__unsafe_ptr=__t1363t__unsafe_ptr;
  free__t501t(&__t1363t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1359t();return 0;}