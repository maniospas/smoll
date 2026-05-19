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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1251v(char** __temp1738v, uint64_t* __temp1739v, uint16_t* __temp1740v, uint16_t* __temp1741v) {
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

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1742v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1742v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1743v) {
  char* allocated=*__temp1743v;
  if(allocated){
  free(allocated);
  }
  *__temp1743v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1744v) {
  int value=0;
  *__temp1744v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1745v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1745v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1746v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1746v=__temp95v__;
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

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1748v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1748v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1749v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1749v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1750v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1750v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
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
  char __temp475v__=0;
  uint64_t __temp476v=0;
  char* ptr=0;
  char __temp478v__=0;
  uint64_t __temp479v=0;
  char __temp480v__=0;
  uint64_t __temp481v=0;
  uint64_t __temp482v__=0;
  uint64_t __temp483v__=0;
  uint64_t __temp485v=0;
  char __temp486v__=0;
  uint64_t __temp487v__=0;
  uint64_t __temp488v__=0;
  uint64_t bytes=0;
  char* __temp489v__=0;
  uint64_t __temp490v=0;
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
  goto __temp_return;
  }
  __temp485v=0;
  neq__temp142v(buffer__unsafe_size,__temp485v,&__temp486v__);
  if(__temp486v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp487v__);
  mul__temp194v(__temp487v__,size,&__temp488v__);
  bytes=__temp488v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp489v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp489v__;
  __temp490v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp490v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp475v__);
  if(__temp475v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__temp466v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1753v=buffer__unsafe_ptr;
  *__temp1754v=buffer__unsafe_size;
  *__temp1755v=buffer__unsafe_offset;
  *__temp1756v=buffer__unsafe_align;
  *__temp1757v=buffer__unsafe_ptr;
  *__temp1758v=buffer__unsafe_size;
  *__temp1759v=buffer__unsafe_offset;
  *__temp1760v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp553v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1761v) {
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

static inline __attribute__((always_inline)) void circular__temp1250v(char** __temp1765v, uint64_t* __temp1766v, uint16_t* __temp1767v, uint16_t* __temp1768v, uint64_t* __temp1769v, uint64_t length, char** __temp1770v, uint64_t* __temp1771v, uint16_t* __temp1772v, uint16_t* __temp1773v, uint64_t* __temp1774v, uint64_t* __temp1775v) {
  char* buf__unsafe_ptr=*__temp1765v;
  uint64_t buf__unsafe_size=*__temp1766v;
  uint16_t buf__unsafe_offset=*__temp1767v;
  uint16_t buf__unsafe_align=*__temp1768v;
  uint64_t pos=*__temp1769v;
  goto __temp_return;
  __temp_return:
  *__temp1765v=buf__unsafe_ptr;
  *__temp1766v=buf__unsafe_size;
  *__temp1767v=buf__unsafe_offset;
  *__temp1768v=buf__unsafe_align;
  *__temp1769v=pos;
  *__temp1770v=buf__unsafe_ptr;
  *__temp1771v=buf__unsafe_size;
  *__temp1772v=buf__unsafe_offset;
  *__temp1773v=buf__unsafe_align;
  *__temp1774v=pos;
  *__temp1775v=length;
}

static inline __attribute__((always_inline)) int circular__temp1275v(char** __temp1776v, uint64_t* __temp1777v, uint16_t* __temp1778v, uint16_t* __temp1779v, char** __temp1780v, uint64_t* __temp1781v, uint16_t* __temp1782v, uint16_t* __temp1783v, uint64_t* __temp1784v, uint64_t* __temp1785v) {
  char* buf__unsafe_ptr=*__temp1776v;
  uint64_t buf__unsafe_size=*__temp1777v;
  uint16_t buf__unsafe_offset=*__temp1778v;
  uint16_t buf__unsafe_align=*__temp1779v;
  int __temp1276v=0;
  int __temp1277v=0;
  uint64_t __temp1278v=0;
  uint64_t __temp1279v=0;
  uint64_t pos=0;
  int __temp1280v=0;
  uint64_t __temp1281v__=0;
  uint64_t __temp1282v__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __temp1283v__=0;
  char* __temp1284v__buf__unsafe_ptr=0;
  uint64_t __temp1284v__buf__unsafe_size=0;
  uint16_t __temp1284v__buf__unsafe_offset=0;
  uint16_t __temp1284v__buf__unsafe_align=0;
  uint64_t __temp1284v__pos=0;
  uint64_t __temp1284v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1278v=0;
  __temp1279v=__temp1278v;
  pos=__temp1279v;
  len__temp553v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp1281v__);
  __temp_errcode=sub__temp347v(__temp1281v__,pos,&__temp1282v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1282v__;
  start=pos;
  add__temp170v(pos,length,&__temp1283v__);
  pos=__temp1283v__;
  circular__temp1250v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&start,length,&__temp1284v__buf__unsafe_ptr,&__temp1284v__buf__unsafe_size,&__temp1284v__buf__unsafe_offset,&__temp1284v__buf__unsafe_align,&__temp1284v__pos,&__temp1284v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1776v=buf__unsafe_ptr;
  *__temp1777v=buf__unsafe_size;
  *__temp1778v=buf__unsafe_offset;
  *__temp1779v=buf__unsafe_align;
  *__temp1780v=__temp1284v__buf__unsafe_ptr;
  *__temp1781v=__temp1284v__buf__unsafe_size;
  *__temp1782v=__temp1284v__buf__unsafe_offset;
  *__temp1783v=__temp1284v__buf__unsafe_align;
  *__temp1784v=__temp1284v__pos;
  *__temp1785v=__temp1284v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void new__temp1246v() {
  goto __temp_return;
  __temp_return:
}

static inline __attribute__((always_inline)) void vec__temp1285v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1786v, uint64_t* __temp1787v, uint64_t* __temp1788v) {
  goto __temp_return;
  __temp_return:
  *__temp1786v=unsafe_ptr;
  *__temp1787v=pos;
  *__temp1788v=length;
}

static inline __attribute__((always_inline)) int vec__temp1287v(uint64_t length, char** __temp1789v, uint64_t* __temp1790v, uint64_t* __temp1791v) {
  char* __temp1288v__unsafe_ptr=0;
  uint64_t __temp1288v__unsafe_size=0;
  uint16_t __temp1288v__unsafe_offset=0;
  uint16_t __temp1288v__unsafe_align=0;
  char* __temp1289v__unsafe_ptr=0;
  uint64_t __temp1289v__unsafe_size=0;
  uint16_t __temp1289v__unsafe_offset=0;
  uint16_t __temp1289v__unsafe_align=0;
  char* __temp1290v__unsafe_ptr=0;
  uint64_t __temp1290v__unsafe_size=0;
  uint16_t __temp1290v__unsafe_offset=0;
  uint16_t __temp1290v__unsafe_align=0;
  char __temp1291v____temp475v__=0;
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
  float____temp_buffer____buffer__temp1251v(&__temp1288v__unsafe_ptr,&__temp1288v__unsafe_size,&__temp1288v__unsafe_offset,&__temp1288v__unsafe_align);
  __temp1289v__unsafe_ptr=__temp1288v__unsafe_ptr;
  __temp1289v__unsafe_size=__temp1288v__unsafe_size;
  __temp1289v__unsafe_offset=__temp1288v__unsafe_offset;
  __temp1289v__unsafe_align=__temp1288v__unsafe_align;
  __temp_errcode=alloc__temp473v(&__temp1289v__unsafe_ptr,&__temp1289v__unsafe_size,&__temp1289v__unsafe_offset,&__temp1289v__unsafe_align,length,&__temp1290v__unsafe_ptr,&__temp1290v__unsafe_size,&__temp1290v__unsafe_offset,&__temp1290v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1290v__unsafe_ptr;
  buf__unsafe_size=__temp1290v__unsafe_size;
  buf__unsafe_offset=__temp1290v__unsafe_offset;
  buf__unsafe_align=__temp1290v__unsafe_align;
  __temp1292v=0;
  vec__temp1285v(buf__unsafe_ptr,__temp1292v,length,&__temp1293v__unsafe_ptr,&__temp1293v__pos,&__temp1293v__length);
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1293v__unsafe_ptr,&__temp1291v____temp475v__);
  if(__temp1291v____temp475v__){
  __temp1290v__unsafe_size=0;
  __temp1290v__unsafe_size=__temp1290v__unsafe_size;
  __temp1293v__unsafe_ptr=__temp1293v__unsafe_ptr;
  free__temp466v(&__temp1293v__unsafe_ptr);
  }
  __temp_return:
  *__temp1789v=__temp1293v__unsafe_ptr;
  *__temp1790v=__temp1293v__pos;
  *__temp1791v=__temp1293v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1792v) {
  *__temp1792v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1793v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1793v=__temp469v__;
}

static inline __attribute__((always_inline)) void mutget__temp1321v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1794v) {
  uint64_t __temp1322v=0;
  uint64_t __temp1323v__=0;
  uint64_t __temp1324v__=0;
  char* __temp1325v__=0;
  __temp1322v=8;
  add__temp170v(i,v__pos,&__temp1323v__);
  mul__temp194v(__temp1322v,__temp1323v__,&__temp1324v__);
  add__temp468v(v__unsafe_ptr,__temp1324v__,&__temp1325v__);
  goto __temp_return;
  __temp_return:
  *__temp1794v=__temp1325v__;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1795v, uint64_t* __temp1796v) {
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
  *__temp1795v=from;
  *__temp1796v=to;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1797v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1797v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1798v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1798v=z;
}

static inline __attribute__((always_inline)) int vec__temp1306v(char** __temp1799v, uint64_t* __temp1800v, uint16_t* __temp1801v, uint16_t* __temp1802v, uint64_t* __temp1803v, uint64_t allocator__length, uint64_t length, char** __temp1804v, uint64_t* __temp1805v, uint64_t* __temp1806v) {
  char* allocator__buf__unsafe_ptr=*__temp1799v;
  uint64_t allocator__buf__unsafe_size=*__temp1800v;
  uint16_t allocator__buf__unsafe_offset=*__temp1801v;
  uint16_t allocator__buf__unsafe_align=*__temp1802v;
  uint64_t allocator__pos=*__temp1803v;
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
  char* __temp1319v__unsafe_ptr=0;
  uint64_t __temp1319v__pos=0;
  uint64_t __temp1319v__length=0;
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
  len__temp553v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__temp1313v__);
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
  allocator__pos=length;
  __temp1318v=0;
  start=__temp1318v;
  }
  vec__temp1285v(allocator__buf__unsafe_ptr,start,length,&__temp1319v__unsafe_ptr,&__temp1319v__pos,&__temp1319v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1799v=allocator__buf__unsafe_ptr;
  *__temp1800v=allocator__buf__unsafe_size;
  *__temp1801v=allocator__buf__unsafe_offset;
  *__temp1802v=allocator__buf__unsafe_align;
  *__temp1803v=allocator__pos;
  *__temp1804v=__temp1319v__unsafe_ptr;
  *__temp1805v=__temp1319v__pos;
  *__temp1806v=__temp1319v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1807v, uint64_t r__to, uint64_t* __temp1808v) {
  uint64_t r__from=*__temp1807v;
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
  *__temp1807v=r__from;
  *__temp1808v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp1326v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1809v) {
  uint64_t __temp1327v=0;
  uint64_t __temp1328v__=0;
  uint64_t __temp1329v__=0;
  char* __temp1330v__=0;
  __temp1327v=8;
  add__temp170v(i,v__pos,&__temp1328v__);
  mul__temp194v(__temp1327v,__temp1328v__,&__temp1329v__);
  add__temp468v(v__unsafe_ptr,__temp1329v__,&__temp1330v__);
  goto __temp_return;
  __temp_return:
  *__temp1809v=__temp1330v__;
}

static inline __attribute__((always_inline)) int at__temp1332v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __temp1810v) {
  char* __temp1333v__=0;
  double __temp1334v__number=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  get__temp1326v(v__unsafe_ptr,v__pos,v__length,i,&__temp1333v__);
  if(!__temp1333v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1334v__number,__temp1333v__,8);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1810v=__temp1334v__number;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1811v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1811v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1812v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1812v=z;
}

int add__temp1383v(char** __temp1813v, uint64_t* __temp1814v, uint16_t* __temp1815v, uint16_t* __temp1816v, uint64_t* __temp1817v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1818v, uint64_t* __temp1819v, uint64_t* __temp1820v) {
  char* allocator__buf__unsafe_ptr=*__temp1813v;
  uint64_t allocator__buf__unsafe_size=*__temp1814v;
  uint16_t allocator__buf__unsafe_offset=*__temp1815v;
  uint16_t allocator__buf__unsafe_align=*__temp1816v;
  uint64_t allocator__pos=*__temp1817v;
  int __temp1384v=0;
  char __temp1385v__=0;
  char* __temp1386v__unsafe_ptr=0;
  uint64_t __temp1386v__pos=0;
  uint64_t __temp1386v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1387v__from=0;
  uint64_t __temp1387v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char* p1=0;
  char __temp1388v=0;
  uint64_t __temp1389v__=0;
  uint64_t i=0;
  char* __temp1390v__=0;
  char* __temp1391v__=0;
  double __temp1392v__number=0;
  double __temp1393v__=0;
  double __temp1394v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  neq__temp142v(v1__length,v2__length,&__temp1385v__);
  if(__temp1385v__){
  __temp_errcode=35;
  goto __temp_failure;
  }
  __temp_errcode=vec__temp1306v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1386v__unsafe_ptr,&__temp1386v__pos,&__temp1386v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1386v__unsafe_ptr;
  v__pos=__temp1386v__pos;
  v__length=__temp1386v__length;
  range__temp436v(v1__length,&__temp1387v__from,&__temp1387v__to);
  it__from=__temp1387v__from;
  it__to=__temp1387v__to;
  p1=v1__unsafe_ptr;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1389v__);
  __temp1388v=__temp_complain;
  i=__temp1389v__;
  __temp1388v=__temp1388v==0;
  if(!__temp1388v){
  break;
  }
  mutget__temp1321v(v__unsafe_ptr,v__pos,v__length,i,&__temp1390v__);
  get__temp1326v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1391v__);
  if(!__temp1391v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1392v__number,__temp1391v__,8);
  __temp_errcode=at__temp1332v(v2__unsafe_ptr,v2__pos,v2__length,i,&__temp1393v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  add__temp148v(__temp1392v__number,__temp1393v__,&__temp1394v__);
  if(!__temp1390v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1390v__,&__temp1394v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1813v=allocator__buf__unsafe_ptr;
  *__temp1814v=allocator__buf__unsafe_size;
  *__temp1815v=allocator__buf__unsafe_offset;
  *__temp1816v=allocator__buf__unsafe_align;
  *__temp1817v=allocator__pos;
  *__temp1818v=v__unsafe_ptr;
  *__temp1819v=v__pos;
  *__temp1820v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void at__temp1331v(double number, uint64_t i, double* __temp1821v) {
  goto __temp_return;
  __temp_return:
  *__temp1821v=number;
}

static inline __attribute__((always_inline)) void mul__temp172v(double x, double y, double* __temp1822v) {
  int __temp173v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1822v=z;
}

static inline __attribute__((always_inline)) int mul__temp1572v(char** __temp1823v, uint64_t* __temp1824v, uint16_t* __temp1825v, uint16_t* __temp1826v, uint64_t* __temp1827v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __temp1828v, uint64_t* __temp1829v, uint64_t* __temp1830v) {
  char* allocator__buf__unsafe_ptr=*__temp1823v;
  uint64_t allocator__buf__unsafe_size=*__temp1824v;
  uint16_t allocator__buf__unsafe_offset=*__temp1825v;
  uint16_t allocator__buf__unsafe_align=*__temp1826v;
  uint64_t allocator__pos=*__temp1827v;
  int __temp1573v=0;
  char* __temp1574v__unsafe_ptr=0;
  uint64_t __temp1574v__pos=0;
  uint64_t __temp1574v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1575v__from=0;
  uint64_t __temp1575v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1576v=0;
  uint64_t __temp1577v__=0;
  uint64_t i=0;
  char* __temp1578v__=0;
  char* __temp1579v__=0;
  double __temp1580v__number=0;
  double __temp1581v__=0;
  double __temp1582v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=vec__temp1306v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1574v__unsafe_ptr,&__temp1574v__pos,&__temp1574v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1574v__unsafe_ptr;
  v__pos=__temp1574v__pos;
  v__length=__temp1574v__length;
  range__temp436v(v1__length,&__temp1575v__from,&__temp1575v__to);
  it__from=__temp1575v__from;
  it__to=__temp1575v__to;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1577v__);
  __temp1576v=__temp_complain;
  i=__temp1577v__;
  __temp1576v=__temp1576v==0;
  if(!__temp1576v){
  break;
  }
  mutget__temp1321v(v__unsafe_ptr,v__pos,v__length,i,&__temp1578v__);
  get__temp1326v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1579v__);
  if(!__temp1579v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1580v__number,__temp1579v__,8);
  at__temp1331v(v2,i,&__temp1581v__);
  mul__temp172v(__temp1580v__number,__temp1581v__,&__temp1582v__);
  if(!__temp1578v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1578v__,&__temp1582v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1823v=allocator__buf__unsafe_ptr;
  *__temp1824v=allocator__buf__unsafe_size;
  *__temp1825v=allocator__buf__unsafe_offset;
  *__temp1826v=allocator__buf__unsafe_align;
  *__temp1827v=allocator__pos;
  *__temp1828v=v__unsafe_ptr;
  *__temp1829v=v__pos;
  *__temp1830v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mul__temp1588v(char** __temp1831v, uint64_t* __temp1832v, uint16_t* __temp1833v, uint16_t* __temp1834v, uint64_t* __temp1835v, uint64_t allocator__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1836v, uint64_t* __temp1837v, uint64_t* __temp1838v) {
  char* allocator__buf__unsafe_ptr=*__temp1831v;
  uint64_t allocator__buf__unsafe_size=*__temp1832v;
  uint16_t allocator__buf__unsafe_offset=*__temp1833v;
  uint16_t allocator__buf__unsafe_align=*__temp1834v;
  uint64_t allocator__pos=*__temp1835v;
  char* __temp1589v__unsafe_ptr=0;
  uint64_t __temp1589v__pos=0;
  uint64_t __temp1589v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=mul__temp1572v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__temp1589v__unsafe_ptr,&__temp1589v__pos,&__temp1589v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1831v=allocator__buf__unsafe_ptr;
  *__temp1832v=allocator__buf__unsafe_size;
  *__temp1833v=allocator__buf__unsafe_offset;
  *__temp1834v=allocator__buf__unsafe_align;
  *__temp1835v=allocator__pos;
  *__temp1836v=__temp1589v__unsafe_ptr;
  *__temp1837v=__temp1589v__pos;
  *__temp1838v=__temp1589v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__temp1689v() {
  char* __temp1690v__unsafe_ptr=0;
  uint64_t __temp1690v__unsafe_size=0;
  uint16_t __temp1690v__unsafe_offset=0;
  uint16_t __temp1690v__unsafe_align=0;
  char* __temp1691v__unsafe_ptr=0;
  uint64_t __temp1691v__unsafe_size=0;
  uint16_t __temp1691v__unsafe_offset=0;
  uint16_t __temp1691v__unsafe_align=0;
  uint64_t __temp1692v=0;
  char* __temp1693v__unsafe_ptr=0;
  uint64_t __temp1693v__unsafe_size=0;
  uint16_t __temp1693v__unsafe_offset=0;
  uint16_t __temp1693v__unsafe_align=0;
  char __temp1694v____temp475v__=0;
  char* __temp1695v__buf__unsafe_ptr=0;
  uint64_t __temp1695v__buf__unsafe_size=0;
  uint16_t __temp1695v__buf__unsafe_offset=0;
  uint16_t __temp1695v__buf__unsafe_align=0;
  uint64_t __temp1695v__pos=0;
  uint64_t __temp1695v__length=0;
  char* allocator__buf__unsafe_ptr=0;
  uint64_t allocator__buf__unsafe_size=0;
  uint16_t allocator__buf__unsafe_offset=0;
  uint16_t allocator__buf__unsafe_align=0;
  uint64_t allocator__pos=0;
  uint64_t allocator__length=0;
  char* __temp1696v__unsafe_ptr=0;
  uint64_t __temp1696v__unsafe_size=0;
  uint16_t __temp1696v__unsafe_offset=0;
  uint16_t __temp1696v__unsafe_align=0;
  char* __temp1697v__unsafe_ptr=0;
  uint64_t __temp1697v__unsafe_size=0;
  uint16_t __temp1697v__unsafe_offset=0;
  uint16_t __temp1697v__unsafe_align=0;
  uint64_t __temp1698v=0;
  char* __temp1699v__unsafe_ptr=0;
  uint64_t __temp1699v__unsafe_size=0;
  uint16_t __temp1699v__unsafe_offset=0;
  uint16_t __temp1699v__unsafe_align=0;
  char __temp1700v____temp475v__=0;
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
  char __temp1705v____temp1291v____temp475v__=0;
  uint64_t __temp1705v____temp1290v__unsafe_size=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __temp1707v=0;
  char* __temp1708v__unsafe_ptr=0;
  uint64_t __temp1708v__pos=0;
  uint64_t __temp1708v__length=0;
  char __temp1709v____temp1291v____temp475v__=0;
  uint64_t __temp1709v____temp1290v__unsafe_size=0;
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
  double __temp1729v__number=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1251v(&__temp1690v__unsafe_ptr,&__temp1690v__unsafe_size,&__temp1690v__unsafe_offset,&__temp1690v__unsafe_align);
  __temp1691v__unsafe_ptr=__temp1690v__unsafe_ptr;
  __temp1691v__unsafe_size=__temp1690v__unsafe_size;
  __temp1691v__unsafe_offset=__temp1690v__unsafe_offset;
  __temp1691v__unsafe_align=__temp1690v__unsafe_align;
  __temp1692v=200;
  __temp_errcode=alloc__temp473v(&__temp1691v__unsafe_ptr,&__temp1691v__unsafe_size,&__temp1691v__unsafe_offset,&__temp1691v__unsafe_align,__temp1692v,&__temp1693v__unsafe_ptr,&__temp1693v__unsafe_size,&__temp1693v__unsafe_offset,&__temp1693v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1275v(&__temp1691v__unsafe_ptr,&__temp1691v__unsafe_size,&__temp1691v__unsafe_offset,&__temp1691v__unsafe_align,&__temp1695v__buf__unsafe_ptr,&__temp1695v__buf__unsafe_size,&__temp1695v__buf__unsafe_offset,&__temp1695v__buf__unsafe_align,&__temp1695v__pos,&__temp1695v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  allocator__pos=__temp1695v__pos;
  allocator__length=__temp1695v__length;
  float____temp_buffer____buffer__temp1251v(&__temp1696v__unsafe_ptr,&__temp1696v__unsafe_size,&__temp1696v__unsafe_offset,&__temp1696v__unsafe_align);
  __temp1697v__unsafe_ptr=__temp1696v__unsafe_ptr;
  __temp1697v__unsafe_size=__temp1696v__unsafe_size;
  __temp1697v__unsafe_offset=__temp1696v__unsafe_offset;
  __temp1697v__unsafe_align=__temp1696v__unsafe_align;
  __temp1698v=200;
  __temp_errcode=alloc__temp473v(&__temp1697v__unsafe_ptr,&__temp1697v__unsafe_size,&__temp1697v__unsafe_offset,&__temp1697v__unsafe_align,__temp1698v,&__temp1699v__unsafe_ptr,&__temp1699v__unsafe_size,&__temp1699v__unsafe_offset,&__temp1699v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1275v(&__temp1697v__unsafe_ptr,&__temp1697v__unsafe_size,&__temp1697v__unsafe_offset,&__temp1697v__unsafe_align,&__temp1701v__buf__unsafe_ptr,&__temp1701v__buf__unsafe_size,&__temp1701v__buf__unsafe_offset,&__temp1701v__buf__unsafe_align,&__temp1701v__pos,&__temp1701v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  allocator2__pos=__temp1701v__pos;
  allocator2__length=__temp1701v__length;
  new__temp1246v();
  __temp1703v=10;
  __temp_errcode=vec__temp1287v(__temp1703v,&__temp1704v__unsafe_ptr,&__temp1704v__pos,&__temp1704v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v1__unsafe_ptr=__temp1704v__unsafe_ptr;
  v1__pos=__temp1704v__pos;
  v1__length=__temp1704v__length;
  new__temp1246v();
  __temp1707v=10;
  __temp_errcode=vec__temp1287v(__temp1707v,&__temp1708v__unsafe_ptr,&__temp1708v__pos,&__temp1708v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v2__unsafe_ptr=__temp1708v__unsafe_ptr;
  v2__pos=__temp1708v__pos;
  v2__length=__temp1708v__length;
  __temp1710v=0;
  mutget__temp1321v(v1__unsafe_ptr,v1__pos,v1__length,__temp1710v,&__temp1711v__);
  __temp1712v=1.0;
  if(!__temp1711v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1711v__,&__temp1712v,8);
  __temp1713v=0;
  mutget__temp1321v(v2__unsafe_ptr,v2__pos,v2__length,__temp1713v,&__temp1714v__);
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
  __temp_errcode=vec__temp1306v(&__temp1691v__unsafe_ptr,&__temp1691v__unsafe_size,&__temp1691v__unsafe_offset,&__temp1691v__unsafe_align,&allocator__pos,allocator__length,__temp1718v,&__temp1719v__unsafe_ptr,&__temp1719v__pos,&__temp1719v__length);
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
  __temp_errcode=add__temp1383v(&__temp1691v__unsafe_ptr,&__temp1691v__unsafe_size,&__temp1691v__unsafe_offset,&__temp1691v__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,__temp1691v__unsafe_ptr,v__pos,v__length,&__temp1724v__unsafe_ptr,&__temp1724v__pos,&__temp1724v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=add__temp1383v(&__temp1691v__unsafe_ptr,&__temp1691v__unsafe_size,&__temp1691v__unsafe_offset,&__temp1691v__unsafe_align,&allocator__pos,allocator__length,v1__unsafe_ptr,v1__pos,v1__length,__temp1691v__unsafe_ptr,__temp1724v__pos,__temp1724v__length,&__temp1725v__unsafe_ptr,&__temp1725v__pos,&__temp1725v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mul__temp1588v(&__temp1691v__unsafe_ptr,&__temp1691v__unsafe_size,&__temp1691v__unsafe_offset,&__temp1691v__unsafe_align,&allocator__pos,allocator__length,__temp1723v,__temp1691v__unsafe_ptr,__temp1725v__pos,__temp1725v__length,&__temp1726v__unsafe_ptr,&__temp1726v__pos,&__temp1726v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__pos=__temp1726v__pos;
  v__length=__temp1726v__length;
  }
  __temp1727v=0;
  get__temp1326v(__temp1691v__unsafe_ptr,v__pos,v__length,__temp1727v,&__temp1728v__);
  if(!__temp1728v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1729v__number,__temp1728v__,8);
  print__temp368v(__temp1729v__number);
  
  __temp_failure:exists__temp412v(__temp1708v__unsafe_ptr,&__temp1709v____temp1291v____temp475v__);
  if(__temp1709v____temp1291v____temp475v__){
  __temp1709v____temp1290v__unsafe_size=0;
  __temp1709v____temp1290v__unsafe_size=__temp1709v____temp1290v__unsafe_size;
  __temp1708v__unsafe_ptr=__temp1708v__unsafe_ptr;
  free__temp466v(&__temp1708v__unsafe_ptr);
  }
  exists__temp412v(__temp1704v__unsafe_ptr,&__temp1705v____temp1291v____temp475v__);
  if(__temp1705v____temp1291v____temp475v__){
  __temp1705v____temp1290v__unsafe_size=0;
  __temp1705v____temp1290v__unsafe_size=__temp1705v____temp1290v__unsafe_size;
  __temp1704v__unsafe_ptr=__temp1704v__unsafe_ptr;
  free__temp466v(&__temp1704v__unsafe_ptr);
  }
  exists__temp412v(__temp1699v__unsafe_ptr,&__temp1700v____temp475v__);
  if(__temp1700v____temp475v__){
  __temp1699v__unsafe_size=0;
  __temp1699v__unsafe_size=__temp1699v__unsafe_size;
  __temp1699v__unsafe_ptr=__temp1699v__unsafe_ptr;
  free__temp466v(&__temp1699v__unsafe_ptr);
  }
  exists__temp412v(__temp1693v__unsafe_ptr,&__temp1694v____temp475v__);
  if(__temp1694v____temp475v__){
  __temp1693v__unsafe_size=0;
  __temp1693v__unsafe_size=__temp1693v__unsafe_size;
  __temp1693v__unsafe_ptr=__temp1693v__unsafe_ptr;
  free__temp466v(&__temp1693v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1243v(int64_t value, const char** __temp1839v) {
  int __temp1244v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1839v=ret;
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
  __temp_complain=safe_main__temp1689v();
  __temp1732v=__temp_complain;
  __temp1732v=__temp1732v==0;
  __temp1735v=__temp_complain;
  __temp1734v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1735v;
  __temp1734v=__temp1734v==0;
  if(__temp1734v){
  cstr__temp1243v(error,&__temp1736v__);
  print__temp363v(__temp1736v__);
  }
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1731v();return 0;}