#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1322t(char** __t1342t, uint64_t* __t1343t, uint16_t* __t1344t, uint16_t* __t1345t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1342t=unsafe_ptr;
  *__t1343t=unsafe_size;
  *__t1344t=unsafe_offset;
  *__t1345t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1346t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1346t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1347t) {
  char* allocated=*__t1347t;
  if(allocated){
  free(allocated);
  }
  *__t1347t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1348t) {
  int value=0;
  *__t1348t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1349t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1349t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1350t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1350t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1351t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1351t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1352t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1352t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1353t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1353t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1354t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1354t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1355t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1355t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1356t) {
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
  *__t1356t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1357t, uint64_t* __t1358t, uint16_t* __t1359t, uint16_t* __t1360t, uint64_t size, char** __t1361t, uint64_t* __t1362t, uint16_t* __t1363t, uint16_t* __t1364t) {
  char* buffer__unsafe_ptr=*__t1357t;
  uint64_t buffer__unsafe_size=*__t1358t;
  uint16_t buffer__unsafe_offset=*__t1359t;
  uint16_t buffer__unsafe_align=*__t1360t;
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
  *__t1357t=buffer__unsafe_ptr;
  *__t1358t=buffer__unsafe_size;
  *__t1359t=buffer__unsafe_offset;
  *__t1360t=buffer__unsafe_align;
  *__t1361t=buffer__unsafe_ptr;
  *__t1362t=buffer__unsafe_size;
  *__t1363t=buffer__unsafe_offset;
  *__t1364t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1365t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1365t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1366t) {
  *__t1366t=to;
}

static inline __attribute__((always_inline)) int realloc__t498t(char* allocated, uint64_t bytes, char** __t1367t) {
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
  *__t1367t=__t501t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1368t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1368t=z;
}

static inline __attribute__((always_inline)) int resize__t557t(char** __t1369t, uint64_t* __t1370t, uint16_t* __t1371t, uint16_t* __t1372t, uint64_t size, char** __t1373t, uint64_t* __t1374t, uint16_t* __t1375t, uint16_t* __t1376t) {
  char* buffer__unsafe_ptr=*__t1369t;
  uint64_t buffer__unsafe_size=*__t1370t;
  uint16_t buffer__unsafe_offset=*__t1371t;
  uint16_t buffer__unsafe_align=*__t1372t;
  char __t558t__=0;
  uint64_t __t559t=0;
  char __t560t__=0;
  uint64_t __t561t__=0;
  uint64_t __t562t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t563t__=0;
  uint64_t __t564t__=0;
  uint64_t bytes=0;
  char* __t565t__=0;
  char __t566t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(buffer__unsafe_size,size,&__t558t__);
  if(__t558t__){
  goto __t_return;
  }
  __t559t=0;
  eq__t119t(buffer__unsafe_size,__t559t,&__t560t__);
  if(__t560t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t561t__);
  mul__t195t(buffer__unsafe_size,__t561t__,&__t562t__);
  prev_bytes=__t562t__;
  buffer__unsafe_size=size;
  nat__t506t(buffer__unsafe_align,&__t563t__);
  mul__t195t(__t563t__,size,&__t564t__);
  bytes=__t564t__;
  __t_errcode=realloc__t498t(buffer__unsafe_ptr,bytes,&__t565t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t565t__;
  lt__t248t(prev_bytes,bytes,&__t566t__);
  if(__t566t__){
  zero__t503t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1369t=buffer__unsafe_ptr;
  *__t1370t=buffer__unsafe_size;
  *__t1371t=buffer__unsafe_offset;
  *__t1372t=buffer__unsafe_align;
  *__t1373t=buffer__unsafe_ptr;
  *__t1374t=buffer__unsafe_size;
  *__t1375t=buffer__unsafe_offset;
  *__t1376t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1377t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1377t=z;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1378t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1378t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t584t(char** __t1379t, uint64_t* __t1380t, uint16_t* __t1381t, uint16_t* __t1382t, uint64_t i, char** __t1383t) {
  char* buffer__unsafe_ptr=*__t1379t;
  uint64_t buffer__unsafe_size=*__t1380t;
  uint16_t buffer__unsafe_offset=*__t1381t;
  uint16_t buffer__unsafe_align=*__t1382t;
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
  *__t1379t=buffer__unsafe_ptr;
  *__t1380t=buffer__unsafe_size;
  *__t1381t=buffer__unsafe_offset;
  *__t1382t=buffer__unsafe_align;
  *__t1383t=__t590t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1384t) {
  goto __t_return;
  __t_return:
  *__t1384t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t382t(uint64_t value) {
  int __t383t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1385t) {
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
  *__t1385t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1321t() {
  char* __t1324t__unsafe_ptr=0;
  uint64_t __t1324t__unsafe_size=0;
  uint16_t __t1324t__unsafe_offset=0;
  uint16_t __t1324t__unsafe_align=0;
  char* __t1325t__unsafe_ptr=0;
  uint64_t __t1325t__unsafe_size=0;
  uint16_t __t1325t__unsafe_offset=0;
  uint16_t __t1325t__unsafe_align=0;
  char* buf1__unsafe_ptr=0;
  uint64_t buf1__unsafe_size=0;
  uint16_t buf1__unsafe_offset=0;
  uint16_t buf1__unsafe_align=0;
  uint64_t __t1326t=0;
  char* __t1327t__unsafe_ptr=0;
  uint64_t __t1327t__unsafe_size=0;
  uint16_t __t1327t__unsafe_offset=0;
  uint16_t __t1327t__unsafe_align=0;
  char __t1328t____t511t__=0;
  uint64_t __t1329t=0;
  char* __t1330t__unsafe_ptr=0;
  uint64_t __t1330t__unsafe_size=0;
  uint16_t __t1330t__unsafe_offset=0;
  uint16_t __t1330t__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  uint64_t buf2__unsafe_size=0;
  uint16_t buf2__unsafe_offset=0;
  uint16_t buf2__unsafe_align=0;
  uint64_t __t1331t=0;
  char* __t1332t__=0;
  double __t1333t=0;
  uint64_t __t1334t__=0;
  uint64_t __t1336t__=0;
  uint64_t __t1338t=0;
  char* __t1339t__=0;
  double __t1340t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1322t(&__t1324t__unsafe_ptr,&__t1324t__unsafe_size,&__t1324t__unsafe_offset,&__t1324t__unsafe_align);
  __t1325t__unsafe_ptr=__t1324t__unsafe_ptr;
  __t1325t__unsafe_size=__t1324t__unsafe_size;
  __t1325t__unsafe_offset=__t1324t__unsafe_offset;
  __t1325t__unsafe_align=__t1324t__unsafe_align;
  __t1326t=20;
  __t_errcode=alloc__t509t(&__t1325t__unsafe_ptr,&__t1325t__unsafe_size,&__t1325t__unsafe_offset,&__t1325t__unsafe_align,__t1326t,&__t1327t__unsafe_ptr,&__t1327t__unsafe_size,&__t1327t__unsafe_offset,&__t1327t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1329t=10;
  __t_errcode=resize__t557t(&__t1325t__unsafe_ptr,&__t1325t__unsafe_size,&__t1325t__unsafe_offset,&__t1325t__unsafe_align,__t1329t,&__t1330t__unsafe_ptr,&__t1330t__unsafe_size,&__t1330t__unsafe_offset,&__t1330t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1331t=0;
  __t_errcode=mutget__t584t(&__t1325t__unsafe_ptr,&__t1325t__unsafe_size,&__t1325t__unsafe_offset,&__t1325t__unsafe_align,__t1331t,&__t1332t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1333t=1.0;
  if(!__t1332t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1332t__,&__t1333t,8);
  len__t598t(__t1325t__unsafe_ptr,__t1325t__unsafe_size,__t1325t__unsafe_offset,__t1325t__unsafe_align,&__t1334t__);
  print__t382t(__t1325t__unsafe_size);
  len__t598t(__t1325t__unsafe_ptr,__t1325t__unsafe_size,__t1325t__unsafe_offset,__t1325t__unsafe_align,&__t1336t__);
  print__t382t(__t1325t__unsafe_size);
  __t1338t=0;
  __t_errcode=get__t591t(__t1325t__unsafe_ptr,__t1325t__unsafe_size,__t1325t__unsafe_offset,__t1325t__unsafe_align,__t1338t,&__t1339t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1339t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1340t__value,__t1339t__,8);
  print__t374t(__t1340t__value);
  
  __t_failure:exists__t436t(__t1327t__unsafe_ptr,&__t1328t____t511t__);
  if(__t1328t____t511t__){
  free__t502t(&__t1327t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1321t();return 0;}