#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t6414t="X";
const char* const __t6585t="./tests/passing/";
const char* const __t6626t="/";
const char* const __t6543t="completed";
const char* const __t6401t="] ";
const char* const __t6599t=" --cleanup ";
const char* const __t6391t="success";
const char* const __t6606t="./smoll --cleanup ";
const char* const __t6633t=".s";
const char* const __t5230t="[";
const char* const __t6669t=" out of ";
const char* const __t6452t=" |- ";
const char* const __t463t="";
const char* const __t6654t="PASSING ";
const char* const __t6597t="./smoll --back ";
const char* const __t6659t="no errors across ";
const char* const __t6533t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t6673t=" tests";
const char* const __t6394t="V";
const char* const __t6640t="_fail_";
const char* const __t6664t="FAILED ";
const char* const __t6411t="failure";
const char* const __t6595t="--testback";
const char* const __t6617t="..";
const char* const __t475t="\n";
static const char* __t_all_errcodes[69] = {"noerr",
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
"does not fit in circular arena",
"arena is out of space",
"linkedmem allocation multiple must be at least 1",
"cannot create a linkedmem using an allocated buffer as prototype",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"not found",
"unexpected end of console read",
"user input was not a float",
"user input was not a natural number",
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

static inline __attribute__((always_inline)) void console__t448t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1782t(char** __t6684t, uint64_t* __t6685t, uint32_t* __t6686t, uint32_t* __t6687t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t6684t=unsafe_ptr;
  *__t6685t=unsafe_size;
  *__t6686t=unsafe_offset;
  *__t6687t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t6688t) {
  *__t6688t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t6689t) {
  int value=0;
  *__t6689t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t6690t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t6690t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t6691t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t6691t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t6692t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6692t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t6693t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6693t=z;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t6694t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t6694t=z;
}

static inline __attribute__((always_inline)) void nat__t724t(uint32_t x, uint64_t* __t6695t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6695t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t6696t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6696t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t6697t) {
  *__t6697t=to;
}

static inline __attribute__((always_inline)) void add__t846t(char* allocated, uint64_t offset, char** __t6698t) {
  char* element=0;
  char* __t847t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t847t__);
  goto __t_return;
  __t_return:
  *__t6698t=__t847t__;
}

static inline __attribute__((always_inline)) int get__t1189t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t6699t) {
  int __t1190t=0;
  char __t1191t__=0;
  uint64_t __t1192t__=0;
  uint64_t __t1193t__=0;
  uint64_t __t1194t__=0;
  uint64_t __t1195t__=0;
  char* __t1196t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,buffer__unsafe_size,&__t1191t__);
  if(__t1191t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t1192t__);
  mul__t212t(i,__t1192t__,&__t1193t__);
  nat__t724t(buffer__unsafe_offset,&__t1194t__);
  add__t188t(__t1193t__,__t1194t__,&__t1195t__);
  add__t846t(buffer__unsafe_ptr,__t1195t__,&__t1196t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6699t=__t1196t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1819t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t6700t, uint64_t* __t6701t, uint64_t* __t6702t, char* __t6703t) {
  goto __t_return;
  __t_return:
  *__t6700t=unsafe_ptr;
  *__t6701t=dat__pos;
  *__t6702t=dat__length;
  *__t6703t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1823t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t6704t, uint64_t* __t6705t, uint64_t* __t6706t, char* __t6707t) {
  char* unsafe_ptr=0;
  uint64_t __t1824t__=0;
  uint64_t __t1825t=0;
  char __t1826t__=0;
  uint64_t __t1827t__=0;
  uint64_t __t1828t=0;
  char __t1829t__=0;
  char* __t1830t__unsafe_ptr=0;
  uint64_t __t1830t__dat__pos=0;
  uint64_t __t1830t__dat__length=0;
  char __t1830t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t724t(buf__unsafe_align,&__t1824t__);
  __t1825t=1;
  neq__t158t(__t1824t__,__t1825t,&__t1826t__);
  if(__t1826t__){
  __t_errcode=27;
  goto __t_failure;
  }
  nat__t724t(buf__unsafe_offset,&__t1827t__);
  __t1828t=0;
  neq__t158t(__t1827t__,__t1828t,&__t1829t__);
  if(__t1829t__){
  __t_errcode=28;
  goto __t_failure;
  }
  str__t1819t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1830t__unsafe_ptr,&__t1830t__dat__pos,&__t1830t__dat__length,&__t1830t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6704t=__t1830t__unsafe_ptr;
  *__t6705t=__t1830t__dat__pos;
  *__t6706t=__t1830t__dat__length;
  *__t6707t=__t1830t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1857t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t6708t, uint64_t* __t6709t, uint64_t* __t6710t, char* __t6711t) {
  uint64_t __t1858t=0;
  char __t1859t__=0;
  char* __t1861t__=0;
  char __t1862t__value=0;
  char first=0;
  char* __t1863t__unsafe_ptr=0;
  uint64_t __t1863t__dat__pos=0;
  uint64_t __t1863t__dat__length=0;
  char __t1863t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1858t=0;
  neq__t158t(length,__t1858t,&__t1859t__);
  if(__t1859t__){
  __t_errcode=get__t1189t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1861t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1861t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1862t__value,__t1861t__,1);
  first=__t1862t__value;
  }
  __t_errcode=str__t1823t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1863t__unsafe_ptr,&__t1863t__dat__pos,&__t1863t__dat__length,&__t1863t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6708t=__t1863t__unsafe_ptr;
  *__t6709t=__t1863t__dat__pos;
  *__t6710t=__t1863t__dat__length;
  *__t6711t=__t1863t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1879t(const char* c, char** __t6712t, uint64_t* __t6713t, uint64_t* __t6714t, char* __t6715t) {
  char* __t1880t__unsafe_ptr=0;
  uint64_t __t1880t__unsafe_size=0;
  uint32_t __t1880t__unsafe_offset=0;
  uint32_t __t1880t__unsafe_align=0;
  char* __t1881t__unsafe_ptr=0;
  uint64_t __t1881t__unsafe_size=0;
  uint32_t __t1881t__unsafe_offset=0;
  uint32_t __t1881t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1882t__=0;
  uint64_t length=0;
  uint64_t __t1883t=0;
  uint64_t __t1884t__=0;
  char __t1885t=0;
  uint64_t __t1886t=0;
  char* __t1888t__unsafe_ptr=0;
  uint64_t __t1888t__dat__pos=0;
  uint64_t __t1888t__dat__length=0;
  char __t1888t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1782t(&__t1880t__unsafe_ptr,&__t1880t__unsafe_size,&__t1880t__unsafe_offset,&__t1880t__unsafe_align);
  __t1881t__unsafe_ptr=__t1880t__unsafe_ptr;
  __t1881t__unsafe_size=__t1880t__unsafe_size;
  __t1881t__unsafe_offset=__t1880t__unsafe_offset;
  __t1881t__unsafe_align=__t1880t__unsafe_align;
  buf__unsafe_ptr=__t1881t__unsafe_ptr;
  buf__unsafe_size=__t1881t__unsafe_size;
  buf__unsafe_offset=__t1881t__unsafe_offset;
  buf__unsafe_align=__t1881t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1882t__);
  buf__unsafe_ptr=__t1882t__;
  if(c){
  length=strlen(c);
  }
  __t1883t=1;
  add__t188t(length,__t1883t,&__t1884t__);
  buf__unsafe_size=__t1884t__;
  __t1886t=0;
  __t_complain=str__t1857t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1886t,length,&__t1888t__unsafe_ptr,&__t1888t__dat__pos,&__t1888t__dat__length,&__t1888t__dat__first);
  __t1885t=__t_complain;
  if(__t_complain){
  goto __t1885t__label;
  }
  ret__unsafe_ptr=__t1888t__unsafe_ptr;
  ret__dat__pos=__t1888t__dat__pos;
  ret__dat__length=__t1888t__dat__length;
  ret__dat__first=__t1888t__dat__first;
  __t1885t__label:__t1885t=__t1885t==0;
  goto __t_return;
  __t_return:
  *__t6712t=ret__unsafe_ptr;
  *__t6713t=ret__dat__pos;
  *__t6714t=ret__dat__length;
  *__t6715t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t500t(char* __t6716t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t6716t=supports;
}

static inline __attribute__((always_inline)) void colors__t501t(char* __t6717t) {
  char __t502t__=0;
  char initialized=0;
  supports_ansi__t500t(&__t502t__);
  initialized=__t502t__;
  goto __t_return;
  __t_return:
  *__t6717t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1126t(char** __t6718t, uint64_t* __t6719t, uint32_t* __t6720t, uint32_t* __t6721t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t6718t=unsafe_ptr;
  *__t6719t=unsafe_size;
  *__t6720t=unsafe_offset;
  *__t6721t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t844t(char** __t6722t) {
  char* allocated=*__t6722t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t6722t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t6723t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6723t=z;
}

static inline __attribute__((always_inline)) void zero__t845t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t683t(char* x, char* __t6724t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6724t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t6725t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6725t=z;
}

static inline __attribute__((always_inline)) int alloc__t828t(uint64_t bytes, char** __t6726t) {
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
  *__t6726t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t969t(char** __t6727t, uint64_t* __t6728t, uint32_t* __t6729t, uint32_t* __t6730t, uint64_t size, char** __t6731t, uint64_t* __t6732t, uint32_t* __t6733t, uint32_t* __t6734t) {
  char* buffer__unsafe_ptr=*__t6727t;
  uint64_t buffer__unsafe_size=*__t6728t;
  uint32_t buffer__unsafe_offset=*__t6729t;
  uint32_t buffer__unsafe_align=*__t6730t;
  int __t970t=0;
  int __t971t=0;
  char __t973t__=0;
  uint64_t __t974t=0;
  char __t975t__=0;
  char __t976t=0;
  uint64_t __t977t=0;
  uint64_t __t978t__=0;
  uint64_t __t979t__=0;
  int __t981t=0;
  uint64_t __t982t=0;
  char __t983t__=0;
  uint64_t __t984t__=0;
  uint64_t __t985t__=0;
  uint64_t bytes=0;
  int __t986t=0;
  uint64_t __t987t=0;
  char __t988t__=0;
  char* __t989t__=0;
  int __t990t=0;
  uint64_t __t991t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t973t__);
  if(__t973t__){
  __t974t=0;
  neq__t158t(size,__t974t,&__t975t__);
  __t976t=__t975t__;
  }
  if(__t976t){
  __t977t=0;
  nat__t724t(buffer__unsafe_align,&__t978t__);
  mul__t212t(__t978t__,size,&__t979t__);
  zero__t845t(buffer__unsafe_ptr,__t977t,__t979t__);
  goto __t_return;
  }
  __t982t=0;
  neq__t158t(buffer__unsafe_size,__t982t,&__t983t__);
  if(__t983t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t724t(buffer__unsafe_align,&__t984t__);
  mul__t212t(__t984t__,size,&__t985t__);
  bytes=__t985t__;
  __t987t=0;
  eq__t134t(bytes,__t987t,&__t988t__);
  if(__t988t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t828t(bytes,&__t989t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t991t=0;
  zero__t845t(__t989t__,__t991t,bytes);
  buffer__unsafe_ptr=__t989t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t844t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6727t=buffer__unsafe_ptr;
  *__t6728t=buffer__unsafe_size;
  *__t6729t=buffer__unsafe_offset;
  *__t6730t=buffer__unsafe_align;
  *__t6731t=buffer__unsafe_ptr;
  *__t6732t=buffer__unsafe_size;
  *__t6733t=buffer__unsafe_offset;
  *__t6734t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int alloc__t1124t(uint64_t size, char** __t6735t, uint64_t* __t6736t, uint32_t* __t6737t, uint32_t* __t6738t) {
  char __t1125t=0;
  char* __t1128t__unsafe_ptr=0;
  uint64_t __t1128t__unsafe_size=0;
  uint32_t __t1128t__unsafe_offset=0;
  uint32_t __t1128t__unsafe_align=0;
  char* __t1129t__unsafe_ptr=0;
  uint64_t __t1129t__unsafe_size=0;
  uint32_t __t1129t__unsafe_offset=0;
  uint32_t __t1129t__unsafe_align=0;
  char* __t1131t__unsafe_ptr=0;
  uint64_t __t1131t__unsafe_size=0;
  uint32_t __t1131t__unsafe_offset=0;
  uint32_t __t1131t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  char __t1132t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1126t(&__t1128t__unsafe_ptr,&__t1128t__unsafe_size,&__t1128t__unsafe_offset,&__t1128t__unsafe_align);
  __t_complain=alloc__t969t(&__t1128t__unsafe_ptr,&__t1128t__unsafe_size,&__t1128t__unsafe_offset,&__t1128t__unsafe_align,size,&__t1129t__unsafe_ptr,&__t1129t__unsafe_size,&__t1129t__unsafe_offset,&__t1129t__unsafe_align);
  __t1125t=__t_complain;
  if(__t_complain){
  goto __t1125t__label;
  }
  __t1131t__unsafe_ptr=__t1129t__unsafe_ptr;
  __t1131t__unsafe_size=__t1129t__unsafe_size;
  __t1131t__unsafe_offset=__t1129t__unsafe_offset;
  __t1131t__unsafe_align=__t1129t__unsafe_align;
  ret__unsafe_ptr=__t1131t__unsafe_ptr;
  ret__unsafe_size=__t1131t__unsafe_size;
  ret__unsafe_offset=__t1131t__unsafe_offset;
  ret__unsafe_align=__t1131t__unsafe_align;
  __t1125t__label:__t1125t=__t1125t==0;
  not__t42t(__t1125t,&__t1132t__);
  if(__t1132t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t844t(&ret__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6735t=ret__unsafe_ptr;
  *__t6736t=ret__unsafe_size;
  *__t6737t=ret__unsafe_offset;
  *__t6738t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1573t(char** __t6739t, uint64_t* __t6740t, uint32_t* __t6741t, uint32_t* __t6742t, uint64_t _pos, char** __t6743t, uint64_t* __t6744t, uint32_t* __t6745t, uint32_t* __t6746t, uint64_t* __t6747t) {
  char* buf__unsafe_ptr=*__t6739t;
  uint64_t buf__unsafe_size=*__t6740t;
  uint32_t buf__unsafe_offset=*__t6741t;
  uint32_t buf__unsafe_align=*__t6742t;
  uint64_t __t1574t=0;
  uint64_t pos=0;
  __t1574t=_pos;
  pos=__t1574t;
  goto __t_return;
  __t_return:
  *__t6739t=buf__unsafe_ptr;
  *__t6740t=buf__unsafe_size;
  *__t6741t=buf__unsafe_offset;
  *__t6742t=buf__unsafe_align;
  *__t6743t=buf__unsafe_ptr;
  *__t6744t=buf__unsafe_size;
  *__t6745t=buf__unsafe_offset;
  *__t6746t=buf__unsafe_align;
  *__t6747t=pos;
}

static inline __attribute__((always_inline)) void arena__t1576t(char** __t6748t, uint64_t* __t6749t, uint32_t* __t6750t, uint32_t* __t6751t, char** __t6752t, uint64_t* __t6753t, uint32_t* __t6754t, uint32_t* __t6755t, uint64_t* __t6756t) {
  char* buf__unsafe_ptr=*__t6748t;
  uint64_t buf__unsafe_size=*__t6749t;
  uint32_t buf__unsafe_offset=*__t6750t;
  uint32_t buf__unsafe_align=*__t6751t;
  uint64_t __t1577t=0;
  char* __t1578t__buf__unsafe_ptr=0;
  uint64_t __t1578t__buf__unsafe_size=0;
  uint32_t __t1578t__buf__unsafe_offset=0;
  uint32_t __t1578t__buf__unsafe_align=0;
  uint64_t __t1578t__pos=0;
  __t1577t=0;
  arena__t1573t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1577t,&__t1578t__buf__unsafe_ptr,&__t1578t__buf__unsafe_size,&__t1578t__buf__unsafe_offset,&__t1578t__buf__unsafe_align,&__t1578t__pos);
  goto __t_return;
  __t_return:
  *__t6748t=buf__unsafe_ptr;
  *__t6749t=buf__unsafe_size;
  *__t6750t=buf__unsafe_offset;
  *__t6751t=buf__unsafe_align;
  *__t6752t=__t1578t__buf__unsafe_ptr;
  *__t6753t=__t1578t__buf__unsafe_size;
  *__t6754t=__t1578t__buf__unsafe_offset;
  *__t6755t=__t1578t__buf__unsafe_align;
  *__t6756t=__t1578t__pos;
}

static inline __attribute__((always_inline)) void argument____t_buffer____buffer__t5355t(char** __t6757t, uint64_t* __t6758t, uint32_t* __t6759t, uint32_t* __t6760t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t6757t=unsafe_ptr;
  *__t6758t=unsafe_size;
  *__t6759t=unsafe_offset;
  *__t6760t=unsafe_align;
}

static inline __attribute__((always_inline)) void args__t5354t(char** __t6761t, uint64_t* __t6762t, uint32_t* __t6763t, uint32_t* __t6764t) {
  char* __t5357t__unsafe_ptr=0;
  uint64_t __t5357t__unsafe_size=0;
  uint32_t __t5357t__unsafe_offset=0;
  uint32_t __t5357t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  argument____t_buffer____buffer__t5355t(&__t5357t__unsafe_ptr,&__t5357t__unsafe_size,&__t5357t__unsafe_offset,&__t5357t__unsafe_align);
  ret__unsafe_ptr=__t5357t__unsafe_ptr;
  ret__unsafe_size=__t5357t__unsafe_size;
  ret__unsafe_offset=__t5357t__unsafe_offset;
  ret__unsafe_align=__t5357t__unsafe_align;
  ret__unsafe_ptr=(char*)__t_argv;
  ret__unsafe_size=__t_argc;
  goto __t_return;
  __t_return:
  *__t6761t=ret__unsafe_ptr;
  *__t6762t=ret__unsafe_size;
  *__t6763t=ret__unsafe_offset;
  *__t6764t=ret__unsafe_align;
}

void str__t5352t(const char* arg__unsafe_value, char** __t6765t, uint64_t* __t6766t, uint64_t* __t6767t, char* __t6768t) {
  char* __t5353t__unsafe_ptr=0;
  uint64_t __t5353t__dat__pos=0;
  uint64_t __t5353t__dat__length=0;
  char __t5353t__dat__first=0;
  str__t1879t(arg__unsafe_value,&__t5353t__unsafe_ptr,&__t5353t__dat__pos,&__t5353t__dat__length,&__t5353t__dat__first);
  goto __t_return;
  __t_return:
  *__t6765t=__t5353t__unsafe_ptr;
  *__t6766t=__t5353t__dat__pos;
  *__t6767t=__t5353t__dat__length;
  *__t6768t=__t5353t__dat__first;
}

void char__t1891t(const char* s, char* __t6769t) {
  char* __t1892t__unsafe_ptr=0;
  uint64_t __t1892t__dat__pos=0;
  uint64_t __t1892t__dat__length=0;
  char __t1892t__dat__first=0;
  str__t1879t(s,&__t1892t__unsafe_ptr,&__t1892t__dat__pos,&__t1892t__dat__length,&__t1892t__dat__first);
  goto __t_return;
  __t_return:
  *__t6769t=__t1892t__dat__first;
}

static inline __attribute__((always_inline)) void neq__t1894t(char x, char y, char* __t6770t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t6770t=z;
}

static inline __attribute__((always_inline)) void len__t1889t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t6771t) {
  goto __t_return;
  __t_return:
  *__t6771t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t2053t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t6772t) {
  uint64_t __t2054t__=0;
  uint64_t n=0;
  uint64_t __t2055t__=0;
  char __t2056t__=0;
  char __t2057t=0;
  char __t2058t__=0;
  char __t2059t=0;
  char z=0;
  len__t1889t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t2054t__);
  n=__t2054t__;
  len__t1889t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t2055t__);
  neq__t158t(n,__t2055t__,&__t2056t__);
  if(__t2056t__){
  __t2057t=0;
  goto __t_return;
  }
  neq__t1894t(x__dat__first,y__dat__first,&__t2058t__);
  if(__t2058t__){
  __t2059t=0;
  __t2057t=__t2059t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t2057t=z;
  goto __t_return;
  __t_return:
  *__t6772t=__t2057t;
}

void eq__t2066t(const char* x, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t6773t) {
  char __t2067t__=0;
  char __t2068t__=0;
  char __t2069t=0;
  char* __t2070t__unsafe_ptr=0;
  uint64_t __t2070t__dat__pos=0;
  uint64_t __t2070t__dat__length=0;
  char __t2070t__dat__first=0;
  char __t2071t__=0;
  char__t1891t(x,&__t2067t__);
  neq__t1894t(y__dat__first,__t2067t__,&__t2068t__);
  if(__t2068t__){
  __t2069t=0;
  goto __t_return;
  }
  str__t1879t(x,&__t2070t__unsafe_ptr,&__t2070t__dat__pos,&__t2070t__dat__length,&__t2070t__dat__first);
  eq__t2053t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,__t2070t__unsafe_ptr,__t2070t__dat__pos,__t2070t__dat__length,__t2070t__dat__first,&__t2071t__);
  __t2069t=__t2071t__;
  goto __t_return;
  __t_return:
  *__t6773t=__t2069t;
}

static inline __attribute__((always_inline)) void len__t1197t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t6774t) {
  goto __t_return;
  __t_return:
  *__t6774t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t6775t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6775t=z;
}

static inline __attribute__((always_inline)) int arg_after__t5368t(const char* flag, char** __t6776t, uint64_t* __t6777t, uint64_t* __t6778t, char* __t6779t) {
  char* __t5369t__unsafe_ptr=0;
  uint64_t __t5369t__unsafe_size=0;
  uint32_t __t5369t__unsafe_offset=0;
  uint32_t __t5369t__unsafe_align=0;
  char* args__unsafe_ptr=0;
  uint64_t args__unsafe_size=0;
  uint32_t args__unsafe_offset=0;
  uint32_t args__unsafe_align=0;
  uint64_t __t5370t=0;
  char __t5371t=0;
  char* __t5372t__=0;
  const char* __t5373t__unsafe_value=0;
  const char* arg__unsafe_value=0;
  char* __t5374t__unsafe_ptr=0;
  uint64_t __t5374t__dat__pos=0;
  uint64_t __t5374t__dat__length=0;
  char __t5374t__dat__first=0;
  char __t5375t__=0;
  uint64_t __t5376t=0;
  uint64_t __t5377t__=0;
  uint64_t __t5378t__=0;
  char __t5379t__=0;
  char __t5380t=0;
  uint64_t __t5381t=0;
  uint64_t __t5382t__=0;
  char* __t5384t__=0;
  const char* __t5385t__unsafe_value=0;
  char* __t5386t__unsafe_ptr=0;
  uint64_t __t5386t__dat__pos=0;
  uint64_t __t5386t__dat__length=0;
  char __t5386t__dat__first=0;
  int __t5387t=0;
  int __t_errcode=0;
  int __t_complain=0;
  args__t5354t(&__t5369t__unsafe_ptr,&__t5369t__unsafe_size,&__t5369t__unsafe_offset,&__t5369t__unsafe_align);
  args__unsafe_ptr=__t5369t__unsafe_ptr;
  args__unsafe_size=__t5369t__unsafe_size;
  args__unsafe_offset=__t5369t__unsafe_offset;
  args__unsafe_align=__t5369t__unsafe_align;
  __t5370t=0-1;
  while(1){
  __t5370t=__t5370t+1;
  __t_complain=get__t1189t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t5370t,&__t5372t__);
  __t5371t=__t_complain;
  if(__t_complain){
  goto __t5371t__label;
  }
  if(!__t5372t__){
  __t_complain=2;
  goto __t5371t__label;
  }
  else{
  memcpy(&__t5373t__unsafe_value,__t5372t__,8);
  }
  arg__unsafe_value=__t5373t__unsafe_value;
  __t5371t__label:__t5371t=__t5371t==0;
  if(!__t5371t){
  break;
  }
  str__t5352t(arg__unsafe_value,&__t5374t__unsafe_ptr,&__t5374t__dat__pos,&__t5374t__dat__length,&__t5374t__dat__first);
  eq__t2066t(flag,__t5374t__unsafe_ptr,__t5374t__dat__pos,__t5374t__dat__length,__t5374t__dat__first,&__t5375t__);
  if(__t5375t__){
  __t5376t=1;
  add__t188t(__t5370t,__t5376t,&__t5377t__);
  len__t1197t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,&__t5378t__);
  lt__t302t(__t5377t__,__t5378t__,&__t5379t__);
  __t5380t=__t5379t__;
  }
  else{
  __t5380t=0;
  }
  if(__t5380t){
  __t5381t=1;
  add__t188t(__t5370t,__t5381t,&__t5382t__);
  __t_errcode=get__t1189t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t5382t__,&__t5384t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5384t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5385t__unsafe_value,__t5384t__,8);
  str__t5352t(__t5385t__unsafe_value,&__t5386t__unsafe_ptr,&__t5386t__dat__pos,&__t5386t__dat__length,&__t5386t__dat__first);
  goto __t_return;
  }
  }
  __t_errcode=47;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6776t=__t5386t__unsafe_ptr;
  *__t6777t=__t5386t__dat__pos;
  *__t6778t=__t5386t__dat__length;
  *__t6779t=__t5386t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1856t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t6780t, uint64_t* __t6781t, uint64_t* __t6782t, char* __t6783t) {
  goto __t_return;
  __t_return:
  *__t6780t=other__unsafe_ptr;
  *__t6781t=other__dat__pos;
  *__t6782t=other__dat__length;
  *__t6783t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t6784t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t6784t=z;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t6785t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6785t=z;
}

static inline __attribute__((always_inline)) void allocated__t1200t(char** __t6786t, uint64_t* __t6787t, uint32_t* __t6788t, uint32_t* __t6789t, uint64_t pos, char** __t6790t, uint64_t* __t6791t, uint32_t* __t6792t, uint32_t* __t6793t, uint64_t* __t6794t) {
  char* buf__unsafe_ptr=*__t6786t;
  uint64_t buf__unsafe_size=*__t6787t;
  uint32_t buf__unsafe_offset=*__t6788t;
  uint32_t buf__unsafe_align=*__t6789t;
  goto __t_return;
  __t_return:
  *__t6786t=buf__unsafe_ptr;
  *__t6787t=buf__unsafe_size;
  *__t6788t=buf__unsafe_offset;
  *__t6789t=buf__unsafe_align;
  *__t6790t=buf__unsafe_ptr;
  *__t6791t=buf__unsafe_size;
  *__t6792t=buf__unsafe_offset;
  *__t6793t=buf__unsafe_align;
  *__t6794t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1604t(char** __t6795t, uint64_t* __t6796t, uint32_t* __t6797t, uint32_t* __t6798t, uint64_t* __t6799t, uint64_t length, char** __t6800t, uint64_t* __t6801t, uint32_t* __t6802t, uint32_t* __t6803t, uint64_t* __t6804t) {
  char* allocator__buf__unsafe_ptr=*__t6795t;
  uint64_t allocator__buf__unsafe_size=*__t6796t;
  uint32_t allocator__buf__unsafe_offset=*__t6797t;
  uint32_t allocator__buf__unsafe_align=*__t6798t;
  uint64_t allocator__pos=*__t6799t;
  int __t1605t=0;
  uint64_t __t1606t__=0;
  uint64_t next_pos=0;
  uint64_t __t1607t__=0;
  char __t1608t__=0;
  uint64_t __t1609t=0;
  uint64_t __t1610t__=0;
  uint64_t pos=0;
  char* __t1611t__buf__unsafe_ptr=0;
  uint64_t __t1611t__buf__unsafe_size=0;
  uint32_t __t1611t__buf__unsafe_offset=0;
  uint32_t __t1611t__buf__unsafe_align=0;
  uint64_t __t1611t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1606t__);
  next_pos=__t1606t__;
  len__t1197t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1607t__);
  gt__t326t(next_pos,__t1607t__,&__t1608t__);
  if(__t1608t__){
  __t_errcode=24;
  goto __t_failure;
  }
  __t1609t=0;
  add__t188t(allocator__pos,__t1609t,&__t1610t__);
  pos=__t1610t__;
  allocator__pos=next_pos;
  allocated__t1200t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1611t__buf__unsafe_ptr,&__t1611t__buf__unsafe_size,&__t1611t__buf__unsafe_offset,&__t1611t__buf__unsafe_align,&__t1611t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6795t=allocator__buf__unsafe_ptr;
  *__t6796t=allocator__buf__unsafe_size;
  *__t6797t=allocator__buf__unsafe_offset;
  *__t6798t=allocator__buf__unsafe_align;
  *__t6799t=allocator__pos;
  *__t6800t=__t1611t__buf__unsafe_ptr;
  *__t6801t=__t1611t__buf__unsafe_size;
  *__t6802t=__t1611t__buf__unsafe_offset;
  *__t6803t=__t1611t__buf__unsafe_align;
  *__t6804t=__t1611t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1582t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t6805t, uint64_t* __t6806t, uint32_t* __t6807t, uint32_t* __t6808t, uint64_t* __t6809t) {
  char* __t1583t__unsafe_ptr=0;
  uint64_t __t1583t__unsafe_size=0;
  uint32_t __t1583t__unsafe_offset=0;
  uint32_t __t1583t__unsafe_align=0;
  uint64_t __t1584t=0;
  __t1583t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1583t__unsafe_size=self__buf__unsafe_size;
  __t1583t__unsafe_offset=self__buf__unsafe_offset;
  __t1583t__unsafe_align=self__buf__unsafe_align;
  __t1584t=self__pos;
  goto __t_return;
  __t_return:
  *__t6805t=__t1583t__unsafe_ptr;
  *__t6806t=__t1583t__unsafe_size;
  *__t6807t=__t1583t__unsafe_offset;
  *__t6808t=__t1583t__unsafe_align;
  *__t6809t=__t1584t;
}

static inline __attribute__((always_inline)) int copy__t1960t(char** __t6810t, uint64_t* __t6811t, uint32_t* __t6812t, uint32_t* __t6813t, uint64_t* __t6814t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t6815t, uint64_t* __t6816t, uint64_t* __t6817t, char* __t6818t) {
  char* CHARS__buf__unsafe_ptr=*__t6810t;
  uint64_t CHARS__buf__unsafe_size=*__t6811t;
  uint32_t CHARS__buf__unsafe_offset=*__t6812t;
  uint32_t CHARS__buf__unsafe_align=*__t6813t;
  uint64_t CHARS__pos=*__t6814t;
  char* __t1961t__unsafe_ptr=0;
  uint64_t __t1961t__dat__pos=0;
  uint64_t __t1961t__dat__length=0;
  char __t1961t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1962t__buf__unsafe_ptr=0;
  uint64_t __t1962t__buf__unsafe_size=0;
  uint32_t __t1962t__buf__unsafe_offset=0;
  uint32_t __t1962t__buf__unsafe_align=0;
  uint64_t __t1962t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1963t=0;
  char* __t1964t__unsafe_ptr=0;
  uint64_t __t1964t__dat__pos=0;
  uint64_t __t1964t__dat__length=0;
  char __t1964t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1856t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1961t__unsafe_ptr,&__t1961t__dat__pos,&__t1961t__dat__length,&__t1961t__dat__first);
  other__unsafe_ptr=__t1961t__unsafe_ptr;
  other__dat__pos=__t1961t__dat__pos;
  other__dat__length=__t1961t__dat__length;
  other__dat__first=__t1961t__dat__first;
  __t_errcode=alloc__t1604t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1962t__buf__unsafe_ptr,&__t1962t__buf__unsafe_size,&__t1962t__buf__unsafe_offset,&__t1962t__buf__unsafe_align,&__t1962t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1962t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1962t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1962t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1962t__buf__unsafe_align;
  surface__pos=__t1962t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1823t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1964t__unsafe_ptr,&__t1964t__dat__pos,&__t1964t__dat__length,&__t1964t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6810t=CHARS__buf__unsafe_ptr;
  *__t6811t=CHARS__buf__unsafe_size;
  *__t6812t=CHARS__buf__unsafe_offset;
  *__t6813t=CHARS__buf__unsafe_align;
  *__t6814t=CHARS__pos;
  *__t6815t=__t1964t__unsafe_ptr;
  *__t6816t=__t1964t__dat__pos;
  *__t6817t=__t1964t__dat__length;
  *__t6818t=__t1964t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1579t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t6819t, uint64_t* __t6820t, uint32_t* __t6821t, uint32_t* __t6822t, uint64_t* __t6823t) {
  char* __t1580t__unsafe_ptr=0;
  uint64_t __t1580t__unsafe_size=0;
  uint32_t __t1580t__unsafe_offset=0;
  uint32_t __t1580t__unsafe_align=0;
  uint64_t __t1581t=0;
  __t1580t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1580t__unsafe_size=self__buf__unsafe_size;
  __t1580t__unsafe_offset=self__buf__unsafe_offset;
  __t1580t__unsafe_align=self__buf__unsafe_align;
  __t1581t=self__pos;
  goto __t_return;
  __t_return:
  *__t6819t=__t1580t__unsafe_ptr;
  *__t6820t=__t1580t__unsafe_size;
  *__t6821t=__t1580t__unsafe_offset;
  *__t6822t=__t1580t__unsafe_align;
  *__t6823t=__t1581t;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t6824t) {
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
  *__t6824t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1875t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t6825t, uint64_t* __t6826t, uint64_t* __t6827t, char* __t6828t) {
  uint64_t __t1877t__=0;
  char* __t1878t__unsafe_ptr=0;
  uint64_t __t1878t__dat__pos=0;
  uint64_t __t1878t__dat__length=0;
  char __t1878t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(endpos,pos,&__t1877t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1857t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1877t__,&__t1878t__unsafe_ptr,&__t1878t__dat__pos,&__t1878t__dat__length,&__t1878t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6825t=__t1878t__unsafe_ptr;
  *__t6826t=__t1878t__dat__pos;
  *__t6827t=__t1878t__dat__length;
  *__t6828t=__t1878t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t3138t(char** __t6829t, uint64_t* __t6830t, uint32_t* __t6831t, uint32_t* __t6832t, uint64_t* __t6833t, const char* _s1, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t6834t, uint64_t* __t6835t, uint64_t* __t6836t, char* __t6837t) {
  char* CHARS__buf__unsafe_ptr=*__t6829t;
  uint64_t CHARS__buf__unsafe_size=*__t6830t;
  uint32_t CHARS__buf__unsafe_offset=*__t6831t;
  uint32_t CHARS__buf__unsafe_align=*__t6832t;
  uint64_t CHARS__pos=*__t6833t;
  int __t3139t=0;
  char* peek_allocator__buf__unsafe_ptr=0;
  uint64_t peek_allocator__buf__unsafe_size=0;
  uint32_t peek_allocator__buf__unsafe_offset=0;
  uint32_t peek_allocator__buf__unsafe_align=0;
  uint64_t peek_allocator__pos=0;
  char* __t3140t__unsafe_ptr=0;
  uint64_t __t3140t__dat__pos=0;
  uint64_t __t3140t__dat__length=0;
  char __t3140t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t3141t__unsafe_ptr=0;
  uint64_t __t3141t__dat__pos=0;
  uint64_t __t3141t__dat__length=0;
  char __t3141t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t3142t__=0;
  uint64_t __t3143t__=0;
  char __t3144t__=0;
  char __t3145t=0;
  uint64_t __t3146t__=0;
  char __t3147t__=0;
  char __t3148t=0;
  uint64_t __t3149t__=0;
  char* __t3150t__buf__unsafe_ptr=0;
  uint64_t __t3150t__buf__unsafe_size=0;
  uint32_t __t3150t__buf__unsafe_offset=0;
  uint32_t __t3150t__buf__unsafe_align=0;
  uint64_t __t3150t__pos=0;
  char* __t3151t____t1583t__unsafe_ptr=0;
  uint64_t __t3151t____t1583t__unsafe_size=0;
  uint32_t __t3151t____t1583t__unsafe_offset=0;
  uint32_t __t3151t____t1583t__unsafe_align=0;
  uint64_t __t3151t____t1584t=0;
  char* __t3152t__buf__unsafe_ptr=0;
  uint64_t __t3152t__buf__unsafe_size=0;
  uint32_t __t3152t__buf__unsafe_offset=0;
  uint32_t __t3152t__buf__unsafe_align=0;
  uint64_t __t3152t__pos=0;
  char* __t3153t__buf__unsafe_ptr=0;
  uint64_t __t3153t__buf__unsafe_size=0;
  uint32_t __t3153t__buf__unsafe_offset=0;
  uint32_t __t3153t__buf__unsafe_align=0;
  uint64_t __t3153t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t3154t__unsafe_ptr=0;
  uint64_t __t3154t__dat__pos=0;
  uint64_t __t3154t__dat__length=0;
  char __t3154t__dat__first=0;
  char* __t3155t____t1580t__unsafe_ptr=0;
  uint64_t __t3155t____t1580t__unsafe_size=0;
  uint32_t __t3155t____t1580t__unsafe_offset=0;
  uint32_t __t3155t____t1580t__unsafe_align=0;
  uint64_t __t3155t____t1581t=0;
  uint64_t __t3157t=0;
  uint64_t __t3158t__=0;
  char* __t3159t__unsafe_ptr=0;
  uint64_t __t3159t__dat__pos=0;
  uint64_t __t3159t__dat__length=0;
  char __t3159t__dat__first=0;
  char __t3160t__=0;
  char __t3161t__=0;
  char __t3162t=0;
  uint64_t __t3163t__=0;
  char __t3164t__=0;
  char __t3165t=0;
  uint64_t __t3166t__=0;
  char* __t3168t__unsafe_ptr=0;
  uint64_t __t3168t__dat__pos=0;
  uint64_t __t3168t__dat__length=0;
  char __t3168t__dat__first=0;
  uint64_t __t3169t__=0;
  uint64_t __t3170t__=0;
  uint64_t __t3171t__=0;
  uint64_t len_sums=0;
  int __t3172t=0;
  uint64_t prev_pos=0;
  char* __t3173t__buf__unsafe_ptr=0;
  uint64_t __t3173t__buf__unsafe_size=0;
  uint32_t __t3173t__buf__unsafe_offset=0;
  uint32_t __t3173t__buf__unsafe_align=0;
  uint64_t __t3173t__pos=0;
  char* __t3174t____t1583t__unsafe_ptr=0;
  uint64_t __t3174t____t1583t__unsafe_size=0;
  uint32_t __t3174t____t1583t__unsafe_offset=0;
  uint32_t __t3174t____t1583t__unsafe_align=0;
  uint64_t __t3174t____t1584t=0;
  char* __t3175t__buf__unsafe_ptr=0;
  uint64_t __t3175t__buf__unsafe_size=0;
  uint32_t __t3175t__buf__unsafe_offset=0;
  uint32_t __t3175t__buf__unsafe_align=0;
  uint64_t __t3175t__pos=0;
  char* __t3176t__buf__unsafe_ptr=0;
  uint64_t __t3176t__buf__unsafe_size=0;
  uint32_t __t3176t__buf__unsafe_offset=0;
  uint32_t __t3176t__buf__unsafe_align=0;
  uint64_t __t3176t__pos=0;
  char* __t3177t__unsafe_ptr=0;
  uint64_t __t3177t__dat__pos=0;
  uint64_t __t3177t__dat__length=0;
  char __t3177t__dat__first=0;
  char* __t3178t__unsafe_ptr=0;
  uint64_t __t3178t__dat__pos=0;
  uint64_t __t3178t__dat__length=0;
  char __t3178t__dat__first=0;
  char __t3179t=0;
  char* __t3180t____t1580t__unsafe_ptr=0;
  uint64_t __t3180t____t1580t__unsafe_size=0;
  uint32_t __t3180t____t1580t__unsafe_offset=0;
  uint32_t __t3180t____t1580t__unsafe_align=0;
  uint64_t __t3180t____t1581t=0;
  uint64_t __t3182t=0;
  uint64_t __t3183t__=0;
  char* __t3184t__unsafe_ptr=0;
  uint64_t __t3184t__dat__pos=0;
  uint64_t __t3184t__dat__length=0;
  char __t3184t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  peek_allocator__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  peek_allocator__buf__unsafe_size=CHARS__buf__unsafe_size;
  peek_allocator__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  peek_allocator__buf__unsafe_align=CHARS__buf__unsafe_align;
  peek_allocator__pos=CHARS__pos;
  str__t1879t(_s1,&__t3140t__unsafe_ptr,&__t3140t__dat__pos,&__t3140t__dat__length,&__t3140t__dat__first);
  s1__unsafe_ptr=__t3140t__unsafe_ptr;
  s1__dat__pos=__t3140t__dat__pos;
  s1__dat__length=__t3140t__dat__length;
  s1__dat__first=__t3140t__dat__first;
  str__t1856t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t3141t__unsafe_ptr,&__t3141t__dat__pos,&__t3141t__dat__length,&__t3141t__dat__first);
  s2__unsafe_ptr=__t3141t__unsafe_ptr;
  s2__dat__pos=__t3141t__dat__pos;
  s2__dat__length=__t3141t__dat__length;
  s2__dat__first=__t3141t__dat__first;
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t3142t__);
  if(__t3142t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3143t__);
  eq__t134t(peek_allocator__pos,__t3143t__,&__t3144t__);
  __t3145t=__t3144t__;
  }
  if(__t3145t){
  add__t188t(peek_allocator__pos,s2__dat__length,&__t3146t__);
  lt__t302t(__t3146t__,peek_allocator__buf__unsafe_size,&__t3147t__);
  __t3148t=__t3147t__;
  }
  if(__t3148t){
  len__t1889t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3149t__);
  __t_errcode=alloc__t1604t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3149t__,&__t3150t__buf__unsafe_ptr,&__t3150t__buf__unsafe_size,&__t3150t__buf__unsafe_offset,&__t3150t__buf__unsafe_align,&__t3150t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1582t(__t3150t__buf__unsafe_ptr,__t3150t__buf__unsafe_size,__t3150t__buf__unsafe_offset,__t3150t__buf__unsafe_align,__t3150t__pos,&__t3151t____t1583t__unsafe_ptr,&__t3151t____t1583t__unsafe_size,&__t3151t____t1583t__unsafe_offset,&__t3151t____t1583t__unsafe_align,&__t3151t____t1584t);
  arena__t1573t(&__t3151t____t1583t__unsafe_ptr,&__t3151t____t1583t__unsafe_size,&__t3151t____t1583t__unsafe_offset,&__t3151t____t1583t__unsafe_align,__t3151t____t1584t,&__t3152t__buf__unsafe_ptr,&__t3152t__buf__unsafe_size,&__t3152t__buf__unsafe_offset,&__t3152t__buf__unsafe_align,&__t3152t__pos);
  __t3153t__buf__unsafe_ptr=__t3152t__buf__unsafe_ptr;
  __t3153t__buf__unsafe_size=__t3152t__buf__unsafe_size;
  __t3153t__buf__unsafe_offset=__t3152t__buf__unsafe_offset;
  __t3153t__buf__unsafe_align=__t3152t__buf__unsafe_align;
  __t3153t__pos=__t3152t__pos;
  surface__buf__unsafe_ptr=__t3153t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3153t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3153t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3153t__buf__unsafe_align;
  surface__pos=__t3153t__pos;
  __t_errcode=copy__t1960t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3154t__unsafe_ptr,&__t3154t__dat__pos,&__t3154t__dat__length,&__t3154t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1579t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3155t____t1580t__unsafe_ptr,&__t3155t____t1580t__unsafe_size,&__t3155t____t1580t__unsafe_offset,&__t3155t____t1580t__unsafe_align,&__t3155t____t1581t);
  __t3157t=0;
  add__t188t(s1__dat__pos,__t3157t,&__t3158t__);
  __t_errcode=str__t1875t(__t3155t____t1580t__unsafe_ptr,__t3155t____t1580t__unsafe_size,__t3155t____t1580t__unsafe_offset,__t3155t____t1580t__unsafe_align,__t3155t____t1581t,__t3158t__,&__t3159t__unsafe_ptr,&__t3159t__dat__pos,&__t3159t__dat__length,&__t3159t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t3160t__);
  if(__t3160t__){
  eq__t162t(s2__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t3161t__);
  __t3162t=__t3161t__;
  }
  if(__t3162t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3163t__);
  eq__t134t(s2__dat__pos,__t3163t__,&__t3164t__);
  __t3165t=__t3164t__;
  }
  if(__t3165t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t3166t__);
  __t_errcode=str__t1875t(peek_allocator__buf__unsafe_ptr,peek_allocator__buf__unsafe_size,peek_allocator__buf__unsafe_offset,peek_allocator__buf__unsafe_align,__t3166t__,s1__dat__pos,&__t3168t__unsafe_ptr,&__t3168t__dat__pos,&__t3168t__dat__length,&__t3168t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3159t__unsafe_ptr=__t3168t__unsafe_ptr;
  __t3159t__dat__pos=__t3168t__dat__pos;
  __t3159t__dat__length=__t3168t__dat__length;
  __t3159t__dat__first=__t3168t__dat__first;
  goto __t_return;
  }
  len__t1889t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3169t__);
  len__t1889t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3170t__);
  add__t188t(__t3169t__,__t3170t__,&__t3171t__);
  len_sums=__t3171t__;
  prev_pos=CHARS__pos;
  __t_errcode=alloc__t1604t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,len_sums,&__t3173t__buf__unsafe_ptr,&__t3173t__buf__unsafe_size,&__t3173t__buf__unsafe_offset,&__t3173t__buf__unsafe_align,&__t3173t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1582t(__t3173t__buf__unsafe_ptr,__t3173t__buf__unsafe_size,__t3173t__buf__unsafe_offset,__t3173t__buf__unsafe_align,__t3173t__pos,&__t3174t____t1583t__unsafe_ptr,&__t3174t____t1583t__unsafe_size,&__t3174t____t1583t__unsafe_offset,&__t3174t____t1583t__unsafe_align,&__t3174t____t1584t);
  arena__t1573t(&__t3174t____t1583t__unsafe_ptr,&__t3174t____t1583t__unsafe_size,&__t3174t____t1583t__unsafe_offset,&__t3174t____t1583t__unsafe_align,__t3174t____t1584t,&__t3175t__buf__unsafe_ptr,&__t3175t__buf__unsafe_size,&__t3175t__buf__unsafe_offset,&__t3175t__buf__unsafe_align,&__t3175t__pos);
  __t3176t__buf__unsafe_ptr=__t3175t__buf__unsafe_ptr;
  __t3176t__buf__unsafe_size=__t3175t__buf__unsafe_size;
  __t3176t__buf__unsafe_offset=__t3175t__buf__unsafe_offset;
  __t3176t__buf__unsafe_align=__t3175t__buf__unsafe_align;
  __t3176t__pos=__t3175t__pos;
  surface__buf__unsafe_ptr=__t3176t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3176t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3176t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3176t__buf__unsafe_align;
  surface__pos=__t3176t__pos;
  __t_errcode=copy__t1960t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3177t__unsafe_ptr,&__t3177t__dat__pos,&__t3177t__dat__length,&__t3177t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1960t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3178t__unsafe_ptr,&__t3178t__dat__pos,&__t3178t__dat__length,&__t3178t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1579t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3180t____t1580t__unsafe_ptr,&__t3180t____t1580t__unsafe_size,&__t3180t____t1580t__unsafe_offset,&__t3180t____t1580t__unsafe_align,&__t3180t____t1581t);
  __t3182t=0;
  add__t188t(prev_pos,__t3182t,&__t3183t__);
  __t_complain=str__t1875t(__t3180t____t1580t__unsafe_ptr,__t3180t____t1580t__unsafe_size,__t3180t____t1580t__unsafe_offset,__t3180t____t1580t__unsafe_align,__t3180t____t1581t,__t3183t__,&__t3184t__unsafe_ptr,&__t3184t__dat__pos,&__t3184t__dat__length,&__t3184t__dat__first);
  __t3179t=__t_complain;
  if(__t_complain){
  goto __t3179t__label;
  }
  ret__unsafe_ptr=__t3184t__unsafe_ptr;
  ret__dat__pos=__t3184t__dat__pos;
  ret__dat__length=__t3184t__dat__length;
  ret__dat__first=__t3184t__dat__first;
  __t3179t__label:__t3179t=__t3179t==0;
  __t3159t__unsafe_ptr=ret__unsafe_ptr;
  __t3159t__dat__pos=ret__dat__pos;
  __t3159t__dat__length=ret__dat__length;
  __t3159t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6829t=CHARS__buf__unsafe_ptr;
  *__t6830t=CHARS__buf__unsafe_size;
  *__t6831t=CHARS__buf__unsafe_offset;
  *__t6832t=CHARS__buf__unsafe_align;
  *__t6833t=CHARS__pos;
  *__t6834t=__t3159t__unsafe_ptr;
  *__t6835t=__t3159t__dat__pos;
  *__t6836t=__t3159t__dat__length;
  *__t6837t=__t3159t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t3091t(char** __t6838t, uint64_t* __t6839t, uint32_t* __t6840t, uint32_t* __t6841t, uint64_t* __t6842t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t6843t, uint64_t* __t6844t, uint64_t* __t6845t, char* __t6846t) {
  char* CHARS__buf__unsafe_ptr=*__t6838t;
  uint64_t CHARS__buf__unsafe_size=*__t6839t;
  uint32_t CHARS__buf__unsafe_offset=*__t6840t;
  uint32_t CHARS__buf__unsafe_align=*__t6841t;
  uint64_t CHARS__pos=*__t6842t;
  int __t3092t=0;
  char* peek_allocator__buf__unsafe_ptr=0;
  uint64_t peek_allocator__buf__unsafe_size=0;
  uint32_t peek_allocator__buf__unsafe_offset=0;
  uint32_t peek_allocator__buf__unsafe_align=0;
  uint64_t peek_allocator__pos=0;
  char* __t3093t__unsafe_ptr=0;
  uint64_t __t3093t__dat__pos=0;
  uint64_t __t3093t__dat__length=0;
  char __t3093t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t3094t__unsafe_ptr=0;
  uint64_t __t3094t__dat__pos=0;
  uint64_t __t3094t__dat__length=0;
  char __t3094t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t3095t__=0;
  uint64_t __t3096t__=0;
  char __t3097t__=0;
  char __t3098t=0;
  uint64_t __t3099t__=0;
  char __t3100t__=0;
  char __t3101t=0;
  uint64_t __t3102t__=0;
  char* __t3103t__buf__unsafe_ptr=0;
  uint64_t __t3103t__buf__unsafe_size=0;
  uint32_t __t3103t__buf__unsafe_offset=0;
  uint32_t __t3103t__buf__unsafe_align=0;
  uint64_t __t3103t__pos=0;
  char* __t3104t____t1583t__unsafe_ptr=0;
  uint64_t __t3104t____t1583t__unsafe_size=0;
  uint32_t __t3104t____t1583t__unsafe_offset=0;
  uint32_t __t3104t____t1583t__unsafe_align=0;
  uint64_t __t3104t____t1584t=0;
  char* __t3105t__buf__unsafe_ptr=0;
  uint64_t __t3105t__buf__unsafe_size=0;
  uint32_t __t3105t__buf__unsafe_offset=0;
  uint32_t __t3105t__buf__unsafe_align=0;
  uint64_t __t3105t__pos=0;
  char* __t3106t__buf__unsafe_ptr=0;
  uint64_t __t3106t__buf__unsafe_size=0;
  uint32_t __t3106t__buf__unsafe_offset=0;
  uint32_t __t3106t__buf__unsafe_align=0;
  uint64_t __t3106t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t3107t__unsafe_ptr=0;
  uint64_t __t3107t__dat__pos=0;
  uint64_t __t3107t__dat__length=0;
  char __t3107t__dat__first=0;
  char* __t3108t____t1580t__unsafe_ptr=0;
  uint64_t __t3108t____t1580t__unsafe_size=0;
  uint32_t __t3108t____t1580t__unsafe_offset=0;
  uint32_t __t3108t____t1580t__unsafe_align=0;
  uint64_t __t3108t____t1581t=0;
  uint64_t __t3110t=0;
  uint64_t __t3111t__=0;
  char* __t3112t__unsafe_ptr=0;
  uint64_t __t3112t__dat__pos=0;
  uint64_t __t3112t__dat__length=0;
  char __t3112t__dat__first=0;
  char __t3113t__=0;
  char __t3114t__=0;
  char __t3115t=0;
  uint64_t __t3116t__=0;
  char __t3117t__=0;
  char __t3118t=0;
  uint64_t __t3119t__=0;
  char* __t3121t__unsafe_ptr=0;
  uint64_t __t3121t__dat__pos=0;
  uint64_t __t3121t__dat__length=0;
  char __t3121t__dat__first=0;
  uint64_t __t3122t__=0;
  uint64_t __t3123t__=0;
  uint64_t __t3124t__=0;
  uint64_t len_sums=0;
  int __t3125t=0;
  uint64_t prev_pos=0;
  char* __t3126t__buf__unsafe_ptr=0;
  uint64_t __t3126t__buf__unsafe_size=0;
  uint32_t __t3126t__buf__unsafe_offset=0;
  uint32_t __t3126t__buf__unsafe_align=0;
  uint64_t __t3126t__pos=0;
  char* __t3127t____t1583t__unsafe_ptr=0;
  uint64_t __t3127t____t1583t__unsafe_size=0;
  uint32_t __t3127t____t1583t__unsafe_offset=0;
  uint32_t __t3127t____t1583t__unsafe_align=0;
  uint64_t __t3127t____t1584t=0;
  char* __t3128t__buf__unsafe_ptr=0;
  uint64_t __t3128t__buf__unsafe_size=0;
  uint32_t __t3128t__buf__unsafe_offset=0;
  uint32_t __t3128t__buf__unsafe_align=0;
  uint64_t __t3128t__pos=0;
  char* __t3129t__buf__unsafe_ptr=0;
  uint64_t __t3129t__buf__unsafe_size=0;
  uint32_t __t3129t__buf__unsafe_offset=0;
  uint32_t __t3129t__buf__unsafe_align=0;
  uint64_t __t3129t__pos=0;
  char* __t3130t__unsafe_ptr=0;
  uint64_t __t3130t__dat__pos=0;
  uint64_t __t3130t__dat__length=0;
  char __t3130t__dat__first=0;
  char* __t3131t__unsafe_ptr=0;
  uint64_t __t3131t__dat__pos=0;
  uint64_t __t3131t__dat__length=0;
  char __t3131t__dat__first=0;
  char __t3132t=0;
  char* __t3133t____t1580t__unsafe_ptr=0;
  uint64_t __t3133t____t1580t__unsafe_size=0;
  uint32_t __t3133t____t1580t__unsafe_offset=0;
  uint32_t __t3133t____t1580t__unsafe_align=0;
  uint64_t __t3133t____t1581t=0;
  uint64_t __t3135t=0;
  uint64_t __t3136t__=0;
  char* __t3137t__unsafe_ptr=0;
  uint64_t __t3137t__dat__pos=0;
  uint64_t __t3137t__dat__length=0;
  char __t3137t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  peek_allocator__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  peek_allocator__buf__unsafe_size=CHARS__buf__unsafe_size;
  peek_allocator__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  peek_allocator__buf__unsafe_align=CHARS__buf__unsafe_align;
  peek_allocator__pos=CHARS__pos;
  str__t1856t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t3093t__unsafe_ptr,&__t3093t__dat__pos,&__t3093t__dat__length,&__t3093t__dat__first);
  s1__unsafe_ptr=__t3093t__unsafe_ptr;
  s1__dat__pos=__t3093t__dat__pos;
  s1__dat__length=__t3093t__dat__length;
  s1__dat__first=__t3093t__dat__first;
  str__t1879t(_s2,&__t3094t__unsafe_ptr,&__t3094t__dat__pos,&__t3094t__dat__length,&__t3094t__dat__first);
  s2__unsafe_ptr=__t3094t__unsafe_ptr;
  s2__dat__pos=__t3094t__dat__pos;
  s2__dat__length=__t3094t__dat__length;
  s2__dat__first=__t3094t__dat__first;
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t3095t__);
  if(__t3095t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3096t__);
  eq__t134t(peek_allocator__pos,__t3096t__,&__t3097t__);
  __t3098t=__t3097t__;
  }
  if(__t3098t){
  add__t188t(peek_allocator__pos,s2__dat__length,&__t3099t__);
  lt__t302t(__t3099t__,peek_allocator__buf__unsafe_size,&__t3100t__);
  __t3101t=__t3100t__;
  }
  if(__t3101t){
  len__t1889t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3102t__);
  __t_errcode=alloc__t1604t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3102t__,&__t3103t__buf__unsafe_ptr,&__t3103t__buf__unsafe_size,&__t3103t__buf__unsafe_offset,&__t3103t__buf__unsafe_align,&__t3103t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1582t(__t3103t__buf__unsafe_ptr,__t3103t__buf__unsafe_size,__t3103t__buf__unsafe_offset,__t3103t__buf__unsafe_align,__t3103t__pos,&__t3104t____t1583t__unsafe_ptr,&__t3104t____t1583t__unsafe_size,&__t3104t____t1583t__unsafe_offset,&__t3104t____t1583t__unsafe_align,&__t3104t____t1584t);
  arena__t1573t(&__t3104t____t1583t__unsafe_ptr,&__t3104t____t1583t__unsafe_size,&__t3104t____t1583t__unsafe_offset,&__t3104t____t1583t__unsafe_align,__t3104t____t1584t,&__t3105t__buf__unsafe_ptr,&__t3105t__buf__unsafe_size,&__t3105t__buf__unsafe_offset,&__t3105t__buf__unsafe_align,&__t3105t__pos);
  __t3106t__buf__unsafe_ptr=__t3105t__buf__unsafe_ptr;
  __t3106t__buf__unsafe_size=__t3105t__buf__unsafe_size;
  __t3106t__buf__unsafe_offset=__t3105t__buf__unsafe_offset;
  __t3106t__buf__unsafe_align=__t3105t__buf__unsafe_align;
  __t3106t__pos=__t3105t__pos;
  surface__buf__unsafe_ptr=__t3106t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3106t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3106t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3106t__buf__unsafe_align;
  surface__pos=__t3106t__pos;
  __t_errcode=copy__t1960t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3107t__unsafe_ptr,&__t3107t__dat__pos,&__t3107t__dat__length,&__t3107t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1579t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3108t____t1580t__unsafe_ptr,&__t3108t____t1580t__unsafe_size,&__t3108t____t1580t__unsafe_offset,&__t3108t____t1580t__unsafe_align,&__t3108t____t1581t);
  __t3110t=0;
  add__t188t(s1__dat__pos,__t3110t,&__t3111t__);
  __t_errcode=str__t1875t(__t3108t____t1580t__unsafe_ptr,__t3108t____t1580t__unsafe_size,__t3108t____t1580t__unsafe_offset,__t3108t____t1580t__unsafe_align,__t3108t____t1581t,__t3111t__,&__t3112t__unsafe_ptr,&__t3112t__dat__pos,&__t3112t__dat__length,&__t3112t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t3113t__);
  if(__t3113t__){
  eq__t162t(s2__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t3114t__);
  __t3115t=__t3114t__;
  }
  if(__t3115t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3116t__);
  eq__t134t(s2__dat__pos,__t3116t__,&__t3117t__);
  __t3118t=__t3117t__;
  }
  if(__t3118t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t3119t__);
  __t_errcode=str__t1875t(peek_allocator__buf__unsafe_ptr,peek_allocator__buf__unsafe_size,peek_allocator__buf__unsafe_offset,peek_allocator__buf__unsafe_align,__t3119t__,s1__dat__pos,&__t3121t__unsafe_ptr,&__t3121t__dat__pos,&__t3121t__dat__length,&__t3121t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3112t__unsafe_ptr=__t3121t__unsafe_ptr;
  __t3112t__dat__pos=__t3121t__dat__pos;
  __t3112t__dat__length=__t3121t__dat__length;
  __t3112t__dat__first=__t3121t__dat__first;
  goto __t_return;
  }
  len__t1889t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3122t__);
  len__t1889t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3123t__);
  add__t188t(__t3122t__,__t3123t__,&__t3124t__);
  len_sums=__t3124t__;
  prev_pos=CHARS__pos;
  __t_errcode=alloc__t1604t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,len_sums,&__t3126t__buf__unsafe_ptr,&__t3126t__buf__unsafe_size,&__t3126t__buf__unsafe_offset,&__t3126t__buf__unsafe_align,&__t3126t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1582t(__t3126t__buf__unsafe_ptr,__t3126t__buf__unsafe_size,__t3126t__buf__unsafe_offset,__t3126t__buf__unsafe_align,__t3126t__pos,&__t3127t____t1583t__unsafe_ptr,&__t3127t____t1583t__unsafe_size,&__t3127t____t1583t__unsafe_offset,&__t3127t____t1583t__unsafe_align,&__t3127t____t1584t);
  arena__t1573t(&__t3127t____t1583t__unsafe_ptr,&__t3127t____t1583t__unsafe_size,&__t3127t____t1583t__unsafe_offset,&__t3127t____t1583t__unsafe_align,__t3127t____t1584t,&__t3128t__buf__unsafe_ptr,&__t3128t__buf__unsafe_size,&__t3128t__buf__unsafe_offset,&__t3128t__buf__unsafe_align,&__t3128t__pos);
  __t3129t__buf__unsafe_ptr=__t3128t__buf__unsafe_ptr;
  __t3129t__buf__unsafe_size=__t3128t__buf__unsafe_size;
  __t3129t__buf__unsafe_offset=__t3128t__buf__unsafe_offset;
  __t3129t__buf__unsafe_align=__t3128t__buf__unsafe_align;
  __t3129t__pos=__t3128t__pos;
  surface__buf__unsafe_ptr=__t3129t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3129t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3129t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3129t__buf__unsafe_align;
  surface__pos=__t3129t__pos;
  __t_errcode=copy__t1960t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3130t__unsafe_ptr,&__t3130t__dat__pos,&__t3130t__dat__length,&__t3130t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1960t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3131t__unsafe_ptr,&__t3131t__dat__pos,&__t3131t__dat__length,&__t3131t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1579t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3133t____t1580t__unsafe_ptr,&__t3133t____t1580t__unsafe_size,&__t3133t____t1580t__unsafe_offset,&__t3133t____t1580t__unsafe_align,&__t3133t____t1581t);
  __t3135t=0;
  add__t188t(prev_pos,__t3135t,&__t3136t__);
  __t_complain=str__t1875t(__t3133t____t1580t__unsafe_ptr,__t3133t____t1580t__unsafe_size,__t3133t____t1580t__unsafe_offset,__t3133t____t1580t__unsafe_align,__t3133t____t1581t,__t3136t__,&__t3137t__unsafe_ptr,&__t3137t__dat__pos,&__t3137t__dat__length,&__t3137t__dat__first);
  __t3132t=__t_complain;
  if(__t_complain){
  goto __t3132t__label;
  }
  ret__unsafe_ptr=__t3137t__unsafe_ptr;
  ret__dat__pos=__t3137t__dat__pos;
  ret__dat__length=__t3137t__dat__length;
  ret__dat__first=__t3137t__dat__first;
  __t3132t__label:__t3132t=__t3132t==0;
  __t3112t__unsafe_ptr=ret__unsafe_ptr;
  __t3112t__dat__pos=ret__dat__pos;
  __t3112t__dat__length=ret__dat__length;
  __t3112t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6838t=CHARS__buf__unsafe_ptr;
  *__t6839t=CHARS__buf__unsafe_size;
  *__t6840t=CHARS__buf__unsafe_offset;
  *__t6841t=CHARS__buf__unsafe_align;
  *__t6842t=CHARS__pos;
  *__t6843t=__t3112t__unsafe_ptr;
  *__t6844t=__t3112t__dat__pos;
  *__t6845t=__t3112t__dat__length;
  *__t6846t=__t3112t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1965t(char** __t6847t, uint64_t* __t6848t, uint32_t* __t6849t, uint32_t* __t6850t, uint64_t* __t6851t, const char* _other, char** __t6852t, uint64_t* __t6853t, uint64_t* __t6854t, char* __t6855t) {
  char* CHARS__buf__unsafe_ptr=*__t6847t;
  uint64_t CHARS__buf__unsafe_size=*__t6848t;
  uint32_t CHARS__buf__unsafe_offset=*__t6849t;
  uint32_t CHARS__buf__unsafe_align=*__t6850t;
  uint64_t CHARS__pos=*__t6851t;
  char* __t1966t__unsafe_ptr=0;
  uint64_t __t1966t__dat__pos=0;
  uint64_t __t1966t__dat__length=0;
  char __t1966t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1967t__buf__unsafe_ptr=0;
  uint64_t __t1967t__buf__unsafe_size=0;
  uint32_t __t1967t__buf__unsafe_offset=0;
  uint32_t __t1967t__buf__unsafe_align=0;
  uint64_t __t1967t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1968t=0;
  char* __t1969t__unsafe_ptr=0;
  uint64_t __t1969t__dat__pos=0;
  uint64_t __t1969t__dat__length=0;
  char __t1969t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1879t(_other,&__t1966t__unsafe_ptr,&__t1966t__dat__pos,&__t1966t__dat__length,&__t1966t__dat__first);
  other__unsafe_ptr=__t1966t__unsafe_ptr;
  other__dat__pos=__t1966t__dat__pos;
  other__dat__length=__t1966t__dat__length;
  other__dat__first=__t1966t__dat__first;
  __t_errcode=alloc__t1604t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1967t__buf__unsafe_ptr,&__t1967t__buf__unsafe_size,&__t1967t__buf__unsafe_offset,&__t1967t__buf__unsafe_align,&__t1967t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1967t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1967t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1967t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1967t__buf__unsafe_align;
  surface__pos=__t1967t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1823t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1969t__unsafe_ptr,&__t1969t__dat__pos,&__t1969t__dat__length,&__t1969t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6847t=CHARS__buf__unsafe_ptr;
  *__t6848t=CHARS__buf__unsafe_size;
  *__t6849t=CHARS__buf__unsafe_offset;
  *__t6850t=CHARS__buf__unsafe_align;
  *__t6851t=CHARS__pos;
  *__t6852t=__t1969t__unsafe_ptr;
  *__t6853t=__t1969t__dat__pos;
  *__t6854t=__t1969t__dat__length;
  *__t6855t=__t1969t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1205t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2011t(char** __t6856t, uint64_t* __t6857t, uint32_t* __t6858t, uint32_t* __t6859t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t6856t=unsafe_ptr;
  *__t6857t=unsafe_size;
  *__t6858t=unsafe_offset;
  *__t6859t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t2010t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t6860t, uint64_t* __t6861t, uint64_t* __t6862t, char* __t6863t) {
  char* __t2013t__unsafe_ptr=0;
  uint64_t __t2013t__unsafe_size=0;
  uint32_t __t2013t__unsafe_offset=0;
  uint32_t __t2013t__unsafe_align=0;
  uint64_t __t2014t=0;
  uint64_t __t2015t__=0;
  uint64_t __t2016t__=0;
  char* __t2017t__unsafe_ptr=0;
  uint64_t __t2017t__unsafe_size=0;
  uint32_t __t2017t__unsafe_offset=0;
  uint32_t __t2017t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t2019t=0;
  uint64_t __t2020t=0;
  char* __t2021t__unsafe_ptr=0;
  uint64_t __t2021t__dat__pos=0;
  uint64_t __t2021t__dat__length=0;
  char __t2021t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2011t(&__t2013t__unsafe_ptr,&__t2013t__unsafe_size,&__t2013t__unsafe_offset,&__t2013t__unsafe_align);
  __t2014t=1;
  len__t1889t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t2015t__);
  add__t188t(__t2014t,__t2015t__,&__t2016t__);
  __t_errcode=alloc__t969t(&__t2013t__unsafe_ptr,&__t2013t__unsafe_size,&__t2013t__unsafe_offset,&__t2013t__unsafe_align,__t2016t__,&__t2017t__unsafe_ptr,&__t2017t__unsafe_size,&__t2017t__unsafe_offset,&__t2017t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2017t__unsafe_ptr;
  buf__unsafe_size=__t2017t__unsafe_size;
  buf__unsafe_offset=__t2017t__unsafe_offset;
  buf__unsafe_align=__t2017t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t2020t=0;
  __t_errcode=str__t1823t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t2020t,other__dat__length,other__dat__first,&__t2021t__unsafe_ptr,&__t2021t__dat__pos,&__t2021t__dat__length,&__t2021t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t844t(&__t2021t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6860t=__t2021t__unsafe_ptr;
  *__t6861t=__t2021t__dat__pos;
  *__t6862t=__t2021t__dat__length;
  *__t6863t=__t2021t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t2036t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t6864t, char** __t6865t, uint64_t* __t6866t, uint64_t* __t6867t, char* __t6868t) {
  int __t2037t=0;
  char* __t2039t__unsafe_ptr=0;
  uint64_t __t2039t__dat__pos=0;
  uint64_t __t2039t__dat__length=0;
  char __t2039t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t2041t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1205t();
  __t_errcode=copy_null_terminated__t2010t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t2039t__unsafe_ptr,&__t2039t__dat__pos,&__t2039t__dat__length,&__t2039t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t2039t__unsafe_ptr;
  str__dat__pos=__t2039t__dat__pos;
  str__dat__length=__t2039t__dat__length;
  str__dat__first=__t2039t__dat__first;
  add__t846t(str__unsafe_ptr,str__dat__pos,&__t2041t__);
  _ret=__t2041t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t844t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6864t=cstr;
  *__t6865t=str__unsafe_ptr;
  *__t6866t=str__dat__pos;
  *__t6867t=str__dat__length;
  *__t6868t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2046t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t6869t) {
  goto __t_return;
  __t_return:
  *__t6869t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t6241t(char* unsafe_ptr) {
  int __t6243t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int open__t6244t(const char* path, char** __t6870t) {
  int __t6246t=0;
  char* unsafe_ptr=0;
  char __t6248t__=0;
  char __t6249t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t683t(unsafe_ptr,&__t6248t__);
  not__t42t(__t6248t__,&__t6249t__);
  if(__t6249t__){
  __t_errcode=54;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t6241t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6870t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t6251t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t6871t) {
  const char* __t6252t__cstr=0;
  char* __t6252t__str__unsafe_ptr=0;
  uint64_t __t6252t__str__dat__pos=0;
  uint64_t __t6252t__str__dat__length=0;
  char __t6252t__str__dat__first=0;
  const char* __t6254t__=0;
  char* __t6255t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t2036t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t6252t__cstr,&__t6252t__str__unsafe_ptr,&__t6252t__str__dat__pos,&__t6252t__str__dat__length,&__t6252t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t2046t(__t6252t__cstr,__t6252t__str__unsafe_ptr,__t6252t__str__dat__pos,__t6252t__str__dat__length,__t6252t__str__dat__first,&__t6254t__);
  __t_errcode=open__t6244t(__t6254t__,&__t6255t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t6241t(__t6255t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6871t=__t6255t__unsafe_ptr;
  
  __t_skip_returns:free__t844t(&__t6252t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t6263t(char** __t6872t, const char** __t6873t) {
  char* f__unsafe_ptr=*__t6872t;
  char __t6264t__=0;
  char __t6265t__=0;
  char* de=0;
  char __t6266t__=0;
  char __t6267t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t683t(f__unsafe_ptr,&__t6264t__);
  not__t42t(__t6264t__,&__t6265t__);
  if(__t6265t__){
  __t_errcode=65;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t683t(de,&__t6266t__);
  not__t42t(__t6266t__,&__t6267t__);
  if(__t6267t__){
  __t_errcode=66;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6872t=f__unsafe_ptr;
  *__t6873t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t6268t(char** __t6874t, char** __t6875t, uint64_t* __t6876t, uint64_t* __t6877t, char* __t6878t) {
  char* f__unsafe_ptr=*__t6874t;
  const char* __t6269t__=0;
  char* __t6270t__unsafe_ptr=0;
  uint64_t __t6270t__dat__pos=0;
  uint64_t __t6270t__dat__length=0;
  char __t6270t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t6263t(&f__unsafe_ptr,&__t6269t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1879t(__t6269t__,&__t6270t__unsafe_ptr,&__t6270t__dat__pos,&__t6270t__dat__length,&__t6270t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6874t=f__unsafe_ptr;
  *__t6875t=__t6270t__unsafe_ptr;
  *__t6876t=__t6270t__dat__pos;
  *__t6877t=__t6270t__dat__length;
  *__t6878t=__t6270t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t6334t(char** __t6879t, uint64_t nat, char** __t6880t, uint64_t* __t6881t, uint64_t* __t6882t, char* __t6883t) {
  char* data__unsafe_ptr=*__t6879t;
  char* __t6335t__unsafe_ptr=0;
  uint64_t __t6335t__dat__pos=0;
  uint64_t __t6335t__dat__length=0;
  char __t6335t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t6268t(&data__unsafe_ptr,&__t6335t__unsafe_ptr,&__t6335t__dat__pos,&__t6335t__dat__length,&__t6335t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6879t=data__unsafe_ptr;
  *__t6880t=__t6335t__unsafe_ptr;
  *__t6881t=__t6335t__dat__pos;
  *__t6882t=__t6335t__dat__length;
  *__t6883t=__t6335t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void eq__t2060t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t6884t) {
  char __t2061t__=0;
  char __t2062t__=0;
  char __t2063t=0;
  char* __t2064t__unsafe_ptr=0;
  uint64_t __t2064t__dat__pos=0;
  uint64_t __t2064t__dat__length=0;
  char __t2064t__dat__first=0;
  char __t2065t__=0;
  char__t1891t(y,&__t2061t__);
  neq__t1894t(x__dat__first,__t2061t__,&__t2062t__);
  if(__t2062t__){
  __t2063t=0;
  goto __t_return;
  }
  str__t1879t(y,&__t2064t__unsafe_ptr,&__t2064t__dat__pos,&__t2064t__dat__length,&__t2064t__dat__first);
  eq__t2053t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t2064t__unsafe_ptr,__t2064t__dat__pos,__t2064t__dat__length,__t2064t__dat__first,&__t2065t__);
  __t2063t=__t2065t__;
  goto __t_return;
  __t_return:
  *__t6884t=__t2063t;
}

int unsafe_temp__t2022t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t6885t, char** __t6886t, uint64_t* __t6887t, uint64_t* __t6888t, char* __t6889t) {
  int __t2023t=0;
  char* __t2024t__unsafe_ptr=0;
  uint64_t __t2024t__unsafe_size=0;
  uint32_t __t2024t__unsafe_offset=0;
  uint32_t __t2024t__unsafe_align=0;
  uint64_t __t2025t=0;
  uint64_t __t2026t__=0;
  uint64_t __t2027t__=0;
  char* __t2028t__unsafe_ptr=0;
  uint64_t __t2028t__unsafe_size=0;
  uint32_t __t2028t__unsafe_offset=0;
  uint32_t __t2028t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t2030t=0;
  char __t2031t__=0;
  char first_character=0;
  uint64_t __t2032t=0;
  char* __t2033t__unsafe_ptr=0;
  uint64_t __t2033t__dat__pos=0;
  uint64_t __t2033t__dat__length=0;
  char __t2033t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t2034t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2011t(&__t2024t__unsafe_ptr,&__t2024t__unsafe_size,&__t2024t__unsafe_offset,&__t2024t__unsafe_align);
  __t2025t=1;
  add__t188t(__t2025t,other__dat__length,&__t2026t__);
  add__t188t(__t2026t__,prefix__dat__length,&__t2027t__);
  __t_errcode=alloc__t969t(&__t2024t__unsafe_ptr,&__t2024t__unsafe_size,&__t2024t__unsafe_offset,&__t2024t__unsafe_align,__t2027t__,&__t2028t__unsafe_ptr,&__t2028t__unsafe_size,&__t2028t__unsafe_offset,&__t2028t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2028t__unsafe_ptr;
  buf__unsafe_size=__t2028t__unsafe_size;
  buf__unsafe_offset=__t2028t__unsafe_offset;
  buf__unsafe_align=__t2028t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t2030t=0;
  eq__t134t(prefix__dat__length,__t2030t,&__t2031t__);
  if(__t2031t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t2032t=0;
  __t_errcode=str__t1823t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t2032t,other__dat__length,first_character,&__t2033t__unsafe_ptr,&__t2033t__dat__pos,&__t2033t__dat__length,&__t2033t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t2033t__unsafe_ptr;
  str__dat__pos=__t2033t__dat__pos;
  str__dat__length=__t2033t__dat__length;
  str__dat__first=__t2033t__dat__first;
  add__t846t(str__unsafe_ptr,str__dat__pos,&__t2034t__);
  _ret=__t2034t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t844t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6885t=cstr;
  *__t6886t=str__unsafe_ptr;
  *__t6887t=str__dat__pos;
  *__t6888t=str__dat__length;
  *__t6889t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2045t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t6890t) {
  goto __t_return;
  __t_return:
  *__t6890t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t6168t(const char* path, char* __t6891t) {
  int __t6170t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t6891t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t6178t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t6892t) {
  int __t6180t=0;
  const char* __t6181t__cstr=0;
  char* __t6181t__str__unsafe_ptr=0;
  uint64_t __t6181t__str__dat__pos=0;
  uint64_t __t6181t__str__dat__length=0;
  char __t6181t__str__dat__first=0;
  const char* __t6183t__=0;
  char __t6184t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t2022t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t6181t__cstr,&__t6181t__str__unsafe_ptr,&__t6181t__str__dat__pos,&__t6181t__str__dat__length,&__t6181t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t2045t(__t6181t__cstr,__t6181t__str__unsafe_ptr,__t6181t__str__dat__pos,__t6181t__str__dat__length,__t6181t__str__dat__first,&__t6183t__);
  is_dir__t6168t(__t6183t__,&__t6184t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6892t=__t6184t__;
  
  __t_skip_returns:free__t844t(&__t6181t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t410t(uint64_t x, uint64_t y, uint64_t* __t6893t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t6893t=z;
}

static inline __attribute__((always_inline)) void reuse__t6578t(char** __t6894t, uint64_t* __t6895t, uint32_t* __t6896t, uint32_t* __t6897t, uint64_t* __t6898t, uint64_t* __t6899t) {
  char* arn__buf__unsafe_ptr=*__t6894t;
  uint64_t arn__buf__unsafe_size=*__t6895t;
  uint32_t arn__buf__unsafe_offset=*__t6896t;
  uint32_t arn__buf__unsafe_align=*__t6897t;
  uint64_t arn__pos=*__t6898t;
  uint64_t __t6579t=0;
  uint64_t __t6580t__=0;
  uint64_t tracked_position=0;
  uint64_t __t6581t=0;
  uint64_t __t6583t__=0;
  __t6579t=0;
  add__t188t(__t6579t,arn__pos,&__t6580t__);
  tracked_position=__t6580t__;
  goto __t_return;
  __t_return:
  *__t6894t=arn__buf__unsafe_ptr;
  *__t6895t=arn__buf__unsafe_size;
  *__t6896t=arn__buf__unsafe_offset;
  *__t6897t=arn__buf__unsafe_align;
  *__t6898t=arn__pos;
  *__t6899t=tracked_position;
}

int add__t3044t(char** __t6900t, uint64_t* __t6901t, uint32_t* __t6902t, uint32_t* __t6903t, uint64_t* __t6904t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t6905t, uint64_t* __t6906t, uint64_t* __t6907t, char* __t6908t) {
  char* CHARS__buf__unsafe_ptr=*__t6900t;
  uint64_t CHARS__buf__unsafe_size=*__t6901t;
  uint32_t CHARS__buf__unsafe_offset=*__t6902t;
  uint32_t CHARS__buf__unsafe_align=*__t6903t;
  uint64_t CHARS__pos=*__t6904t;
  int __t3045t=0;
  char* peek_allocator__buf__unsafe_ptr=0;
  uint64_t peek_allocator__buf__unsafe_size=0;
  uint32_t peek_allocator__buf__unsafe_offset=0;
  uint32_t peek_allocator__buf__unsafe_align=0;
  uint64_t peek_allocator__pos=0;
  char* __t3046t__unsafe_ptr=0;
  uint64_t __t3046t__dat__pos=0;
  uint64_t __t3046t__dat__length=0;
  char __t3046t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t3047t__unsafe_ptr=0;
  uint64_t __t3047t__dat__pos=0;
  uint64_t __t3047t__dat__length=0;
  char __t3047t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t3048t__=0;
  uint64_t __t3049t__=0;
  char __t3050t__=0;
  char __t3051t=0;
  uint64_t __t3052t__=0;
  char __t3053t__=0;
  char __t3054t=0;
  uint64_t __t3055t__=0;
  char* __t3056t__buf__unsafe_ptr=0;
  uint64_t __t3056t__buf__unsafe_size=0;
  uint32_t __t3056t__buf__unsafe_offset=0;
  uint32_t __t3056t__buf__unsafe_align=0;
  uint64_t __t3056t__pos=0;
  char* __t3057t____t1583t__unsafe_ptr=0;
  uint64_t __t3057t____t1583t__unsafe_size=0;
  uint32_t __t3057t____t1583t__unsafe_offset=0;
  uint32_t __t3057t____t1583t__unsafe_align=0;
  uint64_t __t3057t____t1584t=0;
  char* __t3058t__buf__unsafe_ptr=0;
  uint64_t __t3058t__buf__unsafe_size=0;
  uint32_t __t3058t__buf__unsafe_offset=0;
  uint32_t __t3058t__buf__unsafe_align=0;
  uint64_t __t3058t__pos=0;
  char* __t3059t__buf__unsafe_ptr=0;
  uint64_t __t3059t__buf__unsafe_size=0;
  uint32_t __t3059t__buf__unsafe_offset=0;
  uint32_t __t3059t__buf__unsafe_align=0;
  uint64_t __t3059t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t3060t__unsafe_ptr=0;
  uint64_t __t3060t__dat__pos=0;
  uint64_t __t3060t__dat__length=0;
  char __t3060t__dat__first=0;
  char* __t3061t____t1580t__unsafe_ptr=0;
  uint64_t __t3061t____t1580t__unsafe_size=0;
  uint32_t __t3061t____t1580t__unsafe_offset=0;
  uint32_t __t3061t____t1580t__unsafe_align=0;
  uint64_t __t3061t____t1581t=0;
  uint64_t __t3063t=0;
  uint64_t __t3064t__=0;
  char* __t3065t__unsafe_ptr=0;
  uint64_t __t3065t__dat__pos=0;
  uint64_t __t3065t__dat__length=0;
  char __t3065t__dat__first=0;
  char __t3066t__=0;
  char __t3067t__=0;
  char __t3068t=0;
  uint64_t __t3069t__=0;
  char __t3070t__=0;
  char __t3071t=0;
  uint64_t __t3072t__=0;
  char* __t3074t__unsafe_ptr=0;
  uint64_t __t3074t__dat__pos=0;
  uint64_t __t3074t__dat__length=0;
  char __t3074t__dat__first=0;
  uint64_t __t3075t__=0;
  uint64_t __t3076t__=0;
  uint64_t __t3077t__=0;
  uint64_t len_sums=0;
  int __t3078t=0;
  uint64_t prev_pos=0;
  char* __t3079t__buf__unsafe_ptr=0;
  uint64_t __t3079t__buf__unsafe_size=0;
  uint32_t __t3079t__buf__unsafe_offset=0;
  uint32_t __t3079t__buf__unsafe_align=0;
  uint64_t __t3079t__pos=0;
  char* __t3080t____t1583t__unsafe_ptr=0;
  uint64_t __t3080t____t1583t__unsafe_size=0;
  uint32_t __t3080t____t1583t__unsafe_offset=0;
  uint32_t __t3080t____t1583t__unsafe_align=0;
  uint64_t __t3080t____t1584t=0;
  char* __t3081t__buf__unsafe_ptr=0;
  uint64_t __t3081t__buf__unsafe_size=0;
  uint32_t __t3081t__buf__unsafe_offset=0;
  uint32_t __t3081t__buf__unsafe_align=0;
  uint64_t __t3081t__pos=0;
  char* __t3082t__buf__unsafe_ptr=0;
  uint64_t __t3082t__buf__unsafe_size=0;
  uint32_t __t3082t__buf__unsafe_offset=0;
  uint32_t __t3082t__buf__unsafe_align=0;
  uint64_t __t3082t__pos=0;
  char* __t3083t__unsafe_ptr=0;
  uint64_t __t3083t__dat__pos=0;
  uint64_t __t3083t__dat__length=0;
  char __t3083t__dat__first=0;
  char* __t3084t__unsafe_ptr=0;
  uint64_t __t3084t__dat__pos=0;
  uint64_t __t3084t__dat__length=0;
  char __t3084t__dat__first=0;
  char __t3085t=0;
  char* __t3086t____t1580t__unsafe_ptr=0;
  uint64_t __t3086t____t1580t__unsafe_size=0;
  uint32_t __t3086t____t1580t__unsafe_offset=0;
  uint32_t __t3086t____t1580t__unsafe_align=0;
  uint64_t __t3086t____t1581t=0;
  uint64_t __t3088t=0;
  uint64_t __t3089t__=0;
  char* __t3090t__unsafe_ptr=0;
  uint64_t __t3090t__dat__pos=0;
  uint64_t __t3090t__dat__length=0;
  char __t3090t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  peek_allocator__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  peek_allocator__buf__unsafe_size=CHARS__buf__unsafe_size;
  peek_allocator__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  peek_allocator__buf__unsafe_align=CHARS__buf__unsafe_align;
  peek_allocator__pos=CHARS__pos;
  str__t1856t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t3046t__unsafe_ptr,&__t3046t__dat__pos,&__t3046t__dat__length,&__t3046t__dat__first);
  s1__unsafe_ptr=__t3046t__unsafe_ptr;
  s1__dat__pos=__t3046t__dat__pos;
  s1__dat__length=__t3046t__dat__length;
  s1__dat__first=__t3046t__dat__first;
  str__t1856t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t3047t__unsafe_ptr,&__t3047t__dat__pos,&__t3047t__dat__length,&__t3047t__dat__first);
  s2__unsafe_ptr=__t3047t__unsafe_ptr;
  s2__dat__pos=__t3047t__dat__pos;
  s2__dat__length=__t3047t__dat__length;
  s2__dat__first=__t3047t__dat__first;
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t3048t__);
  if(__t3048t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3049t__);
  eq__t134t(peek_allocator__pos,__t3049t__,&__t3050t__);
  __t3051t=__t3050t__;
  }
  if(__t3051t){
  add__t188t(peek_allocator__pos,s2__dat__length,&__t3052t__);
  lt__t302t(__t3052t__,peek_allocator__buf__unsafe_size,&__t3053t__);
  __t3054t=__t3053t__;
  }
  if(__t3054t){
  len__t1889t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3055t__);
  __t_errcode=alloc__t1604t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3055t__,&__t3056t__buf__unsafe_ptr,&__t3056t__buf__unsafe_size,&__t3056t__buf__unsafe_offset,&__t3056t__buf__unsafe_align,&__t3056t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1582t(__t3056t__buf__unsafe_ptr,__t3056t__buf__unsafe_size,__t3056t__buf__unsafe_offset,__t3056t__buf__unsafe_align,__t3056t__pos,&__t3057t____t1583t__unsafe_ptr,&__t3057t____t1583t__unsafe_size,&__t3057t____t1583t__unsafe_offset,&__t3057t____t1583t__unsafe_align,&__t3057t____t1584t);
  arena__t1573t(&__t3057t____t1583t__unsafe_ptr,&__t3057t____t1583t__unsafe_size,&__t3057t____t1583t__unsafe_offset,&__t3057t____t1583t__unsafe_align,__t3057t____t1584t,&__t3058t__buf__unsafe_ptr,&__t3058t__buf__unsafe_size,&__t3058t__buf__unsafe_offset,&__t3058t__buf__unsafe_align,&__t3058t__pos);
  __t3059t__buf__unsafe_ptr=__t3058t__buf__unsafe_ptr;
  __t3059t__buf__unsafe_size=__t3058t__buf__unsafe_size;
  __t3059t__buf__unsafe_offset=__t3058t__buf__unsafe_offset;
  __t3059t__buf__unsafe_align=__t3058t__buf__unsafe_align;
  __t3059t__pos=__t3058t__pos;
  surface__buf__unsafe_ptr=__t3059t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3059t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3059t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3059t__buf__unsafe_align;
  surface__pos=__t3059t__pos;
  __t_errcode=copy__t1960t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3060t__unsafe_ptr,&__t3060t__dat__pos,&__t3060t__dat__length,&__t3060t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1579t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3061t____t1580t__unsafe_ptr,&__t3061t____t1580t__unsafe_size,&__t3061t____t1580t__unsafe_offset,&__t3061t____t1580t__unsafe_align,&__t3061t____t1581t);
  __t3063t=0;
  add__t188t(s1__dat__pos,__t3063t,&__t3064t__);
  __t_errcode=str__t1875t(__t3061t____t1580t__unsafe_ptr,__t3061t____t1580t__unsafe_size,__t3061t____t1580t__unsafe_offset,__t3061t____t1580t__unsafe_align,__t3061t____t1581t,__t3064t__,&__t3065t__unsafe_ptr,&__t3065t__dat__pos,&__t3065t__dat__length,&__t3065t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t3066t__);
  if(__t3066t__){
  eq__t162t(s2__unsafe_ptr,peek_allocator__buf__unsafe_ptr,&__t3067t__);
  __t3068t=__t3067t__;
  }
  if(__t3068t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3069t__);
  eq__t134t(s2__dat__pos,__t3069t__,&__t3070t__);
  __t3071t=__t3070t__;
  }
  if(__t3071t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t3072t__);
  __t_errcode=str__t1875t(peek_allocator__buf__unsafe_ptr,peek_allocator__buf__unsafe_size,peek_allocator__buf__unsafe_offset,peek_allocator__buf__unsafe_align,__t3072t__,s1__dat__pos,&__t3074t__unsafe_ptr,&__t3074t__dat__pos,&__t3074t__dat__length,&__t3074t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3065t__unsafe_ptr=__t3074t__unsafe_ptr;
  __t3065t__dat__pos=__t3074t__dat__pos;
  __t3065t__dat__length=__t3074t__dat__length;
  __t3065t__dat__first=__t3074t__dat__first;
  goto __t_return;
  }
  len__t1889t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3075t__);
  len__t1889t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3076t__);
  add__t188t(__t3075t__,__t3076t__,&__t3077t__);
  len_sums=__t3077t__;
  prev_pos=CHARS__pos;
  __t_errcode=alloc__t1604t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,len_sums,&__t3079t__buf__unsafe_ptr,&__t3079t__buf__unsafe_size,&__t3079t__buf__unsafe_offset,&__t3079t__buf__unsafe_align,&__t3079t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1582t(__t3079t__buf__unsafe_ptr,__t3079t__buf__unsafe_size,__t3079t__buf__unsafe_offset,__t3079t__buf__unsafe_align,__t3079t__pos,&__t3080t____t1583t__unsafe_ptr,&__t3080t____t1583t__unsafe_size,&__t3080t____t1583t__unsafe_offset,&__t3080t____t1583t__unsafe_align,&__t3080t____t1584t);
  arena__t1573t(&__t3080t____t1583t__unsafe_ptr,&__t3080t____t1583t__unsafe_size,&__t3080t____t1583t__unsafe_offset,&__t3080t____t1583t__unsafe_align,__t3080t____t1584t,&__t3081t__buf__unsafe_ptr,&__t3081t__buf__unsafe_size,&__t3081t__buf__unsafe_offset,&__t3081t__buf__unsafe_align,&__t3081t__pos);
  __t3082t__buf__unsafe_ptr=__t3081t__buf__unsafe_ptr;
  __t3082t__buf__unsafe_size=__t3081t__buf__unsafe_size;
  __t3082t__buf__unsafe_offset=__t3081t__buf__unsafe_offset;
  __t3082t__buf__unsafe_align=__t3081t__buf__unsafe_align;
  __t3082t__pos=__t3081t__pos;
  surface__buf__unsafe_ptr=__t3082t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3082t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3082t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3082t__buf__unsafe_align;
  surface__pos=__t3082t__pos;
  __t_errcode=copy__t1960t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3083t__unsafe_ptr,&__t3083t__dat__pos,&__t3083t__dat__length,&__t3083t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1960t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3084t__unsafe_ptr,&__t3084t__dat__pos,&__t3084t__dat__length,&__t3084t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1579t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3086t____t1580t__unsafe_ptr,&__t3086t____t1580t__unsafe_size,&__t3086t____t1580t__unsafe_offset,&__t3086t____t1580t__unsafe_align,&__t3086t____t1581t);
  __t3088t=0;
  add__t188t(prev_pos,__t3088t,&__t3089t__);
  __t_complain=str__t1875t(__t3086t____t1580t__unsafe_ptr,__t3086t____t1580t__unsafe_size,__t3086t____t1580t__unsafe_offset,__t3086t____t1580t__unsafe_align,__t3086t____t1581t,__t3089t__,&__t3090t__unsafe_ptr,&__t3090t__dat__pos,&__t3090t__dat__length,&__t3090t__dat__first);
  __t3085t=__t_complain;
  if(__t_complain){
  goto __t3085t__label;
  }
  ret__unsafe_ptr=__t3090t__unsafe_ptr;
  ret__dat__pos=__t3090t__dat__pos;
  ret__dat__length=__t3090t__dat__length;
  ret__dat__first=__t3090t__dat__first;
  __t3085t__label:__t3085t=__t3085t==0;
  __t3065t__unsafe_ptr=ret__unsafe_ptr;
  __t3065t__dat__pos=ret__dat__pos;
  __t3065t__dat__length=ret__dat__length;
  __t3065t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6900t=CHARS__buf__unsafe_ptr;
  *__t6901t=CHARS__buf__unsafe_size;
  *__t6902t=CHARS__buf__unsafe_offset;
  *__t6903t=CHARS__buf__unsafe_align;
  *__t6904t=CHARS__pos;
  *__t6905t=__t3065t__unsafe_ptr;
  *__t6906t=__t3065t__dat__pos;
  *__t6907t=__t3065t__dat__length;
  *__t6908t=__t3065t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2114t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t6909t) {
  int __t2115t=0;
  char __t2116t__=0;
  uint64_t __t2117t__=0;
  char* __t2118t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,s__dat__length,&__t2116t__);
  if(__t2116t__){
  __t_errcode=22;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t2117t__);
  add__t846t(s__unsafe_ptr,__t2117t__,&__t2118t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6909t=__t2118t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t2140t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t6910t, uint64_t* __t6911t, uint64_t* __t6912t, char* __t6913t) {
  char* __t2141t__unsafe_ptr=0;
  uint64_t __t2141t__dat__pos=0;
  uint64_t __t2141t__dat__length=0;
  char __t2141t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t2142t__=0;
  char* __t2143t__unsafe_ptr=0;
  uint64_t __t2143t__dat__pos=0;
  uint64_t __t2143t__dat__length=0;
  char __t2143t__dat__first=0;
  char __t2144t__=0;
  char __t2145t__=0;
  char __t2146t=0;
  char __t2147t__=0;
  uint64_t __t2149t__=0;
  uint64_t new_length=0;
  uint64_t __t2150t=0;
  char __t2151t__=0;
  char new_first=0;
  char* __t2153t__=0;
  char __t2154t__value=0;
  uint64_t __t2155t__=0;
  char* __t2156t__unsafe_ptr=0;
  uint64_t __t2156t__dat__pos=0;
  uint64_t __t2156t__dat__length=0;
  char __t2156t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1856t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t2141t__unsafe_ptr,&__t2141t__dat__pos,&__t2141t__dat__length,&__t2141t__dat__first);
  s__unsafe_ptr=__t2141t__unsafe_ptr;
  s__dat__pos=__t2141t__dat__pos;
  s__dat__length=__t2141t__dat__length;
  s__dat__first=__t2141t__dat__first;
  eq__t134t(from,to,&__t2142t__);
  if(__t2142t__){
  str__t1879t(__t463t,&__t2143t__unsafe_ptr,&__t2143t__dat__pos,&__t2143t__dat__length,&__t2143t__dat__first);
  goto __t_return;
  }
  gt__t326t(from,to,&__t2144t__);
  if(!__t2144t__){
  gt__t326t(to,s__dat__length,&__t2145t__);
  __t2146t=__t2145t__;
  }
  else{
  __t2146t=0;
  not__t42t(__t2146t,&__t2147t__);
  __t2146t=__t2147t__;
  }
  if(__t2146t){
  __t_errcode=31;
  goto __t_failure;
  }
  sub__t410t(to,from,&__t2149t__);
  new_length=__t2149t__;
  __t2150t=0;
  neq__t158t(from,__t2150t,&__t2151t__);
  if(__t2151t__){
  __t_errcode=get__t2114t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t2153t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2153t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2154t__value,__t2153t__,1);
  new_first=__t2154t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t2155t__);
  str__t1819t(s__unsafe_ptr,__t2155t__,new_length,new_first,&__t2156t__unsafe_ptr,&__t2156t__dat__pos,&__t2156t__dat__length,&__t2156t__dat__first);
  __t2143t__unsafe_ptr=__t2156t__unsafe_ptr;
  __t2143t__dat__pos=__t2156t__dat__pos;
  __t2143t__dat__length=__t2156t__dat__length;
  __t2143t__dat__first=__t2156t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6910t=__t2143t__unsafe_ptr;
  *__t6911t=__t2143t__dat__pos;
  *__t6912t=__t2143t__dat__length;
  *__t6913t=__t2143t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t2219t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t6914t) {
  char* __t2220t__unsafe_ptr=0;
  uint64_t __t2220t__dat__pos=0;
  uint64_t __t2220t__dat__length=0;
  char __t2220t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2221t__unsafe_ptr=0;
  uint64_t __t2221t__dat__pos=0;
  uint64_t __t2221t__dat__length=0;
  char __t2221t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t2222t=0;
  uint64_t __t2223t__=0;
  uint64_t d=0;
  char __t2224t__=0;
  char __t2225t=0;
  char* __t2226t__unsafe_ptr=0;
  uint64_t __t2226t__dat__pos=0;
  uint64_t __t2226t__dat__length=0;
  char __t2226t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t2227t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1856t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2220t__unsafe_ptr,&__t2220t__dat__pos,&__t2220t__dat__length,&__t2220t__dat__first);
  stack__unsafe_ptr=__t2220t__unsafe_ptr;
  stack__dat__pos=__t2220t__dat__pos;
  stack__dat__length=__t2220t__dat__length;
  stack__dat__first=__t2220t__dat__first;
  str__t1879t(_needle,&__t2221t__unsafe_ptr,&__t2221t__dat__pos,&__t2221t__dat__length,&__t2221t__dat__first);
  needle__unsafe_ptr=__t2221t__unsafe_ptr;
  needle__dat__pos=__t2221t__dat__pos;
  needle__dat__length=__t2221t__dat__length;
  needle__dat__first=__t2221t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t402t(n,needle__dat__length,&__t2223t__);
  __t2222t=__t_complain;
  if(__t_complain){
  goto __t2222t__label;
  }
  d=__t2223t__;
  __t2222t__label:__t2222t=__t2222t==0;
  not__t42t(__t2222t,&__t2224t__);
  if(__t2224t__){
  __t2225t=0;
  goto __t_return;
  }
  __t_errcode=slice__t2140t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t2226t__unsafe_ptr,&__t2226t__dat__pos,&__t2226t__dat__length,&__t2226t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t2226t__unsafe_ptr;
  ret__dat__pos=__t2226t__dat__pos;
  ret__dat__length=__t2226t__dat__length;
  ret__dat__first=__t2226t__dat__first;
  eq__t2053t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2227t__);
  __t2225t=__t2227t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6914t=__t2225t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t779t(uint64_t to, uint64_t* __t6915t, uint64_t* __t6916t) {
  uint64_t __t780t=0;
  uint64_t from=0;
  __t780t=0;
  from=__t780t;
  goto __t_return;
  __t_return:
  *__t6915t=from;
  *__t6916t=to;
}

static inline __attribute__((always_inline)) void range__t796t(uint64_t _from, uint64_t to, uint64_t* __t6917t, uint64_t* __t6918t) {
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
  *__t6917t=from;
  *__t6918t=to;
}

static inline __attribute__((always_inline)) int mutget__t801t(uint64_t* __t6919t, uint64_t r__to, uint64_t skipped, uint64_t* __t6920t) {
  uint64_t r__from=*__t6919t;
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
  *__t6919t=r__from;
  *__t6920t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2305t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t6921t) {
  char* __t2306t__unsafe_ptr=0;
  uint64_t __t2306t__dat__pos=0;
  uint64_t __t2306t__dat__length=0;
  char __t2306t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2307t__unsafe_ptr=0;
  uint64_t __t2307t__dat__pos=0;
  uint64_t __t2307t__dat__length=0;
  char __t2307t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t2308t=0;
  uint64_t __t2309t__=0;
  uint64_t n=0;
  char __t2310t__=0;
  char __t2311t=0;
  uint64_t __t2312t=0;
  uint64_t __t2313t__from=0;
  uint64_t __t2313t__to=0;
  uint64_t __t2314t__from=0;
  uint64_t __t2314t__to=0;
  char __t2315t=0;
  uint64_t __t2316t__=0;
  uint64_t i=0;
  char __t2317t=0;
  uint64_t __t2318t__=0;
  char* __t2319t__unsafe_ptr=0;
  uint64_t __t2319t__dat__pos=0;
  uint64_t __t2319t__dat__length=0;
  char __t2319t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t2320t__=0;
  char __t2321t=0;
  char __t2322t=0;
  int __t_complain=0;
  str__t1856t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2306t__unsafe_ptr,&__t2306t__dat__pos,&__t2306t__dat__length,&__t2306t__dat__first);
  stack__unsafe_ptr=__t2306t__unsafe_ptr;
  stack__dat__pos=__t2306t__dat__pos;
  stack__dat__length=__t2306t__dat__length;
  stack__dat__first=__t2306t__dat__first;
  str__t1879t(_needle,&__t2307t__unsafe_ptr,&__t2307t__dat__pos,&__t2307t__dat__length,&__t2307t__dat__first);
  needle__unsafe_ptr=__t2307t__unsafe_ptr;
  needle__dat__pos=__t2307t__dat__pos;
  needle__dat__length=__t2307t__dat__length;
  needle__dat__first=__t2307t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t402t(stack__dat__length,d,&__t2309t__);
  __t2308t=__t_complain;
  if(__t_complain){
  goto __t2308t__label;
  }
  n=__t2309t__;
  __t2308t__label:__t2308t=__t2308t==0;
  not__t42t(__t2308t,&__t2310t__);
  if(__t2310t__){
  __t2311t=0;
  goto __t_return;
  }
  of__t779t(n,&__t2313t__from,&__t2313t__to);
  range__t796t(__t2313t__from,__t2313t__to,&__t2314t__from,&__t2314t__to);
  __t2312t=0-1;
  while(1){
  __t2312t=__t2312t+1;
  __t_complain=mutget__t801t(&__t2314t__from,__t2314t__to,__t2312t,&__t2316t__);
  __t2315t=__t_complain;
  if(__t_complain){
  goto __t2315t__label;
  }
  i=__t2316t__;
  __t2315t__label:__t2315t=__t2315t==0;
  if(!__t2315t){
  break;
  }
  add__t188t(i,d,&__t2318t__);
  __t_complain=slice__t2140t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t2318t__,&__t2319t__unsafe_ptr,&__t2319t__dat__pos,&__t2319t__dat__length,&__t2319t__dat__first);
  __t2317t=__t_complain;
  if(__t_complain){
  goto __t2317t__label;
  }
  sliced__unsafe_ptr=__t2319t__unsafe_ptr;
  sliced__dat__pos=__t2319t__dat__pos;
  sliced__dat__length=__t2319t__dat__length;
  sliced__dat__first=__t2319t__dat__first;
  __t2317t__label:__t2317t=__t2317t==0;
  eq__t2053t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2320t__);
  if(__t2320t__){
  __t2321t=1;
  __t2311t=__t2321t;
  goto __t_return;
  }
  }
  __t2322t=0;
  __t2311t=__t2322t;
  goto __t_return;
  __t_return:
  *__t6921t=__t2311t;
}

static inline __attribute__((always_inline)) void restore_stdout__t6439t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void stdout_to_err__t6440t(int64_t* __t6922t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t6922t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t2108t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t2109t=0;
  const char* endl=0;
  endl=__t475t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void popen__t5518t(const char* cmd, char** __t6923t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t6923t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t5517t(char* unsafe_ptr, int64_t* __t6924t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t6924t=status;
}

static inline __attribute__((always_inline)) void int__t658t(uint64_t x, int64_t* __t6925t) {
  int __t659t=0;
  int __t660t=0;
  int __t661t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t6925t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t6926t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t6926t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t6927t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6927t=z;
}

static inline __attribute__((always_inline)) int open__t5519t(const char* cmd, char** __t6928t) {
  char* __t5520t__=0;
  char* unsafe_ptr=0;
  char __t5521t__=0;
  char __t5522t__=0;
  char __t5523t__=0;
  int64_t __t5524t__=0;
  int64_t status=0;
  uint64_t __t5525t=0;
  int64_t __t5526t__=0;
  char __t5527t__=0;
  char __t5528t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t5518t(cmd,&__t5520t__);
  unsafe_ptr=__t5520t__;
  exists__t683t(unsafe_ptr,&__t5521t__);
  not__t42t(__t5521t__,&__t5522t__);
  if(__t5522t__){
  __t_errcode=49;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t683t(unsafe_ptr,&__t5523t__);
  if(__t5523t__){
  pclose__t5517t(unsafe_ptr,&__t5524t__);
  status=__t5524t__;
  unsafe_ptr=0;
  __t5525t=0;
  int__t658t(__t5525t,&__t5526t__);
  neq__t147t(status,__t5526t__,&__t5527t__);
  if(__t5527t__){
  __t_complain=50;
  goto __t5528t__label;
  __t5528t__label:__t5528t=__t5528t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t6928t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t5530t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t6929t) {
  const char* __t5531t__cstr=0;
  char* __t5531t__str__unsafe_ptr=0;
  uint64_t __t5531t__str__dat__pos=0;
  uint64_t __t5531t__str__dat__length=0;
  char __t5531t__str__dat__first=0;
  const char* __t5533t__=0;
  char* __t5534t__unsafe_ptr=0;
  char __t5535t____t5523t__=0;
  int64_t __t5535t____t5524t__=0;
  int64_t __t5535t__status=0;
  uint64_t __t5535t____t5525t=0;
  int64_t __t5535t____t5526t__=0;
  char __t5535t____t5527t__=0;
  char __t5535t____t5528t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t2036t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t5531t__cstr,&__t5531t__str__unsafe_ptr,&__t5531t__str__dat__pos,&__t5531t__str__dat__length,&__t5531t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t2046t(__t5531t__cstr,__t5531t__str__unsafe_ptr,__t5531t__str__dat__pos,__t5531t__str__dat__length,__t5531t__str__dat__first,&__t5533t__);
  __t_errcode=open__t5519t(__t5533t__,&__t5534t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t683t(__t5534t__unsafe_ptr,&__t5535t____t5523t__);
  if(__t5535t____t5523t__){
  pclose__t5517t(__t5534t__unsafe_ptr,&__t5535t____t5524t__);
  __t5535t__status=__t5535t____t5524t__;
  __t5534t__unsafe_ptr=0;
  __t5535t____t5525t=0;
  int__t658t(__t5535t____t5525t,&__t5535t____t5526t__);
  neq__t147t(__t5535t__status,__t5535t____t5526t__,&__t5535t____t5527t__);
  if(__t5535t____t5527t__){
  __t_complain=50;
  goto __t5528t__label;
  __t5528t__label:__t5535t____t5528t=__t5535t____t5528t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t6929t=__t5534t__unsafe_ptr;
  
  __t_skip_returns:free__t844t(&__t5531t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t5210t(int64_t value, char* __t6930t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t6930t=ret;
}

static inline __attribute__((always_inline)) void cstr__t5209t(int64_t value, const char** __t6931t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t6931t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t6932t) {
  const char* value=0;
  *__t6932t=value;
}

int run__t6368t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t6933t) {
  char* __t6369t__unsafe_ptr=0;
  char __t6370t____t5535t____t5523t__=0;
  int64_t __t6370t____t5535t____t5524t__=0;
  int64_t __t6370t____t5535t__status=0;
  uint64_t __t6370t____t5535t____t5525t=0;
  int64_t __t6370t____t5535t____t5526t__=0;
  char __t6370t____t5535t____t5527t__=0;
  char __t6370t____t5535t____t5528t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t6371t=0;
  int64_t error=0;
  char __t6372t__=0;
  char __t6373t__=0;
  const char* __t6374t__=0;
  const char* __t6375t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t5530t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t6369t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t6369t__unsafe_ptr;
  exists__t683t(__t6369t__unsafe_ptr,&__t6370t____t5535t____t5523t__);
  if(__t6370t____t5535t____t5523t__){
  pclose__t5517t(__t6369t__unsafe_ptr,&__t6370t____t5535t____t5524t__);
  __t6370t____t5535t__status=__t6370t____t5535t____t5524t__;
  __t6369t__unsafe_ptr=0;
  __t6370t____t5535t____t5525t=0;
  int__t658t(__t6370t____t5535t____t5525t,&__t6370t____t5535t____t5526t__);
  neq__t147t(__t6370t____t5535t__status,__t6370t____t5535t____t5526t__,&__t6370t____t5535t____t5527t__);
  if(__t6370t____t5535t____t5527t__){
  __t_complain=50;
  goto __t5528t__label;
  __t5528t__label:__t6370t____t5535t____t5528t=__t6370t____t5535t____t5528t==0;
  }
  }
  __t6371t=__t_complain;
  error=__t6371t;
  ok__t5210t(error,&__t6372t__);
  not__t42t(__t6372t__,&__t6373t__);
  if(__t6373t__){
  cstr__t5209t(error,&__t6374t__);
  goto __t_return;
  }
  cstr__t1t(&__t6375t__);
  __t6374t__=__t6375t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6933t=__t6374t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t6934t) {
  int value=0;
  *__t6934t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t6935t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t6935t=__t54t__;
}

static inline __attribute__((always_inline)) void exists__t1817t(const char* c, char* __t6936t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t6936t=z;
}

static inline __attribute__((always_inline)) void nn__t462t(const char* value, const char** __t6937t, const char** __t6938t) {
  const char* __t464t=0;
  __t464t=__t463t;
  goto __t_return;
  __t_return:
  *__t6937t=value;
  *__t6938t=__t464t;
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

static inline __attribute__((always_inline)) void print_marker__t6404t(char colors__initialized) {
  const char* __t6406t__value=0;
  const char* __t6406t____t464t=0;
  int __t6408t=0;
  char __t6409t=0;
  char __t6410t=0;
  const char* __t6415t__value=0;
  const char* __t6415t____t464t=0;
  int __t6417t=0;
  const char* __t6420t__value=0;
  const char* __t6420t____t464t=0;
  nn__t462t(__t5230t,&__t6406t__value,&__t6406t____t464t);
  print__t471t(__t6406t__value,__t6406t____t464t);
  __t6410t=1;
  if(__t6411t!=__t6411t){
  __t6410t=0;
  }
  if(__t6410t){
  __t6409t=1;
  }
  if(__t6409t){
  set__t507t(colors__initialized);
  nn__t462t(__t6414t,&__t6415t__value,&__t6415t____t464t);
  print__t471t(__t6415t__value,__t6415t____t464t);
  }
  set__t627t(colors__initialized);
  nn__t462t(__t6401t,&__t6420t__value,&__t6420t____t464t);
  print__t471t(__t6420t__value,__t6420t____t464t);
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

static inline __attribute__((always_inline)) void print_marker__t6385t(char colors__initialized) {
  const char* __t6387t__value=0;
  const char* __t6387t____t464t=0;
  char __t6389t=0;
  char __t6390t=0;
  const char* __t6395t__value=0;
  const char* __t6395t____t464t=0;
  int __t6397t=0;
  int __t6398t=0;
  const char* __t6402t__value=0;
  const char* __t6402t____t464t=0;
  nn__t462t(__t5230t,&__t6387t__value,&__t6387t____t464t);
  print__t471t(__t6387t__value,__t6387t____t464t);
  __t6390t=1;
  if(__t6391t!=__t6391t){
  __t6390t=0;
  }
  if(__t6390t){
  __t6389t=1;
  }
  if(__t6389t){
  set__t511t(colors__initialized);
  nn__t462t(__t6394t,&__t6395t__value,&__t6395t____t464t);
  print__t471t(__t6395t__value,__t6395t____t464t);
  }
  set__t627t(colors__initialized);
  nn__t462t(__t6401t,&__t6402t__value,&__t6402t____t464t);
  print__t471t(__t6402t__value,__t6402t____t464t);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int test__t6522t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t6939t) {
  int64_t __t6524t__=0;
  const char* __t6527t__=0;
  const char* __t6528t=0;
  const char* error=0;
  int __t6529t=0;
  int __t6530t__=0;
  char __t6531t__=0;
  const char* __t6532t__=0;
  const char* __t6534t__value=0;
  const char* __t6534t____t464t=0;
  char __t6536t__=0;
  char __t6540t=0;
  char __t6545t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t6440t(&__t6524t__);
  print__t2108t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t6368t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t6527t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6528t=__t6527t__;
  error=__t6528t;
  not__t53t(__t6529t,&__t6530t__);
  if(should_fail){
  exists__t1817t(error,&__t6531t__);
  if(__t6531t__){
  cstr__t1t(&__t6532t__);
  error=__t6532t__;
  }
  else{
  error=__t6533t;
  }
  }
  nn__t462t(__t6452t,&__t6534t__value,&__t6534t____t464t);
  print__t471t(__t6534t__value,__t6534t____t464t);
  exists__t1817t(error,&__t6536t__);
  if(__t6536t__){
  print_marker__t6404t(colors__initialized);
  print__t473t(error);
  __t6540t=0;
  goto __t_return;
  }
  print_marker__t6385t(colors__initialized);
  print__t473t(__t6543t);
  __t6545t=1;
  __t6540t=__t6545t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6939t=__t6540t;
  
  __t_skip_returns:restore_stdout__t6439t(__t6524t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t484t(uint64_t value, const char* endl) {
  int __t485t=0;
  printf("%llu%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void nn__t469t(uint64_t value, uint64_t* __t6940t, const char** __t6941t) {
  const char* __t470t=0;
  __t470t=__t463t;
  goto __t_return;
  __t_return:
  *__t6940t=value;
  *__t6941t=__t470t;
}

static inline __attribute__((always_inline)) int _main__t6584t() {
  char* __t6586t__unsafe_ptr=0;
  uint64_t __t6586t__dat__pos=0;
  uint64_t __t6586t__dat__length=0;
  char __t6586t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t6587t__initialized=0;
  char colors__initialized=0;
  uint64_t __t6589t=0;
  char* __t6590t__unsafe_ptr=0;
  uint64_t __t6590t__unsafe_size=0;
  uint32_t __t6590t__unsafe_offset=0;
  uint32_t __t6590t__unsafe_align=0;
  char* __t6592t__buf__unsafe_ptr=0;
  uint64_t __t6592t__buf__unsafe_size=0;
  uint32_t __t6592t__buf__unsafe_offset=0;
  uint32_t __t6592t__buf__unsafe_align=0;
  uint64_t __t6592t__pos=0;
  char* __t6593t__buf__unsafe_ptr=0;
  uint64_t __t6593t__buf__unsafe_size=0;
  uint32_t __t6593t__buf__unsafe_offset=0;
  uint32_t __t6593t__buf__unsafe_align=0;
  uint64_t __t6593t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char __t6594t=0;
  char* __t6596t__unsafe_ptr=0;
  uint64_t __t6596t__dat__pos=0;
  uint64_t __t6596t__dat__length=0;
  char __t6596t__dat__first=0;
  char* preferred_backend__unsafe_ptr=0;
  uint64_t preferred_backend__dat__pos=0;
  uint64_t preferred_backend__dat__length=0;
  char preferred_backend__dat__first=0;
  int __t6605t=0;
  char* __t6607t__unsafe_ptr=0;
  uint64_t __t6607t__dat__pos=0;
  uint64_t __t6607t__dat__length=0;
  char __t6607t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  char* __t6598t__unsafe_ptr=0;
  uint64_t __t6598t__dat__pos=0;
  uint64_t __t6598t__dat__length=0;
  char __t6598t__dat__first=0;
  char* __t6600t__unsafe_ptr=0;
  uint64_t __t6600t__dat__pos=0;
  uint64_t __t6600t__dat__length=0;
  char __t6600t__dat__first=0;
  uint64_t __t6608t=0;
  uint64_t __t6609t=0;
  uint64_t counter=0;
  uint64_t __t6610t=0;
  uint64_t __t6611t=0;
  uint64_t failures=0;
  uint64_t __t6612t=0;
  char* __t6613t__unsafe_ptr=0;
  char __t6615t=0;
  char* __t6616t__unsafe_ptr=0;
  uint64_t __t6616t__dat__pos=0;
  uint64_t __t6616t__dat__length=0;
  char __t6616t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t6618t__=0;
  char __t6619t__=0;
  char __t6620t__=0;
  char __t6621t=0;
  char __t6622t__=0;
  uint64_t __t6623t__=0;
  uint64_t __t6624t____t6581t=0;
  uint64_t __t6624t____t6583t__=0;
  char* __t6625t__unsafe_ptr=0;
  uint64_t __t6625t__dat__pos=0;
  uint64_t __t6625t__dat__length=0;
  char __t6625t__dat__first=0;
  char* __t6627t__unsafe_ptr=0;
  uint64_t __t6627t__dat__pos=0;
  uint64_t __t6627t__dat__length=0;
  char __t6627t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t6628t=0;
  char* __t6629t__unsafe_ptr=0;
  char __t6631t=0;
  char* __t6632t__unsafe_ptr=0;
  uint64_t __t6632t__dat__pos=0;
  uint64_t __t6632t__dat__length=0;
  char __t6632t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t6634t__=0;
  char __t6635t__=0;
  uint64_t __t6636t__=0;
  uint64_t __t6637t____t6581t=0;
  uint64_t __t6637t____t6583t__=0;
  uint64_t __t6638t=0;
  uint64_t __t6639t__=0;
  char __t6641t__=0;
  char should_fail=0;
  char* __t6642t__unsafe_ptr=0;
  uint64_t __t6642t__dat__pos=0;
  uint64_t __t6642t__dat__length=0;
  char __t6642t__dat__first=0;
  char* __t6643t__unsafe_ptr=0;
  uint64_t __t6643t__dat__pos=0;
  uint64_t __t6643t__dat__length=0;
  char __t6643t__dat__first=0;
  char __t6644t__=0;
  char __t6645t__=0;
  uint64_t __t6646t=0;
  uint64_t __t6647t__=0;
  int64_t __t6648t__=0;
  uint64_t __t6650t=0;
  char __t6651t__=0;
  const char* __t6665t__value=0;
  const char* __t6665t____t464t=0;
  const char* __t6655t__value=0;
  const char* __t6655t____t464t=0;
  const char* __t6660t__value=0;
  const char* __t6660t____t464t=0;
  uint64_t __t6671t__value=0;
  const char* __t6671t____t470t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1879t(__t6585t,&__t6586t__unsafe_ptr,&__t6586t__dat__pos,&__t6586t__dat__length,&__t6586t__dat__first);
  test_root__unsafe_ptr=__t6586t__unsafe_ptr;
  test_root__dat__pos=__t6586t__dat__pos;
  test_root__dat__length=__t6586t__dat__length;
  test_root__dat__first=__t6586t__dat__first;
  colors__t501t(&__t6587t__initialized);
  colors__initialized=__t6587t__initialized;
  __t6589t=128;
  __t_errcode=alloc__t1124t(__t6589t,&__t6590t__unsafe_ptr,&__t6590t__unsafe_size,&__t6590t__unsafe_offset,&__t6590t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1576t(&__t6590t__unsafe_ptr,&__t6590t__unsafe_size,&__t6590t__unsafe_offset,&__t6590t__unsafe_align,&__t6592t__buf__unsafe_ptr,&__t6592t__buf__unsafe_size,&__t6592t__buf__unsafe_offset,&__t6592t__buf__unsafe_align,&__t6592t__pos);
  __t6593t__buf__unsafe_ptr=__t6592t__buf__unsafe_ptr;
  __t6593t__buf__unsafe_size=__t6592t__buf__unsafe_size;
  __t6593t__buf__unsafe_offset=__t6592t__buf__unsafe_offset;
  __t6593t__buf__unsafe_align=__t6592t__buf__unsafe_align;
  __t6593t__pos=__t6592t__pos;
  CHARS__buf__unsafe_ptr=__t6593t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t6593t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t6593t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t6593t__buf__unsafe_align;
  CHARS__pos=__t6593t__pos;
  __t_complain=arg_after__t5368t(__t6595t,&__t6596t__unsafe_ptr,&__t6596t__dat__pos,&__t6596t__dat__length,&__t6596t__dat__first);
  __t6594t=__t_complain;
  if(__t_complain){
  goto __t6594t__label;
  }
  preferred_backend__unsafe_ptr=__t6596t__unsafe_ptr;
  preferred_backend__dat__pos=__t6596t__dat__pos;
  preferred_backend__dat__length=__t6596t__dat__length;
  preferred_backend__dat__first=__t6596t__dat__first;
  __t6594t__label:__t6594t=__t6594t==0;
  if(__t6594t){
  __t_errcode=add__t3138t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t6597t,preferred_backend__unsafe_ptr,preferred_backend__dat__pos,preferred_backend__dat__length,preferred_backend__dat__first,&__t6598t__unsafe_ptr,&__t6598t__dat__pos,&__t6598t__dat__length,&__t6598t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t3091t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t6598t__unsafe_ptr,__t6598t__dat__pos,__t6598t__dat__length,__t6598t__dat__first,__t6599t,&__t6600t__unsafe_ptr,&__t6600t__dat__pos,&__t6600t__dat__length,&__t6600t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t6600t__unsafe_ptr;
  command_base__dat__pos=__t6600t__dat__pos;
  command_base__dat__length=__t6600t__dat__length;
  command_base__dat__first=__t6600t__dat__first;
  }
  else{
  __t_errcode=copy__t1965t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t6606t,&__t6607t__unsafe_ptr,&__t6607t__dat__pos,&__t6607t__dat__length,&__t6607t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t6607t__unsafe_ptr;
  command_base__dat__pos=__t6607t__dat__pos;
  command_base__dat__length=__t6607t__dat__length;
  command_base__dat__first=__t6607t__dat__first;
  }
  __t6608t=0;
  __t6609t=__t6608t;
  counter=__t6609t;
  __t6610t=0;
  __t6611t=__t6610t;
  failures=__t6611t;
  __t_errcode=open__t6251t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t6613t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6612t=0-1;
  while(1){
  __t6612t=__t6612t+1;
  __t_complain=mutget__t6334t(&__t6613t__unsafe_ptr,__t6612t,&__t6616t__unsafe_ptr,&__t6616t__dat__pos,&__t6616t__dat__length,&__t6616t__dat__first);
  __t6615t=__t_complain;
  if(__t_complain){
  goto __t6615t__label;
  }
  path__unsafe_ptr=__t6616t__unsafe_ptr;
  path__dat__pos=__t6616t__dat__pos;
  path__dat__length=__t6616t__dat__length;
  path__dat__first=__t6616t__dat__first;
  __t6615t__label:__t6615t=__t6615t==0;
  if(!__t6615t){
  break;
  }
  eq__t2060t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t6617t,&__t6618t__);
  if(!__t6618t__){
  __t_errcode=is_dir__t6178t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t6619t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t6619t__,&__t6620t__);
  __t6621t=__t6620t__;
  }
  else{
  __t6621t=0;
  not__t42t(__t6621t,&__t6622t__);
  __t6621t=__t6622t__;
  }
  if(__t6621t){
  continue;
  }
  reuse__t6578t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t6623t__);
  __t_errcode=add__t3044t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t6625t__unsafe_ptr,&__t6625t__dat__pos,&__t6625t__dat__length,&__t6625t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t3091t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t6625t__unsafe_ptr,__t6625t__dat__pos,__t6625t__dat__length,__t6625t__dat__first,__t6626t,&__t6627t__unsafe_ptr,&__t6627t__dat__pos,&__t6627t__dat__length,&__t6627t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t6627t__unsafe_ptr;
  dir_path__dat__pos=__t6627t__dat__pos;
  dir_path__dat__length=__t6627t__dat__length;
  dir_path__dat__first=__t6627t__dat__first;
  __t_errcode=open__t6251t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t6629t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6628t=0-1;
  while(1){
  __t6628t=__t6628t+1;
  __t_complain=mutget__t6334t(&__t6629t__unsafe_ptr,__t6628t,&__t6632t__unsafe_ptr,&__t6632t__dat__pos,&__t6632t__dat__length,&__t6632t__dat__first);
  __t6631t=__t_complain;
  if(__t_complain){
  goto __t6631t__label;
  }
  entry__unsafe_ptr=__t6632t__unsafe_ptr;
  entry__dat__pos=__t6632t__dat__pos;
  entry__dat__length=__t6632t__dat__length;
  entry__dat__first=__t6632t__dat__first;
  __t6631t__label:__t6631t=__t6631t==0;
  if(!__t6631t){
  break;
  }
  __t_errcode=ends_with__t2219t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t6633t,&__t6634t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t6634t__,&__t6635t__);
  if(__t6635t__){
  continue;
  }
  reuse__t6578t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t6636t__);
  __t6638t=1;
  add__t188t(counter,__t6638t,&__t6639t__);
  counter=__t6639t__;
  contains__t2305t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t6640t,&__t6641t__);
  should_fail=__t6641t__;
  __t_errcode=add__t3044t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t6642t__unsafe_ptr,&__t6642t__dat__pos,&__t6642t__dat__length,&__t6642t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t3044t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t6642t__unsafe_ptr,__t6642t__dat__pos,__t6642t__dat__length,__t6642t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t6643t__unsafe_ptr,&__t6643t__dat__pos,&__t6643t__dat__length,&__t6643t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t6522t(colors__initialized,__t6643t__unsafe_ptr,__t6643t__dat__pos,__t6643t__dat__length,__t6643t__dat__first,should_fail,&__t6644t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t6644t__,&__t6645t__);
  if(__t6645t__){
  __t6646t=1;
  add__t188t(failures,__t6646t,&__t6647t__);
  failures=__t6647t__;
  }
  __t6637t____t6581t=0;
  sub__t410t(__t6636t__,__t6637t____t6581t,&__t6637t____t6583t__);
  CHARS__pos=__t6637t____t6583t__;
  }
  __t6624t____t6581t=0;
  sub__t410t(__t6623t__,__t6624t____t6581t,&__t6624t____t6583t__);
  CHARS__pos=__t6624t____t6583t__;
  closedir__t6241t(__t6629t__unsafe_ptr);
  }
  stdout_to_err__t6440t(&__t6648t__);
  __t6650t=0;
  eq__t134t(failures,__t6650t,&__t6651t__);
  if(__t6651t__){
  set__t511t(colors__initialized);
  nn__t462t(__t6654t,&__t6655t__value,&__t6655t____t464t);
  print__t471t(__t6655t__value,__t6655t____t464t);
  set__t627t(colors__initialized);
  nn__t462t(__t6659t,&__t6660t__value,&__t6660t____t464t);
  print__t471t(__t6660t__value,__t6660t____t464t);
  }
  else{
  set__t507t(colors__initialized);
  nn__t462t(__t6664t,&__t6665t__value,&__t6665t____t464t);
  print__t471t(__t6665t__value,__t6665t____t464t);
  set__t627t(colors__initialized);
  print__t484t(failures,__t6669t);
  }
  nn__t469t(counter,&__t6671t__value,&__t6671t____t470t);
  print__t484t(__t6671t__value,__t6671t____t470t);
  print__t473t(__t6673t);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:restore_stdout__t6439t(__t6648t__);
  closedir__t6241t(__t6613t__unsafe_ptr);
  free__t844t(&__t6590t__unsafe_ptr);
  if(__t6587t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t6675t() {
  char __t6678t=0;
  char __t6680t__=0;
  int64_t __t6681t=0;
  const char* __t6682t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t448t();
  __t_complain=_main__t6584t();
  __t6678t=__t_complain;
  if(__t_complain){
  goto __t6678t__label;
  }
  __t6678t__label:__t6678t=__t6678t==0;
  not__t42t(__t6678t,&__t6680t__);
  if(__t6680t__){
  __t6681t=__t_complain;
  cstr__t5209t(__t6681t,&__t6682t__);
  print__t473t(__t6682t__);
  __t_errcode=68;
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
  __t_errcode=main__t6675t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}