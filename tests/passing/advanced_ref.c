#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t370t="\n";
const char* const __t1320t="456";
const char* const __t1318t="123";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1310t(char** __t1327t, uint64_t* __t1328t, uint16_t* __t1329t, uint16_t* __t1330t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1327t=unsafe_ptr;
  *__t1328t=unsafe_size;
  *__t1329t=unsafe_offset;
  *__t1330t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1331t) {
  int value=0;
  *__t1331t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1332t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1332t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1333t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1333t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1334t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1334t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t1335t) {
  char* allocated=*__t1335t;
  if(allocated){
  free(allocated);
  }
  *__t1335t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1336t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1336t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t1337t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1337t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1338t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1338t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t1339t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1339t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1340t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1340t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t1341t) {
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
  *__t1341t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t1342t, uint64_t* __t1343t, uint16_t* __t1344t, uint16_t* __t1345t, uint64_t size, char** __t1346t, uint64_t* __t1347t, uint16_t* __t1348t, uint16_t* __t1349t) {
  char* buffer__unsafe_ptr=*__t1342t;
  uint64_t buffer__unsafe_size=*__t1343t;
  uint16_t buffer__unsafe_offset=*__t1344t;
  uint16_t buffer__unsafe_align=*__t1345t;
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
  *__t1342t=buffer__unsafe_ptr;
  *__t1343t=buffer__unsafe_size;
  *__t1344t=buffer__unsafe_offset;
  *__t1345t=buffer__unsafe_align;
  *__t1346t=__t521t__unsafe_ptr;
  *__t1347t=__t521t__unsafe_size;
  *__t1348t=__t521t__unsafe_offset;
  *__t1349t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1350t) {
  goto __t_return;
  __t_return:
  *__t1350t=buffer__unsafe_size;
}

int list__t605t(char** __t1351t, uint64_t* __t1352t, uint16_t* __t1353t, uint16_t* __t1354t, char** __t1355t, uint64_t* __t1356t, uint16_t* __t1357t, uint16_t* __t1358t, uint64_t* __t1359t) {
  char* _buffer__unsafe_ptr=*__t1351t;
  uint64_t _buffer__unsafe_size=*__t1352t;
  uint16_t _buffer__unsafe_offset=*__t1353t;
  uint16_t _buffer__unsafe_align=*__t1354t;
  uint64_t __t606t=0;
  char* __t607t__unsafe_ptr=0;
  uint64_t __t607t__unsafe_size=0;
  uint16_t __t607t__unsafe_offset=0;
  uint16_t __t607t__unsafe_align=0;
  uint64_t __t608t____t510t=0;
  char __t608t____t511t__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __t609t__=0;
  uint64_t __t610t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t606t=1;
  __t_errcode=alloc__t508t(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__t606t,&__t607t__unsafe_ptr,&__t607t__unsafe_size,&__t607t__unsafe_offset,&__t607t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t607t__unsafe_ptr;
  buffer__unsafe_size=__t607t__unsafe_size;
  buffer__unsafe_offset=__t607t__unsafe_offset;
  buffer__unsafe_align=__t607t__unsafe_align;
  len__t604t(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__t609t__);
  __t610t=__t609t__;
  length=__t610t;
  goto __t_return;
  
  __t_failure:__t608t____t510t=0;
  neq__t142t(buffer__unsafe_size,__t608t____t510t,&__t608t____t511t__);
  if(__t608t____t511t__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__t501t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1351t=_buffer__unsafe_ptr;
  *__t1352t=_buffer__unsafe_size;
  *__t1353t=_buffer__unsafe_offset;
  *__t1354t=_buffer__unsafe_align;
  *__t1355t=buffer__unsafe_ptr;
  *__t1356t=buffer__unsafe_size;
  *__t1357t=buffer__unsafe_offset;
  *__t1358t=buffer__unsafe_align;
  *__t1359t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1360t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1360t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1361t) {
  *__t1361t=to;
}

static inline __attribute__((always_inline)) int realloc__t497t(char* allocated, uint64_t bytes, char** __t1362t) {
  char* new_allocated=0;
  char __t498t__=0;
  char __t499t__=0;
  char* __t500t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t435t(new_allocated,&__t498t__);
  not__t26t(__t498t__,&__t499t__);
  if(__t499t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t20t(new_allocated,allocated,&__t500t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1362t=__t500t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1363t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1363t=z;
}

static inline __attribute__((always_inline)) int resize__t563t(char** __t1364t, uint64_t* __t1365t, uint16_t* __t1366t, uint16_t* __t1367t, uint64_t size, char** __t1368t, uint64_t* __t1369t, uint16_t* __t1370t, uint16_t* __t1371t) {
  char* buffer__unsafe_ptr=*__t1364t;
  uint64_t buffer__unsafe_size=*__t1365t;
  uint16_t buffer__unsafe_offset=*__t1366t;
  uint16_t buffer__unsafe_align=*__t1367t;
  char __t564t__=0;
  uint64_t __t565t=0;
  char __t566t__=0;
  uint64_t __t567t__=0;
  uint64_t __t568t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t569t__=0;
  uint64_t __t570t__=0;
  uint64_t bytes=0;
  char* __t571t__=0;
  char __t572t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(buffer__unsafe_size,size,&__t564t__);
  if(__t564t__){
  goto __t_return;
  }
  __t565t=0;
  eq__t118t(buffer__unsafe_size,__t565t,&__t566t__);
  if(__t566t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t567t__);
  mul__t194t(buffer__unsafe_size,__t567t__,&__t568t__);
  prev_bytes=__t568t__;
  buffer__unsafe_size=size;
  nat__t505t(buffer__unsafe_align,&__t569t__);
  mul__t194t(__t569t__,size,&__t570t__);
  bytes=__t570t__;
  __t_errcode=realloc__t497t(buffer__unsafe_ptr,bytes,&__t571t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t571t__;
  lt__t247t(prev_bytes,bytes,&__t572t__);
  if(__t572t__){
  zero__t502t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1364t=buffer__unsafe_ptr;
  *__t1365t=buffer__unsafe_size;
  *__t1366t=buffer__unsafe_offset;
  *__t1367t=buffer__unsafe_align;
  *__t1368t=buffer__unsafe_ptr;
  *__t1369t=buffer__unsafe_size;
  *__t1370t=buffer__unsafe_offset;
  *__t1371t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t558t(char** __t1372t, uint64_t* __t1373t, uint16_t* __t1374t, uint16_t* __t1375t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1372t=unsafe_ptr;
  *__t1373t=unsafe_size;
  *__t1374t=unsafe_offset;
  *__t1375t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1376t) {
  *__t1376t=to;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1377t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1377t=z;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t1378t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t1378t=__t504t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1379t) {
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
  *__t1379t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t632t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1380t, uint64_t* __t1381t, uint64_t* __t1382t, char* __t1383t) {
  goto __t_return;
  __t_return:
  *__t1380t=unsafe_ptr;
  *__t1381t=dat__pos;
  *__t1382t=dat__length;
  *__t1383t=dat__first;
}

static inline __attribute__((always_inline)) int str__t636t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1384t, uint64_t* __t1385t, uint64_t* __t1386t, char* __t1387t) {
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
  *__t1384t=__t643t__unsafe_ptr;
  *__t1385t=__t643t__dat__pos;
  *__t1386t=__t643t__dat__length;
  *__t1387t=__t643t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t668t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1388t, uint64_t* __t1389t, uint64_t* __t1390t, char* __t1391t) {
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
  *__t1388t=__t673t__unsafe_ptr;
  *__t1389t=__t673t__dat__pos;
  *__t1390t=__t673t__dat__length;
  *__t1391t=__t673t__dat__first;
  
  return __t_errcode;
}

int str__t674t(const char* c, char** __t1392t, uint64_t* __t1393t, uint64_t* __t1394t, char* __t1395t) {
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
  *__t1392t=__t681t__unsafe_ptr;
  *__t1393t=__t681t__dat__pos;
  *__t1394t=__t681t__dat__length;
  *__t1395t=__t681t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t682t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1396t) {
  goto __t_return;
  __t_return:
  *__t1396t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t146t(char* x, char* y, char* __t1397t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1397t=z;
}

static inline __attribute__((always_inline)) int div__t220t(uint64_t x, uint64_t y, uint64_t* __t1398t) {
  int __t221t__=0;
  uint64_t zero=0;
  char __t222t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t93t(x,y,&__t221t__);
  zero=0;
  eq__t118t(y,zero,&__t222t__);
  if(__t222t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1398t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t667t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1399t, uint64_t* __t1400t, uint64_t* __t1401t, char* __t1402t) {
  goto __t_return;
  __t_return:
  *__t1399t=other__unsafe_ptr;
  *__t1400t=other__dat__pos;
  *__t1401t=other__dat__length;
  *__t1402t=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t1403t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1403t=z;
}

static inline __attribute__((always_inline)) int copy__t742t(char** __t1404t, uint64_t* __t1405t, uint16_t* __t1406t, uint16_t* __t1407t, uint64_t* __t1408t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1409t, uint64_t* __t1410t, uint64_t* __t1411t, char* __t1412t) {
  char* buf__unsafe_ptr=*__t1404t;
  uint64_t buf__unsafe_size=*__t1405t;
  uint16_t buf__unsafe_offset=*__t1406t;
  uint16_t buf__unsafe_align=*__t1407t;
  uint64_t pos=*__t1408t;
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
  *__t1404t=buf__unsafe_ptr;
  *__t1405t=buf__unsafe_size;
  *__t1406t=buf__unsafe_offset;
  *__t1407t=buf__unsafe_align;
  *__t1408t=pos;
  *__t1409t=__t750t__unsafe_ptr;
  *__t1410t=__t750t__dat__pos;
  *__t1411t=__t750t__dat__length;
  *__t1412t=__t750t__dat__first;
  
  return __t_errcode;
}

int copy__t808t(char** __t1413t, uint64_t* __t1414t, uint16_t* __t1415t, uint16_t* __t1416t, uint64_t* __t1417t, const char* _other, char** __t1418t, uint64_t* __t1419t, uint64_t* __t1420t, char* __t1421t) {
  char* li__buffer__unsafe_ptr=*__t1413t;
  uint64_t li__buffer__unsafe_size=*__t1414t;
  uint16_t li__buffer__unsafe_offset=*__t1415t;
  uint16_t li__buffer__unsafe_align=*__t1416t;
  uint64_t li__length=*__t1417t;
  char* __t809t__unsafe_ptr=0;
  uint64_t __t809t__dat__pos=0;
  uint64_t __t809t__dat__length=0;
  char __t809t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t810t=0;
  uint64_t prev_prev_length=0;
  uint64_t __t811t__=0;
  uint64_t __t812t__=0;
  uint64_t prev_length=0;
  char __t813t__=0;
  uint64_t __t814t__=0;
  char __t815t__=0;
  uint64_t __t816t=0;
  uint64_t __t817t__=0;
  uint64_t __t818t=0;
  uint64_t __t819t__=0;
  uint64_t __t820t__=0;
  char* __t821t__unsafe_ptr=0;
  uint64_t __t821t__unsafe_size=0;
  uint16_t __t821t__unsafe_offset=0;
  uint16_t __t821t__unsafe_align=0;
  char* __t822t__unsafe_ptr=0;
  uint64_t __t822t__dat__pos=0;
  uint64_t __t822t__dat__length=0;
  char __t822t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t674t(_other,&__t809t__unsafe_ptr,&__t809t__dat__pos,&__t809t__dat__length,&__t809t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t809t__unsafe_ptr;
  other__dat__pos=__t809t__dat__pos;
  other__dat__length=__t809t__dat__length;
  other__dat__first=__t809t__dat__first;
  __t810t=li__length;
  prev_prev_length=__t810t;
  len__t682t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t811t__);
  add__t170t(li__length,__t811t__,&__t812t__);
  prev_length=__t812t__;
  eq__t146t(other__unsafe_ptr,li__buffer__unsafe_ptr,&__t813t__);
  if(__t813t__){
  __t_errcode=21;
  goto __t_failure;
  }
  len__t604t(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_offset,li__buffer__unsafe_align,&__t814t__);
  ge__t319t(prev_length,__t814t__,&__t815t__);
  if(__t815t__){
  __t816t=2;
  __t_errcode=div__t220t(prev_length,__t816t,&__t817t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t818t=1;
  add__t170t(__t817t__,__t818t,&__t819t__);
  add__t170t(prev_length,__t819t__,&__t820t__);
  __t_errcode=resize__t563t(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,__t820t__,&__t821t__unsafe_ptr,&__t821t__unsafe_size,&__t821t__unsafe_offset,&__t821t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  li__buffer__unsafe_ptr=__t821t__unsafe_ptr;
  li__buffer__unsafe_size=__t821t__unsafe_size;
  li__buffer__unsafe_offset=__t821t__unsafe_offset;
  li__buffer__unsafe_align=__t821t__unsafe_align;
  }
  li__length=prev_length;
  __t_errcode=copy__t742t(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t822t__unsafe_ptr,&__t822t__dat__pos,&__t822t__dat__length,&__t822t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1413t=li__buffer__unsafe_ptr;
  *__t1414t=li__buffer__unsafe_size;
  *__t1415t=li__buffer__unsafe_offset;
  *__t1416t=li__buffer__unsafe_align;
  *__t1417t=li__length;
  *__t1418t=__t822t__unsafe_ptr;
  *__t1419t=__t822t__dat__pos;
  *__t1420t=__t822t__dat__length;
  *__t1421t=__t822t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t1309t(char** __t1422t, uint64_t* __t1423t, uint64_t* __t1424t, char* __t1425t, char** __t1426t, uint64_t* __t1427t, uint64_t* __t1428t, char* __t1429t) {
  char* __t1312t__unsafe_ptr=0;
  uint64_t __t1312t__unsafe_size=0;
  uint16_t __t1312t__unsafe_offset=0;
  uint16_t __t1312t__unsafe_align=0;
  char* __t1313t__unsafe_ptr=0;
  uint64_t __t1313t__unsafe_size=0;
  uint16_t __t1313t__unsafe_offset=0;
  uint16_t __t1313t__unsafe_align=0;
  char* __t1314t__buffer__unsafe_ptr=0;
  uint64_t __t1314t__buffer__unsafe_size=0;
  uint16_t __t1314t__buffer__unsafe_offset=0;
  uint16_t __t1314t__buffer__unsafe_align=0;
  uint64_t __t1314t__length=0;
  uint64_t __t1315t____t608t____t510t=0;
  char __t1315t____t608t____t511t__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint16_t mem__buffer__unsafe_offset=0;
  uint16_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __t1316t=0;
  char* __t1317t__unsafe_ptr=0;
  uint64_t __t1317t__unsafe_size=0;
  uint16_t __t1317t__unsafe_offset=0;
  uint16_t __t1317t__unsafe_align=0;
  char* __t1319t__unsafe_ptr=0;
  uint64_t __t1319t__dat__pos=0;
  uint64_t __t1319t__dat__length=0;
  char __t1319t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1321t__unsafe_ptr=0;
  uint64_t __t1321t__dat__pos=0;
  uint64_t __t1321t__dat__length=0;
  char __t1321t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1310t(&__t1312t__unsafe_ptr,&__t1312t__unsafe_size,&__t1312t__unsafe_offset,&__t1312t__unsafe_align);
  __t1313t__unsafe_ptr=__t1312t__unsafe_ptr;
  __t1313t__unsafe_size=__t1312t__unsafe_size;
  __t1313t__unsafe_offset=__t1312t__unsafe_offset;
  __t1313t__unsafe_align=__t1312t__unsafe_align;
  __t_errcode=list__t605t(&__t1313t__unsafe_ptr,&__t1313t__unsafe_size,&__t1313t__unsafe_offset,&__t1313t__unsafe_align,&__t1314t__buffer__unsafe_ptr,&__t1314t__buffer__unsafe_size,&__t1314t__buffer__unsafe_offset,&__t1314t__buffer__unsafe_align,&__t1314t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  mem__buffer__unsafe_size=__t1314t__buffer__unsafe_size;
  mem__length=__t1314t__length;
  __t1316t=100;
  __t_errcode=resize__t563t(&__t1313t__unsafe_ptr,&mem__buffer__unsafe_size,&__t1313t__unsafe_offset,&__t1313t__unsafe_align,__t1316t,&__t1317t__unsafe_ptr,&__t1317t__unsafe_size,&__t1317t__unsafe_offset,&__t1317t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t808t(&__t1313t__unsafe_ptr,&mem__buffer__unsafe_size,&__t1313t__unsafe_offset,&__t1313t__unsafe_align,&mem__length,__t1318t,&__t1319t__unsafe_ptr,&__t1319t__dat__pos,&__t1319t__dat__length,&__t1319t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t1319t__dat__pos;
  s1__dat__length=__t1319t__dat__length;
  s1__dat__first=__t1319t__dat__first;
  __t_errcode=copy__t808t(&__t1313t__unsafe_ptr,&mem__buffer__unsafe_size,&__t1313t__unsafe_offset,&__t1313t__unsafe_align,&mem__length,__t1320t,&__t1321t__unsafe_ptr,&__t1321t__dat__pos,&__t1321t__dat__length,&__t1321t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t1321t__dat__pos;
  s2__dat__length=__t1321t__dat__length;
  s2__dat__first=__t1321t__dat__first;
  s1__unsafe_ptr=__t1313t__unsafe_ptr;
  s2__unsafe_ptr=__t1313t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:__t1315t____t608t____t510t=0;
  neq__t142t(__t1314t__buffer__unsafe_size,__t1315t____t608t____t510t,&__t1315t____t608t____t511t__);
  if(__t1315t____t608t____t511t__){
  __t1314t__buffer__unsafe_size=0;
  __t1314t__buffer__unsafe_size=__t1314t__buffer__unsafe_size;
  s2__unsafe_ptr=s2__unsafe_ptr;
  free__t501t(&s2__unsafe_ptr);
  }
  __t_return:
  *__t1422t=s1__unsafe_ptr;
  *__t1423t=s1__dat__pos;
  *__t1424t=s1__dat__length;
  *__t1425t=s1__dat__first;
  *__t1426t=s2__unsafe_ptr;
  *__t1427t=s2__dat__pos;
  *__t1428t=s2__dat__length;
  *__t1429t=s2__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t784t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t785t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1322t() {
  char* __t1323t__s1__unsafe_ptr=0;
  uint64_t __t1323t__s1__dat__pos=0;
  uint64_t __t1323t__s1__dat__length=0;
  char __t1323t__s1__dat__first=0;
  char* __t1323t__s2__unsafe_ptr=0;
  uint64_t __t1323t__s2__dat__pos=0;
  uint64_t __t1323t__s2__dat__length=0;
  char __t1323t__s2__dat__first=0;
  uint64_t __t1324t____t1315t____t608t____t510t=0;
  uint64_t __t1324t____t1314t__buffer__unsafe_size=0;
  char __t1324t____t1315t____t608t____t511t__=0;
  char* s__s1__unsafe_ptr=0;
  uint64_t s__s1__dat__pos=0;
  uint64_t s__s1__dat__length=0;
  char s__s1__dat__first=0;
  char* s__s2__unsafe_ptr=0;
  uint64_t s__s2__dat__pos=0;
  uint64_t s__s2__dat__length=0;
  char s__s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=test__t1309t(&__t1323t__s1__unsafe_ptr,&__t1323t__s1__dat__pos,&__t1323t__s1__dat__length,&__t1323t__s1__dat__first,&__t1323t__s2__unsafe_ptr,&__t1323t__s2__dat__pos,&__t1323t__s2__dat__length,&__t1323t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t1323t__s1__unsafe_ptr;
  s__s1__dat__pos=__t1323t__s1__dat__pos;
  s__s1__dat__length=__t1323t__s1__dat__length;
  s__s1__dat__first=__t1323t__s1__dat__first;
  s__s2__unsafe_ptr=__t1323t__s2__unsafe_ptr;
  s__s2__dat__pos=__t1323t__s2__dat__pos;
  s__s2__dat__length=__t1323t__s2__dat__length;
  s__s2__dat__first=__t1323t__s2__dat__first;
  print__t784t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t784t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:__t1324t____t1315t____t608t____t510t=0;
  neq__t142t(__t1324t____t1314t__buffer__unsafe_size,__t1324t____t1315t____t608t____t510t,&__t1324t____t1315t____t608t____t511t__);
  if(__t1324t____t1315t____t608t____t511t__){
  __t1324t____t1314t__buffer__unsafe_size=0;
  __t1324t____t1314t__buffer__unsafe_size=__t1324t____t1314t__buffer__unsafe_size;
  __t1323t__s2__unsafe_ptr=__t1323t__s2__unsafe_ptr;
  free__t501t(&__t1323t__s2__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1322t();return 0;}