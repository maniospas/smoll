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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1252v(char** __temp1738v, uint64_t* __temp1739v, uint16_t* __temp1740v, uint16_t* __temp1741v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1738v=unsafe_ptr;
  *__temp1739v=unsafe_size;
  *__temp1740v=unsafe_offset;
  *__temp1741v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1742v) {
  int value=0;
  *__temp1742v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1743v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1743v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1744v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1744v=__temp95v__;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1745v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1745v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1746v) {
  char* allocated=*__temp1746v;
  if(allocated){
  free(allocated);
  }
  *__temp1746v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1747v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1747v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1748v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1748v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1749v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1749v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1750v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1750v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1751v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1751v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1752v) {
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
  *__temp1752v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1753v, uint64_t* __temp1754v, uint16_t* __temp1755v, uint16_t* __temp1756v, uint64_t size, char** __temp1757v, uint64_t* __temp1758v, uint16_t* __temp1759v, uint16_t* __temp1760v) {
  char* buffer__unsafe_ptr=*__temp1753v;
  uint64_t buffer__unsafe_size=*__temp1754v;
  uint16_t buffer__unsafe_offset=*__temp1755v;
  uint16_t buffer__unsafe_align=*__temp1756v;
  int __temp474v=0;
  uint64_t __temp475v=0;
  char __temp476v__=0;
  uint64_t __temp477v=0;
  char* ptr=0;
  char __temp479v__=0;
  uint64_t __temp480v=0;
  char __temp481v__=0;
  uint64_t __temp482v=0;
  uint64_t __temp483v__=0;
  uint64_t __temp484v__=0;
  char* __temp486v__unsafe_ptr=0;
  uint64_t __temp486v__unsafe_size=0;
  uint16_t __temp486v__unsafe_offset=0;
  uint16_t __temp486v__unsafe_align=0;
  uint64_t __temp487v=0;
  char __temp488v__=0;
  uint64_t __temp489v__=0;
  uint64_t __temp490v__=0;
  uint64_t bytes=0;
  char* __temp491v__=0;
  uint64_t __temp492v=0;
  char* __temp494v__unsafe_ptr=0;
  uint64_t __temp494v__unsafe_size=0;
  uint16_t __temp494v__unsafe_offset=0;
  uint16_t __temp494v__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp479v__);
  if(__temp479v__){
  __temp480v=0;
  neq__temp142v(size,__temp480v,&__temp481v__);
  if(__temp481v__){
  __temp482v=0;
  nat__temp470v(buffer__unsafe_align,&__temp483v__);
  mul__temp194v(__temp483v__,size,&__temp484v__);
  zero__temp467v(buffer__unsafe_ptr,__temp482v,__temp484v__);
  }
  __temp486v__unsafe_ptr=buffer__unsafe_ptr;
  __temp486v__unsafe_size=buffer__unsafe_size;
  __temp486v__unsafe_offset=buffer__unsafe_offset;
  __temp486v__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp487v=0;
  neq__temp142v(buffer__unsafe_size,__temp487v,&__temp488v__);
  if(__temp488v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp489v__);
  mul__temp194v(__temp489v__,size,&__temp490v__);
  bytes=__temp490v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp491v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp491v__;
  __temp492v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp492v,bytes);
  __temp494v__unsafe_ptr=buffer__unsafe_ptr;
  __temp494v__unsafe_size=buffer__unsafe_size;
  __temp494v__unsafe_offset=buffer__unsafe_offset;
  __temp494v__unsafe_align=buffer__unsafe_align;
  __temp486v__unsafe_ptr=__temp494v__unsafe_ptr;
  __temp486v__unsafe_size=__temp494v__unsafe_size;
  __temp486v__unsafe_offset=__temp494v__unsafe_offset;
  __temp486v__unsafe_align=__temp494v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp475v=0;
  neq__temp142v(__temp486v__unsafe_size,__temp475v,&__temp476v__);
  if(__temp476v__){
  __temp486v__unsafe_size=0;
  __temp486v__unsafe_size=__temp486v__unsafe_size;
  __temp486v__unsafe_ptr=__temp486v__unsafe_ptr;
  free__temp466v(&__temp486v__unsafe_ptr);
  }
  __temp_return:
  *__temp1753v=buffer__unsafe_ptr;
  *__temp1754v=buffer__unsafe_size;
  *__temp1755v=buffer__unsafe_offset;
  *__temp1756v=buffer__unsafe_align;
  *__temp1757v=__temp486v__unsafe_ptr;
  *__temp1758v=__temp486v__unsafe_size;
  *__temp1759v=__temp486v__unsafe_offset;
  *__temp1760v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp559v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1761v) {
  goto __temp_return;
  __temp_return:
  *__temp1761v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1762v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1762v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1763v) {
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
  *__temp1763v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1764v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1764v=z;
}

static inline __attribute__((always_inline)) void circular__temp1251v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t* __temp1765v, uint64_t length, char** __temp1766v, uint64_t* __temp1767v, uint16_t* __temp1768v, uint16_t* __temp1769v, uint64_t* __temp1770v, uint64_t* __temp1771v) {
  uint64_t pos=*__temp1765v;
  goto __temp_return;
  __temp_return:
  *__temp1765v=pos;
  *__temp1766v=buf__unsafe_ptr;
  *__temp1767v=buf__unsafe_size;
  *__temp1768v=buf__unsafe_offset;
  *__temp1769v=buf__unsafe_align;
  *__temp1770v=pos;
  *__temp1771v=length;
}

static inline __attribute__((always_inline)) int circular__temp1276v(char** __temp1772v, uint64_t* __temp1773v, uint16_t* __temp1774v, uint16_t* __temp1775v, char** __temp1776v, uint64_t* __temp1777v, uint16_t* __temp1778v, uint16_t* __temp1779v, uint64_t* __temp1780v, uint64_t* __temp1781v) {
  char* buf__unsafe_ptr=*__temp1772v;
  uint64_t buf__unsafe_size=*__temp1773v;
  uint16_t buf__unsafe_offset=*__temp1774v;
  uint16_t buf__unsafe_align=*__temp1775v;
  int __temp1277v=0;
  int __temp1278v=0;
  uint64_t __temp1279v=0;
  uint64_t __temp1280v=0;
  uint64_t pos=0;
  int __temp1281v=0;
  uint64_t __temp1282v__=0;
  uint64_t __temp1283v__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __temp1284v__=0;
  char* __temp1285v__buf__unsafe_ptr=0;
  uint64_t __temp1285v__buf__unsafe_size=0;
  uint16_t __temp1285v__buf__unsafe_offset=0;
  uint16_t __temp1285v__buf__unsafe_align=0;
  uint64_t __temp1285v__pos=0;
  uint64_t __temp1285v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1279v=0;
  __temp1280v=__temp1279v;
  pos=__temp1280v;
  len__temp559v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp1282v__);
  __temp_errcode=sub__temp347v(__temp1282v__,pos,&__temp1283v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1283v__;
  start=pos;
  add__temp170v(pos,length,&__temp1284v__);
  pos=__temp1284v__;
  circular__temp1251v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&start,length,&__temp1285v__buf__unsafe_ptr,&__temp1285v__buf__unsafe_size,&__temp1285v__buf__unsafe_offset,&__temp1285v__buf__unsafe_align,&__temp1285v__pos,&__temp1285v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1772v=buf__unsafe_ptr;
  *__temp1773v=buf__unsafe_size;
  *__temp1774v=buf__unsafe_offset;
  *__temp1775v=buf__unsafe_align;
  *__temp1776v=__temp1285v__buf__unsafe_ptr;
  *__temp1777v=__temp1285v__buf__unsafe_size;
  *__temp1778v=__temp1285v__buf__unsafe_offset;
  *__temp1779v=__temp1285v__buf__unsafe_align;
  *__temp1780v=__temp1285v__pos;
  *__temp1781v=__temp1285v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void new__temp1247v() {
  goto __temp_return;
  __temp_return:
}

static inline __attribute__((always_inline)) void vec__temp1286v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1782v, uint64_t* __temp1783v, uint64_t* __temp1784v) {
  goto __temp_return;
  __temp_return:
  *__temp1782v=unsafe_ptr;
  *__temp1783v=pos;
  *__temp1784v=length;
}

int vec__temp1288v(uint64_t length, char** __temp1785v, uint64_t* __temp1786v, uint64_t* __temp1787v) {
  char* __temp1289v__unsafe_ptr=0;
  uint64_t __temp1289v__unsafe_size=0;
  uint16_t __temp1289v__unsafe_offset=0;
  uint16_t __temp1289v__unsafe_align=0;
  char* __temp1290v__unsafe_ptr=0;
  uint64_t __temp1290v__unsafe_size=0;
  uint16_t __temp1290v__unsafe_offset=0;
  uint16_t __temp1290v__unsafe_align=0;
  uint64_t __temp1291v____temp475v=0;
  char __temp1291v____temp476v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __temp1292v=0;
  char* __temp1293v__unsafe_ptr=0;
  uint64_t __temp1293v__pos=0;
  uint64_t __temp1293v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1252v(&__temp1289v__unsafe_ptr,&__temp1289v__unsafe_size,&__temp1289v__unsafe_offset,&__temp1289v__unsafe_align);
  __temp_errcode=alloc__temp473v(&__temp1289v__unsafe_ptr,&__temp1289v__unsafe_size,&__temp1289v__unsafe_offset,&__temp1289v__unsafe_align,length,&__temp1290v__unsafe_ptr,&__temp1290v__unsafe_size,&__temp1290v__unsafe_offset,&__temp1290v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1290v__unsafe_ptr;
  buf__unsafe_size=__temp1290v__unsafe_size;
  buf__unsafe_offset=__temp1290v__unsafe_offset;
  buf__unsafe_align=__temp1290v__unsafe_align;
  __temp1292v=0;
  vec__temp1286v(buf__unsafe_ptr,__temp1292v,length,&__temp1293v__unsafe_ptr,&__temp1293v__pos,&__temp1293v__length);
  goto __temp_return;
  
  __temp_failure:__temp1291v____temp475v=0;
  neq__temp142v(__temp1293v__length,__temp1291v____temp475v,&__temp1291v____temp476v__);
  if(__temp1291v____temp476v__){
  __temp1293v__length=0;
  __temp1293v__length=__temp1293v__length;
  __temp1293v__unsafe_ptr=__temp1293v__unsafe_ptr;
  free__temp466v(&__temp1293v__unsafe_ptr);
  }
  __temp_return:
  *__temp1785v=__temp1293v__unsafe_ptr;
  *__temp1786v=__temp1293v__pos;
  *__temp1787v=__temp1293v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1788v) {
  *__temp1788v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1789v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1789v=__temp469v__;
}

static inline __attribute__((always_inline)) void mutget__temp1323v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1790v) {
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
  *__temp1790v=__temp1327v__;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1791v, uint64_t* __temp1792v) {
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
  *__temp1791v=from;
  *__temp1792v=to;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1793v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1793v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1794v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1794v=z;
}

static inline __attribute__((always_inline)) int vec__temp1306v(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __temp1795v, uint64_t allocator__length, uint64_t length, char** __temp1796v, uint64_t* __temp1797v, uint64_t* __temp1798v) {
  uint64_t allocator__pos=*__temp1795v;
  uint64_t __temp1307v__=0;
  uint64_t __temp1308v=0;
  char __temp1309v__=0;
  uint64_t __temp1310v__=0;
  uint64_t __temp1311v=0;
  char __temp1312v__=0;
  uint64_t __temp1313v__=0;
  char __temp1314v__=0;
  uint64_t __temp1315v=0;
  uint64_t start=0;
  uint64_t __temp1316v__=0;
  char __temp1317v__=0;
  uint64_t __temp1318v=0;
  uint64_t __temp1319v__=0;
  uint64_t __temp1320v=0;
  char* __temp1321v__unsafe_ptr=0;
  uint64_t __temp1321v__pos=0;
  uint64_t __temp1321v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  nat__temp470v(allocator__buf__unsafe_align,&__temp1307v__);
  __temp1308v=8;
  neq__temp142v(__temp1307v__,__temp1308v,&__temp1309v__);
  if(__temp1309v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  nat__temp470v(allocator__buf__unsafe_offset,&__temp1310v__);
  __temp1311v=0;
  neq__temp142v(__temp1310v__,__temp1311v,&__temp1312v__);
  if(__temp1312v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  len__temp559v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__temp1313v__);
  gt__temp271v(length,__temp1313v__,&__temp1314v__);
  if(__temp1314v__){
  __temp_errcode=34;
  goto __temp_failure;
  }
  __temp1315v=allocator__pos;
  start=__temp1315v;
  add__temp170v(allocator__pos,length,&__temp1316v__);
  allocator__pos=__temp1316v__;
  ge__temp319v(allocator__pos,allocator__length,&__temp1317v__);
  if(__temp1317v__){
  __temp1318v=0;
  add__temp170v(length,__temp1318v,&__temp1319v__);
  allocator__pos=__temp1319v__;
  __temp1320v=0;
  start=__temp1320v;
  }
  vec__temp1286v(allocator__buf__unsafe_ptr,start,length,&__temp1321v__unsafe_ptr,&__temp1321v__pos,&__temp1321v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1795v=allocator__pos;
  *__temp1796v=__temp1321v__unsafe_ptr;
  *__temp1797v=__temp1321v__pos;
  *__temp1798v=__temp1321v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1799v, uint64_t r__to, uint64_t* __temp1800v) {
  uint64_t r__from=*__temp1799v;
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
  *__temp1799v=r__from;
  *__temp1800v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp1328v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1801v) {
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
  *__temp1801v=__temp1332v__;
}

static inline __attribute__((always_inline)) int at__temp1334v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __temp1802v) {
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
  *__temp1802v=__temp1336v__value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1803v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1803v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1804v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1804v=z;
}

int add__temp1385v(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __temp1805v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1806v, uint64_t* __temp1807v, uint64_t* __temp1808v) {
  uint64_t allocator__pos=*__temp1805v;
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
  __temp_errcode=vec__temp1306v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1388v__unsafe_ptr,&__temp1388v__pos,&__temp1388v__length);
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
  *__temp1805v=allocator__pos;
  *__temp1806v=v__unsafe_ptr;
  *__temp1807v=v__pos;
  *__temp1808v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void at__temp1333v(double number, uint64_t i, double* __temp1809v) {
  goto __temp_return;
  __temp_return:
  *__temp1809v=number;
}

static inline __attribute__((always_inline)) void mul__temp172v(double x, double y, double* __temp1810v) {
  int __temp173v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1810v=z;
}

static inline __attribute__((always_inline)) int mul__temp1574v(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __temp1811v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __temp1812v, uint64_t* __temp1813v, uint64_t* __temp1814v) {
  uint64_t allocator__pos=*__temp1811v;
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
  __temp_errcode=vec__temp1306v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1576v__unsafe_ptr,&__temp1576v__pos,&__temp1576v__length);
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
  *__temp1811v=allocator__pos;
  *__temp1812v=v__unsafe_ptr;
  *__temp1813v=v__pos;
  *__temp1814v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mul__temp1590v(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __temp1815v, uint64_t allocator__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1816v, uint64_t* __temp1817v, uint64_t* __temp1818v) {
  uint64_t allocator__pos=*__temp1815v;
  char* __temp1591v__unsafe_ptr=0;
  uint64_t __temp1591v__pos=0;
  uint64_t __temp1591v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=mul__temp1574v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__temp1591v__unsafe_ptr,&__temp1591v__pos,&__temp1591v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1815v=allocator__pos;
  *__temp1816v=__temp1591v__unsafe_ptr;
  *__temp1817v=__temp1591v__pos;
  *__temp1818v=__temp1591v__length;
  
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
  uint64_t __temp1693v=0;
  char* __temp1694v__unsafe_ptr=0;
  uint64_t __temp1694v__unsafe_size=0;
  uint16_t __temp1694v__unsafe_offset=0;
  uint16_t __temp1694v__unsafe_align=0;
  uint64_t __temp1695v____temp475v=0;
  char __temp1695v____temp476v__=0;
  char* __temp1696v__buf__unsafe_ptr=0;
  uint64_t __temp1696v__buf__unsafe_size=0;
  uint16_t __temp1696v__buf__unsafe_offset=0;
  uint16_t __temp1696v__buf__unsafe_align=0;
  uint64_t __temp1696v__pos=0;
  uint64_t __temp1696v__length=0;
  char* allocator__buf__unsafe_ptr=0;
  uint64_t allocator__buf__unsafe_size=0;
  uint16_t allocator__buf__unsafe_offset=0;
  uint16_t allocator__buf__unsafe_align=0;
  uint64_t allocator__pos=0;
  uint64_t allocator__length=0;
  char* __temp1697v__unsafe_ptr=0;
  uint64_t __temp1697v__unsafe_size=0;
  uint16_t __temp1697v__unsafe_offset=0;
  uint16_t __temp1697v__unsafe_align=0;
  uint64_t __temp1698v=0;
  char* __temp1699v__unsafe_ptr=0;
  uint64_t __temp1699v__unsafe_size=0;
  uint16_t __temp1699v__unsafe_offset=0;
  uint16_t __temp1699v__unsafe_align=0;
  uint64_t __temp1700v____temp475v=0;
  char __temp1700v____temp476v__=0;
  char* __temp1701v__buf__unsafe_ptr=0;
  uint64_t __temp1701v__buf__unsafe_size=0;
  uint16_t __temp1701v__buf__unsafe_offset=0;
  uint16_t __temp1701v__buf__unsafe_align=0;
  uint64_t __temp1701v__pos=0;
  uint64_t __temp1701v__length=0;
  char* allocator2__buf__unsafe_ptr=0;
  uint64_t allocator2__buf__unsafe_size=0;
  uint16_t allocator2__buf__unsafe_offset=0;
  uint16_t allocator2__buf__unsafe_align=0;
  uint64_t allocator2__pos=0;
  uint64_t allocator2__length=0;
  uint64_t __temp1703v=0;
  char* __temp1704v__unsafe_ptr=0;
  uint64_t __temp1704v__pos=0;
  uint64_t __temp1704v__length=0;
  uint64_t __temp1705v____temp1291v____temp475v=0;
  char __temp1705v____temp1291v____temp476v__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __temp1707v=0;
  char* __temp1708v__unsafe_ptr=0;
  uint64_t __temp1708v__pos=0;
  uint64_t __temp1708v__length=0;
  uint64_t __temp1709v____temp1291v____temp475v=0;
  char __temp1709v____temp1291v____temp476v__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __temp1710v=0;
  char* __temp1711v__=0;
  double __temp1712v=0;
  uint64_t __temp1713v=0;
  char* __temp1714v__=0;
  double __temp1715v=0;
  uint64_t __temp1716v=0;
  uint64_t __temp1717v__from=0;
  uint64_t __temp1717v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __temp1718v=0;
  char* __temp1719v__unsafe_ptr=0;
  uint64_t __temp1719v__pos=0;
  uint64_t __temp1719v__length=0;
  char* __temp1720v__unsafe_ptr=0;
  uint64_t __temp1720v__pos=0;
  uint64_t __temp1720v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __temp1721v=0;
  uint64_t __temp1722v__=0;
  uint64_t i=0;
  double __temp1723v=0;
  char* __temp1724v__unsafe_ptr=0;
  uint64_t __temp1724v__pos=0;
  uint64_t __temp1724v__length=0;
  char* __temp1725v__unsafe_ptr=0;
  uint64_t __temp1725v__pos=0;
  uint64_t __temp1725v__length=0;
  char* __temp1726v__unsafe_ptr=0;
  uint64_t __temp1726v__pos=0;
  uint64_t __temp1726v__length=0;
  uint64_t __temp1727v=0;
  char* __temp1728v__=0;
  double __temp1729v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1252v(&__temp1692v__unsafe_ptr,&__temp1692v__unsafe_size,&__temp1692v__unsafe_offset,&__temp1692v__unsafe_align);
  __temp1693v=200;
  __temp_errcode=alloc__temp473v(&__temp1692v__unsafe_ptr,&__temp1692v__unsafe_size,&__temp1692v__unsafe_offset,&__temp1692v__unsafe_align,__temp1693v,&__temp1694v__unsafe_ptr,&__temp1694v__unsafe_size,&__temp1694v__unsafe_offset,&__temp1694v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1276v(&__temp1694v__unsafe_ptr,&__temp1694v__unsafe_size,&__temp1694v__unsafe_offset,&__temp1694v__unsafe_align,&__temp1696v__buf__unsafe_ptr,&__temp1696v__buf__unsafe_size,&__temp1696v__buf__unsafe_offset,&__temp1696v__buf__unsafe_align,&__temp1696v__pos,&__temp1696v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  float____temp_buffer____buffer__temp1252v(&__temp1697v__unsafe_ptr,&__temp1697v__unsafe_size,&__temp1697v__unsafe_offset,&__temp1697v__unsafe_align);
  __temp1698v=200;
  __temp_errcode=alloc__temp473v(&__temp1697v__unsafe_ptr,&__temp1697v__unsafe_size,&__temp1697v__unsafe_offset,&__temp1697v__unsafe_align,__temp1698v,&__temp1699v__unsafe_ptr,&__temp1699v__unsafe_size,&__temp1699v__unsafe_offset,&__temp1699v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1276v(&__temp1699v__unsafe_ptr,&__temp1699v__unsafe_size,&__temp1699v__unsafe_offset,&__temp1699v__unsafe_align,&__temp1701v__buf__unsafe_ptr,&__temp1701v__buf__unsafe_size,&__temp1701v__buf__unsafe_offset,&__temp1701v__buf__unsafe_align,&__temp1701v__pos,&__temp1701v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new__temp1247v();
  __temp1703v=10;
  __temp_errcode=vec__temp1288v(__temp1703v,&__temp1704v__unsafe_ptr,&__temp1704v__pos,&__temp1704v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v1__unsafe_ptr=__temp1704v__unsafe_ptr;
  v1__pos=__temp1704v__pos;
  v1__length=__temp1704v__length;
  new__temp1247v();
  __temp1707v=10;
  __temp_errcode=vec__temp1288v(__temp1707v,&__temp1708v__unsafe_ptr,&__temp1708v__pos,&__temp1708v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v2__unsafe_ptr=__temp1708v__unsafe_ptr;
  v2__pos=__temp1708v__pos;
  v2__length=__temp1708v__length;
  __temp1710v=0;
  mutget__temp1323v(v1__unsafe_ptr,v1__pos,v1__length,__temp1710v,&__temp1711v__);
  __temp1712v=1.0;
  if(!__temp1711v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1711v__,&__temp1712v,8);
  __temp1713v=0;
  mutget__temp1323v(v2__unsafe_ptr,v2__pos,v2__length,__temp1713v,&__temp1714v__);
  __temp1715v=2.0;
  if(!__temp1714v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1714v__,&__temp1715v,8);
  __temp1716v=5;
  range__temp436v(__temp1716v,&__temp1717v__from,&__temp1717v__to);
  it__from=__temp1717v__from;
  it__to=__temp1717v__to;
  __temp1718v=10;
  __temp_errcode=vec__temp1306v(__temp1696v__buf__unsafe_ptr,__temp1696v__buf__unsafe_size,__temp1696v__buf__unsafe_offset,__temp1696v__buf__unsafe_align,&__temp1696v__pos,__temp1696v__length,__temp1718v,&__temp1719v__unsafe_ptr,&__temp1719v__pos,&__temp1719v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1720v__pos=__temp1719v__pos;
  __temp1720v__length=__temp1719v__length;
  v__pos=__temp1720v__pos;
  v__length=__temp1720v__length;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1722v__);
  __temp1721v=__temp_complain;
  i=__temp1722v__;
  __temp1721v=__temp1721v==0;
  if(!__temp1721v){
  break;
  }
  __temp1723v=2.0;
  __temp_errcode=add__temp1385v(__temp1696v__buf__unsafe_ptr,__temp1696v__buf__unsafe_size,__temp1696v__buf__unsafe_offset,__temp1696v__buf__unsafe_align,&__temp1696v__pos,__temp1696v__length,v2__unsafe_ptr,v2__pos,v2__length,__temp1696v__buf__unsafe_ptr,v__pos,v__length,&__temp1724v__unsafe_ptr,&__temp1724v__pos,&__temp1724v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=add__temp1385v(__temp1696v__buf__unsafe_ptr,__temp1696v__buf__unsafe_size,__temp1696v__buf__unsafe_offset,__temp1696v__buf__unsafe_align,&__temp1696v__pos,__temp1696v__length,v1__unsafe_ptr,v1__pos,v1__length,__temp1696v__buf__unsafe_ptr,__temp1724v__pos,__temp1724v__length,&__temp1725v__unsafe_ptr,&__temp1725v__pos,&__temp1725v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mul__temp1590v(__temp1696v__buf__unsafe_ptr,__temp1696v__buf__unsafe_size,__temp1696v__buf__unsafe_offset,__temp1696v__buf__unsafe_align,&__temp1696v__pos,__temp1696v__length,__temp1723v,__temp1696v__buf__unsafe_ptr,__temp1725v__pos,__temp1725v__length,&__temp1726v__unsafe_ptr,&__temp1726v__pos,&__temp1726v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__pos=__temp1726v__pos;
  v__length=__temp1726v__length;
  }
  __temp1727v=0;
  get__temp1328v(__temp1696v__buf__unsafe_ptr,v__pos,v__length,__temp1727v,&__temp1728v__);
  if(!__temp1728v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1729v__value,__temp1728v__,8);
  print__temp368v(__temp1729v__value);
  
  __temp_failure:__temp1709v____temp1291v____temp475v=0;
  neq__temp142v(__temp1708v__length,__temp1709v____temp1291v____temp475v,&__temp1709v____temp1291v____temp476v__);
  if(__temp1709v____temp1291v____temp476v__){
  __temp1708v__length=0;
  __temp1708v__length=__temp1708v__length;
  __temp1708v__unsafe_ptr=__temp1708v__unsafe_ptr;
  free__temp466v(&__temp1708v__unsafe_ptr);
  }
  __temp1705v____temp1291v____temp475v=0;
  neq__temp142v(__temp1704v__length,__temp1705v____temp1291v____temp475v,&__temp1705v____temp1291v____temp476v__);
  if(__temp1705v____temp1291v____temp476v__){
  __temp1704v__length=0;
  __temp1704v__length=__temp1704v__length;
  __temp1704v__unsafe_ptr=__temp1704v__unsafe_ptr;
  free__temp466v(&__temp1704v__unsafe_ptr);
  }
  __temp1700v____temp475v=0;
  neq__temp142v(__temp1699v__unsafe_size,__temp1700v____temp475v,&__temp1700v____temp476v__);
  if(__temp1700v____temp476v__){
  __temp1699v__unsafe_size=0;
  __temp1699v__unsafe_size=__temp1699v__unsafe_size;
  __temp1699v__unsafe_ptr=__temp1699v__unsafe_ptr;
  free__temp466v(&__temp1699v__unsafe_ptr);
  }
  __temp1695v____temp475v=0;
  neq__temp142v(__temp1694v__unsafe_size,__temp1695v____temp475v,&__temp1695v____temp476v__);
  if(__temp1695v____temp476v__){
  __temp1694v__unsafe_size=0;
  __temp1694v__unsafe_size=__temp1694v__unsafe_size;
  __temp1694v__unsafe_ptr=__temp1694v__unsafe_ptr;
  free__temp466v(&__temp1694v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1244v(int64_t value, const char** __temp1819v) {
  int __temp1245v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1819v=ret;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1731v() {
  char __temp1732v=0;
  char __temp1734v=0;
  int64_t __temp1735v=0;
  int64_t error=0;
  const char* __temp1736v__=0;
  int __temp_complain=0;
  __temp_complain=safe_main__temp1691v();
  __temp1732v=__temp_complain;
  __temp1732v=__temp1732v==0;
  __temp1735v=__temp_complain;
  __temp1734v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1735v;
  __temp1734v=__temp1734v==0;
  if(__temp1734v){
  cstr__temp1244v(error,&__temp1736v__);
  print__temp363v(__temp1736v__);
  }
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1731v();return 0;}