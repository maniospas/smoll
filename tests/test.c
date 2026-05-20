#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp822v="";
const char* const __temp1871v=")\n";
const char* const __temp1863v="(sum, mean, std) = (";
const char* const __temp1866v=", ";
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1283v(char** __temp1873v, uint64_t* __temp1874v, uint16_t* __temp1875v, uint16_t* __temp1876v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__temp1873v=unsafe_ptr;
  *__temp1874v=unsafe_size;
  *__temp1875v=unsafe_offset;
  *__temp1876v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1877v) {
  int value=0;
  *__temp1877v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1878v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1878v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1879v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1879v=__temp95v__;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1880v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1880v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1881v) {
  char* allocated=*__temp1881v;
  if(allocated){
  free(allocated);
  }
  *__temp1881v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1882v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1882v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1883v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1883v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1884v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1884v=z;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1885v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1885v=z;
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1886v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1886v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1887v) {
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
  *__temp1887v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1888v, uint64_t* __temp1889v, uint16_t* __temp1890v, uint16_t* __temp1891v, uint64_t size, char** __temp1892v, uint64_t* __temp1893v, uint16_t* __temp1894v, uint16_t* __temp1895v) {
  char* buffer__unsafe_ptr=*__temp1888v;
  uint64_t buffer__unsafe_size=*__temp1889v;
  uint16_t buffer__unsafe_offset=*__temp1890v;
  uint16_t buffer__unsafe_align=*__temp1891v;
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
  *__temp1888v=buffer__unsafe_ptr;
  *__temp1889v=buffer__unsafe_size;
  *__temp1890v=buffer__unsafe_offset;
  *__temp1891v=buffer__unsafe_align;
  *__temp1892v=__temp486v__unsafe_ptr;
  *__temp1893v=__temp486v__unsafe_size;
  *__temp1894v=__temp486v__unsafe_offset;
  *__temp1895v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp559v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1896v) {
  goto __temp_return;
  __temp_return:
  *__temp1896v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__temp1317v(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __temp1897v, uint64_t* __temp1898v, uint64_t* __temp1899v) {
  goto __temp_return;
  __temp_return:
  *__temp1897v=unsafe_ptr;
  *__temp1898v=pos;
  *__temp1899v=length;
}

static inline __attribute__((always_inline)) int vec__temp1325v(char** __temp1900v, uint64_t* __temp1901v, uint16_t* __temp1902v, uint16_t* __temp1903v, char** __temp1904v, uint64_t* __temp1905v, uint64_t* __temp1906v) {
  char* buf__unsafe_ptr=*__temp1900v;
  uint64_t buf__unsafe_size=*__temp1901v;
  uint16_t buf__unsafe_offset=*__temp1902v;
  uint16_t buf__unsafe_align=*__temp1903v;
  uint64_t __temp1326v__=0;
  uint64_t __temp1327v=0;
  char __temp1328v__=0;
  uint64_t __temp1329v__=0;
  uint64_t __temp1330v=0;
  char __temp1331v__=0;
  uint64_t __temp1332v=0;
  uint64_t __temp1333v__=0;
  char* __temp1334v__unsafe_ptr=0;
  uint64_t __temp1334v__pos=0;
  uint64_t __temp1334v__length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  nat__temp470v(buf__unsafe_align,&__temp1326v__);
  __temp1327v=8;
  neq__temp142v(__temp1326v__,__temp1327v,&__temp1328v__);
  if(__temp1328v__){
  __temp_errcode=33;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp1329v__);
  __temp1330v=0;
  neq__temp142v(__temp1329v__,__temp1330v,&__temp1331v__);
  if(__temp1331v__){
  __temp_errcode=34;
  goto __temp_failure;
  }
  __temp1332v=0;
  len__temp559v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp1333v__);
  vec__temp1317v(buf__unsafe_ptr,__temp1332v,__temp1333v__,&__temp1334v__unsafe_ptr,&__temp1334v__pos,&__temp1334v__length);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1900v=buf__unsafe_ptr;
  *__temp1901v=buf__unsafe_size;
  *__temp1902v=buf__unsafe_offset;
  *__temp1903v=buf__unsafe_align;
  *__temp1904v=__temp1334v__unsafe_ptr;
  *__temp1905v=__temp1334v__pos;
  *__temp1906v=__temp1334v__length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1907v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1907v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1908v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1908v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1909v) {
  *__temp1909v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1910v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1910v=__temp469v__;
}

static inline __attribute__((always_inline)) int mutget__temp1364v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1911v) {
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
  *__temp1911v=__temp1369v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp361v(const char* value, const char* endl) {
  int __temp362v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__temp1363v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __temp1912v) {
  goto __temp_return;
  __temp_return:
  *__temp1912v=v__length;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1913v, uint64_t* __temp1914v) {
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
  *__temp1913v=from;
  *__temp1914v=to;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1915v, uint64_t r__to, uint64_t* __temp1916v) {
  uint64_t r__from=*__temp1915v;
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
  *__temp1915v=r__from;
  *__temp1916v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp1370v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __temp1917v) {
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
  *__temp1917v=__temp1375v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1918v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1918v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1919v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1919v=z;
}

static inline __attribute__((always_inline)) int reduce__temp1743v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __temp1920v) {
  char __temp1744v=0;
  char __temp1745v=0;
  double __temp1746v=0;
  double __temp1747v=0;
  double ret=0;
  int __temp1748v=0;
  uint64_t __temp1749v__=0;
  uint64_t __temp1750v__from=0;
  uint64_t __temp1750v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1751v=0;
  uint64_t __temp1752v__=0;
  uint64_t i=0;
  char* __temp1753v__=0;
  double __temp1754v__value=0;
  double __temp1755v=0;
  double value=0;
  int __temp1756v=0;
  char __temp1757v=0;
  char __temp1758v=0;
  double __temp1759v__=0;
  int __temp1760v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1745v=1;
  if(__temp1745v){
  __temp1744v=1;
  }
  if(__temp1744v){
  __temp1746v=0.0;
  __temp1747v=__temp1746v;
  ret=__temp1747v;
  }
  len__temp1363v(v__unsafe_ptr,v__pos,v__length,&__temp1749v__);
  range__temp436v(__temp1749v__,&__temp1750v__from,&__temp1750v__to);
  it__from=__temp1750v__from;
  it__to=__temp1750v__to;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1752v__);
  __temp1751v=__temp_complain;
  i=__temp1752v__;
  __temp1751v=__temp1751v==0;
  if(!__temp1751v){
  break;
  }
  __temp_errcode=get__temp1370v(v__unsafe_ptr,v__pos,v__length,i,&__temp1753v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1753v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1754v__value,__temp1753v__,8);
  __temp1755v=__temp1754v__value;
  value=__temp1755v;
  __temp1758v=1;
  if(__temp1758v){
  __temp1757v=1;
  }
  if(__temp1757v){
  add__temp148v(ret,value,&__temp1759v__);
  ret=__temp1759v__;
  }
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1920v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sum__temp1819v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __temp1921v) {
  double __temp1821v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=reduce__temp1743v(v__unsafe_ptr,v__pos,v__length,&__temp1821v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1921v=__temp1821v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp366v(double value, const char* endl) {
  int __temp367v=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void float__temp392v(uint64_t x, double* __temp1922v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1922v=z;
}

static inline __attribute__((always_inline)) void eq__temp96v(double x, double y, char* __temp1923v) {
  int __temp97v__=0;
  char z=0;
  is_different__temp69v(x,y,&__temp97v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1923v=z;
}

static inline __attribute__((always_inline)) int div__temp196v(double x, double y, double* __temp1924v) {
  int __temp197v__=0;
  double zero=0;
  char __temp198v__=0;
  double z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp69v(x,y,&__temp197v__);
  zero=0;
  eq__temp96v(y,zero,&__temp198v__);
  if(__temp198v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x/y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1924v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mean__temp1822v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __temp1925v) {
  double __temp1824v__=0;
  uint64_t __temp1825v__=0;
  double __temp1826v__=0;
  double __temp1827v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=reduce__temp1743v(v__unsafe_ptr,v__pos,v__length,&__temp1824v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  len__temp1363v(v__unsafe_ptr,v__pos,v__length,&__temp1825v__);
  float__temp392v(__temp1825v__,&__temp1826v__);
  __temp_errcode=div__temp196v(__temp1824v__,__temp1826v__,&__temp1827v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1925v=__temp1827v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void mul__temp172v(double x, double y, double* __temp1926v) {
  int __temp173v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1926v=z;
}

static inline __attribute__((always_inline)) void sub__temp321v(double x, double y, double* __temp1927v) {
  int __temp322v__=0;
  int __temp323v=0;
  int __temp324v=0;
  double z=0;
  is_different__temp69v(x,y,&__temp322v__);
  z=x-y;
  goto __temp_return;
  __temp_return:
  *__temp1927v=z;
}

static inline __attribute__((always_inline)) int var__temp1828v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __temp1928v) {
  double __temp1829v=0;
  double __temp1830v=0;
  double sumsqr=0;
  double __temp1831v=0;
  double __temp1832v=0;
  double sum=0;
  uint64_t __temp1833v__=0;
  uint64_t __temp1834v__from=0;
  uint64_t __temp1834v__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __temp1835v=0;
  uint64_t __temp1836v__=0;
  uint64_t i=0;
  char* __temp1837v__=0;
  double __temp1838v__value=0;
  double value=0;
  double __temp1839v__=0;
  double __temp1840v__=0;
  double __temp1841v__=0;
  uint64_t __temp1842v__=0;
  double __temp1843v__=0;
  double n=0;
  double __temp1844v__=0;
  double __temp1845v__=0;
  double __temp1846v__=0;
  double __temp1847v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1829v=0.0;
  __temp1830v=__temp1829v;
  sumsqr=__temp1830v;
  __temp1831v=0.0;
  __temp1832v=__temp1831v;
  sum=__temp1832v;
  len__temp1363v(v__unsafe_ptr,v__pos,v__length,&__temp1833v__);
  range__temp436v(__temp1833v__,&__temp1834v__from,&__temp1834v__to);
  it__from=__temp1834v__from;
  it__to=__temp1834v__to;
  while(1){
  __temp_complain=next__temp440v(&it__from,it__to,&__temp1836v__);
  __temp1835v=__temp_complain;
  i=__temp1836v__;
  __temp1835v=__temp1835v==0;
  if(!__temp1835v){
  break;
  }
  __temp_errcode=get__temp1370v(v__unsafe_ptr,v__pos,v__length,i,&__temp1837v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1837v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1838v__value,__temp1837v__,8);
  value=__temp1838v__value;
  add__temp148v(sum,value,&__temp1839v__);
  sum=__temp1839v__;
  mul__temp172v(value,value,&__temp1840v__);
  add__temp148v(sumsqr,__temp1840v__,&__temp1841v__);
  sumsqr=__temp1841v__;
  }
  len__temp1363v(v__unsafe_ptr,v__pos,v__length,&__temp1842v__);
  float__temp392v(__temp1842v__,&__temp1843v__);
  n=__temp1843v__;
  __temp_errcode=div__temp196v(sum,n,&__temp1844v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sum=__temp1844v__;
  __temp_errcode=div__temp196v(sumsqr,n,&__temp1845v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp172v(sum,sum,&__temp1846v__);
  sub__temp321v(__temp1845v__,__temp1846v__,&__temp1847v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1928v=__temp1847v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void sqrt__temp1266v(double x, double* __temp1929v) {
  double z=0;
  z=sqrt(x);
  goto __temp_return;
  __temp_return:
  *__temp1929v=z;
}

static inline __attribute__((always_inline)) int std__temp1848v(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __temp1930v) {
  double __temp1849v__=0;
  double __temp1850v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=var__temp1828v(v__unsafe_ptr,v__pos,v__length,&__temp1849v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  sqrt__temp1266v(__temp1849v__,&__temp1850v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1930v=__temp1850v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1851v() {
  char* __temp1852v__unsafe_ptr=0;
  uint64_t __temp1852v__unsafe_size=0;
  uint16_t __temp1852v__unsafe_offset=0;
  uint16_t __temp1852v__unsafe_align=0;
  uint64_t __temp1853v=0;
  char* __temp1854v__unsafe_ptr=0;
  uint64_t __temp1854v__unsafe_size=0;
  uint16_t __temp1854v__unsafe_offset=0;
  uint16_t __temp1854v__unsafe_align=0;
  uint64_t __temp1855v____temp475v=0;
  char __temp1855v____temp476v__=0;
  char* __temp1856v__unsafe_ptr=0;
  uint64_t __temp1856v__pos=0;
  uint64_t __temp1856v__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __temp1857v=0;
  char* __temp1858v__=0;
  double __temp1859v=0;
  uint64_t __temp1860v=0;
  char* __temp1861v__=0;
  double __temp1862v=0;
  double __temp1865v__=0;
  double __temp1868v__=0;
  double __temp1870v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1283v(&__temp1852v__unsafe_ptr,&__temp1852v__unsafe_size,&__temp1852v__unsafe_offset,&__temp1852v__unsafe_align);
  __temp1853v=5;
  __temp_errcode=alloc__temp473v(&__temp1852v__unsafe_ptr,&__temp1852v__unsafe_size,&__temp1852v__unsafe_offset,&__temp1852v__unsafe_align,__temp1853v,&__temp1854v__unsafe_ptr,&__temp1854v__unsafe_size,&__temp1854v__unsafe_offset,&__temp1854v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=vec__temp1325v(&__temp1854v__unsafe_ptr,&__temp1854v__unsafe_size,&__temp1854v__unsafe_offset,&__temp1854v__unsafe_align,&__temp1856v__unsafe_ptr,&__temp1856v__pos,&__temp1856v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  v__unsafe_ptr=__temp1856v__unsafe_ptr;
  v__pos=__temp1856v__pos;
  v__length=__temp1856v__length;
  __temp1857v=0;
  __temp_errcode=mutget__temp1364v(v__unsafe_ptr,v__pos,v__length,__temp1857v,&__temp1858v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1859v=1.0;
  if(!__temp1858v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1858v__,&__temp1859v,8);
  __temp1860v=1;
  __temp_errcode=mutget__temp1364v(v__unsafe_ptr,v__pos,v__length,__temp1860v,&__temp1861v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1862v=2.0;
  if(!__temp1861v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1861v__,&__temp1862v,8);
  print__temp361v(__temp1863v,__temp822v);
  __temp_errcode=sum__temp1819v(v__unsafe_ptr,v__pos,v__length,&__temp1865v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp366v(__temp1865v__,__temp1866v);
  __temp_errcode=mean__temp1822v(v__unsafe_ptr,v__pos,v__length,&__temp1868v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp366v(__temp1868v__,__temp1866v);
  __temp_errcode=std__temp1848v(v__unsafe_ptr,v__pos,v__length,&__temp1870v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  print__temp366v(__temp1870v__,__temp1871v);
  
  __temp_failure:__temp1855v____temp475v=0;
  neq__temp142v(__temp1854v__unsafe_size,__temp1855v____temp475v,&__temp1855v____temp476v__);
  if(__temp1855v____temp476v__){
  __temp1854v__unsafe_size=0;
  __temp1854v__unsafe_size=__temp1854v__unsafe_size;
  __temp1854v__unsafe_ptr=__temp1854v__unsafe_ptr;
  free__temp466v(&__temp1854v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1851v();return 0;}