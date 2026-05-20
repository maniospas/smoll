#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1270t=",";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1279t(char** __t1323t, uint64_t* __t1324t, uint16_t* __t1325t, uint16_t* __t1326t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1323t=unsafe_ptr;
  *__t1324t=unsafe_size;
  *__t1325t=unsafe_offset;
  *__t1326t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1327t) {
  int value=0;
  *__t1327t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1328t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1328t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1329t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1329t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1330t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1330t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1331t) {
  char* allocated=*__t1331t;
  if(allocated){
  free(allocated);
  }
  *__t1331t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1332t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1332t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1333t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1333t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1334t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1334t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1335t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1335t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1336t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1336t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1337t) {
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
  *__t1337t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1338t, uint64_t* __t1339t, uint16_t* __t1340t, uint16_t* __t1341t, uint64_t size, char** __t1342t, uint64_t* __t1343t, uint16_t* __t1344t, uint16_t* __t1345t) {
  char* buffer__unsafe_ptr=*__t1338t;
  uint64_t buffer__unsafe_size=*__t1339t;
  uint16_t buffer__unsafe_offset=*__t1340t;
  uint16_t buffer__unsafe_align=*__t1341t;
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
  *__t1338t=buffer__unsafe_ptr;
  *__t1339t=buffer__unsafe_size;
  *__t1340t=buffer__unsafe_offset;
  *__t1341t=buffer__unsafe_align;
  *__t1342t=__t486t__unsafe_ptr;
  *__t1343t=__t486t__unsafe_size;
  *__t1344t=__t486t__unsafe_offset;
  *__t1345t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1346t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1346t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1347t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1347t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1348t) {
  *__t1348t=to;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1349t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1349t=__t469t__;
}

static inline __attribute__((always_inline)) int mutget__t545t(char** __t1350t, uint64_t* __t1351t, uint16_t* __t1352t, uint16_t* __t1353t, uint64_t i, char** __t1354t) {
  char* buffer__unsafe_ptr=*__t1350t;
  uint64_t buffer__unsafe_size=*__t1351t;
  uint16_t buffer__unsafe_offset=*__t1352t;
  uint16_t buffer__unsafe_align=*__t1353t;
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
  *__t1350t=buffer__unsafe_ptr;
  *__t1351t=buffer__unsafe_size;
  *__t1352t=buffer__unsafe_offset;
  *__t1353t=buffer__unsafe_align;
  *__t1354t=__t551t__;
  
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

static inline __attribute__((always_inline)) void print__t368t(double value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__t462t(char* allocated, uint64_t bytes, char** __t1356t) {
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
  *__t1356t=__t465t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1357t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1357t=z;
}

static inline __attribute__((always_inline)) int resize__t518t(char** __t1358t, uint64_t* __t1359t, uint16_t* __t1360t, uint16_t* __t1361t, uint64_t size, char** __t1362t, uint64_t* __t1363t, uint16_t* __t1364t, uint16_t* __t1365t) {
  char* buffer__unsafe_ptr=*__t1358t;
  uint64_t buffer__unsafe_size=*__t1359t;
  uint16_t buffer__unsafe_offset=*__t1360t;
  uint16_t buffer__unsafe_align=*__t1361t;
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
  *__t1358t=buffer__unsafe_ptr;
  *__t1359t=buffer__unsafe_size;
  *__t1360t=buffer__unsafe_offset;
  *__t1361t=buffer__unsafe_align;
  *__t1362t=buffer__unsafe_ptr;
  *__t1363t=buffer__unsafe_size;
  *__t1364t=buffer__unsafe_offset;
  *__t1365t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t1366t) {
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
  __t_errcode=4;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1366t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t537t(char** __t1367t, uint64_t* __t1368t, uint16_t* __t1369t, uint16_t* __t1370t, char** __t1371t) {
  char* buffer__unsafe_ptr=*__t1367t;
  uint64_t buffer__unsafe_size=*__t1368t;
  uint16_t buffer__unsafe_offset=*__t1369t;
  uint16_t buffer__unsafe_align=*__t1370t;
  uint64_t __t538t=0;
  char __t539t__=0;
  uint64_t __t540t=0;
  uint64_t __t541t__=0;
  uint64_t __t542t__=0;
  uint64_t __t543t__=0;
  char* __t544t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t538t=0;
  eq__t118t(__t538t,buffer__unsafe_size,&__t539t__);
  if(__t539t__){
  __t_errcode=12;
  goto __t_failure;
  }
  __t540t=1;
  __t_errcode=sub__t347t(buffer__unsafe_size,__t540t,&__t541t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t470t(buffer__unsafe_align,&__t542t__);
  mul__t194t(__t541t__,__t542t__,&__t543t__);
  add__t468t(buffer__unsafe_ptr,__t543t__,&__t544t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1367t=buffer__unsafe_ptr;
  *__t1368t=buffer__unsafe_size;
  *__t1369t=buffer__unsafe_offset;
  *__t1370t=buffer__unsafe_align;
  *__t1371t=__t544t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Field____t_buffer____buffer__t1298t(char** __t1372t, uint64_t* __t1373t, uint16_t* __t1374t, uint16_t* __t1375t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=32;
  *__t1372t=unsafe_ptr;
  *__t1373t=unsafe_size;
  *__t1374t=unsafe_offset;
  *__t1375t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t366t(double value, const char* endl) {
  int __t367t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__t1268t(char* f) {
  double __t1269t__a__x=0;
  double __t1269t__a__y=0;
  double __t1269t__b__x=0;
  double __t1269t__b__y=0;
  double __t1272t__a__x=0;
  double __t1272t__a__y=0;
  double __t1272t__b__x=0;
  double __t1272t__b__y=0;
  double __t1274t__a__x=0;
  double __t1274t__a__y=0;
  double __t1274t__b__x=0;
  double __t1274t__b__y=0;
  double __t1276t__a__x=0;
  double __t1276t__a__y=0;
  double __t1276t__b__x=0;
  double __t1276t__b__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1269t__a__x,f,8);
  memcpy(&__t1269t__a__y,f+8,8);
  memcpy(&__t1269t__b__x,f+16,8);
  memcpy(&__t1269t__b__y,f+24,8);
  print__t366t(__t1269t__a__x,__t1270t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1272t__a__x,f,8);
  memcpy(&__t1272t__a__y,f+8,8);
  memcpy(&__t1272t__b__x,f+16,8);
  memcpy(&__t1272t__b__y,f+24,8);
  print__t366t(__t1272t__a__y,__t1270t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1274t__a__x,f,8);
  memcpy(&__t1274t__a__y,f+8,8);
  memcpy(&__t1274t__b__x,f+16,8);
  memcpy(&__t1274t__b__y,f+24,8);
  print__t366t(__t1274t__b__x,__t1270t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1276t__a__x,f,8);
  memcpy(&__t1276t__a__y,f+8,8);
  memcpy(&__t1276t__b__x,f+16,8);
  memcpy(&__t1276t__b__y,f+24,8);
  print__t368t(__t1276t__b__y);
  
  __t_failure:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1278t() {
  char* __t1281t__unsafe_ptr=0;
  uint64_t __t1281t__unsafe_size=0;
  uint16_t __t1281t__unsafe_offset=0;
  uint16_t __t1281t__unsafe_align=0;
  uint64_t __t1282t=0;
  char* __t1283t__unsafe_ptr=0;
  uint64_t __t1283t__unsafe_size=0;
  uint16_t __t1283t__unsafe_offset=0;
  uint16_t __t1283t__unsafe_align=0;
  uint64_t __t1284t____t475t=0;
  char __t1284t____t476t__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint16_t f__unsafe_offset=0;
  uint16_t f__unsafe_align=0;
  uint64_t __t1285t=0;
  char* __t1286t__=0;
  double __t1287t=0;
  uint64_t __t1288t=0;
  char* __t1289t__=0;
  double __t1290t__value=0;
  uint64_t __t1292t=0;
  char* __t1293t__=0;
  char* f0=0;
  double __t1294t__value=0;
  uint64_t __t1295t=0;
  char* __t1296t__unsafe_ptr=0;
  uint64_t __t1296t__unsafe_size=0;
  uint16_t __t1296t__unsafe_offset=0;
  uint16_t __t1296t__unsafe_align=0;
  char* __t1297t__=0;
  char* __t1300t__unsafe_ptr=0;
  uint64_t __t1300t__unsafe_size=0;
  uint16_t __t1300t__unsafe_offset=0;
  uint16_t __t1300t__unsafe_align=0;
  char* __t1301t__unsafe_ptr=0;
  uint64_t __t1301t__unsafe_size=0;
  uint16_t __t1301t__unsafe_offset=0;
  uint16_t __t1301t__unsafe_align=0;
  uint64_t __t1302t=0;
  char* __t1303t__unsafe_ptr=0;
  uint64_t __t1303t__unsafe_size=0;
  uint16_t __t1303t__unsafe_offset=0;
  uint16_t __t1303t__unsafe_align=0;
  uint64_t __t1304t____t475t=0;
  char __t1304t____t476t__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint16_t p__unsafe_offset=0;
  uint16_t p__unsafe_align=0;
  uint64_t __t1305t=0;
  char* __t1306t__=0;
  double __t1307t=0;
  double __t1308t=0;
  double __t1309t=0;
  double __t1310t=0;
  uint64_t __t1311t=0;
  char* __t1312t__=0;
  double __t1314t=0;
  char* __t1315t__unsafe_ptr=0;
  uint64_t __t1315t__unsafe_size=0;
  uint16_t __t1315t__unsafe_offset=0;
  uint16_t __t1315t__unsafe_align=0;
  char* __t1316t__unsafe_ptr=0;
  uint64_t __t1316t__unsafe_size=0;
  uint16_t __t1316t__unsafe_offset=0;
  uint16_t __t1316t__unsafe_align=0;
  uint64_t __t1317t=0;
  char* __t1318t__unsafe_ptr=0;
  uint64_t __t1318t__unsafe_size=0;
  uint16_t __t1318t__unsafe_offset=0;
  uint16_t __t1318t__unsafe_align=0;
  uint64_t __t1319t____t475t=0;
  char __t1319t____t476t__=0;
  char* __t1320t__=0;
  char* n=0;
  double __t1321t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1279t(&__t1281t__unsafe_ptr,&__t1281t__unsafe_size,&__t1281t__unsafe_offset,&__t1281t__unsafe_align);
  __t1282t=1;
  __t_errcode=alloc__t473t(&__t1281t__unsafe_ptr,&__t1281t__unsafe_size,&__t1281t__unsafe_offset,&__t1281t__unsafe_align,__t1282t,&__t1283t__unsafe_ptr,&__t1283t__unsafe_size,&__t1283t__unsafe_offset,&__t1283t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1285t=0;
  __t_errcode=mutget__t545t(&__t1283t__unsafe_ptr,&__t1283t__unsafe_size,&__t1283t__unsafe_offset,&__t1283t__unsafe_align,__t1285t,&__t1286t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1287t=1.0;
  if(!__t1286t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1286t__,&__t1287t,8);
  __t1288t=0;
  __t_errcode=get__t552t(__t1283t__unsafe_ptr,__t1283t__unsafe_size,__t1283t__unsafe_offset,__t1283t__unsafe_align,__t1288t,&__t1289t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1289t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1290t__value,__t1289t__,8);
  print__t368t(__t1290t__value);
  __t1292t=0;
  __t_errcode=mutget__t545t(&__t1283t__unsafe_ptr,&__t1283t__unsafe_size,&__t1283t__unsafe_offset,&__t1283t__unsafe_align,__t1292t,&__t1293t__);
  if(__t_errcode){
  goto __t_failure;
  }
  f0=__t1293t__;
  if(!f0){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1294t__value,f0,8);
  __t1295t=2;
  __t_errcode=resize__t518t(&__t1283t__unsafe_ptr,&__t1283t__unsafe_size,&__t1283t__unsafe_offset,&__t1283t__unsafe_align,__t1295t,&__t1296t__unsafe_ptr,&__t1296t__unsafe_size,&__t1296t__unsafe_offset,&__t1296t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t537t(&__t1283t__unsafe_ptr,&__t1283t__unsafe_size,&__t1283t__unsafe_offset,&__t1283t__unsafe_align,&__t1297t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1297t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1297t__,&__t1294t__value,8);
  Field____t_buffer____buffer__t1298t(&__t1300t__unsafe_ptr,&__t1300t__unsafe_size,&__t1300t__unsafe_offset,&__t1300t__unsafe_align);
  __t1301t__unsafe_ptr=__t1300t__unsafe_ptr;
  __t1301t__unsafe_size=__t1300t__unsafe_size;
  __t1301t__unsafe_offset=__t1300t__unsafe_offset;
  __t1301t__unsafe_align=__t1300t__unsafe_align;
  __t1302t=1;
  __t_errcode=alloc__t473t(&__t1301t__unsafe_ptr,&__t1301t__unsafe_size,&__t1301t__unsafe_offset,&__t1301t__unsafe_align,__t1302t,&__t1303t__unsafe_ptr,&__t1303t__unsafe_size,&__t1303t__unsafe_offset,&__t1303t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t1303t__unsafe_ptr;
  p__unsafe_size=__t1303t__unsafe_size;
  p__unsafe_offset=__t1303t__unsafe_offset;
  p__unsafe_align=__t1303t__unsafe_align;
  __t1305t=0;
  __t_errcode=mutget__t545t(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_offset,&p__unsafe_align,__t1305t,&__t1306t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1307t=1.0;
  __t1308t=2.0;
  __t1309t=3.0;
  __t1310t=4.0;
  if(!__t1306t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1306t__,&__t1307t,8);
  memcpy(__t1306t__+8,&__t1308t,8);
  memcpy(__t1306t__+16,&__t1309t,8);
  memcpy(__t1306t__+24,&__t1310t,8);
  __t1311t=0;
  __t_errcode=get__t552t(p__unsafe_ptr,p__unsafe_size,p__unsafe_offset,p__unsafe_align,__t1311t,&__t1312t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1268t(__t1312t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1314t=1.0;
  float____t_buffer____buffer__t1279t(&__t1315t__unsafe_ptr,&__t1315t__unsafe_size,&__t1315t__unsafe_offset,&__t1315t__unsafe_align);
  __t1316t__unsafe_ptr=__t1315t__unsafe_ptr;
  __t1316t__unsafe_size=__t1315t__unsafe_size;
  __t1316t__unsafe_offset=__t1315t__unsafe_offset;
  __t1316t__unsafe_align=__t1315t__unsafe_align;
  __t1317t=1;
  __t_errcode=alloc__t473t(&__t1316t__unsafe_ptr,&__t1316t__unsafe_size,&__t1316t__unsafe_offset,&__t1316t__unsafe_align,__t1317t,&__t1318t__unsafe_ptr,&__t1318t__unsafe_size,&__t1318t__unsafe_offset,&__t1318t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t537t(&__t1318t__unsafe_ptr,&__t1318t__unsafe_size,&__t1318t__unsafe_offset,&__t1318t__unsafe_align,&__t1320t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1320t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1320t__,&__t1314t,8);
  n=__t1320t__;
  if(!n){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1321t__value,n,8);
  print__t368t(__t1321t__value);
  
  __t_failure:__t1319t____t475t=0;
  neq__t142t(__t1318t__unsafe_size,__t1319t____t475t,&__t1319t____t476t__);
  if(__t1319t____t476t__){
  __t1318t__unsafe_size=0;
  __t1318t__unsafe_size=__t1318t__unsafe_size;
  __t1318t__unsafe_ptr=__t1318t__unsafe_ptr;
  free__t466t(&__t1318t__unsafe_ptr);
  }
  __t1304t____t475t=0;
  neq__t142t(__t1303t__unsafe_size,__t1304t____t475t,&__t1304t____t476t__);
  if(__t1304t____t476t__){
  __t1303t__unsafe_size=0;
  __t1303t__unsafe_size=__t1303t__unsafe_size;
  __t1303t__unsafe_ptr=__t1303t__unsafe_ptr;
  free__t466t(&__t1303t__unsafe_ptr);
  }
  __t1284t____t475t=0;
  neq__t142t(__t1283t__unsafe_size,__t1284t____t475t,&__t1284t____t476t__);
  if(__t1284t____t476t__){
  __t1283t__unsafe_size=0;
  __t1283t__unsafe_size=__t1283t__unsafe_size;
  __t1283t__unsafe_ptr=__t1283t__unsafe_ptr;
  free__t466t(&__t1283t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1278t();return 0;}