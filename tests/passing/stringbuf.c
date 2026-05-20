#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t365t="\n";
const char* const __t1274t="surnname  ";
const char* const __t1271t="name      ";
const char* const __t822t="";
const char* const __t1298t="mario";
const char* const __t1269t="-------------------";
const char* const __t1296t="it's a me";
static const char* __t_all_errcodes[34] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void Person____t_buffer____buffer__t1279t(char** __t1321t, uint64_t* __t1322t, uint16_t* __t1323t, uint16_t* __t1324t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=50;
  *__t1321t=unsafe_ptr;
  *__t1322t=unsafe_size;
  *__t1323t=unsafe_offset;
  *__t1324t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1325t) {
  int value=0;
  *__t1325t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1326t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1326t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1327t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1327t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1328t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1328t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1329t) {
  char* allocated=*__t1329t;
  if(allocated){
  free(allocated);
  }
  *__t1329t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1330t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1330t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1331t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1331t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1332t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1332t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1333t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1333t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1334t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1334t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1335t) {
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
  *__t1335t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1336t, uint64_t* __t1337t, uint16_t* __t1338t, uint16_t* __t1339t, uint64_t size, char** __t1340t, uint64_t* __t1341t, uint16_t* __t1342t, uint16_t* __t1343t) {
  char* buffer__unsafe_ptr=*__t1336t;
  uint64_t buffer__unsafe_size=*__t1337t;
  uint16_t buffer__unsafe_offset=*__t1338t;
  uint16_t buffer__unsafe_align=*__t1339t;
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
  *__t1336t=buffer__unsafe_ptr;
  *__t1337t=buffer__unsafe_size;
  *__t1338t=buffer__unsafe_offset;
  *__t1339t=buffer__unsafe_align;
  *__t1340t=__t486t__unsafe_ptr;
  *__t1341t=__t486t__unsafe_size;
  *__t1342t=__t486t__unsafe_offset;
  *__t1343t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1285t(char** __t1344t, uint64_t* __t1345t, uint16_t* __t1346t, uint16_t* __t1347t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1344t=unsafe_ptr;
  *__t1345t=unsafe_size;
  *__t1346t=unsafe_offset;
  *__t1347t=unsafe_align;
}

static inline __attribute__((always_inline)) void KB__t444t(uint64_t x, uint64_t* __t1348t) {
  uint64_t __t445t=0;
  uint64_t __t446t__=0;
  __t445t=1024;
  mul__t194t(x,__t445t,&__t446t__);
  goto __t_return;
  __t_return:
  *__t1348t=__t446t__;
}

static inline __attribute__((always_inline)) void bufpos__t675t(char** __t1349t, uint64_t* __t1350t, uint16_t* __t1351t, uint16_t* __t1352t, char** __t1353t, uint64_t* __t1354t, uint16_t* __t1355t, uint16_t* __t1356t, uint64_t* __t1357t) {
  char* buf__unsafe_ptr=*__t1349t;
  uint64_t buf__unsafe_size=*__t1350t;
  uint16_t buf__unsafe_offset=*__t1351t;
  uint16_t buf__unsafe_align=*__t1352t;
  uint64_t __t676t=0;
  uint64_t __t677t=0;
  uint64_t pos=0;
  __t676t=0;
  __t677t=__t676t;
  pos=__t677t;
  goto __t_return;
  __t_return:
  *__t1349t=buf__unsafe_ptr;
  *__t1350t=buf__unsafe_size;
  *__t1351t=buf__unsafe_offset;
  *__t1352t=buf__unsafe_align;
  *__t1353t=buf__unsafe_ptr;
  *__t1354t=buf__unsafe_size;
  *__t1355t=buf__unsafe_offset;
  *__t1356t=buf__unsafe_align;
  *__t1357t=pos;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1358t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1358t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1359t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1359t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1360t) {
  *__t1360t=to;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1361t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1361t=__t469t__;
}

static inline __attribute__((always_inline)) int mutget__t545t(char** __t1362t, uint64_t* __t1363t, uint16_t* __t1364t, uint16_t* __t1365t, uint64_t i, char** __t1366t) {
  char* buffer__unsafe_ptr=*__t1362t;
  uint64_t buffer__unsafe_size=*__t1363t;
  uint16_t buffer__unsafe_offset=*__t1364t;
  uint16_t buffer__unsafe_align=*__t1365t;
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
  *__t1362t=buffer__unsafe_ptr;
  *__t1363t=buffer__unsafe_size;
  *__t1364t=buffer__unsafe_offset;
  *__t1365t=buffer__unsafe_align;
  *__t1366t=__t551t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t591t(char** __t1367t, uint64_t* __t1368t, uint16_t* __t1369t, uint16_t* __t1370t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1367t=unsafe_ptr;
  *__t1368t=unsafe_size;
  *__t1369t=unsafe_offset;
  *__t1370t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1371t) {
  *__t1371t=to;
}

static inline __attribute__((always_inline)) int get__t552t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1372t) {
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
  *__t1372t=__t558t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t587t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1373t, uint64_t* __t1374t, uint64_t* __t1375t, char* __t1376t) {
  goto __t_return;
  __t_return:
  *__t1373t=unsafe_ptr;
  *__t1374t=dat__pos;
  *__t1375t=dat__length;
  *__t1376t=dat__first;
}

static inline __attribute__((always_inline)) int str__t593t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1377t, uint64_t* __t1378t, uint64_t* __t1379t, char* __t1380t) {
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
  *__t1377t=__t600t__unsafe_ptr;
  *__t1378t=__t600t__dat__pos;
  *__t1379t=__t600t__dat__length;
  *__t1380t=__t600t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t625t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1381t, uint64_t* __t1382t, uint64_t* __t1383t, char* __t1384t) {
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
  *__t1381t=__t630t__unsafe_ptr;
  *__t1382t=__t630t__dat__pos;
  *__t1383t=__t630t__dat__length;
  *__t1384t=__t630t__dat__first;
  
  return __t_errcode;
}

int str__t631t(const char* c, char** __t1385t, uint64_t* __t1386t, uint64_t* __t1387t, char* __t1388t) {
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
  *__t1385t=__t638t__unsafe_ptr;
  *__t1386t=__t638t__dat__pos;
  *__t1387t=__t638t__dat__length;
  *__t1388t=__t638t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t639t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1389t) {
  goto __t_return;
  __t_return:
  *__t1389t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t559t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1390t) {
  goto __t_return;
  __t_return:
  *__t1390t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t1391t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1391t=z;
}

int copy__t708t(char** __t1392t, uint64_t* __t1393t, uint16_t* __t1394t, uint16_t* __t1395t, uint64_t* __t1396t, const char* _other, char** __t1397t, uint64_t* __t1398t, uint64_t* __t1399t, char* __t1400t) {
  char* buf__unsafe_ptr=*__t1392t;
  uint64_t buf__unsafe_size=*__t1393t;
  uint16_t buf__unsafe_offset=*__t1394t;
  uint16_t buf__unsafe_align=*__t1395t;
  uint64_t pos=*__t1396t;
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
  *__t1392t=buf__unsafe_ptr;
  *__t1393t=buf__unsafe_size;
  *__t1394t=buf__unsafe_offset;
  *__t1395t=buf__unsafe_align;
  *__t1396t=pos;
  *__t1397t=__t716t__unsafe_ptr;
  *__t1398t=__t716t__dat__pos;
  *__t1399t=__t716t__dat__length;
  *__t1400t=__t716t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Person__t1266t(uint64_t id, char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char* surname__unsafe_ptr, uint64_t surname__dat__pos, uint64_t surname__dat__length, char surname__dat__first, char** __t1401t, uint64_t* __t1402t, uint64_t* __t1403t, char* __t1404t, char** __t1405t, uint64_t* __t1406t, uint64_t* __t1407t, char* __t1408t) {
  goto __t_return;
  __t_return:
  *__t1401t=name__unsafe_ptr;
  *__t1402t=name__dat__pos;
  *__t1403t=name__dat__length;
  *__t1404t=name__dat__first;
  *__t1405t=surname__unsafe_ptr;
  *__t1406t=surname__dat__pos;
  *__t1407t=surname__dat__length;
  *__t1408t=surname__dat__first;
}

static inline __attribute__((always_inline)) void print__t363t(const char* value) {
  int __t364t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t361t(const char* value, const char* endl) {
  int __t362t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t741t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t742t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t1268t(char* p__name__unsafe_ptr, uint64_t p__name__dat__pos, uint64_t p__name__dat__length, char p__name__dat__first, char* p__surname__unsafe_ptr, uint64_t p__surname__dat__pos, uint64_t p__surname__dat__length, char p__surname__dat__first) {
  print__t363t(__t1269t);
  print__t361t(__t1271t,__t822t);
  print__t741t(p__name__unsafe_ptr,p__name__dat__pos,p__name__dat__length,p__name__dat__first);
  print__t361t(__t1274t,__t822t);
  print__t741t(p__surname__unsafe_ptr,p__surname__dat__pos,p__surname__dat__length,p__surname__dat__first);
  print__t363t(__t1269t);
}

static inline __attribute__((always_inline)) int test__t1278t(char** __t1409t, uint64_t* __t1410t, uint16_t* __t1411t, uint16_t* __t1412t, uint64_t* __t1413t, char** __t1414t, uint64_t* __t1415t, uint16_t* __t1416t, uint16_t* __t1417t) {
  char* __t1281t__unsafe_ptr=0;
  uint64_t __t1281t__unsafe_size=0;
  uint16_t __t1281t__unsafe_offset=0;
  uint16_t __t1281t__unsafe_align=0;
  uint64_t __t1282t=0;
  char* __t1283t__unsafe_ptr=0;
  uint64_t __t1283t__unsafe_size=0;
  uint16_t __t1283t__unsafe_offset=0;
  uint16_t __t1283t__unsafe_align=0;
  uint64_t __t1284t____t475t=0;
  char __t1284t____t476t__=0;
  char* people__unsafe_ptr=0;
  uint64_t people__unsafe_size=0;
  uint16_t people__unsafe_offset=0;
  uint16_t people__unsafe_align=0;
  char* __t1287t__unsafe_ptr=0;
  uint64_t __t1287t__unsafe_size=0;
  uint16_t __t1287t__unsafe_offset=0;
  uint16_t __t1287t__unsafe_align=0;
  uint64_t __t1288t=0;
  uint64_t __t1289t__=0;
  char* __t1290t__unsafe_ptr=0;
  uint64_t __t1290t__unsafe_size=0;
  uint16_t __t1290t__unsafe_offset=0;
  uint16_t __t1290t__unsafe_align=0;
  uint64_t __t1291t____t475t=0;
  char __t1291t____t476t__=0;
  char* __t1292t__buf__unsafe_ptr=0;
  uint64_t __t1292t__buf__unsafe_size=0;
  uint16_t __t1292t__buf__unsafe_offset=0;
  uint16_t __t1292t__buf__unsafe_align=0;
  uint64_t __t1292t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  uint64_t __t1293t=0;
  char* __t1294t__=0;
  uint64_t __t1295t=0;
  char* __t1297t__unsafe_ptr=0;
  uint64_t __t1297t__dat__pos=0;
  uint64_t __t1297t__dat__length=0;
  char __t1297t__dat__first=0;
  char* __t1299t__unsafe_ptr=0;
  uint64_t __t1299t__dat__pos=0;
  uint64_t __t1299t__dat__length=0;
  char __t1299t__dat__first=0;
  char* __t1300t__name__unsafe_ptr=0;
  uint64_t __t1300t__name__dat__pos=0;
  uint64_t __t1300t__name__dat__length=0;
  char __t1300t__name__dat__first=0;
  char* __t1300t__surname__unsafe_ptr=0;
  uint64_t __t1300t__surname__dat__pos=0;
  uint64_t __t1300t__surname__dat__length=0;
  char __t1300t__surname__dat__first=0;
  uint64_t __t1301t=0;
  char* __t1302t__=0;
  char* __t1303t__name__unsafe_ptr=0;
  uint64_t __t1303t__name__dat__pos=0;
  uint64_t __t1303t__name__dat__length=0;
  char __t1303t__name__dat__first=0;
  char* __t1303t__surname__unsafe_ptr=0;
  uint64_t __t1303t__surname__dat__pos=0;
  uint64_t __t1303t__surname__dat__length=0;
  char __t1303t__surname__dat__first=0;
  char* __t1305t__unsafe_ptr=0;
  uint64_t __t1305t__unsafe_size=0;
  uint16_t __t1305t__unsafe_offset=0;
  uint16_t __t1305t__unsafe_align=0;
  char* __t1309t__unsafe_ptr=0;
  uint64_t __t1309t__unsafe_size=0;
  uint16_t __t1309t__unsafe_offset=0;
  uint16_t __t1309t__unsafe_align=0;
  char* dat__unsafe_ptr=0;
  uint64_t dat__unsafe_size=0;
  uint16_t dat__unsafe_offset=0;
  uint16_t dat__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  Person____t_buffer____buffer__t1279t(&__t1281t__unsafe_ptr,&__t1281t__unsafe_size,&__t1281t__unsafe_offset,&__t1281t__unsafe_align);
  __t1282t=4;
  __t_errcode=alloc__t473t(&__t1281t__unsafe_ptr,&__t1281t__unsafe_size,&__t1281t__unsafe_offset,&__t1281t__unsafe_align,__t1282t,&__t1283t__unsafe_ptr,&__t1283t__unsafe_size,&__t1283t__unsafe_offset,&__t1283t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  people__unsafe_ptr=__t1283t__unsafe_ptr;
  people__unsafe_size=__t1283t__unsafe_size;
  people__unsafe_offset=__t1283t__unsafe_offset;
  people__unsafe_align=__t1283t__unsafe_align;
  char____t_buffer____buffer__t1285t(&__t1287t__unsafe_ptr,&__t1287t__unsafe_size,&__t1287t__unsafe_offset,&__t1287t__unsafe_align);
  __t1288t=4;
  KB__t444t(__t1288t,&__t1289t__);
  __t_errcode=alloc__t473t(&__t1287t__unsafe_ptr,&__t1287t__unsafe_size,&__t1287t__unsafe_offset,&__t1287t__unsafe_align,__t1289t__,&__t1290t__unsafe_ptr,&__t1290t__unsafe_size,&__t1290t__unsafe_offset,&__t1290t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t675t(&__t1290t__unsafe_ptr,&__t1290t__unsafe_size,&__t1290t__unsafe_offset,&__t1290t__unsafe_align,&__t1292t__buf__unsafe_ptr,&__t1292t__buf__unsafe_size,&__t1292t__buf__unsafe_offset,&__t1292t__buf__unsafe_align,&__t1292t__pos);
  buf__buf__unsafe_ptr=__t1292t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1292t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1292t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1292t__buf__unsafe_align;
  buf__pos=__t1292t__pos;
  __t1293t=0;
  __t_errcode=mutget__t545t(&people__unsafe_ptr,&people__unsafe_size,&people__unsafe_offset,&people__unsafe_align,__t1293t,&__t1294t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1295t=0;
  __t_errcode=copy__t708t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1296t,&__t1297t__unsafe_ptr,&__t1297t__dat__pos,&__t1297t__dat__length,&__t1297t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t708t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1298t,&__t1299t__unsafe_ptr,&__t1299t__dat__pos,&__t1299t__dat__length,&__t1299t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  Person__t1266t(__t1295t,__t1297t__unsafe_ptr,__t1297t__dat__pos,__t1297t__dat__length,__t1297t__dat__first,__t1299t__unsafe_ptr,__t1299t__dat__pos,__t1299t__dat__length,__t1299t__dat__first,&__t1300t__name__unsafe_ptr,&__t1300t__name__dat__pos,&__t1300t__name__dat__length,&__t1300t__name__dat__first,&__t1300t__surname__unsafe_ptr,&__t1300t__surname__dat__pos,&__t1300t__surname__dat__length,&__t1300t__surname__dat__first);
  if(!__t1294t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1294t__,&__t1300t__name__unsafe_ptr,8);
  memcpy(__t1294t__+8,&__t1300t__name__dat__pos,8);
  memcpy(__t1294t__+16,&__t1300t__name__dat__length,8);
  memcpy(__t1294t__+24,&__t1300t__name__dat__first,1);
  memcpy(__t1294t__+25,&__t1300t__surname__unsafe_ptr,8);
  memcpy(__t1294t__+33,&__t1300t__surname__dat__pos,8);
  memcpy(__t1294t__+41,&__t1300t__surname__dat__length,8);
  memcpy(__t1294t__+49,&__t1300t__surname__dat__first,1);
  __t1301t=0;
  __t_errcode=get__t552t(people__unsafe_ptr,people__unsafe_size,people__unsafe_offset,people__unsafe_align,__t1301t,&__t1302t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1302t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1303t__name__unsafe_ptr,__t1302t__,8);
  memcpy(&__t1303t__name__dat__pos,__t1302t__+8,8);
  memcpy(&__t1303t__name__dat__length,__t1302t__+16,8);
  memcpy(&__t1303t__name__dat__first,__t1302t__+24,1);
  memcpy(&__t1303t__surname__unsafe_ptr,__t1302t__+25,8);
  memcpy(&__t1303t__surname__dat__pos,__t1302t__+33,8);
  memcpy(&__t1303t__surname__dat__length,__t1302t__+41,8);
  memcpy(&__t1303t__surname__dat__first,__t1302t__+49,1);
  print__t1268t(__t1303t__name__unsafe_ptr,__t1303t__name__dat__pos,__t1303t__name__dat__length,__t1303t__name__dat__first,__t1303t__surname__unsafe_ptr,__t1303t__surname__dat__pos,__t1303t__surname__dat__length,__t1303t__surname__dat__first);
  __t1305t__unsafe_ptr=people__unsafe_ptr;
  __t1305t__unsafe_size=people__unsafe_size;
  __t1305t__unsafe_offset=people__unsafe_offset+0;
  __t1305t__unsafe_align=people__unsafe_align;
  __t1309t__unsafe_ptr=__t1305t__unsafe_ptr;
  __t1309t__unsafe_size=__t1305t__unsafe_size;
  __t1309t__unsafe_offset=__t1305t__unsafe_offset+8;
  __t1309t__unsafe_align=__t1305t__unsafe_align;
  dat__unsafe_ptr=__t1309t__unsafe_ptr;
  dat__unsafe_size=__t1309t__unsafe_size;
  dat__unsafe_offset=__t1309t__unsafe_offset;
  dat__unsafe_align=__t1309t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t1291t____t475t=0;
  neq__t142t(buf__buf__unsafe_size,__t1291t____t475t,&__t1291t____t476t__);
  if(__t1291t____t476t__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  buf__buf__unsafe_ptr=buf__buf__unsafe_ptr;
  free__t466t(&buf__buf__unsafe_ptr);
  }
  __t1284t____t475t=0;
  neq__t142t(dat__unsafe_size,__t1284t____t475t,&__t1284t____t476t__);
  if(__t1284t____t476t__){
  dat__unsafe_size=0;
  dat__unsafe_size=dat__unsafe_size;
  dat__unsafe_ptr=dat__unsafe_ptr;
  free__t466t(&dat__unsafe_ptr);
  }
  __t_return:
  *__t1409t=buf__buf__unsafe_ptr;
  *__t1410t=buf__buf__unsafe_size;
  *__t1411t=buf__buf__unsafe_offset;
  *__t1412t=buf__buf__unsafe_align;
  *__t1413t=buf__pos;
  *__t1414t=dat__unsafe_ptr;
  *__t1415t=dat__unsafe_size;
  *__t1416t=dat__unsafe_offset;
  *__t1417t=dat__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1313t() {
  char* __t1314t__buf__buf__unsafe_ptr=0;
  uint64_t __t1314t__buf__buf__unsafe_size=0;
  uint16_t __t1314t__buf__buf__unsafe_offset=0;
  uint16_t __t1314t__buf__buf__unsafe_align=0;
  uint64_t __t1314t__buf__pos=0;
  char* __t1314t__dat__unsafe_ptr=0;
  uint64_t __t1314t__dat__unsafe_size=0;
  uint16_t __t1314t__dat__unsafe_offset=0;
  uint16_t __t1314t__dat__unsafe_align=0;
  uint64_t __t1315t____t1284t____t475t=0;
  char __t1315t____t1284t____t476t__=0;
  uint64_t __t1315t____t1291t____t475t=0;
  char __t1315t____t1291t____t476t__=0;
  char* t__buf__buf__unsafe_ptr=0;
  uint64_t t__buf__buf__unsafe_size=0;
  uint16_t t__buf__buf__unsafe_offset=0;
  uint16_t t__buf__buf__unsafe_align=0;
  uint64_t t__buf__pos=0;
  char* t__dat__unsafe_ptr=0;
  uint64_t t__dat__unsafe_size=0;
  uint16_t t__dat__unsafe_offset=0;
  uint16_t t__dat__unsafe_align=0;
  uint64_t __t1316t=0;
  char* __t1317t__=0;
  uint64_t __t1318t__pos=0;
  uint64_t __t1318t__length=0;
  char __t1318t__first=0;
  char* __t1319t__unsafe_ptr=0;
  uint64_t __t1319t__dat__pos=0;
  uint64_t __t1319t__dat__length=0;
  char __t1319t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test__t1278t(&__t1314t__buf__buf__unsafe_ptr,&__t1314t__buf__buf__unsafe_size,&__t1314t__buf__buf__unsafe_offset,&__t1314t__buf__buf__unsafe_align,&__t1314t__buf__pos,&__t1314t__dat__unsafe_ptr,&__t1314t__dat__unsafe_size,&__t1314t__dat__unsafe_offset,&__t1314t__dat__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  t__buf__buf__unsafe_ptr=__t1314t__buf__buf__unsafe_ptr;
  t__buf__buf__unsafe_size=__t1314t__buf__buf__unsafe_size;
  t__buf__buf__unsafe_offset=__t1314t__buf__buf__unsafe_offset;
  t__buf__buf__unsafe_align=__t1314t__buf__buf__unsafe_align;
  t__buf__pos=__t1314t__buf__pos;
  t__dat__unsafe_ptr=__t1314t__dat__unsafe_ptr;
  t__dat__unsafe_size=__t1314t__dat__unsafe_size;
  t__dat__unsafe_offset=__t1314t__dat__unsafe_offset;
  t__dat__unsafe_align=__t1314t__dat__unsafe_align;
  __t1316t=0;
  __t_errcode=get__t552t(t__dat__unsafe_ptr,t__dat__unsafe_size,t__dat__unsafe_offset,t__dat__unsafe_align,__t1316t,&__t1317t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1317t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1318t__pos,__t1317t__,8);
  memcpy(&__t1318t__length,__t1317t__+8,8);
  memcpy(&__t1318t__first,__t1317t__+16,1);
  __t_errcode=str__t593t(t__buf__buf__unsafe_ptr,t__buf__buf__unsafe_size,t__buf__buf__unsafe_offset,t__buf__buf__unsafe_align,__t1318t__pos,__t1318t__length,__t1318t__first,&__t1319t__unsafe_ptr,&__t1319t__dat__pos,&__t1319t__dat__length,&__t1319t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t741t(__t1319t__unsafe_ptr,__t1319t__dat__pos,__t1319t__dat__length,__t1319t__dat__first);
  
  __t_failure:__t1315t____t1291t____t475t=0;
  neq__t142t(__t1314t__buf__buf__unsafe_size,__t1315t____t1291t____t475t,&__t1315t____t1291t____t476t__);
  if(__t1315t____t1291t____t476t__){
  __t1314t__buf__buf__unsafe_size=0;
  __t1314t__buf__buf__unsafe_size=__t1314t__buf__buf__unsafe_size;
  __t1314t__buf__buf__unsafe_ptr=__t1314t__buf__buf__unsafe_ptr;
  free__t466t(&__t1314t__buf__buf__unsafe_ptr);
  }
  __t1315t____t1284t____t475t=0;
  neq__t142t(__t1314t__dat__unsafe_size,__t1315t____t1284t____t475t,&__t1315t____t1284t____t476t__);
  if(__t1315t____t1284t____t476t__){
  __t1314t__dat__unsafe_size=0;
  __t1314t__dat__unsafe_size=__t1314t__dat__unsafe_size;
  __t1314t__dat__unsafe_ptr=__t1314t__dat__unsafe_ptr;
  free__t466t(&__t1314t__dat__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1313t();return 0;}