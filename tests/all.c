#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5781t="PASSING ";
const char* const __t5528t="] ";
const char* const __t5660t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t5538t="failure";
const char* const __t5800t=" tests";
const char* const __t5518t="success";
const char* const __t5726t=" --cleanup ";
const char* const __t5796t=" out of ";
const char* const __t5712t="./tests/passing/";
const char* const __t5541t="X";
const char* const __t5722t="--testback";
const char* const __t5521t="V";
const char* const __t5753t="/";
const char* const __t5744t="..";
const char* const __t5579t=" |- ";
const char* const __t5733t="./smoll --cleanup ";
const char* const __t463t="";
const char* const __t5786t="no errors across ";
const char* const __t5767t="_fail_";
const char* const __t5760t=".s";
const char* const __t5724t="./smoll --back ";
const char* const __t4357t="[";
const char* const __t5670t="completed";
const char* const __t5791t="FAILED ";
const char* const __t475t="\n";
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
int add__t3538t(char** __t6108t, uint64_t* __t6109t, uint32_t* __t6110t, uint32_t* __t6111t, uint64_t* __t6112t, const char* _s1, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t6113t, uint64_t* __t6114t, uint64_t* __t6115t, char* __t6116t) ;
int add__t3536t(char** __t6117t, uint64_t* __t6118t, uint32_t* __t6119t, uint32_t* __t6120t, uint64_t* __t6121t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t6122t, uint64_t* __t6123t, uint64_t* __t6124t, char* __t6125t) ;
int add__t3534t(char** __t6179t, uint64_t* __t6180t, uint32_t* __t6181t, uint32_t* __t6182t, uint64_t* __t6183t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t6184t, uint64_t* __t6185t, uint64_t* __t6186t, char* __t6187t) ;
static inline __attribute__((always_inline)) void console__t448t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1787t(char** __t5961t, uint64_t* __t5962t, uint32_t* __t5963t, uint32_t* __t5964t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5961t=unsafe_ptr;
  *__t5962t=unsafe_size;
  *__t5963t=unsafe_offset;
  *__t5964t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5965t) {
  *__t5965t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5966t) {
  int value=0;
  *__t5966t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5967t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5967t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5968t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5968t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5969t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5969t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5970t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5970t=z;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t5971t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5971t=z;
}

static inline __attribute__((always_inline)) void nat__t724t(uint32_t x, uint64_t* __t5972t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5972t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5973t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5973t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5974t) {
  *__t5974t=to;
}

static inline __attribute__((always_inline)) void add__t846t(char* allocated, uint64_t offset, char** __t5975t) {
  char* element=0;
  char* __t847t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t847t__);
  goto __t_return;
  __t_return:
  *__t5975t=__t847t__;
}

static inline __attribute__((always_inline)) int get__t1191t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5976t) {
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
  *__t5976t=__t1198t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1826t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5977t, uint64_t* __t5978t, uint64_t* __t5979t, char* __t5980t) {
  goto __t_return;
  __t_return:
  *__t5977t=unsafe_ptr;
  *__t5978t=dat__pos;
  *__t5979t=dat__length;
  *__t5980t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1830t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5981t, uint64_t* __t5982t, uint64_t* __t5983t, char* __t5984t) {
  char* unsafe_ptr=0;
  uint64_t __t1831t__=0;
  uint64_t __t1832t=0;
  char __t1833t__=0;
  uint64_t __t1834t__=0;
  uint64_t __t1835t=0;
  char __t1836t__=0;
  char* __t1837t__unsafe_ptr=0;
  uint64_t __t1837t__dat__pos=0;
  uint64_t __t1837t__dat__length=0;
  char __t1837t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t724t(buf__unsafe_align,&__t1831t__);
  __t1832t=1;
  neq__t158t(__t1831t__,__t1832t,&__t1833t__);
  if(__t1833t__){
  __t_errcode=27;
  goto __t_failure;
  }
  nat__t724t(buf__unsafe_offset,&__t1834t__);
  __t1835t=0;
  neq__t158t(__t1834t__,__t1835t,&__t1836t__);
  if(__t1836t__){
  __t_errcode=28;
  goto __t_failure;
  }
  str__t1826t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1837t__unsafe_ptr,&__t1837t__dat__pos,&__t1837t__dat__length,&__t1837t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5981t=__t1837t__unsafe_ptr;
  *__t5982t=__t1837t__dat__pos;
  *__t5983t=__t1837t__dat__length;
  *__t5984t=__t1837t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1864t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5985t, uint64_t* __t5986t, uint64_t* __t5987t, char* __t5988t) {
  uint64_t __t1865t=0;
  char __t1866t__=0;
  char* __t1868t__=0;
  char __t1869t__value=0;
  char first=0;
  char* __t1870t__unsafe_ptr=0;
  uint64_t __t1870t__dat__pos=0;
  uint64_t __t1870t__dat__length=0;
  char __t1870t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1865t=0;
  neq__t158t(length,__t1865t,&__t1866t__);
  if(__t1866t__){
  __t_errcode=get__t1191t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1868t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1868t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1869t__value,__t1868t__,1);
  first=__t1869t__value;
  }
  __t_errcode=str__t1830t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1870t__unsafe_ptr,&__t1870t__dat__pos,&__t1870t__dat__length,&__t1870t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5985t=__t1870t__unsafe_ptr;
  *__t5986t=__t1870t__dat__pos;
  *__t5987t=__t1870t__dat__length;
  *__t5988t=__t1870t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1886t(const char* c, char** __t5989t, uint64_t* __t5990t, uint64_t* __t5991t, char* __t5992t) {
  char* __t1887t__unsafe_ptr=0;
  uint64_t __t1887t__unsafe_size=0;
  uint32_t __t1887t__unsafe_offset=0;
  uint32_t __t1887t__unsafe_align=0;
  char* __t1888t__unsafe_ptr=0;
  uint64_t __t1888t__unsafe_size=0;
  uint32_t __t1888t__unsafe_offset=0;
  uint32_t __t1888t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1889t__=0;
  uint64_t length=0;
  uint64_t __t1890t=0;
  uint64_t __t1891t__=0;
  char __t1892t=0;
  uint64_t __t1893t=0;
  char* __t1895t__unsafe_ptr=0;
  uint64_t __t1895t__dat__pos=0;
  uint64_t __t1895t__dat__length=0;
  char __t1895t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1787t(&__t1887t__unsafe_ptr,&__t1887t__unsafe_size,&__t1887t__unsafe_offset,&__t1887t__unsafe_align);
  __t1888t__unsafe_ptr=__t1887t__unsafe_ptr;
  __t1888t__unsafe_size=__t1887t__unsafe_size;
  __t1888t__unsafe_offset=__t1887t__unsafe_offset;
  __t1888t__unsafe_align=__t1887t__unsafe_align;
  buf__unsafe_ptr=__t1888t__unsafe_ptr;
  buf__unsafe_size=__t1888t__unsafe_size;
  buf__unsafe_offset=__t1888t__unsafe_offset;
  buf__unsafe_align=__t1888t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1889t__);
  buf__unsafe_ptr=__t1889t__;
  if(c){
  length=strlen(c);
  }
  __t1890t=1;
  add__t188t(length,__t1890t,&__t1891t__);
  buf__unsafe_size=__t1891t__;
  __t1893t=0;
  __t_complain=str__t1864t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1893t,length,&__t1895t__unsafe_ptr,&__t1895t__dat__pos,&__t1895t__dat__length,&__t1895t__dat__first);
  __t1892t=__t_complain;
  if(__t_complain){
  goto __t1892t__label;
  }
  ret__unsafe_ptr=__t1895t__unsafe_ptr;
  ret__dat__pos=__t1895t__dat__pos;
  ret__dat__length=__t1895t__dat__length;
  ret__dat__first=__t1895t__dat__first;
  __t1892t__label:__t1892t=__t1892t==0;
  goto __t_return;
  __t_return:
  *__t5989t=ret__unsafe_ptr;
  *__t5990t=ret__dat__pos;
  *__t5991t=ret__dat__length;
  *__t5992t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t500t(char* __t5993t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5993t=supports;
}

static inline __attribute__((always_inline)) void colors__t501t(char* __t5994t) {
  char __t502t__=0;
  char initialized=0;
  supports_ansi__t500t(&__t502t__);
  initialized=__t502t__;
  goto __t_return;
  __t_return:
  *__t5994t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1128t(char** __t5995t, uint64_t* __t5996t, uint32_t* __t5997t, uint32_t* __t5998t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5995t=unsafe_ptr;
  *__t5996t=unsafe_size;
  *__t5997t=unsafe_offset;
  *__t5998t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t844t(char** __t5999t) {
  char* allocated=*__t5999t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t5999t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t6000t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6000t=z;
}

static inline __attribute__((always_inline)) void zero__t845t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t683t(char* x, char* __t6001t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6001t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t6002t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6002t=z;
}

static inline __attribute__((always_inline)) int alloc__t828t(uint64_t bytes, char** __t6003t) {
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
  *__t6003t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t971t(char** __t6004t, uint64_t* __t6005t, uint32_t* __t6006t, uint32_t* __t6007t, uint64_t size, char** __t6008t, uint64_t* __t6009t, uint32_t* __t6010t, uint32_t* __t6011t) {
  char* buffer__unsafe_ptr=*__t6004t;
  uint64_t buffer__unsafe_size=*__t6005t;
  uint32_t buffer__unsafe_offset=*__t6006t;
  uint32_t buffer__unsafe_align=*__t6007t;
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
  *__t6004t=buffer__unsafe_ptr;
  *__t6005t=buffer__unsafe_size;
  *__t6006t=buffer__unsafe_offset;
  *__t6007t=buffer__unsafe_align;
  *__t6008t=buffer__unsafe_ptr;
  *__t6009t=buffer__unsafe_size;
  *__t6010t=buffer__unsafe_offset;
  *__t6011t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int alloc__t1126t(uint64_t size, char** __t6012t, uint64_t* __t6013t, uint32_t* __t6014t, uint32_t* __t6015t) {
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
  *__t6012t=ret__unsafe_ptr;
  *__t6013t=ret__unsafe_size;
  *__t6014t=ret__unsafe_offset;
  *__t6015t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1440t(char** __t6016t, uint64_t* __t6017t, uint32_t* __t6018t, uint32_t* __t6019t, uint64_t _pos, char** __t6020t, uint64_t* __t6021t, uint32_t* __t6022t, uint32_t* __t6023t, uint64_t* __t6024t) {
  char* buf__unsafe_ptr=*__t6016t;
  uint64_t buf__unsafe_size=*__t6017t;
  uint32_t buf__unsafe_offset=*__t6018t;
  uint32_t buf__unsafe_align=*__t6019t;
  uint64_t __t1441t=0;
  uint64_t pos=0;
  __t1441t=_pos;
  pos=__t1441t;
  goto __t_return;
  __t_return:
  *__t6016t=buf__unsafe_ptr;
  *__t6017t=buf__unsafe_size;
  *__t6018t=buf__unsafe_offset;
  *__t6019t=buf__unsafe_align;
  *__t6020t=buf__unsafe_ptr;
  *__t6021t=buf__unsafe_size;
  *__t6022t=buf__unsafe_offset;
  *__t6023t=buf__unsafe_align;
  *__t6024t=pos;
}

static inline __attribute__((always_inline)) void arena__t1443t(char** __t6025t, uint64_t* __t6026t, uint32_t* __t6027t, uint32_t* __t6028t, char** __t6029t, uint64_t* __t6030t, uint32_t* __t6031t, uint32_t* __t6032t, uint64_t* __t6033t) {
  char* buf__unsafe_ptr=*__t6025t;
  uint64_t buf__unsafe_size=*__t6026t;
  uint32_t buf__unsafe_offset=*__t6027t;
  uint32_t buf__unsafe_align=*__t6028t;
  uint64_t __t1444t=0;
  char* __t1445t__buf__unsafe_ptr=0;
  uint64_t __t1445t__buf__unsafe_size=0;
  uint32_t __t1445t__buf__unsafe_offset=0;
  uint32_t __t1445t__buf__unsafe_align=0;
  uint64_t __t1445t__pos=0;
  __t1444t=0;
  arena__t1440t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1444t,&__t1445t__buf__unsafe_ptr,&__t1445t__buf__unsafe_size,&__t1445t__buf__unsafe_offset,&__t1445t__buf__unsafe_align,&__t1445t__pos);
  goto __t_return;
  __t_return:
  *__t6025t=buf__unsafe_ptr;
  *__t6026t=buf__unsafe_size;
  *__t6027t=buf__unsafe_offset;
  *__t6028t=buf__unsafe_align;
  *__t6029t=__t1445t__buf__unsafe_ptr;
  *__t6030t=__t1445t__buf__unsafe_size;
  *__t6031t=__t1445t__buf__unsafe_offset;
  *__t6032t=__t1445t__buf__unsafe_align;
  *__t6033t=__t1445t__pos;
}

static inline __attribute__((always_inline)) void argument____t_buffer____buffer__t4482t(char** __t6034t, uint64_t* __t6035t, uint32_t* __t6036t, uint32_t* __t6037t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t6034t=unsafe_ptr;
  *__t6035t=unsafe_size;
  *__t6036t=unsafe_offset;
  *__t6037t=unsafe_align;
}

static inline __attribute__((always_inline)) void args__t4481t(char** __t6038t, uint64_t* __t6039t, uint32_t* __t6040t, uint32_t* __t6041t) {
  char* __t4484t__unsafe_ptr=0;
  uint64_t __t4484t__unsafe_size=0;
  uint32_t __t4484t__unsafe_offset=0;
  uint32_t __t4484t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  argument____t_buffer____buffer__t4482t(&__t4484t__unsafe_ptr,&__t4484t__unsafe_size,&__t4484t__unsafe_offset,&__t4484t__unsafe_align);
  ret__unsafe_ptr=__t4484t__unsafe_ptr;
  ret__unsafe_size=__t4484t__unsafe_size;
  ret__unsafe_offset=__t4484t__unsafe_offset;
  ret__unsafe_align=__t4484t__unsafe_align;
  ret__unsafe_ptr=(char*)__t_argv;
  ret__unsafe_size=__t_argc;
  goto __t_return;
  __t_return:
  *__t6038t=ret__unsafe_ptr;
  *__t6039t=ret__unsafe_size;
  *__t6040t=ret__unsafe_offset;
  *__t6041t=ret__unsafe_align;
}

void str__t4479t(const char* arg__unsafe_value, char** __t6042t, uint64_t* __t6043t, uint64_t* __t6044t, char* __t6045t) {
  char* __t4480t__unsafe_ptr=0;
  uint64_t __t4480t__dat__pos=0;
  uint64_t __t4480t__dat__length=0;
  char __t4480t__dat__first=0;
  str__t1886t(arg__unsafe_value,&__t4480t__unsafe_ptr,&__t4480t__dat__pos,&__t4480t__dat__length,&__t4480t__dat__first);
  goto __t_return;
  __t_return:
  *__t6042t=__t4480t__unsafe_ptr;
  *__t6043t=__t4480t__dat__pos;
  *__t6044t=__t4480t__dat__length;
  *__t6045t=__t4480t__dat__first;
}

void char__t1898t(const char* s, char* __t6046t) {
  char* __t1899t__unsafe_ptr=0;
  uint64_t __t1899t__dat__pos=0;
  uint64_t __t1899t__dat__length=0;
  char __t1899t__dat__first=0;
  str__t1886t(s,&__t1899t__unsafe_ptr,&__t1899t__dat__pos,&__t1899t__dat__length,&__t1899t__dat__first);
  goto __t_return;
  __t_return:
  *__t6046t=__t1899t__dat__first;
}

static inline __attribute__((always_inline)) void neq__t1901t(char x, char y, char* __t6047t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t6047t=z;
}

static inline __attribute__((always_inline)) void len__t1896t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t6048t) {
  goto __t_return;
  __t_return:
  *__t6048t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t2060t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t6049t) {
  uint64_t __t2061t__=0;
  uint64_t n=0;
  uint64_t __t2062t__=0;
  char __t2063t__=0;
  char __t2064t=0;
  char __t2065t__=0;
  char __t2066t=0;
  char z=0;
  len__t1896t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t2061t__);
  n=__t2061t__;
  len__t1896t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t2062t__);
  neq__t158t(n,__t2062t__,&__t2063t__);
  if(__t2063t__){
  __t2064t=0;
  goto __t_return;
  }
  neq__t1901t(x__dat__first,y__dat__first,&__t2065t__);
  if(__t2065t__){
  __t2066t=0;
  __t2064t=__t2066t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t2064t=z;
  goto __t_return;
  __t_return:
  *__t6049t=__t2064t;
}

void eq__t2073t(const char* x, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t6050t) {
  char __t2074t__=0;
  char __t2075t__=0;
  char __t2076t=0;
  char* __t2077t__unsafe_ptr=0;
  uint64_t __t2077t__dat__pos=0;
  uint64_t __t2077t__dat__length=0;
  char __t2077t__dat__first=0;
  char __t2078t__=0;
  char__t1898t(x,&__t2074t__);
  neq__t1901t(y__dat__first,__t2074t__,&__t2075t__);
  if(__t2075t__){
  __t2076t=0;
  goto __t_return;
  }
  str__t1886t(x,&__t2077t__unsafe_ptr,&__t2077t__dat__pos,&__t2077t__dat__length,&__t2077t__dat__first);
  eq__t2060t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,__t2077t__unsafe_ptr,__t2077t__dat__pos,__t2077t__dat__length,__t2077t__dat__first,&__t2078t__);
  __t2076t=__t2078t__;
  goto __t_return;
  __t_return:
  *__t6050t=__t2076t;
}

static inline __attribute__((always_inline)) void len__t1199t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t6051t) {
  goto __t_return;
  __t_return:
  *__t6051t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t6052t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6052t=z;
}

static inline __attribute__((always_inline)) int arg_after__t4495t(const char* flag, char** __t6053t, uint64_t* __t6054t, uint64_t* __t6055t, char* __t6056t) {
  char* __t4496t__unsafe_ptr=0;
  uint64_t __t4496t__unsafe_size=0;
  uint32_t __t4496t__unsafe_offset=0;
  uint32_t __t4496t__unsafe_align=0;
  char* args__unsafe_ptr=0;
  uint64_t args__unsafe_size=0;
  uint32_t args__unsafe_offset=0;
  uint32_t args__unsafe_align=0;
  uint64_t __t4497t=0;
  char __t4498t=0;
  char* __t4499t__=0;
  const char* __t4500t__unsafe_value=0;
  const char* arg__unsafe_value=0;
  char* __t4501t__unsafe_ptr=0;
  uint64_t __t4501t__dat__pos=0;
  uint64_t __t4501t__dat__length=0;
  char __t4501t__dat__first=0;
  char __t4502t__=0;
  uint64_t __t4503t=0;
  uint64_t __t4504t__=0;
  uint64_t __t4505t__=0;
  char __t4506t__=0;
  char __t4507t=0;
  uint64_t __t4508t=0;
  uint64_t __t4509t__=0;
  char* __t4511t__=0;
  const char* __t4512t__unsafe_value=0;
  char* __t4513t__unsafe_ptr=0;
  uint64_t __t4513t__dat__pos=0;
  uint64_t __t4513t__dat__length=0;
  char __t4513t__dat__first=0;
  int __t4514t=0;
  int __t_errcode=0;
  int __t_complain=0;
  args__t4481t(&__t4496t__unsafe_ptr,&__t4496t__unsafe_size,&__t4496t__unsafe_offset,&__t4496t__unsafe_align);
  args__unsafe_ptr=__t4496t__unsafe_ptr;
  args__unsafe_size=__t4496t__unsafe_size;
  args__unsafe_offset=__t4496t__unsafe_offset;
  args__unsafe_align=__t4496t__unsafe_align;
  __t4497t=0-1;
  while(1){
  __t4497t=__t4497t+1;
  __t_complain=get__t1191t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4497t,&__t4499t__);
  __t4498t=__t_complain;
  if(__t_complain){
  goto __t4498t__label;
  }
  if(!__t4499t__){
  __t_complain=2;
  goto __t4498t__label;
  }
  else{
  memcpy(&__t4500t__unsafe_value,__t4499t__,8);
  }
  arg__unsafe_value=__t4500t__unsafe_value;
  __t4498t__label:__t4498t=__t4498t==0;
  if(!__t4498t){
  break;
  }
  str__t4479t(arg__unsafe_value,&__t4501t__unsafe_ptr,&__t4501t__dat__pos,&__t4501t__dat__length,&__t4501t__dat__first);
  eq__t2073t(flag,__t4501t__unsafe_ptr,__t4501t__dat__pos,__t4501t__dat__length,__t4501t__dat__first,&__t4502t__);
  if(__t4502t__){
  __t4503t=1;
  add__t188t(__t4497t,__t4503t,&__t4504t__);
  len__t1199t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,&__t4505t__);
  lt__t302t(__t4504t__,__t4505t__,&__t4506t__);
  __t4507t=__t4506t__;
  }
  else{
  __t4507t=0;
  }
  if(__t4507t){
  __t4508t=1;
  add__t188t(__t4497t,__t4508t,&__t4509t__);
  __t_errcode=get__t1191t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4509t__,&__t4511t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4511t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4512t__unsafe_value,__t4511t__,8);
  str__t4479t(__t4512t__unsafe_value,&__t4513t__unsafe_ptr,&__t4513t__dat__pos,&__t4513t__dat__length,&__t4513t__dat__first);
  goto __t_return;
  }
  }
  __t_errcode=45;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6053t=__t4513t__unsafe_ptr;
  *__t6054t=__t4513t__dat__pos;
  *__t6055t=__t4513t__dat__length;
  *__t6056t=__t4513t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1863t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t6057t, uint64_t* __t6058t, uint64_t* __t6059t, char* __t6060t) {
  goto __t_return;
  __t_return:
  *__t6057t=other__unsafe_ptr;
  *__t6058t=other__dat__pos;
  *__t6059t=other__dat__length;
  *__t6060t=other__dat__first;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t6061t) {
  int value=0;
  *__t6061t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t6062t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t6062t=__t54t__;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t6063t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t6063t=z;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t6064t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6064t=z;
}

static inline __attribute__((always_inline)) void allocated__t1202t(char** __t6065t, uint64_t* __t6066t, uint32_t* __t6067t, uint32_t* __t6068t, uint64_t pos, char** __t6069t, uint64_t* __t6070t, uint32_t* __t6071t, uint32_t* __t6072t, uint64_t* __t6073t) {
  char* buf__unsafe_ptr=*__t6065t;
  uint64_t buf__unsafe_size=*__t6066t;
  uint32_t buf__unsafe_offset=*__t6067t;
  uint32_t buf__unsafe_align=*__t6068t;
  goto __t_return;
  __t_return:
  *__t6065t=buf__unsafe_ptr;
  *__t6066t=buf__unsafe_size;
  *__t6067t=buf__unsafe_offset;
  *__t6068t=buf__unsafe_align;
  *__t6069t=buf__unsafe_ptr;
  *__t6070t=buf__unsafe_size;
  *__t6071t=buf__unsafe_offset;
  *__t6072t=buf__unsafe_align;
  *__t6073t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1471t(char** __t6074t, uint64_t* __t6075t, uint32_t* __t6076t, uint32_t* __t6077t, uint64_t* __t6078t, uint64_t length, char** __t6079t, uint64_t* __t6080t, uint32_t* __t6081t, uint32_t* __t6082t, uint64_t* __t6083t) {
  char* allocator__buf__unsafe_ptr=*__t6074t;
  uint64_t allocator__buf__unsafe_size=*__t6075t;
  uint32_t allocator__buf__unsafe_offset=*__t6076t;
  uint32_t allocator__buf__unsafe_align=*__t6077t;
  uint64_t allocator__pos=*__t6078t;
  int __t1472t=0;
  uint64_t __t1473t__=0;
  uint64_t next_pos=0;
  uint64_t __t1474t__=0;
  char __t1475t__=0;
  uint64_t __t1476t=0;
  uint64_t __t1477t__=0;
  uint64_t pos=0;
  char* __t1478t__buf__unsafe_ptr=0;
  uint64_t __t1478t__buf__unsafe_size=0;
  uint32_t __t1478t__buf__unsafe_offset=0;
  uint32_t __t1478t__buf__unsafe_align=0;
  uint64_t __t1478t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1473t__);
  next_pos=__t1473t__;
  len__t1199t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1474t__);
  gt__t326t(next_pos,__t1474t__,&__t1475t__);
  if(__t1475t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1476t=0;
  add__t188t(allocator__pos,__t1476t,&__t1477t__);
  pos=__t1477t__;
  allocator__pos=next_pos;
  allocated__t1202t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1478t__buf__unsafe_ptr,&__t1478t__buf__unsafe_size,&__t1478t__buf__unsafe_offset,&__t1478t__buf__unsafe_align,&__t1478t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6074t=allocator__buf__unsafe_ptr;
  *__t6075t=allocator__buf__unsafe_size;
  *__t6076t=allocator__buf__unsafe_offset;
  *__t6077t=allocator__buf__unsafe_align;
  *__t6078t=allocator__pos;
  *__t6079t=__t1478t__buf__unsafe_ptr;
  *__t6080t=__t1478t__buf__unsafe_size;
  *__t6081t=__t1478t__buf__unsafe_offset;
  *__t6082t=__t1478t__buf__unsafe_align;
  *__t6083t=__t1478t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1449t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t6084t, uint64_t* __t6085t, uint32_t* __t6086t, uint32_t* __t6087t, uint64_t* __t6088t) {
  char* __t1450t__unsafe_ptr=0;
  uint64_t __t1450t__unsafe_size=0;
  uint32_t __t1450t__unsafe_offset=0;
  uint32_t __t1450t__unsafe_align=0;
  uint64_t __t1451t=0;
  __t1450t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1450t__unsafe_size=self__buf__unsafe_size;
  __t1450t__unsafe_offset=self__buf__unsafe_offset;
  __t1450t__unsafe_align=self__buf__unsafe_align;
  __t1451t=self__pos;
  goto __t_return;
  __t_return:
  *__t6084t=__t1450t__unsafe_ptr;
  *__t6085t=__t1450t__unsafe_size;
  *__t6086t=__t1450t__unsafe_offset;
  *__t6087t=__t1450t__unsafe_align;
  *__t6088t=__t1451t;
}

static inline __attribute__((always_inline)) int copy__t1967t(char** __t6089t, uint64_t* __t6090t, uint32_t* __t6091t, uint32_t* __t6092t, uint64_t* __t6093t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t6094t, uint64_t* __t6095t, uint64_t* __t6096t, char* __t6097t) {
  char* CHARS__buf__unsafe_ptr=*__t6089t;
  uint64_t CHARS__buf__unsafe_size=*__t6090t;
  uint32_t CHARS__buf__unsafe_offset=*__t6091t;
  uint32_t CHARS__buf__unsafe_align=*__t6092t;
  uint64_t CHARS__pos=*__t6093t;
  char* __t1968t__unsafe_ptr=0;
  uint64_t __t1968t__dat__pos=0;
  uint64_t __t1968t__dat__length=0;
  char __t1968t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1969t__buf__unsafe_ptr=0;
  uint64_t __t1969t__buf__unsafe_size=0;
  uint32_t __t1969t__buf__unsafe_offset=0;
  uint32_t __t1969t__buf__unsafe_align=0;
  uint64_t __t1969t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1970t=0;
  char* __t1971t__unsafe_ptr=0;
  uint64_t __t1971t__dat__pos=0;
  uint64_t __t1971t__dat__length=0;
  char __t1971t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1863t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1968t__unsafe_ptr,&__t1968t__dat__pos,&__t1968t__dat__length,&__t1968t__dat__first);
  other__unsafe_ptr=__t1968t__unsafe_ptr;
  other__dat__pos=__t1968t__dat__pos;
  other__dat__length=__t1968t__dat__length;
  other__dat__first=__t1968t__dat__first;
  __t_errcode=alloc__t1471t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1969t__buf__unsafe_ptr,&__t1969t__buf__unsafe_size,&__t1969t__buf__unsafe_offset,&__t1969t__buf__unsafe_align,&__t1969t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1969t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1969t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1969t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1969t__buf__unsafe_align;
  surface__pos=__t1969t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1830t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1971t__unsafe_ptr,&__t1971t__dat__pos,&__t1971t__dat__length,&__t1971t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6089t=CHARS__buf__unsafe_ptr;
  *__t6090t=CHARS__buf__unsafe_size;
  *__t6091t=CHARS__buf__unsafe_offset;
  *__t6092t=CHARS__buf__unsafe_align;
  *__t6093t=CHARS__pos;
  *__t6094t=__t1971t__unsafe_ptr;
  *__t6095t=__t1971t__dat__pos;
  *__t6096t=__t1971t__dat__length;
  *__t6097t=__t1971t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1446t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t6098t, uint64_t* __t6099t, uint32_t* __t6100t, uint32_t* __t6101t, uint64_t* __t6102t) {
  char* __t1447t__unsafe_ptr=0;
  uint64_t __t1447t__unsafe_size=0;
  uint32_t __t1447t__unsafe_offset=0;
  uint32_t __t1447t__unsafe_align=0;
  uint64_t __t1448t=0;
  __t1447t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1447t__unsafe_size=self__buf__unsafe_size;
  __t1447t__unsafe_offset=self__buf__unsafe_offset;
  __t1447t__unsafe_align=self__buf__unsafe_align;
  __t1448t=self__pos;
  goto __t_return;
  __t_return:
  *__t6098t=__t1447t__unsafe_ptr;
  *__t6099t=__t1447t__unsafe_size;
  *__t6100t=__t1447t__unsafe_offset;
  *__t6101t=__t1447t__unsafe_align;
  *__t6102t=__t1448t;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t6103t) {
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
  *__t6103t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1882t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t6104t, uint64_t* __t6105t, uint64_t* __t6106t, char* __t6107t) {
  uint64_t __t1884t__=0;
  char* __t1885t__unsafe_ptr=0;
  uint64_t __t1885t__dat__pos=0;
  uint64_t __t1885t__dat__length=0;
  char __t1885t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(endpos,pos,&__t1884t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1864t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1884t__,&__t1885t__unsafe_ptr,&__t1885t__dat__pos,&__t1885t__dat__length,&__t1885t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6104t=__t1885t__unsafe_ptr;
  *__t6105t=__t1885t__dat__pos;
  *__t6106t=__t1885t__dat__length;
  *__t6107t=__t1885t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t3538t(char** __t6108t, uint64_t* __t6109t, uint32_t* __t6110t, uint32_t* __t6111t, uint64_t* __t6112t, const char* _s1, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t6113t, uint64_t* __t6114t, uint64_t* __t6115t, char* __t6116t) {
  char* CHARS__buf__unsafe_ptr=*__t6108t;
  uint64_t CHARS__buf__unsafe_size=*__t6109t;
  uint32_t CHARS__buf__unsafe_offset=*__t6110t;
  uint32_t CHARS__buf__unsafe_align=*__t6111t;
  uint64_t CHARS__pos=*__t6112t;
  char* __t3539t__unsafe_ptr=0;
  uint64_t __t3539t__dat__pos=0;
  uint64_t __t3539t__dat__length=0;
  char __t3539t__dat__first=0;
  char* __t5811t__unsafe_ptr=0;
  uint64_t __t5811t__dat__pos=0;
  uint64_t __t5811t__dat__length=0;
  char __t5811t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t5812t__unsafe_ptr=0;
  uint64_t __t5812t__dat__pos=0;
  uint64_t __t5812t__dat__length=0;
  char __t5812t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t5813t=0;
  int __t5814t__=0;
  int __t5815t=0;
  char* peek_allocator__buf__unsafe_ptr=0;
  uint64_t peek_allocator__buf__unsafe_size=0;
  uint32_t peek_allocator__buf__unsafe_offset=0;
  uint32_t peek_allocator__buf__unsafe_align=0;
  uint64_t peek_allocator__pos=0;
  char __t5816t__=0;
  uint64_t __t5817t__=0;
  char __t5818t__=0;
  char __t5819t=0;
  uint64_t __t5820t__=0;
  char __t5821t__=0;
  char __t5822t=0;
  uint64_t __t5823t__=0;
  char* __t5824t__buf__unsafe_ptr=0;
  uint64_t __t5824t__buf__unsafe_size=0;
  uint32_t __t5824t__buf__unsafe_offset=0;
  uint32_t __t5824t__buf__unsafe_align=0;
  uint64_t __t5824t__pos=0;
  char* __t5825t____t1450t__unsafe_ptr=0;
  uint64_t __t5825t____t1450t__unsafe_size=0;
  uint32_t __t5825t____t1450t__unsafe_offset=0;
  uint32_t __t5825t____t1450t__unsafe_align=0;
  uint64_t __t5825t____t1451t=0;
  char* __t5826t__buf__unsafe_ptr=0;
  uint64_t __t5826t__buf__unsafe_size=0;
  uint32_t __t5826t__buf__unsafe_offset=0;
  uint32_t __t5826t__buf__unsafe_align=0;
  uint64_t __t5826t__pos=0;
  char* __t5827t__buf__unsafe_ptr=0;
  uint64_t __t5827t__buf__unsafe_size=0;
  uint32_t __t5827t__buf__unsafe_offset=0;
  uint32_t __t5827t__buf__unsafe_align=0;
  uint64_t __t5827t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t5828t__unsafe_ptr=0;
  uint64_t __t5828t__dat__pos=0;
  uint64_t __t5828t__dat__length=0;
  char __t5828t__dat__first=0;
  char* __t5829t____t1447t__unsafe_ptr=0;
  uint64_t __t5829t____t1447t__unsafe_size=0;
  uint32_t __t5829t____t1447t__unsafe_offset=0;
  uint32_t __t5829t____t1447t__unsafe_align=0;
  uint64_t __t5829t____t1448t=0;
  uint64_t __t5831t=0;
  uint64_t __t5832t__=0;
  char* __t5833t__unsafe_ptr=0;
  uint64_t __t5833t__dat__pos=0;
  uint64_t __t5833t__dat__length=0;
  char __t5833t__dat__first=0;
  char __t5834t__=0;
  char __t5835t__=0;
  char __t5836t=0;
  uint64_t __t5837t__=0;
  char __t5838t__=0;
  char __t5839t=0;
  uint64_t __t5840t__=0;
  char* __t5842t__unsafe_ptr=0;
  uint64_t __t5842t__dat__pos=0;
  uint64_t __t5842t__dat__length=0;
  char __t5842t__dat__first=0;
  uint64_t __t5843t__=0;
  uint64_t __t5844t__=0;
  uint64_t __t5845t__=0;
  uint64_t len_sums=0;
  int __t5846t=0;
  int __t5847t=0;
  int __t5848t=0;
  uint64_t prev_pos=0;
  char* __t5849t__buf__unsafe_ptr=0;
  uint64_t __t5849t__buf__unsafe_size=0;
  uint32_t __t5849t__buf__unsafe_offset=0;
  uint32_t __t5849t__buf__unsafe_align=0;
  uint64_t __t5849t__pos=0;
  char* __t5850t____t1450t__unsafe_ptr=0;
  uint64_t __t5850t____t1450t__unsafe_size=0;
  uint32_t __t5850t____t1450t__unsafe_offset=0;
  uint32_t __t5850t____t1450t__unsafe_align=0;
  uint64_t __t5850t____t1451t=0;
  char* __t5851t__buf__unsafe_ptr=0;
  uint64_t __t5851t__buf__unsafe_size=0;
  uint32_t __t5851t__buf__unsafe_offset=0;
  uint32_t __t5851t__buf__unsafe_align=0;
  uint64_t __t5851t__pos=0;
  char* __t5852t__buf__unsafe_ptr=0;
  uint64_t __t5852t__buf__unsafe_size=0;
  uint32_t __t5852t__buf__unsafe_offset=0;
  uint32_t __t5852t__buf__unsafe_align=0;
  uint64_t __t5852t__pos=0;
  char* __t5853t__unsafe_ptr=0;
  uint64_t __t5853t__dat__pos=0;
  uint64_t __t5853t__dat__length=0;
  char __t5853t__dat__first=0;
  char* __t5854t__unsafe_ptr=0;
  uint64_t __t5854t__dat__pos=0;
  uint64_t __t5854t__dat__length=0;
  char __t5854t__dat__first=0;
  char __t5855t=0;
  char* __t5856t____t1447t__unsafe_ptr=0;
  uint64_t __t5856t____t1447t__unsafe_size=0;
  uint32_t __t5856t____t1447t__unsafe_offset=0;
  uint32_t __t5856t____t1447t__unsafe_align=0;
  uint64_t __t5856t____t1448t=0;
  uint64_t __t5858t=0;
  uint64_t __t5859t__=0;
  char* __t5860t__unsafe_ptr=0;
  uint64_t __t5860t__dat__pos=0;
  uint64_t __t5860t__dat__length=0;
  char __t5860t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1886t(_s1,&__t5811t__unsafe_ptr,&__t5811t__dat__pos,&__t5811t__dat__length,&__t5811t__dat__first);
  s1__unsafe_ptr=__t5811t__unsafe_ptr;
  s1__dat__pos=__t5811t__dat__pos;
  s1__dat__length=__t5811t__dat__length;
  s1__dat__first=__t5811t__dat__first;
  str__t1863t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t5812t__unsafe_ptr,&__t5812t__dat__pos,&__t5812t__dat__length,&__t5812t__dat__first);
  s2__unsafe_ptr=__t5812t__unsafe_ptr;
  s2__dat__pos=__t5812t__dat__pos;
  s2__dat__length=__t5812t__dat__length;
  s2__dat__first=__t5812t__dat__first;
  not__t53t(__t5813t,&__t5814t__);
  peek_allocator__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  peek_allocator__buf__unsafe_size=CHARS__buf__unsafe_size;
  peek_allocator__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  peek_allocator__buf__unsafe_align=CHARS__buf__unsafe_align;
  peek_allocator__pos=CHARS__pos;
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5816t__);
  if(__t5816t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t5817t__);
  eq__t134t(peek_allocator__pos,__t5817t__,&__t5818t__);
  __t5819t=__t5818t__;
  }
  if(__t5819t){
  add__t188t(peek_allocator__pos,s2__dat__length,&__t5820t__);
  lt__t302t(__t5820t__,peek_allocator__buf__unsafe_size,&__t5821t__);
  __t5822t=__t5821t__;
  }
  if(__t5822t){
  len__t1896t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5823t__);
  __t_errcode=alloc__t1471t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5823t__,&__t5824t__buf__unsafe_ptr,&__t5824t__buf__unsafe_size,&__t5824t__buf__unsafe_offset,&__t5824t__buf__unsafe_align,&__t5824t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1449t(__t5824t__buf__unsafe_ptr,__t5824t__buf__unsafe_size,__t5824t__buf__unsafe_offset,__t5824t__buf__unsafe_align,__t5824t__pos,&__t5825t____t1450t__unsafe_ptr,&__t5825t____t1450t__unsafe_size,&__t5825t____t1450t__unsafe_offset,&__t5825t____t1450t__unsafe_align,&__t5825t____t1451t);
  arena__t1440t(&__t5825t____t1450t__unsafe_ptr,&__t5825t____t1450t__unsafe_size,&__t5825t____t1450t__unsafe_offset,&__t5825t____t1450t__unsafe_align,__t5825t____t1451t,&__t5826t__buf__unsafe_ptr,&__t5826t__buf__unsafe_size,&__t5826t__buf__unsafe_offset,&__t5826t__buf__unsafe_align,&__t5826t__pos);
  __t5827t__buf__unsafe_ptr=__t5826t__buf__unsafe_ptr;
  __t5827t__buf__unsafe_size=__t5826t__buf__unsafe_size;
  __t5827t__buf__unsafe_offset=__t5826t__buf__unsafe_offset;
  __t5827t__buf__unsafe_align=__t5826t__buf__unsafe_align;
  __t5827t__pos=__t5826t__pos;
  surface__buf__unsafe_ptr=__t5827t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t5827t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t5827t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t5827t__buf__unsafe_align;
  surface__pos=__t5827t__pos;
  __t_errcode=copy__t1967t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5828t__unsafe_ptr,&__t5828t__dat__pos,&__t5828t__dat__length,&__t5828t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1446t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t5829t____t1447t__unsafe_ptr,&__t5829t____t1447t__unsafe_size,&__t5829t____t1447t__unsafe_offset,&__t5829t____t1447t__unsafe_align,&__t5829t____t1448t);
  __t5831t=0;
  add__t188t(s1__dat__pos,__t5831t,&__t5832t__);
  __t_errcode=str__t1882t(__t5829t____t1447t__unsafe_ptr,__t5829t____t1447t__unsafe_size,__t5829t____t1447t__unsafe_offset,__t5829t____t1447t__unsafe_align,__t5829t____t1448t,__t5832t__,&__t5833t__unsafe_ptr,&__t5833t__dat__pos,&__t5833t__dat__length,&__t5833t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3539t__unsafe_ptr=__t5833t__unsafe_ptr;
  __t3539t__dat__pos=__t5833t__dat__pos;
  __t3539t__dat__length=__t5833t__dat__length;
  __t3539t__dat__first=__t5833t__dat__first;
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5834t__);
  if(__t5834t__){
  eq__t162t(s2__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5835t__);
  __t5836t=__t5835t__;
  }
  if(__t5836t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t5837t__);
  eq__t134t(s2__dat__pos,__t5837t__,&__t5838t__);
  __t5839t=__t5838t__;
  }
  if(__t5839t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t5840t__);
  __t_errcode=str__t1882t(peek_allocator__buf__unsafe_ptr,peek_allocator__buf__unsafe_size,peek_allocator__buf__unsafe_offset,peek_allocator__buf__unsafe_align,__t5840t__,s1__dat__pos,&__t5842t__unsafe_ptr,&__t5842t__dat__pos,&__t5842t__dat__length,&__t5842t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3539t__unsafe_ptr=__t5842t__unsafe_ptr;
  __t3539t__dat__pos=__t5842t__dat__pos;
  __t3539t__dat__length=__t5842t__dat__length;
  __t3539t__dat__first=__t5842t__dat__first;
  goto __t_return;
  }
  len__t1896t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t5843t__);
  len__t1896t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5844t__);
  add__t188t(__t5843t__,__t5844t__,&__t5845t__);
  len_sums=__t5845t__;
  prev_pos=CHARS__pos;
  __t_errcode=alloc__t1471t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,len_sums,&__t5849t__buf__unsafe_ptr,&__t5849t__buf__unsafe_size,&__t5849t__buf__unsafe_offset,&__t5849t__buf__unsafe_align,&__t5849t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1449t(__t5849t__buf__unsafe_ptr,__t5849t__buf__unsafe_size,__t5849t__buf__unsafe_offset,__t5849t__buf__unsafe_align,__t5849t__pos,&__t5850t____t1450t__unsafe_ptr,&__t5850t____t1450t__unsafe_size,&__t5850t____t1450t__unsafe_offset,&__t5850t____t1450t__unsafe_align,&__t5850t____t1451t);
  arena__t1440t(&__t5850t____t1450t__unsafe_ptr,&__t5850t____t1450t__unsafe_size,&__t5850t____t1450t__unsafe_offset,&__t5850t____t1450t__unsafe_align,__t5850t____t1451t,&__t5851t__buf__unsafe_ptr,&__t5851t__buf__unsafe_size,&__t5851t__buf__unsafe_offset,&__t5851t__buf__unsafe_align,&__t5851t__pos);
  __t5852t__buf__unsafe_ptr=__t5851t__buf__unsafe_ptr;
  __t5852t__buf__unsafe_size=__t5851t__buf__unsafe_size;
  __t5852t__buf__unsafe_offset=__t5851t__buf__unsafe_offset;
  __t5852t__buf__unsafe_align=__t5851t__buf__unsafe_align;
  __t5852t__pos=__t5851t__pos;
  surface__buf__unsafe_ptr=__t5852t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t5852t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t5852t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t5852t__buf__unsafe_align;
  surface__pos=__t5852t__pos;
  __t_errcode=copy__t1967t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t5853t__unsafe_ptr,&__t5853t__dat__pos,&__t5853t__dat__length,&__t5853t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1967t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5854t__unsafe_ptr,&__t5854t__dat__pos,&__t5854t__dat__length,&__t5854t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1446t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t5856t____t1447t__unsafe_ptr,&__t5856t____t1447t__unsafe_size,&__t5856t____t1447t__unsafe_offset,&__t5856t____t1447t__unsafe_align,&__t5856t____t1448t);
  __t5858t=0;
  add__t188t(prev_pos,__t5858t,&__t5859t__);
  __t_complain=str__t1882t(__t5856t____t1447t__unsafe_ptr,__t5856t____t1447t__unsafe_size,__t5856t____t1447t__unsafe_offset,__t5856t____t1447t__unsafe_align,__t5856t____t1448t,__t5859t__,&__t5860t__unsafe_ptr,&__t5860t__dat__pos,&__t5860t__dat__length,&__t5860t__dat__first);
  __t5855t=__t_complain;
  if(__t_complain){
  goto __t5855t__label;
  }
  ret__unsafe_ptr=__t5860t__unsafe_ptr;
  ret__dat__pos=__t5860t__dat__pos;
  ret__dat__length=__t5860t__dat__length;
  ret__dat__first=__t5860t__dat__first;
  __t5855t__label:__t5855t=__t5855t==0;
  __t3539t__unsafe_ptr=ret__unsafe_ptr;
  __t3539t__dat__pos=ret__dat__pos;
  __t3539t__dat__length=ret__dat__length;
  __t3539t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6108t=CHARS__buf__unsafe_ptr;
  *__t6109t=CHARS__buf__unsafe_size;
  *__t6110t=CHARS__buf__unsafe_offset;
  *__t6111t=CHARS__buf__unsafe_align;
  *__t6112t=CHARS__pos;
  *__t6113t=__t3539t__unsafe_ptr;
  *__t6114t=__t3539t__dat__pos;
  *__t6115t=__t3539t__dat__length;
  *__t6116t=__t3539t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t3536t(char** __t6117t, uint64_t* __t6118t, uint32_t* __t6119t, uint32_t* __t6120t, uint64_t* __t6121t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t6122t, uint64_t* __t6123t, uint64_t* __t6124t, char* __t6125t) {
  char* CHARS__buf__unsafe_ptr=*__t6117t;
  uint64_t CHARS__buf__unsafe_size=*__t6118t;
  uint32_t CHARS__buf__unsafe_offset=*__t6119t;
  uint32_t CHARS__buf__unsafe_align=*__t6120t;
  uint64_t CHARS__pos=*__t6121t;
  char* __t3537t__unsafe_ptr=0;
  uint64_t __t3537t__dat__pos=0;
  uint64_t __t3537t__dat__length=0;
  char __t3537t__dat__first=0;
  char* __t5861t__unsafe_ptr=0;
  uint64_t __t5861t__dat__pos=0;
  uint64_t __t5861t__dat__length=0;
  char __t5861t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t5862t__unsafe_ptr=0;
  uint64_t __t5862t__dat__pos=0;
  uint64_t __t5862t__dat__length=0;
  char __t5862t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t5863t=0;
  int __t5864t__=0;
  int __t5865t=0;
  char* peek_allocator__buf__unsafe_ptr=0;
  uint64_t peek_allocator__buf__unsafe_size=0;
  uint32_t peek_allocator__buf__unsafe_offset=0;
  uint32_t peek_allocator__buf__unsafe_align=0;
  uint64_t peek_allocator__pos=0;
  char __t5866t__=0;
  uint64_t __t5867t__=0;
  char __t5868t__=0;
  char __t5869t=0;
  uint64_t __t5870t__=0;
  char __t5871t__=0;
  char __t5872t=0;
  uint64_t __t5873t__=0;
  char* __t5874t__buf__unsafe_ptr=0;
  uint64_t __t5874t__buf__unsafe_size=0;
  uint32_t __t5874t__buf__unsafe_offset=0;
  uint32_t __t5874t__buf__unsafe_align=0;
  uint64_t __t5874t__pos=0;
  char* __t5875t____t1450t__unsafe_ptr=0;
  uint64_t __t5875t____t1450t__unsafe_size=0;
  uint32_t __t5875t____t1450t__unsafe_offset=0;
  uint32_t __t5875t____t1450t__unsafe_align=0;
  uint64_t __t5875t____t1451t=0;
  char* __t5876t__buf__unsafe_ptr=0;
  uint64_t __t5876t__buf__unsafe_size=0;
  uint32_t __t5876t__buf__unsafe_offset=0;
  uint32_t __t5876t__buf__unsafe_align=0;
  uint64_t __t5876t__pos=0;
  char* __t5877t__buf__unsafe_ptr=0;
  uint64_t __t5877t__buf__unsafe_size=0;
  uint32_t __t5877t__buf__unsafe_offset=0;
  uint32_t __t5877t__buf__unsafe_align=0;
  uint64_t __t5877t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t5878t__unsafe_ptr=0;
  uint64_t __t5878t__dat__pos=0;
  uint64_t __t5878t__dat__length=0;
  char __t5878t__dat__first=0;
  char* __t5879t____t1447t__unsafe_ptr=0;
  uint64_t __t5879t____t1447t__unsafe_size=0;
  uint32_t __t5879t____t1447t__unsafe_offset=0;
  uint32_t __t5879t____t1447t__unsafe_align=0;
  uint64_t __t5879t____t1448t=0;
  uint64_t __t5881t=0;
  uint64_t __t5882t__=0;
  char* __t5883t__unsafe_ptr=0;
  uint64_t __t5883t__dat__pos=0;
  uint64_t __t5883t__dat__length=0;
  char __t5883t__dat__first=0;
  char __t5884t__=0;
  char __t5885t__=0;
  char __t5886t=0;
  uint64_t __t5887t__=0;
  char __t5888t__=0;
  char __t5889t=0;
  uint64_t __t5890t__=0;
  char* __t5892t__unsafe_ptr=0;
  uint64_t __t5892t__dat__pos=0;
  uint64_t __t5892t__dat__length=0;
  char __t5892t__dat__first=0;
  uint64_t __t5893t__=0;
  uint64_t __t5894t__=0;
  uint64_t __t5895t__=0;
  uint64_t len_sums=0;
  int __t5896t=0;
  int __t5897t=0;
  int __t5898t=0;
  uint64_t prev_pos=0;
  char* __t5899t__buf__unsafe_ptr=0;
  uint64_t __t5899t__buf__unsafe_size=0;
  uint32_t __t5899t__buf__unsafe_offset=0;
  uint32_t __t5899t__buf__unsafe_align=0;
  uint64_t __t5899t__pos=0;
  char* __t5900t____t1450t__unsafe_ptr=0;
  uint64_t __t5900t____t1450t__unsafe_size=0;
  uint32_t __t5900t____t1450t__unsafe_offset=0;
  uint32_t __t5900t____t1450t__unsafe_align=0;
  uint64_t __t5900t____t1451t=0;
  char* __t5901t__buf__unsafe_ptr=0;
  uint64_t __t5901t__buf__unsafe_size=0;
  uint32_t __t5901t__buf__unsafe_offset=0;
  uint32_t __t5901t__buf__unsafe_align=0;
  uint64_t __t5901t__pos=0;
  char* __t5902t__buf__unsafe_ptr=0;
  uint64_t __t5902t__buf__unsafe_size=0;
  uint32_t __t5902t__buf__unsafe_offset=0;
  uint32_t __t5902t__buf__unsafe_align=0;
  uint64_t __t5902t__pos=0;
  char* __t5903t__unsafe_ptr=0;
  uint64_t __t5903t__dat__pos=0;
  uint64_t __t5903t__dat__length=0;
  char __t5903t__dat__first=0;
  char* __t5904t__unsafe_ptr=0;
  uint64_t __t5904t__dat__pos=0;
  uint64_t __t5904t__dat__length=0;
  char __t5904t__dat__first=0;
  char __t5905t=0;
  char* __t5906t____t1447t__unsafe_ptr=0;
  uint64_t __t5906t____t1447t__unsafe_size=0;
  uint32_t __t5906t____t1447t__unsafe_offset=0;
  uint32_t __t5906t____t1447t__unsafe_align=0;
  uint64_t __t5906t____t1448t=0;
  uint64_t __t5908t=0;
  uint64_t __t5909t__=0;
  char* __t5910t__unsafe_ptr=0;
  uint64_t __t5910t__dat__pos=0;
  uint64_t __t5910t__dat__length=0;
  char __t5910t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1863t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t5861t__unsafe_ptr,&__t5861t__dat__pos,&__t5861t__dat__length,&__t5861t__dat__first);
  s1__unsafe_ptr=__t5861t__unsafe_ptr;
  s1__dat__pos=__t5861t__dat__pos;
  s1__dat__length=__t5861t__dat__length;
  s1__dat__first=__t5861t__dat__first;
  str__t1886t(_s2,&__t5862t__unsafe_ptr,&__t5862t__dat__pos,&__t5862t__dat__length,&__t5862t__dat__first);
  s2__unsafe_ptr=__t5862t__unsafe_ptr;
  s2__dat__pos=__t5862t__dat__pos;
  s2__dat__length=__t5862t__dat__length;
  s2__dat__first=__t5862t__dat__first;
  not__t53t(__t5863t,&__t5864t__);
  peek_allocator__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  peek_allocator__buf__unsafe_size=CHARS__buf__unsafe_size;
  peek_allocator__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  peek_allocator__buf__unsafe_align=CHARS__buf__unsafe_align;
  peek_allocator__pos=CHARS__pos;
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5866t__);
  if(__t5866t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t5867t__);
  eq__t134t(peek_allocator__pos,__t5867t__,&__t5868t__);
  __t5869t=__t5868t__;
  }
  if(__t5869t){
  add__t188t(peek_allocator__pos,s2__dat__length,&__t5870t__);
  lt__t302t(__t5870t__,peek_allocator__buf__unsafe_size,&__t5871t__);
  __t5872t=__t5871t__;
  }
  if(__t5872t){
  len__t1896t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5873t__);
  __t_errcode=alloc__t1471t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5873t__,&__t5874t__buf__unsafe_ptr,&__t5874t__buf__unsafe_size,&__t5874t__buf__unsafe_offset,&__t5874t__buf__unsafe_align,&__t5874t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1449t(__t5874t__buf__unsafe_ptr,__t5874t__buf__unsafe_size,__t5874t__buf__unsafe_offset,__t5874t__buf__unsafe_align,__t5874t__pos,&__t5875t____t1450t__unsafe_ptr,&__t5875t____t1450t__unsafe_size,&__t5875t____t1450t__unsafe_offset,&__t5875t____t1450t__unsafe_align,&__t5875t____t1451t);
  arena__t1440t(&__t5875t____t1450t__unsafe_ptr,&__t5875t____t1450t__unsafe_size,&__t5875t____t1450t__unsafe_offset,&__t5875t____t1450t__unsafe_align,__t5875t____t1451t,&__t5876t__buf__unsafe_ptr,&__t5876t__buf__unsafe_size,&__t5876t__buf__unsafe_offset,&__t5876t__buf__unsafe_align,&__t5876t__pos);
  __t5877t__buf__unsafe_ptr=__t5876t__buf__unsafe_ptr;
  __t5877t__buf__unsafe_size=__t5876t__buf__unsafe_size;
  __t5877t__buf__unsafe_offset=__t5876t__buf__unsafe_offset;
  __t5877t__buf__unsafe_align=__t5876t__buf__unsafe_align;
  __t5877t__pos=__t5876t__pos;
  surface__buf__unsafe_ptr=__t5877t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t5877t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t5877t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t5877t__buf__unsafe_align;
  surface__pos=__t5877t__pos;
  __t_errcode=copy__t1967t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5878t__unsafe_ptr,&__t5878t__dat__pos,&__t5878t__dat__length,&__t5878t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1446t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t5879t____t1447t__unsafe_ptr,&__t5879t____t1447t__unsafe_size,&__t5879t____t1447t__unsafe_offset,&__t5879t____t1447t__unsafe_align,&__t5879t____t1448t);
  __t5881t=0;
  add__t188t(s1__dat__pos,__t5881t,&__t5882t__);
  __t_errcode=str__t1882t(__t5879t____t1447t__unsafe_ptr,__t5879t____t1447t__unsafe_size,__t5879t____t1447t__unsafe_offset,__t5879t____t1447t__unsafe_align,__t5879t____t1448t,__t5882t__,&__t5883t__unsafe_ptr,&__t5883t__dat__pos,&__t5883t__dat__length,&__t5883t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3537t__unsafe_ptr=__t5883t__unsafe_ptr;
  __t3537t__dat__pos=__t5883t__dat__pos;
  __t3537t__dat__length=__t5883t__dat__length;
  __t3537t__dat__first=__t5883t__dat__first;
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5884t__);
  if(__t5884t__){
  eq__t162t(s2__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5885t__);
  __t5886t=__t5885t__;
  }
  if(__t5886t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t5887t__);
  eq__t134t(s2__dat__pos,__t5887t__,&__t5888t__);
  __t5889t=__t5888t__;
  }
  if(__t5889t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t5890t__);
  __t_errcode=str__t1882t(peek_allocator__buf__unsafe_ptr,peek_allocator__buf__unsafe_size,peek_allocator__buf__unsafe_offset,peek_allocator__buf__unsafe_align,__t5890t__,s1__dat__pos,&__t5892t__unsafe_ptr,&__t5892t__dat__pos,&__t5892t__dat__length,&__t5892t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3537t__unsafe_ptr=__t5892t__unsafe_ptr;
  __t3537t__dat__pos=__t5892t__dat__pos;
  __t3537t__dat__length=__t5892t__dat__length;
  __t3537t__dat__first=__t5892t__dat__first;
  goto __t_return;
  }
  len__t1896t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t5893t__);
  len__t1896t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5894t__);
  add__t188t(__t5893t__,__t5894t__,&__t5895t__);
  len_sums=__t5895t__;
  prev_pos=CHARS__pos;
  __t_errcode=alloc__t1471t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,len_sums,&__t5899t__buf__unsafe_ptr,&__t5899t__buf__unsafe_size,&__t5899t__buf__unsafe_offset,&__t5899t__buf__unsafe_align,&__t5899t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1449t(__t5899t__buf__unsafe_ptr,__t5899t__buf__unsafe_size,__t5899t__buf__unsafe_offset,__t5899t__buf__unsafe_align,__t5899t__pos,&__t5900t____t1450t__unsafe_ptr,&__t5900t____t1450t__unsafe_size,&__t5900t____t1450t__unsafe_offset,&__t5900t____t1450t__unsafe_align,&__t5900t____t1451t);
  arena__t1440t(&__t5900t____t1450t__unsafe_ptr,&__t5900t____t1450t__unsafe_size,&__t5900t____t1450t__unsafe_offset,&__t5900t____t1450t__unsafe_align,__t5900t____t1451t,&__t5901t__buf__unsafe_ptr,&__t5901t__buf__unsafe_size,&__t5901t__buf__unsafe_offset,&__t5901t__buf__unsafe_align,&__t5901t__pos);
  __t5902t__buf__unsafe_ptr=__t5901t__buf__unsafe_ptr;
  __t5902t__buf__unsafe_size=__t5901t__buf__unsafe_size;
  __t5902t__buf__unsafe_offset=__t5901t__buf__unsafe_offset;
  __t5902t__buf__unsafe_align=__t5901t__buf__unsafe_align;
  __t5902t__pos=__t5901t__pos;
  surface__buf__unsafe_ptr=__t5902t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t5902t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t5902t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t5902t__buf__unsafe_align;
  surface__pos=__t5902t__pos;
  __t_errcode=copy__t1967t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t5903t__unsafe_ptr,&__t5903t__dat__pos,&__t5903t__dat__length,&__t5903t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1967t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5904t__unsafe_ptr,&__t5904t__dat__pos,&__t5904t__dat__length,&__t5904t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1446t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t5906t____t1447t__unsafe_ptr,&__t5906t____t1447t__unsafe_size,&__t5906t____t1447t__unsafe_offset,&__t5906t____t1447t__unsafe_align,&__t5906t____t1448t);
  __t5908t=0;
  add__t188t(prev_pos,__t5908t,&__t5909t__);
  __t_complain=str__t1882t(__t5906t____t1447t__unsafe_ptr,__t5906t____t1447t__unsafe_size,__t5906t____t1447t__unsafe_offset,__t5906t____t1447t__unsafe_align,__t5906t____t1448t,__t5909t__,&__t5910t__unsafe_ptr,&__t5910t__dat__pos,&__t5910t__dat__length,&__t5910t__dat__first);
  __t5905t=__t_complain;
  if(__t_complain){
  goto __t5905t__label;
  }
  ret__unsafe_ptr=__t5910t__unsafe_ptr;
  ret__dat__pos=__t5910t__dat__pos;
  ret__dat__length=__t5910t__dat__length;
  ret__dat__first=__t5910t__dat__first;
  __t5905t__label:__t5905t=__t5905t==0;
  __t3537t__unsafe_ptr=ret__unsafe_ptr;
  __t3537t__dat__pos=ret__dat__pos;
  __t3537t__dat__length=ret__dat__length;
  __t3537t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6117t=CHARS__buf__unsafe_ptr;
  *__t6118t=CHARS__buf__unsafe_size;
  *__t6119t=CHARS__buf__unsafe_offset;
  *__t6120t=CHARS__buf__unsafe_align;
  *__t6121t=CHARS__pos;
  *__t6122t=__t3537t__unsafe_ptr;
  *__t6123t=__t3537t__dat__pos;
  *__t6124t=__t3537t__dat__length;
  *__t6125t=__t3537t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1972t(char** __t6126t, uint64_t* __t6127t, uint32_t* __t6128t, uint32_t* __t6129t, uint64_t* __t6130t, const char* _other, char** __t6131t, uint64_t* __t6132t, uint64_t* __t6133t, char* __t6134t) {
  char* CHARS__buf__unsafe_ptr=*__t6126t;
  uint64_t CHARS__buf__unsafe_size=*__t6127t;
  uint32_t CHARS__buf__unsafe_offset=*__t6128t;
  uint32_t CHARS__buf__unsafe_align=*__t6129t;
  uint64_t CHARS__pos=*__t6130t;
  char* __t1973t__unsafe_ptr=0;
  uint64_t __t1973t__dat__pos=0;
  uint64_t __t1973t__dat__length=0;
  char __t1973t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1974t__buf__unsafe_ptr=0;
  uint64_t __t1974t__buf__unsafe_size=0;
  uint32_t __t1974t__buf__unsafe_offset=0;
  uint32_t __t1974t__buf__unsafe_align=0;
  uint64_t __t1974t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1975t=0;
  char* __t1976t__unsafe_ptr=0;
  uint64_t __t1976t__dat__pos=0;
  uint64_t __t1976t__dat__length=0;
  char __t1976t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1886t(_other,&__t1973t__unsafe_ptr,&__t1973t__dat__pos,&__t1973t__dat__length,&__t1973t__dat__first);
  other__unsafe_ptr=__t1973t__unsafe_ptr;
  other__dat__pos=__t1973t__dat__pos;
  other__dat__length=__t1973t__dat__length;
  other__dat__first=__t1973t__dat__first;
  __t_errcode=alloc__t1471t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1974t__buf__unsafe_ptr,&__t1974t__buf__unsafe_size,&__t1974t__buf__unsafe_offset,&__t1974t__buf__unsafe_align,&__t1974t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1974t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1974t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1974t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1974t__buf__unsafe_align;
  surface__pos=__t1974t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1830t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1976t__unsafe_ptr,&__t1976t__dat__pos,&__t1976t__dat__length,&__t1976t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6126t=CHARS__buf__unsafe_ptr;
  *__t6127t=CHARS__buf__unsafe_size;
  *__t6128t=CHARS__buf__unsafe_offset;
  *__t6129t=CHARS__buf__unsafe_align;
  *__t6130t=CHARS__pos;
  *__t6131t=__t1976t__unsafe_ptr;
  *__t6132t=__t1976t__dat__pos;
  *__t6133t=__t1976t__dat__length;
  *__t6134t=__t1976t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t856t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2018t(char** __t6135t, uint64_t* __t6136t, uint32_t* __t6137t, uint32_t* __t6138t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t6135t=unsafe_ptr;
  *__t6136t=unsafe_size;
  *__t6137t=unsafe_offset;
  *__t6138t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t2017t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t6139t, uint64_t* __t6140t, uint64_t* __t6141t, char* __t6142t) {
  char* __t2020t__unsafe_ptr=0;
  uint64_t __t2020t__unsafe_size=0;
  uint32_t __t2020t__unsafe_offset=0;
  uint32_t __t2020t__unsafe_align=0;
  uint64_t __t2021t=0;
  uint64_t __t2022t__=0;
  uint64_t __t2023t__=0;
  char* __t2024t__unsafe_ptr=0;
  uint64_t __t2024t__unsafe_size=0;
  uint32_t __t2024t__unsafe_offset=0;
  uint32_t __t2024t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t2026t=0;
  uint64_t __t2027t=0;
  char* __t2028t__unsafe_ptr=0;
  uint64_t __t2028t__dat__pos=0;
  uint64_t __t2028t__dat__length=0;
  char __t2028t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2018t(&__t2020t__unsafe_ptr,&__t2020t__unsafe_size,&__t2020t__unsafe_offset,&__t2020t__unsafe_align);
  __t2021t=1;
  len__t1896t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t2022t__);
  add__t188t(__t2021t,__t2022t__,&__t2023t__);
  __t_errcode=alloc__t971t(&__t2020t__unsafe_ptr,&__t2020t__unsafe_size,&__t2020t__unsafe_offset,&__t2020t__unsafe_align,__t2023t__,&__t2024t__unsafe_ptr,&__t2024t__unsafe_size,&__t2024t__unsafe_offset,&__t2024t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2024t__unsafe_ptr;
  buf__unsafe_size=__t2024t__unsafe_size;
  buf__unsafe_offset=__t2024t__unsafe_offset;
  buf__unsafe_align=__t2024t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t2027t=0;
  __t_errcode=str__t1830t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t2027t,other__dat__length,other__dat__first,&__t2028t__unsafe_ptr,&__t2028t__dat__pos,&__t2028t__dat__length,&__t2028t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t844t(&__t2028t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6139t=__t2028t__unsafe_ptr;
  *__t6140t=__t2028t__dat__pos;
  *__t6141t=__t2028t__dat__length;
  *__t6142t=__t2028t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t2043t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t6143t, char** __t6144t, uint64_t* __t6145t, uint64_t* __t6146t, char* __t6147t) {
  int __t2044t=0;
  char* __t2046t__unsafe_ptr=0;
  uint64_t __t2046t__dat__pos=0;
  uint64_t __t2046t__dat__length=0;
  char __t2046t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t2048t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t856t();
  __t_errcode=copy_null_terminated__t2017t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t2046t__unsafe_ptr,&__t2046t__dat__pos,&__t2046t__dat__length,&__t2046t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t2046t__unsafe_ptr;
  str__dat__pos=__t2046t__dat__pos;
  str__dat__length=__t2046t__dat__length;
  str__dat__first=__t2046t__dat__first;
  add__t846t(str__unsafe_ptr,str__dat__pos,&__t2048t__);
  _ret=__t2048t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t844t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6143t=cstr;
  *__t6144t=str__unsafe_ptr;
  *__t6145t=str__dat__pos;
  *__t6146t=str__dat__length;
  *__t6147t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2053t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t6148t) {
  goto __t_return;
  __t_return:
  *__t6148t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t5368t(char* unsafe_ptr) {
  int __t5370t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int open__t5371t(const char* path, char** __t6149t) {
  int __t5373t=0;
  char* unsafe_ptr=0;
  char __t5375t__=0;
  char __t5376t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t683t(unsafe_ptr,&__t5375t__);
  not__t42t(__t5375t__,&__t5376t__);
  if(__t5376t__){
  __t_errcode=52;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5368t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6149t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t5378t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t6150t) {
  const char* __t5379t__cstr=0;
  char* __t5379t__str__unsafe_ptr=0;
  uint64_t __t5379t__str__dat__pos=0;
  uint64_t __t5379t__str__dat__length=0;
  char __t5379t__str__dat__first=0;
  const char* __t5381t__=0;
  char* __t5382t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t2043t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5379t__cstr,&__t5379t__str__unsafe_ptr,&__t5379t__str__dat__pos,&__t5379t__str__dat__length,&__t5379t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t2053t(__t5379t__cstr,__t5379t__str__unsafe_ptr,__t5379t__str__dat__pos,__t5379t__str__dat__length,__t5379t__str__dat__first,&__t5381t__);
  __t_errcode=open__t5371t(__t5381t__,&__t5382t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5368t(__t5382t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6150t=__t5382t__unsafe_ptr;
  
  __t_skip_returns:free__t844t(&__t5379t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t5390t(char** __t6151t, const char** __t6152t) {
  char* f__unsafe_ptr=*__t6151t;
  char __t5391t__=0;
  char __t5392t__=0;
  char* de=0;
  char __t5393t__=0;
  char __t5394t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t683t(f__unsafe_ptr,&__t5391t__);
  not__t42t(__t5391t__,&__t5392t__);
  if(__t5392t__){
  __t_errcode=63;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t683t(de,&__t5393t__);
  not__t42t(__t5393t__,&__t5394t__);
  if(__t5394t__){
  __t_errcode=64;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6151t=f__unsafe_ptr;
  *__t6152t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t5395t(char** __t6153t, char** __t6154t, uint64_t* __t6155t, uint64_t* __t6156t, char* __t6157t) {
  char* f__unsafe_ptr=*__t6153t;
  const char* __t5396t__=0;
  char* __t5397t__unsafe_ptr=0;
  uint64_t __t5397t__dat__pos=0;
  uint64_t __t5397t__dat__length=0;
  char __t5397t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t5390t(&f__unsafe_ptr,&__t5396t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1886t(__t5396t__,&__t5397t__unsafe_ptr,&__t5397t__dat__pos,&__t5397t__dat__length,&__t5397t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6153t=f__unsafe_ptr;
  *__t6154t=__t5397t__unsafe_ptr;
  *__t6155t=__t5397t__dat__pos;
  *__t6156t=__t5397t__dat__length;
  *__t6157t=__t5397t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t5461t(char** __t6158t, uint64_t nat, char** __t6159t, uint64_t* __t6160t, uint64_t* __t6161t, char* __t6162t) {
  char* data__unsafe_ptr=*__t6158t;
  char* __t5462t__unsafe_ptr=0;
  uint64_t __t5462t__dat__pos=0;
  uint64_t __t5462t__dat__length=0;
  char __t5462t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t5395t(&data__unsafe_ptr,&__t5462t__unsafe_ptr,&__t5462t__dat__pos,&__t5462t__dat__length,&__t5462t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6158t=data__unsafe_ptr;
  *__t6159t=__t5462t__unsafe_ptr;
  *__t6160t=__t5462t__dat__pos;
  *__t6161t=__t5462t__dat__length;
  *__t6162t=__t5462t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void eq__t2067t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t6163t) {
  char __t2068t__=0;
  char __t2069t__=0;
  char __t2070t=0;
  char* __t2071t__unsafe_ptr=0;
  uint64_t __t2071t__dat__pos=0;
  uint64_t __t2071t__dat__length=0;
  char __t2071t__dat__first=0;
  char __t2072t__=0;
  char__t1898t(y,&__t2068t__);
  neq__t1901t(x__dat__first,__t2068t__,&__t2069t__);
  if(__t2069t__){
  __t2070t=0;
  goto __t_return;
  }
  str__t1886t(y,&__t2071t__unsafe_ptr,&__t2071t__dat__pos,&__t2071t__dat__length,&__t2071t__dat__first);
  eq__t2060t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t2071t__unsafe_ptr,__t2071t__dat__pos,__t2071t__dat__length,__t2071t__dat__first,&__t2072t__);
  __t2070t=__t2072t__;
  goto __t_return;
  __t_return:
  *__t6163t=__t2070t;
}

int unsafe_temp__t2029t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t6164t, char** __t6165t, uint64_t* __t6166t, uint64_t* __t6167t, char* __t6168t) {
  int __t2030t=0;
  char* __t2031t__unsafe_ptr=0;
  uint64_t __t2031t__unsafe_size=0;
  uint32_t __t2031t__unsafe_offset=0;
  uint32_t __t2031t__unsafe_align=0;
  uint64_t __t2032t=0;
  uint64_t __t2033t__=0;
  uint64_t __t2034t__=0;
  char* __t2035t__unsafe_ptr=0;
  uint64_t __t2035t__unsafe_size=0;
  uint32_t __t2035t__unsafe_offset=0;
  uint32_t __t2035t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t2037t=0;
  char __t2038t__=0;
  char first_character=0;
  uint64_t __t2039t=0;
  char* __t2040t__unsafe_ptr=0;
  uint64_t __t2040t__dat__pos=0;
  uint64_t __t2040t__dat__length=0;
  char __t2040t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t2041t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2018t(&__t2031t__unsafe_ptr,&__t2031t__unsafe_size,&__t2031t__unsafe_offset,&__t2031t__unsafe_align);
  __t2032t=1;
  add__t188t(__t2032t,other__dat__length,&__t2033t__);
  add__t188t(__t2033t__,prefix__dat__length,&__t2034t__);
  __t_errcode=alloc__t971t(&__t2031t__unsafe_ptr,&__t2031t__unsafe_size,&__t2031t__unsafe_offset,&__t2031t__unsafe_align,__t2034t__,&__t2035t__unsafe_ptr,&__t2035t__unsafe_size,&__t2035t__unsafe_offset,&__t2035t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2035t__unsafe_ptr;
  buf__unsafe_size=__t2035t__unsafe_size;
  buf__unsafe_offset=__t2035t__unsafe_offset;
  buf__unsafe_align=__t2035t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t2037t=0;
  eq__t134t(prefix__dat__length,__t2037t,&__t2038t__);
  if(__t2038t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t2039t=0;
  __t_errcode=str__t1830t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t2039t,other__dat__length,first_character,&__t2040t__unsafe_ptr,&__t2040t__dat__pos,&__t2040t__dat__length,&__t2040t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t2040t__unsafe_ptr;
  str__dat__pos=__t2040t__dat__pos;
  str__dat__length=__t2040t__dat__length;
  str__dat__first=__t2040t__dat__first;
  add__t846t(str__unsafe_ptr,str__dat__pos,&__t2041t__);
  _ret=__t2041t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t844t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6164t=cstr;
  *__t6165t=str__unsafe_ptr;
  *__t6166t=str__dat__pos;
  *__t6167t=str__dat__length;
  *__t6168t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2052t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t6169t) {
  goto __t_return;
  __t_return:
  *__t6169t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t5295t(const char* path, char* __t6170t) {
  int __t5297t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t6170t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t5305t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t6171t) {
  int __t5307t=0;
  const char* __t5308t__cstr=0;
  char* __t5308t__str__unsafe_ptr=0;
  uint64_t __t5308t__str__dat__pos=0;
  uint64_t __t5308t__str__dat__length=0;
  char __t5308t__str__dat__first=0;
  const char* __t5310t__=0;
  char __t5311t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t2029t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t5308t__cstr,&__t5308t__str__unsafe_ptr,&__t5308t__str__dat__pos,&__t5308t__str__dat__length,&__t5308t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t2052t(__t5308t__cstr,__t5308t__str__unsafe_ptr,__t5308t__str__dat__pos,__t5308t__str__dat__length,__t5308t__str__dat__first,&__t5310t__);
  is_dir__t5295t(__t5310t__,&__t5311t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6171t=__t5311t__;
  
  __t_skip_returns:free__t844t(&__t5308t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t410t(uint64_t x, uint64_t y, uint64_t* __t6172t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t6172t=z;
}

static inline __attribute__((always_inline)) void reuse__t5705t(char** __t6173t, uint64_t* __t6174t, uint32_t* __t6175t, uint32_t* __t6176t, uint64_t* __t6177t, uint64_t* __t6178t) {
  char* arn__buf__unsafe_ptr=*__t6173t;
  uint64_t arn__buf__unsafe_size=*__t6174t;
  uint32_t arn__buf__unsafe_offset=*__t6175t;
  uint32_t arn__buf__unsafe_align=*__t6176t;
  uint64_t arn__pos=*__t6177t;
  uint64_t __t5706t=0;
  uint64_t __t5707t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5708t=0;
  uint64_t __t5710t__=0;
  __t5706t=0;
  add__t188t(__t5706t,arn__pos,&__t5707t__);
  tracked_position=__t5707t__;
  goto __t_return;
  __t_return:
  *__t6173t=arn__buf__unsafe_ptr;
  *__t6174t=arn__buf__unsafe_size;
  *__t6175t=arn__buf__unsafe_offset;
  *__t6176t=arn__buf__unsafe_align;
  *__t6177t=arn__pos;
  *__t6178t=tracked_position;
}

int add__t3534t(char** __t6179t, uint64_t* __t6180t, uint32_t* __t6181t, uint32_t* __t6182t, uint64_t* __t6183t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t6184t, uint64_t* __t6185t, uint64_t* __t6186t, char* __t6187t) {
  char* CHARS__buf__unsafe_ptr=*__t6179t;
  uint64_t CHARS__buf__unsafe_size=*__t6180t;
  uint32_t CHARS__buf__unsafe_offset=*__t6181t;
  uint32_t CHARS__buf__unsafe_align=*__t6182t;
  uint64_t CHARS__pos=*__t6183t;
  char* __t3535t__unsafe_ptr=0;
  uint64_t __t3535t__dat__pos=0;
  uint64_t __t3535t__dat__length=0;
  char __t3535t__dat__first=0;
  char* __t5911t__unsafe_ptr=0;
  uint64_t __t5911t__dat__pos=0;
  uint64_t __t5911t__dat__length=0;
  char __t5911t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t5912t__unsafe_ptr=0;
  uint64_t __t5912t__dat__pos=0;
  uint64_t __t5912t__dat__length=0;
  char __t5912t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t5913t=0;
  int __t5914t__=0;
  int __t5915t=0;
  char* peek_allocator__buf__unsafe_ptr=0;
  uint64_t peek_allocator__buf__unsafe_size=0;
  uint32_t peek_allocator__buf__unsafe_offset=0;
  uint32_t peek_allocator__buf__unsafe_align=0;
  uint64_t peek_allocator__pos=0;
  char __t5916t__=0;
  uint64_t __t5917t__=0;
  char __t5918t__=0;
  char __t5919t=0;
  uint64_t __t5920t__=0;
  char __t5921t__=0;
  char __t5922t=0;
  uint64_t __t5923t__=0;
  char* __t5924t__buf__unsafe_ptr=0;
  uint64_t __t5924t__buf__unsafe_size=0;
  uint32_t __t5924t__buf__unsafe_offset=0;
  uint32_t __t5924t__buf__unsafe_align=0;
  uint64_t __t5924t__pos=0;
  char* __t5925t____t1450t__unsafe_ptr=0;
  uint64_t __t5925t____t1450t__unsafe_size=0;
  uint32_t __t5925t____t1450t__unsafe_offset=0;
  uint32_t __t5925t____t1450t__unsafe_align=0;
  uint64_t __t5925t____t1451t=0;
  char* __t5926t__buf__unsafe_ptr=0;
  uint64_t __t5926t__buf__unsafe_size=0;
  uint32_t __t5926t__buf__unsafe_offset=0;
  uint32_t __t5926t__buf__unsafe_align=0;
  uint64_t __t5926t__pos=0;
  char* __t5927t__buf__unsafe_ptr=0;
  uint64_t __t5927t__buf__unsafe_size=0;
  uint32_t __t5927t__buf__unsafe_offset=0;
  uint32_t __t5927t__buf__unsafe_align=0;
  uint64_t __t5927t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t5928t__unsafe_ptr=0;
  uint64_t __t5928t__dat__pos=0;
  uint64_t __t5928t__dat__length=0;
  char __t5928t__dat__first=0;
  char* __t5929t____t1447t__unsafe_ptr=0;
  uint64_t __t5929t____t1447t__unsafe_size=0;
  uint32_t __t5929t____t1447t__unsafe_offset=0;
  uint32_t __t5929t____t1447t__unsafe_align=0;
  uint64_t __t5929t____t1448t=0;
  uint64_t __t5931t=0;
  uint64_t __t5932t__=0;
  char* __t5933t__unsafe_ptr=0;
  uint64_t __t5933t__dat__pos=0;
  uint64_t __t5933t__dat__length=0;
  char __t5933t__dat__first=0;
  char __t5934t__=0;
  char __t5935t__=0;
  char __t5936t=0;
  uint64_t __t5937t__=0;
  char __t5938t__=0;
  char __t5939t=0;
  uint64_t __t5940t__=0;
  char* __t5942t__unsafe_ptr=0;
  uint64_t __t5942t__dat__pos=0;
  uint64_t __t5942t__dat__length=0;
  char __t5942t__dat__first=0;
  uint64_t __t5943t__=0;
  uint64_t __t5944t__=0;
  uint64_t __t5945t__=0;
  uint64_t len_sums=0;
  int __t5946t=0;
  int __t5947t=0;
  int __t5948t=0;
  uint64_t prev_pos=0;
  char* __t5949t__buf__unsafe_ptr=0;
  uint64_t __t5949t__buf__unsafe_size=0;
  uint32_t __t5949t__buf__unsafe_offset=0;
  uint32_t __t5949t__buf__unsafe_align=0;
  uint64_t __t5949t__pos=0;
  char* __t5950t____t1450t__unsafe_ptr=0;
  uint64_t __t5950t____t1450t__unsafe_size=0;
  uint32_t __t5950t____t1450t__unsafe_offset=0;
  uint32_t __t5950t____t1450t__unsafe_align=0;
  uint64_t __t5950t____t1451t=0;
  char* __t5951t__buf__unsafe_ptr=0;
  uint64_t __t5951t__buf__unsafe_size=0;
  uint32_t __t5951t__buf__unsafe_offset=0;
  uint32_t __t5951t__buf__unsafe_align=0;
  uint64_t __t5951t__pos=0;
  char* __t5952t__buf__unsafe_ptr=0;
  uint64_t __t5952t__buf__unsafe_size=0;
  uint32_t __t5952t__buf__unsafe_offset=0;
  uint32_t __t5952t__buf__unsafe_align=0;
  uint64_t __t5952t__pos=0;
  char* __t5953t__unsafe_ptr=0;
  uint64_t __t5953t__dat__pos=0;
  uint64_t __t5953t__dat__length=0;
  char __t5953t__dat__first=0;
  char* __t5954t__unsafe_ptr=0;
  uint64_t __t5954t__dat__pos=0;
  uint64_t __t5954t__dat__length=0;
  char __t5954t__dat__first=0;
  char __t5955t=0;
  char* __t5956t____t1447t__unsafe_ptr=0;
  uint64_t __t5956t____t1447t__unsafe_size=0;
  uint32_t __t5956t____t1447t__unsafe_offset=0;
  uint32_t __t5956t____t1447t__unsafe_align=0;
  uint64_t __t5956t____t1448t=0;
  uint64_t __t5958t=0;
  uint64_t __t5959t__=0;
  char* __t5960t__unsafe_ptr=0;
  uint64_t __t5960t__dat__pos=0;
  uint64_t __t5960t__dat__length=0;
  char __t5960t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1863t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t5911t__unsafe_ptr,&__t5911t__dat__pos,&__t5911t__dat__length,&__t5911t__dat__first);
  s1__unsafe_ptr=__t5911t__unsafe_ptr;
  s1__dat__pos=__t5911t__dat__pos;
  s1__dat__length=__t5911t__dat__length;
  s1__dat__first=__t5911t__dat__first;
  str__t1863t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t5912t__unsafe_ptr,&__t5912t__dat__pos,&__t5912t__dat__length,&__t5912t__dat__first);
  s2__unsafe_ptr=__t5912t__unsafe_ptr;
  s2__dat__pos=__t5912t__dat__pos;
  s2__dat__length=__t5912t__dat__length;
  s2__dat__first=__t5912t__dat__first;
  not__t53t(__t5913t,&__t5914t__);
  peek_allocator__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  peek_allocator__buf__unsafe_size=CHARS__buf__unsafe_size;
  peek_allocator__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  peek_allocator__buf__unsafe_align=CHARS__buf__unsafe_align;
  peek_allocator__pos=CHARS__pos;
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5916t__);
  if(__t5916t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t5917t__);
  eq__t134t(peek_allocator__pos,__t5917t__,&__t5918t__);
  __t5919t=__t5918t__;
  }
  if(__t5919t){
  add__t188t(peek_allocator__pos,s2__dat__length,&__t5920t__);
  lt__t302t(__t5920t__,peek_allocator__buf__unsafe_size,&__t5921t__);
  __t5922t=__t5921t__;
  }
  if(__t5922t){
  len__t1896t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5923t__);
  __t_errcode=alloc__t1471t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5923t__,&__t5924t__buf__unsafe_ptr,&__t5924t__buf__unsafe_size,&__t5924t__buf__unsafe_offset,&__t5924t__buf__unsafe_align,&__t5924t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1449t(__t5924t__buf__unsafe_ptr,__t5924t__buf__unsafe_size,__t5924t__buf__unsafe_offset,__t5924t__buf__unsafe_align,__t5924t__pos,&__t5925t____t1450t__unsafe_ptr,&__t5925t____t1450t__unsafe_size,&__t5925t____t1450t__unsafe_offset,&__t5925t____t1450t__unsafe_align,&__t5925t____t1451t);
  arena__t1440t(&__t5925t____t1450t__unsafe_ptr,&__t5925t____t1450t__unsafe_size,&__t5925t____t1450t__unsafe_offset,&__t5925t____t1450t__unsafe_align,__t5925t____t1451t,&__t5926t__buf__unsafe_ptr,&__t5926t__buf__unsafe_size,&__t5926t__buf__unsafe_offset,&__t5926t__buf__unsafe_align,&__t5926t__pos);
  __t5927t__buf__unsafe_ptr=__t5926t__buf__unsafe_ptr;
  __t5927t__buf__unsafe_size=__t5926t__buf__unsafe_size;
  __t5927t__buf__unsafe_offset=__t5926t__buf__unsafe_offset;
  __t5927t__buf__unsafe_align=__t5926t__buf__unsafe_align;
  __t5927t__pos=__t5926t__pos;
  surface__buf__unsafe_ptr=__t5927t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t5927t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t5927t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t5927t__buf__unsafe_align;
  surface__pos=__t5927t__pos;
  __t_errcode=copy__t1967t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5928t__unsafe_ptr,&__t5928t__dat__pos,&__t5928t__dat__length,&__t5928t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1446t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t5929t____t1447t__unsafe_ptr,&__t5929t____t1447t__unsafe_size,&__t5929t____t1447t__unsafe_offset,&__t5929t____t1447t__unsafe_align,&__t5929t____t1448t);
  __t5931t=0;
  add__t188t(s1__dat__pos,__t5931t,&__t5932t__);
  __t_errcode=str__t1882t(__t5929t____t1447t__unsafe_ptr,__t5929t____t1447t__unsafe_size,__t5929t____t1447t__unsafe_offset,__t5929t____t1447t__unsafe_align,__t5929t____t1448t,__t5932t__,&__t5933t__unsafe_ptr,&__t5933t__dat__pos,&__t5933t__dat__length,&__t5933t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3535t__unsafe_ptr=__t5933t__unsafe_ptr;
  __t3535t__dat__pos=__t5933t__dat__pos;
  __t3535t__dat__length=__t5933t__dat__length;
  __t3535t__dat__first=__t5933t__dat__first;
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5934t__);
  if(__t5934t__){
  eq__t162t(s2__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t5935t__);
  __t5936t=__t5935t__;
  }
  if(__t5936t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t5937t__);
  eq__t134t(s2__dat__pos,__t5937t__,&__t5938t__);
  __t5939t=__t5938t__;
  }
  if(__t5939t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t5940t__);
  __t_errcode=str__t1882t(peek_allocator__buf__unsafe_ptr,peek_allocator__buf__unsafe_size,peek_allocator__buf__unsafe_offset,peek_allocator__buf__unsafe_align,__t5940t__,s1__dat__pos,&__t5942t__unsafe_ptr,&__t5942t__dat__pos,&__t5942t__dat__length,&__t5942t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3535t__unsafe_ptr=__t5942t__unsafe_ptr;
  __t3535t__dat__pos=__t5942t__dat__pos;
  __t3535t__dat__length=__t5942t__dat__length;
  __t3535t__dat__first=__t5942t__dat__first;
  goto __t_return;
  }
  len__t1896t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t5943t__);
  len__t1896t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5944t__);
  add__t188t(__t5943t__,__t5944t__,&__t5945t__);
  len_sums=__t5945t__;
  prev_pos=CHARS__pos;
  __t_errcode=alloc__t1471t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,len_sums,&__t5949t__buf__unsafe_ptr,&__t5949t__buf__unsafe_size,&__t5949t__buf__unsafe_offset,&__t5949t__buf__unsafe_align,&__t5949t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1449t(__t5949t__buf__unsafe_ptr,__t5949t__buf__unsafe_size,__t5949t__buf__unsafe_offset,__t5949t__buf__unsafe_align,__t5949t__pos,&__t5950t____t1450t__unsafe_ptr,&__t5950t____t1450t__unsafe_size,&__t5950t____t1450t__unsafe_offset,&__t5950t____t1450t__unsafe_align,&__t5950t____t1451t);
  arena__t1440t(&__t5950t____t1450t__unsafe_ptr,&__t5950t____t1450t__unsafe_size,&__t5950t____t1450t__unsafe_offset,&__t5950t____t1450t__unsafe_align,__t5950t____t1451t,&__t5951t__buf__unsafe_ptr,&__t5951t__buf__unsafe_size,&__t5951t__buf__unsafe_offset,&__t5951t__buf__unsafe_align,&__t5951t__pos);
  __t5952t__buf__unsafe_ptr=__t5951t__buf__unsafe_ptr;
  __t5952t__buf__unsafe_size=__t5951t__buf__unsafe_size;
  __t5952t__buf__unsafe_offset=__t5951t__buf__unsafe_offset;
  __t5952t__buf__unsafe_align=__t5951t__buf__unsafe_align;
  __t5952t__pos=__t5951t__pos;
  surface__buf__unsafe_ptr=__t5952t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t5952t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t5952t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t5952t__buf__unsafe_align;
  surface__pos=__t5952t__pos;
  __t_errcode=copy__t1967t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t5953t__unsafe_ptr,&__t5953t__dat__pos,&__t5953t__dat__length,&__t5953t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1967t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t5954t__unsafe_ptr,&__t5954t__dat__pos,&__t5954t__dat__length,&__t5954t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1446t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t5956t____t1447t__unsafe_ptr,&__t5956t____t1447t__unsafe_size,&__t5956t____t1447t__unsafe_offset,&__t5956t____t1447t__unsafe_align,&__t5956t____t1448t);
  __t5958t=0;
  add__t188t(prev_pos,__t5958t,&__t5959t__);
  __t_complain=str__t1882t(__t5956t____t1447t__unsafe_ptr,__t5956t____t1447t__unsafe_size,__t5956t____t1447t__unsafe_offset,__t5956t____t1447t__unsafe_align,__t5956t____t1448t,__t5959t__,&__t5960t__unsafe_ptr,&__t5960t__dat__pos,&__t5960t__dat__length,&__t5960t__dat__first);
  __t5955t=__t_complain;
  if(__t_complain){
  goto __t5955t__label;
  }
  ret__unsafe_ptr=__t5960t__unsafe_ptr;
  ret__dat__pos=__t5960t__dat__pos;
  ret__dat__length=__t5960t__dat__length;
  ret__dat__first=__t5960t__dat__first;
  __t5955t__label:__t5955t=__t5955t==0;
  __t3535t__unsafe_ptr=ret__unsafe_ptr;
  __t3535t__dat__pos=ret__dat__pos;
  __t3535t__dat__length=ret__dat__length;
  __t3535t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6179t=CHARS__buf__unsafe_ptr;
  *__t6180t=CHARS__buf__unsafe_size;
  *__t6181t=CHARS__buf__unsafe_offset;
  *__t6182t=CHARS__buf__unsafe_align;
  *__t6183t=CHARS__pos;
  *__t6184t=__t3535t__unsafe_ptr;
  *__t6185t=__t3535t__dat__pos;
  *__t6186t=__t3535t__dat__length;
  *__t6187t=__t3535t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2121t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t6188t) {
  int __t2122t=0;
  char __t2123t__=0;
  uint64_t __t2124t__=0;
  char* __t2125t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,s__dat__length,&__t2123t__);
  if(__t2123t__){
  __t_errcode=22;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t2124t__);
  add__t846t(s__unsafe_ptr,__t2124t__,&__t2125t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6188t=__t2125t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t2147t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t6189t, uint64_t* __t6190t, uint64_t* __t6191t, char* __t6192t) {
  char* __t2148t__unsafe_ptr=0;
  uint64_t __t2148t__dat__pos=0;
  uint64_t __t2148t__dat__length=0;
  char __t2148t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t2149t__=0;
  char* __t2150t__unsafe_ptr=0;
  uint64_t __t2150t__dat__pos=0;
  uint64_t __t2150t__dat__length=0;
  char __t2150t__dat__first=0;
  char __t2151t__=0;
  char __t2152t__=0;
  char __t2153t=0;
  char __t2154t__=0;
  uint64_t __t2156t__=0;
  uint64_t new_length=0;
  uint64_t __t2157t=0;
  char __t2158t__=0;
  char new_first=0;
  char* __t2160t__=0;
  char __t2161t__value=0;
  uint64_t __t2162t__=0;
  char* __t2163t__unsafe_ptr=0;
  uint64_t __t2163t__dat__pos=0;
  uint64_t __t2163t__dat__length=0;
  char __t2163t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1863t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t2148t__unsafe_ptr,&__t2148t__dat__pos,&__t2148t__dat__length,&__t2148t__dat__first);
  s__unsafe_ptr=__t2148t__unsafe_ptr;
  s__dat__pos=__t2148t__dat__pos;
  s__dat__length=__t2148t__dat__length;
  s__dat__first=__t2148t__dat__first;
  eq__t134t(from,to,&__t2149t__);
  if(__t2149t__){
  str__t1886t(__t463t,&__t2150t__unsafe_ptr,&__t2150t__dat__pos,&__t2150t__dat__length,&__t2150t__dat__first);
  goto __t_return;
  }
  gt__t326t(from,to,&__t2151t__);
  if(!__t2151t__){
  gt__t326t(to,s__dat__length,&__t2152t__);
  __t2153t=__t2152t__;
  }
  else{
  __t2153t=0;
  not__t42t(__t2153t,&__t2154t__);
  __t2153t=__t2154t__;
  }
  if(__t2153t){
  __t_errcode=31;
  goto __t_failure;
  }
  sub__t410t(to,from,&__t2156t__);
  new_length=__t2156t__;
  __t2157t=0;
  neq__t158t(from,__t2157t,&__t2158t__);
  if(__t2158t__){
  __t_errcode=get__t2121t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t2160t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2160t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2161t__value,__t2160t__,1);
  new_first=__t2161t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t2162t__);
  str__t1826t(s__unsafe_ptr,__t2162t__,new_length,new_first,&__t2163t__unsafe_ptr,&__t2163t__dat__pos,&__t2163t__dat__length,&__t2163t__dat__first);
  __t2150t__unsafe_ptr=__t2163t__unsafe_ptr;
  __t2150t__dat__pos=__t2163t__dat__pos;
  __t2150t__dat__length=__t2163t__dat__length;
  __t2150t__dat__first=__t2163t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6189t=__t2150t__unsafe_ptr;
  *__t6190t=__t2150t__dat__pos;
  *__t6191t=__t2150t__dat__length;
  *__t6192t=__t2150t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t2226t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t6193t) {
  char* __t2227t__unsafe_ptr=0;
  uint64_t __t2227t__dat__pos=0;
  uint64_t __t2227t__dat__length=0;
  char __t2227t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2228t__unsafe_ptr=0;
  uint64_t __t2228t__dat__pos=0;
  uint64_t __t2228t__dat__length=0;
  char __t2228t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t2229t=0;
  uint64_t __t2230t__=0;
  uint64_t d=0;
  char __t2231t__=0;
  char __t2232t=0;
  char* __t2233t__unsafe_ptr=0;
  uint64_t __t2233t__dat__pos=0;
  uint64_t __t2233t__dat__length=0;
  char __t2233t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t2234t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1863t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2227t__unsafe_ptr,&__t2227t__dat__pos,&__t2227t__dat__length,&__t2227t__dat__first);
  stack__unsafe_ptr=__t2227t__unsafe_ptr;
  stack__dat__pos=__t2227t__dat__pos;
  stack__dat__length=__t2227t__dat__length;
  stack__dat__first=__t2227t__dat__first;
  str__t1886t(_needle,&__t2228t__unsafe_ptr,&__t2228t__dat__pos,&__t2228t__dat__length,&__t2228t__dat__first);
  needle__unsafe_ptr=__t2228t__unsafe_ptr;
  needle__dat__pos=__t2228t__dat__pos;
  needle__dat__length=__t2228t__dat__length;
  needle__dat__first=__t2228t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t402t(n,needle__dat__length,&__t2230t__);
  __t2229t=__t_complain;
  if(__t_complain){
  goto __t2229t__label;
  }
  d=__t2230t__;
  __t2229t__label:__t2229t=__t2229t==0;
  not__t42t(__t2229t,&__t2231t__);
  if(__t2231t__){
  __t2232t=0;
  goto __t_return;
  }
  __t_errcode=slice__t2147t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t2233t__unsafe_ptr,&__t2233t__dat__pos,&__t2233t__dat__length,&__t2233t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t2233t__unsafe_ptr;
  ret__dat__pos=__t2233t__dat__pos;
  ret__dat__length=__t2233t__dat__length;
  ret__dat__first=__t2233t__dat__first;
  eq__t2060t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2234t__);
  __t2232t=__t2234t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6193t=__t2232t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t779t(uint64_t to, uint64_t* __t6194t, uint64_t* __t6195t) {
  uint64_t __t780t=0;
  uint64_t from=0;
  __t780t=0;
  from=__t780t;
  goto __t_return;
  __t_return:
  *__t6194t=from;
  *__t6195t=to;
}

static inline __attribute__((always_inline)) void range__t796t(uint64_t _from, uint64_t to, uint64_t* __t6196t, uint64_t* __t6197t) {
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
  *__t6196t=from;
  *__t6197t=to;
}

static inline __attribute__((always_inline)) int mutget__t801t(uint64_t* __t6198t, uint64_t r__to, uint64_t skipped, uint64_t* __t6199t) {
  uint64_t r__from=*__t6198t;
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
  *__t6198t=r__from;
  *__t6199t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2312t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t6200t) {
  char* __t2313t__unsafe_ptr=0;
  uint64_t __t2313t__dat__pos=0;
  uint64_t __t2313t__dat__length=0;
  char __t2313t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2314t__unsafe_ptr=0;
  uint64_t __t2314t__dat__pos=0;
  uint64_t __t2314t__dat__length=0;
  char __t2314t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t2315t=0;
  uint64_t __t2316t__=0;
  uint64_t n=0;
  char __t2317t__=0;
  char __t2318t=0;
  uint64_t __t2319t=0;
  uint64_t __t2320t__from=0;
  uint64_t __t2320t__to=0;
  uint64_t __t2321t__from=0;
  uint64_t __t2321t__to=0;
  char __t2322t=0;
  uint64_t __t2323t__=0;
  uint64_t i=0;
  char __t2324t=0;
  uint64_t __t2325t__=0;
  char* __t2326t__unsafe_ptr=0;
  uint64_t __t2326t__dat__pos=0;
  uint64_t __t2326t__dat__length=0;
  char __t2326t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t2327t__=0;
  char __t2328t=0;
  char __t2329t=0;
  int __t_complain=0;
  str__t1863t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2313t__unsafe_ptr,&__t2313t__dat__pos,&__t2313t__dat__length,&__t2313t__dat__first);
  stack__unsafe_ptr=__t2313t__unsafe_ptr;
  stack__dat__pos=__t2313t__dat__pos;
  stack__dat__length=__t2313t__dat__length;
  stack__dat__first=__t2313t__dat__first;
  str__t1886t(_needle,&__t2314t__unsafe_ptr,&__t2314t__dat__pos,&__t2314t__dat__length,&__t2314t__dat__first);
  needle__unsafe_ptr=__t2314t__unsafe_ptr;
  needle__dat__pos=__t2314t__dat__pos;
  needle__dat__length=__t2314t__dat__length;
  needle__dat__first=__t2314t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t402t(stack__dat__length,d,&__t2316t__);
  __t2315t=__t_complain;
  if(__t_complain){
  goto __t2315t__label;
  }
  n=__t2316t__;
  __t2315t__label:__t2315t=__t2315t==0;
  not__t42t(__t2315t,&__t2317t__);
  if(__t2317t__){
  __t2318t=0;
  goto __t_return;
  }
  of__t779t(n,&__t2320t__from,&__t2320t__to);
  range__t796t(__t2320t__from,__t2320t__to,&__t2321t__from,&__t2321t__to);
  __t2319t=0-1;
  while(1){
  __t2319t=__t2319t+1;
  __t_complain=mutget__t801t(&__t2321t__from,__t2321t__to,__t2319t,&__t2323t__);
  __t2322t=__t_complain;
  if(__t_complain){
  goto __t2322t__label;
  }
  i=__t2323t__;
  __t2322t__label:__t2322t=__t2322t==0;
  if(!__t2322t){
  break;
  }
  add__t188t(i,d,&__t2325t__);
  __t_complain=slice__t2147t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t2325t__,&__t2326t__unsafe_ptr,&__t2326t__dat__pos,&__t2326t__dat__length,&__t2326t__dat__first);
  __t2324t=__t_complain;
  if(__t_complain){
  goto __t2324t__label;
  }
  sliced__unsafe_ptr=__t2326t__unsafe_ptr;
  sliced__dat__pos=__t2326t__dat__pos;
  sliced__dat__length=__t2326t__dat__length;
  sliced__dat__first=__t2326t__dat__first;
  __t2324t__label:__t2324t=__t2324t==0;
  eq__t2060t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2327t__);
  if(__t2327t__){
  __t2328t=1;
  __t2318t=__t2328t;
  goto __t_return;
  }
  }
  __t2329t=0;
  __t2318t=__t2329t;
  goto __t_return;
  __t_return:
  *__t6200t=__t2318t;
}

static inline __attribute__((always_inline)) void restore_stdout__t5566t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void stdout_to_err__t5567t(int64_t* __t6201t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t6201t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t2115t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t2116t=0;
  const char* endl=0;
  endl=__t475t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void popen__t4645t(const char* cmd, char** __t6202t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t6202t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4644t(char* unsafe_ptr, int64_t* __t6203t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t6203t=status;
}

static inline __attribute__((always_inline)) void int__t658t(uint64_t x, int64_t* __t6204t) {
  int __t659t=0;
  int __t660t=0;
  int __t661t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t6204t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t6205t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t6205t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t6206t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6206t=z;
}

static inline __attribute__((always_inline)) int open__t4646t(const char* cmd, char** __t6207t) {
  char* __t4647t__=0;
  char* unsafe_ptr=0;
  char __t4648t__=0;
  char __t4649t__=0;
  char __t4650t__=0;
  int64_t __t4651t__=0;
  int64_t status=0;
  uint64_t __t4652t=0;
  int64_t __t4653t__=0;
  char __t4654t__=0;
  char __t4655t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4645t(cmd,&__t4647t__);
  unsafe_ptr=__t4647t__;
  exists__t683t(unsafe_ptr,&__t4648t__);
  not__t42t(__t4648t__,&__t4649t__);
  if(__t4649t__){
  __t_errcode=47;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t683t(unsafe_ptr,&__t4650t__);
  if(__t4650t__){
  pclose__t4644t(unsafe_ptr,&__t4651t__);
  status=__t4651t__;
  unsafe_ptr=0;
  __t4652t=0;
  int__t658t(__t4652t,&__t4653t__);
  neq__t147t(status,__t4653t__,&__t4654t__);
  if(__t4654t__){
  __t_complain=48;
  goto __t4655t__label;
  __t4655t__label:__t4655t=__t4655t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t6207t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4657t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t6208t) {
  const char* __t4658t__cstr=0;
  char* __t4658t__str__unsafe_ptr=0;
  uint64_t __t4658t__str__dat__pos=0;
  uint64_t __t4658t__str__dat__length=0;
  char __t4658t__str__dat__first=0;
  const char* __t4660t__=0;
  char* __t4661t__unsafe_ptr=0;
  char __t4662t____t4650t__=0;
  int64_t __t4662t____t4651t__=0;
  int64_t __t4662t__status=0;
  uint64_t __t4662t____t4652t=0;
  int64_t __t4662t____t4653t__=0;
  char __t4662t____t4654t__=0;
  char __t4662t____t4655t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t2043t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4658t__cstr,&__t4658t__str__unsafe_ptr,&__t4658t__str__dat__pos,&__t4658t__str__dat__length,&__t4658t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t2053t(__t4658t__cstr,__t4658t__str__unsafe_ptr,__t4658t__str__dat__pos,__t4658t__str__dat__length,__t4658t__str__dat__first,&__t4660t__);
  __t_errcode=open__t4646t(__t4660t__,&__t4661t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t683t(__t4661t__unsafe_ptr,&__t4662t____t4650t__);
  if(__t4662t____t4650t__){
  pclose__t4644t(__t4661t__unsafe_ptr,&__t4662t____t4651t__);
  __t4662t__status=__t4662t____t4651t__;
  __t4661t__unsafe_ptr=0;
  __t4662t____t4652t=0;
  int__t658t(__t4662t____t4652t,&__t4662t____t4653t__);
  neq__t147t(__t4662t__status,__t4662t____t4653t__,&__t4662t____t4654t__);
  if(__t4662t____t4654t__){
  __t_complain=48;
  goto __t4655t__label;
  __t4655t__label:__t4662t____t4655t=__t4662t____t4655t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t6208t=__t4661t__unsafe_ptr;
  
  __t_skip_returns:free__t844t(&__t4658t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4337t(int64_t value, char* __t6209t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t6209t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4336t(int64_t value, const char** __t6210t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t6210t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t6211t) {
  const char* value=0;
  *__t6211t=value;
}

int run__t5495t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t6212t) {
  char* __t5496t__unsafe_ptr=0;
  char __t5497t____t4662t____t4650t__=0;
  int64_t __t5497t____t4662t____t4651t__=0;
  int64_t __t5497t____t4662t__status=0;
  uint64_t __t5497t____t4662t____t4652t=0;
  int64_t __t5497t____t4662t____t4653t__=0;
  char __t5497t____t4662t____t4654t__=0;
  char __t5497t____t4662t____t4655t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t5498t=0;
  int64_t error=0;
  char __t5499t__=0;
  char __t5500t__=0;
  const char* __t5501t__=0;
  const char* __t5502t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4657t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5496t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t5496t__unsafe_ptr;
  exists__t683t(__t5496t__unsafe_ptr,&__t5497t____t4662t____t4650t__);
  if(__t5497t____t4662t____t4650t__){
  pclose__t4644t(__t5496t__unsafe_ptr,&__t5497t____t4662t____t4651t__);
  __t5497t____t4662t__status=__t5497t____t4662t____t4651t__;
  __t5496t__unsafe_ptr=0;
  __t5497t____t4662t____t4652t=0;
  int__t658t(__t5497t____t4662t____t4652t,&__t5497t____t4662t____t4653t__);
  neq__t147t(__t5497t____t4662t__status,__t5497t____t4662t____t4653t__,&__t5497t____t4662t____t4654t__);
  if(__t5497t____t4662t____t4654t__){
  __t_complain=48;
  goto __t4655t__label;
  __t4655t__label:__t5497t____t4662t____t4655t=__t5497t____t4662t____t4655t==0;
  }
  }
  __t5498t=__t_complain;
  error=__t5498t;
  ok__t4337t(error,&__t5499t__);
  not__t42t(__t5499t__,&__t5500t__);
  if(__t5500t__){
  cstr__t4336t(error,&__t5501t__);
  goto __t_return;
  }
  cstr__t1t(&__t5502t__);
  __t5501t__=__t5502t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6212t=__t5501t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void exists__t1824t(const char* c, char* __t6213t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t6213t=z;
}

static inline __attribute__((always_inline)) void nn__t462t(const char* value, const char** __t6214t, const char** __t6215t) {
  const char* __t464t=0;
  __t464t=__t463t;
  goto __t_return;
  __t_return:
  *__t6214t=value;
  *__t6215t=__t464t;
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

static inline __attribute__((always_inline)) void print_marker__t5531t(char colors__initialized) {
  const char* __t5533t__value=0;
  const char* __t5533t____t464t=0;
  int __t5535t=0;
  char __t5536t=0;
  char __t5537t=0;
  const char* __t5542t__value=0;
  const char* __t5542t____t464t=0;
  int __t5544t=0;
  const char* __t5547t__value=0;
  const char* __t5547t____t464t=0;
  nn__t462t(__t4357t,&__t5533t__value,&__t5533t____t464t);
  print__t471t(__t5533t__value,__t5533t____t464t);
  __t5537t=1;
  if(__t5538t!=__t5538t){
  __t5537t=0;
  }
  if(__t5537t){
  __t5536t=1;
  }
  if(__t5536t){
  set__t507t(colors__initialized);
  nn__t462t(__t5541t,&__t5542t__value,&__t5542t____t464t);
  print__t471t(__t5542t__value,__t5542t____t464t);
  }
  set__t627t(colors__initialized);
  nn__t462t(__t5528t,&__t5547t__value,&__t5547t____t464t);
  print__t471t(__t5547t__value,__t5547t____t464t);
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

static inline __attribute__((always_inline)) void print_marker__t5512t(char colors__initialized) {
  const char* __t5514t__value=0;
  const char* __t5514t____t464t=0;
  char __t5516t=0;
  char __t5517t=0;
  const char* __t5522t__value=0;
  const char* __t5522t____t464t=0;
  int __t5524t=0;
  int __t5525t=0;
  const char* __t5529t__value=0;
  const char* __t5529t____t464t=0;
  nn__t462t(__t4357t,&__t5514t__value,&__t5514t____t464t);
  print__t471t(__t5514t__value,__t5514t____t464t);
  __t5517t=1;
  if(__t5518t!=__t5518t){
  __t5517t=0;
  }
  if(__t5517t){
  __t5516t=1;
  }
  if(__t5516t){
  set__t511t(colors__initialized);
  nn__t462t(__t5521t,&__t5522t__value,&__t5522t____t464t);
  print__t471t(__t5522t__value,__t5522t____t464t);
  }
  set__t627t(colors__initialized);
  nn__t462t(__t5528t,&__t5529t__value,&__t5529t____t464t);
  print__t471t(__t5529t__value,__t5529t____t464t);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int test__t5649t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t6216t) {
  int64_t __t5651t__=0;
  const char* __t5654t__=0;
  const char* __t5655t=0;
  const char* error=0;
  int __t5656t=0;
  int __t5657t__=0;
  char __t5658t__=0;
  const char* __t5659t__=0;
  const char* __t5661t__value=0;
  const char* __t5661t____t464t=0;
  char __t5663t__=0;
  char __t5667t=0;
  char __t5672t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5567t(&__t5651t__);
  print__t2115t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t5495t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5654t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5655t=__t5654t__;
  error=__t5655t;
  not__t53t(__t5656t,&__t5657t__);
  if(should_fail){
  exists__t1824t(error,&__t5658t__);
  if(__t5658t__){
  cstr__t1t(&__t5659t__);
  error=__t5659t__;
  }
  else{
  error=__t5660t;
  }
  }
  nn__t462t(__t5579t,&__t5661t__value,&__t5661t____t464t);
  print__t471t(__t5661t__value,__t5661t____t464t);
  exists__t1824t(error,&__t5663t__);
  if(__t5663t__){
  print_marker__t5531t(colors__initialized);
  print__t473t(error);
  __t5667t=0;
  goto __t_return;
  }
  print_marker__t5512t(colors__initialized);
  print__t473t(__t5670t);
  __t5672t=1;
  __t5667t=__t5672t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6216t=__t5667t;
  
  __t_skip_returns:restore_stdout__t5566t(__t5651t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t484t(uint64_t value, const char* endl) {
  int __t485t=0;
  printf("%llu%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void nn__t469t(uint64_t value, uint64_t* __t6217t, const char** __t6218t) {
  const char* __t470t=0;
  __t470t=__t463t;
  goto __t_return;
  __t_return:
  *__t6217t=value;
  *__t6218t=__t470t;
}

static inline __attribute__((always_inline)) int _main__t5711t() {
  char* __t5713t__unsafe_ptr=0;
  uint64_t __t5713t__dat__pos=0;
  uint64_t __t5713t__dat__length=0;
  char __t5713t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5714t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5716t=0;
  char* __t5717t__unsafe_ptr=0;
  uint64_t __t5717t__unsafe_size=0;
  uint32_t __t5717t__unsafe_offset=0;
  uint32_t __t5717t__unsafe_align=0;
  char* __t5719t__buf__unsafe_ptr=0;
  uint64_t __t5719t__buf__unsafe_size=0;
  uint32_t __t5719t__buf__unsafe_offset=0;
  uint32_t __t5719t__buf__unsafe_align=0;
  uint64_t __t5719t__pos=0;
  char* __t5720t__buf__unsafe_ptr=0;
  uint64_t __t5720t__buf__unsafe_size=0;
  uint32_t __t5720t__buf__unsafe_offset=0;
  uint32_t __t5720t__buf__unsafe_align=0;
  uint64_t __t5720t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char __t5721t=0;
  char* __t5723t__unsafe_ptr=0;
  uint64_t __t5723t__dat__pos=0;
  uint64_t __t5723t__dat__length=0;
  char __t5723t__dat__first=0;
  char* preferred_backend__unsafe_ptr=0;
  uint64_t preferred_backend__dat__pos=0;
  uint64_t preferred_backend__dat__length=0;
  char preferred_backend__dat__first=0;
  int __t5732t=0;
  char* __t5734t__unsafe_ptr=0;
  uint64_t __t5734t__dat__pos=0;
  uint64_t __t5734t__dat__length=0;
  char __t5734t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  char* __t5725t__unsafe_ptr=0;
  uint64_t __t5725t__dat__pos=0;
  uint64_t __t5725t__dat__length=0;
  char __t5725t__dat__first=0;
  char* __t5727t__unsafe_ptr=0;
  uint64_t __t5727t__dat__pos=0;
  uint64_t __t5727t__dat__length=0;
  char __t5727t__dat__first=0;
  uint64_t __t5735t=0;
  uint64_t __t5736t=0;
  uint64_t counter=0;
  uint64_t __t5737t=0;
  uint64_t __t5738t=0;
  uint64_t failures=0;
  uint64_t __t5739t=0;
  char* __t5740t__unsafe_ptr=0;
  char __t5742t=0;
  char* __t5743t__unsafe_ptr=0;
  uint64_t __t5743t__dat__pos=0;
  uint64_t __t5743t__dat__length=0;
  char __t5743t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5745t__=0;
  char __t5746t__=0;
  char __t5747t__=0;
  char __t5748t=0;
  char __t5749t__=0;
  uint64_t __t5750t__=0;
  uint64_t __t5751t____t5708t=0;
  uint64_t __t5751t____t5710t__=0;
  char* __t5752t__unsafe_ptr=0;
  uint64_t __t5752t__dat__pos=0;
  uint64_t __t5752t__dat__length=0;
  char __t5752t__dat__first=0;
  char* __t5754t__unsafe_ptr=0;
  uint64_t __t5754t__dat__pos=0;
  uint64_t __t5754t__dat__length=0;
  char __t5754t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5755t=0;
  char* __t5756t__unsafe_ptr=0;
  char __t5758t=0;
  char* __t5759t__unsafe_ptr=0;
  uint64_t __t5759t__dat__pos=0;
  uint64_t __t5759t__dat__length=0;
  char __t5759t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5761t__=0;
  char __t5762t__=0;
  uint64_t __t5763t__=0;
  uint64_t __t5764t____t5708t=0;
  uint64_t __t5764t____t5710t__=0;
  uint64_t __t5765t=0;
  uint64_t __t5766t__=0;
  char __t5768t__=0;
  char should_fail=0;
  char* __t5769t__unsafe_ptr=0;
  uint64_t __t5769t__dat__pos=0;
  uint64_t __t5769t__dat__length=0;
  char __t5769t__dat__first=0;
  char* __t5770t__unsafe_ptr=0;
  uint64_t __t5770t__dat__pos=0;
  uint64_t __t5770t__dat__length=0;
  char __t5770t__dat__first=0;
  char __t5771t__=0;
  char __t5772t__=0;
  uint64_t __t5773t=0;
  uint64_t __t5774t__=0;
  int64_t __t5775t__=0;
  uint64_t __t5777t=0;
  char __t5778t__=0;
  const char* __t5792t__value=0;
  const char* __t5792t____t464t=0;
  const char* __t5782t__value=0;
  const char* __t5782t____t464t=0;
  const char* __t5787t__value=0;
  const char* __t5787t____t464t=0;
  uint64_t __t5798t__value=0;
  const char* __t5798t____t470t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1886t(__t5712t,&__t5713t__unsafe_ptr,&__t5713t__dat__pos,&__t5713t__dat__length,&__t5713t__dat__first);
  test_root__unsafe_ptr=__t5713t__unsafe_ptr;
  test_root__dat__pos=__t5713t__dat__pos;
  test_root__dat__length=__t5713t__dat__length;
  test_root__dat__first=__t5713t__dat__first;
  colors__t501t(&__t5714t__initialized);
  colors__initialized=__t5714t__initialized;
  __t5716t=128;
  __t_errcode=alloc__t1126t(__t5716t,&__t5717t__unsafe_ptr,&__t5717t__unsafe_size,&__t5717t__unsafe_offset,&__t5717t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1443t(&__t5717t__unsafe_ptr,&__t5717t__unsafe_size,&__t5717t__unsafe_offset,&__t5717t__unsafe_align,&__t5719t__buf__unsafe_ptr,&__t5719t__buf__unsafe_size,&__t5719t__buf__unsafe_offset,&__t5719t__buf__unsafe_align,&__t5719t__pos);
  __t5720t__buf__unsafe_ptr=__t5719t__buf__unsafe_ptr;
  __t5720t__buf__unsafe_size=__t5719t__buf__unsafe_size;
  __t5720t__buf__unsafe_offset=__t5719t__buf__unsafe_offset;
  __t5720t__buf__unsafe_align=__t5719t__buf__unsafe_align;
  __t5720t__pos=__t5719t__pos;
  CHARS__buf__unsafe_ptr=__t5720t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5720t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5720t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5720t__buf__unsafe_align;
  CHARS__pos=__t5720t__pos;
  __t_complain=arg_after__t4495t(__t5722t,&__t5723t__unsafe_ptr,&__t5723t__dat__pos,&__t5723t__dat__length,&__t5723t__dat__first);
  __t5721t=__t_complain;
  if(__t_complain){
  goto __t5721t__label;
  }
  preferred_backend__unsafe_ptr=__t5723t__unsafe_ptr;
  preferred_backend__dat__pos=__t5723t__dat__pos;
  preferred_backend__dat__length=__t5723t__dat__length;
  preferred_backend__dat__first=__t5723t__dat__first;
  __t5721t__label:__t5721t=__t5721t==0;
  if(__t5721t){
  __t_errcode=add__t3538t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5724t,preferred_backend__unsafe_ptr,preferred_backend__dat__pos,preferred_backend__dat__length,preferred_backend__dat__first,&__t5725t__unsafe_ptr,&__t5725t__dat__pos,&__t5725t__dat__length,&__t5725t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t3536t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5725t__unsafe_ptr,__t5725t__dat__pos,__t5725t__dat__length,__t5725t__dat__first,__t5726t,&__t5727t__unsafe_ptr,&__t5727t__dat__pos,&__t5727t__dat__length,&__t5727t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5727t__unsafe_ptr;
  command_base__dat__pos=__t5727t__dat__pos;
  command_base__dat__length=__t5727t__dat__length;
  command_base__dat__first=__t5727t__dat__first;
  }
  else{
  __t_errcode=copy__t1972t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5733t,&__t5734t__unsafe_ptr,&__t5734t__dat__pos,&__t5734t__dat__length,&__t5734t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5734t__unsafe_ptr;
  command_base__dat__pos=__t5734t__dat__pos;
  command_base__dat__length=__t5734t__dat__length;
  command_base__dat__first=__t5734t__dat__first;
  }
  __t5735t=0;
  __t5736t=__t5735t;
  counter=__t5736t;
  __t5737t=0;
  __t5738t=__t5737t;
  failures=__t5738t;
  __t_errcode=open__t5378t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5740t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5739t=0-1;
  while(1){
  __t5739t=__t5739t+1;
  __t_complain=mutget__t5461t(&__t5740t__unsafe_ptr,__t5739t,&__t5743t__unsafe_ptr,&__t5743t__dat__pos,&__t5743t__dat__length,&__t5743t__dat__first);
  __t5742t=__t_complain;
  if(__t_complain){
  goto __t5742t__label;
  }
  path__unsafe_ptr=__t5743t__unsafe_ptr;
  path__dat__pos=__t5743t__dat__pos;
  path__dat__length=__t5743t__dat__length;
  path__dat__first=__t5743t__dat__first;
  __t5742t__label:__t5742t=__t5742t==0;
  if(!__t5742t){
  break;
  }
  eq__t2067t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5744t,&__t5745t__);
  if(!__t5745t__){
  __t_errcode=is_dir__t5305t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5746t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5746t__,&__t5747t__);
  __t5748t=__t5747t__;
  }
  else{
  __t5748t=0;
  not__t42t(__t5748t,&__t5749t__);
  __t5748t=__t5749t__;
  }
  if(__t5748t){
  continue;
  }
  reuse__t5705t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5750t__);
  __t_errcode=add__t3534t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5752t__unsafe_ptr,&__t5752t__dat__pos,&__t5752t__dat__length,&__t5752t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t3536t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5752t__unsafe_ptr,__t5752t__dat__pos,__t5752t__dat__length,__t5752t__dat__first,__t5753t,&__t5754t__unsafe_ptr,&__t5754t__dat__pos,&__t5754t__dat__length,&__t5754t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5754t__unsafe_ptr;
  dir_path__dat__pos=__t5754t__dat__pos;
  dir_path__dat__length=__t5754t__dat__length;
  dir_path__dat__first=__t5754t__dat__first;
  __t_errcode=open__t5378t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5756t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5755t=0-1;
  while(1){
  __t5755t=__t5755t+1;
  __t_complain=mutget__t5461t(&__t5756t__unsafe_ptr,__t5755t,&__t5759t__unsafe_ptr,&__t5759t__dat__pos,&__t5759t__dat__length,&__t5759t__dat__first);
  __t5758t=__t_complain;
  if(__t_complain){
  goto __t5758t__label;
  }
  entry__unsafe_ptr=__t5759t__unsafe_ptr;
  entry__dat__pos=__t5759t__dat__pos;
  entry__dat__length=__t5759t__dat__length;
  entry__dat__first=__t5759t__dat__first;
  __t5758t__label:__t5758t=__t5758t==0;
  if(!__t5758t){
  break;
  }
  __t_errcode=ends_with__t2226t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5760t,&__t5761t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5761t__,&__t5762t__);
  if(__t5762t__){
  continue;
  }
  reuse__t5705t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5763t__);
  __t5765t=1;
  add__t188t(counter,__t5765t,&__t5766t__);
  counter=__t5766t__;
  contains__t2312t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5767t,&__t5768t__);
  should_fail=__t5768t__;
  __t_errcode=add__t3534t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5769t__unsafe_ptr,&__t5769t__dat__pos,&__t5769t__dat__length,&__t5769t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t3534t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5769t__unsafe_ptr,__t5769t__dat__pos,__t5769t__dat__length,__t5769t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5770t__unsafe_ptr,&__t5770t__dat__pos,&__t5770t__dat__length,&__t5770t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5649t(colors__initialized,__t5770t__unsafe_ptr,__t5770t__dat__pos,__t5770t__dat__length,__t5770t__dat__first,should_fail,&__t5771t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5771t__,&__t5772t__);
  if(__t5772t__){
  __t5773t=1;
  add__t188t(failures,__t5773t,&__t5774t__);
  failures=__t5774t__;
  }
  __t5764t____t5708t=0;
  sub__t410t(__t5763t__,__t5764t____t5708t,&__t5764t____t5710t__);
  CHARS__pos=__t5764t____t5710t__;
  }
  __t5751t____t5708t=0;
  sub__t410t(__t5750t__,__t5751t____t5708t,&__t5751t____t5710t__);
  CHARS__pos=__t5751t____t5710t__;
  closedir__t5368t(__t5756t__unsafe_ptr);
  }
  stdout_to_err__t5567t(&__t5775t__);
  __t5777t=0;
  eq__t134t(failures,__t5777t,&__t5778t__);
  if(__t5778t__){
  set__t511t(colors__initialized);
  nn__t462t(__t5781t,&__t5782t__value,&__t5782t____t464t);
  print__t471t(__t5782t__value,__t5782t____t464t);
  set__t627t(colors__initialized);
  nn__t462t(__t5786t,&__t5787t__value,&__t5787t____t464t);
  print__t471t(__t5787t__value,__t5787t____t464t);
  }
  else{
  set__t507t(colors__initialized);
  nn__t462t(__t5791t,&__t5792t__value,&__t5792t____t464t);
  print__t471t(__t5792t__value,__t5792t____t464t);
  set__t627t(colors__initialized);
  print__t484t(failures,__t5796t);
  }
  nn__t469t(counter,&__t5798t__value,&__t5798t____t470t);
  print__t484t(__t5798t__value,__t5798t____t470t);
  print__t473t(__t5800t);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:restore_stdout__t5566t(__t5775t__);
  closedir__t5368t(__t5740t__unsafe_ptr);
  free__t844t(&__t5717t__unsafe_ptr);
  if(__t5714t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5802t() {
  char __t5805t=0;
  char __t5807t__=0;
  int64_t __t5808t=0;
  const char* __t5809t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t448t();
  __t_complain=_main__t5711t();
  __t5805t=__t_complain;
  if(__t_complain){
  goto __t5805t__label;
  }
  __t5805t__label:__t5805t=__t5805t==0;
  not__t42t(__t5805t,&__t5807t__);
  if(__t5807t__){
  __t5808t=__t_complain;
  cstr__t4336t(__t5808t,&__t5809t__);
  print__t473t(__t5809t__);
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
  __t_errcode=main__t5802t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}