#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1329t=",";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1338t(char** __t1382t, uint64_t* __t1383t, uint16_t* __t1384t, uint16_t* __t1385t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1382t=unsafe_ptr;
  *__t1383t=unsafe_size;
  *__t1384t=unsafe_offset;
  *__t1385t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1386t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1386t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1387t) {
  char* allocated=*__t1387t;
  if(allocated){
  free(allocated);
  }
  *__t1387t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1388t) {
  int value=0;
  *__t1388t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1389t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1389t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1390t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1390t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1391t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1391t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1392t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1392t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1393t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1393t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1394t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1394t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1395t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1395t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1396t) {
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
  *__t1396t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1397t, uint64_t* __t1398t, uint16_t* __t1399t, uint16_t* __t1400t, uint64_t size, char** __t1401t, uint64_t* __t1402t, uint16_t* __t1403t, uint16_t* __t1404t) {
  char* buffer__unsafe_ptr=*__t1397t;
  uint64_t buffer__unsafe_size=*__t1398t;
  uint16_t buffer__unsafe_offset=*__t1399t;
  uint16_t buffer__unsafe_align=*__t1400t;
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
  *__t1397t=buffer__unsafe_ptr;
  *__t1398t=buffer__unsafe_size;
  *__t1399t=buffer__unsafe_offset;
  *__t1400t=buffer__unsafe_align;
  *__t1401t=__t520t__unsafe_ptr;
  *__t1402t=__t520t__unsafe_size;
  *__t1403t=__t520t__unsafe_offset;
  *__t1404t=__t520t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1405t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1405t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1406t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1406t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1407t) {
  *__t1407t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1408t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1408t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t588t(char** __t1409t, uint64_t* __t1410t, uint16_t* __t1411t, uint16_t* __t1412t, uint64_t i, char** __t1413t) {
  char* buffer__unsafe_ptr=*__t1409t;
  uint64_t buffer__unsafe_size=*__t1410t;
  uint16_t buffer__unsafe_offset=*__t1411t;
  uint16_t buffer__unsafe_align=*__t1412t;
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
  *__t1409t=buffer__unsafe_ptr;
  *__t1410t=buffer__unsafe_size;
  *__t1411t=buffer__unsafe_offset;
  *__t1412t=buffer__unsafe_align;
  *__t1413t=__t594t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t595t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1414t) {
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
  *__t1414t=__t601t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__t498t(char* allocated, uint64_t bytes, char** __t1415t) {
  char* new_allocated=0;
  char __t499t__=0;
  char __t500t__=0;
  char* __t501t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t436t(new_allocated,&__t499t__);
  not__t27t(__t499t__,&__t500t__);
  if(__t500t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t21t(new_allocated,allocated,&__t501t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1415t=__t501t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1416t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1416t=z;
}

static inline __attribute__((always_inline)) int resize__t561t(char** __t1417t, uint64_t* __t1418t, uint16_t* __t1419t, uint16_t* __t1420t, uint64_t size, char** __t1421t, uint64_t* __t1422t, uint16_t* __t1423t, uint16_t* __t1424t) {
  char* buffer__unsafe_ptr=*__t1417t;
  uint64_t buffer__unsafe_size=*__t1418t;
  uint16_t buffer__unsafe_offset=*__t1419t;
  uint16_t buffer__unsafe_align=*__t1420t;
  char __t562t__=0;
  uint64_t __t563t=0;
  char __t564t__=0;
  uint64_t __t565t__=0;
  uint64_t __t566t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t567t__=0;
  uint64_t __t568t__=0;
  uint64_t bytes=0;
  char* __t569t__=0;
  char __t570t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(buffer__unsafe_size,size,&__t562t__);
  if(__t562t__){
  goto __t_return;
  }
  __t563t=0;
  eq__t119t(buffer__unsafe_size,__t563t,&__t564t__);
  if(__t564t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t565t__);
  mul__t195t(buffer__unsafe_size,__t565t__,&__t566t__);
  prev_bytes=__t566t__;
  buffer__unsafe_size=size;
  nat__t506t(buffer__unsafe_align,&__t567t__);
  mul__t195t(__t567t__,size,&__t568t__);
  bytes=__t568t__;
  __t_errcode=realloc__t498t(buffer__unsafe_ptr,bytes,&__t569t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t569t__;
  lt__t248t(prev_bytes,bytes,&__t570t__);
  if(__t570t__){
  zero__t503t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1417t=buffer__unsafe_ptr;
  *__t1418t=buffer__unsafe_size;
  *__t1419t=buffer__unsafe_offset;
  *__t1420t=buffer__unsafe_align;
  *__t1421t=buffer__unsafe_ptr;
  *__t1422t=buffer__unsafe_size;
  *__t1423t=buffer__unsafe_offset;
  *__t1424t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t1425t) {
  int __t349t__=0;
  int __t350t=0;
  int __t351t=0;
  char __t352t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t349t__);
  lt__t248t(x,y,&__t352t__);
  if(__t352t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1425t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t580t(char** __t1426t, uint64_t* __t1427t, uint16_t* __t1428t, uint16_t* __t1429t, char** __t1430t) {
  char* buffer__unsafe_ptr=*__t1426t;
  uint64_t buffer__unsafe_size=*__t1427t;
  uint16_t buffer__unsafe_offset=*__t1428t;
  uint16_t buffer__unsafe_align=*__t1429t;
  uint64_t __t581t=0;
  char __t582t__=0;
  uint64_t __t583t=0;
  uint64_t __t584t__=0;
  uint64_t __t585t__=0;
  uint64_t __t586t__=0;
  char* __t587t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t581t=0;
  eq__t119t(__t581t,buffer__unsafe_size,&__t582t__);
  if(__t582t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t583t=1;
  __t_errcode=sub__t348t(buffer__unsafe_size,__t583t,&__t584t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t585t__);
  mul__t195t(__t584t__,__t585t__,&__t586t__);
  add__t504t(buffer__unsafe_ptr,__t586t__,&__t587t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1426t=buffer__unsafe_ptr;
  *__t1427t=buffer__unsafe_size;
  *__t1428t=buffer__unsafe_offset;
  *__t1429t=buffer__unsafe_align;
  *__t1430t=__t587t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Field____t_buffer____buffer__t1357t(char** __t1431t, uint64_t* __t1432t, uint16_t* __t1433t, uint16_t* __t1434t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=32;
  *__t1431t=unsafe_ptr;
  *__t1432t=unsafe_size;
  *__t1433t=unsafe_offset;
  *__t1434t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t372t(double value, const char* endl) {
  int __t373t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__t1327t(char* f) {
  double __t1328t__a__x=0;
  double __t1328t__a__y=0;
  double __t1328t__b__x=0;
  double __t1328t__b__y=0;
  double __t1331t__a__x=0;
  double __t1331t__a__y=0;
  double __t1331t__b__x=0;
  double __t1331t__b__y=0;
  double __t1333t__a__x=0;
  double __t1333t__a__y=0;
  double __t1333t__b__x=0;
  double __t1333t__b__y=0;
  double __t1335t__a__x=0;
  double __t1335t__a__y=0;
  double __t1335t__b__x=0;
  double __t1335t__b__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1328t__a__x,f,8);
  memcpy(&__t1328t__a__y,f+8,8);
  memcpy(&__t1328t__b__x,f+16,8);
  memcpy(&__t1328t__b__y,f+24,8);
  print__t372t(__t1328t__a__x,__t1329t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1331t__a__x,f,8);
  memcpy(&__t1331t__a__y,f+8,8);
  memcpy(&__t1331t__b__x,f+16,8);
  memcpy(&__t1331t__b__y,f+24,8);
  print__t372t(__t1331t__a__y,__t1329t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1333t__a__x,f,8);
  memcpy(&__t1333t__a__y,f+8,8);
  memcpy(&__t1333t__b__x,f+16,8);
  memcpy(&__t1333t__b__y,f+24,8);
  print__t372t(__t1333t__b__x,__t1329t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1335t__a__x,f,8);
  memcpy(&__t1335t__a__y,f+8,8);
  memcpy(&__t1335t__b__x,f+16,8);
  memcpy(&__t1335t__b__y,f+24,8);
  print__t374t(__t1335t__b__y);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1337t() {
  char* __t1340t__unsafe_ptr=0;
  uint64_t __t1340t__unsafe_size=0;
  uint16_t __t1340t__unsafe_offset=0;
  uint16_t __t1340t__unsafe_align=0;
  uint64_t __t1341t=0;
  char* __t1342t__unsafe_ptr=0;
  uint64_t __t1342t__unsafe_size=0;
  uint16_t __t1342t__unsafe_offset=0;
  uint16_t __t1342t__unsafe_align=0;
  char __t1343t____t511t__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint16_t f__unsafe_offset=0;
  uint16_t f__unsafe_align=0;
  uint64_t __t1344t=0;
  char* __t1345t__=0;
  double __t1346t=0;
  uint64_t __t1347t=0;
  char* __t1348t__=0;
  double __t1349t__value=0;
  uint64_t __t1351t=0;
  char* __t1352t__=0;
  char* f0=0;
  double __t1353t__value=0;
  uint64_t __t1354t=0;
  char* __t1355t__unsafe_ptr=0;
  uint64_t __t1355t__unsafe_size=0;
  uint16_t __t1355t__unsafe_offset=0;
  uint16_t __t1355t__unsafe_align=0;
  char* __t1356t__=0;
  char* __t1359t__unsafe_ptr=0;
  uint64_t __t1359t__unsafe_size=0;
  uint16_t __t1359t__unsafe_offset=0;
  uint16_t __t1359t__unsafe_align=0;
  char* __t1360t__unsafe_ptr=0;
  uint64_t __t1360t__unsafe_size=0;
  uint16_t __t1360t__unsafe_offset=0;
  uint16_t __t1360t__unsafe_align=0;
  uint64_t __t1361t=0;
  char* __t1362t__unsafe_ptr=0;
  uint64_t __t1362t__unsafe_size=0;
  uint16_t __t1362t__unsafe_offset=0;
  uint16_t __t1362t__unsafe_align=0;
  char __t1363t____t511t__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint16_t p__unsafe_offset=0;
  uint16_t p__unsafe_align=0;
  uint64_t __t1364t=0;
  char* __t1365t__=0;
  double __t1366t=0;
  double __t1367t=0;
  double __t1368t=0;
  double __t1369t=0;
  uint64_t __t1370t=0;
  char* __t1371t__=0;
  double __t1373t=0;
  char* __t1374t__unsafe_ptr=0;
  uint64_t __t1374t__unsafe_size=0;
  uint16_t __t1374t__unsafe_offset=0;
  uint16_t __t1374t__unsafe_align=0;
  char* __t1375t__unsafe_ptr=0;
  uint64_t __t1375t__unsafe_size=0;
  uint16_t __t1375t__unsafe_offset=0;
  uint16_t __t1375t__unsafe_align=0;
  uint64_t __t1376t=0;
  char* __t1377t__unsafe_ptr=0;
  uint64_t __t1377t__unsafe_size=0;
  uint16_t __t1377t__unsafe_offset=0;
  uint16_t __t1377t__unsafe_align=0;
  char __t1378t____t511t__=0;
  char* __t1379t__=0;
  char* n=0;
  double __t1380t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1338t(&__t1340t__unsafe_ptr,&__t1340t__unsafe_size,&__t1340t__unsafe_offset,&__t1340t__unsafe_align);
  __t1341t=1;
  __t_errcode=alloc__t509t(&__t1340t__unsafe_ptr,&__t1340t__unsafe_size,&__t1340t__unsafe_offset,&__t1340t__unsafe_align,__t1341t,&__t1342t__unsafe_ptr,&__t1342t__unsafe_size,&__t1342t__unsafe_offset,&__t1342t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1344t=0;
  __t_errcode=mutget__t588t(&__t1342t__unsafe_ptr,&__t1342t__unsafe_size,&__t1342t__unsafe_offset,&__t1342t__unsafe_align,__t1344t,&__t1345t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1346t=1.0;
  if(!__t1345t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1345t__,&__t1346t,8);
  __t1347t=0;
  __t_errcode=get__t595t(__t1342t__unsafe_ptr,__t1342t__unsafe_size,__t1342t__unsafe_offset,__t1342t__unsafe_align,__t1347t,&__t1348t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1348t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1349t__value,__t1348t__,8);
  print__t374t(__t1349t__value);
  __t1351t=0;
  __t_errcode=mutget__t588t(&__t1342t__unsafe_ptr,&__t1342t__unsafe_size,&__t1342t__unsafe_offset,&__t1342t__unsafe_align,__t1351t,&__t1352t__);
  if(__t_errcode){
  goto __t_failure;
  }
  f0=__t1352t__;
  if(!f0){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1353t__value,f0,8);
  __t1354t=2;
  __t_errcode=resize__t561t(&__t1342t__unsafe_ptr,&__t1342t__unsafe_size,&__t1342t__unsafe_offset,&__t1342t__unsafe_align,__t1354t,&__t1355t__unsafe_ptr,&__t1355t__unsafe_size,&__t1355t__unsafe_offset,&__t1355t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t580t(&__t1342t__unsafe_ptr,&__t1342t__unsafe_size,&__t1342t__unsafe_offset,&__t1342t__unsafe_align,&__t1356t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1356t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1356t__,&__t1353t__value,8);
  Field____t_buffer____buffer__t1357t(&__t1359t__unsafe_ptr,&__t1359t__unsafe_size,&__t1359t__unsafe_offset,&__t1359t__unsafe_align);
  __t1360t__unsafe_ptr=__t1359t__unsafe_ptr;
  __t1360t__unsafe_size=__t1359t__unsafe_size;
  __t1360t__unsafe_offset=__t1359t__unsafe_offset;
  __t1360t__unsafe_align=__t1359t__unsafe_align;
  __t1361t=1;
  __t_errcode=alloc__t509t(&__t1360t__unsafe_ptr,&__t1360t__unsafe_size,&__t1360t__unsafe_offset,&__t1360t__unsafe_align,__t1361t,&__t1362t__unsafe_ptr,&__t1362t__unsafe_size,&__t1362t__unsafe_offset,&__t1362t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t1362t__unsafe_ptr;
  p__unsafe_size=__t1362t__unsafe_size;
  p__unsafe_offset=__t1362t__unsafe_offset;
  p__unsafe_align=__t1362t__unsafe_align;
  __t1364t=0;
  __t_errcode=mutget__t588t(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_offset,&p__unsafe_align,__t1364t,&__t1365t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1366t=1.0;
  __t1367t=2.0;
  __t1368t=3.0;
  __t1369t=4.0;
  if(!__t1365t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1365t__,&__t1366t,8);
  memcpy(__t1365t__+8,&__t1367t,8);
  memcpy(__t1365t__+16,&__t1368t,8);
  memcpy(__t1365t__+24,&__t1369t,8);
  __t1370t=0;
  __t_errcode=get__t595t(p__unsafe_ptr,p__unsafe_size,p__unsafe_offset,p__unsafe_align,__t1370t,&__t1371t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1327t(__t1371t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1373t=1.0;
  float____t_buffer____buffer__t1338t(&__t1374t__unsafe_ptr,&__t1374t__unsafe_size,&__t1374t__unsafe_offset,&__t1374t__unsafe_align);
  __t1375t__unsafe_ptr=__t1374t__unsafe_ptr;
  __t1375t__unsafe_size=__t1374t__unsafe_size;
  __t1375t__unsafe_offset=__t1374t__unsafe_offset;
  __t1375t__unsafe_align=__t1374t__unsafe_align;
  __t1376t=1;
  __t_errcode=alloc__t509t(&__t1375t__unsafe_ptr,&__t1375t__unsafe_size,&__t1375t__unsafe_offset,&__t1375t__unsafe_align,__t1376t,&__t1377t__unsafe_ptr,&__t1377t__unsafe_size,&__t1377t__unsafe_offset,&__t1377t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t580t(&__t1377t__unsafe_ptr,&__t1377t__unsafe_size,&__t1377t__unsafe_offset,&__t1377t__unsafe_align,&__t1379t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1379t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1379t__,&__t1373t,8);
  n=__t1379t__;
  if(!n){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1380t__value,n,8);
  print__t374t(__t1380t__value);
  
  __t_failure:exists__t436t(__t1377t__unsafe_ptr,&__t1378t____t511t__);
  if(__t1378t____t511t__){
  __t1377t__unsafe_ptr=__t1377t__unsafe_ptr;
  free__t502t(&__t1377t__unsafe_ptr);
  }
  exists__t436t(__t1362t__unsafe_ptr,&__t1363t____t511t__);
  if(__t1363t____t511t__){
  __t1362t__unsafe_ptr=__t1362t__unsafe_ptr;
  free__t502t(&__t1362t__unsafe_ptr);
  }
  exists__t436t(__t1342t__unsafe_ptr,&__t1343t____t511t__);
  if(__t1343t____t511t__){
  __t1342t__unsafe_ptr=__t1342t__unsafe_ptr;
  free__t502t(&__t1342t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1337t();return 0;}