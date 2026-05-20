#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
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
"invalid float conversion from string without a value after the dot",
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"vector exceeeds buffer limits",
"different vector sizes"
};

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1283v(char** __temp1877v, uint64_t* __temp1878v, uint16_t* __temp1879v, uint16_t* __temp1880v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1877v=unsafe_ptr;
  *__temp1878v=unsafe_size;
  *__temp1879v=unsafe_offset;
  *__temp1880v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1881v) {
  int value=0;
  *__temp1881v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1882v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1882v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1883v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1883v=__temp95v__;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1884v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1884v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1885v) {
  char* allocated=*__temp1885v;
  if(allocated){
  free(allocated);
  }
  *__temp1885v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1886v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1886v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1887v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1887v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1888v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1888v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1889v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1889v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1890v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1890v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1891v) {
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
  *__temp1891v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1892v, uint64_t* __temp1893v, uint16_t* __temp1894v, uint16_t* __temp1895v, uint64_t size, char** __temp1896v, uint64_t* __temp1897v, uint16_t* __temp1898v, uint16_t* __temp1899v) {
  char* buffer__unsafe_ptr=*__temp1892v;
  uint64_t buffer__unsafe_size=*__temp1893v;
  uint16_t buffer__unsafe_offset=*__temp1894v;
  uint16_t buffer__unsafe_align=*__temp1895v;
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
  *__temp1892v=buffer__unsafe_ptr;
  *__temp1893v=buffer__unsafe_size;
  *__temp1894v=buffer__unsafe_offset;
  *__temp1895v=buffer__unsafe_align;
  *__temp1896v=__temp486v__unsafe_ptr;
  *__temp1897v=__temp486v__unsafe_size;
  *__temp1898v=__temp486v__unsafe_offset;
  *__temp1899v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp559v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1900v) {
  goto __temp_return;
  __temp_return:
  *__temp1900v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1901v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1901v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1902v) {
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
  *__temp1902v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1903v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1903v=z;
}

static inline __attribute__((always_inline)) void circular__temp1282v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t* __temp1904v, uint64_t length, char** __temp1905v, uint64_t* __temp1906v, uint16_t* __temp1907v, uint16_t* __temp1908v, uint64_t* __temp1909v, uint64_t* __temp1910v) {
  uint64_t pos=*__temp1904v;
  goto __temp_return;
  __temp_return:
  *__temp1904v=pos;
  *__temp1905v=buf__unsafe_ptr;
  *__temp1906v=buf__unsafe_size;
  *__temp1907v=buf__unsafe_offset;
  *__temp1908v=buf__unsafe_align;
  *__temp1909v=pos;
  *__temp1910v=length;
}

static inline __attribute__((always_inline)) int circular__temp1307v(char** __temp1911v, uint64_t* __temp1912v, uint16_t* __temp1913v, uint16_t* __temp1914v, char** __temp1915v, uint64_t* __temp1916v, uint16_t* __temp1917v, uint16_t* __temp1918v, uint64_t* __temp1919v, uint64_t* __temp1920v) {
  char* buf__unsafe_ptr=*__temp1911v;
  uint64_t buf__unsafe_size=*__temp1912v;
  uint16_t buf__unsafe_offset=*__temp1913v;
  uint16_t buf__unsafe_align=*__temp1914v;
  int __temp1308v=0;
  int __temp1309v=0;
  uint64_t __temp1310v=0;
  uint64_t __temp1311v=0;
  uint64_t pos=0;
  int __temp1312v=0;
  uint64_t __temp1313v__=0;
  uint64_t __temp1314v__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __temp1315v__=0;
  char* __temp1316v__buf__unsafe_ptr=0;
  uint64_t __temp1316v__buf__unsafe_size=0;
  uint16_t __temp1316v__buf__unsafe_offset=0;
  uint16_t __temp1316v__buf__unsafe_align=0;
  uint64_t __temp1316v__pos=0;
  uint64_t __temp1316v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1310v=0;
  __temp1311v=__temp1310v;
  pos=__temp1311v;
  len__temp559v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp1313v__);
  __temp_errcode=sub__temp347v(__temp1313v__,pos,&__temp1314v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  length=__temp1314v__;
  start=pos;
  add__temp170v(pos,length,&__temp1315v__);
  pos=__temp1315v__;
  circular__temp1282v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&start,length,&__temp1316v__buf__unsafe_ptr,&__temp1316v__buf__unsafe_size,&__temp1316v__buf__unsafe_offset,&__temp1316v__buf__unsafe_align,&__temp1316v__pos,&__temp1316v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1911v=buf__unsafe_ptr;
  *__temp1912v=buf__unsafe_size;
  *__temp1913v=buf__unsafe_offset;
  *__temp1914v=buf__unsafe_align;
  *__temp1915v=__temp1316v__buf__unsafe_ptr;
  *__temp1916v=__temp1316v__buf__unsafe_size;
  *__temp1917v=__temp1316v__buf__unsafe_offset;
  *__temp1918v=__temp1316v__buf__unsafe_align;
  *__temp1919v=__temp1316v__pos;
  *__temp1920v=__temp1316v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void new__temp1278v() {
  goto __temp_return;
  __temp_return:
}

static inline __attribute__((always_inline)) void vec__temp1317v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1921v, uint64_t* __temp1922v, uint64_t* __temp1923v) {
  goto __temp_return;
  __temp_return:
  *__temp1921v=unsafe_ptr;
  *__temp1922v=pos;
  *__temp1923v=length;
}

int vec__temp1319v(uint64_t length, char** __temp1924v, uint64_t* __temp1925v, uint64_t* __temp1926v) {
  char* __temp1320v__unsafe_ptr=0;
  uint64_t __temp1320v__unsafe_size=0;
  uint16_t __temp1320v__unsafe_offset=0;
  uint16_t __temp1320v__unsafe_align=0;
  char* __temp1321v__unsafe_ptr=0;
  uint64_t __temp1321v__unsafe_size=0;
  uint16_t __temp1321v__unsafe_offset=0;
  uint16_t __temp1321v__unsafe_align=0;
  uint64_t __temp1322v____temp475v=0;
  char __temp1322v____temp476v__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __temp1323v=0;
  char* __temp1324v__unsafe_ptr=0;
  uint64_t __temp1324v__pos=0;
  uint64_t __temp1324v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1283v(&__temp1320v__unsafe_ptr,&__temp1320v__unsafe_size,&__temp1320v__unsafe_offset,&__temp1320v__unsafe_align);
  __temp_errcode=alloc__temp473v(&__temp1320v__unsafe_ptr,&__temp1320v__unsafe_size,&__temp1320v__unsafe_offset,&__temp1320v__unsafe_align,length,&__temp1321v__unsafe_ptr,&__temp1321v__unsafe_size,&__temp1321v__unsafe_offset,&__temp1321v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf__unsafe_ptr=__temp1321v__unsafe_ptr;
  buf__unsafe_size=__temp1321v__unsafe_size;
  buf__unsafe_offset=__temp1321v__unsafe_offset;
  buf__unsafe_align=__temp1321v__unsafe_align;
  __temp1323v=0;
  vec__temp1317v(buf__unsafe_ptr,__temp1323v,length,&__temp1324v__unsafe_ptr,&__temp1324v__pos,&__temp1324v__length);
  goto __temp_return;
  
  __temp_failure:__temp1322v____temp475v=0;
  neq__temp142v(__temp1324v__length,__temp1322v____temp475v,&__temp1322v____temp476v__);
  if(__temp1322v____temp476v__){
  __temp1324v__length=0;
  __temp1324v__length=__temp1324v__length;
  __temp1324v__unsafe_ptr=__temp1324v__unsafe_ptr;
  free__temp466v(&__temp1324v__unsafe_ptr);
  }
  __temp_return:
  *__temp1924v=__temp1324v__unsafe_ptr;
  *__temp1925v=__temp1324v__pos;
  *__temp1926v=__temp1324v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1927v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1927v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1928v) {
  *__temp1928v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1929v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1929v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp1364v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1930v) {
  char __temp1365v__=0;
  uint64_t __temp1366v=0;
  uint64_t __temp1367v__=0;
  uint64_t __temp1368v__=0;
  char* __temp1369v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,v__length,&__temp1365v__);
  if(__temp1365v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp1366v=8;
  add__temp170v(i,v__pos,&__temp1367v__);
  mul__temp194v(__temp1366v,__temp1367v__,&__temp1368v__);
  add__temp468v(v__unsafe_ptr,__temp1368v__,&__temp1369v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1930v=__temp1369v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1931v, uint64_t* __temp1932v) {
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
  *__temp1931v=from;
  *__temp1932v=to;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1933v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1933v=z;
}

static inline __attribute__((always_inline)) int vec__temp1347v(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __temp1934v, uint64_t allocator__length, uint64_t length, char** __temp1935v, uint64_t* __temp1936v, uint64_t* __temp1937v) {
  uint64_t allocator__pos=*__temp1934v;
  uint64_t __temp1348v__=0;
  uint64_t __temp1349v=0;
  char __temp1350v__=0;
  uint64_t __temp1351v__=0;
  uint64_t __temp1352v=0;
  char __temp1353v__=0;
  uint64_t __temp1354v__=0;
  char __temp1355v__=0;
  uint64_t __temp1356v=0;
  uint64_t start=0;
  uint64_t __temp1357v__=0;
  char __temp1358v__=0;
  uint64_t __temp1359v=0;
  uint64_t __temp1360v__=0;
  uint64_t __temp1361v=0;
  char* __temp1362v__unsafe_ptr=0;
  uint64_t __temp1362v__pos=0;
  uint64_t __temp1362v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  nat__temp470v(allocator__buf__unsafe_align,&__temp1348v__);
  __temp1349v=8;
  neq__temp142v(__temp1348v__,__temp1349v,&__temp1350v__);
  if(__temp1350v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  nat__temp470v(allocator__buf__unsafe_offset,&__temp1351v__);
  __temp1352v=0;
  neq__temp142v(__temp1351v__,__temp1352v,&__temp1353v__);
  if(__temp1353v__){
  __temp_errcode=34;
  goto __temp_failure;
  }
  len__temp559v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__temp1354v__);
  gt__temp271v(length,__temp1354v__,&__temp1355v__);
  if(__temp1355v__){
  __temp_errcode=35;
  goto __temp_failure;
  }
  __temp1356v=allocator__pos;
  start=__temp1356v;
  add__temp170v(allocator__pos,length,&__temp1357v__);
  allocator__pos=__temp1357v__;
  ge__temp319v(allocator__pos,allocator__length,&__temp1358v__);
  if(__temp1358v__){
  __temp1359v=0;
  add__temp170v(length,__temp1359v,&__temp1360v__);
  allocator__pos=__temp1360v__;
  __temp1361v=0;
  start=__temp1361v;
  }
  vec__temp1317v(allocator__buf__unsafe_ptr,start,length,&__temp1362v__unsafe_ptr,&__temp1362v__pos,&__temp1362v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1934v=allocator__pos;
  *__temp1935v=__temp1362v__unsafe_ptr;
  *__temp1936v=__temp1362v__pos;
  *__temp1937v=__temp1362v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1938v, uint64_t r__to, uint64_t* __temp1939v) {
  uint64_t r__from=*__temp1938v;
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
  *__temp1938v=r__from;
  *__temp1939v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp1370v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1940v) {
  char __temp1371v__=0;
  uint64_t __temp1372v=0;
  uint64_t __temp1373v__=0;
  uint64_t __temp1374v__=0;
  char* __temp1375v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,v__length,&__temp1371v__);
  if(__temp1371v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp1372v=8;
  add__temp170v(i,v__pos,&__temp1373v__);
  mul__temp194v(__temp1372v,__temp1373v__,&__temp1374v__);
  add__temp468v(v__unsafe_ptr,__temp1374v__,&__temp1375v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1940v=__temp1375v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int at__temp1377v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __temp1941v) {
  char* __temp1378v__=0;
  double __temp1379v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=get__temp1370v(v__unsafe_ptr,v__pos,v__length,i,&__temp1378v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1378v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1379v__value,__temp1378v__,8);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1941v=__temp1379v__value;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1942v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1942v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1943v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1943v=z;
}

int add__temp1428v(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __temp1944v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1945v, uint64_t* __temp1946v, uint64_t* __temp1947v) {
  uint64_t allocator__pos=*__temp1944v;
  int __temp1429v=0;
  char __temp1430v__=0;
  char* __temp1431v__unsafe_ptr=0;
  uint64_t __temp1431v__pos=0;
  uint64_t __temp1431v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1432v__from=0;
  uint64_t __temp1432v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char* p1=0;
  char __temp1433v=0;
  uint64_t __temp1434v__=0;
  uint64_t i=0;
  char* __temp1435v__=0;
  char* __temp1436v__=0;
  double __temp1437v__value=0;
  double __temp1438v__=0;
  double __temp1439v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  neq__temp142v(v1__length,v2__length,&__temp1430v__);
  if(__temp1430v__){
  __temp_errcode=36;
  goto __temp_failure;
  }
  __temp_errcode=vec__temp1347v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1431v__unsafe_ptr,&__temp1431v__pos,&__temp1431v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1431v__unsafe_ptr;
  v__pos=__temp1431v__pos;
  v__length=__temp1431v__length;
  range__temp436v(v1__length,&__temp1432v__from,&__temp1432v__to);
  it__from=__temp1432v__from;
  it__to=__temp1432v__to;
  p1=v1__unsafe_ptr;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1434v__);
  __temp1433v=__temp_complain;
  i=__temp1434v__;
  __temp1433v=__temp1433v==0;
  if(!__temp1433v){
  break;
  }
  __temp_errcode=mutget__temp1364v(v__unsafe_ptr,v__pos,v__length,i,&__temp1435v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp1370v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1436v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1436v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1437v__value,__temp1436v__,8);
  __temp_errcode=at__temp1377v(v2__unsafe_ptr,v2__pos,v2__length,i,&__temp1438v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  add__temp148v(__temp1437v__value,__temp1438v__,&__temp1439v__);
  if(!__temp1435v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1435v__,&__temp1439v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1944v=allocator__pos;
  *__temp1945v=v__unsafe_ptr;
  *__temp1946v=v__pos;
  *__temp1947v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void at__temp1376v(double number, uint64_t i, double* __temp1948v) {
  goto __temp_return;
  __temp_return:
  *__temp1948v=number;
}

static inline __attribute__((always_inline)) void mul__temp172v(double x, double y, double* __temp1949v) {
  int __temp173v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1949v=z;
}

static inline __attribute__((always_inline)) int mul__temp1617v(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __temp1950v, uint64_t allocator__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __temp1951v, uint64_t* __temp1952v, uint64_t* __temp1953v) {
  uint64_t allocator__pos=*__temp1950v;
  int __temp1618v=0;
  char* __temp1619v__unsafe_ptr=0;
  uint64_t __temp1619v__pos=0;
  uint64_t __temp1619v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1620v__from=0;
  uint64_t __temp1620v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1621v=0;
  uint64_t __temp1622v__=0;
  uint64_t i=0;
  char* __temp1623v__=0;
  char* __temp1624v__=0;
  double __temp1625v__value=0;
  double __temp1626v__=0;
  double __temp1627v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=vec__temp1347v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v1__length,&__temp1619v__unsafe_ptr,&__temp1619v__pos,&__temp1619v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1619v__unsafe_ptr;
  v__pos=__temp1619v__pos;
  v__length=__temp1619v__length;
  range__temp436v(v1__length,&__temp1620v__from,&__temp1620v__to);
  it__from=__temp1620v__from;
  it__to=__temp1620v__to;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1622v__);
  __temp1621v=__temp_complain;
  i=__temp1622v__;
  __temp1621v=__temp1621v==0;
  if(!__temp1621v){
  break;
  }
  __temp_errcode=mutget__temp1364v(v__unsafe_ptr,v__pos,v__length,i,&__temp1623v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp1370v(v1__unsafe_ptr,v1__pos,v1__length,i,&__temp1624v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1624v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1625v__value,__temp1624v__,8);
  at__temp1376v(v2,i,&__temp1626v__);
  mul__temp172v(__temp1625v__value,__temp1626v__,&__temp1627v__);
  if(!__temp1623v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1623v__,&__temp1627v__,8);
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1950v=allocator__pos;
  *__temp1951v=v__unsafe_ptr;
  *__temp1952v=v__pos;
  *__temp1953v=v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mul__temp1633v(char* allocator__buf__unsafe_ptr, uint64_t allocator__buf__unsafe_size, uint16_t allocator__buf__unsafe_offset, uint16_t allocator__buf__unsafe_align, uint64_t* __temp1954v, uint64_t allocator__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __temp1955v, uint64_t* __temp1956v, uint64_t* __temp1957v) {
  uint64_t allocator__pos=*__temp1954v;
  char* __temp1634v__unsafe_ptr=0;
  uint64_t __temp1634v__pos=0;
  uint64_t __temp1634v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=mul__temp1617v(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&allocator__pos,allocator__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__temp1634v__unsafe_ptr,&__temp1634v__pos,&__temp1634v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1954v=allocator__pos;
  *__temp1955v=__temp1634v__unsafe_ptr;
  *__temp1956v=__temp1634v__pos;
  *__temp1957v=__temp1634v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int safe_main__temp1830v() {
  char* __temp1831v__unsafe_ptr=0;
  uint64_t __temp1831v__unsafe_size=0;
  uint16_t __temp1831v__unsafe_offset=0;
  uint16_t __temp1831v__unsafe_align=0;
  uint64_t __temp1832v=0;
  char* __temp1833v__unsafe_ptr=0;
  uint64_t __temp1833v__unsafe_size=0;
  uint16_t __temp1833v__unsafe_offset=0;
  uint16_t __temp1833v__unsafe_align=0;
  uint64_t __temp1834v____temp475v=0;
  char __temp1834v____temp476v__=0;
  char* __temp1835v__buf__unsafe_ptr=0;
  uint64_t __temp1835v__buf__unsafe_size=0;
  uint16_t __temp1835v__buf__unsafe_offset=0;
  uint16_t __temp1835v__buf__unsafe_align=0;
  uint64_t __temp1835v__pos=0;
  uint64_t __temp1835v__length=0;
  char* allocator__buf__unsafe_ptr=0;
  uint64_t allocator__buf__unsafe_size=0;
  uint16_t allocator__buf__unsafe_offset=0;
  uint16_t allocator__buf__unsafe_align=0;
  uint64_t allocator__pos=0;
  uint64_t allocator__length=0;
  char* __temp1836v__unsafe_ptr=0;
  uint64_t __temp1836v__unsafe_size=0;
  uint16_t __temp1836v__unsafe_offset=0;
  uint16_t __temp1836v__unsafe_align=0;
  uint64_t __temp1837v=0;
  char* __temp1838v__unsafe_ptr=0;
  uint64_t __temp1838v__unsafe_size=0;
  uint16_t __temp1838v__unsafe_offset=0;
  uint16_t __temp1838v__unsafe_align=0;
  uint64_t __temp1839v____temp475v=0;
  char __temp1839v____temp476v__=0;
  char* __temp1840v__buf__unsafe_ptr=0;
  uint64_t __temp1840v__buf__unsafe_size=0;
  uint16_t __temp1840v__buf__unsafe_offset=0;
  uint16_t __temp1840v__buf__unsafe_align=0;
  uint64_t __temp1840v__pos=0;
  uint64_t __temp1840v__length=0;
  char* allocator2__buf__unsafe_ptr=0;
  uint64_t allocator2__buf__unsafe_size=0;
  uint16_t allocator2__buf__unsafe_offset=0;
  uint16_t allocator2__buf__unsafe_align=0;
  uint64_t allocator2__pos=0;
  uint64_t allocator2__length=0;
  uint64_t __temp1842v=0;
  char* __temp1843v__unsafe_ptr=0;
  uint64_t __temp1843v__pos=0;
  uint64_t __temp1843v__length=0;
  uint64_t __temp1844v____temp1322v____temp475v=0;
  char __temp1844v____temp1322v____temp476v__=0;
  char* v1__unsafe_ptr=0;
  uint64_t v1__pos=0;
  uint64_t v1__length=0;
  uint64_t __temp1846v=0;
  char* __temp1847v__unsafe_ptr=0;
  uint64_t __temp1847v__pos=0;
  uint64_t __temp1847v__length=0;
  uint64_t __temp1848v____temp1322v____temp475v=0;
  char __temp1848v____temp1322v____temp476v__=0;
  char* v2__unsafe_ptr=0;
  uint64_t v2__pos=0;
  uint64_t v2__length=0;
  uint64_t __temp1849v=0;
  char* __temp1850v__=0;
  double __temp1851v=0;
  uint64_t __temp1852v=0;
  char* __temp1853v__=0;
  double __temp1854v=0;
  uint64_t __temp1855v=0;
  uint64_t __temp1856v__from=0;
  uint64_t __temp1856v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  uint64_t __temp1857v=0;
  char* __temp1858v__unsafe_ptr=0;
  uint64_t __temp1858v__pos=0;
  uint64_t __temp1858v__length=0;
  char* __temp1859v__unsafe_ptr=0;
  uint64_t __temp1859v__pos=0;
  uint64_t __temp1859v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char __temp1860v=0;
  uint64_t __temp1861v__=0;
  uint64_t i=0;
  double __temp1862v=0;
  char* __temp1863v__unsafe_ptr=0;
  uint64_t __temp1863v__pos=0;
  uint64_t __temp1863v__length=0;
  char* __temp1864v__unsafe_ptr=0;
  uint64_t __temp1864v__pos=0;
  uint64_t __temp1864v__length=0;
  char* __temp1865v__unsafe_ptr=0;
  uint64_t __temp1865v__pos=0;
  uint64_t __temp1865v__length=0;
  uint64_t __temp1866v=0;
  char* __temp1867v__=0;
  double __temp1868v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1283v(&__temp1831v__unsafe_ptr,&__temp1831v__unsafe_size,&__temp1831v__unsafe_offset,&__temp1831v__unsafe_align);
  __temp1832v=200;
  __temp_errcode=alloc__temp473v(&__temp1831v__unsafe_ptr,&__temp1831v__unsafe_size,&__temp1831v__unsafe_offset,&__temp1831v__unsafe_align,__temp1832v,&__temp1833v__unsafe_ptr,&__temp1833v__unsafe_size,&__temp1833v__unsafe_offset,&__temp1833v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1307v(&__temp1833v__unsafe_ptr,&__temp1833v__unsafe_size,&__temp1833v__unsafe_offset,&__temp1833v__unsafe_align,&__temp1835v__buf__unsafe_ptr,&__temp1835v__buf__unsafe_size,&__temp1835v__buf__unsafe_offset,&__temp1835v__buf__unsafe_align,&__temp1835v__pos,&__temp1835v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  float____temp_buffer____buffer__temp1283v(&__temp1836v__unsafe_ptr,&__temp1836v__unsafe_size,&__temp1836v__unsafe_offset,&__temp1836v__unsafe_align);
  __temp1837v=200;
  __temp_errcode=alloc__temp473v(&__temp1836v__unsafe_ptr,&__temp1836v__unsafe_size,&__temp1836v__unsafe_offset,&__temp1836v__unsafe_align,__temp1837v,&__temp1838v__unsafe_ptr,&__temp1838v__unsafe_size,&__temp1838v__unsafe_offset,&__temp1838v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=circular__temp1307v(&__temp1838v__unsafe_ptr,&__temp1838v__unsafe_size,&__temp1838v__unsafe_offset,&__temp1838v__unsafe_align,&__temp1840v__buf__unsafe_ptr,&__temp1840v__buf__unsafe_size,&__temp1840v__buf__unsafe_offset,&__temp1840v__buf__unsafe_align,&__temp1840v__pos,&__temp1840v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  new__temp1278v();
  __temp1842v=10;
  __temp_errcode=vec__temp1319v(__temp1842v,&__temp1843v__unsafe_ptr,&__temp1843v__pos,&__temp1843v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v1__unsafe_ptr=__temp1843v__unsafe_ptr;
  v1__pos=__temp1843v__pos;
  v1__length=__temp1843v__length;
  new__temp1278v();
  __temp1846v=10;
  __temp_errcode=vec__temp1319v(__temp1846v,&__temp1847v__unsafe_ptr,&__temp1847v__pos,&__temp1847v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v2__unsafe_ptr=__temp1847v__unsafe_ptr;
  v2__pos=__temp1847v__pos;
  v2__length=__temp1847v__length;
  __temp1849v=0;
  __temp_errcode=mutget__temp1364v(v1__unsafe_ptr,v1__pos,v1__length,__temp1849v,&__temp1850v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1851v=1.0;
  if(!__temp1850v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1850v__,&__temp1851v,8);
  __temp1852v=0;
  __temp_errcode=mutget__temp1364v(v2__unsafe_ptr,v2__pos,v2__length,__temp1852v,&__temp1853v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1854v=2.0;
  if(!__temp1853v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1853v__,&__temp1854v,8);
  __temp1855v=5;
  range__temp436v(__temp1855v,&__temp1856v__from,&__temp1856v__to);
  it__from=__temp1856v__from;
  it__to=__temp1856v__to;
  __temp1857v=10;
  __temp_errcode=vec__temp1347v(__temp1835v__buf__unsafe_ptr,__temp1835v__buf__unsafe_size,__temp1835v__buf__unsafe_offset,__temp1835v__buf__unsafe_align,&__temp1835v__pos,__temp1835v__length,__temp1857v,&__temp1858v__unsafe_ptr,&__temp1858v__pos,&__temp1858v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1859v__pos=__temp1858v__pos;
  __temp1859v__length=__temp1858v__length;
  v__pos=__temp1859v__pos;
  v__length=__temp1859v__length;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1861v__);
  __temp1860v=__temp_complain;
  i=__temp1861v__;
  __temp1860v=__temp1860v==0;
  if(!__temp1860v){
  break;
  }
  __temp1862v=2.0;
  __temp_errcode=add__temp1428v(__temp1835v__buf__unsafe_ptr,__temp1835v__buf__unsafe_size,__temp1835v__buf__unsafe_offset,__temp1835v__buf__unsafe_align,&__temp1835v__pos,__temp1835v__length,v2__unsafe_ptr,v2__pos,v2__length,__temp1835v__buf__unsafe_ptr,v__pos,v__length,&__temp1863v__unsafe_ptr,&__temp1863v__pos,&__temp1863v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=add__temp1428v(__temp1835v__buf__unsafe_ptr,__temp1835v__buf__unsafe_size,__temp1835v__buf__unsafe_offset,__temp1835v__buf__unsafe_align,&__temp1835v__pos,__temp1835v__length,v1__unsafe_ptr,v1__pos,v1__length,__temp1835v__buf__unsafe_ptr,__temp1863v__pos,__temp1863v__length,&__temp1864v__unsafe_ptr,&__temp1864v__pos,&__temp1864v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mul__temp1633v(__temp1835v__buf__unsafe_ptr,__temp1835v__buf__unsafe_size,__temp1835v__buf__unsafe_offset,__temp1835v__buf__unsafe_align,&__temp1835v__pos,__temp1835v__length,__temp1862v,__temp1835v__buf__unsafe_ptr,__temp1864v__pos,__temp1864v__length,&__temp1865v__unsafe_ptr,&__temp1865v__pos,&__temp1865v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__pos=__temp1865v__pos;
  v__length=__temp1865v__length;
  }
  __temp1866v=0;
  __temp_errcode=get__temp1370v(__temp1835v__buf__unsafe_ptr,v__pos,v__length,__temp1866v,&__temp1867v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1867v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1868v__value,__temp1867v__,8);
  print__temp368v(__temp1868v__value);
  
  __temp_failure:__temp1848v____temp1322v____temp475v=0;
  neq__temp142v(__temp1847v__length,__temp1848v____temp1322v____temp475v,&__temp1848v____temp1322v____temp476v__);
  if(__temp1848v____temp1322v____temp476v__){
  __temp1847v__length=0;
  __temp1847v__length=__temp1847v__length;
  __temp1847v__unsafe_ptr=__temp1847v__unsafe_ptr;
  free__temp466v(&__temp1847v__unsafe_ptr);
  }
  __temp1844v____temp1322v____temp475v=0;
  neq__temp142v(__temp1843v__length,__temp1844v____temp1322v____temp475v,&__temp1844v____temp1322v____temp476v__);
  if(__temp1844v____temp1322v____temp476v__){
  __temp1843v__length=0;
  __temp1843v__length=__temp1843v__length;
  __temp1843v__unsafe_ptr=__temp1843v__unsafe_ptr;
  free__temp466v(&__temp1843v__unsafe_ptr);
  }
  __temp1839v____temp475v=0;
  neq__temp142v(__temp1838v__unsafe_size,__temp1839v____temp475v,&__temp1839v____temp476v__);
  if(__temp1839v____temp476v__){
  __temp1838v__unsafe_size=0;
  __temp1838v__unsafe_size=__temp1838v__unsafe_size;
  __temp1838v__unsafe_ptr=__temp1838v__unsafe_ptr;
  free__temp466v(&__temp1838v__unsafe_ptr);
  }
  __temp1834v____temp475v=0;
  neq__temp142v(__temp1833v__unsafe_size,__temp1834v____temp475v,&__temp1834v____temp476v__);
  if(__temp1834v____temp476v__){
  __temp1833v__unsafe_size=0;
  __temp1833v__unsafe_size=__temp1833v__unsafe_size;
  __temp1833v__unsafe_ptr=__temp1833v__unsafe_ptr;
  free__temp466v(&__temp1833v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1263v(int64_t value, const char** __temp1958v) {
  int __temp1264v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1958v=ret;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1870v() {
  char __temp1871v=0;
  char __temp1873v=0;
  int64_t __temp1874v=0;
  int64_t error=0;
  const char* __temp1875v__=0;
  int __temp_complain=0;
  __temp_complain=safe_main__temp1830v();
  __temp1871v=__temp_complain;
  __temp1871v=__temp1871v==0;
  __temp1874v=__temp_complain;
  __temp1873v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1874v;
  __temp1873v=__temp1873v==0;
  if(__temp1873v){
  cstr__temp1263v(error,&__temp1875v__);
  print__temp363v(__temp1875v__);
  }
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1870v();return 0;}