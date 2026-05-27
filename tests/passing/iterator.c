#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1340t="hello world!";
const char* const __t371t="\n";
const char* const __t1345t="... and goodbye for now.";
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

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t1351t, uint64_t* __t1352t) {
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
  *__t1351t=from;
  *__t1352t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1353t) {
  int value=0;
  *__t1353t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1354t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1354t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1355t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1355t=__t96t__;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1356t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1356t=z;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1357t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1357t=z;
}

static inline __attribute__((always_inline)) int get__t477t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t1358t) {
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
  *__t1358t=pos;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t382t(uint64_t value) {
  int __t383t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr____buffer__t1343t(char** __t1359t, uint64_t* __t1360t, uint16_t* __t1361t, uint16_t* __t1362t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1359t=unsafe_ptr;
  *__t1360t=unsafe_size;
  *__t1361t=unsafe_offset;
  *__t1362t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1363t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1363t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1364t) {
  char* allocated=*__t1364t;
  if(allocated){
  free(allocated);
  }
  *__t1364t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1365t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1365t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1366t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1366t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1367t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1367t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1368t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1368t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1369t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1369t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1370t) {
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
  *__t1370t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1371t, uint64_t* __t1372t, uint16_t* __t1373t, uint16_t* __t1374t, uint64_t size, char** __t1375t, uint64_t* __t1376t, uint16_t* __t1377t, uint16_t* __t1378t) {
  char* buffer__unsafe_ptr=*__t1371t;
  uint64_t buffer__unsafe_size=*__t1372t;
  uint16_t buffer__unsafe_offset=*__t1373t;
  uint16_t buffer__unsafe_align=*__t1374t;
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
  *__t1371t=buffer__unsafe_ptr;
  *__t1372t=buffer__unsafe_size;
  *__t1373t=buffer__unsafe_offset;
  *__t1374t=buffer__unsafe_align;
  *__t1375t=__t520t__unsafe_ptr;
  *__t1376t=__t520t__unsafe_size;
  *__t1377t=__t520t__unsafe_offset;
  *__t1378t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1379t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1379t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1380t) {
  *__t1380t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1381t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1381t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1382t) {
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
  *__t1382t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t1327t(char* sentences__unsafe_ptr, uint64_t sentences__unsafe_size, uint16_t sentences__unsafe_offset, uint16_t sentences__unsafe_align) {
  uint64_t __t1328t=0;
  char __t1329t=0;
  char* __t1330t__=0;
  const char* __t1331t__value__cstr=0;
  const char* sentence=0;
  int __t_complain=0;
  __t1328t=0;
  while(1){
  __t_complain=get__t595t(sentences__unsafe_ptr,sentences__unsafe_size,sentences__unsafe_offset,sentences__unsafe_align,__t1328t,&__t1330t__);
  __t1329t=__t_complain;
  if(!__t1330t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t1331t__value__cstr,__t1330t__,8);
  }
  sentence=__t1331t__value__cstr;
  __t1329t=__t1329t==0;
  __t1328t=__t1328t+1;
  if(!__t1329t){
  break;
  }
  print__t369t(sentence);
  }
}

static inline __attribute__((always_inline)) int main__t1333t() {
  uint64_t __t1334t=0;
  uint64_t __t1335t=0;
  uint64_t __t1336t__from=0;
  uint64_t __t1336t__to=0;
  char __t1337t=0;
  uint64_t __t1338t__=0;
  uint64_t i=0;
  char* __t1346t__unsafe_ptr=0;
  uint64_t __t1346t__unsafe_size=0;
  uint16_t __t1346t__unsafe_offset=0;
  uint16_t __t1346t__unsafe_align=0;
  uint64_t __t1347t=0;
  char* __t1348t__unsafe_ptr=0;
  uint64_t __t1348t__unsafe_size=0;
  uint16_t __t1348t__unsafe_offset=0;
  uint16_t __t1348t__unsafe_align=0;
  char __t1349t____t511t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1335t=10;
  range__t461t(__t1335t,&__t1336t__from,&__t1336t__to);
  __t1334t=0;
  while(1){
  __t_complain=get__t477t(__t1336t__from,__t1336t__to,__t1334t,&__t1338t__);
  __t1337t=__t_complain;
  i=__t1338t__;
  __t1337t=__t1337t==0;
  __t1334t=__t1334t+1;
  if(!__t1337t){
  break;
  }
  print__t382t(i);
  }
  cstr____buffer__t1343t(&__t1346t__unsafe_ptr,&__t1346t__unsafe_size,&__t1346t__unsafe_offset,&__t1346t__unsafe_align);
  __t1347t=2;
  __t_errcode=alloc__t509t(&__t1346t__unsafe_ptr,&__t1346t__unsafe_size,&__t1346t__unsafe_offset,&__t1346t__unsafe_align,__t1347t,&__t1348t__unsafe_ptr,&__t1348t__unsafe_size,&__t1348t__unsafe_offset,&__t1348t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1346t__unsafe_ptr,&__t1340t,8);
  memcpy(__t1346t__unsafe_ptr+8,&__t1345t,8);
  print__t1327t(__t1346t__unsafe_ptr,__t1346t__unsafe_size,__t1346t__unsafe_offset,__t1346t__unsafe_align);
  
  __t_failure:exists__t436t(__t1348t__unsafe_ptr,&__t1349t____t511t__);
  if(__t1349t____t511t__){
  __t1348t__unsafe_ptr=__t1348t__unsafe_ptr;
  free__t502t(&__t1348t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1333t();return 0;}