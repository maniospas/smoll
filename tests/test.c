#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t391t="\n";
const char* const __t2141t="▶ hello";
const char* const __t2159t="here";
static const char* __t_all_errcodes[35] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
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

static inline __attribute__((always_inline)) void console__t374t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t947t(char** __t2168t, uint64_t* __t2169t, uint16_t* __t2170t, uint16_t* __t2171t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2168t=unsafe_ptr;
  *__t2169t=unsafe_size;
  *__t2170t=unsafe_offset;
  *__t2171t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2172t) {
  *__t2172t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2173t) {
  int value=0;
  *__t2173t=value;
}

static inline __attribute__((always_inline)) void not__t45t(int __t_anon0, int* __t2174t) {
  int __t46t__=0;
  false__t14t(&__t46t__);
  goto __t_return;
  __t_return:
  *__t2174t=__t46t__;
}

static inline __attribute__((always_inline)) void is_different__t103t(uint64_t x, uint64_t y, int* __t2175t) {
  int __t104t=0;
  int __t105t__=0;
  not__t45t(__t104t,&__t105t__);
  goto __t_return;
  __t_return:
  *__t2175t=__t105t__;
}

static inline __attribute__((always_inline)) void add__t183t(uint64_t x, uint64_t y, uint64_t* __t2176t) {
  int __t184t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t184t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2176t=z;
}

static inline __attribute__((always_inline)) void neq__t152t(uint64_t x, uint64_t y, char* __t2177t) {
  int __t153t__=0;
  char z=0;
  is_different__t103t(x,y,&__t153t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2177t=z;
}

static inline __attribute__((always_inline)) void ge__t332t(uint64_t x, uint64_t y, char* __t2178t) {
  int __t333t__=0;
  char z=0;
  is_different__t103t(x,y,&__t333t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2178t=z;
}

static inline __attribute__((always_inline)) void nat__t674t(uint16_t x, uint64_t* __t2179t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2179t=value;
}

static inline __attribute__((always_inline)) void mul__t207t(uint64_t x, uint64_t y, uint64_t* __t2180t) {
  int __t208t__=0;
  uint64_t z=0;
  is_different__t103t(x,y,&__t208t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2180t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2181t) {
  *__t2181t=to;
}

static inline __attribute__((always_inline)) void add__t672t(char* allocated, uint64_t offset, char** __t2182t) {
  char* element=0;
  char* __t673t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t673t__);
  goto __t_return;
  __t_return:
  *__t2182t=__t673t__;
}

static inline __attribute__((always_inline)) int get__t819t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2183t) {
  char __t820t__=0;
  uint64_t __t821t__=0;
  uint64_t __t822t__=0;
  uint64_t __t823t__=0;
  uint64_t __t824t__=0;
  char* __t825t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t332t(i,buffer__unsafe_size,&__t820t__);
  if(__t820t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t674t(buffer__unsafe_align,&__t821t__);
  mul__t207t(i,__t821t__,&__t822t__);
  nat__t674t(buffer__unsafe_offset,&__t823t__);
  add__t183t(__t822t__,__t823t__,&__t824t__);
  add__t672t(buffer__unsafe_ptr,__t824t__,&__t825t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2183t=__t825t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t969t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2184t, uint64_t* __t2185t, uint64_t* __t2186t, char* __t2187t) {
  goto __t_return;
  __t_return:
  *__t2184t=unsafe_ptr;
  *__t2185t=dat__pos;
  *__t2186t=dat__length;
  *__t2187t=dat__first;
}

static inline __attribute__((always_inline)) int str__t973t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2188t, uint64_t* __t2189t, uint64_t* __t2190t, char* __t2191t) {
  char* unsafe_ptr=0;
  uint64_t __t974t__=0;
  uint64_t __t975t=0;
  char __t976t__=0;
  uint64_t __t977t__=0;
  uint64_t __t978t=0;
  char __t979t__=0;
  char* __t980t__unsafe_ptr=0;
  uint64_t __t980t__dat__pos=0;
  uint64_t __t980t__dat__length=0;
  char __t980t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t674t(buf__unsafe_align,&__t974t__);
  __t975t=1;
  neq__t152t(__t974t__,__t975t,&__t976t__);
  if(__t976t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t674t(buf__unsafe_offset,&__t977t__);
  __t978t=0;
  neq__t152t(__t977t__,__t978t,&__t979t__);
  if(__t979t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t969t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t980t__unsafe_ptr,&__t980t__dat__pos,&__t980t__dat__length,&__t980t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2188t=__t980t__unsafe_ptr;
  *__t2189t=__t980t__dat__pos;
  *__t2190t=__t980t__dat__length;
  *__t2191t=__t980t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1007t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2192t, uint64_t* __t2193t, uint64_t* __t2194t, char* __t2195t) {
  uint64_t __t1008t=0;
  char __t1009t__=0;
  char* __t1011t__=0;
  char __t1012t__value=0;
  char first=0;
  char* __t1013t__unsafe_ptr=0;
  uint64_t __t1013t__dat__pos=0;
  uint64_t __t1013t__dat__length=0;
  char __t1013t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1008t=0;
  neq__t152t(length,__t1008t,&__t1009t__);
  if(__t1009t__){
  __t_errcode=get__t819t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1011t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1011t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1012t__value,__t1011t__,1);
  first=__t1012t__value;
  }
  __t_errcode=str__t973t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1013t__unsafe_ptr,&__t1013t__dat__pos,&__t1013t__dat__length,&__t1013t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2192t=__t1013t__unsafe_ptr;
  *__t2193t=__t1013t__dat__pos;
  *__t2194t=__t1013t__dat__length;
  *__t2195t=__t1013t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1029t(const char* c, char** __t2196t, uint64_t* __t2197t, uint64_t* __t2198t, char* __t2199t) {
  char* __t1030t__unsafe_ptr=0;
  uint64_t __t1030t__unsafe_size=0;
  uint16_t __t1030t__unsafe_offset=0;
  uint16_t __t1030t__unsafe_align=0;
  char* __t1031t__unsafe_ptr=0;
  uint64_t __t1031t__unsafe_size=0;
  uint16_t __t1031t__unsafe_offset=0;
  uint16_t __t1031t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1032t__=0;
  uint64_t length=0;
  uint64_t __t1033t=0;
  uint64_t __t1034t__=0;
  uint64_t __t1035t=0;
  char* __t1037t__unsafe_ptr=0;
  uint64_t __t1037t__dat__pos=0;
  uint64_t __t1037t__dat__length=0;
  char __t1037t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t947t(&__t1030t__unsafe_ptr,&__t1030t__unsafe_size,&__t1030t__unsafe_offset,&__t1030t__unsafe_align);
  __t1031t__unsafe_ptr=__t1030t__unsafe_ptr;
  __t1031t__unsafe_size=__t1030t__unsafe_size;
  __t1031t__unsafe_offset=__t1030t__unsafe_offset;
  __t1031t__unsafe_align=__t1030t__unsafe_align;
  buf__unsafe_ptr=__t1031t__unsafe_ptr;
  buf__unsafe_size=__t1031t__unsafe_size;
  buf__unsafe_offset=__t1031t__unsafe_offset;
  buf__unsafe_align=__t1031t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1032t__);
  buf__unsafe_ptr=__t1032t__;
  if(c){
  length=strlen(c);
  }
  __t1033t=1;
  add__t183t(length,__t1033t,&__t1034t__);
  buf__unsafe_size=__t1034t__;
  __t1035t=0;
  __t_errcode=str__t1007t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1035t,length,&__t1037t__unsafe_ptr,&__t1037t__dat__pos,&__t1037t__dat__length,&__t1037t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2196t=__t1037t__unsafe_ptr;
  *__t2197t=__t1037t__dat__pos;
  *__t2198t=__t1037t__dat__length;
  *__t2199t=__t1037t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1038t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2200t) {
  goto __t_return;
  __t_return:
  *__t2200t=s__dat__length;
}

static inline __attribute__((always_inline)) void lt__t260t(uint64_t x, uint64_t y, char* __t2201t) {
  int __t261t__=0;
  char z=0;
  is_different__t103t(x,y,&__t261t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2201t=z;
}

static inline __attribute__((always_inline)) void get__t1165t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t2202t) {
  uint64_t __t1166t__=0;
  char* __t1167t__=0;
  add__t183t(s__dat__pos,i,&__t1166t__);
  add__t672t(s__unsafe_ptr,__t1166t__,&__t1167t__);
  goto __t_return;
  __t_return:
  *__t2202t=__t1167t__;
}

static inline __attribute__((always_inline)) void nat8__t2136t(char x, uint8_t* __t2203t) {
  uint8_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2203t=value;
}

static inline __attribute__((always_inline)) void nat__t2137t(uint8_t x, uint64_t* __t2204t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2204t=value;
}

static inline __attribute__((always_inline)) void print__t406t(char value) {
  int __t407t=0;
  const char* endl=0;
  endl=__t391t;
  if(value){
  printf("%s%s","true",endl);
  }
  else{
  printf("%s%s","false",endl);
  }
}

static inline __attribute__((always_inline)) void print__t389t(const char* value) {
  int __t390t=0;
  const char* endl=0;
  endl=__t391t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void unsafe_singletons__t18t() {
}

static inline __attribute__((always_inline)) void unsafe_console__t377t() {
  console__t374t();
  unsafe_singletons__t18t();
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void print__t402t(uint64_t value) {
  int __t403t=0;
  const char* endl=0;
  endl=__t391t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2138t() {
  char* __t2142t__unsafe_ptr=0;
  uint64_t __t2142t__dat__pos=0;
  uint64_t __t2142t__dat__length=0;
  char __t2142t__dat__first=0;
  char* text__unsafe_ptr=0;
  uint64_t text__dat__pos=0;
  uint64_t text__dat__length=0;
  char text__dat__first=0;
  uint64_t __t2143t=0;
  uint64_t __t2144t=0;
  uint64_t pos=0;
  uint64_t __t2145t__=0;
  char __t2146t__=0;
  char* __t2148t__=0;
  char __t2149t__value=0;
  uint8_t __t2150t__=0;
  uint64_t __t2151t__=0;
  uint64_t ch=0;
  uint64_t __t2152t=0;
  char __t2153t__=0;
  char t1=0;
  uint64_t __t2154t=0;
  char __t2155t__=0;
  char t2=0;
  char __t2158t=0;
  uint64_t __t2162t=0;
  uint64_t character_size=0;
  uint64_t __t2161t=0;
  uint64_t __t2167t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t374t();
  __t_errcode=str__t1029t(__t2141t,&__t2142t__unsafe_ptr,&__t2142t__dat__pos,&__t2142t__dat__length,&__t2142t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  text__unsafe_ptr=__t2142t__unsafe_ptr;
  text__dat__pos=__t2142t__dat__pos;
  text__dat__length=__t2142t__dat__length;
  text__dat__first=__t2142t__dat__first;
  __t2143t=0;
  __t2144t=__t2143t;
  pos=__t2144t;
  while(1){
  len__t1038t(text__unsafe_ptr,text__dat__pos,text__dat__length,text__dat__first,&__t2145t__);
  lt__t260t(pos,__t2145t__,&__t2146t__);
  if(!__t2146t__){
  break;
  }
  get__t1165t(text__unsafe_ptr,text__dat__pos,text__dat__length,text__dat__first,pos,&__t2148t__);
  if(!__t2148t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2149t__value,__t2148t__,1);
  nat8__t2136t(__t2149t__value,&__t2150t__);
  nat__t2137t(__t2150t__,&__t2151t__);
  ch=__t2151t__;
  __t2152t=224;
  ge__t332t(ch,__t2152t,&__t2153t__);
  t1=__t2153t__;
  __t2154t=224;
  ge__t332t(ch,__t2154t,&__t2155t__);
  t2=__t2155t__;
  print__t406t(t1);
  print__t406t(t2);
  if(t1){
  __t2158t=t2;
  }
  else{
  __t2158t=0;
  }
  if(__t2158t){
  print__t389t(__t2159t);
  __t2161t=3;
  character_size=__t2161t;
  }
  else{
  __t2162t=1;
  character_size=__t2162t;
  }
  unsafe_console__t377t();
  print__t402t(character_size);
  unsafe_console__t377t();
  print__t402t(ch);
  add__t183t(pos,character_size,&__t2167t__);
  pos=__t2167t__;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2138t();return 0;}