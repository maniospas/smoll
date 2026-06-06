#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1627t="-";
const char* const __t1630t="+";
const char* const __t2013t="123";
const char* const __t1721t=".";
const char* const __t382t="\n";
static const char* __t_all_errcodes[35] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"iterator range",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot allocate a buffer of unsized type",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"unexpected end of console read",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t921t(char** __t2016t, uint64_t* __t2017t, uint16_t* __t2018t, uint16_t* __t2019t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2016t=unsafe_ptr;
  *__t2017t=unsafe_size;
  *__t2018t=unsafe_offset;
  *__t2019t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2020t) {
  *__t2020t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2021t) {
  int value=0;
  *__t2021t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2022t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2022t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2023t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2023t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2024t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2024t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2025t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2025t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2026t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2026t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2027t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2027t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2028t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2028t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2029t) {
  *__t2029t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2030t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2030t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2031t) {
  char __t799t__=0;
  uint64_t __t800t__=0;
  uint64_t __t801t__=0;
  uint64_t __t802t__=0;
  uint64_t __t803t__=0;
  char* __t804t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t799t__);
  if(__t799t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t800t__);
  mul__t199t(i,__t800t__,&__t801t__);
  nat__t665t(buffer__unsafe_offset,&__t802t__);
  add__t175t(__t801t__,__t802t__,&__t803t__);
  add__t663t(buffer__unsafe_ptr,__t803t__,&__t804t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2031t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t941t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2032t, uint64_t* __t2033t, uint64_t* __t2034t, char* __t2035t) {
  goto __t_return;
  __t_return:
  *__t2032t=unsafe_ptr;
  *__t2033t=dat__pos;
  *__t2034t=dat__length;
  *__t2035t=dat__first;
}

static inline __attribute__((always_inline)) int str__t945t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2036t, uint64_t* __t2037t, uint64_t* __t2038t, char* __t2039t) {
  char* unsafe_ptr=0;
  uint64_t __t946t__=0;
  uint64_t __t947t=0;
  char __t948t__=0;
  uint64_t __t949t__=0;
  uint64_t __t950t=0;
  char __t951t__=0;
  char* __t952t__unsafe_ptr=0;
  uint64_t __t952t__dat__pos=0;
  uint64_t __t952t__dat__length=0;
  char __t952t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t665t(buf__unsafe_align,&__t946t__);
  __t947t=1;
  neq__t144t(__t946t__,__t947t,&__t948t__);
  if(__t948t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t665t(buf__unsafe_offset,&__t949t__);
  __t950t=0;
  neq__t144t(__t949t__,__t950t,&__t951t__);
  if(__t951t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t941t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t952t__unsafe_ptr,&__t952t__dat__pos,&__t952t__dat__length,&__t952t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2036t=__t952t__unsafe_ptr;
  *__t2037t=__t952t__dat__pos;
  *__t2038t=__t952t__dat__length;
  *__t2039t=__t952t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2040t, uint64_t* __t2041t, uint64_t* __t2042t, char* __t2043t) {
  uint64_t __t978t=0;
  char __t979t__=0;
  char* __t980t__=0;
  char __t981t__value=0;
  char first=0;
  char* __t982t__unsafe_ptr=0;
  uint64_t __t982t__dat__pos=0;
  uint64_t __t982t__dat__length=0;
  char __t982t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t978t=0;
  neq__t144t(length,__t978t,&__t979t__);
  if(__t979t__){
  __t_errcode=get__t798t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t980t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t980t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t981t__value,__t980t__,1);
  first=__t981t__value;
  }
  __t_errcode=str__t945t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t982t__unsafe_ptr,&__t982t__dat__pos,&__t982t__dat__length,&__t982t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2040t=__t982t__unsafe_ptr;
  *__t2041t=__t982t__dat__pos;
  *__t2042t=__t982t__dat__length;
  *__t2043t=__t982t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t997t(const char* c, char** __t2044t, uint64_t* __t2045t, uint64_t* __t2046t, char* __t2047t) {
  char* __t998t__unsafe_ptr=0;
  uint64_t __t998t__unsafe_size=0;
  uint16_t __t998t__unsafe_offset=0;
  uint16_t __t998t__unsafe_align=0;
  char* __t999t__unsafe_ptr=0;
  uint64_t __t999t__unsafe_size=0;
  uint16_t __t999t__unsafe_offset=0;
  uint16_t __t999t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1000t__=0;
  uint64_t length=0;
  uint64_t __t1001t=0;
  uint64_t __t1002t__=0;
  uint64_t __t1003t=0;
  char* __t1005t__unsafe_ptr=0;
  uint64_t __t1005t__dat__pos=0;
  uint64_t __t1005t__dat__length=0;
  char __t1005t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t921t(&__t998t__unsafe_ptr,&__t998t__unsafe_size,&__t998t__unsafe_offset,&__t998t__unsafe_align);
  __t999t__unsafe_ptr=__t998t__unsafe_ptr;
  __t999t__unsafe_size=__t998t__unsafe_size;
  __t999t__unsafe_offset=__t998t__unsafe_offset;
  __t999t__unsafe_align=__t998t__unsafe_align;
  buf__unsafe_ptr=__t999t__unsafe_ptr;
  buf__unsafe_size=__t999t__unsafe_size;
  buf__unsafe_offset=__t999t__unsafe_offset;
  buf__unsafe_align=__t999t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t1000t__);
  buf__unsafe_ptr=__t1000t__;
  if(c){
  length=strlen(c);
  }
  __t1001t=1;
  add__t175t(length,__t1001t,&__t1002t__);
  buf__unsafe_size=__t1002t__;
  __t1003t=0;
  __t_errcode=str__t977t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1003t,length,&__t1005t__unsafe_ptr,&__t1005t__dat__pos,&__t1005t__dat__length,&__t1005t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2044t=__t1005t__unsafe_ptr;
  *__t2045t=__t1005t__dat__pos;
  *__t2046t=__t1005t__dat__length;
  *__t2047t=__t1005t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1006t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2048t) {
  goto __t_return;
  __t_return:
  *__t2048t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2049t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2049t=z;
}

static inline __attribute__((always_inline)) void get__t1133t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2050t) {
  uint64_t __t1134t__=0;
  char* __t1135t__=0;
  add__t175t(s__dat__pos,i,&__t1134t__);
  add__t663t(s__unsafe_ptr,__t1134t__,&__t1135t__);
  goto __t_return;
  __t_return:
  *__t2050t=__t1135t__;
}

static inline __attribute__((always_inline)) void char__t1008t(const char* s, char* __t2051t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t2051t=c;
}

static inline __attribute__((always_inline)) void eq__t1009t(char x, char y, char* __t2052t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t2052t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2053t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2053t=z;
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2054t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2054t=z;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t2055t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t2055t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t2056t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2056t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t2057t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2057t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t2058t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t2058t=z;
}

static inline __attribute__((always_inline)) int float__t1886t(const char* _s, double* __t2059t) {
  char* __t1887t__unsafe_ptr=0;
  uint64_t __t1887t__dat__pos=0;
  uint64_t __t1887t__dat__length=0;
  char __t1887t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  uint64_t __t1888t=0;
  uint64_t __t1889t__=0;
  char __t1890t__=0;
  double __t1891t=0;
  double __t1892t=0;
  double number=0;
  uint64_t __t1893t=0;
  uint64_t __t1894t=0;
  uint64_t i=0;
  uint64_t __t1895t=0;
  uint64_t __t1896t__=0;
  char __t1897t__=0;
  uint64_t __t1898t=0;
  uint64_t __t1899t=0;
  uint64_t __t1900t=0;
  char* __t1901t__=0;
  char __t1902t__value=0;
  char __t1903t__=0;
  char __t1904t__=0;
  char negative=0;
  char* __t1909t__=0;
  char __t1910t__value=0;
  char __t1911t__=0;
  char __t1912t__=0;
  uint64_t __t1913t=0;
  uint64_t __t1914t__=0;
  uint64_t __t1915t__=0;
  char __t1916t__=0;
  uint64_t __t1905t=0;
  uint64_t __t1906t__=0;
  uint64_t __t1907t__=0;
  char __t1908t__=0;
  uint64_t __t1917t__=0;
  char __t1918t__=0;
  char* __t1919t__=0;
  char __t1920t__value=0;
  char c=0;
  char is_digit=0;
  double digit=0;
  char __t1921t__=0;
  char __t1922t__=0;
  char is_dot=0;
  uint64_t __t1923t=0;
  uint64_t __t1924t__=0;
  char __t1925t__=0;
  double __t1926t=0;
  double __t1927t__=0;
  double __t1928t__=0;
  uint64_t __t1929t=0;
  uint64_t __t1930t__=0;
  uint64_t __t1931t__=0;
  char __t1932t__=0;
  double __t1933t=0;
  double __t1934t=0;
  double base=0;
  uint64_t __t1935t__=0;
  char __t1936t__=0;
  char* __t1937t__=0;
  char __t1938t__value=0;
  char d=0;
  char is_decimal_digit=0;
  double decimal_digit=0;
  char __t1939t__=0;
  double __t1940t__=0;
  double __t1941t__=0;
  double __t1942t=0;
  double __t1943t__=0;
  uint64_t __t1944t=0;
  uint64_t __t1945t__=0;
  double __t1946t=0;
  double __t1947t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t997t(_s,&__t1887t__unsafe_ptr,&__t1887t__dat__pos,&__t1887t__dat__length,&__t1887t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1887t__unsafe_ptr;
  s__dat__pos=__t1887t__dat__pos;
  s__dat__length=__t1887t__dat__length;
  s__dat__first=__t1887t__dat__first;
  __t1888t=0;
  len__t1006t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1889t__);
  eq__t120t(__t1888t,__t1889t__,&__t1890t__);
  if(__t1890t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1891t=0.0;
  __t1892t=__t1891t;
  number=__t1892t;
  __t1893t=0;
  __t1894t=__t1893t;
  i=__t1894t;
  __t1895t=0;
  len__t1006t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1896t__);
  eq__t120t(__t1895t,__t1896t__,&__t1897t__);
  if(__t1897t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1898t=0;
  __t1899t=__t1898t;
  i=__t1899t;
  __t1900t=0;
  get__t1133t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,__t1900t,&__t1901t__);
  if(!__t1901t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1902t__value,__t1901t__,1);
  char__t1008t(__t1627t,&__t1903t__);
  eq__t1009t(__t1902t__value,__t1903t__,&__t1904t__);
  negative=__t1904t__;
  if(negative){
  __t1905t=1;
  add__t175t(i,__t1905t,&__t1906t__);
  i=__t1906t__;
  len__t1006t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1907t__);
  eq__t120t(i,__t1907t__,&__t1908t__);
  if(__t1908t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  else{
  get__t1133t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1909t__);
  if(!__t1909t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1910t__value,__t1909t__,1);
  char__t1008t(__t1630t,&__t1911t__);
  eq__t1009t(__t1910t__value,__t1911t__,&__t1912t__);
  if(__t1912t__){
  __t1913t=1;
  add__t175t(i,__t1913t,&__t1914t__);
  i=__t1914t__;
  len__t1006t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1915t__);
  eq__t120t(i,__t1915t__,&__t1916t__);
  if(__t1916t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  }
  while(1){
  len__t1006t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1917t__);
  lt__t252t(i,__t1917t__,&__t1918t__);
  if(!__t1918t__){
  break;
  }
  get__t1133t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1919t__);
  if(!__t1919t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1920t__value,__t1919t__,1);
  c=__t1920t__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  char__t1008t(__t1721t,&__t1921t__);
  eq__t1009t(c,__t1921t__,&__t1922t__);
  is_dot=__t1922t__;
  if(is_dot){
  __t1923t=1;
  add__t175t(i,__t1923t,&__t1924t__);
  i=__t1924t__;
  break;
  }
  not__t28t(is_digit,&__t1925t__);
  if(__t1925t__){
  __t_errcode=33;
  goto __t_failure;
  }
  __t1926t=10.0;
  mul__t177t(number,__t1926t,&__t1927t__);
  add__t153t(__t1927t__,digit,&__t1928t__);
  number=__t1928t__;
  __t1929t=1;
  add__t175t(i,__t1929t,&__t1930t__);
  i=__t1930t__;
  }
  if(is_dot){
  len__t1006t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1931t__);
  eq__t120t(i,__t1931t__,&__t1932t__);
  if(__t1932t__){
  __t_errcode=34;
  goto __t_failure;
  }
  __t1933t=0.1;
  __t1934t=__t1933t;
  base=__t1934t;
  while(1){
  len__t1006t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1935t__);
  lt__t252t(i,__t1935t__,&__t1936t__);
  if(!__t1936t__){
  break;
  }
  get__t1133t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t1937t__);
  if(!__t1937t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1938t__value,__t1937t__,1);
  d=__t1938t__value;
  is_decimal_digit=d>='0'&&d<='9';
  decimal_digit=d-'0';
  not__t28t(is_decimal_digit,&__t1939t__);
  if(__t1939t__){
  __t_errcode=33;
  goto __t_failure;
  }
  mul__t177t(decimal_digit,base,&__t1940t__);
  add__t153t(number,__t1940t__,&__t1941t__);
  number=__t1941t__;
  __t1942t=0.1;
  mul__t177t(base,__t1942t,&__t1943t__);
  base=__t1943t__;
  __t1944t=1;
  add__t175t(i,__t1944t,&__t1945t__);
  i=__t1945t__;
  }
  }
  if(negative){
  __t1946t=0.0;
  sub__t326t(__t1946t,number,&__t1947t__);
  number=__t1947t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2059t=number;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2011t() {
  double __t2014t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=float__t1886t(__t2013t,&__t2014t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t385t(__t2014t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2011t();return 0;}