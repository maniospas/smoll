#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1386t="hi";
const char* const __t1390t="my";
const char* const __t1402t="manios";
const char* const __t1398t="is";
const char* const __t1394t="name";
const char* const __t1053t=" ";
const char* const __t371t="\n";
static const char* __t_all_errcodes[39] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32"
};

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1357t(char** __t1418t, uint64_t* __t1419t, uint16_t* __t1420t, uint16_t* __t1421t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__t1418t=unsafe_ptr;
  *__t1419t=unsafe_size;
  *__t1420t=unsafe_offset;
  *__t1421t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1422t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1422t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1423t) {
  char* allocated=*__t1423t;
  if(allocated){
  free(allocated);
  }
  *__t1423t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1424t) {
  int value=0;
  *__t1424t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1425t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1425t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1426t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1426t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1427t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1427t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1428t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1428t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1429t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1429t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1430t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1430t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1431t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1431t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1432t) {
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
  *__t1432t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1433t, uint64_t* __t1434t, uint16_t* __t1435t, uint16_t* __t1436t, uint64_t size, char** __t1437t, uint64_t* __t1438t, uint16_t* __t1439t, uint16_t* __t1440t) {
  char* buffer__unsafe_ptr=*__t1433t;
  uint64_t buffer__unsafe_size=*__t1434t;
  uint16_t buffer__unsafe_offset=*__t1435t;
  uint16_t buffer__unsafe_align=*__t1436t;
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
  *__t1433t=buffer__unsafe_ptr;
  *__t1434t=buffer__unsafe_size;
  *__t1435t=buffer__unsafe_offset;
  *__t1436t=buffer__unsafe_align;
  *__t1437t=__t520t__unsafe_ptr;
  *__t1438t=__t520t__unsafe_size;
  *__t1439t=__t520t__unsafe_offset;
  *__t1440t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1441t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1441t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1442t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1442t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1443t) {
  *__t1443t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1444t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1444t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t588t(char** __t1445t, uint64_t* __t1446t, uint16_t* __t1447t, uint16_t* __t1448t, uint64_t i, char** __t1449t) {
  char* buffer__unsafe_ptr=*__t1445t;
  uint64_t buffer__unsafe_size=*__t1446t;
  uint16_t buffer__unsafe_offset=*__t1447t;
  uint16_t buffer__unsafe_align=*__t1448t;
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
  *__t1445t=buffer__unsafe_ptr;
  *__t1446t=buffer__unsafe_size;
  *__t1447t=buffer__unsafe_offset;
  *__t1448t=buffer__unsafe_align;
  *__t1449t=__t594t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t555t(char** __t1450t, uint64_t* __t1451t, uint16_t* __t1452t, uint16_t* __t1453t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1450t=unsafe_ptr;
  *__t1451t=unsafe_size;
  *__t1452t=unsafe_offset;
  *__t1453t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1454t) {
  *__t1454t=to;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1455t) {
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
  *__t1455t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t630t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1456t, uint64_t* __t1457t, uint64_t* __t1458t, char* __t1459t) {
  goto __t_return;
  __t_return:
  *__t1456t=unsafe_ptr;
  *__t1457t=dat__pos;
  *__t1458t=dat__length;
  *__t1459t=dat__first;
}

static inline __attribute__((always_inline)) int str__t634t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1460t, uint64_t* __t1461t, uint64_t* __t1462t, char* __t1463t) {
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
  *__t1460t=__t641t__unsafe_ptr;
  *__t1461t=__t641t__dat__pos;
  *__t1462t=__t641t__dat__length;
  *__t1463t=__t641t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t666t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1464t, uint64_t* __t1465t, uint64_t* __t1466t, char* __t1467t) {
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
  *__t1464t=__t671t__unsafe_ptr;
  *__t1465t=__t671t__dat__pos;
  *__t1466t=__t671t__dat__length;
  *__t1467t=__t671t__dat__first;
  
  return __t_errcode;
}

int str__t672t(const char* c, char** __t1468t, uint64_t* __t1469t, uint64_t* __t1470t, char* __t1471t) {
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
  *__t1468t=__t679t__unsafe_ptr;
  *__t1469t=__t679t__dat__pos;
  *__t1470t=__t679t__dat__length;
  *__t1471t=__t679t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t1472t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1472t=z;
}

static inline __attribute__((always_inline)) int nat16__t1328t(uint64_t x, uint16_t* __t1473t) {
  uint64_t __t1329t=0;
  char __t1330t__=0;
  uint16_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1329t=65535;
  gt__t272t(x,__t1329t,&__t1330t__);
  if(__t1330t__){
  __t_errcode=37;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1473t=value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int strdat__t1335t(uint64_t _pos, uint64_t _length, uint16_t* __t1474t, uint16_t* __t1475t) {
  uint16_t __t1336t__=0;
  uint16_t pos=0;
  uint16_t __t1337t__=0;
  uint16_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat16__t1328t(_pos,&__t1336t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1336t__;
  __t_errcode=nat16__t1328t(_length,&__t1337t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1337t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1474t=pos;
  *__t1475t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1338t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __t1476t, uint16_t* __t1477t, uint16_t* __t1478t) {
  char* unsafe_ptr=0;
  uint16_t __t1339t__pos=0;
  uint16_t __t1339t__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __t_errcode=strdat__t1335t(s__dat__pos,s__dat__length,&__t1339t__pos,&__t1339t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  dat__pos=__t1339t__pos;
  dat__length=__t1339t__length;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1476t=unsafe_ptr;
  *__t1477t=dat__pos;
  *__t1478t=dat__length;
  
  return __t_errcode;
}

int str__t1341t(const char* s, char** __t1479t, uint16_t* __t1480t, uint16_t* __t1481t) {
  char* __t1342t__unsafe_ptr=0;
  uint64_t __t1342t__dat__pos=0;
  uint64_t __t1342t__dat__length=0;
  char __t1342t__dat__first=0;
  char* __t1343t__unsafe_ptr=0;
  uint16_t __t1343t__dat__pos=0;
  uint16_t __t1343t__dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t672t(s,&__t1342t__unsafe_ptr,&__t1342t__dat__pos,&__t1342t__dat__length,&__t1342t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1338t(__t1342t__unsafe_ptr,__t1342t__dat__pos,__t1342t__dat__length,__t1342t__dat__first,&__t1343t__unsafe_ptr,&__t1343t__dat__pos,&__t1343t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1479t=__t1343t__unsafe_ptr;
  *__t1480t=__t1343t__dat__pos;
  *__t1481t=__t1343t__dat__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1360t(char** __t1482t, uint64_t* __t1483t, uint16_t* __t1484t, uint16_t* __t1485t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1482t=unsafe_ptr;
  *__t1483t=unsafe_size;
  *__t1484t=unsafe_offset;
  *__t1485t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t480t(uint64_t x, uint64_t* __t1486t) {
  uint64_t __t481t=0;
  uint64_t __t482t__=0;
  __t481t=1024;
  mul__t195t(x,__t481t,&__t482t__);
  goto __t_return;
  __t_return:
  *__t1486t=__t482t__;
}

static inline __attribute__((always_inline)) void bufpos__t722t(char** __t1487t, uint64_t* __t1488t, uint16_t* __t1489t, uint16_t* __t1490t, char** __t1491t, uint64_t* __t1492t, uint16_t* __t1493t, uint16_t* __t1494t, uint64_t* __t1495t) {
  char* buf__unsafe_ptr=*__t1487t;
  uint64_t buf__unsafe_size=*__t1488t;
  uint16_t buf__unsafe_offset=*__t1489t;
  uint16_t buf__unsafe_align=*__t1490t;
  uint64_t __t723t=0;
  uint64_t __t724t=0;
  uint64_t pos=0;
  __t723t=0;
  __t724t=__t723t;
  pos=__t724t;
  goto __t_return;
  __t_return:
  *__t1487t=buf__unsafe_ptr;
  *__t1488t=buf__unsafe_size;
  *__t1489t=buf__unsafe_offset;
  *__t1490t=buf__unsafe_align;
  *__t1491t=buf__unsafe_ptr;
  *__t1492t=buf__unsafe_size;
  *__t1493t=buf__unsafe_offset;
  *__t1494t=buf__unsafe_align;
  *__t1495t=pos;
}

static inline __attribute__((always_inline)) void len__t602t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1496t) {
  goto __t_return;
  __t_return:
  *__t1496t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t1497t, uint64_t* __t1498t) {
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
  *__t1497t=from;
  *__t1498t=to;
}

static inline __attribute__((always_inline)) int next__t470t(uint64_t* __t1499t, uint64_t r__to, uint64_t* __t1500t) {
  uint64_t r__from=*__t1499t;
  char __t471t__=0;
  uint64_t ret=0;
  uint64_t __t472t=0;
  uint64_t __t473t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(r__from,r__to,&__t471t__);
  if(__t471t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t472t=1;
  add__t171t(ret,__t472t,&__t473t__);
  r__from=__t473t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1499t=r__from;
  *__t1500t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t1501t, uint64_t* __t1502t, uint64_t* __t1503t, char* __t1504t) {
  char* first_pos=0;
  char first=0;
  char* __t633t__unsafe_ptr=0;
  uint64_t __t633t__dat__pos=0;
  uint64_t __t633t__dat__length=0;
  char __t633t__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__t630t(unsafe_ptr,pos,length,first,&__t633t__unsafe_ptr,&__t633t__dat__pos,&__t633t__dat__length,&__t633t__dat__first);
  goto __t_return;
  __t_return:
  *__t1501t=__t633t__unsafe_ptr;
  *__t1502t=__t633t__dat__pos;
  *__t1503t=__t633t__dat__length;
  *__t1504t=__t633t__dat__first;
}

static inline __attribute__((always_inline)) void unpack__t1344t(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __t1505t, uint64_t* __t1506t, uint64_t* __t1507t, char* __t1508t) {
  uint64_t __t1345t__=0;
  uint64_t __t1346t__=0;
  char* __t1347t__unsafe_ptr=0;
  uint64_t __t1347t__dat__pos=0;
  uint64_t __t1347t__dat__length=0;
  char __t1347t__dat__first=0;
  nat__t506t(m__dat__pos,&__t1345t__);
  nat__t506t(m__dat__length,&__t1346t__);
  str__t632t(m__unsafe_ptr,__t1345t__,__t1346t__,&__t1347t__unsafe_ptr,&__t1347t__dat__pos,&__t1347t__dat__length,&__t1347t__dat__first);
  goto __t_return;
  __t_return:
  *__t1505t=__t1347t__unsafe_ptr;
  *__t1506t=__t1347t__dat__pos;
  *__t1507t=__t1347t__dat__length;
  *__t1508t=__t1347t__dat__first;
}

static inline __attribute__((always_inline)) void str__t665t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1509t, uint64_t* __t1510t, uint64_t* __t1511t, char* __t1512t) {
  goto __t_return;
  __t_return:
  *__t1509t=other__unsafe_ptr;
  *__t1510t=other__dat__pos;
  *__t1511t=other__dat__length;
  *__t1512t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t680t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1513t) {
  goto __t_return;
  __t_return:
  *__t1513t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__t742t(char** __t1514t, uint64_t* __t1515t, uint16_t* __t1516t, uint16_t* __t1517t, uint64_t* __t1518t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1519t, uint64_t* __t1520t, uint64_t* __t1521t, char* __t1522t) {
  char* buf__unsafe_ptr=*__t1514t;
  uint64_t buf__unsafe_size=*__t1515t;
  uint16_t buf__unsafe_offset=*__t1516t;
  uint16_t buf__unsafe_align=*__t1517t;
  uint64_t pos=*__t1518t;
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
  str__t665t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t743t__unsafe_ptr,&__t743t__dat__pos,&__t743t__dat__length,&__t743t__dat__first);
  other__unsafe_ptr=__t743t__unsafe_ptr;
  other__dat__pos=__t743t__dat__pos;
  other__dat__length=__t743t__dat__length;
  other__dat__first=__t743t__dat__first;
  len__t680t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t744t__);
  add__t171t(pos,__t744t__,&__t745t__);
  next_pos=__t745t__;
  len__t602t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t746t__);
  gt__t272t(next_pos,__t746t__,&__t747t__);
  if(__t747t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t748t=0;
  add__t171t(pos,__t748t,&__t749t__);
  prev_pos=__t749t__;
  pos=next_pos;
  __t_errcode=str__t634t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t750t__unsafe_ptr,&__t750t__dat__pos,&__t750t__dat__length,&__t750t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1514t=buf__unsafe_ptr;
  *__t1515t=buf__unsafe_size;
  *__t1516t=buf__unsafe_offset;
  *__t1517t=buf__unsafe_align;
  *__t1518t=pos;
  *__t1519t=__t750t__unsafe_ptr;
  *__t1520t=__t750t__dat__pos;
  *__t1521t=__t750t__dat__length;
  *__t1522t=__t750t__dat__first;
  
  return __t_errcode;
}

int copy__t751t(char** __t1523t, uint64_t* __t1524t, uint16_t* __t1525t, uint16_t* __t1526t, uint64_t* __t1527t, const char* _other, char** __t1528t, uint64_t* __t1529t, uint64_t* __t1530t, char* __t1531t) {
  char* buf__unsafe_ptr=*__t1523t;
  uint64_t buf__unsafe_size=*__t1524t;
  uint16_t buf__unsafe_offset=*__t1525t;
  uint16_t buf__unsafe_align=*__t1526t;
  uint64_t pos=*__t1527t;
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
  *__t1523t=buf__unsafe_ptr;
  *__t1524t=buf__unsafe_size;
  *__t1525t=buf__unsafe_offset;
  *__t1526t=buf__unsafe_align;
  *__t1527t=pos;
  *__t1528t=__t759t__unsafe_ptr;
  *__t1529t=__t759t__dat__pos;
  *__t1530t=__t759t__dat__length;
  *__t1531t=__t759t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1359t(char* buff__unsafe_ptr, uint64_t buff__unsafe_size, uint16_t buff__unsafe_offset, uint16_t buff__unsafe_align, char** __t1532t, uint64_t* __t1533t, uint64_t* __t1534t, char* __t1535t) {
  char* __t1362t__unsafe_ptr=0;
  uint64_t __t1362t__unsafe_size=0;
  uint16_t __t1362t__unsafe_offset=0;
  uint16_t __t1362t__unsafe_align=0;
  uint64_t __t1363t=0;
  uint64_t __t1364t__=0;
  char* __t1365t__unsafe_ptr=0;
  uint64_t __t1365t__unsafe_size=0;
  uint16_t __t1365t__unsafe_offset=0;
  uint16_t __t1365t__unsafe_align=0;
  char __t1366t____t511t__=0;
  char* __t1367t__buf__unsafe_ptr=0;
  uint64_t __t1367t__buf__unsafe_size=0;
  uint16_t __t1367t__buf__unsafe_offset=0;
  uint16_t __t1367t__buf__unsafe_align=0;
  uint64_t __t1367t__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __t1368t__=0;
  uint64_t __t1369t__from=0;
  uint64_t __t1369t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __t1370t=0;
  uint64_t __t1371t__=0;
  uint64_t i=0;
  char* __t1372t__=0;
  char* __t1373t__unsafe_ptr=0;
  uint16_t __t1373t__dat__pos=0;
  uint16_t __t1373t__dat__length=0;
  char* __t1374t__unsafe_ptr=0;
  uint64_t __t1374t__dat__pos=0;
  uint64_t __t1374t__dat__length=0;
  char __t1374t__dat__first=0;
  char* __t1375t__unsafe_ptr=0;
  uint64_t __t1375t__dat__pos=0;
  uint64_t __t1375t__dat__length=0;
  char __t1375t__dat__first=0;
  char* __t1376t__unsafe_ptr=0;
  uint64_t __t1376t__dat__pos=0;
  uint64_t __t1376t__dat__length=0;
  char __t1376t__dat__first=0;
  char* __t1377t__unsafe_ptr=0;
  uint64_t __t1377t__dat__pos=0;
  uint64_t __t1377t__dat__length=0;
  char __t1377t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1360t(&__t1362t__unsafe_ptr,&__t1362t__unsafe_size,&__t1362t__unsafe_offset,&__t1362t__unsafe_align);
  __t1363t=4;
  KB__t480t(__t1363t,&__t1364t__);
  __t_errcode=alloc__t509t(&__t1362t__unsafe_ptr,&__t1362t__unsafe_size,&__t1362t__unsafe_offset,&__t1362t__unsafe_align,__t1364t__,&__t1365t__unsafe_ptr,&__t1365t__unsafe_size,&__t1365t__unsafe_offset,&__t1365t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t722t(&__t1365t__unsafe_ptr,&__t1365t__unsafe_size,&__t1365t__unsafe_offset,&__t1365t__unsafe_align,&__t1367t__buf__unsafe_ptr,&__t1367t__buf__unsafe_size,&__t1367t__buf__unsafe_offset,&__t1367t__buf__unsafe_align,&__t1367t__pos);
  mem__pos=__t1367t__pos;
  len__t602t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1368t__);
  range__t461t(__t1368t__,&__t1369t__from,&__t1369t__to);
  iter__from=__t1369t__from;
  iter__to=__t1369t__to;
  start=mem__pos;
  while(1){
  __t_complain=next__t470t(&iter__from,iter__to,&__t1371t__);
  __t1370t=__t_complain;
  i=__t1371t__;
  __t1370t=__t1370t==0;
  if(!__t1370t){
  break;
  }
  __t_errcode=get__t595t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__t1372t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1372t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1373t__unsafe_ptr,__t1372t__,8);
  memcpy(&__t1373t__dat__pos,__t1372t__+8,2);
  memcpy(&__t1373t__dat__length,__t1372t__+10,2);
  unpack__t1344t(__t1373t__unsafe_ptr,__t1373t__dat__pos,__t1373t__dat__length,&__t1374t__unsafe_ptr,&__t1374t__dat__pos,&__t1374t__dat__length,&__t1374t__dat__first);
  __t_errcode=copy__t742t(&__t1365t__unsafe_ptr,&__t1365t__unsafe_size,&__t1365t__unsafe_offset,&__t1365t__unsafe_align,&mem__pos,__t1374t__unsafe_ptr,__t1374t__dat__pos,__t1374t__dat__length,__t1374t__dat__first,&__t1375t__unsafe_ptr,&__t1375t__dat__pos,&__t1375t__dat__length,&__t1375t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t751t(&__t1365t__unsafe_ptr,&__t1365t__unsafe_size,&__t1365t__unsafe_offset,&__t1365t__unsafe_align,&mem__pos,__t1053t,&__t1376t__unsafe_ptr,&__t1376t__dat__pos,&__t1376t__dat__length,&__t1376t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=str__t666t(__t1365t__unsafe_ptr,__t1365t__unsafe_size,__t1365t__unsafe_offset,__t1365t__unsafe_align,start,mem__pos,&__t1377t__unsafe_ptr,&__t1377t__dat__pos,&__t1377t__dat__length,&__t1377t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1377t__unsafe_ptr=__t1365t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t436t(__t1377t__unsafe_ptr,&__t1366t____t511t__);
  if(__t1366t____t511t__){
  __t1377t__unsafe_ptr=__t1377t__unsafe_ptr;
  free__t502t(&__t1377t__unsafe_ptr);
  }
  __t_return:
  *__t1532t=__t1377t__unsafe_ptr;
  *__t1533t=__t1377t__dat__pos;
  *__t1534t=__t1377t__dat__length;
  *__t1535t=__t1377t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t380t(uint64_t value, const char* endl) {
  int __t381t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t784t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t785t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1378t() {
  char* __t1379t__unsafe_ptr=0;
  uint64_t __t1379t__unsafe_size=0;
  uint16_t __t1379t__unsafe_offset=0;
  uint16_t __t1379t__unsafe_align=0;
  char* __t1380t__unsafe_ptr=0;
  uint64_t __t1380t__unsafe_size=0;
  uint16_t __t1380t__unsafe_offset=0;
  uint16_t __t1380t__unsafe_align=0;
  uint64_t __t1381t=0;
  char* __t1382t__unsafe_ptr=0;
  uint64_t __t1382t__unsafe_size=0;
  uint16_t __t1382t__unsafe_offset=0;
  uint16_t __t1382t__unsafe_align=0;
  char __t1383t____t511t__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __t1384t=0;
  char* __t1385t__=0;
  char* __t1387t__unsafe_ptr=0;
  uint16_t __t1387t__dat__pos=0;
  uint16_t __t1387t__dat__length=0;
  uint64_t __t1388t=0;
  char* __t1389t__=0;
  char* __t1391t__unsafe_ptr=0;
  uint16_t __t1391t__dat__pos=0;
  uint16_t __t1391t__dat__length=0;
  uint64_t __t1392t=0;
  char* __t1393t__=0;
  char* __t1395t__unsafe_ptr=0;
  uint16_t __t1395t__dat__pos=0;
  uint16_t __t1395t__dat__length=0;
  uint64_t __t1396t=0;
  char* __t1397t__=0;
  char* __t1399t__unsafe_ptr=0;
  uint16_t __t1399t__dat__pos=0;
  uint16_t __t1399t__dat__length=0;
  uint64_t __t1400t=0;
  char* __t1401t__=0;
  char* __t1403t__unsafe_ptr=0;
  uint16_t __t1403t__dat__pos=0;
  uint16_t __t1403t__dat__length=0;
  uint64_t __t1404t=0;
  char* __t1405t__=0;
  char* __t1406t__unsafe_ptr=0;
  uint64_t __t1406t__dat__pos=0;
  uint64_t __t1406t__dat__length=0;
  char __t1406t__dat__first=0;
  char __t1407t____t1366t____t511t__=0;
  char* __t1408t__unsafe_ptr=0;
  uint16_t __t1408t__dat__pos=0;
  uint16_t __t1408t__dat__length=0;
  uint64_t __t1409t__=0;
  uint64_t __t1410t__from=0;
  uint64_t __t1410t__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __t1411t=0;
  uint64_t __t1412t__=0;
  uint64_t j=0;
  char* __t1414t__=0;
  char* __t1415t__unsafe_ptr=0;
  uint16_t __t1415t__dat__pos=0;
  uint16_t __t1415t__dat__length=0;
  char* __t1416t__unsafe_ptr=0;
  uint64_t __t1416t__dat__pos=0;
  uint64_t __t1416t__dat__length=0;
  char __t1416t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t1357t(&__t1379t__unsafe_ptr,&__t1379t__unsafe_size,&__t1379t__unsafe_offset,&__t1379t__unsafe_align);
  __t1380t__unsafe_ptr=__t1379t__unsafe_ptr;
  __t1380t__unsafe_size=__t1379t__unsafe_size;
  __t1380t__unsafe_offset=__t1379t__unsafe_offset;
  __t1380t__unsafe_align=__t1379t__unsafe_align;
  __t1381t=6;
  __t_errcode=alloc__t509t(&__t1380t__unsafe_ptr,&__t1380t__unsafe_size,&__t1380t__unsafe_offset,&__t1380t__unsafe_align,__t1381t,&__t1382t__unsafe_ptr,&__t1382t__unsafe_size,&__t1382t__unsafe_offset,&__t1382t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buff__unsafe_ptr=__t1382t__unsafe_ptr;
  buff__unsafe_size=__t1382t__unsafe_size;
  buff__unsafe_offset=__t1382t__unsafe_offset;
  buff__unsafe_align=__t1382t__unsafe_align;
  __t1384t=0;
  __t_errcode=mutget__t588t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1384t,&__t1385t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1341t(__t1386t,&__t1387t__unsafe_ptr,&__t1387t__dat__pos,&__t1387t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1385t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1385t__,&__t1387t__unsafe_ptr,8);
  memcpy(__t1385t__+8,&__t1387t__dat__pos,2);
  memcpy(__t1385t__+10,&__t1387t__dat__length,2);
  __t1388t=1;
  __t_errcode=mutget__t588t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1388t,&__t1389t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1341t(__t1390t,&__t1391t__unsafe_ptr,&__t1391t__dat__pos,&__t1391t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1389t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1389t__,&__t1391t__unsafe_ptr,8);
  memcpy(__t1389t__+8,&__t1391t__dat__pos,2);
  memcpy(__t1389t__+10,&__t1391t__dat__length,2);
  __t1392t=2;
  __t_errcode=mutget__t588t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1392t,&__t1393t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1341t(__t1394t,&__t1395t__unsafe_ptr,&__t1395t__dat__pos,&__t1395t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1393t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1393t__,&__t1395t__unsafe_ptr,8);
  memcpy(__t1393t__+8,&__t1395t__dat__pos,2);
  memcpy(__t1393t__+10,&__t1395t__dat__length,2);
  __t1396t=3;
  __t_errcode=mutget__t588t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1396t,&__t1397t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1341t(__t1398t,&__t1399t__unsafe_ptr,&__t1399t__dat__pos,&__t1399t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1397t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1397t__,&__t1399t__unsafe_ptr,8);
  memcpy(__t1397t__+8,&__t1399t__dat__pos,2);
  memcpy(__t1397t__+10,&__t1399t__dat__length,2);
  __t1400t=4;
  __t_errcode=mutget__t588t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1400t,&__t1401t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1341t(__t1402t,&__t1403t__unsafe_ptr,&__t1403t__dat__pos,&__t1403t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1401t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1401t__,&__t1403t__unsafe_ptr,8);
  memcpy(__t1401t__+8,&__t1403t__dat__pos,2);
  memcpy(__t1401t__+10,&__t1403t__dat__length,2);
  __t1404t=5;
  __t_errcode=mutget__t588t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1404t,&__t1405t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=concat__t1359t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1406t__unsafe_ptr,&__t1406t__dat__pos,&__t1406t__dat__length,&__t1406t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1338t(__t1406t__unsafe_ptr,__t1406t__dat__pos,__t1406t__dat__length,__t1406t__dat__first,&__t1408t__unsafe_ptr,&__t1408t__dat__pos,&__t1408t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1405t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1405t__,&__t1408t__unsafe_ptr,8);
  memcpy(__t1405t__+8,&__t1408t__dat__pos,2);
  memcpy(__t1405t__+10,&__t1408t__dat__length,2);
  len__t602t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1409t__);
  range__t461t(__t1409t__,&__t1410t__from,&__t1410t__to);
  full_iter__from=__t1410t__from;
  full_iter__to=__t1410t__to;
  while(1){
  __t_complain=next__t470t(&full_iter__from,full_iter__to,&__t1412t__);
  __t1411t=__t_complain;
  j=__t1412t__;
  __t1411t=__t1411t==0;
  if(!__t1411t){
  break;
  }
  print__t380t(j,__t1053t);
  __t_errcode=get__t595t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__t1414t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1414t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1415t__unsafe_ptr,__t1414t__,8);
  memcpy(&__t1415t__dat__pos,__t1414t__+8,2);
  memcpy(&__t1415t__dat__length,__t1414t__+10,2);
  unpack__t1344t(__t1415t__unsafe_ptr,__t1415t__dat__pos,__t1415t__dat__length,&__t1416t__unsafe_ptr,&__t1416t__dat__pos,&__t1416t__dat__length,&__t1416t__dat__first);
  print__t784t(__t1416t__unsafe_ptr,__t1416t__dat__pos,__t1416t__dat__length,__t1416t__dat__first);
  }
  
  __t_failure:exists__t436t(__t1406t__unsafe_ptr,&__t1407t____t1366t____t511t__);
  if(__t1407t____t1366t____t511t__){
  __t1406t__unsafe_ptr=__t1406t__unsafe_ptr;
  free__t502t(&__t1406t__unsafe_ptr);
  }
  exists__t436t(__t1382t__unsafe_ptr,&__t1383t____t511t__);
  if(__t1383t____t511t__){
  __t1382t__unsafe_ptr=__t1382t__unsafe_ptr;
  free__t502t(&__t1382t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1378t();return 0;}