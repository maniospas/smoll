#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t365t="\n";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1267t(char** __t1290t, uint64_t* __t1291t, uint16_t* __t1292t, uint16_t* __t1293t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1290t=unsafe_ptr;
  *__t1291t=unsafe_size;
  *__t1292t=unsafe_offset;
  *__t1293t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1294t) {
  int value=0;
  *__t1294t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1295t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1295t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1296t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1296t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1297t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1297t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1298t) {
  char* allocated=*__t1298t;
  if(allocated){
  free(allocated);
  }
  *__t1298t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1299t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1299t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1300t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1300t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1301t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1301t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1302t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1302t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1303t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1303t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1304t) {
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
  *__t1304t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1305t, uint64_t* __t1306t, uint16_t* __t1307t, uint16_t* __t1308t, uint64_t size, char** __t1309t, uint64_t* __t1310t, uint16_t* __t1311t, uint16_t* __t1312t) {
  char* buffer__unsafe_ptr=*__t1305t;
  uint64_t buffer__unsafe_size=*__t1306t;
  uint16_t buffer__unsafe_offset=*__t1307t;
  uint16_t buffer__unsafe_align=*__t1308t;
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
  *__t1305t=buffer__unsafe_ptr;
  *__t1306t=buffer__unsafe_size;
  *__t1307t=buffer__unsafe_offset;
  *__t1308t=buffer__unsafe_align;
  *__t1309t=__t486t__unsafe_ptr;
  *__t1310t=__t486t__unsafe_size;
  *__t1311t=__t486t__unsafe_offset;
  *__t1312t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t559t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1313t) {
  goto __t_return;
  __t_return:
  *__t1313t=buffer__unsafe_size;
}

int list__t560t(char** __t1314t, uint64_t* __t1315t, uint16_t* __t1316t, uint16_t* __t1317t, char** __t1318t, uint64_t* __t1319t, uint16_t* __t1320t, uint16_t* __t1321t, uint64_t* __t1322t) {
  char* _buffer__unsafe_ptr=*__t1314t;
  uint64_t _buffer__unsafe_size=*__t1315t;
  uint16_t _buffer__unsafe_offset=*__t1316t;
  uint16_t _buffer__unsafe_align=*__t1317t;
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
  *__t1314t=_buffer__unsafe_ptr;
  *__t1315t=_buffer__unsafe_size;
  *__t1316t=_buffer__unsafe_offset;
  *__t1317t=_buffer__unsafe_align;
  *__t1318t=buffer__unsafe_ptr;
  *__t1319t=buffer__unsafe_size;
  *__t1320t=buffer__unsafe_offset;
  *__t1321t=buffer__unsafe_align;
  *__t1322t=length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1323t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1323t=z;
}

static inline __attribute__((always_inline)) int div__t220t(uint64_t x, uint64_t y, uint64_t* __t1324t) {
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
  *__t1324t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1325t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1325t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1326t) {
  *__t1326t=to;
}

static inline __attribute__((always_inline)) int realloc__t462t(char* allocated, uint64_t bytes, char** __t1327t) {
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
  *__t1327t=__t465t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1328t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1328t=z;
}

static inline __attribute__((always_inline)) int resize__t518t(char** __t1329t, uint64_t* __t1330t, uint16_t* __t1331t, uint16_t* __t1332t, uint64_t size, char** __t1333t, uint64_t* __t1334t, uint16_t* __t1335t, uint16_t* __t1336t) {
  char* buffer__unsafe_ptr=*__t1329t;
  uint64_t buffer__unsafe_size=*__t1330t;
  uint16_t buffer__unsafe_offset=*__t1331t;
  uint16_t buffer__unsafe_align=*__t1332t;
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
  *__t1329t=buffer__unsafe_ptr;
  *__t1330t=buffer__unsafe_size;
  *__t1331t=buffer__unsafe_offset;
  *__t1332t=buffer__unsafe_align;
  *__t1333t=buffer__unsafe_ptr;
  *__t1334t=buffer__unsafe_size;
  *__t1335t=buffer__unsafe_offset;
  *__t1336t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1337t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1337t=__t469t__;
}

static inline __attribute__((always_inline)) int mutget__t545t(char** __t1338t, uint64_t* __t1339t, uint16_t* __t1340t, uint16_t* __t1341t, uint64_t i, char** __t1342t) {
  char* buffer__unsafe_ptr=*__t1338t;
  uint64_t buffer__unsafe_size=*__t1339t;
  uint16_t buffer__unsafe_offset=*__t1340t;
  uint16_t buffer__unsafe_align=*__t1341t;
  char __t546t__=0;
  uint64_t __t547t__=0;
  uint64_t __t548t__=0;
  uint64_t __t549t__=0;
  uint64_t __t550t__=0;
  char* __t551t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,buffer__unsafe_size,&__t546t__);
  if(__t546t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t470t(buffer__unsafe_align,&__t547t__);
  mul__t194t(i,__t547t__,&__t548t__);
  nat__t470t(buffer__unsafe_offset,&__t549t__);
  add__t170t(__t548t__,__t549t__,&__t550t__);
  add__t468t(buffer__unsafe_ptr,__t550t__,&__t551t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1338t=buffer__unsafe_ptr;
  *__t1339t=buffer__unsafe_size;
  *__t1340t=buffer__unsafe_offset;
  *__t1341t=buffer__unsafe_align;
  *__t1342t=__t551t__;
  
  return __t_errcode;
}

int push__t573t(char** __t1343t, uint64_t* __t1344t, uint16_t* __t1345t, uint16_t* __t1346t, uint64_t* __t1347t, char** __t1348t) {
  char* l__buffer__unsafe_ptr=*__t1343t;
  uint64_t l__buffer__unsafe_size=*__t1344t;
  uint16_t l__buffer__unsafe_offset=*__t1345t;
  uint16_t l__buffer__unsafe_align=*__t1346t;
  uint64_t l__length=*__t1347t;
  uint64_t prev_length=0;
  uint64_t __t574t__=0;
  char __t575t__=0;
  uint64_t __t576t=0;
  uint64_t __t577t__=0;
  uint64_t __t578t=0;
  uint64_t __t579t__=0;
  uint64_t __t580t__=0;
  char* __t581t__unsafe_ptr=0;
  uint64_t __t581t__unsafe_size=0;
  uint16_t __t581t__unsafe_offset=0;
  uint16_t __t581t__unsafe_align=0;
  uint64_t __t582t=0;
  uint64_t __t583t__=0;
  char* __t584t__=0;
  char* val=0;
  int __t_errcode=0;
  int __t_complain=0;
  prev_length=l__length;
  len__t559t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,&__t574t__);
  ge__t319t(prev_length,__t574t__,&__t575t__);
  if(__t575t__){
  __t576t=2;
  __t_errcode=div__t220t(prev_length,__t576t,&__t577t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t578t=1;
  add__t170t(__t577t__,__t578t,&__t579t__);
  add__t170t(prev_length,__t579t__,&__t580t__);
  __t_errcode=resize__t518t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,__t580t__,&__t581t__unsafe_ptr,&__t581t__unsafe_size,&__t581t__unsafe_offset,&__t581t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  l__buffer__unsafe_ptr=__t581t__unsafe_ptr;
  l__buffer__unsafe_size=__t581t__unsafe_size;
  l__buffer__unsafe_offset=__t581t__unsafe_offset;
  l__buffer__unsafe_align=__t581t__unsafe_align;
  }
  __t582t=1;
  add__t170t(prev_length,__t582t,&__t583t__);
  l__length=__t583t__;
  __t_errcode=mutget__t545t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,prev_length,&__t584t__);
  if(__t_errcode){
  goto __t_failure;
  }
  val=__t584t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1343t=l__buffer__unsafe_ptr;
  *__t1344t=l__buffer__unsafe_size;
  *__t1345t=l__buffer__unsafe_offset;
  *__t1346t=l__buffer__unsafe_align;
  *__t1347t=l__length;
  *__t1348t=val;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t570t(char** __t1349t, uint64_t* __t1350t, uint16_t* __t1351t, uint16_t* __t1352t, uint64_t* __t1353t, uint64_t pos, char** __t1354t) {
  char* l__buffer__unsafe_ptr=*__t1349t;
  uint64_t l__buffer__unsafe_size=*__t1350t;
  uint16_t l__buffer__unsafe_offset=*__t1351t;
  uint16_t l__buffer__unsafe_align=*__t1352t;
  uint64_t l__length=*__t1353t;
  char __t571t__=0;
  char* __t572t__=0;
  char* ret=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(pos,l__length,&__t571t__);
  if(__t571t__){
  __t_errcode=12;
  goto __t_failure;
  }
  __t_errcode=mutget__t545t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,pos,&__t572t__);
  if(__t_errcode){
  goto __t_failure;
  }
  ret=__t572t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1349t=l__buffer__unsafe_ptr;
  *__t1350t=l__buffer__unsafe_size;
  *__t1351t=l__buffer__unsafe_offset;
  *__t1352t=l__buffer__unsafe_align;
  *__t1353t=l__length;
  *__t1354t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t552t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1355t) {
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
  *__t1355t=__t558t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t567t(char* l__buffer__unsafe_ptr, uint64_t l__buffer__unsafe_size, uint16_t l__buffer__unsafe_offset, uint16_t l__buffer__unsafe_align, uint64_t l__length, uint64_t pos, char** __t1356t) {
  char __t568t__=0;
  char* __t569t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(pos,l__length,&__t568t__);
  if(__t568t__){
  __t_errcode=12;
  goto __t_failure;
  }
  __t_errcode=get__t552t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,pos,&__t569t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1356t=__t569t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t368t(double value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1266t() {
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
  char* li__buffer__unsafe_ptr=0;
  uint64_t li__buffer__unsafe_size=0;
  uint16_t li__buffer__unsafe_offset=0;
  uint16_t li__buffer__unsafe_align=0;
  uint64_t li__length=0;
  char* __t1273t__=0;
  double __t1274t=0;
  char* __t1275t__=0;
  double __t1276t=0;
  char* __t1277t__=0;
  double __t1278t=0;
  uint64_t __t1279t=0;
  char* __t1280t__=0;
  double __t1281t=0;
  uint64_t __t1282t=0;
  char* __t1283t__=0;
  double __t1284t__value=0;
  uint64_t __t1286t=0;
  char* __t1287t__=0;
  double __t1288t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1267t(&__t1269t__unsafe_ptr,&__t1269t__unsafe_size,&__t1269t__unsafe_offset,&__t1269t__unsafe_align);
  __t1270t__unsafe_ptr=__t1269t__unsafe_ptr;
  __t1270t__unsafe_size=__t1269t__unsafe_size;
  __t1270t__unsafe_offset=__t1269t__unsafe_offset;
  __t1270t__unsafe_align=__t1269t__unsafe_align;
  __t_errcode=list__t560t(&__t1270t__unsafe_ptr,&__t1270t__unsafe_size,&__t1270t__unsafe_offset,&__t1270t__unsafe_align,&__t1271t__buffer__unsafe_ptr,&__t1271t__buffer__unsafe_size,&__t1271t__buffer__unsafe_offset,&__t1271t__buffer__unsafe_align,&__t1271t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=push__t573t(&__t1271t__buffer__unsafe_ptr,&__t1271t__buffer__unsafe_size,&__t1271t__buffer__unsafe_offset,&__t1271t__buffer__unsafe_align,&__t1271t__length,&__t1273t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1274t=0.1;
  if(!__t1273t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1273t__,&__t1274t,8);
  __t_errcode=push__t573t(&__t1271t__buffer__unsafe_ptr,&__t1271t__buffer__unsafe_size,&__t1271t__buffer__unsafe_offset,&__t1271t__buffer__unsafe_align,&__t1271t__length,&__t1275t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1276t=0.1;
  if(!__t1275t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1275t__,&__t1276t,8);
  __t_errcode=push__t573t(&__t1271t__buffer__unsafe_ptr,&__t1271t__buffer__unsafe_size,&__t1271t__buffer__unsafe_offset,&__t1271t__buffer__unsafe_align,&__t1271t__length,&__t1277t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1278t=0.1;
  if(!__t1277t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1277t__,&__t1278t,8);
  __t1279t=1;
  __t_errcode=mutget__t570t(&__t1271t__buffer__unsafe_ptr,&__t1271t__buffer__unsafe_size,&__t1271t__buffer__unsafe_offset,&__t1271t__buffer__unsafe_align,&__t1271t__length,__t1279t,&__t1280t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1281t=0.2;
  if(!__t1280t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1280t__,&__t1281t,8);
  __t1282t=0;
  __t_errcode=get__t567t(__t1271t__buffer__unsafe_ptr,__t1271t__buffer__unsafe_size,__t1271t__buffer__unsafe_offset,__t1271t__buffer__unsafe_align,__t1271t__length,__t1282t,&__t1283t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1283t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1284t__value,__t1283t__,8);
  print__t368t(__t1284t__value);
  __t1286t=1;
  __t_errcode=get__t567t(__t1271t__buffer__unsafe_ptr,__t1271t__buffer__unsafe_size,__t1271t__buffer__unsafe_offset,__t1271t__buffer__unsafe_align,__t1271t__length,__t1286t,&__t1287t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1287t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1288t__value,__t1287t__,8);
  print__t368t(__t1288t__value);
  
  __t_failure:__t1272t____t563t____t475t=0;
  neq__t142t(__t1271t__buffer__unsafe_size,__t1272t____t563t____t475t,&__t1272t____t563t____t476t__);
  if(__t1272t____t563t____t476t__){
  __t1271t__buffer__unsafe_size=0;
  __t1271t__buffer__unsafe_size=__t1271t__buffer__unsafe_size;
  __t1271t__buffer__unsafe_ptr=__t1271t__buffer__unsafe_ptr;
  free__t466t(&__t1271t__buffer__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1266t();return 0;}