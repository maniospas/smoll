#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5529t="failure";
const char* const __t5651t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t5735t="..";
const char* const __t4308t="[";
const char* const __t5744t="/";
const char* const __t463t="";
const char* const __t5661t="completed";
const char* const __t5782t="FAILED ";
const char* const __t5713t="--testback";
const char* const __t5703t="./tests/passing/";
const char* const __t5717t=" --cleanup ";
const char* const __t5532t="X";
const char* const __t5715t="./smoll --back ";
const char* const __t5772t="PASSING ";
const char* const __t5512t="V";
const char* const __t5777t="no errors across ";
const char* const __t5724t="./smoll --cleanup ";
const char* const __t5519t="] ";
const char* const __t5751t=".s";
const char* const __t5509t="success";
const char* const __t5758t="_fail_";
const char* const __t5787t=" out of ";
const char* const __t5791t=" tests";
const char* const __t475t="\n";
const char* const __t5570t=" |- ";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1628t(char** __t5802t, uint64_t* __t5803t, uint32_t* __t5804t, uint32_t* __t5805t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5802t=unsafe_ptr;
  *__t5803t=unsafe_size;
  *__t5804t=unsafe_offset;
  *__t5805t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5806t) {
  *__t5806t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5807t) {
  int value=0;
  *__t5807t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5808t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5808t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5809t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5809t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5810t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5810t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5811t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5811t=z;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t5812t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5812t=z;
}

static inline __attribute__((always_inline)) void nat__t724t(uint32_t x, uint64_t* __t5813t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5813t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5814t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5814t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5815t) {
  *__t5815t=to;
}

static inline __attribute__((always_inline)) void add__t846t(char* allocated, uint64_t offset, char** __t5816t) {
  char* element=0;
  char* __t847t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t847t__);
  goto __t_return;
  __t_return:
  *__t5816t=__t847t__;
}

static inline __attribute__((always_inline)) int get__t1189t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5817t) {
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
  *__t5817t=__t1196t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1658t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5818t, uint64_t* __t5819t, uint64_t* __t5820t, char* __t5821t) {
  goto __t_return;
  __t_return:
  *__t5818t=unsafe_ptr;
  *__t5819t=dat__pos;
  *__t5820t=dat__length;
  *__t5821t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1662t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5822t, uint64_t* __t5823t, uint64_t* __t5824t, char* __t5825t) {
  char* unsafe_ptr=0;
  uint64_t __t1663t__=0;
  uint64_t __t1664t=0;
  char __t1665t__=0;
  uint64_t __t1666t__=0;
  uint64_t __t1667t=0;
  char __t1668t__=0;
  char* __t1669t__unsafe_ptr=0;
  uint64_t __t1669t__dat__pos=0;
  uint64_t __t1669t__dat__length=0;
  char __t1669t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t724t(buf__unsafe_align,&__t1663t__);
  __t1664t=1;
  neq__t158t(__t1663t__,__t1664t,&__t1665t__);
  if(__t1665t__){
  __t_errcode=25;
  goto __t_failure;
  }
  nat__t724t(buf__unsafe_offset,&__t1666t__);
  __t1667t=0;
  neq__t158t(__t1666t__,__t1667t,&__t1668t__);
  if(__t1668t__){
  __t_errcode=26;
  goto __t_failure;
  }
  str__t1658t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1669t__unsafe_ptr,&__t1669t__dat__pos,&__t1669t__dat__length,&__t1669t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5822t=__t1669t__unsafe_ptr;
  *__t5823t=__t1669t__dat__pos;
  *__t5824t=__t1669t__dat__length;
  *__t5825t=__t1669t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1696t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5826t, uint64_t* __t5827t, uint64_t* __t5828t, char* __t5829t) {
  uint64_t __t1697t=0;
  char __t1698t__=0;
  char* __t1700t__=0;
  char __t1701t__value=0;
  char first=0;
  char* __t1702t__unsafe_ptr=0;
  uint64_t __t1702t__dat__pos=0;
  uint64_t __t1702t__dat__length=0;
  char __t1702t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1697t=0;
  neq__t158t(length,__t1697t,&__t1698t__);
  if(__t1698t__){
  __t_errcode=get__t1189t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1700t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1700t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1701t__value,__t1700t__,1);
  first=__t1701t__value;
  }
  __t_errcode=str__t1662t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1702t__unsafe_ptr,&__t1702t__dat__pos,&__t1702t__dat__length,&__t1702t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5826t=__t1702t__unsafe_ptr;
  *__t5827t=__t1702t__dat__pos;
  *__t5828t=__t1702t__dat__length;
  *__t5829t=__t1702t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1718t(const char* c, char** __t5830t, uint64_t* __t5831t, uint64_t* __t5832t, char* __t5833t) {
  char* __t1719t__unsafe_ptr=0;
  uint64_t __t1719t__unsafe_size=0;
  uint32_t __t1719t__unsafe_offset=0;
  uint32_t __t1719t__unsafe_align=0;
  char* __t1720t__unsafe_ptr=0;
  uint64_t __t1720t__unsafe_size=0;
  uint32_t __t1720t__unsafe_offset=0;
  uint32_t __t1720t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1721t__=0;
  uint64_t length=0;
  uint64_t __t1722t=0;
  uint64_t __t1723t__=0;
  char __t1724t=0;
  uint64_t __t1725t=0;
  char* __t1727t__unsafe_ptr=0;
  uint64_t __t1727t__dat__pos=0;
  uint64_t __t1727t__dat__length=0;
  char __t1727t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1628t(&__t1719t__unsafe_ptr,&__t1719t__unsafe_size,&__t1719t__unsafe_offset,&__t1719t__unsafe_align);
  __t1720t__unsafe_ptr=__t1719t__unsafe_ptr;
  __t1720t__unsafe_size=__t1719t__unsafe_size;
  __t1720t__unsafe_offset=__t1719t__unsafe_offset;
  __t1720t__unsafe_align=__t1719t__unsafe_align;
  buf__unsafe_ptr=__t1720t__unsafe_ptr;
  buf__unsafe_size=__t1720t__unsafe_size;
  buf__unsafe_offset=__t1720t__unsafe_offset;
  buf__unsafe_align=__t1720t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1721t__);
  buf__unsafe_ptr=__t1721t__;
  if(c){
  length=strlen(c);
  }
  __t1722t=1;
  add__t188t(length,__t1722t,&__t1723t__);
  buf__unsafe_size=__t1723t__;
  __t1725t=0;
  __t_complain=str__t1696t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1725t,length,&__t1727t__unsafe_ptr,&__t1727t__dat__pos,&__t1727t__dat__length,&__t1727t__dat__first);
  __t1724t=__t_complain;
  if(__t_complain){
  goto __t1724t__label;
  }
  ret__unsafe_ptr=__t1727t__unsafe_ptr;
  ret__dat__pos=__t1727t__dat__pos;
  ret__dat__length=__t1727t__dat__length;
  ret__dat__first=__t1727t__dat__first;
  __t1724t__label:__t1724t=__t1724t==0;
  goto __t_return;
  __t_return:
  *__t5830t=ret__unsafe_ptr;
  *__t5831t=ret__dat__pos;
  *__t5832t=ret__dat__length;
  *__t5833t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t500t(char* __t5834t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5834t=supports;
}

static inline __attribute__((always_inline)) void colors__t501t(char* __t5835t) {
  char __t502t__=0;
  char initialized=0;
  supports_ansi__t500t(&__t502t__);
  initialized=__t502t__;
  goto __t_return;
  __t_return:
  *__t5835t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1126t(char** __t5836t, uint64_t* __t5837t, uint32_t* __t5838t, uint32_t* __t5839t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5836t=unsafe_ptr;
  *__t5837t=unsafe_size;
  *__t5838t=unsafe_offset;
  *__t5839t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t844t(char** __t5840t) {
  char* allocated=*__t5840t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t5840t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5841t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5841t=z;
}

static inline __attribute__((always_inline)) void zero__t845t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t683t(char* x, char* __t5842t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5842t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5843t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5843t=z;
}

static inline __attribute__((always_inline)) int alloc__t828t(uint64_t bytes, char** __t5844t) {
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
  *__t5844t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t969t(char** __t5845t, uint64_t* __t5846t, uint32_t* __t5847t, uint32_t* __t5848t, uint64_t size, char** __t5849t, uint64_t* __t5850t, uint32_t* __t5851t, uint32_t* __t5852t) {
  char* buffer__unsafe_ptr=*__t5845t;
  uint64_t buffer__unsafe_size=*__t5846t;
  uint32_t buffer__unsafe_offset=*__t5847t;
  uint32_t buffer__unsafe_align=*__t5848t;
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
  *__t5845t=buffer__unsafe_ptr;
  *__t5846t=buffer__unsafe_size;
  *__t5847t=buffer__unsafe_offset;
  *__t5848t=buffer__unsafe_align;
  *__t5849t=buffer__unsafe_ptr;
  *__t5850t=buffer__unsafe_size;
  *__t5851t=buffer__unsafe_offset;
  *__t5852t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int alloc__t1124t(uint64_t size, char** __t5853t, uint64_t* __t5854t, uint32_t* __t5855t, uint32_t* __t5856t) {
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
  *__t5853t=ret__unsafe_ptr;
  *__t5854t=ret__unsafe_size;
  *__t5855t=ret__unsafe_offset;
  *__t5856t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1242t(char** __t5857t, uint64_t* __t5858t, uint32_t* __t5859t, uint32_t* __t5860t, uint64_t _pos, char** __t5861t, uint64_t* __t5862t, uint32_t* __t5863t, uint32_t* __t5864t, uint64_t* __t5865t) {
  char* buf__unsafe_ptr=*__t5857t;
  uint64_t buf__unsafe_size=*__t5858t;
  uint32_t buf__unsafe_offset=*__t5859t;
  uint32_t buf__unsafe_align=*__t5860t;
  uint64_t __t1243t=0;
  uint64_t pos=0;
  __t1243t=_pos;
  pos=__t1243t;
  goto __t_return;
  __t_return:
  *__t5857t=buf__unsafe_ptr;
  *__t5858t=buf__unsafe_size;
  *__t5859t=buf__unsafe_offset;
  *__t5860t=buf__unsafe_align;
  *__t5861t=buf__unsafe_ptr;
  *__t5862t=buf__unsafe_size;
  *__t5863t=buf__unsafe_offset;
  *__t5864t=buf__unsafe_align;
  *__t5865t=pos;
}

static inline __attribute__((always_inline)) void arena__t1245t(char** __t5866t, uint64_t* __t5867t, uint32_t* __t5868t, uint32_t* __t5869t, char** __t5870t, uint64_t* __t5871t, uint32_t* __t5872t, uint32_t* __t5873t, uint64_t* __t5874t) {
  char* buf__unsafe_ptr=*__t5866t;
  uint64_t buf__unsafe_size=*__t5867t;
  uint32_t buf__unsafe_offset=*__t5868t;
  uint32_t buf__unsafe_align=*__t5869t;
  uint64_t __t1246t=0;
  char* __t1247t__buf__unsafe_ptr=0;
  uint64_t __t1247t__buf__unsafe_size=0;
  uint32_t __t1247t__buf__unsafe_offset=0;
  uint32_t __t1247t__buf__unsafe_align=0;
  uint64_t __t1247t__pos=0;
  __t1246t=0;
  arena__t1242t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1246t,&__t1247t__buf__unsafe_ptr,&__t1247t__buf__unsafe_size,&__t1247t__buf__unsafe_offset,&__t1247t__buf__unsafe_align,&__t1247t__pos);
  goto __t_return;
  __t_return:
  *__t5866t=buf__unsafe_ptr;
  *__t5867t=buf__unsafe_size;
  *__t5868t=buf__unsafe_offset;
  *__t5869t=buf__unsafe_align;
  *__t5870t=__t1247t__buf__unsafe_ptr;
  *__t5871t=__t1247t__buf__unsafe_size;
  *__t5872t=__t1247t__buf__unsafe_offset;
  *__t5873t=__t1247t__buf__unsafe_align;
  *__t5874t=__t1247t__pos;
}

static inline __attribute__((always_inline)) void argument____t_buffer____buffer__t4433t(char** __t5875t, uint64_t* __t5876t, uint32_t* __t5877t, uint32_t* __t5878t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t5875t=unsafe_ptr;
  *__t5876t=unsafe_size;
  *__t5877t=unsafe_offset;
  *__t5878t=unsafe_align;
}

static inline __attribute__((always_inline)) void args__t4432t(char** __t5879t, uint64_t* __t5880t, uint32_t* __t5881t, uint32_t* __t5882t) {
  char* __t4435t__unsafe_ptr=0;
  uint64_t __t4435t__unsafe_size=0;
  uint32_t __t4435t__unsafe_offset=0;
  uint32_t __t4435t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  argument____t_buffer____buffer__t4433t(&__t4435t__unsafe_ptr,&__t4435t__unsafe_size,&__t4435t__unsafe_offset,&__t4435t__unsafe_align);
  ret__unsafe_ptr=__t4435t__unsafe_ptr;
  ret__unsafe_size=__t4435t__unsafe_size;
  ret__unsafe_offset=__t4435t__unsafe_offset;
  ret__unsafe_align=__t4435t__unsafe_align;
  ret__unsafe_ptr=(char*)__t_argv;
  ret__unsafe_size=__t_argc;
  goto __t_return;
  __t_return:
  *__t5879t=ret__unsafe_ptr;
  *__t5880t=ret__unsafe_size;
  *__t5881t=ret__unsafe_offset;
  *__t5882t=ret__unsafe_align;
}

void str__t4430t(const char* arg__unsafe_value, char** __t5883t, uint64_t* __t5884t, uint64_t* __t5885t, char* __t5886t) {
  char* __t4431t__unsafe_ptr=0;
  uint64_t __t4431t__dat__pos=0;
  uint64_t __t4431t__dat__length=0;
  char __t4431t__dat__first=0;
  str__t1718t(arg__unsafe_value,&__t4431t__unsafe_ptr,&__t4431t__dat__pos,&__t4431t__dat__length,&__t4431t__dat__first);
  goto __t_return;
  __t_return:
  *__t5883t=__t4431t__unsafe_ptr;
  *__t5884t=__t4431t__dat__pos;
  *__t5885t=__t4431t__dat__length;
  *__t5886t=__t4431t__dat__first;
}

void char__t1730t(const char* s, char* __t5887t) {
  char* __t1731t__unsafe_ptr=0;
  uint64_t __t1731t__dat__pos=0;
  uint64_t __t1731t__dat__length=0;
  char __t1731t__dat__first=0;
  str__t1718t(s,&__t1731t__unsafe_ptr,&__t1731t__dat__pos,&__t1731t__dat__length,&__t1731t__dat__first);
  goto __t_return;
  __t_return:
  *__t5887t=__t1731t__dat__first;
}

static inline __attribute__((always_inline)) void neq__t1733t(char x, char y, char* __t5888t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5888t=z;
}

static inline __attribute__((always_inline)) void len__t1728t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5889t) {
  goto __t_return;
  __t_return:
  *__t5889t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t1860t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5890t) {
  uint64_t __t1861t__=0;
  uint64_t n=0;
  uint64_t __t1862t__=0;
  char __t1863t__=0;
  char __t1864t=0;
  char __t1865t__=0;
  char __t1866t=0;
  char z=0;
  len__t1728t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1861t__);
  n=__t1861t__;
  len__t1728t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1862t__);
  neq__t158t(n,__t1862t__,&__t1863t__);
  if(__t1863t__){
  __t1864t=0;
  goto __t_return;
  }
  neq__t1733t(x__dat__first,y__dat__first,&__t1865t__);
  if(__t1865t__){
  __t1866t=0;
  __t1864t=__t1866t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1864t=z;
  goto __t_return;
  __t_return:
  *__t5890t=__t1864t;
}

void eq__t1873t(const char* x, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5891t) {
  char __t1874t__=0;
  char __t1875t__=0;
  char __t1876t=0;
  char* __t1877t__unsafe_ptr=0;
  uint64_t __t1877t__dat__pos=0;
  uint64_t __t1877t__dat__length=0;
  char __t1877t__dat__first=0;
  char __t1878t__=0;
  char__t1730t(x,&__t1874t__);
  neq__t1733t(y__dat__first,__t1874t__,&__t1875t__);
  if(__t1875t__){
  __t1876t=0;
  goto __t_return;
  }
  str__t1718t(x,&__t1877t__unsafe_ptr,&__t1877t__dat__pos,&__t1877t__dat__length,&__t1877t__dat__first);
  eq__t1860t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,__t1877t__unsafe_ptr,__t1877t__dat__pos,__t1877t__dat__length,__t1877t__dat__first,&__t1878t__);
  __t1876t=__t1878t__;
  goto __t_return;
  __t_return:
  *__t5891t=__t1876t;
}

static inline __attribute__((always_inline)) void len__t1197t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5892t) {
  goto __t_return;
  __t_return:
  *__t5892t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t5893t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5893t=z;
}

static inline __attribute__((always_inline)) int arg_after__t4446t(const char* flag, char** __t5894t, uint64_t* __t5895t, uint64_t* __t5896t, char* __t5897t) {
  char* __t4447t__unsafe_ptr=0;
  uint64_t __t4447t__unsafe_size=0;
  uint32_t __t4447t__unsafe_offset=0;
  uint32_t __t4447t__unsafe_align=0;
  char* args__unsafe_ptr=0;
  uint64_t args__unsafe_size=0;
  uint32_t args__unsafe_offset=0;
  uint32_t args__unsafe_align=0;
  uint64_t __t4448t=0;
  char __t4449t=0;
  char* __t4450t__=0;
  const char* __t4451t__unsafe_value=0;
  const char* arg__unsafe_value=0;
  char* __t4452t__unsafe_ptr=0;
  uint64_t __t4452t__dat__pos=0;
  uint64_t __t4452t__dat__length=0;
  char __t4452t__dat__first=0;
  char __t4453t__=0;
  uint64_t __t4454t=0;
  uint64_t __t4455t__=0;
  uint64_t __t4456t__=0;
  char __t4457t__=0;
  char __t4458t=0;
  uint64_t __t4459t=0;
  uint64_t __t4460t__=0;
  char* __t4462t__=0;
  const char* __t4463t__unsafe_value=0;
  char* __t4464t__unsafe_ptr=0;
  uint64_t __t4464t__dat__pos=0;
  uint64_t __t4464t__dat__length=0;
  char __t4464t__dat__first=0;
  int __t4465t=0;
  int __t_errcode=0;
  int __t_complain=0;
  args__t4432t(&__t4447t__unsafe_ptr,&__t4447t__unsafe_size,&__t4447t__unsafe_offset,&__t4447t__unsafe_align);
  args__unsafe_ptr=__t4447t__unsafe_ptr;
  args__unsafe_size=__t4447t__unsafe_size;
  args__unsafe_offset=__t4447t__unsafe_offset;
  args__unsafe_align=__t4447t__unsafe_align;
  __t4448t=0-1;
  while(1){
  __t4448t=__t4448t+1;
  __t_complain=get__t1189t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4448t,&__t4450t__);
  __t4449t=__t_complain;
  if(__t_complain){
  goto __t4449t__label;
  }
  if(!__t4450t__){
  __t_complain=2;
  goto __t4449t__label;
  }
  else{
  memcpy(&__t4451t__unsafe_value,__t4450t__,8);
  }
  arg__unsafe_value=__t4451t__unsafe_value;
  __t4449t__label:__t4449t=__t4449t==0;
  if(!__t4449t){
  break;
  }
  str__t4430t(arg__unsafe_value,&__t4452t__unsafe_ptr,&__t4452t__dat__pos,&__t4452t__dat__length,&__t4452t__dat__first);
  eq__t1873t(flag,__t4452t__unsafe_ptr,__t4452t__dat__pos,__t4452t__dat__length,__t4452t__dat__first,&__t4453t__);
  if(__t4453t__){
  __t4454t=1;
  add__t188t(__t4448t,__t4454t,&__t4455t__);
  len__t1197t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,&__t4456t__);
  lt__t302t(__t4455t__,__t4456t__,&__t4457t__);
  __t4458t=__t4457t__;
  }
  else{
  __t4458t=0;
  }
  if(__t4458t){
  __t4459t=1;
  add__t188t(__t4448t,__t4459t,&__t4460t__);
  __t_errcode=get__t1189t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4460t__,&__t4462t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4462t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4463t__unsafe_value,__t4462t__,8);
  str__t4430t(__t4463t__unsafe_value,&__t4464t__unsafe_ptr,&__t4464t__dat__pos,&__t4464t__dat__length,&__t4464t__dat__first);
  goto __t_return;
  }
  }
  __t_errcode=45;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5894t=__t4464t__unsafe_ptr;
  *__t5895t=__t4464t__dat__pos;
  *__t5896t=__t4464t__dat__length;
  *__t5897t=__t4464t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1695t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5898t, uint64_t* __t5899t, uint64_t* __t5900t, char* __t5901t) {
  goto __t_return;
  __t_return:
  *__t5898t=other__unsafe_ptr;
  *__t5899t=other__dat__pos;
  *__t5900t=other__dat__length;
  *__t5901t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5902t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5902t=z;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t5903t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5903t=z;
}

static inline __attribute__((always_inline)) void allocated__t1249t(char** __t5904t, uint64_t* __t5905t, uint32_t* __t5906t, uint32_t* __t5907t, uint64_t pos, char** __t5908t, uint64_t* __t5909t, uint32_t* __t5910t, uint32_t* __t5911t, uint64_t* __t5912t) {
  char* buf__unsafe_ptr=*__t5904t;
  uint64_t buf__unsafe_size=*__t5905t;
  uint32_t buf__unsafe_offset=*__t5906t;
  uint32_t buf__unsafe_align=*__t5907t;
  goto __t_return;
  __t_return:
  *__t5904t=buf__unsafe_ptr;
  *__t5905t=buf__unsafe_size;
  *__t5906t=buf__unsafe_offset;
  *__t5907t=buf__unsafe_align;
  *__t5908t=buf__unsafe_ptr;
  *__t5909t=buf__unsafe_size;
  *__t5910t=buf__unsafe_offset;
  *__t5911t=buf__unsafe_align;
  *__t5912t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1324t(char** __t5913t, uint64_t* __t5914t, uint32_t* __t5915t, uint32_t* __t5916t, uint64_t* __t5917t, uint64_t length, char** __t5918t, uint64_t* __t5919t, uint32_t* __t5920t, uint32_t* __t5921t, uint64_t* __t5922t) {
  char* allocator__buf__unsafe_ptr=*__t5913t;
  uint64_t allocator__buf__unsafe_size=*__t5914t;
  uint32_t allocator__buf__unsafe_offset=*__t5915t;
  uint32_t allocator__buf__unsafe_align=*__t5916t;
  uint64_t allocator__pos=*__t5917t;
  int __t1325t=0;
  uint64_t __t1326t__=0;
  uint64_t next_pos=0;
  uint64_t __t1327t__=0;
  char __t1328t__=0;
  uint64_t __t1329t=0;
  uint64_t __t1330t__=0;
  uint64_t pos=0;
  char* __t1331t__buf__unsafe_ptr=0;
  uint64_t __t1331t__buf__unsafe_size=0;
  uint32_t __t1331t__buf__unsafe_offset=0;
  uint32_t __t1331t__buf__unsafe_align=0;
  uint64_t __t1331t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1326t__);
  next_pos=__t1326t__;
  len__t1197t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1327t__);
  gt__t326t(next_pos,__t1327t__,&__t1328t__);
  if(__t1328t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1329t=0;
  add__t188t(allocator__pos,__t1329t,&__t1330t__);
  pos=__t1330t__;
  allocator__pos=next_pos;
  allocated__t1249t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1331t__buf__unsafe_ptr,&__t1331t__buf__unsafe_size,&__t1331t__buf__unsafe_offset,&__t1331t__buf__unsafe_align,&__t1331t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5913t=allocator__buf__unsafe_ptr;
  *__t5914t=allocator__buf__unsafe_size;
  *__t5915t=allocator__buf__unsafe_offset;
  *__t5916t=allocator__buf__unsafe_align;
  *__t5917t=allocator__pos;
  *__t5918t=__t1331t__buf__unsafe_ptr;
  *__t5919t=__t1331t__buf__unsafe_size;
  *__t5920t=__t1331t__buf__unsafe_offset;
  *__t5921t=__t1331t__buf__unsafe_align;
  *__t5922t=__t1331t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1254t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5923t, uint64_t* __t5924t, uint32_t* __t5925t, uint32_t* __t5926t, uint64_t* __t5927t) {
  char* __t1255t__unsafe_ptr=0;
  uint64_t __t1255t__unsafe_size=0;
  uint32_t __t1255t__unsafe_offset=0;
  uint32_t __t1255t__unsafe_align=0;
  uint64_t __t1256t=0;
  __t1255t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1255t__unsafe_size=self__buf__unsafe_size;
  __t1255t__unsafe_offset=self__buf__unsafe_offset;
  __t1255t__unsafe_align=self__buf__unsafe_align;
  __t1256t=self__pos;
  goto __t_return;
  __t_return:
  *__t5923t=__t1255t__unsafe_ptr;
  *__t5924t=__t1255t__unsafe_size;
  *__t5925t=__t1255t__unsafe_offset;
  *__t5926t=__t1255t__unsafe_align;
  *__t5927t=__t1256t;
}

static inline __attribute__((always_inline)) int copy__t1787t(char** __t5928t, uint64_t* __t5929t, uint32_t* __t5930t, uint32_t* __t5931t, uint64_t* __t5932t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5933t, uint64_t* __t5934t, uint64_t* __t5935t, char* __t5936t) {
  char* CHARS__buf__unsafe_ptr=*__t5928t;
  uint64_t CHARS__buf__unsafe_size=*__t5929t;
  uint32_t CHARS__buf__unsafe_offset=*__t5930t;
  uint32_t CHARS__buf__unsafe_align=*__t5931t;
  uint64_t CHARS__pos=*__t5932t;
  char* __t1788t__unsafe_ptr=0;
  uint64_t __t1788t__dat__pos=0;
  uint64_t __t1788t__dat__length=0;
  char __t1788t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1789t__buf__unsafe_ptr=0;
  uint64_t __t1789t__buf__unsafe_size=0;
  uint32_t __t1789t__buf__unsafe_offset=0;
  uint32_t __t1789t__buf__unsafe_align=0;
  uint64_t __t1789t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1790t=0;
  char* __t1791t__unsafe_ptr=0;
  uint64_t __t1791t__dat__pos=0;
  uint64_t __t1791t__dat__length=0;
  char __t1791t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1695t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1788t__unsafe_ptr,&__t1788t__dat__pos,&__t1788t__dat__length,&__t1788t__dat__first);
  other__unsafe_ptr=__t1788t__unsafe_ptr;
  other__dat__pos=__t1788t__dat__pos;
  other__dat__length=__t1788t__dat__length;
  other__dat__first=__t1788t__dat__first;
  __t_errcode=alloc__t1324t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1789t__buf__unsafe_ptr,&__t1789t__buf__unsafe_size,&__t1789t__buf__unsafe_offset,&__t1789t__buf__unsafe_align,&__t1789t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1789t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1789t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1789t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1789t__buf__unsafe_align;
  surface__pos=__t1789t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1662t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1791t__unsafe_ptr,&__t1791t__dat__pos,&__t1791t__dat__length,&__t1791t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5928t=CHARS__buf__unsafe_ptr;
  *__t5929t=CHARS__buf__unsafe_size;
  *__t5930t=CHARS__buf__unsafe_offset;
  *__t5931t=CHARS__buf__unsafe_align;
  *__t5932t=CHARS__pos;
  *__t5933t=__t1791t__unsafe_ptr;
  *__t5934t=__t1791t__dat__pos;
  *__t5935t=__t1791t__dat__length;
  *__t5936t=__t1791t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1251t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5937t, uint64_t* __t5938t, uint32_t* __t5939t, uint32_t* __t5940t, uint64_t* __t5941t) {
  char* __t1252t__unsafe_ptr=0;
  uint64_t __t1252t__unsafe_size=0;
  uint32_t __t1252t__unsafe_offset=0;
  uint32_t __t1252t__unsafe_align=0;
  uint64_t __t1253t=0;
  __t1252t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1252t__unsafe_size=self__buf__unsafe_size;
  __t1252t__unsafe_offset=self__buf__unsafe_offset;
  __t1252t__unsafe_align=self__buf__unsafe_align;
  __t1253t=self__pos;
  goto __t_return;
  __t_return:
  *__t5937t=__t1252t__unsafe_ptr;
  *__t5938t=__t1252t__unsafe_size;
  *__t5939t=__t1252t__unsafe_offset;
  *__t5940t=__t1252t__unsafe_align;
  *__t5941t=__t1253t;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t5942t) {
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
  *__t5942t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1714t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5943t, uint64_t* __t5944t, uint64_t* __t5945t, char* __t5946t) {
  uint64_t __t1716t__=0;
  char* __t1717t__unsafe_ptr=0;
  uint64_t __t1717t__dat__pos=0;
  uint64_t __t1717t__dat__length=0;
  char __t1717t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(endpos,pos,&__t1716t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1696t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1716t__,&__t1717t__unsafe_ptr,&__t1717t__dat__pos,&__t1717t__dat__length,&__t1717t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5943t=__t1717t__unsafe_ptr;
  *__t5944t=__t1717t__dat__pos;
  *__t5945t=__t1717t__dat__length;
  *__t5946t=__t1717t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t3031t(char** __t5947t, uint64_t* __t5948t, uint32_t* __t5949t, uint32_t* __t5950t, uint64_t* __t5951t, const char* _s1, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5952t, uint64_t* __t5953t, uint64_t* __t5954t, char* __t5955t) {
  char* CHARS__buf__unsafe_ptr=*__t5947t;
  uint64_t CHARS__buf__unsafe_size=*__t5948t;
  uint32_t CHARS__buf__unsafe_offset=*__t5949t;
  uint32_t CHARS__buf__unsafe_align=*__t5950t;
  uint64_t CHARS__pos=*__t5951t;
  char* __t3032t__unsafe_ptr=0;
  uint64_t __t3032t__dat__pos=0;
  uint64_t __t3032t__dat__length=0;
  char __t3032t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t3033t__unsafe_ptr=0;
  uint64_t __t3033t__dat__pos=0;
  uint64_t __t3033t__dat__length=0;
  char __t3033t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t3034t__=0;
  uint64_t __t3035t__=0;
  char __t3036t__=0;
  char __t3037t=0;
  uint64_t __t3038t__=0;
  char __t3039t__=0;
  char __t3040t=0;
  uint64_t __t3041t__=0;
  char* __t3042t__buf__unsafe_ptr=0;
  uint64_t __t3042t__buf__unsafe_size=0;
  uint32_t __t3042t__buf__unsafe_offset=0;
  uint32_t __t3042t__buf__unsafe_align=0;
  uint64_t __t3042t__pos=0;
  char* __t3043t____t1255t__unsafe_ptr=0;
  uint64_t __t3043t____t1255t__unsafe_size=0;
  uint32_t __t3043t____t1255t__unsafe_offset=0;
  uint32_t __t3043t____t1255t__unsafe_align=0;
  uint64_t __t3043t____t1256t=0;
  char* __t3044t__buf__unsafe_ptr=0;
  uint64_t __t3044t__buf__unsafe_size=0;
  uint32_t __t3044t__buf__unsafe_offset=0;
  uint32_t __t3044t__buf__unsafe_align=0;
  uint64_t __t3044t__pos=0;
  char* __t3045t__buf__unsafe_ptr=0;
  uint64_t __t3045t__buf__unsafe_size=0;
  uint32_t __t3045t__buf__unsafe_offset=0;
  uint32_t __t3045t__buf__unsafe_align=0;
  uint64_t __t3045t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t3046t__unsafe_ptr=0;
  uint64_t __t3046t__dat__pos=0;
  uint64_t __t3046t__dat__length=0;
  char __t3046t__dat__first=0;
  char* __t3047t____t1252t__unsafe_ptr=0;
  uint64_t __t3047t____t1252t__unsafe_size=0;
  uint32_t __t3047t____t1252t__unsafe_offset=0;
  uint32_t __t3047t____t1252t__unsafe_align=0;
  uint64_t __t3047t____t1253t=0;
  uint64_t __t3049t=0;
  uint64_t __t3050t__=0;
  char* __t3051t__unsafe_ptr=0;
  uint64_t __t3051t__dat__pos=0;
  uint64_t __t3051t__dat__length=0;
  char __t3051t__dat__first=0;
  char __t3052t__=0;
  char __t3053t__=0;
  char __t3054t=0;
  uint64_t __t3055t__=0;
  char __t3056t__=0;
  char __t3057t=0;
  uint64_t __t3058t__=0;
  char* __t3060t__unsafe_ptr=0;
  uint64_t __t3060t__dat__pos=0;
  uint64_t __t3060t__dat__length=0;
  char __t3060t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t3061t__=0;
  uint64_t __t3062t__=0;
  uint64_t __t3063t__=0;
  char* __t3064t__buf__unsafe_ptr=0;
  uint64_t __t3064t__buf__unsafe_size=0;
  uint32_t __t3064t__buf__unsafe_offset=0;
  uint32_t __t3064t__buf__unsafe_align=0;
  uint64_t __t3064t__pos=0;
  char* __t3065t____t1255t__unsafe_ptr=0;
  uint64_t __t3065t____t1255t__unsafe_size=0;
  uint32_t __t3065t____t1255t__unsafe_offset=0;
  uint32_t __t3065t____t1255t__unsafe_align=0;
  uint64_t __t3065t____t1256t=0;
  char* __t3066t__buf__unsafe_ptr=0;
  uint64_t __t3066t__buf__unsafe_size=0;
  uint32_t __t3066t__buf__unsafe_offset=0;
  uint32_t __t3066t__buf__unsafe_align=0;
  uint64_t __t3066t__pos=0;
  char* __t3067t__buf__unsafe_ptr=0;
  uint64_t __t3067t__buf__unsafe_size=0;
  uint32_t __t3067t__buf__unsafe_offset=0;
  uint32_t __t3067t__buf__unsafe_align=0;
  uint64_t __t3067t__pos=0;
  char* __t3068t__unsafe_ptr=0;
  uint64_t __t3068t__dat__pos=0;
  uint64_t __t3068t__dat__length=0;
  char __t3068t__dat__first=0;
  char* __t3069t__unsafe_ptr=0;
  uint64_t __t3069t__dat__pos=0;
  uint64_t __t3069t__dat__length=0;
  char __t3069t__dat__first=0;
  char __t3070t=0;
  char* __t3071t____t1252t__unsafe_ptr=0;
  uint64_t __t3071t____t1252t__unsafe_size=0;
  uint32_t __t3071t____t1252t__unsafe_offset=0;
  uint32_t __t3071t____t1252t__unsafe_align=0;
  uint64_t __t3071t____t1253t=0;
  uint64_t __t3073t=0;
  uint64_t __t3074t__=0;
  char* __t3075t__unsafe_ptr=0;
  uint64_t __t3075t__dat__pos=0;
  uint64_t __t3075t__dat__length=0;
  char __t3075t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1718t(_s1,&__t3032t__unsafe_ptr,&__t3032t__dat__pos,&__t3032t__dat__length,&__t3032t__dat__first);
  s1__unsafe_ptr=__t3032t__unsafe_ptr;
  s1__dat__pos=__t3032t__dat__pos;
  s1__dat__length=__t3032t__dat__length;
  s1__dat__first=__t3032t__dat__first;
  str__t1695t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t3033t__unsafe_ptr,&__t3033t__dat__pos,&__t3033t__dat__length,&__t3033t__dat__first);
  s2__unsafe_ptr=__t3033t__unsafe_ptr;
  s2__dat__pos=__t3033t__dat__pos;
  s2__dat__length=__t3033t__dat__length;
  s2__dat__first=__t3033t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3034t__);
  if(__t3034t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3035t__);
  eq__t134t(CHARS__pos,__t3035t__,&__t3036t__);
  __t3037t=__t3036t__;
  }
  if(__t3037t){
  add__t188t(CHARS__pos,s2__dat__length,&__t3038t__);
  lt__t302t(__t3038t__,CHARS__buf__unsafe_size,&__t3039t__);
  __t3040t=__t3039t__;
  }
  if(__t3040t){
  len__t1728t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3041t__);
  __t_errcode=alloc__t1324t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3041t__,&__t3042t__buf__unsafe_ptr,&__t3042t__buf__unsafe_size,&__t3042t__buf__unsafe_offset,&__t3042t__buf__unsafe_align,&__t3042t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1254t(__t3042t__buf__unsafe_ptr,__t3042t__buf__unsafe_size,__t3042t__buf__unsafe_offset,__t3042t__buf__unsafe_align,__t3042t__pos,&__t3043t____t1255t__unsafe_ptr,&__t3043t____t1255t__unsafe_size,&__t3043t____t1255t__unsafe_offset,&__t3043t____t1255t__unsafe_align,&__t3043t____t1256t);
  arena__t1242t(&__t3043t____t1255t__unsafe_ptr,&__t3043t____t1255t__unsafe_size,&__t3043t____t1255t__unsafe_offset,&__t3043t____t1255t__unsafe_align,__t3043t____t1256t,&__t3044t__buf__unsafe_ptr,&__t3044t__buf__unsafe_size,&__t3044t__buf__unsafe_offset,&__t3044t__buf__unsafe_align,&__t3044t__pos);
  __t3045t__buf__unsafe_ptr=__t3044t__buf__unsafe_ptr;
  __t3045t__buf__unsafe_size=__t3044t__buf__unsafe_size;
  __t3045t__buf__unsafe_offset=__t3044t__buf__unsafe_offset;
  __t3045t__buf__unsafe_align=__t3044t__buf__unsafe_align;
  __t3045t__pos=__t3044t__pos;
  surface__buf__unsafe_ptr=__t3045t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3045t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3045t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3045t__buf__unsafe_align;
  surface__pos=__t3045t__pos;
  __t_errcode=copy__t1787t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3046t__unsafe_ptr,&__t3046t__dat__pos,&__t3046t__dat__length,&__t3046t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1251t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3047t____t1252t__unsafe_ptr,&__t3047t____t1252t__unsafe_size,&__t3047t____t1252t__unsafe_offset,&__t3047t____t1252t__unsafe_align,&__t3047t____t1253t);
  __t3049t=0;
  add__t188t(s1__dat__pos,__t3049t,&__t3050t__);
  __t_errcode=str__t1714t(__t3047t____t1252t__unsafe_ptr,__t3047t____t1252t__unsafe_size,__t3047t____t1252t__unsafe_offset,__t3047t____t1252t__unsafe_align,__t3047t____t1253t,__t3050t__,&__t3051t__unsafe_ptr,&__t3051t__dat__pos,&__t3051t__dat__length,&__t3051t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3052t__);
  if(__t3052t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3053t__);
  __t3054t=__t3053t__;
  }
  if(__t3054t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3055t__);
  eq__t134t(s2__dat__pos,__t3055t__,&__t3056t__);
  __t3057t=__t3056t__;
  }
  if(__t3057t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t3058t__);
  __t_errcode=str__t1714t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t3058t__,s1__dat__pos,&__t3060t__unsafe_ptr,&__t3060t__dat__pos,&__t3060t__dat__length,&__t3060t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3051t__unsafe_ptr=__t3060t__unsafe_ptr;
  __t3051t__dat__pos=__t3060t__dat__pos;
  __t3051t__dat__length=__t3060t__dat__length;
  __t3051t__dat__first=__t3060t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1728t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3061t__);
  len__t1728t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3062t__);
  add__t188t(__t3061t__,__t3062t__,&__t3063t__);
  __t_errcode=alloc__t1324t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3063t__,&__t3064t__buf__unsafe_ptr,&__t3064t__buf__unsafe_size,&__t3064t__buf__unsafe_offset,&__t3064t__buf__unsafe_align,&__t3064t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1254t(__t3064t__buf__unsafe_ptr,__t3064t__buf__unsafe_size,__t3064t__buf__unsafe_offset,__t3064t__buf__unsafe_align,__t3064t__pos,&__t3065t____t1255t__unsafe_ptr,&__t3065t____t1255t__unsafe_size,&__t3065t____t1255t__unsafe_offset,&__t3065t____t1255t__unsafe_align,&__t3065t____t1256t);
  arena__t1242t(&__t3065t____t1255t__unsafe_ptr,&__t3065t____t1255t__unsafe_size,&__t3065t____t1255t__unsafe_offset,&__t3065t____t1255t__unsafe_align,__t3065t____t1256t,&__t3066t__buf__unsafe_ptr,&__t3066t__buf__unsafe_size,&__t3066t__buf__unsafe_offset,&__t3066t__buf__unsafe_align,&__t3066t__pos);
  __t3067t__buf__unsafe_ptr=__t3066t__buf__unsafe_ptr;
  __t3067t__buf__unsafe_size=__t3066t__buf__unsafe_size;
  __t3067t__buf__unsafe_offset=__t3066t__buf__unsafe_offset;
  __t3067t__buf__unsafe_align=__t3066t__buf__unsafe_align;
  __t3067t__pos=__t3066t__pos;
  surface__buf__unsafe_ptr=__t3067t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3067t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3067t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3067t__buf__unsafe_align;
  surface__pos=__t3067t__pos;
  __t_errcode=copy__t1787t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3068t__unsafe_ptr,&__t3068t__dat__pos,&__t3068t__dat__length,&__t3068t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1787t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3069t__unsafe_ptr,&__t3069t__dat__pos,&__t3069t__dat__length,&__t3069t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1251t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3071t____t1252t__unsafe_ptr,&__t3071t____t1252t__unsafe_size,&__t3071t____t1252t__unsafe_offset,&__t3071t____t1252t__unsafe_align,&__t3071t____t1253t);
  __t3073t=0;
  add__t188t(prev_pos,__t3073t,&__t3074t__);
  __t_complain=str__t1714t(__t3071t____t1252t__unsafe_ptr,__t3071t____t1252t__unsafe_size,__t3071t____t1252t__unsafe_offset,__t3071t____t1252t__unsafe_align,__t3071t____t1253t,__t3074t__,&__t3075t__unsafe_ptr,&__t3075t__dat__pos,&__t3075t__dat__length,&__t3075t__dat__first);
  __t3070t=__t_complain;
  if(__t_complain){
  goto __t3070t__label;
  }
  ret__unsafe_ptr=__t3075t__unsafe_ptr;
  ret__dat__pos=__t3075t__dat__pos;
  ret__dat__length=__t3075t__dat__length;
  ret__dat__first=__t3075t__dat__first;
  __t3070t__label:__t3070t=__t3070t==0;
  __t3051t__unsafe_ptr=ret__unsafe_ptr;
  __t3051t__dat__pos=ret__dat__pos;
  __t3051t__dat__length=ret__dat__length;
  __t3051t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5947t=CHARS__buf__unsafe_ptr;
  *__t5948t=CHARS__buf__unsafe_size;
  *__t5949t=CHARS__buf__unsafe_offset;
  *__t5950t=CHARS__buf__unsafe_align;
  *__t5951t=CHARS__pos;
  *__t5952t=__t3051t__unsafe_ptr;
  *__t5953t=__t3051t__dat__pos;
  *__t5954t=__t3051t__dat__length;
  *__t5955t=__t3051t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2986t(char** __t5956t, uint64_t* __t5957t, uint32_t* __t5958t, uint32_t* __t5959t, uint64_t* __t5960t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5961t, uint64_t* __t5962t, uint64_t* __t5963t, char* __t5964t) {
  char* CHARS__buf__unsafe_ptr=*__t5956t;
  uint64_t CHARS__buf__unsafe_size=*__t5957t;
  uint32_t CHARS__buf__unsafe_offset=*__t5958t;
  uint32_t CHARS__buf__unsafe_align=*__t5959t;
  uint64_t CHARS__pos=*__t5960t;
  char* __t2987t__unsafe_ptr=0;
  uint64_t __t2987t__dat__pos=0;
  uint64_t __t2987t__dat__length=0;
  char __t2987t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2988t__unsafe_ptr=0;
  uint64_t __t2988t__dat__pos=0;
  uint64_t __t2988t__dat__length=0;
  char __t2988t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2989t__=0;
  uint64_t __t2990t__=0;
  char __t2991t__=0;
  char __t2992t=0;
  uint64_t __t2993t__=0;
  char __t2994t__=0;
  char __t2995t=0;
  uint64_t __t2996t__=0;
  char* __t2997t__buf__unsafe_ptr=0;
  uint64_t __t2997t__buf__unsafe_size=0;
  uint32_t __t2997t__buf__unsafe_offset=0;
  uint32_t __t2997t__buf__unsafe_align=0;
  uint64_t __t2997t__pos=0;
  char* __t2998t____t1255t__unsafe_ptr=0;
  uint64_t __t2998t____t1255t__unsafe_size=0;
  uint32_t __t2998t____t1255t__unsafe_offset=0;
  uint32_t __t2998t____t1255t__unsafe_align=0;
  uint64_t __t2998t____t1256t=0;
  char* __t2999t__buf__unsafe_ptr=0;
  uint64_t __t2999t__buf__unsafe_size=0;
  uint32_t __t2999t__buf__unsafe_offset=0;
  uint32_t __t2999t__buf__unsafe_align=0;
  uint64_t __t2999t__pos=0;
  char* __t3000t__buf__unsafe_ptr=0;
  uint64_t __t3000t__buf__unsafe_size=0;
  uint32_t __t3000t__buf__unsafe_offset=0;
  uint32_t __t3000t__buf__unsafe_align=0;
  uint64_t __t3000t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t3001t__unsafe_ptr=0;
  uint64_t __t3001t__dat__pos=0;
  uint64_t __t3001t__dat__length=0;
  char __t3001t__dat__first=0;
  char* __t3002t____t1252t__unsafe_ptr=0;
  uint64_t __t3002t____t1252t__unsafe_size=0;
  uint32_t __t3002t____t1252t__unsafe_offset=0;
  uint32_t __t3002t____t1252t__unsafe_align=0;
  uint64_t __t3002t____t1253t=0;
  uint64_t __t3004t=0;
  uint64_t __t3005t__=0;
  char* __t3006t__unsafe_ptr=0;
  uint64_t __t3006t__dat__pos=0;
  uint64_t __t3006t__dat__length=0;
  char __t3006t__dat__first=0;
  char __t3007t__=0;
  char __t3008t__=0;
  char __t3009t=0;
  uint64_t __t3010t__=0;
  char __t3011t__=0;
  char __t3012t=0;
  uint64_t __t3013t__=0;
  char* __t3015t__unsafe_ptr=0;
  uint64_t __t3015t__dat__pos=0;
  uint64_t __t3015t__dat__length=0;
  char __t3015t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t3016t__=0;
  uint64_t __t3017t__=0;
  uint64_t __t3018t__=0;
  char* __t3019t__buf__unsafe_ptr=0;
  uint64_t __t3019t__buf__unsafe_size=0;
  uint32_t __t3019t__buf__unsafe_offset=0;
  uint32_t __t3019t__buf__unsafe_align=0;
  uint64_t __t3019t__pos=0;
  char* __t3020t____t1255t__unsafe_ptr=0;
  uint64_t __t3020t____t1255t__unsafe_size=0;
  uint32_t __t3020t____t1255t__unsafe_offset=0;
  uint32_t __t3020t____t1255t__unsafe_align=0;
  uint64_t __t3020t____t1256t=0;
  char* __t3021t__buf__unsafe_ptr=0;
  uint64_t __t3021t__buf__unsafe_size=0;
  uint32_t __t3021t__buf__unsafe_offset=0;
  uint32_t __t3021t__buf__unsafe_align=0;
  uint64_t __t3021t__pos=0;
  char* __t3022t__buf__unsafe_ptr=0;
  uint64_t __t3022t__buf__unsafe_size=0;
  uint32_t __t3022t__buf__unsafe_offset=0;
  uint32_t __t3022t__buf__unsafe_align=0;
  uint64_t __t3022t__pos=0;
  char* __t3023t__unsafe_ptr=0;
  uint64_t __t3023t__dat__pos=0;
  uint64_t __t3023t__dat__length=0;
  char __t3023t__dat__first=0;
  char* __t3024t__unsafe_ptr=0;
  uint64_t __t3024t__dat__pos=0;
  uint64_t __t3024t__dat__length=0;
  char __t3024t__dat__first=0;
  char __t3025t=0;
  char* __t3026t____t1252t__unsafe_ptr=0;
  uint64_t __t3026t____t1252t__unsafe_size=0;
  uint32_t __t3026t____t1252t__unsafe_offset=0;
  uint32_t __t3026t____t1252t__unsafe_align=0;
  uint64_t __t3026t____t1253t=0;
  uint64_t __t3028t=0;
  uint64_t __t3029t__=0;
  char* __t3030t__unsafe_ptr=0;
  uint64_t __t3030t__dat__pos=0;
  uint64_t __t3030t__dat__length=0;
  char __t3030t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1695t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2987t__unsafe_ptr,&__t2987t__dat__pos,&__t2987t__dat__length,&__t2987t__dat__first);
  s1__unsafe_ptr=__t2987t__unsafe_ptr;
  s1__dat__pos=__t2987t__dat__pos;
  s1__dat__length=__t2987t__dat__length;
  s1__dat__first=__t2987t__dat__first;
  str__t1718t(_s2,&__t2988t__unsafe_ptr,&__t2988t__dat__pos,&__t2988t__dat__length,&__t2988t__dat__first);
  s2__unsafe_ptr=__t2988t__unsafe_ptr;
  s2__dat__pos=__t2988t__dat__pos;
  s2__dat__length=__t2988t__dat__length;
  s2__dat__first=__t2988t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2989t__);
  if(__t2989t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2990t__);
  eq__t134t(CHARS__pos,__t2990t__,&__t2991t__);
  __t2992t=__t2991t__;
  }
  if(__t2992t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2993t__);
  lt__t302t(__t2993t__,CHARS__buf__unsafe_size,&__t2994t__);
  __t2995t=__t2994t__;
  }
  if(__t2995t){
  len__t1728t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2996t__);
  __t_errcode=alloc__t1324t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2996t__,&__t2997t__buf__unsafe_ptr,&__t2997t__buf__unsafe_size,&__t2997t__buf__unsafe_offset,&__t2997t__buf__unsafe_align,&__t2997t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1254t(__t2997t__buf__unsafe_ptr,__t2997t__buf__unsafe_size,__t2997t__buf__unsafe_offset,__t2997t__buf__unsafe_align,__t2997t__pos,&__t2998t____t1255t__unsafe_ptr,&__t2998t____t1255t__unsafe_size,&__t2998t____t1255t__unsafe_offset,&__t2998t____t1255t__unsafe_align,&__t2998t____t1256t);
  arena__t1242t(&__t2998t____t1255t__unsafe_ptr,&__t2998t____t1255t__unsafe_size,&__t2998t____t1255t__unsafe_offset,&__t2998t____t1255t__unsafe_align,__t2998t____t1256t,&__t2999t__buf__unsafe_ptr,&__t2999t__buf__unsafe_size,&__t2999t__buf__unsafe_offset,&__t2999t__buf__unsafe_align,&__t2999t__pos);
  __t3000t__buf__unsafe_ptr=__t2999t__buf__unsafe_ptr;
  __t3000t__buf__unsafe_size=__t2999t__buf__unsafe_size;
  __t3000t__buf__unsafe_offset=__t2999t__buf__unsafe_offset;
  __t3000t__buf__unsafe_align=__t2999t__buf__unsafe_align;
  __t3000t__pos=__t2999t__pos;
  surface__buf__unsafe_ptr=__t3000t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3000t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3000t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3000t__buf__unsafe_align;
  surface__pos=__t3000t__pos;
  __t_errcode=copy__t1787t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3001t__unsafe_ptr,&__t3001t__dat__pos,&__t3001t__dat__length,&__t3001t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1251t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3002t____t1252t__unsafe_ptr,&__t3002t____t1252t__unsafe_size,&__t3002t____t1252t__unsafe_offset,&__t3002t____t1252t__unsafe_align,&__t3002t____t1253t);
  __t3004t=0;
  add__t188t(s1__dat__pos,__t3004t,&__t3005t__);
  __t_errcode=str__t1714t(__t3002t____t1252t__unsafe_ptr,__t3002t____t1252t__unsafe_size,__t3002t____t1252t__unsafe_offset,__t3002t____t1252t__unsafe_align,__t3002t____t1253t,__t3005t__,&__t3006t__unsafe_ptr,&__t3006t__dat__pos,&__t3006t__dat__length,&__t3006t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3007t__);
  if(__t3007t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3008t__);
  __t3009t=__t3008t__;
  }
  if(__t3009t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3010t__);
  eq__t134t(s2__dat__pos,__t3010t__,&__t3011t__);
  __t3012t=__t3011t__;
  }
  if(__t3012t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t3013t__);
  __t_errcode=str__t1714t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t3013t__,s1__dat__pos,&__t3015t__unsafe_ptr,&__t3015t__dat__pos,&__t3015t__dat__length,&__t3015t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3006t__unsafe_ptr=__t3015t__unsafe_ptr;
  __t3006t__dat__pos=__t3015t__dat__pos;
  __t3006t__dat__length=__t3015t__dat__length;
  __t3006t__dat__first=__t3015t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1728t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3016t__);
  len__t1728t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3017t__);
  add__t188t(__t3016t__,__t3017t__,&__t3018t__);
  __t_errcode=alloc__t1324t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3018t__,&__t3019t__buf__unsafe_ptr,&__t3019t__buf__unsafe_size,&__t3019t__buf__unsafe_offset,&__t3019t__buf__unsafe_align,&__t3019t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1254t(__t3019t__buf__unsafe_ptr,__t3019t__buf__unsafe_size,__t3019t__buf__unsafe_offset,__t3019t__buf__unsafe_align,__t3019t__pos,&__t3020t____t1255t__unsafe_ptr,&__t3020t____t1255t__unsafe_size,&__t3020t____t1255t__unsafe_offset,&__t3020t____t1255t__unsafe_align,&__t3020t____t1256t);
  arena__t1242t(&__t3020t____t1255t__unsafe_ptr,&__t3020t____t1255t__unsafe_size,&__t3020t____t1255t__unsafe_offset,&__t3020t____t1255t__unsafe_align,__t3020t____t1256t,&__t3021t__buf__unsafe_ptr,&__t3021t__buf__unsafe_size,&__t3021t__buf__unsafe_offset,&__t3021t__buf__unsafe_align,&__t3021t__pos);
  __t3022t__buf__unsafe_ptr=__t3021t__buf__unsafe_ptr;
  __t3022t__buf__unsafe_size=__t3021t__buf__unsafe_size;
  __t3022t__buf__unsafe_offset=__t3021t__buf__unsafe_offset;
  __t3022t__buf__unsafe_align=__t3021t__buf__unsafe_align;
  __t3022t__pos=__t3021t__pos;
  surface__buf__unsafe_ptr=__t3022t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3022t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3022t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3022t__buf__unsafe_align;
  surface__pos=__t3022t__pos;
  __t_errcode=copy__t1787t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3023t__unsafe_ptr,&__t3023t__dat__pos,&__t3023t__dat__length,&__t3023t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1787t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3024t__unsafe_ptr,&__t3024t__dat__pos,&__t3024t__dat__length,&__t3024t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1251t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3026t____t1252t__unsafe_ptr,&__t3026t____t1252t__unsafe_size,&__t3026t____t1252t__unsafe_offset,&__t3026t____t1252t__unsafe_align,&__t3026t____t1253t);
  __t3028t=0;
  add__t188t(prev_pos,__t3028t,&__t3029t__);
  __t_complain=str__t1714t(__t3026t____t1252t__unsafe_ptr,__t3026t____t1252t__unsafe_size,__t3026t____t1252t__unsafe_offset,__t3026t____t1252t__unsafe_align,__t3026t____t1253t,__t3029t__,&__t3030t__unsafe_ptr,&__t3030t__dat__pos,&__t3030t__dat__length,&__t3030t__dat__first);
  __t3025t=__t_complain;
  if(__t_complain){
  goto __t3025t__label;
  }
  ret__unsafe_ptr=__t3030t__unsafe_ptr;
  ret__dat__pos=__t3030t__dat__pos;
  ret__dat__length=__t3030t__dat__length;
  ret__dat__first=__t3030t__dat__first;
  __t3025t__label:__t3025t=__t3025t==0;
  __t3006t__unsafe_ptr=ret__unsafe_ptr;
  __t3006t__dat__pos=ret__dat__pos;
  __t3006t__dat__length=ret__dat__length;
  __t3006t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5956t=CHARS__buf__unsafe_ptr;
  *__t5957t=CHARS__buf__unsafe_size;
  *__t5958t=CHARS__buf__unsafe_offset;
  *__t5959t=CHARS__buf__unsafe_align;
  *__t5960t=CHARS__pos;
  *__t5961t=__t3006t__unsafe_ptr;
  *__t5962t=__t3006t__dat__pos;
  *__t5963t=__t3006t__dat__length;
  *__t5964t=__t3006t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1792t(char** __t5965t, uint64_t* __t5966t, uint32_t* __t5967t, uint32_t* __t5968t, uint64_t* __t5969t, const char* _other, char** __t5970t, uint64_t* __t5971t, uint64_t* __t5972t, char* __t5973t) {
  char* CHARS__buf__unsafe_ptr=*__t5965t;
  uint64_t CHARS__buf__unsafe_size=*__t5966t;
  uint32_t CHARS__buf__unsafe_offset=*__t5967t;
  uint32_t CHARS__buf__unsafe_align=*__t5968t;
  uint64_t CHARS__pos=*__t5969t;
  char* __t1793t__unsafe_ptr=0;
  uint64_t __t1793t__dat__pos=0;
  uint64_t __t1793t__dat__length=0;
  char __t1793t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1794t__buf__unsafe_ptr=0;
  uint64_t __t1794t__buf__unsafe_size=0;
  uint32_t __t1794t__buf__unsafe_offset=0;
  uint32_t __t1794t__buf__unsafe_align=0;
  uint64_t __t1794t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1795t=0;
  char* __t1796t__unsafe_ptr=0;
  uint64_t __t1796t__dat__pos=0;
  uint64_t __t1796t__dat__length=0;
  char __t1796t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1718t(_other,&__t1793t__unsafe_ptr,&__t1793t__dat__pos,&__t1793t__dat__length,&__t1793t__dat__first);
  other__unsafe_ptr=__t1793t__unsafe_ptr;
  other__dat__pos=__t1793t__dat__pos;
  other__dat__length=__t1793t__dat__length;
  other__dat__first=__t1793t__dat__first;
  __t_errcode=alloc__t1324t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1794t__buf__unsafe_ptr,&__t1794t__buf__unsafe_size,&__t1794t__buf__unsafe_offset,&__t1794t__buf__unsafe_align,&__t1794t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1794t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1794t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1794t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1794t__buf__unsafe_align;
  surface__pos=__t1794t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1662t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1796t__unsafe_ptr,&__t1796t__dat__pos,&__t1796t__dat__length,&__t1796t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5965t=CHARS__buf__unsafe_ptr;
  *__t5966t=CHARS__buf__unsafe_size;
  *__t5967t=CHARS__buf__unsafe_offset;
  *__t5968t=CHARS__buf__unsafe_align;
  *__t5969t=CHARS__pos;
  *__t5970t=__t1796t__unsafe_ptr;
  *__t5971t=__t1796t__dat__pos;
  *__t5972t=__t1796t__dat__length;
  *__t5973t=__t1796t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1198t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1818t(char** __t5974t, uint64_t* __t5975t, uint32_t* __t5976t, uint32_t* __t5977t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5974t=unsafe_ptr;
  *__t5975t=unsafe_size;
  *__t5976t=unsafe_offset;
  *__t5977t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1817t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5978t, uint64_t* __t5979t, uint64_t* __t5980t, char* __t5981t) {
  char* __t1820t__unsafe_ptr=0;
  uint64_t __t1820t__unsafe_size=0;
  uint32_t __t1820t__unsafe_offset=0;
  uint32_t __t1820t__unsafe_align=0;
  uint64_t __t1821t=0;
  uint64_t __t1822t__=0;
  uint64_t __t1823t__=0;
  char* __t1824t__unsafe_ptr=0;
  uint64_t __t1824t__unsafe_size=0;
  uint32_t __t1824t__unsafe_offset=0;
  uint32_t __t1824t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t1826t=0;
  uint64_t __t1827t=0;
  char* __t1828t__unsafe_ptr=0;
  uint64_t __t1828t__dat__pos=0;
  uint64_t __t1828t__dat__length=0;
  char __t1828t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1818t(&__t1820t__unsafe_ptr,&__t1820t__unsafe_size,&__t1820t__unsafe_offset,&__t1820t__unsafe_align);
  __t1821t=1;
  len__t1728t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1822t__);
  add__t188t(__t1821t,__t1822t__,&__t1823t__);
  __t_errcode=alloc__t969t(&__t1820t__unsafe_ptr,&__t1820t__unsafe_size,&__t1820t__unsafe_offset,&__t1820t__unsafe_align,__t1823t__,&__t1824t__unsafe_ptr,&__t1824t__unsafe_size,&__t1824t__unsafe_offset,&__t1824t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1824t__unsafe_ptr;
  buf__unsafe_size=__t1824t__unsafe_size;
  buf__unsafe_offset=__t1824t__unsafe_offset;
  buf__unsafe_align=__t1824t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1827t=0;
  __t_errcode=str__t1662t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1827t,other__dat__length,other__dat__first,&__t1828t__unsafe_ptr,&__t1828t__dat__pos,&__t1828t__dat__length,&__t1828t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t844t(&__t1828t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5978t=__t1828t__unsafe_ptr;
  *__t5979t=__t1828t__dat__pos;
  *__t5980t=__t1828t__dat__length;
  *__t5981t=__t1828t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1843t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5982t, char** __t5983t, uint64_t* __t5984t, uint64_t* __t5985t, char* __t5986t) {
  int __t1844t=0;
  char* __t1846t__unsafe_ptr=0;
  uint64_t __t1846t__dat__pos=0;
  uint64_t __t1846t__dat__length=0;
  char __t1846t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1848t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1198t();
  __t_errcode=copy_null_terminated__t1817t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1846t__unsafe_ptr,&__t1846t__dat__pos,&__t1846t__dat__length,&__t1846t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1846t__unsafe_ptr;
  str__dat__pos=__t1846t__dat__pos;
  str__dat__length=__t1846t__dat__length;
  str__dat__first=__t1846t__dat__first;
  add__t846t(str__unsafe_ptr,str__dat__pos,&__t1848t__);
  _ret=__t1848t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t844t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5982t=cstr;
  *__t5983t=str__unsafe_ptr;
  *__t5984t=str__dat__pos;
  *__t5985t=str__dat__length;
  *__t5986t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1853t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5987t) {
  goto __t_return;
  __t_return:
  *__t5987t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t5351t(char* unsafe_ptr) {
  int __t5353t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int open__t5354t(const char* path, char** __t5988t) {
  int __t5356t=0;
  char* unsafe_ptr=0;
  char __t5358t__=0;
  char __t5359t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t683t(unsafe_ptr,&__t5358t__);
  not__t42t(__t5358t__,&__t5359t__);
  if(__t5359t__){
  __t_errcode=52;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5351t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5988t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t5361t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t5989t) {
  const char* __t5362t__cstr=0;
  char* __t5362t__str__unsafe_ptr=0;
  uint64_t __t5362t__str__dat__pos=0;
  uint64_t __t5362t__str__dat__length=0;
  char __t5362t__str__dat__first=0;
  const char* __t5364t__=0;
  char* __t5365t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1843t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5362t__cstr,&__t5362t__str__unsafe_ptr,&__t5362t__str__dat__pos,&__t5362t__str__dat__length,&__t5362t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1853t(__t5362t__cstr,__t5362t__str__unsafe_ptr,__t5362t__str__dat__pos,__t5362t__str__dat__length,__t5362t__str__dat__first,&__t5364t__);
  __t_errcode=open__t5354t(__t5364t__,&__t5365t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5351t(__t5365t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5989t=__t5365t__unsafe_ptr;
  
  __t_skip_returns:free__t844t(&__t5362t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t5373t(char** __t5990t, const char** __t5991t) {
  char* f__unsafe_ptr=*__t5990t;
  char __t5374t__=0;
  char __t5375t__=0;
  char* de=0;
  char __t5376t__=0;
  char __t5377t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t683t(f__unsafe_ptr,&__t5374t__);
  not__t42t(__t5374t__,&__t5375t__);
  if(__t5375t__){
  __t_errcode=63;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t683t(de,&__t5376t__);
  not__t42t(__t5376t__,&__t5377t__);
  if(__t5377t__){
  __t_errcode=64;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5990t=f__unsafe_ptr;
  *__t5991t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t5378t(char** __t5992t, char** __t5993t, uint64_t* __t5994t, uint64_t* __t5995t, char* __t5996t) {
  char* f__unsafe_ptr=*__t5992t;
  const char* __t5379t__=0;
  char* __t5380t__unsafe_ptr=0;
  uint64_t __t5380t__dat__pos=0;
  uint64_t __t5380t__dat__length=0;
  char __t5380t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t5373t(&f__unsafe_ptr,&__t5379t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1718t(__t5379t__,&__t5380t__unsafe_ptr,&__t5380t__dat__pos,&__t5380t__dat__length,&__t5380t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5992t=f__unsafe_ptr;
  *__t5993t=__t5380t__unsafe_ptr;
  *__t5994t=__t5380t__dat__pos;
  *__t5995t=__t5380t__dat__length;
  *__t5996t=__t5380t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t5444t(char** __t5997t, uint64_t nat, char** __t5998t, uint64_t* __t5999t, uint64_t* __t6000t, char* __t6001t) {
  char* data__unsafe_ptr=*__t5997t;
  char* __t5445t__unsafe_ptr=0;
  uint64_t __t5445t__dat__pos=0;
  uint64_t __t5445t__dat__length=0;
  char __t5445t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t5378t(&data__unsafe_ptr,&__t5445t__unsafe_ptr,&__t5445t__dat__pos,&__t5445t__dat__length,&__t5445t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5997t=data__unsafe_ptr;
  *__t5998t=__t5445t__unsafe_ptr;
  *__t5999t=__t5445t__dat__pos;
  *__t6000t=__t5445t__dat__length;
  *__t6001t=__t5445t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void eq__t1867t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t6002t) {
  char __t1868t__=0;
  char __t1869t__=0;
  char __t1870t=0;
  char* __t1871t__unsafe_ptr=0;
  uint64_t __t1871t__dat__pos=0;
  uint64_t __t1871t__dat__length=0;
  char __t1871t__dat__first=0;
  char __t1872t__=0;
  char__t1730t(y,&__t1868t__);
  neq__t1733t(x__dat__first,__t1868t__,&__t1869t__);
  if(__t1869t__){
  __t1870t=0;
  goto __t_return;
  }
  str__t1718t(y,&__t1871t__unsafe_ptr,&__t1871t__dat__pos,&__t1871t__dat__length,&__t1871t__dat__first);
  eq__t1860t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1871t__unsafe_ptr,__t1871t__dat__pos,__t1871t__dat__length,__t1871t__dat__first,&__t1872t__);
  __t1870t=__t1872t__;
  goto __t_return;
  __t_return:
  *__t6002t=__t1870t;
}

int unsafe_temp__t1829t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t6003t, char** __t6004t, uint64_t* __t6005t, uint64_t* __t6006t, char* __t6007t) {
  int __t1830t=0;
  char* __t1831t__unsafe_ptr=0;
  uint64_t __t1831t__unsafe_size=0;
  uint32_t __t1831t__unsafe_offset=0;
  uint32_t __t1831t__unsafe_align=0;
  uint64_t __t1832t=0;
  uint64_t __t1833t__=0;
  uint64_t __t1834t__=0;
  char* __t1835t__unsafe_ptr=0;
  uint64_t __t1835t__unsafe_size=0;
  uint32_t __t1835t__unsafe_offset=0;
  uint32_t __t1835t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1837t=0;
  char __t1838t__=0;
  char first_character=0;
  uint64_t __t1839t=0;
  char* __t1840t__unsafe_ptr=0;
  uint64_t __t1840t__dat__pos=0;
  uint64_t __t1840t__dat__length=0;
  char __t1840t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1841t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1818t(&__t1831t__unsafe_ptr,&__t1831t__unsafe_size,&__t1831t__unsafe_offset,&__t1831t__unsafe_align);
  __t1832t=1;
  add__t188t(__t1832t,other__dat__length,&__t1833t__);
  add__t188t(__t1833t__,prefix__dat__length,&__t1834t__);
  __t_errcode=alloc__t969t(&__t1831t__unsafe_ptr,&__t1831t__unsafe_size,&__t1831t__unsafe_offset,&__t1831t__unsafe_align,__t1834t__,&__t1835t__unsafe_ptr,&__t1835t__unsafe_size,&__t1835t__unsafe_offset,&__t1835t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1835t__unsafe_ptr;
  buf__unsafe_size=__t1835t__unsafe_size;
  buf__unsafe_offset=__t1835t__unsafe_offset;
  buf__unsafe_align=__t1835t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1837t=0;
  eq__t134t(prefix__dat__length,__t1837t,&__t1838t__);
  if(__t1838t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1839t=0;
  __t_errcode=str__t1662t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1839t,other__dat__length,first_character,&__t1840t__unsafe_ptr,&__t1840t__dat__pos,&__t1840t__dat__length,&__t1840t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1840t__unsafe_ptr;
  str__dat__pos=__t1840t__dat__pos;
  str__dat__length=__t1840t__dat__length;
  str__dat__first=__t1840t__dat__first;
  add__t846t(str__unsafe_ptr,str__dat__pos,&__t1841t__);
  _ret=__t1841t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t844t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t6003t=cstr;
  *__t6004t=str__unsafe_ptr;
  *__t6005t=str__dat__pos;
  *__t6006t=str__dat__length;
  *__t6007t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1852t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t6008t) {
  goto __t_return;
  __t_return:
  *__t6008t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t5278t(const char* path, char* __t6009t) {
  int __t5280t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t6009t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t5288t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t6010t) {
  int __t5290t=0;
  const char* __t5291t__cstr=0;
  char* __t5291t__str__unsafe_ptr=0;
  uint64_t __t5291t__str__dat__pos=0;
  uint64_t __t5291t__str__dat__length=0;
  char __t5291t__str__dat__first=0;
  const char* __t5293t__=0;
  char __t5294t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1829t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t5291t__cstr,&__t5291t__str__unsafe_ptr,&__t5291t__str__dat__pos,&__t5291t__str__dat__length,&__t5291t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1852t(__t5291t__cstr,__t5291t__str__unsafe_ptr,__t5291t__str__dat__pos,__t5291t__str__dat__length,__t5291t__str__dat__first,&__t5293t__);
  is_dir__t5278t(__t5293t__,&__t5294t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6010t=__t5294t__;
  
  __t_skip_returns:free__t844t(&__t5291t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t410t(uint64_t x, uint64_t y, uint64_t* __t6011t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t6011t=z;
}

static inline __attribute__((always_inline)) void reuse__t5696t(char** __t6012t, uint64_t* __t6013t, uint32_t* __t6014t, uint32_t* __t6015t, uint64_t* __t6016t, uint64_t* __t6017t) {
  char* arn__buf__unsafe_ptr=*__t6012t;
  uint64_t arn__buf__unsafe_size=*__t6013t;
  uint32_t arn__buf__unsafe_offset=*__t6014t;
  uint32_t arn__buf__unsafe_align=*__t6015t;
  uint64_t arn__pos=*__t6016t;
  uint64_t __t5697t=0;
  uint64_t __t5698t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5699t=0;
  uint64_t __t5701t__=0;
  __t5697t=0;
  add__t188t(__t5697t,arn__pos,&__t5698t__);
  tracked_position=__t5698t__;
  goto __t_return;
  __t_return:
  *__t6012t=arn__buf__unsafe_ptr;
  *__t6013t=arn__buf__unsafe_size;
  *__t6014t=arn__buf__unsafe_offset;
  *__t6015t=arn__buf__unsafe_align;
  *__t6016t=arn__pos;
  *__t6017t=tracked_position;
}

int add__t2941t(char** __t6018t, uint64_t* __t6019t, uint32_t* __t6020t, uint32_t* __t6021t, uint64_t* __t6022t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t6023t, uint64_t* __t6024t, uint64_t* __t6025t, char* __t6026t) {
  char* CHARS__buf__unsafe_ptr=*__t6018t;
  uint64_t CHARS__buf__unsafe_size=*__t6019t;
  uint32_t CHARS__buf__unsafe_offset=*__t6020t;
  uint32_t CHARS__buf__unsafe_align=*__t6021t;
  uint64_t CHARS__pos=*__t6022t;
  char* __t2942t__unsafe_ptr=0;
  uint64_t __t2942t__dat__pos=0;
  uint64_t __t2942t__dat__length=0;
  char __t2942t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2943t__unsafe_ptr=0;
  uint64_t __t2943t__dat__pos=0;
  uint64_t __t2943t__dat__length=0;
  char __t2943t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2944t__=0;
  uint64_t __t2945t__=0;
  char __t2946t__=0;
  char __t2947t=0;
  uint64_t __t2948t__=0;
  char __t2949t__=0;
  char __t2950t=0;
  uint64_t __t2951t__=0;
  char* __t2952t__buf__unsafe_ptr=0;
  uint64_t __t2952t__buf__unsafe_size=0;
  uint32_t __t2952t__buf__unsafe_offset=0;
  uint32_t __t2952t__buf__unsafe_align=0;
  uint64_t __t2952t__pos=0;
  char* __t2953t____t1255t__unsafe_ptr=0;
  uint64_t __t2953t____t1255t__unsafe_size=0;
  uint32_t __t2953t____t1255t__unsafe_offset=0;
  uint32_t __t2953t____t1255t__unsafe_align=0;
  uint64_t __t2953t____t1256t=0;
  char* __t2954t__buf__unsafe_ptr=0;
  uint64_t __t2954t__buf__unsafe_size=0;
  uint32_t __t2954t__buf__unsafe_offset=0;
  uint32_t __t2954t__buf__unsafe_align=0;
  uint64_t __t2954t__pos=0;
  char* __t2955t__buf__unsafe_ptr=0;
  uint64_t __t2955t__buf__unsafe_size=0;
  uint32_t __t2955t__buf__unsafe_offset=0;
  uint32_t __t2955t__buf__unsafe_align=0;
  uint64_t __t2955t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2956t__unsafe_ptr=0;
  uint64_t __t2956t__dat__pos=0;
  uint64_t __t2956t__dat__length=0;
  char __t2956t__dat__first=0;
  char* __t2957t____t1252t__unsafe_ptr=0;
  uint64_t __t2957t____t1252t__unsafe_size=0;
  uint32_t __t2957t____t1252t__unsafe_offset=0;
  uint32_t __t2957t____t1252t__unsafe_align=0;
  uint64_t __t2957t____t1253t=0;
  uint64_t __t2959t=0;
  uint64_t __t2960t__=0;
  char* __t2961t__unsafe_ptr=0;
  uint64_t __t2961t__dat__pos=0;
  uint64_t __t2961t__dat__length=0;
  char __t2961t__dat__first=0;
  char __t2962t__=0;
  char __t2963t__=0;
  char __t2964t=0;
  uint64_t __t2965t__=0;
  char __t2966t__=0;
  char __t2967t=0;
  uint64_t __t2968t__=0;
  char* __t2970t__unsafe_ptr=0;
  uint64_t __t2970t__dat__pos=0;
  uint64_t __t2970t__dat__length=0;
  char __t2970t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2971t__=0;
  uint64_t __t2972t__=0;
  uint64_t __t2973t__=0;
  char* __t2974t__buf__unsafe_ptr=0;
  uint64_t __t2974t__buf__unsafe_size=0;
  uint32_t __t2974t__buf__unsafe_offset=0;
  uint32_t __t2974t__buf__unsafe_align=0;
  uint64_t __t2974t__pos=0;
  char* __t2975t____t1255t__unsafe_ptr=0;
  uint64_t __t2975t____t1255t__unsafe_size=0;
  uint32_t __t2975t____t1255t__unsafe_offset=0;
  uint32_t __t2975t____t1255t__unsafe_align=0;
  uint64_t __t2975t____t1256t=0;
  char* __t2976t__buf__unsafe_ptr=0;
  uint64_t __t2976t__buf__unsafe_size=0;
  uint32_t __t2976t__buf__unsafe_offset=0;
  uint32_t __t2976t__buf__unsafe_align=0;
  uint64_t __t2976t__pos=0;
  char* __t2977t__buf__unsafe_ptr=0;
  uint64_t __t2977t__buf__unsafe_size=0;
  uint32_t __t2977t__buf__unsafe_offset=0;
  uint32_t __t2977t__buf__unsafe_align=0;
  uint64_t __t2977t__pos=0;
  char* __t2978t__unsafe_ptr=0;
  uint64_t __t2978t__dat__pos=0;
  uint64_t __t2978t__dat__length=0;
  char __t2978t__dat__first=0;
  char* __t2979t__unsafe_ptr=0;
  uint64_t __t2979t__dat__pos=0;
  uint64_t __t2979t__dat__length=0;
  char __t2979t__dat__first=0;
  char __t2980t=0;
  char* __t2981t____t1252t__unsafe_ptr=0;
  uint64_t __t2981t____t1252t__unsafe_size=0;
  uint32_t __t2981t____t1252t__unsafe_offset=0;
  uint32_t __t2981t____t1252t__unsafe_align=0;
  uint64_t __t2981t____t1253t=0;
  uint64_t __t2983t=0;
  uint64_t __t2984t__=0;
  char* __t2985t__unsafe_ptr=0;
  uint64_t __t2985t__dat__pos=0;
  uint64_t __t2985t__dat__length=0;
  char __t2985t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1695t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2942t__unsafe_ptr,&__t2942t__dat__pos,&__t2942t__dat__length,&__t2942t__dat__first);
  s1__unsafe_ptr=__t2942t__unsafe_ptr;
  s1__dat__pos=__t2942t__dat__pos;
  s1__dat__length=__t2942t__dat__length;
  s1__dat__first=__t2942t__dat__first;
  str__t1695t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2943t__unsafe_ptr,&__t2943t__dat__pos,&__t2943t__dat__length,&__t2943t__dat__first);
  s2__unsafe_ptr=__t2943t__unsafe_ptr;
  s2__dat__pos=__t2943t__dat__pos;
  s2__dat__length=__t2943t__dat__length;
  s2__dat__first=__t2943t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2944t__);
  if(__t2944t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2945t__);
  eq__t134t(CHARS__pos,__t2945t__,&__t2946t__);
  __t2947t=__t2946t__;
  }
  if(__t2947t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2948t__);
  lt__t302t(__t2948t__,CHARS__buf__unsafe_size,&__t2949t__);
  __t2950t=__t2949t__;
  }
  if(__t2950t){
  len__t1728t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2951t__);
  __t_errcode=alloc__t1324t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2951t__,&__t2952t__buf__unsafe_ptr,&__t2952t__buf__unsafe_size,&__t2952t__buf__unsafe_offset,&__t2952t__buf__unsafe_align,&__t2952t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1254t(__t2952t__buf__unsafe_ptr,__t2952t__buf__unsafe_size,__t2952t__buf__unsafe_offset,__t2952t__buf__unsafe_align,__t2952t__pos,&__t2953t____t1255t__unsafe_ptr,&__t2953t____t1255t__unsafe_size,&__t2953t____t1255t__unsafe_offset,&__t2953t____t1255t__unsafe_align,&__t2953t____t1256t);
  arena__t1242t(&__t2953t____t1255t__unsafe_ptr,&__t2953t____t1255t__unsafe_size,&__t2953t____t1255t__unsafe_offset,&__t2953t____t1255t__unsafe_align,__t2953t____t1256t,&__t2954t__buf__unsafe_ptr,&__t2954t__buf__unsafe_size,&__t2954t__buf__unsafe_offset,&__t2954t__buf__unsafe_align,&__t2954t__pos);
  __t2955t__buf__unsafe_ptr=__t2954t__buf__unsafe_ptr;
  __t2955t__buf__unsafe_size=__t2954t__buf__unsafe_size;
  __t2955t__buf__unsafe_offset=__t2954t__buf__unsafe_offset;
  __t2955t__buf__unsafe_align=__t2954t__buf__unsafe_align;
  __t2955t__pos=__t2954t__pos;
  surface__buf__unsafe_ptr=__t2955t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2955t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2955t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2955t__buf__unsafe_align;
  surface__pos=__t2955t__pos;
  __t_errcode=copy__t1787t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2956t__unsafe_ptr,&__t2956t__dat__pos,&__t2956t__dat__length,&__t2956t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1251t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2957t____t1252t__unsafe_ptr,&__t2957t____t1252t__unsafe_size,&__t2957t____t1252t__unsafe_offset,&__t2957t____t1252t__unsafe_align,&__t2957t____t1253t);
  __t2959t=0;
  add__t188t(s1__dat__pos,__t2959t,&__t2960t__);
  __t_errcode=str__t1714t(__t2957t____t1252t__unsafe_ptr,__t2957t____t1252t__unsafe_size,__t2957t____t1252t__unsafe_offset,__t2957t____t1252t__unsafe_align,__t2957t____t1253t,__t2960t__,&__t2961t__unsafe_ptr,&__t2961t__dat__pos,&__t2961t__dat__length,&__t2961t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2962t__);
  if(__t2962t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2963t__);
  __t2964t=__t2963t__;
  }
  if(__t2964t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2965t__);
  eq__t134t(s2__dat__pos,__t2965t__,&__t2966t__);
  __t2967t=__t2966t__;
  }
  if(__t2967t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2968t__);
  __t_errcode=str__t1714t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2968t__,s1__dat__pos,&__t2970t__unsafe_ptr,&__t2970t__dat__pos,&__t2970t__dat__length,&__t2970t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2961t__unsafe_ptr=__t2970t__unsafe_ptr;
  __t2961t__dat__pos=__t2970t__dat__pos;
  __t2961t__dat__length=__t2970t__dat__length;
  __t2961t__dat__first=__t2970t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1728t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2971t__);
  len__t1728t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2972t__);
  add__t188t(__t2971t__,__t2972t__,&__t2973t__);
  __t_errcode=alloc__t1324t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2973t__,&__t2974t__buf__unsafe_ptr,&__t2974t__buf__unsafe_size,&__t2974t__buf__unsafe_offset,&__t2974t__buf__unsafe_align,&__t2974t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1254t(__t2974t__buf__unsafe_ptr,__t2974t__buf__unsafe_size,__t2974t__buf__unsafe_offset,__t2974t__buf__unsafe_align,__t2974t__pos,&__t2975t____t1255t__unsafe_ptr,&__t2975t____t1255t__unsafe_size,&__t2975t____t1255t__unsafe_offset,&__t2975t____t1255t__unsafe_align,&__t2975t____t1256t);
  arena__t1242t(&__t2975t____t1255t__unsafe_ptr,&__t2975t____t1255t__unsafe_size,&__t2975t____t1255t__unsafe_offset,&__t2975t____t1255t__unsafe_align,__t2975t____t1256t,&__t2976t__buf__unsafe_ptr,&__t2976t__buf__unsafe_size,&__t2976t__buf__unsafe_offset,&__t2976t__buf__unsafe_align,&__t2976t__pos);
  __t2977t__buf__unsafe_ptr=__t2976t__buf__unsafe_ptr;
  __t2977t__buf__unsafe_size=__t2976t__buf__unsafe_size;
  __t2977t__buf__unsafe_offset=__t2976t__buf__unsafe_offset;
  __t2977t__buf__unsafe_align=__t2976t__buf__unsafe_align;
  __t2977t__pos=__t2976t__pos;
  surface__buf__unsafe_ptr=__t2977t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2977t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2977t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2977t__buf__unsafe_align;
  surface__pos=__t2977t__pos;
  __t_errcode=copy__t1787t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2978t__unsafe_ptr,&__t2978t__dat__pos,&__t2978t__dat__length,&__t2978t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1787t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2979t__unsafe_ptr,&__t2979t__dat__pos,&__t2979t__dat__length,&__t2979t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1251t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2981t____t1252t__unsafe_ptr,&__t2981t____t1252t__unsafe_size,&__t2981t____t1252t__unsafe_offset,&__t2981t____t1252t__unsafe_align,&__t2981t____t1253t);
  __t2983t=0;
  add__t188t(prev_pos,__t2983t,&__t2984t__);
  __t_complain=str__t1714t(__t2981t____t1252t__unsafe_ptr,__t2981t____t1252t__unsafe_size,__t2981t____t1252t__unsafe_offset,__t2981t____t1252t__unsafe_align,__t2981t____t1253t,__t2984t__,&__t2985t__unsafe_ptr,&__t2985t__dat__pos,&__t2985t__dat__length,&__t2985t__dat__first);
  __t2980t=__t_complain;
  if(__t_complain){
  goto __t2980t__label;
  }
  ret__unsafe_ptr=__t2985t__unsafe_ptr;
  ret__dat__pos=__t2985t__dat__pos;
  ret__dat__length=__t2985t__dat__length;
  ret__dat__first=__t2985t__dat__first;
  __t2980t__label:__t2980t=__t2980t==0;
  __t2961t__unsafe_ptr=ret__unsafe_ptr;
  __t2961t__dat__pos=ret__dat__pos;
  __t2961t__dat__length=ret__dat__length;
  __t2961t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6018t=CHARS__buf__unsafe_ptr;
  *__t6019t=CHARS__buf__unsafe_size;
  *__t6020t=CHARS__buf__unsafe_offset;
  *__t6021t=CHARS__buf__unsafe_align;
  *__t6022t=CHARS__pos;
  *__t6023t=__t2961t__unsafe_ptr;
  *__t6024t=__t2961t__dat__pos;
  *__t6025t=__t2961t__dat__length;
  *__t6026t=__t2961t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1930t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t6027t) {
  int __t1931t=0;
  char __t1932t__=0;
  uint64_t __t1933t__=0;
  char* __t1934t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,s__dat__length,&__t1932t__);
  if(__t1932t__){
  __t_errcode=22;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t1933t__);
  add__t846t(s__unsafe_ptr,__t1933t__,&__t1934t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6027t=__t1934t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1956t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t6028t, uint64_t* __t6029t, uint64_t* __t6030t, char* __t6031t) {
  char* __t1957t__unsafe_ptr=0;
  uint64_t __t1957t__dat__pos=0;
  uint64_t __t1957t__dat__length=0;
  char __t1957t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1958t__=0;
  char* __t1959t__unsafe_ptr=0;
  uint64_t __t1959t__dat__pos=0;
  uint64_t __t1959t__dat__length=0;
  char __t1959t__dat__first=0;
  char __t1960t__=0;
  char __t1961t__=0;
  char __t1962t=0;
  char __t1963t__=0;
  uint64_t __t1965t__=0;
  uint64_t new_length=0;
  uint64_t __t1966t=0;
  char __t1967t__=0;
  char new_first=0;
  char* __t1969t__=0;
  char __t1970t__value=0;
  uint64_t __t1971t__=0;
  char* __t1972t__unsafe_ptr=0;
  uint64_t __t1972t__dat__pos=0;
  uint64_t __t1972t__dat__length=0;
  char __t1972t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1695t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1957t__unsafe_ptr,&__t1957t__dat__pos,&__t1957t__dat__length,&__t1957t__dat__first);
  s__unsafe_ptr=__t1957t__unsafe_ptr;
  s__dat__pos=__t1957t__dat__pos;
  s__dat__length=__t1957t__dat__length;
  s__dat__first=__t1957t__dat__first;
  eq__t134t(from,to,&__t1958t__);
  if(__t1958t__){
  str__t1718t(__t463t,&__t1959t__unsafe_ptr,&__t1959t__dat__pos,&__t1959t__dat__length,&__t1959t__dat__first);
  goto __t_return;
  }
  gt__t326t(from,to,&__t1960t__);
  if(!__t1960t__){
  gt__t326t(to,s__dat__length,&__t1961t__);
  __t1962t=__t1961t__;
  }
  else{
  __t1962t=0;
  not__t42t(__t1962t,&__t1963t__);
  __t1962t=__t1963t__;
  }
  if(__t1962t){
  __t_errcode=29;
  goto __t_failure;
  }
  sub__t410t(to,from,&__t1965t__);
  new_length=__t1965t__;
  __t1966t=0;
  neq__t158t(from,__t1966t,&__t1967t__);
  if(__t1967t__){
  __t_errcode=get__t1930t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1969t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1969t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1970t__value,__t1969t__,1);
  new_first=__t1970t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1971t__);
  str__t1658t(s__unsafe_ptr,__t1971t__,new_length,new_first,&__t1972t__unsafe_ptr,&__t1972t__dat__pos,&__t1972t__dat__length,&__t1972t__dat__first);
  __t1959t__unsafe_ptr=__t1972t__unsafe_ptr;
  __t1959t__dat__pos=__t1972t__dat__pos;
  __t1959t__dat__length=__t1972t__dat__length;
  __t1959t__dat__first=__t1972t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6028t=__t1959t__unsafe_ptr;
  *__t6029t=__t1959t__dat__pos;
  *__t6030t=__t1959t__dat__length;
  *__t6031t=__t1959t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t2035t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t6032t) {
  char* __t2036t__unsafe_ptr=0;
  uint64_t __t2036t__dat__pos=0;
  uint64_t __t2036t__dat__length=0;
  char __t2036t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2037t__unsafe_ptr=0;
  uint64_t __t2037t__dat__pos=0;
  uint64_t __t2037t__dat__length=0;
  char __t2037t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t2038t=0;
  uint64_t __t2039t__=0;
  uint64_t d=0;
  char __t2040t__=0;
  char __t2041t=0;
  char* __t2042t__unsafe_ptr=0;
  uint64_t __t2042t__dat__pos=0;
  uint64_t __t2042t__dat__length=0;
  char __t2042t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t2043t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1695t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2036t__unsafe_ptr,&__t2036t__dat__pos,&__t2036t__dat__length,&__t2036t__dat__first);
  stack__unsafe_ptr=__t2036t__unsafe_ptr;
  stack__dat__pos=__t2036t__dat__pos;
  stack__dat__length=__t2036t__dat__length;
  stack__dat__first=__t2036t__dat__first;
  str__t1718t(_needle,&__t2037t__unsafe_ptr,&__t2037t__dat__pos,&__t2037t__dat__length,&__t2037t__dat__first);
  needle__unsafe_ptr=__t2037t__unsafe_ptr;
  needle__dat__pos=__t2037t__dat__pos;
  needle__dat__length=__t2037t__dat__length;
  needle__dat__first=__t2037t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t402t(n,needle__dat__length,&__t2039t__);
  __t2038t=__t_complain;
  if(__t_complain){
  goto __t2038t__label;
  }
  d=__t2039t__;
  __t2038t__label:__t2038t=__t2038t==0;
  not__t42t(__t2038t,&__t2040t__);
  if(__t2040t__){
  __t2041t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1956t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t2042t__unsafe_ptr,&__t2042t__dat__pos,&__t2042t__dat__length,&__t2042t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t2042t__unsafe_ptr;
  ret__dat__pos=__t2042t__dat__pos;
  ret__dat__length=__t2042t__dat__length;
  ret__dat__first=__t2042t__dat__first;
  eq__t1860t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2043t__);
  __t2041t=__t2043t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6032t=__t2041t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t779t(uint64_t to, uint64_t* __t6033t, uint64_t* __t6034t) {
  uint64_t __t780t=0;
  uint64_t from=0;
  __t780t=0;
  from=__t780t;
  goto __t_return;
  __t_return:
  *__t6033t=from;
  *__t6034t=to;
}

static inline __attribute__((always_inline)) void range__t796t(uint64_t _from, uint64_t to, uint64_t* __t6035t, uint64_t* __t6036t) {
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
  *__t6035t=from;
  *__t6036t=to;
}

static inline __attribute__((always_inline)) int mutget__t801t(uint64_t* __t6037t, uint64_t r__to, uint64_t skipped, uint64_t* __t6038t) {
  uint64_t r__from=*__t6037t;
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
  *__t6037t=r__from;
  *__t6038t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2121t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t6039t) {
  char* __t2122t__unsafe_ptr=0;
  uint64_t __t2122t__dat__pos=0;
  uint64_t __t2122t__dat__length=0;
  char __t2122t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2123t__unsafe_ptr=0;
  uint64_t __t2123t__dat__pos=0;
  uint64_t __t2123t__dat__length=0;
  char __t2123t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t2124t=0;
  uint64_t __t2125t__=0;
  uint64_t n=0;
  char __t2126t__=0;
  char __t2127t=0;
  uint64_t __t2128t=0;
  uint64_t __t2129t__from=0;
  uint64_t __t2129t__to=0;
  uint64_t __t2130t__from=0;
  uint64_t __t2130t__to=0;
  char __t2131t=0;
  uint64_t __t2132t__=0;
  uint64_t i=0;
  char __t2133t=0;
  uint64_t __t2134t__=0;
  char* __t2135t__unsafe_ptr=0;
  uint64_t __t2135t__dat__pos=0;
  uint64_t __t2135t__dat__length=0;
  char __t2135t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t2136t__=0;
  char __t2137t=0;
  char __t2138t=0;
  int __t_complain=0;
  str__t1695t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2122t__unsafe_ptr,&__t2122t__dat__pos,&__t2122t__dat__length,&__t2122t__dat__first);
  stack__unsafe_ptr=__t2122t__unsafe_ptr;
  stack__dat__pos=__t2122t__dat__pos;
  stack__dat__length=__t2122t__dat__length;
  stack__dat__first=__t2122t__dat__first;
  str__t1718t(_needle,&__t2123t__unsafe_ptr,&__t2123t__dat__pos,&__t2123t__dat__length,&__t2123t__dat__first);
  needle__unsafe_ptr=__t2123t__unsafe_ptr;
  needle__dat__pos=__t2123t__dat__pos;
  needle__dat__length=__t2123t__dat__length;
  needle__dat__first=__t2123t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t402t(stack__dat__length,d,&__t2125t__);
  __t2124t=__t_complain;
  if(__t_complain){
  goto __t2124t__label;
  }
  n=__t2125t__;
  __t2124t__label:__t2124t=__t2124t==0;
  not__t42t(__t2124t,&__t2126t__);
  if(__t2126t__){
  __t2127t=0;
  goto __t_return;
  }
  of__t779t(n,&__t2129t__from,&__t2129t__to);
  range__t796t(__t2129t__from,__t2129t__to,&__t2130t__from,&__t2130t__to);
  __t2128t=0-1;
  while(1){
  __t2128t=__t2128t+1;
  __t_complain=mutget__t801t(&__t2130t__from,__t2130t__to,__t2128t,&__t2132t__);
  __t2131t=__t_complain;
  if(__t_complain){
  goto __t2131t__label;
  }
  i=__t2132t__;
  __t2131t__label:__t2131t=__t2131t==0;
  if(!__t2131t){
  break;
  }
  add__t188t(i,d,&__t2134t__);
  __t_complain=slice__t1956t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t2134t__,&__t2135t__unsafe_ptr,&__t2135t__dat__pos,&__t2135t__dat__length,&__t2135t__dat__first);
  __t2133t=__t_complain;
  if(__t_complain){
  goto __t2133t__label;
  }
  sliced__unsafe_ptr=__t2135t__unsafe_ptr;
  sliced__dat__pos=__t2135t__dat__pos;
  sliced__dat__length=__t2135t__dat__length;
  sliced__dat__first=__t2135t__dat__first;
  __t2133t__label:__t2133t=__t2133t==0;
  eq__t1860t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2136t__);
  if(__t2136t__){
  __t2137t=1;
  __t2127t=__t2137t;
  goto __t_return;
  }
  }
  __t2138t=0;
  __t2127t=__t2138t;
  goto __t_return;
  __t_return:
  *__t6039t=__t2127t;
}

static inline __attribute__((always_inline)) void restore_stdout__t5557t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void stdout_to_err__t5558t(int64_t* __t6040t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t6040t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t1924t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1925t=0;
  const char* endl=0;
  endl=__t475t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void popen__t4596t(const char* cmd, char** __t6041t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t6041t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4595t(char* unsafe_ptr, int64_t* __t6042t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t6042t=status;
}

static inline __attribute__((always_inline)) void int__t658t(uint64_t x, int64_t* __t6043t) {
  int __t659t=0;
  int __t660t=0;
  int __t661t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t6043t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t6044t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t6044t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t6045t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6045t=z;
}

static inline __attribute__((always_inline)) int open__t4597t(const char* cmd, char** __t6046t) {
  char* __t4598t__=0;
  char* unsafe_ptr=0;
  char __t4599t__=0;
  char __t4600t__=0;
  char __t4601t__=0;
  int64_t __t4602t__=0;
  int64_t status=0;
  uint64_t __t4603t=0;
  int64_t __t4604t__=0;
  char __t4605t__=0;
  char __t4606t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4596t(cmd,&__t4598t__);
  unsafe_ptr=__t4598t__;
  exists__t683t(unsafe_ptr,&__t4599t__);
  not__t42t(__t4599t__,&__t4600t__);
  if(__t4600t__){
  __t_errcode=47;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t683t(unsafe_ptr,&__t4601t__);
  if(__t4601t__){
  pclose__t4595t(unsafe_ptr,&__t4602t__);
  status=__t4602t__;
  unsafe_ptr=0;
  __t4603t=0;
  int__t658t(__t4603t,&__t4604t__);
  neq__t147t(status,__t4604t__,&__t4605t__);
  if(__t4605t__){
  __t_complain=48;
  goto __t4606t__label;
  __t4606t__label:__t4606t=__t4606t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t6046t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4608t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t6047t) {
  const char* __t4609t__cstr=0;
  char* __t4609t__str__unsafe_ptr=0;
  uint64_t __t4609t__str__dat__pos=0;
  uint64_t __t4609t__str__dat__length=0;
  char __t4609t__str__dat__first=0;
  const char* __t4611t__=0;
  char* __t4612t__unsafe_ptr=0;
  char __t4613t____t4601t__=0;
  int64_t __t4613t____t4602t__=0;
  int64_t __t4613t__status=0;
  uint64_t __t4613t____t4603t=0;
  int64_t __t4613t____t4604t__=0;
  char __t4613t____t4605t__=0;
  char __t4613t____t4606t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1843t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4609t__cstr,&__t4609t__str__unsafe_ptr,&__t4609t__str__dat__pos,&__t4609t__str__dat__length,&__t4609t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1853t(__t4609t__cstr,__t4609t__str__unsafe_ptr,__t4609t__str__dat__pos,__t4609t__str__dat__length,__t4609t__str__dat__first,&__t4611t__);
  __t_errcode=open__t4597t(__t4611t__,&__t4612t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t683t(__t4612t__unsafe_ptr,&__t4613t____t4601t__);
  if(__t4613t____t4601t__){
  pclose__t4595t(__t4612t__unsafe_ptr,&__t4613t____t4602t__);
  __t4613t__status=__t4613t____t4602t__;
  __t4612t__unsafe_ptr=0;
  __t4613t____t4603t=0;
  int__t658t(__t4613t____t4603t,&__t4613t____t4604t__);
  neq__t147t(__t4613t__status,__t4613t____t4604t__,&__t4613t____t4605t__);
  if(__t4613t____t4605t__){
  __t_complain=48;
  goto __t4606t__label;
  __t4606t__label:__t4613t____t4606t=__t4613t____t4606t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t6047t=__t4612t__unsafe_ptr;
  
  __t_skip_returns:free__t844t(&__t4609t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4288t(int64_t value, char* __t6048t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t6048t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4287t(int64_t value, const char** __t6049t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t6049t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t6050t) {
  const char* value=0;
  *__t6050t=value;
}

int run__t5486t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t6051t) {
  char* __t5487t__unsafe_ptr=0;
  char __t5488t____t4613t____t4601t__=0;
  int64_t __t5488t____t4613t____t4602t__=0;
  int64_t __t5488t____t4613t__status=0;
  uint64_t __t5488t____t4613t____t4603t=0;
  int64_t __t5488t____t4613t____t4604t__=0;
  char __t5488t____t4613t____t4605t__=0;
  char __t5488t____t4613t____t4606t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t5489t=0;
  int64_t error=0;
  char __t5490t__=0;
  char __t5491t__=0;
  const char* __t5492t__=0;
  const char* __t5493t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4608t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5487t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t5487t__unsafe_ptr;
  exists__t683t(__t5487t__unsafe_ptr,&__t5488t____t4613t____t4601t__);
  if(__t5488t____t4613t____t4601t__){
  pclose__t4595t(__t5487t__unsafe_ptr,&__t5488t____t4613t____t4602t__);
  __t5488t____t4613t__status=__t5488t____t4613t____t4602t__;
  __t5487t__unsafe_ptr=0;
  __t5488t____t4613t____t4603t=0;
  int__t658t(__t5488t____t4613t____t4603t,&__t5488t____t4613t____t4604t__);
  neq__t147t(__t5488t____t4613t__status,__t5488t____t4613t____t4604t__,&__t5488t____t4613t____t4605t__);
  if(__t5488t____t4613t____t4605t__){
  __t_complain=48;
  goto __t4606t__label;
  __t4606t__label:__t5488t____t4613t____t4606t=__t5488t____t4613t____t4606t==0;
  }
  }
  __t5489t=__t_complain;
  error=__t5489t;
  ok__t4288t(error,&__t5490t__);
  not__t42t(__t5490t__,&__t5491t__);
  if(__t5491t__){
  cstr__t4287t(error,&__t5492t__);
  goto __t_return;
  }
  cstr__t1t(&__t5493t__);
  __t5492t__=__t5493t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6051t=__t5492t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t6052t) {
  int value=0;
  *__t6052t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t6053t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t6053t=__t54t__;
}

static inline __attribute__((always_inline)) void exists__t1656t(const char* c, char* __t6054t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t6054t=z;
}

static inline __attribute__((always_inline)) void nn__t462t(const char* value, const char** __t6055t, const char** __t6056t) {
  const char* __t464t=0;
  __t464t=__t463t;
  goto __t_return;
  __t_return:
  *__t6055t=value;
  *__t6056t=__t464t;
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

static inline __attribute__((always_inline)) void print_marker__t5522t(char colors__initialized) {
  const char* __t5524t__value=0;
  const char* __t5524t____t464t=0;
  int __t5526t=0;
  char __t5527t=0;
  char __t5528t=0;
  const char* __t5533t__value=0;
  const char* __t5533t____t464t=0;
  int __t5535t=0;
  const char* __t5538t__value=0;
  const char* __t5538t____t464t=0;
  nn__t462t(__t4308t,&__t5524t__value,&__t5524t____t464t);
  print__t471t(__t5524t__value,__t5524t____t464t);
  __t5528t=1;
  if(__t5529t!=__t5529t){
  __t5528t=0;
  }
  if(__t5528t){
  __t5527t=1;
  }
  if(__t5527t){
  set__t507t(colors__initialized);
  nn__t462t(__t5532t,&__t5533t__value,&__t5533t____t464t);
  print__t471t(__t5533t__value,__t5533t____t464t);
  }
  set__t627t(colors__initialized);
  nn__t462t(__t5519t,&__t5538t__value,&__t5538t____t464t);
  print__t471t(__t5538t__value,__t5538t____t464t);
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

static inline __attribute__((always_inline)) void print_marker__t5503t(char colors__initialized) {
  const char* __t5505t__value=0;
  const char* __t5505t____t464t=0;
  char __t5507t=0;
  char __t5508t=0;
  const char* __t5513t__value=0;
  const char* __t5513t____t464t=0;
  int __t5515t=0;
  int __t5516t=0;
  const char* __t5520t__value=0;
  const char* __t5520t____t464t=0;
  nn__t462t(__t4308t,&__t5505t__value,&__t5505t____t464t);
  print__t471t(__t5505t__value,__t5505t____t464t);
  __t5508t=1;
  if(__t5509t!=__t5509t){
  __t5508t=0;
  }
  if(__t5508t){
  __t5507t=1;
  }
  if(__t5507t){
  set__t511t(colors__initialized);
  nn__t462t(__t5512t,&__t5513t__value,&__t5513t____t464t);
  print__t471t(__t5513t__value,__t5513t____t464t);
  }
  set__t627t(colors__initialized);
  nn__t462t(__t5519t,&__t5520t__value,&__t5520t____t464t);
  print__t471t(__t5520t__value,__t5520t____t464t);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int test__t5640t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t6057t) {
  int64_t __t5642t__=0;
  const char* __t5645t__=0;
  const char* __t5646t=0;
  const char* error=0;
  int __t5647t=0;
  int __t5648t__=0;
  char __t5649t__=0;
  const char* __t5650t__=0;
  const char* __t5652t__value=0;
  const char* __t5652t____t464t=0;
  char __t5654t__=0;
  char __t5658t=0;
  char __t5663t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5558t(&__t5642t__);
  print__t1924t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t5486t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5645t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5646t=__t5645t__;
  error=__t5646t;
  not__t53t(__t5647t,&__t5648t__);
  if(should_fail){
  exists__t1656t(error,&__t5649t__);
  if(__t5649t__){
  cstr__t1t(&__t5650t__);
  error=__t5650t__;
  }
  else{
  error=__t5651t;
  }
  }
  nn__t462t(__t5570t,&__t5652t__value,&__t5652t____t464t);
  print__t471t(__t5652t__value,__t5652t____t464t);
  exists__t1656t(error,&__t5654t__);
  if(__t5654t__){
  print_marker__t5522t(colors__initialized);
  print__t473t(error);
  __t5658t=0;
  goto __t_return;
  }
  print_marker__t5503t(colors__initialized);
  print__t473t(__t5661t);
  __t5663t=1;
  __t5658t=__t5663t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6057t=__t5658t;
  
  __t_skip_returns:restore_stdout__t5557t(__t5642t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t484t(uint64_t value, const char* endl) {
  int __t485t=0;
  printf("%llu%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void nn__t469t(uint64_t value, uint64_t* __t6058t, const char** __t6059t) {
  const char* __t470t=0;
  __t470t=__t463t;
  goto __t_return;
  __t_return:
  *__t6058t=value;
  *__t6059t=__t470t;
}

static inline __attribute__((always_inline)) int _main__t5702t() {
  char* __t5704t__unsafe_ptr=0;
  uint64_t __t5704t__dat__pos=0;
  uint64_t __t5704t__dat__length=0;
  char __t5704t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5705t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5707t=0;
  char* __t5708t__unsafe_ptr=0;
  uint64_t __t5708t__unsafe_size=0;
  uint32_t __t5708t__unsafe_offset=0;
  uint32_t __t5708t__unsafe_align=0;
  char* __t5710t__buf__unsafe_ptr=0;
  uint64_t __t5710t__buf__unsafe_size=0;
  uint32_t __t5710t__buf__unsafe_offset=0;
  uint32_t __t5710t__buf__unsafe_align=0;
  uint64_t __t5710t__pos=0;
  char* __t5711t__buf__unsafe_ptr=0;
  uint64_t __t5711t__buf__unsafe_size=0;
  uint32_t __t5711t__buf__unsafe_offset=0;
  uint32_t __t5711t__buf__unsafe_align=0;
  uint64_t __t5711t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char __t5712t=0;
  char* __t5714t__unsafe_ptr=0;
  uint64_t __t5714t__dat__pos=0;
  uint64_t __t5714t__dat__length=0;
  char __t5714t__dat__first=0;
  char* preferred_backend__unsafe_ptr=0;
  uint64_t preferred_backend__dat__pos=0;
  uint64_t preferred_backend__dat__length=0;
  char preferred_backend__dat__first=0;
  int __t5723t=0;
  char* __t5725t__unsafe_ptr=0;
  uint64_t __t5725t__dat__pos=0;
  uint64_t __t5725t__dat__length=0;
  char __t5725t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  char* __t5716t__unsafe_ptr=0;
  uint64_t __t5716t__dat__pos=0;
  uint64_t __t5716t__dat__length=0;
  char __t5716t__dat__first=0;
  char* __t5718t__unsafe_ptr=0;
  uint64_t __t5718t__dat__pos=0;
  uint64_t __t5718t__dat__length=0;
  char __t5718t__dat__first=0;
  uint64_t __t5726t=0;
  uint64_t __t5727t=0;
  uint64_t counter=0;
  uint64_t __t5728t=0;
  uint64_t __t5729t=0;
  uint64_t failures=0;
  uint64_t __t5730t=0;
  char* __t5731t__unsafe_ptr=0;
  char __t5733t=0;
  char* __t5734t__unsafe_ptr=0;
  uint64_t __t5734t__dat__pos=0;
  uint64_t __t5734t__dat__length=0;
  char __t5734t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5736t__=0;
  char __t5737t__=0;
  char __t5738t__=0;
  char __t5739t=0;
  char __t5740t__=0;
  uint64_t __t5741t__=0;
  uint64_t __t5742t____t5699t=0;
  uint64_t __t5742t____t5701t__=0;
  char* __t5743t__unsafe_ptr=0;
  uint64_t __t5743t__dat__pos=0;
  uint64_t __t5743t__dat__length=0;
  char __t5743t__dat__first=0;
  char* __t5745t__unsafe_ptr=0;
  uint64_t __t5745t__dat__pos=0;
  uint64_t __t5745t__dat__length=0;
  char __t5745t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5746t=0;
  char* __t5747t__unsafe_ptr=0;
  char __t5749t=0;
  char* __t5750t__unsafe_ptr=0;
  uint64_t __t5750t__dat__pos=0;
  uint64_t __t5750t__dat__length=0;
  char __t5750t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5752t__=0;
  char __t5753t__=0;
  uint64_t __t5754t__=0;
  uint64_t __t5755t____t5699t=0;
  uint64_t __t5755t____t5701t__=0;
  uint64_t __t5756t=0;
  uint64_t __t5757t__=0;
  char __t5759t__=0;
  char should_fail=0;
  char* __t5760t__unsafe_ptr=0;
  uint64_t __t5760t__dat__pos=0;
  uint64_t __t5760t__dat__length=0;
  char __t5760t__dat__first=0;
  char* __t5761t__unsafe_ptr=0;
  uint64_t __t5761t__dat__pos=0;
  uint64_t __t5761t__dat__length=0;
  char __t5761t__dat__first=0;
  char __t5762t__=0;
  char __t5763t__=0;
  uint64_t __t5764t=0;
  uint64_t __t5765t__=0;
  int64_t __t5766t__=0;
  uint64_t __t5768t=0;
  char __t5769t__=0;
  const char* __t5783t__value=0;
  const char* __t5783t____t464t=0;
  const char* __t5773t__value=0;
  const char* __t5773t____t464t=0;
  const char* __t5778t__value=0;
  const char* __t5778t____t464t=0;
  uint64_t __t5789t__value=0;
  const char* __t5789t____t470t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1718t(__t5703t,&__t5704t__unsafe_ptr,&__t5704t__dat__pos,&__t5704t__dat__length,&__t5704t__dat__first);
  test_root__unsafe_ptr=__t5704t__unsafe_ptr;
  test_root__dat__pos=__t5704t__dat__pos;
  test_root__dat__length=__t5704t__dat__length;
  test_root__dat__first=__t5704t__dat__first;
  colors__t501t(&__t5705t__initialized);
  colors__initialized=__t5705t__initialized;
  __t5707t=128;
  __t_errcode=alloc__t1124t(__t5707t,&__t5708t__unsafe_ptr,&__t5708t__unsafe_size,&__t5708t__unsafe_offset,&__t5708t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1245t(&__t5708t__unsafe_ptr,&__t5708t__unsafe_size,&__t5708t__unsafe_offset,&__t5708t__unsafe_align,&__t5710t__buf__unsafe_ptr,&__t5710t__buf__unsafe_size,&__t5710t__buf__unsafe_offset,&__t5710t__buf__unsafe_align,&__t5710t__pos);
  __t5711t__buf__unsafe_ptr=__t5710t__buf__unsafe_ptr;
  __t5711t__buf__unsafe_size=__t5710t__buf__unsafe_size;
  __t5711t__buf__unsafe_offset=__t5710t__buf__unsafe_offset;
  __t5711t__buf__unsafe_align=__t5710t__buf__unsafe_align;
  __t5711t__pos=__t5710t__pos;
  CHARS__buf__unsafe_ptr=__t5711t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5711t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5711t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5711t__buf__unsafe_align;
  CHARS__pos=__t5711t__pos;
  __t_complain=arg_after__t4446t(__t5713t,&__t5714t__unsafe_ptr,&__t5714t__dat__pos,&__t5714t__dat__length,&__t5714t__dat__first);
  __t5712t=__t_complain;
  if(__t_complain){
  goto __t5712t__label;
  }
  preferred_backend__unsafe_ptr=__t5714t__unsafe_ptr;
  preferred_backend__dat__pos=__t5714t__dat__pos;
  preferred_backend__dat__length=__t5714t__dat__length;
  preferred_backend__dat__first=__t5714t__dat__first;
  __t5712t__label:__t5712t=__t5712t==0;
  if(__t5712t){
  __t_errcode=add__t3031t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5715t,preferred_backend__unsafe_ptr,preferred_backend__dat__pos,preferred_backend__dat__length,preferred_backend__dat__first,&__t5716t__unsafe_ptr,&__t5716t__dat__pos,&__t5716t__dat__length,&__t5716t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2986t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5716t__unsafe_ptr,__t5716t__dat__pos,__t5716t__dat__length,__t5716t__dat__first,__t5717t,&__t5718t__unsafe_ptr,&__t5718t__dat__pos,&__t5718t__dat__length,&__t5718t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5718t__unsafe_ptr;
  command_base__dat__pos=__t5718t__dat__pos;
  command_base__dat__length=__t5718t__dat__length;
  command_base__dat__first=__t5718t__dat__first;
  }
  else{
  __t_errcode=copy__t1792t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5724t,&__t5725t__unsafe_ptr,&__t5725t__dat__pos,&__t5725t__dat__length,&__t5725t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5725t__unsafe_ptr;
  command_base__dat__pos=__t5725t__dat__pos;
  command_base__dat__length=__t5725t__dat__length;
  command_base__dat__first=__t5725t__dat__first;
  }
  __t5726t=0;
  __t5727t=__t5726t;
  counter=__t5727t;
  __t5728t=0;
  __t5729t=__t5728t;
  failures=__t5729t;
  __t_errcode=open__t5361t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5731t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5730t=0-1;
  while(1){
  __t5730t=__t5730t+1;
  __t_complain=mutget__t5444t(&__t5731t__unsafe_ptr,__t5730t,&__t5734t__unsafe_ptr,&__t5734t__dat__pos,&__t5734t__dat__length,&__t5734t__dat__first);
  __t5733t=__t_complain;
  if(__t_complain){
  goto __t5733t__label;
  }
  path__unsafe_ptr=__t5734t__unsafe_ptr;
  path__dat__pos=__t5734t__dat__pos;
  path__dat__length=__t5734t__dat__length;
  path__dat__first=__t5734t__dat__first;
  __t5733t__label:__t5733t=__t5733t==0;
  if(!__t5733t){
  break;
  }
  eq__t1867t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5735t,&__t5736t__);
  if(!__t5736t__){
  __t_errcode=is_dir__t5288t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5737t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5737t__,&__t5738t__);
  __t5739t=__t5738t__;
  }
  else{
  __t5739t=0;
  not__t42t(__t5739t,&__t5740t__);
  __t5739t=__t5740t__;
  }
  if(__t5739t){
  continue;
  }
  reuse__t5696t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5741t__);
  __t_errcode=add__t2941t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5743t__unsafe_ptr,&__t5743t__dat__pos,&__t5743t__dat__length,&__t5743t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2986t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5743t__unsafe_ptr,__t5743t__dat__pos,__t5743t__dat__length,__t5743t__dat__first,__t5744t,&__t5745t__unsafe_ptr,&__t5745t__dat__pos,&__t5745t__dat__length,&__t5745t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5745t__unsafe_ptr;
  dir_path__dat__pos=__t5745t__dat__pos;
  dir_path__dat__length=__t5745t__dat__length;
  dir_path__dat__first=__t5745t__dat__first;
  __t_errcode=open__t5361t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5747t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5746t=0-1;
  while(1){
  __t5746t=__t5746t+1;
  __t_complain=mutget__t5444t(&__t5747t__unsafe_ptr,__t5746t,&__t5750t__unsafe_ptr,&__t5750t__dat__pos,&__t5750t__dat__length,&__t5750t__dat__first);
  __t5749t=__t_complain;
  if(__t_complain){
  goto __t5749t__label;
  }
  entry__unsafe_ptr=__t5750t__unsafe_ptr;
  entry__dat__pos=__t5750t__dat__pos;
  entry__dat__length=__t5750t__dat__length;
  entry__dat__first=__t5750t__dat__first;
  __t5749t__label:__t5749t=__t5749t==0;
  if(!__t5749t){
  break;
  }
  __t_errcode=ends_with__t2035t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5751t,&__t5752t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5752t__,&__t5753t__);
  if(__t5753t__){
  continue;
  }
  reuse__t5696t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5754t__);
  __t5756t=1;
  add__t188t(counter,__t5756t,&__t5757t__);
  counter=__t5757t__;
  contains__t2121t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5758t,&__t5759t__);
  should_fail=__t5759t__;
  __t_errcode=add__t2941t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5760t__unsafe_ptr,&__t5760t__dat__pos,&__t5760t__dat__length,&__t5760t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2941t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5760t__unsafe_ptr,__t5760t__dat__pos,__t5760t__dat__length,__t5760t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5761t__unsafe_ptr,&__t5761t__dat__pos,&__t5761t__dat__length,&__t5761t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5640t(colors__initialized,__t5761t__unsafe_ptr,__t5761t__dat__pos,__t5761t__dat__length,__t5761t__dat__first,should_fail,&__t5762t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5762t__,&__t5763t__);
  if(__t5763t__){
  __t5764t=1;
  add__t188t(failures,__t5764t,&__t5765t__);
  failures=__t5765t__;
  }
  __t5755t____t5699t=0;
  sub__t410t(__t5754t__,__t5755t____t5699t,&__t5755t____t5701t__);
  CHARS__pos=__t5755t____t5701t__;
  }
  __t5742t____t5699t=0;
  sub__t410t(__t5741t__,__t5742t____t5699t,&__t5742t____t5701t__);
  CHARS__pos=__t5742t____t5701t__;
  closedir__t5351t(__t5747t__unsafe_ptr);
  }
  stdout_to_err__t5558t(&__t5766t__);
  __t5768t=0;
  eq__t134t(failures,__t5768t,&__t5769t__);
  if(__t5769t__){
  set__t511t(colors__initialized);
  nn__t462t(__t5772t,&__t5773t__value,&__t5773t____t464t);
  print__t471t(__t5773t__value,__t5773t____t464t);
  set__t627t(colors__initialized);
  nn__t462t(__t5777t,&__t5778t__value,&__t5778t____t464t);
  print__t471t(__t5778t__value,__t5778t____t464t);
  }
  else{
  set__t507t(colors__initialized);
  nn__t462t(__t5782t,&__t5783t__value,&__t5783t____t464t);
  print__t471t(__t5783t__value,__t5783t____t464t);
  set__t627t(colors__initialized);
  print__t484t(failures,__t5787t);
  }
  nn__t469t(counter,&__t5789t__value,&__t5789t____t470t);
  print__t484t(__t5789t__value,__t5789t____t470t);
  print__t473t(__t5791t);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:restore_stdout__t5557t(__t5766t__);
  closedir__t5351t(__t5731t__unsafe_ptr);
  free__t844t(&__t5708t__unsafe_ptr);
  if(__t5705t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5793t() {
  char __t5796t=0;
  char __t5798t__=0;
  int64_t __t5799t=0;
  const char* __t5800t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t448t();
  __t_complain=_main__t5702t();
  __t5796t=__t_complain;
  if(__t_complain){
  goto __t5796t__label;
  }
  __t5796t__label:__t5796t=__t5796t==0;
  not__t42t(__t5796t,&__t5798t__);
  if(__t5798t__){
  __t5799t=__t_complain;
  cstr__t4287t(__t5799t,&__t5800t__);
  print__t473t(__t5800t__);
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
  __t_errcode=main__t5793t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}