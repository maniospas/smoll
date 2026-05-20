#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t1871t=")\n";
const char* const __t1863t="(sum, mean, std) = (";
const char* const __t1866t=", ";
const char* const __t822t="";
static const char* __t_all_errcodes[38] = {"noerr",
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1283t(char** __t1873t, uint64_t* __t1874t, uint16_t* __t1875t, uint16_t* __t1876t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1873t=unsafe_ptr;
  *__t1874t=unsafe_size;
  *__t1875t=unsafe_offset;
  *__t1876t=unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1877t) {
  int value=0;
  *__t1877t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1878t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1878t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1879t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1879t=__t95t__;
}

static inline __attribute__((always_inline)) void neq__t142t(uint64_t x, uint64_t y, char* __t1880t) {
  int __t143t__=0;
  char z=0;
  is_different__t93t(x,y,&__t143t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1880t=z;
}

static inline __attribute__((always_inline)) void free__t466t(char** __t1881t) {
  char* allocated=*__t1881t;
  if(allocated){
  free(allocated);
  }
  *__t1881t=allocated;
}

static inline __attribute__((always_inline)) void eq__t118t(uint64_t x, uint64_t y, char* __t1882t) {
  int __t119t__=0;
  char z=0;
  is_different__t93t(x,y,&__t119t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1882t=z;
}

static inline __attribute__((always_inline)) void nat__t470t(uint16_t x, uint64_t* __t1883t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1883t=value;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t1884t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1884t=z;
}

static inline __attribute__((always_inline)) void zero__t467t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t412t(char* x, char* __t1885t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1885t=z;
}

static inline __attribute__((always_inline)) void not__t26t(char value, char* __t1886t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1886t=z;
}

static inline __attribute__((always_inline)) int alloc__t459t(uint64_t bytes, char** __t1887t) {
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
  *__t1887t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t473t(char** __t1888t, uint64_t* __t1889t, uint16_t* __t1890t, uint16_t* __t1891t, uint64_t size, char** __t1892t, uint64_t* __t1893t, uint16_t* __t1894t, uint16_t* __t1895t) {
  char* buffer__unsafe_ptr=*__t1888t;
  uint64_t buffer__unsafe_size=*__t1889t;
  uint16_t buffer__unsafe_offset=*__t1890t;
  uint16_t buffer__unsafe_align=*__t1891t;
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
  *__t1888t=buffer__unsafe_ptr;
  *__t1889t=buffer__unsafe_size;
  *__t1890t=buffer__unsafe_offset;
  *__t1891t=buffer__unsafe_align;
  *__t1892t=__t486t__unsafe_ptr;
  *__t1893t=__t486t__unsafe_size;
  *__t1894t=__t486t__unsafe_offset;
  *__t1895t=__t486t__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t559t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1896t) {
  goto __t_return;
  __t_return:
  *__t1896t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1317t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t1897t, uint64_t* __t1898t, uint64_t* __t1899t) {
  goto __t_return;
  __t_return:
  *__t1897t=unsafe_ptr;
  *__t1898t=pos;
  *__t1899t=length;
}

static inline __attribute__((always_inline)) int vec__t1325t(char** __t1900t, uint64_t* __t1901t, uint16_t* __t1902t, uint16_t* __t1903t, char** __t1904t, uint64_t* __t1905t, uint64_t* __t1906t) {
  char* buf__unsafe_ptr=*__t1900t;
  uint64_t buf__unsafe_size=*__t1901t;
  uint16_t buf__unsafe_offset=*__t1902t;
  uint16_t buf__unsafe_align=*__t1903t;
  uint64_t __t1326t__=0;
  uint64_t __t1327t=0;
  char __t1328t__=0;
  uint64_t __t1329t__=0;
  uint64_t __t1330t=0;
  char __t1331t__=0;
  uint64_t __t1332t=0;
  uint64_t __t1333t__=0;
  char* __t1334t__unsafe_ptr=0;
  uint64_t __t1334t__pos=0;
  uint64_t __t1334t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t470t(buf__unsafe_align,&__t1326t__);
  __t1327t=8;
  neq__t142t(__t1326t__,__t1327t,&__t1328t__);
  if(__t1328t__){
  __t_errcode=33;
  goto __t_failure;
  }
  nat__t470t(buf__unsafe_offset,&__t1329t__);
  __t1330t=0;
  neq__t142t(__t1329t__,__t1330t,&__t1331t__);
  if(__t1331t__){
  __t_errcode=34;
  goto __t_failure;
  }
  __t1332t=0;
  len__t559t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1333t__);
  vec__t1317t(buf__unsafe_ptr,__t1332t,__t1333t__,&__t1334t__unsafe_ptr,&__t1334t__pos,&__t1334t__length);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1900t=buf__unsafe_ptr;
  *__t1901t=buf__unsafe_size;
  *__t1902t=buf__unsafe_offset;
  *__t1903t=buf__unsafe_align;
  *__t1904t=__t1334t__unsafe_ptr;
  *__t1905t=__t1334t__pos;
  *__t1906t=__t1334t__length;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1907t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1907t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1908t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1908t=z;
}

static inline __attribute__((always_inline)) void attach_type__t20t(char* to, char* from, char** __t1909t) {
  *__t1909t=to;
}

static inline __attribute__((always_inline)) void add__t468t(char* allocated, uint64_t offset, char** __t1910t) {
  char* element=0;
  char* __t469t__=0;
  element=allocated+offset;
  attach_type__t20t(element,allocated,&__t469t__);
  goto __t_return;
  __t_return:
  *__t1910t=__t469t__;
}

static inline __attribute__((always_inline)) int mutget__t1364t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t1911t) {
  char __t1365t__=0;
  uint64_t __t1366t=0;
  uint64_t __t1367t__=0;
  uint64_t __t1368t__=0;
  char* __t1369t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,v__length,&__t1365t__);
  if(__t1365t__){
  __t_errcode=12;
  goto __t_failure;
  }
  __t1366t=8;
  add__t170t(i,v__pos,&__t1367t__);
  mul__t194t(__t1366t,__t1367t__,&__t1368t__);
  add__t468t(v__unsafe_ptr,__t1368t__,&__t1369t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1911t=__t1369t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t361t(const char* value, const char* endl) {
  int __t362t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t1363t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t1912t) {
  goto __t_return;
  __t_return:
  *__t1912t=v__length;
}

static inline __attribute__((always_inline)) void range__t436t(uint64_t to, uint64_t* __t1913t, uint64_t* __t1914t) {
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
  *__t1913t=from;
  *__t1914t=to;
}

static inline __attribute__((always_inline)) int next__t440t(uint64_t* __t1915t, uint64_t r__to, uint64_t* __t1916t) {
  uint64_t r__from=*__t1915t;
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
  *__t1915t=r__from;
  *__t1916t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1370t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t1917t) {
  char __t1371t__=0;
  uint64_t __t1372t=0;
  uint64_t __t1373t__=0;
  uint64_t __t1374t__=0;
  char* __t1375t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(i,v__length,&__t1371t__);
  if(__t1371t__){
  __t_errcode=12;
  goto __t_failure;
  }
  __t1372t=8;
  add__t170t(i,v__pos,&__t1373t__);
  mul__t194t(__t1372t,__t1373t__,&__t1374t__);
  add__t468t(v__unsafe_ptr,__t1374t__,&__t1375t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1917t=__t1375t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t1918t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t1918t=__t71t__;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t1919t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1919t=z;
}

static inline __attribute__((always_inline)) int reduce__t1743t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t1920t) {
  char __t1744t=0;
  char __t1745t=0;
  double __t1746t=0;
  double __t1747t=0;
  double ret=0;
  int __t1748t=0;
  uint64_t __t1749t__=0;
  uint64_t __t1750t__from=0;
  uint64_t __t1750t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1751t=0;
  uint64_t __t1752t__=0;
  uint64_t i=0;
  char* __t1753t__=0;
  double __t1754t__value=0;
  double __t1755t=0;
  double value=0;
  int __t1756t=0;
  char __t1757t=0;
  char __t1758t=0;
  double __t1759t__=0;
  int __t1760t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1745t=1;
  if(__t1745t){
  __t1744t=1;
  }
  if(__t1744t){
  __t1746t=0.0;
  __t1747t=__t1746t;
  ret=__t1747t;
  }
  len__t1363t(v__unsafe_ptr,v__pos,v__length,&__t1749t__);
  range__t436t(__t1749t__,&__t1750t__from,&__t1750t__to);
  it__from=__t1750t__from;
  it__to=__t1750t__to;
  while(1){
  __t_complain=next__t440t(&it__from,it__to,&__t1752t__);
  __t1751t=__t_complain;
  i=__t1752t__;
  __t1751t=__t1751t==0;
  if(!__t1751t){
  break;
  }
  __t_errcode=get__t1370t(v__unsafe_ptr,v__pos,v__length,i,&__t1753t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1753t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1754t__value,__t1753t__,8);
  __t1755t=__t1754t__value;
  value=__t1755t;
  __t1758t=1;
  if(__t1758t){
  __t1757t=1;
  }
  if(__t1757t){
  add__t148t(ret,value,&__t1759t__);
  ret=__t1759t__;
  }
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1920t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sum__t1819t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t1921t) {
  double __t1821t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t1743t(v__unsafe_ptr,v__pos,v__length,&__t1821t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1921t=__t1821t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t366t(double value, const char* endl) {
  int __t367t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void float__t392t(uint64_t x, double* __t1922t) {
  double z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t1922t=z;
}

static inline __attribute__((always_inline)) void eq__t96t(double x, double y, char* __t1923t) {
  int __t97t__=0;
  char z=0;
  is_different__t69t(x,y,&__t97t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1923t=z;
}

static inline __attribute__((always_inline)) int div__t196t(double x, double y, double* __t1924t) {
  int __t197t__=0;
  double zero=0;
  char __t198t__=0;
  double z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t69t(x,y,&__t197t__);
  zero=0;
  eq__t96t(y,zero,&__t198t__);
  if(__t198t__){
  __t_errcode=2;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1924t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mean__t1822t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t1925t) {
  double __t1824t__=0;
  uint64_t __t1825t__=0;
  double __t1826t__=0;
  double __t1827t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t1743t(v__unsafe_ptr,v__pos,v__length,&__t1824t__);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t1363t(v__unsafe_ptr,v__pos,v__length,&__t1825t__);
  float__t392t(__t1825t__,&__t1826t__);
  __t_errcode=div__t196t(__t1824t__,__t1826t__,&__t1827t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1925t=__t1827t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t172t(double x, double y, double* __t1926t) {
  int __t173t__=0;
  double z=0;
  is_different__t69t(x,y,&__t173t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1926t=z;
}

static inline __attribute__((always_inline)) void sub__t321t(double x, double y, double* __t1927t) {
  int __t322t__=0;
  int __t323t=0;
  int __t324t=0;
  double z=0;
  is_different__t69t(x,y,&__t322t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t1927t=z;
}

static inline __attribute__((always_inline)) int var__t1828t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t1928t) {
  double __t1829t=0;
  double __t1830t=0;
  double sumsqr=0;
  double __t1831t=0;
  double __t1832t=0;
  double sum=0;
  uint64_t __t1833t__=0;
  uint64_t __t1834t__from=0;
  uint64_t __t1834t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t1835t=0;
  uint64_t __t1836t__=0;
  uint64_t i=0;
  char* __t1837t__=0;
  double __t1838t__value=0;
  double value=0;
  double __t1839t__=0;
  double __t1840t__=0;
  double __t1841t__=0;
  uint64_t __t1842t__=0;
  double __t1843t__=0;
  double n=0;
  double __t1844t__=0;
  double __t1845t__=0;
  double __t1846t__=0;
  double __t1847t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1829t=0.0;
  __t1830t=__t1829t;
  sumsqr=__t1830t;
  __t1831t=0.0;
  __t1832t=__t1831t;
  sum=__t1832t;
  len__t1363t(v__unsafe_ptr,v__pos,v__length,&__t1833t__);
  range__t436t(__t1833t__,&__t1834t__from,&__t1834t__to);
  it__from=__t1834t__from;
  it__to=__t1834t__to;
  while(1){
  __t_complain=next__t440t(&it__from,it__to,&__t1836t__);
  __t1835t=__t_complain;
  i=__t1836t__;
  __t1835t=__t1835t==0;
  if(!__t1835t){
  break;
  }
  __t_errcode=get__t1370t(v__unsafe_ptr,v__pos,v__length,i,&__t1837t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1837t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1838t__value,__t1837t__,8);
  value=__t1838t__value;
  add__t148t(sum,value,&__t1839t__);
  sum=__t1839t__;
  mul__t172t(value,value,&__t1840t__);
  add__t148t(sumsqr,__t1840t__,&__t1841t__);
  sumsqr=__t1841t__;
  }
  len__t1363t(v__unsafe_ptr,v__pos,v__length,&__t1842t__);
  float__t392t(__t1842t__,&__t1843t__);
  n=__t1843t__;
  __t_errcode=div__t196t(sum,n,&__t1844t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sum=__t1844t__;
  __t_errcode=div__t196t(sumsqr,n,&__t1845t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t172t(sum,sum,&__t1846t__);
  sub__t321t(__t1845t__,__t1846t__,&__t1847t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1928t=__t1847t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sqrt__t1266t(double x, double* __t1929t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t1929t=z;
}

static inline __attribute__((always_inline)) int std__t1848t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t1930t) {
  double __t1849t__=0;
  double __t1850t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=var__t1828t(v__unsafe_ptr,v__pos,v__length,&__t1849t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sqrt__t1266t(__t1849t__,&__t1850t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1930t=__t1850t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1851t() {
  char* __t1852t__unsafe_ptr=0;
  uint64_t __t1852t__unsafe_size=0;
  uint16_t __t1852t__unsafe_offset=0;
  uint16_t __t1852t__unsafe_align=0;
  uint64_t __t1853t=0;
  char* __t1854t__unsafe_ptr=0;
  uint64_t __t1854t__unsafe_size=0;
  uint16_t __t1854t__unsafe_offset=0;
  uint16_t __t1854t__unsafe_align=0;
  uint64_t __t1855t____t475t=0;
  char __t1855t____t476t__=0;
  char* __t1856t__unsafe_ptr=0;
  uint64_t __t1856t__pos=0;
  uint64_t __t1856t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t1857t=0;
  char* __t1858t__=0;
  double __t1859t=0;
  uint64_t __t1860t=0;
  char* __t1861t__=0;
  double __t1862t=0;
  double __t1865t__=0;
  double __t1868t__=0;
  double __t1870t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1283t(&__t1852t__unsafe_ptr,&__t1852t__unsafe_size,&__t1852t__unsafe_offset,&__t1852t__unsafe_align);
  __t1853t=5;
  __t_errcode=alloc__t473t(&__t1852t__unsafe_ptr,&__t1852t__unsafe_size,&__t1852t__unsafe_offset,&__t1852t__unsafe_align,__t1853t,&__t1854t__unsafe_ptr,&__t1854t__unsafe_size,&__t1854t__unsafe_offset,&__t1854t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=vec__t1325t(&__t1854t__unsafe_ptr,&__t1854t__unsafe_size,&__t1854t__unsafe_offset,&__t1854t__unsafe_align,&__t1856t__unsafe_ptr,&__t1856t__pos,&__t1856t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1856t__unsafe_ptr;
  v__pos=__t1856t__pos;
  v__length=__t1856t__length;
  __t1857t=0;
  __t_errcode=mutget__t1364t(v__unsafe_ptr,v__pos,v__length,__t1857t,&__t1858t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1859t=1.0;
  if(!__t1858t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1858t__,&__t1859t,8);
  __t1860t=1;
  __t_errcode=mutget__t1364t(v__unsafe_ptr,v__pos,v__length,__t1860t,&__t1861t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1862t=2.0;
  if(!__t1861t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1861t__,&__t1862t,8);
  print__t361t(__t1863t,__t822t);
  __t_errcode=sum__t1819t(v__unsafe_ptr,v__pos,v__length,&__t1865t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t366t(__t1865t__,__t1866t);
  __t_errcode=mean__t1822t(v__unsafe_ptr,v__pos,v__length,&__t1868t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t366t(__t1868t__,__t1866t);
  __t_errcode=std__t1848t(v__unsafe_ptr,v__pos,v__length,&__t1870t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t366t(__t1870t__,__t1871t);
  
  __t_failure:__t1855t____t475t=0;
  neq__t142t(__t1854t__unsafe_size,__t1855t____t475t,&__t1855t____t476t__);
  if(__t1855t____t476t__){
  __t1854t__unsafe_size=0;
  __t1854t__unsafe_size=__t1854t__unsafe_size;
  __t1854t__unsafe_ptr=__t1854t__unsafe_ptr;
  free__t466t(&__t1854t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1851t();return 0;}