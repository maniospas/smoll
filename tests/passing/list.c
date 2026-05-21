#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t370t="\n";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1310t(char** __t1333t, uint64_t* __t1334t, uint16_t* __t1335t, uint16_t* __t1336t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1333t=unsafe_ptr;
  *__t1334t=unsafe_size;
  *__t1335t=unsafe_offset;
  *__t1336t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1337t) {
  int value=0;
  *__t1337t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1338t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1338t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1339t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1339t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1340t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1340t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t1341t) {
  char* allocated=*__t1341t;
  if(allocated){
  free(allocated);
  }
  *__t1341t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1342t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1342t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t1343t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1343t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1344t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1344t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t1345t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1345t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1346t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1346t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t1347t) {
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
  *__t1347t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t1348t, uint64_t* __t1349t, uint16_t* __t1350t, uint16_t* __t1351t, uint64_t size, char** __t1352t, uint64_t* __t1353t, uint16_t* __t1354t, uint16_t* __t1355t) {
  char* buffer__unsafe_ptr=*__t1348t;
  uint64_t buffer__unsafe_size=*__t1349t;
  uint16_t buffer__unsafe_offset=*__t1350t;
  uint16_t buffer__unsafe_align=*__t1351t;
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
  *__t1348t=buffer__unsafe_ptr;
  *__t1349t=buffer__unsafe_size;
  *__t1350t=buffer__unsafe_offset;
  *__t1351t=buffer__unsafe_align;
  *__t1352t=__t521t__unsafe_ptr;
  *__t1353t=__t521t__unsafe_size;
  *__t1354t=__t521t__unsafe_offset;
  *__t1355t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t604t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1356t) {
  goto __t_return;
  __t_return:
  *__t1356t=buffer__unsafe_size;
}

int list__t605t(char** __t1357t, uint64_t* __t1358t, uint16_t* __t1359t, uint16_t* __t1360t, char** __t1361t, uint64_t* __t1362t, uint16_t* __t1363t, uint16_t* __t1364t, uint64_t* __t1365t) {
  char* _buffer__unsafe_ptr=*__t1357t;
  uint64_t _buffer__unsafe_size=*__t1358t;
  uint16_t _buffer__unsafe_offset=*__t1359t;
  uint16_t _buffer__unsafe_align=*__t1360t;
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
  *__t1357t=_buffer__unsafe_ptr;
  *__t1358t=_buffer__unsafe_size;
  *__t1359t=_buffer__unsafe_offset;
  *__t1360t=_buffer__unsafe_align;
  *__t1361t=buffer__unsafe_ptr;
  *__t1362t=buffer__unsafe_size;
  *__t1363t=buffer__unsafe_offset;
  *__t1364t=buffer__unsafe_align;
  *__t1365t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1366t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1366t=z;
}

static inline __attribute__((always_inline)) int div__t220t(uint64_t x, uint64_t y, uint64_t* __t1367t) {
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
  *__t1367t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1368t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1368t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1369t) {
  *__t1369t=to;
}

static inline __attribute__((always_inline)) int realloc__t497t(char* allocated, uint64_t bytes, char** __t1370t) {
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
  *__t1370t=__t500t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1371t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1371t=z;
}

static inline __attribute__((always_inline)) int resize__t563t(char** __t1372t, uint64_t* __t1373t, uint16_t* __t1374t, uint16_t* __t1375t, uint64_t size, char** __t1376t, uint64_t* __t1377t, uint16_t* __t1378t, uint16_t* __t1379t) {
  char* buffer__unsafe_ptr=*__t1372t;
  uint64_t buffer__unsafe_size=*__t1373t;
  uint16_t buffer__unsafe_offset=*__t1374t;
  uint16_t buffer__unsafe_align=*__t1375t;
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
  *__t1372t=buffer__unsafe_ptr;
  *__t1373t=buffer__unsafe_size;
  *__t1374t=buffer__unsafe_offset;
  *__t1375t=buffer__unsafe_align;
  *__t1376t=buffer__unsafe_ptr;
  *__t1377t=buffer__unsafe_size;
  *__t1378t=buffer__unsafe_offset;
  *__t1379t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t1380t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t1380t=__t504t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1381t, uint64_t* __t1382t, uint16_t* __t1383t, uint16_t* __t1384t, uint64_t i, char** __t1385t) {
  char* buffer__unsafe_ptr=*__t1381t;
  uint64_t buffer__unsafe_size=*__t1382t;
  uint16_t buffer__unsafe_offset=*__t1383t;
  uint16_t buffer__unsafe_align=*__t1384t;
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
  *__t1381t=buffer__unsafe_ptr;
  *__t1382t=buffer__unsafe_size;
  *__t1383t=buffer__unsafe_offset;
  *__t1384t=buffer__unsafe_align;
  *__t1385t=__t596t__;
  
  return __t_errcode;
}

int push__t618t(char** __t1386t, uint64_t* __t1387t, uint16_t* __t1388t, uint16_t* __t1389t, uint64_t* __t1390t, char** __t1391t) {
  char* l__buffer__unsafe_ptr=*__t1386t;
  uint64_t l__buffer__unsafe_size=*__t1387t;
  uint16_t l__buffer__unsafe_offset=*__t1388t;
  uint16_t l__buffer__unsafe_align=*__t1389t;
  uint64_t l__length=*__t1390t;
  uint64_t prev_length=0;
  uint64_t __t619t__=0;
  char __t620t__=0;
  uint64_t __t621t=0;
  uint64_t __t622t__=0;
  uint64_t __t623t=0;
  uint64_t __t624t__=0;
  uint64_t __t625t__=0;
  char* __t626t__unsafe_ptr=0;
  uint64_t __t626t__unsafe_size=0;
  uint16_t __t626t__unsafe_offset=0;
  uint16_t __t626t__unsafe_align=0;
  uint64_t __t627t=0;
  uint64_t __t628t__=0;
  char* __t629t__=0;
  char* val=0;
  int __t_errcode=0;
  int __t_complain=0;
  prev_length=l__length;
  len__t604t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,&__t619t__);
  ge__t319t(prev_length,__t619t__,&__t620t__);
  if(__t620t__){
  __t621t=2;
  __t_errcode=div__t220t(prev_length,__t621t,&__t622t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t623t=1;
  add__t170t(__t622t__,__t623t,&__t624t__);
  add__t170t(prev_length,__t624t__,&__t625t__);
  __t_errcode=resize__t563t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,__t625t__,&__t626t__unsafe_ptr,&__t626t__unsafe_size,&__t626t__unsafe_offset,&__t626t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  l__buffer__unsafe_ptr=__t626t__unsafe_ptr;
  l__buffer__unsafe_size=__t626t__unsafe_size;
  l__buffer__unsafe_offset=__t626t__unsafe_offset;
  l__buffer__unsafe_align=__t626t__unsafe_align;
  }
  __t627t=1;
  add__t170t(prev_length,__t627t,&__t628t__);
  l__length=__t628t__;
  __t_errcode=mutget__t590t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,prev_length,&__t629t__);
  if(__t_errcode){
  goto __t_failure;
  }
  val=__t629t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1386t=l__buffer__unsafe_ptr;
  *__t1387t=l__buffer__unsafe_size;
  *__t1388t=l__buffer__unsafe_offset;
  *__t1389t=l__buffer__unsafe_align;
  *__t1390t=l__length;
  *__t1391t=val;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t615t(char** __t1392t, uint64_t* __t1393t, uint16_t* __t1394t, uint16_t* __t1395t, uint64_t* __t1396t, uint64_t pos, char** __t1397t) {
  char* l__buffer__unsafe_ptr=*__t1392t;
  uint64_t l__buffer__unsafe_size=*__t1393t;
  uint16_t l__buffer__unsafe_offset=*__t1394t;
  uint16_t l__buffer__unsafe_align=*__t1395t;
  uint64_t l__length=*__t1396t;
  char __t616t__=0;
  char* __t617t__=0;
  char* ret=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(pos,l__length,&__t616t__);
  if(__t616t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=mutget__t590t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,pos,&__t617t__);
  if(__t_errcode){
  goto __t_failure;
  }
  ret=__t617t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1392t=l__buffer__unsafe_ptr;
  *__t1393t=l__buffer__unsafe_size;
  *__t1394t=l__buffer__unsafe_offset;
  *__t1395t=l__buffer__unsafe_align;
  *__t1396t=l__length;
  *__t1397t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1398t) {
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
  *__t1398t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t612t(char* l__buffer__unsafe_ptr, uint64_t l__buffer__unsafe_size, uint16_t l__buffer__unsafe_offset, uint16_t l__buffer__unsafe_align, uint64_t l__length, uint64_t pos, char** __t1399t) {
  char __t613t__=0;
  char* __t614t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(pos,l__length,&__t613t__);
  if(__t613t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=get__t597t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,pos,&__t614t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1399t=__t614t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t373t(double value) {
  int __t374t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1309t() {
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
  char* li__buffer__unsafe_ptr=0;
  uint64_t li__buffer__unsafe_size=0;
  uint16_t li__buffer__unsafe_offset=0;
  uint16_t li__buffer__unsafe_align=0;
  uint64_t li__length=0;
  char* __t1316t__=0;
  double __t1317t=0;
  char* __t1318t__=0;
  double __t1319t=0;
  char* __t1320t__=0;
  double __t1321t=0;
  uint64_t __t1322t=0;
  char* __t1323t__=0;
  double __t1324t=0;
  uint64_t __t1325t=0;
  char* __t1326t__=0;
  double __t1327t__number=0;
  uint64_t __t1329t=0;
  char* __t1330t__=0;
  double __t1331t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1310t(&__t1312t__unsafe_ptr,&__t1312t__unsafe_size,&__t1312t__unsafe_offset,&__t1312t__unsafe_align);
  __t1313t__unsafe_ptr=__t1312t__unsafe_ptr;
  __t1313t__unsafe_size=__t1312t__unsafe_size;
  __t1313t__unsafe_offset=__t1312t__unsafe_offset;
  __t1313t__unsafe_align=__t1312t__unsafe_align;
  __t_errcode=list__t605t(&__t1313t__unsafe_ptr,&__t1313t__unsafe_size,&__t1313t__unsafe_offset,&__t1313t__unsafe_align,&__t1314t__buffer__unsafe_ptr,&__t1314t__buffer__unsafe_size,&__t1314t__buffer__unsafe_offset,&__t1314t__buffer__unsafe_align,&__t1314t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=push__t618t(&__t1314t__buffer__unsafe_ptr,&__t1314t__buffer__unsafe_size,&__t1314t__buffer__unsafe_offset,&__t1314t__buffer__unsafe_align,&__t1314t__length,&__t1316t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1317t=0.1;
  if(!__t1316t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1316t__,&__t1317t,8);
  __t_errcode=push__t618t(&__t1314t__buffer__unsafe_ptr,&__t1314t__buffer__unsafe_size,&__t1314t__buffer__unsafe_offset,&__t1314t__buffer__unsafe_align,&__t1314t__length,&__t1318t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1319t=0.1;
  if(!__t1318t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1318t__,&__t1319t,8);
  __t_errcode=push__t618t(&__t1314t__buffer__unsafe_ptr,&__t1314t__buffer__unsafe_size,&__t1314t__buffer__unsafe_offset,&__t1314t__buffer__unsafe_align,&__t1314t__length,&__t1320t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1321t=0.1;
  if(!__t1320t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1320t__,&__t1321t,8);
  __t1322t=1;
  __t_errcode=mutget__t615t(&__t1314t__buffer__unsafe_ptr,&__t1314t__buffer__unsafe_size,&__t1314t__buffer__unsafe_offset,&__t1314t__buffer__unsafe_align,&__t1314t__length,__t1322t,&__t1323t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1324t=0.2;
  if(!__t1323t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1323t__,&__t1324t,8);
  __t1325t=0;
  __t_errcode=get__t612t(__t1314t__buffer__unsafe_ptr,__t1314t__buffer__unsafe_size,__t1314t__buffer__unsafe_offset,__t1314t__buffer__unsafe_align,__t1314t__length,__t1325t,&__t1326t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1326t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1327t__number,__t1326t__,8);
  print__t373t(__t1327t__number);
  __t1329t=1;
  __t_errcode=get__t612t(__t1314t__buffer__unsafe_ptr,__t1314t__buffer__unsafe_size,__t1314t__buffer__unsafe_offset,__t1314t__buffer__unsafe_align,__t1314t__length,__t1329t,&__t1330t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1330t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1331t__number,__t1330t__,8);
  print__t373t(__t1331t__number);
  
  __t_failure:__t1315t____t608t____t510t=0;
  neq__t142t(__t1314t__buffer__unsafe_size,__t1315t____t608t____t510t,&__t1315t____t608t____t511t__);
  if(__t1315t____t608t____t511t__){
  __t1314t__buffer__unsafe_size=0;
  __t1314t__buffer__unsafe_size=__t1314t__buffer__unsafe_size;
  __t1314t__buffer__unsafe_ptr=__t1314t__buffer__unsafe_ptr;
  free__t501t(&__t1314t__buffer__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1309t();return 0;}