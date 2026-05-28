#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1329t="surnname  ";
const char* const __t1326t="name      ";
const char* const __t1353t="mario";
const char* const __t1324t="-------------------";
const char* const __t363t="";
const char* const __t1351t="it's a me";
const char* const __t371t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
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

static inline __attribute__((always_inline)) void Person____t_buffer____buffer__t1334t(char** __t1376t, uint64_t* __t1377t, uint16_t* __t1378t, uint16_t* __t1379t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__t1376t=unsafe_ptr;
  *__t1377t=unsafe_size;
  *__t1378t=unsafe_offset;
  *__t1379t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1380t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1380t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1381t) {
  char* allocated=*__t1381t;
  if(allocated){
  free(allocated);
  }
  *__t1381t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1382t) {
  int value=0;
  *__t1382t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1383t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1383t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1384t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1384t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1385t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1385t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1386t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1386t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1387t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1387t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1388t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1388t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1389t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1389t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1390t) {
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
  *__t1390t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1391t, uint64_t* __t1392t, uint16_t* __t1393t, uint16_t* __t1394t, uint64_t size, char** __t1395t, uint64_t* __t1396t, uint16_t* __t1397t, uint16_t* __t1398t) {
  char* buffer__unsafe_ptr=*__t1391t;
  uint64_t buffer__unsafe_size=*__t1392t;
  uint16_t buffer__unsafe_offset=*__t1393t;
  uint16_t buffer__unsafe_align=*__t1394t;
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
  *__t1391t=buffer__unsafe_ptr;
  *__t1392t=buffer__unsafe_size;
  *__t1393t=buffer__unsafe_offset;
  *__t1394t=buffer__unsafe_align;
  *__t1395t=buffer__unsafe_ptr;
  *__t1396t=buffer__unsafe_size;
  *__t1397t=buffer__unsafe_offset;
  *__t1398t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1340t(char** __t1399t, uint64_t* __t1400t, uint16_t* __t1401t, uint16_t* __t1402t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1399t=unsafe_ptr;
  *__t1400t=unsafe_size;
  *__t1401t=unsafe_offset;
  *__t1402t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t480t(uint64_t x, uint64_t* __t1403t) {
  uint64_t __t481t=0;
  uint64_t __t482t__=0;
  __t481t=1024;
  mul__t195t(x,__t481t,&__t482t__);
  goto __t_return;
  __t_return:
  *__t1403t=__t482t__;
}

static inline __attribute__((always_inline)) void bufpos__t718t(char** __t1404t, uint64_t* __t1405t, uint16_t* __t1406t, uint16_t* __t1407t, char** __t1408t, uint64_t* __t1409t, uint16_t* __t1410t, uint16_t* __t1411t, uint64_t* __t1412t) {
  char* buf__unsafe_ptr=*__t1404t;
  uint64_t buf__unsafe_size=*__t1405t;
  uint16_t buf__unsafe_offset=*__t1406t;
  uint16_t buf__unsafe_align=*__t1407t;
  uint64_t __t719t=0;
  uint64_t __t720t=0;
  uint64_t pos=0;
  __t719t=0;
  __t720t=__t719t;
  pos=__t720t;
  goto __t_return;
  __t_return:
  *__t1404t=buf__unsafe_ptr;
  *__t1405t=buf__unsafe_size;
  *__t1406t=buf__unsafe_offset;
  *__t1407t=buf__unsafe_align;
  *__t1408t=buf__unsafe_ptr;
  *__t1409t=buf__unsafe_size;
  *__t1410t=buf__unsafe_offset;
  *__t1411t=buf__unsafe_align;
  *__t1412t=pos;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1413t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1413t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1414t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1414t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1415t) {
  *__t1415t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1416t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1416t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t584t(char** __t1417t, uint64_t* __t1418t, uint16_t* __t1419t, uint16_t* __t1420t, uint64_t i, char** __t1421t) {
  char* buffer__unsafe_ptr=*__t1417t;
  uint64_t buffer__unsafe_size=*__t1418t;
  uint16_t buffer__unsafe_offset=*__t1419t;
  uint16_t buffer__unsafe_align=*__t1420t;
  char __t585t__=0;
  uint64_t __t586t__=0;
  uint64_t __t587t__=0;
  uint64_t __t588t__=0;
  uint64_t __t589t__=0;
  char* __t590t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t585t__);
  if(__t585t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t586t__);
  mul__t195t(i,__t586t__,&__t587t__);
  nat__t506t(buffer__unsafe_offset,&__t588t__);
  add__t171t(__t587t__,__t588t__,&__t589t__);
  add__t504t(buffer__unsafe_ptr,__t589t__,&__t590t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1417t=buffer__unsafe_ptr;
  *__t1418t=buffer__unsafe_size;
  *__t1419t=buffer__unsafe_offset;
  *__t1420t=buffer__unsafe_align;
  *__t1421t=__t590t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t551t(char** __t1422t, uint64_t* __t1423t, uint16_t* __t1424t, uint16_t* __t1425t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1422t=unsafe_ptr;
  *__t1423t=unsafe_size;
  *__t1424t=unsafe_offset;
  *__t1425t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1426t) {
  *__t1426t=to;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1427t) {
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
  *__t1427t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t626t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1428t, uint64_t* __t1429t, uint64_t* __t1430t, char* __t1431t) {
  goto __t_return;
  __t_return:
  *__t1428t=unsafe_ptr;
  *__t1429t=dat__pos;
  *__t1430t=dat__length;
  *__t1431t=dat__first;
}

static inline __attribute__((always_inline)) int str__t630t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1432t, uint64_t* __t1433t, uint64_t* __t1434t, char* __t1435t) {
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
  *__t1432t=__t637t__unsafe_ptr;
  *__t1433t=__t637t__dat__pos;
  *__t1434t=__t637t__dat__length;
  *__t1435t=__t637t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t662t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1436t, uint64_t* __t1437t, uint64_t* __t1438t, char* __t1439t) {
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
  *__t1436t=__t667t__unsafe_ptr;
  *__t1437t=__t667t__dat__pos;
  *__t1438t=__t667t__dat__length;
  *__t1439t=__t667t__dat__first;
  
  return __t_errcode;
}

int str__t668t(const char* c, char** __t1440t, uint64_t* __t1441t, uint64_t* __t1442t, char* __t1443t) {
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
  *__t1440t=__t675t__unsafe_ptr;
  *__t1441t=__t675t__dat__pos;
  *__t1442t=__t675t__dat__length;
  *__t1443t=__t675t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t676t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1444t) {
  goto __t_return;
  __t_return:
  *__t1444t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1445t) {
  goto __t_return;
  __t_return:
  *__t1445t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t1446t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1446t=z;
}

int copy__t747t(char** __t1447t, uint64_t* __t1448t, uint16_t* __t1449t, uint16_t* __t1450t, uint64_t* __t1451t, const char* _other, char** __t1452t, uint64_t* __t1453t, uint64_t* __t1454t, char* __t1455t) {
  char* buf__unsafe_ptr=*__t1447t;
  uint64_t buf__unsafe_size=*__t1448t;
  uint16_t buf__unsafe_offset=*__t1449t;
  uint16_t buf__unsafe_align=*__t1450t;
  uint64_t pos=*__t1451t;
  char* __t748t__unsafe_ptr=0;
  uint64_t __t748t__dat__pos=0;
  uint64_t __t748t__dat__length=0;
  char __t748t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t749t__=0;
  uint64_t __t750t__=0;
  uint64_t next_pos=0;
  uint64_t __t751t__=0;
  char __t752t__=0;
  uint64_t __t753t=0;
  uint64_t __t754t__=0;
  uint64_t prev_pos=0;
  char* __t755t__unsafe_ptr=0;
  uint64_t __t755t__dat__pos=0;
  uint64_t __t755t__dat__length=0;
  char __t755t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t668t(_other,&__t748t__unsafe_ptr,&__t748t__dat__pos,&__t748t__dat__length,&__t748t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t748t__unsafe_ptr;
  other__dat__pos=__t748t__dat__pos;
  other__dat__length=__t748t__dat__length;
  other__dat__first=__t748t__dat__first;
  len__t676t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t749t__);
  add__t171t(pos,__t749t__,&__t750t__);
  next_pos=__t750t__;
  len__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t751t__);
  gt__t272t(next_pos,__t751t__,&__t752t__);
  if(__t752t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t753t=0;
  add__t171t(pos,__t753t,&__t754t__);
  prev_pos=__t754t__;
  pos=next_pos;
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t755t__unsafe_ptr,&__t755t__dat__pos,&__t755t__dat__length,&__t755t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1447t=buf__unsafe_ptr;
  *__t1448t=buf__unsafe_size;
  *__t1449t=buf__unsafe_offset;
  *__t1450t=buf__unsafe_align;
  *__t1451t=pos;
  *__t1452t=__t755t__unsafe_ptr;
  *__t1453t=__t755t__dat__pos;
  *__t1454t=__t755t__dat__length;
  *__t1455t=__t755t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Person__t1321t(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __t1456t, uint64_t* __t1457t, uint64_t* __t1458t, char* __t1459t, char** __t1460t, uint64_t* __t1461t, uint64_t* __t1462t, char* __t1463t) {
  goto __t_return;
  __t_return:
  *__t1456t=name__unsafe_ptr;
  *__t1457t=name__dat__pos;
  *__t1458t=name__dat__length;
  *__t1459t=name__dat__first;
  *__t1460t=surname__unsafe_ptr;
  *__t1461t=surname__dat__pos;
  *__t1462t=surname__dat__length;
  *__t1463t=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t367t(const char* value, const char* endl) {
  int __t368t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t780t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t781t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t1323t(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__t369t(__t1324t);
  print__t367t(__t1326t,__t363t);
  print__t780t(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__t367t(__t1329t,__t363t);
  print__t780t(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__t369t(__t1324t);
}

static inline __attribute__((always_inline)) int test__t1333t(char** __t1464t, uint64_t* __t1465t, uint16_t* __t1466t, uint16_t* __t1467t, uint64_t* __t1468t, char** __t1469t, uint64_t* __t1470t, uint16_t* __t1471t, uint16_t* __t1472t) {
  char* __t1336t__unsafe_ptr=0;
  uint64_t __t1336t__unsafe_size=0;
  uint16_t __t1336t__unsafe_offset=0;
  uint16_t __t1336t__unsafe_align=0;
  uint64_t __t1337t=0;
  char* __t1338t__unsafe_ptr=0;
  uint64_t __t1338t__unsafe_size=0;
  uint16_t __t1338t__unsafe_offset=0;
  uint16_t __t1338t__unsafe_align=0;
  char __t1339t____t511t__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __t1342t__unsafe_ptr=0;
  uint64_t __t1342t__unsafe_size=0;
  uint16_t __t1342t__unsafe_offset=0;
  uint16_t __t1342t__unsafe_align=0;
  uint64_t __t1343t=0;
  uint64_t __t1344t__=0;
  char* __t1345t__unsafe_ptr=0;
  uint64_t __t1345t__unsafe_size=0;
  uint16_t __t1345t__unsafe_offset=0;
  uint16_t __t1345t__unsafe_align=0;
  char __t1346t____t511t__=0;
  char* __t1347t__buf__unsafe_ptr=0;
  uint64_t __t1347t__buf__unsafe_size=0;
  uint16_t __t1347t__buf__unsafe_offset=0;
  uint16_t __t1347t__buf__unsafe_align=0;
  uint64_t __t1347t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __t1348t=0;
  char* __t1349t__=0;
  uint64_t __t1350t=0;
  char* __t1352t__unsafe_ptr=0;
  uint64_t __t1352t__dat__pos=0;
  uint64_t __t1352t__dat__length=0;
  char __t1352t__dat__first=0;
  char* __t1354t__unsafe_ptr=0;
  uint64_t __t1354t__dat__pos=0;
  uint64_t __t1354t__dat__length=0;
  char __t1354t__dat__first=0;
  char* __t1355t__name__unsafe_ptr=0;
  uint64_t __t1355t__name__dat__pos=0;
  uint64_t __t1355t__name__dat__length=0;
  char __t1355t__name__dat__first=0;
  char* __t1355t__surname__unsafe_ptr=0;
  uint64_t __t1355t__surname__dat__pos=0;
  uint64_t __t1355t__surname__dat__length=0;
  char __t1355t__surname__dat__first=0;
  uint64_t __t1356t=0;
  char* __t1357t__=0;
  char* __t1358t__name__unsafe_ptr=0;
  uint64_t __t1358t__name__dat__pos=0;
  uint64_t __t1358t__name__dat__length=0;
  char __t1358t__name__dat__first=0;
  char* __t1358t__surname__unsafe_ptr=0;
  uint64_t __t1358t__surname__dat__pos=0;
  uint64_t __t1358t__surname__dat__length=0;
  char __t1358t__surname__dat__first=0;
  char* __t1360t__unsafe_ptr=0;
  uint64_t __t1360t__unsafe_size=0;
  uint16_t __t1360t__unsafe_offset=0;
  uint16_t __t1360t__unsafe_align=0;
  char* __t1364t__unsafe_ptr=0;
  uint64_t __t1364t__unsafe_size=0;
  uint16_t __t1364t__unsafe_offset=0;
  uint16_t __t1364t__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  Person____t_buffer____buffer__t1334t(&__t1336t__unsafe_ptr,&__t1336t__unsafe_size,&__t1336t__unsafe_offset,&__t1336t__unsafe_align);
  __t1337t=4;
  __t_errcode=alloc__t509t(&__t1336t__unsafe_ptr,&__t1336t__unsafe_size,&__t1336t__unsafe_offset,&__t1336t__unsafe_align,__t1337t,&__t1338t__unsafe_ptr,&__t1338t__unsafe_size,&__t1338t__unsafe_offset,&__t1338t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  people__unsafe_ptr=__t1338t__unsafe_ptr;
  people__unsafe_size=__t1338t__unsafe_size;
  people__unsafe_offset=__t1338t__unsafe_offset;
  people__unsafe_align=__t1338t__unsafe_align;
  char____t_buffer____buffer__t1340t(&__t1342t__unsafe_ptr,&__t1342t__unsafe_size,&__t1342t__unsafe_offset,&__t1342t__unsafe_align);
  __t1343t=4;
  KB__t480t(__t1343t,&__t1344t__);
  __t_errcode=alloc__t509t(&__t1342t__unsafe_ptr,&__t1342t__unsafe_size,&__t1342t__unsafe_offset,&__t1342t__unsafe_align,__t1344t__,&__t1345t__unsafe_ptr,&__t1345t__unsafe_size,&__t1345t__unsafe_offset,&__t1345t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t718t(&__t1345t__unsafe_ptr,&__t1345t__unsafe_size,&__t1345t__unsafe_offset,&__t1345t__unsafe_align,&__t1347t__buf__unsafe_ptr,&__t1347t__buf__unsafe_size,&__t1347t__buf__unsafe_offset,&__t1347t__buf__unsafe_align,&__t1347t__pos);
  buf__buf__unsafe_ptr=__t1347t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1347t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1347t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1347t__buf__unsafe_align;
  buf__pos=__t1347t__pos;
  __t1348t=0;
  __t_errcode=mutget__t584t(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__t1348t,&__t1349t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1350t=0;
  __t_errcode=copy__t747t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1351t,&__t1352t__unsafe_ptr,&__t1352t__dat__pos,&__t1352t__dat__length,&__t1352t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t747t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1353t,&__t1354t__unsafe_ptr,&__t1354t__dat__pos,&__t1354t__dat__length,&__t1354t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  Person__t1321t(__t1350t,__t1352t__unsafe_ptr,__t1352t__dat__pos,__t1352t__dat__length,__t1352t__dat__first,__t1354t__unsafe_ptr,__t1354t__dat__pos,__t1354t__dat__length,__t1354t__dat__first,&__t1355t__name__unsafe_ptr,&__t1355t__name__dat__pos,&__t1355t__name__dat__length,&__t1355t__name__dat__first,&__t1355t__surname__unsafe_ptr,&__t1355t__surname__dat__pos,&__t1355t__surname__dat__length,&__t1355t__surname__dat__first);
  if(!__t1349t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1349t__,&__t1355t__name__unsafe_ptr,8);
  memcpy(__t1349t__+8,&__t1355t__name__dat__pos,8);
  memcpy(__t1349t__+16,&__t1355t__name__dat__length,8);
  memcpy(__t1349t__+24,&__t1355t__name__dat__first,1);
  memcpy(__t1349t__+25,&__t1355t__surname__unsafe_ptr,8);
  memcpy(__t1349t__+33,&__t1355t__surname__dat__pos,8);
  memcpy(__t1349t__+41,&__t1355t__surname__dat__length,8);
  memcpy(__t1349t__+49,&__t1355t__surname__dat__first,1);
  __t1356t=0;
  __t_errcode=get__t591t(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__t1356t,&__t1357t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1357t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1358t__name__unsafe_ptr,__t1357t__,8);
  memcpy(&__t1358t__name__dat__pos,__t1357t__+8,8);
  memcpy(&__t1358t__name__dat__length,__t1357t__+16,8);
  memcpy(&__t1358t__name__dat__first,__t1357t__+24,1);
  memcpy(&__t1358t__surname__unsafe_ptr,__t1357t__+25,8);
  memcpy(&__t1358t__surname__dat__pos,__t1357t__+33,8);
  memcpy(&__t1358t__surname__dat__length,__t1357t__+41,8);
  memcpy(&__t1358t__surname__dat__first,__t1357t__+49,1);
  print__t1323t(__t1358t__name__unsafe_ptr,__t1358t__name__dat__pos,__t1358t__name__dat__length,__t1358t__name__dat__first,__t1358t__surname__unsafe_ptr,__t1358t__surname__dat__pos,__t1358t__surname__dat__length,__t1358t__surname__dat__first);
  __t1360t__unsafe_ptr=people__unsafe_ptr;
  __t1360t__unsafe_size=people__unsafe_size;
  __t1360t__unsafe_offset=people__unsafe_offset+0;
  __t1360t__unsafe_align=people__unsafe_align;
  __t1364t__unsafe_ptr=__t1360t__unsafe_ptr;
  __t1364t__unsafe_size=__t1360t__unsafe_size;
  __t1364t__unsafe_offset=__t1360t__unsafe_offset+8;
  __t1364t__unsafe_align=__t1360t__unsafe_align;
  dat__unsafe_ptr=__t1364t__unsafe_ptr;
  dat__unsafe_size=__t1364t__unsafe_size;
  dat__unsafe_offset=__t1364t__unsafe_offset;
  dat__unsafe_align=__t1364t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(buf__buf__unsafe_ptr,&__t1346t____t511t__);
  if(__t1346t____t511t__){
  free__t502t(&buf__buf__unsafe_ptr);
  }
  exists__t436t(dat__unsafe_ptr,&__t1339t____t511t__);
  if(__t1339t____t511t__){
  free__t502t(&dat__unsafe_ptr);
  }
  __t_return:
  *__t1464t=buf__buf__unsafe_ptr;
  *__t1465t=buf__buf__unsafe_size;
  *__t1466t=buf__buf__unsafe_offset;
  *__t1467t=buf__buf__unsafe_align;
  *__t1468t=buf__pos;
  *__t1469t=dat__unsafe_ptr;
  *__t1470t=dat__unsafe_size;
  *__t1471t=dat__unsafe_offset;
  *__t1472t=dat__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1368t() {
  char* __t1369t__buf__buf__unsafe_ptr=0;
  uint64_t __t1369t__buf__buf__unsafe_size=0;
  uint16_t __t1369t__buf__buf__unsafe_offset=0;
  uint16_t __t1369t__buf__buf__unsafe_align=0;
  uint64_t __t1369t__buf__pos=0;
  char* __t1369t__dat__unsafe_ptr=0;
  uint64_t __t1369t__dat__unsafe_size=0;
  uint16_t __t1369t__dat__unsafe_offset=0;
  uint16_t __t1369t__dat__unsafe_align=0;
  char __t1370t____t1339t____t511t__=0;
  char __t1370t____t1346t____t511t__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __t1371t=0;
  char* __t1372t__=0;
  uint64_t __t1373t__pos=0;
  uint64_t __t1373t__length=0;
  char __t1373t__first=0;
  char* __t1374t__unsafe_ptr=0;
  uint64_t __t1374t__dat__pos=0;
  uint64_t __t1374t__dat__length=0;
  char __t1374t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test__t1333t(&__t1369t__buf__buf__unsafe_ptr,&__t1369t__buf__buf__unsafe_size,&__t1369t__buf__buf__unsafe_offset,&__t1369t__buf__buf__unsafe_align,&__t1369t__buf__pos,&__t1369t__dat__unsafe_ptr,&__t1369t__dat__unsafe_size,&__t1369t__dat__unsafe_offset,&__t1369t__dat__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__buf__buf__unsafe_ptr=__t1369t__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__t1369t__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__t1369t__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__t1369t__buf__buf__unsafe_align;
  t__buf__pos=__t1369t__buf__pos;
  t__dat__unsafe_ptr=__t1369t__dat__unsafe_ptr;
  t__dat__unsafe_size=__t1369t__dat__unsafe_size;
  t__dat__unsafe_offset=__t1369t__dat__unsafe_offset;
  t__dat__unsafe_align=__t1369t__dat__unsafe_align;
  __t1371t=0;
  __t_errcode=get__t591t(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__t1371t,&__t1372t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1372t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1373t__pos,__t1372t__,8);
  memcpy(&__t1373t__length,__t1372t__+8,8);
  memcpy(&__t1373t__first,__t1372t__+16,1);
  __t_errcode=str__t630t(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__t1373t__pos,__t1373t__length,__t1373t__first,&__t1374t__unsafe_ptr,&__t1374t__dat__pos,&__t1374t__dat__length,&__t1374t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t780t(__t1374t__unsafe_ptr,__t1374t__dat__pos,__t1374t__dat__length,__t1374t__dat__first);
  
  __t_failure:exists__t436t(__t1369t__buf__buf__unsafe_ptr,&__t1370t____t1346t____t511t__);
  if(__t1370t____t1346t____t511t__){
  free__t502t(&__t1369t__buf__buf__unsafe_ptr);
  }
  exists__t436t(__t1369t__dat__unsafe_ptr,&__t1370t____t1339t____t511t__);
  if(__t1370t____t1339t____t511t__){
  free__t502t(&__t1369t__dat__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1368t();return 0;}