#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1275t="123";
const char* const __t365t="\n";
const char* const __t1277t="456";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1267t(char** __t1284t, uint64_t* __t1285t, uint16_t* __t1286t, uint16_t* __t1287t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1284t=unsafe_ptr;
  *__t1285t=unsafe_size;
  *__t1286t=unsafe_offset;
  *__t1287t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1288t) {
  int value=0;
  *__t1288t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1289t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1289t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1290t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1290t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1291t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1291t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1292t) {
  char* allocated=*__t1292t;
  if(allocated){
  free(allocated);
  }
  *__t1292t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1293t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1293t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1294t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1294t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1295t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1295t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1296t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1296t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1297t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1297t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1298t) {
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
  *__t1298t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1299t, uint64_t* __t1300t, uint16_t* __t1301t, uint16_t* __t1302t, uint64_t size, char** __t1303t, uint64_t* __t1304t, uint16_t* __t1305t, uint16_t* __t1306t) {
  char* buffer__unsafe_ptr=*__t1299t;
  uint64_t buffer__unsafe_size=*__t1300t;
  uint16_t buffer__unsafe_offset=*__t1301t;
  uint16_t buffer__unsafe_align=*__t1302t;
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
  *__t1299t=buffer__unsafe_ptr;
  *__t1300t=buffer__unsafe_size;
  *__t1301t=buffer__unsafe_offset;
  *__t1302t=buffer__unsafe_align;
  *__t1303t=__t486t__unsafe_ptr;
  *__t1304t=__t486t__unsafe_size;
  *__t1305t=__t486t__unsafe_offset;
  *__t1306t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t559t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1307t) {
  goto __t_return;
  __t_return:
  *__t1307t=buffer__unsafe_size;
}

int list__t560t(char** __t1308t, uint64_t* __t1309t, uint16_t* __t1310t, uint16_t* __t1311t, char** __t1312t, uint64_t* __t1313t, uint16_t* __t1314t, uint16_t* __t1315t, uint64_t* __t1316t) {
  char* _buffer__unsafe_ptr=*__t1308t;
  uint64_t _buffer__unsafe_size=*__t1309t;
  uint16_t _buffer__unsafe_offset=*__t1310t;
  uint16_t _buffer__unsafe_align=*__t1311t;
  uint64_t __t561t=0;
  char* __t562t__unsafe_ptr=0;
  uint64_t __t562t__unsafe_size=0;
  uint16_t __t562t__unsafe_offset=0;
  uint16_t __t562t__unsafe_align=0;
  uint64_t __t563t____t475t=0;
  char __t563t____t476t__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __t564t__=0;
  uint64_t __t565t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t561t=1;
  __t_errcode=alloc__t473t(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__t561t,&__t562t__unsafe_ptr,&__t562t__unsafe_size,&__t562t__unsafe_offset,&__t562t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t562t__unsafe_ptr;
  buffer__unsafe_size=__t562t__unsafe_size;
  buffer__unsafe_offset=__t562t__unsafe_offset;
  buffer__unsafe_align=__t562t__unsafe_align;
  len__t559t(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__t564t__);
  __t565t=__t564t__;
  length=__t565t;
  goto __t_return;
  
  __t_failure:__t563t____t475t=0;
  neq__t142t(buffer__unsafe_size,__t563t____t475t,&__t563t____t476t__);
  if(__t563t____t476t__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__t466t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t1308t=_buffer__unsafe_ptr;
  *__t1309t=_buffer__unsafe_size;
  *__t1310t=_buffer__unsafe_offset;
  *__t1311t=_buffer__unsafe_align;
  *__t1312t=buffer__unsafe_ptr;
  *__t1313t=buffer__unsafe_size;
  *__t1314t=buffer__unsafe_offset;
  *__t1315t=buffer__unsafe_align;
  *__t1316t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1317t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1317t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1318t) {
  *__t1318t=to;
}

static inline __attribute__((always_inline)) int realloc__t462t(char* allocated, uint64_t bytes, char** __t1319t) {
  char* new_allocated=0;
  char __t463t__=0;
  char __t464t__=0;
  char* __t465t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t412t(new_allocated,&__t463t__);
  not__t26t(__t463t__,&__t464t__);
  if(__t464t__){
  __t_errcode=9;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t20t(new_allocated,allocated,&__t465t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1319t=__t465t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1320t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1320t=z;
}

static inline __attribute__((always_inline)) int resize__t518t(char** __t1321t, uint64_t* __t1322t, uint16_t* __t1323t, uint16_t* __t1324t, uint64_t size, char** __t1325t, uint64_t* __t1326t, uint16_t* __t1327t, uint16_t* __t1328t) {
  char* buffer__unsafe_ptr=*__t1321t;
  uint64_t buffer__unsafe_size=*__t1322t;
  uint16_t buffer__unsafe_offset=*__t1323t;
  uint16_t buffer__unsafe_align=*__t1324t;
  char __t519t__=0;
  uint64_t __t520t=0;
  char __t521t__=0;
  uint64_t __t522t__=0;
  uint64_t __t523t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t524t__=0;
  uint64_t __t525t__=0;
  uint64_t bytes=0;
  char* __t526t__=0;
  char __t527t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(buffer__unsafe_size,size,&__t519t__);
  if(__t519t__){
  goto __t_return;
  }
  __t520t=0;
  eq__t118t(buffer__unsafe_size,__t520t,&__t521t__);
  if(__t521t__){
  __t_errcode=11;
  goto __t_failure;
  }
  nat__t470t(buffer__unsafe_align,&__t522t__);
  mul__t194t(buffer__unsafe_size,__t522t__,&__t523t__);
  prev_bytes=__t523t__;
  buffer__unsafe_size=size;
  nat__t470t(buffer__unsafe_align,&__t524t__);
  mul__t194t(__t524t__,size,&__t525t__);
  bytes=__t525t__;
  __t_errcode=realloc__t462t(buffer__unsafe_ptr,bytes,&__t526t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t526t__;
  lt__t247t(prev_bytes,bytes,&__t527t__);
  if(__t527t__){
  zero__t467t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1321t=buffer__unsafe_ptr;
  *__t1322t=buffer__unsafe_size;
  *__t1323t=buffer__unsafe_offset;
  *__t1324t=buffer__unsafe_align;
  *__t1325t=buffer__unsafe_ptr;
  *__t1326t=buffer__unsafe_size;
  *__t1327t=buffer__unsafe_offset;
  *__t1328t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t591t(char** __t1329t, uint64_t* __t1330t, uint16_t* __t1331t, uint16_t* __t1332t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t1329t=unsafe_ptr;
  *__t1330t=unsafe_size;
  *__t1331t=unsafe_offset;
  *__t1332t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, const char* from, char** __t1333t) {
  *__t1333t=to;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1334t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1334t=z;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1335t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1335t=__t469t__;
}

static inline __attribute__((always_inline)) int get__t552t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1336t) {
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
  *__t1336t=__t558t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t587t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1337t, uint64_t* __t1338t, uint64_t* __t1339t, char* __t1340t) {
  goto __t_return;
  __t_return:
  *__t1337t=unsafe_ptr;
  *__t1338t=dat__pos;
  *__t1339t=dat__length;
  *__t1340t=dat__first;
}

static inline __attribute__((always_inline)) int str__t593t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t1341t, uint64_t* __t1342t, uint64_t* __t1343t, char* __t1344t) {
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
  *__t1341t=__t600t__unsafe_ptr;
  *__t1342t=__t600t__dat__pos;
  *__t1343t=__t600t__dat__length;
  *__t1344t=__t600t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t625t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t1345t, uint64_t* __t1346t, uint64_t* __t1347t, char* __t1348t) {
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
  *__t1345t=__t630t__unsafe_ptr;
  *__t1346t=__t630t__dat__pos;
  *__t1347t=__t630t__dat__length;
  *__t1348t=__t630t__dat__first;
  
  return __t_errcode;
}

int str__t631t(const char* c, char** __t1349t, uint64_t* __t1350t, uint64_t* __t1351t, char* __t1352t) {
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
  *__t1349t=__t638t__unsafe_ptr;
  *__t1350t=__t638t__dat__pos;
  *__t1351t=__t638t__dat__length;
  *__t1352t=__t638t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t639t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t1353t) {
  goto __t_return;
  __t_return:
  *__t1353t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t146t(char* x, char* y, char* __t1354t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t1354t=z;
}

static inline __attribute__((always_inline)) int div__t220t(uint64_t x, uint64_t y, uint64_t* __t1355t) {
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
  __t_errcode=2;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1355t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t624t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t1356t, uint64_t* __t1357t, uint64_t* __t1358t, char* __t1359t) {
  goto __t_return;
  __t_return:
  *__t1356t=other__unsafe_ptr;
  *__t1357t=other__dat__pos;
  *__t1358t=other__dat__length;
  *__t1359t=other__dat__first;
}

static inline __attribute__((always_inline)) void gt__t271t(uint64_t x, uint64_t y, char* __t1360t) {
  int __t272t__=0;
  char z=0;
  is_different__t93t(x,y,&__t272t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t1360t=z;
}

static inline __attribute__((always_inline)) int copy__t699t(char** __t1361t, uint64_t* __t1362t, uint16_t* __t1363t, uint16_t* __t1364t, uint64_t* __t1365t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t1366t, uint64_t* __t1367t, uint64_t* __t1368t, char* __t1369t) {
  char* buf__unsafe_ptr=*__t1361t;
  uint64_t buf__unsafe_size=*__t1362t;
  uint16_t buf__unsafe_offset=*__t1363t;
  uint16_t buf__unsafe_align=*__t1364t;
  uint64_t pos=*__t1365t;
  char* __t700t__unsafe_ptr=0;
  uint64_t __t700t__dat__pos=0;
  uint64_t __t700t__dat__length=0;
  char __t700t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t701t__=0;
  uint64_t __t702t__=0;
  uint64_t next_pos=0;
  uint64_t __t703t__=0;
  char __t704t__=0;
  uint64_t __t705t=0;
  uint64_t __t706t__=0;
  uint64_t prev_pos=0;
  char* __t707t__unsafe_ptr=0;
  uint64_t __t707t__dat__pos=0;
  uint64_t __t707t__dat__length=0;
  char __t707t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t624t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t700t__unsafe_ptr,&__t700t__dat__pos,&__t700t__dat__length,&__t700t__dat__first);
  other__unsafe_ptr=__t700t__unsafe_ptr;
  other__dat__pos=__t700t__dat__pos;
  other__dat__length=__t700t__dat__length;
  other__dat__first=__t700t__dat__first;
  len__t639t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t701t__);
  add__t170t(pos,__t701t__,&__t702t__);
  next_pos=__t702t__;
  len__t559t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t703t__);
  gt__t271t(next_pos,__t703t__,&__t704t__);
  if(__t704t__){
  __t_errcode=17;
  goto __t_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t705t=0;
  add__t170t(pos,__t705t,&__t706t__);
  prev_pos=__t706t__;
  pos=next_pos;
  __t_errcode=str__t593t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t707t__unsafe_ptr,&__t707t__dat__pos,&__t707t__dat__length,&__t707t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1361t=buf__unsafe_ptr;
  *__t1362t=buf__unsafe_size;
  *__t1363t=buf__unsafe_offset;
  *__t1364t=buf__unsafe_align;
  *__t1365t=pos;
  *__t1366t=__t707t__unsafe_ptr;
  *__t1367t=__t707t__dat__pos;
  *__t1368t=__t707t__dat__length;
  *__t1369t=__t707t__dat__first;
  
  return __t_errcode;
}

int copy__t765t(char** __t1370t, uint64_t* __t1371t, uint16_t* __t1372t, uint16_t* __t1373t, uint64_t* __t1374t, const char* _other, char** __t1375t, uint64_t* __t1376t, uint64_t* __t1377t, char* __t1378t) {
  char* li__buffer__unsafe_ptr=*__t1370t;
  uint64_t li__buffer__unsafe_size=*__t1371t;
  uint16_t li__buffer__unsafe_offset=*__t1372t;
  uint16_t li__buffer__unsafe_align=*__t1373t;
  uint64_t li__length=*__t1374t;
  char* __t766t__unsafe_ptr=0;
  uint64_t __t766t__dat__pos=0;
  uint64_t __t766t__dat__length=0;
  char __t766t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t767t=0;
  uint64_t prev_prev_length=0;
  uint64_t __t768t__=0;
  uint64_t __t769t__=0;
  uint64_t prev_length=0;
  char __t770t__=0;
  uint64_t __t771t__=0;
  char __t772t__=0;
  uint64_t __t773t=0;
  uint64_t __t774t__=0;
  uint64_t __t775t=0;
  uint64_t __t776t__=0;
  uint64_t __t777t__=0;
  char* __t778t__unsafe_ptr=0;
  uint64_t __t778t__unsafe_size=0;
  uint16_t __t778t__unsafe_offset=0;
  uint16_t __t778t__unsafe_align=0;
  char* __t779t__unsafe_ptr=0;
  uint64_t __t779t__dat__pos=0;
  uint64_t __t779t__dat__length=0;
  char __t779t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t631t(_other,&__t766t__unsafe_ptr,&__t766t__dat__pos,&__t766t__dat__length,&__t766t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t766t__unsafe_ptr;
  other__dat__pos=__t766t__dat__pos;
  other__dat__length=__t766t__dat__length;
  other__dat__first=__t766t__dat__first;
  __t767t=li__length;
  prev_prev_length=__t767t;
  len__t639t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t768t__);
  add__t170t(li__length,__t768t__,&__t769t__);
  prev_length=__t769t__;
  eq__t146t(other__unsafe_ptr,li__buffer__unsafe_ptr,&__t770t__);
  if(__t770t__){
  __t_errcode=18;
  goto __t_failure;
  }
  len__t559t(li__buffer__unsafe_ptr,li__buffer__unsafe_size,li__buffer__unsafe_offset,li__buffer__unsafe_align,&__t771t__);
  ge__t319t(prev_length,__t771t__,&__t772t__);
  if(__t772t__){
  __t773t=2;
  __t_errcode=div__t220t(prev_length,__t773t,&__t774t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t775t=1;
  add__t170t(__t774t__,__t775t,&__t776t__);
  add__t170t(prev_length,__t776t__,&__t777t__);
  __t_errcode=resize__t518t(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,__t777t__,&__t778t__unsafe_ptr,&__t778t__unsafe_size,&__t778t__unsafe_offset,&__t778t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  li__buffer__unsafe_ptr=__t778t__unsafe_ptr;
  li__buffer__unsafe_size=__t778t__unsafe_size;
  li__buffer__unsafe_offset=__t778t__unsafe_offset;
  li__buffer__unsafe_align=__t778t__unsafe_align;
  }
  li__length=prev_length;
  __t_errcode=copy__t699t(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_offset,&li__buffer__unsafe_align,&prev_prev_length,other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t779t__unsafe_ptr,&__t779t__dat__pos,&__t779t__dat__length,&__t779t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1370t=li__buffer__unsafe_ptr;
  *__t1371t=li__buffer__unsafe_size;
  *__t1372t=li__buffer__unsafe_offset;
  *__t1373t=li__buffer__unsafe_align;
  *__t1374t=li__length;
  *__t1375t=__t779t__unsafe_ptr;
  *__t1376t=__t779t__dat__pos;
  *__t1377t=__t779t__dat__length;
  *__t1378t=__t779t__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t1266t(char** __t1379t, uint64_t* __t1380t, uint64_t* __t1381t, char* __t1382t, char** __t1383t, uint64_t* __t1384t, uint64_t* __t1385t, char* __t1386t) {
  char* __t1269t__unsafe_ptr=0;
  uint64_t __t1269t__unsafe_size=0;
  uint16_t __t1269t__unsafe_offset=0;
  uint16_t __t1269t__unsafe_align=0;
  char* __t1270t__unsafe_ptr=0;
  uint64_t __t1270t__unsafe_size=0;
  uint16_t __t1270t__unsafe_offset=0;
  uint16_t __t1270t__unsafe_align=0;
  char* __t1271t__buffer__unsafe_ptr=0;
  uint64_t __t1271t__buffer__unsafe_size=0;
  uint16_t __t1271t__buffer__unsafe_offset=0;
  uint16_t __t1271t__buffer__unsafe_align=0;
  uint64_t __t1271t__length=0;
  uint64_t __t1272t____t563t____t475t=0;
  char __t1272t____t563t____t476t__=0;
  char* mem__buffer__unsafe_ptr=0;
  uint64_t mem__buffer__unsafe_size=0;
  uint16_t mem__buffer__unsafe_offset=0;
  uint16_t mem__buffer__unsafe_align=0;
  uint64_t mem__length=0;
  uint64_t __t1273t=0;
  char* __t1274t__unsafe_ptr=0;
  uint64_t __t1274t__unsafe_size=0;
  uint16_t __t1274t__unsafe_offset=0;
  uint16_t __t1274t__unsafe_align=0;
  char* __t1276t__unsafe_ptr=0;
  uint64_t __t1276t__dat__pos=0;
  uint64_t __t1276t__dat__length=0;
  char __t1276t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1278t__unsafe_ptr=0;
  uint64_t __t1278t__dat__pos=0;
  uint64_t __t1278t__dat__length=0;
  char __t1278t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1267t(&__t1269t__unsafe_ptr,&__t1269t__unsafe_size,&__t1269t__unsafe_offset,&__t1269t__unsafe_align);
  __t1270t__unsafe_ptr=__t1269t__unsafe_ptr;
  __t1270t__unsafe_size=__t1269t__unsafe_size;
  __t1270t__unsafe_offset=__t1269t__unsafe_offset;
  __t1270t__unsafe_align=__t1269t__unsafe_align;
  __t_errcode=list__t560t(&__t1270t__unsafe_ptr,&__t1270t__unsafe_size,&__t1270t__unsafe_offset,&__t1270t__unsafe_align,&__t1271t__buffer__unsafe_ptr,&__t1271t__buffer__unsafe_size,&__t1271t__buffer__unsafe_offset,&__t1271t__buffer__unsafe_align,&__t1271t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  mem__buffer__unsafe_size=__t1271t__buffer__unsafe_size;
  mem__length=__t1271t__length;
  __t1273t=100;
  __t_errcode=resize__t518t(&__t1270t__unsafe_ptr,&mem__buffer__unsafe_size,&__t1270t__unsafe_offset,&__t1270t__unsafe_align,__t1273t,&__t1274t__unsafe_ptr,&__t1274t__unsafe_size,&__t1274t__unsafe_offset,&__t1274t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t765t(&__t1270t__unsafe_ptr,&mem__buffer__unsafe_size,&__t1270t__unsafe_offset,&__t1270t__unsafe_align,&mem__length,__t1275t,&__t1276t__unsafe_ptr,&__t1276t__dat__pos,&__t1276t__dat__length,&__t1276t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t1276t__dat__pos;
  s1__dat__length=__t1276t__dat__length;
  s1__dat__first=__t1276t__dat__first;
  __t_errcode=copy__t765t(&__t1270t__unsafe_ptr,&mem__buffer__unsafe_size,&__t1270t__unsafe_offset,&__t1270t__unsafe_align,&mem__length,__t1277t,&__t1278t__unsafe_ptr,&__t1278t__dat__pos,&__t1278t__dat__length,&__t1278t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t1278t__dat__pos;
  s2__dat__length=__t1278t__dat__length;
  s2__dat__first=__t1278t__dat__first;
  s1__unsafe_ptr=__t1270t__unsafe_ptr;
  s2__unsafe_ptr=__t1270t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:__t1272t____t563t____t475t=0;
  neq__t142t(__t1271t__buffer__unsafe_size,__t1272t____t563t____t475t,&__t1272t____t563t____t476t__);
  if(__t1272t____t563t____t476t__){
  __t1271t__buffer__unsafe_size=0;
  __t1271t__buffer__unsafe_size=__t1271t__buffer__unsafe_size;
  s2__unsafe_ptr=s2__unsafe_ptr;
  free__t466t(&s2__unsafe_ptr);
  }
  __t_return:
  *__t1379t=s1__unsafe_ptr;
  *__t1380t=s1__dat__pos;
  *__t1381t=s1__dat__length;
  *__t1382t=s1__dat__first;
  *__t1383t=s2__unsafe_ptr;
  *__t1384t=s2__dat__pos;
  *__t1385t=s2__dat__length;
  *__t1386t=s2__dat__first;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t741t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t742t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t1279t() {
  char* __t1280t__s1__unsafe_ptr=0;
  uint64_t __t1280t__s1__dat__pos=0;
  uint64_t __t1280t__s1__dat__length=0;
  char __t1280t__s1__dat__first=0;
  char* __t1280t__s2__unsafe_ptr=0;
  uint64_t __t1280t__s2__dat__pos=0;
  uint64_t __t1280t__s2__dat__length=0;
  char __t1280t__s2__dat__first=0;
  uint64_t __t1281t____t1272t____t563t____t475t=0;
  uint64_t __t1281t____t1271t__buffer__unsafe_size=0;
  char __t1281t____t1272t____t563t____t476t__=0;
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
  __t_errcode=test__t1266t(&__t1280t__s1__unsafe_ptr,&__t1280t__s1__dat__pos,&__t1280t__s1__dat__length,&__t1280t__s1__dat__first,&__t1280t__s2__unsafe_ptr,&__t1280t__s2__dat__pos,&__t1280t__s2__dat__length,&__t1280t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t1280t__s1__unsafe_ptr;
  s__s1__dat__pos=__t1280t__s1__dat__pos;
  s__s1__dat__length=__t1280t__s1__dat__length;
  s__s1__dat__first=__t1280t__s1__dat__first;
  s__s2__unsafe_ptr=__t1280t__s2__unsafe_ptr;
  s__s2__dat__pos=__t1280t__s2__dat__pos;
  s__s2__dat__length=__t1280t__s2__dat__length;
  s__s2__dat__first=__t1280t__s2__dat__first;
  print__t741t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t741t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:__t1281t____t1272t____t563t____t475t=0;
  neq__t142t(__t1281t____t1271t__buffer__unsafe_size,__t1281t____t1272t____t563t____t475t,&__t1281t____t1272t____t563t____t476t__);
  if(__t1281t____t1272t____t563t____t476t__){
  __t1281t____t1271t__buffer__unsafe_size=0;
  __t1281t____t1271t__buffer__unsafe_size=__t1281t____t1271t__buffer__unsafe_size;
  __t1280t__s2__unsafe_ptr=__t1280t__s2__unsafe_ptr;
  free__t466t(&__t1280t__s2__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1279t();return 0;}