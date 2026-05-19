#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[37] = {"noerr",
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
"cannot place vectors on buffer offsets",
"vector exceeeds buffer limits",
"different vector sizes"
};

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1253v(char** __temp1740v, uint64_t* __temp1741v, uint16_t* __temp1742v, uint16_t* __temp1743v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1740v=unsafe_ptr;
  *__temp1741v=unsafe_size;
  *__temp1742v=unsafe_offset;
  *__temp1743v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1744v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1744v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1745v) {
  char* allocated=*__temp1745v;
  if(allocated){
  free(allocated);
  }
  *__temp1745v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1746v) {
  int value=0;
  *__temp1746v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1747v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1747v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1748v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1748v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1749v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1749v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1750v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1750v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1751v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1751v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1752v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1752v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1753v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1753v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1754v) {
  char* allocated=0;
  char __temp460v__=0;
  char __temp461v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  exists__temp412v(allocated,&__temp460v__);
  not__temp26v(__temp460v__,&__temp461v__);
  if(__temp461v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1754v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1755v, uint64_t* __temp1756v, uint16_t* __temp1757v, uint16_t* __temp1758v, uint64_t size, char** __temp1759v, uint64_t* __temp1760v, uint16_t* __temp1761v, uint16_t* __temp1762v) {
  char* buffer__unsafe_ptr=*__temp1755v;
  uint64_t buffer__unsafe_size=*__temp1756v;
  uint16_t buffer__unsafe_offset=*__temp1757v;
  uint16_t buffer__unsafe_align=*__temp1758v;
  int __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  char* ptr=0;
  char __temp478v__=0;
  uint64_t __temp479v=0;
  char __temp480v__=0;
  uint64_t __temp481v=0;
  uint64_t __temp482v__=0;
  uint64_t __temp483v__=0;
  char* __temp485v__unsafe_ptr=0;
  uint64_t __temp485v__unsafe_size=0;
  uint16_t __temp485v__unsafe_offset=0;
  uint16_t __temp485v__unsafe_align=0;
  uint64_t __temp486v=0;
  char __temp487v__=0;
  uint64_t __temp488v__=0;
  uint64_t __temp489v__=0;
  uint64_t bytes=0;
  char* __temp490v__=0;
  uint64_t __temp491v=0;
  char* __temp493v__unsafe_ptr=0;
  uint64_t __temp493v__unsafe_size=0;
  uint16_t __temp493v__unsafe_offset=0;
  uint16_t __temp493v__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp478v__);
  if(__temp478v__){
  __temp479v=0;
  neq__temp142v(size,__temp479v,&__temp480v__);
  if(__temp480v__){
  __temp481v=0;
  nat__temp470v(buffer__unsafe_align,&__temp482v__);
  mul__temp194v(__temp482v__,size,&__temp483v__);
  zero__temp467v(buffer__unsafe_ptr,__temp481v,__temp483v__);
  }
  __temp485v__unsafe_ptr=buffer__unsafe_ptr;
  __temp485v__unsafe_size=buffer__unsafe_size;
  __temp485v__unsafe_offset=buffer__unsafe_offset;
  __temp485v__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp486v=0;
  neq__temp142v(buffer__unsafe_size,__temp486v,&__temp487v__);
  if(__temp487v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp488v__);
  mul__temp194v(__temp488v__,size,&__temp489v__);
  bytes=__temp489v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp490v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp490v__;
  __temp491v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp491v,bytes);
  __temp493v__unsafe_ptr=buffer__unsafe_ptr;
  __temp493v__unsafe_size=buffer__unsafe_size;
  __temp493v__unsafe_offset=buffer__unsafe_offset;
  __temp493v__unsafe_align=buffer__unsafe_align;
  __temp485v__unsafe_ptr=__temp493v__unsafe_ptr;
  __temp485v__unsafe_size=__temp493v__unsafe_size;
  __temp485v__unsafe_offset=__temp493v__unsafe_offset;
  __temp485v__unsafe_align=__temp493v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp485v__unsafe_ptr,&__temp475v__);
  if(__temp475v__){
  __temp485v__unsafe_size=0;
  __temp485v__unsafe_size=__temp485v__unsafe_size;
  __temp485v__unsafe_ptr=__temp485v__unsafe_ptr;
  free__temp466v(&__temp485v__unsafe_ptr);
  }
  __temp_return:
  *__temp1755v=buffer__unsafe_ptr;
  *__temp1756v=buffer__unsafe_size;
  *__temp1757v=buffer__unsafe_offset;
  *__temp1758v=buffer__unsafe_align;
  *__temp1759v=__temp485v__unsafe_ptr;
  *__temp1760v=__temp485v__unsafe_size;
  *__temp1761v=__temp485v__unsafe_offset;
  *__temp1762v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1763v) {
  goto __temp_return;
  __temp_return:
  *__temp1763v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1764v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1764v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1765v) {
  int __temp348v__=0;
  int __temp349v=0;
  int __temp350v=0;
  char __temp351v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp93v(x,y,&__temp348v__);
  lt__temp247v(x,y,&__temp351v__);
  if(__temp351v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1765v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1766v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1766v=z;
}

static inline __attribute__((always_inline)) void circular__temp1252v(char** __temp1767v, uint64_t* __temp1768v, uint16_t* __temp1769v, uint16_t* __temp1770v, uint64_t* __temp1771v, uint64_t length, char** __temp1772v, uint64_t* __temp1773v, uint16_t* __temp1774v, uint16_t* __temp1775v, uint64_t* __temp1776v, uint64_t* __temp1777v) {
  char* buf__unsafe_ptr=*__temp1767v;
  uint64_t buf__unsafe_size=*__temp1768v;
  uint16_t buf__unsafe_offset=*__temp1769v;
  uint16_t buf__unsafe_align=*__temp1770v;
  uint64_t pos=*__temp1771v;
  goto __temp_return;
  __temp_return:
  *__temp1767v=buf__unsafe_ptr;
  *__temp1768v=buf__unsafe_size;
  *__temp1769v=buf__unsafe_offset;
  *__temp1770v=buf__unsafe_align;
  *__temp1771v=pos;
  *__temp1772v=buf__unsafe_ptr;
  *__temp1773v=buf__unsafe_size;
  *__temp1774v=buf__unsafe_offset;
  *__temp1775v=buf__unsafe_align;
  *__temp1776v=pos;
  *__temp1777v=length;
}

static inline __attribute__((always_inline)) int circular__temp1277v(char** __temp1778v, uint64_t* __temp1779v, uint16_t* __temp1780v, uint16_t* __temp1781v, char** __temp1782v, uint64_t* __temp1783v, uint16_t* __temp1784v, uint16_t* __temp1785v, uint64_t* __temp1786v, uint64_t* __temp1787v) {
  char* buf__unsafe_ptr=*__temp1778v;
  uint64_t buf__unsafe_size=*__temp1779v;
  uint16_t buf__unsafe_offset=*__temp1780v;
  uint16_t buf__unsafe_align=*__temp1781v;
  int __temp1278v=0;
  int __temp1279v=0;
  uint64_t __temp1280v=0;
  uint64_t __temp1281v=0;
  uint64_t pos=0;
  int __temp1282v=0;
  uint64_t __temp1283v__=0;
  uint64_t __temp1284v__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __temp1285v__=0;
  char* __temp1286v__buf__unsafe_ptr=0;
  uint64_t __temp1286v__buf__unsafe_size=0;
  uint16_t __temp1286v__buf__unsafe_offset=0;
  uint16_t __temp1286v__buf__unsafe_align=0;
  uint64_t __temp1286v__pos=0;
  uint64_t __temp1286v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1280v=0;
  __temp1281v=__temp1280v;
  pos=__temp1281v;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp1283v__);
  __temp_errcode=sub__temp347v(__temp1283v__,pos,&__temp1284v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1284v__;
  start=pos;
  add__temp170v(pos,length,&__temp1285v__);
  pos=__temp1285v__;
  circular__temp1252v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&start,length,&__temp1286v__buf__unsafe_ptr,&__temp1286v__buf__unsafe_size,&__temp1286v__buf__unsafe_offset,&__temp1286v__buf__unsafe_align,&__temp1286v__pos,&__temp1286v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1778v=buf__unsafe_ptr;
  *__temp1779v=buf__unsafe_size;
  *__temp1780v=buf__unsafe_offset;
  *__temp1781v=buf__unsafe_align;
  *__temp1782v=__temp1286v__buf__unsafe_ptr;
  *__temp1783v=__temp1286v__buf__unsafe_size;
  *__temp1784v=__temp1286v__buf__unsafe_offset;
  *__temp1785v=__temp1286v__buf__unsafe_align;
  *__temp1786v=__temp1286v__pos;
  *__temp1787v=__temp1286v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void new__temp1248v() {
  goto __temp_return;
  __temp_return:
}

static inline __attribute__((always_inline)) void vec__temp1287v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1788v, uint64_t* __temp1789v, uint64_t* __temp1790v) {
  goto __temp_return;
  __temp_return:
  *__temp1788v=unsafe_ptr;
  *__temp1789v=pos;
  *__temp1790v=length;
}

int vec__temp1289v(uint64_t length, char** __temp1791v, uint64_t* __temp1792v, uint64_t* __temp1793v) {
  char* __temp1290v__unsafe_ptr=0;
  uint64_t __temp1290v__unsafe_size=0;
  uint16_t __temp1290v__unsafe_offset=0;
  uint16_t __temp1290v__unsafe_align=0;
  char* __temp1291v__unsafe_ptr=0;
  uint64_t __temp1291v__unsafe_size=0;
  uint16_t __temp1291v__unsafe_offset=0;
  uint16_t __temp1291v__unsafe_align=0;
  char* __temp1292v__unsafe_ptr=0;
  uint64_t __temp1292v__unsafe_size=0;
  uint16_t __temp1292v__unsafe_offset=0;
  uint16_t __temp1292v__unsafe_align=0;
  char __temp1293v____temp475v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __temp1294v=0;
  char* __temp1295v__unsafe_ptr=0;
  uint64_t __temp1295v__pos=0;
  uint64_t __temp1295v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1253v(&__temp1290v__unsafe_ptr,&__temp1290v__unsafe_size,&__temp1290v__unsafe_offset,&__temp1290v__unsafe_align);
  __temp1291v__unsafe_ptr=__temp1290v__unsafe_ptr;
  __temp1291v__unsafe_size=__temp1290v__unsafe_size;
  __temp1291v__unsafe_offset=__temp1290v__unsafe_offset;
  __temp1291v__unsafe_align=__temp1290v__unsafe_align;
  __temp_errcode=alloc__temp473v(&__temp1291v__unsafe_ptr,&__temp1291v__unsafe_size,&__temp1291v__unsafe_offset,&__temp1291v__unsafe_align,length,&__temp1292v__unsafe_ptr,&__temp1292v__unsafe_size,&__temp1292v__unsafe_offset,&__temp1292v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1292v__unsafe_ptr;
  buf__unsafe_size=__temp1292v__unsafe_size;
  buf__unsafe_offset=__temp1292v__unsafe_offset;
  buf__unsafe_align=__temp1292v__unsafe_align;
  __temp1294v=0;
  vec__temp1287v(buf__unsafe_ptr,__temp1294v,length,&__temp1295v__unsafe_ptr,&__temp1295v__pos,&__temp1295v__length);
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1295v__unsafe_ptr,&__temp1293v____temp475v__);
  if(__temp1293v____temp475v__){
  __temp1295v__length=0;
  __temp1295v__length=__temp1295v__length;
  __temp1295v__unsafe_ptr=__temp1295v__unsafe_ptr;
  free__temp466v(&__temp1295v__unsafe_ptr);
  }
  __temp_return:
  *__temp1791v=__temp1295v__unsafe_ptr;
  *__temp1792v=__temp1295v__pos;
  *__temp1793v=__temp1295v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1794v) {
  *__temp1794v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1795v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1795v=__temp469v__;
}

static inline __attribute__((always_inline)) void mutget__temp1323v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1796v) {
  uint64_t __temp1324v=0;
  uint64_t __temp1325v__=0;
  uint64_t __temp1326v__=0;
  char* __temp1327v__=0;
  __temp1324v=8;
  add__temp170v(i,v__pos,&__temp1325v__);
  mul__temp194v(__temp1324v,__temp1325v__,&__temp1326v__);
  add__temp468v(v__unsafe_ptr,__temp1326v__,&__temp1327v__);
  goto __temp_return;
  __temp_return:
  *__temp1796v=__temp1327v__;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1797v, uint64_t* __temp1798v) {
  int __temp437v=0;
  uint64_t __temp438v=0;
  uint64_t _from=0;
  uint64_t __temp439v=0;
  uint64_t from=0;
  __temp438v=0;
  _from=__temp438v;
  __temp439v=_from;
  from=__temp439v;
  goto __temp_return;
  __temp_return:
  *__temp1797v=from;
  *__temp1798v=to;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1799v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1799v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1800v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1800v=z;
}

static inline __attribute__((always_inline)) int vec__temp1308v(char** __temp1801v, uint64_t* __temp1802v, uint16_t* __temp1803v, uint16_t* __temp1804v, uint64_t* __temp1805v, uint64_t allocator__length, uint64_t length, char** __temp1806v, uint64_t* __temp1807v, uint64_t* __temp1808v) {
  char* allocator__buf__unsafe_ptr=*__temp1801v;
  uint64_t allocator__buf__unsafe_size=*__temp1802v;
  uint16_t allocator__buf__unsafe_offset=*__temp1803v;
  uint16_t allocator__buf__unsafe_align=*__temp1804v;
  uint64_t allocator__pos=*__temp1805v;
  uint64_t __temp1309v__=0;
  uint64_t __temp1310v=0;
  char __temp1311v__=0;
  uint64_t __temp1312v__=0;
  uint64_t __temp1313v=0;
  char __temp1314v__=0;
  uint64_t __temp1315v__=0;
  char __temp1316v__=0;
  uint64_t __temp1317v=0;
  uint64_t start=0;
  uint64_t __temp1318v__=0;
  char __temp1319v__=0;
  uint64_t __temp1320v=0;
  char* __temp1321v__unsafe_ptr=0;
  uint64_t __temp1321v__pos=0;
  uint64_t __temp1321v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  nat__temp470v(allocator__buf__unsafe_align,&__temp1309v__);
  __temp1310v=8;
  neq__temp142v(__temp1309v__,__temp1310v,&__temp1311v__);
  if(__temp1311v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  nat__temp470v(allocator__buf__unsafe_offset,&__temp1312v__);
  __temp1313v=0;
  neq__temp142v(__temp1312v__,__temp1313v,&__temp1314v__);
  if(__temp1314v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  len__temp557v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__temp1315v__);
  gt__temp271v(length,__temp1315v__,&__temp1316v__);
  if(__temp1316v__){
  __temp_errcode=34;
  goto __temp_failure;
  }
  __temp1317v=allocator__pos;
  start=__temp1317v;
  add__temp170v(allocator__pos,length,&__temp1318v__);
  allocator__pos=__temp1318v__;
  ge__temp319v(allocator__pos,allocator__length,&__temp1319v__);
  if(__temp1319v__){
  allocator__pos=length;
  __temp1320v=0;
  start=__temp1320v;
  }
  vec__temp1287v(allocator__buf__unsafe_ptr,start,length,&__temp1321v__unsafe_ptr,&__temp1321v__pos,&__temp1321v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1801v=allocator__buf__unsafe_ptr;
  *__temp1802v=allocator__buf__unsafe_size;
  *__temp1803v=allocator__buf__unsafe_offset;
  *__temp1804v=allocator__buf__unsafe_align;
  *__temp1805v=allocator__pos;
  *__temp1806v=__temp1321v__unsafe_ptr;
  *__temp1807v=__temp1321v__pos;
  *__temp1808v=__temp1321v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1809v, uint64_t r__to, uint64_t* __temp1810v) {
  uint64_t r__from=*__temp1809v;
  char __temp441v__=0;
  uint64_t ret=0;
  uint64_t __temp442v=0;
  uint64_t __temp443v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(r__from,r__to,&__temp441v__);
  if(__temp441v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp442v=1;
  add__temp170v(ret,__temp442v,&__temp443v__);
  r__from=__temp443v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1809v=r__from;
  *__temp1810v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp1328v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1811v) {
  uint64_t __temp1329v=0;
  uint64_t __temp1330v__=0;
  uint64_t __temp1331v__=0;
  char* __temp1332v__=0;
  __temp1329v=8;
  add__temp170v(i,v__pos,&__temp1330v__);
  mul__temp194v(__temp1329v,__temp1330v__,&__temp1331v__);
  add__temp468v(v__unsafe_ptr,__temp1331v__,&__temp1332v__);
  goto __temp_return;
  __temp_return:
  *__temp1811v=__temp1332v__;
}

static inline __attribute__((always_inline)) int at__temp1334v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __temp1812v) {
  char* __temp1335v__=0;
  double __temp1336v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  get__temp1328v(v__unsafe_ptr,v__pos,v__length,i,&__temp1335v__);
  if(!__temp1335v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1336v__value,__temp1335v__,8);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1812v=__temp1336v__value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1813v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1813v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1814v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1814v=z;
}

int add__temp1385v(char** __temp1815v, uint64_t* __temp1816v, uint16_t* __temp1817v, uint16_t* __temp1818v, uint64_t* __temp1819v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1820v, uint64_t* __temp1821v, uint64_t* __temp1822v) {
  char* allocator__buf__unsafe_ptr=*__temp1815v;
  uint64_t allocator__buf__unsafe_size=*__temp1816v;
  uint16_t allocator__buf__unsafe_offset=*__temp1817v;
  uint16_t allocator__buf__unsafe_align=*__temp1818v;
  uint64_t allocator__pos=*__temp1819v;
  int __temp1386v=0;
  char __temp1387v__=0;
  char* __temp1388v__unsafe_ptr=0;
  uint64_t __temp1388v__pos=0;
  uint64_t __temp1388v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1389v__from=0;
  uint64_t __temp1389v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char* p1=0;
  char __temp1390v=0;
  uint64_t __temp1391v__=0;
  uint64_t i=0;
  char* __temp1392v__=0;
  char* __temp1393v__=0;
  double __temp1394v__value=0;
  double __temp1395v__=0;
  double __temp1396v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  neq__temp142v(v1__length,v2__length,&__temp1387v__);
  if(__temp1387v__){
  __temp_errcode=35;
  goto __temp_failure;
  }
  __temp_errcode=vec__temp1308v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1388v__unsafe_ptr,&__temp1388v__pos,&__temp1388v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1388v__unsafe_ptr;
  v__pos=__temp1388v__pos;
  v__length=__temp1388v__length;
  range__temp436v(v1__length,&__temp1389v__from,&__temp1389v__to);
  it__from=__temp1389v__from;
  it__to=__temp1389v__to;
  p1=v1__unsafe_ptr;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1391v__);
  __temp1390v=__temp_complain;
  i=__temp1391v__;
  __temp1390v=__temp1390v==0;
  if(!__temp1390v){
  break;
  }
  mutget__temp1323v(v__unsafe_ptr,v__pos,v__length,i,&__temp1392v__);
  get__temp1328v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1393v__);
  if(!__temp1393v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1394v__value,__temp1393v__,8);
  __temp_errcode=at__temp1334v(v2__unsafe_ptr,v2__pos,v2__length,i,&__temp1395v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  add__temp148v(__temp1394v__value,__temp1395v__,&__temp1396v__);
  if(!__temp1392v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1392v__,&__temp1396v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1815v=allocator__buf__unsafe_ptr;
  *__temp1816v=allocator__buf__unsafe_size;
  *__temp1817v=allocator__buf__unsafe_offset;
  *__temp1818v=allocator__buf__unsafe_align;
  *__temp1819v=allocator__pos;
  *__temp1820v=v__unsafe_ptr;
  *__temp1821v=v__pos;
  *__temp1822v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void at__temp1333v(double number, uint64_t i, double* __temp1823v) {
  goto __temp_return;
  __temp_return:
  *__temp1823v=number;
}

static inline __attribute__((always_inline)) void mul__temp172v(double x, double y, double* __temp1824v) {
  int __temp173v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1824v=z;
}

static inline __attribute__((always_inline)) int mul__temp1574v(char** __temp1825v, uint64_t* __temp1826v, uint16_t* __temp1827v, uint16_t* __temp1828v, uint64_t* __temp1829v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __temp1830v, uint64_t* __temp1831v, uint64_t* __temp1832v) {
  char* allocator__buf__unsafe_ptr=*__temp1825v;
  uint64_t allocator__buf__unsafe_size=*__temp1826v;
  uint16_t allocator__buf__unsafe_offset=*__temp1827v;
  uint16_t allocator__buf__unsafe_align=*__temp1828v;
  uint64_t allocator__pos=*__temp1829v;
  int __temp1575v=0;
  char* __temp1576v__unsafe_ptr=0;
  uint64_t __temp1576v__pos=0;
  uint64_t __temp1576v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1577v__from=0;
  uint64_t __temp1577v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1578v=0;
  uint64_t __temp1579v__=0;
  uint64_t i=0;
  char* __temp1580v__=0;
  char* __temp1581v__=0;
  double __temp1582v__value=0;
  double __temp1583v__=0;
  double __temp1584v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=vec__temp1308v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1576v__unsafe_ptr,&__temp1576v__pos,&__temp1576v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1576v__unsafe_ptr;
  v__pos=__temp1576v__pos;
  v__length=__temp1576v__length;
  range__temp436v(v1__length,&__temp1577v__from,&__temp1577v__to);
  it__from=__temp1577v__from;
  it__to=__temp1577v__to;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1579v__);
  __temp1578v=__temp_complain;
  i=__temp1579v__;
  __temp1578v=__temp1578v==0;
  if(!__temp1578v){
  break;
  }
  mutget__temp1323v(v__unsafe_ptr,v__pos,v__length,i,&__temp1580v__);
  get__temp1328v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1581v__);
  if(!__temp1581v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1582v__value,__temp1581v__,8);
  at__temp1333v(v2,i,&__temp1583v__);
  mul__temp172v(__temp1582v__value,__temp1583v__,&__temp1584v__);
  if(!__temp1580v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1580v__,&__temp1584v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1825v=allocator__buf__unsafe_ptr;
  *__temp1826v=allocator__buf__unsafe_size;
  *__temp1827v=allocator__buf__unsafe_offset;
  *__temp1828v=allocator__buf__unsafe_align;
  *__temp1829v=allocator__pos;
  *__temp1830v=v__unsafe_ptr;
  *__temp1831v=v__pos;
  *__temp1832v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mul__temp1590v(char** __temp1833v, uint64_t* __temp1834v, uint16_t* __temp1835v, uint16_t* __temp1836v, uint64_t* __temp1837v, uint64_t allocator__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1838v, uint64_t* __temp1839v, uint64_t* __temp1840v) {
  char* allocator__buf__unsafe_ptr=*__temp1833v;
  uint64_t allocator__buf__unsafe_size=*__temp1834v;
  uint16_t allocator__buf__unsafe_offset=*__temp1835v;
  uint16_t allocator__buf__unsafe_align=*__temp1836v;
  uint64_t allocator__pos=*__temp1837v;
  char* __temp1591v__unsafe_ptr=0;
  uint64_t __temp1591v__pos=0;
  uint64_t __temp1591v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=mul__temp1574v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__temp1591v__unsafe_ptr,&__temp1591v__pos,&__temp1591v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1833v=allocator__buf__unsafe_ptr;
  *__temp1834v=allocator__buf__unsafe_size;
  *__temp1835v=allocator__buf__unsafe_offset;
  *__temp1836v=allocator__buf__unsafe_align;
  *__temp1837v=allocator__pos;
  *__temp1838v=__temp1591v__unsafe_ptr;
  *__temp1839v=__temp1591v__pos;
  *__temp1840v=__temp1591v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__temp1691v() {
  char* __temp1692v__unsafe_ptr=0;
  uint64_t __temp1692v__unsafe_size=0;
  uint16_t __temp1692v__unsafe_offset=0;
  uint16_t __temp1692v__unsafe_align=0;
  char* __temp1693v__unsafe_ptr=0;
  uint64_t __temp1693v__unsafe_size=0;
  uint16_t __temp1693v__unsafe_offset=0;
  uint16_t __temp1693v__unsafe_align=0;
  uint64_t __temp1694v=0;
  char* __temp1695v__unsafe_ptr=0;
  uint64_t __temp1695v__unsafe_size=0;
  uint16_t __temp1695v__unsafe_offset=0;
  uint16_t __temp1695v__unsafe_align=0;
  char __temp1696v____temp475v__=0;
  char* __temp1697v__buf__unsafe_ptr=0;
  uint64_t __temp1697v__buf__unsafe_size=0;
  uint16_t __temp1697v__buf__unsafe_offset=0;
  uint16_t __temp1697v__buf__unsafe_align=0;
  uint64_t __temp1697v__pos=0;
  uint64_t __temp1697v__length=0;
  char* allocator__buf__unsafe_ptr=0;
  uint64_t allocator__buf__unsafe_size=0;
  uint16_t allocator__buf__unsafe_offset=0;
  uint16_t allocator__buf__unsafe_align=0;
  uint64_t allocator__pos=0;
  uint64_t allocator__length=0;
  char* __temp1698v__unsafe_ptr=0;
  uint64_t __temp1698v__unsafe_size=0;
  uint16_t __temp1698v__unsafe_offset=0;
  uint16_t __temp1698v__unsafe_align=0;
  char* __temp1699v__unsafe_ptr=0;
  uint64_t __temp1699v__unsafe_size=0;
  uint16_t __temp1699v__unsafe_offset=0;
  uint16_t __temp1699v__unsafe_align=0;
  uint64_t __temp1700v=0;
  char* __temp1701v__unsafe_ptr=0;
  uint64_t __temp1701v__unsafe_size=0;
  uint16_t __temp1701v__unsafe_offset=0;
  uint16_t __temp1701v__unsafe_align=0;
  char __temp1702v____temp475v__=0;
  char* __temp1703v__buf__unsafe_ptr=0;
  uint64_t __temp1703v__buf__unsafe_size=0;
  uint16_t __temp1703v__buf__unsafe_offset=0;
  uint16_t __temp1703v__buf__unsafe_align=0;
  uint64_t __temp1703v__pos=0;
  uint64_t __temp1703v__length=0;
  char* allocator2__buf__unsafe_ptr=0;
  uint64_t allocator2__buf__unsafe_size=0;
  uint16_t allocator2__buf__unsafe_offset=0;
  uint16_t allocator2__buf__unsafe_align=0;
  uint64_t allocator2__pos=0;
  uint64_t allocator2__length=0;
  uint64_t __temp1705v=0;
  char* __temp1706v__unsafe_ptr=0;
  uint64_t __temp1706v__pos=0;
  uint64_t __temp1706v__length=0;
  char __temp1707v____temp1293v____temp475v__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __temp1709v=0;
  char* __temp1710v__unsafe_ptr=0;
  uint64_t __temp1710v__pos=0;
  uint64_t __temp1710v__length=0;
  char __temp1711v____temp1293v____temp475v__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __temp1712v=0;
  char* __temp1713v__=0;
  double __temp1714v=0;
  uint64_t __temp1715v=0;
  char* __temp1716v__=0;
  double __temp1717v=0;
  uint64_t __temp1718v=0;
  uint64_t __temp1719v__from=0;
  uint64_t __temp1719v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __temp1720v=0;
  char* __temp1721v__unsafe_ptr=0;
  uint64_t __temp1721v__pos=0;
  uint64_t __temp1721v__length=0;
  char* __temp1722v__unsafe_ptr=0;
  uint64_t __temp1722v__pos=0;
  uint64_t __temp1722v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __temp1723v=0;
  uint64_t __temp1724v__=0;
  uint64_t i=0;
  double __temp1725v=0;
  char* __temp1726v__unsafe_ptr=0;
  uint64_t __temp1726v__pos=0;
  uint64_t __temp1726v__length=0;
  char* __temp1727v__unsafe_ptr=0;
  uint64_t __temp1727v__pos=0;
  uint64_t __temp1727v__length=0;
  char* __temp1728v__unsafe_ptr=0;
  uint64_t __temp1728v__pos=0;
  uint64_t __temp1728v__length=0;
  uint64_t __temp1729v=0;
  char* __temp1730v__=0;
  double __temp1731v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1253v(&__temp1692v__unsafe_ptr,&__temp1692v__unsafe_size,&__temp1692v__unsafe_offset,&__temp1692v__unsafe_align);
  __temp1693v__unsafe_ptr=__temp1692v__unsafe_ptr;
  __temp1693v__unsafe_size=__temp1692v__unsafe_size;
  __temp1693v__unsafe_offset=__temp1692v__unsafe_offset;
  __temp1693v__unsafe_align=__temp1692v__unsafe_align;
  __temp1694v=200;
  __temp_errcode=alloc__temp473v(&__temp1693v__unsafe_ptr,&__temp1693v__unsafe_size,&__temp1693v__unsafe_offset,&__temp1693v__unsafe_align,__temp1694v,&__temp1695v__unsafe_ptr,&__temp1695v__unsafe_size,&__temp1695v__unsafe_offset,&__temp1695v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1277v(&__temp1693v__unsafe_ptr,&__temp1693v__unsafe_size,&__temp1693v__unsafe_offset,&__temp1693v__unsafe_align,&__temp1697v__buf__unsafe_ptr,&__temp1697v__buf__unsafe_size,&__temp1697v__buf__unsafe_offset,&__temp1697v__buf__unsafe_align,&__temp1697v__pos,&__temp1697v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  allocator__pos=__temp1697v__pos;
  allocator__length=__temp1697v__length;
  float____temp_buffer____buffer__temp1253v(&__temp1698v__unsafe_ptr,&__temp1698v__unsafe_size,&__temp1698v__unsafe_offset,&__temp1698v__unsafe_align);
  __temp1699v__unsafe_ptr=__temp1698v__unsafe_ptr;
  __temp1699v__unsafe_size=__temp1698v__unsafe_size;
  __temp1699v__unsafe_offset=__temp1698v__unsafe_offset;
  __temp1699v__unsafe_align=__temp1698v__unsafe_align;
  __temp1700v=200;
  __temp_errcode=alloc__temp473v(&__temp1699v__unsafe_ptr,&__temp1699v__unsafe_size,&__temp1699v__unsafe_offset,&__temp1699v__unsafe_align,__temp1700v,&__temp1701v__unsafe_ptr,&__temp1701v__unsafe_size,&__temp1701v__unsafe_offset,&__temp1701v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1277v(&__temp1699v__unsafe_ptr,&__temp1699v__unsafe_size,&__temp1699v__unsafe_offset,&__temp1699v__unsafe_align,&__temp1703v__buf__unsafe_ptr,&__temp1703v__buf__unsafe_size,&__temp1703v__buf__unsafe_offset,&__temp1703v__buf__unsafe_align,&__temp1703v__pos,&__temp1703v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  allocator2__pos=__temp1703v__pos;
  allocator2__length=__temp1703v__length;
  new__temp1248v();
  __temp1705v=10;
  __temp_errcode=vec__temp1289v(__temp1705v,&__temp1706v__unsafe_ptr,&__temp1706v__pos,&__temp1706v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v1__unsafe_ptr=__temp1706v__unsafe_ptr;
  v1__pos=__temp1706v__pos;
  v1__length=__temp1706v__length;
  new__temp1248v();
  __temp1709v=10;
  __temp_errcode=vec__temp1289v(__temp1709v,&__temp1710v__unsafe_ptr,&__temp1710v__pos,&__temp1710v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v2__unsafe_ptr=__temp1710v__unsafe_ptr;
  v2__pos=__temp1710v__pos;
  v2__length=__temp1710v__length;
  __temp1712v=0;
  mutget__temp1323v(v1__unsafe_ptr,v1__pos,v1__length,__temp1712v,&__temp1713v__);
  __temp1714v=1.0;
  if(!__temp1713v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1713v__,&__temp1714v,8);
  __temp1715v=0;
  mutget__temp1323v(v2__unsafe_ptr,v2__pos,v2__length,__temp1715v,&__temp1716v__);
  __temp1717v=2.0;
  if(!__temp1716v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1716v__,&__temp1717v,8);
  __temp1718v=5;
  range__temp436v(__temp1718v,&__temp1719v__from,&__temp1719v__to);
  it__from=__temp1719v__from;
  it__to=__temp1719v__to;
  __temp1720v=10;
  __temp_errcode=vec__temp1308v(&__temp1693v__unsafe_ptr,&__temp1693v__unsafe_size,&__temp1693v__unsafe_offset,&__temp1693v__unsafe_align,&allocator__pos,allocator__length,__temp1720v,&__temp1721v__unsafe_ptr,&__temp1721v__pos,&__temp1721v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1722v__pos=__temp1721v__pos;
  __temp1722v__length=__temp1721v__length;
  v__pos=__temp1722v__pos;
  v__length=__temp1722v__length;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1724v__);
  __temp1723v=__temp_complain;
  i=__temp1724v__;
  __temp1723v=__temp1723v==0;
  if(!__temp1723v){
  break;
  }
  __temp1725v=2.0;
  __temp_errcode=add__temp1385v(&__temp1693v__unsafe_ptr,&__temp1693v__unsafe_size,&__temp1693v__unsafe_offset,&__temp1693v__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,__temp1693v__unsafe_ptr,v__pos,v__length,&__temp1726v__unsafe_ptr,&__temp1726v__pos,&__temp1726v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=add__temp1385v(&__temp1693v__unsafe_ptr,&__temp1693v__unsafe_size,&__temp1693v__unsafe_offset,&__temp1693v__unsafe_align,&allocator__pos,allocator__length,v1__unsafe_ptr,v1__pos,v1__length,__temp1693v__unsafe_ptr,__temp1726v__pos,__temp1726v__length,&__temp1727v__unsafe_ptr,&__temp1727v__pos,&__temp1727v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mul__temp1590v(&__temp1693v__unsafe_ptr,&__temp1693v__unsafe_size,&__temp1693v__unsafe_offset,&__temp1693v__unsafe_align,&allocator__pos,allocator__length,__temp1725v,__temp1693v__unsafe_ptr,__temp1727v__pos,__temp1727v__length,&__temp1728v__unsafe_ptr,&__temp1728v__pos,&__temp1728v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__pos=__temp1728v__pos;
  v__length=__temp1728v__length;
  }
  __temp1729v=0;
  get__temp1328v(__temp1693v__unsafe_ptr,v__pos,v__length,__temp1729v,&__temp1730v__);
  if(!__temp1730v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1731v__value,__temp1730v__,8);
  print__temp368v(__temp1731v__value);
  
  __temp_failure:exists__temp412v(__temp1710v__unsafe_ptr,&__temp1711v____temp1293v____temp475v__);
  if(__temp1711v____temp1293v____temp475v__){
  __temp1710v__length=0;
  __temp1710v__length=__temp1710v__length;
  __temp1710v__unsafe_ptr=__temp1710v__unsafe_ptr;
  free__temp466v(&__temp1710v__unsafe_ptr);
  }
  exists__temp412v(__temp1706v__unsafe_ptr,&__temp1707v____temp1293v____temp475v__);
  if(__temp1707v____temp1293v____temp475v__){
  __temp1706v__length=0;
  __temp1706v__length=__temp1706v__length;
  __temp1706v__unsafe_ptr=__temp1706v__unsafe_ptr;
  free__temp466v(&__temp1706v__unsafe_ptr);
  }
  exists__temp412v(__temp1701v__unsafe_ptr,&__temp1702v____temp475v__);
  if(__temp1702v____temp475v__){
  __temp1701v__unsafe_size=0;
  __temp1701v__unsafe_size=__temp1701v__unsafe_size;
  __temp1701v__unsafe_ptr=__temp1701v__unsafe_ptr;
  free__temp466v(&__temp1701v__unsafe_ptr);
  }
  exists__temp412v(__temp1695v__unsafe_ptr,&__temp1696v____temp475v__);
  if(__temp1696v____temp475v__){
  __temp1695v__unsafe_size=0;
  __temp1695v__unsafe_size=__temp1695v__unsafe_size;
  __temp1695v__unsafe_ptr=__temp1695v__unsafe_ptr;
  free__temp466v(&__temp1695v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1245v(int64_t value, const char** __temp1841v) {
  int __temp1246v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1841v=ret;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1733v() {
  char __temp1734v=0;
  char __temp1736v=0;
  int64_t __temp1737v=0;
  int64_t error=0;
  const char* __temp1738v__=0;
  int __temp_complain=0;
  __temp_complain=safe_main__temp1691v();
  __temp1734v=__temp_complain;
  __temp1734v=__temp1734v==0;
  __temp1737v=__temp_complain;
  __temp1736v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1737v;
  __temp1736v=__temp1736v==0;
  if(__temp1736v){
  cstr__temp1245v(error,&__temp1738v__);
  print__temp363v(__temp1738v__);
  }
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1733v();return 0;}