#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5580t="completed";
const char* const __t5663t="/";
const char* const __t5710t=" tests";
const char* const __t5506t="failure";
const char* const __t5486t="success";
const char* const __t5636t=" --cleanup ";
const char* const __t4285t="[";
const char* const __t5622t="./tests/passing/";
const char* const __t5632t="--testback";
const char* const __t5701t="FAILED ";
const char* const __t5643t="./smoll --cleanup ";
const char* const __t5654t="..";
const char* const __t5543t=" |- ";
const char* const __t5677t="_fail_";
const char* const __t5489t="V";
const char* const __t452t="\n";
const char* const __t5706t=" out of ";
const char* const __t5696t="no errors across ";
const char* const __t5670t=".s";
const char* const __t5509t="X";
const char* const __t5496t="] ";
const char* const __t5691t="PASSING ";
const char* const __t5634t="./smoll --back ";
const char* const __t440t="";
const char* const __t5570t="no errors found, but the run should be failing (contains _fail_ in its name)";
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

static inline __attribute__((always_inline)) void console__t425t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1605t(char** __t5721t, uint64_t* __t5722t, uint32_t* __t5723t, uint32_t* __t5724t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5721t=unsafe_ptr;
  *__t5722t=unsafe_size;
  *__t5723t=unsafe_offset;
  *__t5724t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5725t) {
  *__t5725t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5726t) {
  int value=0;
  *__t5726t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5727t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5727t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5728t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5728t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5729t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5729t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5730t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5730t=z;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t5731t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5731t=z;
}

static inline __attribute__((always_inline)) void nat__t701t(uint32_t x, uint64_t* __t5732t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5732t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5733t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5733t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5734t) {
  *__t5734t=to;
}

static inline __attribute__((always_inline)) void add__t823t(char* allocated, uint64_t offset, char** __t5735t) {
  char* element=0;
  char* __t824t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t824t__);
  goto __t_return;
  __t_return:
  *__t5735t=__t824t__;
}

static inline __attribute__((always_inline)) int get__t1166t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5736t) {
  int __t1167t=0;
  char __t1168t__=0;
  uint64_t __t1169t__=0;
  uint64_t __t1170t__=0;
  uint64_t __t1171t__=0;
  uint64_t __t1172t__=0;
  char* __t1173t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,buffer__unsafe_size,&__t1168t__);
  if(__t1168t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t701t(buffer__unsafe_align,&__t1169t__);
  mul__t212t(i,__t1169t__,&__t1170t__);
  nat__t701t(buffer__unsafe_offset,&__t1171t__);
  add__t188t(__t1170t__,__t1171t__,&__t1172t__);
  add__t823t(buffer__unsafe_ptr,__t1172t__,&__t1173t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5736t=__t1173t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1635t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5737t, uint64_t* __t5738t, uint64_t* __t5739t, char* __t5740t) {
  goto __t_return;
  __t_return:
  *__t5737t=unsafe_ptr;
  *__t5738t=dat__pos;
  *__t5739t=dat__length;
  *__t5740t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1639t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5741t, uint64_t* __t5742t, uint64_t* __t5743t, char* __t5744t) {
  char* unsafe_ptr=0;
  uint64_t __t1640t__=0;
  uint64_t __t1641t=0;
  char __t1642t__=0;
  uint64_t __t1643t__=0;
  uint64_t __t1644t=0;
  char __t1645t__=0;
  char* __t1646t__unsafe_ptr=0;
  uint64_t __t1646t__dat__pos=0;
  uint64_t __t1646t__dat__length=0;
  char __t1646t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t701t(buf__unsafe_align,&__t1640t__);
  __t1641t=1;
  neq__t158t(__t1640t__,__t1641t,&__t1642t__);
  if(__t1642t__){
  __t_errcode=25;
  goto __t_failure;
  }
  nat__t701t(buf__unsafe_offset,&__t1643t__);
  __t1644t=0;
  neq__t158t(__t1643t__,__t1644t,&__t1645t__);
  if(__t1645t__){
  __t_errcode=26;
  goto __t_failure;
  }
  str__t1635t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1646t__unsafe_ptr,&__t1646t__dat__pos,&__t1646t__dat__length,&__t1646t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5741t=__t1646t__unsafe_ptr;
  *__t5742t=__t1646t__dat__pos;
  *__t5743t=__t1646t__dat__length;
  *__t5744t=__t1646t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1673t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5745t, uint64_t* __t5746t, uint64_t* __t5747t, char* __t5748t) {
  uint64_t __t1674t=0;
  char __t1675t__=0;
  char* __t1677t__=0;
  char __t1678t__value=0;
  char first=0;
  char* __t1679t__unsafe_ptr=0;
  uint64_t __t1679t__dat__pos=0;
  uint64_t __t1679t__dat__length=0;
  char __t1679t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1674t=0;
  neq__t158t(length,__t1674t,&__t1675t__);
  if(__t1675t__){
  __t_errcode=get__t1166t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1677t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1677t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1678t__value,__t1677t__,1);
  first=__t1678t__value;
  }
  __t_errcode=str__t1639t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1679t__unsafe_ptr,&__t1679t__dat__pos,&__t1679t__dat__length,&__t1679t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5745t=__t1679t__unsafe_ptr;
  *__t5746t=__t1679t__dat__pos;
  *__t5747t=__t1679t__dat__length;
  *__t5748t=__t1679t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1695t(const char* c, char** __t5749t, uint64_t* __t5750t, uint64_t* __t5751t, char* __t5752t) {
  char* __t1696t__unsafe_ptr=0;
  uint64_t __t1696t__unsafe_size=0;
  uint32_t __t1696t__unsafe_offset=0;
  uint32_t __t1696t__unsafe_align=0;
  char* __t1697t__unsafe_ptr=0;
  uint64_t __t1697t__unsafe_size=0;
  uint32_t __t1697t__unsafe_offset=0;
  uint32_t __t1697t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1698t__=0;
  uint64_t length=0;
  uint64_t __t1699t=0;
  uint64_t __t1700t__=0;
  char __t1701t=0;
  uint64_t __t1702t=0;
  char* __t1704t__unsafe_ptr=0;
  uint64_t __t1704t__dat__pos=0;
  uint64_t __t1704t__dat__length=0;
  char __t1704t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1605t(&__t1696t__unsafe_ptr,&__t1696t__unsafe_size,&__t1696t__unsafe_offset,&__t1696t__unsafe_align);
  __t1697t__unsafe_ptr=__t1696t__unsafe_ptr;
  __t1697t__unsafe_size=__t1696t__unsafe_size;
  __t1697t__unsafe_offset=__t1696t__unsafe_offset;
  __t1697t__unsafe_align=__t1696t__unsafe_align;
  buf__unsafe_ptr=__t1697t__unsafe_ptr;
  buf__unsafe_size=__t1697t__unsafe_size;
  buf__unsafe_offset=__t1697t__unsafe_offset;
  buf__unsafe_align=__t1697t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1698t__);
  buf__unsafe_ptr=__t1698t__;
  if(c){
  length=strlen(c);
  }
  __t1699t=1;
  add__t188t(length,__t1699t,&__t1700t__);
  buf__unsafe_size=__t1700t__;
  __t1702t=0;
  __t_complain=str__t1673t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1702t,length,&__t1704t__unsafe_ptr,&__t1704t__dat__pos,&__t1704t__dat__length,&__t1704t__dat__first);
  __t1701t=__t_complain;
  if(__t_complain){
  goto __t1701t__label;
  }
  ret__unsafe_ptr=__t1704t__unsafe_ptr;
  ret__dat__pos=__t1704t__dat__pos;
  ret__dat__length=__t1704t__dat__length;
  ret__dat__first=__t1704t__dat__first;
  __t1701t__label:__t1701t=__t1701t==0;
  goto __t_return;
  __t_return:
  *__t5749t=ret__unsafe_ptr;
  *__t5750t=ret__dat__pos;
  *__t5751t=ret__dat__length;
  *__t5752t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t477t(char* __t5753t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5753t=supports;
}

static inline __attribute__((always_inline)) void colors__t478t(char* __t5754t) {
  char __t479t__=0;
  char initialized=0;
  supports_ansi__t477t(&__t479t__);
  initialized=__t479t__;
  goto __t_return;
  __t_return:
  *__t5754t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1103t(char** __t5755t, uint64_t* __t5756t, uint32_t* __t5757t, uint32_t* __t5758t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5755t=unsafe_ptr;
  *__t5756t=unsafe_size;
  *__t5757t=unsafe_offset;
  *__t5758t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t821t(char** __t5759t) {
  char* allocated=*__t5759t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t5759t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5760t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5760t=z;
}

static inline __attribute__((always_inline)) void zero__t822t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t660t(char* x, char* __t5761t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5761t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5762t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5762t=z;
}

static inline __attribute__((always_inline)) int alloc__t805t(uint64_t bytes, char** __t5763t) {
  char* allocated=0;
  char __t806t__=0;
  char __t807t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t660t(allocated,&__t806t__);
  not__t42t(__t806t__,&__t807t__);
  if(__t807t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5763t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t946t(char** __t5764t, uint64_t* __t5765t, uint32_t* __t5766t, uint32_t* __t5767t, uint64_t size, char** __t5768t, uint64_t* __t5769t, uint32_t* __t5770t, uint32_t* __t5771t) {
  char* buffer__unsafe_ptr=*__t5764t;
  uint64_t buffer__unsafe_size=*__t5765t;
  uint32_t buffer__unsafe_offset=*__t5766t;
  uint32_t buffer__unsafe_align=*__t5767t;
  int __t947t=0;
  int __t948t=0;
  char __t950t__=0;
  uint64_t __t951t=0;
  char __t952t__=0;
  char __t953t=0;
  uint64_t __t954t=0;
  uint64_t __t955t__=0;
  uint64_t __t956t__=0;
  int __t958t=0;
  uint64_t __t959t=0;
  char __t960t__=0;
  uint64_t __t961t__=0;
  uint64_t __t962t__=0;
  uint64_t bytes=0;
  int __t963t=0;
  uint64_t __t964t=0;
  char __t965t__=0;
  char* __t966t__=0;
  int __t967t=0;
  uint64_t __t968t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t950t__);
  if(__t950t__){
  __t951t=0;
  neq__t158t(size,__t951t,&__t952t__);
  __t953t=__t952t__;
  }
  if(__t953t){
  __t954t=0;
  nat__t701t(buffer__unsafe_align,&__t955t__);
  mul__t212t(__t955t__,size,&__t956t__);
  zero__t822t(buffer__unsafe_ptr,__t954t,__t956t__);
  goto __t_return;
  }
  __t959t=0;
  neq__t158t(buffer__unsafe_size,__t959t,&__t960t__);
  if(__t960t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t701t(buffer__unsafe_align,&__t961t__);
  mul__t212t(__t961t__,size,&__t962t__);
  bytes=__t962t__;
  __t964t=0;
  eq__t134t(bytes,__t964t,&__t965t__);
  if(__t965t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t805t(bytes,&__t966t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t968t=0;
  zero__t822t(__t966t__,__t968t,bytes);
  buffer__unsafe_ptr=__t966t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t821t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5764t=buffer__unsafe_ptr;
  *__t5765t=buffer__unsafe_size;
  *__t5766t=buffer__unsafe_offset;
  *__t5767t=buffer__unsafe_align;
  *__t5768t=buffer__unsafe_ptr;
  *__t5769t=buffer__unsafe_size;
  *__t5770t=buffer__unsafe_offset;
  *__t5771t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int alloc__t1101t(uint64_t size, char** __t5772t, uint64_t* __t5773t, uint32_t* __t5774t, uint32_t* __t5775t) {
  char __t1102t=0;
  char* __t1105t__unsafe_ptr=0;
  uint64_t __t1105t__unsafe_size=0;
  uint32_t __t1105t__unsafe_offset=0;
  uint32_t __t1105t__unsafe_align=0;
  char* __t1106t__unsafe_ptr=0;
  uint64_t __t1106t__unsafe_size=0;
  uint32_t __t1106t__unsafe_offset=0;
  uint32_t __t1106t__unsafe_align=0;
  char* __t1108t__unsafe_ptr=0;
  uint64_t __t1108t__unsafe_size=0;
  uint32_t __t1108t__unsafe_offset=0;
  uint32_t __t1108t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  char __t1109t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1103t(&__t1105t__unsafe_ptr,&__t1105t__unsafe_size,&__t1105t__unsafe_offset,&__t1105t__unsafe_align);
  __t_complain=alloc__t946t(&__t1105t__unsafe_ptr,&__t1105t__unsafe_size,&__t1105t__unsafe_offset,&__t1105t__unsafe_align,size,&__t1106t__unsafe_ptr,&__t1106t__unsafe_size,&__t1106t__unsafe_offset,&__t1106t__unsafe_align);
  __t1102t=__t_complain;
  if(__t_complain){
  goto __t1102t__label;
  }
  __t1108t__unsafe_ptr=__t1106t__unsafe_ptr;
  __t1108t__unsafe_size=__t1106t__unsafe_size;
  __t1108t__unsafe_offset=__t1106t__unsafe_offset;
  __t1108t__unsafe_align=__t1106t__unsafe_align;
  ret__unsafe_ptr=__t1108t__unsafe_ptr;
  ret__unsafe_size=__t1108t__unsafe_size;
  ret__unsafe_offset=__t1108t__unsafe_offset;
  ret__unsafe_align=__t1108t__unsafe_align;
  __t1102t__label:__t1102t=__t1102t==0;
  not__t42t(__t1102t,&__t1109t__);
  if(__t1109t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t821t(&ret__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5772t=ret__unsafe_ptr;
  *__t5773t=ret__unsafe_size;
  *__t5774t=ret__unsafe_offset;
  *__t5775t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1219t(char** __t5776t, uint64_t* __t5777t, uint32_t* __t5778t, uint32_t* __t5779t, uint64_t _pos, char** __t5780t, uint64_t* __t5781t, uint32_t* __t5782t, uint32_t* __t5783t, uint64_t* __t5784t) {
  char* buf__unsafe_ptr=*__t5776t;
  uint64_t buf__unsafe_size=*__t5777t;
  uint32_t buf__unsafe_offset=*__t5778t;
  uint32_t buf__unsafe_align=*__t5779t;
  uint64_t __t1220t=0;
  uint64_t pos=0;
  __t1220t=_pos;
  pos=__t1220t;
  goto __t_return;
  __t_return:
  *__t5776t=buf__unsafe_ptr;
  *__t5777t=buf__unsafe_size;
  *__t5778t=buf__unsafe_offset;
  *__t5779t=buf__unsafe_align;
  *__t5780t=buf__unsafe_ptr;
  *__t5781t=buf__unsafe_size;
  *__t5782t=buf__unsafe_offset;
  *__t5783t=buf__unsafe_align;
  *__t5784t=pos;
}

static inline __attribute__((always_inline)) void arena__t1222t(char** __t5785t, uint64_t* __t5786t, uint32_t* __t5787t, uint32_t* __t5788t, char** __t5789t, uint64_t* __t5790t, uint32_t* __t5791t, uint32_t* __t5792t, uint64_t* __t5793t) {
  char* buf__unsafe_ptr=*__t5785t;
  uint64_t buf__unsafe_size=*__t5786t;
  uint32_t buf__unsafe_offset=*__t5787t;
  uint32_t buf__unsafe_align=*__t5788t;
  uint64_t __t1223t=0;
  char* __t1224t__buf__unsafe_ptr=0;
  uint64_t __t1224t__buf__unsafe_size=0;
  uint32_t __t1224t__buf__unsafe_offset=0;
  uint32_t __t1224t__buf__unsafe_align=0;
  uint64_t __t1224t__pos=0;
  __t1223t=0;
  arena__t1219t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1223t,&__t1224t__buf__unsafe_ptr,&__t1224t__buf__unsafe_size,&__t1224t__buf__unsafe_offset,&__t1224t__buf__unsafe_align,&__t1224t__pos);
  goto __t_return;
  __t_return:
  *__t5785t=buf__unsafe_ptr;
  *__t5786t=buf__unsafe_size;
  *__t5787t=buf__unsafe_offset;
  *__t5788t=buf__unsafe_align;
  *__t5789t=__t1224t__buf__unsafe_ptr;
  *__t5790t=__t1224t__buf__unsafe_size;
  *__t5791t=__t1224t__buf__unsafe_offset;
  *__t5792t=__t1224t__buf__unsafe_align;
  *__t5793t=__t1224t__pos;
}

static inline __attribute__((always_inline)) void argument____t_buffer____buffer__t4410t(char** __t5794t, uint64_t* __t5795t, uint32_t* __t5796t, uint32_t* __t5797t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t5794t=unsafe_ptr;
  *__t5795t=unsafe_size;
  *__t5796t=unsafe_offset;
  *__t5797t=unsafe_align;
}

static inline __attribute__((always_inline)) void args__t4409t(char** __t5798t, uint64_t* __t5799t, uint32_t* __t5800t, uint32_t* __t5801t) {
  char* __t4412t__unsafe_ptr=0;
  uint64_t __t4412t__unsafe_size=0;
  uint32_t __t4412t__unsafe_offset=0;
  uint32_t __t4412t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  argument____t_buffer____buffer__t4410t(&__t4412t__unsafe_ptr,&__t4412t__unsafe_size,&__t4412t__unsafe_offset,&__t4412t__unsafe_align);
  ret__unsafe_ptr=__t4412t__unsafe_ptr;
  ret__unsafe_size=__t4412t__unsafe_size;
  ret__unsafe_offset=__t4412t__unsafe_offset;
  ret__unsafe_align=__t4412t__unsafe_align;
  ret__unsafe_ptr=(char*)__t_argv;
  ret__unsafe_size=__t_argc;
  goto __t_return;
  __t_return:
  *__t5798t=ret__unsafe_ptr;
  *__t5799t=ret__unsafe_size;
  *__t5800t=ret__unsafe_offset;
  *__t5801t=ret__unsafe_align;
}

void str__t4407t(const char* arg__unsafe_value, char** __t5802t, uint64_t* __t5803t, uint64_t* __t5804t, char* __t5805t) {
  char* __t4408t__unsafe_ptr=0;
  uint64_t __t4408t__dat__pos=0;
  uint64_t __t4408t__dat__length=0;
  char __t4408t__dat__first=0;
  str__t1695t(arg__unsafe_value,&__t4408t__unsafe_ptr,&__t4408t__dat__pos,&__t4408t__dat__length,&__t4408t__dat__first);
  goto __t_return;
  __t_return:
  *__t5802t=__t4408t__unsafe_ptr;
  *__t5803t=__t4408t__dat__pos;
  *__t5804t=__t4408t__dat__length;
  *__t5805t=__t4408t__dat__first;
}

void char__t1707t(const char* s, char* __t5806t) {
  char* __t1708t__unsafe_ptr=0;
  uint64_t __t1708t__dat__pos=0;
  uint64_t __t1708t__dat__length=0;
  char __t1708t__dat__first=0;
  str__t1695t(s,&__t1708t__unsafe_ptr,&__t1708t__dat__pos,&__t1708t__dat__length,&__t1708t__dat__first);
  goto __t_return;
  __t_return:
  *__t5806t=__t1708t__dat__first;
}

static inline __attribute__((always_inline)) void neq__t1710t(char x, char y, char* __t5807t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5807t=z;
}

static inline __attribute__((always_inline)) void len__t1705t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5808t) {
  goto __t_return;
  __t_return:
  *__t5808t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t1837t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5809t) {
  uint64_t __t1838t__=0;
  uint64_t n=0;
  uint64_t __t1839t__=0;
  char __t1840t__=0;
  char __t1841t=0;
  char __t1842t__=0;
  char __t1843t=0;
  char z=0;
  len__t1705t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1838t__);
  n=__t1838t__;
  len__t1705t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1839t__);
  neq__t158t(n,__t1839t__,&__t1840t__);
  if(__t1840t__){
  __t1841t=0;
  goto __t_return;
  }
  neq__t1710t(x__dat__first,y__dat__first,&__t1842t__);
  if(__t1842t__){
  __t1843t=0;
  __t1841t=__t1843t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1841t=z;
  goto __t_return;
  __t_return:
  *__t5809t=__t1841t;
}

void eq__t1850t(const char* x, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5810t) {
  char __t1851t__=0;
  char __t1852t__=0;
  char __t1853t=0;
  char* __t1854t__unsafe_ptr=0;
  uint64_t __t1854t__dat__pos=0;
  uint64_t __t1854t__dat__length=0;
  char __t1854t__dat__first=0;
  char __t1855t__=0;
  char__t1707t(x,&__t1851t__);
  neq__t1710t(y__dat__first,__t1851t__,&__t1852t__);
  if(__t1852t__){
  __t1853t=0;
  goto __t_return;
  }
  str__t1695t(x,&__t1854t__unsafe_ptr,&__t1854t__dat__pos,&__t1854t__dat__length,&__t1854t__dat__first);
  eq__t1837t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,__t1854t__unsafe_ptr,__t1854t__dat__pos,__t1854t__dat__length,__t1854t__dat__first,&__t1855t__);
  __t1853t=__t1855t__;
  goto __t_return;
  __t_return:
  *__t5810t=__t1853t;
}

static inline __attribute__((always_inline)) void len__t1174t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5811t) {
  goto __t_return;
  __t_return:
  *__t5811t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t5812t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5812t=z;
}

static inline __attribute__((always_inline)) int arg_after__t4423t(const char* flag, char** __t5813t, uint64_t* __t5814t, uint64_t* __t5815t, char* __t5816t) {
  char* __t4424t__unsafe_ptr=0;
  uint64_t __t4424t__unsafe_size=0;
  uint32_t __t4424t__unsafe_offset=0;
  uint32_t __t4424t__unsafe_align=0;
  char* args__unsafe_ptr=0;
  uint64_t args__unsafe_size=0;
  uint32_t args__unsafe_offset=0;
  uint32_t args__unsafe_align=0;
  uint64_t __t4425t=0;
  char __t4426t=0;
  char* __t4427t__=0;
  const char* __t4428t__unsafe_value=0;
  const char* arg__unsafe_value=0;
  char* __t4429t__unsafe_ptr=0;
  uint64_t __t4429t__dat__pos=0;
  uint64_t __t4429t__dat__length=0;
  char __t4429t__dat__first=0;
  char __t4430t__=0;
  uint64_t __t4431t=0;
  uint64_t __t4432t__=0;
  uint64_t __t4433t__=0;
  char __t4434t__=0;
  char __t4435t=0;
  uint64_t __t4436t=0;
  uint64_t __t4437t__=0;
  char* __t4439t__=0;
  const char* __t4440t__unsafe_value=0;
  char* __t4441t__unsafe_ptr=0;
  uint64_t __t4441t__dat__pos=0;
  uint64_t __t4441t__dat__length=0;
  char __t4441t__dat__first=0;
  int __t4442t=0;
  int __t_errcode=0;
  int __t_complain=0;
  args__t4409t(&__t4424t__unsafe_ptr,&__t4424t__unsafe_size,&__t4424t__unsafe_offset,&__t4424t__unsafe_align);
  args__unsafe_ptr=__t4424t__unsafe_ptr;
  args__unsafe_size=__t4424t__unsafe_size;
  args__unsafe_offset=__t4424t__unsafe_offset;
  args__unsafe_align=__t4424t__unsafe_align;
  __t4425t=0-1;
  while(1){
  __t4425t=__t4425t+1;
  __t_complain=get__t1166t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4425t,&__t4427t__);
  __t4426t=__t_complain;
  if(__t_complain){
  goto __t4426t__label;
  }
  if(!__t4427t__){
  __t_complain=2;
  goto __t4426t__label;
  }
  else{
  memcpy(&__t4428t__unsafe_value,__t4427t__,8);
  }
  arg__unsafe_value=__t4428t__unsafe_value;
  __t4426t__label:__t4426t=__t4426t==0;
  if(!__t4426t){
  break;
  }
  str__t4407t(arg__unsafe_value,&__t4429t__unsafe_ptr,&__t4429t__dat__pos,&__t4429t__dat__length,&__t4429t__dat__first);
  eq__t1850t(flag,__t4429t__unsafe_ptr,__t4429t__dat__pos,__t4429t__dat__length,__t4429t__dat__first,&__t4430t__);
  if(__t4430t__){
  __t4431t=1;
  add__t188t(__t4425t,__t4431t,&__t4432t__);
  len__t1174t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,&__t4433t__);
  lt__t302t(__t4432t__,__t4433t__,&__t4434t__);
  __t4435t=__t4434t__;
  }
  else{
  __t4435t=0;
  }
  if(__t4435t){
  __t4436t=1;
  add__t188t(__t4425t,__t4436t,&__t4437t__);
  __t_errcode=get__t1166t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4437t__,&__t4439t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4439t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4440t__unsafe_value,__t4439t__,8);
  str__t4407t(__t4440t__unsafe_value,&__t4441t__unsafe_ptr,&__t4441t__dat__pos,&__t4441t__dat__length,&__t4441t__dat__first);
  goto __t_return;
  }
  }
  __t_errcode=45;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5813t=__t4441t__unsafe_ptr;
  *__t5814t=__t4441t__dat__pos;
  *__t5815t=__t4441t__dat__length;
  *__t5816t=__t4441t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1672t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5817t, uint64_t* __t5818t, uint64_t* __t5819t, char* __t5820t) {
  goto __t_return;
  __t_return:
  *__t5817t=other__unsafe_ptr;
  *__t5818t=other__dat__pos;
  *__t5819t=other__dat__length;
  *__t5820t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5821t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5821t=z;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t5822t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5822t=z;
}

static inline __attribute__((always_inline)) void allocated__t1226t(char** __t5823t, uint64_t* __t5824t, uint32_t* __t5825t, uint32_t* __t5826t, uint64_t pos, char** __t5827t, uint64_t* __t5828t, uint32_t* __t5829t, uint32_t* __t5830t, uint64_t* __t5831t) {
  char* buf__unsafe_ptr=*__t5823t;
  uint64_t buf__unsafe_size=*__t5824t;
  uint32_t buf__unsafe_offset=*__t5825t;
  uint32_t buf__unsafe_align=*__t5826t;
  goto __t_return;
  __t_return:
  *__t5823t=buf__unsafe_ptr;
  *__t5824t=buf__unsafe_size;
  *__t5825t=buf__unsafe_offset;
  *__t5826t=buf__unsafe_align;
  *__t5827t=buf__unsafe_ptr;
  *__t5828t=buf__unsafe_size;
  *__t5829t=buf__unsafe_offset;
  *__t5830t=buf__unsafe_align;
  *__t5831t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1301t(char** __t5832t, uint64_t* __t5833t, uint32_t* __t5834t, uint32_t* __t5835t, uint64_t* __t5836t, uint64_t length, char** __t5837t, uint64_t* __t5838t, uint32_t* __t5839t, uint32_t* __t5840t, uint64_t* __t5841t) {
  char* allocator__buf__unsafe_ptr=*__t5832t;
  uint64_t allocator__buf__unsafe_size=*__t5833t;
  uint32_t allocator__buf__unsafe_offset=*__t5834t;
  uint32_t allocator__buf__unsafe_align=*__t5835t;
  uint64_t allocator__pos=*__t5836t;
  int __t1302t=0;
  uint64_t __t1303t__=0;
  uint64_t next_pos=0;
  uint64_t __t1304t__=0;
  char __t1305t__=0;
  uint64_t __t1306t=0;
  uint64_t __t1307t__=0;
  uint64_t pos=0;
  char* __t1308t__buf__unsafe_ptr=0;
  uint64_t __t1308t__buf__unsafe_size=0;
  uint32_t __t1308t__buf__unsafe_offset=0;
  uint32_t __t1308t__buf__unsafe_align=0;
  uint64_t __t1308t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1303t__);
  next_pos=__t1303t__;
  len__t1174t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1304t__);
  gt__t326t(next_pos,__t1304t__,&__t1305t__);
  if(__t1305t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1306t=0;
  add__t188t(allocator__pos,__t1306t,&__t1307t__);
  pos=__t1307t__;
  allocator__pos=next_pos;
  allocated__t1226t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1308t__buf__unsafe_ptr,&__t1308t__buf__unsafe_size,&__t1308t__buf__unsafe_offset,&__t1308t__buf__unsafe_align,&__t1308t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5832t=allocator__buf__unsafe_ptr;
  *__t5833t=allocator__buf__unsafe_size;
  *__t5834t=allocator__buf__unsafe_offset;
  *__t5835t=allocator__buf__unsafe_align;
  *__t5836t=allocator__pos;
  *__t5837t=__t1308t__buf__unsafe_ptr;
  *__t5838t=__t1308t__buf__unsafe_size;
  *__t5839t=__t1308t__buf__unsafe_offset;
  *__t5840t=__t1308t__buf__unsafe_align;
  *__t5841t=__t1308t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1231t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5842t, uint64_t* __t5843t, uint32_t* __t5844t, uint32_t* __t5845t, uint64_t* __t5846t) {
  char* __t1232t__unsafe_ptr=0;
  uint64_t __t1232t__unsafe_size=0;
  uint32_t __t1232t__unsafe_offset=0;
  uint32_t __t1232t__unsafe_align=0;
  uint64_t __t1233t=0;
  __t1232t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1232t__unsafe_size=self__buf__unsafe_size;
  __t1232t__unsafe_offset=self__buf__unsafe_offset;
  __t1232t__unsafe_align=self__buf__unsafe_align;
  __t1233t=self__pos;
  goto __t_return;
  __t_return:
  *__t5842t=__t1232t__unsafe_ptr;
  *__t5843t=__t1232t__unsafe_size;
  *__t5844t=__t1232t__unsafe_offset;
  *__t5845t=__t1232t__unsafe_align;
  *__t5846t=__t1233t;
}

static inline __attribute__((always_inline)) int copy__t1764t(char** __t5847t, uint64_t* __t5848t, uint32_t* __t5849t, uint32_t* __t5850t, uint64_t* __t5851t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5852t, uint64_t* __t5853t, uint64_t* __t5854t, char* __t5855t) {
  char* CHARS__buf__unsafe_ptr=*__t5847t;
  uint64_t CHARS__buf__unsafe_size=*__t5848t;
  uint32_t CHARS__buf__unsafe_offset=*__t5849t;
  uint32_t CHARS__buf__unsafe_align=*__t5850t;
  uint64_t CHARS__pos=*__t5851t;
  char* __t1765t__unsafe_ptr=0;
  uint64_t __t1765t__dat__pos=0;
  uint64_t __t1765t__dat__length=0;
  char __t1765t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1766t__buf__unsafe_ptr=0;
  uint64_t __t1766t__buf__unsafe_size=0;
  uint32_t __t1766t__buf__unsafe_offset=0;
  uint32_t __t1766t__buf__unsafe_align=0;
  uint64_t __t1766t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1767t=0;
  char* __t1768t__unsafe_ptr=0;
  uint64_t __t1768t__dat__pos=0;
  uint64_t __t1768t__dat__length=0;
  char __t1768t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1672t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1765t__unsafe_ptr,&__t1765t__dat__pos,&__t1765t__dat__length,&__t1765t__dat__first);
  other__unsafe_ptr=__t1765t__unsafe_ptr;
  other__dat__pos=__t1765t__dat__pos;
  other__dat__length=__t1765t__dat__length;
  other__dat__first=__t1765t__dat__first;
  __t_errcode=alloc__t1301t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1766t__buf__unsafe_ptr,&__t1766t__buf__unsafe_size,&__t1766t__buf__unsafe_offset,&__t1766t__buf__unsafe_align,&__t1766t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1766t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1766t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1766t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1766t__buf__unsafe_align;
  surface__pos=__t1766t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1639t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1768t__unsafe_ptr,&__t1768t__dat__pos,&__t1768t__dat__length,&__t1768t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5847t=CHARS__buf__unsafe_ptr;
  *__t5848t=CHARS__buf__unsafe_size;
  *__t5849t=CHARS__buf__unsafe_offset;
  *__t5850t=CHARS__buf__unsafe_align;
  *__t5851t=CHARS__pos;
  *__t5852t=__t1768t__unsafe_ptr;
  *__t5853t=__t1768t__dat__pos;
  *__t5854t=__t1768t__dat__length;
  *__t5855t=__t1768t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1228t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5856t, uint64_t* __t5857t, uint32_t* __t5858t, uint32_t* __t5859t, uint64_t* __t5860t) {
  char* __t1229t__unsafe_ptr=0;
  uint64_t __t1229t__unsafe_size=0;
  uint32_t __t1229t__unsafe_offset=0;
  uint32_t __t1229t__unsafe_align=0;
  uint64_t __t1230t=0;
  __t1229t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1229t__unsafe_size=self__buf__unsafe_size;
  __t1229t__unsafe_offset=self__buf__unsafe_offset;
  __t1229t__unsafe_align=self__buf__unsafe_align;
  __t1230t=self__pos;
  goto __t_return;
  __t_return:
  *__t5856t=__t1229t__unsafe_ptr;
  *__t5857t=__t1229t__unsafe_size;
  *__t5858t=__t1229t__unsafe_offset;
  *__t5859t=__t1229t__unsafe_align;
  *__t5860t=__t1230t;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t5861t) {
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
  *__t5861t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1691t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5862t, uint64_t* __t5863t, uint64_t* __t5864t, char* __t5865t) {
  uint64_t __t1693t__=0;
  char* __t1694t__unsafe_ptr=0;
  uint64_t __t1694t__dat__pos=0;
  uint64_t __t1694t__dat__length=0;
  char __t1694t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(endpos,pos,&__t1693t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1673t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1693t__,&__t1694t__unsafe_ptr,&__t1694t__dat__pos,&__t1694t__dat__length,&__t1694t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5862t=__t1694t__unsafe_ptr;
  *__t5863t=__t1694t__dat__pos;
  *__t5864t=__t1694t__dat__length;
  *__t5865t=__t1694t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t3008t(char** __t5866t, uint64_t* __t5867t, uint32_t* __t5868t, uint32_t* __t5869t, uint64_t* __t5870t, const char* _s1, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5871t, uint64_t* __t5872t, uint64_t* __t5873t, char* __t5874t) {
  char* CHARS__buf__unsafe_ptr=*__t5866t;
  uint64_t CHARS__buf__unsafe_size=*__t5867t;
  uint32_t CHARS__buf__unsafe_offset=*__t5868t;
  uint32_t CHARS__buf__unsafe_align=*__t5869t;
  uint64_t CHARS__pos=*__t5870t;
  char* __t3009t__unsafe_ptr=0;
  uint64_t __t3009t__dat__pos=0;
  uint64_t __t3009t__dat__length=0;
  char __t3009t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t3010t__unsafe_ptr=0;
  uint64_t __t3010t__dat__pos=0;
  uint64_t __t3010t__dat__length=0;
  char __t3010t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t3011t__=0;
  uint64_t __t3012t__=0;
  char __t3013t__=0;
  char __t3014t=0;
  uint64_t __t3015t__=0;
  char __t3016t__=0;
  char __t3017t=0;
  uint64_t __t3018t__=0;
  char* __t3019t__buf__unsafe_ptr=0;
  uint64_t __t3019t__buf__unsafe_size=0;
  uint32_t __t3019t__buf__unsafe_offset=0;
  uint32_t __t3019t__buf__unsafe_align=0;
  uint64_t __t3019t__pos=0;
  char* __t3020t____t1232t__unsafe_ptr=0;
  uint64_t __t3020t____t1232t__unsafe_size=0;
  uint32_t __t3020t____t1232t__unsafe_offset=0;
  uint32_t __t3020t____t1232t__unsafe_align=0;
  uint64_t __t3020t____t1233t=0;
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
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t3023t__unsafe_ptr=0;
  uint64_t __t3023t__dat__pos=0;
  uint64_t __t3023t__dat__length=0;
  char __t3023t__dat__first=0;
  char* __t3024t____t1229t__unsafe_ptr=0;
  uint64_t __t3024t____t1229t__unsafe_size=0;
  uint32_t __t3024t____t1229t__unsafe_offset=0;
  uint32_t __t3024t____t1229t__unsafe_align=0;
  uint64_t __t3024t____t1230t=0;
  uint64_t __t3026t=0;
  uint64_t __t3027t__=0;
  char* __t3028t__unsafe_ptr=0;
  uint64_t __t3028t__dat__pos=0;
  uint64_t __t3028t__dat__length=0;
  char __t3028t__dat__first=0;
  char __t3029t__=0;
  char __t3030t__=0;
  char __t3031t=0;
  uint64_t __t3032t__=0;
  char __t3033t__=0;
  char __t3034t=0;
  uint64_t __t3035t__=0;
  char* __t3037t__unsafe_ptr=0;
  uint64_t __t3037t__dat__pos=0;
  uint64_t __t3037t__dat__length=0;
  char __t3037t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t3038t__=0;
  uint64_t __t3039t__=0;
  uint64_t __t3040t__=0;
  char* __t3041t__buf__unsafe_ptr=0;
  uint64_t __t3041t__buf__unsafe_size=0;
  uint32_t __t3041t__buf__unsafe_offset=0;
  uint32_t __t3041t__buf__unsafe_align=0;
  uint64_t __t3041t__pos=0;
  char* __t3042t____t1232t__unsafe_ptr=0;
  uint64_t __t3042t____t1232t__unsafe_size=0;
  uint32_t __t3042t____t1232t__unsafe_offset=0;
  uint32_t __t3042t____t1232t__unsafe_align=0;
  uint64_t __t3042t____t1233t=0;
  char* __t3043t__buf__unsafe_ptr=0;
  uint64_t __t3043t__buf__unsafe_size=0;
  uint32_t __t3043t__buf__unsafe_offset=0;
  uint32_t __t3043t__buf__unsafe_align=0;
  uint64_t __t3043t__pos=0;
  char* __t3044t__buf__unsafe_ptr=0;
  uint64_t __t3044t__buf__unsafe_size=0;
  uint32_t __t3044t__buf__unsafe_offset=0;
  uint32_t __t3044t__buf__unsafe_align=0;
  uint64_t __t3044t__pos=0;
  char* __t3045t__unsafe_ptr=0;
  uint64_t __t3045t__dat__pos=0;
  uint64_t __t3045t__dat__length=0;
  char __t3045t__dat__first=0;
  char* __t3046t__unsafe_ptr=0;
  uint64_t __t3046t__dat__pos=0;
  uint64_t __t3046t__dat__length=0;
  char __t3046t__dat__first=0;
  char __t3047t=0;
  char* __t3048t____t1229t__unsafe_ptr=0;
  uint64_t __t3048t____t1229t__unsafe_size=0;
  uint32_t __t3048t____t1229t__unsafe_offset=0;
  uint32_t __t3048t____t1229t__unsafe_align=0;
  uint64_t __t3048t____t1230t=0;
  uint64_t __t3050t=0;
  uint64_t __t3051t__=0;
  char* __t3052t__unsafe_ptr=0;
  uint64_t __t3052t__dat__pos=0;
  uint64_t __t3052t__dat__length=0;
  char __t3052t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1695t(_s1,&__t3009t__unsafe_ptr,&__t3009t__dat__pos,&__t3009t__dat__length,&__t3009t__dat__first);
  s1__unsafe_ptr=__t3009t__unsafe_ptr;
  s1__dat__pos=__t3009t__dat__pos;
  s1__dat__length=__t3009t__dat__length;
  s1__dat__first=__t3009t__dat__first;
  str__t1672t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t3010t__unsafe_ptr,&__t3010t__dat__pos,&__t3010t__dat__length,&__t3010t__dat__first);
  s2__unsafe_ptr=__t3010t__unsafe_ptr;
  s2__dat__pos=__t3010t__dat__pos;
  s2__dat__length=__t3010t__dat__length;
  s2__dat__first=__t3010t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3011t__);
  if(__t3011t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3012t__);
  eq__t134t(CHARS__pos,__t3012t__,&__t3013t__);
  __t3014t=__t3013t__;
  }
  if(__t3014t){
  add__t188t(CHARS__pos,s2__dat__length,&__t3015t__);
  lt__t302t(__t3015t__,CHARS__buf__unsafe_size,&__t3016t__);
  __t3017t=__t3016t__;
  }
  if(__t3017t){
  len__t1705t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3018t__);
  __t_errcode=alloc__t1301t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3018t__,&__t3019t__buf__unsafe_ptr,&__t3019t__buf__unsafe_size,&__t3019t__buf__unsafe_offset,&__t3019t__buf__unsafe_align,&__t3019t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1231t(__t3019t__buf__unsafe_ptr,__t3019t__buf__unsafe_size,__t3019t__buf__unsafe_offset,__t3019t__buf__unsafe_align,__t3019t__pos,&__t3020t____t1232t__unsafe_ptr,&__t3020t____t1232t__unsafe_size,&__t3020t____t1232t__unsafe_offset,&__t3020t____t1232t__unsafe_align,&__t3020t____t1233t);
  arena__t1219t(&__t3020t____t1232t__unsafe_ptr,&__t3020t____t1232t__unsafe_size,&__t3020t____t1232t__unsafe_offset,&__t3020t____t1232t__unsafe_align,__t3020t____t1233t,&__t3021t__buf__unsafe_ptr,&__t3021t__buf__unsafe_size,&__t3021t__buf__unsafe_offset,&__t3021t__buf__unsafe_align,&__t3021t__pos);
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
  __t_errcode=copy__t1764t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3023t__unsafe_ptr,&__t3023t__dat__pos,&__t3023t__dat__length,&__t3023t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1228t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3024t____t1229t__unsafe_ptr,&__t3024t____t1229t__unsafe_size,&__t3024t____t1229t__unsafe_offset,&__t3024t____t1229t__unsafe_align,&__t3024t____t1230t);
  __t3026t=0;
  add__t188t(s1__dat__pos,__t3026t,&__t3027t__);
  __t_errcode=str__t1691t(__t3024t____t1229t__unsafe_ptr,__t3024t____t1229t__unsafe_size,__t3024t____t1229t__unsafe_offset,__t3024t____t1229t__unsafe_align,__t3024t____t1230t,__t3027t__,&__t3028t__unsafe_ptr,&__t3028t__dat__pos,&__t3028t__dat__length,&__t3028t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3029t__);
  if(__t3029t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3030t__);
  __t3031t=__t3030t__;
  }
  if(__t3031t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3032t__);
  eq__t134t(s2__dat__pos,__t3032t__,&__t3033t__);
  __t3034t=__t3033t__;
  }
  if(__t3034t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t3035t__);
  __t_errcode=str__t1691t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t3035t__,s1__dat__pos,&__t3037t__unsafe_ptr,&__t3037t__dat__pos,&__t3037t__dat__length,&__t3037t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3028t__unsafe_ptr=__t3037t__unsafe_ptr;
  __t3028t__dat__pos=__t3037t__dat__pos;
  __t3028t__dat__length=__t3037t__dat__length;
  __t3028t__dat__first=__t3037t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1705t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3038t__);
  len__t1705t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3039t__);
  add__t188t(__t3038t__,__t3039t__,&__t3040t__);
  __t_errcode=alloc__t1301t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3040t__,&__t3041t__buf__unsafe_ptr,&__t3041t__buf__unsafe_size,&__t3041t__buf__unsafe_offset,&__t3041t__buf__unsafe_align,&__t3041t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1231t(__t3041t__buf__unsafe_ptr,__t3041t__buf__unsafe_size,__t3041t__buf__unsafe_offset,__t3041t__buf__unsafe_align,__t3041t__pos,&__t3042t____t1232t__unsafe_ptr,&__t3042t____t1232t__unsafe_size,&__t3042t____t1232t__unsafe_offset,&__t3042t____t1232t__unsafe_align,&__t3042t____t1233t);
  arena__t1219t(&__t3042t____t1232t__unsafe_ptr,&__t3042t____t1232t__unsafe_size,&__t3042t____t1232t__unsafe_offset,&__t3042t____t1232t__unsafe_align,__t3042t____t1233t,&__t3043t__buf__unsafe_ptr,&__t3043t__buf__unsafe_size,&__t3043t__buf__unsafe_offset,&__t3043t__buf__unsafe_align,&__t3043t__pos);
  __t3044t__buf__unsafe_ptr=__t3043t__buf__unsafe_ptr;
  __t3044t__buf__unsafe_size=__t3043t__buf__unsafe_size;
  __t3044t__buf__unsafe_offset=__t3043t__buf__unsafe_offset;
  __t3044t__buf__unsafe_align=__t3043t__buf__unsafe_align;
  __t3044t__pos=__t3043t__pos;
  surface__buf__unsafe_ptr=__t3044t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3044t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3044t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3044t__buf__unsafe_align;
  surface__pos=__t3044t__pos;
  __t_errcode=copy__t1764t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3045t__unsafe_ptr,&__t3045t__dat__pos,&__t3045t__dat__length,&__t3045t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1764t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3046t__unsafe_ptr,&__t3046t__dat__pos,&__t3046t__dat__length,&__t3046t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1228t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3048t____t1229t__unsafe_ptr,&__t3048t____t1229t__unsafe_size,&__t3048t____t1229t__unsafe_offset,&__t3048t____t1229t__unsafe_align,&__t3048t____t1230t);
  __t3050t=0;
  add__t188t(prev_pos,__t3050t,&__t3051t__);
  __t_complain=str__t1691t(__t3048t____t1229t__unsafe_ptr,__t3048t____t1229t__unsafe_size,__t3048t____t1229t__unsafe_offset,__t3048t____t1229t__unsafe_align,__t3048t____t1230t,__t3051t__,&__t3052t__unsafe_ptr,&__t3052t__dat__pos,&__t3052t__dat__length,&__t3052t__dat__first);
  __t3047t=__t_complain;
  if(__t_complain){
  goto __t3047t__label;
  }
  ret__unsafe_ptr=__t3052t__unsafe_ptr;
  ret__dat__pos=__t3052t__dat__pos;
  ret__dat__length=__t3052t__dat__length;
  ret__dat__first=__t3052t__dat__first;
  __t3047t__label:__t3047t=__t3047t==0;
  __t3028t__unsafe_ptr=ret__unsafe_ptr;
  __t3028t__dat__pos=ret__dat__pos;
  __t3028t__dat__length=ret__dat__length;
  __t3028t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5866t=CHARS__buf__unsafe_ptr;
  *__t5867t=CHARS__buf__unsafe_size;
  *__t5868t=CHARS__buf__unsafe_offset;
  *__t5869t=CHARS__buf__unsafe_align;
  *__t5870t=CHARS__pos;
  *__t5871t=__t3028t__unsafe_ptr;
  *__t5872t=__t3028t__dat__pos;
  *__t5873t=__t3028t__dat__length;
  *__t5874t=__t3028t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2963t(char** __t5875t, uint64_t* __t5876t, uint32_t* __t5877t, uint32_t* __t5878t, uint64_t* __t5879t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5880t, uint64_t* __t5881t, uint64_t* __t5882t, char* __t5883t) {
  char* CHARS__buf__unsafe_ptr=*__t5875t;
  uint64_t CHARS__buf__unsafe_size=*__t5876t;
  uint32_t CHARS__buf__unsafe_offset=*__t5877t;
  uint32_t CHARS__buf__unsafe_align=*__t5878t;
  uint64_t CHARS__pos=*__t5879t;
  char* __t2964t__unsafe_ptr=0;
  uint64_t __t2964t__dat__pos=0;
  uint64_t __t2964t__dat__length=0;
  char __t2964t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2965t__unsafe_ptr=0;
  uint64_t __t2965t__dat__pos=0;
  uint64_t __t2965t__dat__length=0;
  char __t2965t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2966t__=0;
  uint64_t __t2967t__=0;
  char __t2968t__=0;
  char __t2969t=0;
  uint64_t __t2970t__=0;
  char __t2971t__=0;
  char __t2972t=0;
  uint64_t __t2973t__=0;
  char* __t2974t__buf__unsafe_ptr=0;
  uint64_t __t2974t__buf__unsafe_size=0;
  uint32_t __t2974t__buf__unsafe_offset=0;
  uint32_t __t2974t__buf__unsafe_align=0;
  uint64_t __t2974t__pos=0;
  char* __t2975t____t1232t__unsafe_ptr=0;
  uint64_t __t2975t____t1232t__unsafe_size=0;
  uint32_t __t2975t____t1232t__unsafe_offset=0;
  uint32_t __t2975t____t1232t__unsafe_align=0;
  uint64_t __t2975t____t1233t=0;
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
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2978t__unsafe_ptr=0;
  uint64_t __t2978t__dat__pos=0;
  uint64_t __t2978t__dat__length=0;
  char __t2978t__dat__first=0;
  char* __t2979t____t1229t__unsafe_ptr=0;
  uint64_t __t2979t____t1229t__unsafe_size=0;
  uint32_t __t2979t____t1229t__unsafe_offset=0;
  uint32_t __t2979t____t1229t__unsafe_align=0;
  uint64_t __t2979t____t1230t=0;
  uint64_t __t2981t=0;
  uint64_t __t2982t__=0;
  char* __t2983t__unsafe_ptr=0;
  uint64_t __t2983t__dat__pos=0;
  uint64_t __t2983t__dat__length=0;
  char __t2983t__dat__first=0;
  char __t2984t__=0;
  char __t2985t__=0;
  char __t2986t=0;
  uint64_t __t2987t__=0;
  char __t2988t__=0;
  char __t2989t=0;
  uint64_t __t2990t__=0;
  char* __t2992t__unsafe_ptr=0;
  uint64_t __t2992t__dat__pos=0;
  uint64_t __t2992t__dat__length=0;
  char __t2992t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2993t__=0;
  uint64_t __t2994t__=0;
  uint64_t __t2995t__=0;
  char* __t2996t__buf__unsafe_ptr=0;
  uint64_t __t2996t__buf__unsafe_size=0;
  uint32_t __t2996t__buf__unsafe_offset=0;
  uint32_t __t2996t__buf__unsafe_align=0;
  uint64_t __t2996t__pos=0;
  char* __t2997t____t1232t__unsafe_ptr=0;
  uint64_t __t2997t____t1232t__unsafe_size=0;
  uint32_t __t2997t____t1232t__unsafe_offset=0;
  uint32_t __t2997t____t1232t__unsafe_align=0;
  uint64_t __t2997t____t1233t=0;
  char* __t2998t__buf__unsafe_ptr=0;
  uint64_t __t2998t__buf__unsafe_size=0;
  uint32_t __t2998t__buf__unsafe_offset=0;
  uint32_t __t2998t__buf__unsafe_align=0;
  uint64_t __t2998t__pos=0;
  char* __t2999t__buf__unsafe_ptr=0;
  uint64_t __t2999t__buf__unsafe_size=0;
  uint32_t __t2999t__buf__unsafe_offset=0;
  uint32_t __t2999t__buf__unsafe_align=0;
  uint64_t __t2999t__pos=0;
  char* __t3000t__unsafe_ptr=0;
  uint64_t __t3000t__dat__pos=0;
  uint64_t __t3000t__dat__length=0;
  char __t3000t__dat__first=0;
  char* __t3001t__unsafe_ptr=0;
  uint64_t __t3001t__dat__pos=0;
  uint64_t __t3001t__dat__length=0;
  char __t3001t__dat__first=0;
  char __t3002t=0;
  char* __t3003t____t1229t__unsafe_ptr=0;
  uint64_t __t3003t____t1229t__unsafe_size=0;
  uint32_t __t3003t____t1229t__unsafe_offset=0;
  uint32_t __t3003t____t1229t__unsafe_align=0;
  uint64_t __t3003t____t1230t=0;
  uint64_t __t3005t=0;
  uint64_t __t3006t__=0;
  char* __t3007t__unsafe_ptr=0;
  uint64_t __t3007t__dat__pos=0;
  uint64_t __t3007t__dat__length=0;
  char __t3007t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1672t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2964t__unsafe_ptr,&__t2964t__dat__pos,&__t2964t__dat__length,&__t2964t__dat__first);
  s1__unsafe_ptr=__t2964t__unsafe_ptr;
  s1__dat__pos=__t2964t__dat__pos;
  s1__dat__length=__t2964t__dat__length;
  s1__dat__first=__t2964t__dat__first;
  str__t1695t(_s2,&__t2965t__unsafe_ptr,&__t2965t__dat__pos,&__t2965t__dat__length,&__t2965t__dat__first);
  s2__unsafe_ptr=__t2965t__unsafe_ptr;
  s2__dat__pos=__t2965t__dat__pos;
  s2__dat__length=__t2965t__dat__length;
  s2__dat__first=__t2965t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2966t__);
  if(__t2966t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2967t__);
  eq__t134t(CHARS__pos,__t2967t__,&__t2968t__);
  __t2969t=__t2968t__;
  }
  if(__t2969t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2970t__);
  lt__t302t(__t2970t__,CHARS__buf__unsafe_size,&__t2971t__);
  __t2972t=__t2971t__;
  }
  if(__t2972t){
  len__t1705t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2973t__);
  __t_errcode=alloc__t1301t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2973t__,&__t2974t__buf__unsafe_ptr,&__t2974t__buf__unsafe_size,&__t2974t__buf__unsafe_offset,&__t2974t__buf__unsafe_align,&__t2974t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1231t(__t2974t__buf__unsafe_ptr,__t2974t__buf__unsafe_size,__t2974t__buf__unsafe_offset,__t2974t__buf__unsafe_align,__t2974t__pos,&__t2975t____t1232t__unsafe_ptr,&__t2975t____t1232t__unsafe_size,&__t2975t____t1232t__unsafe_offset,&__t2975t____t1232t__unsafe_align,&__t2975t____t1233t);
  arena__t1219t(&__t2975t____t1232t__unsafe_ptr,&__t2975t____t1232t__unsafe_size,&__t2975t____t1232t__unsafe_offset,&__t2975t____t1232t__unsafe_align,__t2975t____t1233t,&__t2976t__buf__unsafe_ptr,&__t2976t__buf__unsafe_size,&__t2976t__buf__unsafe_offset,&__t2976t__buf__unsafe_align,&__t2976t__pos);
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
  __t_errcode=copy__t1764t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2978t__unsafe_ptr,&__t2978t__dat__pos,&__t2978t__dat__length,&__t2978t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1228t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2979t____t1229t__unsafe_ptr,&__t2979t____t1229t__unsafe_size,&__t2979t____t1229t__unsafe_offset,&__t2979t____t1229t__unsafe_align,&__t2979t____t1230t);
  __t2981t=0;
  add__t188t(s1__dat__pos,__t2981t,&__t2982t__);
  __t_errcode=str__t1691t(__t2979t____t1229t__unsafe_ptr,__t2979t____t1229t__unsafe_size,__t2979t____t1229t__unsafe_offset,__t2979t____t1229t__unsafe_align,__t2979t____t1230t,__t2982t__,&__t2983t__unsafe_ptr,&__t2983t__dat__pos,&__t2983t__dat__length,&__t2983t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2984t__);
  if(__t2984t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2985t__);
  __t2986t=__t2985t__;
  }
  if(__t2986t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2987t__);
  eq__t134t(s2__dat__pos,__t2987t__,&__t2988t__);
  __t2989t=__t2988t__;
  }
  if(__t2989t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2990t__);
  __t_errcode=str__t1691t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2990t__,s1__dat__pos,&__t2992t__unsafe_ptr,&__t2992t__dat__pos,&__t2992t__dat__length,&__t2992t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2983t__unsafe_ptr=__t2992t__unsafe_ptr;
  __t2983t__dat__pos=__t2992t__dat__pos;
  __t2983t__dat__length=__t2992t__dat__length;
  __t2983t__dat__first=__t2992t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1705t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2993t__);
  len__t1705t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2994t__);
  add__t188t(__t2993t__,__t2994t__,&__t2995t__);
  __t_errcode=alloc__t1301t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2995t__,&__t2996t__buf__unsafe_ptr,&__t2996t__buf__unsafe_size,&__t2996t__buf__unsafe_offset,&__t2996t__buf__unsafe_align,&__t2996t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1231t(__t2996t__buf__unsafe_ptr,__t2996t__buf__unsafe_size,__t2996t__buf__unsafe_offset,__t2996t__buf__unsafe_align,__t2996t__pos,&__t2997t____t1232t__unsafe_ptr,&__t2997t____t1232t__unsafe_size,&__t2997t____t1232t__unsafe_offset,&__t2997t____t1232t__unsafe_align,&__t2997t____t1233t);
  arena__t1219t(&__t2997t____t1232t__unsafe_ptr,&__t2997t____t1232t__unsafe_size,&__t2997t____t1232t__unsafe_offset,&__t2997t____t1232t__unsafe_align,__t2997t____t1233t,&__t2998t__buf__unsafe_ptr,&__t2998t__buf__unsafe_size,&__t2998t__buf__unsafe_offset,&__t2998t__buf__unsafe_align,&__t2998t__pos);
  __t2999t__buf__unsafe_ptr=__t2998t__buf__unsafe_ptr;
  __t2999t__buf__unsafe_size=__t2998t__buf__unsafe_size;
  __t2999t__buf__unsafe_offset=__t2998t__buf__unsafe_offset;
  __t2999t__buf__unsafe_align=__t2998t__buf__unsafe_align;
  __t2999t__pos=__t2998t__pos;
  surface__buf__unsafe_ptr=__t2999t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2999t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2999t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2999t__buf__unsafe_align;
  surface__pos=__t2999t__pos;
  __t_errcode=copy__t1764t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3000t__unsafe_ptr,&__t3000t__dat__pos,&__t3000t__dat__length,&__t3000t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1764t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3001t__unsafe_ptr,&__t3001t__dat__pos,&__t3001t__dat__length,&__t3001t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1228t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3003t____t1229t__unsafe_ptr,&__t3003t____t1229t__unsafe_size,&__t3003t____t1229t__unsafe_offset,&__t3003t____t1229t__unsafe_align,&__t3003t____t1230t);
  __t3005t=0;
  add__t188t(prev_pos,__t3005t,&__t3006t__);
  __t_complain=str__t1691t(__t3003t____t1229t__unsafe_ptr,__t3003t____t1229t__unsafe_size,__t3003t____t1229t__unsafe_offset,__t3003t____t1229t__unsafe_align,__t3003t____t1230t,__t3006t__,&__t3007t__unsafe_ptr,&__t3007t__dat__pos,&__t3007t__dat__length,&__t3007t__dat__first);
  __t3002t=__t_complain;
  if(__t_complain){
  goto __t3002t__label;
  }
  ret__unsafe_ptr=__t3007t__unsafe_ptr;
  ret__dat__pos=__t3007t__dat__pos;
  ret__dat__length=__t3007t__dat__length;
  ret__dat__first=__t3007t__dat__first;
  __t3002t__label:__t3002t=__t3002t==0;
  __t2983t__unsafe_ptr=ret__unsafe_ptr;
  __t2983t__dat__pos=ret__dat__pos;
  __t2983t__dat__length=ret__dat__length;
  __t2983t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5875t=CHARS__buf__unsafe_ptr;
  *__t5876t=CHARS__buf__unsafe_size;
  *__t5877t=CHARS__buf__unsafe_offset;
  *__t5878t=CHARS__buf__unsafe_align;
  *__t5879t=CHARS__pos;
  *__t5880t=__t2983t__unsafe_ptr;
  *__t5881t=__t2983t__dat__pos;
  *__t5882t=__t2983t__dat__length;
  *__t5883t=__t2983t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1769t(char** __t5884t, uint64_t* __t5885t, uint32_t* __t5886t, uint32_t* __t5887t, uint64_t* __t5888t, const char* _other, char** __t5889t, uint64_t* __t5890t, uint64_t* __t5891t, char* __t5892t) {
  char* CHARS__buf__unsafe_ptr=*__t5884t;
  uint64_t CHARS__buf__unsafe_size=*__t5885t;
  uint32_t CHARS__buf__unsafe_offset=*__t5886t;
  uint32_t CHARS__buf__unsafe_align=*__t5887t;
  uint64_t CHARS__pos=*__t5888t;
  char* __t1770t__unsafe_ptr=0;
  uint64_t __t1770t__dat__pos=0;
  uint64_t __t1770t__dat__length=0;
  char __t1770t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1771t__buf__unsafe_ptr=0;
  uint64_t __t1771t__buf__unsafe_size=0;
  uint32_t __t1771t__buf__unsafe_offset=0;
  uint32_t __t1771t__buf__unsafe_align=0;
  uint64_t __t1771t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1772t=0;
  char* __t1773t__unsafe_ptr=0;
  uint64_t __t1773t__dat__pos=0;
  uint64_t __t1773t__dat__length=0;
  char __t1773t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1695t(_other,&__t1770t__unsafe_ptr,&__t1770t__dat__pos,&__t1770t__dat__length,&__t1770t__dat__first);
  other__unsafe_ptr=__t1770t__unsafe_ptr;
  other__dat__pos=__t1770t__dat__pos;
  other__dat__length=__t1770t__dat__length;
  other__dat__first=__t1770t__dat__first;
  __t_errcode=alloc__t1301t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1771t__buf__unsafe_ptr,&__t1771t__buf__unsafe_size,&__t1771t__buf__unsafe_offset,&__t1771t__buf__unsafe_align,&__t1771t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1771t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1771t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1771t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1771t__buf__unsafe_align;
  surface__pos=__t1771t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1639t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1773t__unsafe_ptr,&__t1773t__dat__pos,&__t1773t__dat__length,&__t1773t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5884t=CHARS__buf__unsafe_ptr;
  *__t5885t=CHARS__buf__unsafe_size;
  *__t5886t=CHARS__buf__unsafe_offset;
  *__t5887t=CHARS__buf__unsafe_align;
  *__t5888t=CHARS__pos;
  *__t5889t=__t1773t__unsafe_ptr;
  *__t5890t=__t1773t__dat__pos;
  *__t5891t=__t1773t__dat__length;
  *__t5892t=__t1773t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1175t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1795t(char** __t5893t, uint64_t* __t5894t, uint32_t* __t5895t, uint32_t* __t5896t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5893t=unsafe_ptr;
  *__t5894t=unsafe_size;
  *__t5895t=unsafe_offset;
  *__t5896t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1794t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5897t, uint64_t* __t5898t, uint64_t* __t5899t, char* __t5900t) {
  char* __t1797t__unsafe_ptr=0;
  uint64_t __t1797t__unsafe_size=0;
  uint32_t __t1797t__unsafe_offset=0;
  uint32_t __t1797t__unsafe_align=0;
  uint64_t __t1798t=0;
  uint64_t __t1799t__=0;
  uint64_t __t1800t__=0;
  char* __t1801t__unsafe_ptr=0;
  uint64_t __t1801t__unsafe_size=0;
  uint32_t __t1801t__unsafe_offset=0;
  uint32_t __t1801t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t1803t=0;
  uint64_t __t1804t=0;
  char* __t1805t__unsafe_ptr=0;
  uint64_t __t1805t__dat__pos=0;
  uint64_t __t1805t__dat__length=0;
  char __t1805t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1795t(&__t1797t__unsafe_ptr,&__t1797t__unsafe_size,&__t1797t__unsafe_offset,&__t1797t__unsafe_align);
  __t1798t=1;
  len__t1705t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1799t__);
  add__t188t(__t1798t,__t1799t__,&__t1800t__);
  __t_errcode=alloc__t946t(&__t1797t__unsafe_ptr,&__t1797t__unsafe_size,&__t1797t__unsafe_offset,&__t1797t__unsafe_align,__t1800t__,&__t1801t__unsafe_ptr,&__t1801t__unsafe_size,&__t1801t__unsafe_offset,&__t1801t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1801t__unsafe_ptr;
  buf__unsafe_size=__t1801t__unsafe_size;
  buf__unsafe_offset=__t1801t__unsafe_offset;
  buf__unsafe_align=__t1801t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1804t=0;
  __t_errcode=str__t1639t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1804t,other__dat__length,other__dat__first,&__t1805t__unsafe_ptr,&__t1805t__dat__pos,&__t1805t__dat__length,&__t1805t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t821t(&__t1805t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5897t=__t1805t__unsafe_ptr;
  *__t5898t=__t1805t__dat__pos;
  *__t5899t=__t1805t__dat__length;
  *__t5900t=__t1805t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1820t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5901t, char** __t5902t, uint64_t* __t5903t, uint64_t* __t5904t, char* __t5905t) {
  int __t1821t=0;
  char* __t1823t__unsafe_ptr=0;
  uint64_t __t1823t__dat__pos=0;
  uint64_t __t1823t__dat__length=0;
  char __t1823t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1825t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1175t();
  __t_errcode=copy_null_terminated__t1794t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1823t__unsafe_ptr,&__t1823t__dat__pos,&__t1823t__dat__length,&__t1823t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1823t__unsafe_ptr;
  str__dat__pos=__t1823t__dat__pos;
  str__dat__length=__t1823t__dat__length;
  str__dat__first=__t1823t__dat__first;
  add__t823t(str__unsafe_ptr,str__dat__pos,&__t1825t__);
  _ret=__t1825t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t821t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5901t=cstr;
  *__t5902t=str__unsafe_ptr;
  *__t5903t=str__dat__pos;
  *__t5904t=str__dat__length;
  *__t5905t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1830t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5906t) {
  goto __t_return;
  __t_return:
  *__t5906t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t5328t(char* unsafe_ptr) {
  int __t5330t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int open__t5331t(const char* path, char** __t5907t) {
  int __t5333t=0;
  char* unsafe_ptr=0;
  char __t5335t__=0;
  char __t5336t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t660t(unsafe_ptr,&__t5335t__);
  not__t42t(__t5335t__,&__t5336t__);
  if(__t5336t__){
  __t_errcode=52;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5328t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5907t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t5338t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t5908t) {
  const char* __t5339t__cstr=0;
  char* __t5339t__str__unsafe_ptr=0;
  uint64_t __t5339t__str__dat__pos=0;
  uint64_t __t5339t__str__dat__length=0;
  char __t5339t__str__dat__first=0;
  const char* __t5341t__=0;
  char* __t5342t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1820t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5339t__cstr,&__t5339t__str__unsafe_ptr,&__t5339t__str__dat__pos,&__t5339t__str__dat__length,&__t5339t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1830t(__t5339t__cstr,__t5339t__str__unsafe_ptr,__t5339t__str__dat__pos,__t5339t__str__dat__length,__t5339t__str__dat__first,&__t5341t__);
  __t_errcode=open__t5331t(__t5341t__,&__t5342t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5328t(__t5342t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5908t=__t5342t__unsafe_ptr;
  
  __t_skip_returns:free__t821t(&__t5339t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t5350t(char** __t5909t, const char** __t5910t) {
  char* f__unsafe_ptr=*__t5909t;
  char __t5351t__=0;
  char __t5352t__=0;
  char* de=0;
  char __t5353t__=0;
  char __t5354t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t660t(f__unsafe_ptr,&__t5351t__);
  not__t42t(__t5351t__,&__t5352t__);
  if(__t5352t__){
  __t_errcode=63;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t660t(de,&__t5353t__);
  not__t42t(__t5353t__,&__t5354t__);
  if(__t5354t__){
  __t_errcode=64;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5909t=f__unsafe_ptr;
  *__t5910t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t5355t(char** __t5911t, char** __t5912t, uint64_t* __t5913t, uint64_t* __t5914t, char* __t5915t) {
  char* f__unsafe_ptr=*__t5911t;
  const char* __t5356t__=0;
  char* __t5357t__unsafe_ptr=0;
  uint64_t __t5357t__dat__pos=0;
  uint64_t __t5357t__dat__length=0;
  char __t5357t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t5350t(&f__unsafe_ptr,&__t5356t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1695t(__t5356t__,&__t5357t__unsafe_ptr,&__t5357t__dat__pos,&__t5357t__dat__length,&__t5357t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5911t=f__unsafe_ptr;
  *__t5912t=__t5357t__unsafe_ptr;
  *__t5913t=__t5357t__dat__pos;
  *__t5914t=__t5357t__dat__length;
  *__t5915t=__t5357t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t5421t(char** __t5916t, uint64_t nat, char** __t5917t, uint64_t* __t5918t, uint64_t* __t5919t, char* __t5920t) {
  char* data__unsafe_ptr=*__t5916t;
  char* __t5422t__unsafe_ptr=0;
  uint64_t __t5422t__dat__pos=0;
  uint64_t __t5422t__dat__length=0;
  char __t5422t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t5355t(&data__unsafe_ptr,&__t5422t__unsafe_ptr,&__t5422t__dat__pos,&__t5422t__dat__length,&__t5422t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5916t=data__unsafe_ptr;
  *__t5917t=__t5422t__unsafe_ptr;
  *__t5918t=__t5422t__dat__pos;
  *__t5919t=__t5422t__dat__length;
  *__t5920t=__t5422t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void eq__t1844t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t5921t) {
  char __t1845t__=0;
  char __t1846t__=0;
  char __t1847t=0;
  char* __t1848t__unsafe_ptr=0;
  uint64_t __t1848t__dat__pos=0;
  uint64_t __t1848t__dat__length=0;
  char __t1848t__dat__first=0;
  char __t1849t__=0;
  char__t1707t(y,&__t1845t__);
  neq__t1710t(x__dat__first,__t1845t__,&__t1846t__);
  if(__t1846t__){
  __t1847t=0;
  goto __t_return;
  }
  str__t1695t(y,&__t1848t__unsafe_ptr,&__t1848t__dat__pos,&__t1848t__dat__length,&__t1848t__dat__first);
  eq__t1837t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1848t__unsafe_ptr,__t1848t__dat__pos,__t1848t__dat__length,__t1848t__dat__first,&__t1849t__);
  __t1847t=__t1849t__;
  goto __t_return;
  __t_return:
  *__t5921t=__t1847t;
}

int unsafe_temp__t1806t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5922t, char** __t5923t, uint64_t* __t5924t, uint64_t* __t5925t, char* __t5926t) {
  int __t1807t=0;
  char* __t1808t__unsafe_ptr=0;
  uint64_t __t1808t__unsafe_size=0;
  uint32_t __t1808t__unsafe_offset=0;
  uint32_t __t1808t__unsafe_align=0;
  uint64_t __t1809t=0;
  uint64_t __t1810t__=0;
  uint64_t __t1811t__=0;
  char* __t1812t__unsafe_ptr=0;
  uint64_t __t1812t__unsafe_size=0;
  uint32_t __t1812t__unsafe_offset=0;
  uint32_t __t1812t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1814t=0;
  char __t1815t__=0;
  char first_character=0;
  uint64_t __t1816t=0;
  char* __t1817t__unsafe_ptr=0;
  uint64_t __t1817t__dat__pos=0;
  uint64_t __t1817t__dat__length=0;
  char __t1817t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1818t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1795t(&__t1808t__unsafe_ptr,&__t1808t__unsafe_size,&__t1808t__unsafe_offset,&__t1808t__unsafe_align);
  __t1809t=1;
  add__t188t(__t1809t,other__dat__length,&__t1810t__);
  add__t188t(__t1810t__,prefix__dat__length,&__t1811t__);
  __t_errcode=alloc__t946t(&__t1808t__unsafe_ptr,&__t1808t__unsafe_size,&__t1808t__unsafe_offset,&__t1808t__unsafe_align,__t1811t__,&__t1812t__unsafe_ptr,&__t1812t__unsafe_size,&__t1812t__unsafe_offset,&__t1812t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1812t__unsafe_ptr;
  buf__unsafe_size=__t1812t__unsafe_size;
  buf__unsafe_offset=__t1812t__unsafe_offset;
  buf__unsafe_align=__t1812t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1814t=0;
  eq__t134t(prefix__dat__length,__t1814t,&__t1815t__);
  if(__t1815t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1816t=0;
  __t_errcode=str__t1639t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1816t,other__dat__length,first_character,&__t1817t__unsafe_ptr,&__t1817t__dat__pos,&__t1817t__dat__length,&__t1817t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1817t__unsafe_ptr;
  str__dat__pos=__t1817t__dat__pos;
  str__dat__length=__t1817t__dat__length;
  str__dat__first=__t1817t__dat__first;
  add__t823t(str__unsafe_ptr,str__dat__pos,&__t1818t__);
  _ret=__t1818t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t821t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5922t=cstr;
  *__t5923t=str__unsafe_ptr;
  *__t5924t=str__dat__pos;
  *__t5925t=str__dat__length;
  *__t5926t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1829t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5927t) {
  goto __t_return;
  __t_return:
  *__t5927t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t5255t(const char* path, char* __t5928t) {
  int __t5257t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t5928t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t5265t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t5929t) {
  int __t5267t=0;
  const char* __t5268t__cstr=0;
  char* __t5268t__str__unsafe_ptr=0;
  uint64_t __t5268t__str__dat__pos=0;
  uint64_t __t5268t__str__dat__length=0;
  char __t5268t__str__dat__first=0;
  const char* __t5270t__=0;
  char __t5271t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1806t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t5268t__cstr,&__t5268t__str__unsafe_ptr,&__t5268t__str__dat__pos,&__t5268t__str__dat__length,&__t5268t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1829t(__t5268t__cstr,__t5268t__str__unsafe_ptr,__t5268t__str__dat__pos,__t5268t__str__dat__length,__t5268t__str__dat__first,&__t5270t__);
  is_dir__t5255t(__t5270t__,&__t5271t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5929t=__t5271t__;
  
  __t_skip_returns:free__t821t(&__t5268t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t410t(uint64_t x, uint64_t y, uint64_t* __t5930t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5930t=z;
}

static inline __attribute__((always_inline)) void reuse__t5615t(char** __t5931t, uint64_t* __t5932t, uint32_t* __t5933t, uint32_t* __t5934t, uint64_t* __t5935t, uint64_t* __t5936t) {
  char* arn__buf__unsafe_ptr=*__t5931t;
  uint64_t arn__buf__unsafe_size=*__t5932t;
  uint32_t arn__buf__unsafe_offset=*__t5933t;
  uint32_t arn__buf__unsafe_align=*__t5934t;
  uint64_t arn__pos=*__t5935t;
  uint64_t __t5616t=0;
  uint64_t __t5617t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5618t=0;
  uint64_t __t5620t__=0;
  __t5616t=0;
  add__t188t(__t5616t,arn__pos,&__t5617t__);
  tracked_position=__t5617t__;
  goto __t_return;
  __t_return:
  *__t5931t=arn__buf__unsafe_ptr;
  *__t5932t=arn__buf__unsafe_size;
  *__t5933t=arn__buf__unsafe_offset;
  *__t5934t=arn__buf__unsafe_align;
  *__t5935t=arn__pos;
  *__t5936t=tracked_position;
}

int add__t2918t(char** __t5937t, uint64_t* __t5938t, uint32_t* __t5939t, uint32_t* __t5940t, uint64_t* __t5941t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5942t, uint64_t* __t5943t, uint64_t* __t5944t, char* __t5945t) {
  char* CHARS__buf__unsafe_ptr=*__t5937t;
  uint64_t CHARS__buf__unsafe_size=*__t5938t;
  uint32_t CHARS__buf__unsafe_offset=*__t5939t;
  uint32_t CHARS__buf__unsafe_align=*__t5940t;
  uint64_t CHARS__pos=*__t5941t;
  char* __t2919t__unsafe_ptr=0;
  uint64_t __t2919t__dat__pos=0;
  uint64_t __t2919t__dat__length=0;
  char __t2919t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2920t__unsafe_ptr=0;
  uint64_t __t2920t__dat__pos=0;
  uint64_t __t2920t__dat__length=0;
  char __t2920t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2921t__=0;
  uint64_t __t2922t__=0;
  char __t2923t__=0;
  char __t2924t=0;
  uint64_t __t2925t__=0;
  char __t2926t__=0;
  char __t2927t=0;
  uint64_t __t2928t__=0;
  char* __t2929t__buf__unsafe_ptr=0;
  uint64_t __t2929t__buf__unsafe_size=0;
  uint32_t __t2929t__buf__unsafe_offset=0;
  uint32_t __t2929t__buf__unsafe_align=0;
  uint64_t __t2929t__pos=0;
  char* __t2930t____t1232t__unsafe_ptr=0;
  uint64_t __t2930t____t1232t__unsafe_size=0;
  uint32_t __t2930t____t1232t__unsafe_offset=0;
  uint32_t __t2930t____t1232t__unsafe_align=0;
  uint64_t __t2930t____t1233t=0;
  char* __t2931t__buf__unsafe_ptr=0;
  uint64_t __t2931t__buf__unsafe_size=0;
  uint32_t __t2931t__buf__unsafe_offset=0;
  uint32_t __t2931t__buf__unsafe_align=0;
  uint64_t __t2931t__pos=0;
  char* __t2932t__buf__unsafe_ptr=0;
  uint64_t __t2932t__buf__unsafe_size=0;
  uint32_t __t2932t__buf__unsafe_offset=0;
  uint32_t __t2932t__buf__unsafe_align=0;
  uint64_t __t2932t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2933t__unsafe_ptr=0;
  uint64_t __t2933t__dat__pos=0;
  uint64_t __t2933t__dat__length=0;
  char __t2933t__dat__first=0;
  char* __t2934t____t1229t__unsafe_ptr=0;
  uint64_t __t2934t____t1229t__unsafe_size=0;
  uint32_t __t2934t____t1229t__unsafe_offset=0;
  uint32_t __t2934t____t1229t__unsafe_align=0;
  uint64_t __t2934t____t1230t=0;
  uint64_t __t2936t=0;
  uint64_t __t2937t__=0;
  char* __t2938t__unsafe_ptr=0;
  uint64_t __t2938t__dat__pos=0;
  uint64_t __t2938t__dat__length=0;
  char __t2938t__dat__first=0;
  char __t2939t__=0;
  char __t2940t__=0;
  char __t2941t=0;
  uint64_t __t2942t__=0;
  char __t2943t__=0;
  char __t2944t=0;
  uint64_t __t2945t__=0;
  char* __t2947t__unsafe_ptr=0;
  uint64_t __t2947t__dat__pos=0;
  uint64_t __t2947t__dat__length=0;
  char __t2947t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2948t__=0;
  uint64_t __t2949t__=0;
  uint64_t __t2950t__=0;
  char* __t2951t__buf__unsafe_ptr=0;
  uint64_t __t2951t__buf__unsafe_size=0;
  uint32_t __t2951t__buf__unsafe_offset=0;
  uint32_t __t2951t__buf__unsafe_align=0;
  uint64_t __t2951t__pos=0;
  char* __t2952t____t1232t__unsafe_ptr=0;
  uint64_t __t2952t____t1232t__unsafe_size=0;
  uint32_t __t2952t____t1232t__unsafe_offset=0;
  uint32_t __t2952t____t1232t__unsafe_align=0;
  uint64_t __t2952t____t1233t=0;
  char* __t2953t__buf__unsafe_ptr=0;
  uint64_t __t2953t__buf__unsafe_size=0;
  uint32_t __t2953t__buf__unsafe_offset=0;
  uint32_t __t2953t__buf__unsafe_align=0;
  uint64_t __t2953t__pos=0;
  char* __t2954t__buf__unsafe_ptr=0;
  uint64_t __t2954t__buf__unsafe_size=0;
  uint32_t __t2954t__buf__unsafe_offset=0;
  uint32_t __t2954t__buf__unsafe_align=0;
  uint64_t __t2954t__pos=0;
  char* __t2955t__unsafe_ptr=0;
  uint64_t __t2955t__dat__pos=0;
  uint64_t __t2955t__dat__length=0;
  char __t2955t__dat__first=0;
  char* __t2956t__unsafe_ptr=0;
  uint64_t __t2956t__dat__pos=0;
  uint64_t __t2956t__dat__length=0;
  char __t2956t__dat__first=0;
  char __t2957t=0;
  char* __t2958t____t1229t__unsafe_ptr=0;
  uint64_t __t2958t____t1229t__unsafe_size=0;
  uint32_t __t2958t____t1229t__unsafe_offset=0;
  uint32_t __t2958t____t1229t__unsafe_align=0;
  uint64_t __t2958t____t1230t=0;
  uint64_t __t2960t=0;
  uint64_t __t2961t__=0;
  char* __t2962t__unsafe_ptr=0;
  uint64_t __t2962t__dat__pos=0;
  uint64_t __t2962t__dat__length=0;
  char __t2962t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1672t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2919t__unsafe_ptr,&__t2919t__dat__pos,&__t2919t__dat__length,&__t2919t__dat__first);
  s1__unsafe_ptr=__t2919t__unsafe_ptr;
  s1__dat__pos=__t2919t__dat__pos;
  s1__dat__length=__t2919t__dat__length;
  s1__dat__first=__t2919t__dat__first;
  str__t1672t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2920t__unsafe_ptr,&__t2920t__dat__pos,&__t2920t__dat__length,&__t2920t__dat__first);
  s2__unsafe_ptr=__t2920t__unsafe_ptr;
  s2__dat__pos=__t2920t__dat__pos;
  s2__dat__length=__t2920t__dat__length;
  s2__dat__first=__t2920t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2921t__);
  if(__t2921t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2922t__);
  eq__t134t(CHARS__pos,__t2922t__,&__t2923t__);
  __t2924t=__t2923t__;
  }
  if(__t2924t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2925t__);
  lt__t302t(__t2925t__,CHARS__buf__unsafe_size,&__t2926t__);
  __t2927t=__t2926t__;
  }
  if(__t2927t){
  len__t1705t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2928t__);
  __t_errcode=alloc__t1301t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2928t__,&__t2929t__buf__unsafe_ptr,&__t2929t__buf__unsafe_size,&__t2929t__buf__unsafe_offset,&__t2929t__buf__unsafe_align,&__t2929t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1231t(__t2929t__buf__unsafe_ptr,__t2929t__buf__unsafe_size,__t2929t__buf__unsafe_offset,__t2929t__buf__unsafe_align,__t2929t__pos,&__t2930t____t1232t__unsafe_ptr,&__t2930t____t1232t__unsafe_size,&__t2930t____t1232t__unsafe_offset,&__t2930t____t1232t__unsafe_align,&__t2930t____t1233t);
  arena__t1219t(&__t2930t____t1232t__unsafe_ptr,&__t2930t____t1232t__unsafe_size,&__t2930t____t1232t__unsafe_offset,&__t2930t____t1232t__unsafe_align,__t2930t____t1233t,&__t2931t__buf__unsafe_ptr,&__t2931t__buf__unsafe_size,&__t2931t__buf__unsafe_offset,&__t2931t__buf__unsafe_align,&__t2931t__pos);
  __t2932t__buf__unsafe_ptr=__t2931t__buf__unsafe_ptr;
  __t2932t__buf__unsafe_size=__t2931t__buf__unsafe_size;
  __t2932t__buf__unsafe_offset=__t2931t__buf__unsafe_offset;
  __t2932t__buf__unsafe_align=__t2931t__buf__unsafe_align;
  __t2932t__pos=__t2931t__pos;
  surface__buf__unsafe_ptr=__t2932t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2932t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2932t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2932t__buf__unsafe_align;
  surface__pos=__t2932t__pos;
  __t_errcode=copy__t1764t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2933t__unsafe_ptr,&__t2933t__dat__pos,&__t2933t__dat__length,&__t2933t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1228t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2934t____t1229t__unsafe_ptr,&__t2934t____t1229t__unsafe_size,&__t2934t____t1229t__unsafe_offset,&__t2934t____t1229t__unsafe_align,&__t2934t____t1230t);
  __t2936t=0;
  add__t188t(s1__dat__pos,__t2936t,&__t2937t__);
  __t_errcode=str__t1691t(__t2934t____t1229t__unsafe_ptr,__t2934t____t1229t__unsafe_size,__t2934t____t1229t__unsafe_offset,__t2934t____t1229t__unsafe_align,__t2934t____t1230t,__t2937t__,&__t2938t__unsafe_ptr,&__t2938t__dat__pos,&__t2938t__dat__length,&__t2938t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2939t__);
  if(__t2939t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2940t__);
  __t2941t=__t2940t__;
  }
  if(__t2941t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2942t__);
  eq__t134t(s2__dat__pos,__t2942t__,&__t2943t__);
  __t2944t=__t2943t__;
  }
  if(__t2944t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2945t__);
  __t_errcode=str__t1691t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2945t__,s1__dat__pos,&__t2947t__unsafe_ptr,&__t2947t__dat__pos,&__t2947t__dat__length,&__t2947t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2938t__unsafe_ptr=__t2947t__unsafe_ptr;
  __t2938t__dat__pos=__t2947t__dat__pos;
  __t2938t__dat__length=__t2947t__dat__length;
  __t2938t__dat__first=__t2947t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1705t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2948t__);
  len__t1705t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2949t__);
  add__t188t(__t2948t__,__t2949t__,&__t2950t__);
  __t_errcode=alloc__t1301t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2950t__,&__t2951t__buf__unsafe_ptr,&__t2951t__buf__unsafe_size,&__t2951t__buf__unsafe_offset,&__t2951t__buf__unsafe_align,&__t2951t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1231t(__t2951t__buf__unsafe_ptr,__t2951t__buf__unsafe_size,__t2951t__buf__unsafe_offset,__t2951t__buf__unsafe_align,__t2951t__pos,&__t2952t____t1232t__unsafe_ptr,&__t2952t____t1232t__unsafe_size,&__t2952t____t1232t__unsafe_offset,&__t2952t____t1232t__unsafe_align,&__t2952t____t1233t);
  arena__t1219t(&__t2952t____t1232t__unsafe_ptr,&__t2952t____t1232t__unsafe_size,&__t2952t____t1232t__unsafe_offset,&__t2952t____t1232t__unsafe_align,__t2952t____t1233t,&__t2953t__buf__unsafe_ptr,&__t2953t__buf__unsafe_size,&__t2953t__buf__unsafe_offset,&__t2953t__buf__unsafe_align,&__t2953t__pos);
  __t2954t__buf__unsafe_ptr=__t2953t__buf__unsafe_ptr;
  __t2954t__buf__unsafe_size=__t2953t__buf__unsafe_size;
  __t2954t__buf__unsafe_offset=__t2953t__buf__unsafe_offset;
  __t2954t__buf__unsafe_align=__t2953t__buf__unsafe_align;
  __t2954t__pos=__t2953t__pos;
  surface__buf__unsafe_ptr=__t2954t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2954t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2954t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2954t__buf__unsafe_align;
  surface__pos=__t2954t__pos;
  __t_errcode=copy__t1764t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2955t__unsafe_ptr,&__t2955t__dat__pos,&__t2955t__dat__length,&__t2955t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1764t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2956t__unsafe_ptr,&__t2956t__dat__pos,&__t2956t__dat__length,&__t2956t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1228t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2958t____t1229t__unsafe_ptr,&__t2958t____t1229t__unsafe_size,&__t2958t____t1229t__unsafe_offset,&__t2958t____t1229t__unsafe_align,&__t2958t____t1230t);
  __t2960t=0;
  add__t188t(prev_pos,__t2960t,&__t2961t__);
  __t_complain=str__t1691t(__t2958t____t1229t__unsafe_ptr,__t2958t____t1229t__unsafe_size,__t2958t____t1229t__unsafe_offset,__t2958t____t1229t__unsafe_align,__t2958t____t1230t,__t2961t__,&__t2962t__unsafe_ptr,&__t2962t__dat__pos,&__t2962t__dat__length,&__t2962t__dat__first);
  __t2957t=__t_complain;
  if(__t_complain){
  goto __t2957t__label;
  }
  ret__unsafe_ptr=__t2962t__unsafe_ptr;
  ret__dat__pos=__t2962t__dat__pos;
  ret__dat__length=__t2962t__dat__length;
  ret__dat__first=__t2962t__dat__first;
  __t2957t__label:__t2957t=__t2957t==0;
  __t2938t__unsafe_ptr=ret__unsafe_ptr;
  __t2938t__dat__pos=ret__dat__pos;
  __t2938t__dat__length=ret__dat__length;
  __t2938t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5937t=CHARS__buf__unsafe_ptr;
  *__t5938t=CHARS__buf__unsafe_size;
  *__t5939t=CHARS__buf__unsafe_offset;
  *__t5940t=CHARS__buf__unsafe_align;
  *__t5941t=CHARS__pos;
  *__t5942t=__t2938t__unsafe_ptr;
  *__t5943t=__t2938t__dat__pos;
  *__t5944t=__t2938t__dat__length;
  *__t5945t=__t2938t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1907t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t5946t) {
  int __t1908t=0;
  char __t1909t__=0;
  uint64_t __t1910t__=0;
  char* __t1911t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,s__dat__length,&__t1909t__);
  if(__t1909t__){
  __t_errcode=22;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t1910t__);
  add__t823t(s__unsafe_ptr,__t1910t__,&__t1911t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5946t=__t1911t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1933t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t5947t, uint64_t* __t5948t, uint64_t* __t5949t, char* __t5950t) {
  char* __t1934t__unsafe_ptr=0;
  uint64_t __t1934t__dat__pos=0;
  uint64_t __t1934t__dat__length=0;
  char __t1934t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1935t__=0;
  char* __t1936t__unsafe_ptr=0;
  uint64_t __t1936t__dat__pos=0;
  uint64_t __t1936t__dat__length=0;
  char __t1936t__dat__first=0;
  char __t1937t__=0;
  char __t1938t__=0;
  char __t1939t=0;
  char __t1940t__=0;
  uint64_t __t1942t__=0;
  uint64_t new_length=0;
  uint64_t __t1943t=0;
  char __t1944t__=0;
  char new_first=0;
  char* __t1946t__=0;
  char __t1947t__value=0;
  uint64_t __t1948t__=0;
  char* __t1949t__unsafe_ptr=0;
  uint64_t __t1949t__dat__pos=0;
  uint64_t __t1949t__dat__length=0;
  char __t1949t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1672t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1934t__unsafe_ptr,&__t1934t__dat__pos,&__t1934t__dat__length,&__t1934t__dat__first);
  s__unsafe_ptr=__t1934t__unsafe_ptr;
  s__dat__pos=__t1934t__dat__pos;
  s__dat__length=__t1934t__dat__length;
  s__dat__first=__t1934t__dat__first;
  eq__t134t(from,to,&__t1935t__);
  if(__t1935t__){
  str__t1695t(__t440t,&__t1936t__unsafe_ptr,&__t1936t__dat__pos,&__t1936t__dat__length,&__t1936t__dat__first);
  goto __t_return;
  }
  gt__t326t(from,to,&__t1937t__);
  if(!__t1937t__){
  gt__t326t(to,s__dat__length,&__t1938t__);
  __t1939t=__t1938t__;
  }
  else{
  __t1939t=0;
  not__t42t(__t1939t,&__t1940t__);
  __t1939t=__t1940t__;
  }
  if(__t1939t){
  __t_errcode=29;
  goto __t_failure;
  }
  sub__t410t(to,from,&__t1942t__);
  new_length=__t1942t__;
  __t1943t=0;
  neq__t158t(from,__t1943t,&__t1944t__);
  if(__t1944t__){
  __t_errcode=get__t1907t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1946t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1946t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1947t__value,__t1946t__,1);
  new_first=__t1947t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1948t__);
  str__t1635t(s__unsafe_ptr,__t1948t__,new_length,new_first,&__t1949t__unsafe_ptr,&__t1949t__dat__pos,&__t1949t__dat__length,&__t1949t__dat__first);
  __t1936t__unsafe_ptr=__t1949t__unsafe_ptr;
  __t1936t__dat__pos=__t1949t__dat__pos;
  __t1936t__dat__length=__t1949t__dat__length;
  __t1936t__dat__first=__t1949t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5947t=__t1936t__unsafe_ptr;
  *__t5948t=__t1936t__dat__pos;
  *__t5949t=__t1936t__dat__length;
  *__t5950t=__t1936t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t2012t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5951t) {
  char* __t2013t__unsafe_ptr=0;
  uint64_t __t2013t__dat__pos=0;
  uint64_t __t2013t__dat__length=0;
  char __t2013t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2014t__unsafe_ptr=0;
  uint64_t __t2014t__dat__pos=0;
  uint64_t __t2014t__dat__length=0;
  char __t2014t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t2015t=0;
  uint64_t __t2016t__=0;
  uint64_t d=0;
  char __t2017t__=0;
  char __t2018t=0;
  char* __t2019t__unsafe_ptr=0;
  uint64_t __t2019t__dat__pos=0;
  uint64_t __t2019t__dat__length=0;
  char __t2019t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t2020t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1672t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2013t__unsafe_ptr,&__t2013t__dat__pos,&__t2013t__dat__length,&__t2013t__dat__first);
  stack__unsafe_ptr=__t2013t__unsafe_ptr;
  stack__dat__pos=__t2013t__dat__pos;
  stack__dat__length=__t2013t__dat__length;
  stack__dat__first=__t2013t__dat__first;
  str__t1695t(_needle,&__t2014t__unsafe_ptr,&__t2014t__dat__pos,&__t2014t__dat__length,&__t2014t__dat__first);
  needle__unsafe_ptr=__t2014t__unsafe_ptr;
  needle__dat__pos=__t2014t__dat__pos;
  needle__dat__length=__t2014t__dat__length;
  needle__dat__first=__t2014t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t402t(n,needle__dat__length,&__t2016t__);
  __t2015t=__t_complain;
  if(__t_complain){
  goto __t2015t__label;
  }
  d=__t2016t__;
  __t2015t__label:__t2015t=__t2015t==0;
  not__t42t(__t2015t,&__t2017t__);
  if(__t2017t__){
  __t2018t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1933t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t2019t__unsafe_ptr,&__t2019t__dat__pos,&__t2019t__dat__length,&__t2019t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t2019t__unsafe_ptr;
  ret__dat__pos=__t2019t__dat__pos;
  ret__dat__length=__t2019t__dat__length;
  ret__dat__first=__t2019t__dat__first;
  eq__t1837t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2020t__);
  __t2018t=__t2020t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5951t=__t2018t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t756t(uint64_t to, uint64_t* __t5952t, uint64_t* __t5953t) {
  uint64_t __t757t=0;
  uint64_t from=0;
  __t757t=0;
  from=__t757t;
  goto __t_return;
  __t_return:
  *__t5952t=from;
  *__t5953t=to;
}

static inline __attribute__((always_inline)) void range__t773t(uint64_t _from, uint64_t to, uint64_t* __t5954t, uint64_t* __t5955t) {
  uint64_t __t774t=0;
  uint64_t __t775t__=0;
  uint64_t __t776t=0;
  uint64_t from=0;
  __t774t=0;
  add__t188t(__t774t,_from,&__t775t__);
  __t776t=__t775t__;
  from=__t776t;
  goto __t_return;
  __t_return:
  *__t5954t=from;
  *__t5955t=to;
}

static inline __attribute__((always_inline)) int mutget__t778t(uint64_t* __t5956t, uint64_t r__to, uint64_t skipped, uint64_t* __t5957t) {
  uint64_t r__from=*__t5956t;
  char __t779t__=0;
  uint64_t ret=0;
  uint64_t __t780t=0;
  uint64_t __t781t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(r__from,r__to,&__t779t__);
  if(__t779t__){
  __t_errcode=16;
  goto __t_failure;
  }
  ret=r__from;
  __t780t=1;
  add__t188t(ret,__t780t,&__t781t__);
  r__from=__t781t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5956t=r__from;
  *__t5957t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2098t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5958t) {
  char* __t2099t__unsafe_ptr=0;
  uint64_t __t2099t__dat__pos=0;
  uint64_t __t2099t__dat__length=0;
  char __t2099t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2100t__unsafe_ptr=0;
  uint64_t __t2100t__dat__pos=0;
  uint64_t __t2100t__dat__length=0;
  char __t2100t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t2101t=0;
  uint64_t __t2102t__=0;
  uint64_t n=0;
  char __t2103t__=0;
  char __t2104t=0;
  uint64_t __t2105t=0;
  uint64_t __t2106t__from=0;
  uint64_t __t2106t__to=0;
  uint64_t __t2107t__from=0;
  uint64_t __t2107t__to=0;
  char __t2108t=0;
  uint64_t __t2109t__=0;
  uint64_t i=0;
  char __t2110t=0;
  uint64_t __t2111t__=0;
  char* __t2112t__unsafe_ptr=0;
  uint64_t __t2112t__dat__pos=0;
  uint64_t __t2112t__dat__length=0;
  char __t2112t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t2113t__=0;
  char __t2114t=0;
  char __t2115t=0;
  int __t_complain=0;
  str__t1672t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2099t__unsafe_ptr,&__t2099t__dat__pos,&__t2099t__dat__length,&__t2099t__dat__first);
  stack__unsafe_ptr=__t2099t__unsafe_ptr;
  stack__dat__pos=__t2099t__dat__pos;
  stack__dat__length=__t2099t__dat__length;
  stack__dat__first=__t2099t__dat__first;
  str__t1695t(_needle,&__t2100t__unsafe_ptr,&__t2100t__dat__pos,&__t2100t__dat__length,&__t2100t__dat__first);
  needle__unsafe_ptr=__t2100t__unsafe_ptr;
  needle__dat__pos=__t2100t__dat__pos;
  needle__dat__length=__t2100t__dat__length;
  needle__dat__first=__t2100t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t402t(stack__dat__length,d,&__t2102t__);
  __t2101t=__t_complain;
  if(__t_complain){
  goto __t2101t__label;
  }
  n=__t2102t__;
  __t2101t__label:__t2101t=__t2101t==0;
  not__t42t(__t2101t,&__t2103t__);
  if(__t2103t__){
  __t2104t=0;
  goto __t_return;
  }
  of__t756t(n,&__t2106t__from,&__t2106t__to);
  range__t773t(__t2106t__from,__t2106t__to,&__t2107t__from,&__t2107t__to);
  __t2105t=0-1;
  while(1){
  __t2105t=__t2105t+1;
  __t_complain=mutget__t778t(&__t2107t__from,__t2107t__to,__t2105t,&__t2109t__);
  __t2108t=__t_complain;
  if(__t_complain){
  goto __t2108t__label;
  }
  i=__t2109t__;
  __t2108t__label:__t2108t=__t2108t==0;
  if(!__t2108t){
  break;
  }
  add__t188t(i,d,&__t2111t__);
  __t_complain=slice__t1933t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t2111t__,&__t2112t__unsafe_ptr,&__t2112t__dat__pos,&__t2112t__dat__length,&__t2112t__dat__first);
  __t2110t=__t_complain;
  if(__t_complain){
  goto __t2110t__label;
  }
  sliced__unsafe_ptr=__t2112t__unsafe_ptr;
  sliced__dat__pos=__t2112t__dat__pos;
  sliced__dat__length=__t2112t__dat__length;
  sliced__dat__first=__t2112t__dat__first;
  __t2110t__label:__t2110t=__t2110t==0;
  eq__t1837t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2113t__);
  if(__t2113t__){
  __t2114t=1;
  __t2104t=__t2114t;
  goto __t_return;
  }
  }
  __t2115t=0;
  __t2104t=__t2115t;
  goto __t_return;
  __t_return:
  *__t5958t=__t2104t;
}

static inline __attribute__((always_inline)) void restore_stdout__t5534t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void stdout_to_err__t5535t(int64_t* __t5959t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5959t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t1901t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1902t=0;
  const char* endl=0;
  endl=__t452t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void popen__t4573t(const char* cmd, char** __t5960t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t5960t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4572t(char* unsafe_ptr, int64_t* __t5961t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t5961t=status;
}

static inline __attribute__((always_inline)) void int__t635t(uint64_t x, int64_t* __t5962t) {
  int __t636t=0;
  int __t637t=0;
  int __t638t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5962t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t5963t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t5963t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t5964t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5964t=z;
}

static inline __attribute__((always_inline)) int open__t4574t(const char* cmd, char** __t5965t) {
  char* __t4575t__=0;
  char* unsafe_ptr=0;
  char __t4576t__=0;
  char __t4577t__=0;
  char __t4578t__=0;
  int64_t __t4579t__=0;
  int64_t status=0;
  uint64_t __t4580t=0;
  int64_t __t4581t__=0;
  char __t4582t__=0;
  char __t4583t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4573t(cmd,&__t4575t__);
  unsafe_ptr=__t4575t__;
  exists__t660t(unsafe_ptr,&__t4576t__);
  not__t42t(__t4576t__,&__t4577t__);
  if(__t4577t__){
  __t_errcode=47;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t660t(unsafe_ptr,&__t4578t__);
  if(__t4578t__){
  pclose__t4572t(unsafe_ptr,&__t4579t__);
  status=__t4579t__;
  unsafe_ptr=0;
  __t4580t=0;
  int__t635t(__t4580t,&__t4581t__);
  neq__t147t(status,__t4581t__,&__t4582t__);
  if(__t4582t__){
  __t_complain=48;
  goto __t4583t__label;
  __t4583t__label:__t4583t=__t4583t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5965t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4585t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t5966t) {
  const char* __t4586t__cstr=0;
  char* __t4586t__str__unsafe_ptr=0;
  uint64_t __t4586t__str__dat__pos=0;
  uint64_t __t4586t__str__dat__length=0;
  char __t4586t__str__dat__first=0;
  const char* __t4588t__=0;
  char* __t4589t__unsafe_ptr=0;
  char __t4590t____t4578t__=0;
  int64_t __t4590t____t4579t__=0;
  int64_t __t4590t__status=0;
  uint64_t __t4590t____t4580t=0;
  int64_t __t4590t____t4581t__=0;
  char __t4590t____t4582t__=0;
  char __t4590t____t4583t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1820t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4586t__cstr,&__t4586t__str__unsafe_ptr,&__t4586t__str__dat__pos,&__t4586t__str__dat__length,&__t4586t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1830t(__t4586t__cstr,__t4586t__str__unsafe_ptr,__t4586t__str__dat__pos,__t4586t__str__dat__length,__t4586t__str__dat__first,&__t4588t__);
  __t_errcode=open__t4574t(__t4588t__,&__t4589t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t660t(__t4589t__unsafe_ptr,&__t4590t____t4578t__);
  if(__t4590t____t4578t__){
  pclose__t4572t(__t4589t__unsafe_ptr,&__t4590t____t4579t__);
  __t4590t__status=__t4590t____t4579t__;
  __t4589t__unsafe_ptr=0;
  __t4590t____t4580t=0;
  int__t635t(__t4590t____t4580t,&__t4590t____t4581t__);
  neq__t147t(__t4590t__status,__t4590t____t4581t__,&__t4590t____t4582t__);
  if(__t4590t____t4582t__){
  __t_complain=48;
  goto __t4583t__label;
  __t4583t__label:__t4590t____t4583t=__t4590t____t4583t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5966t=__t4589t__unsafe_ptr;
  
  __t_skip_returns:free__t821t(&__t4586t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4265t(int64_t value, char* __t5967t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t5967t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4264t(int64_t value, const char** __t5968t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5968t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t5969t) {
  const char* value=0;
  *__t5969t=value;
}

int run__t5463t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t5970t) {
  char* __t5464t__unsafe_ptr=0;
  char __t5465t____t4590t____t4578t__=0;
  int64_t __t5465t____t4590t____t4579t__=0;
  int64_t __t5465t____t4590t__status=0;
  uint64_t __t5465t____t4590t____t4580t=0;
  int64_t __t5465t____t4590t____t4581t__=0;
  char __t5465t____t4590t____t4582t__=0;
  char __t5465t____t4590t____t4583t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t5466t=0;
  int64_t error=0;
  char __t5467t__=0;
  char __t5468t__=0;
  const char* __t5469t__=0;
  const char* __t5470t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4585t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5464t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t5464t__unsafe_ptr;
  exists__t660t(__t5464t__unsafe_ptr,&__t5465t____t4590t____t4578t__);
  if(__t5465t____t4590t____t4578t__){
  pclose__t4572t(__t5464t__unsafe_ptr,&__t5465t____t4590t____t4579t__);
  __t5465t____t4590t__status=__t5465t____t4590t____t4579t__;
  __t5464t__unsafe_ptr=0;
  __t5465t____t4590t____t4580t=0;
  int__t635t(__t5465t____t4590t____t4580t,&__t5465t____t4590t____t4581t__);
  neq__t147t(__t5465t____t4590t__status,__t5465t____t4590t____t4581t__,&__t5465t____t4590t____t4582t__);
  if(__t5465t____t4590t____t4582t__){
  __t_complain=48;
  goto __t4583t__label;
  __t4583t__label:__t5465t____t4590t____t4583t=__t5465t____t4590t____t4583t==0;
  }
  }
  __t5466t=__t_complain;
  error=__t5466t;
  ok__t4265t(error,&__t5467t__);
  not__t42t(__t5467t__,&__t5468t__);
  if(__t5468t__){
  cstr__t4264t(error,&__t5469t__);
  goto __t_return;
  }
  cstr__t1t(&__t5470t__);
  __t5469t__=__t5470t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5970t=__t5469t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5971t) {
  int value=0;
  *__t5971t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5972t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5972t=__t54t__;
}

static inline __attribute__((always_inline)) void exists__t1633t(const char* c, char* __t5973t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5973t=z;
}

static inline __attribute__((always_inline)) void nn__t439t(const char* value, const char** __t5974t, const char** __t5975t) {
  const char* __t441t=0;
  __t441t=__t440t;
  goto __t_return;
  __t_return:
  *__t5974t=value;
  *__t5975t=__t441t;
}

static inline __attribute__((always_inline)) void print__t448t(const char* value, const char* endl) {
  int __t449t=0;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void set__t484t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void set__t604t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print_marker__t5499t(char colors__initialized) {
  const char* __t5501t__value=0;
  const char* __t5501t____t441t=0;
  int __t5503t=0;
  char __t5504t=0;
  char __t5505t=0;
  const char* __t5510t__value=0;
  const char* __t5510t____t441t=0;
  int __t5512t=0;
  const char* __t5515t__value=0;
  const char* __t5515t____t441t=0;
  nn__t439t(__t4285t,&__t5501t__value,&__t5501t____t441t);
  print__t448t(__t5501t__value,__t5501t____t441t);
  __t5505t=1;
  if(__t5506t!=__t5506t){
  __t5505t=0;
  }
  if(__t5505t){
  __t5504t=1;
  }
  if(__t5504t){
  set__t484t(colors__initialized);
  nn__t439t(__t5509t,&__t5510t__value,&__t5510t____t441t);
  print__t448t(__t5510t__value,__t5510t____t441t);
  }
  set__t604t(colors__initialized);
  nn__t439t(__t5496t,&__t5515t__value,&__t5515t____t441t);
  print__t448t(__t5515t__value,__t5515t____t441t);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print__t450t(const char* value) {
  int __t451t=0;
  const char* endl=0;
  endl=__t452t;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void set__t488t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[32m");
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print_marker__t5480t(char colors__initialized) {
  const char* __t5482t__value=0;
  const char* __t5482t____t441t=0;
  char __t5484t=0;
  char __t5485t=0;
  const char* __t5490t__value=0;
  const char* __t5490t____t441t=0;
  int __t5492t=0;
  int __t5493t=0;
  const char* __t5497t__value=0;
  const char* __t5497t____t441t=0;
  nn__t439t(__t4285t,&__t5482t__value,&__t5482t____t441t);
  print__t448t(__t5482t__value,__t5482t____t441t);
  __t5485t=1;
  if(__t5486t!=__t5486t){
  __t5485t=0;
  }
  if(__t5485t){
  __t5484t=1;
  }
  if(__t5484t){
  set__t488t(colors__initialized);
  nn__t439t(__t5489t,&__t5490t__value,&__t5490t____t441t);
  print__t448t(__t5490t__value,__t5490t____t441t);
  }
  set__t604t(colors__initialized);
  nn__t439t(__t5496t,&__t5497t__value,&__t5497t____t441t);
  print__t448t(__t5497t__value,__t5497t____t441t);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int test__t5559t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t5976t) {
  int64_t __t5561t__=0;
  const char* __t5564t__=0;
  const char* __t5565t=0;
  const char* error=0;
  int __t5566t=0;
  int __t5567t__=0;
  char __t5568t__=0;
  const char* __t5569t__=0;
  const char* __t5571t__value=0;
  const char* __t5571t____t441t=0;
  char __t5573t__=0;
  char __t5577t=0;
  char __t5582t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5535t(&__t5561t__);
  print__t1901t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t5463t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5564t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5565t=__t5564t__;
  error=__t5565t;
  not__t53t(__t5566t,&__t5567t__);
  if(should_fail){
  exists__t1633t(error,&__t5568t__);
  if(__t5568t__){
  cstr__t1t(&__t5569t__);
  error=__t5569t__;
  }
  else{
  error=__t5570t;
  }
  }
  nn__t439t(__t5543t,&__t5571t__value,&__t5571t____t441t);
  print__t448t(__t5571t__value,__t5571t____t441t);
  exists__t1633t(error,&__t5573t__);
  if(__t5573t__){
  print_marker__t5499t(colors__initialized);
  print__t450t(error);
  __t5577t=0;
  goto __t_return;
  }
  print_marker__t5480t(colors__initialized);
  print__t450t(__t5580t);
  __t5582t=1;
  __t5577t=__t5582t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5976t=__t5577t;
  
  __t_skip_returns:restore_stdout__t5534t(__t5561t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t461t(uint64_t value, const char* endl) {
  int __t462t=0;
  printf("%llu%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void nn__t446t(uint64_t value, uint64_t* __t5977t, const char** __t5978t) {
  const char* __t447t=0;
  __t447t=__t440t;
  goto __t_return;
  __t_return:
  *__t5977t=value;
  *__t5978t=__t447t;
}

static inline __attribute__((always_inline)) int _main__t5621t() {
  char* __t5623t__unsafe_ptr=0;
  uint64_t __t5623t__dat__pos=0;
  uint64_t __t5623t__dat__length=0;
  char __t5623t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5624t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5626t=0;
  char* __t5627t__unsafe_ptr=0;
  uint64_t __t5627t__unsafe_size=0;
  uint32_t __t5627t__unsafe_offset=0;
  uint32_t __t5627t__unsafe_align=0;
  char* __t5629t__buf__unsafe_ptr=0;
  uint64_t __t5629t__buf__unsafe_size=0;
  uint32_t __t5629t__buf__unsafe_offset=0;
  uint32_t __t5629t__buf__unsafe_align=0;
  uint64_t __t5629t__pos=0;
  char* __t5630t__buf__unsafe_ptr=0;
  uint64_t __t5630t__buf__unsafe_size=0;
  uint32_t __t5630t__buf__unsafe_offset=0;
  uint32_t __t5630t__buf__unsafe_align=0;
  uint64_t __t5630t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char __t5631t=0;
  char* __t5633t__unsafe_ptr=0;
  uint64_t __t5633t__dat__pos=0;
  uint64_t __t5633t__dat__length=0;
  char __t5633t__dat__first=0;
  char* preferred_backend__unsafe_ptr=0;
  uint64_t preferred_backend__dat__pos=0;
  uint64_t preferred_backend__dat__length=0;
  char preferred_backend__dat__first=0;
  int __t5642t=0;
  char* __t5644t__unsafe_ptr=0;
  uint64_t __t5644t__dat__pos=0;
  uint64_t __t5644t__dat__length=0;
  char __t5644t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  char* __t5635t__unsafe_ptr=0;
  uint64_t __t5635t__dat__pos=0;
  uint64_t __t5635t__dat__length=0;
  char __t5635t__dat__first=0;
  char* __t5637t__unsafe_ptr=0;
  uint64_t __t5637t__dat__pos=0;
  uint64_t __t5637t__dat__length=0;
  char __t5637t__dat__first=0;
  uint64_t __t5645t=0;
  uint64_t __t5646t=0;
  uint64_t counter=0;
  uint64_t __t5647t=0;
  uint64_t __t5648t=0;
  uint64_t failures=0;
  uint64_t __t5649t=0;
  char* __t5650t__unsafe_ptr=0;
  char __t5652t=0;
  char* __t5653t__unsafe_ptr=0;
  uint64_t __t5653t__dat__pos=0;
  uint64_t __t5653t__dat__length=0;
  char __t5653t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5655t__=0;
  char __t5656t__=0;
  char __t5657t__=0;
  char __t5658t=0;
  char __t5659t__=0;
  uint64_t __t5660t__=0;
  uint64_t __t5661t____t5618t=0;
  uint64_t __t5661t____t5620t__=0;
  char* __t5662t__unsafe_ptr=0;
  uint64_t __t5662t__dat__pos=0;
  uint64_t __t5662t__dat__length=0;
  char __t5662t__dat__first=0;
  char* __t5664t__unsafe_ptr=0;
  uint64_t __t5664t__dat__pos=0;
  uint64_t __t5664t__dat__length=0;
  char __t5664t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5665t=0;
  char* __t5666t__unsafe_ptr=0;
  char __t5668t=0;
  char* __t5669t__unsafe_ptr=0;
  uint64_t __t5669t__dat__pos=0;
  uint64_t __t5669t__dat__length=0;
  char __t5669t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5671t__=0;
  char __t5672t__=0;
  uint64_t __t5673t__=0;
  uint64_t __t5674t____t5618t=0;
  uint64_t __t5674t____t5620t__=0;
  uint64_t __t5675t=0;
  uint64_t __t5676t__=0;
  char __t5678t__=0;
  char should_fail=0;
  char* __t5679t__unsafe_ptr=0;
  uint64_t __t5679t__dat__pos=0;
  uint64_t __t5679t__dat__length=0;
  char __t5679t__dat__first=0;
  char* __t5680t__unsafe_ptr=0;
  uint64_t __t5680t__dat__pos=0;
  uint64_t __t5680t__dat__length=0;
  char __t5680t__dat__first=0;
  char __t5681t__=0;
  char __t5682t__=0;
  uint64_t __t5683t=0;
  uint64_t __t5684t__=0;
  int64_t __t5685t__=0;
  uint64_t __t5687t=0;
  char __t5688t__=0;
  const char* __t5702t__value=0;
  const char* __t5702t____t441t=0;
  const char* __t5692t__value=0;
  const char* __t5692t____t441t=0;
  const char* __t5697t__value=0;
  const char* __t5697t____t441t=0;
  uint64_t __t5708t__value=0;
  const char* __t5708t____t447t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1695t(__t5622t,&__t5623t__unsafe_ptr,&__t5623t__dat__pos,&__t5623t__dat__length,&__t5623t__dat__first);
  test_root__unsafe_ptr=__t5623t__unsafe_ptr;
  test_root__dat__pos=__t5623t__dat__pos;
  test_root__dat__length=__t5623t__dat__length;
  test_root__dat__first=__t5623t__dat__first;
  colors__t478t(&__t5624t__initialized);
  colors__initialized=__t5624t__initialized;
  __t5626t=128;
  __t_errcode=alloc__t1101t(__t5626t,&__t5627t__unsafe_ptr,&__t5627t__unsafe_size,&__t5627t__unsafe_offset,&__t5627t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1222t(&__t5627t__unsafe_ptr,&__t5627t__unsafe_size,&__t5627t__unsafe_offset,&__t5627t__unsafe_align,&__t5629t__buf__unsafe_ptr,&__t5629t__buf__unsafe_size,&__t5629t__buf__unsafe_offset,&__t5629t__buf__unsafe_align,&__t5629t__pos);
  __t5630t__buf__unsafe_ptr=__t5629t__buf__unsafe_ptr;
  __t5630t__buf__unsafe_size=__t5629t__buf__unsafe_size;
  __t5630t__buf__unsafe_offset=__t5629t__buf__unsafe_offset;
  __t5630t__buf__unsafe_align=__t5629t__buf__unsafe_align;
  __t5630t__pos=__t5629t__pos;
  CHARS__buf__unsafe_ptr=__t5630t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5630t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5630t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5630t__buf__unsafe_align;
  CHARS__pos=__t5630t__pos;
  __t_complain=arg_after__t4423t(__t5632t,&__t5633t__unsafe_ptr,&__t5633t__dat__pos,&__t5633t__dat__length,&__t5633t__dat__first);
  __t5631t=__t_complain;
  if(__t_complain){
  goto __t5631t__label;
  }
  preferred_backend__unsafe_ptr=__t5633t__unsafe_ptr;
  preferred_backend__dat__pos=__t5633t__dat__pos;
  preferred_backend__dat__length=__t5633t__dat__length;
  preferred_backend__dat__first=__t5633t__dat__first;
  __t5631t__label:__t5631t=__t5631t==0;
  if(__t5631t){
  __t_errcode=add__t3008t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5634t,preferred_backend__unsafe_ptr,preferred_backend__dat__pos,preferred_backend__dat__length,preferred_backend__dat__first,&__t5635t__unsafe_ptr,&__t5635t__dat__pos,&__t5635t__dat__length,&__t5635t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2963t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5635t__unsafe_ptr,__t5635t__dat__pos,__t5635t__dat__length,__t5635t__dat__first,__t5636t,&__t5637t__unsafe_ptr,&__t5637t__dat__pos,&__t5637t__dat__length,&__t5637t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5637t__unsafe_ptr;
  command_base__dat__pos=__t5637t__dat__pos;
  command_base__dat__length=__t5637t__dat__length;
  command_base__dat__first=__t5637t__dat__first;
  }
  else{
  __t_errcode=copy__t1769t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5643t,&__t5644t__unsafe_ptr,&__t5644t__dat__pos,&__t5644t__dat__length,&__t5644t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5644t__unsafe_ptr;
  command_base__dat__pos=__t5644t__dat__pos;
  command_base__dat__length=__t5644t__dat__length;
  command_base__dat__first=__t5644t__dat__first;
  }
  __t5645t=0;
  __t5646t=__t5645t;
  counter=__t5646t;
  __t5647t=0;
  __t5648t=__t5647t;
  failures=__t5648t;
  __t_errcode=open__t5338t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5650t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5649t=0-1;
  while(1){
  __t5649t=__t5649t+1;
  __t_complain=mutget__t5421t(&__t5650t__unsafe_ptr,__t5649t,&__t5653t__unsafe_ptr,&__t5653t__dat__pos,&__t5653t__dat__length,&__t5653t__dat__first);
  __t5652t=__t_complain;
  if(__t_complain){
  goto __t5652t__label;
  }
  path__unsafe_ptr=__t5653t__unsafe_ptr;
  path__dat__pos=__t5653t__dat__pos;
  path__dat__length=__t5653t__dat__length;
  path__dat__first=__t5653t__dat__first;
  __t5652t__label:__t5652t=__t5652t==0;
  if(!__t5652t){
  break;
  }
  eq__t1844t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5654t,&__t5655t__);
  if(!__t5655t__){
  __t_errcode=is_dir__t5265t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5656t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5656t__,&__t5657t__);
  __t5658t=__t5657t__;
  }
  else{
  __t5658t=0;
  not__t42t(__t5658t,&__t5659t__);
  __t5658t=__t5659t__;
  }
  if(__t5658t){
  continue;
  }
  reuse__t5615t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5660t__);
  __t_errcode=add__t2918t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5662t__unsafe_ptr,&__t5662t__dat__pos,&__t5662t__dat__length,&__t5662t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2963t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5662t__unsafe_ptr,__t5662t__dat__pos,__t5662t__dat__length,__t5662t__dat__first,__t5663t,&__t5664t__unsafe_ptr,&__t5664t__dat__pos,&__t5664t__dat__length,&__t5664t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5664t__unsafe_ptr;
  dir_path__dat__pos=__t5664t__dat__pos;
  dir_path__dat__length=__t5664t__dat__length;
  dir_path__dat__first=__t5664t__dat__first;
  __t_errcode=open__t5338t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5666t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5665t=0-1;
  while(1){
  __t5665t=__t5665t+1;
  __t_complain=mutget__t5421t(&__t5666t__unsafe_ptr,__t5665t,&__t5669t__unsafe_ptr,&__t5669t__dat__pos,&__t5669t__dat__length,&__t5669t__dat__first);
  __t5668t=__t_complain;
  if(__t_complain){
  goto __t5668t__label;
  }
  entry__unsafe_ptr=__t5669t__unsafe_ptr;
  entry__dat__pos=__t5669t__dat__pos;
  entry__dat__length=__t5669t__dat__length;
  entry__dat__first=__t5669t__dat__first;
  __t5668t__label:__t5668t=__t5668t==0;
  if(!__t5668t){
  break;
  }
  __t_errcode=ends_with__t2012t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5670t,&__t5671t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5671t__,&__t5672t__);
  if(__t5672t__){
  continue;
  }
  reuse__t5615t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5673t__);
  __t5675t=1;
  add__t188t(counter,__t5675t,&__t5676t__);
  counter=__t5676t__;
  contains__t2098t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5677t,&__t5678t__);
  should_fail=__t5678t__;
  __t_errcode=add__t2918t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5679t__unsafe_ptr,&__t5679t__dat__pos,&__t5679t__dat__length,&__t5679t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2918t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5679t__unsafe_ptr,__t5679t__dat__pos,__t5679t__dat__length,__t5679t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5680t__unsafe_ptr,&__t5680t__dat__pos,&__t5680t__dat__length,&__t5680t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5559t(colors__initialized,__t5680t__unsafe_ptr,__t5680t__dat__pos,__t5680t__dat__length,__t5680t__dat__first,should_fail,&__t5681t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5681t__,&__t5682t__);
  if(__t5682t__){
  __t5683t=1;
  add__t188t(failures,__t5683t,&__t5684t__);
  failures=__t5684t__;
  }
  __t5674t____t5618t=0;
  sub__t410t(__t5673t__,__t5674t____t5618t,&__t5674t____t5620t__);
  CHARS__pos=__t5674t____t5620t__;
  }
  __t5661t____t5618t=0;
  sub__t410t(__t5660t__,__t5661t____t5618t,&__t5661t____t5620t__);
  CHARS__pos=__t5661t____t5620t__;
  closedir__t5328t(__t5666t__unsafe_ptr);
  }
  stdout_to_err__t5535t(&__t5685t__);
  __t5687t=0;
  eq__t134t(failures,__t5687t,&__t5688t__);
  if(__t5688t__){
  set__t488t(colors__initialized);
  nn__t439t(__t5691t,&__t5692t__value,&__t5692t____t441t);
  print__t448t(__t5692t__value,__t5692t____t441t);
  set__t604t(colors__initialized);
  nn__t439t(__t5696t,&__t5697t__value,&__t5697t____t441t);
  print__t448t(__t5697t__value,__t5697t____t441t);
  }
  else{
  set__t484t(colors__initialized);
  nn__t439t(__t5701t,&__t5702t__value,&__t5702t____t441t);
  print__t448t(__t5702t__value,__t5702t____t441t);
  set__t604t(colors__initialized);
  print__t461t(failures,__t5706t);
  }
  nn__t446t(counter,&__t5708t__value,&__t5708t____t447t);
  print__t461t(__t5708t__value,__t5708t____t447t);
  print__t450t(__t5710t);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:restore_stdout__t5534t(__t5685t__);
  closedir__t5328t(__t5650t__unsafe_ptr);
  free__t821t(&__t5627t__unsafe_ptr);
  if(__t5624t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5712t() {
  char __t5715t=0;
  char __t5717t__=0;
  int64_t __t5718t=0;
  const char* __t5719t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t425t();
  __t_complain=_main__t5621t();
  __t5715t=__t_complain;
  if(__t_complain){
  goto __t5715t__label;
  }
  __t5715t__label:__t5715t=__t5715t==0;
  not__t42t(__t5715t,&__t5717t__);
  if(__t5717t__){
  __t5718t=__t_complain;
  cstr__t4264t(__t5718t,&__t5719t__);
  print__t450t(__t5719t__);
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
  __t_errcode=main__t5712t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}