#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t365t="\n";
const char* const __t1286t="starting point creation";
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

static inline __attribute__((always_inline)) void Point3D____t_buffer____buffer__t1290t(char** __t1316t, uint64_t* __t1317t, uint16_t* __t1318t, uint16_t* __t1319t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t1316t=unsafe_ptr;
  *__t1317t=unsafe_size;
  *__t1318t=unsafe_offset;
  *__t1319t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1320t) {
  int value=0;
  *__t1320t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1321t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1321t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1322t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1322t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1323t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1323t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1324t) {
  char* allocated=*__t1324t;
  if(allocated){
  free(allocated);
  }
  *__t1324t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1325t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1325t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1326t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1326t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1327t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1327t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1328t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1328t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1329t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1329t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1330t) {
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
  *__t1330t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1331t, uint64_t* __t1332t, uint16_t* __t1333t, uint16_t* __t1334t, uint64_t size, char** __t1335t, uint64_t* __t1336t, uint16_t* __t1337t, uint16_t* __t1338t) {
  char* buffer__unsafe_ptr=*__t1331t;
  uint64_t buffer__unsafe_size=*__t1332t;
  uint16_t buffer__unsafe_offset=*__t1333t;
  uint16_t buffer__unsafe_align=*__t1334t;
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
  *__t1331t=buffer__unsafe_ptr;
  *__t1332t=buffer__unsafe_size;
  *__t1333t=buffer__unsafe_offset;
  *__t1334t=buffer__unsafe_align;
  *__t1335t=__t486t__unsafe_ptr;
  *__t1336t=__t486t__unsafe_size;
  *__t1337t=__t486t__unsafe_offset;
  *__t1338t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1339t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1339t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1340t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1340t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1341t) {
  *__t1341t=to;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1342t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1342t=__t469t__;
}

static inline __attribute__((always_inline)) int mutget__t545t(char** __t1343t, uint64_t* __t1344t, uint16_t* __t1345t, uint16_t* __t1346t, uint64_t i, char** __t1347t) {
  char* buffer__unsafe_ptr=*__t1343t;
  uint64_t buffer__unsafe_size=*__t1344t;
  uint16_t buffer__unsafe_offset=*__t1345t;
  uint16_t buffer__unsafe_align=*__t1346t;
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
  *__t1343t=buffer__unsafe_ptr;
  *__t1344t=buffer__unsafe_size;
  *__t1345t=buffer__unsafe_offset;
  *__t1346t=buffer__unsafe_align;
  *__t1347t=__t551t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Point2D__t1266t(double x, double y, double* __t1348t, double* __t1349t) {
  goto __t_return;
  __t_return:
  *__t1348t=x;
  *__t1349t=y;
}

static inline __attribute__((always_inline)) void print__t363t(const char* value) {
  int __t364t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void Point3D__t1284t(double x, double y, double z, double* __t1350t, double* __t1351t, double* __t1352t) {
  double __t1285t__x=0;
  double __t1285t__y=0;
  double plane__x=0;
  double plane__y=0;
  Point2D__t1266t(x,y,&__t1285t__x,&__t1285t__y);
  plane__x=__t1285t__x;
  plane__y=__t1285t__y;
  print__t363t(__t1286t);
  goto __t_return;
  __t_return:
  *__t1350t=plane__x;
  *__t1351t=plane__y;
  *__t1352t=z;
}

static inline __attribute__((always_inline)) void len__t559t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1353t) {
  goto __t_return;
  __t_return:
  *__t1353t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void range__t436t(uint64_t to, uint64_t* __t1354t, uint64_t* __t1355t) {
  int __t437t=0;
  uint64_t __t438t=0;
  uint64_t _from=0;
  uint64_t __t439t=0;
  uint64_t from=0;
  __t438t=0;
  _from=__t438t;
  __t439t=_from;
  from=__t439t;
  goto __t_return;
  __t_return:
  *__t1354t=from;
  *__t1355t=to;
}

static inline __attribute__((always_inline)) int next__t440t(uint64_t* __t1356t, uint64_t r__to, uint64_t* __t1357t) {
  uint64_t r__from=*__t1356t;
  char __t441t__=0;
  uint64_t ret=0;
  uint64_t __t442t=0;
  uint64_t __t443t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(r__from,r__to,&__t441t__);
  if(__t441t__){
  __t_errcode=7;
  goto __t_failure;
  }
  ret=r__from;
  __t442t=1;
  add__t170t(ret,__t442t,&__t443t__);
  r__from=__t443t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1356t=r__from;
  *__t1357t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t552t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1358t) {
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
  *__t1358t=__t558t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t1359t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t1359t=__t71t__;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t1360t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1360t=z;
}

static inline __attribute__((always_inline)) int sum__t1269t(char* v__unsafe_ptr, uint64_t v__unsafe_size, uint16_t v__unsafe_offset, uint16_t v__unsafe_align, double* __t1361t, double* __t1362t) {
  double __t1270t=0;
  double __t1271t=0;
  double x=0;
  double __t1272t=0;
  double __t1273t=0;
  double y=0;
  uint64_t __t1274t__=0;
  uint64_t __t1275t__from=0;
  uint64_t __t1275t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1276t=0;
  uint64_t __t1277t__=0;
  uint64_t i=0;
  char* __t1278t__=0;
  double __t1279t__x=0;
  double __t1279t__y=0;
  double __t1280t__=0;
  char* __t1281t__=0;
  double __t1282t__x=0;
  double __t1282t__y=0;
  double __t1283t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1270t=0.0;
  __t1271t=__t1270t;
  x=__t1271t;
  __t1272t=0.0;
  __t1273t=__t1272t;
  y=__t1273t;
  len__t559t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,&__t1274t__);
  range__t436t(__t1274t__,&__t1275t__from,&__t1275t__to);
  it__from=__t1275t__from;
  it__to=__t1275t__to;
  while(1){
  __t_complain=next__t440t(&it__from,it__to,&__t1277t__);
  __t1276t=__t_complain;
  i=__t1277t__;
  __t1276t=__t1276t==0;
  if(!__t1276t){
  break;
  }
  __t_errcode=get__t552t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1278t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1278t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1279t__x,__t1278t__,8);
  memcpy(&__t1279t__y,__t1278t__+8,8);
  add__t148t(x,__t1279t__x,&__t1280t__);
  x=__t1280t__;
  __t_errcode=get__t552t(v__unsafe_ptr,v__unsafe_size,v__unsafe_offset,v__unsafe_align,i,&__t1281t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1281t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1282t__x,__t1281t__,8);
  memcpy(&__t1282t__y,__t1281t__+8,8);
  add__t148t(y,__t1282t__y,&__t1283t__);
  y=__t1283t__;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1361t=x;
  *__t1362t=y;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t368t(double value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1289t() {
  char* __t1292t__unsafe_ptr=0;
  uint64_t __t1292t__unsafe_size=0;
  uint16_t __t1292t__unsafe_offset=0;
  uint16_t __t1292t__unsafe_align=0;
  char* __t1293t__unsafe_ptr=0;
  uint64_t __t1293t__unsafe_size=0;
  uint16_t __t1293t__unsafe_offset=0;
  uint16_t __t1293t__unsafe_align=0;
  uint64_t __t1294t=0;
  char* __t1295t__unsafe_ptr=0;
  uint64_t __t1295t__unsafe_size=0;
  uint16_t __t1295t__unsafe_offset=0;
  uint16_t __t1295t__unsafe_align=0;
  uint64_t __t1296t____t475t=0;
  char __t1296t____t476t__=0;
  char* points__unsafe_ptr=0;
  uint64_t points__unsafe_size=0;
  uint16_t points__unsafe_offset=0;
  uint16_t points__unsafe_align=0;
  uint64_t __t1297t=0;
  char* __t1298t__=0;
  double __t1299t=0;
  double __t1300t=0;
  double __t1301t=0;
  double __t1302t__plane__x=0;
  double __t1302t__plane__y=0;
  double __t1302t__z=0;
  uint64_t __t1303t=0;
  char* __t1304t__=0;
  double __t1305t=0;
  double __t1306t=0;
  double __t1307t=0;
  double __t1308t__plane__x=0;
  double __t1308t__plane__y=0;
  double __t1308t__z=0;
  char* __t1309t__unsafe_ptr=0;
  uint64_t __t1309t__unsafe_size=0;
  uint16_t __t1309t__unsafe_offset=0;
  uint16_t __t1309t__unsafe_align=0;
  char* plane__unsafe_ptr=0;
  uint64_t plane__unsafe_size=0;
  uint16_t plane__unsafe_offset=0;
  uint16_t plane__unsafe_align=0;
  double __t1313t__x=0;
  double __t1313t__y=0;
  double sums__x=0;
  double sums__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  Point3D____t_buffer____buffer__t1290t(&__t1292t__unsafe_ptr,&__t1292t__unsafe_size,&__t1292t__unsafe_offset,&__t1292t__unsafe_align);
  __t1293t__unsafe_ptr=__t1292t__unsafe_ptr;
  __t1293t__unsafe_size=__t1292t__unsafe_size;
  __t1293t__unsafe_offset=__t1292t__unsafe_offset;
  __t1293t__unsafe_align=__t1292t__unsafe_align;
  __t1294t=10;
  __t_errcode=alloc__t473t(&__t1293t__unsafe_ptr,&__t1293t__unsafe_size,&__t1293t__unsafe_offset,&__t1293t__unsafe_align,__t1294t,&__t1295t__unsafe_ptr,&__t1295t__unsafe_size,&__t1295t__unsafe_offset,&__t1295t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  points__unsafe_ptr=__t1295t__unsafe_ptr;
  points__unsafe_size=__t1295t__unsafe_size;
  points__unsafe_offset=__t1295t__unsafe_offset;
  points__unsafe_align=__t1295t__unsafe_align;
  __t1297t=0;
  __t_errcode=mutget__t545t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1297t,&__t1298t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1299t=1.0;
  __t1300t=2.0;
  __t1301t=3.0;
  Point3D__t1284t(__t1299t,__t1300t,__t1301t,&__t1302t__plane__x,&__t1302t__plane__y,&__t1302t__z);
  if(!__t1298t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1298t__,&__t1302t__plane__x,8);
  memcpy(__t1298t__+8,&__t1302t__plane__y,8);
  memcpy(__t1298t__+16,&__t1302t__z,8);
  __t1303t=1;
  __t_errcode=mutget__t545t(&points__unsafe_ptr,&points__unsafe_size,&points__unsafe_offset,&points__unsafe_align,__t1303t,&__t1304t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1305t=1.0;
  __t1306t=2.0;
  __t1307t=3.0;
  Point3D__t1284t(__t1305t,__t1306t,__t1307t,&__t1308t__plane__x,&__t1308t__plane__y,&__t1308t__z);
  if(!__t1304t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1304t__,&__t1308t__plane__x,8);
  memcpy(__t1304t__+8,&__t1308t__plane__y,8);
  memcpy(__t1304t__+16,&__t1308t__z,8);
  __t1309t__unsafe_ptr=points__unsafe_ptr;
  __t1309t__unsafe_size=points__unsafe_size;
  __t1309t__unsafe_offset=points__unsafe_offset+0;
  __t1309t__unsafe_align=points__unsafe_align;
  plane__unsafe_ptr=__t1309t__unsafe_ptr;
  plane__unsafe_size=__t1309t__unsafe_size;
  plane__unsafe_offset=__t1309t__unsafe_offset;
  plane__unsafe_align=__t1309t__unsafe_align;
  __t_errcode=sum__t1269t(plane__unsafe_ptr,plane__unsafe_size,plane__unsafe_offset,plane__unsafe_align,&__t1313t__x,&__t1313t__y);
  if(__t_errcode){
  goto __t_failure;
  }
  sums__x=__t1313t__x;
  sums__y=__t1313t__y;
  print__t368t(sums__x);
  print__t368t(sums__y);
  
  __t_failure:__t1296t____t475t=0;
  neq__t142t(__t1295t__unsafe_size,__t1296t____t475t,&__t1296t____t476t__);
  if(__t1296t____t476t__){
  __t1295t__unsafe_size=0;
  __t1295t__unsafe_size=__t1295t__unsafe_size;
  __t1295t__unsafe_ptr=__t1295t__unsafe_ptr;
  free__t466t(&__t1295t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1289t();return 0;}