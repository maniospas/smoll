#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t3628t="./tests/passing/";
const char* const __t3688t="no errors across ";
const char* const __t3611t="\r";
const char* const __t3577t="X";
const char* const __t3593t="pending";
const char* const __t3698t=" out of ";
const char* const __t3659t="/";
const char* const __t3639t="./smoll --cleanup ";
const char* const __t3702t=" tests";
const char* const __t2212t="+";
const char* const __t3549t="[";
const char* const __t391t="";
const char* const __t3554t="success";
const char* const __t3683t="PASSING ";
const char* const __t3693t="FAILED ";
const char* const __t403t="\n";
const char* const __t3574t="failure";
const char* const __t3557t="V";
const char* const __t3564t="] ";
const char* const __t3666t=".s";
const char* const __t3618t="    ";
const char* const __t3650t="..";
static const char* __t_all_errcodes[54] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
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
"invalid float conversion from string without a value after the dot",
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
"failed to move to end of closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir"
};

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1201t(char** __t3704t, uint64_t* __t3705t, uint32_t* __t3706t, uint32_t* __t3707t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3704t=unsafe_ptr;
  *__t3705t=unsafe_size;
  *__t3706t=unsafe_offset;
  *__t3707t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t3708t) {
  *__t3708t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t3709t) {
  int value=0;
  *__t3709t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t3710t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t3710t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t3711t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t3711t=__t110t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t3712t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3712t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t3713t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3713t=z;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t3714t) {
  int __t338t__=0;
  char z=0;
  is_different__t108t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3714t=z;
}

static inline __attribute__((always_inline)) void nat__t687t(uint32_t x, uint64_t* __t3715t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3715t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t3716t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3716t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t3717t) {
  *__t3717t=to;
}

static inline __attribute__((always_inline)) void add__t684t(char* allocated, uint64_t offset, char** __t3718t) {
  char* element=0;
  char* __t685t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t685t__);
  goto __t_return;
  __t_return:
  *__t3718t=__t685t__;
}

static inline __attribute__((always_inline)) int get__t997t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t3719t) {
  char __t998t__=0;
  uint64_t __t999t__=0;
  uint64_t __t1000t__=0;
  uint64_t __t1001t__=0;
  uint64_t __t1002t__=0;
  char* __t1003t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,buffer__unsafe_size,&__t998t__);
  if(__t998t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t687t(buffer__unsafe_align,&__t999t__);
  mul__t212t(i,__t999t__,&__t1000t__);
  nat__t687t(buffer__unsafe_offset,&__t1001t__);
  add__t188t(__t1000t__,__t1001t__,&__t1002t__);
  add__t684t(buffer__unsafe_ptr,__t1002t__,&__t1003t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3719t=__t1003t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1223t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3720t, uint64_t* __t3721t, uint64_t* __t3722t, char* __t3723t) {
  goto __t_return;
  __t_return:
  *__t3720t=unsafe_ptr;
  *__t3721t=dat__pos;
  *__t3722t=dat__length;
  *__t3723t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1227t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3724t, uint64_t* __t3725t, uint64_t* __t3726t, char* __t3727t) {
  char* unsafe_ptr=0;
  uint64_t __t1228t__=0;
  uint64_t __t1229t=0;
  char __t1230t__=0;
  uint64_t __t1231t__=0;
  uint64_t __t1232t=0;
  char __t1233t__=0;
  char* __t1234t__unsafe_ptr=0;
  uint64_t __t1234t__dat__pos=0;
  uint64_t __t1234t__dat__length=0;
  char __t1234t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t687t(buf__unsafe_align,&__t1228t__);
  __t1229t=1;
  neq__t157t(__t1228t__,__t1229t,&__t1230t__);
  if(__t1230t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t687t(buf__unsafe_offset,&__t1231t__);
  __t1232t=0;
  neq__t157t(__t1231t__,__t1232t,&__t1233t__);
  if(__t1233t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t1223t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1234t__unsafe_ptr,&__t1234t__dat__pos,&__t1234t__dat__length,&__t1234t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3724t=__t1234t__unsafe_ptr;
  *__t3725t=__t1234t__dat__pos;
  *__t3726t=__t1234t__dat__length;
  *__t3727t=__t1234t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1261t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t3728t, uint64_t* __t3729t, uint64_t* __t3730t, char* __t3731t) {
  uint64_t __t1262t=0;
  char __t1263t__=0;
  char* __t1265t__=0;
  char __t1266t__value=0;
  char first=0;
  char* __t1267t__unsafe_ptr=0;
  uint64_t __t1267t__dat__pos=0;
  uint64_t __t1267t__dat__length=0;
  char __t1267t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1262t=0;
  neq__t157t(length,__t1262t,&__t1263t__);
  if(__t1263t__){
  __t_errcode=get__t997t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1265t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1265t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1266t__value,__t1265t__,1);
  first=__t1266t__value;
  }
  __t_errcode=str__t1227t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1267t__unsafe_ptr,&__t1267t__dat__pos,&__t1267t__dat__length,&__t1267t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3728t=__t1267t__unsafe_ptr;
  *__t3729t=__t1267t__dat__pos;
  *__t3730t=__t1267t__dat__length;
  *__t3731t=__t1267t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1283t(const char* c, char** __t3732t, uint64_t* __t3733t, uint64_t* __t3734t, char* __t3735t) {
  char* __t1284t__unsafe_ptr=0;
  uint64_t __t1284t__unsafe_size=0;
  uint32_t __t1284t__unsafe_offset=0;
  uint32_t __t1284t__unsafe_align=0;
  char* __t1285t__unsafe_ptr=0;
  uint64_t __t1285t__unsafe_size=0;
  uint32_t __t1285t__unsafe_offset=0;
  uint32_t __t1285t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1286t__=0;
  uint64_t length=0;
  uint64_t __t1287t=0;
  uint64_t __t1288t__=0;
  uint64_t __t1289t=0;
  char* __t1291t__unsafe_ptr=0;
  uint64_t __t1291t__dat__pos=0;
  uint64_t __t1291t__dat__length=0;
  char __t1291t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1201t(&__t1284t__unsafe_ptr,&__t1284t__unsafe_size,&__t1284t__unsafe_offset,&__t1284t__unsafe_align);
  __t1285t__unsafe_ptr=__t1284t__unsafe_ptr;
  __t1285t__unsafe_size=__t1284t__unsafe_size;
  __t1285t__unsafe_offset=__t1284t__unsafe_offset;
  __t1285t__unsafe_align=__t1284t__unsafe_align;
  buf__unsafe_ptr=__t1285t__unsafe_ptr;
  buf__unsafe_size=__t1285t__unsafe_size;
  buf__unsafe_offset=__t1285t__unsafe_offset;
  buf__unsafe_align=__t1285t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1286t__);
  buf__unsafe_ptr=__t1286t__;
  if(c){
  length=strlen(c);
  }
  __t1287t=1;
  add__t188t(length,__t1287t,&__t1288t__);
  buf__unsafe_size=__t1288t__;
  __t1289t=0;
  __t_errcode=str__t1261t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1289t,length,&__t1291t__unsafe_ptr,&__t1291t__dat__pos,&__t1291t__dat__length,&__t1291t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3732t=__t1291t__unsafe_ptr;
  *__t3733t=__t1291t__dat__pos;
  *__t3734t=__t1291t__dat__length;
  *__t3735t=__t1291t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void supports_ansi__t428t(char* __t3736t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t3736t=supports;
}

static inline __attribute__((always_inline)) void colors__t429t(char* __t3737t) {
  char __t430t__=0;
  char initialized=0;
  supports_ansi__t428t(&__t430t__);
  initialized=__t430t__;
  goto __t_return;
  __t_return:
  *__t3737t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t951t(char** __t3738t, uint64_t* __t3739t, uint32_t* __t3740t, uint32_t* __t3741t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3738t=unsafe_ptr;
  *__t3739t=unsafe_size;
  *__t3740t=unsafe_offset;
  *__t3741t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t682t(char** __t3742t) {
  char* allocated=*__t3742t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t3742t=allocated;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t3743t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3743t=z;
}

static inline __attribute__((always_inline)) void zero__t683t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t612t(char* x, char* __t3744t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3744t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t3745t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3745t=z;
}

static inline __attribute__((always_inline)) int alloc__t675t(uint64_t bytes, char** __t3746t) {
  char* allocated=0;
  char __t676t__=0;
  char __t677t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t612t(allocated,&__t676t__);
  not__t41t(__t676t__,&__t677t__);
  if(__t677t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3746t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t799t(char** __t3747t, uint64_t* __t3748t, uint32_t* __t3749t, uint32_t* __t3750t, uint64_t size, char** __t3751t, uint64_t* __t3752t, uint32_t* __t3753t, uint32_t* __t3754t) {
  char* buffer__unsafe_ptr=*__t3747t;
  uint64_t buffer__unsafe_size=*__t3748t;
  uint32_t buffer__unsafe_offset=*__t3749t;
  uint32_t buffer__unsafe_align=*__t3750t;
  int __t800t=0;
  char __t802t__=0;
  uint64_t __t803t=0;
  char __t804t__=0;
  char __t805t=0;
  uint64_t __t806t=0;
  uint64_t __t807t__=0;
  uint64_t __t808t__=0;
  int __t810t=0;
  uint64_t __t811t=0;
  char __t812t__=0;
  uint64_t __t813t__=0;
  uint64_t __t814t__=0;
  uint64_t bytes=0;
  int __t815t=0;
  uint64_t __t816t=0;
  char __t817t__=0;
  char* __t818t__=0;
  int __t819t=0;
  uint64_t __t820t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t802t__);
  if(__t802t__){
  __t803t=0;
  neq__t157t(size,__t803t,&__t804t__);
  __t805t=__t804t__;
  }
  if(__t805t){
  __t806t=0;
  nat__t687t(buffer__unsafe_align,&__t807t__);
  mul__t212t(__t807t__,size,&__t808t__);
  zero__t683t(buffer__unsafe_ptr,__t806t,__t808t__);
  goto __t_return;
  }
  __t811t=0;
  neq__t157t(buffer__unsafe_size,__t811t,&__t812t__);
  if(__t812t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t687t(buffer__unsafe_align,&__t813t__);
  mul__t212t(__t813t__,size,&__t814t__);
  bytes=__t814t__;
  __t816t=0;
  eq__t133t(bytes,__t816t,&__t817t__);
  if(__t817t__){
  __t_errcode=12;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t675t(bytes,&__t818t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t820t=0;
  zero__t683t(__t818t__,__t820t,bytes);
  buffer__unsafe_ptr=__t818t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t682t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3747t=buffer__unsafe_ptr;
  *__t3748t=buffer__unsafe_size;
  *__t3749t=buffer__unsafe_offset;
  *__t3750t=buffer__unsafe_align;
  *__t3751t=buffer__unsafe_ptr;
  *__t3752t=buffer__unsafe_size;
  *__t3753t=buffer__unsafe_offset;
  *__t3754t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t950t(uint64_t size, char** __t3755t, uint64_t* __t3756t, uint32_t* __t3757t, uint32_t* __t3758t) {
  char* __t953t__unsafe_ptr=0;
  uint64_t __t953t__unsafe_size=0;
  uint32_t __t953t__unsafe_offset=0;
  uint32_t __t953t__unsafe_align=0;
  char* __t954t__unsafe_ptr=0;
  uint64_t __t954t__unsafe_size=0;
  uint32_t __t954t__unsafe_offset=0;
  uint32_t __t954t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t951t(&__t953t__unsafe_ptr,&__t953t__unsafe_size,&__t953t__unsafe_offset,&__t953t__unsafe_align);
  __t_errcode=alloc__t799t(&__t953t__unsafe_ptr,&__t953t__unsafe_size,&__t953t__unsafe_offset,&__t953t__unsafe_align,size,&__t954t__unsafe_ptr,&__t954t__unsafe_size,&__t954t__unsafe_offset,&__t954t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t682t(&__t954t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3755t=__t954t__unsafe_ptr;
  *__t3756t=__t954t__unsafe_size;
  *__t3757t=__t954t__unsafe_offset;
  *__t3758t=__t954t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1009t(char** __t3759t, uint64_t* __t3760t, uint32_t* __t3761t, uint32_t* __t3762t, uint64_t _pos, char** __t3763t, uint64_t* __t3764t, uint32_t* __t3765t, uint32_t* __t3766t, uint64_t* __t3767t) {
  char* buf__unsafe_ptr=*__t3759t;
  uint64_t buf__unsafe_size=*__t3760t;
  uint32_t buf__unsafe_offset=*__t3761t;
  uint32_t buf__unsafe_align=*__t3762t;
  uint64_t __t1010t=0;
  uint64_t pos=0;
  __t1010t=_pos;
  pos=__t1010t;
  goto __t_return;
  __t_return:
  *__t3759t=buf__unsafe_ptr;
  *__t3760t=buf__unsafe_size;
  *__t3761t=buf__unsafe_offset;
  *__t3762t=buf__unsafe_align;
  *__t3763t=buf__unsafe_ptr;
  *__t3764t=buf__unsafe_size;
  *__t3765t=buf__unsafe_offset;
  *__t3766t=buf__unsafe_align;
  *__t3767t=pos;
}

static inline __attribute__((always_inline)) void arena__t1012t(char** __t3768t, uint64_t* __t3769t, uint32_t* __t3770t, uint32_t* __t3771t, char** __t3772t, uint64_t* __t3773t, uint32_t* __t3774t, uint32_t* __t3775t, uint64_t* __t3776t) {
  char* buf__unsafe_ptr=*__t3768t;
  uint64_t buf__unsafe_size=*__t3769t;
  uint32_t buf__unsafe_offset=*__t3770t;
  uint32_t buf__unsafe_align=*__t3771t;
  uint64_t __t1013t=0;
  char* __t1014t__buf__unsafe_ptr=0;
  uint64_t __t1014t__buf__unsafe_size=0;
  uint32_t __t1014t__buf__unsafe_offset=0;
  uint32_t __t1014t__buf__unsafe_align=0;
  uint64_t __t1014t__pos=0;
  __t1013t=0;
  arena__t1009t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1013t,&__t1014t__buf__unsafe_ptr,&__t1014t__buf__unsafe_size,&__t1014t__buf__unsafe_offset,&__t1014t__buf__unsafe_align,&__t1014t__pos);
  goto __t_return;
  __t_return:
  *__t3768t=buf__unsafe_ptr;
  *__t3769t=buf__unsafe_size;
  *__t3770t=buf__unsafe_offset;
  *__t3771t=buf__unsafe_align;
  *__t3772t=__t1014t__buf__unsafe_ptr;
  *__t3773t=__t1014t__buf__unsafe_size;
  *__t3774t=__t1014t__buf__unsafe_offset;
  *__t3775t=__t1014t__buf__unsafe_align;
  *__t3776t=__t1014t__pos;
}

static inline __attribute__((always_inline)) void len__t1292t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3777t) {
  goto __t_return;
  __t_return:
  *__t3777t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t1004t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t3778t) {
  goto __t_return;
  __t_return:
  *__t3778t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t3779t) {
  int __t290t__=0;
  char z=0;
  is_different__t108t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t3779t=z;
}

static inline __attribute__((always_inline)) void allocated__t1021t(char** __t3780t, uint64_t* __t3781t, uint32_t* __t3782t, uint32_t* __t3783t, uint64_t pos, char** __t3784t, uint64_t* __t3785t, uint32_t* __t3786t, uint32_t* __t3787t, uint64_t* __t3788t) {
  char* buf__unsafe_ptr=*__t3780t;
  uint64_t buf__unsafe_size=*__t3781t;
  uint32_t buf__unsafe_offset=*__t3782t;
  uint32_t buf__unsafe_align=*__t3783t;
  goto __t_return;
  __t_return:
  *__t3780t=buf__unsafe_ptr;
  *__t3781t=buf__unsafe_size;
  *__t3782t=buf__unsafe_offset;
  *__t3783t=buf__unsafe_align;
  *__t3784t=buf__unsafe_ptr;
  *__t3785t=buf__unsafe_size;
  *__t3786t=buf__unsafe_offset;
  *__t3787t=buf__unsafe_align;
  *__t3788t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1084t(char** __t3789t, uint64_t* __t3790t, uint32_t* __t3791t, uint32_t* __t3792t, uint64_t* __t3793t, uint64_t length, char** __t3794t, uint64_t* __t3795t, uint32_t* __t3796t, uint32_t* __t3797t, uint64_t* __t3798t) {
  char* allocator__buf__unsafe_ptr=*__t3789t;
  uint64_t allocator__buf__unsafe_size=*__t3790t;
  uint32_t allocator__buf__unsafe_offset=*__t3791t;
  uint32_t allocator__buf__unsafe_align=*__t3792t;
  uint64_t allocator__pos=*__t3793t;
  int __t1085t=0;
  uint64_t __t1086t__=0;
  uint64_t next_pos=0;
  uint64_t __t1087t__=0;
  char __t1088t__=0;
  uint64_t __t1089t=0;
  uint64_t __t1090t__=0;
  uint64_t pos=0;
  char* __t1091t__buf__unsafe_ptr=0;
  uint64_t __t1091t__buf__unsafe_size=0;
  uint32_t __t1091t__buf__unsafe_offset=0;
  uint32_t __t1091t__buf__unsafe_align=0;
  uint64_t __t1091t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1086t__);
  next_pos=__t1086t__;
  len__t1004t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1087t__);
  gt__t289t(next_pos,__t1087t__,&__t1088t__);
  if(__t1088t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t1089t=0;
  add__t188t(allocator__pos,__t1089t,&__t1090t__);
  pos=__t1090t__;
  allocator__pos=next_pos;
  allocated__t1021t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1091t__buf__unsafe_ptr,&__t1091t__buf__unsafe_size,&__t1091t__buf__unsafe_offset,&__t1091t__buf__unsafe_align,&__t1091t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3789t=allocator__buf__unsafe_ptr;
  *__t3790t=allocator__buf__unsafe_size;
  *__t3791t=allocator__buf__unsafe_offset;
  *__t3792t=allocator__buf__unsafe_align;
  *__t3793t=allocator__pos;
  *__t3794t=__t1091t__buf__unsafe_ptr;
  *__t3795t=__t1091t__buf__unsafe_size;
  *__t3796t=__t1091t__buf__unsafe_offset;
  *__t3797t=__t1091t__buf__unsafe_align;
  *__t3798t=__t1091t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1314t(char** __t3799t, uint64_t* __t3800t, uint32_t* __t3801t, uint32_t* __t3802t, uint64_t* __t3803t, const char* _other, char** __t3804t, uint64_t* __t3805t, uint64_t* __t3806t, char* __t3807t) {
  char* CHARS__buf__unsafe_ptr=*__t3799t;
  uint64_t CHARS__buf__unsafe_size=*__t3800t;
  uint32_t CHARS__buf__unsafe_offset=*__t3801t;
  uint32_t CHARS__buf__unsafe_align=*__t3802t;
  uint64_t CHARS__pos=*__t3803t;
  char* __t1315t__unsafe_ptr=0;
  uint64_t __t1315t__dat__pos=0;
  uint64_t __t1315t__dat__length=0;
  char __t1315t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1316t__=0;
  char* __t1317t__buf__unsafe_ptr=0;
  uint64_t __t1317t__buf__unsafe_size=0;
  uint32_t __t1317t__buf__unsafe_offset=0;
  uint32_t __t1317t__buf__unsafe_align=0;
  uint64_t __t1317t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1318t__unsafe_ptr=0;
  uint64_t __t1318t__dat__pos=0;
  uint64_t __t1318t__dat__length=0;
  char __t1318t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1283t(_other,&__t1315t__unsafe_ptr,&__t1315t__dat__pos,&__t1315t__dat__length,&__t1315t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1315t__unsafe_ptr;
  other__dat__pos=__t1315t__dat__pos;
  other__dat__length=__t1315t__dat__length;
  other__dat__first=__t1315t__dat__first;
  len__t1292t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1316t__);
  __t_errcode=alloc__t1084t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1316t__,&__t1317t__buf__unsafe_ptr,&__t1317t__buf__unsafe_size,&__t1317t__buf__unsafe_offset,&__t1317t__buf__unsafe_align,&__t1317t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1317t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1317t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1317t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1317t__buf__unsafe_align;
  surface__pos=__t1317t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1227t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1318t__unsafe_ptr,&__t1318t__dat__pos,&__t1318t__dat__length,&__t1318t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3799t=CHARS__buf__unsafe_ptr;
  *__t3800t=CHARS__buf__unsafe_size;
  *__t3801t=CHARS__buf__unsafe_offset;
  *__t3802t=CHARS__buf__unsafe_align;
  *__t3803t=CHARS__pos;
  *__t3804t=__t1318t__unsafe_ptr;
  *__t3805t=__t1318t__dat__pos;
  *__t3806t=__t1318t__dat__length;
  *__t3807t=__t1318t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1005t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1340t(char** __t3808t, uint64_t* __t3809t, uint32_t* __t3810t, uint32_t* __t3811t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3808t=unsafe_ptr;
  *__t3809t=unsafe_size;
  *__t3810t=unsafe_offset;
  *__t3811t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1339t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3812t, uint64_t* __t3813t, uint64_t* __t3814t, char* __t3815t) {
  char* __t1342t__unsafe_ptr=0;
  uint64_t __t1342t__unsafe_size=0;
  uint32_t __t1342t__unsafe_offset=0;
  uint32_t __t1342t__unsafe_align=0;
  uint64_t __t1343t=0;
  uint64_t __t1344t__=0;
  uint64_t __t1345t__=0;
  char* __t1346t__unsafe_ptr=0;
  uint64_t __t1346t__unsafe_size=0;
  uint32_t __t1346t__unsafe_offset=0;
  uint32_t __t1346t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1348t=0;
  char* __t1349t__unsafe_ptr=0;
  uint64_t __t1349t__dat__pos=0;
  uint64_t __t1349t__dat__length=0;
  char __t1349t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1340t(&__t1342t__unsafe_ptr,&__t1342t__unsafe_size,&__t1342t__unsafe_offset,&__t1342t__unsafe_align);
  __t1343t=1;
  len__t1292t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1344t__);
  add__t188t(__t1343t,__t1344t__,&__t1345t__);
  __t_errcode=alloc__t799t(&__t1342t__unsafe_ptr,&__t1342t__unsafe_size,&__t1342t__unsafe_offset,&__t1342t__unsafe_align,__t1345t__,&__t1346t__unsafe_ptr,&__t1346t__unsafe_size,&__t1346t__unsafe_offset,&__t1346t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1346t__unsafe_ptr;
  buf__unsafe_size=__t1346t__unsafe_size;
  buf__unsafe_offset=__t1346t__unsafe_offset;
  buf__unsafe_align=__t1346t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1348t=0;
  __t_errcode=str__t1227t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1348t,other__dat__length,other__dat__first,&__t1349t__unsafe_ptr,&__t1349t__dat__pos,&__t1349t__dat__length,&__t1349t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t682t(&__t1349t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3812t=__t1349t__unsafe_ptr;
  *__t3813t=__t1349t__dat__pos;
  *__t3814t=__t1349t__dat__length;
  *__t3815t=__t1349t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1364t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3816t, char** __t3817t, uint64_t* __t3818t, uint64_t* __t3819t, char* __t3820t) {
  int __t1365t=0;
  char* __t1367t__unsafe_ptr=0;
  uint64_t __t1367t__dat__pos=0;
  uint64_t __t1367t__dat__length=0;
  char __t1367t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1369t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1005t();
  __t_errcode=copy_null_terminated__t1339t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1367t__unsafe_ptr,&__t1367t__dat__pos,&__t1367t__dat__length,&__t1367t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1367t__unsafe_ptr;
  str__dat__pos=__t1367t__dat__pos;
  str__dat__length=__t1367t__dat__length;
  str__dat__first=__t1367t__dat__first;
  add__t684t(str__unsafe_ptr,str__dat__pos,&__t1369t__);
  _ret=__t1369t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t682t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3816t=cstr;
  *__t3817t=str__unsafe_ptr;
  *__t3818t=str__dat__pos;
  *__t3819t=str__dat__length;
  *__t3820t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1374t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3821t) {
  goto __t_return;
  __t_return:
  *__t3821t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t3397t(char* unsafe_ptr) {
  int __t3399t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t3400t(const char* path, char** __t3822t) {
  int __t3402t=0;
  char* unsafe_ptr=0;
  char __t3404t__=0;
  char __t3405t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t612t(unsafe_ptr,&__t3404t__);
  not__t41t(__t3404t__,&__t3405t__);
  if(__t3405t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t3397t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3822t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t3407t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t3823t) {
  const char* __t3408t__cstr=0;
  char* __t3408t__str__unsafe_ptr=0;
  uint64_t __t3408t__str__dat__pos=0;
  uint64_t __t3408t__str__dat__length=0;
  char __t3408t__str__dat__first=0;
  const char* __t3410t__=0;
  char* __t3411t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1364t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t3408t__cstr,&__t3408t__str__unsafe_ptr,&__t3408t__str__dat__pos,&__t3408t__str__dat__length,&__t3408t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1374t(__t3408t__cstr,__t3408t__str__unsafe_ptr,__t3408t__str__dat__pos,__t3408t__str__dat__length,__t3408t__str__dat__first,&__t3410t__);
  __t_errcode=open__t3400t(__t3410t__,&__t3411t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t3397t(__t3411t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3823t=__t3411t__unsafe_ptr;
  
  __t_skip_returns:free__t682t(&__t3408t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t3419t(char** __t3824t, const char** __t3825t) {
  char* f__unsafe_ptr=*__t3824t;
  char __t3420t__=0;
  char __t3421t__=0;
  char* de=0;
  char __t3422t__=0;
  char __t3423t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t612t(f__unsafe_ptr,&__t3420t__);
  not__t41t(__t3420t__,&__t3421t__);
  if(__t3421t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t612t(de,&__t3422t__);
  not__t41t(__t3422t__,&__t3423t__);
  if(__t3423t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3824t=f__unsafe_ptr;
  *__t3825t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t3424t(char** __t3826t, char** __t3827t, uint64_t* __t3828t, uint64_t* __t3829t, char* __t3830t) {
  char* f__unsafe_ptr=*__t3826t;
  const char* __t3425t__=0;
  char* __t3426t__unsafe_ptr=0;
  uint64_t __t3426t__dat__pos=0;
  uint64_t __t3426t__dat__length=0;
  char __t3426t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t3419t(&f__unsafe_ptr,&__t3425t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1283t(__t3425t__,&__t3426t__unsafe_ptr,&__t3426t__dat__pos,&__t3426t__dat__length,&__t3426t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3826t=f__unsafe_ptr;
  *__t3827t=__t3426t__unsafe_ptr;
  *__t3828t=__t3426t__dat__pos;
  *__t3829t=__t3426t__dat__length;
  *__t3830t=__t3426t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t3490t(char** __t3831t, uint64_t __t_anon1, char** __t3832t, uint64_t* __t3833t, uint64_t* __t3834t, char* __t3835t) {
  char* data__unsafe_ptr=*__t3831t;
  char* __t3491t__unsafe_ptr=0;
  uint64_t __t3491t__dat__pos=0;
  uint64_t __t3491t__dat__length=0;
  char __t3491t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t3424t(&data__unsafe_ptr,&__t3491t__unsafe_ptr,&__t3491t__dat__pos,&__t3491t__dat__length,&__t3491t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3831t=data__unsafe_ptr;
  *__t3832t=__t3491t__unsafe_ptr;
  *__t3833t=__t3491t__dat__pos;
  *__t3834t=__t3491t__dat__length;
  *__t3835t=__t3491t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1294t(const char* s, char* __t3836t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t3836t=c;
}

static inline __attribute__((always_inline)) void neq__t1296t(char x, char y, char* __t3837t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t3837t=z;
}

static inline __attribute__((always_inline)) void eq__t1379t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t3838t) {
  uint64_t __t1380t__=0;
  uint64_t n=0;
  uint64_t __t1381t__=0;
  char __t1382t__=0;
  char __t1383t=0;
  char __t1384t__=0;
  char __t1385t=0;
  char z=0;
  len__t1292t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1380t__);
  n=__t1380t__;
  len__t1292t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1381t__);
  neq__t157t(n,__t1381t__,&__t1382t__);
  if(__t1382t__){
  __t1383t=0;
  goto __t_return;
  }
  neq__t1296t(x__dat__first,y__dat__first,&__t1384t__);
  if(__t1384t__){
  __t1385t=0;
  __t1383t=__t1385t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1383t=z;
  goto __t_return;
  __t_return:
  *__t3838t=__t1383t;
}

int eq__t1386t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t3839t) {
  char __t1387t__=0;
  char __t1388t__=0;
  char __t1389t=0;
  char* __t1390t__unsafe_ptr=0;
  uint64_t __t1390t__dat__pos=0;
  uint64_t __t1390t__dat__length=0;
  char __t1390t__dat__first=0;
  char __t1391t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char__t1294t(y,&__t1387t__);
  neq__t1296t(x__dat__first,__t1387t__,&__t1388t__);
  if(__t1388t__){
  __t1389t=0;
  goto __t_return;
  }
  __t_errcode=str__t1283t(y,&__t1390t__unsafe_ptr,&__t1390t__dat__pos,&__t1390t__dat__length,&__t1390t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t1379t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1390t__unsafe_ptr,__t1390t__dat__pos,__t1390t__dat__length,__t1390t__dat__first,&__t1391t__);
  __t1389t=__t1391t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3839t=__t1389t;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1350t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3840t, char** __t3841t, uint64_t* __t3842t, uint64_t* __t3843t, char* __t3844t) {
  int __t1351t=0;
  char* __t1352t__unsafe_ptr=0;
  uint64_t __t1352t__unsafe_size=0;
  uint32_t __t1352t__unsafe_offset=0;
  uint32_t __t1352t__unsafe_align=0;
  uint64_t __t1353t=0;
  uint64_t __t1354t__=0;
  uint64_t __t1355t__=0;
  char* __t1356t__unsafe_ptr=0;
  uint64_t __t1356t__unsafe_size=0;
  uint32_t __t1356t__unsafe_offset=0;
  uint32_t __t1356t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1358t=0;
  char __t1359t__=0;
  char first_character=0;
  uint64_t __t1360t=0;
  char* __t1361t__unsafe_ptr=0;
  uint64_t __t1361t__dat__pos=0;
  uint64_t __t1361t__dat__length=0;
  char __t1361t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1362t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1340t(&__t1352t__unsafe_ptr,&__t1352t__unsafe_size,&__t1352t__unsafe_offset,&__t1352t__unsafe_align);
  __t1353t=1;
  add__t188t(__t1353t,other__dat__length,&__t1354t__);
  add__t188t(__t1354t__,prefix__dat__length,&__t1355t__);
  __t_errcode=alloc__t799t(&__t1352t__unsafe_ptr,&__t1352t__unsafe_size,&__t1352t__unsafe_offset,&__t1352t__unsafe_align,__t1355t__,&__t1356t__unsafe_ptr,&__t1356t__unsafe_size,&__t1356t__unsafe_offset,&__t1356t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1356t__unsafe_ptr;
  buf__unsafe_size=__t1356t__unsafe_size;
  buf__unsafe_offset=__t1356t__unsafe_offset;
  buf__unsafe_align=__t1356t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1358t=0;
  eq__t133t(prefix__dat__length,__t1358t,&__t1359t__);
  if(__t1359t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1360t=0;
  __t_errcode=str__t1227t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1360t,other__dat__length,first_character,&__t1361t__unsafe_ptr,&__t1361t__dat__pos,&__t1361t__dat__length,&__t1361t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1361t__unsafe_ptr;
  str__dat__pos=__t1361t__dat__pos;
  str__dat__length=__t1361t__dat__length;
  str__dat__first=__t1361t__dat__first;
  add__t684t(str__unsafe_ptr,str__dat__pos,&__t1362t__);
  _ret=__t1362t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t682t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3840t=cstr;
  *__t3841t=str__unsafe_ptr;
  *__t3842t=str__dat__pos;
  *__t3843t=str__dat__length;
  *__t3844t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1373t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3845t) {
  goto __t_return;
  __t_return:
  *__t3845t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t3324t(const char* path, char* __t3846t) {
  int __t3326t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t3846t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t3334t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t3847t) {
  int __t3336t=0;
  const char* __t3337t__cstr=0;
  char* __t3337t__str__unsafe_ptr=0;
  uint64_t __t3337t__str__dat__pos=0;
  uint64_t __t3337t__str__dat__length=0;
  char __t3337t__str__dat__first=0;
  const char* __t3339t__=0;
  char __t3340t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1350t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t3337t__cstr,&__t3337t__str__unsafe_ptr,&__t3337t__str__dat__pos,&__t3337t__str__dat__length,&__t3337t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1373t(__t3337t__cstr,__t3337t__str__unsafe_ptr,__t3337t__str__dat__pos,__t3337t__str__dat__length,__t3337t__str__dat__first,&__t3339t__);
  is_dir__t3324t(__t3339t__,&__t3340t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3847t=__t3340t__;
  
  __t_skip_returns:free__t682t(&__t3337t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gc__t1015t(char** __t3848t, uint64_t* __t3849t, uint32_t* __t3850t, uint32_t* __t3851t, uint64_t* __t3852t, uint64_t* __t3853t) {
  char* arn__buf__unsafe_ptr=*__t3848t;
  uint64_t arn__buf__unsafe_size=*__t3849t;
  uint32_t arn__buf__unsafe_offset=*__t3850t;
  uint32_t arn__buf__unsafe_align=*__t3851t;
  uint64_t arn__pos=*__t3852t;
  uint64_t __t1016t=0;
  uint64_t __t1017t__=0;
  uint64_t tracked_position=0;
  uint64_t __t1018t=0;
  uint64_t __t1019t__=0;
  __t1016t=0;
  add__t188t(__t1016t,arn__pos,&__t1017t__);
  tracked_position=__t1017t__;
  goto __t_return;
  __t_return:
  *__t3848t=arn__buf__unsafe_ptr;
  *__t3849t=arn__buf__unsafe_size;
  *__t3850t=arn__buf__unsafe_offset;
  *__t3851t=arn__buf__unsafe_align;
  *__t3852t=arn__pos;
  *__t3853t=tracked_position;
}

static inline __attribute__((always_inline)) void str__t1260t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3854t, uint64_t* __t3855t, uint64_t* __t3856t, char* __t3857t) {
  goto __t_return;
  __t_return:
  *__t3854t=other__unsafe_ptr;
  *__t3855t=other__dat__pos;
  *__t3856t=other__dat__length;
  *__t3857t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t161t(char* x, char* y, char* __t3858t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t3858t=z;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t3859t) {
  int __t266t__=0;
  char z=0;
  is_different__t108t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t3859t=z;
}

static inline __attribute__((always_inline)) void status__t1026t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t3860t, uint64_t* __t3861t, uint32_t* __t3862t, uint32_t* __t3863t, uint64_t* __t3864t) {
  char* __t1027t__unsafe_ptr=0;
  uint64_t __t1027t__unsafe_size=0;
  uint32_t __t1027t__unsafe_offset=0;
  uint32_t __t1027t__unsafe_align=0;
  uint64_t __t1028t=0;
  __t1027t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1027t__unsafe_size=self__buf__unsafe_size;
  __t1027t__unsafe_offset=self__buf__unsafe_offset;
  __t1027t__unsafe_align=self__buf__unsafe_align;
  __t1028t=self__pos;
  goto __t_return;
  __t_return:
  *__t3860t=__t1027t__unsafe_ptr;
  *__t3861t=__t1027t__unsafe_size;
  *__t3862t=__t1027t__unsafe_offset;
  *__t3863t=__t1027t__unsafe_align;
  *__t3864t=__t1028t;
}

static inline __attribute__((always_inline)) int copy__t1309t(char** __t3865t, uint64_t* __t3866t, uint32_t* __t3867t, uint32_t* __t3868t, uint64_t* __t3869t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t3870t, uint64_t* __t3871t, uint64_t* __t3872t, char* __t3873t) {
  char* CHARS__buf__unsafe_ptr=*__t3865t;
  uint64_t CHARS__buf__unsafe_size=*__t3866t;
  uint32_t CHARS__buf__unsafe_offset=*__t3867t;
  uint32_t CHARS__buf__unsafe_align=*__t3868t;
  uint64_t CHARS__pos=*__t3869t;
  char* __t1310t__unsafe_ptr=0;
  uint64_t __t1310t__dat__pos=0;
  uint64_t __t1310t__dat__length=0;
  char __t1310t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1311t__=0;
  char* __t1312t__buf__unsafe_ptr=0;
  uint64_t __t1312t__buf__unsafe_size=0;
  uint32_t __t1312t__buf__unsafe_offset=0;
  uint32_t __t1312t__buf__unsafe_align=0;
  uint64_t __t1312t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1313t__unsafe_ptr=0;
  uint64_t __t1313t__dat__pos=0;
  uint64_t __t1313t__dat__length=0;
  char __t1313t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1260t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1310t__unsafe_ptr,&__t1310t__dat__pos,&__t1310t__dat__length,&__t1310t__dat__first);
  other__unsafe_ptr=__t1310t__unsafe_ptr;
  other__dat__pos=__t1310t__dat__pos;
  other__dat__length=__t1310t__dat__length;
  other__dat__first=__t1310t__dat__first;
  len__t1292t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1311t__);
  __t_errcode=alloc__t1084t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1311t__,&__t1312t__buf__unsafe_ptr,&__t1312t__buf__unsafe_size,&__t1312t__buf__unsafe_offset,&__t1312t__buf__unsafe_align,&__t1312t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1312t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1312t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1312t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1312t__buf__unsafe_align;
  surface__pos=__t1312t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1227t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1313t__unsafe_ptr,&__t1313t__dat__pos,&__t1313t__dat__length,&__t1313t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3865t=CHARS__buf__unsafe_ptr;
  *__t3866t=CHARS__buf__unsafe_size;
  *__t3867t=CHARS__buf__unsafe_offset;
  *__t3868t=CHARS__buf__unsafe_align;
  *__t3869t=CHARS__pos;
  *__t3870t=__t1313t__unsafe_ptr;
  *__t3871t=__t1313t__dat__pos;
  *__t3872t=__t1313t__dat__length;
  *__t3873t=__t1313t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1023t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t3874t, uint64_t* __t3875t, uint32_t* __t3876t, uint32_t* __t3877t, uint64_t* __t3878t) {
  char* __t1024t__unsafe_ptr=0;
  uint64_t __t1024t__unsafe_size=0;
  uint32_t __t1024t__unsafe_offset=0;
  uint32_t __t1024t__unsafe_align=0;
  uint64_t __t1025t=0;
  __t1024t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1024t__unsafe_size=self__buf__unsafe_size;
  __t1024t__unsafe_offset=self__buf__unsafe_offset;
  __t1024t__unsafe_align=self__buf__unsafe_align;
  __t1025t=self__pos;
  goto __t_return;
  __t_return:
  *__t3874t=__t1024t__unsafe_ptr;
  *__t3875t=__t1024t__unsafe_size;
  *__t3876t=__t1024t__unsafe_offset;
  *__t3877t=__t1024t__unsafe_align;
  *__t3878t=__t1025t;
}

static inline __attribute__((always_inline)) int sub__t365t(uint64_t x, uint64_t y, uint64_t* __t3879t) {
  int __t366t__=0;
  int __t367t=0;
  int __t368t=0;
  char __t369t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t108t(x,y,&__t366t__);
  lt__t265t(x,y,&__t369t__);
  if(__t369t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3879t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1279t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t3880t, uint64_t* __t3881t, uint64_t* __t3882t, char* __t3883t) {
  uint64_t __t1281t__=0;
  char* __t1282t__unsafe_ptr=0;
  uint64_t __t1282t__dat__pos=0;
  uint64_t __t1282t__dat__length=0;
  char __t1282t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t365t(endpos,pos,&__t1281t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1261t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1281t__,&__t1282t__unsafe_ptr,&__t1282t__dat__pos,&__t1282t__dat__length,&__t1282t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3880t=__t1282t__unsafe_ptr;
  *__t3881t=__t1282t__dat__pos;
  *__t3882t=__t1282t__dat__length;
  *__t3883t=__t1282t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t1888t(char** __t3884t, uint64_t* __t3885t, uint32_t* __t3886t, uint32_t* __t3887t, uint64_t* __t3888t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t3889t, uint64_t* __t3890t, uint64_t* __t3891t, char* __t3892t) {
  char* CHARS__buf__unsafe_ptr=*__t3884t;
  uint64_t CHARS__buf__unsafe_size=*__t3885t;
  uint32_t CHARS__buf__unsafe_offset=*__t3886t;
  uint32_t CHARS__buf__unsafe_align=*__t3887t;
  uint64_t CHARS__pos=*__t3888t;
  char* __t1889t__unsafe_ptr=0;
  uint64_t __t1889t__dat__pos=0;
  uint64_t __t1889t__dat__length=0;
  char __t1889t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1890t__unsafe_ptr=0;
  uint64_t __t1890t__dat__pos=0;
  uint64_t __t1890t__dat__length=0;
  char __t1890t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t1891t__=0;
  uint64_t __t1892t__=0;
  char __t1893t__=0;
  char __t1894t=0;
  uint64_t __t1895t__=0;
  char __t1896t__=0;
  char __t1897t=0;
  uint64_t __t1898t__=0;
  char* __t1899t__buf__unsafe_ptr=0;
  uint64_t __t1899t__buf__unsafe_size=0;
  uint32_t __t1899t__buf__unsafe_offset=0;
  uint32_t __t1899t__buf__unsafe_align=0;
  uint64_t __t1899t__pos=0;
  char* __t1900t____t1027t__unsafe_ptr=0;
  uint64_t __t1900t____t1027t__unsafe_size=0;
  uint32_t __t1900t____t1027t__unsafe_offset=0;
  uint32_t __t1900t____t1027t__unsafe_align=0;
  uint64_t __t1900t____t1028t=0;
  char* __t1901t__buf__unsafe_ptr=0;
  uint64_t __t1901t__buf__unsafe_size=0;
  uint32_t __t1901t__buf__unsafe_offset=0;
  uint32_t __t1901t__buf__unsafe_align=0;
  uint64_t __t1901t__pos=0;
  char* __t1902t__buf__unsafe_ptr=0;
  uint64_t __t1902t__buf__unsafe_size=0;
  uint32_t __t1902t__buf__unsafe_offset=0;
  uint32_t __t1902t__buf__unsafe_align=0;
  uint64_t __t1902t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1903t__unsafe_ptr=0;
  uint64_t __t1903t__dat__pos=0;
  uint64_t __t1903t__dat__length=0;
  char __t1903t__dat__first=0;
  char* __t1904t____t1024t__unsafe_ptr=0;
  uint64_t __t1904t____t1024t__unsafe_size=0;
  uint32_t __t1904t____t1024t__unsafe_offset=0;
  uint32_t __t1904t____t1024t__unsafe_align=0;
  uint64_t __t1904t____t1025t=0;
  uint64_t __t1906t=0;
  uint64_t __t1907t__=0;
  char* __t1908t__unsafe_ptr=0;
  uint64_t __t1908t__dat__pos=0;
  uint64_t __t1908t__dat__length=0;
  char __t1908t__dat__first=0;
  char __t1909t__=0;
  char __t1910t__=0;
  char __t1911t=0;
  uint64_t __t1912t__=0;
  char __t1913t__=0;
  char __t1914t=0;
  uint64_t __t1915t__=0;
  char* __t1917t__unsafe_ptr=0;
  uint64_t __t1917t__dat__pos=0;
  uint64_t __t1917t__dat__length=0;
  char __t1917t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t1918t__=0;
  uint64_t __t1919t__=0;
  uint64_t __t1920t__=0;
  char* __t1921t__buf__unsafe_ptr=0;
  uint64_t __t1921t__buf__unsafe_size=0;
  uint32_t __t1921t__buf__unsafe_offset=0;
  uint32_t __t1921t__buf__unsafe_align=0;
  uint64_t __t1921t__pos=0;
  char* __t1922t____t1027t__unsafe_ptr=0;
  uint64_t __t1922t____t1027t__unsafe_size=0;
  uint32_t __t1922t____t1027t__unsafe_offset=0;
  uint32_t __t1922t____t1027t__unsafe_align=0;
  uint64_t __t1922t____t1028t=0;
  char* __t1923t__buf__unsafe_ptr=0;
  uint64_t __t1923t__buf__unsafe_size=0;
  uint32_t __t1923t__buf__unsafe_offset=0;
  uint32_t __t1923t__buf__unsafe_align=0;
  uint64_t __t1923t__pos=0;
  char* __t1924t__buf__unsafe_ptr=0;
  uint64_t __t1924t__buf__unsafe_size=0;
  uint32_t __t1924t__buf__unsafe_offset=0;
  uint32_t __t1924t__buf__unsafe_align=0;
  uint64_t __t1924t__pos=0;
  char* __t1925t__unsafe_ptr=0;
  uint64_t __t1925t__dat__pos=0;
  uint64_t __t1925t__dat__length=0;
  char __t1925t__dat__first=0;
  char* __t1926t__unsafe_ptr=0;
  uint64_t __t1926t__dat__pos=0;
  uint64_t __t1926t__dat__length=0;
  char __t1926t__dat__first=0;
  char* __t1927t____t1024t__unsafe_ptr=0;
  uint64_t __t1927t____t1024t__unsafe_size=0;
  uint32_t __t1927t____t1024t__unsafe_offset=0;
  uint32_t __t1927t____t1024t__unsafe_align=0;
  uint64_t __t1927t____t1025t=0;
  uint64_t __t1929t=0;
  uint64_t __t1930t__=0;
  char* __t1931t__unsafe_ptr=0;
  uint64_t __t1931t__dat__pos=0;
  uint64_t __t1931t__dat__length=0;
  char __t1931t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1260t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t1889t__unsafe_ptr,&__t1889t__dat__pos,&__t1889t__dat__length,&__t1889t__dat__first);
  s1__unsafe_ptr=__t1889t__unsafe_ptr;
  s1__dat__pos=__t1889t__dat__pos;
  s1__dat__length=__t1889t__dat__length;
  s1__dat__first=__t1889t__dat__first;
  str__t1260t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t1890t__unsafe_ptr,&__t1890t__dat__pos,&__t1890t__dat__length,&__t1890t__dat__first);
  s2__unsafe_ptr=__t1890t__unsafe_ptr;
  s2__dat__pos=__t1890t__dat__pos;
  s2__dat__length=__t1890t__dat__length;
  s2__dat__first=__t1890t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1891t__);
  if(__t1891t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1892t__);
  eq__t133t(CHARS__pos,__t1892t__,&__t1893t__);
  __t1894t=__t1893t__;
  }
  if(__t1894t){
  add__t188t(CHARS__pos,s2__dat__length,&__t1895t__);
  lt__t265t(__t1895t__,CHARS__buf__unsafe_size,&__t1896t__);
  __t1897t=__t1896t__;
  }
  if(__t1897t){
  len__t1292t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1898t__);
  __t_errcode=alloc__t1084t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1898t__,&__t1899t__buf__unsafe_ptr,&__t1899t__buf__unsafe_size,&__t1899t__buf__unsafe_offset,&__t1899t__buf__unsafe_align,&__t1899t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1026t(__t1899t__buf__unsafe_ptr,__t1899t__buf__unsafe_size,__t1899t__buf__unsafe_offset,__t1899t__buf__unsafe_align,__t1899t__pos,&__t1900t____t1027t__unsafe_ptr,&__t1900t____t1027t__unsafe_size,&__t1900t____t1027t__unsafe_offset,&__t1900t____t1027t__unsafe_align,&__t1900t____t1028t);
  arena__t1009t(&__t1900t____t1027t__unsafe_ptr,&__t1900t____t1027t__unsafe_size,&__t1900t____t1027t__unsafe_offset,&__t1900t____t1027t__unsafe_align,__t1900t____t1028t,&__t1901t__buf__unsafe_ptr,&__t1901t__buf__unsafe_size,&__t1901t__buf__unsafe_offset,&__t1901t__buf__unsafe_align,&__t1901t__pos);
  __t1902t__buf__unsafe_ptr=__t1901t__buf__unsafe_ptr;
  __t1902t__buf__unsafe_size=__t1901t__buf__unsafe_size;
  __t1902t__buf__unsafe_offset=__t1901t__buf__unsafe_offset;
  __t1902t__buf__unsafe_align=__t1901t__buf__unsafe_align;
  __t1902t__pos=__t1901t__pos;
  surface__buf__unsafe_ptr=__t1902t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1902t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1902t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1902t__buf__unsafe_align;
  surface__pos=__t1902t__pos;
  __t_errcode=copy__t1309t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1903t__unsafe_ptr,&__t1903t__dat__pos,&__t1903t__dat__length,&__t1903t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1023t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1904t____t1024t__unsafe_ptr,&__t1904t____t1024t__unsafe_size,&__t1904t____t1024t__unsafe_offset,&__t1904t____t1024t__unsafe_align,&__t1904t____t1025t);
  __t1906t=0;
  add__t188t(s1__dat__pos,__t1906t,&__t1907t__);
  __t_errcode=str__t1279t(__t1904t____t1024t__unsafe_ptr,__t1904t____t1024t__unsafe_size,__t1904t____t1024t__unsafe_offset,__t1904t____t1024t__unsafe_align,__t1904t____t1025t,__t1907t__,&__t1908t__unsafe_ptr,&__t1908t__dat__pos,&__t1908t__dat__length,&__t1908t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1909t__);
  if(__t1909t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1910t__);
  __t1911t=__t1910t__;
  }
  if(__t1911t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1912t__);
  eq__t133t(s2__dat__pos,__t1912t__,&__t1913t__);
  __t1914t=__t1913t__;
  }
  if(__t1914t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t1915t__);
  __t_errcode=str__t1279t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t1915t__,s1__dat__pos,&__t1917t__unsafe_ptr,&__t1917t__dat__pos,&__t1917t__dat__length,&__t1917t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1908t__unsafe_ptr=__t1917t__unsafe_ptr;
  __t1908t__dat__pos=__t1917t__dat__pos;
  __t1908t__dat__length=__t1917t__dat__length;
  __t1908t__dat__first=__t1917t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1292t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1918t__);
  len__t1292t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1919t__);
  add__t188t(__t1918t__,__t1919t__,&__t1920t__);
  __t_errcode=alloc__t1084t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1920t__,&__t1921t__buf__unsafe_ptr,&__t1921t__buf__unsafe_size,&__t1921t__buf__unsafe_offset,&__t1921t__buf__unsafe_align,&__t1921t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1026t(__t1921t__buf__unsafe_ptr,__t1921t__buf__unsafe_size,__t1921t__buf__unsafe_offset,__t1921t__buf__unsafe_align,__t1921t__pos,&__t1922t____t1027t__unsafe_ptr,&__t1922t____t1027t__unsafe_size,&__t1922t____t1027t__unsafe_offset,&__t1922t____t1027t__unsafe_align,&__t1922t____t1028t);
  arena__t1009t(&__t1922t____t1027t__unsafe_ptr,&__t1922t____t1027t__unsafe_size,&__t1922t____t1027t__unsafe_offset,&__t1922t____t1027t__unsafe_align,__t1922t____t1028t,&__t1923t__buf__unsafe_ptr,&__t1923t__buf__unsafe_size,&__t1923t__buf__unsafe_offset,&__t1923t__buf__unsafe_align,&__t1923t__pos);
  __t1924t__buf__unsafe_ptr=__t1923t__buf__unsafe_ptr;
  __t1924t__buf__unsafe_size=__t1923t__buf__unsafe_size;
  __t1924t__buf__unsafe_offset=__t1923t__buf__unsafe_offset;
  __t1924t__buf__unsafe_align=__t1923t__buf__unsafe_align;
  __t1924t__pos=__t1923t__pos;
  surface__buf__unsafe_ptr=__t1924t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1924t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1924t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1924t__buf__unsafe_align;
  surface__pos=__t1924t__pos;
  __t_errcode=copy__t1309t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1925t__unsafe_ptr,&__t1925t__dat__pos,&__t1925t__dat__length,&__t1925t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1309t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1926t__unsafe_ptr,&__t1926t__dat__pos,&__t1926t__dat__length,&__t1926t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1023t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1927t____t1024t__unsafe_ptr,&__t1927t____t1024t__unsafe_size,&__t1927t____t1024t__unsafe_offset,&__t1927t____t1024t__unsafe_align,&__t1927t____t1025t);
  __t1929t=0;
  add__t188t(prev_pos,__t1929t,&__t1930t__);
  __t_errcode=str__t1279t(__t1927t____t1024t__unsafe_ptr,__t1927t____t1024t__unsafe_size,__t1927t____t1024t__unsafe_offset,__t1927t____t1024t__unsafe_align,__t1927t____t1025t,__t1930t__,&__t1931t__unsafe_ptr,&__t1931t__dat__pos,&__t1931t__dat__length,&__t1931t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1908t__unsafe_ptr=__t1931t__unsafe_ptr;
  __t1908t__dat__pos=__t1931t__dat__pos;
  __t1908t__dat__length=__t1931t__dat__length;
  __t1908t__dat__first=__t1931t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3884t=CHARS__buf__unsafe_ptr;
  *__t3885t=CHARS__buf__unsafe_size;
  *__t3886t=CHARS__buf__unsafe_offset;
  *__t3887t=CHARS__buf__unsafe_align;
  *__t3888t=CHARS__pos;
  *__t3889t=__t1908t__unsafe_ptr;
  *__t3890t=__t1908t__dat__pos;
  *__t3891t=__t1908t__dat__length;
  *__t3892t=__t1908t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t1932t(char** __t3893t, uint64_t* __t3894t, uint32_t* __t3895t, uint32_t* __t3896t, uint64_t* __t3897t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t3898t, uint64_t* __t3899t, uint64_t* __t3900t, char* __t3901t) {
  char* CHARS__buf__unsafe_ptr=*__t3893t;
  uint64_t CHARS__buf__unsafe_size=*__t3894t;
  uint32_t CHARS__buf__unsafe_offset=*__t3895t;
  uint32_t CHARS__buf__unsafe_align=*__t3896t;
  uint64_t CHARS__pos=*__t3897t;
  char* __t1933t__unsafe_ptr=0;
  uint64_t __t1933t__dat__pos=0;
  uint64_t __t1933t__dat__length=0;
  char __t1933t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1934t__unsafe_ptr=0;
  uint64_t __t1934t__dat__pos=0;
  uint64_t __t1934t__dat__length=0;
  char __t1934t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t1935t__=0;
  uint64_t __t1936t__=0;
  char __t1937t__=0;
  char __t1938t=0;
  uint64_t __t1939t__=0;
  char __t1940t__=0;
  char __t1941t=0;
  uint64_t __t1942t__=0;
  char* __t1943t__buf__unsafe_ptr=0;
  uint64_t __t1943t__buf__unsafe_size=0;
  uint32_t __t1943t__buf__unsafe_offset=0;
  uint32_t __t1943t__buf__unsafe_align=0;
  uint64_t __t1943t__pos=0;
  char* __t1944t____t1027t__unsafe_ptr=0;
  uint64_t __t1944t____t1027t__unsafe_size=0;
  uint32_t __t1944t____t1027t__unsafe_offset=0;
  uint32_t __t1944t____t1027t__unsafe_align=0;
  uint64_t __t1944t____t1028t=0;
  char* __t1945t__buf__unsafe_ptr=0;
  uint64_t __t1945t__buf__unsafe_size=0;
  uint32_t __t1945t__buf__unsafe_offset=0;
  uint32_t __t1945t__buf__unsafe_align=0;
  uint64_t __t1945t__pos=0;
  char* __t1946t__buf__unsafe_ptr=0;
  uint64_t __t1946t__buf__unsafe_size=0;
  uint32_t __t1946t__buf__unsafe_offset=0;
  uint32_t __t1946t__buf__unsafe_align=0;
  uint64_t __t1946t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1947t__unsafe_ptr=0;
  uint64_t __t1947t__dat__pos=0;
  uint64_t __t1947t__dat__length=0;
  char __t1947t__dat__first=0;
  char* __t1948t____t1024t__unsafe_ptr=0;
  uint64_t __t1948t____t1024t__unsafe_size=0;
  uint32_t __t1948t____t1024t__unsafe_offset=0;
  uint32_t __t1948t____t1024t__unsafe_align=0;
  uint64_t __t1948t____t1025t=0;
  uint64_t __t1950t=0;
  uint64_t __t1951t__=0;
  char* __t1952t__unsafe_ptr=0;
  uint64_t __t1952t__dat__pos=0;
  uint64_t __t1952t__dat__length=0;
  char __t1952t__dat__first=0;
  char __t1953t__=0;
  char __t1954t__=0;
  char __t1955t=0;
  uint64_t __t1956t__=0;
  char __t1957t__=0;
  char __t1958t=0;
  uint64_t __t1959t__=0;
  char* __t1961t__unsafe_ptr=0;
  uint64_t __t1961t__dat__pos=0;
  uint64_t __t1961t__dat__length=0;
  char __t1961t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t1962t__=0;
  uint64_t __t1963t__=0;
  uint64_t __t1964t__=0;
  char* __t1965t__buf__unsafe_ptr=0;
  uint64_t __t1965t__buf__unsafe_size=0;
  uint32_t __t1965t__buf__unsafe_offset=0;
  uint32_t __t1965t__buf__unsafe_align=0;
  uint64_t __t1965t__pos=0;
  char* __t1966t____t1027t__unsafe_ptr=0;
  uint64_t __t1966t____t1027t__unsafe_size=0;
  uint32_t __t1966t____t1027t__unsafe_offset=0;
  uint32_t __t1966t____t1027t__unsafe_align=0;
  uint64_t __t1966t____t1028t=0;
  char* __t1967t__buf__unsafe_ptr=0;
  uint64_t __t1967t__buf__unsafe_size=0;
  uint32_t __t1967t__buf__unsafe_offset=0;
  uint32_t __t1967t__buf__unsafe_align=0;
  uint64_t __t1967t__pos=0;
  char* __t1968t__buf__unsafe_ptr=0;
  uint64_t __t1968t__buf__unsafe_size=0;
  uint32_t __t1968t__buf__unsafe_offset=0;
  uint32_t __t1968t__buf__unsafe_align=0;
  uint64_t __t1968t__pos=0;
  char* __t1969t__unsafe_ptr=0;
  uint64_t __t1969t__dat__pos=0;
  uint64_t __t1969t__dat__length=0;
  char __t1969t__dat__first=0;
  char* __t1970t__unsafe_ptr=0;
  uint64_t __t1970t__dat__pos=0;
  uint64_t __t1970t__dat__length=0;
  char __t1970t__dat__first=0;
  char* __t1971t____t1024t__unsafe_ptr=0;
  uint64_t __t1971t____t1024t__unsafe_size=0;
  uint32_t __t1971t____t1024t__unsafe_offset=0;
  uint32_t __t1971t____t1024t__unsafe_align=0;
  uint64_t __t1971t____t1025t=0;
  uint64_t __t1973t=0;
  uint64_t __t1974t__=0;
  char* __t1975t__unsafe_ptr=0;
  uint64_t __t1975t__dat__pos=0;
  uint64_t __t1975t__dat__length=0;
  char __t1975t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1260t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t1933t__unsafe_ptr,&__t1933t__dat__pos,&__t1933t__dat__length,&__t1933t__dat__first);
  s1__unsafe_ptr=__t1933t__unsafe_ptr;
  s1__dat__pos=__t1933t__dat__pos;
  s1__dat__length=__t1933t__dat__length;
  s1__dat__first=__t1933t__dat__first;
  __t_errcode=str__t1283t(_s2,&__t1934t__unsafe_ptr,&__t1934t__dat__pos,&__t1934t__dat__length,&__t1934t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__unsafe_ptr=__t1934t__unsafe_ptr;
  s2__dat__pos=__t1934t__dat__pos;
  s2__dat__length=__t1934t__dat__length;
  s2__dat__first=__t1934t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1935t__);
  if(__t1935t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1936t__);
  eq__t133t(CHARS__pos,__t1936t__,&__t1937t__);
  __t1938t=__t1937t__;
  }
  if(__t1938t){
  add__t188t(CHARS__pos,s2__dat__length,&__t1939t__);
  lt__t265t(__t1939t__,CHARS__buf__unsafe_size,&__t1940t__);
  __t1941t=__t1940t__;
  }
  if(__t1941t){
  len__t1292t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1942t__);
  __t_errcode=alloc__t1084t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1942t__,&__t1943t__buf__unsafe_ptr,&__t1943t__buf__unsafe_size,&__t1943t__buf__unsafe_offset,&__t1943t__buf__unsafe_align,&__t1943t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1026t(__t1943t__buf__unsafe_ptr,__t1943t__buf__unsafe_size,__t1943t__buf__unsafe_offset,__t1943t__buf__unsafe_align,__t1943t__pos,&__t1944t____t1027t__unsafe_ptr,&__t1944t____t1027t__unsafe_size,&__t1944t____t1027t__unsafe_offset,&__t1944t____t1027t__unsafe_align,&__t1944t____t1028t);
  arena__t1009t(&__t1944t____t1027t__unsafe_ptr,&__t1944t____t1027t__unsafe_size,&__t1944t____t1027t__unsafe_offset,&__t1944t____t1027t__unsafe_align,__t1944t____t1028t,&__t1945t__buf__unsafe_ptr,&__t1945t__buf__unsafe_size,&__t1945t__buf__unsafe_offset,&__t1945t__buf__unsafe_align,&__t1945t__pos);
  __t1946t__buf__unsafe_ptr=__t1945t__buf__unsafe_ptr;
  __t1946t__buf__unsafe_size=__t1945t__buf__unsafe_size;
  __t1946t__buf__unsafe_offset=__t1945t__buf__unsafe_offset;
  __t1946t__buf__unsafe_align=__t1945t__buf__unsafe_align;
  __t1946t__pos=__t1945t__pos;
  surface__buf__unsafe_ptr=__t1946t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1946t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1946t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1946t__buf__unsafe_align;
  surface__pos=__t1946t__pos;
  __t_errcode=copy__t1309t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1947t__unsafe_ptr,&__t1947t__dat__pos,&__t1947t__dat__length,&__t1947t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1023t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1948t____t1024t__unsafe_ptr,&__t1948t____t1024t__unsafe_size,&__t1948t____t1024t__unsafe_offset,&__t1948t____t1024t__unsafe_align,&__t1948t____t1025t);
  __t1950t=0;
  add__t188t(s1__dat__pos,__t1950t,&__t1951t__);
  __t_errcode=str__t1279t(__t1948t____t1024t__unsafe_ptr,__t1948t____t1024t__unsafe_size,__t1948t____t1024t__unsafe_offset,__t1948t____t1024t__unsafe_align,__t1948t____t1025t,__t1951t__,&__t1952t__unsafe_ptr,&__t1952t__dat__pos,&__t1952t__dat__length,&__t1952t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1953t__);
  if(__t1953t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1954t__);
  __t1955t=__t1954t__;
  }
  if(__t1955t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1956t__);
  eq__t133t(s2__dat__pos,__t1956t__,&__t1957t__);
  __t1958t=__t1957t__;
  }
  if(__t1958t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t1959t__);
  __t_errcode=str__t1279t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t1959t__,s1__dat__pos,&__t1961t__unsafe_ptr,&__t1961t__dat__pos,&__t1961t__dat__length,&__t1961t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1952t__unsafe_ptr=__t1961t__unsafe_ptr;
  __t1952t__dat__pos=__t1961t__dat__pos;
  __t1952t__dat__length=__t1961t__dat__length;
  __t1952t__dat__first=__t1961t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1292t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1962t__);
  len__t1292t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1963t__);
  add__t188t(__t1962t__,__t1963t__,&__t1964t__);
  __t_errcode=alloc__t1084t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1964t__,&__t1965t__buf__unsafe_ptr,&__t1965t__buf__unsafe_size,&__t1965t__buf__unsafe_offset,&__t1965t__buf__unsafe_align,&__t1965t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1026t(__t1965t__buf__unsafe_ptr,__t1965t__buf__unsafe_size,__t1965t__buf__unsafe_offset,__t1965t__buf__unsafe_align,__t1965t__pos,&__t1966t____t1027t__unsafe_ptr,&__t1966t____t1027t__unsafe_size,&__t1966t____t1027t__unsafe_offset,&__t1966t____t1027t__unsafe_align,&__t1966t____t1028t);
  arena__t1009t(&__t1966t____t1027t__unsafe_ptr,&__t1966t____t1027t__unsafe_size,&__t1966t____t1027t__unsafe_offset,&__t1966t____t1027t__unsafe_align,__t1966t____t1028t,&__t1967t__buf__unsafe_ptr,&__t1967t__buf__unsafe_size,&__t1967t__buf__unsafe_offset,&__t1967t__buf__unsafe_align,&__t1967t__pos);
  __t1968t__buf__unsafe_ptr=__t1967t__buf__unsafe_ptr;
  __t1968t__buf__unsafe_size=__t1967t__buf__unsafe_size;
  __t1968t__buf__unsafe_offset=__t1967t__buf__unsafe_offset;
  __t1968t__buf__unsafe_align=__t1967t__buf__unsafe_align;
  __t1968t__pos=__t1967t__pos;
  surface__buf__unsafe_ptr=__t1968t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1968t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1968t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1968t__buf__unsafe_align;
  surface__pos=__t1968t__pos;
  __t_errcode=copy__t1309t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1969t__unsafe_ptr,&__t1969t__dat__pos,&__t1969t__dat__length,&__t1969t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1309t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1970t__unsafe_ptr,&__t1970t__dat__pos,&__t1970t__dat__length,&__t1970t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1023t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1971t____t1024t__unsafe_ptr,&__t1971t____t1024t__unsafe_size,&__t1971t____t1024t__unsafe_offset,&__t1971t____t1024t__unsafe_align,&__t1971t____t1025t);
  __t1973t=0;
  add__t188t(prev_pos,__t1973t,&__t1974t__);
  __t_errcode=str__t1279t(__t1971t____t1024t__unsafe_ptr,__t1971t____t1024t__unsafe_size,__t1971t____t1024t__unsafe_offset,__t1971t____t1024t__unsafe_align,__t1971t____t1025t,__t1974t__,&__t1975t__unsafe_ptr,&__t1975t__dat__pos,&__t1975t__dat__length,&__t1975t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1952t__unsafe_ptr=__t1975t__unsafe_ptr;
  __t1952t__dat__pos=__t1975t__dat__pos;
  __t1952t__dat__length=__t1975t__dat__length;
  __t1952t__dat__first=__t1975t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3893t=CHARS__buf__unsafe_ptr;
  *__t3894t=CHARS__buf__unsafe_size;
  *__t3895t=CHARS__buf__unsafe_offset;
  *__t3896t=CHARS__buf__unsafe_align;
  *__t3897t=CHARS__pos;
  *__t3898t=__t1952t__unsafe_ptr;
  *__t3899t=__t1952t__dat__pos;
  *__t3900t=__t1952t__dat__length;
  *__t3901t=__t1952t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1445t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t3902t) {
  uint64_t __t1446t__=0;
  char* __t1447t__=0;
  add__t188t(s__dat__pos,i,&__t1446t__);
  add__t684t(s__unsafe_ptr,__t1446t__,&__t1447t__);
  goto __t_return;
  __t_return:
  *__t3902t=__t1447t__;
}

int slice__t1468t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t3903t, uint64_t* __t3904t, uint64_t* __t3905t, char* __t3906t) {
  char* __t1469t__unsafe_ptr=0;
  uint64_t __t1469t__dat__pos=0;
  uint64_t __t1469t__dat__length=0;
  char __t1469t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1470t__=0;
  char* __t1471t__unsafe_ptr=0;
  uint64_t __t1471t__dat__pos=0;
  uint64_t __t1471t__dat__length=0;
  char __t1471t__dat__first=0;
  char __t1472t__=0;
  char __t1473t__=0;
  char __t1474t=0;
  char __t1475t__=0;
  uint64_t __t1476t__=0;
  uint64_t new_length=0;
  uint64_t __t1477t=0;
  char __t1478t__=0;
  char new_first=0;
  char* __t1480t__=0;
  char __t1481t__value=0;
  uint64_t __t1482t__=0;
  char* __t1483t__unsafe_ptr=0;
  uint64_t __t1483t__dat__pos=0;
  uint64_t __t1483t__dat__length=0;
  char __t1483t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1260t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1469t__unsafe_ptr,&__t1469t__dat__pos,&__t1469t__dat__length,&__t1469t__dat__first);
  s__unsafe_ptr=__t1469t__unsafe_ptr;
  s__dat__pos=__t1469t__dat__pos;
  s__dat__length=__t1469t__dat__length;
  s__dat__first=__t1469t__dat__first;
  eq__t133t(from,to,&__t1470t__);
  if(__t1470t__){
  __t_errcode=str__t1283t(__t391t,&__t1471t__unsafe_ptr,&__t1471t__dat__pos,&__t1471t__dat__length,&__t1471t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t289t(from,to,&__t1472t__);
  if(!__t1472t__){
  gt__t289t(to,s__dat__length,&__t1473t__);
  __t1474t=__t1473t__;
  }
  else{
  __t1474t=0;
  not__t41t(__t1474t,&__t1475t__);
  __t1474t=__t1475t__;
  }
  if(__t1474t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t365t(to,from,&__t1476t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1476t__;
  __t1477t=0;
  neq__t157t(from,__t1477t,&__t1478t__);
  if(__t1478t__){
  get__t1445t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1480t__);
  if(!__t1480t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1481t__value,__t1480t__,1);
  new_first=__t1481t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1482t__);
  str__t1223t(s__unsafe_ptr,__t1482t__,new_length,new_first,&__t1483t__unsafe_ptr,&__t1483t__dat__pos,&__t1483t__dat__length,&__t1483t__dat__first);
  __t1471t__unsafe_ptr=__t1483t__unsafe_ptr;
  __t1471t__dat__pos=__t1483t__dat__pos;
  __t1471t__dat__length=__t1483t__dat__length;
  __t1471t__dat__first=__t1483t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3903t=__t1471t__unsafe_ptr;
  *__t3904t=__t1471t__dat__pos;
  *__t3905t=__t1471t__dat__length;
  *__t3906t=__t1471t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1548t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t3907t) {
  char* __t1549t__unsafe_ptr=0;
  uint64_t __t1549t__dat__pos=0;
  uint64_t __t1549t__dat__length=0;
  char __t1549t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1550t__unsafe_ptr=0;
  uint64_t __t1550t__dat__pos=0;
  uint64_t __t1550t__dat__length=0;
  char __t1550t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1551t__=0;
  char __t1552t=0;
  uint64_t __t1553t__=0;
  uint64_t n=0;
  uint64_t __t1554t__=0;
  uint64_t __t1555t__=0;
  char* __t1556t__unsafe_ptr=0;
  uint64_t __t1556t__dat__pos=0;
  uint64_t __t1556t__dat__length=0;
  char __t1556t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1557t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1260t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1549t__unsafe_ptr,&__t1549t__dat__pos,&__t1549t__dat__length,&__t1549t__dat__first);
  stack__unsafe_ptr=__t1549t__unsafe_ptr;
  stack__dat__pos=__t1549t__dat__pos;
  stack__dat__length=__t1549t__dat__length;
  stack__dat__first=__t1549t__dat__first;
  __t_errcode=str__t1283t(_needle,&__t1550t__unsafe_ptr,&__t1550t__dat__pos,&__t1550t__dat__length,&__t1550t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1550t__unsafe_ptr;
  needle__dat__pos=__t1550t__dat__pos;
  needle__dat__length=__t1550t__dat__length;
  needle__dat__first=__t1550t__dat__first;
  lt__t265t(stack__dat__length,needle__dat__length,&__t1551t__);
  if(__t1551t__){
  __t1552t=0;
  goto __t_return;
  }
  len__t1292t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1553t__);
  n=__t1553t__;
  len__t1292t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1554t__);
  __t_errcode=sub__t365t(n,__t1554t__,&__t1555t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1468t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1555t__,n,&__t1556t__unsafe_ptr,&__t1556t__dat__pos,&__t1556t__dat__length,&__t1556t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1556t__unsafe_ptr;
  ret__dat__pos=__t1556t__dat__pos;
  ret__dat__length=__t1556t__dat__length;
  ret__dat__first=__t1556t__dat__first;
  eq__t1379t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1557t__);
  __t1552t=__t1557t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3907t=__t1552t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t390t(const char* value, const char** __t3908t, const char** __t3909t) {
  const char* __t392t=0;
  __t392t=__t391t;
  goto __t_return;
  __t_return:
  *__t3908t=value;
  *__t3909t=__t392t;
}

static inline __attribute__((always_inline)) void print__t399t(const char* value, const char* endl) {
  int __t400t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t443t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[33m");
  }
}

static inline __attribute__((always_inline)) void set__t555t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3585t(char colors__initialized) {
  const char* __t3587t__value=0;
  const char* __t3587t____t392t=0;
  int __t3589t=0;
  int __t3590t=0;
  char __t3591t=0;
  char __t3592t=0;
  const char* __t3596t__value=0;
  const char* __t3596t____t392t=0;
  const char* __t3600t__value=0;
  const char* __t3600t____t392t=0;
  nn__t390t(__t3549t,&__t3587t__value,&__t3587t____t392t);
  print__t399t(__t3587t__value,__t3587t____t392t);
  __t3592t=1;
  if(__t3593t!=__t3593t){
  __t3592t=0;
  }
  if(__t3592t){
  __t3591t=1;
  }
  if(__t3591t){
  set__t443t(colors__initialized);
  nn__t390t(__t2212t,&__t3596t__value,&__t3596t____t392t);
  print__t399t(__t3596t__value,__t3596t____t392t);
  }
  set__t555t(colors__initialized);
  nn__t390t(__t3564t,&__t3600t__value,&__t3600t____t392t);
  print__t399t(__t3600t__value,__t3600t____t392t);
}

static inline __attribute__((always_inline)) void nn__t1672t(char* value__unsafe_ptr, uint64_t value__dat__pos, uint64_t value__dat__length, char value__dat__first, char** __t3910t, uint64_t* __t3911t, uint64_t* __t3912t, char* __t3913t, const char** __t3914t) {
  const char* __t1673t=0;
  __t1673t=__t391t;
  goto __t_return;
  __t_return:
  *__t3910t=value__unsafe_ptr;
  *__t3911t=value__dat__pos;
  *__t3912t=value__dat__length;
  *__t3913t=value__dat__first;
  *__t3914t=__t1673t;
}

static inline __attribute__((always_inline)) void print__t1441t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, const char* endl) {
  int __t1442t=0;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t389t() {
  fflush(stdout);
}

static inline __attribute__((always_inline)) void popen__t2712t(const char* cmd, char** __t3915t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t3915t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2711t(char* unsafe_ptr, int64_t* __t3916t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t3916t=status;
}

static inline __attribute__((always_inline)) void int__t592t(uint64_t x, int64_t* __t3917t) {
  int __t593t=0;
  int __t594t=0;
  int __t595t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t3917t=z;
}

static inline __attribute__((always_inline)) void is_different__t96t(int64_t x, int64_t y, int* __t3918t) {
  int __t97t=0;
  int __t98t__=0;
  not__t50t(__t97t,&__t98t__);
  goto __t_return;
  __t_return:
  *__t3918t=__t98t__;
}

static inline __attribute__((always_inline)) void neq__t146t(int64_t x, int64_t y, char* __t3919t) {
  int __t147t__=0;
  char z=0;
  is_different__t96t(x,y,&__t147t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3919t=z;
}

static inline __attribute__((always_inline)) int open__t2713t(const char* cmd, char** __t3920t) {
  char* __t2714t__=0;
  char* unsafe_ptr=0;
  char __t2715t__=0;
  char __t2716t__=0;
  char __t2717t__=0;
  int64_t __t2718t__=0;
  int64_t status=0;
  uint64_t __t2719t=0;
  int64_t __t2720t__=0;
  char __t2721t__=0;
  char __t2722t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2712t(cmd,&__t2714t__);
  unsafe_ptr=__t2714t__;
  exists__t612t(unsafe_ptr,&__t2715t__);
  not__t41t(__t2715t__,&__t2716t__);
  if(__t2716t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t612t(unsafe_ptr,&__t2717t__);
  if(__t2717t__){
  pclose__t2711t(unsafe_ptr,&__t2718t__);
  status=__t2718t__;
  unsafe_ptr=0;
  __t2719t=0;
  int__t592t(__t2719t,&__t2720t__);
  neq__t146t(status,__t2720t__,&__t2721t__);
  if(__t2721t__){
  __t_complain=37;
  goto __t2722t__label;
  __t2722t__label:__t2722t=__t2722t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3920t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2724t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t3921t) {
  const char* __t2725t__cstr=0;
  char* __t2725t__str__unsafe_ptr=0;
  uint64_t __t2725t__str__dat__pos=0;
  uint64_t __t2725t__str__dat__length=0;
  char __t2725t__str__dat__first=0;
  const char* __t2727t__=0;
  char* __t2728t__unsafe_ptr=0;
  char __t2729t____t2717t__=0;
  int64_t __t2729t____t2718t__=0;
  int64_t __t2729t__status=0;
  uint64_t __t2729t____t2719t=0;
  int64_t __t2729t____t2720t__=0;
  char __t2729t____t2721t__=0;
  char __t2729t____t2722t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1364t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2725t__cstr,&__t2725t__str__unsafe_ptr,&__t2725t__str__dat__pos,&__t2725t__str__dat__length,&__t2725t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1374t(__t2725t__cstr,__t2725t__str__unsafe_ptr,__t2725t__str__dat__pos,__t2725t__str__dat__length,__t2725t__str__dat__first,&__t2727t__);
  __t_errcode=open__t2713t(__t2727t__,&__t2728t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t612t(__t2728t__unsafe_ptr,&__t2729t____t2717t__);
  if(__t2729t____t2717t__){
  pclose__t2711t(__t2728t__unsafe_ptr,&__t2729t____t2718t__);
  __t2729t__status=__t2729t____t2718t__;
  __t2728t__unsafe_ptr=0;
  __t2729t____t2719t=0;
  int__t592t(__t2729t____t2719t,&__t2729t____t2720t__);
  neq__t146t(__t2729t__status,__t2729t____t2720t__,&__t2729t____t2721t__);
  if(__t2729t____t2721t__){
  __t_complain=37;
  goto __t2722t__label;
  __t2722t__label:__t2729t____t2722t=__t2729t____t2722t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3921t=__t2728t__unsafe_ptr;
  
  __t_skip_returns:free__t682t(&__t2725t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2686t(int64_t value, const char** __t3922t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t3922t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t3923t) {
  const char* value=0;
  *__t3923t=value;
}

static inline __attribute__((always_inline)) int run__t3531t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t3924t) {
  char* __t3532t__unsafe_ptr=0;
  char __t3533t____t2729t____t2717t__=0;
  int64_t __t3533t____t2729t____t2718t__=0;
  int64_t __t3533t____t2729t__status=0;
  uint64_t __t3533t____t2729t____t2719t=0;
  int64_t __t3533t____t2729t____t2720t__=0;
  char __t3533t____t2729t____t2721t__=0;
  char __t3533t____t2729t____t2722t=0;
  char* proc__unsafe_ptr=0;
  char __t3534t=0;
  int64_t __t3535t=0;
  int64_t error=0;
  const char* __t3536t__=0;
  const char* __t3537t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2724t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3532t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t3532t__unsafe_ptr;
  exists__t612t(__t3532t__unsafe_ptr,&__t3533t____t2729t____t2717t__);
  if(__t3533t____t2729t____t2717t__){
  pclose__t2711t(__t3532t__unsafe_ptr,&__t3533t____t2729t____t2718t__);
  __t3533t____t2729t__status=__t3533t____t2729t____t2718t__;
  __t3532t__unsafe_ptr=0;
  __t3533t____t2729t____t2719t=0;
  int__t592t(__t3533t____t2729t____t2719t,&__t3533t____t2729t____t2720t__);
  neq__t146t(__t3533t____t2729t__status,__t3533t____t2729t____t2720t__,&__t3533t____t2729t____t2721t__);
  if(__t3533t____t2729t____t2721t__){
  __t_complain=37;
  goto __t2722t__label;
  __t2722t__label:__t3533t____t2729t____t2722t=__t3533t____t2729t____t2722t==0;
  }
  }
  __t3535t=__t_complain;
  __t3534t=(__t_complain==0);
  __t_complain=0;
  error=__t3535t;
  __t3534t__label:__t3534t=__t3534t==0;
  if(__t3534t){
  cstr__t2686t(error,&__t3536t__);
  goto __t_return;
  }
  cstr__t1t(&__t3537t__);
  __t3536t__=__t3537t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3924t=__t3536t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void exists__t1221t(const char* c, char* __t3925t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t3925t=z;
}

static inline __attribute__((always_inline)) void set__t435t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3567t(char colors__initialized) {
  const char* __t3569t__value=0;
  const char* __t3569t____t392t=0;
  int __t3571t=0;
  char __t3572t=0;
  char __t3573t=0;
  const char* __t3578t__value=0;
  const char* __t3578t____t392t=0;
  int __t3580t=0;
  const char* __t3583t__value=0;
  const char* __t3583t____t392t=0;
  nn__t390t(__t3549t,&__t3569t__value,&__t3569t____t392t);
  print__t399t(__t3569t__value,__t3569t____t392t);
  __t3573t=1;
  if(__t3574t!=__t3574t){
  __t3573t=0;
  }
  if(__t3573t){
  __t3572t=1;
  }
  if(__t3572t){
  set__t435t(colors__initialized);
  nn__t390t(__t3577t,&__t3578t__value,&__t3578t____t392t);
  print__t399t(__t3578t__value,__t3578t____t392t);
  }
  set__t555t(colors__initialized);
  nn__t390t(__t3564t,&__t3583t__value,&__t3583t____t392t);
  print__t399t(__t3583t__value,__t3583t____t392t);
}

static inline __attribute__((always_inline)) void print__t401t(const char* value) {
  int __t402t=0;
  const char* endl=0;
  endl=__t403t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t439t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[32m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3547t(char colors__initialized) {
  const char* __t3550t__value=0;
  const char* __t3550t____t392t=0;
  char __t3552t=0;
  char __t3553t=0;
  const char* __t3558t__value=0;
  const char* __t3558t____t392t=0;
  int __t3560t=0;
  int __t3561t=0;
  const char* __t3565t__value=0;
  const char* __t3565t____t392t=0;
  nn__t390t(__t3549t,&__t3550t__value,&__t3550t____t392t);
  print__t399t(__t3550t__value,__t3550t____t392t);
  __t3553t=1;
  if(__t3554t!=__t3554t){
  __t3553t=0;
  }
  if(__t3553t){
  __t3552t=1;
  }
  if(__t3552t){
  set__t439t(colors__initialized);
  nn__t390t(__t3557t,&__t3558t__value,&__t3558t____t392t);
  print__t399t(__t3558t__value,__t3558t____t392t);
  }
  set__t555t(colors__initialized);
  nn__t390t(__t3564t,&__t3565t__value,&__t3565t____t392t);
  print__t399t(__t3565t__value,__t3565t____t392t);
}

static inline __attribute__((always_inline)) int test__t3602t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char* __t3926t) {
  char* __t3606t__value__unsafe_ptr=0;
  uint64_t __t3606t__value__dat__pos=0;
  uint64_t __t3606t__value__dat__length=0;
  char __t3606t__value__dat__first=0;
  const char* __t3606t____t1673t=0;
  const char* __t3610t__=0;
  const char* error=0;
  const char* __t3612t__value=0;
  const char* __t3612t____t392t=0;
  char __t3614t__=0;
  const char* __t3619t__value=0;
  const char* __t3619t____t392t=0;
  char __t3622t=0;
  char __t3626t=0;
  int __t_errcode=0;
  int __t_complain=0;
  print_marker__t3585t(colors__initialized);
  nn__t1672t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3606t__value__unsafe_ptr,&__t3606t__value__dat__pos,&__t3606t__value__dat__length,&__t3606t__value__dat__first,&__t3606t____t1673t);
  print__t1441t(__t3606t__value__unsafe_ptr,__t3606t__value__dat__pos,__t3606t__value__dat__length,__t3606t__value__dat__first,__t3606t____t1673t);
  print__t389t();
  __t_errcode=run__t3531t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3610t__);
  if(__t_errcode){
  goto __t_failure;
  }
  error=__t3610t__;
  nn__t390t(__t3611t,&__t3612t__value,&__t3612t____t392t);
  print__t399t(__t3612t__value,__t3612t____t392t);
  exists__t1221t(error,&__t3614t__);
  if(__t3614t__){
  print_marker__t3567t(colors__initialized);
  print__t401t(__t391t);
  nn__t390t(__t3618t,&__t3619t__value,&__t3619t____t392t);
  print__t399t(__t3619t__value,__t3619t____t392t);
  print__t401t(error);
  __t3622t=0;
  goto __t_return;
  }
  print_marker__t3547t(colors__initialized);
  print__t401t(__t391t);
  __t3626t=1;
  __t3622t=__t3626t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3926t=__t3622t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t412t(uint64_t value, const char* endl) {
  int __t413t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t397t(uint64_t value, uint64_t* __t3927t, const char** __t3928t) {
  const char* __t398t=0;
  __t398t=__t391t;
  goto __t_return;
  __t_return:
  *__t3927t=value;
  *__t3928t=__t398t;
}

static inline __attribute__((always_inline)) int main__t3627t() {
  char* __t3629t__unsafe_ptr=0;
  uint64_t __t3629t__dat__pos=0;
  uint64_t __t3629t__dat__length=0;
  char __t3629t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t3632t__initialized=0;
  char colors__initialized=0;
  uint64_t __t3634t=0;
  char* __t3635t__unsafe_ptr=0;
  uint64_t __t3635t__unsafe_size=0;
  uint32_t __t3635t__unsafe_offset=0;
  uint32_t __t3635t__unsafe_align=0;
  char* __t3637t__buf__unsafe_ptr=0;
  uint64_t __t3637t__buf__unsafe_size=0;
  uint32_t __t3637t__buf__unsafe_offset=0;
  uint32_t __t3637t__buf__unsafe_align=0;
  uint64_t __t3637t__pos=0;
  char* __t3638t__buf__unsafe_ptr=0;
  uint64_t __t3638t__buf__unsafe_size=0;
  uint32_t __t3638t__buf__unsafe_offset=0;
  uint32_t __t3638t__buf__unsafe_align=0;
  uint64_t __t3638t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t3640t__unsafe_ptr=0;
  uint64_t __t3640t__dat__pos=0;
  uint64_t __t3640t__dat__length=0;
  char __t3640t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  uint64_t __t3641t=0;
  uint64_t __t3642t=0;
  uint64_t counter=0;
  uint64_t __t3643t=0;
  uint64_t __t3644t=0;
  uint64_t failures=0;
  uint64_t __t3645t=0;
  char* __t3646t__unsafe_ptr=0;
  char __t3648t=0;
  char* __t3649t__unsafe_ptr=0;
  uint64_t __t3649t__dat__pos=0;
  uint64_t __t3649t__dat__length=0;
  char __t3649t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t3651t__=0;
  char __t3652t__=0;
  char __t3653t__=0;
  char __t3654t=0;
  char __t3655t__=0;
  uint64_t __t3656t__=0;
  uint64_t __t3657t____t1018t=0;
  uint64_t __t3657t____t1019t__=0;
  char* __t3658t__unsafe_ptr=0;
  uint64_t __t3658t__dat__pos=0;
  uint64_t __t3658t__dat__length=0;
  char __t3658t__dat__first=0;
  char* __t3660t__unsafe_ptr=0;
  uint64_t __t3660t__dat__pos=0;
  uint64_t __t3660t__dat__length=0;
  char __t3660t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t3661t=0;
  char* __t3662t__unsafe_ptr=0;
  char __t3664t=0;
  char* __t3665t__unsafe_ptr=0;
  uint64_t __t3665t__dat__pos=0;
  uint64_t __t3665t__dat__length=0;
  char __t3665t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t3667t__=0;
  char __t3668t__=0;
  uint64_t __t3669t__=0;
  uint64_t __t3670t____t1018t=0;
  uint64_t __t3670t____t1019t__=0;
  uint64_t __t3671t=0;
  uint64_t __t3672t__=0;
  char* __t3673t__unsafe_ptr=0;
  uint64_t __t3673t__dat__pos=0;
  uint64_t __t3673t__dat__length=0;
  char __t3673t__dat__first=0;
  char* __t3674t__unsafe_ptr=0;
  uint64_t __t3674t__dat__pos=0;
  uint64_t __t3674t__dat__length=0;
  char __t3674t__dat__first=0;
  char __t3675t__=0;
  char __t3676t__=0;
  uint64_t __t3677t=0;
  uint64_t __t3678t__=0;
  uint64_t __t3679t=0;
  char __t3680t__=0;
  const char* __t3694t__value=0;
  const char* __t3694t____t392t=0;
  const char* __t3684t__value=0;
  const char* __t3684t____t392t=0;
  const char* __t3689t__value=0;
  const char* __t3689t____t392t=0;
  uint64_t __t3700t__value=0;
  const char* __t3700t____t398t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1283t(__t3628t,&__t3629t__unsafe_ptr,&__t3629t__dat__pos,&__t3629t__dat__length,&__t3629t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  test_root__unsafe_ptr=__t3629t__unsafe_ptr;
  test_root__dat__pos=__t3629t__dat__pos;
  test_root__dat__length=__t3629t__dat__length;
  test_root__dat__first=__t3629t__dat__first;
  console__t379t();
  colors__t429t(&__t3632t__initialized);
  colors__initialized=__t3632t__initialized;
  __t3634t=64;
  __t_errcode=alloc__t950t(__t3634t,&__t3635t__unsafe_ptr,&__t3635t__unsafe_size,&__t3635t__unsafe_offset,&__t3635t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1012t(&__t3635t__unsafe_ptr,&__t3635t__unsafe_size,&__t3635t__unsafe_offset,&__t3635t__unsafe_align,&__t3637t__buf__unsafe_ptr,&__t3637t__buf__unsafe_size,&__t3637t__buf__unsafe_offset,&__t3637t__buf__unsafe_align,&__t3637t__pos);
  __t3638t__buf__unsafe_ptr=__t3637t__buf__unsafe_ptr;
  __t3638t__buf__unsafe_size=__t3637t__buf__unsafe_size;
  __t3638t__buf__unsafe_offset=__t3637t__buf__unsafe_offset;
  __t3638t__buf__unsafe_align=__t3637t__buf__unsafe_align;
  __t3638t__pos=__t3637t__pos;
  CHARS__buf__unsafe_ptr=__t3638t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t3638t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t3638t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t3638t__buf__unsafe_align;
  CHARS__pos=__t3638t__pos;
  __t_errcode=copy__t1314t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3639t,&__t3640t__unsafe_ptr,&__t3640t__dat__pos,&__t3640t__dat__length,&__t3640t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t3640t__unsafe_ptr;
  command_base__dat__pos=__t3640t__dat__pos;
  command_base__dat__length=__t3640t__dat__length;
  command_base__dat__first=__t3640t__dat__first;
  __t3641t=0;
  __t3642t=__t3641t;
  counter=__t3642t;
  __t3643t=0;
  __t3644t=__t3643t;
  failures=__t3644t;
  __t_errcode=open__t3407t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t3646t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3645t=0-1;
  while(1){
  __t3645t=__t3645t+1;
  __t_complain=get__t3490t(&__t3646t__unsafe_ptr,__t3645t,&__t3649t__unsafe_ptr,&__t3649t__dat__pos,&__t3649t__dat__length,&__t3649t__dat__first);
  __t3648t=__t_complain;
  if(__t_complain){
  goto __t3648t__label;
  }
  path__unsafe_ptr=__t3649t__unsafe_ptr;
  path__dat__pos=__t3649t__dat__pos;
  path__dat__length=__t3649t__dat__length;
  path__dat__first=__t3649t__dat__first;
  __t3648t__label:__t3648t=__t3648t==0;
  if(!__t3648t){
  break;
  }
  __t_errcode=eq__t1386t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t3650t,&__t3651t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3651t__){
  __t_errcode=is_dir__t3334t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t3652t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3652t__,&__t3653t__);
  __t3654t=__t3653t__;
  }
  else{
  __t3654t=0;
  not__t41t(__t3654t,&__t3655t__);
  __t3654t=__t3655t__;
  }
  if(__t3654t){
  continue;
  }
  gc__t1015t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t3656t__);
  __t_errcode=add__t1888t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t3658t__unsafe_ptr,&__t3658t__dat__pos,&__t3658t__dat__length,&__t3658t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1932t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3658t__unsafe_ptr,__t3658t__dat__pos,__t3658t__dat__length,__t3658t__dat__first,__t3659t,&__t3660t__unsafe_ptr,&__t3660t__dat__pos,&__t3660t__dat__length,&__t3660t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t3660t__unsafe_ptr;
  dir_path__dat__pos=__t3660t__dat__pos;
  dir_path__dat__length=__t3660t__dat__length;
  dir_path__dat__first=__t3660t__dat__first;
  __t_errcode=open__t3407t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t3662t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3661t=0-1;
  while(1){
  __t3661t=__t3661t+1;
  __t_complain=get__t3490t(&__t3662t__unsafe_ptr,__t3661t,&__t3665t__unsafe_ptr,&__t3665t__dat__pos,&__t3665t__dat__length,&__t3665t__dat__first);
  __t3664t=__t_complain;
  if(__t_complain){
  goto __t3664t__label;
  }
  entry__unsafe_ptr=__t3665t__unsafe_ptr;
  entry__dat__pos=__t3665t__dat__pos;
  entry__dat__length=__t3665t__dat__length;
  entry__dat__first=__t3665t__dat__first;
  __t3664t__label:__t3664t=__t3664t==0;
  if(!__t3664t){
  break;
  }
  __t_errcode=ends_with__t1548t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t3666t,&__t3667t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3667t__,&__t3668t__);
  if(__t3668t__){
  continue;
  }
  gc__t1015t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t3669t__);
  __t3671t=1;
  add__t188t(counter,__t3671t,&__t3672t__);
  counter=__t3672t__;
  __t_errcode=add__t1888t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t3673t__unsafe_ptr,&__t3673t__dat__pos,&__t3673t__dat__length,&__t3673t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1888t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3673t__unsafe_ptr,__t3673t__dat__pos,__t3673t__dat__length,__t3673t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t3674t__unsafe_ptr,&__t3674t__dat__pos,&__t3674t__dat__length,&__t3674t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t3602t(colors__initialized,__t3674t__unsafe_ptr,__t3674t__dat__pos,__t3674t__dat__length,__t3674t__dat__first,&__t3675t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3675t__,&__t3676t__);
  if(__t3676t__){
  __t3677t=1;
  add__t188t(failures,__t3677t,&__t3678t__);
  failures=__t3678t__;
  }
  __t3670t____t1018t=0;
  add__t188t(__t3669t__,__t3670t____t1018t,&__t3670t____t1019t__);
  CHARS__pos=__t3670t____t1019t__;
  }
  __t3657t____t1018t=0;
  add__t188t(__t3656t__,__t3657t____t1018t,&__t3657t____t1019t__);
  CHARS__pos=__t3657t____t1019t__;
  closedir__t3397t(__t3662t__unsafe_ptr);
  }
  __t3679t=0;
  eq__t133t(failures,__t3679t,&__t3680t__);
  if(__t3680t__){
  set__t439t(colors__initialized);
  nn__t390t(__t3683t,&__t3684t__value,&__t3684t____t392t);
  print__t399t(__t3684t__value,__t3684t____t392t);
  set__t555t(colors__initialized);
  nn__t390t(__t3688t,&__t3689t__value,&__t3689t____t392t);
  print__t399t(__t3689t__value,__t3689t____t392t);
  }
  else{
  set__t435t(colors__initialized);
  nn__t390t(__t3693t,&__t3694t__value,&__t3694t____t392t);
  print__t399t(__t3694t__value,__t3694t____t392t);
  set__t555t(colors__initialized);
  print__t412t(failures,__t3698t);
  }
  nn__t397t(counter,&__t3700t__value,&__t3700t____t398t);
  print__t412t(__t3700t__value,__t3700t____t398t);
  print__t401t(__t3702t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t3397t(__t3646t__unsafe_ptr);
  free__t682t(&__t3635t__unsafe_ptr);
  if(__t3632t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t3627t();return 0;}