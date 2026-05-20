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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1267t(char** __t1287t, uint64_t* __t1288t, uint16_t* __t1289t, uint16_t* __t1290t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1287t=unsafe_ptr;
  *__t1288t=unsafe_size;
  *__t1289t=unsafe_offset;
  *__t1290t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1291t) {
  int value=0;
  *__t1291t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1292t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1292t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1293t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1293t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1294t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1294t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1295t) {
  char* allocated=*__t1295t;
  if(allocated){
  free(allocated);
  }
  *__t1295t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1296t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1296t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1297t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1297t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1298t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1298t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1299t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1299t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1300t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1300t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1301t) {
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
  *__t1301t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1302t, uint64_t* __t1303t, uint16_t* __t1304t, uint16_t* __t1305t, uint64_t size, char** __t1306t, uint64_t* __t1307t, uint16_t* __t1308t, uint16_t* __t1309t) {
  char* buffer__unsafe_ptr=*__t1302t;
  uint64_t buffer__unsafe_size=*__t1303t;
  uint16_t buffer__unsafe_offset=*__t1304t;
  uint16_t buffer__unsafe_align=*__t1305t;
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
  *__t1302t=buffer__unsafe_ptr;
  *__t1303t=buffer__unsafe_size;
  *__t1304t=buffer__unsafe_offset;
  *__t1305t=buffer__unsafe_align;
  *__t1306t=__t486t__unsafe_ptr;
  *__t1307t=__t486t__unsafe_size;
  *__t1308t=__t486t__unsafe_offset;
  *__t1309t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1310t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1310t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1311t) {
  *__t1311t=to;
}

static inline __attribute__((always_inline)) int realloc__t462t(char* allocated, uint64_t bytes, char** __t1312t) {
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
  *__t1312t=__t465t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1313t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1313t=z;
}

static inline __attribute__((always_inline)) int resize__t518t(char** __t1314t, uint64_t* __t1315t, uint16_t* __t1316t, uint16_t* __t1317t, uint64_t size, char** __t1318t, uint64_t* __t1319t, uint16_t* __t1320t, uint16_t* __t1321t) {
  char* buffer__unsafe_ptr=*__t1314t;
  uint64_t buffer__unsafe_size=*__t1315t;
  uint16_t buffer__unsafe_offset=*__t1316t;
  uint16_t buffer__unsafe_align=*__t1317t;
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
  *__t1314t=buffer__unsafe_ptr;
  *__t1315t=buffer__unsafe_size;
  *__t1316t=buffer__unsafe_offset;
  *__t1317t=buffer__unsafe_align;
  *__t1318t=buffer__unsafe_ptr;
  *__t1319t=buffer__unsafe_size;
  *__t1320t=buffer__unsafe_offset;
  *__t1321t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1322t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1322t=z;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1323t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1323t=__t469t__;
}

static inline __attribute__((always_inline)) int mutget__t545t(char** __t1324t, uint64_t* __t1325t, uint16_t* __t1326t, uint16_t* __t1327t, uint64_t i, char** __t1328t) {
  char* buffer__unsafe_ptr=*__t1324t;
  uint64_t buffer__unsafe_size=*__t1325t;
  uint16_t buffer__unsafe_offset=*__t1326t;
  uint16_t buffer__unsafe_align=*__t1327t;
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
  *__t1324t=buffer__unsafe_ptr;
  *__t1325t=buffer__unsafe_size;
  *__t1326t=buffer__unsafe_offset;
  *__t1327t=buffer__unsafe_align;
  *__t1328t=__t551t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t559t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1329t) {
  goto __t_return;
  __t_return:
  *__t1329t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t376t(uint64_t value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__t552t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1330t) {
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
  *__t1330t=__t558t__;
  
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
  char* buf1__unsafe_ptr=0;
  uint64_t buf1__unsafe_size=0;
  uint16_t buf1__unsafe_offset=0;
  uint16_t buf1__unsafe_align=0;
  uint64_t __t1271t=0;
  char* __t1272t__unsafe_ptr=0;
  uint64_t __t1272t__unsafe_size=0;
  uint16_t __t1272t__unsafe_offset=0;
  uint16_t __t1272t__unsafe_align=0;
  uint64_t __t1273t____t475t=0;
  char __t1273t____t476t__=0;
  uint64_t __t1274t=0;
  char* __t1275t__unsafe_ptr=0;
  uint64_t __t1275t__unsafe_size=0;
  uint16_t __t1275t__unsafe_offset=0;
  uint16_t __t1275t__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  uint64_t buf2__unsafe_size=0;
  uint16_t buf2__unsafe_offset=0;
  uint16_t buf2__unsafe_align=0;
  uint64_t __t1276t=0;
  char* __t1277t__=0;
  double __t1278t=0;
  uint64_t __t1279t__=0;
  uint64_t __t1281t__=0;
  uint64_t __t1283t=0;
  char* __t1284t__=0;
  double __t1285t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1267t(&__t1269t__unsafe_ptr,&__t1269t__unsafe_size,&__t1269t__unsafe_offset,&__t1269t__unsafe_align);
  __t1270t__unsafe_ptr=__t1269t__unsafe_ptr;
  __t1270t__unsafe_size=__t1269t__unsafe_size;
  __t1270t__unsafe_offset=__t1269t__unsafe_offset;
  __t1270t__unsafe_align=__t1269t__unsafe_align;
  __t1271t=20;
  __t_errcode=alloc__t473t(&__t1270t__unsafe_ptr,&__t1270t__unsafe_size,&__t1270t__unsafe_offset,&__t1270t__unsafe_align,__t1271t,&__t1272t__unsafe_ptr,&__t1272t__unsafe_size,&__t1272t__unsafe_offset,&__t1272t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1274t=10;
  __t_errcode=resize__t518t(&__t1270t__unsafe_ptr,&__t1270t__unsafe_size,&__t1270t__unsafe_offset,&__t1270t__unsafe_align,__t1274t,&__t1275t__unsafe_ptr,&__t1275t__unsafe_size,&__t1275t__unsafe_offset,&__t1275t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1276t=0;
  __t_errcode=mutget__t545t(&__t1270t__unsafe_ptr,&__t1270t__unsafe_size,&__t1270t__unsafe_offset,&__t1270t__unsafe_align,__t1276t,&__t1277t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1278t=1.0;
  if(!__t1277t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1277t__,&__t1278t,8);
  len__t559t(__t1270t__unsafe_ptr,__t1270t__unsafe_size,__t1270t__unsafe_offset,__t1270t__unsafe_align,&__t1279t__);
  print__t376t(__t1270t__unsafe_size);
  len__t559t(__t1270t__unsafe_ptr,__t1270t__unsafe_size,__t1270t__unsafe_offset,__t1270t__unsafe_align,&__t1281t__);
  print__t376t(__t1270t__unsafe_size);
  __t1283t=0;
  __t_errcode=get__t552t(__t1270t__unsafe_ptr,__t1270t__unsafe_size,__t1270t__unsafe_offset,__t1270t__unsafe_align,__t1283t,&__t1284t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1284t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1285t__value,__t1284t__,8);
  print__t368t(__t1285t__value);
  
  __t_failure:__t1273t____t475t=0;
  neq__t142t(__t1272t__unsafe_size,__t1273t____t475t,&__t1273t____t476t__);
  if(__t1273t____t476t__){
  __t1272t__unsafe_size=0;
  __t1272t__unsafe_size=__t1272t__unsafe_size;
  __t1272t__unsafe_ptr=__t1272t__unsafe_ptr;
  free__t466t(&__t1272t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1266t();return 0;}