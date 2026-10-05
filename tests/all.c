#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5799t="PASSING ";
const char* const __t5740t="--testback";
const char* const __t4375t="[";
const char* const __t5818t=" tests";
const char* const __t5804t="no errors across ";
const char* const __t5744t=" --cleanup ";
const char* const __t463t="";
const char* const __t5809t="FAILED ";
const char* const __t5771t="/";
const char* const __t5556t="failure";
const char* const __t5546t="] ";
const char* const __t5678t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t5597t=" |- ";
const char* const __t5742t="./smoll --back ";
const char* const __t5785t="_fail_";
const char* const __t5778t=".s";
const char* const __t5814t=" out of ";
const char* const __t5751t="./smoll --cleanup ";
const char* const __t5536t="success";
const char* const __t5539t="V";
const char* const __t5688t="completed";
const char* const __t5559t="X";
const char* const __t5730t="./tests/passing/";
const char* const __t475t="\n";
const char* const __t5762t="..";
static const char* __t_all_errcodes[67] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32",
"slice start cannot be greater than slice end",
"cannot slice beyond 64 bits",
"slice start cannot be greater than or equal to slice end",
"value does not fit in bit slice",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot allocate a buffer of unsized type",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"arena is out of space",
"does not fit in circular arena",
"linkedmem allocation multiple must be at least 1",
"cannot create a linkedmem using an allocated buffer as prototype",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"not found",
"unexpected end of console read",
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
"imbalanced brackets",
"arg not found",
"interrupted by user",
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"unsanitized command: shell metacharacter detected",
"system call failed",
"failed to open file",
"failed to create file",
"cannot open a new terminal in the current environment",
"failed to open new terminal",
"failed to move to start of closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to flush file contents",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir",
"assert failed",
"tests failed"
};
int add__t3556t(char** __t6126t, uint64_t* __t6127t, uint32_t* __t6128t, uint32_t* __t6129t, uint64_t* __t6130t, const char* _s1, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t6131t, uint64_t* __t6132t, uint64_t* __t6133t, char* __t6134t) ;
int add__t3554t(char** __t6135t, uint64_t* __t6136t, uint32_t* __t6137t, uint32_t* __t6138t, uint64_t* __t6139t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t6140t, uint64_t* __t6141t, uint64_t* __t6142t, char* __t6143t) ;
int add__t3552t(char** __t6197t, uint64_t* __t6198t, uint32_t* __t6199t, uint32_t* __t6200t, uint64_t* __t6201t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t6202t, uint64_t* __t6203t, uint64_t* __t6204t, char* __t6205t) ;
static inline __attribute__((always_inline)) void console__t448t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1805t(char** __t5979t, uint64_t* __t5980t, uint32_t* __t5981t, uint32_t* __t5982t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5979t=unsafe_ptr;
  *__t5980t=unsafe_size;
  *__t5981t=unsafe_offset;
  *__t5982t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5983t) {
  *__t5983t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5984t) {
  int value=0;
  *__t5984t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5985t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5985t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5986t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5986t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5987t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5987t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5988t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5988t=z;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t5989t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5989t=z;
}

static inline __attribute__((always_inline)) void nat__t724t(uint32_t x, uint64_t* __t5990t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5990t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5991t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5991t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5992t) {
  *__t5992t=to;
}

static inline __attribute__((always_inline)) void add__t846t(char* allocated, uint64_t offset, char** __t5993t) {
  char* element=0;
  char* __t847t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t847t__);
  goto __t_return;
  __t_return:
  *__t5993t=__t847t__;
}

static inline __attribute__((always_inline)) int get__t1191t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5994t) {
  int __t1192t=0;
  char __t1193t__=0;
  uint64_t __t1194t__=0;
  uint64_t __t1195t__=0;
  uint64_t __t1196t__=0;
  uint64_t __t1197t__=0;
  char* __t1198t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,buffer__unsafe_size,&__t1193t__);
  if(__t1193t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t1194t__);
  mul__t212t(i,__t1194t__,&__t1195t__);
  nat__t724t(buffer__unsafe_offset,&__t1196t__);
  add__t188t(__t1195t__,__t1196t__,&__t1197t__);
  add__t846t(buffer__unsafe_ptr,__t1197t__,&__t1198t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5994t=__t1198t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1844t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5995t, uint64_t* __t5996t, uint64_t* __t5997t, char* __t5998t) {
  goto __t_return;
  __t_return:
  *__t5995t=unsafe_ptr;
  *__t5996t=dat__pos;
  *__t5997t=dat__length;
  *__t5998t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1848t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5999t, uint64_t* __t6000t, uint64_t* __t6001t, char* __t6002t) {
  char* unsafe_ptr=0;
  uint64_t __t1849t__=0;
  uint64_t __t1850t=0;
  char __t1851t__=0;
  uint64_t __t1852t__=0;
  uint64_t __t1853t=0;
  char __t1854t__=0;
  char* __t1855t__unsafe_ptr=0;
  uint64_t __t1855t__dat__pos=0;
  uint64_t __t1855t__dat__length=0;
  char __t1855t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t724t(buf__unsafe_align,&__t1849t__);
  __t1850t=1;
  neq__t158t(__t1849t__,__t1850t,&__t1851t__);
  if(__t1851t__){
  __t_errcode=27;
  goto __t_failure;
  }
  nat__t724t(buf__unsafe_offset,&__t1852t__);
  __t1853t=0;
  neq__t158t(__t1852t__,__t1853t,&__t1854t__);
  if(__t1854t__){
  __t_errcode=28;
  goto __t_failure;
  }
  str__t1844t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1855t__unsafe_ptr,&__t1855t__dat__pos,&__t1855t__dat__length,&__t1855t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5999t=__t1855t__unsafe_ptr;
  *__t6000t=__t1855t__dat__pos;
  *__t6001t=__t1855t__dat__length;
  *__t6002t=__t1855t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1882t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t6003t, uint64_t* __t6004t, uint64_t* __t6005t, char* __t6006t) {
  uint64_t __t1883t=0;
  char __t1884t__=0;
  char* __t1886t__=0;
  char __t1887t__value=0;
  char first=0;
  char* __t1888t__unsafe_ptr=0;
  uint64_t __t1888t__dat__pos=0;
  uint64_t __t1888t__dat__length=0;
  char __t1888t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1883t=0;
  neq__t158t(length,__t1883t,&__t1884t__);
  if(__t1884t__){
  __t_errcode=get__t1191t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1886t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1886t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1887t__value,__t1886t__,1);
  first=__t1887t__value;
  }
  __t_errcode=str__t1848t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1888t__unsafe_ptr,&__t1888t__dat__pos,&__t1888t__dat__length,&__t1888t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6003t=__t1888t__unsafe_ptr;
  *__t6004t=__t1888t__dat__pos;
  *__t6005t=__t1888t__dat__length;
  *__t6006t=__t1888t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1904t(const char* c, char** __t6007t, uint64_t* __t6008t, uint64_t* __t6009t, char* __t6010t) {
  char* __t1905t__unsafe_ptr=0;
  uint64_t __t1905t__unsafe_size=0;
  uint32_t __t1905t__unsafe_offset=0;
  uint32_t __t1905t__unsafe_align=0;
  char* __t1906t__unsafe_ptr=0;
  uint64_t __t1906t__unsafe_size=0;
  uint32_t __t1906t__unsafe_offset=0;
  uint32_t __t1906t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1907t__=0;
  uint64_t length=0;
  uint64_t __t1908t=0;
  uint64_t __t1909t__=0;
  char __t1910t=0;
  uint64_t __t1911t=0;
  char* __t1913t__unsafe_ptr=0;
  uint64_t __t1913t__dat__pos=0;
  uint64_t __t1913t__dat__length=0;
  char __t1913t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1805t(&__t1905t__unsafe_ptr,&__t1905t__unsafe_size,&__t1905t__unsafe_offset,&__t1905t__unsafe_align);
  __t1906t__unsafe_ptr=__t1905t__unsafe_ptr;
  __t1906t__unsafe_size=__t1905t__unsafe_size;
  __t1906t__unsafe_offset=__t1905t__unsafe_offset;
  __t1906t__unsafe_align=__t1905t__unsafe_align;
  buf__unsafe_ptr=__t1906t__unsafe_ptr;
  buf__unsafe_size=__t1906t__unsafe_size;
  buf__unsafe_offset=__t1906t__unsafe_offset;
  buf__unsafe_align=__t1906t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1907t__);
  buf__unsafe_ptr=__t1907t__;
  if(c){
  length=strlen(c);
  }
  __t1908t=1;
  add__t188t(length,__t1908t,&__t1909t__);
  buf__unsafe_size=__t1909t__;
  __t1911t=0;
  __t_complain=str__t1882t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1911t,length,&__t1913t__unsafe_ptr,&__t1913t__dat__pos,&__t1913t__dat__length,&__t1913t__dat__first);
  __t1910t=__t_complain;
  if(__t_complain){
  goto __t1910t__label;
  }
  ret__unsafe_ptr=__t1913t__unsafe_ptr;
  ret__dat__pos=__t1913t__dat__pos;
  ret__dat__length=__t1913t__dat__length;
  ret__dat__first=__t1913t__dat__first;
  __t1910t__label:__t1910t=__t1910t==0;
  goto __t_return;
  __t_return:
  *__t6007t=ret__unsafe_ptr;
  *__t6008t=ret__dat__pos;
  *__t6009t=ret__dat__length;
  *__t6010t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t500t(char* __t6011t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t6011t=supports;
}

static inline __attribute__((always_inline)) void colors__t501t(char* __t6012t) {
  char __t502t__=0;
  char initialized=0;
  supports_ansi__t500t(&__t502t__);
  initialized=__t502t__;
  goto __t_return;
  __t_return:
  *__t6012t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1128t(char** __t6013t, uint64_t* __t6014t, uint32_t* __t6015t, uint32_t* __t6016t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t6013t=unsafe_ptr;
  *__t6014t=unsafe_size;
  *__t6015t=unsafe_offset;
  *__t6016t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t844t(char** __t6017t) {
  char* allocated=*__t6017t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t6017t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t6018t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6018t=z;
}

static inline __attribute__((always_inline)) void zero__t845t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t683t(char* x, char* __t6019t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6019t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t6020t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6020t=z;
}

static inline __attribute__((always_inline)) int alloc__t828t(uint64_t bytes, char** __t6021t) {
  char* allocated=0;
  char __t829t__=0;
  char __t830t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t683t(allocated,&__t829t__);
  not__t42t(__t829t__,&__t830t__);
  if(__t830t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6021t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t971t(char** __t6022t, uint64_t* __t6023t, uint32_t* __t6024t, uint32_t* __t6025t, uint64_t size, char** __t6026t, uint64_t* __t6027t, uint32_t* __t6028t, uint32_t* __t6029t) {
  char* buffer__unsafe_ptr=*__t6022t;
  uint64_t buffer__unsafe_size=*__t6023t;
  uint32_t buffer__unsafe_offset=*__t6024t;
  uint32_t buffer__unsafe_align=*__t6025t;
  int __t972t=0;
  int __t973t=0;
  char __t975t__=0;
  uint64_t __t976t=0;
  char __t977t__=0;
  char __t978t=0;
  uint64_t __t979t=0;
  uint64_t __t980t__=0;
  uint64_t __t981t__=0;
  int __t983t=0;
  uint64_t __t984t=0;
  char __t985t__=0;
  uint64_t __t986t__=0;
  uint64_t __t987t__=0;
  uint64_t bytes=0;
  int __t988t=0;
  uint64_t __t989t=0;
  char __t990t__=0;
  char* __t991t__=0;
  int __t992t=0;
  uint64_t __t993t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t975t__);
  if(__t975t__){
  __t976t=0;
  neq__t158t(size,__t976t,&__t977t__);
  __t978t=__t977t__;
  }
  if(__t978t){
  __t979t=0;
  nat__t724t(buffer__unsafe_align,&__t980t__);
  mul__t212t(__t980t__,size,&__t981t__);
  zero__t845t(buffer__unsafe_ptr,__t979t,__t981t__);
  goto __t_return;
  }
  __t984t=0;
  neq__t158t(buffer__unsafe_size,__t984t,&__t985t__);
  if(__t985t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t986t__);
  mul__t212t(__t986t__,size,&__t987t__);
  bytes=__t987t__;
  __t989t=0;
  eq__t134t(bytes,__t989t,&__t990t__);
  if(__t990t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t828t(bytes,&__t991t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t993t=0;
  zero__t845t(__t991t__,__t993t,bytes);
  buffer__unsafe_ptr=__t991t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t844t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6022t=buffer__unsafe_ptr;
  *__t6023t=buffer__unsafe_size;
  *__t6024t=buffer__unsafe_offset;
  *__t6025t=buffer__unsafe_align;
  *__t6026t=buffer__unsafe_ptr;
  *__t6027t=buffer__unsafe_size;
  *__t6028t=buffer__unsafe_offset;
  *__t6029t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int alloc__t1126t(uint64_t size, char** __t6030t, uint64_t* __t6031t, uint32_t* __t6032t, uint32_t* __t6033t) {
  char __t1127t=0;
  char* __t1130t__unsafe_ptr=0;
  uint64_t __t1130t__unsafe_size=0;
  uint32_t __t1130t__unsafe_offset=0;
  uint32_t __t1130t__unsafe_align=0;
  char* __t1131t__unsafe_ptr=0;
  uint64_t __t1131t__unsafe_size=0;
  uint32_t __t1131t__unsafe_offset=0;
  uint32_t __t1131t__unsafe_align=0;
  char* __t1133t__unsafe_ptr=0;
  uint64_t __t1133t__unsafe_size=0;
  uint32_t __t1133t__unsafe_offset=0;
  uint32_t __t1133t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  char __t1134t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1128t(&__t1130t__unsafe_ptr,&__t1130t__unsafe_size,&__t1130t__unsafe_offset,&__t1130t__unsafe_align);
  __t_complain=alloc__t971t(&__t1130t__unsafe_ptr,&__t1130t__unsafe_size,&__t1130t__unsafe_offset,&__t1130t__unsafe_align,size,&__t1131t__unsafe_ptr,&__t1131t__unsafe_size,&__t1131t__unsafe_offset,&__t1131t__unsafe_align);
  __t1127t=__t_complain;
  if(__t_complain){
  goto __t1127t__label;
  }
  __t1133t__unsafe_ptr=__t1131t__unsafe_ptr;
  __t1133t__unsafe_size=__t1131t__unsafe_size;
  __t1133t__unsafe_offset=__t1131t__unsafe_offset;
  __t1133t__unsafe_align=__t1131t__unsafe_align;
  ret__unsafe_ptr=__t1133t__unsafe_ptr;
  ret__unsafe_size=__t1133t__unsafe_size;
  ret__unsafe_offset=__t1133t__unsafe_offset;
  ret__unsafe_align=__t1133t__unsafe_align;
  __t1127t__label:__t1127t=__t1127t==0;
  not__t42t(__t1127t,&__t1134t__);
  if(__t1134t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t844t(&ret__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6030t=ret__unsafe_ptr;
  *__t6031t=ret__unsafe_size;
  *__t6032t=ret__unsafe_offset;
  *__t6033t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1458t(char** __t6034t, uint64_t* __t6035t, uint32_t* __t6036t, uint32_t* __t6037t, uint64_t _pos, char** __t6038t, uint64_t* __t6039t, uint32_t* __t6040t, uint32_t* __t6041t, uint64_t* __t6042t) {
  char* buf__unsafe_ptr=*__t6034t;
  uint64_t buf__unsafe_size=*__t6035t;
  uint32_t buf__unsafe_offset=*__t6036t;
  uint32_t buf__unsafe_align=*__t6037t;
  uint64_t __t1459t=0;
  uint64_t pos=0;
  __t1459t=_pos;
  pos=__t1459t;
  goto __t_return;
  __t_return:
  *__t6034t=buf__unsafe_ptr;
  *__t6035t=buf__unsafe_size;
  *__t6036t=buf__unsafe_offset;
  *__t6037t=buf__unsafe_align;
  *__t6038t=buf__unsafe_ptr;
  *__t6039t=buf__unsafe_size;
  *__t6040t=buf__unsafe_offset;
  *__t6041t=buf__unsafe_align;
  *__t6042t=pos;
}

static inline __attribute__((always_inline)) void arena__t1461t(char** __t6043t, uint64_t* __t6044t, uint32_t* __t6045t, uint32_t* __t6046t, char** __t6047t, uint64_t* __t6048t, uint32_t* __t6049t, uint32_t* __t6050t, uint64_t* __t6051t) {
  char* buf__unsafe_ptr=*__t6043t;
  uint64_t buf__unsafe_size=*__t6044t;
  uint32_t buf__unsafe_offset=*__t6045t;
  uint32_t buf__unsafe_align=*__t6046t;
  uint64_t __t1462t=0;
  char* __t1463t__buf__unsafe_ptr=0;
  uint64_t __t1463t__buf__unsafe_size=0;
  uint32_t __t1463t__buf__unsafe_offset=0;
  uint32_t __t1463t__buf__unsafe_align=0;
  uint64_t __t1463t__pos=0;
  __t1462t=0;
  arena__t1458t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1462t,&__t1463t__buf__unsafe_ptr,&__t1463t__buf__unsafe_size,&__t1463t__buf__unsafe_offset,&__t1463t__buf__unsafe_align,&__t1463t__pos);
  goto __t_return;
  __t_return:
  *__t6043t=buf__unsafe_ptr;
  *__t6044t=buf__unsafe_size;
  *__t6045t=buf__unsafe_offset;
  *__t6046t=buf__unsafe_align;
  *__t6047t=__t1463t__buf__unsafe_ptr;
  *__t6048t=__t1463t__buf__unsafe_size;
  *__t6049t=__t1463t__buf__unsafe_offset;
  *__t6050t=__t1463t__buf__unsafe_align;
  *__t6051t=__t1463t__pos;
}

static inline __attribute__((always_inline)) void argument____t_buffer____buffer__t4500t(char** __t6052t, uint64_t* __t6053t, uint32_t* __t6054t, uint32_t* __t6055t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t6052t=unsafe_ptr;
  *__t6053t=unsafe_size;
  *__t6054t=unsafe_offset;
  *__t6055t=unsafe_align;
}

static inline __attribute__((always_inline)) void args__t4499t(char** __t6056t, uint64_t* __t6057t, uint32_t* __t6058t, uint32_t* __t6059t) {
  char* __t4502t__unsafe_ptr=0;
  uint64_t __t4502t__unsafe_size=0;
  uint32_t __t4502t__unsafe_offset=0;
  uint32_t __t4502t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  argument____t_buffer____buffer__t4500t(&__t4502t__unsafe_ptr,&__t4502t__unsafe_size,&__t4502t__unsafe_offset,&__t4502t__unsafe_align);
  ret__unsafe_ptr=__t4502t__unsafe_ptr;
  ret__unsafe_size=__t4502t__unsafe_size;
  ret__unsafe_offset=__t4502t__unsafe_offset;
  ret__unsafe_align=__t4502t__unsafe_align;
  ret__unsafe_ptr=(char*)__t_argv;
  ret__unsafe_size=__t_argc;
  goto __t_return;
  __t_return:
  *__t6056t=ret__unsafe_ptr;
  *__t6057t=ret__unsafe_size;
  *__t6058t=ret__unsafe_offset;
  *__t6059t=ret__unsafe_align;
}

void str__t4497t(const char* arg__unsafe_value, char** __t6060t, uint64_t* __t6061t, uint64_t* __t6062t, char* __t6063t) {
  char* __t4498t__unsafe_ptr=0;
  uint64_t __t4498t__dat__pos=0;
  uint64_t __t4498t__dat__length=0;
  char __t4498t__dat__first=0;
  str__t1904t(arg__unsafe_value,&__t4498t__unsafe_ptr,&__t4498t__dat__pos,&__t4498t__dat__length,&__t4498t__dat__first);
  goto __t_return;
  __t_return:
  *__t6060t=__t4498t__unsafe_ptr;
  *__t6061t=__t4498t__dat__pos;
  *__t6062t=__t4498t__dat__length;
  *__t6063t=__t4498t__dat__first;
}

void char__t1916t(const char* s, char* __t6064t) {
  char* __t1917t__unsafe_ptr=0;
  uint64_t __t1917t__dat__pos=0;
  uint64_t __t1917t__dat__length=0;
  char __t1917t__dat__first=0;
  str__t1904t(s,&__t1917t__unsafe_ptr,&__t1917t__dat__pos,&__t1917t__dat__length,&__t1917t__dat__first);
  goto __t_return;
  __t_return:
  *__t6064t=__t1917t__dat__first;
}

static inline __attribute__((always_inline)) void neq__t1919t(char x, char y, char* __t6065t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t6065t=z;
}

static inline __attribute__((always_inline)) void len__t1914t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t6066t) {
  goto __t_return;
  __t_return:
  *__t6066t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t2078t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t6067t) {
  uint64_t __t2079t__=0;
  uint64_t n=0;
  uint64_t __t2080t__=0;
  char __t2081t__=0;
  char __t2082t=0;
  char __t2083t__=0;
  char __t2084t=0;
  char z=0;
  len__t1914t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t2079t__);
  n=__t2079t__;
  len__t1914t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t2080t__);
  neq__t158t(n,__t2080t__,&__t2081t__);
  if(__t2081t__){
  __t2082t=0;
  goto __t_return;
  }
  neq__t1919t(x__dat__first,y__dat__first,&__t2083t__);
  if(__t2083t__){
  __t2084t=0;
  __t2082t=__t2084t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t2082t=z;
  goto __t_return;
  __t_return:
  *__t6067t=__t2082t;
}

void eq__t2091t(const char* x, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t6068t) {
  char __t2092t__=0;
  char __t2093t__=0;
  char __t2094t=0;
  char* __t2095t__unsafe_ptr=0;
  uint64_t __t2095t__dat__pos=0;
  uint64_t __t2095t__dat__length=0;
  char __t2095t__dat__first=0;
  char __t2096t__=0;
  char__t1916t(x,&__t2092t__);
  neq__t1919t(y__dat__first,__t2092t__,&__t2093t__);
  if(__t2093t__){
  __t2094t=0;
  goto __t_return;
  }
  str__t1904t(x,&__t2095t__unsafe_ptr,&__t2095t__dat__pos,&__t2095t__dat__length,&__t2095t__dat__first);
  eq__t2078t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,__t2095t__unsafe_ptr,__t2095t__dat__pos,__t2095t__dat__length,__t2095t__dat__first,&__t2096t__);
  __t2094t=__t2096t__;
  goto __t_return;
  __t_return:
  *__t6068t=__t2094t;
}

static inline __attribute__((always_inline)) void len__t1199t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t6069t) {
  goto __t_return;
  __t_return:
  *__t6069t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t6070t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6070t=z;
}

static inline __attribute__((always_inline)) int arg_after__t4513t(const char* flag, char** __t6071t, uint64_t* __t6072t, uint64_t* __t6073t, char* __t6074t) {
  char* __t4514t__unsafe_ptr=0;
  uint64_t __t4514t__unsafe_size=0;
  uint32_t __t4514t__unsafe_offset=0;
  uint32_t __t4514t__unsafe_align=0;
  char* args__unsafe_ptr=0;
  uint64_t args__unsafe_size=0;
  uint32_t args__unsafe_offset=0;
  uint32_t args__unsafe_align=0;
  uint64_t __t4515t=0;
  char __t4516t=0;
  char* __t4517t__=0;
  const char* __t4518t__unsafe_value=0;
  const char* arg__unsafe_value=0;
  char* __t4519t__unsafe_ptr=0;
  uint64_t __t4519t__dat__pos=0;
  uint64_t __t4519t__dat__length=0;
  char __t4519t__dat__first=0;
  char __t4520t__=0;
  uint64_t __t4521t=0;
  uint64_t __t4522t__=0;
  uint64_t __t4523t__=0;
  char __t4524t__=0;
  char __t4525t=0;
  uint64_t __t4526t=0;
  uint64_t __t4527t__=0;
  char* __t4529t__=0;
  const char* __t4530t__unsafe_value=0;
  char* __t4531t__unsafe_ptr=0;
  uint64_t __t4531t__dat__pos=0;
  uint64_t __t4531t__dat__length=0;
  char __t4531t__dat__first=0;
  int __t4532t=0;
  int __t_errcode=0;
  int __t_complain=0;
  args__t4499t(&__t4514t__unsafe_ptr,&__t4514t__unsafe_size,&__t4514t__unsafe_offset,&__t4514t__unsafe_align);
  args__unsafe_ptr=__t4514t__unsafe_ptr;
  args__unsafe_size=__t4514t__unsafe_size;
  args__unsafe_offset=__t4514t__unsafe_offset;
  args__unsafe_align=__t4514t__unsafe_align;
  __t4515t=0-1;
  while(1){
  __t4515t=__t4515t+1;
  __t_complain=get__t1191t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4515t,&__t4517t__);
  __t4516t=__t_complain;
  if(__t_complain){
  goto __t4516t__label;
  }
  if(!__t4517t__){
  __t_complain=2;
  goto __t4516t__label;
  }
  else{
  memcpy(&__t4518t__unsafe_value,__t4517t__,8);
  }
  arg__unsafe_value=__t4518t__unsafe_value;
  __t4516t__label:__t4516t=__t4516t==0;
  if(!__t4516t){
  break;
  }
  str__t4497t(arg__unsafe_value,&__t4519t__unsafe_ptr,&__t4519t__dat__pos,&__t4519t__dat__length,&__t4519t__dat__first);
  eq__t2091t(flag,__t4519t__unsafe_ptr,__t4519t__dat__pos,__t4519t__dat__length,__t4519t__dat__first,&__t4520t__);
  if(__t4520t__){
  __t4521t=1;
  add__t188t(__t4515t,__t4521t,&__t4522t__);
  len__t1199t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,&__t4523t__);
  lt__t302t(__t4522t__,__t4523t__,&__t4524t__);
  __t4525t=__t4524t__;
  }
  else{
  __t4525t=0;
  }
  if(__t4525t){
  __t4526t=1;
  add__t188t(__t4515t,__t4526t,&__t4527t__);
  __t_errcode=get__t1191t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4527t__,&__t4529t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4529t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4530t__unsafe_value,__t4529t__,8);
  str__t4497t(__t4530t__unsafe_value,&__t4531t__unsafe_ptr,&__t4531t__dat__pos,&__t4531t__dat__length,&__t4531t__dat__first);
  goto __t_return;
  }
  }
  __t_errcode=45;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6071t=__t4531t__unsafe_ptr;
  *__t6072t=__t4531t__dat__pos;
  *__t6073t=__t4531t__dat__length;
  *__t6074t=__t4531t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1881t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t6075t, uint64_t* __t6076t, uint64_t* __t6077t, char* __t6078t) {
  goto __t_return;
  __t_return:
  *__t6075t=other__unsafe_ptr;
  *__t6076t=other__dat__pos;
  *__t6077t=other__dat__length;
  *__t6078t=other__dat__first;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t6079t) {
  int value=0;
  *__t6079t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t6080t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t6080t=__t54t__;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t6081t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t6081t=z;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t6082t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6082t=z;
}

static inline __attribute__((always_inline)) void allocated__t1202t(char** __t6083t, uint64_t* __t6084t, uint32_t* __t6085t, uint32_t* __t6086t, uint64_t pos, char** __t6087t, uint64_t* __t6088t, uint32_t* __t6089t, uint32_t* __t6090t, uint64_t* __t6091t) {
  char* buf__unsafe_ptr=*__t6083t;
  uint64_t buf__unsafe_size=*__t6084t;
  uint32_t buf__unsafe_offset=*__t6085t;
  uint32_t buf__unsafe_align=*__t6086t;
  goto __t_return;
  __t_return:
  *__t6083t=buf__unsafe_ptr;
  *__t6084t=buf__unsafe_size;
  *__t6085t=buf__unsafe_offset;
  *__t6086t=buf__unsafe_align;
  *__t6087t=buf__unsafe_ptr;
  *__t6088t=buf__unsafe_size;
  *__t6089t=buf__unsafe_offset;
  *__t6090t=buf__unsafe_align;
  *__t6091t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1489t(char** __t6092t, uint64_t* __t6093t, uint32_t* __t6094t, uint32_t* __t6095t, uint64_t* __t6096t, uint64_t length, char** __t6097t, uint64_t* __t6098t, uint32_t* __t6099t, uint32_t* __t6100t, uint64_t* __t6101t) {
  char* allocator__buf__unsafe_ptr=*__t6092t;
  uint64_t allocator__buf__unsafe_size=*__t6093t;
  uint32_t allocator__buf__unsafe_offset=*__t6094t;
  uint32_t allocator__buf__unsafe_align=*__t6095t;
  uint64_t allocator__pos=*__t6096t;
  int __t1490t=0;
  uint64_t __t1491t__=0;
  uint64_t next_pos=0;
  uint64_t __t1492t__=0;
  char __t1493t__=0;
  uint64_t __t1494t=0;
  uint64_t __t1495t__=0;
  uint64_t pos=0;
  char* __t1496t__buf__unsafe_ptr=0;
  uint64_t __t1496t__buf__unsafe_size=0;
  uint32_t __t1496t__buf__unsafe_offset=0;
  uint32_t __t1496t__buf__unsafe_align=0;
  uint64_t __t1496t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1491t__);
  next_pos=__t1491t__;
  len__t1199t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1492t__);
  gt__t326t(next_pos,__t1492t__,&__t1493t__);
  if(__t1493t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1494t=0;
  add__t188t(allocator__pos,__t1494t,&__t1495t__);
  pos=__t1495t__;
  allocator__pos=next_pos;
  allocated__t1202t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1496t__buf__unsafe_ptr,&__t1496t__buf__unsafe_size,&__t1496t__buf__unsafe_offset,&__t1496t__buf__unsafe_align,&__t1496t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6092t=allocator__buf__unsafe_ptr;
  *__t6093t=allocator__buf__unsafe_size;
  *__t6094t=allocator__buf__unsafe_offset;
  *__t6095t=allocator__buf__unsafe_align;
  *__t6096t=allocator__pos;
  *__t6097t=__t1496t__buf__unsafe_ptr;
  *__t6098t=__t1496t__buf__unsafe_size;
  *__t6099t=__t1496t__buf__unsafe_offset;
  *__t6100t=__t1496t__buf__unsafe_align;
  *__t6101t=__t1496t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1467t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t6102t, uint64_t* __t6103t, uint32_t* __t6104t, uint32_t* __t6105t, uint64_t* __t6106t) {
  char* __t1468t__unsafe_ptr=0;
  uint64_t __t1468t__unsafe_size=0;
  uint32_t __t1468t__unsafe_offset=0;
  uint32_t __t1468t__unsafe_align=0;
  uint64_t __t1469t=0;
  __t1468t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1468t__unsafe_size=self__buf__unsafe_size;
  __t1468t__unsafe_offset=self__buf__unsafe_offset;
  __t1468t__unsafe_align=self__buf__unsafe_align;
  __t1469t=self__pos;
  goto __t_return;
  __t_return:
  *__t6102t=__t1468t__unsafe_ptr;
  *__t6103t=__t1468t__unsafe_size;
  *__t6104t=__t1468t__unsafe_offset;
  *__t6105t=__t1468t__unsafe_align;
  *__t6106t=__t1469t;
}

static inline __attribute__((always_inline)) int copy__t1985t(char** __t6107t, uint64_t* __t6108t, uint32_t* __t6109t, uint32_t* __t6110t, uint64_t* __t6111t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t6112t, uint64_t* __t6113t, uint64_t* __t6114t, char* __t6115t) {
  char* CHARS__buf__unsafe_ptr=*__t6107t;
  uint64_t CHARS__buf__unsafe_size=*__t6108t;
  uint32_t CHARS__buf__unsafe_offset=*__t6109t;
  uint32_t CHARS__buf__unsafe_align=*__t6110t;
  uint64_t CHARS__pos=*__t6111t;
  char* __t1986t__unsafe_ptr=0;
  uint64_t __t1986t__dat__pos=0;
  uint64_t __t1986t__dat__length=0;
  char __t1986t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1987t__buf__unsafe_ptr=0;
  uint64_t __t1987t__buf__unsafe_size=0;
  uint32_t __t1987t__buf__unsafe_offset=0;
  uint32_t __t1987t__buf__unsafe_align=0;
  uint64_t __t1987t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1988t=0;
  char* __t1989t__unsafe_ptr=0;
  uint64_t __t1989t__dat__pos=0;
  uint64_t __t1989t__dat__length=0;
  char __t1989t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1881t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1986t__unsafe_ptr,&__t1986t__dat__pos,&__t1986t__dat__length,&__t1986t__dat__first);
  other__unsafe_ptr=__t1986t__unsafe_ptr;
  other__dat__pos=__t1986t__dat__pos;
  other__dat__length=__t1986t__dat__length;
  other__dat__first=__t1986t__dat__first;
  __t_errcode=alloc__t1489t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1987t__buf__unsafe_ptr,&__t1987t__buf__unsafe_size,&__t1987t__buf__unsafe_offset,&__t1987t__buf__unsafe_align,&__t1987t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1987t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1987t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1987t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1987t__buf__unsafe_align;
  surface__pos=__t1987t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1848t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1989t__unsafe_ptr,&__t1989t__dat__pos,&__t1989t__dat__length,&__t1989t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6107t=CHARS__buf__unsafe_ptr;
  *__t6108t=CHARS__buf__unsafe_size;
  *__t6109t=CHARS__buf__unsafe_offset;
  *__t6110t=CHARS__buf__unsafe_align;
  *__t6111t=CHARS__pos;
  *__t6112t=__t1989t__unsafe_ptr;
  *__t6113t=__t1989t__dat__pos;
  *__t6114t=__t1989t__dat__length;
  *__t6115t=__t1989t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1464t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t6116t, uint64_t* __t6117t, uint32_t* __t6118t, uint32_t* __t6119t, uint64_t* __t6120t) {
  char* __t1465t__unsafe_ptr=0;
  uint64_t __t1465t__unsafe_size=0;
  uint32_t __t1465t__unsafe_offset=0;
  uint32_t __t1465t__unsafe_align=0;
  uint64_t __t1466t=0;
  __t1465t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1465t__unsafe_size=self__buf__unsafe_size;
  __t1465t__unsafe_offset=self__buf__unsafe_offset;
  __t1465t__unsafe_align=self__buf__unsafe_align;
  __t1466t=self__pos;
  goto __t_return;
  __t_return:
  *__t6116t=__t1465t__unsafe_ptr;
  *__t6117t=__t1465t__unsafe_size;
  *__t6118t=__t1465t__unsafe_offset;
  *__t6119t=__t1465t__unsafe_align;
  *__t6120t=__t1466t;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t6121t) {
  int __t403t__=0;
  int __t404t=0;
  int __t405t=0;
  char __t406t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t109t(x,y,&__t403t__);
  lt__t302t(x,y,&__t406t__);
  if(__t406t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6121t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1900t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t6122t, uint64_t* __t6123t, uint64_t* __t6124t, char* __t6125t) {
  uint64_t __t1902t__=0;
  char* __t1903t__unsafe_ptr=0;
  uint64_t __t1903t__dat__pos=0;
  uint64_t __t1903t__dat__length=0;
  char __t1903t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(endpos,pos,&__t1902t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1882t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1902t__,&__t1903t__unsafe_ptr,&__t1903t__dat__pos,&__t1903t__dat__length,&__t1903t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6122t=__t1903t__unsafe_ptr;
  *__t6123t=__t1903t__dat__pos;
  *__t6124t=__t1903t__dat__length;
  *__t6125t=__t1903t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t3556t(char** __t6126t, uint64_t* __t6127t, uint32_t* __t6128t, uint32_t* __t6129t, uint64_t* __t6130t, const char* _s1, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t6131t, uint64_t* __t6132t, uint64_t* __t6133t, char* __t6134t) {
  char* CHARS__buf__unsafe_ptr=*__t6126t;
  uint64_t CHARS__buf__unsafe_size=*__t6127t;
  uint32_t CHARS__buf__unsafe_offset=*__t6128t;
  uint32_t CHARS__buf__unsafe_align=*__t6129t;
  uint64_t CHARS__pos=*__t6130t;
  char* __t3557t__unsafe_ptr=0;
  uint64_t __t3557t__dat__pos=0;
  uint64_t __t3557t__dat__length=0;
  char __t3557t__dat__first=0;
  char* __t5829t__unsafe_ptr=0;
  uint64_t __t5829t__dat__pos=0;
  uint64_t __t5829t__dat__length=0;
  char __t5829t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t5830t__unsafe_ptr=0;
  uint64_t __t5830t__dat__pos=0;
  uint64_t __t5830t__dat__length=0;
  char __t5830t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t5831t=0;
  int __t5832t__=0;
  int __t5833t=0;
  char* peek_allocator__buf__unsafe_ptr=0;
  uint64_t peek_allocator__buf__unsafe_size=0;
  uint32_t peek_allocator__buf__unsafe_offset=0;
  uint32_t peek_allocator__buf__unsafe_align=0;
  uint64_t peek_allocator__pos=0;
  char __t5834t__=0;
  uint64_t __t5835t__=0;
  char __t5836t__=0;
  char __t5837t=0;
  uint64_t __t5838t__=0;
  char __t5839t__=0;
  char __t5840t=0;
  uint64_t __t5841t__=0;
  char* __t5842t__buf__unsafe_ptr=0;
  uint64_t __t5842t__buf__unsafe_size=0;
  uint32_t __t5842t__buf__unsafe_offset=0;
  uint32_t __t5842t__buf__unsafe_align=0;
  uint64_t __t5842t__pos=0;
  char* __t5843t____t1468t__unsafe_ptr=0;
  uint64_t __t5843t____t1468t__unsafe_size=0;
  uint32_t __t5843t____t1468t__unsafe_offset=0;
  uint32_t __t5843t____t1468t__unsafe_align=0;
  uint64_t __t5843t____t1469t=0;
  char* __t5844t__buf__unsafe_ptr=0;
  uint64_t __t5844t__buf__unsafe_size=0;
  uint32_t __t5844t__buf__unsafe_offset=0;
  uint32_t __t5844t__buf__unsafe_align=0;
  uint64_t __t5844t__pos=0;
  char* __t5845t__buf__unsafe_ptr=0;
  uint64_t __t5845t__buf__unsafe_size=0;
  uint32_t __t5845t__buf__unsafe_offset=0;
  uint32_t __t5845t__buf__unsafe_align=0;
  uint64_t __t5845t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t5846t__unsafe_ptr=0;
  uint64_t __t5846t__dat__pos=0;
  uint64_t __t5846t__dat__length=0;
  char __t5846t__dat__first=0;
  char* __t5847t____t1465t__unsafe_ptr=0;
  uint64_t __t5847t____t1465t__unsafe_size=0;
  uint32_t __t5847t____t1465t__unsafe_offset=0;
  uint32_t __t5847t____t1465t__unsafe_align=0;
  uint64_t __t5847t____t1466t=0;
  uint64_t __t5849t=0;
  uint64_t __t5850t__=0;
  char* __t5851t__unsafe_ptr=0;
  uint64_t __t5851t__dat__pos=0;
  uint64_t __t5851t__dat__length=0;
  char __t5851t__dat__first=0;
  char __t5852t__=0;
  char __t5853t__=0;
  char __t5854t=0;
  uint64_t __t5855t__=0;
  char __t5856t__=0;
  char __t5857t=0;
  uint64_t __t5858t__=0;
  char* __t5860t__unsafe_ptr=0;
  uint64_t __t5860t__dat__pos=0;
  uint64_t __t5860t__dat__length=0;
  char __t5860t__dat__first=0;
  uint64_t __t5861t__=0;
  uint64_t __t5862t__=0;
  uint64_t __t5863t__=0;
  uint64_t len_sums=0;
  int __t5864t=0;
  int __t5865t=0;
  int __t5866t=0;
  uint64_t prev_pos=0;
  char* __t5867t__buf__unsafe_ptr=0;
  uint64_t __t5867t__buf__unsafe_size=0;
  uint32_t __t5867t__buf__unsafe_offset=0;
  uint32_t __t5867t__buf__unsafe_align=0;
  uint64_t __t5867t__pos=0;
  char* __t5868t____t1468t__unsafe_ptr=0;
  uint64_t __t5868t____t1468t__unsafe_size=0;
  uint32_t __t5868t____t1468t__unsafe_offset=0;
  uint32_t __t5868t____t1468t__unsafe_align=0;
  uint64_t __t5868t____t1469t=0;
  char* __t5869t__buf__unsafe_ptr=0;
  uint64_t __t5869t__buf__unsafe_size=0;
  uint32_t __t5869t__buf__unsafe_offset=0;
  uint32_t __t5869t__buf__unsafe_align=0;
  uint64_t __t5869t__pos=0;
  char* __t5870t__buf__unsafe_ptr=0;
  uint64_t __t5870t__buf__unsafe_size=0;
  uint32_t __t5870t__buf__unsafe_offset=0;
  uint32_t __t5870t__buf__unsafe_align=0;
  uint64_t __t5870t__pos=0;
  char* __t5871t__unsafe_ptr=0;
  uint64_t __t5871t__dat__pos=0;
  uint64_t __t5871t__dat__length=0;
  char __t5871t__dat__first=0;
  char* __t5872t__unsafe_ptr=0;
  uint64_t __t5872t__dat__pos=0;
  uint64_t __t5872t__dat__length=0;
  char __t5872t__dat__first=0;
  char __t5873t=0;
  char* __t5874t____t1465t__unsafe_ptr=0;
  uint64_t __t5874t____t1465t__unsafe_size=0;
  uint32_t __t5874t____t1465t__unsafe_offset=0;
  uint32_t __t5874t____t1465t__unsafe_align=0;
  uint64_t __t5874t____t1466t=0;
  uint64_t __t5876t=0;
  uint64_t __t5877t__=0;
  char* __t5878t__unsafe_ptr=0;
  uint64_t __t5878t__dat__pos=0;
  uint64_t __t5878t__dat__length=0;
  char __t5878t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1904t(_s1,&__t5829t__unsafe_ptr,&__t5829t__dat__pos,&__t5829t__dat__length,&__t5829t__dat__first);
  s1__unsafe_ptr=__t5829t__unsafe_ptr;
  s1__dat__pos=__t5829t__dat__pos;
  s1__dat__length=__t5829t__dat__length;
  s1__dat__first=__t5829t__dat__first;
  str__t1881t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t5830t__unsafe_ptr,&__t5830t__dat__pos,&__t5830t__dat__length,&__t5830t__dat__first);
  s2__unsafe_ptr=__t5830t__unsafe_ptr;
  s2__dat__pos=__t5830t__dat__pos;
  s2__dat__length=__t5830t__dat__length;
  s2__dat__first=__t5830t__dat__first;
  not__t53t(__t5831t,&__t5832t__);
  peek_allocator__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  peek_allocator__buf__unsafe_size=CHARS__buf__unsafe_size;
  peek_allocator__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  peek_allocator__buf__unsafe_align=CHARS__buf__unsafe_align;
  peek_allocator__pos=CHARS__pos;
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5834t__);
  if(__t5834t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t5835t__);
  eq__t134t(peek_allocator__pos,__t5835t__,&__t5836t__);
  __t5837t=__t5836t__;
  }
  if(__t5837t){
  add__t188t(peek_allocator__pos,s2__dat__length,&__t5838t__);
  lt__t302t(__t5838t__,peek_allocator__buf__unsafe_size,&__t5839t__);
  __t5840t=__t5839t__;
  }
  if(__t5840t){
  len__t1914t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5841t__);
  __t_errcode=alloc__t1489t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5841t__,&__t5842t__buf__unsafe_ptr,&__t5842t__buf__unsafe_size,&__t5842t__buf__unsafe_offset,&__t5842t__buf__unsafe_align,&__t5842t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1467t(__t5842t__buf__unsafe_ptr,__t5842t__buf__unsafe_size,__t5842t__buf__unsafe_offset,__t5842t__buf__unsafe_align,__t5842t__pos,&__t5843t____t1468t__unsafe_ptr,&__t5843t____t1468t__unsafe_size,&__t5843t____t1468t__unsafe_offset,&__t5843t____t1468t__unsafe_align,&__t5843t____t1469t);
  arena__t1458t(&__t5843t____t1468t__unsafe_ptr,&__t5843t____t1468t__unsafe_size,&__t5843t____t1468t__unsafe_offset,&__t5843t____t1468t__unsafe_align,__t5843t____t1469t,&__t5844t__buf__unsafe_ptr,&__t5844t__buf__unsafe_size,&__t5844t__buf__unsafe_offset,&__t5844t__buf__unsafe_align,&__t5844t__pos);
  __t5845t__buf__unsafe_ptr=__t5844t__buf__unsafe_ptr;
  __t5845t__buf__unsafe_size=__t5844t__buf__unsafe_size;
  __t5845t__buf__unsafe_offset=__t5844t__buf__unsafe_offset;
  __t5845t__buf__unsafe_align=__t5844t__buf__unsafe_align;
  __t5845t__pos=__t5844t__pos;
  surface__buf__unsafe_ptr=__t5845t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t5845t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t5845t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t5845t__buf__unsafe_align;
  surface__pos=__t5845t__pos;
  __t_errcode=copy__t1985t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5846t__unsafe_ptr,&__t5846t__dat__pos,&__t5846t__dat__length,&__t5846t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1464t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t5847t____t1465t__unsafe_ptr,&__t5847t____t1465t__unsafe_size,&__t5847t____t1465t__unsafe_offset,&__t5847t____t1465t__unsafe_align,&__t5847t____t1466t);
  __t5849t=0;
  add__t188t(s1__dat__pos,__t5849t,&__t5850t__);
  __t_errcode=str__t1900t(__t5847t____t1465t__unsafe_ptr,__t5847t____t1465t__unsafe_size,__t5847t____t1465t__unsafe_offset,__t5847t____t1465t__unsafe_align,__t5847t____t1466t,__t5850t__,&__t5851t__unsafe_ptr,&__t5851t__dat__pos,&__t5851t__dat__length,&__t5851t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3557t__unsafe_ptr=__t5851t__unsafe_ptr;
  __t3557t__dat__pos=__t5851t__dat__pos;
  __t3557t__dat__length=__t5851t__dat__length;
  __t3557t__dat__first=__t5851t__dat__first;
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5852t__);
  if(__t5852t__){
  eq__t162t(s2__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5853t__);
  __t5854t=__t5853t__;
  }
  if(__t5854t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t5855t__);
  eq__t134t(s2__dat__pos,__t5855t__,&__t5856t__);
  __t5857t=__t5856t__;
  }
  if(__t5857t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t5858t__);
  __t_errcode=str__t1900t(peek_allocator__buf__unsafe_ptr,peek_allocator__buf__unsafe_size,peek_allocator__buf__unsafe_offset,peek_allocator__buf__unsafe_align,__t5858t__,s1__dat__pos,&__t5860t__unsafe_ptr,&__t5860t__dat__pos,&__t5860t__dat__length,&__t5860t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3557t__unsafe_ptr=__t5860t__unsafe_ptr;
  __t3557t__dat__pos=__t5860t__dat__pos;
  __t3557t__dat__length=__t5860t__dat__length;
  __t3557t__dat__first=__t5860t__dat__first;
  goto __t_return;
  }
  len__t1914t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t5861t__);
  len__t1914t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5862t__);
  add__t188t(__t5861t__,__t5862t__,&__t5863t__);
  len_sums=__t5863t__;
  prev_pos=CHARS__pos;
  __t_errcode=alloc__t1489t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,len_sums,&__t5867t__buf__unsafe_ptr,&__t5867t__buf__unsafe_size,&__t5867t__buf__unsafe_offset,&__t5867t__buf__unsafe_align,&__t5867t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1467t(__t5867t__buf__unsafe_ptr,__t5867t__buf__unsafe_size,__t5867t__buf__unsafe_offset,__t5867t__buf__unsafe_align,__t5867t__pos,&__t5868t____t1468t__unsafe_ptr,&__t5868t____t1468t__unsafe_size,&__t5868t____t1468t__unsafe_offset,&__t5868t____t1468t__unsafe_align,&__t5868t____t1469t);
  arena__t1458t(&__t5868t____t1468t__unsafe_ptr,&__t5868t____t1468t__unsafe_size,&__t5868t____t1468t__unsafe_offset,&__t5868t____t1468t__unsafe_align,__t5868t____t1469t,&__t5869t__buf__unsafe_ptr,&__t5869t__buf__unsafe_size,&__t5869t__buf__unsafe_offset,&__t5869t__buf__unsafe_align,&__t5869t__pos);
  __t5870t__buf__unsafe_ptr=__t5869t__buf__unsafe_ptr;
  __t5870t__buf__unsafe_size=__t5869t__buf__unsafe_size;
  __t5870t__buf__unsafe_offset=__t5869t__buf__unsafe_offset;
  __t5870t__buf__unsafe_align=__t5869t__buf__unsafe_align;
  __t5870t__pos=__t5869t__pos;
  surface__buf__unsafe_ptr=__t5870t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t5870t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t5870t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t5870t__buf__unsafe_align;
  surface__pos=__t5870t__pos;
  __t_errcode=copy__t1985t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t5871t__unsafe_ptr,&__t5871t__dat__pos,&__t5871t__dat__length,&__t5871t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1985t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5872t__unsafe_ptr,&__t5872t__dat__pos,&__t5872t__dat__length,&__t5872t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1464t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t5874t____t1465t__unsafe_ptr,&__t5874t____t1465t__unsafe_size,&__t5874t____t1465t__unsafe_offset,&__t5874t____t1465t__unsafe_align,&__t5874t____t1466t);
  __t5876t=0;
  add__t188t(prev_pos,__t5876t,&__t5877t__);
  __t_complain=str__t1900t(__t5874t____t1465t__unsafe_ptr,__t5874t____t1465t__unsafe_size,__t5874t____t1465t__unsafe_offset,__t5874t____t1465t__unsafe_align,__t5874t____t1466t,__t5877t__,&__t5878t__unsafe_ptr,&__t5878t__dat__pos,&__t5878t__dat__length,&__t5878t__dat__first);
  __t5873t=__t_complain;
  if(__t_complain){
  goto __t5873t__label;
  }
  ret__unsafe_ptr=__t5878t__unsafe_ptr;
  ret__dat__pos=__t5878t__dat__pos;
  ret__dat__length=__t5878t__dat__length;
  ret__dat__first=__t5878t__dat__first;
  __t5873t__label:__t5873t=__t5873t==0;
  __t3557t__unsafe_ptr=ret__unsafe_ptr;
  __t3557t__dat__pos=ret__dat__pos;
  __t3557t__dat__length=ret__dat__length;
  __t3557t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6126t=CHARS__buf__unsafe_ptr;
  *__t6127t=CHARS__buf__unsafe_size;
  *__t6128t=CHARS__buf__unsafe_offset;
  *__t6129t=CHARS__buf__unsafe_align;
  *__t6130t=CHARS__pos;
  *__t6131t=__t3557t__unsafe_ptr;
  *__t6132t=__t3557t__dat__pos;
  *__t6133t=__t3557t__dat__length;
  *__t6134t=__t3557t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t3554t(char** __t6135t, uint64_t* __t6136t, uint32_t* __t6137t, uint32_t* __t6138t, uint64_t* __t6139t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t6140t, uint64_t* __t6141t, uint64_t* __t6142t, char* __t6143t) {
  char* CHARS__buf__unsafe_ptr=*__t6135t;
  uint64_t CHARS__buf__unsafe_size=*__t6136t;
  uint32_t CHARS__buf__unsafe_offset=*__t6137t;
  uint32_t CHARS__buf__unsafe_align=*__t6138t;
  uint64_t CHARS__pos=*__t6139t;
  char* __t3555t__unsafe_ptr=0;
  uint64_t __t3555t__dat__pos=0;
  uint64_t __t3555t__dat__length=0;
  char __t3555t__dat__first=0;
  char* __t5879t__unsafe_ptr=0;
  uint64_t __t5879t__dat__pos=0;
  uint64_t __t5879t__dat__length=0;
  char __t5879t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t5880t__unsafe_ptr=0;
  uint64_t __t5880t__dat__pos=0;
  uint64_t __t5880t__dat__length=0;
  char __t5880t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t5881t=0;
  int __t5882t__=0;
  int __t5883t=0;
  char* peek_allocator__buf__unsafe_ptr=0;
  uint64_t peek_allocator__buf__unsafe_size=0;
  uint32_t peek_allocator__buf__unsafe_offset=0;
  uint32_t peek_allocator__buf__unsafe_align=0;
  uint64_t peek_allocator__pos=0;
  char __t5884t__=0;
  uint64_t __t5885t__=0;
  char __t5886t__=0;
  char __t5887t=0;
  uint64_t __t5888t__=0;
  char __t5889t__=0;
  char __t5890t=0;
  uint64_t __t5891t__=0;
  char* __t5892t__buf__unsafe_ptr=0;
  uint64_t __t5892t__buf__unsafe_size=0;
  uint32_t __t5892t__buf__unsafe_offset=0;
  uint32_t __t5892t__buf__unsafe_align=0;
  uint64_t __t5892t__pos=0;
  char* __t5893t____t1468t__unsafe_ptr=0;
  uint64_t __t5893t____t1468t__unsafe_size=0;
  uint32_t __t5893t____t1468t__unsafe_offset=0;
  uint32_t __t5893t____t1468t__unsafe_align=0;
  uint64_t __t5893t____t1469t=0;
  char* __t5894t__buf__unsafe_ptr=0;
  uint64_t __t5894t__buf__unsafe_size=0;
  uint32_t __t5894t__buf__unsafe_offset=0;
  uint32_t __t5894t__buf__unsafe_align=0;
  uint64_t __t5894t__pos=0;
  char* __t5895t__buf__unsafe_ptr=0;
  uint64_t __t5895t__buf__unsafe_size=0;
  uint32_t __t5895t__buf__unsafe_offset=0;
  uint32_t __t5895t__buf__unsafe_align=0;
  uint64_t __t5895t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t5896t__unsafe_ptr=0;
  uint64_t __t5896t__dat__pos=0;
  uint64_t __t5896t__dat__length=0;
  char __t5896t__dat__first=0;
  char* __t5897t____t1465t__unsafe_ptr=0;
  uint64_t __t5897t____t1465t__unsafe_size=0;
  uint32_t __t5897t____t1465t__unsafe_offset=0;
  uint32_t __t5897t____t1465t__unsafe_align=0;
  uint64_t __t5897t____t1466t=0;
  uint64_t __t5899t=0;
  uint64_t __t5900t__=0;
  char* __t5901t__unsafe_ptr=0;
  uint64_t __t5901t__dat__pos=0;
  uint64_t __t5901t__dat__length=0;
  char __t5901t__dat__first=0;
  char __t5902t__=0;
  char __t5903t__=0;
  char __t5904t=0;
  uint64_t __t5905t__=0;
  char __t5906t__=0;
  char __t5907t=0;
  uint64_t __t5908t__=0;
  char* __t5910t__unsafe_ptr=0;
  uint64_t __t5910t__dat__pos=0;
  uint64_t __t5910t__dat__length=0;
  char __t5910t__dat__first=0;
  uint64_t __t5911t__=0;
  uint64_t __t5912t__=0;
  uint64_t __t5913t__=0;
  uint64_t len_sums=0;
  int __t5914t=0;
  int __t5915t=0;
  int __t5916t=0;
  uint64_t prev_pos=0;
  char* __t5917t__buf__unsafe_ptr=0;
  uint64_t __t5917t__buf__unsafe_size=0;
  uint32_t __t5917t__buf__unsafe_offset=0;
  uint32_t __t5917t__buf__unsafe_align=0;
  uint64_t __t5917t__pos=0;
  char* __t5918t____t1468t__unsafe_ptr=0;
  uint64_t __t5918t____t1468t__unsafe_size=0;
  uint32_t __t5918t____t1468t__unsafe_offset=0;
  uint32_t __t5918t____t1468t__unsafe_align=0;
  uint64_t __t5918t____t1469t=0;
  char* __t5919t__buf__unsafe_ptr=0;
  uint64_t __t5919t__buf__unsafe_size=0;
  uint32_t __t5919t__buf__unsafe_offset=0;
  uint32_t __t5919t__buf__unsafe_align=0;
  uint64_t __t5919t__pos=0;
  char* __t5920t__buf__unsafe_ptr=0;
  uint64_t __t5920t__buf__unsafe_size=0;
  uint32_t __t5920t__buf__unsafe_offset=0;
  uint32_t __t5920t__buf__unsafe_align=0;
  uint64_t __t5920t__pos=0;
  char* __t5921t__unsafe_ptr=0;
  uint64_t __t5921t__dat__pos=0;
  uint64_t __t5921t__dat__length=0;
  char __t5921t__dat__first=0;
  char* __t5922t__unsafe_ptr=0;
  uint64_t __t5922t__dat__pos=0;
  uint64_t __t5922t__dat__length=0;
  char __t5922t__dat__first=0;
  char __t5923t=0;
  char* __t5924t____t1465t__unsafe_ptr=0;
  uint64_t __t5924t____t1465t__unsafe_size=0;
  uint32_t __t5924t____t1465t__unsafe_offset=0;
  uint32_t __t5924t____t1465t__unsafe_align=0;
  uint64_t __t5924t____t1466t=0;
  uint64_t __t5926t=0;
  uint64_t __t5927t__=0;
  char* __t5928t__unsafe_ptr=0;
  uint64_t __t5928t__dat__pos=0;
  uint64_t __t5928t__dat__length=0;
  char __t5928t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1881t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t5879t__unsafe_ptr,&__t5879t__dat__pos,&__t5879t__dat__length,&__t5879t__dat__first);
  s1__unsafe_ptr=__t5879t__unsafe_ptr;
  s1__dat__pos=__t5879t__dat__pos;
  s1__dat__length=__t5879t__dat__length;
  s1__dat__first=__t5879t__dat__first;
  str__t1904t(_s2,&__t5880t__unsafe_ptr,&__t5880t__dat__pos,&__t5880t__dat__length,&__t5880t__dat__first);
  s2__unsafe_ptr=__t5880t__unsafe_ptr;
  s2__dat__pos=__t5880t__dat__pos;
  s2__dat__length=__t5880t__dat__length;
  s2__dat__first=__t5880t__dat__first;
  not__t53t(__t5881t,&__t5882t__);
  peek_allocator__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  peek_allocator__buf__unsafe_size=CHARS__buf__unsafe_size;
  peek_allocator__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  peek_allocator__buf__unsafe_align=CHARS__buf__unsafe_align;
  peek_allocator__pos=CHARS__pos;
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5884t__);
  if(__t5884t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t5885t__);
  eq__t134t(peek_allocator__pos,__t5885t__,&__t5886t__);
  __t5887t=__t5886t__;
  }
  if(__t5887t){
  add__t188t(peek_allocator__pos,s2__dat__length,&__t5888t__);
  lt__t302t(__t5888t__,peek_allocator__buf__unsafe_size,&__t5889t__);
  __t5890t=__t5889t__;
  }
  if(__t5890t){
  len__t1914t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5891t__);
  __t_errcode=alloc__t1489t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5891t__,&__t5892t__buf__unsafe_ptr,&__t5892t__buf__unsafe_size,&__t5892t__buf__unsafe_offset,&__t5892t__buf__unsafe_align,&__t5892t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1467t(__t5892t__buf__unsafe_ptr,__t5892t__buf__unsafe_size,__t5892t__buf__unsafe_offset,__t5892t__buf__unsafe_align,__t5892t__pos,&__t5893t____t1468t__unsafe_ptr,&__t5893t____t1468t__unsafe_size,&__t5893t____t1468t__unsafe_offset,&__t5893t____t1468t__unsafe_align,&__t5893t____t1469t);
  arena__t1458t(&__t5893t____t1468t__unsafe_ptr,&__t5893t____t1468t__unsafe_size,&__t5893t____t1468t__unsafe_offset,&__t5893t____t1468t__unsafe_align,__t5893t____t1469t,&__t5894t__buf__unsafe_ptr,&__t5894t__buf__unsafe_size,&__t5894t__buf__unsafe_offset,&__t5894t__buf__unsafe_align,&__t5894t__pos);
  __t5895t__buf__unsafe_ptr=__t5894t__buf__unsafe_ptr;
  __t5895t__buf__unsafe_size=__t5894t__buf__unsafe_size;
  __t5895t__buf__unsafe_offset=__t5894t__buf__unsafe_offset;
  __t5895t__buf__unsafe_align=__t5894t__buf__unsafe_align;
  __t5895t__pos=__t5894t__pos;
  surface__buf__unsafe_ptr=__t5895t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t5895t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t5895t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t5895t__buf__unsafe_align;
  surface__pos=__t5895t__pos;
  __t_errcode=copy__t1985t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5896t__unsafe_ptr,&__t5896t__dat__pos,&__t5896t__dat__length,&__t5896t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1464t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t5897t____t1465t__unsafe_ptr,&__t5897t____t1465t__unsafe_size,&__t5897t____t1465t__unsafe_offset,&__t5897t____t1465t__unsafe_align,&__t5897t____t1466t);
  __t5899t=0;
  add__t188t(s1__dat__pos,__t5899t,&__t5900t__);
  __t_errcode=str__t1900t(__t5897t____t1465t__unsafe_ptr,__t5897t____t1465t__unsafe_size,__t5897t____t1465t__unsafe_offset,__t5897t____t1465t__unsafe_align,__t5897t____t1466t,__t5900t__,&__t5901t__unsafe_ptr,&__t5901t__dat__pos,&__t5901t__dat__length,&__t5901t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3555t__unsafe_ptr=__t5901t__unsafe_ptr;
  __t3555t__dat__pos=__t5901t__dat__pos;
  __t3555t__dat__length=__t5901t__dat__length;
  __t3555t__dat__first=__t5901t__dat__first;
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5902t__);
  if(__t5902t__){
  eq__t162t(s2__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5903t__);
  __t5904t=__t5903t__;
  }
  if(__t5904t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t5905t__);
  eq__t134t(s2__dat__pos,__t5905t__,&__t5906t__);
  __t5907t=__t5906t__;
  }
  if(__t5907t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t5908t__);
  __t_errcode=str__t1900t(peek_allocator__buf__unsafe_ptr,peek_allocator__buf__unsafe_size,peek_allocator__buf__unsafe_offset,peek_allocator__buf__unsafe_align,__t5908t__,s1__dat__pos,&__t5910t__unsafe_ptr,&__t5910t__dat__pos,&__t5910t__dat__length,&__t5910t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3555t__unsafe_ptr=__t5910t__unsafe_ptr;
  __t3555t__dat__pos=__t5910t__dat__pos;
  __t3555t__dat__length=__t5910t__dat__length;
  __t3555t__dat__first=__t5910t__dat__first;
  goto __t_return;
  }
  len__t1914t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t5911t__);
  len__t1914t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5912t__);
  add__t188t(__t5911t__,__t5912t__,&__t5913t__);
  len_sums=__t5913t__;
  prev_pos=CHARS__pos;
  __t_errcode=alloc__t1489t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,len_sums,&__t5917t__buf__unsafe_ptr,&__t5917t__buf__unsafe_size,&__t5917t__buf__unsafe_offset,&__t5917t__buf__unsafe_align,&__t5917t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1467t(__t5917t__buf__unsafe_ptr,__t5917t__buf__unsafe_size,__t5917t__buf__unsafe_offset,__t5917t__buf__unsafe_align,__t5917t__pos,&__t5918t____t1468t__unsafe_ptr,&__t5918t____t1468t__unsafe_size,&__t5918t____t1468t__unsafe_offset,&__t5918t____t1468t__unsafe_align,&__t5918t____t1469t);
  arena__t1458t(&__t5918t____t1468t__unsafe_ptr,&__t5918t____t1468t__unsafe_size,&__t5918t____t1468t__unsafe_offset,&__t5918t____t1468t__unsafe_align,__t5918t____t1469t,&__t5919t__buf__unsafe_ptr,&__t5919t__buf__unsafe_size,&__t5919t__buf__unsafe_offset,&__t5919t__buf__unsafe_align,&__t5919t__pos);
  __t5920t__buf__unsafe_ptr=__t5919t__buf__unsafe_ptr;
  __t5920t__buf__unsafe_size=__t5919t__buf__unsafe_size;
  __t5920t__buf__unsafe_offset=__t5919t__buf__unsafe_offset;
  __t5920t__buf__unsafe_align=__t5919t__buf__unsafe_align;
  __t5920t__pos=__t5919t__pos;
  surface__buf__unsafe_ptr=__t5920t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t5920t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t5920t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t5920t__buf__unsafe_align;
  surface__pos=__t5920t__pos;
  __t_errcode=copy__t1985t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t5921t__unsafe_ptr,&__t5921t__dat__pos,&__t5921t__dat__length,&__t5921t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1985t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5922t__unsafe_ptr,&__t5922t__dat__pos,&__t5922t__dat__length,&__t5922t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1464t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t5924t____t1465t__unsafe_ptr,&__t5924t____t1465t__unsafe_size,&__t5924t____t1465t__unsafe_offset,&__t5924t____t1465t__unsafe_align,&__t5924t____t1466t);
  __t5926t=0;
  add__t188t(prev_pos,__t5926t,&__t5927t__);
  __t_complain=str__t1900t(__t5924t____t1465t__unsafe_ptr,__t5924t____t1465t__unsafe_size,__t5924t____t1465t__unsafe_offset,__t5924t____t1465t__unsafe_align,__t5924t____t1466t,__t5927t__,&__t5928t__unsafe_ptr,&__t5928t__dat__pos,&__t5928t__dat__length,&__t5928t__dat__first);
  __t5923t=__t_complain;
  if(__t_complain){
  goto __t5923t__label;
  }
  ret__unsafe_ptr=__t5928t__unsafe_ptr;
  ret__dat__pos=__t5928t__dat__pos;
  ret__dat__length=__t5928t__dat__length;
  ret__dat__first=__t5928t__dat__first;
  __t5923t__label:__t5923t=__t5923t==0;
  __t3555t__unsafe_ptr=ret__unsafe_ptr;
  __t3555t__dat__pos=ret__dat__pos;
  __t3555t__dat__length=ret__dat__length;
  __t3555t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6135t=CHARS__buf__unsafe_ptr;
  *__t6136t=CHARS__buf__unsafe_size;
  *__t6137t=CHARS__buf__unsafe_offset;
  *__t6138t=CHARS__buf__unsafe_align;
  *__t6139t=CHARS__pos;
  *__t6140t=__t3555t__unsafe_ptr;
  *__t6141t=__t3555t__dat__pos;
  *__t6142t=__t3555t__dat__length;
  *__t6143t=__t3555t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1990t(char** __t6144t, uint64_t* __t6145t, uint32_t* __t6146t, uint32_t* __t6147t, uint64_t* __t6148t, const char* _other, char** __t6149t, uint64_t* __t6150t, uint64_t* __t6151t, char* __t6152t) {
  char* CHARS__buf__unsafe_ptr=*__t6144t;
  uint64_t CHARS__buf__unsafe_size=*__t6145t;
  uint32_t CHARS__buf__unsafe_offset=*__t6146t;
  uint32_t CHARS__buf__unsafe_align=*__t6147t;
  uint64_t CHARS__pos=*__t6148t;
  char* __t1991t__unsafe_ptr=0;
  uint64_t __t1991t__dat__pos=0;
  uint64_t __t1991t__dat__length=0;
  char __t1991t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1992t__buf__unsafe_ptr=0;
  uint64_t __t1992t__buf__unsafe_size=0;
  uint32_t __t1992t__buf__unsafe_offset=0;
  uint32_t __t1992t__buf__unsafe_align=0;
  uint64_t __t1992t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1993t=0;
  char* __t1994t__unsafe_ptr=0;
  uint64_t __t1994t__dat__pos=0;
  uint64_t __t1994t__dat__length=0;
  char __t1994t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1904t(_other,&__t1991t__unsafe_ptr,&__t1991t__dat__pos,&__t1991t__dat__length,&__t1991t__dat__first);
  other__unsafe_ptr=__t1991t__unsafe_ptr;
  other__dat__pos=__t1991t__dat__pos;
  other__dat__length=__t1991t__dat__length;
  other__dat__first=__t1991t__dat__first;
  __t_errcode=alloc__t1489t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1992t__buf__unsafe_ptr,&__t1992t__buf__unsafe_size,&__t1992t__buf__unsafe_offset,&__t1992t__buf__unsafe_align,&__t1992t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1992t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1992t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1992t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1992t__buf__unsafe_align;
  surface__pos=__t1992t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1848t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1994t__unsafe_ptr,&__t1994t__dat__pos,&__t1994t__dat__length,&__t1994t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6144t=CHARS__buf__unsafe_ptr;
  *__t6145t=CHARS__buf__unsafe_size;
  *__t6146t=CHARS__buf__unsafe_offset;
  *__t6147t=CHARS__buf__unsafe_align;
  *__t6148t=CHARS__pos;
  *__t6149t=__t1994t__unsafe_ptr;
  *__t6150t=__t1994t__dat__pos;
  *__t6151t=__t1994t__dat__length;
  *__t6152t=__t1994t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t856t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2036t(char** __t6153t, uint64_t* __t6154t, uint32_t* __t6155t, uint32_t* __t6156t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t6153t=unsafe_ptr;
  *__t6154t=unsafe_size;
  *__t6155t=unsafe_offset;
  *__t6156t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t2035t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t6157t, uint64_t* __t6158t, uint64_t* __t6159t, char* __t6160t) {
  char* __t2038t__unsafe_ptr=0;
  uint64_t __t2038t__unsafe_size=0;
  uint32_t __t2038t__unsafe_offset=0;
  uint32_t __t2038t__unsafe_align=0;
  uint64_t __t2039t=0;
  uint64_t __t2040t__=0;
  uint64_t __t2041t__=0;
  char* __t2042t__unsafe_ptr=0;
  uint64_t __t2042t__unsafe_size=0;
  uint32_t __t2042t__unsafe_offset=0;
  uint32_t __t2042t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t2044t=0;
  uint64_t __t2045t=0;
  char* __t2046t__unsafe_ptr=0;
  uint64_t __t2046t__dat__pos=0;
  uint64_t __t2046t__dat__length=0;
  char __t2046t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2036t(&__t2038t__unsafe_ptr,&__t2038t__unsafe_size,&__t2038t__unsafe_offset,&__t2038t__unsafe_align);
  __t2039t=1;
  len__t1914t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t2040t__);
  add__t188t(__t2039t,__t2040t__,&__t2041t__);
  __t_errcode=alloc__t971t(&__t2038t__unsafe_ptr,&__t2038t__unsafe_size,&__t2038t__unsafe_offset,&__t2038t__unsafe_align,__t2041t__,&__t2042t__unsafe_ptr,&__t2042t__unsafe_size,&__t2042t__unsafe_offset,&__t2042t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2042t__unsafe_ptr;
  buf__unsafe_size=__t2042t__unsafe_size;
  buf__unsafe_offset=__t2042t__unsafe_offset;
  buf__unsafe_align=__t2042t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t2045t=0;
  __t_errcode=str__t1848t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t2045t,other__dat__length,other__dat__first,&__t2046t__unsafe_ptr,&__t2046t__dat__pos,&__t2046t__dat__length,&__t2046t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t844t(&__t2046t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6157t=__t2046t__unsafe_ptr;
  *__t6158t=__t2046t__dat__pos;
  *__t6159t=__t2046t__dat__length;
  *__t6160t=__t2046t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t2061t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t6161t, char** __t6162t, uint64_t* __t6163t, uint64_t* __t6164t, char* __t6165t) {
  int __t2062t=0;
  char* __t2064t__unsafe_ptr=0;
  uint64_t __t2064t__dat__pos=0;
  uint64_t __t2064t__dat__length=0;
  char __t2064t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t2066t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t856t();
  __t_errcode=copy_null_terminated__t2035t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t2064t__unsafe_ptr,&__t2064t__dat__pos,&__t2064t__dat__length,&__t2064t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t2064t__unsafe_ptr;
  str__dat__pos=__t2064t__dat__pos;
  str__dat__length=__t2064t__dat__length;
  str__dat__first=__t2064t__dat__first;
  add__t846t(str__unsafe_ptr,str__dat__pos,&__t2066t__);
  _ret=__t2066t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t844t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6161t=cstr;
  *__t6162t=str__unsafe_ptr;
  *__t6163t=str__dat__pos;
  *__t6164t=str__dat__length;
  *__t6165t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2071t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t6166t) {
  goto __t_return;
  __t_return:
  *__t6166t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t5386t(char* unsafe_ptr) {
  int __t5388t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int open__t5389t(const char* path, char** __t6167t) {
  int __t5391t=0;
  char* unsafe_ptr=0;
  char __t5393t__=0;
  char __t5394t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t683t(unsafe_ptr,&__t5393t__);
  not__t42t(__t5393t__,&__t5394t__);
  if(__t5394t__){
  __t_errcode=52;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5386t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6167t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t5396t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t6168t) {
  const char* __t5397t__cstr=0;
  char* __t5397t__str__unsafe_ptr=0;
  uint64_t __t5397t__str__dat__pos=0;
  uint64_t __t5397t__str__dat__length=0;
  char __t5397t__str__dat__first=0;
  const char* __t5399t__=0;
  char* __t5400t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t2061t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5397t__cstr,&__t5397t__str__unsafe_ptr,&__t5397t__str__dat__pos,&__t5397t__str__dat__length,&__t5397t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t2071t(__t5397t__cstr,__t5397t__str__unsafe_ptr,__t5397t__str__dat__pos,__t5397t__str__dat__length,__t5397t__str__dat__first,&__t5399t__);
  __t_errcode=open__t5389t(__t5399t__,&__t5400t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5386t(__t5400t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6168t=__t5400t__unsafe_ptr;
  
  __t_skip_returns:free__t844t(&__t5397t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t5408t(char** __t6169t, const char** __t6170t) {
  char* f__unsafe_ptr=*__t6169t;
  char __t5409t__=0;
  char __t5410t__=0;
  char* de=0;
  char __t5411t__=0;
  char __t5412t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t683t(f__unsafe_ptr,&__t5409t__);
  not__t42t(__t5409t__,&__t5410t__);
  if(__t5410t__){
  __t_errcode=63;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t683t(de,&__t5411t__);
  not__t42t(__t5411t__,&__t5412t__);
  if(__t5412t__){
  __t_errcode=64;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6169t=f__unsafe_ptr;
  *__t6170t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t5413t(char** __t6171t, char** __t6172t, uint64_t* __t6173t, uint64_t* __t6174t, char* __t6175t) {
  char* f__unsafe_ptr=*__t6171t;
  const char* __t5414t__=0;
  char* __t5415t__unsafe_ptr=0;
  uint64_t __t5415t__dat__pos=0;
  uint64_t __t5415t__dat__length=0;
  char __t5415t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t5408t(&f__unsafe_ptr,&__t5414t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1904t(__t5414t__,&__t5415t__unsafe_ptr,&__t5415t__dat__pos,&__t5415t__dat__length,&__t5415t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6171t=f__unsafe_ptr;
  *__t6172t=__t5415t__unsafe_ptr;
  *__t6173t=__t5415t__dat__pos;
  *__t6174t=__t5415t__dat__length;
  *__t6175t=__t5415t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t5479t(char** __t6176t, uint64_t nat, char** __t6177t, uint64_t* __t6178t, uint64_t* __t6179t, char* __t6180t) {
  char* data__unsafe_ptr=*__t6176t;
  char* __t5480t__unsafe_ptr=0;
  uint64_t __t5480t__dat__pos=0;
  uint64_t __t5480t__dat__length=0;
  char __t5480t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t5413t(&data__unsafe_ptr,&__t5480t__unsafe_ptr,&__t5480t__dat__pos,&__t5480t__dat__length,&__t5480t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6176t=data__unsafe_ptr;
  *__t6177t=__t5480t__unsafe_ptr;
  *__t6178t=__t5480t__dat__pos;
  *__t6179t=__t5480t__dat__length;
  *__t6180t=__t5480t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void eq__t2085t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t6181t) {
  char __t2086t__=0;
  char __t2087t__=0;
  char __t2088t=0;
  char* __t2089t__unsafe_ptr=0;
  uint64_t __t2089t__dat__pos=0;
  uint64_t __t2089t__dat__length=0;
  char __t2089t__dat__first=0;
  char __t2090t__=0;
  char__t1916t(y,&__t2086t__);
  neq__t1919t(x__dat__first,__t2086t__,&__t2087t__);
  if(__t2087t__){
  __t2088t=0;
  goto __t_return;
  }
  str__t1904t(y,&__t2089t__unsafe_ptr,&__t2089t__dat__pos,&__t2089t__dat__length,&__t2089t__dat__first);
  eq__t2078t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t2089t__unsafe_ptr,__t2089t__dat__pos,__t2089t__dat__length,__t2089t__dat__first,&__t2090t__);
  __t2088t=__t2090t__;
  goto __t_return;
  __t_return:
  *__t6181t=__t2088t;
}

int unsafe_temp__t2047t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t6182t, char** __t6183t, uint64_t* __t6184t, uint64_t* __t6185t, char* __t6186t) {
  int __t2048t=0;
  char* __t2049t__unsafe_ptr=0;
  uint64_t __t2049t__unsafe_size=0;
  uint32_t __t2049t__unsafe_offset=0;
  uint32_t __t2049t__unsafe_align=0;
  uint64_t __t2050t=0;
  uint64_t __t2051t__=0;
  uint64_t __t2052t__=0;
  char* __t2053t__unsafe_ptr=0;
  uint64_t __t2053t__unsafe_size=0;
  uint32_t __t2053t__unsafe_offset=0;
  uint32_t __t2053t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t2055t=0;
  char __t2056t__=0;
  char first_character=0;
  uint64_t __t2057t=0;
  char* __t2058t__unsafe_ptr=0;
  uint64_t __t2058t__dat__pos=0;
  uint64_t __t2058t__dat__length=0;
  char __t2058t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t2059t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2036t(&__t2049t__unsafe_ptr,&__t2049t__unsafe_size,&__t2049t__unsafe_offset,&__t2049t__unsafe_align);
  __t2050t=1;
  add__t188t(__t2050t,other__dat__length,&__t2051t__);
  add__t188t(__t2051t__,prefix__dat__length,&__t2052t__);
  __t_errcode=alloc__t971t(&__t2049t__unsafe_ptr,&__t2049t__unsafe_size,&__t2049t__unsafe_offset,&__t2049t__unsafe_align,__t2052t__,&__t2053t__unsafe_ptr,&__t2053t__unsafe_size,&__t2053t__unsafe_offset,&__t2053t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2053t__unsafe_ptr;
  buf__unsafe_size=__t2053t__unsafe_size;
  buf__unsafe_offset=__t2053t__unsafe_offset;
  buf__unsafe_align=__t2053t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t2055t=0;
  eq__t134t(prefix__dat__length,__t2055t,&__t2056t__);
  if(__t2056t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t2057t=0;
  __t_errcode=str__t1848t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t2057t,other__dat__length,first_character,&__t2058t__unsafe_ptr,&__t2058t__dat__pos,&__t2058t__dat__length,&__t2058t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t2058t__unsafe_ptr;
  str__dat__pos=__t2058t__dat__pos;
  str__dat__length=__t2058t__dat__length;
  str__dat__first=__t2058t__dat__first;
  add__t846t(str__unsafe_ptr,str__dat__pos,&__t2059t__);
  _ret=__t2059t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t844t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6182t=cstr;
  *__t6183t=str__unsafe_ptr;
  *__t6184t=str__dat__pos;
  *__t6185t=str__dat__length;
  *__t6186t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2070t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t6187t) {
  goto __t_return;
  __t_return:
  *__t6187t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t5313t(const char* path, char* __t6188t) {
  int __t5315t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t6188t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t5323t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t6189t) {
  int __t5325t=0;
  const char* __t5326t__cstr=0;
  char* __t5326t__str__unsafe_ptr=0;
  uint64_t __t5326t__str__dat__pos=0;
  uint64_t __t5326t__str__dat__length=0;
  char __t5326t__str__dat__first=0;
  const char* __t5328t__=0;
  char __t5329t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t2047t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t5326t__cstr,&__t5326t__str__unsafe_ptr,&__t5326t__str__dat__pos,&__t5326t__str__dat__length,&__t5326t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t2070t(__t5326t__cstr,__t5326t__str__unsafe_ptr,__t5326t__str__dat__pos,__t5326t__str__dat__length,__t5326t__str__dat__first,&__t5328t__);
  is_dir__t5313t(__t5328t__,&__t5329t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6189t=__t5329t__;
  
  __t_skip_returns:free__t844t(&__t5326t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t410t(uint64_t x, uint64_t y, uint64_t* __t6190t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t6190t=z;
}

static inline __attribute__((always_inline)) void reuse__t5723t(char** __t6191t, uint64_t* __t6192t, uint32_t* __t6193t, uint32_t* __t6194t, uint64_t* __t6195t, uint64_t* __t6196t) {
  char* arn__buf__unsafe_ptr=*__t6191t;
  uint64_t arn__buf__unsafe_size=*__t6192t;
  uint32_t arn__buf__unsafe_offset=*__t6193t;
  uint32_t arn__buf__unsafe_align=*__t6194t;
  uint64_t arn__pos=*__t6195t;
  uint64_t __t5724t=0;
  uint64_t __t5725t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5726t=0;
  uint64_t __t5728t__=0;
  __t5724t=0;
  add__t188t(__t5724t,arn__pos,&__t5725t__);
  tracked_position=__t5725t__;
  goto __t_return;
  __t_return:
  *__t6191t=arn__buf__unsafe_ptr;
  *__t6192t=arn__buf__unsafe_size;
  *__t6193t=arn__buf__unsafe_offset;
  *__t6194t=arn__buf__unsafe_align;
  *__t6195t=arn__pos;
  *__t6196t=tracked_position;
}

int add__t3552t(char** __t6197t, uint64_t* __t6198t, uint32_t* __t6199t, uint32_t* __t6200t, uint64_t* __t6201t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t6202t, uint64_t* __t6203t, uint64_t* __t6204t, char* __t6205t) {
  char* CHARS__buf__unsafe_ptr=*__t6197t;
  uint64_t CHARS__buf__unsafe_size=*__t6198t;
  uint32_t CHARS__buf__unsafe_offset=*__t6199t;
  uint32_t CHARS__buf__unsafe_align=*__t6200t;
  uint64_t CHARS__pos=*__t6201t;
  char* __t3553t__unsafe_ptr=0;
  uint64_t __t3553t__dat__pos=0;
  uint64_t __t3553t__dat__length=0;
  char __t3553t__dat__first=0;
  char* __t5929t__unsafe_ptr=0;
  uint64_t __t5929t__dat__pos=0;
  uint64_t __t5929t__dat__length=0;
  char __t5929t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t5930t__unsafe_ptr=0;
  uint64_t __t5930t__dat__pos=0;
  uint64_t __t5930t__dat__length=0;
  char __t5930t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t5931t=0;
  int __t5932t__=0;
  int __t5933t=0;
  char* peek_allocator__buf__unsafe_ptr=0;
  uint64_t peek_allocator__buf__unsafe_size=0;
  uint32_t peek_allocator__buf__unsafe_offset=0;
  uint32_t peek_allocator__buf__unsafe_align=0;
  uint64_t peek_allocator__pos=0;
  char __t5934t__=0;
  uint64_t __t5935t__=0;
  char __t5936t__=0;
  char __t5937t=0;
  uint64_t __t5938t__=0;
  char __t5939t__=0;
  char __t5940t=0;
  uint64_t __t5941t__=0;
  char* __t5942t__buf__unsafe_ptr=0;
  uint64_t __t5942t__buf__unsafe_size=0;
  uint32_t __t5942t__buf__unsafe_offset=0;
  uint32_t __t5942t__buf__unsafe_align=0;
  uint64_t __t5942t__pos=0;
  char* __t5943t____t1468t__unsafe_ptr=0;
  uint64_t __t5943t____t1468t__unsafe_size=0;
  uint32_t __t5943t____t1468t__unsafe_offset=0;
  uint32_t __t5943t____t1468t__unsafe_align=0;
  uint64_t __t5943t____t1469t=0;
  char* __t5944t__buf__unsafe_ptr=0;
  uint64_t __t5944t__buf__unsafe_size=0;
  uint32_t __t5944t__buf__unsafe_offset=0;
  uint32_t __t5944t__buf__unsafe_align=0;
  uint64_t __t5944t__pos=0;
  char* __t5945t__buf__unsafe_ptr=0;
  uint64_t __t5945t__buf__unsafe_size=0;
  uint32_t __t5945t__buf__unsafe_offset=0;
  uint32_t __t5945t__buf__unsafe_align=0;
  uint64_t __t5945t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t5946t__unsafe_ptr=0;
  uint64_t __t5946t__dat__pos=0;
  uint64_t __t5946t__dat__length=0;
  char __t5946t__dat__first=0;
  char* __t5947t____t1465t__unsafe_ptr=0;
  uint64_t __t5947t____t1465t__unsafe_size=0;
  uint32_t __t5947t____t1465t__unsafe_offset=0;
  uint32_t __t5947t____t1465t__unsafe_align=0;
  uint64_t __t5947t____t1466t=0;
  uint64_t __t5949t=0;
  uint64_t __t5950t__=0;
  char* __t5951t__unsafe_ptr=0;
  uint64_t __t5951t__dat__pos=0;
  uint64_t __t5951t__dat__length=0;
  char __t5951t__dat__first=0;
  char __t5952t__=0;
  char __t5953t__=0;
  char __t5954t=0;
  uint64_t __t5955t__=0;
  char __t5956t__=0;
  char __t5957t=0;
  uint64_t __t5958t__=0;
  char* __t5960t__unsafe_ptr=0;
  uint64_t __t5960t__dat__pos=0;
  uint64_t __t5960t__dat__length=0;
  char __t5960t__dat__first=0;
  uint64_t __t5961t__=0;
  uint64_t __t5962t__=0;
  uint64_t __t5963t__=0;
  uint64_t len_sums=0;
  int __t5964t=0;
  int __t5965t=0;
  int __t5966t=0;
  uint64_t prev_pos=0;
  char* __t5967t__buf__unsafe_ptr=0;
  uint64_t __t5967t__buf__unsafe_size=0;
  uint32_t __t5967t__buf__unsafe_offset=0;
  uint32_t __t5967t__buf__unsafe_align=0;
  uint64_t __t5967t__pos=0;
  char* __t5968t____t1468t__unsafe_ptr=0;
  uint64_t __t5968t____t1468t__unsafe_size=0;
  uint32_t __t5968t____t1468t__unsafe_offset=0;
  uint32_t __t5968t____t1468t__unsafe_align=0;
  uint64_t __t5968t____t1469t=0;
  char* __t5969t__buf__unsafe_ptr=0;
  uint64_t __t5969t__buf__unsafe_size=0;
  uint32_t __t5969t__buf__unsafe_offset=0;
  uint32_t __t5969t__buf__unsafe_align=0;
  uint64_t __t5969t__pos=0;
  char* __t5970t__buf__unsafe_ptr=0;
  uint64_t __t5970t__buf__unsafe_size=0;
  uint32_t __t5970t__buf__unsafe_offset=0;
  uint32_t __t5970t__buf__unsafe_align=0;
  uint64_t __t5970t__pos=0;
  char* __t5971t__unsafe_ptr=0;
  uint64_t __t5971t__dat__pos=0;
  uint64_t __t5971t__dat__length=0;
  char __t5971t__dat__first=0;
  char* __t5972t__unsafe_ptr=0;
  uint64_t __t5972t__dat__pos=0;
  uint64_t __t5972t__dat__length=0;
  char __t5972t__dat__first=0;
  char __t5973t=0;
  char* __t5974t____t1465t__unsafe_ptr=0;
  uint64_t __t5974t____t1465t__unsafe_size=0;
  uint32_t __t5974t____t1465t__unsafe_offset=0;
  uint32_t __t5974t____t1465t__unsafe_align=0;
  uint64_t __t5974t____t1466t=0;
  uint64_t __t5976t=0;
  uint64_t __t5977t__=0;
  char* __t5978t__unsafe_ptr=0;
  uint64_t __t5978t__dat__pos=0;
  uint64_t __t5978t__dat__length=0;
  char __t5978t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1881t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t5929t__unsafe_ptr,&__t5929t__dat__pos,&__t5929t__dat__length,&__t5929t__dat__first);
  s1__unsafe_ptr=__t5929t__unsafe_ptr;
  s1__dat__pos=__t5929t__dat__pos;
  s1__dat__length=__t5929t__dat__length;
  s1__dat__first=__t5929t__dat__first;
  str__t1881t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t5930t__unsafe_ptr,&__t5930t__dat__pos,&__t5930t__dat__length,&__t5930t__dat__first);
  s2__unsafe_ptr=__t5930t__unsafe_ptr;
  s2__dat__pos=__t5930t__dat__pos;
  s2__dat__length=__t5930t__dat__length;
  s2__dat__first=__t5930t__dat__first;
  not__t53t(__t5931t,&__t5932t__);
  peek_allocator__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  peek_allocator__buf__unsafe_size=CHARS__buf__unsafe_size;
  peek_allocator__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  peek_allocator__buf__unsafe_align=CHARS__buf__unsafe_align;
  peek_allocator__pos=CHARS__pos;
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5934t__);
  if(__t5934t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t5935t__);
  eq__t134t(peek_allocator__pos,__t5935t__,&__t5936t__);
  __t5937t=__t5936t__;
  }
  if(__t5937t){
  add__t188t(peek_allocator__pos,s2__dat__length,&__t5938t__);
  lt__t302t(__t5938t__,peek_allocator__buf__unsafe_size,&__t5939t__);
  __t5940t=__t5939t__;
  }
  if(__t5940t){
  len__t1914t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5941t__);
  __t_errcode=alloc__t1489t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5941t__,&__t5942t__buf__unsafe_ptr,&__t5942t__buf__unsafe_size,&__t5942t__buf__unsafe_offset,&__t5942t__buf__unsafe_align,&__t5942t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1467t(__t5942t__buf__unsafe_ptr,__t5942t__buf__unsafe_size,__t5942t__buf__unsafe_offset,__t5942t__buf__unsafe_align,__t5942t__pos,&__t5943t____t1468t__unsafe_ptr,&__t5943t____t1468t__unsafe_size,&__t5943t____t1468t__unsafe_offset,&__t5943t____t1468t__unsafe_align,&__t5943t____t1469t);
  arena__t1458t(&__t5943t____t1468t__unsafe_ptr,&__t5943t____t1468t__unsafe_size,&__t5943t____t1468t__unsafe_offset,&__t5943t____t1468t__unsafe_align,__t5943t____t1469t,&__t5944t__buf__unsafe_ptr,&__t5944t__buf__unsafe_size,&__t5944t__buf__unsafe_offset,&__t5944t__buf__unsafe_align,&__t5944t__pos);
  __t5945t__buf__unsafe_ptr=__t5944t__buf__unsafe_ptr;
  __t5945t__buf__unsafe_size=__t5944t__buf__unsafe_size;
  __t5945t__buf__unsafe_offset=__t5944t__buf__unsafe_offset;
  __t5945t__buf__unsafe_align=__t5944t__buf__unsafe_align;
  __t5945t__pos=__t5944t__pos;
  surface__buf__unsafe_ptr=__t5945t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t5945t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t5945t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t5945t__buf__unsafe_align;
  surface__pos=__t5945t__pos;
  __t_errcode=copy__t1985t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5946t__unsafe_ptr,&__t5946t__dat__pos,&__t5946t__dat__length,&__t5946t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1464t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t5947t____t1465t__unsafe_ptr,&__t5947t____t1465t__unsafe_size,&__t5947t____t1465t__unsafe_offset,&__t5947t____t1465t__unsafe_align,&__t5947t____t1466t);
  __t5949t=0;
  add__t188t(s1__dat__pos,__t5949t,&__t5950t__);
  __t_errcode=str__t1900t(__t5947t____t1465t__unsafe_ptr,__t5947t____t1465t__unsafe_size,__t5947t____t1465t__unsafe_offset,__t5947t____t1465t__unsafe_align,__t5947t____t1466t,__t5950t__,&__t5951t__unsafe_ptr,&__t5951t__dat__pos,&__t5951t__dat__length,&__t5951t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3553t__unsafe_ptr=__t5951t__unsafe_ptr;
  __t3553t__dat__pos=__t5951t__dat__pos;
  __t3553t__dat__length=__t5951t__dat__length;
  __t3553t__dat__first=__t5951t__dat__first;
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5952t__);
  if(__t5952t__){
  eq__t162t(s2__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5953t__);
  __t5954t=__t5953t__;
  }
  if(__t5954t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t5955t__);
  eq__t134t(s2__dat__pos,__t5955t__,&__t5956t__);
  __t5957t=__t5956t__;
  }
  if(__t5957t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t5958t__);
  __t_errcode=str__t1900t(peek_allocator__buf__unsafe_ptr,peek_allocator__buf__unsafe_size,peek_allocator__buf__unsafe_offset,peek_allocator__buf__unsafe_align,__t5958t__,s1__dat__pos,&__t5960t__unsafe_ptr,&__t5960t__dat__pos,&__t5960t__dat__length,&__t5960t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3553t__unsafe_ptr=__t5960t__unsafe_ptr;
  __t3553t__dat__pos=__t5960t__dat__pos;
  __t3553t__dat__length=__t5960t__dat__length;
  __t3553t__dat__first=__t5960t__dat__first;
  goto __t_return;
  }
  len__t1914t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t5961t__);
  len__t1914t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5962t__);
  add__t188t(__t5961t__,__t5962t__,&__t5963t__);
  len_sums=__t5963t__;
  prev_pos=CHARS__pos;
  __t_errcode=alloc__t1489t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,len_sums,&__t5967t__buf__unsafe_ptr,&__t5967t__buf__unsafe_size,&__t5967t__buf__unsafe_offset,&__t5967t__buf__unsafe_align,&__t5967t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1467t(__t5967t__buf__unsafe_ptr,__t5967t__buf__unsafe_size,__t5967t__buf__unsafe_offset,__t5967t__buf__unsafe_align,__t5967t__pos,&__t5968t____t1468t__unsafe_ptr,&__t5968t____t1468t__unsafe_size,&__t5968t____t1468t__unsafe_offset,&__t5968t____t1468t__unsafe_align,&__t5968t____t1469t);
  arena__t1458t(&__t5968t____t1468t__unsafe_ptr,&__t5968t____t1468t__unsafe_size,&__t5968t____t1468t__unsafe_offset,&__t5968t____t1468t__unsafe_align,__t5968t____t1469t,&__t5969t__buf__unsafe_ptr,&__t5969t__buf__unsafe_size,&__t5969t__buf__unsafe_offset,&__t5969t__buf__unsafe_align,&__t5969t__pos);
  __t5970t__buf__unsafe_ptr=__t5969t__buf__unsafe_ptr;
  __t5970t__buf__unsafe_size=__t5969t__buf__unsafe_size;
  __t5970t__buf__unsafe_offset=__t5969t__buf__unsafe_offset;
  __t5970t__buf__unsafe_align=__t5969t__buf__unsafe_align;
  __t5970t__pos=__t5969t__pos;
  surface__buf__unsafe_ptr=__t5970t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t5970t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t5970t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t5970t__buf__unsafe_align;
  surface__pos=__t5970t__pos;
  __t_errcode=copy__t1985t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t5971t__unsafe_ptr,&__t5971t__dat__pos,&__t5971t__dat__length,&__t5971t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1985t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5972t__unsafe_ptr,&__t5972t__dat__pos,&__t5972t__dat__length,&__t5972t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1464t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t5974t____t1465t__unsafe_ptr,&__t5974t____t1465t__unsafe_size,&__t5974t____t1465t__unsafe_offset,&__t5974t____t1465t__unsafe_align,&__t5974t____t1466t);
  __t5976t=0;
  add__t188t(prev_pos,__t5976t,&__t5977t__);
  __t_complain=str__t1900t(__t5974t____t1465t__unsafe_ptr,__t5974t____t1465t__unsafe_size,__t5974t____t1465t__unsafe_offset,__t5974t____t1465t__unsafe_align,__t5974t____t1466t,__t5977t__,&__t5978t__unsafe_ptr,&__t5978t__dat__pos,&__t5978t__dat__length,&__t5978t__dat__first);
  __t5973t=__t_complain;
  if(__t_complain){
  goto __t5973t__label;
  }
  ret__unsafe_ptr=__t5978t__unsafe_ptr;
  ret__dat__pos=__t5978t__dat__pos;
  ret__dat__length=__t5978t__dat__length;
  ret__dat__first=__t5978t__dat__first;
  __t5973t__label:__t5973t=__t5973t==0;
  __t3553t__unsafe_ptr=ret__unsafe_ptr;
  __t3553t__dat__pos=ret__dat__pos;
  __t3553t__dat__length=ret__dat__length;
  __t3553t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6197t=CHARS__buf__unsafe_ptr;
  *__t6198t=CHARS__buf__unsafe_size;
  *__t6199t=CHARS__buf__unsafe_offset;
  *__t6200t=CHARS__buf__unsafe_align;
  *__t6201t=CHARS__pos;
  *__t6202t=__t3553t__unsafe_ptr;
  *__t6203t=__t3553t__dat__pos;
  *__t6204t=__t3553t__dat__length;
  *__t6205t=__t3553t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2139t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t6206t) {
  int __t2140t=0;
  char __t2141t__=0;
  uint64_t __t2142t__=0;
  char* __t2143t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,s__dat__length,&__t2141t__);
  if(__t2141t__){
  __t_errcode=22;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t2142t__);
  add__t846t(s__unsafe_ptr,__t2142t__,&__t2143t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6206t=__t2143t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t2165t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t6207t, uint64_t* __t6208t, uint64_t* __t6209t, char* __t6210t) {
  char* __t2166t__unsafe_ptr=0;
  uint64_t __t2166t__dat__pos=0;
  uint64_t __t2166t__dat__length=0;
  char __t2166t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t2167t__=0;
  char* __t2168t__unsafe_ptr=0;
  uint64_t __t2168t__dat__pos=0;
  uint64_t __t2168t__dat__length=0;
  char __t2168t__dat__first=0;
  char __t2169t__=0;
  char __t2170t__=0;
  char __t2171t=0;
  char __t2172t__=0;
  uint64_t __t2174t__=0;
  uint64_t new_length=0;
  uint64_t __t2175t=0;
  char __t2176t__=0;
  char new_first=0;
  char* __t2178t__=0;
  char __t2179t__value=0;
  uint64_t __t2180t__=0;
  char* __t2181t__unsafe_ptr=0;
  uint64_t __t2181t__dat__pos=0;
  uint64_t __t2181t__dat__length=0;
  char __t2181t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1881t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t2166t__unsafe_ptr,&__t2166t__dat__pos,&__t2166t__dat__length,&__t2166t__dat__first);
  s__unsafe_ptr=__t2166t__unsafe_ptr;
  s__dat__pos=__t2166t__dat__pos;
  s__dat__length=__t2166t__dat__length;
  s__dat__first=__t2166t__dat__first;
  eq__t134t(from,to,&__t2167t__);
  if(__t2167t__){
  str__t1904t(__t463t,&__t2168t__unsafe_ptr,&__t2168t__dat__pos,&__t2168t__dat__length,&__t2168t__dat__first);
  goto __t_return;
  }
  gt__t326t(from,to,&__t2169t__);
  if(!__t2169t__){
  gt__t326t(to,s__dat__length,&__t2170t__);
  __t2171t=__t2170t__;
  }
  else{
  __t2171t=0;
  not__t42t(__t2171t,&__t2172t__);
  __t2171t=__t2172t__;
  }
  if(__t2171t){
  __t_errcode=31;
  goto __t_failure;
  }
  sub__t410t(to,from,&__t2174t__);
  new_length=__t2174t__;
  __t2175t=0;
  neq__t158t(from,__t2175t,&__t2176t__);
  if(__t2176t__){
  __t_errcode=get__t2139t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t2178t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2178t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2179t__value,__t2178t__,1);
  new_first=__t2179t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t2180t__);
  str__t1844t(s__unsafe_ptr,__t2180t__,new_length,new_first,&__t2181t__unsafe_ptr,&__t2181t__dat__pos,&__t2181t__dat__length,&__t2181t__dat__first);
  __t2168t__unsafe_ptr=__t2181t__unsafe_ptr;
  __t2168t__dat__pos=__t2181t__dat__pos;
  __t2168t__dat__length=__t2181t__dat__length;
  __t2168t__dat__first=__t2181t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6207t=__t2168t__unsafe_ptr;
  *__t6208t=__t2168t__dat__pos;
  *__t6209t=__t2168t__dat__length;
  *__t6210t=__t2168t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t2244t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t6211t) {
  char* __t2245t__unsafe_ptr=0;
  uint64_t __t2245t__dat__pos=0;
  uint64_t __t2245t__dat__length=0;
  char __t2245t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2246t__unsafe_ptr=0;
  uint64_t __t2246t__dat__pos=0;
  uint64_t __t2246t__dat__length=0;
  char __t2246t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t2247t=0;
  uint64_t __t2248t__=0;
  uint64_t d=0;
  char __t2249t__=0;
  char __t2250t=0;
  char* __t2251t__unsafe_ptr=0;
  uint64_t __t2251t__dat__pos=0;
  uint64_t __t2251t__dat__length=0;
  char __t2251t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t2252t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1881t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2245t__unsafe_ptr,&__t2245t__dat__pos,&__t2245t__dat__length,&__t2245t__dat__first);
  stack__unsafe_ptr=__t2245t__unsafe_ptr;
  stack__dat__pos=__t2245t__dat__pos;
  stack__dat__length=__t2245t__dat__length;
  stack__dat__first=__t2245t__dat__first;
  str__t1904t(_needle,&__t2246t__unsafe_ptr,&__t2246t__dat__pos,&__t2246t__dat__length,&__t2246t__dat__first);
  needle__unsafe_ptr=__t2246t__unsafe_ptr;
  needle__dat__pos=__t2246t__dat__pos;
  needle__dat__length=__t2246t__dat__length;
  needle__dat__first=__t2246t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t402t(n,needle__dat__length,&__t2248t__);
  __t2247t=__t_complain;
  if(__t_complain){
  goto __t2247t__label;
  }
  d=__t2248t__;
  __t2247t__label:__t2247t=__t2247t==0;
  not__t42t(__t2247t,&__t2249t__);
  if(__t2249t__){
  __t2250t=0;
  goto __t_return;
  }
  __t_errcode=slice__t2165t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t2251t__unsafe_ptr,&__t2251t__dat__pos,&__t2251t__dat__length,&__t2251t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t2251t__unsafe_ptr;
  ret__dat__pos=__t2251t__dat__pos;
  ret__dat__length=__t2251t__dat__length;
  ret__dat__first=__t2251t__dat__first;
  eq__t2078t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2252t__);
  __t2250t=__t2252t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6211t=__t2250t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t779t(uint64_t to, uint64_t* __t6212t, uint64_t* __t6213t) {
  uint64_t __t780t=0;
  uint64_t from=0;
  __t780t=0;
  from=__t780t;
  goto __t_return;
  __t_return:
  *__t6212t=from;
  *__t6213t=to;
}

static inline __attribute__((always_inline)) void range__t796t(uint64_t _from, uint64_t to, uint64_t* __t6214t, uint64_t* __t6215t) {
  uint64_t __t797t=0;
  uint64_t __t798t__=0;
  uint64_t __t799t=0;
  uint64_t from=0;
  __t797t=0;
  add__t188t(__t797t,_from,&__t798t__);
  __t799t=__t798t__;
  from=__t799t;
  goto __t_return;
  __t_return:
  *__t6214t=from;
  *__t6215t=to;
}

static inline __attribute__((always_inline)) int mutget__t801t(uint64_t* __t6216t, uint64_t r__to, uint64_t skipped, uint64_t* __t6217t) {
  uint64_t r__from=*__t6216t;
  char __t802t__=0;
  uint64_t ret=0;
  uint64_t __t803t=0;
  uint64_t __t804t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(r__from,r__to,&__t802t__);
  if(__t802t__){
  __t_errcode=16;
  goto __t_failure;
  }
  ret=r__from;
  __t803t=1;
  add__t188t(ret,__t803t,&__t804t__);
  r__from=__t804t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6216t=r__from;
  *__t6217t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2330t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t6218t) {
  char* __t2331t__unsafe_ptr=0;
  uint64_t __t2331t__dat__pos=0;
  uint64_t __t2331t__dat__length=0;
  char __t2331t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2332t__unsafe_ptr=0;
  uint64_t __t2332t__dat__pos=0;
  uint64_t __t2332t__dat__length=0;
  char __t2332t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t2333t=0;
  uint64_t __t2334t__=0;
  uint64_t n=0;
  char __t2335t__=0;
  char __t2336t=0;
  uint64_t __t2337t=0;
  uint64_t __t2338t__from=0;
  uint64_t __t2338t__to=0;
  uint64_t __t2339t__from=0;
  uint64_t __t2339t__to=0;
  char __t2340t=0;
  uint64_t __t2341t__=0;
  uint64_t i=0;
  char __t2342t=0;
  uint64_t __t2343t__=0;
  char* __t2344t__unsafe_ptr=0;
  uint64_t __t2344t__dat__pos=0;
  uint64_t __t2344t__dat__length=0;
  char __t2344t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t2345t__=0;
  char __t2346t=0;
  char __t2347t=0;
  int __t_complain=0;
  str__t1881t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2331t__unsafe_ptr,&__t2331t__dat__pos,&__t2331t__dat__length,&__t2331t__dat__first);
  stack__unsafe_ptr=__t2331t__unsafe_ptr;
  stack__dat__pos=__t2331t__dat__pos;
  stack__dat__length=__t2331t__dat__length;
  stack__dat__first=__t2331t__dat__first;
  str__t1904t(_needle,&__t2332t__unsafe_ptr,&__t2332t__dat__pos,&__t2332t__dat__length,&__t2332t__dat__first);
  needle__unsafe_ptr=__t2332t__unsafe_ptr;
  needle__dat__pos=__t2332t__dat__pos;
  needle__dat__length=__t2332t__dat__length;
  needle__dat__first=__t2332t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t402t(stack__dat__length,d,&__t2334t__);
  __t2333t=__t_complain;
  if(__t_complain){
  goto __t2333t__label;
  }
  n=__t2334t__;
  __t2333t__label:__t2333t=__t2333t==0;
  not__t42t(__t2333t,&__t2335t__);
  if(__t2335t__){
  __t2336t=0;
  goto __t_return;
  }
  of__t779t(n,&__t2338t__from,&__t2338t__to);
  range__t796t(__t2338t__from,__t2338t__to,&__t2339t__from,&__t2339t__to);
  __t2337t=0-1;
  while(1){
  __t2337t=__t2337t+1;
  __t_complain=mutget__t801t(&__t2339t__from,__t2339t__to,__t2337t,&__t2341t__);
  __t2340t=__t_complain;
  if(__t_complain){
  goto __t2340t__label;
  }
  i=__t2341t__;
  __t2340t__label:__t2340t=__t2340t==0;
  if(!__t2340t){
  break;
  }
  add__t188t(i,d,&__t2343t__);
  __t_complain=slice__t2165t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t2343t__,&__t2344t__unsafe_ptr,&__t2344t__dat__pos,&__t2344t__dat__length,&__t2344t__dat__first);
  __t2342t=__t_complain;
  if(__t_complain){
  goto __t2342t__label;
  }
  sliced__unsafe_ptr=__t2344t__unsafe_ptr;
  sliced__dat__pos=__t2344t__dat__pos;
  sliced__dat__length=__t2344t__dat__length;
  sliced__dat__first=__t2344t__dat__first;
  __t2342t__label:__t2342t=__t2342t==0;
  eq__t2078t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2345t__);
  if(__t2345t__){
  __t2346t=1;
  __t2336t=__t2346t;
  goto __t_return;
  }
  }
  __t2347t=0;
  __t2336t=__t2347t;
  goto __t_return;
  __t_return:
  *__t6218t=__t2336t;
}

static inline __attribute__((always_inline)) void restore_stdout__t5584t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void stdout_to_err__t5585t(int64_t* __t6219t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t6219t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t2133t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t2134t=0;
  const char* endl=0;
  endl=__t475t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void popen__t4663t(const char* cmd, char** __t6220t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t6220t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4662t(char* unsafe_ptr, int64_t* __t6221t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t6221t=status;
}

static inline __attribute__((always_inline)) void int__t658t(uint64_t x, int64_t* __t6222t) {
  int __t659t=0;
  int __t660t=0;
  int __t661t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t6222t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t6223t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t6223t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t6224t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6224t=z;
}

static inline __attribute__((always_inline)) int open__t4664t(const char* cmd, char** __t6225t) {
  char* __t4665t__=0;
  char* unsafe_ptr=0;
  char __t4666t__=0;
  char __t4667t__=0;
  char __t4668t__=0;
  int64_t __t4669t__=0;
  int64_t status=0;
  uint64_t __t4670t=0;
  int64_t __t4671t__=0;
  char __t4672t__=0;
  char __t4673t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4663t(cmd,&__t4665t__);
  unsafe_ptr=__t4665t__;
  exists__t683t(unsafe_ptr,&__t4666t__);
  not__t42t(__t4666t__,&__t4667t__);
  if(__t4667t__){
  __t_errcode=47;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t683t(unsafe_ptr,&__t4668t__);
  if(__t4668t__){
  pclose__t4662t(unsafe_ptr,&__t4669t__);
  status=__t4669t__;
  unsafe_ptr=0;
  __t4670t=0;
  int__t658t(__t4670t,&__t4671t__);
  neq__t147t(status,__t4671t__,&__t4672t__);
  if(__t4672t__){
  __t_complain=48;
  goto __t4673t__label;
  __t4673t__label:__t4673t=__t4673t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t6225t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4675t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t6226t) {
  const char* __t4676t__cstr=0;
  char* __t4676t__str__unsafe_ptr=0;
  uint64_t __t4676t__str__dat__pos=0;
  uint64_t __t4676t__str__dat__length=0;
  char __t4676t__str__dat__first=0;
  const char* __t4678t__=0;
  char* __t4679t__unsafe_ptr=0;
  char __t4680t____t4668t__=0;
  int64_t __t4680t____t4669t__=0;
  int64_t __t4680t__status=0;
  uint64_t __t4680t____t4670t=0;
  int64_t __t4680t____t4671t__=0;
  char __t4680t____t4672t__=0;
  char __t4680t____t4673t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t2061t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4676t__cstr,&__t4676t__str__unsafe_ptr,&__t4676t__str__dat__pos,&__t4676t__str__dat__length,&__t4676t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t2071t(__t4676t__cstr,__t4676t__str__unsafe_ptr,__t4676t__str__dat__pos,__t4676t__str__dat__length,__t4676t__str__dat__first,&__t4678t__);
  __t_errcode=open__t4664t(__t4678t__,&__t4679t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t683t(__t4679t__unsafe_ptr,&__t4680t____t4668t__);
  if(__t4680t____t4668t__){
  pclose__t4662t(__t4679t__unsafe_ptr,&__t4680t____t4669t__);
  __t4680t__status=__t4680t____t4669t__;
  __t4679t__unsafe_ptr=0;
  __t4680t____t4670t=0;
  int__t658t(__t4680t____t4670t,&__t4680t____t4671t__);
  neq__t147t(__t4680t__status,__t4680t____t4671t__,&__t4680t____t4672t__);
  if(__t4680t____t4672t__){
  __t_complain=48;
  goto __t4673t__label;
  __t4673t__label:__t4680t____t4673t=__t4680t____t4673t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t6226t=__t4679t__unsafe_ptr;
  
  __t_skip_returns:free__t844t(&__t4676t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4355t(int64_t value, char* __t6227t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t6227t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4354t(int64_t value, const char** __t6228t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t6228t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t6229t) {
  const char* value=0;
  *__t6229t=value;
}

int run__t5513t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t6230t) {
  char* __t5514t__unsafe_ptr=0;
  char __t5515t____t4680t____t4668t__=0;
  int64_t __t5515t____t4680t____t4669t__=0;
  int64_t __t5515t____t4680t__status=0;
  uint64_t __t5515t____t4680t____t4670t=0;
  int64_t __t5515t____t4680t____t4671t__=0;
  char __t5515t____t4680t____t4672t__=0;
  char __t5515t____t4680t____t4673t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t5516t=0;
  int64_t error=0;
  char __t5517t__=0;
  char __t5518t__=0;
  const char* __t5519t__=0;
  const char* __t5520t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4675t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5514t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t5514t__unsafe_ptr;
  exists__t683t(__t5514t__unsafe_ptr,&__t5515t____t4680t____t4668t__);
  if(__t5515t____t4680t____t4668t__){
  pclose__t4662t(__t5514t__unsafe_ptr,&__t5515t____t4680t____t4669t__);
  __t5515t____t4680t__status=__t5515t____t4680t____t4669t__;
  __t5514t__unsafe_ptr=0;
  __t5515t____t4680t____t4670t=0;
  int__t658t(__t5515t____t4680t____t4670t,&__t5515t____t4680t____t4671t__);
  neq__t147t(__t5515t____t4680t__status,__t5515t____t4680t____t4671t__,&__t5515t____t4680t____t4672t__);
  if(__t5515t____t4680t____t4672t__){
  __t_complain=48;
  goto __t4673t__label;
  __t4673t__label:__t5515t____t4680t____t4673t=__t5515t____t4680t____t4673t==0;
  }
  }
  __t5516t=__t_complain;
  error=__t5516t;
  ok__t4355t(error,&__t5517t__);
  not__t42t(__t5517t__,&__t5518t__);
  if(__t5518t__){
  cstr__t4354t(error,&__t5519t__);
  goto __t_return;
  }
  cstr__t1t(&__t5520t__);
  __t5519t__=__t5520t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6230t=__t5519t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void exists__t1842t(const char* c, char* __t6231t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t6231t=z;
}

static inline __attribute__((always_inline)) void nn__t462t(const char* value, const char** __t6232t, const char** __t6233t) {
  const char* __t464t=0;
  __t464t=__t463t;
  goto __t_return;
  __t_return:
  *__t6232t=value;
  *__t6233t=__t464t;
}

static inline __attribute__((always_inline)) void print__t471t(const char* value, const char* endl) {
  int __t472t=0;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void set__t507t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void set__t627t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print_marker__t5549t(char colors__initialized) {
  const char* __t5551t__value=0;
  const char* __t5551t____t464t=0;
  int __t5553t=0;
  char __t5554t=0;
  char __t5555t=0;
  const char* __t5560t__value=0;
  const char* __t5560t____t464t=0;
  int __t5562t=0;
  const char* __t5565t__value=0;
  const char* __t5565t____t464t=0;
  nn__t462t(__t4375t,&__t5551t__value,&__t5551t____t464t);
  print__t471t(__t5551t__value,__t5551t____t464t);
  __t5555t=1;
  if(__t5556t!=__t5556t){
  __t5555t=0;
  }
  if(__t5555t){
  __t5554t=1;
  }
  if(__t5554t){
  set__t507t(colors__initialized);
  nn__t462t(__t5559t,&__t5560t__value,&__t5560t____t464t);
  print__t471t(__t5560t__value,__t5560t____t464t);
  }
  set__t627t(colors__initialized);
  nn__t462t(__t5546t,&__t5565t__value,&__t5565t____t464t);
  print__t471t(__t5565t__value,__t5565t____t464t);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print__t473t(const char* value) {
  int __t474t=0;
  const char* endl=0;
  endl=__t475t;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void set__t511t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[32m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print_marker__t5530t(char colors__initialized) {
  const char* __t5532t__value=0;
  const char* __t5532t____t464t=0;
  char __t5534t=0;
  char __t5535t=0;
  const char* __t5540t__value=0;
  const char* __t5540t____t464t=0;
  int __t5542t=0;
  int __t5543t=0;
  const char* __t5547t__value=0;
  const char* __t5547t____t464t=0;
  nn__t462t(__t4375t,&__t5532t__value,&__t5532t____t464t);
  print__t471t(__t5532t__value,__t5532t____t464t);
  __t5535t=1;
  if(__t5536t!=__t5536t){
  __t5535t=0;
  }
  if(__t5535t){
  __t5534t=1;
  }
  if(__t5534t){
  set__t511t(colors__initialized);
  nn__t462t(__t5539t,&__t5540t__value,&__t5540t____t464t);
  print__t471t(__t5540t__value,__t5540t____t464t);
  }
  set__t627t(colors__initialized);
  nn__t462t(__t5546t,&__t5547t__value,&__t5547t____t464t);
  print__t471t(__t5547t__value,__t5547t____t464t);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int test__t5667t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t6234t) {
  int64_t __t5669t__=0;
  const char* __t5672t__=0;
  const char* __t5673t=0;
  const char* error=0;
  int __t5674t=0;
  int __t5675t__=0;
  char __t5676t__=0;
  const char* __t5677t__=0;
  const char* __t5679t__value=0;
  const char* __t5679t____t464t=0;
  char __t5681t__=0;
  char __t5685t=0;
  char __t5690t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5585t(&__t5669t__);
  print__t2133t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t5513t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5672t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5673t=__t5672t__;
  error=__t5673t;
  not__t53t(__t5674t,&__t5675t__);
  if(should_fail){
  exists__t1842t(error,&__t5676t__);
  if(__t5676t__){
  cstr__t1t(&__t5677t__);
  error=__t5677t__;
  }
  else{
  error=__t5678t;
  }
  }
  nn__t462t(__t5597t,&__t5679t__value,&__t5679t____t464t);
  print__t471t(__t5679t__value,__t5679t____t464t);
  exists__t1842t(error,&__t5681t__);
  if(__t5681t__){
  print_marker__t5549t(colors__initialized);
  print__t473t(error);
  __t5685t=0;
  goto __t_return;
  }
  print_marker__t5530t(colors__initialized);
  print__t473t(__t5688t);
  __t5690t=1;
  __t5685t=__t5690t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6234t=__t5685t;
  
  __t_skip_returns:restore_stdout__t5584t(__t5669t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t484t(uint64_t value, const char* endl) {
  int __t485t=0;
  printf("%llu%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void nn__t469t(uint64_t value, uint64_t* __t6235t, const char** __t6236t) {
  const char* __t470t=0;
  __t470t=__t463t;
  goto __t_return;
  __t_return:
  *__t6235t=value;
  *__t6236t=__t470t;
}

static inline __attribute__((always_inline)) int _main__t5729t() {
  char* __t5731t__unsafe_ptr=0;
  uint64_t __t5731t__dat__pos=0;
  uint64_t __t5731t__dat__length=0;
  char __t5731t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5732t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5734t=0;
  char* __t5735t__unsafe_ptr=0;
  uint64_t __t5735t__unsafe_size=0;
  uint32_t __t5735t__unsafe_offset=0;
  uint32_t __t5735t__unsafe_align=0;
  char* __t5737t__buf__unsafe_ptr=0;
  uint64_t __t5737t__buf__unsafe_size=0;
  uint32_t __t5737t__buf__unsafe_offset=0;
  uint32_t __t5737t__buf__unsafe_align=0;
  uint64_t __t5737t__pos=0;
  char* __t5738t__buf__unsafe_ptr=0;
  uint64_t __t5738t__buf__unsafe_size=0;
  uint32_t __t5738t__buf__unsafe_offset=0;
  uint32_t __t5738t__buf__unsafe_align=0;
  uint64_t __t5738t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char __t5739t=0;
  char* __t5741t__unsafe_ptr=0;
  uint64_t __t5741t__dat__pos=0;
  uint64_t __t5741t__dat__length=0;
  char __t5741t__dat__first=0;
  char* preferred_backend__unsafe_ptr=0;
  uint64_t preferred_backend__dat__pos=0;
  uint64_t preferred_backend__dat__length=0;
  char preferred_backend__dat__first=0;
  int __t5750t=0;
  char* __t5752t__unsafe_ptr=0;
  uint64_t __t5752t__dat__pos=0;
  uint64_t __t5752t__dat__length=0;
  char __t5752t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  char* __t5743t__unsafe_ptr=0;
  uint64_t __t5743t__dat__pos=0;
  uint64_t __t5743t__dat__length=0;
  char __t5743t__dat__first=0;
  char* __t5745t__unsafe_ptr=0;
  uint64_t __t5745t__dat__pos=0;
  uint64_t __t5745t__dat__length=0;
  char __t5745t__dat__first=0;
  uint64_t __t5753t=0;
  uint64_t __t5754t=0;
  uint64_t counter=0;
  uint64_t __t5755t=0;
  uint64_t __t5756t=0;
  uint64_t failures=0;
  uint64_t __t5757t=0;
  char* __t5758t__unsafe_ptr=0;
  char __t5760t=0;
  char* __t5761t__unsafe_ptr=0;
  uint64_t __t5761t__dat__pos=0;
  uint64_t __t5761t__dat__length=0;
  char __t5761t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5763t__=0;
  char __t5764t__=0;
  char __t5765t__=0;
  char __t5766t=0;
  char __t5767t__=0;
  uint64_t __t5768t__=0;
  uint64_t __t5769t____t5726t=0;
  uint64_t __t5769t____t5728t__=0;
  char* __t5770t__unsafe_ptr=0;
  uint64_t __t5770t__dat__pos=0;
  uint64_t __t5770t__dat__length=0;
  char __t5770t__dat__first=0;
  char* __t5772t__unsafe_ptr=0;
  uint64_t __t5772t__dat__pos=0;
  uint64_t __t5772t__dat__length=0;
  char __t5772t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5773t=0;
  char* __t5774t__unsafe_ptr=0;
  char __t5776t=0;
  char* __t5777t__unsafe_ptr=0;
  uint64_t __t5777t__dat__pos=0;
  uint64_t __t5777t__dat__length=0;
  char __t5777t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5779t__=0;
  char __t5780t__=0;
  uint64_t __t5781t__=0;
  uint64_t __t5782t____t5726t=0;
  uint64_t __t5782t____t5728t__=0;
  uint64_t __t5783t=0;
  uint64_t __t5784t__=0;
  char __t5786t__=0;
  char should_fail=0;
  char* __t5787t__unsafe_ptr=0;
  uint64_t __t5787t__dat__pos=0;
  uint64_t __t5787t__dat__length=0;
  char __t5787t__dat__first=0;
  char* __t5788t__unsafe_ptr=0;
  uint64_t __t5788t__dat__pos=0;
  uint64_t __t5788t__dat__length=0;
  char __t5788t__dat__first=0;
  char __t5789t__=0;
  char __t5790t__=0;
  uint64_t __t5791t=0;
  uint64_t __t5792t__=0;
  int64_t __t5793t__=0;
  uint64_t __t5795t=0;
  char __t5796t__=0;
  const char* __t5810t__value=0;
  const char* __t5810t____t464t=0;
  const char* __t5800t__value=0;
  const char* __t5800t____t464t=0;
  const char* __t5805t__value=0;
  const char* __t5805t____t464t=0;
  uint64_t __t5816t__value=0;
  const char* __t5816t____t470t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1904t(__t5730t,&__t5731t__unsafe_ptr,&__t5731t__dat__pos,&__t5731t__dat__length,&__t5731t__dat__first);
  test_root__unsafe_ptr=__t5731t__unsafe_ptr;
  test_root__dat__pos=__t5731t__dat__pos;
  test_root__dat__length=__t5731t__dat__length;
  test_root__dat__first=__t5731t__dat__first;
  colors__t501t(&__t5732t__initialized);
  colors__initialized=__t5732t__initialized;
  __t5734t=128;
  __t_errcode=alloc__t1126t(__t5734t,&__t5735t__unsafe_ptr,&__t5735t__unsafe_size,&__t5735t__unsafe_offset,&__t5735t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1461t(&__t5735t__unsafe_ptr,&__t5735t__unsafe_size,&__t5735t__unsafe_offset,&__t5735t__unsafe_align,&__t5737t__buf__unsafe_ptr,&__t5737t__buf__unsafe_size,&__t5737t__buf__unsafe_offset,&__t5737t__buf__unsafe_align,&__t5737t__pos);
  __t5738t__buf__unsafe_ptr=__t5737t__buf__unsafe_ptr;
  __t5738t__buf__unsafe_size=__t5737t__buf__unsafe_size;
  __t5738t__buf__unsafe_offset=__t5737t__buf__unsafe_offset;
  __t5738t__buf__unsafe_align=__t5737t__buf__unsafe_align;
  __t5738t__pos=__t5737t__pos;
  CHARS__buf__unsafe_ptr=__t5738t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5738t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5738t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5738t__buf__unsafe_align;
  CHARS__pos=__t5738t__pos;
  __t_complain=arg_after__t4513t(__t5740t,&__t5741t__unsafe_ptr,&__t5741t__dat__pos,&__t5741t__dat__length,&__t5741t__dat__first);
  __t5739t=__t_complain;
  if(__t_complain){
  goto __t5739t__label;
  }
  preferred_backend__unsafe_ptr=__t5741t__unsafe_ptr;
  preferred_backend__dat__pos=__t5741t__dat__pos;
  preferred_backend__dat__length=__t5741t__dat__length;
  preferred_backend__dat__first=__t5741t__dat__first;
  __t5739t__label:__t5739t=__t5739t==0;
  if(__t5739t){
  __t_errcode=add__t3556t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5742t,preferred_backend__unsafe_ptr,preferred_backend__dat__pos,preferred_backend__dat__length,preferred_backend__dat__first,&__t5743t__unsafe_ptr,&__t5743t__dat__pos,&__t5743t__dat__length,&__t5743t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t3554t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5743t__unsafe_ptr,__t5743t__dat__pos,__t5743t__dat__length,__t5743t__dat__first,__t5744t,&__t5745t__unsafe_ptr,&__t5745t__dat__pos,&__t5745t__dat__length,&__t5745t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5745t__unsafe_ptr;
  command_base__dat__pos=__t5745t__dat__pos;
  command_base__dat__length=__t5745t__dat__length;
  command_base__dat__first=__t5745t__dat__first;
  }
  else{
  __t_errcode=copy__t1990t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5751t,&__t5752t__unsafe_ptr,&__t5752t__dat__pos,&__t5752t__dat__length,&__t5752t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5752t__unsafe_ptr;
  command_base__dat__pos=__t5752t__dat__pos;
  command_base__dat__length=__t5752t__dat__length;
  command_base__dat__first=__t5752t__dat__first;
  }
  __t5753t=0;
  __t5754t=__t5753t;
  counter=__t5754t;
  __t5755t=0;
  __t5756t=__t5755t;
  failures=__t5756t;
  __t_errcode=open__t5396t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5758t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5757t=0-1;
  while(1){
  __t5757t=__t5757t+1;
  __t_complain=mutget__t5479t(&__t5758t__unsafe_ptr,__t5757t,&__t5761t__unsafe_ptr,&__t5761t__dat__pos,&__t5761t__dat__length,&__t5761t__dat__first);
  __t5760t=__t_complain;
  if(__t_complain){
  goto __t5760t__label;
  }
  path__unsafe_ptr=__t5761t__unsafe_ptr;
  path__dat__pos=__t5761t__dat__pos;
  path__dat__length=__t5761t__dat__length;
  path__dat__first=__t5761t__dat__first;
  __t5760t__label:__t5760t=__t5760t==0;
  if(!__t5760t){
  break;
  }
  eq__t2085t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5762t,&__t5763t__);
  if(!__t5763t__){
  __t_errcode=is_dir__t5323t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5764t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5764t__,&__t5765t__);
  __t5766t=__t5765t__;
  }
  else{
  __t5766t=0;
  not__t42t(__t5766t,&__t5767t__);
  __t5766t=__t5767t__;
  }
  if(__t5766t){
  continue;
  }
  reuse__t5723t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5768t__);
  __t_errcode=add__t3552t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5770t__unsafe_ptr,&__t5770t__dat__pos,&__t5770t__dat__length,&__t5770t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t3554t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5770t__unsafe_ptr,__t5770t__dat__pos,__t5770t__dat__length,__t5770t__dat__first,__t5771t,&__t5772t__unsafe_ptr,&__t5772t__dat__pos,&__t5772t__dat__length,&__t5772t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5772t__unsafe_ptr;
  dir_path__dat__pos=__t5772t__dat__pos;
  dir_path__dat__length=__t5772t__dat__length;
  dir_path__dat__first=__t5772t__dat__first;
  __t_errcode=open__t5396t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5774t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5773t=0-1;
  while(1){
  __t5773t=__t5773t+1;
  __t_complain=mutget__t5479t(&__t5774t__unsafe_ptr,__t5773t,&__t5777t__unsafe_ptr,&__t5777t__dat__pos,&__t5777t__dat__length,&__t5777t__dat__first);
  __t5776t=__t_complain;
  if(__t_complain){
  goto __t5776t__label;
  }
  entry__unsafe_ptr=__t5777t__unsafe_ptr;
  entry__dat__pos=__t5777t__dat__pos;
  entry__dat__length=__t5777t__dat__length;
  entry__dat__first=__t5777t__dat__first;
  __t5776t__label:__t5776t=__t5776t==0;
  if(!__t5776t){
  break;
  }
  __t_errcode=ends_with__t2244t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5778t,&__t5779t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5779t__,&__t5780t__);
  if(__t5780t__){
  continue;
  }
  reuse__t5723t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5781t__);
  __t5783t=1;
  add__t188t(counter,__t5783t,&__t5784t__);
  counter=__t5784t__;
  contains__t2330t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5785t,&__t5786t__);
  should_fail=__t5786t__;
  __t_errcode=add__t3552t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5787t__unsafe_ptr,&__t5787t__dat__pos,&__t5787t__dat__length,&__t5787t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t3552t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5787t__unsafe_ptr,__t5787t__dat__pos,__t5787t__dat__length,__t5787t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5788t__unsafe_ptr,&__t5788t__dat__pos,&__t5788t__dat__length,&__t5788t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5667t(colors__initialized,__t5788t__unsafe_ptr,__t5788t__dat__pos,__t5788t__dat__length,__t5788t__dat__first,should_fail,&__t5789t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5789t__,&__t5790t__);
  if(__t5790t__){
  __t5791t=1;
  add__t188t(failures,__t5791t,&__t5792t__);
  failures=__t5792t__;
  }
  __t5782t____t5726t=0;
  sub__t410t(__t5781t__,__t5782t____t5726t,&__t5782t____t5728t__);
  CHARS__pos=__t5782t____t5728t__;
  }
  __t5769t____t5726t=0;
  sub__t410t(__t5768t__,__t5769t____t5726t,&__t5769t____t5728t__);
  CHARS__pos=__t5769t____t5728t__;
  closedir__t5386t(__t5774t__unsafe_ptr);
  }
  stdout_to_err__t5585t(&__t5793t__);
  __t5795t=0;
  eq__t134t(failures,__t5795t,&__t5796t__);
  if(__t5796t__){
  set__t511t(colors__initialized);
  nn__t462t(__t5799t,&__t5800t__value,&__t5800t____t464t);
  print__t471t(__t5800t__value,__t5800t____t464t);
  set__t627t(colors__initialized);
  nn__t462t(__t5804t,&__t5805t__value,&__t5805t____t464t);
  print__t471t(__t5805t__value,__t5805t____t464t);
  }
  else{
  set__t507t(colors__initialized);
  nn__t462t(__t5809t,&__t5810t__value,&__t5810t____t464t);
  print__t471t(__t5810t__value,__t5810t____t464t);
  set__t627t(colors__initialized);
  print__t484t(failures,__t5814t);
  }
  nn__t469t(counter,&__t5816t__value,&__t5816t____t470t);
  print__t484t(__t5816t__value,__t5816t____t470t);
  print__t473t(__t5818t);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:restore_stdout__t5584t(__t5793t__);
  closedir__t5386t(__t5758t__unsafe_ptr);
  free__t844t(&__t5735t__unsafe_ptr);
  if(__t5732t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5820t() {
  char __t5823t=0;
  char __t5825t__=0;
  int64_t __t5826t=0;
  const char* __t5827t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t448t();
  __t_complain=_main__t5729t();
  __t5823t=__t_complain;
  if(__t_complain){
  goto __t5823t__label;
  }
  __t5823t__label:__t5823t=__t5823t==0;
  not__t42t(__t5823t,&__t5825t__);
  if(__t5825t__){
  __t5826t=__t_complain;
  cstr__t4354t(__t5826t,&__t5827t__);
  print__t473t(__t5827t__);
  __t_errcode=66;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {
  int __t_errcode=0;
  int __t_complain=0;
  __t_argc=argc;
  __t_argv=argv;
  DECLARE_HANDLERS;
  __t_errcode=main__t5820t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}