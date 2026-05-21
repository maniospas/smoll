#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1313t=",";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1322t(char** __t1366t, uint64_t* __t1367t, uint16_t* __t1368t, uint16_t* __t1369t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1366t=unsafe_ptr;
  *__t1367t=unsafe_size;
  *__t1368t=unsafe_offset;
  *__t1369t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1370t) {
  int value=0;
  *__t1370t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1371t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1371t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1372t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1372t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1373t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1373t=z;
}

static inline __attribute__((always_inline)) void free__t501t(char** __t1374t) {
  char* allocated=*__t1374t;
  if(allocated){
  free(allocated);
  }
  *__t1374t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1375t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1375t=z;
}

static inline __attribute__((always_inline)) void nat__t505t(uint16_t x, uint64_t* __t1376t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1376t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1377t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1377t=z;
}

static inline __attribute__((always_inline)) void zero__t502t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t435t(char* x, char* __t1378t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1378t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1379t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1379t=z;
}

static inline __attribute__((always_inline)) int alloc__t494t(uint64_t bytes, char** __t1380t) {
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
  *__t1380t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t508t(char** __t1381t, uint64_t* __t1382t, uint16_t* __t1383t, uint16_t* __t1384t, uint64_t size, char** __t1385t, uint64_t* __t1386t, uint16_t* __t1387t, uint16_t* __t1388t) {
  char* buffer__unsafe_ptr=*__t1381t;
  uint64_t buffer__unsafe_size=*__t1382t;
  uint16_t buffer__unsafe_offset=*__t1383t;
  uint16_t buffer__unsafe_align=*__t1384t;
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
  *__t1381t=buffer__unsafe_ptr;
  *__t1382t=buffer__unsafe_size;
  *__t1383t=buffer__unsafe_offset;
  *__t1384t=buffer__unsafe_align;
  *__t1385t=__t521t__unsafe_ptr;
  *__t1386t=__t521t__unsafe_size;
  *__t1387t=__t521t__unsafe_offset;
  *__t1388t=__t521t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1389t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1389t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1390t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1390t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1391t) {
  *__t1391t=to;
}

static inline __attribute__((always_inline)) void add__t503t(char* allocated, uint64_t offset, char** __t1392t) {
  char* element=0;
  char* __t504t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t504t__);
  goto __t_return;
  __t_return:
  *__t1392t=__t504t__;
}

static inline __attribute__((always_inline)) int mutget__t590t(char** __t1393t, uint64_t* __t1394t, uint16_t* __t1395t, uint16_t* __t1396t, uint64_t i, char** __t1397t) {
  char* buffer__unsafe_ptr=*__t1393t;
  uint64_t buffer__unsafe_size=*__t1394t;
  uint16_t buffer__unsafe_offset=*__t1395t;
  uint16_t buffer__unsafe_align=*__t1396t;
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
  *__t1393t=buffer__unsafe_ptr;
  *__t1394t=buffer__unsafe_size;
  *__t1395t=buffer__unsafe_offset;
  *__t1396t=buffer__unsafe_align;
  *__t1397t=__t596t__;
  
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

static inline __attribute__((always_inline)) void print__t373t(double value) {
  int __t374t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__t497t(char* allocated, uint64_t bytes, char** __t1399t) {
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
  *__t1399t=__t500t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1400t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1400t=z;
}

static inline __attribute__((always_inline)) int resize__t563t(char** __t1401t, uint64_t* __t1402t, uint16_t* __t1403t, uint16_t* __t1404t, uint64_t size, char** __t1405t, uint64_t* __t1406t, uint16_t* __t1407t, uint16_t* __t1408t) {
  char* buffer__unsafe_ptr=*__t1401t;
  uint64_t buffer__unsafe_size=*__t1402t;
  uint16_t buffer__unsafe_offset=*__t1403t;
  uint16_t buffer__unsafe_align=*__t1404t;
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
  *__t1401t=buffer__unsafe_ptr;
  *__t1402t=buffer__unsafe_size;
  *__t1403t=buffer__unsafe_offset;
  *__t1404t=buffer__unsafe_align;
  *__t1405t=buffer__unsafe_ptr;
  *__t1406t=buffer__unsafe_size;
  *__t1407t=buffer__unsafe_offset;
  *__t1408t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t1409t) {
  int __t348t__=0;
  int __t349t=0;
  int __t350t=0;
  char __t351t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t93t(x,y,&__t348t__);
  lt__t247t(x,y,&__t351t__);
  if(__t351t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1409t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t582t(char** __t1410t, uint64_t* __t1411t, uint16_t* __t1412t, uint16_t* __t1413t, char** __t1414t) {
  char* buffer__unsafe_ptr=*__t1410t;
  uint64_t buffer__unsafe_size=*__t1411t;
  uint16_t buffer__unsafe_offset=*__t1412t;
  uint16_t buffer__unsafe_align=*__t1413t;
  uint64_t __t583t=0;
  char __t584t__=0;
  uint64_t __t585t=0;
  uint64_t __t586t__=0;
  uint64_t __t587t__=0;
  uint64_t __t588t__=0;
  char* __t589t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t583t=0;
  eq__t118t(__t583t,buffer__unsafe_size,&__t584t__);
  if(__t584t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t585t=1;
  __t_errcode=sub__t347t(buffer__unsafe_size,__t585t,&__t586t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t505t(buffer__unsafe_align,&__t587t__);
  mul__t194t(__t586t__,__t587t__,&__t588t__);
  add__t503t(buffer__unsafe_ptr,__t588t__,&__t589t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1410t=buffer__unsafe_ptr;
  *__t1411t=buffer__unsafe_size;
  *__t1412t=buffer__unsafe_offset;
  *__t1413t=buffer__unsafe_align;
  *__t1414t=__t589t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Field____t_buffer____buffer__t1341t(char** __t1415t, uint64_t* __t1416t, uint16_t* __t1417t, uint16_t* __t1418t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=32;
  *__t1415t=unsafe_ptr;
  *__t1416t=unsafe_size;
  *__t1417t=unsafe_offset;
  *__t1418t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t371t(double value, const char* endl) {
  int __t372t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__t1311t(char* f) {
  double __t1312t__a__x=0;
  double __t1312t__a__y=0;
  double __t1312t__b__x=0;
  double __t1312t__b__y=0;
  double __t1315t__a__x=0;
  double __t1315t__a__y=0;
  double __t1315t__b__x=0;
  double __t1315t__b__y=0;
  double __t1317t__a__x=0;
  double __t1317t__a__y=0;
  double __t1317t__b__x=0;
  double __t1317t__b__y=0;
  double __t1319t__a__x=0;
  double __t1319t__a__y=0;
  double __t1319t__b__x=0;
  double __t1319t__b__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1312t__a__x,f,8);
  memcpy(&__t1312t__a__y,f+8,8);
  memcpy(&__t1312t__b__x,f+16,8);
  memcpy(&__t1312t__b__y,f+24,8);
  print__t371t(__t1312t__a__x,__t1313t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1315t__a__x,f,8);
  memcpy(&__t1315t__a__y,f+8,8);
  memcpy(&__t1315t__b__x,f+16,8);
  memcpy(&__t1315t__b__y,f+24,8);
  print__t371t(__t1315t__a__y,__t1313t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1317t__a__x,f,8);
  memcpy(&__t1317t__a__y,f+8,8);
  memcpy(&__t1317t__b__x,f+16,8);
  memcpy(&__t1317t__b__y,f+24,8);
  print__t371t(__t1317t__b__x,__t1313t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1319t__a__x,f,8);
  memcpy(&__t1319t__a__y,f+8,8);
  memcpy(&__t1319t__b__x,f+16,8);
  memcpy(&__t1319t__b__y,f+24,8);
  print__t373t(__t1319t__b__y);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1321t() {
  char* __t1324t__unsafe_ptr=0;
  uint64_t __t1324t__unsafe_size=0;
  uint16_t __t1324t__unsafe_offset=0;
  uint16_t __t1324t__unsafe_align=0;
  uint64_t __t1325t=0;
  char* __t1326t__unsafe_ptr=0;
  uint64_t __t1326t__unsafe_size=0;
  uint16_t __t1326t__unsafe_offset=0;
  uint16_t __t1326t__unsafe_align=0;
  uint64_t __t1327t____t510t=0;
  char __t1327t____t511t__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint16_t f__unsafe_offset=0;
  uint16_t f__unsafe_align=0;
  uint64_t __t1328t=0;
  char* __t1329t__=0;
  double __t1330t=0;
  uint64_t __t1331t=0;
  char* __t1332t__=0;
  double __t1333t__number=0;
  uint64_t __t1335t=0;
  char* __t1336t__=0;
  char* f0=0;
  double __t1337t__number=0;
  uint64_t __t1338t=0;
  char* __t1339t__unsafe_ptr=0;
  uint64_t __t1339t__unsafe_size=0;
  uint16_t __t1339t__unsafe_offset=0;
  uint16_t __t1339t__unsafe_align=0;
  char* __t1340t__=0;
  char* __t1343t__unsafe_ptr=0;
  uint64_t __t1343t__unsafe_size=0;
  uint16_t __t1343t__unsafe_offset=0;
  uint16_t __t1343t__unsafe_align=0;
  char* __t1344t__unsafe_ptr=0;
  uint64_t __t1344t__unsafe_size=0;
  uint16_t __t1344t__unsafe_offset=0;
  uint16_t __t1344t__unsafe_align=0;
  uint64_t __t1345t=0;
  char* __t1346t__unsafe_ptr=0;
  uint64_t __t1346t__unsafe_size=0;
  uint16_t __t1346t__unsafe_offset=0;
  uint16_t __t1346t__unsafe_align=0;
  uint64_t __t1347t____t510t=0;
  char __t1347t____t511t__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint16_t p__unsafe_offset=0;
  uint16_t p__unsafe_align=0;
  uint64_t __t1348t=0;
  char* __t1349t__=0;
  double __t1350t=0;
  double __t1351t=0;
  double __t1352t=0;
  double __t1353t=0;
  uint64_t __t1354t=0;
  char* __t1355t__=0;
  double __t1357t=0;
  char* __t1358t__unsafe_ptr=0;
  uint64_t __t1358t__unsafe_size=0;
  uint16_t __t1358t__unsafe_offset=0;
  uint16_t __t1358t__unsafe_align=0;
  char* __t1359t__unsafe_ptr=0;
  uint64_t __t1359t__unsafe_size=0;
  uint16_t __t1359t__unsafe_offset=0;
  uint16_t __t1359t__unsafe_align=0;
  uint64_t __t1360t=0;
  char* __t1361t__unsafe_ptr=0;
  uint64_t __t1361t__unsafe_size=0;
  uint16_t __t1361t__unsafe_offset=0;
  uint16_t __t1361t__unsafe_align=0;
  uint64_t __t1362t____t510t=0;
  char __t1362t____t511t__=0;
  char* __t1363t__=0;
  char* n=0;
  double __t1364t__number=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1322t(&__t1324t__unsafe_ptr,&__t1324t__unsafe_size,&__t1324t__unsafe_offset,&__t1324t__unsafe_align);
  __t1325t=1;
  __t_errcode=alloc__t508t(&__t1324t__unsafe_ptr,&__t1324t__unsafe_size,&__t1324t__unsafe_offset,&__t1324t__unsafe_align,__t1325t,&__t1326t__unsafe_ptr,&__t1326t__unsafe_size,&__t1326t__unsafe_offset,&__t1326t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1328t=0;
  __t_errcode=mutget__t590t(&__t1326t__unsafe_ptr,&__t1326t__unsafe_size,&__t1326t__unsafe_offset,&__t1326t__unsafe_align,__t1328t,&__t1329t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1330t=1.0;
  if(!__t1329t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1329t__,&__t1330t,8);
  __t1331t=0;
  __t_errcode=get__t597t(__t1326t__unsafe_ptr,__t1326t__unsafe_size,__t1326t__unsafe_offset,__t1326t__unsafe_align,__t1331t,&__t1332t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1332t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1333t__number,__t1332t__,8);
  print__t373t(__t1333t__number);
  __t1335t=0;
  __t_errcode=mutget__t590t(&__t1326t__unsafe_ptr,&__t1326t__unsafe_size,&__t1326t__unsafe_offset,&__t1326t__unsafe_align,__t1335t,&__t1336t__);
  if(__t_errcode){
  goto __t_failure;
  }
  f0=__t1336t__;
  if(!f0){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1337t__number,f0,8);
  __t1338t=2;
  __t_errcode=resize__t563t(&__t1326t__unsafe_ptr,&__t1326t__unsafe_size,&__t1326t__unsafe_offset,&__t1326t__unsafe_align,__t1338t,&__t1339t__unsafe_ptr,&__t1339t__unsafe_size,&__t1339t__unsafe_offset,&__t1339t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t582t(&__t1326t__unsafe_ptr,&__t1326t__unsafe_size,&__t1326t__unsafe_offset,&__t1326t__unsafe_align,&__t1340t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1340t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1340t__,&__t1337t__number,8);
  Field____t_buffer____buffer__t1341t(&__t1343t__unsafe_ptr,&__t1343t__unsafe_size,&__t1343t__unsafe_offset,&__t1343t__unsafe_align);
  __t1344t__unsafe_ptr=__t1343t__unsafe_ptr;
  __t1344t__unsafe_size=__t1343t__unsafe_size;
  __t1344t__unsafe_offset=__t1343t__unsafe_offset;
  __t1344t__unsafe_align=__t1343t__unsafe_align;
  __t1345t=1;
  __t_errcode=alloc__t508t(&__t1344t__unsafe_ptr,&__t1344t__unsafe_size,&__t1344t__unsafe_offset,&__t1344t__unsafe_align,__t1345t,&__t1346t__unsafe_ptr,&__t1346t__unsafe_size,&__t1346t__unsafe_offset,&__t1346t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t1346t__unsafe_ptr;
  p__unsafe_size=__t1346t__unsafe_size;
  p__unsafe_offset=__t1346t__unsafe_offset;
  p__unsafe_align=__t1346t__unsafe_align;
  __t1348t=0;
  __t_errcode=mutget__t590t(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_offset,&p__unsafe_align,__t1348t,&__t1349t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1350t=1.0;
  __t1351t=2.0;
  __t1352t=3.0;
  __t1353t=4.0;
  if(!__t1349t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1349t__,&__t1350t,8);
  memcpy(__t1349t__+8,&__t1351t,8);
  memcpy(__t1349t__+16,&__t1352t,8);
  memcpy(__t1349t__+24,&__t1353t,8);
  __t1354t=0;
  __t_errcode=get__t597t(p__unsafe_ptr,p__unsafe_size,p__unsafe_offset,p__unsafe_align,__t1354t,&__t1355t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1311t(__t1355t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1357t=1.0;
  float____t_buffer____buffer__t1322t(&__t1358t__unsafe_ptr,&__t1358t__unsafe_size,&__t1358t__unsafe_offset,&__t1358t__unsafe_align);
  __t1359t__unsafe_ptr=__t1358t__unsafe_ptr;
  __t1359t__unsafe_size=__t1358t__unsafe_size;
  __t1359t__unsafe_offset=__t1358t__unsafe_offset;
  __t1359t__unsafe_align=__t1358t__unsafe_align;
  __t1360t=1;
  __t_errcode=alloc__t508t(&__t1359t__unsafe_ptr,&__t1359t__unsafe_size,&__t1359t__unsafe_offset,&__t1359t__unsafe_align,__t1360t,&__t1361t__unsafe_ptr,&__t1361t__unsafe_size,&__t1361t__unsafe_offset,&__t1361t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t582t(&__t1361t__unsafe_ptr,&__t1361t__unsafe_size,&__t1361t__unsafe_offset,&__t1361t__unsafe_align,&__t1363t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1363t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1363t__,&__t1357t,8);
  n=__t1363t__;
  if(!n){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1364t__number,n,8);
  print__t373t(__t1364t__number);
  
  __t_failure:__t1362t____t510t=0;
  neq__t142t(__t1361t__unsafe_size,__t1362t____t510t,&__t1362t____t511t__);
  if(__t1362t____t511t__){
  __t1361t__unsafe_size=0;
  __t1361t__unsafe_size=__t1361t__unsafe_size;
  __t1361t__unsafe_ptr=__t1361t__unsafe_ptr;
  free__t501t(&__t1361t__unsafe_ptr);
  }
  __t1347t____t510t=0;
  neq__t142t(__t1346t__unsafe_size,__t1347t____t510t,&__t1347t____t511t__);
  if(__t1347t____t511t__){
  __t1346t__unsafe_size=0;
  __t1346t__unsafe_size=__t1346t__unsafe_size;
  __t1346t__unsafe_ptr=__t1346t__unsafe_ptr;
  free__t501t(&__t1346t__unsafe_ptr);
  }
  __t1327t____t510t=0;
  neq__t142t(__t1326t__unsafe_size,__t1327t____t510t,&__t1327t____t511t__);
  if(__t1327t____t511t__){
  __t1326t__unsafe_size=0;
  __t1326t__unsafe_size=__t1326t__unsafe_size;
  __t1326t__unsafe_ptr=__t1326t__unsafe_ptr;
  free__t501t(&__t1326t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1321t();return 0;}