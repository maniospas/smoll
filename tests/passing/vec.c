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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1255v(char** __temp1742v, uint64_t* __temp1743v, uint16_t* __temp1744v, uint16_t* __temp1745v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1742v=unsafe_ptr;
  *__temp1743v=unsafe_size;
  *__temp1744v=unsafe_offset;
  *__temp1745v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1746v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1746v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1747v) {
  char* allocated=*__temp1747v;
  if(allocated){
  free(allocated);
  }
  *__temp1747v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1748v) {
  int value=0;
  *__temp1748v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1749v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1749v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1750v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1750v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1751v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1751v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1752v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1752v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1753v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1753v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1754v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1754v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1755v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1755v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1756v) {
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
  *__temp1756v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1757v, uint64_t* __temp1758v, uint16_t* __temp1759v, uint16_t* __temp1760v, uint64_t size, char** __temp1761v, uint64_t* __temp1762v, uint16_t* __temp1763v, uint16_t* __temp1764v) {
  char* buffer__unsafe_ptr=*__temp1757v;
  uint64_t buffer__unsafe_size=*__temp1758v;
  uint16_t buffer__unsafe_offset=*__temp1759v;
  uint16_t buffer__unsafe_align=*__temp1760v;
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
  *__temp1757v=buffer__unsafe_ptr;
  *__temp1758v=buffer__unsafe_size;
  *__temp1759v=buffer__unsafe_offset;
  *__temp1760v=buffer__unsafe_align;
  *__temp1761v=__temp485v__unsafe_ptr;
  *__temp1762v=__temp485v__unsafe_size;
  *__temp1763v=__temp485v__unsafe_offset;
  *__temp1764v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1765v) {
  goto __temp_return;
  __temp_return:
  *__temp1765v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1766v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1766v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1767v) {
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
  *__temp1767v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1768v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1768v=z;
}

static inline __attribute__((always_inline)) void circular__temp1254v(char** __temp1769v, uint64_t* __temp1770v, uint16_t* __temp1771v, uint16_t* __temp1772v, uint64_t* __temp1773v, uint64_t length, char** __temp1774v, uint64_t* __temp1775v, uint16_t* __temp1776v, uint16_t* __temp1777v, uint64_t* __temp1778v, uint64_t* __temp1779v) {
  char* buf__unsafe_ptr=*__temp1769v;
  uint64_t buf__unsafe_size=*__temp1770v;
  uint16_t buf__unsafe_offset=*__temp1771v;
  uint16_t buf__unsafe_align=*__temp1772v;
  uint64_t pos=*__temp1773v;
  goto __temp_return;
  __temp_return:
  *__temp1769v=buf__unsafe_ptr;
  *__temp1770v=buf__unsafe_size;
  *__temp1771v=buf__unsafe_offset;
  *__temp1772v=buf__unsafe_align;
  *__temp1773v=pos;
  *__temp1774v=buf__unsafe_ptr;
  *__temp1775v=buf__unsafe_size;
  *__temp1776v=buf__unsafe_offset;
  *__temp1777v=buf__unsafe_align;
  *__temp1778v=pos;
  *__temp1779v=length;
}

static inline __attribute__((always_inline)) int circular__temp1279v(char** __temp1780v, uint64_t* __temp1781v, uint16_t* __temp1782v, uint16_t* __temp1783v, char** __temp1784v, uint64_t* __temp1785v, uint16_t* __temp1786v, uint16_t* __temp1787v, uint64_t* __temp1788v, uint64_t* __temp1789v) {
  char* buf__unsafe_ptr=*__temp1780v;
  uint64_t buf__unsafe_size=*__temp1781v;
  uint16_t buf__unsafe_offset=*__temp1782v;
  uint16_t buf__unsafe_align=*__temp1783v;
  int __temp1280v=0;
  int __temp1281v=0;
  uint64_t __temp1282v=0;
  uint64_t __temp1283v=0;
  uint64_t pos=0;
  int __temp1284v=0;
  uint64_t __temp1285v__=0;
  uint64_t __temp1286v__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __temp1287v__=0;
  char* __temp1288v__buf__unsafe_ptr=0;
  uint64_t __temp1288v__buf__unsafe_size=0;
  uint16_t __temp1288v__buf__unsafe_offset=0;
  uint16_t __temp1288v__buf__unsafe_align=0;
  uint64_t __temp1288v__pos=0;
  uint64_t __temp1288v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1282v=0;
  __temp1283v=__temp1282v;
  pos=__temp1283v;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp1285v__);
  __temp_errcode=sub__temp347v(__temp1285v__,pos,&__temp1286v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1286v__;
  start=pos;
  add__temp170v(pos,length,&__temp1287v__);
  pos=__temp1287v__;
  circular__temp1254v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&start,length,&__temp1288v__buf__unsafe_ptr,&__temp1288v__buf__unsafe_size,&__temp1288v__buf__unsafe_offset,&__temp1288v__buf__unsafe_align,&__temp1288v__pos,&__temp1288v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1780v=buf__unsafe_ptr;
  *__temp1781v=buf__unsafe_size;
  *__temp1782v=buf__unsafe_offset;
  *__temp1783v=buf__unsafe_align;
  *__temp1784v=__temp1288v__buf__unsafe_ptr;
  *__temp1785v=__temp1288v__buf__unsafe_size;
  *__temp1786v=__temp1288v__buf__unsafe_offset;
  *__temp1787v=__temp1288v__buf__unsafe_align;
  *__temp1788v=__temp1288v__pos;
  *__temp1789v=__temp1288v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void new__temp1250v() {
  goto __temp_return;
  __temp_return:
}

static inline __attribute__((always_inline)) void vec__temp1289v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1790v, uint64_t* __temp1791v, uint64_t* __temp1792v) {
  goto __temp_return;
  __temp_return:
  *__temp1790v=unsafe_ptr;
  *__temp1791v=pos;
  *__temp1792v=length;
}

int vec__temp1291v(uint64_t length, char** __temp1793v, uint64_t* __temp1794v, uint64_t* __temp1795v) {
  char* __temp1292v__unsafe_ptr=0;
  uint64_t __temp1292v__unsafe_size=0;
  uint16_t __temp1292v__unsafe_offset=0;
  uint16_t __temp1292v__unsafe_align=0;
  char* __temp1293v__unsafe_ptr=0;
  uint64_t __temp1293v__unsafe_size=0;
  uint16_t __temp1293v__unsafe_offset=0;
  uint16_t __temp1293v__unsafe_align=0;
  char* __temp1294v__unsafe_ptr=0;
  uint64_t __temp1294v__unsafe_size=0;
  uint16_t __temp1294v__unsafe_offset=0;
  uint16_t __temp1294v__unsafe_align=0;
  char __temp1295v____temp475v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __temp1296v=0;
  char* __temp1297v__unsafe_ptr=0;
  uint64_t __temp1297v__pos=0;
  uint64_t __temp1297v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1255v(&__temp1292v__unsafe_ptr,&__temp1292v__unsafe_size,&__temp1292v__unsafe_offset,&__temp1292v__unsafe_align);
  __temp1293v__unsafe_ptr=__temp1292v__unsafe_ptr;
  __temp1293v__unsafe_size=__temp1292v__unsafe_size;
  __temp1293v__unsafe_offset=__temp1292v__unsafe_offset;
  __temp1293v__unsafe_align=__temp1292v__unsafe_align;
  __temp_errcode=alloc__temp473v(&__temp1293v__unsafe_ptr,&__temp1293v__unsafe_size,&__temp1293v__unsafe_offset,&__temp1293v__unsafe_align,length,&__temp1294v__unsafe_ptr,&__temp1294v__unsafe_size,&__temp1294v__unsafe_offset,&__temp1294v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1294v__unsafe_ptr;
  buf__unsafe_size=__temp1294v__unsafe_size;
  buf__unsafe_offset=__temp1294v__unsafe_offset;
  buf__unsafe_align=__temp1294v__unsafe_align;
  __temp1296v=0;
  vec__temp1289v(buf__unsafe_ptr,__temp1296v,length,&__temp1297v__unsafe_ptr,&__temp1297v__pos,&__temp1297v__length);
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1297v__unsafe_ptr,&__temp1295v____temp475v__);
  if(__temp1295v____temp475v__){
  __temp1297v__length=0;
  __temp1297v__length=__temp1297v__length;
  __temp1297v__unsafe_ptr=__temp1297v__unsafe_ptr;
  free__temp466v(&__temp1297v__unsafe_ptr);
  }
  __temp_return:
  *__temp1793v=__temp1297v__unsafe_ptr;
  *__temp1794v=__temp1297v__pos;
  *__temp1795v=__temp1297v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1796v) {
  *__temp1796v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1797v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1797v=__temp469v__;
}

static inline __attribute__((always_inline)) void mutget__temp1325v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1798v) {
  uint64_t __temp1326v=0;
  uint64_t __temp1327v__=0;
  uint64_t __temp1328v__=0;
  char* __temp1329v__=0;
  __temp1326v=8;
  add__temp170v(i,v__pos,&__temp1327v__);
  mul__temp194v(__temp1326v,__temp1327v__,&__temp1328v__);
  add__temp468v(v__unsafe_ptr,__temp1328v__,&__temp1329v__);
  goto __temp_return;
  __temp_return:
  *__temp1798v=__temp1329v__;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1799v, uint64_t* __temp1800v) {
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
  *__temp1799v=from;
  *__temp1800v=to;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1801v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1801v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1802v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1802v=z;
}

static inline __attribute__((always_inline)) int vec__temp1310v(char** __temp1803v, uint64_t* __temp1804v, uint16_t* __temp1805v, uint16_t* __temp1806v, uint64_t* __temp1807v, uint64_t allocator__length, uint64_t length, char** __temp1808v, uint64_t* __temp1809v, uint64_t* __temp1810v) {
  char* allocator__buf__unsafe_ptr=*__temp1803v;
  uint64_t allocator__buf__unsafe_size=*__temp1804v;
  uint16_t allocator__buf__unsafe_offset=*__temp1805v;
  uint16_t allocator__buf__unsafe_align=*__temp1806v;
  uint64_t allocator__pos=*__temp1807v;
  uint64_t __temp1311v__=0;
  uint64_t __temp1312v=0;
  char __temp1313v__=0;
  uint64_t __temp1314v__=0;
  uint64_t __temp1315v=0;
  char __temp1316v__=0;
  uint64_t __temp1317v__=0;
  char __temp1318v__=0;
  uint64_t __temp1319v=0;
  uint64_t start=0;
  uint64_t __temp1320v__=0;
  char __temp1321v__=0;
  uint64_t __temp1322v=0;
  char* __temp1323v__unsafe_ptr=0;
  uint64_t __temp1323v__pos=0;
  uint64_t __temp1323v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  nat__temp470v(allocator__buf__unsafe_align,&__temp1311v__);
  __temp1312v=8;
  neq__temp142v(__temp1311v__,__temp1312v,&__temp1313v__);
  if(__temp1313v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  nat__temp470v(allocator__buf__unsafe_offset,&__temp1314v__);
  __temp1315v=0;
  neq__temp142v(__temp1314v__,__temp1315v,&__temp1316v__);
  if(__temp1316v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  len__temp557v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__temp1317v__);
  gt__temp271v(length,__temp1317v__,&__temp1318v__);
  if(__temp1318v__){
  __temp_errcode=34;
  goto __temp_failure;
  }
  __temp1319v=allocator__pos;
  start=__temp1319v;
  add__temp170v(allocator__pos,length,&__temp1320v__);
  allocator__pos=__temp1320v__;
  ge__temp319v(allocator__pos,allocator__length,&__temp1321v__);
  if(__temp1321v__){
  allocator__pos=length;
  __temp1322v=0;
  start=__temp1322v;
  }
  vec__temp1289v(allocator__buf__unsafe_ptr,start,length,&__temp1323v__unsafe_ptr,&__temp1323v__pos,&__temp1323v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1803v=allocator__buf__unsafe_ptr;
  *__temp1804v=allocator__buf__unsafe_size;
  *__temp1805v=allocator__buf__unsafe_offset;
  *__temp1806v=allocator__buf__unsafe_align;
  *__temp1807v=allocator__pos;
  *__temp1808v=__temp1323v__unsafe_ptr;
  *__temp1809v=__temp1323v__pos;
  *__temp1810v=__temp1323v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1811v, uint64_t r__to, uint64_t* __temp1812v) {
  uint64_t r__from=*__temp1811v;
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
  *__temp1811v=r__from;
  *__temp1812v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp1330v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1813v) {
  uint64_t __temp1331v=0;
  uint64_t __temp1332v__=0;
  uint64_t __temp1333v__=0;
  char* __temp1334v__=0;
  __temp1331v=8;
  add__temp170v(i,v__pos,&__temp1332v__);
  mul__temp194v(__temp1331v,__temp1332v__,&__temp1333v__);
  add__temp468v(v__unsafe_ptr,__temp1333v__,&__temp1334v__);
  goto __temp_return;
  __temp_return:
  *__temp1813v=__temp1334v__;
}

static inline __attribute__((always_inline)) int at__temp1336v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __temp1814v) {
  char* __temp1337v__=0;
  double __temp1338v__number=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  get__temp1330v(v__unsafe_ptr,v__pos,v__length,i,&__temp1337v__);
  if(!__temp1337v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1338v__number,__temp1337v__,8);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1814v=__temp1338v__number;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1815v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1815v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1816v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1816v=z;
}

int add__temp1387v(char** __temp1817v, uint64_t* __temp1818v, uint16_t* __temp1819v, uint16_t* __temp1820v, uint64_t* __temp1821v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1822v, uint64_t* __temp1823v, uint64_t* __temp1824v) {
  char* allocator__buf__unsafe_ptr=*__temp1817v;
  uint64_t allocator__buf__unsafe_size=*__temp1818v;
  uint16_t allocator__buf__unsafe_offset=*__temp1819v;
  uint16_t allocator__buf__unsafe_align=*__temp1820v;
  uint64_t allocator__pos=*__temp1821v;
  int __temp1388v=0;
  char __temp1389v__=0;
  char* __temp1390v__unsafe_ptr=0;
  uint64_t __temp1390v__pos=0;
  uint64_t __temp1390v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1391v__from=0;
  uint64_t __temp1391v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char* p1=0;
  char __temp1392v=0;
  uint64_t __temp1393v__=0;
  uint64_t i=0;
  char* __temp1394v__=0;
  char* __temp1395v__=0;
  double __temp1396v__number=0;
  double __temp1397v__=0;
  double __temp1398v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  neq__temp142v(v1__length,v2__length,&__temp1389v__);
  if(__temp1389v__){
  __temp_errcode=35;
  goto __temp_failure;
  }
  __temp_errcode=vec__temp1310v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1390v__unsafe_ptr,&__temp1390v__pos,&__temp1390v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1390v__unsafe_ptr;
  v__pos=__temp1390v__pos;
  v__length=__temp1390v__length;
  range__temp436v(v1__length,&__temp1391v__from,&__temp1391v__to);
  it__from=__temp1391v__from;
  it__to=__temp1391v__to;
  p1=v1__unsafe_ptr;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1393v__);
  __temp1392v=__temp_complain;
  i=__temp1393v__;
  __temp1392v=__temp1392v==0;
  if(!__temp1392v){
  break;
  }
  mutget__temp1325v(v__unsafe_ptr,v__pos,v__length,i,&__temp1394v__);
  get__temp1330v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1395v__);
  if(!__temp1395v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1396v__number,__temp1395v__,8);
  __temp_errcode=at__temp1336v(v2__unsafe_ptr,v2__pos,v2__length,i,&__temp1397v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  add__temp148v(__temp1396v__number,__temp1397v__,&__temp1398v__);
  if(!__temp1394v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1394v__,&__temp1398v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1817v=allocator__buf__unsafe_ptr;
  *__temp1818v=allocator__buf__unsafe_size;
  *__temp1819v=allocator__buf__unsafe_offset;
  *__temp1820v=allocator__buf__unsafe_align;
  *__temp1821v=allocator__pos;
  *__temp1822v=v__unsafe_ptr;
  *__temp1823v=v__pos;
  *__temp1824v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void at__temp1335v(double number, uint64_t i, double* __temp1825v) {
  goto __temp_return;
  __temp_return:
  *__temp1825v=number;
}

static inline __attribute__((always_inline)) void mul__temp172v(double x, double y, double* __temp1826v) {
  int __temp173v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1826v=z;
}

static inline __attribute__((always_inline)) int mul__temp1576v(char** __temp1827v, uint64_t* __temp1828v, uint16_t* __temp1829v, uint16_t* __temp1830v, uint64_t* __temp1831v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __temp1832v, uint64_t* __temp1833v, uint64_t* __temp1834v) {
  char* allocator__buf__unsafe_ptr=*__temp1827v;
  uint64_t allocator__buf__unsafe_size=*__temp1828v;
  uint16_t allocator__buf__unsafe_offset=*__temp1829v;
  uint16_t allocator__buf__unsafe_align=*__temp1830v;
  uint64_t allocator__pos=*__temp1831v;
  int __temp1577v=0;
  char* __temp1578v__unsafe_ptr=0;
  uint64_t __temp1578v__pos=0;
  uint64_t __temp1578v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1579v__from=0;
  uint64_t __temp1579v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1580v=0;
  uint64_t __temp1581v__=0;
  uint64_t i=0;
  char* __temp1582v__=0;
  char* __temp1583v__=0;
  double __temp1584v__number=0;
  double __temp1585v__=0;
  double __temp1586v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=vec__temp1310v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1578v__unsafe_ptr,&__temp1578v__pos,&__temp1578v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1578v__unsafe_ptr;
  v__pos=__temp1578v__pos;
  v__length=__temp1578v__length;
  range__temp436v(v1__length,&__temp1579v__from,&__temp1579v__to);
  it__from=__temp1579v__from;
  it__to=__temp1579v__to;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1581v__);
  __temp1580v=__temp_complain;
  i=__temp1581v__;
  __temp1580v=__temp1580v==0;
  if(!__temp1580v){
  break;
  }
  mutget__temp1325v(v__unsafe_ptr,v__pos,v__length,i,&__temp1582v__);
  get__temp1330v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1583v__);
  if(!__temp1583v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1584v__number,__temp1583v__,8);
  at__temp1335v(v2,i,&__temp1585v__);
  mul__temp172v(__temp1584v__number,__temp1585v__,&__temp1586v__);
  if(!__temp1582v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1582v__,&__temp1586v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1827v=allocator__buf__unsafe_ptr;
  *__temp1828v=allocator__buf__unsafe_size;
  *__temp1829v=allocator__buf__unsafe_offset;
  *__temp1830v=allocator__buf__unsafe_align;
  *__temp1831v=allocator__pos;
  *__temp1832v=v__unsafe_ptr;
  *__temp1833v=v__pos;
  *__temp1834v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mul__temp1592v(char** __temp1835v, uint64_t* __temp1836v, uint16_t* __temp1837v, uint16_t* __temp1838v, uint64_t* __temp1839v, uint64_t allocator__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1840v, uint64_t* __temp1841v, uint64_t* __temp1842v) {
  char* allocator__buf__unsafe_ptr=*__temp1835v;
  uint64_t allocator__buf__unsafe_size=*__temp1836v;
  uint16_t allocator__buf__unsafe_offset=*__temp1837v;
  uint16_t allocator__buf__unsafe_align=*__temp1838v;
  uint64_t allocator__pos=*__temp1839v;
  char* __temp1593v__unsafe_ptr=0;
  uint64_t __temp1593v__pos=0;
  uint64_t __temp1593v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=mul__temp1576v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__temp1593v__unsafe_ptr,&__temp1593v__pos,&__temp1593v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1835v=allocator__buf__unsafe_ptr;
  *__temp1836v=allocator__buf__unsafe_size;
  *__temp1837v=allocator__buf__unsafe_offset;
  *__temp1838v=allocator__buf__unsafe_align;
  *__temp1839v=allocator__pos;
  *__temp1840v=__temp1593v__unsafe_ptr;
  *__temp1841v=__temp1593v__pos;
  *__temp1842v=__temp1593v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__temp1693v() {
  char* __temp1694v__unsafe_ptr=0;
  uint64_t __temp1694v__unsafe_size=0;
  uint16_t __temp1694v__unsafe_offset=0;
  uint16_t __temp1694v__unsafe_align=0;
  char* __temp1695v__unsafe_ptr=0;
  uint64_t __temp1695v__unsafe_size=0;
  uint16_t __temp1695v__unsafe_offset=0;
  uint16_t __temp1695v__unsafe_align=0;
  uint64_t __temp1696v=0;
  char* __temp1697v__unsafe_ptr=0;
  uint64_t __temp1697v__unsafe_size=0;
  uint16_t __temp1697v__unsafe_offset=0;
  uint16_t __temp1697v__unsafe_align=0;
  char __temp1698v____temp475v__=0;
  char* __temp1699v__buf__unsafe_ptr=0;
  uint64_t __temp1699v__buf__unsafe_size=0;
  uint16_t __temp1699v__buf__unsafe_offset=0;
  uint16_t __temp1699v__buf__unsafe_align=0;
  uint64_t __temp1699v__pos=0;
  uint64_t __temp1699v__length=0;
  char* allocator__buf__unsafe_ptr=0;
  uint64_t allocator__buf__unsafe_size=0;
  uint16_t allocator__buf__unsafe_offset=0;
  uint16_t allocator__buf__unsafe_align=0;
  uint64_t allocator__pos=0;
  uint64_t allocator__length=0;
  char* __temp1700v__unsafe_ptr=0;
  uint64_t __temp1700v__unsafe_size=0;
  uint16_t __temp1700v__unsafe_offset=0;
  uint16_t __temp1700v__unsafe_align=0;
  char* __temp1701v__unsafe_ptr=0;
  uint64_t __temp1701v__unsafe_size=0;
  uint16_t __temp1701v__unsafe_offset=0;
  uint16_t __temp1701v__unsafe_align=0;
  uint64_t __temp1702v=0;
  char* __temp1703v__unsafe_ptr=0;
  uint64_t __temp1703v__unsafe_size=0;
  uint16_t __temp1703v__unsafe_offset=0;
  uint16_t __temp1703v__unsafe_align=0;
  char __temp1704v____temp475v__=0;
  char* __temp1705v__buf__unsafe_ptr=0;
  uint64_t __temp1705v__buf__unsafe_size=0;
  uint16_t __temp1705v__buf__unsafe_offset=0;
  uint16_t __temp1705v__buf__unsafe_align=0;
  uint64_t __temp1705v__pos=0;
  uint64_t __temp1705v__length=0;
  char* allocator2__buf__unsafe_ptr=0;
  uint64_t allocator2__buf__unsafe_size=0;
  uint16_t allocator2__buf__unsafe_offset=0;
  uint16_t allocator2__buf__unsafe_align=0;
  uint64_t allocator2__pos=0;
  uint64_t allocator2__length=0;
  uint64_t __temp1707v=0;
  char* __temp1708v__unsafe_ptr=0;
  uint64_t __temp1708v__pos=0;
  uint64_t __temp1708v__length=0;
  char __temp1709v____temp1295v____temp475v__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __temp1711v=0;
  char* __temp1712v__unsafe_ptr=0;
  uint64_t __temp1712v__pos=0;
  uint64_t __temp1712v__length=0;
  char __temp1713v____temp1295v____temp475v__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __temp1714v=0;
  char* __temp1715v__=0;
  double __temp1716v=0;
  uint64_t __temp1717v=0;
  char* __temp1718v__=0;
  double __temp1719v=0;
  uint64_t __temp1720v=0;
  uint64_t __temp1721v__from=0;
  uint64_t __temp1721v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __temp1722v=0;
  char* __temp1723v__unsafe_ptr=0;
  uint64_t __temp1723v__pos=0;
  uint64_t __temp1723v__length=0;
  char* __temp1724v__unsafe_ptr=0;
  uint64_t __temp1724v__pos=0;
  uint64_t __temp1724v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __temp1725v=0;
  uint64_t __temp1726v__=0;
  uint64_t i=0;
  double __temp1727v=0;
  char* __temp1728v__unsafe_ptr=0;
  uint64_t __temp1728v__pos=0;
  uint64_t __temp1728v__length=0;
  char* __temp1729v__unsafe_ptr=0;
  uint64_t __temp1729v__pos=0;
  uint64_t __temp1729v__length=0;
  char* __temp1730v__unsafe_ptr=0;
  uint64_t __temp1730v__pos=0;
  uint64_t __temp1730v__length=0;
  uint64_t __temp1731v=0;
  char* __temp1732v__=0;
  double __temp1733v__number=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1255v(&__temp1694v__unsafe_ptr,&__temp1694v__unsafe_size,&__temp1694v__unsafe_offset,&__temp1694v__unsafe_align);
  __temp1695v__unsafe_ptr=__temp1694v__unsafe_ptr;
  __temp1695v__unsafe_size=__temp1694v__unsafe_size;
  __temp1695v__unsafe_offset=__temp1694v__unsafe_offset;
  __temp1695v__unsafe_align=__temp1694v__unsafe_align;
  __temp1696v=200;
  __temp_errcode=alloc__temp473v(&__temp1695v__unsafe_ptr,&__temp1695v__unsafe_size,&__temp1695v__unsafe_offset,&__temp1695v__unsafe_align,__temp1696v,&__temp1697v__unsafe_ptr,&__temp1697v__unsafe_size,&__temp1697v__unsafe_offset,&__temp1697v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1279v(&__temp1695v__unsafe_ptr,&__temp1695v__unsafe_size,&__temp1695v__unsafe_offset,&__temp1695v__unsafe_align,&__temp1699v__buf__unsafe_ptr,&__temp1699v__buf__unsafe_size,&__temp1699v__buf__unsafe_offset,&__temp1699v__buf__unsafe_align,&__temp1699v__pos,&__temp1699v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  allocator__pos=__temp1699v__pos;
  allocator__length=__temp1699v__length;
  float____temp_buffer____buffer__temp1255v(&__temp1700v__unsafe_ptr,&__temp1700v__unsafe_size,&__temp1700v__unsafe_offset,&__temp1700v__unsafe_align);
  __temp1701v__unsafe_ptr=__temp1700v__unsafe_ptr;
  __temp1701v__unsafe_size=__temp1700v__unsafe_size;
  __temp1701v__unsafe_offset=__temp1700v__unsafe_offset;
  __temp1701v__unsafe_align=__temp1700v__unsafe_align;
  __temp1702v=200;
  __temp_errcode=alloc__temp473v(&__temp1701v__unsafe_ptr,&__temp1701v__unsafe_size,&__temp1701v__unsafe_offset,&__temp1701v__unsafe_align,__temp1702v,&__temp1703v__unsafe_ptr,&__temp1703v__unsafe_size,&__temp1703v__unsafe_offset,&__temp1703v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1279v(&__temp1701v__unsafe_ptr,&__temp1701v__unsafe_size,&__temp1701v__unsafe_offset,&__temp1701v__unsafe_align,&__temp1705v__buf__unsafe_ptr,&__temp1705v__buf__unsafe_size,&__temp1705v__buf__unsafe_offset,&__temp1705v__buf__unsafe_align,&__temp1705v__pos,&__temp1705v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  allocator2__pos=__temp1705v__pos;
  allocator2__length=__temp1705v__length;
  new__temp1250v();
  __temp1707v=10;
  __temp_errcode=vec__temp1291v(__temp1707v,&__temp1708v__unsafe_ptr,&__temp1708v__pos,&__temp1708v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v1__unsafe_ptr=__temp1708v__unsafe_ptr;
  v1__pos=__temp1708v__pos;
  v1__length=__temp1708v__length;
  new__temp1250v();
  __temp1711v=10;
  __temp_errcode=vec__temp1291v(__temp1711v,&__temp1712v__unsafe_ptr,&__temp1712v__pos,&__temp1712v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v2__unsafe_ptr=__temp1712v__unsafe_ptr;
  v2__pos=__temp1712v__pos;
  v2__length=__temp1712v__length;
  __temp1714v=0;
  mutget__temp1325v(v1__unsafe_ptr,v1__pos,v1__length,__temp1714v,&__temp1715v__);
  __temp1716v=1.0;
  if(!__temp1715v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1715v__,&__temp1716v,8);
  __temp1717v=0;
  mutget__temp1325v(v2__unsafe_ptr,v2__pos,v2__length,__temp1717v,&__temp1718v__);
  __temp1719v=2.0;
  if(!__temp1718v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1718v__,&__temp1719v,8);
  __temp1720v=5;
  range__temp436v(__temp1720v,&__temp1721v__from,&__temp1721v__to);
  it__from=__temp1721v__from;
  it__to=__temp1721v__to;
  __temp1722v=10;
  __temp_errcode=vec__temp1310v(&__temp1695v__unsafe_ptr,&__temp1695v__unsafe_size,&__temp1695v__unsafe_offset,&__temp1695v__unsafe_align,&allocator__pos,allocator__length,__temp1722v,&__temp1723v__unsafe_ptr,&__temp1723v__pos,&__temp1723v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1724v__pos=__temp1723v__pos;
  __temp1724v__length=__temp1723v__length;
  v__pos=__temp1724v__pos;
  v__length=__temp1724v__length;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1726v__);
  __temp1725v=__temp_complain;
  i=__temp1726v__;
  __temp1725v=__temp1725v==0;
  if(!__temp1725v){
  break;
  }
  __temp1727v=2.0;
  __temp_errcode=add__temp1387v(&__temp1695v__unsafe_ptr,&__temp1695v__unsafe_size,&__temp1695v__unsafe_offset,&__temp1695v__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,__temp1695v__unsafe_ptr,v__pos,v__length,&__temp1728v__unsafe_ptr,&__temp1728v__pos,&__temp1728v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=add__temp1387v(&__temp1695v__unsafe_ptr,&__temp1695v__unsafe_size,&__temp1695v__unsafe_offset,&__temp1695v__unsafe_align,&allocator__pos,allocator__length,v1__unsafe_ptr,v1__pos,v1__length,__temp1695v__unsafe_ptr,__temp1728v__pos,__temp1728v__length,&__temp1729v__unsafe_ptr,&__temp1729v__pos,&__temp1729v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mul__temp1592v(&__temp1695v__unsafe_ptr,&__temp1695v__unsafe_size,&__temp1695v__unsafe_offset,&__temp1695v__unsafe_align,&allocator__pos,allocator__length,__temp1727v,__temp1695v__unsafe_ptr,__temp1729v__pos,__temp1729v__length,&__temp1730v__unsafe_ptr,&__temp1730v__pos,&__temp1730v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__pos=__temp1730v__pos;
  v__length=__temp1730v__length;
  }
  __temp1731v=0;
  get__temp1330v(__temp1695v__unsafe_ptr,v__pos,v__length,__temp1731v,&__temp1732v__);
  if(!__temp1732v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1733v__number,__temp1732v__,8);
  print__temp368v(__temp1733v__number);
  
  __temp_failure:exists__temp412v(__temp1712v__unsafe_ptr,&__temp1713v____temp1295v____temp475v__);
  if(__temp1713v____temp1295v____temp475v__){
  __temp1712v__length=0;
  __temp1712v__length=__temp1712v__length;
  __temp1712v__unsafe_ptr=__temp1712v__unsafe_ptr;
  free__temp466v(&__temp1712v__unsafe_ptr);
  }
  exists__temp412v(__temp1708v__unsafe_ptr,&__temp1709v____temp1295v____temp475v__);
  if(__temp1709v____temp1295v____temp475v__){
  __temp1708v__length=0;
  __temp1708v__length=__temp1708v__length;
  __temp1708v__unsafe_ptr=__temp1708v__unsafe_ptr;
  free__temp466v(&__temp1708v__unsafe_ptr);
  }
  exists__temp412v(__temp1703v__unsafe_ptr,&__temp1704v____temp475v__);
  if(__temp1704v____temp475v__){
  __temp1703v__unsafe_size=0;
  __temp1703v__unsafe_size=__temp1703v__unsafe_size;
  __temp1703v__unsafe_ptr=__temp1703v__unsafe_ptr;
  free__temp466v(&__temp1703v__unsafe_ptr);
  }
  exists__temp412v(__temp1697v__unsafe_ptr,&__temp1698v____temp475v__);
  if(__temp1698v____temp475v__){
  __temp1697v__unsafe_size=0;
  __temp1697v__unsafe_size=__temp1697v__unsafe_size;
  __temp1697v__unsafe_ptr=__temp1697v__unsafe_ptr;
  free__temp466v(&__temp1697v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1247v(int64_t value, const char** __temp1843v) {
  int __temp1248v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1843v=ret;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1735v() {
  char __temp1736v=0;
  char __temp1738v=0;
  int64_t __temp1739v=0;
  int64_t error=0;
  const char* __temp1740v__=0;
  int __temp_complain=0;
  __temp_complain=safe_main__temp1693v();
  __temp1736v=__temp_complain;
  __temp1736v=__temp1736v==0;
  __temp1739v=__temp_complain;
  __temp1738v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1739v;
  __temp1738v=__temp1738v==0;
  if(__temp1738v){
  cstr__temp1247v(error,&__temp1740v__);
  print__temp363v(__temp1740v__);
  }
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1735v();return 0;}