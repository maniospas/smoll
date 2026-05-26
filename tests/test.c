#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t371t="\n";
const char* const __t1331t="test";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1324t(char** __t1336t, uint64_t* __t1337t, uint16_t* __t1338t, uint16_t* __t1339t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1336t=unsafe_ptr;
  *__t1337t=unsafe_size;
  *__t1338t=unsafe_offset;
  *__t1339t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1340t) {
  int value=0;
  *__t1340t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1341t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1341t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1342t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1342t=__t96t__;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t1343t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1343t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t1344t) {
  char* allocated=*__t1344t;
  if(allocated){
  free(allocated);
  }
  *__t1344t=allocated;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t1345t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1345t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t1346t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1346t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t1347t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1347t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t1348t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1348t=z;
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t1349t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1349t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t1350t) {
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
  *__t1350t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t1351t, uint64_t* __t1352t, uint16_t* __t1353t, uint16_t* __t1354t, uint64_t size, char** __t1355t, uint64_t* __t1356t, uint16_t* __t1357t, uint16_t* __t1358t) {
  char* buffer__unsafe_ptr=*__t1351t;
  uint64_t buffer__unsafe_size=*__t1352t;
  uint16_t buffer__unsafe_offset=*__t1353t;
  uint16_t buffer__unsafe_align=*__t1354t;
  int __t510t=0;
  uint64_t __t511t=0;
  char __t512t__=0;
  uint64_t __t513t=0;
  char* ptr=0;
  char __t515t__=0;
  uint64_t __t516t=0;
  char __t517t__=0;
  uint64_t __t518t=0;
  uint64_t __t519t__=0;
  uint64_t __t520t__=0;
  char* __t522t__unsafe_ptr=0;
  uint64_t __t522t__unsafe_size=0;
  uint16_t __t522t__unsafe_offset=0;
  uint16_t __t522t__unsafe_align=0;
  uint64_t __t523t=0;
  char __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t __t526t__=0;
  uint64_t bytes=0;
  uint64_t __t527t=0;
  char __t528t__=0;
  char* __t529t__=0;
  uint64_t __t530t=0;
  char* __t532t__unsafe_ptr=0;
  uint64_t __t532t__unsafe_size=0;
  uint16_t __t532t__unsafe_offset=0;
  uint16_t __t532t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t515t__);
  if(__t515t__){
  __t516t=0;
  neq__t143t(size,__t516t,&__t517t__);
  if(__t517t__){
  __t518t=0;
  nat__t506t(buffer__unsafe_align,&__t519t__);
  mul__t195t(__t519t__,size,&__t520t__);
  zero__t503t(buffer__unsafe_ptr,__t518t,__t520t__);
  }
  __t522t__unsafe_ptr=buffer__unsafe_ptr;
  __t522t__unsafe_size=buffer__unsafe_size;
  __t522t__unsafe_offset=buffer__unsafe_offset;
  __t522t__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  }
  __t523t=0;
  neq__t143t(buffer__unsafe_size,__t523t,&__t524t__);
  if(__t524t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t525t__);
  mul__t195t(__t525t__,size,&__t526t__);
  bytes=__t526t__;
  __t527t=0;
  eq__t119t(bytes,__t527t,&__t528t__);
  if(__t528t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t495t(bytes,&__t529t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t529t__;
  __t530t=0;
  zero__t503t(buffer__unsafe_ptr,__t530t,bytes);
  __t532t__unsafe_ptr=buffer__unsafe_ptr;
  __t532t__unsafe_size=buffer__unsafe_size;
  __t532t__unsafe_offset=buffer__unsafe_offset;
  __t532t__unsafe_align=buffer__unsafe_align;
  __t522t__unsafe_ptr=__t532t__unsafe_ptr;
  __t522t__unsafe_size=__t532t__unsafe_size;
  __t522t__unsafe_offset=__t532t__unsafe_offset;
  __t522t__unsafe_align=__t532t__unsafe_align;
  goto __t_return;
  
  __t_failure:__t511t=0;
  neq__t143t(__t522t__unsafe_size,__t511t,&__t512t__);
  if(__t512t__){
  __t522t__unsafe_size=0;
  __t522t__unsafe_size=__t522t__unsafe_size;
  __t522t__unsafe_ptr=__t522t__unsafe_ptr;
  free__t502t(&__t522t__unsafe_ptr);
  }
  __t_return:
  *__t1351t=buffer__unsafe_ptr;
  *__t1352t=buffer__unsafe_size;
  *__t1353t=buffer__unsafe_offset;
  *__t1354t=buffer__unsafe_align;
  *__t1355t=__t522t__unsafe_ptr;
  *__t1356t=__t522t__unsafe_size;
  *__t1357t=__t522t__unsafe_offset;
  *__t1358t=__t522t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bufpos__t722t(char** __t1359t, uint64_t* __t1360t, uint16_t* __t1361t, uint16_t* __t1362t, char** __t1363t, uint64_t* __t1364t, uint16_t* __t1365t, uint16_t* __t1366t, uint64_t* __t1367t) {
  char* buf__unsafe_ptr=*__t1359t;
  uint64_t buf__unsafe_size=*__t1360t;
  uint16_t buf__unsafe_offset=*__t1361t;
  uint16_t buf__unsafe_align=*__t1362t;
  uint64_t __t723t=0;
  uint64_t __t724t=0;
  uint64_t pos=0;
  __t723t=0;
  __t724t=__t723t;
  pos=__t724t;
  goto __t_return;
  __t_return:
  *__t1359t=buf__unsafe_ptr;
  *__t1360t=buf__unsafe_size;
  *__t1361t=buf__unsafe_offset;
  *__t1362t=buf__unsafe_align;
  *__t1363t=buf__unsafe_ptr;
  *__t1364t=buf__unsafe_size;
  *__t1365t=buf__unsafe_offset;
  *__t1366t=buf__unsafe_align;
  *__t1367t=pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t559t(char** __t1368t, uint64_t* __t1369t, uint16_t* __t1370t, uint16_t* __t1371t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1368t=unsafe_ptr;
  *__t1369t=unsafe_size;
  *__t1370t=unsafe_offset;
  *__t1371t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, const char* from, char** __t1372t) {
  *__t1372t=to;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1373t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1373t=z;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1374t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1374t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t1375t) {
  *__t1375t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t1376t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t1376t=__t505t__;
}

static inline __attribute__((always_inline)) int get__t598t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1377t) {
  char __t599t__=0;
  uint64_t __t600t__=0;
  uint64_t __t601t__=0;
  uint64_t __t602t__=0;
  uint64_t __t603t__=0;
  char* __t604t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t599t__);
  if(__t599t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t600t__);
  mul__t195t(i,__t600t__,&__t601t__);
  nat__t506t(buffer__unsafe_offset,&__t602t__);
  add__t171t(__t601t__,__t602t__,&__t603t__);
  add__t504t(buffer__unsafe_ptr,__t603t__,&__t604t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1377t=__t604t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t633t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1378t, uint64_t* __t1379t, uint64_t* __t1380t, char* __t1381t) {
  goto __t_return;
  __t_return:
  *__t1378t=unsafe_ptr;
  *__t1379t=dat__pos;
  *__t1380t=dat__length;
  *__t1381t=dat__first;
}

static inline __attribute__((always_inline)) int str__t637t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1382t, uint64_t* __t1383t, uint64_t* __t1384t, char* __t1385t) {
  char* unsafe_ptr=0;
  uint64_t __t638t__=0;
  uint64_t __t639t=0;
  char __t640t__=0;
  uint64_t __t641t__=0;
  uint64_t __t642t=0;
  char __t643t__=0;
  char* __t644t__unsafe_ptr=0;
  uint64_t __t644t__dat__pos=0;
  uint64_t __t644t__dat__length=0;
  char __t644t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t506t(buf__unsafe_align,&__t638t__);
  __t639t=1;
  neq__t143t(__t638t__,__t639t,&__t640t__);
  if(__t640t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t506t(buf__unsafe_offset,&__t641t__);
  __t642t=0;
  neq__t143t(__t641t__,__t642t,&__t643t__);
  if(__t643t__){
  __t_errcode=17;
  goto __t_failure;
  }
  str__t633t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t644t__unsafe_ptr,&__t644t__dat__pos,&__t644t__dat__length,&__t644t__dat__first);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1382t=__t644t__unsafe_ptr;
  *__t1383t=__t644t__dat__pos;
  *__t1384t=__t644t__dat__length;
  *__t1385t=__t644t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t669t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1386t, uint64_t* __t1387t, uint64_t* __t1388t, char* __t1389t) {
  uint64_t __t670t=0;
  char __t671t__=0;
  char* __t672t__=0;
  char __t673t__value=0;
  char first=0;
  char* __t674t__unsafe_ptr=0;
  uint64_t __t674t__dat__pos=0;
  uint64_t __t674t__dat__length=0;
  char __t674t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t670t=0;
  neq__t143t(length,__t670t,&__t671t__);
  if(__t671t__){
  __t_errcode=get__t598t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t672t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t672t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t673t__value,__t672t__,1);
  first=__t673t__value;
  }
  __t_errcode=str__t637t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t674t__unsafe_ptr,&__t674t__dat__pos,&__t674t__dat__length,&__t674t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1386t=__t674t__unsafe_ptr;
  *__t1387t=__t674t__dat__pos;
  *__t1388t=__t674t__dat__length;
  *__t1389t=__t674t__dat__first;
  
  return __t_errcode;
}

int str__t675t(const char* c, char** __t1390t, uint64_t* __t1391t, uint64_t* __t1392t, char* __t1393t) {
  char* __t676t__unsafe_ptr=0;
  uint64_t __t676t__unsafe_size=0;
  uint16_t __t676t__unsafe_offset=0;
  uint16_t __t676t__unsafe_align=0;
  char* __t677t__unsafe_ptr=0;
  uint64_t __t677t__unsafe_size=0;
  uint16_t __t677t__unsafe_offset=0;
  uint16_t __t677t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t678t__=0;
  uint64_t length=0;
  uint64_t __t679t=0;
  uint64_t __t680t__=0;
  uint64_t __t681t=0;
  char* __t682t__unsafe_ptr=0;
  uint64_t __t682t__dat__pos=0;
  uint64_t __t682t__dat__length=0;
  char __t682t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t559t(&__t676t__unsafe_ptr,&__t676t__unsafe_size,&__t676t__unsafe_offset,&__t676t__unsafe_align);
  __t677t__unsafe_ptr=__t676t__unsafe_ptr;
  __t677t__unsafe_size=__t676t__unsafe_size;
  __t677t__unsafe_offset=__t676t__unsafe_offset;
  __t677t__unsafe_align=__t676t__unsafe_align;
  buf__unsafe_ptr=__t677t__unsafe_ptr;
  buf__unsafe_size=__t677t__unsafe_size;
  buf__unsafe_offset=__t677t__unsafe_offset;
  buf__unsafe_align=__t677t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t22t(buf__unsafe_ptr,c,&__t678t__);
  buf__unsafe_ptr=__t678t__;
  if(c){
  length=strlen(c);
  }
  __t679t=1;
  add__t171t(length,__t679t,&__t680t__);
  buf__unsafe_size=__t680t__;
  __t681t=0;
  __t_errcode=str__t669t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t681t,length,&__t682t__unsafe_ptr,&__t682t__dat__pos,&__t682t__dat__length,&__t682t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1390t=__t682t__unsafe_ptr;
  *__t1391t=__t682t__dat__pos;
  *__t1392t=__t682t__dat__length;
  *__t1393t=__t682t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t683t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1394t) {
  goto __t_return;
  __t_return:
  *__t1394t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t605t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1395t) {
  goto __t_return;
  __t_return:
  *__t1395t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t1396t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1396t=z;
}

int copy__t751t(char** __t1397t, uint64_t* __t1398t, uint16_t* __t1399t, uint16_t* __t1400t, uint64_t* __t1401t, const char* _other, char** __t1402t, uint64_t* __t1403t, uint64_t* __t1404t, char* __t1405t) {
  char* buf__unsafe_ptr=*__t1397t;
  uint64_t buf__unsafe_size=*__t1398t;
  uint16_t buf__unsafe_offset=*__t1399t;
  uint16_t buf__unsafe_align=*__t1400t;
  uint64_t pos=*__t1401t;
  char* __t752t__unsafe_ptr=0;
  uint64_t __t752t__dat__pos=0;
  uint64_t __t752t__dat__length=0;
  char __t752t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t753t__=0;
  uint64_t __t754t__=0;
  uint64_t next_pos=0;
  uint64_t __t755t__=0;
  char __t756t__=0;
  uint64_t __t757t=0;
  uint64_t __t758t__=0;
  uint64_t prev_pos=0;
  char* __t759t__unsafe_ptr=0;
  uint64_t __t759t__dat__pos=0;
  uint64_t __t759t__dat__length=0;
  char __t759t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t675t(_other,&__t752t__unsafe_ptr,&__t752t__dat__pos,&__t752t__dat__length,&__t752t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t752t__unsafe_ptr;
  other__dat__pos=__t752t__dat__pos;
  other__dat__length=__t752t__dat__length;
  other__dat__first=__t752t__dat__first;
  len__t683t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t753t__);
  add__t171t(pos,__t753t__,&__t754t__);
  next_pos=__t754t__;
  len__t605t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t755t__);
  gt__t272t(next_pos,__t755t__,&__t756t__);
  if(__t756t__){
  __t_errcode=20;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t757t=0;
  add__t171t(pos,__t757t,&__t758t__);
  prev_pos=__t758t__;
  pos=next_pos;
  __t_errcode=str__t637t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t759t__unsafe_ptr,&__t759t__dat__pos,&__t759t__dat__length,&__t759t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1397t=buf__unsafe_ptr;
  *__t1398t=buf__unsafe_size;
  *__t1399t=buf__unsafe_offset;
  *__t1400t=buf__unsafe_align;
  *__t1401t=pos;
  *__t1402t=__t759t__unsafe_ptr;
  *__t1403t=__t759t__dat__pos;
  *__t1404t=__t759t__dat__length;
  *__t1405t=__t759t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t704t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1406t, uint64_t* __t1407t, uint64_t* __t1408t, char* __t1409t) {
  char* __t705t__unsafe_ptr=0;
  uint64_t __t705t__unsafe_size=0;
  uint16_t __t705t__unsafe_offset=0;
  uint16_t __t705t__unsafe_align=0;
  uint64_t __t706t=0;
  uint64_t __t707t__=0;
  uint64_t __t708t__=0;
  char* __t709t__unsafe_ptr=0;
  uint64_t __t709t__unsafe_size=0;
  uint16_t __t709t__unsafe_offset=0;
  uint16_t __t709t__unsafe_align=0;
  uint64_t __t710t____t511t=0;
  char __t710t____t512t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t711t=0;
  char* __t712t__unsafe_ptr=0;
  uint64_t __t712t__dat__pos=0;
  uint64_t __t712t__dat__length=0;
  char __t712t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t559t(&__t705t__unsafe_ptr,&__t705t__unsafe_size,&__t705t__unsafe_offset,&__t705t__unsafe_align);
  __t706t=1;
  len__t683t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t707t__);
  add__t171t(__t706t,__t707t__,&__t708t__);
  __t_errcode=alloc__t509t(&__t705t__unsafe_ptr,&__t705t__unsafe_size,&__t705t__unsafe_offset,&__t705t__unsafe_align,__t708t__,&__t709t__unsafe_ptr,&__t709t__unsafe_size,&__t709t__unsafe_offset,&__t709t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t709t__unsafe_ptr;
  buf__unsafe_size=__t709t__unsafe_size;
  buf__unsafe_offset=__t709t__unsafe_offset;
  buf__unsafe_align=__t709t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t711t=0;
  __t_errcode=str__t637t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t711t,other__dat__length,other__dat__first,&__t712t__unsafe_ptr,&__t712t__dat__pos,&__t712t__dat__length,&__t712t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t710t____t511t=0;
  neq__t143t(__t709t__unsafe_size,__t710t____t511t,&__t710t____t512t__);
  if(__t710t____t512t__){
  __t709t__unsafe_size=0;
  __t709t__unsafe_size=__t709t__unsafe_size;
  __t712t__unsafe_ptr=__t712t__unsafe_ptr;
  free__t502t(&__t712t__unsafe_ptr);
  }
  __t_return:
  *__t1406t=__t712t__unsafe_ptr;
  *__t1407t=__t712t__dat__pos;
  *__t1408t=__t712t__dat__length;
  *__t1409t=__t712t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_temp__t713t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t1410t, char** __t1411t, uint64_t* __t1412t, uint64_t* __t1413t, char* __t1414t) {
  char* __t714t__unsafe_ptr=0;
  uint64_t __t714t__dat__pos=0;
  uint64_t __t714t__dat__length=0;
  char __t714t__dat__first=0;
  uint64_t __t715t____t710t____t511t=0;
  uint64_t __t715t____t709t__unsafe_size=0;
  char __t715t____t710t____t512t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t716t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=copy_null_terminated__t704t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t714t__unsafe_ptr,&__t714t__dat__pos,&__t714t__dat__length,&__t714t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t714t__unsafe_ptr;
  str__dat__pos=__t714t__dat__pos;
  str__dat__length=__t714t__dat__length;
  str__dat__first=__t714t__dat__first;
  add__t504t(str__unsafe_ptr,str__dat__pos,&__t716t__);
  _ret=__t716t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:__t715t____t710t____t511t=0;
  neq__t143t(__t715t____t709t__unsafe_size,__t715t____t710t____t511t,&__t715t____t710t____t512t__);
  if(__t715t____t710t____t512t__){
  __t715t____t709t__unsafe_size=0;
  __t715t____t709t__unsafe_size=__t715t____t709t__unsafe_size;
  str__unsafe_ptr=str__unsafe_ptr;
  free__t502t(&str__unsafe_ptr);
  }
  __t_return:
  *__t1410t=cstr;
  *__t1411t=str__unsafe_ptr;
  *__t1412t=str__dat__pos;
  *__t1413t=str__dat__length;
  *__t1414t=str__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1323t() {
  char* __t1326t__unsafe_ptr=0;
  uint64_t __t1326t__unsafe_size=0;
  uint16_t __t1326t__unsafe_offset=0;
  uint16_t __t1326t__unsafe_align=0;
  uint64_t __t1327t=0;
  char* __t1328t__unsafe_ptr=0;
  uint64_t __t1328t__unsafe_size=0;
  uint16_t __t1328t__unsafe_offset=0;
  uint16_t __t1328t__unsafe_align=0;
  uint64_t __t1329t____t511t=0;
  char __t1329t____t512t__=0;
  char* __t1330t__buf__unsafe_ptr=0;
  uint64_t __t1330t__buf__unsafe_size=0;
  uint16_t __t1330t__buf__unsafe_offset=0;
  uint16_t __t1330t__buf__unsafe_align=0;
  uint64_t __t1330t__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __t1332t__unsafe_ptr=0;
  uint64_t __t1332t__dat__pos=0;
  uint64_t __t1332t__dat__length=0;
  char __t1332t__dat__first=0;
  char* test__unsafe_ptr=0;
  uint64_t test__dat__pos=0;
  uint64_t test__dat__length=0;
  char test__dat__first=0;
  const char* __t1333t__cstr=0;
  char* __t1333t__str__unsafe_ptr=0;
  uint64_t __t1333t__str__dat__pos=0;
  uint64_t __t1333t__str__dat__length=0;
  char __t1333t__str__dat__first=0;
  uint64_t __t1334t____t715t____t710t____t511t=0;
  uint64_t __t1334t____t715t____t709t__unsafe_size=0;
  char __t1334t____t715t____t710t____t512t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1324t(&__t1326t__unsafe_ptr,&__t1326t__unsafe_size,&__t1326t__unsafe_offset,&__t1326t__unsafe_align);
  __t1327t=16;
  __t_errcode=alloc__t509t(&__t1326t__unsafe_ptr,&__t1326t__unsafe_size,&__t1326t__unsafe_offset,&__t1326t__unsafe_align,__t1327t,&__t1328t__unsafe_ptr,&__t1328t__unsafe_size,&__t1328t__unsafe_offset,&__t1328t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  bufpos__t722t(&__t1328t__unsafe_ptr,&__t1328t__unsafe_size,&__t1328t__unsafe_offset,&__t1328t__unsafe_align,&__t1330t__buf__unsafe_ptr,&__t1330t__buf__unsafe_size,&__t1330t__buf__unsafe_offset,&__t1330t__buf__unsafe_align,&__t1330t__pos);
  buf__buf__unsafe_ptr=__t1330t__buf__unsafe_ptr;
  buf__buf__unsafe_size=__t1330t__buf__unsafe_size;
  buf__buf__unsafe_offset=__t1330t__buf__unsafe_offset;
  buf__buf__unsafe_align=__t1330t__buf__unsafe_align;
  buf__pos=__t1330t__pos;
  __t_errcode=copy__t751t(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__t1331t,&__t1332t__unsafe_ptr,&__t1332t__dat__pos,&__t1332t__dat__length,&__t1332t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  test__unsafe_ptr=__t1332t__unsafe_ptr;
  test__dat__pos=__t1332t__dat__pos;
  test__dat__length=__t1332t__dat__length;
  test__dat__first=__t1332t__dat__first;
  __t_errcode=unsafe_temp__t713t(test__unsafe_ptr,test__dat__pos,test__dat__length,test__dat__first,&__t1333t__cstr,&__t1333t__str__unsafe_ptr,&__t1333t__str__dat__pos,&__t1333t__str__dat__length,&__t1333t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t369t(__t1333t__cstr);
  
  __t_failure:__t1334t____t715t____t710t____t511t=0;
  neq__t143t(__t1334t____t715t____t709t__unsafe_size,__t1334t____t715t____t710t____t511t,&__t1334t____t715t____t710t____t512t__);
  if(__t1334t____t715t____t710t____t512t__){
  __t1334t____t715t____t709t__unsafe_size=0;
  __t1334t____t715t____t709t__unsafe_size=__t1334t____t715t____t709t__unsafe_size;
  __t1333t__str__unsafe_ptr=__t1333t__str__unsafe_ptr;
  free__t502t(&__t1333t__str__unsafe_ptr);
  }
  __t1329t____t511t=0;
  neq__t143t(__t1328t__unsafe_size,__t1329t____t511t,&__t1329t____t512t__);
  if(__t1329t____t512t__){
  __t1328t__unsafe_size=0;
  __t1328t__unsafe_size=__t1328t__unsafe_size;
  __t1328t__unsafe_ptr=__t1328t__unsafe_ptr;
  free__t502t(&__t1328t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1323t();return 0;}