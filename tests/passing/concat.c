#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1332t="name";
const char* const __t365t="\n";
const char* const __t994t=" ";
const char* const __t1328t="my";
const char* const __t1340t="manios";
const char* const __t1324t="hi";
const char* const __t1336t="is";
static const char* __t_all_errcodes[36] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
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
"'nat' value too large to pack in 'nat16'",
"'nat' value too large to pack in 'nat32'"
};

static inline __attribute__((always_inline)) void str____t_buffer____buffer__t1295t(char** __t1356t, uint64_t* __t1357t, uint16_t* __t1358t, uint16_t* __t1359t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=12;
  *__t1356t=unsafe_ptr;
  *__t1357t=unsafe_size;
  *__t1358t=unsafe_offset;
  *__t1359t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1360t) {
  int value=0;
  *__t1360t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1361t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1361t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1362t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1362t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1363t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1363t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1364t) {
  char* allocated=*__t1364t;
  if(allocated){
  free(allocated);
  }
  *__t1364t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1365t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1365t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1366t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1366t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1367t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1367t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1368t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1368t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1369t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1369t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1370t) {
  char* allocated=0;
  char __t460t__=0;
  char __t461t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t412t(allocated,&__t460t__);
  not__t26t(__t460t__,&__t461t__);
  if(__t461t__){
  __t_errcode=8;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1370t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1371t, uint64_t* __t1372t, uint16_t* __t1373t, uint16_t* __t1374t, uint64_t size, char** __t1375t, uint64_t* __t1376t, uint16_t* __t1377t, uint16_t* __t1378t) {
  char* buffer__unsafe_ptr=*__t1371t;
  uint64_t buffer__unsafe_size=*__t1372t;
  uint16_t buffer__unsafe_offset=*__t1373t;
  uint16_t buffer__unsafe_align=*__t1374t;
  int __t474t=0;
  uint64_t __t475t=0;
  char __t476t__=0;
  uint64_t __t477t=0;
  char* ptr=0;
  char __t479t__=0;
  uint64_t __t480t=0;
  char __t481t__=0;
  uint64_t __t482t=0;
  uint64_t __t483t__=0;
  uint64_t __t484t__=0;
  char* __t486t__unsafe_ptr=0;
  uint64_t __t486t__unsafe_size=0;
  uint16_t __t486t__unsafe_offset=0;
  uint16_t __t486t__unsafe_align=0;
  uint64_t __t487t=0;
  char __t488t__=0;
  uint64_t __t489t__=0;
  uint64_t __t490t__=0;
  uint64_t bytes=0;
  char* __t491t__=0;
  uint64_t __t492t=0;
  char* __t494t__unsafe_ptr=0;
  uint64_t __t494t__unsafe_size=0;
  uint16_t __t494t__unsafe_offset=0;
  uint16_t __t494t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t118t(buffer__unsafe_size,size,&__t479t__);
  if(__t479t__){
  __t480t=0;
  neq__t142t(size,__t480t,&__t481t__);
  if(__t481t__){
  __t482t=0;
  nat__t470t(buffer__unsafe_align,&__t483t__);
  mul__t194t(__t483t__,size,&__t484t__);
  zero__t467t(buffer__unsafe_ptr,__t482t,__t484t__);
  }
  __t486t__unsafe_ptr=buffer__unsafe_ptr;
  __t486t__unsafe_size=buffer__unsafe_size;
  __t486t__unsafe_offset=buffer__unsafe_offset;
  __t486t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t487t=0;
  neq__t142t(buffer__unsafe_size,__t487t,&__t488t__);
  if(__t488t__){
  __t_errcode=10;
  goto __t_failure;
  }
  nat__t470t(buffer__unsafe_align,&__t489t__);
  mul__t194t(__t489t__,size,&__t490t__);
  bytes=__t490t__;
  buffer__unsafe_size=size;
  __t_errcode=alloc__t459t(bytes,&__t491t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t491t__;
  __t492t=0;
  zero__t467t(buffer__unsafe_ptr,__t492t,bytes);
  __t494t__unsafe_ptr=buffer__unsafe_ptr;
  __t494t__unsafe_size=buffer__unsafe_size;
  __t494t__unsafe_offset=buffer__unsafe_offset;
  __t494t__unsafe_align=buffer__unsafe_align;
  __t486t__unsafe_ptr=__t494t__unsafe_ptr;
  __t486t__unsafe_size=__t494t__unsafe_size;
  __t486t__unsafe_offset=__t494t__unsafe_offset;
  __t486t__unsafe_align=__t494t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t475t=0;
  neq__t142t(__t486t__unsafe_size,__t475t,&__t476t__);
  if(__t476t__){
  __t486t__unsafe_size=0;
  __t486t__unsafe_size=__t486t__unsafe_size;
  __t486t__unsafe_ptr=__t486t__unsafe_ptr;
  free__t466t(&__t486t__unsafe_ptr);
  }
  __t_return:
  *__t1371t=buffer__unsafe_ptr;
  *__t1372t=buffer__unsafe_size;
  *__t1373t=buffer__unsafe_offset;
  *__t1374t=buffer__unsafe_align;
  *__t1375t=__t486t__unsafe_ptr;
  *__t1376t=__t486t__unsafe_size;
  *__t1377t=__t486t__unsafe_offset;
  *__t1378t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1379t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1379t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1380t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1380t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1381t) {
  *__t1381t=to;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1382t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1382t=__t469t__;
}

static inline __attribute__((always_inline)) int mutget__t545t(char** __t1383t, uint64_t* __t1384t, uint16_t* __t1385t, uint16_t* __t1386t, uint64_t i, char** __t1387t) {
  char* buffer__unsafe_ptr=*__t1383t;
  uint64_t buffer__unsafe_size=*__t1384t;
  uint16_t buffer__unsafe_offset=*__t1385t;
  uint16_t buffer__unsafe_align=*__t1386t;
  char __t546t__=0;
  uint64_t __t547t__=0;
  uint64_t __t548t__=0;
  uint64_t __t549t__=0;
  uint64_t __t550t__=0;
  char* __t551t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t546t__);
  if(__t546t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t470t(buffer__unsafe_align,&__t547t__);
  mul__t194t(i,__t547t__,&__t548t__);
  nat__t470t(buffer__unsafe_offset,&__t549t__);
  add__t170t(__t548t__,__t549t__,&__t550t__);
  add__t468t(buffer__unsafe_ptr,__t550t__,&__t551t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1383t=buffer__unsafe_ptr;
  *__t1384t=buffer__unsafe_size;
  *__t1385t=buffer__unsafe_offset;
  *__t1386t=buffer__unsafe_align;
  *__t1387t=__t551t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t591t(char** __t1388t, uint64_t* __t1389t, uint16_t* __t1390t, uint16_t* __t1391t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1388t=unsafe_ptr;
  *__t1389t=unsafe_size;
  *__t1390t=unsafe_offset;
  *__t1391t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1392t) {
  *__t1392t=to;
}

static inline __attribute__((always_inline)) int get__t552t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1393t) {
  char __t553t__=0;
  uint64_t __t554t__=0;
  uint64_t __t555t__=0;
  uint64_t __t556t__=0;
  uint64_t __t557t__=0;
  char* __t558t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t553t__);
  if(__t553t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t470t(buffer__unsafe_align,&__t554t__);
  mul__t194t(i,__t554t__,&__t555t__);
  nat__t470t(buffer__unsafe_offset,&__t556t__);
  add__t170t(__t555t__,__t556t__,&__t557t__);
  add__t468t(buffer__unsafe_ptr,__t557t__,&__t558t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1393t=__t558t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t587t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1394t, uint64_t* __t1395t, uint64_t* __t1396t, char* __t1397t) {
  goto __t_return;
  __t_return:
  *__t1394t=unsafe_ptr;
  *__t1395t=dat__pos;
  *__t1396t=dat__length;
  *__t1397t=dat__first;
}

static inline __attribute__((always_inline)) int str__t593t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1398t, uint64_t* __t1399t, uint64_t* __t1400t, char* __t1401t) {
  char* unsafe_ptr=0;
  uint64_t __t594t__=0;
  uint64_t __t595t=0;
  char __t596t__=0;
  uint64_t __t597t__=0;
  uint64_t __t598t=0;
  char __t599t__=0;
  char* __t600t__unsafe_ptr=0;
  uint64_t __t600t__dat__pos=0;
  uint64_t __t600t__dat__length=0;
  char __t600t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t470t(buf__unsafe_align,&__t594t__);
  __t595t=1;
  neq__t142t(__t594t__,__t595t,&__t596t__);
  if(__t596t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t470t(buf__unsafe_offset,&__t597t__);
  __t598t=0;
  neq__t142t(__t597t__,__t598t,&__t599t__);
  if(__t599t__){
  __t_errcode=14;
  goto __t_failure;
  }
  str__t587t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t600t__unsafe_ptr,&__t600t__dat__pos,&__t600t__dat__length,&__t600t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1398t=__t600t__unsafe_ptr;
  *__t1399t=__t600t__dat__pos;
  *__t1400t=__t600t__dat__length;
  *__t1401t=__t600t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t625t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1402t, uint64_t* __t1403t, uint64_t* __t1404t, char* __t1405t) {
  uint64_t __t626t=0;
  char __t627t__=0;
  char* __t628t__=0;
  char __t629t__value=0;
  char first=0;
  char* __t630t__unsafe_ptr=0;
  uint64_t __t630t__dat__pos=0;
  uint64_t __t630t__dat__length=0;
  char __t630t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t626t=0;
  neq__t142t(length,__t626t,&__t627t__);
  if(__t627t__){
  __t_errcode=get__t552t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t628t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t628t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t629t__value,__t628t__,1);
  first=__t629t__value;
  }
  __t_errcode=str__t593t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t630t__unsafe_ptr,&__t630t__dat__pos,&__t630t__dat__length,&__t630t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1402t=__t630t__unsafe_ptr;
  *__t1403t=__t630t__dat__pos;
  *__t1404t=__t630t__dat__length;
  *__t1405t=__t630t__dat__first;
  
  return __t_errcode;
}

int str__t631t(const char* c, char** __t1406t, uint64_t* __t1407t, uint64_t* __t1408t, char* __t1409t) {
  char* __t632t__unsafe_ptr=0;
  uint64_t __t632t__unsafe_size=0;
  uint16_t __t632t__unsafe_offset=0;
  uint16_t __t632t__unsafe_align=0;
  char* __t633t__unsafe_ptr=0;
  uint64_t __t633t__unsafe_size=0;
  uint16_t __t633t__unsafe_offset=0;
  uint16_t __t633t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t634t__=0;
  uint64_t length=0;
  uint64_t __t635t=0;
  uint64_t __t636t__=0;
  uint64_t __t637t=0;
  char* __t638t__unsafe_ptr=0;
  uint64_t __t638t__dat__pos=0;
  uint64_t __t638t__dat__length=0;
  char __t638t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t591t(&__t632t__unsafe_ptr,&__t632t__unsafe_size,&__t632t__unsafe_offset,&__t632t__unsafe_align);
  __t633t__unsafe_ptr=__t632t__unsafe_ptr;
  __t633t__unsafe_size=__t632t__unsafe_size;
  __t633t__unsafe_offset=__t632t__unsafe_offset;
  __t633t__unsafe_align=__t632t__unsafe_align;
  buf__unsafe_ptr=__t633t__unsafe_ptr;
  buf__unsafe_size=__t633t__unsafe_size;
  buf__unsafe_offset=__t633t__unsafe_offset;
  buf__unsafe_align=__t633t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t21t(buf__unsafe_ptr,c,&__t634t__);
  buf__unsafe_ptr=__t634t__;
  if(c){
  length=strlen(c);
  }
  __t635t=1;
  add__t170t(length,__t635t,&__t636t__);
  buf__unsafe_size=__t636t__;
  __t637t=0;
  __t_errcode=str__t625t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t637t,length,&__t638t__unsafe_ptr,&__t638t__dat__pos,&__t638t__dat__length,&__t638t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1406t=__t638t__unsafe_ptr;
  *__t1407t=__t638t__dat__pos;
  *__t1408t=__t638t__dat__length;
  *__t1409t=__t638t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t1410t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1410t=z;
}

static inline __attribute__((always_inline)) int nat16__t1266t(uint64_t x, uint16_t* __t1411t) {
  uint64_t __t1267t=0;
  char __t1268t__=0;
  uint16_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1267t=65535;
  gt__t271t(x,__t1267t,&__t1268t__);
  if(__t1268t__){
  __t_errcode=33;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1411t=value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int strdat__t1273t(uint64_t _pos, uint64_t _length, uint16_t* __t1412t, uint16_t* __t1413t) {
  uint16_t __t1274t__=0;
  uint16_t pos=0;
  uint16_t __t1275t__=0;
  uint16_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat16__t1266t(_pos,&__t1274t__);
  if(__t_errcode){
  goto __t_failure;
  }
  pos=__t1274t__;
  __t_errcode=nat16__t1266t(_length,&__t1275t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1275t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1412t=pos;
  *__t1413t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1276t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, char** __t1414t, uint16_t* __t1415t, uint16_t* __t1416t) {
  char* unsafe_ptr=0;
  uint16_t __t1277t__pos=0;
  uint16_t __t1277t__length=0;
  uint16_t dat__pos=0;
  uint16_t dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=s__unsafe_ptr;
  __t_errcode=strdat__t1273t(s__dat__pos,s__dat__length,&__t1277t__pos,&__t1277t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  dat__pos=__t1277t__pos;
  dat__length=__t1277t__length;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1414t=unsafe_ptr;
  *__t1415t=dat__pos;
  *__t1416t=dat__length;
  
  return __t_errcode;
}

int str__t1279t(const char* s, char** __t1417t, uint16_t* __t1418t, uint16_t* __t1419t) {
  char* __t1280t__unsafe_ptr=0;
  uint64_t __t1280t__dat__pos=0;
  uint64_t __t1280t__dat__length=0;
  char __t1280t__dat__first=0;
  char* __t1281t__unsafe_ptr=0;
  uint16_t __t1281t__dat__pos=0;
  uint16_t __t1281t__dat__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t631t(s,&__t1280t__unsafe_ptr,&__t1280t__dat__pos,&__t1280t__dat__length,&__t1280t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1276t(__t1280t__unsafe_ptr,__t1280t__dat__pos,__t1280t__dat__length,__t1280t__dat__first,&__t1281t__unsafe_ptr,&__t1281t__dat__pos,&__t1281t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1417t=__t1281t__unsafe_ptr;
  *__t1418t=__t1281t__dat__pos;
  *__t1419t=__t1281t__dat__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1298t(char** __t1420t, uint64_t* __t1421t, uint16_t* __t1422t, uint16_t* __t1423t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1420t=unsafe_ptr;
  *__t1421t=unsafe_size;
  *__t1422t=unsafe_offset;
  *__t1423t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t444t(uint64_t x, uint64_t* __t1424t) {
  uint64_t __t445t=0;
  uint64_t __t446t__=0;
  __t445t=1024;
  mul__t194t(x,__t445t,&__t446t__);
  goto __t_return;
  __t_return:
  *__t1424t=__t446t__;
}

static inline __attribute__((always_inline)) void bufpos__t675t(char** __t1425t, uint64_t* __t1426t, uint16_t* __t1427t, uint16_t* __t1428t, char** __t1429t, uint64_t* __t1430t, uint16_t* __t1431t, uint16_t* __t1432t, uint64_t* __t1433t) {
  char* buf__unsafe_ptr=*__t1425t;
  uint64_t buf__unsafe_size=*__t1426t;
  uint16_t buf__unsafe_offset=*__t1427t;
  uint16_t buf__unsafe_align=*__t1428t;
  uint64_t __t676t=0;
  uint64_t __t677t=0;
  uint64_t pos=0;
  __t676t=0;
  __t677t=__t676t;
  pos=__t677t;
  goto __t_return;
  __t_return:
  *__t1425t=buf__unsafe_ptr;
  *__t1426t=buf__unsafe_size;
  *__t1427t=buf__unsafe_offset;
  *__t1428t=buf__unsafe_align;
  *__t1429t=buf__unsafe_ptr;
  *__t1430t=buf__unsafe_size;
  *__t1431t=buf__unsafe_offset;
  *__t1432t=buf__unsafe_align;
  *__t1433t=pos;
}

static inline __attribute__((always_inline)) void len__t559t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1434t) {
  goto __t_return;
  __t_return:
  *__t1434t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t436t(uint64_t to, uint64_t* __t1435t, uint64_t* __t1436t) {
  int __t437t=0;
  uint64_t __t438t=0;
  uint64_t _from=0;
  uint64_t __t439t=0;
  uint64_t from=0;
  __t438t=0;
  _from=__t438t;
  __t439t=_from;
  from=__t439t;
  goto __t_return;
  __t_return:
  *__t1435t=from;
  *__t1436t=to;
}

static inline __attribute__((always_inline)) int next__t440t(uint64_t* __t1437t, uint64_t r__to, uint64_t* __t1438t) {
  uint64_t r__from=*__t1437t;
  char __t441t__=0;
  uint64_t ret=0;
  uint64_t __t442t=0;
  uint64_t __t443t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(r__from,r__to,&__t441t__);
  if(__t441t__){
  __t_errcode=7;
  goto __t_failure;
  }
  ret=r__from;
  __t442t=1;
  add__t170t(ret,__t442t,&__t443t__);
  r__from=__t443t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1437t=r__from;
  *__t1438t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t589t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t1439t, uint64_t* __t1440t, uint64_t* __t1441t, char* __t1442t) {
  char* first_pos=0;
  char first=0;
  char* __t590t__unsafe_ptr=0;
  uint64_t __t590t__dat__pos=0;
  uint64_t __t590t__dat__length=0;
  char __t590t__dat__first=0;
  if(length){
  first_pos=unsafe_ptr+pos;
  first=*first_pos;
  }
  str__t587t(unsafe_ptr,pos,length,first,&__t590t__unsafe_ptr,&__t590t__dat__pos,&__t590t__dat__length,&__t590t__dat__first);
  goto __t_return;
  __t_return:
  *__t1439t=__t590t__unsafe_ptr;
  *__t1440t=__t590t__dat__pos;
  *__t1441t=__t590t__dat__length;
  *__t1442t=__t590t__dat__first;
}

static inline __attribute__((always_inline)) void unpack__t1282t(char* m__unsafe_ptr, uint16_t m__dat__pos, uint16_t m__dat__length, char** __t1443t, uint64_t* __t1444t, uint64_t* __t1445t, char* __t1446t) {
  uint64_t __t1283t__=0;
  uint64_t __t1284t__=0;
  char* __t1285t__unsafe_ptr=0;
  uint64_t __t1285t__dat__pos=0;
  uint64_t __t1285t__dat__length=0;
  char __t1285t__dat__first=0;
  nat__t470t(m__dat__pos,&__t1283t__);
  nat__t470t(m__dat__length,&__t1284t__);
  str__t589t(m__unsafe_ptr,__t1283t__,__t1284t__,&__t1285t__unsafe_ptr,&__t1285t__dat__pos,&__t1285t__dat__length,&__t1285t__dat__first);
  goto __t_return;
  __t_return:
  *__t1443t=__t1285t__unsafe_ptr;
  *__t1444t=__t1285t__dat__pos;
  *__t1445t=__t1285t__dat__length;
  *__t1446t=__t1285t__dat__first;
}

static inline __attribute__((always_inline)) void str__t624t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1447t, uint64_t* __t1448t, uint64_t* __t1449t, char* __t1450t) {
  goto __t_return;
  __t_return:
  *__t1447t=other__unsafe_ptr;
  *__t1448t=other__dat__pos;
  *__t1449t=other__dat__length;
  *__t1450t=other__dat__first;
}

static inline __attribute__((always_inline)) void len__t639t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1451t) {
  goto __t_return;
  __t_return:
  *__t1451t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy__t699t(char** __t1452t, uint64_t* __t1453t, uint16_t* __t1454t, uint16_t* __t1455t, uint64_t* __t1456t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1457t, uint64_t* __t1458t, uint64_t* __t1459t, char* __t1460t) {
  char* buf__unsafe_ptr=*__t1452t;
  uint64_t buf__unsafe_size=*__t1453t;
  uint16_t buf__unsafe_offset=*__t1454t;
  uint16_t buf__unsafe_align=*__t1455t;
  uint64_t pos=*__t1456t;
  char* __t700t__unsafe_ptr=0;
  uint64_t __t700t__dat__pos=0;
  uint64_t __t700t__dat__length=0;
  char __t700t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t701t__=0;
  uint64_t __t702t__=0;
  uint64_t next_pos=0;
  uint64_t __t703t__=0;
  char __t704t__=0;
  uint64_t __t705t=0;
  uint64_t __t706t__=0;
  uint64_t prev_pos=0;
  char* __t707t__unsafe_ptr=0;
  uint64_t __t707t__dat__pos=0;
  uint64_t __t707t__dat__length=0;
  char __t707t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t624t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t700t__unsafe_ptr,&__t700t__dat__pos,&__t700t__dat__length,&__t700t__dat__first);
  other__unsafe_ptr=__t700t__unsafe_ptr;
  other__dat__pos=__t700t__dat__pos;
  other__dat__length=__t700t__dat__length;
  other__dat__first=__t700t__dat__first;
  len__t639t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t701t__);
  add__t170t(pos,__t701t__,&__t702t__);
  next_pos=__t702t__;
  len__t559t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t703t__);
  gt__t271t(next_pos,__t703t__,&__t704t__);
  if(__t704t__){
  __t_errcode=17;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t705t=0;
  add__t170t(pos,__t705t,&__t706t__);
  prev_pos=__t706t__;
  pos=next_pos;
  __t_errcode=str__t593t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t707t__unsafe_ptr,&__t707t__dat__pos,&__t707t__dat__length,&__t707t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1452t=buf__unsafe_ptr;
  *__t1453t=buf__unsafe_size;
  *__t1454t=buf__unsafe_offset;
  *__t1455t=buf__unsafe_align;
  *__t1456t=pos;
  *__t1457t=__t707t__unsafe_ptr;
  *__t1458t=__t707t__dat__pos;
  *__t1459t=__t707t__dat__length;
  *__t1460t=__t707t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t708t(char** __t1461t, uint64_t* __t1462t, uint16_t* __t1463t, uint16_t* __t1464t, uint64_t* __t1465t, const char* _other, char** __t1466t, uint64_t* __t1467t, uint64_t* __t1468t, char* __t1469t) {
  char* buf__unsafe_ptr=*__t1461t;
  uint64_t buf__unsafe_size=*__t1462t;
  uint16_t buf__unsafe_offset=*__t1463t;
  uint16_t buf__unsafe_align=*__t1464t;
  uint64_t pos=*__t1465t;
  char* __t709t__unsafe_ptr=0;
  uint64_t __t709t__dat__pos=0;
  uint64_t __t709t__dat__length=0;
  char __t709t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t710t__=0;
  uint64_t __t711t__=0;
  uint64_t next_pos=0;
  uint64_t __t712t__=0;
  char __t713t__=0;
  uint64_t __t714t=0;
  uint64_t __t715t__=0;
  uint64_t prev_pos=0;
  char* __t716t__unsafe_ptr=0;
  uint64_t __t716t__dat__pos=0;
  uint64_t __t716t__dat__length=0;
  char __t716t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t631t(_other,&__t709t__unsafe_ptr,&__t709t__dat__pos,&__t709t__dat__length,&__t709t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t709t__unsafe_ptr;
  other__dat__pos=__t709t__dat__pos;
  other__dat__length=__t709t__dat__length;
  other__dat__first=__t709t__dat__first;
  len__t639t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t710t__);
  add__t170t(pos,__t710t__,&__t711t__);
  next_pos=__t711t__;
  len__t559t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t712t__);
  gt__t271t(next_pos,__t712t__,&__t713t__);
  if(__t713t__){
  __t_errcode=17;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t714t=0;
  add__t170t(pos,__t714t,&__t715t__);
  prev_pos=__t715t__;
  pos=next_pos;
  __t_errcode=str__t593t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t716t__unsafe_ptr,&__t716t__dat__pos,&__t716t__dat__length,&__t716t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1461t=buf__unsafe_ptr;
  *__t1462t=buf__unsafe_size;
  *__t1463t=buf__unsafe_offset;
  *__t1464t=buf__unsafe_align;
  *__t1465t=pos;
  *__t1466t=__t716t__unsafe_ptr;
  *__t1467t=__t716t__dat__pos;
  *__t1468t=__t716t__dat__length;
  *__t1469t=__t716t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int concat__t1297t(char* buff__unsafe_ptr, uint64_t buff__unsafe_size, uint16_t buff__unsafe_offset, uint16_t buff__unsafe_align, char** __t1470t, uint64_t* __t1471t, uint64_t* __t1472t, char* __t1473t) {
  char* __t1300t__unsafe_ptr=0;
  uint64_t __t1300t__unsafe_size=0;
  uint16_t __t1300t__unsafe_offset=0;
  uint16_t __t1300t__unsafe_align=0;
  uint64_t __t1301t=0;
  uint64_t __t1302t__=0;
  char* __t1303t__unsafe_ptr=0;
  uint64_t __t1303t__unsafe_size=0;
  uint16_t __t1303t__unsafe_offset=0;
  uint16_t __t1303t__unsafe_align=0;
  uint64_t __t1304t____t475t=0;
  char __t1304t____t476t__=0;
  char* __t1305t__buf__unsafe_ptr=0;
  uint64_t __t1305t__buf__unsafe_size=0;
  uint16_t __t1305t__buf__unsafe_offset=0;
  uint16_t __t1305t__buf__unsafe_align=0;
  uint64_t __t1305t__pos=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint16_t mem__buf__unsafe_offset=0;
  uint16_t mem__buf__unsafe_align=0;
  uint64_t mem__pos=0;
  uint64_t __t1306t__=0;
  uint64_t __t1307t__from=0;
  uint64_t __t1307t__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  uint64_t start=0;
  char __t1308t=0;
  uint64_t __t1309t__=0;
  uint64_t i=0;
  char* __t1310t__=0;
  char* __t1311t__unsafe_ptr=0;
  uint16_t __t1311t__dat__pos=0;
  uint16_t __t1311t__dat__length=0;
  char* __t1312t__unsafe_ptr=0;
  uint64_t __t1312t__dat__pos=0;
  uint64_t __t1312t__dat__length=0;
  char __t1312t__dat__first=0;
  char* __t1313t__unsafe_ptr=0;
  uint64_t __t1313t__dat__pos=0;
  uint64_t __t1313t__dat__length=0;
  char __t1313t__dat__first=0;
  char* __t1314t__unsafe_ptr=0;
  uint64_t __t1314t__dat__pos=0;
  uint64_t __t1314t__dat__length=0;
  char __t1314t__dat__first=0;
  char* __t1315t__unsafe_ptr=0;
  uint64_t __t1315t__dat__pos=0;
  uint64_t __t1315t__dat__length=0;
  char __t1315t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1298t(&__t1300t__unsafe_ptr,&__t1300t__unsafe_size,&__t1300t__unsafe_offset,&__t1300t__unsafe_align);
  __t1301t=4;
  KB__t444t(__t1301t,&__t1302t__);
  __t_errcode=alloc__t473t(&__t1300t__unsafe_ptr,&__t1300t__unsafe_size,&__t1300t__unsafe_offset,&__t1300t__unsafe_align,__t1302t__,&__t1303t__unsafe_ptr,&__t1303t__unsafe_size,&__t1303t__unsafe_offset,&__t1303t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t675t(&__t1303t__unsafe_ptr,&__t1303t__unsafe_size,&__t1303t__unsafe_offset,&__t1303t__unsafe_align,&__t1305t__buf__unsafe_ptr,&__t1305t__buf__unsafe_size,&__t1305t__buf__unsafe_offset,&__t1305t__buf__unsafe_align,&__t1305t__pos);
  mem__pos=__t1305t__pos;
  len__t559t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1306t__);
  range__t436t(__t1306t__,&__t1307t__from,&__t1307t__to);
  iter__from=__t1307t__from;
  iter__to=__t1307t__to;
  start=mem__pos;
  while(1){
  __t_complain=next__t440t(&iter__from,iter__to,&__t1309t__);
  __t1308t=__t_complain;
  i=__t1309t__;
  __t1308t=__t1308t==0;
  if(!__t1308t){
  break;
  }
  __t_errcode=get__t552t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,i,&__t1310t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1310t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1311t__unsafe_ptr,__t1310t__,8);
  memcpy(&__t1311t__dat__pos,__t1310t__+8,2);
  memcpy(&__t1311t__dat__length,__t1310t__+10,2);
  unpack__t1282t(__t1311t__unsafe_ptr,__t1311t__dat__pos,__t1311t__dat__length,&__t1312t__unsafe_ptr,&__t1312t__dat__pos,&__t1312t__dat__length,&__t1312t__dat__first);
  __t_errcode=copy__t699t(&__t1303t__unsafe_ptr,&__t1303t__unsafe_size,&__t1303t__unsafe_offset,&__t1303t__unsafe_align,&mem__pos,__t1312t__unsafe_ptr,__t1312t__dat__pos,__t1312t__dat__length,__t1312t__dat__first,&__t1313t__unsafe_ptr,&__t1313t__dat__pos,&__t1313t__dat__length,&__t1313t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t708t(&__t1303t__unsafe_ptr,&__t1303t__unsafe_size,&__t1303t__unsafe_offset,&__t1303t__unsafe_align,&mem__pos,__t994t,&__t1314t__unsafe_ptr,&__t1314t__dat__pos,&__t1314t__dat__length,&__t1314t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=str__t625t(__t1303t__unsafe_ptr,__t1303t__unsafe_size,__t1303t__unsafe_offset,__t1303t__unsafe_align,start,mem__pos,&__t1315t__unsafe_ptr,&__t1315t__dat__pos,&__t1315t__dat__length,&__t1315t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1315t__unsafe_ptr=__t1303t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:__t1304t____t475t=0;
  neq__t142t(__t1303t__unsafe_size,__t1304t____t475t,&__t1304t____t476t__);
  if(__t1304t____t476t__){
  __t1303t__unsafe_size=0;
  __t1303t__unsafe_size=__t1303t__unsafe_size;
  __t1315t__unsafe_ptr=__t1315t__unsafe_ptr;
  free__t466t(&__t1315t__unsafe_ptr);
  }
  __t_return:
  *__t1470t=__t1315t__unsafe_ptr;
  *__t1471t=__t1315t__dat__pos;
  *__t1472t=__t1315t__dat__length;
  *__t1473t=__t1315t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(uint64_t value, const char* endl) {
  int __t375t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t741t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t742t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1316t() {
  char* __t1317t__unsafe_ptr=0;
  uint64_t __t1317t__unsafe_size=0;
  uint16_t __t1317t__unsafe_offset=0;
  uint16_t __t1317t__unsafe_align=0;
  char* __t1318t__unsafe_ptr=0;
  uint64_t __t1318t__unsafe_size=0;
  uint16_t __t1318t__unsafe_offset=0;
  uint16_t __t1318t__unsafe_align=0;
  uint64_t __t1319t=0;
  char* __t1320t__unsafe_ptr=0;
  uint64_t __t1320t__unsafe_size=0;
  uint16_t __t1320t__unsafe_offset=0;
  uint16_t __t1320t__unsafe_align=0;
  uint64_t __t1321t____t475t=0;
  char __t1321t____t476t__=0;
  char* buff__unsafe_ptr=0;
  uint64_t buff__unsafe_size=0;
  uint16_t buff__unsafe_offset=0;
  uint16_t buff__unsafe_align=0;
  uint64_t __t1322t=0;
  char* __t1323t__=0;
  char* __t1325t__unsafe_ptr=0;
  uint16_t __t1325t__dat__pos=0;
  uint16_t __t1325t__dat__length=0;
  uint64_t __t1326t=0;
  char* __t1327t__=0;
  char* __t1329t__unsafe_ptr=0;
  uint16_t __t1329t__dat__pos=0;
  uint16_t __t1329t__dat__length=0;
  uint64_t __t1330t=0;
  char* __t1331t__=0;
  char* __t1333t__unsafe_ptr=0;
  uint16_t __t1333t__dat__pos=0;
  uint16_t __t1333t__dat__length=0;
  uint64_t __t1334t=0;
  char* __t1335t__=0;
  char* __t1337t__unsafe_ptr=0;
  uint16_t __t1337t__dat__pos=0;
  uint16_t __t1337t__dat__length=0;
  uint64_t __t1338t=0;
  char* __t1339t__=0;
  char* __t1341t__unsafe_ptr=0;
  uint16_t __t1341t__dat__pos=0;
  uint16_t __t1341t__dat__length=0;
  uint64_t __t1342t=0;
  char* __t1343t__=0;
  char* __t1344t__unsafe_ptr=0;
  uint64_t __t1344t__dat__pos=0;
  uint64_t __t1344t__dat__length=0;
  char __t1344t__dat__first=0;
  uint64_t __t1345t____t1304t____t475t=0;
  uint64_t __t1345t____t1303t__unsafe_size=0;
  char __t1345t____t1304t____t476t__=0;
  char* __t1346t__unsafe_ptr=0;
  uint16_t __t1346t__dat__pos=0;
  uint16_t __t1346t__dat__length=0;
  uint64_t __t1347t__=0;
  uint64_t __t1348t__from=0;
  uint64_t __t1348t__to=0;
  uint64_t full_iter__from=0;
  uint64_t full_iter__to=0;
  char __t1349t=0;
  uint64_t __t1350t__=0;
  uint64_t j=0;
  char* __t1352t__=0;
  char* __t1353t__unsafe_ptr=0;
  uint16_t __t1353t__dat__pos=0;
  uint16_t __t1353t__dat__length=0;
  char* __t1354t__unsafe_ptr=0;
  uint64_t __t1354t__dat__pos=0;
  uint64_t __t1354t__dat__length=0;
  char __t1354t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str____t_buffer____buffer__t1295t(&__t1317t__unsafe_ptr,&__t1317t__unsafe_size,&__t1317t__unsafe_offset,&__t1317t__unsafe_align);
  __t1318t__unsafe_ptr=__t1317t__unsafe_ptr;
  __t1318t__unsafe_size=__t1317t__unsafe_size;
  __t1318t__unsafe_offset=__t1317t__unsafe_offset;
  __t1318t__unsafe_align=__t1317t__unsafe_align;
  __t1319t=6;
  __t_errcode=alloc__t473t(&__t1318t__unsafe_ptr,&__t1318t__unsafe_size,&__t1318t__unsafe_offset,&__t1318t__unsafe_align,__t1319t,&__t1320t__unsafe_ptr,&__t1320t__unsafe_size,&__t1320t__unsafe_offset,&__t1320t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buff__unsafe_ptr=__t1320t__unsafe_ptr;
  buff__unsafe_size=__t1320t__unsafe_size;
  buff__unsafe_offset=__t1320t__unsafe_offset;
  buff__unsafe_align=__t1320t__unsafe_align;
  __t1322t=0;
  __t_errcode=mutget__t545t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1322t,&__t1323t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1279t(__t1324t,&__t1325t__unsafe_ptr,&__t1325t__dat__pos,&__t1325t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1323t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1323t__,&__t1325t__unsafe_ptr,8);
  memcpy(__t1323t__+8,&__t1325t__dat__pos,2);
  memcpy(__t1323t__+10,&__t1325t__dat__length,2);
  __t1326t=1;
  __t_errcode=mutget__t545t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1326t,&__t1327t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1279t(__t1328t,&__t1329t__unsafe_ptr,&__t1329t__dat__pos,&__t1329t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1327t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1327t__,&__t1329t__unsafe_ptr,8);
  memcpy(__t1327t__+8,&__t1329t__dat__pos,2);
  memcpy(__t1327t__+10,&__t1329t__dat__length,2);
  __t1330t=2;
  __t_errcode=mutget__t545t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1330t,&__t1331t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1279t(__t1332t,&__t1333t__unsafe_ptr,&__t1333t__dat__pos,&__t1333t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1331t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1331t__,&__t1333t__unsafe_ptr,8);
  memcpy(__t1331t__+8,&__t1333t__dat__pos,2);
  memcpy(__t1331t__+10,&__t1333t__dat__length,2);
  __t1334t=3;
  __t_errcode=mutget__t545t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1334t,&__t1335t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1279t(__t1336t,&__t1337t__unsafe_ptr,&__t1337t__dat__pos,&__t1337t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1335t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1335t__,&__t1337t__unsafe_ptr,8);
  memcpy(__t1335t__+8,&__t1337t__dat__pos,2);
  memcpy(__t1335t__+10,&__t1337t__dat__length,2);
  __t1338t=4;
  __t_errcode=mutget__t545t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1338t,&__t1339t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1279t(__t1340t,&__t1341t__unsafe_ptr,&__t1341t__dat__pos,&__t1341t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1339t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1339t__,&__t1341t__unsafe_ptr,8);
  memcpy(__t1339t__+8,&__t1341t__dat__pos,2);
  memcpy(__t1339t__+10,&__t1341t__dat__length,2);
  __t1342t=5;
  __t_errcode=mutget__t545t(&buff__unsafe_ptr,&buff__unsafe_size,&buff__unsafe_offset,&buff__unsafe_align,__t1342t,&__t1343t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=concat__t1297t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1344t__unsafe_ptr,&__t1344t__dat__pos,&__t1344t__dat__length,&__t1344t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1276t(__t1344t__unsafe_ptr,__t1344t__dat__pos,__t1344t__dat__length,__t1344t__dat__first,&__t1346t__unsafe_ptr,&__t1346t__dat__pos,&__t1346t__dat__length);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1343t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1343t__,&__t1346t__unsafe_ptr,8);
  memcpy(__t1343t__+8,&__t1346t__dat__pos,2);
  memcpy(__t1343t__+10,&__t1346t__dat__length,2);
  len__t559t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,&__t1347t__);
  range__t436t(__t1347t__,&__t1348t__from,&__t1348t__to);
  full_iter__from=__t1348t__from;
  full_iter__to=__t1348t__to;
  while(1){
  __t_complain=next__t440t(&full_iter__from,full_iter__to,&__t1350t__);
  __t1349t=__t_complain;
  j=__t1350t__;
  __t1349t=__t1349t==0;
  if(!__t1349t){
  break;
  }
  print__t374t(j,__t994t);
  __t_errcode=get__t552t(buff__unsafe_ptr,buff__unsafe_size,buff__unsafe_offset,buff__unsafe_align,j,&__t1352t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1352t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1353t__unsafe_ptr,__t1352t__,8);
  memcpy(&__t1353t__dat__pos,__t1352t__+8,2);
  memcpy(&__t1353t__dat__length,__t1352t__+10,2);
  unpack__t1282t(__t1353t__unsafe_ptr,__t1353t__dat__pos,__t1353t__dat__length,&__t1354t__unsafe_ptr,&__t1354t__dat__pos,&__t1354t__dat__length,&__t1354t__dat__first);
  print__t741t(__t1354t__unsafe_ptr,__t1354t__dat__pos,__t1354t__dat__length,__t1354t__dat__first);
  }
  
  __t_failure:__t1345t____t1304t____t475t=0;
  neq__t142t(__t1345t____t1303t__unsafe_size,__t1345t____t1304t____t475t,&__t1345t____t1304t____t476t__);
  if(__t1345t____t1304t____t476t__){
  __t1345t____t1303t__unsafe_size=0;
  __t1345t____t1303t__unsafe_size=__t1345t____t1303t__unsafe_size;
  __t1344t__unsafe_ptr=__t1344t__unsafe_ptr;
  free__t466t(&__t1344t__unsafe_ptr);
  }
  __t1321t____t475t=0;
  neq__t142t(__t1320t__unsafe_size,__t1321t____t475t,&__t1321t____t476t__);
  if(__t1321t____t476t__){
  __t1320t__unsafe_size=0;
  __t1320t__unsafe_size=__t1320t__unsafe_size;
  __t1320t__unsafe_ptr=__t1320t__unsafe_ptr;
  free__t466t(&__t1320t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1316t();return 0;}