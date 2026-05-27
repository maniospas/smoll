#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1330t="name      ";
const char* const __t1355t="it's a me";
const char* const __t1328t="-------------------";
const char* const __t1357t="mario";
const char* const __t1333t="surnname  ";
const char* const __t363t="";
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

static inline __attribute__((always_inline)) void Person____t_buffer____buffer__t1338t(char** __t1380t, uint64_t* __t1381t, uint16_t* __t1382t, uint16_t* __t1383t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__t1380t=unsafe_ptr;
  *__t1381t=unsafe_size;
  *__t1382t=unsafe_offset;
  *__t1383t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1384t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1384t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1385t) {
  char* allocated=*__t1385t;
  if(allocated){
  free(allocated);
  }
  *__t1385t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1386t) {
  int value=0;
  *__t1386t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1387t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1387t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1388t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1388t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1389t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1389t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1390t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1390t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1391t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1391t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1392t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1392t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1393t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1393t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1394t) {
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
  *__t1394t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1395t, uint64_t* __t1396t, uint16_t* __t1397t, uint16_t* __t1398t, uint64_t size, char** __t1399t, uint64_t* __t1400t, uint16_t* __t1401t, uint16_t* __t1402t) {
  char* buffer__unsafe_ptr=*__t1395t;
  uint64_t buffer__unsafe_size=*__t1396t;
  uint16_t buffer__unsafe_offset=*__t1397t;
  uint16_t buffer__unsafe_align=*__t1398t;
  int __t510t=0;
  char __t511t__=0;
  char* ptr=0;
  char __t513t__=0;
  uint64_t __t514t=0;
  char __t515t__=0;
  uint64_t __t516t=0;
  uint64_t __t517t__=0;
  uint64_t __t518t__=0;
  char* __t520t__unsafe_ptr=0;
  uint64_t __t520t__unsafe_size=0;
  uint16_t __t520t__unsafe_offset=0;
  uint16_t __t520t__unsafe_align=0;
  uint64_t __t521t=0;
  char __t522t__=0;
  uint64_t __t523t__=0;
  uint64_t __t524t__=0;
  uint64_t bytes=0;
  uint64_t __t525t=0;
  char __t526t__=0;
  char* __t527t__=0;
  uint64_t __t528t=0;
  char* __t530t__unsafe_ptr=0;
  uint64_t __t530t__unsafe_size=0;
  uint16_t __t530t__unsafe_offset=0;
  uint16_t __t530t__unsafe_align=0;
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
  __t520t__unsafe_ptr=buffer__unsafe_ptr;
  __t520t__unsafe_size=buffer__unsafe_size;
  __t520t__unsafe_offset=buffer__unsafe_offset;
  __t520t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t521t=0;
  neq__t143t(buffer__unsafe_size,__t521t,&__t522t__);
  if(__t522t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t523t__);
  mul__t195t(__t523t__,size,&__t524t__);
  bytes=__t524t__;
  __t525t=0;
  eq__t119t(bytes,__t525t,&__t526t__);
  if(__t526t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t495t(bytes,&__t527t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t527t__;
  __t528t=0;
  zero__t503t(buffer__unsafe_ptr,__t528t,bytes);
  __t530t__unsafe_ptr=buffer__unsafe_ptr;
  __t530t__unsafe_size=buffer__unsafe_size;
  __t530t__unsafe_offset=buffer__unsafe_offset;
  __t530t__unsafe_align=buffer__unsafe_align;
  __t520t__unsafe_ptr=__t530t__unsafe_ptr;
  __t520t__unsafe_size=__t530t__unsafe_size;
  __t520t__unsafe_offset=__t530t__unsafe_offset;
  __t520t__unsafe_align=__t530t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(__t520t__unsafe_ptr,&__t511t__);
  if(__t511t__){
  __t520t__unsafe_ptr=__t520t__unsafe_ptr;
  free__t502t(&__t520t__unsafe_ptr);
  }
  __t_return:
  *__t1395t=buffer__unsafe_ptr;
  *__t1396t=buffer__unsafe_size;
  *__t1397t=buffer__unsafe_offset;
  *__t1398t=buffer__unsafe_align;
  *__t1399t=__t520t__unsafe_ptr;
  *__t1400t=__t520t__unsafe_size;
  *__t1401t=__t520t__unsafe_offset;
  *__t1402t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1344t(char** __t1403t, uint64_t* __t1404t, uint16_t* __t1405t, uint16_t* __t1406t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1403t=unsafe_ptr;
  *__t1404t=unsafe_size;
  *__t1405t=unsafe_offset;
  *__t1406t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t480t(uint64_t x, uint64_t* __t1407t) {
  uint64_t __t481t=0;
  uint64_t __t482t__=0;
  __t481t=1024;
  mul__t195t(x,__t481t,&__t482t__);
  goto __t_return;
  __t_return:
  *__t1407t=__t482t__;
}

static inline __attribute__((always_inline)) void bufpos__t722t(char** __t1408t, uint64_t* __t1409t, uint16_t* __t1410t, uint16_t* __t1411t, char** __t1412t, uint64_t* __t1413t, uint16_t* __t1414t, uint16_t* __t1415t, uint64_t* __t1416t) {
  char* buf__unsafe_ptr=*__t1408t;
  uint64_t buf__unsafe_size=*__t1409t;
  uint16_t buf__unsafe_offset=*__t1410t;
  uint16_t buf__unsafe_align=*__t1411t;
  uint64_t __t723t=0;
  uint64_t __t724t=0;
  uint64_t pos=0;
  __t723t=0;
  __t724t=__t723t;
  pos=__t724t;
  goto __t_return;
  __t_return:
  *__t1408t=buf__unsafe_ptr;
  *__t1409t=buf__unsafe_size;
  *__t1410t=buf__unsafe_offset;
  *__t1411t=buf__unsafe_align;
  *__t1412t=buf__unsafe_ptr;
  *__t1413t=buf__unsafe_size;
  *__t1414t=buf__unsafe_offset;
  *__t1415t=buf__unsafe_align;
  *__t1416t=pos;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1417t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1417t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1418t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1418t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1419t) {
  *__t1419t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1420t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1420t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t588t(char** __t1421t, uint64_t* __t1422t, uint16_t* __t1423t, uint16_t* __t1424t, uint64_t i, char** __t1425t) {
  char* buffer__unsafe_ptr=*__t1421t;
  uint64_t buffer__unsafe_size=*__t1422t;
  uint16_t buffer__unsafe_offset=*__t1423t;
  uint16_t buffer__unsafe_align=*__t1424t;
  char __t589t__=0;
  uint64_t __t590t__=0;
  uint64_t __t591t__=0;
  uint64_t __t592t__=0;
  uint64_t __t593t__=0;
  char* __t594t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t589t__);
  if(__t589t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t590t__);
  mul__t195t(i,__t590t__,&__t591t__);
  nat__t506t(buffer__unsafe_offset,&__t592t__);
  add__t171t(__t591t__,__t592t__,&__t593t__);
  add__t504t(buffer__unsafe_ptr,__t593t__,&__t594t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1421t=buffer__unsafe_ptr;
  *__t1422t=buffer__unsafe_size;
  *__t1423t=buffer__unsafe_offset;
  *__t1424t=buffer__unsafe_align;
  *__t1425t=__t594t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t555t(char** __t1426t, uint64_t* __t1427t, uint16_t* __t1428t, uint16_t* __t1429t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1426t=unsafe_ptr;
  *__t1427t=unsafe_size;
  *__t1428t=unsafe_offset;
  *__t1429t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1430t) {
  *__t1430t=to;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1431t) {
  char __t596t__=0;
  uint64_t __t597t__=0;
  uint64_t __t598t__=0;
  uint64_t __t599t__=0;
  uint64_t __t600t__=0;
  char* __t601t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t596t__);
  if(__t596t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t597t__);
  mul__t195t(i,__t597t__,&__t598t__);
  nat__t506t(buffer__unsafe_offset,&__t599t__);
  add__t171t(__t598t__,__t599t__,&__t600t__);
  add__t504t(buffer__unsafe_ptr,__t600t__,&__t601t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1431t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t630t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1432t, uint64_t* __t1433t, uint64_t* __t1434t, char* __t1435t) {
  goto __t_return;
  __t_return:
  *__t1432t=unsafe_ptr;
  *__t1433t=dat__pos;
  *__t1434t=dat__length;
  *__t1435t=dat__first;
}

static inline __attribute__((always_inline)) int str__t634t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1436t, uint64_t* __t1437t, uint64_t* __t1438t, char* __t1439t) {
  char* unsafe_ptr=0;
  uint64_t __t635t__=0;
  uint64_t __t636t=0;
  char __t637t__=0;
  uint64_t __t638t__=0;
  uint64_t __t639t=0;
  char __t640t__=0;
  char* __t641t__unsafe_ptr=0;
  uint64_t __t641t__dat__pos=0;
  uint64_t __t641t__dat__length=0;
  char __t641t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t506t(buf__unsafe_align,&__t635t__);
  __t636t=1;
  neq__t143t(__t635t__,__t636t,&__t637t__);
  if(__t637t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t638t__);
  __t639t=0;
  neq__t143t(__t638t__,__t639t,&__t640t__);
  if(__t640t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t630t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t641t__unsafe_ptr,&__t641t__dat__pos,&__t641t__dat__length,&__t641t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1436t=__t641t__unsafe_ptr;
  *__t1437t=__t641t__dat__pos;
  *__t1438t=__t641t__dat__length;
  *__t1439t=__t641t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t666t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1440t, uint64_t* __t1441t, uint64_t* __t1442t, char* __t1443t) {
  uint64_t __t667t=0;
  char __t668t__=0;
  char* __t669t__=0;
  char __t670t__value=0;
  char first=0;
  char* __t671t__unsafe_ptr=0;
  uint64_t __t671t__dat__pos=0;
  uint64_t __t671t__dat__length=0;
  char __t671t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t667t=0;
  neq__t143t(length,__t667t,&__t668t__);
  if(__t668t__){
  __t_errcode=get__t595t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t669t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t669t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t670t__value,__t669t__,1);
  first=__t670t__value;
  }
  __t_errcode=str__t634t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t671t__unsafe_ptr,&__t671t__dat__pos,&__t671t__dat__length,&__t671t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1440t=__t671t__unsafe_ptr;
  *__t1441t=__t671t__dat__pos;
  *__t1442t=__t671t__dat__length;
  *__t1443t=__t671t__dat__first;
  
  return __t_errcode;
}

int str__t672t(const char* c, char** __t1444t, uint64_t* __t1445t, uint64_t* __t1446t, char* __t1447t) {
  char* __t673t__unsafe_ptr=0;
  uint64_t __t673t__unsafe_size=0;
  uint16_t __t673t__unsafe_offset=0;
  uint16_t __t673t__unsafe_align=0;
  char* __t674t__unsafe_ptr=0;
  uint64_t __t674t__unsafe_size=0;
  uint16_t __t674t__unsafe_offset=0;
  uint16_t __t674t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t675t__=0;
  uint64_t length=0;
  uint64_t __t676t=0;
  uint64_t __t677t__=0;
  uint64_t __t678t=0;
  char* __t679t__unsafe_ptr=0;
  uint64_t __t679t__dat__pos=0;
  uint64_t __t679t__dat__length=0;
  char __t679t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t555t(&__t673t__unsafe_ptr,&__t673t__unsafe_size,&__t673t__unsafe_offset,&__t673t__unsafe_align);
  __t674t__unsafe_ptr=__t673t__unsafe_ptr;
  __t674t__unsafe_size=__t673t__unsafe_size;
  __t674t__unsafe_offset=__t673t__unsafe_offset;
  __t674t__unsafe_align=__t673t__unsafe_align;
  buf__unsafe_ptr=__t674t__unsafe_ptr;
  buf__unsafe_size=__t674t__unsafe_size;
  buf__unsafe_offset=__t674t__unsafe_offset;
  buf__unsafe_align=__t674t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t675t__);
  buf__unsafe_ptr=__t675t__;
  if(c){
  length=strlen(c);
  }
  __t676t=1;
  add__t171t(length,__t676t,&__t677t__);
  buf__unsafe_size=__t677t__;
  __t678t=0;
  __t_errcode=str__t666t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t678t,length,&__t679t__unsafe_ptr,&__t679t__dat__pos,&__t679t__dat__length,&__t679t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1444t=__t679t__unsafe_ptr;
  *__t1445t=__t679t__dat__pos;
  *__t1446t=__t679t__dat__length;
  *__t1447t=__t679t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t680t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1448t) {
  goto __t_return;
  __t_return:
  *__t1448t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t602t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1449t) {
  goto __t_return;
  __t_return:
  *__t1449t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t1450t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1450t=z;
}

int copy__t751t(char** __t1451t, uint64_t* __t1452t, uint16_t* __t1453t, uint16_t* __t1454t, uint64_t* __t1455t, const char* _other, char** __t1456t, uint64_t* __t1457t, uint64_t* __t1458t, char* __t1459t) {
  char* buf__unsafe_ptr=*__t1451t;
  uint64_t buf__unsafe_size=*__t1452t;
  uint16_t buf__unsafe_offset=*__t1453t;
  uint16_t buf__unsafe_align=*__t1454t;
  uint64_t pos=*__t1455t;
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
  __t_errcode=str__t672t(_other,&__t752t__unsafe_ptr,&__t752t__dat__pos,&__t752t__dat__length,&__t752t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t752t__unsafe_ptr;
  other__dat__pos=__t752t__dat__pos;
  other__dat__length=__t752t__dat__length;
  other__dat__first=__t752t__dat__first;
  len__t680t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t753t__);
  add__t171t(pos,__t753t__,&__t754t__);
  next_pos=__t754t__;
  len__t602t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t755t__);
  gt__t272t(next_pos,__t755t__,&__t756t__);
  if(__t756t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t757t=0;
  add__t171t(pos,__t757t,&__t758t__);
  prev_pos=__t758t__;
  pos=next_pos;
  __t_errcode=str__t634t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t759t__unsafe_ptr,&__t759t__dat__pos,&__t759t__dat__length,&__t759t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1451t=buf__unsafe_ptr;
  *__t1452t=buf__unsafe_size;
  *__t1453t=buf__unsafe_offset;
  *__t1454t=buf__unsafe_align;
  *__t1455t=pos;
  *__t1456t=__t759t__unsafe_ptr;
  *__t1457t=__t759t__dat__pos;
  *__t1458t=__t759t__dat__length;
  *__t1459t=__t759t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Person__t1325t(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __t1460t, uint64_t* __t1461t, uint64_t* __t1462t, char* __t1463t, char** __t1464t, uint64_t* __t1465t, uint64_t* __t1466t, char* __t1467t) {
  goto __t_return;
  __t_return:
  *__t1460t=name__unsafe_ptr;
  *__t1461t=name__dat__pos;
  *__t1462t=name__dat__length;
  *__t1463t=name__dat__first;
  *__t1464t=surname__unsafe_ptr;
  *__t1465t=surname__dat__pos;
  *__t1466t=surname__dat__length;
  *__t1467t=surname__dat__first;
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

static inline __attribute__((always_inline)) void print__t784t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t785t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t1327t(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__t369t(__t1328t);
  print__t367t(__t1330t,__t363t);
  print__t784t(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__t367t(__t1333t,__t363t);
  print__t784t(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__t369t(__t1328t);
}

static inline __attribute__((always_inline)) int test__t1337t(char** __t1468t, uint64_t* __t1469t, uint16_t* __t1470t, uint16_t* __t1471t, uint64_t* __t1472t, char** __t1473t, uint64_t* __t1474t, uint16_t* __t1475t, uint16_t* __t1476t) {
  char* __t1340t__unsafe_ptr=0;
  uint64_t __t1340t__unsafe_size=0;
  uint16_t __t1340t__unsafe_offset=0;
  uint16_t __t1340t__unsafe_align=0;
  uint64_t __t1341t=0;
  char* __t1342t__unsafe_ptr=0;
  uint64_t __t1342t__unsafe_size=0;
  uint16_t __t1342t__unsafe_offset=0;
  uint16_t __t1342t__unsafe_align=0;
  char __t1343t____t511t__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __t1346t__unsafe_ptr=0;
  uint64_t __t1346t__unsafe_size=0;
  uint16_t __t1346t__unsafe_offset=0;
  uint16_t __t1346t__unsafe_align=0;
  uint64_t __t1347t=0;
  uint64_t __t1348t__=0;
  char* __t1349t__unsafe_ptr=0;
  uint64_t __t1349t__unsafe_size=0;
  uint16_t __t1349t__unsafe_offset=0;
  uint16_t __t1349t__unsafe_align=0;
  char __t1350t____t511t__=0;
  char* __t1351t__buf__unsafe_ptr=0;
  uint64_t __t1351t__buf__unsafe_size=0;
  uint16_t __t1351t__buf__unsafe_offset=0;
  uint16_t __t1351t__buf__unsafe_align=0;
  uint64_t __t1351t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __t1352t=0;
  char* __t1353t__=0;
  uint64_t __t1354t=0;
  char* __t1356t__unsafe_ptr=0;
  uint64_t __t1356t__dat__pos=0;
  uint64_t __t1356t__dat__length=0;
  char __t1356t__dat__first=0;
  char* __t1358t__unsafe_ptr=0;
  uint64_t __t1358t__dat__pos=0;
  uint64_t __t1358t__dat__length=0;
  char __t1358t__dat__first=0;
  char* __t1359t__name__unsafe_ptr=0;
  uint64_t __t1359t__name__dat__pos=0;
  uint64_t __t1359t__name__dat__length=0;
  char __t1359t__name__dat__first=0;
  char* __t1359t__surname__unsafe_ptr=0;
  uint64_t __t1359t__surname__dat__pos=0;
  uint64_t __t1359t__surname__dat__length=0;
  char __t1359t__surname__dat__first=0;
  uint64_t __t1360t=0;
  char* __t1361t__=0;
  char* __t1362t__name__unsafe_ptr=0;
  uint64_t __t1362t__name__dat__pos=0;
  uint64_t __t1362t__name__dat__length=0;
  char __t1362t__name__dat__first=0;
  char* __t1362t__surname__unsafe_ptr=0;
  uint64_t __t1362t__surname__dat__pos=0;
  uint64_t __t1362t__surname__dat__length=0;
  char __t1362t__surname__dat__first=0;
  char* __t1364t__unsafe_ptr=0;
  uint64_t __t1364t__unsafe_size=0;
  uint16_t __t1364t__unsafe_offset=0;
  uint16_t __t1364t__unsafe_align=0;
  char* __t1368t__unsafe_ptr=0;
  uint64_t __t1368t__unsafe_size=0;
  uint16_t __t1368t__unsafe_offset=0;
  uint16_t __t1368t__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  Person____t_buffer____buffer__t1338t(&__t1340t__unsafe_ptr,&__t1340t__unsafe_size,&__t1340t__unsafe_offset,&__t1340t__unsafe_align);
  __t1341t=4;
  __t_errcode=alloc__t509t(&__t1340t__unsafe_ptr,&__t1340t__unsafe_size,&__t1340t__unsafe_offset,&__t1340t__unsafe_align,__t1341t,&__t1342t__unsafe_ptr,&__t1342t__unsafe_size,&__t1342t__unsafe_offset,&__t1342t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  people__unsafe_ptr=__t1342t__unsafe_ptr;
  people__unsafe_size=__t1342t__unsafe_size;
  people__unsafe_offset=__t1342t__unsafe_offset;
  people__unsafe_align=__t1342t__unsafe_align;
  char____t_buffer____buffer__t1344t(&__t1346t__unsafe_ptr,&__t1346t__unsafe_size,&__t1346t__unsafe_offset,&__t1346t__unsafe_align);
  __t1347t=4;
  KB__t480t(__t1347t,&__t1348t__);
  __t_errcode=alloc__t509t(&__t1346t__unsafe_ptr,&__t1346t__unsafe_size,&__t1346t__unsafe_offset,&__t1346t__unsafe_align,__t1348t__,&__t1349t__unsafe_ptr,&__t1349t__unsafe_size,&__t1349t__unsafe_offset,&__t1349t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t722t(&__t1349t__unsafe_ptr,&__t1349t__unsafe_size,&__t1349t__unsafe_offset,&__t1349t__unsafe_align,&__t1351t__buf__unsafe_ptr,&__t1351t__buf__unsafe_size,&__t1351t__buf__unsafe_offset,&__t1351t__buf__unsafe_align,&__t1351t__pos);
  buf__buf__unsafe_ptr=__t1351t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1351t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1351t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1351t__buf__unsafe_align;
  buf__pos=__t1351t__pos;
  __t1352t=0;
  __t_errcode=mutget__t588t(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__t1352t,&__t1353t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1354t=0;
  __t_errcode=copy__t751t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1355t,&__t1356t__unsafe_ptr,&__t1356t__dat__pos,&__t1356t__dat__length,&__t1356t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t751t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1357t,&__t1358t__unsafe_ptr,&__t1358t__dat__pos,&__t1358t__dat__length,&__t1358t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  Person__t1325t(__t1354t,__t1356t__unsafe_ptr,__t1356t__dat__pos,__t1356t__dat__length,__t1356t__dat__first,__t1358t__unsafe_ptr,__t1358t__dat__pos,__t1358t__dat__length,__t1358t__dat__first,&__t1359t__name__unsafe_ptr,&__t1359t__name__dat__pos,&__t1359t__name__dat__length,&__t1359t__name__dat__first,&__t1359t__surname__unsafe_ptr,&__t1359t__surname__dat__pos,&__t1359t__surname__dat__length,&__t1359t__surname__dat__first);
  if(!__t1353t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1353t__,&__t1359t__name__unsafe_ptr,8);
  memcpy(__t1353t__+8,&__t1359t__name__dat__pos,8);
  memcpy(__t1353t__+16,&__t1359t__name__dat__length,8);
  memcpy(__t1353t__+24,&__t1359t__name__dat__first,1);
  memcpy(__t1353t__+25,&__t1359t__surname__unsafe_ptr,8);
  memcpy(__t1353t__+33,&__t1359t__surname__dat__pos,8);
  memcpy(__t1353t__+41,&__t1359t__surname__dat__length,8);
  memcpy(__t1353t__+49,&__t1359t__surname__dat__first,1);
  __t1360t=0;
  __t_errcode=get__t595t(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__t1360t,&__t1361t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1361t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1362t__name__unsafe_ptr,__t1361t__,8);
  memcpy(&__t1362t__name__dat__pos,__t1361t__+8,8);
  memcpy(&__t1362t__name__dat__length,__t1361t__+16,8);
  memcpy(&__t1362t__name__dat__first,__t1361t__+24,1);
  memcpy(&__t1362t__surname__unsafe_ptr,__t1361t__+25,8);
  memcpy(&__t1362t__surname__dat__pos,__t1361t__+33,8);
  memcpy(&__t1362t__surname__dat__length,__t1361t__+41,8);
  memcpy(&__t1362t__surname__dat__first,__t1361t__+49,1);
  print__t1327t(__t1362t__name__unsafe_ptr,__t1362t__name__dat__pos,__t1362t__name__dat__length,__t1362t__name__dat__first,__t1362t__surname__unsafe_ptr,__t1362t__surname__dat__pos,__t1362t__surname__dat__length,__t1362t__surname__dat__first);
  __t1364t__unsafe_ptr=people__unsafe_ptr;
  __t1364t__unsafe_size=people__unsafe_size;
  __t1364t__unsafe_offset=people__unsafe_offset+0;
  __t1364t__unsafe_align=people__unsafe_align;
  __t1368t__unsafe_ptr=__t1364t__unsafe_ptr;
  __t1368t__unsafe_size=__t1364t__unsafe_size;
  __t1368t__unsafe_offset=__t1364t__unsafe_offset+8;
  __t1368t__unsafe_align=__t1364t__unsafe_align;
  dat__unsafe_ptr=__t1368t__unsafe_ptr;
  dat__unsafe_size=__t1368t__unsafe_size;
  dat__unsafe_offset=__t1368t__unsafe_offset;
  dat__unsafe_align=__t1368t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(buf__buf__unsafe_ptr,&__t1350t____t511t__);
  if(__t1350t____t511t__){
  buf__buf__unsafe_ptr=buf__buf__unsafe_ptr;
  free__t502t(&buf__buf__unsafe_ptr);
  }
  exists__t436t(dat__unsafe_ptr,&__t1343t____t511t__);
  if(__t1343t____t511t__){
  dat__unsafe_ptr=dat__unsafe_ptr;
  free__t502t(&dat__unsafe_ptr);
  }
  __t_return:
  *__t1468t=buf__buf__unsafe_ptr;
  *__t1469t=buf__buf__unsafe_size;
  *__t1470t=buf__buf__unsafe_offset;
  *__t1471t=buf__buf__unsafe_align;
  *__t1472t=buf__pos;
  *__t1473t=dat__unsafe_ptr;
  *__t1474t=dat__unsafe_size;
  *__t1475t=dat__unsafe_offset;
  *__t1476t=dat__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1372t() {
  char* __t1373t__buf__buf__unsafe_ptr=0;
  uint64_t __t1373t__buf__buf__unsafe_size=0;
  uint16_t __t1373t__buf__buf__unsafe_offset=0;
  uint16_t __t1373t__buf__buf__unsafe_align=0;
  uint64_t __t1373t__buf__pos=0;
  char* __t1373t__dat__unsafe_ptr=0;
  uint64_t __t1373t__dat__unsafe_size=0;
  uint16_t __t1373t__dat__unsafe_offset=0;
  uint16_t __t1373t__dat__unsafe_align=0;
  char __t1374t____t1343t____t511t__=0;
  char __t1374t____t1350t____t511t__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __t1375t=0;
  char* __t1376t__=0;
  uint64_t __t1377t__pos=0;
  uint64_t __t1377t__length=0;
  char __t1377t__first=0;
  char* __t1378t__unsafe_ptr=0;
  uint64_t __t1378t__dat__pos=0;
  uint64_t __t1378t__dat__length=0;
  char __t1378t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test__t1337t(&__t1373t__buf__buf__unsafe_ptr,&__t1373t__buf__buf__unsafe_size,&__t1373t__buf__buf__unsafe_offset,&__t1373t__buf__buf__unsafe_align,&__t1373t__buf__pos,&__t1373t__dat__unsafe_ptr,&__t1373t__dat__unsafe_size,&__t1373t__dat__unsafe_offset,&__t1373t__dat__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__buf__buf__unsafe_ptr=__t1373t__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__t1373t__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__t1373t__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__t1373t__buf__buf__unsafe_align;
  t__buf__pos=__t1373t__buf__pos;
  t__dat__unsafe_ptr=__t1373t__dat__unsafe_ptr;
  t__dat__unsafe_size=__t1373t__dat__unsafe_size;
  t__dat__unsafe_offset=__t1373t__dat__unsafe_offset;
  t__dat__unsafe_align=__t1373t__dat__unsafe_align;
  __t1375t=0;
  __t_errcode=get__t595t(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__t1375t,&__t1376t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1376t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1377t__pos,__t1376t__,8);
  memcpy(&__t1377t__length,__t1376t__+8,8);
  memcpy(&__t1377t__first,__t1376t__+16,1);
  __t_errcode=str__t634t(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__t1377t__pos,__t1377t__length,__t1377t__first,&__t1378t__unsafe_ptr,&__t1378t__dat__pos,&__t1378t__dat__length,&__t1378t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t784t(__t1378t__unsafe_ptr,__t1378t__dat__pos,__t1378t__dat__length,__t1378t__dat__first);
  
  __t_failure:exists__t436t(__t1373t__buf__buf__unsafe_ptr,&__t1374t____t1350t____t511t__);
  if(__t1374t____t1350t____t511t__){
  __t1373t__buf__buf__unsafe_ptr=__t1373t__buf__buf__unsafe_ptr;
  free__t502t(&__t1373t__buf__buf__unsafe_ptr);
  }
  exists__t436t(__t1373t__dat__unsafe_ptr,&__t1374t____t1343t____t511t__);
  if(__t1374t____t1343t____t511t__){
  __t1373t__dat__unsafe_ptr=__t1373t__dat__unsafe_ptr;
  free__t502t(&__t1373t__dat__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1372t();return 0;}