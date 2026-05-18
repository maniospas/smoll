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
"cannot resize a buffer with offset",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
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

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1743v) {
  char* allocated=*__temp1743v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
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

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1749v) {
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

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1751v) {
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
  *__temp1751v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1752v, uint64_t* __temp1753v, uint16_t* __temp1754v, uint16_t* __temp1755v, uint64_t size, char** __temp1756v, uint64_t* __temp1757v, uint16_t* __temp1758v, uint16_t* __temp1759v) {
  char* buffer__unsafe_ptr=*__temp1752v;
  uint64_t buffer__unsafe_size=*__temp1753v;
  uint16_t buffer__unsafe_offset=*__temp1754v;
  uint16_t buffer__unsafe_align=*__temp1755v;
  int __temp469v=0;
  char __temp470v__=0;
  uint64_t __temp471v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  uint64_t __temp477v__=0;
  uint64_t __temp478v__=0;
  uint64_t __temp480v=0;
  char __temp481v__=0;
  uint64_t __temp482v__=0;
  uint64_t __temp483v__=0;
  uint64_t bytes=0;
  char* __temp484v__=0;
  uint64_t __temp485v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  neq__temp142v(size,__temp474v,&__temp475v__);
  if(__temp475v__){
  __temp476v=0;
  nat__temp465v(buffer__unsafe_align,&__temp477v__);
  mul__temp194v(__temp477v__,size,&__temp478v__);
  zero__temp462v(buffer__unsafe_ptr,__temp476v,__temp478v__);
  }
  goto __temp_return;
  }
  __temp480v=0;
  neq__temp142v(buffer__unsafe_size,__temp480v,&__temp481v__);
  if(__temp481v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp482v__);
  mul__temp194v(__temp482v__,size,&__temp483v__);
  bytes=__temp483v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp484v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp484v__;
  __temp485v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp485v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp470v__);
  if(__temp470v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1752v=buffer__unsafe_ptr;
  *__temp1753v=buffer__unsafe_size;
  *__temp1754v=buffer__unsafe_offset;
  *__temp1755v=buffer__unsafe_align;
  *__temp1756v=buffer__unsafe_ptr;
  *__temp1757v=buffer__unsafe_size;
  *__temp1758v=buffer__unsafe_offset;
  *__temp1759v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp555v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1760v) {
  goto __temp_return;
  __temp_return:
  *__temp1760v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1761v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1761v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1762v) {
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
  *__temp1762v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1763v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1763v=z;
}

static inline __attribute__((always_inline)) void circular__temp1250v(char** __temp1764v, uint64_t* __temp1765v, uint16_t* __temp1766v, uint16_t* __temp1767v, uint64_t* __temp1768v, uint64_t length, char** __temp1769v, uint64_t* __temp1770v, uint16_t* __temp1771v, uint16_t* __temp1772v, uint64_t* __temp1773v, uint64_t* __temp1774v) {
  char* buf__unsafe_ptr=*__temp1764v;
  uint64_t buf__unsafe_size=*__temp1765v;
  uint16_t buf__unsafe_offset=*__temp1766v;
  uint16_t buf__unsafe_align=*__temp1767v;
  uint64_t pos=*__temp1768v;
  goto __temp_return;
  __temp_return:
  *__temp1764v=buf__unsafe_ptr;
  *__temp1765v=buf__unsafe_size;
  *__temp1766v=buf__unsafe_offset;
  *__temp1767v=buf__unsafe_align;
  *__temp1768v=pos;
  *__temp1769v=buf__unsafe_ptr;
  *__temp1770v=buf__unsafe_size;
  *__temp1771v=buf__unsafe_offset;
  *__temp1772v=buf__unsafe_align;
  *__temp1773v=pos;
  *__temp1774v=length;
}

static inline __attribute__((always_inline)) int circular__temp1275v(char** __temp1775v, uint64_t* __temp1776v, uint16_t* __temp1777v, uint16_t* __temp1778v, char** __temp1779v, uint64_t* __temp1780v, uint16_t* __temp1781v, uint16_t* __temp1782v, uint64_t* __temp1783v, uint64_t* __temp1784v) {
  char* buf__unsafe_ptr=*__temp1775v;
  uint64_t buf__unsafe_size=*__temp1776v;
  uint16_t buf__unsafe_offset=*__temp1777v;
  uint16_t buf__unsafe_align=*__temp1778v;
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
  len__temp555v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp1281v__);
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
  *__temp1775v=buf__unsafe_ptr;
  *__temp1776v=buf__unsafe_size;
  *__temp1777v=buf__unsafe_offset;
  *__temp1778v=buf__unsafe_align;
  *__temp1779v=__temp1284v__buf__unsafe_ptr;
  *__temp1780v=__temp1284v__buf__unsafe_size;
  *__temp1781v=__temp1284v__buf__unsafe_offset;
  *__temp1782v=__temp1284v__buf__unsafe_align;
  *__temp1783v=__temp1284v__pos;
  *__temp1784v=__temp1284v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void new__temp1246v() {
  goto __temp_return;
  __temp_return:
}

static inline __attribute__((always_inline)) void vec__temp1285v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1785v, uint64_t* __temp1786v, uint64_t* __temp1787v) {
  goto __temp_return;
  __temp_return:
  *__temp1785v=unsafe_ptr;
  *__temp1786v=pos;
  *__temp1787v=length;
}

static inline __attribute__((always_inline)) int vec__temp1287v(uint64_t length, char** __temp1788v, uint64_t* __temp1789v, uint64_t* __temp1790v) {
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
  char __temp1291v____temp470v__=0;
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
  __temp_errcode=alloc__temp468v(&__temp1289v__unsafe_ptr,&__temp1289v__unsafe_size,&__temp1289v__unsafe_offset,&__temp1289v__unsafe_align,length,&__temp1290v__unsafe_ptr,&__temp1290v__unsafe_size,&__temp1290v__unsafe_offset,&__temp1290v__unsafe_align);
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
  
  __temp_failure:exists__temp412v(__temp1293v__unsafe_ptr,&__temp1291v____temp470v__);
  if(__temp1291v____temp470v__){
  __temp1290v__unsafe_size=0;
  __temp1290v__unsafe_size=__temp1290v__unsafe_size;
  free__temp461v(&__temp1293v__unsafe_ptr);
  }
  __temp_return:
  *__temp1788v=__temp1293v__unsafe_ptr;
  *__temp1789v=__temp1293v__pos;
  *__temp1790v=__temp1293v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1791v) {
  *__temp1791v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1792v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1792v=__temp464v__;
}

static inline __attribute__((always_inline)) void mutget__temp1321v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1793v) {
  uint64_t __temp1322v=0;
  uint64_t __temp1323v__=0;
  uint64_t __temp1324v__=0;
  char* __temp1325v__=0;
  __temp1322v=8;
  add__temp170v(i,v__pos,&__temp1323v__);
  mul__temp194v(__temp1322v,__temp1323v__,&__temp1324v__);
  add__temp463v(v__unsafe_ptr,__temp1324v__,&__temp1325v__);
  goto __temp_return;
  __temp_return:
  *__temp1793v=__temp1325v__;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1794v, uint64_t* __temp1795v) {
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
  *__temp1794v=from;
  *__temp1795v=to;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1796v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1796v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1797v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1797v=z;
}

static inline __attribute__((always_inline)) int vec__temp1306v(char** __temp1798v, uint64_t* __temp1799v, uint16_t* __temp1800v, uint16_t* __temp1801v, uint64_t* __temp1802v, uint64_t allocator__length, uint64_t length, char** __temp1803v, uint64_t* __temp1804v, uint64_t* __temp1805v) {
  char* allocator__buf__unsafe_ptr=*__temp1798v;
  uint64_t allocator__buf__unsafe_size=*__temp1799v;
  uint16_t allocator__buf__unsafe_offset=*__temp1800v;
  uint16_t allocator__buf__unsafe_align=*__temp1801v;
  uint64_t allocator__pos=*__temp1802v;
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
  nat__temp465v(allocator__buf__unsafe_align,&__temp1307v__);
  __temp1308v=8;
  neq__temp142v(__temp1307v__,__temp1308v,&__temp1309v__);
  if(__temp1309v__){
  __temp_errcode=32;
  goto __temp_failure;
  }
  nat__temp465v(allocator__buf__unsafe_offset,&__temp1310v__);
  __temp1311v=0;
  neq__temp142v(__temp1310v__,__temp1311v,&__temp1312v__);
  if(__temp1312v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  len__temp555v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__temp1313v__);
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
  *__temp1798v=allocator__buf__unsafe_ptr;
  *__temp1799v=allocator__buf__unsafe_size;
  *__temp1800v=allocator__buf__unsafe_offset;
  *__temp1801v=allocator__buf__unsafe_align;
  *__temp1802v=allocator__pos;
  *__temp1803v=__temp1319v__unsafe_ptr;
  *__temp1804v=__temp1319v__pos;
  *__temp1805v=__temp1319v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1806v, uint64_t r__to, uint64_t* __temp1807v) {
  uint64_t r__from=*__temp1806v;
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
  *__temp1806v=r__from;
  *__temp1807v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp1326v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1808v) {
  uint64_t __temp1327v=0;
  uint64_t __temp1328v__=0;
  uint64_t __temp1329v__=0;
  char* __temp1330v__=0;
  __temp1327v=8;
  add__temp170v(i,v__pos,&__temp1328v__);
  mul__temp194v(__temp1327v,__temp1328v__,&__temp1329v__);
  add__temp463v(v__unsafe_ptr,__temp1329v__,&__temp1330v__);
  goto __temp_return;
  __temp_return:
  *__temp1808v=__temp1330v__;
}

static inline __attribute__((always_inline)) int at__temp1332v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __temp1809v) {
  char* __temp1333v__=0;
  double __temp1334v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  get__temp1326v(v__unsafe_ptr,v__pos,v__length,i,&__temp1333v__);
  if(!__temp1333v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1334v__value,__temp1333v__,8);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1809v=__temp1334v__value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1810v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1810v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1811v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1811v=z;
}

int add__temp1383v(char** __temp1812v, uint64_t* __temp1813v, uint16_t* __temp1814v, uint16_t* __temp1815v, uint64_t* __temp1816v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1817v, uint64_t* __temp1818v, uint64_t* __temp1819v) {
  char* allocator__buf__unsafe_ptr=*__temp1812v;
  uint64_t allocator__buf__unsafe_size=*__temp1813v;
  uint16_t allocator__buf__unsafe_offset=*__temp1814v;
  uint16_t allocator__buf__unsafe_align=*__temp1815v;
  uint64_t allocator__pos=*__temp1816v;
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
  double __temp1392v__value=0;
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
  range__temp435v(v1__length,&__temp1387v__from,&__temp1387v__to);
  it__from=__temp1387v__from;
  it__to=__temp1387v__to;
  p1=v1__unsafe_ptr;
  while(1){
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1389v__);
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
  memcpy(&__temp1392v__value,__temp1391v__,8);
  __temp_errcode=at__temp1332v(v2__unsafe_ptr,v2__pos,v2__length,i,&__temp1393v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  add__temp148v(__temp1392v__value,__temp1393v__,&__temp1394v__);
  if(!__temp1390v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1390v__,&__temp1394v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1812v=allocator__buf__unsafe_ptr;
  *__temp1813v=allocator__buf__unsafe_size;
  *__temp1814v=allocator__buf__unsafe_offset;
  *__temp1815v=allocator__buf__unsafe_align;
  *__temp1816v=allocator__pos;
  *__temp1817v=v__unsafe_ptr;
  *__temp1818v=v__pos;
  *__temp1819v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void at__temp1331v(double number, uint64_t i, double* __temp1820v) {
  goto __temp_return;
  __temp_return:
  *__temp1820v=number;
}

static inline __attribute__((always_inline)) void mul__temp172v(double x, double y, double* __temp1821v) {
  int __temp173v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1821v=z;
}

static inline __attribute__((always_inline)) int mul__temp1572v(char** __temp1822v, uint64_t* __temp1823v, uint16_t* __temp1824v, uint16_t* __temp1825v, uint64_t* __temp1826v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __temp1827v, uint64_t* __temp1828v, uint64_t* __temp1829v) {
  char* allocator__buf__unsafe_ptr=*__temp1822v;
  uint64_t allocator__buf__unsafe_size=*__temp1823v;
  uint16_t allocator__buf__unsafe_offset=*__temp1824v;
  uint16_t allocator__buf__unsafe_align=*__temp1825v;
  uint64_t allocator__pos=*__temp1826v;
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
  double __temp1580v__value=0;
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
  range__temp435v(v1__length,&__temp1575v__from,&__temp1575v__to);
  it__from=__temp1575v__from;
  it__to=__temp1575v__to;
  while(1){
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1577v__);
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
  memcpy(&__temp1580v__value,__temp1579v__,8);
  at__temp1331v(v2,i,&__temp1581v__);
  mul__temp172v(__temp1580v__value,__temp1581v__,&__temp1582v__);
  if(!__temp1578v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1578v__,&__temp1582v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1822v=allocator__buf__unsafe_ptr;
  *__temp1823v=allocator__buf__unsafe_size;
  *__temp1824v=allocator__buf__unsafe_offset;
  *__temp1825v=allocator__buf__unsafe_align;
  *__temp1826v=allocator__pos;
  *__temp1827v=v__unsafe_ptr;
  *__temp1828v=v__pos;
  *__temp1829v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mul__temp1588v(char** __temp1830v, uint64_t* __temp1831v, uint16_t* __temp1832v, uint16_t* __temp1833v, uint64_t* __temp1834v, uint64_t allocator__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1835v, uint64_t* __temp1836v, uint64_t* __temp1837v) {
  char* allocator__buf__unsafe_ptr=*__temp1830v;
  uint64_t allocator__buf__unsafe_size=*__temp1831v;
  uint16_t allocator__buf__unsafe_offset=*__temp1832v;
  uint16_t allocator__buf__unsafe_align=*__temp1833v;
  uint64_t allocator__pos=*__temp1834v;
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
  *__temp1830v=allocator__buf__unsafe_ptr;
  *__temp1831v=allocator__buf__unsafe_size;
  *__temp1832v=allocator__buf__unsafe_offset;
  *__temp1833v=allocator__buf__unsafe_align;
  *__temp1834v=allocator__pos;
  *__temp1835v=__temp1589v__unsafe_ptr;
  *__temp1836v=__temp1589v__pos;
  *__temp1837v=__temp1589v__length;
  
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
  char __temp1694v____temp470v__=0;
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
  char __temp1700v____temp470v__=0;
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
  char __temp1705v____temp1291v____temp470v__=0;
  uint64_t __temp1705v____temp1290v__unsafe_size=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __temp1707v=0;
  char* __temp1708v__unsafe_ptr=0;
  uint64_t __temp1708v__pos=0;
  uint64_t __temp1708v__length=0;
  char __temp1709v____temp1291v____temp470v__=0;
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
  double __temp1729v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1251v(&__temp1690v__unsafe_ptr,&__temp1690v__unsafe_size,&__temp1690v__unsafe_offset,&__temp1690v__unsafe_align);
  __temp1691v__unsafe_ptr=__temp1690v__unsafe_ptr;
  __temp1691v__unsafe_size=__temp1690v__unsafe_size;
  __temp1691v__unsafe_offset=__temp1690v__unsafe_offset;
  __temp1691v__unsafe_align=__temp1690v__unsafe_align;
  __temp1692v=200;
  __temp_errcode=alloc__temp468v(&__temp1691v__unsafe_ptr,&__temp1691v__unsafe_size,&__temp1691v__unsafe_offset,&__temp1691v__unsafe_align,__temp1692v,&__temp1693v__unsafe_ptr,&__temp1693v__unsafe_size,&__temp1693v__unsafe_offset,&__temp1693v__unsafe_align);
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
  __temp_errcode=alloc__temp468v(&__temp1697v__unsafe_ptr,&__temp1697v__unsafe_size,&__temp1697v__unsafe_offset,&__temp1697v__unsafe_align,__temp1698v,&__temp1699v__unsafe_ptr,&__temp1699v__unsafe_size,&__temp1699v__unsafe_offset,&__temp1699v__unsafe_align);
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
  range__temp435v(__temp1716v,&__temp1717v__from,&__temp1717v__to);
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
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1722v__);
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
  memcpy(&__temp1729v__value,__temp1728v__,8);
  print__temp368v(__temp1729v__value);
  
  __temp_failure:exists__temp412v(__temp1708v__unsafe_ptr,&__temp1709v____temp1291v____temp470v__);
  if(__temp1709v____temp1291v____temp470v__){
  __temp1709v____temp1290v__unsafe_size=0;
  __temp1709v____temp1290v__unsafe_size=__temp1709v____temp1290v__unsafe_size;
  free__temp461v(&__temp1708v__unsafe_ptr);
  }
  exists__temp412v(__temp1704v__unsafe_ptr,&__temp1705v____temp1291v____temp470v__);
  if(__temp1705v____temp1291v____temp470v__){
  __temp1705v____temp1290v__unsafe_size=0;
  __temp1705v____temp1290v__unsafe_size=__temp1705v____temp1290v__unsafe_size;
  free__temp461v(&__temp1704v__unsafe_ptr);
  }
  exists__temp412v(__temp1699v__unsafe_ptr,&__temp1700v____temp470v__);
  if(__temp1700v____temp470v__){
  __temp1699v__unsafe_size=0;
  __temp1699v__unsafe_size=__temp1699v__unsafe_size;
  free__temp461v(&__temp1699v__unsafe_ptr);
  }
  exists__temp412v(__temp1693v__unsafe_ptr,&__temp1694v____temp470v__);
  if(__temp1694v____temp470v__){
  __temp1693v__unsafe_size=0;
  __temp1693v__unsafe_size=__temp1693v__unsafe_size;
  free__temp461v(&__temp1693v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1243v(int64_t value, const char** __temp1838v) {
  int __temp1244v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1838v=ret;
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