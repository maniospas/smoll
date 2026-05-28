#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1386t="my";
const char* const __t1382t="hi";
const char* const __t1390t="name";
const char* const __t1049t=" ";
const char* const __t1398t="manios";
const char* const __t1394t="is";
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

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1353t(char** __t1414t, uint64_t* __t1415t, uint16_t* __t1416t, uint16_t* __t1417t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__t1414t=unsafe_ptr;
  *__t1415t=unsafe_size;
  *__t1416t=unsafe_offset;
  *__t1417t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1418t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1418t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1419t) {
  char* allocated=*__t1419t;
  if(allocated){
  free(allocated);
  }
  *__t1419t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1420t) {
  int value=0;
  *__t1420t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1421t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1421t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1422t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1422t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1423t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1423t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1424t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1424t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1425t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1425t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1426t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1426t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1427t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1427t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1428t) {
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
  *__t1428t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1429t, uint64_t* __t1430t, uint16_t* __t1431t, uint16_t* __t1432t, uint64_t size, char** __t1433t, uint64_t* __t1434t, uint16_t* __t1435t, uint16_t* __t1436t) {
  char* buffer__unsafe_ptr=*__t1429t;
  uint64_t buffer__unsafe_size=*__t1430t;
  uint16_t buffer__unsafe_offset=*__t1431t;
  uint16_t buffer__unsafe_align=*__t1432t;
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
  *__t1429t=buffer__unsafe_ptr;
  *__t1430t=buffer__unsafe_size;
  *__t1431t=buffer__unsafe_offset;
  *__t1432t=buffer__unsafe_align;
  *__t1433t=buffer__unsafe_ptr;
  *__t1434t=buffer__unsafe_size;
  *__t1435t=buffer__unsafe_offset;
  *__t1436t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1437t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1437t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1438t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1438t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1439t) {
  *__t1439t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1440t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1440t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t584t(char** __t1441t, uint64_t* __t1442t, uint16_t* __t1443t, uint16_t* __t1444t, uint64_t i, char** __t1445t) {
  char* buffer__unsafe_ptr=*__t1441t;
  uint64_t buffer__unsafe_size=*__t1442t;
  uint16_t buffer__unsafe_offset=*__t1443t;
  uint16_t buffer__unsafe_align=*__t1444t;
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
  *__t1441t=buffer__unsafe_ptr;
  *__t1442t=buffer__unsafe_size;
  *__t1443t=buffer__unsafe_offset;
  *__t1444t=buffer__unsafe_align;
  *__t1445t=__t590t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t551t(char** __t1446t, uint64_t* __t1447t, uint16_t* __t1448t, uint16_t* __t1449t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1446t=unsafe_ptr;
  *__t1447t=unsafe_size;
  *__t1448t=unsafe_offset;
  *__t1449t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1450t) {
  *__t1450t=to;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1451t) {
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
  *__t1451t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t626t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1452t, uint64_t* __t1453t, uint64_t* __t1454t, char* __t1455t) {
  goto __t_return;
  __t_return:
  *__t1452t=unsafe_ptr;
  *__t1453t=dat__pos;
  *__t1454t=dat__length;
  *__t1455t=dat__first;
}

static inline __attribute__((always_inline)) int str__t630t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1456t, uint64_t* __t1457t, uint64_t* __t1458t, char* __t1459t) {
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
  *__t1456t=__t637t__unsafe_ptr;
  *__t1457t=__t637t__dat__pos;
  *__t1458t=__t637t__dat__length;
  *__t1459t=__t637t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t662t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1460t, uint64_t* __t1461t, uint64_t* __t1462t, char* __t1463t) {
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
  *__t1460t=__t667t__unsafe_ptr;
  *__t1461t=__t667t__dat__pos;
  *__t1462t=__t667t__dat__length;
  *__t1463t=__t667t__dat__first;
  
  return __t_errcode;
}

int str__t668t(const char* c, char** __t1464t, uint64_t* __t1465t, uint64_t* __t1466t, char* __t1467t) {
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
  *__t1464t=__t675t__unsafe_ptr;
  *__t1465t=__t675t__dat__pos;
  *__t1466t=__t675t__dat__length;
  *__t1467t=__t675t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t1468t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1468t=z;
}

static inline __attribute__((always_inline)) int nat16__t1324t(uint64_t x, uint16_t* __t1469t) {
  uint64_t __t1325t=0;
  char __t1326t__=0;
  uint16_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1325t=65535;
  gt__t272t(x,__t1325t,&__t1326t__);
  if(__t1326t__){
  __t_errcode=37;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1469t=value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int strdat__t1331t(uint64_t _pos, uint64_t _length, uint16_t* __t1470t, uint16_t* __t1471t) {
  uint16_t __t1332t__=0;
  uint16_t pos=0;
  uint16_t __t1333t__=0;
  uint16_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat16__t1324t(_pos,&__t1332t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1332t__;
  __t_errcode=nat16__t1324t(_length,&__t1333t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1333t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1470t=pos;
  *__t1471t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1334t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __t1472t, uint16_t* __t1473t, uint16_t* __t1474t) {
  char* unsafe_ptr=0;
  uint16_t __t1335t__pos=0;
  uint16_t __t1335t__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __t_errcode=strdat__t1331t(s__dat__pos,s__dat__length,&__t1335t__pos,&__t1335t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  dat__pos=__t1335t__pos;
  dat__length=__t1335t__length;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1472t=unsafe_ptr;
  *__t1473t=dat__pos;
  *__t1474t=dat__length;
  
  return __t_errcode;
}

int str__t1337t(const char* s, char** __t1475t, uint16_t* __t1476t, uint16_t* __t1477t) {
  char* __t1338t__unsafe_ptr=0;
  uint64_t __t1338t__dat__pos=0;
  uint64_t __t1338t__dat__length=0;
  char __t1338t__dat__first=0;
  char* __t1339t__unsafe_ptr=0;
  uint16_t __t1339t__dat__pos=0;
  uint16_t __t1339t__dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t668t(s,&__t1338t__unsafe_ptr,&__t1338t__dat__pos,&__t1338t__dat__length,&__t1338t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1334t(__t1338t__unsafe_ptr,__t1338t__dat__pos,__t1338t__dat__length,__t1338t__dat__first,&__t1339t__unsafe_ptr,&__t1339t__dat__pos,&__t1339t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1475t=__t1339t__unsafe_ptr;
  *__t1476t=__t1339t__dat__pos;
  *__t1477t=__t1339t__dat__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1356t(char** __t1478t, uint64_t* __t1479t, uint16_t* __t1480t, uint16_t* __t1481t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1478t=unsafe_ptr;
  *__t1479t=unsafe_size;
  *__t1480t=unsafe_offset;
  *__t1481t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t480t(uint64_t x, uint64_t* __t1482t) {
  uint64_t __t481t=0;
  uint64_t __t482t__=0;
  __t481t=1024;
  mul__t195t(x,__t481t,&__t482t__);
  goto __t_return;
  __t_return:
  *__t1482t=__t482t__;
}

static inline __attribute__((always_inline)) void bufpos__t718t(char** __t1483t, uint64_t* __t1484t, uint16_t* __t1485t, uint16_t* __t1486t, char** __t1487t, uint64_t* __t1488t, uint16_t* __t1489t, uint16_t* __t1490t, uint64_t* __t1491t) {
  char* buf__unsafe_ptr=*__t1483t;
  uint64_t buf__unsafe_size=*__t1484t;
  uint16_t buf__unsafe_offset=*__t1485t;
  uint16_t buf__unsafe_align=*__t1486t;
  uint64_t __t719t=0;
  uint64_t __t720t=0;
  uint64_t pos=0;
  __t719t=0;
  __t720t=__t719t;
  pos=__t720t;
  goto __t_return;
  __t_return:
  *__t1483t=buf__unsafe_ptr;
  *__t1484t=buf__unsafe_size;
  *__t1485t=buf__unsafe_offset;
  *__t1486t=buf__unsafe_align;
  *__t1487t=buf__unsafe_ptr;
  *__t1488t=buf__unsafe_size;
  *__t1489t=buf__unsafe_offset;
  *__t1490t=buf__unsafe_align;
  *__t1491t=pos;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1492t) {
  goto __t_return;
  __t_return:
  *__t1492t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t1493t, uint64_t* __t1494t) {
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
  *__t1493t=from;
  *__t1494t=to;
}

static inline __attribute__((always_inline)) int next__t470t(uint64_t* __t1495t, uint64_t r__to, uint64_t* __t1496t) {
  uint64_t r__from=*__t1495t;
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
  *__t1495t=r__from;
  *__t1496t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t628t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t1497t, uint64_t* __t1498t, uint64_t* __t1499t, char* __t1500t) {
  char* first_pos=0;
  char first=0;
  char* __t629t__unsafe_ptr=0;
  uint64_t __t629t__dat__pos=0;
  uint64_t __t629t__dat__length=0;
  char __t629t__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__t626t(unsafe_ptr,pos,length,first,&__t629t__unsafe_ptr,&__t629t__dat__pos,&__t629t__dat__length,&__t629t__dat__first);
  goto __t_return;
  __t_return:
  *__t1497t=__t629t__unsafe_ptr;
  *__t1498t=__t629t__dat__pos;
  *__t1499t=__t629t__dat__length;
  *__t1500t=__t629t__dat__first;
}

static inline __attribute__((always_inline)) void unpack__t1340t(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __t1501t, uint64_t* __t1502t, uint64_t* __t1503t, char* __t1504t) {
  uint64_t __t1341t__=0;
  uint64_t __t1342t__=0;
  char* __t1343t__unsafe_ptr=0;
  uint64_t __t1343t__dat__pos=0;
  uint64_t __t1343t__dat__length=0;
  char __t1343t__dat__first=0;
  nat__t506t(m__dat__pos,&__t1341t__);
  nat__t506t(m__dat__length,&__t1342t__);
  str__t628t(m__unsafe_ptr,__t1341t__,__t1342t__,&__t1343t__unsafe_ptr,&__t1343t__dat__pos,&__t1343t__dat__length,&__t1343t__dat__first);
  goto __t_return;
  __t_return:
  *__t1501t=__t1343t__unsafe_ptr;
  *__t1502t=__t1343t__dat__pos;
  *__t1503t=__t1343t__dat__length;
  *__t1504t=__t1343t__dat__first;
}

static inline __attribute__((always_inline)) void str__t661t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1505t, uint64_t* __t1506t, uint64_t* __t1507t, char* __t1508t) {
  goto __t_return;
  __t_return:
  *__t1505t=other__unsafe_ptr;
  *__t1506t=other__dat__pos;
  *__t1507t=other__dat__length;
  *__t1508t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t676t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1509t) {
  goto __t_return;
  __t_return:
  *__t1509t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__t738t(char** __t1510t, uint64_t* __t1511t, uint16_t* __t1512t, uint16_t* __t1513t, uint64_t* __t1514t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1515t, uint64_t* __t1516t, uint64_t* __t1517t, char* __t1518t) {
  char* buf__unsafe_ptr=*__t1510t;
  uint64_t buf__unsafe_size=*__t1511t;
  uint16_t buf__unsafe_offset=*__t1512t;
  uint16_t buf__unsafe_align=*__t1513t;
  uint64_t pos=*__t1514t;
  char* __t739t__unsafe_ptr=0;
  uint64_t __t739t__dat__pos=0;
  uint64_t __t739t__dat__length=0;
  char __t739t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t740t__=0;
  uint64_t __t741t__=0;
  uint64_t next_pos=0;
  uint64_t __t742t__=0;
  char __t743t__=0;
  uint64_t __t744t=0;
  uint64_t __t745t__=0;
  uint64_t prev_pos=0;
  char* __t746t__unsafe_ptr=0;
  uint64_t __t746t__dat__pos=0;
  uint64_t __t746t__dat__length=0;
  char __t746t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t661t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t739t__unsafe_ptr,&__t739t__dat__pos,&__t739t__dat__length,&__t739t__dat__first);
  other__unsafe_ptr=__t739t__unsafe_ptr;
  other__dat__pos=__t739t__dat__pos;
  other__dat__length=__t739t__dat__length;
  other__dat__first=__t739t__dat__first;
  len__t676t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t740t__);
  add__t171t(pos,__t740t__,&__t741t__);
  next_pos=__t741t__;
  len__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t742t__);
  gt__t272t(next_pos,__t742t__,&__t743t__);
  if(__t743t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t744t=0;
  add__t171t(pos,__t744t,&__t745t__);
  prev_pos=__t745t__;
  pos=next_pos;
  __t_errcode=str__t630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t746t__unsafe_ptr,&__t746t__dat__pos,&__t746t__dat__length,&__t746t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1510t=buf__unsafe_ptr;
  *__t1511t=buf__unsafe_size;
  *__t1512t=buf__unsafe_offset;
  *__t1513t=buf__unsafe_align;
  *__t1514t=pos;
  *__t1515t=__t746t__unsafe_ptr;
  *__t1516t=__t746t__dat__pos;
  *__t1517t=__t746t__dat__length;
  *__t1518t=__t746t__dat__first;
  
  return __t_errcode;
}

int copy__t747t(char** __t1519t, uint64_t* __t1520t, uint16_t* __t1521t, uint16_t* __t1522t, uint64_t* __t1523t, const char* _other, char** __t1524t, uint64_t* __t1525t, uint64_t* __t1526t, char* __t1527t) {
  char* buf__unsafe_ptr=*__t1519t;
  uint64_t buf__unsafe_size=*__t1520t;
  uint16_t buf__unsafe_offset=*__t1521t;
  uint16_t buf__unsafe_align=*__t1522t;
  uint64_t pos=*__t1523t;
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
  *__t1519t=buf__unsafe_ptr;
  *__t1520t=buf__unsafe_size;
  *__t1521t=buf__unsafe_offset;
  *__t1522t=buf__unsafe_align;
  *__t1523t=pos;
  *__t1524t=__t755t__unsafe_ptr;
  *__t1525t=__t755t__dat__pos;
  *__t1526t=__t755t__dat__length;
  *__t1527t=__t755t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1355t(char* buff__unsafe_ptr, uint64_t buff__unsafe_size, uint16_t buff__unsafe_offset, uint16_t buff__unsafe_align, char** __t1528t, uint64_t* __t1529t, uint64_t* __t1530t, char* __t1531t) {
  char* __t1358t__unsafe_ptr=0;
  uint64_t __t1358t__unsafe_size=0;
  uint16_t __t1358t__unsafe_offset=0;
  uint16_t __t1358t__unsafe_align=0;
  uint64_t __t1359t=0;
  uint64_t __t1360t__=0;
  char* __t1361t__unsafe_ptr=0;
  uint64_t __t1361t__unsafe_size=0;
  uint16_t __t1361t__unsafe_offset=0;
  uint16_t __t1361t__unsafe_align=0;
  char __t1362t____t511t__=0;
  char* __t1363t__buf__unsafe_ptr=0;
  uint64_t __t1363t__buf__unsafe_size=0;
  uint16_t __t1363t__buf__unsafe_offset=0;
  uint16_t __t1363t__buf__unsafe_align=0;
  uint64_t __t1363t__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __t1364t__=0;
  uint64_t __t1365t__from=0;
  uint64_t __t1365t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __t1366t=0;
  uint64_t __t1367t__=0;
  uint64_t i=0;
  char* __t1368t__=0;
  char* __t1369t__unsafe_ptr=0;
  uint16_t __t1369t__dat__pos=0;
  uint16_t __t1369t__dat__length=0;
  char* __t1370t__unsafe_ptr=0;
  uint64_t __t1370t__dat__pos=0;
  uint64_t __t1370t__dat__length=0;
  char __t1370t__dat__first=0;
  char* __t1371t__unsafe_ptr=0;
  uint64_t __t1371t__dat__pos=0;
  uint64_t __t1371t__dat__length=0;
  char __t1371t__dat__first=0;
  char* __t1372t__unsafe_ptr=0;
  uint64_t __t1372t__dat__pos=0;
  uint64_t __t1372t__dat__length=0;
  char __t1372t__dat__first=0;
  char* __t1373t__unsafe_ptr=0;
  uint64_t __t1373t__dat__pos=0;
  uint64_t __t1373t__dat__length=0;
  char __t1373t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1356t(&__t1358t__unsafe_ptr,&__t1358t__unsafe_size,&__t1358t__unsafe_offset,&__t1358t__unsafe_align);
  __t1359t=4;
  KB__t480t(__t1359t,&__t1360t__);
  __t_errcode=alloc__t509t(&__t1358t__unsafe_ptr,&__t1358t__unsafe_size,&__t1358t__unsafe_offset,&__t1358t__unsafe_align,__t1360t__,&__t1361t__unsafe_ptr,&__t1361t__unsafe_size,&__t1361t__unsafe_offset,&__t1361t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t718t(&__t1361t__unsafe_ptr,&__t1361t__unsafe_size,&__t1361t__unsafe_offset,&__t1361t__unsafe_align,&__t1363t__buf__unsafe_ptr,&__t1363t__buf__unsafe_size,&__t1363t__buf__unsafe_offset,&__t1363t__buf__unsafe_align,&__t1363t__pos);
  mem__pos=__t1363t__pos;
  len__t598t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1364t__);
  range__t461t(__t1364t__,&__t1365t__from,&__t1365t__to);
  iter__from=__t1365t__from;
  iter__to=__t1365t__to;
  start=mem__pos;
  while(1){
  __t_complain=next__t470t(&iter__from,iter__to,&__t1367t__);
  __t1366t=__t_complain;
  i=__t1367t__;
  __t1366t=__t1366t==0;
  if(!__t1366t){
  break;
  }
  __t_errcode=get__t591t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__t1368t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1368t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1369t__unsafe_ptr,__t1368t__,8);
  memcpy(&__t1369t__dat__pos,__t1368t__+8,2);
  memcpy(&__t1369t__dat__length,__t1368t__+10,2);
  unpack__t1340t(__t1369t__unsafe_ptr,__t1369t__dat__pos,__t1369t__dat__length,&__t1370t__unsafe_ptr,&__t1370t__dat__pos,&__t1370t__dat__length,&__t1370t__dat__first);
  __t_errcode=copy__t738t(&__t1361t__unsafe_ptr,&__t1361t__unsafe_size,&__t1361t__unsafe_offset,&__t1361t__unsafe_align,&mem__pos,__t1370t__unsafe_ptr,__t1370t__dat__pos,__t1370t__dat__length,__t1370t__dat__first,&__t1371t__unsafe_ptr,&__t1371t__dat__pos,&__t1371t__dat__length,&__t1371t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t747t(&__t1361t__unsafe_ptr,&__t1361t__unsafe_size,&__t1361t__unsafe_offset,&__t1361t__unsafe_align,&mem__pos,__t1049t,&__t1372t__unsafe_ptr,&__t1372t__dat__pos,&__t1372t__dat__length,&__t1372t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=str__t662t(__t1361t__unsafe_ptr,__t1361t__unsafe_size,__t1361t__unsafe_offset,__t1361t__unsafe_align,start,mem__pos,&__t1373t__unsafe_ptr,&__t1373t__dat__pos,&__t1373t__dat__length,&__t1373t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1373t__unsafe_ptr=__t1361t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t436t(__t1373t__unsafe_ptr,&__t1362t____t511t__);
  if(__t1362t____t511t__){
  free__t502t(&__t1373t__unsafe_ptr);
  }
  __t_return:
  *__t1528t=__t1373t__unsafe_ptr;
  *__t1529t=__t1373t__dat__pos;
  *__t1530t=__t1373t__dat__length;
  *__t1531t=__t1373t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t380t(uint64_t value, const char* endl) {
  int __t381t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t780t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t781t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1374t() {
  char* __t1375t__unsafe_ptr=0;
  uint64_t __t1375t__unsafe_size=0;
  uint16_t __t1375t__unsafe_offset=0;
  uint16_t __t1375t__unsafe_align=0;
  char* __t1376t__unsafe_ptr=0;
  uint64_t __t1376t__unsafe_size=0;
  uint16_t __t1376t__unsafe_offset=0;
  uint16_t __t1376t__unsafe_align=0;
  uint64_t __t1377t=0;
  char* __t1378t__unsafe_ptr=0;
  uint64_t __t1378t__unsafe_size=0;
  uint16_t __t1378t__unsafe_offset=0;
  uint16_t __t1378t__unsafe_align=0;
  char __t1379t____t511t__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __t1380t=0;
  char* __t1381t__=0;
  char* __t1383t__unsafe_ptr=0;
  uint16_t __t1383t__dat__pos=0;
  uint16_t __t1383t__dat__length=0;
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
  char* __t1402t__unsafe_ptr=0;
  uint64_t __t1402t__dat__pos=0;
  uint64_t __t1402t__dat__length=0;
  char __t1402t__dat__first=0;
  char __t1403t____t1362t____t511t__=0;
  char* __t1404t__unsafe_ptr=0;
  uint16_t __t1404t__dat__pos=0;
  uint16_t __t1404t__dat__length=0;
  uint64_t __t1405t__=0;
  uint64_t __t1406t__from=0;
  uint64_t __t1406t__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __t1407t=0;
  uint64_t __t1408t__=0;
  uint64_t j=0;
  char* __t1410t__=0;
  char* __t1411t__unsafe_ptr=0;
  uint16_t __t1411t__dat__pos=0;
  uint16_t __t1411t__dat__length=0;
  char* __t1412t__unsafe_ptr=0;
  uint64_t __t1412t__dat__pos=0;
  uint64_t __t1412t__dat__length=0;
  char __t1412t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t1353t(&__t1375t__unsafe_ptr,&__t1375t__unsafe_size,&__t1375t__unsafe_offset,&__t1375t__unsafe_align);
  __t1376t__unsafe_ptr=__t1375t__unsafe_ptr;
  __t1376t__unsafe_size=__t1375t__unsafe_size;
  __t1376t__unsafe_offset=__t1375t__unsafe_offset;
  __t1376t__unsafe_align=__t1375t__unsafe_align;
  __t1377t=6;
  __t_errcode=alloc__t509t(&__t1376t__unsafe_ptr,&__t1376t__unsafe_size,&__t1376t__unsafe_offset,&__t1376t__unsafe_align,__t1377t,&__t1378t__unsafe_ptr,&__t1378t__unsafe_size,&__t1378t__unsafe_offset,&__t1378t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buff__unsafe_ptr=__t1378t__unsafe_ptr;
  buff__unsafe_size=__t1378t__unsafe_size;
  buff__unsafe_offset=__t1378t__unsafe_offset;
  buff__unsafe_align=__t1378t__unsafe_align;
  __t1380t=0;
  __t_errcode=mutget__t584t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1380t,&__t1381t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1337t(__t1382t,&__t1383t__unsafe_ptr,&__t1383t__dat__pos,&__t1383t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1381t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1381t__,&__t1383t__unsafe_ptr,8);
  memcpy(__t1381t__+8,&__t1383t__dat__pos,2);
  memcpy(__t1381t__+10,&__t1383t__dat__length,2);
  __t1384t=1;
  __t_errcode=mutget__t584t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1384t,&__t1385t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1337t(__t1386t,&__t1387t__unsafe_ptr,&__t1387t__dat__pos,&__t1387t__dat__length);
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
  __t1388t=2;
  __t_errcode=mutget__t584t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1388t,&__t1389t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1337t(__t1390t,&__t1391t__unsafe_ptr,&__t1391t__dat__pos,&__t1391t__dat__length);
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
  __t1392t=3;
  __t_errcode=mutget__t584t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1392t,&__t1393t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1337t(__t1394t,&__t1395t__unsafe_ptr,&__t1395t__dat__pos,&__t1395t__dat__length);
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
  __t1396t=4;
  __t_errcode=mutget__t584t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1396t,&__t1397t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1337t(__t1398t,&__t1399t__unsafe_ptr,&__t1399t__dat__pos,&__t1399t__dat__length);
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
  __t1400t=5;
  __t_errcode=mutget__t584t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1400t,&__t1401t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=concat__t1355t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1402t__unsafe_ptr,&__t1402t__dat__pos,&__t1402t__dat__length,&__t1402t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1334t(__t1402t__unsafe_ptr,__t1402t__dat__pos,__t1402t__dat__length,__t1402t__dat__first,&__t1404t__unsafe_ptr,&__t1404t__dat__pos,&__t1404t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1401t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1401t__,&__t1404t__unsafe_ptr,8);
  memcpy(__t1401t__+8,&__t1404t__dat__pos,2);
  memcpy(__t1401t__+10,&__t1404t__dat__length,2);
  len__t598t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1405t__);
  range__t461t(__t1405t__,&__t1406t__from,&__t1406t__to);
  full_iter__from=__t1406t__from;
  full_iter__to=__t1406t__to;
  while(1){
  __t_complain=next__t470t(&full_iter__from,full_iter__to,&__t1408t__);
  __t1407t=__t_complain;
  j=__t1408t__;
  __t1407t=__t1407t==0;
  if(!__t1407t){
  break;
  }
  print__t380t(j,__t1049t);
  __t_errcode=get__t591t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__t1410t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1410t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1411t__unsafe_ptr,__t1410t__,8);
  memcpy(&__t1411t__dat__pos,__t1410t__+8,2);
  memcpy(&__t1411t__dat__length,__t1410t__+10,2);
  unpack__t1340t(__t1411t__unsafe_ptr,__t1411t__dat__pos,__t1411t__dat__length,&__t1412t__unsafe_ptr,&__t1412t__dat__pos,&__t1412t__dat__length,&__t1412t__dat__first);
  print__t780t(__t1412t__unsafe_ptr,__t1412t__dat__pos,__t1412t__dat__length,__t1412t__dat__first);
  }
  
  __t_failure:exists__t436t(__t1402t__unsafe_ptr,&__t1403t____t1362t____t511t__);
  if(__t1403t____t1362t____t511t__){
  free__t502t(&__t1402t__unsafe_ptr);
  }
  exists__t436t(__t1378t__unsafe_ptr,&__t1379t____t511t__);
  if(__t1379t____t511t__){
  free__t502t(&__t1378t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1374t();return 0;}