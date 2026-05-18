#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[38] = {"noerr",
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
"cannot resize a buffer offset",
"cannot resize a buffer with spacing",
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1252v(char** __temp1739v, uint64_t* __temp1740v, uint16_t* __temp1741v, uint16_t* __temp1742v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1739v=unsafe_ptr;
  *__temp1740v=unsafe_size;
  *__temp1741v=unsafe_offset;
  *__temp1742v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1743v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1743v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1744v) {
  char* allocated=*__temp1744v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1744v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1745v) {
  int value=0;
  *__temp1745v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1746v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1746v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1747v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1747v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1748v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1748v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1749v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1749v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1750v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1750v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1751v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1751v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1752v) {
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
  *__temp1752v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1753v, uint64_t* __temp1754v, uint16_t* __temp1755v, uint16_t* __temp1756v, uint64_t size, char** __temp1757v, uint64_t* __temp1758v, uint16_t* __temp1759v, uint16_t* __temp1760v) {
  char* buffer__unsafe_ptr=*__temp1753v;
  uint64_t buffer__unsafe_size=*__temp1754v;
  uint16_t buffer__unsafe_offset=*__temp1755v;
  uint16_t buffer__unsafe_align=*__temp1756v;
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

static inline __attribute__((always_inline)) void len__temp558v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1761v) {
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

static inline __attribute__((always_inline)) void circular__temp1251v(char** __temp1765v, uint64_t* __temp1766v, uint16_t* __temp1767v, uint16_t* __temp1768v, uint64_t* __temp1769v, uint64_t length, char** __temp1770v, uint64_t* __temp1771v, uint16_t* __temp1772v, uint16_t* __temp1773v, uint64_t* __temp1774v, uint64_t* __temp1775v) {
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

static inline __attribute__((always_inline)) int circular__temp1276v(char** __temp1776v, uint64_t* __temp1777v, uint16_t* __temp1778v, uint16_t* __temp1779v, char** __temp1780v, uint64_t* __temp1781v, uint16_t* __temp1782v, uint16_t* __temp1783v, uint64_t* __temp1784v, uint64_t* __temp1785v) {
  char* buf__unsafe_ptr=*__temp1776v;
  uint64_t buf__unsafe_size=*__temp1777v;
  uint16_t buf__unsafe_offset=*__temp1778v;
  uint16_t buf__unsafe_align=*__temp1779v;
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
  len__temp558v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp1282v__);
  __temp_errcode=sub__temp347v(__temp1282v__,pos,&__temp1283v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1283v__;
  start=pos;
  add__temp170v(pos,length,&__temp1284v__);
  pos=__temp1284v__;
  circular__temp1251v(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&start,length,&__temp1285v__buf__unsafe_ptr,&__temp1285v__buf__unsafe_size,&__temp1285v__buf__unsafe_offset,&__temp1285v__buf__unsafe_align,&__temp1285v__pos,&__temp1285v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1776v=buf__unsafe_ptr;
  *__temp1777v=buf__unsafe_size;
  *__temp1778v=buf__unsafe_offset;
  *__temp1779v=buf__unsafe_align;
  *__temp1780v=__temp1285v__buf__unsafe_ptr;
  *__temp1781v=__temp1285v__buf__unsafe_size;
  *__temp1782v=__temp1285v__buf__unsafe_offset;
  *__temp1783v=__temp1285v__buf__unsafe_align;
  *__temp1784v=__temp1285v__pos;
  *__temp1785v=__temp1285v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void new__temp1247v() {
  goto __temp_return;
  __temp_return:
}

static inline __attribute__((always_inline)) void vec__temp1286v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1786v, uint64_t* __temp1787v, uint64_t* __temp1788v) {
  goto __temp_return;
  __temp_return:
  *__temp1786v=unsafe_ptr;
  *__temp1787v=pos;
  *__temp1788v=length;
}

static inline __attribute__((always_inline)) int vec__temp1288v(uint64_t length, char** __temp1789v, uint64_t* __temp1790v, uint64_t* __temp1791v) {
  char* __temp1289v__unsafe_ptr=0;
  uint64_t __temp1289v__unsafe_size=0;
  uint16_t __temp1289v__unsafe_offset=0;
  uint16_t __temp1289v__unsafe_align=0;
  char* __temp1290v__unsafe_ptr=0;
  uint64_t __temp1290v__unsafe_size=0;
  uint16_t __temp1290v__unsafe_offset=0;
  uint16_t __temp1290v__unsafe_align=0;
  char* __temp1291v__unsafe_ptr=0;
  uint64_t __temp1291v__unsafe_size=0;
  uint16_t __temp1291v__unsafe_offset=0;
  uint16_t __temp1291v__unsafe_align=0;
  char __temp1292v____temp470v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __temp1293v=0;
  char* __temp1294v__unsafe_ptr=0;
  uint64_t __temp1294v__pos=0;
  uint64_t __temp1294v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1252v(&__temp1289v__unsafe_ptr,&__temp1289v__unsafe_size,&__temp1289v__unsafe_offset,&__temp1289v__unsafe_align);
  __temp1290v__unsafe_ptr=__temp1289v__unsafe_ptr;
  __temp1290v__unsafe_size=__temp1289v__unsafe_size;
  __temp1290v__unsafe_offset=__temp1289v__unsafe_offset;
  __temp1290v__unsafe_align=__temp1289v__unsafe_align;
  __temp_errcode=alloc__temp468v(&__temp1290v__unsafe_ptr,&__temp1290v__unsafe_size,&__temp1290v__unsafe_offset,&__temp1290v__unsafe_align,length,&__temp1291v__unsafe_ptr,&__temp1291v__unsafe_size,&__temp1291v__unsafe_offset,&__temp1291v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1291v__unsafe_ptr;
  buf__unsafe_size=__temp1291v__unsafe_size;
  buf__unsafe_offset=__temp1291v__unsafe_offset;
  buf__unsafe_align=__temp1291v__unsafe_align;
  __temp1293v=0;
  vec__temp1286v(buf__unsafe_ptr,__temp1293v,length,&__temp1294v__unsafe_ptr,&__temp1294v__pos,&__temp1294v__length);
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp1294v__unsafe_ptr,&__temp1292v____temp470v__);
  if(__temp1292v____temp470v__){
  __temp1291v__unsafe_size=0;
  __temp1291v__unsafe_size=__temp1291v__unsafe_size;
  free__temp461v(&__temp1294v__unsafe_ptr);
  }
  __temp_return:
  *__temp1789v=__temp1294v__unsafe_ptr;
  *__temp1790v=__temp1294v__pos;
  *__temp1791v=__temp1294v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1792v) {
  *__temp1792v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1793v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1793v=__temp464v__;
}

static inline __attribute__((always_inline)) void mutget__temp1322v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1794v) {
  uint64_t __temp1323v=0;
  uint64_t __temp1324v__=0;
  uint64_t __temp1325v__=0;
  char* __temp1326v__=0;
  __temp1323v=8;
  add__temp170v(i,v__pos,&__temp1324v__);
  mul__temp194v(__temp1323v,__temp1324v__,&__temp1325v__);
  add__temp463v(v__unsafe_ptr,__temp1325v__,&__temp1326v__);
  goto __temp_return;
  __temp_return:
  *__temp1794v=__temp1326v__;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1795v, uint64_t* __temp1796v) {
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

static inline __attribute__((always_inline)) int vec__temp1307v(char** __temp1799v, uint64_t* __temp1800v, uint16_t* __temp1801v, uint16_t* __temp1802v, uint64_t* __temp1803v, uint64_t allocator__length, uint64_t length, char** __temp1804v, uint64_t* __temp1805v, uint64_t* __temp1806v) {
  char* allocator__buf__unsafe_ptr=*__temp1799v;
  uint64_t allocator__buf__unsafe_size=*__temp1800v;
  uint16_t allocator__buf__unsafe_offset=*__temp1801v;
  uint16_t allocator__buf__unsafe_align=*__temp1802v;
  uint64_t allocator__pos=*__temp1803v;
  uint64_t __temp1308v__=0;
  uint64_t __temp1309v=0;
  char __temp1310v__=0;
  uint64_t __temp1311v__=0;
  uint64_t __temp1312v=0;
  char __temp1313v__=0;
  uint64_t __temp1314v__=0;
  char __temp1315v__=0;
  uint64_t __temp1316v=0;
  uint64_t start=0;
  uint64_t __temp1317v__=0;
  char __temp1318v__=0;
  uint64_t __temp1319v=0;
  char* __temp1320v__unsafe_ptr=0;
  uint64_t __temp1320v__pos=0;
  uint64_t __temp1320v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  nat__temp465v(allocator__buf__unsafe_align,&__temp1308v__);
  __temp1309v=8;
  neq__temp142v(__temp1308v__,__temp1309v,&__temp1310v__);
  if(__temp1310v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  nat__temp465v(allocator__buf__unsafe_offset,&__temp1311v__);
  __temp1312v=0;
  neq__temp142v(__temp1311v__,__temp1312v,&__temp1313v__);
  if(__temp1313v__){
  __temp_errcode=34;
  goto __temp_failure;
  }
  len__temp558v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__temp1314v__);
  gt__temp271v(length,__temp1314v__,&__temp1315v__);
  if(__temp1315v__){
  __temp_errcode=35;
  goto __temp_failure;
  }
  __temp1316v=allocator__pos;
  start=__temp1316v;
  add__temp170v(allocator__pos,length,&__temp1317v__);
  allocator__pos=__temp1317v__;
  ge__temp319v(allocator__pos,allocator__length,&__temp1318v__);
  if(__temp1318v__){
  allocator__pos=length;
  __temp1319v=0;
  start=__temp1319v;
  }
  vec__temp1286v(allocator__buf__unsafe_ptr,start,length,&__temp1320v__unsafe_ptr,&__temp1320v__pos,&__temp1320v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1799v=allocator__buf__unsafe_ptr;
  *__temp1800v=allocator__buf__unsafe_size;
  *__temp1801v=allocator__buf__unsafe_offset;
  *__temp1802v=allocator__buf__unsafe_align;
  *__temp1803v=allocator__pos;
  *__temp1804v=__temp1320v__unsafe_ptr;
  *__temp1805v=__temp1320v__pos;
  *__temp1806v=__temp1320v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1807v, uint64_t r__to, uint64_t* __temp1808v) {
  uint64_t r__from=*__temp1807v;
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
  *__temp1807v=r__from;
  *__temp1808v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void get__temp1327v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1809v) {
  uint64_t __temp1328v=0;
  uint64_t __temp1329v__=0;
  uint64_t __temp1330v__=0;
  char* __temp1331v__=0;
  __temp1328v=8;
  add__temp170v(i,v__pos,&__temp1329v__);
  mul__temp194v(__temp1328v,__temp1329v__,&__temp1330v__);
  add__temp463v(v__unsafe_ptr,__temp1330v__,&__temp1331v__);
  goto __temp_return;
  __temp_return:
  *__temp1809v=__temp1331v__;
}

static inline __attribute__((always_inline)) int at__temp1333v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __temp1810v) {
  char* __temp1334v__=0;
  double __temp1335v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  get__temp1327v(v__unsafe_ptr,v__pos,v__length,i,&__temp1334v__);
  if(!__temp1334v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1335v__value,__temp1334v__,8);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1810v=__temp1335v__value;
  
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

int add__temp1384v(char** __temp1813v, uint64_t* __temp1814v, uint16_t* __temp1815v, uint16_t* __temp1816v, uint64_t* __temp1817v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1818v, uint64_t* __temp1819v, uint64_t* __temp1820v) {
  char* allocator__buf__unsafe_ptr=*__temp1813v;
  uint64_t allocator__buf__unsafe_size=*__temp1814v;
  uint16_t allocator__buf__unsafe_offset=*__temp1815v;
  uint16_t allocator__buf__unsafe_align=*__temp1816v;
  uint64_t allocator__pos=*__temp1817v;
  int __temp1385v=0;
  char __temp1386v__=0;
  char* __temp1387v__unsafe_ptr=0;
  uint64_t __temp1387v__pos=0;
  uint64_t __temp1387v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1388v__from=0;
  uint64_t __temp1388v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char* p1=0;
  char __temp1389v=0;
  uint64_t __temp1390v__=0;
  uint64_t i=0;
  char* __temp1391v__=0;
  char* __temp1392v__=0;
  double __temp1393v__value=0;
  double __temp1394v__=0;
  double __temp1395v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  neq__temp142v(v1__length,v2__length,&__temp1386v__);
  if(__temp1386v__){
  __temp_errcode=36;
  goto __temp_failure;
  }
  __temp_errcode=vec__temp1307v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1387v__unsafe_ptr,&__temp1387v__pos,&__temp1387v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1387v__unsafe_ptr;
  v__pos=__temp1387v__pos;
  v__length=__temp1387v__length;
  range__temp435v(v1__length,&__temp1388v__from,&__temp1388v__to);
  it__from=__temp1388v__from;
  it__to=__temp1388v__to;
  p1=v1__unsafe_ptr;
  while(1){
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1390v__);
  __temp1389v=__temp_complain;
  i=__temp1390v__;
  __temp1389v=__temp1389v==0;
  if(!__temp1389v){
  break;
  }
  mutget__temp1322v(v__unsafe_ptr,v__pos,v__length,i,&__temp1391v__);
  get__temp1327v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1392v__);
  if(!__temp1392v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1393v__value,__temp1392v__,8);
  __temp_errcode=at__temp1333v(v2__unsafe_ptr,v2__pos,v2__length,i,&__temp1394v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  add__temp148v(__temp1393v__value,__temp1394v__,&__temp1395v__);
  if(!__temp1391v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1391v__,&__temp1395v__,8);
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

static inline __attribute__((always_inline)) void at__temp1332v(double number, uint64_t i, double* __temp1821v) {
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

static inline __attribute__((always_inline)) int mul__temp1573v(char** __temp1823v, uint64_t* __temp1824v, uint16_t* __temp1825v, uint16_t* __temp1826v, uint64_t* __temp1827v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __temp1828v, uint64_t* __temp1829v, uint64_t* __temp1830v) {
  char* allocator__buf__unsafe_ptr=*__temp1823v;
  uint64_t allocator__buf__unsafe_size=*__temp1824v;
  uint16_t allocator__buf__unsafe_offset=*__temp1825v;
  uint16_t allocator__buf__unsafe_align=*__temp1826v;
  uint64_t allocator__pos=*__temp1827v;
  int __temp1574v=0;
  char* __temp1575v__unsafe_ptr=0;
  uint64_t __temp1575v__pos=0;
  uint64_t __temp1575v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1576v__from=0;
  uint64_t __temp1576v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1577v=0;
  uint64_t __temp1578v__=0;
  uint64_t i=0;
  char* __temp1579v__=0;
  char* __temp1580v__=0;
  double __temp1581v__value=0;
  double __temp1582v__=0;
  double __temp1583v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=vec__temp1307v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1575v__unsafe_ptr,&__temp1575v__pos,&__temp1575v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1575v__unsafe_ptr;
  v__pos=__temp1575v__pos;
  v__length=__temp1575v__length;
  range__temp435v(v1__length,&__temp1576v__from,&__temp1576v__to);
  it__from=__temp1576v__from;
  it__to=__temp1576v__to;
  while(1){
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1578v__);
  __temp1577v=__temp_complain;
  i=__temp1578v__;
  __temp1577v=__temp1577v==0;
  if(!__temp1577v){
  break;
  }
  mutget__temp1322v(v__unsafe_ptr,v__pos,v__length,i,&__temp1579v__);
  get__temp1327v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1580v__);
  if(!__temp1580v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1581v__value,__temp1580v__,8);
  at__temp1332v(v2,i,&__temp1582v__);
  mul__temp172v(__temp1581v__value,__temp1582v__,&__temp1583v__);
  if(!__temp1579v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1579v__,&__temp1583v__,8);
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

static inline __attribute__((always_inline)) int mul__temp1589v(char** __temp1831v, uint64_t* __temp1832v, uint16_t* __temp1833v, uint16_t* __temp1834v, uint64_t* __temp1835v, uint64_t allocator__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1836v, uint64_t* __temp1837v, uint64_t* __temp1838v) {
  char* allocator__buf__unsafe_ptr=*__temp1831v;
  uint64_t allocator__buf__unsafe_size=*__temp1832v;
  uint16_t allocator__buf__unsafe_offset=*__temp1833v;
  uint16_t allocator__buf__unsafe_align=*__temp1834v;
  uint64_t allocator__pos=*__temp1835v;
  char* __temp1590v__unsafe_ptr=0;
  uint64_t __temp1590v__pos=0;
  uint64_t __temp1590v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=mul__temp1573v(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__temp1590v__unsafe_ptr,&__temp1590v__pos,&__temp1590v__length);
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
  *__temp1836v=__temp1590v__unsafe_ptr;
  *__temp1837v=__temp1590v__pos;
  *__temp1838v=__temp1590v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__temp1690v() {
  char* __temp1691v__unsafe_ptr=0;
  uint64_t __temp1691v__unsafe_size=0;
  uint16_t __temp1691v__unsafe_offset=0;
  uint16_t __temp1691v__unsafe_align=0;
  char* __temp1692v__unsafe_ptr=0;
  uint64_t __temp1692v__unsafe_size=0;
  uint16_t __temp1692v__unsafe_offset=0;
  uint16_t __temp1692v__unsafe_align=0;
  uint64_t __temp1693v=0;
  char* __temp1694v__unsafe_ptr=0;
  uint64_t __temp1694v__unsafe_size=0;
  uint16_t __temp1694v__unsafe_offset=0;
  uint16_t __temp1694v__unsafe_align=0;
  char __temp1695v____temp470v__=0;
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
  char* __temp1698v__unsafe_ptr=0;
  uint64_t __temp1698v__unsafe_size=0;
  uint16_t __temp1698v__unsafe_offset=0;
  uint16_t __temp1698v__unsafe_align=0;
  uint64_t __temp1699v=0;
  char* __temp1700v__unsafe_ptr=0;
  uint64_t __temp1700v__unsafe_size=0;
  uint16_t __temp1700v__unsafe_offset=0;
  uint16_t __temp1700v__unsafe_align=0;
  char __temp1701v____temp470v__=0;
  char* __temp1702v__buf__unsafe_ptr=0;
  uint64_t __temp1702v__buf__unsafe_size=0;
  uint16_t __temp1702v__buf__unsafe_offset=0;
  uint16_t __temp1702v__buf__unsafe_align=0;
  uint64_t __temp1702v__pos=0;
  uint64_t __temp1702v__length=0;
  char* allocator2__buf__unsafe_ptr=0;
  uint64_t allocator2__buf__unsafe_size=0;
  uint16_t allocator2__buf__unsafe_offset=0;
  uint16_t allocator2__buf__unsafe_align=0;
  uint64_t allocator2__pos=0;
  uint64_t allocator2__length=0;
  uint64_t __temp1704v=0;
  char* __temp1705v__unsafe_ptr=0;
  uint64_t __temp1705v__pos=0;
  uint64_t __temp1705v__length=0;
  char __temp1706v____temp1292v____temp470v__=0;
  uint64_t __temp1706v____temp1291v__unsafe_size=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __temp1708v=0;
  char* __temp1709v__unsafe_ptr=0;
  uint64_t __temp1709v__pos=0;
  uint64_t __temp1709v__length=0;
  char __temp1710v____temp1292v____temp470v__=0;
  uint64_t __temp1710v____temp1291v__unsafe_size=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __temp1711v=0;
  char* __temp1712v__=0;
  double __temp1713v=0;
  uint64_t __temp1714v=0;
  char* __temp1715v__=0;
  double __temp1716v=0;
  uint64_t __temp1717v=0;
  uint64_t __temp1718v__from=0;
  uint64_t __temp1718v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __temp1719v=0;
  char* __temp1720v__unsafe_ptr=0;
  uint64_t __temp1720v__pos=0;
  uint64_t __temp1720v__length=0;
  char* __temp1721v__unsafe_ptr=0;
  uint64_t __temp1721v__pos=0;
  uint64_t __temp1721v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __temp1722v=0;
  uint64_t __temp1723v__=0;
  uint64_t i=0;
  double __temp1724v=0;
  char* __temp1725v__unsafe_ptr=0;
  uint64_t __temp1725v__pos=0;
  uint64_t __temp1725v__length=0;
  char* __temp1726v__unsafe_ptr=0;
  uint64_t __temp1726v__pos=0;
  uint64_t __temp1726v__length=0;
  char* __temp1727v__unsafe_ptr=0;
  uint64_t __temp1727v__pos=0;
  uint64_t __temp1727v__length=0;
  uint64_t __temp1728v=0;
  char* __temp1729v__=0;
  double __temp1730v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1252v(&__temp1691v__unsafe_ptr,&__temp1691v__unsafe_size,&__temp1691v__unsafe_offset,&__temp1691v__unsafe_align);
  __temp1692v__unsafe_ptr=__temp1691v__unsafe_ptr;
  __temp1692v__unsafe_size=__temp1691v__unsafe_size;
  __temp1692v__unsafe_offset=__temp1691v__unsafe_offset;
  __temp1692v__unsafe_align=__temp1691v__unsafe_align;
  __temp1693v=200;
  __temp_errcode=alloc__temp468v(&__temp1692v__unsafe_ptr,&__temp1692v__unsafe_size,&__temp1692v__unsafe_offset,&__temp1692v__unsafe_align,__temp1693v,&__temp1694v__unsafe_ptr,&__temp1694v__unsafe_size,&__temp1694v__unsafe_offset,&__temp1694v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1276v(&__temp1692v__unsafe_ptr,&__temp1692v__unsafe_size,&__temp1692v__unsafe_offset,&__temp1692v__unsafe_align,&__temp1696v__buf__unsafe_ptr,&__temp1696v__buf__unsafe_size,&__temp1696v__buf__unsafe_offset,&__temp1696v__buf__unsafe_align,&__temp1696v__pos,&__temp1696v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  allocator__pos=__temp1696v__pos;
  allocator__length=__temp1696v__length;
  float____temp_buffer____buffer__temp1252v(&__temp1697v__unsafe_ptr,&__temp1697v__unsafe_size,&__temp1697v__unsafe_offset,&__temp1697v__unsafe_align);
  __temp1698v__unsafe_ptr=__temp1697v__unsafe_ptr;
  __temp1698v__unsafe_size=__temp1697v__unsafe_size;
  __temp1698v__unsafe_offset=__temp1697v__unsafe_offset;
  __temp1698v__unsafe_align=__temp1697v__unsafe_align;
  __temp1699v=200;
  __temp_errcode=alloc__temp468v(&__temp1698v__unsafe_ptr,&__temp1698v__unsafe_size,&__temp1698v__unsafe_offset,&__temp1698v__unsafe_align,__temp1699v,&__temp1700v__unsafe_ptr,&__temp1700v__unsafe_size,&__temp1700v__unsafe_offset,&__temp1700v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1276v(&__temp1698v__unsafe_ptr,&__temp1698v__unsafe_size,&__temp1698v__unsafe_offset,&__temp1698v__unsafe_align,&__temp1702v__buf__unsafe_ptr,&__temp1702v__buf__unsafe_size,&__temp1702v__buf__unsafe_offset,&__temp1702v__buf__unsafe_align,&__temp1702v__pos,&__temp1702v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  allocator2__pos=__temp1702v__pos;
  allocator2__length=__temp1702v__length;
  new__temp1247v();
  __temp1704v=10;
  __temp_errcode=vec__temp1288v(__temp1704v,&__temp1705v__unsafe_ptr,&__temp1705v__pos,&__temp1705v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v1__unsafe_ptr=__temp1705v__unsafe_ptr;
  v1__pos=__temp1705v__pos;
  v1__length=__temp1705v__length;
  new__temp1247v();
  __temp1708v=10;
  __temp_errcode=vec__temp1288v(__temp1708v,&__temp1709v__unsafe_ptr,&__temp1709v__pos,&__temp1709v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v2__unsafe_ptr=__temp1709v__unsafe_ptr;
  v2__pos=__temp1709v__pos;
  v2__length=__temp1709v__length;
  __temp1711v=0;
  mutget__temp1322v(v1__unsafe_ptr,v1__pos,v1__length,__temp1711v,&__temp1712v__);
  __temp1713v=1.0;
  if(!__temp1712v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1712v__,&__temp1713v,8);
  __temp1714v=0;
  mutget__temp1322v(v2__unsafe_ptr,v2__pos,v2__length,__temp1714v,&__temp1715v__);
  __temp1716v=2.0;
  if(!__temp1715v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1715v__,&__temp1716v,8);
  __temp1717v=5;
  range__temp435v(__temp1717v,&__temp1718v__from,&__temp1718v__to);
  it__from=__temp1718v__from;
  it__to=__temp1718v__to;
  __temp1719v=10;
  __temp_errcode=vec__temp1307v(&__temp1692v__unsafe_ptr,&__temp1692v__unsafe_size,&__temp1692v__unsafe_offset,&__temp1692v__unsafe_align,&allocator__pos,allocator__length,__temp1719v,&__temp1720v__unsafe_ptr,&__temp1720v__pos,&__temp1720v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1721v__pos=__temp1720v__pos;
  __temp1721v__length=__temp1720v__length;
  v__pos=__temp1721v__pos;
  v__length=__temp1721v__length;
  while(1){
  __temp_complain=next__temp439v(&it__from,it__to,&__temp1723v__);
  __temp1722v=__temp_complain;
  i=__temp1723v__;
  __temp1722v=__temp1722v==0;
  if(!__temp1722v){
  break;
  }
  __temp1724v=2.0;
  __temp_errcode=add__temp1384v(&__temp1692v__unsafe_ptr,&__temp1692v__unsafe_size,&__temp1692v__unsafe_offset,&__temp1692v__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,__temp1692v__unsafe_ptr,v__pos,v__length,&__temp1725v__unsafe_ptr,&__temp1725v__pos,&__temp1725v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=add__temp1384v(&__temp1692v__unsafe_ptr,&__temp1692v__unsafe_size,&__temp1692v__unsafe_offset,&__temp1692v__unsafe_align,&allocator__pos,allocator__length,v1__unsafe_ptr,v1__pos,v1__length,__temp1692v__unsafe_ptr,__temp1725v__pos,__temp1725v__length,&__temp1726v__unsafe_ptr,&__temp1726v__pos,&__temp1726v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mul__temp1589v(&__temp1692v__unsafe_ptr,&__temp1692v__unsafe_size,&__temp1692v__unsafe_offset,&__temp1692v__unsafe_align,&allocator__pos,allocator__length,__temp1724v,__temp1692v__unsafe_ptr,__temp1726v__pos,__temp1726v__length,&__temp1727v__unsafe_ptr,&__temp1727v__pos,&__temp1727v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__pos=__temp1727v__pos;
  v__length=__temp1727v__length;
  }
  __temp1728v=0;
  get__temp1327v(__temp1692v__unsafe_ptr,v__pos,v__length,__temp1728v,&__temp1729v__);
  if(!__temp1729v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1730v__value,__temp1729v__,8);
  print__temp368v(__temp1730v__value);
  
  __temp_failure:exists__temp412v(__temp1709v__unsafe_ptr,&__temp1710v____temp1292v____temp470v__);
  if(__temp1710v____temp1292v____temp470v__){
  __temp1710v____temp1291v__unsafe_size=0;
  __temp1710v____temp1291v__unsafe_size=__temp1710v____temp1291v__unsafe_size;
  free__temp461v(&__temp1709v__unsafe_ptr);
  }
  exists__temp412v(__temp1705v__unsafe_ptr,&__temp1706v____temp1292v____temp470v__);
  if(__temp1706v____temp1292v____temp470v__){
  __temp1706v____temp1291v__unsafe_size=0;
  __temp1706v____temp1291v__unsafe_size=__temp1706v____temp1291v__unsafe_size;
  free__temp461v(&__temp1705v__unsafe_ptr);
  }
  exists__temp412v(__temp1700v__unsafe_ptr,&__temp1701v____temp470v__);
  if(__temp1701v____temp470v__){
  __temp1700v__unsafe_size=0;
  __temp1700v__unsafe_size=__temp1700v__unsafe_size;
  free__temp461v(&__temp1700v__unsafe_ptr);
  }
  exists__temp412v(__temp1694v__unsafe_ptr,&__temp1695v____temp470v__);
  if(__temp1695v____temp470v__){
  __temp1694v__unsafe_size=0;
  __temp1694v__unsafe_size=__temp1694v__unsafe_size;
  free__temp461v(&__temp1694v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1244v(int64_t value, const char** __temp1839v) {
  int __temp1245v=0;
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

static inline __attribute__((always_inline)) void main__temp1732v() {
  char __temp1733v=0;
  char __temp1735v=0;
  int64_t __temp1736v=0;
  int64_t error=0;
  const char* __temp1737v__=0;
  int __temp_complain=0;
  __temp_complain=safe_main__temp1690v();
  __temp1733v=__temp_complain;
  __temp1733v=__temp1733v==0;
  __temp1736v=__temp_complain;
  __temp1735v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1736v;
  __temp1735v=__temp1735v==0;
  if(__temp1735v){
  cstr__temp1244v(error,&__temp1737v__);
  print__temp363v(__temp1737v__);
  }
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1732v();return 0;}