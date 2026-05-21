#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1312t="-------------------";
const char* const __t1317t="surnname  ";
const char* const __t1314t="name      ";
const char* const __t370t="\n";
const char* const __t1341t="mario";
const char* const __t362t="";
const char* const __t1339t="it's a me";
static const char* __t_all_errcodes[36] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void Person____t_buffer____buffer__t1322t(char** __t1364t, uint64_t* __t1365t, uint16_t* __t1366t, uint16_t* __t1367t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__t1364t=unsafe_ptr;
  *__t1365t=unsafe_size;
  *__t1366t=unsafe_offset;
  *__t1367t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1368t) {
  int value=0;
  *__t1368t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1369t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1369t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1370t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1370t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1371t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1371t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t1372t) {
  char* allocated=*__t1372t;
  if(allocated){
  free(allocated);
  }
  *__t1372t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1373t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1373t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t1374t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1374t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1375t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1375t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t1376t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1376t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1377t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1377t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t1378t) {
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
  *__t1378t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t1379t, uint64_t* __t1380t, uint16_t* __t1381t, uint16_t* __t1382t, uint64_t size, char** __t1383t, uint64_t* __t1384t, uint16_t* __t1385t, uint16_t* __t1386t) {
  char* buffer__unsafe_ptr=*__t1379t;
  uint64_t buffer__unsafe_size=*__t1380t;
  uint16_t buffer__unsafe_offset=*__t1381t;
  uint16_t buffer__unsafe_align=*__t1382t;
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
  *__t1379t=buffer__unsafe_ptr;
  *__t1380t=buffer__unsafe_size;
  *__t1381t=buffer__unsafe_offset;
  *__t1382t=buffer__unsafe_align;
  *__t1383t=__t521t__unsafe_ptr;
  *__t1384t=__t521t__unsafe_size;
  *__t1385t=__t521t__unsafe_offset;
  *__t1386t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1328t(char** __t1387t, uint64_t* __t1388t, uint16_t* __t1389t, uint16_t* __t1390t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1387t=unsafe_ptr;
  *__t1388t=unsafe_size;
  *__t1389t=unsafe_offset;
  *__t1390t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t479t(uint64_t x, uint64_t* __t1391t) {
  uint64_t __t480t=0;
  uint64_t __t481t__=0;
  __t480t=1024;
  mul__t194t(x,__t480t,&__t481t__);
  goto __t_return;
  __t_return:
  *__t1391t=__t481t__;
}

static inline __attribute__((always_inline)) void bufpos__t718t(char** __t1392t, uint64_t* __t1393t, uint16_t* __t1394t, uint16_t* __t1395t, char** __t1396t, uint64_t* __t1397t, uint16_t* __t1398t, uint16_t* __t1399t, uint64_t* __t1400t) {
  char* buf__unsafe_ptr=*__t1392t;
  uint64_t buf__unsafe_size=*__t1393t;
  uint16_t buf__unsafe_offset=*__t1394t;
  uint16_t buf__unsafe_align=*__t1395t;
  uint64_t __t719t=0;
  uint64_t __t720t=0;
  uint64_t pos=0;
  __t719t=0;
  __t720t=__t719t;
  pos=__t720t;
  goto __t_return;
  __t_return:
  *__t1392t=buf__unsafe_ptr;
  *__t1393t=buf__unsafe_size;
  *__t1394t=buf__unsafe_offset;
  *__t1395t=buf__unsafe_align;
  *__t1396t=buf__unsafe_ptr;
  *__t1397t=buf__unsafe_size;
  *__t1398t=buf__unsafe_offset;
  *__t1399t=buf__unsafe_align;
  *__t1400t=pos;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1401t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1401t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1402t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1402t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1403t) {
  *__t1403t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t1404t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t1404t=__t504t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1405t, uint64_t* __t1406t, uint16_t* __t1407t, uint16_t* __t1408t, uint64_t i, char** __t1409t) {
  char* buffer__unsafe_ptr=*__t1405t;
  uint64_t buffer__unsafe_size=*__t1406t;
  uint16_t buffer__unsafe_offset=*__t1407t;
  uint16_t buffer__unsafe_align=*__t1408t;
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
  *__t1405t=buffer__unsafe_ptr;
  *__t1406t=buffer__unsafe_size;
  *__t1407t=buffer__unsafe_offset;
  *__t1408t=buffer__unsafe_align;
  *__t1409t=__t596t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t1410t, uint64_t* __t1411t, uint16_t* __t1412t, uint16_t* __t1413t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1410t=unsafe_ptr;
  *__t1411t=unsafe_size;
  *__t1412t=unsafe_offset;
  *__t1413t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1414t) {
  *__t1414t=to;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1415t) {
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
  *__t1415t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1416t, uint64_t* __t1417t, uint64_t* __t1418t, char* __t1419t) {
  goto __t_return;
  __t_return:
  *__t1416t=unsafe_ptr;
  *__t1417t=dat__pos;
  *__t1418t=dat__length;
  *__t1419t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1420t, uint64_t* __t1421t, uint64_t* __t1422t, char* __t1423t) {
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
  *__t1420t=__t643t__unsafe_ptr;
  *__t1421t=__t643t__dat__pos;
  *__t1422t=__t643t__dat__length;
  *__t1423t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1424t, uint64_t* __t1425t, uint64_t* __t1426t, char* __t1427t) {
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
  *__t1424t=__t673t__unsafe_ptr;
  *__t1425t=__t673t__dat__pos;
  *__t1426t=__t673t__dat__length;
  *__t1427t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t1428t, uint64_t* __t1429t, uint64_t* __t1430t, char* __t1431t) {
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
  *__t1428t=__t681t__unsafe_ptr;
  *__t1429t=__t681t__dat__pos;
  *__t1430t=__t681t__dat__length;
  *__t1431t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1432t) {
  goto __t_return;
  __t_return:
  *__t1432t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1433t) {
  goto __t_return;
  __t_return:
  *__t1433t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t1434t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1434t=z;
}

int copy__t751t(char** __t1435t, uint64_t* __t1436t, uint16_t* __t1437t, uint16_t* __t1438t, uint64_t* __t1439t, const char* _other, char** __t1440t, uint64_t* __t1441t, uint64_t* __t1442t, char* __t1443t) {
  char* buf__unsafe_ptr=*__t1435t;
  uint64_t buf__unsafe_size=*__t1436t;
  uint16_t buf__unsafe_offset=*__t1437t;
  uint16_t buf__unsafe_align=*__t1438t;
  uint64_t pos=*__t1439t;
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
  *__t1435t=buf__unsafe_ptr;
  *__t1436t=buf__unsafe_size;
  *__t1437t=buf__unsafe_offset;
  *__t1438t=buf__unsafe_align;
  *__t1439t=pos;
  *__t1440t=__t759t__unsafe_ptr;
  *__t1441t=__t759t__dat__pos;
  *__t1442t=__t759t__dat__length;
  *__t1443t=__t759t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Person__t1309t(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __t1444t, uint64_t* __t1445t, uint64_t* __t1446t, char* __t1447t, char** __t1448t, uint64_t* __t1449t, uint64_t* __t1450t, char* __t1451t) {
  goto __t_return;
  __t_return:
  *__t1444t=name__unsafe_ptr;
  *__t1445t=name__dat__pos;
  *__t1446t=name__dat__length;
  *__t1447t=name__dat__first;
  *__t1448t=surname__unsafe_ptr;
  *__t1449t=surname__dat__pos;
  *__t1450t=surname__dat__length;
  *__t1451t=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__t368t(const char* value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t366t(const char* value, const char* endl) {
  int __t367t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t784t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t785t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t1311t(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__t368t(__t1312t);
  print__t366t(__t1314t,__t362t);
  print__t784t(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__t366t(__t1317t,__t362t);
  print__t784t(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__t368t(__t1312t);
}

static inline __attribute__((always_inline)) int test__t1321t(char** __t1452t, uint64_t* __t1453t, uint16_t* __t1454t, uint16_t* __t1455t, uint64_t* __t1456t, char** __t1457t, uint64_t* __t1458t, uint16_t* __t1459t, uint16_t* __t1460t) {
  char* __t1324t__unsafe_ptr=0;
  uint64_t __t1324t__unsafe_size=0;
  uint16_t __t1324t__unsafe_offset=0;
  uint16_t __t1324t__unsafe_align=0;
  uint64_t __t1325t=0;
  char* __t1326t__unsafe_ptr=0;
  uint64_t __t1326t__unsafe_size=0;
  uint16_t __t1326t__unsafe_offset=0;
  uint16_t __t1326t__unsafe_align=0;
  uint64_t __t1327t____t510t=0;
  char __t1327t____t511t__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __t1330t__unsafe_ptr=0;
  uint64_t __t1330t__unsafe_size=0;
  uint16_t __t1330t__unsafe_offset=0;
  uint16_t __t1330t__unsafe_align=0;
  uint64_t __t1331t=0;
  uint64_t __t1332t__=0;
  char* __t1333t__unsafe_ptr=0;
  uint64_t __t1333t__unsafe_size=0;
  uint16_t __t1333t__unsafe_offset=0;
  uint16_t __t1333t__unsafe_align=0;
  uint64_t __t1334t____t510t=0;
  char __t1334t____t511t__=0;
  char* __t1335t__buf__unsafe_ptr=0;
  uint64_t __t1335t__buf__unsafe_size=0;
  uint16_t __t1335t__buf__unsafe_offset=0;
  uint16_t __t1335t__buf__unsafe_align=0;
  uint64_t __t1335t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __t1336t=0;
  char* __t1337t__=0;
  uint64_t __t1338t=0;
  char* __t1340t__unsafe_ptr=0;
  uint64_t __t1340t__dat__pos=0;
  uint64_t __t1340t__dat__length=0;
  char __t1340t__dat__first=0;
  char* __t1342t__unsafe_ptr=0;
  uint64_t __t1342t__dat__pos=0;
  uint64_t __t1342t__dat__length=0;
  char __t1342t__dat__first=0;
  char* __t1343t__name__unsafe_ptr=0;
  uint64_t __t1343t__name__dat__pos=0;
  uint64_t __t1343t__name__dat__length=0;
  char __t1343t__name__dat__first=0;
  char* __t1343t__surname__unsafe_ptr=0;
  uint64_t __t1343t__surname__dat__pos=0;
  uint64_t __t1343t__surname__dat__length=0;
  char __t1343t__surname__dat__first=0;
  uint64_t __t1344t=0;
  char* __t1345t__=0;
  char* __t1346t__name__unsafe_ptr=0;
  uint64_t __t1346t__name__dat__pos=0;
  uint64_t __t1346t__name__dat__length=0;
  char __t1346t__name__dat__first=0;
  char* __t1346t__surname__unsafe_ptr=0;
  uint64_t __t1346t__surname__dat__pos=0;
  uint64_t __t1346t__surname__dat__length=0;
  char __t1346t__surname__dat__first=0;
  char* __t1348t__unsafe_ptr=0;
  uint64_t __t1348t__unsafe_size=0;
  uint16_t __t1348t__unsafe_offset=0;
  uint16_t __t1348t__unsafe_align=0;
  char* __t1352t__unsafe_ptr=0;
  uint64_t __t1352t__unsafe_size=0;
  uint16_t __t1352t__unsafe_offset=0;
  uint16_t __t1352t__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  Person____t_buffer____buffer__t1322t(&__t1324t__unsafe_ptr,&__t1324t__unsafe_size,&__t1324t__unsafe_offset,&__t1324t__unsafe_align);
  __t1325t=4;
  __t_errcode=alloc__t508t(&__t1324t__unsafe_ptr,&__t1324t__unsafe_size,&__t1324t__unsafe_offset,&__t1324t__unsafe_align,__t1325t,&__t1326t__unsafe_ptr,&__t1326t__unsafe_size,&__t1326t__unsafe_offset,&__t1326t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  people__unsafe_ptr=__t1326t__unsafe_ptr;
  people__unsafe_size=__t1326t__unsafe_size;
  people__unsafe_offset=__t1326t__unsafe_offset;
  people__unsafe_align=__t1326t__unsafe_align;
  char____t_buffer____buffer__t1328t(&__t1330t__unsafe_ptr,&__t1330t__unsafe_size,&__t1330t__unsafe_offset,&__t1330t__unsafe_align);
  __t1331t=4;
  KB__t479t(__t1331t,&__t1332t__);
  __t_errcode=alloc__t508t(&__t1330t__unsafe_ptr,&__t1330t__unsafe_size,&__t1330t__unsafe_offset,&__t1330t__unsafe_align,__t1332t__,&__t1333t__unsafe_ptr,&__t1333t__unsafe_size,&__t1333t__unsafe_offset,&__t1333t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t718t(&__t1333t__unsafe_ptr,&__t1333t__unsafe_size,&__t1333t__unsafe_offset,&__t1333t__unsafe_align,&__t1335t__buf__unsafe_ptr,&__t1335t__buf__unsafe_size,&__t1335t__buf__unsafe_offset,&__t1335t__buf__unsafe_align,&__t1335t__pos);
  buf__buf__unsafe_ptr=__t1335t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1335t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1335t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1335t__buf__unsafe_align;
  buf__pos=__t1335t__pos;
  __t1336t=0;
  __t_errcode=mutget__t590t(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__t1336t,&__t1337t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1338t=0;
  __t_errcode=copy__t751t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1339t,&__t1340t__unsafe_ptr,&__t1340t__dat__pos,&__t1340t__dat__length,&__t1340t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t751t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1341t,&__t1342t__unsafe_ptr,&__t1342t__dat__pos,&__t1342t__dat__length,&__t1342t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  Person__t1309t(__t1338t,__t1340t__unsafe_ptr,__t1340t__dat__pos,__t1340t__dat__length,__t1340t__dat__first,__t1342t__unsafe_ptr,__t1342t__dat__pos,__t1342t__dat__length,__t1342t__dat__first,&__t1343t__name__unsafe_ptr,&__t1343t__name__dat__pos,&__t1343t__name__dat__length,&__t1343t__name__dat__first,&__t1343t__surname__unsafe_ptr,&__t1343t__surname__dat__pos,&__t1343t__surname__dat__length,&__t1343t__surname__dat__first);
  if(!__t1337t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1337t__,&__t1343t__name__unsafe_ptr,8);
  memcpy(__t1337t__+8,&__t1343t__name__dat__pos,8);
  memcpy(__t1337t__+16,&__t1343t__name__dat__length,8);
  memcpy(__t1337t__+24,&__t1343t__name__dat__first,1);
  memcpy(__t1337t__+25,&__t1343t__surname__unsafe_ptr,8);
  memcpy(__t1337t__+33,&__t1343t__surname__dat__pos,8);
  memcpy(__t1337t__+41,&__t1343t__surname__dat__length,8);
  memcpy(__t1337t__+49,&__t1343t__surname__dat__first,1);
  __t1344t=0;
  __t_errcode=get__t597t(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__t1344t,&__t1345t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1345t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1346t__name__unsafe_ptr,__t1345t__,8);
  memcpy(&__t1346t__name__dat__pos,__t1345t__+8,8);
  memcpy(&__t1346t__name__dat__length,__t1345t__+16,8);
  memcpy(&__t1346t__name__dat__first,__t1345t__+24,1);
  memcpy(&__t1346t__surname__unsafe_ptr,__t1345t__+25,8);
  memcpy(&__t1346t__surname__dat__pos,__t1345t__+33,8);
  memcpy(&__t1346t__surname__dat__length,__t1345t__+41,8);
  memcpy(&__t1346t__surname__dat__first,__t1345t__+49,1);
  print__t1311t(__t1346t__name__unsafe_ptr,__t1346t__name__dat__pos,__t1346t__name__dat__length,__t1346t__name__dat__first,__t1346t__surname__unsafe_ptr,__t1346t__surname__dat__pos,__t1346t__surname__dat__length,__t1346t__surname__dat__first);
  __t1348t__unsafe_ptr=people__unsafe_ptr;
  __t1348t__unsafe_size=people__unsafe_size;
  __t1348t__unsafe_offset=people__unsafe_offset+0;
  __t1348t__unsafe_align=people__unsafe_align;
  __t1352t__unsafe_ptr=__t1348t__unsafe_ptr;
  __t1352t__unsafe_size=__t1348t__unsafe_size;
  __t1352t__unsafe_offset=__t1348t__unsafe_offset+8;
  __t1352t__unsafe_align=__t1348t__unsafe_align;
  dat__unsafe_ptr=__t1352t__unsafe_ptr;
  dat__unsafe_size=__t1352t__unsafe_size;
  dat__unsafe_offset=__t1352t__unsafe_offset;
  dat__unsafe_align=__t1352t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t1334t____t510t=0;
  neq__t142t(buf__buf__unsafe_size,__t1334t____t510t,&__t1334t____t511t__);
  if(__t1334t____t511t__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  buf__buf__unsafe_ptr=buf__buf__unsafe_ptr;
  free__t501t(&buf__buf__unsafe_ptr);
  }
  __t1327t____t510t=0;
  neq__t142t(dat__unsafe_size,__t1327t____t510t,&__t1327t____t511t__);
  if(__t1327t____t511t__){
  dat__unsafe_size=0;
  dat__unsafe_size=dat__unsafe_size;
  dat__unsafe_ptr=dat__unsafe_ptr;
  free__t501t(&dat__unsafe_ptr);
  }
  __t_return:
  *__t1452t=buf__buf__unsafe_ptr;
  *__t1453t=buf__buf__unsafe_size;
  *__t1454t=buf__buf__unsafe_offset;
  *__t1455t=buf__buf__unsafe_align;
  *__t1456t=buf__pos;
  *__t1457t=dat__unsafe_ptr;
  *__t1458t=dat__unsafe_size;
  *__t1459t=dat__unsafe_offset;
  *__t1460t=dat__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1356t() {
  char* __t1357t__buf__buf__unsafe_ptr=0;
  uint64_t __t1357t__buf__buf__unsafe_size=0;
  uint16_t __t1357t__buf__buf__unsafe_offset=0;
  uint16_t __t1357t__buf__buf__unsafe_align=0;
  uint64_t __t1357t__buf__pos=0;
  char* __t1357t__dat__unsafe_ptr=0;
  uint64_t __t1357t__dat__unsafe_size=0;
  uint16_t __t1357t__dat__unsafe_offset=0;
  uint16_t __t1357t__dat__unsafe_align=0;
  uint64_t __t1358t____t1327t____t510t=0;
  char __t1358t____t1327t____t511t__=0;
  uint64_t __t1358t____t1334t____t510t=0;
  char __t1358t____t1334t____t511t__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __t1359t=0;
  char* __t1360t__=0;
  uint64_t __t1361t__pos=0;
  uint64_t __t1361t__length=0;
  char __t1361t__first=0;
  char* __t1362t__unsafe_ptr=0;
  uint64_t __t1362t__dat__pos=0;
  uint64_t __t1362t__dat__length=0;
  char __t1362t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test__t1321t(&__t1357t__buf__buf__unsafe_ptr,&__t1357t__buf__buf__unsafe_size,&__t1357t__buf__buf__unsafe_offset,&__t1357t__buf__buf__unsafe_align,&__t1357t__buf__pos,&__t1357t__dat__unsafe_ptr,&__t1357t__dat__unsafe_size,&__t1357t__dat__unsafe_offset,&__t1357t__dat__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__buf__buf__unsafe_ptr=__t1357t__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__t1357t__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__t1357t__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__t1357t__buf__buf__unsafe_align;
  t__buf__pos=__t1357t__buf__pos;
  t__dat__unsafe_ptr=__t1357t__dat__unsafe_ptr;
  t__dat__unsafe_size=__t1357t__dat__unsafe_size;
  t__dat__unsafe_offset=__t1357t__dat__unsafe_offset;
  t__dat__unsafe_align=__t1357t__dat__unsafe_align;
  __t1359t=0;
  __t_errcode=get__t597t(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__t1359t,&__t1360t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1360t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1361t__pos,__t1360t__,8);
  memcpy(&__t1361t__length,__t1360t__+8,8);
  memcpy(&__t1361t__first,__t1360t__+16,1);
  __t_errcode=str__t636t(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__t1361t__pos,__t1361t__length,__t1361t__first,&__t1362t__unsafe_ptr,&__t1362t__dat__pos,&__t1362t__dat__length,&__t1362t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t784t(__t1362t__unsafe_ptr,__t1362t__dat__pos,__t1362t__dat__length,__t1362t__dat__first);
  
  __t_failure:__t1358t____t1334t____t510t=0;
  neq__t142t(__t1357t__buf__buf__unsafe_size,__t1358t____t1334t____t510t,&__t1358t____t1334t____t511t__);
  if(__t1358t____t1334t____t511t__){
  __t1357t__buf__buf__unsafe_size=0;
  __t1357t__buf__buf__unsafe_size=__t1357t__buf__buf__unsafe_size;
  __t1357t__buf__buf__unsafe_ptr=__t1357t__buf__buf__unsafe_ptr;
  free__t501t(&__t1357t__buf__buf__unsafe_ptr);
  }
  __t1358t____t1327t____t510t=0;
  neq__t142t(__t1357t__dat__unsafe_size,__t1358t____t1327t____t510t,&__t1358t____t1327t____t511t__);
  if(__t1358t____t1327t____t511t__){
  __t1357t__dat__unsafe_size=0;
  __t1357t__dat__unsafe_size=__t1357t__dat__unsafe_size;
  __t1357t__dat__unsafe_ptr=__t1357t__dat__unsafe_ptr;
  free__t501t(&__t1357t__dat__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1356t();return 0;}