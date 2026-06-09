#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1674t="-";
const char* const __t1677t="+";
const char* const __t393t="\n";
const char* const __t1768t=".";
const char* const __t2126t="123";
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

static inline __attribute__((always_inline)) void console__t376t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t946t(char** __t2129t, uint64_t* __t2130t, uint16_t* __t2131t, uint16_t* __t2132t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2129t=unsafe_ptr;
  *__t2130t=unsafe_size;
  *__t2131t=unsafe_offset;
  *__t2132t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t24t(char* to, const char* from, char** __t2133t) {
  *__t2133t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2134t) {
  int value=0;
  *__t2134t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t2135t) {
  int __t39t__=0;
  false__t10t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t2135t=__t39t__;
}

static inline __attribute__((always_inline)) void is_different__t104t(uint64_t x, uint64_t y, int* __t2136t) {
  int __t106t=0;
  int __t107t__=0;
  not__t38t(__t106t,&__t107t__);
  goto __t_return;
  __t_return:
  *__t2136t=__t107t__;
}

static inline __attribute__((always_inline)) void add__t185t(uint64_t x, uint64_t y, uint64_t* __t2137t) {
  int __t186t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t186t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2137t=z;
}

static inline __attribute__((always_inline)) void neq__t154t(uint64_t x, uint64_t y, char* __t2138t) {
  int __t155t__=0;
  char z=0;
  is_different__t104t(x,y,&__t155t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2138t=z;
}

static inline __attribute__((always_inline)) void ge__t334t(uint64_t x, uint64_t y, char* __t2139t) {
  int __t335t__=0;
  char z=0;
  is_different__t104t(x,y,&__t335t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2139t=z;
}

static inline __attribute__((always_inline)) void nat__t676t(uint16_t x, uint64_t* __t2140t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2140t=value;
}

static inline __attribute__((always_inline)) void mul__t209t(uint64_t x, uint64_t y, uint64_t* __t2141t) {
  int __t210t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t210t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2141t=z;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, char* from, char** __t2142t) {
  *__t2142t=to;
}

static inline __attribute__((always_inline)) void add__t674t(char* allocated, uint64_t offset, char** __t2143t) {
  char* element=0;
  char* __t675t__=0;
  element=allocated+offset;
  attach_type__t23t(element,allocated,&__t675t__);
  goto __t_return;
  __t_return:
  *__t2143t=__t675t__;
}

static inline __attribute__((always_inline)) int get__t821t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2144t) {
  char __t822t__=0;
  uint64_t __t823t__=0;
  uint64_t __t824t__=0;
  uint64_t __t825t__=0;
  uint64_t __t826t__=0;
  char* __t827t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t334t(i,buffer__unsafe_size,&__t822t__);
  if(__t822t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t676t(buffer__unsafe_align,&__t823t__);
  mul__t209t(i,__t823t__,&__t824t__);
  nat__t676t(buffer__unsafe_offset,&__t825t__);
  add__t185t(__t824t__,__t825t__,&__t826t__);
  add__t674t(buffer__unsafe_ptr,__t826t__,&__t827t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2144t=__t827t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t965t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2145t, uint64_t* __t2146t, uint64_t* __t2147t, char* __t2148t) {
  goto __t_return;
  __t_return:
  *__t2145t=unsafe_ptr;
  *__t2146t=dat__pos;
  *__t2147t=dat__length;
  *__t2148t=dat__first;
}

static inline __attribute__((always_inline)) int str__t969t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2149t, uint64_t* __t2150t, uint64_t* __t2151t, char* __t2152t) {
  char* unsafe_ptr=0;
  uint64_t __t970t__=0;
  uint64_t __t971t=0;
  char __t972t__=0;
  uint64_t __t973t__=0;
  uint64_t __t974t=0;
  char __t975t__=0;
  char* __t976t__unsafe_ptr=0;
  uint64_t __t976t__dat__pos=0;
  uint64_t __t976t__dat__length=0;
  char __t976t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t676t(buf__unsafe_align,&__t970t__);
  __t971t=1;
  neq__t154t(__t970t__,__t971t,&__t972t__);
  if(__t972t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t676t(buf__unsafe_offset,&__t973t__);
  __t974t=0;
  neq__t154t(__t973t__,__t974t,&__t975t__);
  if(__t975t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t965t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t976t__unsafe_ptr,&__t976t__dat__pos,&__t976t__dat__length,&__t976t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2149t=__t976t__unsafe_ptr;
  *__t2150t=__t976t__dat__pos;
  *__t2151t=__t976t__dat__length;
  *__t2152t=__t976t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1003t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2153t, uint64_t* __t2154t, uint64_t* __t2155t, char* __t2156t) {
  uint64_t __t1004t=0;
  char __t1005t__=0;
  char* __t1007t__=0;
  char __t1008t__value=0;
  char first=0;
  char* __t1009t__unsafe_ptr=0;
  uint64_t __t1009t__dat__pos=0;
  uint64_t __t1009t__dat__length=0;
  char __t1009t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1004t=0;
  neq__t154t(length,__t1004t,&__t1005t__);
  if(__t1005t__){
  __t_errcode=get__t821t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1007t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1007t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1008t__value,__t1007t__,1);
  first=__t1008t__value;
  }
  __t_errcode=str__t969t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1009t__unsafe_ptr,&__t1009t__dat__pos,&__t1009t__dat__length,&__t1009t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2153t=__t1009t__unsafe_ptr;
  *__t2154t=__t1009t__dat__pos;
  *__t2155t=__t1009t__dat__length;
  *__t2156t=__t1009t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1025t(const char* c, char** __t2157t, uint64_t* __t2158t, uint64_t* __t2159t, char* __t2160t) {
  char* __t1026t__unsafe_ptr=0;
  uint64_t __t1026t__unsafe_size=0;
  uint16_t __t1026t__unsafe_offset=0;
  uint16_t __t1026t__unsafe_align=0;
  char* __t1027t__unsafe_ptr=0;
  uint64_t __t1027t__unsafe_size=0;
  uint16_t __t1027t__unsafe_offset=0;
  uint16_t __t1027t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1028t__=0;
  uint64_t length=0;
  uint64_t __t1029t=0;
  uint64_t __t1030t__=0;
  uint64_t __t1031t=0;
  char* __t1033t__unsafe_ptr=0;
  uint64_t __t1033t__dat__pos=0;
  uint64_t __t1033t__dat__length=0;
  char __t1033t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t946t(&__t1026t__unsafe_ptr,&__t1026t__unsafe_size,&__t1026t__unsafe_offset,&__t1026t__unsafe_align);
  __t1027t__unsafe_ptr=__t1026t__unsafe_ptr;
  __t1027t__unsafe_size=__t1026t__unsafe_size;
  __t1027t__unsafe_offset=__t1026t__unsafe_offset;
  __t1027t__unsafe_align=__t1026t__unsafe_align;
  buf__unsafe_ptr=__t1027t__unsafe_ptr;
  buf__unsafe_size=__t1027t__unsafe_size;
  buf__unsafe_offset=__t1027t__unsafe_offset;
  buf__unsafe_align=__t1027t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t24t(buf__unsafe_ptr,c,&__t1028t__);
  buf__unsafe_ptr=__t1028t__;
  if(c){
  length=strlen(c);
  }
  __t1029t=1;
  add__t185t(length,__t1029t,&__t1030t__);
  buf__unsafe_size=__t1030t__;
  __t1031t=0;
  __t_errcode=str__t1003t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1031t,length,&__t1033t__unsafe_ptr,&__t1033t__dat__pos,&__t1033t__dat__length,&__t1033t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2157t=__t1033t__unsafe_ptr;
  *__t2158t=__t1033t__dat__pos;
  *__t2159t=__t1033t__dat__length;
  *__t2160t=__t1033t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1034t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2161t) {
  goto __t_return;
  __t_return:
  *__t2161t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t130t(uint64_t x, uint64_t y, char* __t2162t) {
  int __t131t__=0;
  char z=0;
  is_different__t104t(x,y,&__t131t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2162t=z;
}

static inline __attribute__((always_inline)) void get__t1160t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2163t) {
  uint64_t __t1161t__=0;
  char* __t1162t__=0;
  add__t185t(s__dat__pos,i,&__t1161t__);
  add__t674t(s__unsafe_ptr,__t1161t__,&__t1162t__);
  goto __t_return;
  __t_return:
  *__t2163t=__t1162t__;
}

static inline __attribute__((always_inline)) void char__t1036t(const char* s, char* __t2164t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t2164t=c;
}

static inline __attribute__((always_inline)) void eq__t1037t(char x, char y, char* __t2165t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t2165t=z;
}

static inline __attribute__((always_inline)) void lt__t262t(uint64_t x, uint64_t y, char* __t2166t) {
  int __t263t__=0;
  char z=0;
  is_different__t104t(x,y,&__t263t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2166t=z;
}

static inline __attribute__((always_inline)) void not__t29t(char value, char* __t2167t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2167t=z;
}

static inline __attribute__((always_inline)) void is_different__t72t(double x, double y, int* __t2168t) {
  int __t74t=0;
  int __t75t__=0;
  not__t38t(__t74t,&__t75t__);
  goto __t_return;
  __t_return:
  *__t2168t=__t75t__;
}

static inline __attribute__((always_inline)) void mul__t187t(double x, double y, double* __t2169t) {
  int __t188t__=0;
  double z=0;
  is_different__t72t(x,y,&__t188t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2169t=z;
}

static inline __attribute__((always_inline)) void add__t163t(double x, double y, double* __t2170t) {
  int __t164t__=0;
  double z=0;
  is_different__t72t(x,y,&__t164t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2170t=z;
}

static inline __attribute__((always_inline)) void sub__t336t(double x, double y, double* __t2171t) {
  int __t337t__=0;
  int __t338t=0;
  int __t339t=0;
  double z=0;
  is_different__t72t(x,y,&__t337t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t2171t=z;
}

static inline __attribute__((always_inline)) int float__t1990t(const char* _s, double* __t2172t) {
  char* __t1991t__unsafe_ptr=0;
  uint64_t __t1991t__dat__pos=0;
  uint64_t __t1991t__dat__length=0;
  char __t1991t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  uint64_t __t1992t=0;
  uint64_t __t1993t__=0;
  char __t1994t__=0;
  double __t1995t=0;
  double __t1996t=0;
  double number=0;
  uint64_t __t1997t=0;
  uint64_t __t1998t=0;
  uint64_t i=0;
  uint64_t __t1999t=0;
  uint64_t __t2000t__=0;
  char __t2001t__=0;
  uint64_t __t2002t=0;
  uint64_t __t2003t=0;
  uint64_t __t2004t=0;
  char* __t2006t__=0;
  char __t2007t__value=0;
  char __t2008t__=0;
  char __t2009t__=0;
  char negative=0;
  char* __t2015t__=0;
  char __t2016t__value=0;
  char __t2017t__=0;
  char __t2018t__=0;
  uint64_t __t2019t=0;
  uint64_t __t2020t__=0;
  uint64_t __t2021t__=0;
  char __t2022t__=0;
  uint64_t __t2010t=0;
  uint64_t __t2011t__=0;
  uint64_t __t2012t__=0;
  char __t2013t__=0;
  uint64_t __t2023t__=0;
  char __t2024t__=0;
  char* __t2026t__=0;
  char __t2027t__value=0;
  char c=0;
  char is_digit=0;
  double digit=0;
  char __t2028t__=0;
  char __t2029t__=0;
  char is_dot=0;
  uint64_t __t2030t=0;
  uint64_t __t2031t__=0;
  char __t2032t__=0;
  double __t2033t=0;
  double __t2034t__=0;
  double __t2035t__=0;
  uint64_t __t2036t=0;
  uint64_t __t2037t__=0;
  uint64_t __t2038t__=0;
  char __t2039t__=0;
  double __t2040t=0;
  double __t2041t=0;
  double base=0;
  uint64_t __t2042t__=0;
  char __t2043t__=0;
  char* __t2045t__=0;
  char __t2046t__value=0;
  char d=0;
  char is_decimal_digit=0;
  double decimal_digit=0;
  char __t2047t__=0;
  double __t2048t__=0;
  double __t2049t__=0;
  double __t2050t=0;
  double __t2051t__=0;
  uint64_t __t2052t=0;
  uint64_t __t2053t__=0;
  double __t2054t=0;
  double __t2055t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1025t(_s,&__t1991t__unsafe_ptr,&__t1991t__dat__pos,&__t1991t__dat__length,&__t1991t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__unsafe_ptr=__t1991t__unsafe_ptr;
  s__dat__pos=__t1991t__dat__pos;
  s__dat__length=__t1991t__dat__length;
  s__dat__first=__t1991t__dat__first;
  __t1992t=0;
  len__t1034t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t1993t__);
  eq__t130t(__t1992t,__t1993t__,&__t1994t__);
  if(__t1994t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t1995t=0.0;
  __t1996t=__t1995t;
  number=__t1996t;
  __t1997t=0;
  __t1998t=__t1997t;
  i=__t1998t;
  __t1999t=0;
  len__t1034t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t2000t__);
  eq__t130t(__t1999t,__t2000t__,&__t2001t__);
  if(__t2001t__){
  __t_errcode=31;
  goto __t_failure;
  }
  __t2002t=0;
  __t2003t=__t2002t;
  i=__t2003t;
  __t2004t=0;
  get__t1160t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,__t2004t,&__t2006t__);
  if(!__t2006t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2007t__value,__t2006t__,1);
  char__t1036t(__t1674t,&__t2008t__);
  eq__t1037t(__t2007t__value,__t2008t__,&__t2009t__);
  negative=__t2009t__;
  if(negative){
  __t2010t=1;
  add__t185t(i,__t2010t,&__t2011t__);
  i=__t2011t__;
  len__t1034t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t2012t__);
  eq__t130t(i,__t2012t__,&__t2013t__);
  if(__t2013t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  else{
  get__t1160t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t2015t__);
  if(!__t2015t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2016t__value,__t2015t__,1);
  char__t1036t(__t1677t,&__t2017t__);
  eq__t1037t(__t2016t__value,__t2017t__,&__t2018t__);
  if(__t2018t__){
  __t2019t=1;
  add__t185t(i,__t2019t,&__t2020t__);
  i=__t2020t__;
  len__t1034t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t2021t__);
  eq__t130t(i,__t2021t__,&__t2022t__);
  if(__t2022t__){
  __t_errcode=32;
  goto __t_failure;
  }
  }
  }
  while(1){
  len__t1034t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t2023t__);
  lt__t262t(i,__t2023t__,&__t2024t__);
  if(!__t2024t__){
  break;
  }
  get__t1160t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t2026t__);
  if(!__t2026t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2027t__value,__t2026t__,1);
  c=__t2027t__value;
  is_digit=c>='0'&&c<='9';
  digit=c-'0';
  char__t1036t(__t1768t,&__t2028t__);
  eq__t1037t(c,__t2028t__,&__t2029t__);
  is_dot=__t2029t__;
  if(is_dot){
  __t2030t=1;
  add__t185t(i,__t2030t,&__t2031t__);
  i=__t2031t__;
  break;
  }
  not__t29t(is_digit,&__t2032t__);
  if(__t2032t__){
  __t_errcode=33;
  goto __t_failure;
  }
  __t2033t=10.0;
  mul__t187t(number,__t2033t,&__t2034t__);
  add__t163t(__t2034t__,digit,&__t2035t__);
  number=__t2035t__;
  __t2036t=1;
  add__t185t(i,__t2036t,&__t2037t__);
  i=__t2037t__;
  }
  if(is_dot){
  len__t1034t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t2038t__);
  eq__t130t(i,__t2038t__,&__t2039t__);
  if(__t2039t__){
  __t_errcode=34;
  goto __t_failure;
  }
  __t2040t=0.1;
  __t2041t=__t2040t;
  base=__t2041t;
  while(1){
  len__t1034t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,&__t2042t__);
  lt__t262t(i,__t2042t__,&__t2043t__);
  if(!__t2043t__){
  break;
  }
  get__t1160t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,i,&__t2045t__);
  if(!__t2045t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2046t__value,__t2045t__,1);
  d=__t2046t__value;
  is_decimal_digit=d>='0'&&d<='9';
  decimal_digit=d-'0';
  not__t29t(is_decimal_digit,&__t2047t__);
  if(__t2047t__){
  __t_errcode=33;
  goto __t_failure;
  }
  mul__t187t(decimal_digit,base,&__t2048t__);
  add__t163t(number,__t2048t__,&__t2049t__);
  number=__t2049t__;
  __t2050t=0.1;
  mul__t187t(base,__t2050t,&__t2051t__);
  base=__t2051t__;
  __t2052t=1;
  add__t185t(i,__t2052t,&__t2053t__);
  i=__t2053t__;
  }
  }
  if(negative){
  __t2054t=0.0;
  sub__t336t(__t2054t,number,&__t2055t__);
  number=__t2055t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2172t=number;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t396t(double value) {
  int __t397t=0;
  const char* endl=0;
  endl=__t393t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2123t() {
  double __t2127t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t376t();
  __t_errcode=float__t1990t(__t2126t,&__t2127t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t396t(__t2127t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2123t();return 0;}