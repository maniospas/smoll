#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1341t="... and goodbye for now.";
const char* const __t1336t="hello world!";
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

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t1347t, uint64_t* __t1348t) {
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
  *__t1347t=from;
  *__t1348t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1349t) {
  int value=0;
  *__t1349t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1350t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1350t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1351t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1351t=__t96t__;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1352t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1352t=z;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1353t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1353t=z;
}

static inline __attribute__((always_inline)) int get__t477t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t1354t) {
  char __t478t__=0;
  char __t479t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(pos,r__to,&__t478t__);
  if(__t478t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t248t(pos,r__from,&__t479t__);
  if(__t479t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1354t=pos;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t382t(uint64_t value) {
  int __t383t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr____buffer__t1339t(char** __t1355t, uint64_t* __t1356t, uint16_t* __t1357t, uint16_t* __t1358t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1355t=unsafe_ptr;
  *__t1356t=unsafe_size;
  *__t1357t=unsafe_offset;
  *__t1358t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1359t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1359t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1360t) {
  char* allocated=*__t1360t;
  if(allocated){
  free(allocated);
  }
  *__t1360t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1361t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1361t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1362t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1362t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1363t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1363t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1364t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1364t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1365t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1365t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1366t) {
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
  *__t1366t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1367t, uint64_t* __t1368t, uint16_t* __t1369t, uint16_t* __t1370t, uint64_t size, char** __t1371t, uint64_t* __t1372t, uint16_t* __t1373t, uint16_t* __t1374t) {
  char* buffer__unsafe_ptr=*__t1367t;
  uint64_t buffer__unsafe_size=*__t1368t;
  uint16_t buffer__unsafe_offset=*__t1369t;
  uint16_t buffer__unsafe_align=*__t1370t;
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
  *__t1367t=buffer__unsafe_ptr;
  *__t1368t=buffer__unsafe_size;
  *__t1369t=buffer__unsafe_offset;
  *__t1370t=buffer__unsafe_align;
  *__t1371t=buffer__unsafe_ptr;
  *__t1372t=buffer__unsafe_size;
  *__t1373t=buffer__unsafe_offset;
  *__t1374t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1375t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1375t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1376t) {
  *__t1376t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1377t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1377t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1378t) {
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
  *__t1378t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t1323t(char* sentences__unsafe_ptr, uint64_t sentences__unsafe_size, uint16_t sentences__unsafe_offset, uint16_t sentences__unsafe_align) {
  uint64_t __t1324t=0;
  char __t1325t=0;
  char* __t1326t__=0;
  const char* __t1327t__value__cstr=0;
  const char* sentence=0;
  int __t_complain=0;
  __t1324t=0;
  while(1){
  __t_complain=get__t591t(sentences__unsafe_ptr,sentences__unsafe_size,sentences__unsafe_offset,sentences__unsafe_align,__t1324t,&__t1326t__);
  __t1325t=__t_complain;
  if(!__t1326t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t1327t__value__cstr,__t1326t__,8);
  }
  sentence=__t1327t__value__cstr;
  __t1325t=__t1325t==0;
  __t1324t=__t1324t+1;
  if(!__t1325t){
  break;
  }
  print__t369t(sentence);
  }
}

static inline __attribute__((always_inline)) int main__t1329t() {
  uint64_t __t1330t=0;
  uint64_t __t1331t=0;
  uint64_t __t1332t__from=0;
  uint64_t __t1332t__to=0;
  char __t1333t=0;
  uint64_t __t1334t__=0;
  uint64_t i=0;
  char* __t1342t__unsafe_ptr=0;
  uint64_t __t1342t__unsafe_size=0;
  uint16_t __t1342t__unsafe_offset=0;
  uint16_t __t1342t__unsafe_align=0;
  uint64_t __t1343t=0;
  char* __t1344t__unsafe_ptr=0;
  uint64_t __t1344t__unsafe_size=0;
  uint16_t __t1344t__unsafe_offset=0;
  uint16_t __t1344t__unsafe_align=0;
  char __t1345t____t511t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1331t=10;
  range__t461t(__t1331t,&__t1332t__from,&__t1332t__to);
  __t1330t=0;
  while(1){
  __t_complain=get__t477t(__t1332t__from,__t1332t__to,__t1330t,&__t1334t__);
  __t1333t=__t_complain;
  i=__t1334t__;
  __t1333t=__t1333t==0;
  __t1330t=__t1330t+1;
  if(!__t1333t){
  break;
  }
  print__t382t(i);
  }
  cstr____buffer__t1339t(&__t1342t__unsafe_ptr,&__t1342t__unsafe_size,&__t1342t__unsafe_offset,&__t1342t__unsafe_align);
  __t1343t=2;
  __t_errcode=alloc__t509t(&__t1342t__unsafe_ptr,&__t1342t__unsafe_size,&__t1342t__unsafe_offset,&__t1342t__unsafe_align,__t1343t,&__t1344t__unsafe_ptr,&__t1344t__unsafe_size,&__t1344t__unsafe_offset,&__t1344t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1342t__unsafe_ptr,&__t1336t,8);
  memcpy(__t1342t__unsafe_ptr+8,&__t1341t,8);
  print__t1323t(__t1342t__unsafe_ptr,__t1342t__unsafe_size,__t1342t__unsafe_offset,__t1342t__unsafe_align);
  
  __t_failure:exists__t436t(__t1344t__unsafe_ptr,&__t1345t____t511t__);
  if(__t1345t____t511t__){
  free__t502t(&__t1344t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1329t();return 0;}