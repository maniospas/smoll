#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[33] = {"noerr",
"error",
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
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
"user input was not a float",
"invalid int conversion from empty string",
"invalid int conversion from string with only a sign",
"invalid integer int from non-number string",
"invalid nat conversion from empty string",
"invalid nat conversion from non-number string",
"invalid float conversion from empty string",
"invalid float conversion from string with only a sign",
"invalid float conversion from non-number string",
"invalid float conversion from string without a value after the dot",
"can only place vectors on contiguous buffers",
"vector exceeeds buffer limits",
"different vector sizes"
};

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1224v(char** __temp1541v, uint64_t* __temp1542v, uint64_t* __temp1543v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1541v=unsafe_ptr;
  *__temp1542v=unsafe_size;
  *__temp1543v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1544v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1544v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1545v) {
  char* allocated=*__temp1545v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1545v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1546v) {
  int value=0;
  *__temp1546v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1547v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1547v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1548v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1548v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1549v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1549v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1550v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1550v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1551v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1551v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1552v) {
  char* unsafe_ptr=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=malloc(bytes);
  failed=unsafe_ptr==0;
  if(failed){
  __temp_errcode=8;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1552v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1553v, uint64_t* __temp1554v, uint64_t* __temp1555v, uint64_t size, char** __temp1556v, uint64_t* __temp1557v, uint64_t* __temp1558v) {
  char* buffer__unsafe_ptr=*__temp1553v;
  uint64_t buffer__unsafe_size=*__temp1554v;
  uint64_t buffer__unsafe_align=*__temp1555v;
  int __temp468v=0;
  char __temp469v__=0;
  uint64_t __temp470v=0;
  char __temp472v__=0;
  uint64_t __temp473v=0;
  char __temp474v__=0;
  uint64_t __temp475v=0;
  uint64_t __temp476v__=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t bytes=0;
  char* __temp481v__=0;
  uint64_t __temp482v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  neq__temp142v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  mul__temp194v(buffer__unsafe_align,size,&__temp476v__);
  zero__temp462v(buffer__unsafe_ptr,__temp475v,__temp476v__);
  }
  goto __temp_return;
  }
  __temp478v=0;
  neq__temp142v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp194v(buffer__unsafe_align,size,&__temp480v__);
  bytes=__temp480v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp481v__;
  __temp482v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp482v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp469v__);
  if(__temp469v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1553v=buffer__unsafe_ptr;
  *__temp1554v=buffer__unsafe_size;
  *__temp1555v=buffer__unsafe_align;
  *__temp1556v=buffer__unsafe_ptr;
  *__temp1557v=buffer__unsafe_size;
  *__temp1558v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp654v(char** __temp1559v, uint64_t* __temp1560v, uint64_t* __temp1561v, char** __temp1562v, uint64_t* __temp1563v, uint64_t* __temp1564v, uint64_t* __temp1565v) {
  char* buf__unsafe_ptr=*__temp1559v;
  uint64_t buf__unsafe_size=*__temp1560v;
  uint64_t buf__unsafe_align=*__temp1561v;
  uint64_t __temp655v=0;
  uint64_t __temp656v=0;
  uint64_t pos=0;
  __temp655v=0;
  __temp656v=__temp655v;
  pos=__temp656v;
  goto __temp_return;
  __temp_return:
  *__temp1559v=buf__unsafe_ptr;
  *__temp1560v=buf__unsafe_size;
  *__temp1561v=buf__unsafe_align;
  *__temp1562v=buf__unsafe_ptr;
  *__temp1563v=buf__unsafe_size;
  *__temp1564v=buf__unsafe_align;
  *__temp1565v=pos;
}

static inline __attribute__((always_inline)) void new__temp1222v() {
  goto __temp_return;
  __temp_return:
}

static inline __attribute__((always_inline)) void vec__temp1227v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1566v, uint64_t* __temp1567v, uint64_t* __temp1568v) {
  goto __temp_return;
  __temp_return:
  *__temp1566v=unsafe_ptr;
  *__temp1567v=pos;
  *__temp1568v=length;
}

static inline __attribute__((always_inline)) int vec__temp1237v(uint64_t length, char** __temp1569v, uint64_t* __temp1570v, uint64_t* __temp1571v) {
  char* __temp1238v__unsafe_ptr=0;
  uint64_t __temp1238v__unsafe_size=0;
  uint64_t __temp1238v__unsafe_align=0;
  char* __temp1239v__unsafe_ptr=0;
  uint64_t __temp1239v__unsafe_size=0;
  uint64_t __temp1239v__unsafe_align=0;
  char* __temp1240v__unsafe_ptr=0;
  uint64_t __temp1240v__unsafe_size=0;
  uint64_t __temp1240v__unsafe_align=0;
  char __temp1241v____temp469v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  uint64_t __temp1242v=0;
  char* __temp1243v__unsafe_ptr=0;
  uint64_t __temp1243v__pos=0;
  uint64_t __temp1243v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1224v(&__temp1238v__unsafe_ptr,&__temp1238v__unsafe_size,&__temp1238v__unsafe_align);
  __temp1239v__unsafe_ptr=__temp1238v__unsafe_ptr;
  __temp1239v__unsafe_size=__temp1238v__unsafe_size;
  __temp1239v__unsafe_align=__temp1238v__unsafe_align;
  __temp_errcode=alloc__temp467v(&__temp1239v__unsafe_ptr,&__temp1239v__unsafe_size,&__temp1239v__unsafe_align,length,&__temp1240v__unsafe_ptr,&__temp1240v__unsafe_size,&__temp1240v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1240v__unsafe_ptr;
  buf__unsafe_size=__temp1240v__unsafe_size;
  buf__unsafe_align=__temp1240v__unsafe_align;
  __temp1242v=0;
  vec__temp1227v(buf__unsafe_ptr,__temp1242v,length,&__temp1243v__unsafe_ptr,&__temp1243v__pos,&__temp1243v__length);
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1243v__unsafe_ptr,&__temp1241v____temp469v__);
  if(__temp1241v____temp469v__){
  __temp1240v__unsafe_size=0;
  __temp1240v__unsafe_size=__temp1240v__unsafe_size;
  free__temp461v(&__temp1243v__unsafe_ptr);
  }
  __temp_return:
  *__temp1569v=__temp1243v__unsafe_ptr;
  *__temp1570v=__temp1243v__pos;
  *__temp1571v=__temp1243v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1572v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1572v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1573v) {
  *__temp1573v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1574v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1574v=__temp464v__;
}

static inline __attribute__((always_inline)) void mutget__temp1245v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1575v) {
  uint64_t __temp1246v=0;
  uint64_t __temp1247v__=0;
  uint64_t __temp1248v__=0;
  char* __temp1249v__=0;
  __temp1246v=8;
  add__temp170v(i,v__pos,&__temp1247v__);
  mul__temp194v(__temp1246v,__temp1247v__,&__temp1248v__);
  add__temp463v(v__unsafe_ptr,__temp1248v__,&__temp1249v__);
  goto __temp_return;
  __temp_return:
  *__temp1575v=__temp1249v__;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1576v, uint64_t* __temp1577v) {
  int __temp436v=0;
  uint64_t __temp437v=0;
  uint64_t _from=0;
  uint64_t __temp438v=0;
  uint64_t from=0;
  __temp437v=0;
  _from=__temp437v;
  __temp438v=_from;
  from=__temp438v;
  goto __temp_return;
  __temp_return:
  *__temp1576v=from;
  *__temp1577v=to;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1578v) {
  goto __temp_return;
  __temp_return:
  *__temp1578v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1579v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1579v=z;
}

static inline __attribute__((always_inline)) int vec__temp1229v(char** __temp1580v, uint64_t* __temp1581v, uint64_t* __temp1582v, uint64_t* __temp1583v, uint64_t length, char** __temp1584v, uint64_t* __temp1585v, uint64_t* __temp1586v) {
  char* allocator__buf__unsafe_ptr=*__temp1580v;
  uint64_t allocator__buf__unsafe_size=*__temp1581v;
  uint64_t allocator__buf__unsafe_align=*__temp1582v;
  uint64_t allocator__pos=*__temp1583v;
  uint64_t __temp1230v=0;
  char __temp1231v__=0;
  uint64_t __temp1232v__=0;
  uint64_t __temp1233v__=0;
  char __temp1234v__=0;
  uint64_t start=0;
  uint64_t __temp1235v__=0;
  char* __temp1236v__unsafe_ptr=0;
  uint64_t __temp1236v__pos=0;
  uint64_t __temp1236v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1230v=8;
  neq__temp142v(allocator__buf__unsafe_align,__temp1230v,&__temp1231v__);
  if(__temp1231v__){
  __temp_errcode=30;
  goto __temp_failure;
  }
  add__temp170v(allocator__pos,length,&__temp1232v__);
  len__temp537v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_align,&__temp1233v__);
  gt__temp271v(__temp1232v__,__temp1233v__,&__temp1234v__);
  if(__temp1234v__){
  __temp_errcode=31;
  goto __temp_failure;
  }
  start=allocator__pos;
  add__temp170v(allocator__pos,length,&__temp1235v__);
  allocator__pos=__temp1235v__;
  vec__temp1227v(allocator__buf__unsafe_ptr,start,length,&__temp1236v__unsafe_ptr,&__temp1236v__pos,&__temp1236v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1580v=allocator__buf__unsafe_ptr;
  *__temp1581v=allocator__buf__unsafe_size;
  *__temp1582v=allocator__buf__unsafe_align;
  *__temp1583v=allocator__pos;
  *__temp1584v=__temp1236v__unsafe_ptr;
  *__temp1585v=__temp1236v__pos;
  *__temp1586v=__temp1236v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1587v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1587v=z;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1588v, uint64_t r__to, uint64_t* __temp1589v) {
  uint64_t r__from=*__temp1588v;
  char __temp440v__=0;
  uint64_t ret=0;
  uint64_t __temp441v=0;
  uint64_t __temp442v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(r__from,r__to,&__temp440v__);
  if(__temp440v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp441v=1;
  add__temp170v(ret,__temp441v,&__temp442v__);
  r__from=__temp442v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1588v=r__from;
  *__temp1589v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp1250v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1590v) {
  uint64_t __temp1251v=0;
  uint64_t __temp1252v__=0;
  uint64_t __temp1253v__=0;
  char* __temp1254v__=0;
  __temp1251v=8;
  add__temp170v(i,v__pos,&__temp1252v__);
  mul__temp194v(__temp1251v,__temp1252v__,&__temp1253v__);
  add__temp463v(v__unsafe_ptr,__temp1253v__,&__temp1254v__);
  goto __temp_return;
  __temp_return:
  *__temp1590v=__temp1254v__;
}

static inline __attribute__((always_inline)) int at__temp1256v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __temp1591v) {
  char* __temp1257v__=0;
  double __temp1258v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  get__temp1250v(v__unsafe_ptr,v__pos,v__length,i,&__temp1257v__);
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(&__temp1258v__z,__temp1257v__,8);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1591v=__temp1258v__z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1592v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1592v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1593v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1593v=z;
}

int add__temp1295v(char** __temp1594v, uint64_t* __temp1595v, uint64_t* __temp1596v, uint64_t* __temp1597v, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1598v, uint64_t* __temp1599v, uint64_t* __temp1600v) {
  char* allocator__buf__unsafe_ptr=*__temp1594v;
  uint64_t allocator__buf__unsafe_size=*__temp1595v;
  uint64_t allocator__buf__unsafe_align=*__temp1596v;
  uint64_t allocator__pos=*__temp1597v;
  int __temp1296v=0;
  char __temp1297v__=0;
  char* __temp1298v__unsafe_ptr=0;
  uint64_t __temp1298v__pos=0;
  uint64_t __temp1298v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1299v__from=0;
  uint64_t __temp1299v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char* p1=0;
  char __temp1300v=0;
  uint64_t __temp1301v__=0;
  uint64_t i=0;
  char* __temp1302v__=0;
  char* __temp1303v__=0;
  double __temp1304v__z=0;
  double __temp1305v__=0;
  double __temp1306v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  neq__temp142v(v1__length,v2__length,&__temp1297v__);
  if(__temp1297v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  __temp_errcode=vec__temp1229v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_align,&allocator__pos,v1__length,&__temp1298v__unsafe_ptr,&__temp1298v__pos,&__temp1298v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1298v__unsafe_ptr;
  v__pos=__temp1298v__pos;
  v__length=__temp1298v__length;
  range__temp435v(v1__length,&__temp1299v__from,&__temp1299v__to);
  it__from=__temp1299v__from;
  it__to=__temp1299v__to;
  p1=v1__unsafe_ptr;
  while(1){
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1301v__);
  __temp1300v=__temp_complain;
  i=__temp1301v__;
  __temp1300v=__temp1300v==0;
  if(!__temp1300v){
  break;
  }
  mutget__temp1245v(v__unsafe_ptr,v__pos,v__length,i,&__temp1302v__);
  get__temp1250v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1303v__);
  if(!__temp1303v__){
  goto __temp_failure;
  }
  memcpy(&__temp1304v__z,__temp1303v__,8);
  __temp_errcode=at__temp1256v(v2__unsafe_ptr,v2__pos,v2__length,i,&__temp1305v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  add__temp148v(__temp1304v__z,__temp1305v__,&__temp1306v__);
  if(!__temp1302v__){
  goto __temp_failure;
  }
  memcpy(__temp1302v__,&__temp1306v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1594v=allocator__buf__unsafe_ptr;
  *__temp1595v=allocator__buf__unsafe_size;
  *__temp1596v=allocator__buf__unsafe_align;
  *__temp1597v=allocator__pos;
  *__temp1598v=v__unsafe_ptr;
  *__temp1599v=v__pos;
  *__temp1600v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void at__temp1255v(double number, uint64_t i, double* __temp1601v) {
  goto __temp_return;
  __temp_return:
  *__temp1601v=number;
}

static inline __attribute__((always_inline)) void mul__temp172v(double x, double y, double* __temp1602v) {
  int __temp173v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1602v=z;
}

int mul__temp1404v(char** __temp1603v, uint64_t* __temp1604v, uint64_t* __temp1605v, uint64_t* __temp1606v, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __temp1607v, uint64_t* __temp1608v, uint64_t* __temp1609v) {
  char* allocator__buf__unsafe_ptr=*__temp1603v;
  uint64_t allocator__buf__unsafe_size=*__temp1604v;
  uint64_t allocator__buf__unsafe_align=*__temp1605v;
  uint64_t allocator__pos=*__temp1606v;
  int __temp1405v=0;
  char* __temp1406v__unsafe_ptr=0;
  uint64_t __temp1406v__pos=0;
  uint64_t __temp1406v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1407v__from=0;
  uint64_t __temp1407v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1408v=0;
  uint64_t __temp1409v__=0;
  uint64_t i=0;
  char* __temp1410v__=0;
  char* __temp1411v__=0;
  double __temp1412v__z=0;
  double __temp1413v__=0;
  double __temp1414v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=vec__temp1229v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_align,&allocator__pos,v1__length,&__temp1406v__unsafe_ptr,&__temp1406v__pos,&__temp1406v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1406v__unsafe_ptr;
  v__pos=__temp1406v__pos;
  v__length=__temp1406v__length;
  range__temp435v(v1__length,&__temp1407v__from,&__temp1407v__to);
  it__from=__temp1407v__from;
  it__to=__temp1407v__to;
  while(1){
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1409v__);
  __temp1408v=__temp_complain;
  i=__temp1409v__;
  __temp1408v=__temp1408v==0;
  if(!__temp1408v){
  break;
  }
  mutget__temp1245v(v__unsafe_ptr,v__pos,v__length,i,&__temp1410v__);
  get__temp1250v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1411v__);
  if(!__temp1411v__){
  goto __temp_failure;
  }
  memcpy(&__temp1412v__z,__temp1411v__,8);
  at__temp1255v(v2,i,&__temp1413v__);
  mul__temp172v(__temp1412v__z,__temp1413v__,&__temp1414v__);
  if(!__temp1410v__){
  goto __temp_failure;
  }
  memcpy(__temp1410v__,&__temp1414v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1603v=allocator__buf__unsafe_ptr;
  *__temp1604v=allocator__buf__unsafe_size;
  *__temp1605v=allocator__buf__unsafe_align;
  *__temp1606v=allocator__pos;
  *__temp1607v=v__unsafe_ptr;
  *__temp1608v=v__pos;
  *__temp1609v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__temp1499v() {
  char* __temp1500v__unsafe_ptr=0;
  uint64_t __temp1500v__unsafe_size=0;
  uint64_t __temp1500v__unsafe_align=0;
  char* __temp1501v__unsafe_ptr=0;
  uint64_t __temp1501v__unsafe_size=0;
  uint64_t __temp1501v__unsafe_align=0;
  uint64_t __temp1502v=0;
  char* __temp1503v__unsafe_ptr=0;
  uint64_t __temp1503v__unsafe_size=0;
  uint64_t __temp1503v__unsafe_align=0;
  char __temp1504v____temp469v__=0;
  char* __temp1505v__buf__unsafe_ptr=0;
  uint64_t __temp1505v__buf__unsafe_size=0;
  uint64_t __temp1505v__buf__unsafe_align=0;
  uint64_t __temp1505v__pos=0;
  char* allocator__buf__unsafe_ptr=0;
  uint64_t allocator__buf__unsafe_size=0;
  uint64_t allocator__buf__unsafe_align=0;
  uint64_t allocator__pos=0;
  uint64_t __temp1507v=0;
  char* __temp1508v__unsafe_ptr=0;
  uint64_t __temp1508v__pos=0;
  uint64_t __temp1508v__length=0;
  char __temp1509v____temp1241v____temp469v__=0;
  uint64_t __temp1509v____temp1240v__unsafe_size=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __temp1511v=0;
  char* __temp1512v__unsafe_ptr=0;
  uint64_t __temp1512v__pos=0;
  uint64_t __temp1512v__length=0;
  char __temp1513v____temp1241v____temp469v__=0;
  uint64_t __temp1513v____temp1240v__unsafe_size=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __temp1514v=0;
  char* __temp1515v__=0;
  double __temp1516v=0;
  uint64_t __temp1517v=0;
  char* __temp1518v__=0;
  double __temp1519v=0;
  uint64_t __temp1520v=0;
  uint64_t __temp1521v__from=0;
  uint64_t __temp1521v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __temp1522v=0;
  char* __temp1523v__unsafe_ptr=0;
  uint64_t __temp1523v__pos=0;
  uint64_t __temp1523v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __temp1524v=0;
  uint64_t __temp1525v__=0;
  uint64_t i=0;
  char* __temp1526v__unsafe_ptr=0;
  uint64_t __temp1526v__pos=0;
  uint64_t __temp1526v__length=0;
  char* __temp1527v__unsafe_ptr=0;
  uint64_t __temp1527v__pos=0;
  uint64_t __temp1527v__length=0;
  double __temp1528v=0;
  char* __temp1529v__unsafe_ptr=0;
  uint64_t __temp1529v__pos=0;
  uint64_t __temp1529v__length=0;
  char* v3__unsafe_ptr=0;
  uint64_t v3__pos=0;
  uint64_t v3__length=0;
  uint64_t __temp1530v=0;
  char* __temp1531v__=0;
  double __temp1532v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1224v(&__temp1500v__unsafe_ptr,&__temp1500v__unsafe_size,&__temp1500v__unsafe_align);
  __temp1501v__unsafe_ptr=__temp1500v__unsafe_ptr;
  __temp1501v__unsafe_size=__temp1500v__unsafe_size;
  __temp1501v__unsafe_align=__temp1500v__unsafe_align;
  __temp1502v=200;
  __temp_errcode=alloc__temp467v(&__temp1501v__unsafe_ptr,&__temp1501v__unsafe_size,&__temp1501v__unsafe_align,__temp1502v,&__temp1503v__unsafe_ptr,&__temp1503v__unsafe_size,&__temp1503v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp654v(&__temp1503v__unsafe_ptr,&__temp1503v__unsafe_size,&__temp1503v__unsafe_align,&__temp1505v__buf__unsafe_ptr,&__temp1505v__buf__unsafe_size,&__temp1505v__buf__unsafe_align,&__temp1505v__pos);
  allocator__buf__unsafe_ptr=__temp1505v__buf__unsafe_ptr;
  allocator__buf__unsafe_size=__temp1505v__buf__unsafe_size;
  allocator__buf__unsafe_align=__temp1505v__buf__unsafe_align;
  allocator__pos=__temp1505v__pos;
  new__temp1222v();
  __temp1507v=10;
  __temp_errcode=vec__temp1237v(__temp1507v,&__temp1508v__unsafe_ptr,&__temp1508v__pos,&__temp1508v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v1__unsafe_ptr=__temp1508v__unsafe_ptr;
  v1__pos=__temp1508v__pos;
  v1__length=__temp1508v__length;
  new__temp1222v();
  __temp1511v=10;
  __temp_errcode=vec__temp1237v(__temp1511v,&__temp1512v__unsafe_ptr,&__temp1512v__pos,&__temp1512v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v2__unsafe_ptr=__temp1512v__unsafe_ptr;
  v2__pos=__temp1512v__pos;
  v2__length=__temp1512v__length;
  __temp1514v=0;
  mutget__temp1245v(v1__unsafe_ptr,v1__pos,v1__length,__temp1514v,&__temp1515v__);
  __temp1516v=1.0;
  if(!__temp1515v__){
  goto __temp_failure;
  }
  memcpy(__temp1515v__,&__temp1516v,8);
  __temp1517v=0;
  mutget__temp1245v(v2__unsafe_ptr,v2__pos,v2__length,__temp1517v,&__temp1518v__);
  __temp1519v=2.0;
  if(!__temp1518v__){
  goto __temp_failure;
  }
  memcpy(__temp1518v__,&__temp1519v,8);
  __temp1520v=5;
  range__temp435v(__temp1520v,&__temp1521v__from,&__temp1521v__to);
  it__from=__temp1521v__from;
  it__to=__temp1521v__to;
  __temp1522v=10;
  __temp_errcode=vec__temp1229v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_align,&allocator__pos,__temp1522v,&__temp1523v__unsafe_ptr,&__temp1523v__pos,&__temp1523v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1523v__unsafe_ptr;
  v__pos=__temp1523v__pos;
  v__length=__temp1523v__length;
  while(1){
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1525v__);
  __temp1524v=__temp_complain;
  i=__temp1525v__;
  __temp1524v=__temp1524v==0;
  if(!__temp1524v){
  break;
  }
  __temp_errcode=add__temp1295v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_align,&allocator__pos,v2__unsafe_ptr,v2__pos,v2__length,v__unsafe_ptr,v__pos,v__length,&__temp1526v__unsafe_ptr,&__temp1526v__pos,&__temp1526v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=add__temp1295v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_align,&allocator__pos,v1__unsafe_ptr,v1__pos,v1__length,__temp1526v__unsafe_ptr,__temp1526v__pos,__temp1526v__length,&__temp1527v__unsafe_ptr,&__temp1527v__pos,&__temp1527v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1528v=2.0;
  __temp_errcode=mul__temp1404v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_align,&allocator__pos,__temp1527v__unsafe_ptr,__temp1527v__pos,__temp1527v__length,__temp1528v,&__temp1529v__unsafe_ptr,&__temp1529v__pos,&__temp1529v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v3__unsafe_ptr=__temp1529v__unsafe_ptr;
  v3__pos=__temp1529v__pos;
  v3__length=__temp1529v__length;
  }
  __temp1530v=0;
  get__temp1250v(v3__unsafe_ptr,v3__pos,v3__length,__temp1530v,&__temp1531v__);
  if(!__temp1531v__){
  goto __temp_failure;
  }
  memcpy(&__temp1532v__z,__temp1531v__,8);
  print__temp368v(__temp1532v__z);
  
  __temp_failure:exists__temp412v(__temp1512v__unsafe_ptr,&__temp1513v____temp1241v____temp469v__);
  if(__temp1513v____temp1241v____temp469v__){
  __temp1513v____temp1240v__unsafe_size=0;
  __temp1513v____temp1240v__unsafe_size=__temp1513v____temp1240v__unsafe_size;
  free__temp461v(&__temp1512v__unsafe_ptr);
  }
  exists__temp412v(__temp1508v__unsafe_ptr,&__temp1509v____temp1241v____temp469v__);
  if(__temp1509v____temp1241v____temp469v__){
  __temp1509v____temp1240v__unsafe_size=0;
  __temp1509v____temp1240v__unsafe_size=__temp1509v____temp1240v__unsafe_size;
  free__temp461v(&__temp1508v__unsafe_ptr);
  }
  exists__temp412v(__temp1503v__unsafe_ptr,&__temp1504v____temp469v__);
  if(__temp1504v____temp469v__){
  __temp1503v__unsafe_size=0;
  __temp1503v__unsafe_size=__temp1503v__unsafe_size;
  free__temp461v(&__temp1503v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1219v(int64_t value, const char** __temp1610v) {
  int __temp1220v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1610v=ret;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1534v() {
  char __temp1535v=0;
  char __temp1537v=0;
  int64_t __temp1538v=0;
  int64_t error=0;
  const char* __temp1539v__=0;
  int __temp_complain=0;
  __temp_complain=safe_main__temp1499v();
  __temp1535v=__temp_complain;
  __temp1535v=__temp1535v==0;
  __temp1538v=__temp_complain;
  __temp1537v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1538v;
  __temp1537v=__temp1537v==0;
  if(__temp1537v){
  cstr__temp1219v(error,&__temp1539v__);
  print__temp363v(__temp1539v__);
  }
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1534v();return 0;}