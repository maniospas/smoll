#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1324t="hello world!";
const char* const __t1329t="... and goodbye for now.";
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

static inline __attribute__((always_inline)) void range__t460t(uint64_t to, uint64_t* __t1335t, uint64_t* __t1336t) {
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
  *__t1335t=from;
  *__t1336t=to;
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

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1340t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1340t=z;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1341t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1341t=z;
}

static inline __attribute__((always_inline)) int get__t476t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t1342t) {
  char __t477t__=0;
  char __t478t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(pos,r__to,&__t477t__);
  if(__t477t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t247t(pos,r__from,&__t478t__);
  if(__t478t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1342t=pos;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t381t(uint64_t value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr____buffer__t1327t(char** __t1343t, uint64_t* __t1344t, uint16_t* __t1345t, uint16_t* __t1346t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1343t=unsafe_ptr;
  *__t1344t=unsafe_size;
  *__t1345t=unsafe_offset;
  *__t1346t=unsafe_align;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1347t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1347t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t1348t) {
  char* allocated=*__t1348t;
  if(allocated){
  free(allocated);
  }
  *__t1348t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1349t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1349t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t1350t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1350t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1351t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1351t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t1352t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1352t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1353t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1353t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t1354t) {
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
  *__t1354t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t1355t, uint64_t* __t1356t, uint16_t* __t1357t, uint16_t* __t1358t, uint64_t size, char** __t1359t, uint64_t* __t1360t, uint16_t* __t1361t, uint16_t* __t1362t) {
  char* buffer__unsafe_ptr=*__t1355t;
  uint64_t buffer__unsafe_size=*__t1356t;
  uint16_t buffer__unsafe_offset=*__t1357t;
  uint16_t buffer__unsafe_align=*__t1358t;
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
  *__t1355t=buffer__unsafe_ptr;
  *__t1356t=buffer__unsafe_size;
  *__t1357t=buffer__unsafe_offset;
  *__t1358t=buffer__unsafe_align;
  *__t1359t=__t521t__unsafe_ptr;
  *__t1360t=__t521t__unsafe_size;
  *__t1361t=__t521t__unsafe_offset;
  *__t1362t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1363t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1363t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1364t) {
  *__t1364t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t1365t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t1365t=__t504t__;
}

static inline __attribute__((always_inline)) int get__t597t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1366t) {
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
  *__t1366t=__t603t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t368t(const char* value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t1311t(char* sentences__unsafe_ptr, uint64_t sentences__unsafe_size, uint16_t sentences__unsafe_offset, uint16_t sentences__unsafe_align) {
  uint64_t __t1312t=0;
  char __t1313t=0;
  char* __t1314t__=0;
  const char* __t1315t__ret=0;
  const char* sentence=0;
  int __t_complain=0;
  __t1312t=0;
  while(1){
  __t_complain=get__t597t(sentences__unsafe_ptr,sentences__unsafe_size,sentences__unsafe_offset,sentences__unsafe_align,__t1312t,&__t1314t__);
  __t1313t=__t_complain;
  if(!__t1314t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t1315t__ret,__t1314t__,8);
  }
  sentence=__t1315t__ret;
  __t1313t=__t1313t==0;
  __t1312t=__t1312t+1;
  if(!__t1313t){
  break;
  }
  print__t368t(sentence);
  }
}

static inline __attribute__((always_inline)) int main__t1317t() {
  uint64_t __t1318t=0;
  uint64_t __t1319t=0;
  uint64_t __t1320t__from=0;
  uint64_t __t1320t__to=0;
  char __t1321t=0;
  uint64_t __t1322t__=0;
  uint64_t i=0;
  char* __t1330t__unsafe_ptr=0;
  uint64_t __t1330t__unsafe_size=0;
  uint16_t __t1330t__unsafe_offset=0;
  uint16_t __t1330t__unsafe_align=0;
  uint64_t __t1331t=0;
  char* __t1332t__unsafe_ptr=0;
  uint64_t __t1332t__unsafe_size=0;
  uint16_t __t1332t__unsafe_offset=0;
  uint16_t __t1332t__unsafe_align=0;
  uint64_t __t1333t____t510t=0;
  char __t1333t____t511t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1319t=10;
  range__t460t(__t1319t,&__t1320t__from,&__t1320t__to);
  __t1318t=0;
  while(1){
  __t_complain=get__t476t(__t1320t__from,__t1320t__to,__t1318t,&__t1322t__);
  __t1321t=__t_complain;
  i=__t1322t__;
  __t1321t=__t1321t==0;
  __t1318t=__t1318t+1;
  if(!__t1321t){
  break;
  }
  print__t381t(i);
  }
  cstr____buffer__t1327t(&__t1330t__unsafe_ptr,&__t1330t__unsafe_size,&__t1330t__unsafe_offset,&__t1330t__unsafe_align);
  __t1331t=2;
  __t_errcode=alloc__t508t(&__t1330t__unsafe_ptr,&__t1330t__unsafe_size,&__t1330t__unsafe_offset,&__t1330t__unsafe_align,__t1331t,&__t1332t__unsafe_ptr,&__t1332t__unsafe_size,&__t1332t__unsafe_offset,&__t1332t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1330t__unsafe_ptr,&__t1324t,8);
  memcpy(__t1330t__unsafe_ptr+8,&__t1329t,8);
  print__t1311t(__t1330t__unsafe_ptr,__t1330t__unsafe_size,__t1330t__unsafe_offset,__t1330t__unsafe_align);
  
  __t_failure:__t1333t____t510t=0;
  neq__t142t(__t1332t__unsafe_size,__t1333t____t510t,&__t1333t____t511t__);
  if(__t1333t____t511t__){
  __t1332t__unsafe_size=0;
  __t1332t__unsafe_size=__t1332t__unsafe_size;
  __t1332t__unsafe_ptr=__t1332t__unsafe_ptr;
  free__t501t(&__t1332t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1317t();return 0;}