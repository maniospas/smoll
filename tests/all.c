#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t3588t="pending";
const char* const __t3559t="] ";
const char* const __t3734t="no errors across ";
const char* const __t3569t="failure";
const char* const __t3694t="..";
const char* const __t3572t="X";
const char* const __t3612t="\r";
const char* const __t403t="\n";
const char* const __t3729t="PASSING ";
const char* const __t3611t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t3744t=" out of ";
const char* const __t3703t="/";
const char* const __t3672t="./tests/passing/";
const char* const __t3549t="success";
const char* const __t3748t=" tests";
const char* const __t3739t="FAILED ";
const char* const __t391t="";
const char* const __t3552t="V";
const char* const __t2207t="+";
const char* const __t3619t="    ";
const char* const __t3683t="./smoll --cleanup ";
const char* const __t3710t=".s";
const char* const __t3544t="[";
const char* const __t3717t="_fail_";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1196t(char** __t3750t, uint64_t* __t3751t, uint32_t* __t3752t, uint32_t* __t3753t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3750t=unsafe_ptr;
  *__t3751t=unsafe_size;
  *__t3752t=unsafe_offset;
  *__t3753t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t3754t) {
  *__t3754t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t3755t) {
  int value=0;
  *__t3755t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t3756t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t3756t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t3757t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t3757t=__t110t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t3758t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3758t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t3759t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3759t=z;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t3760t) {
  int __t338t__=0;
  char z=0;
  is_different__t108t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3760t=z;
}

static inline __attribute__((always_inline)) void nat__t687t(uint32_t x, uint64_t* __t3761t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3761t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t3762t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3762t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t3763t) {
  *__t3763t=to;
}

static inline __attribute__((always_inline)) void add__t684t(char* allocated, uint64_t offset, char** __t3764t) {
  char* element=0;
  char* __t685t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t685t__);
  goto __t_return;
  __t_return:
  *__t3764t=__t685t__;
}

static inline __attribute__((always_inline)) int get__t997t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t3765t) {
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
  *__t3765t=__t1003t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1218t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3766t, uint64_t* __t3767t, uint64_t* __t3768t, char* __t3769t) {
  goto __t_return;
  __t_return:
  *__t3766t=unsafe_ptr;
  *__t3767t=dat__pos;
  *__t3768t=dat__length;
  *__t3769t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1222t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3770t, uint64_t* __t3771t, uint64_t* __t3772t, char* __t3773t) {
  char* unsafe_ptr=0;
  uint64_t __t1223t__=0;
  uint64_t __t1224t=0;
  char __t1225t__=0;
  uint64_t __t1226t__=0;
  uint64_t __t1227t=0;
  char __t1228t__=0;
  char* __t1229t__unsafe_ptr=0;
  uint64_t __t1229t__dat__pos=0;
  uint64_t __t1229t__dat__length=0;
  char __t1229t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t687t(buf__unsafe_align,&__t1223t__);
  __t1224t=1;
  neq__t157t(__t1223t__,__t1224t,&__t1225t__);
  if(__t1225t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t687t(buf__unsafe_offset,&__t1226t__);
  __t1227t=0;
  neq__t157t(__t1226t__,__t1227t,&__t1228t__);
  if(__t1228t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t1218t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1229t__unsafe_ptr,&__t1229t__dat__pos,&__t1229t__dat__length,&__t1229t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3770t=__t1229t__unsafe_ptr;
  *__t3771t=__t1229t__dat__pos;
  *__t3772t=__t1229t__dat__length;
  *__t3773t=__t1229t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1256t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t3774t, uint64_t* __t3775t, uint64_t* __t3776t, char* __t3777t) {
  uint64_t __t1257t=0;
  char __t1258t__=0;
  char* __t1260t__=0;
  char __t1261t__value=0;
  char first=0;
  char* __t1262t__unsafe_ptr=0;
  uint64_t __t1262t__dat__pos=0;
  uint64_t __t1262t__dat__length=0;
  char __t1262t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1257t=0;
  neq__t157t(length,__t1257t,&__t1258t__);
  if(__t1258t__){
  __t_errcode=get__t997t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1260t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1260t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1261t__value,__t1260t__,1);
  first=__t1261t__value;
  }
  __t_errcode=str__t1222t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1262t__unsafe_ptr,&__t1262t__dat__pos,&__t1262t__dat__length,&__t1262t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3774t=__t1262t__unsafe_ptr;
  *__t3775t=__t1262t__dat__pos;
  *__t3776t=__t1262t__dat__length;
  *__t3777t=__t1262t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1278t(const char* c, char** __t3778t, uint64_t* __t3779t, uint64_t* __t3780t, char* __t3781t) {
  char* __t1279t__unsafe_ptr=0;
  uint64_t __t1279t__unsafe_size=0;
  uint32_t __t1279t__unsafe_offset=0;
  uint32_t __t1279t__unsafe_align=0;
  char* __t1280t__unsafe_ptr=0;
  uint64_t __t1280t__unsafe_size=0;
  uint32_t __t1280t__unsafe_offset=0;
  uint32_t __t1280t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1281t__=0;
  uint64_t length=0;
  uint64_t __t1282t=0;
  uint64_t __t1283t__=0;
  uint64_t __t1284t=0;
  char* __t1286t__unsafe_ptr=0;
  uint64_t __t1286t__dat__pos=0;
  uint64_t __t1286t__dat__length=0;
  char __t1286t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1196t(&__t1279t__unsafe_ptr,&__t1279t__unsafe_size,&__t1279t__unsafe_offset,&__t1279t__unsafe_align);
  __t1280t__unsafe_ptr=__t1279t__unsafe_ptr;
  __t1280t__unsafe_size=__t1279t__unsafe_size;
  __t1280t__unsafe_offset=__t1279t__unsafe_offset;
  __t1280t__unsafe_align=__t1279t__unsafe_align;
  buf__unsafe_ptr=__t1280t__unsafe_ptr;
  buf__unsafe_size=__t1280t__unsafe_size;
  buf__unsafe_offset=__t1280t__unsafe_offset;
  buf__unsafe_align=__t1280t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1281t__);
  buf__unsafe_ptr=__t1281t__;
  if(c){
  length=strlen(c);
  }
  __t1282t=1;
  add__t188t(length,__t1282t,&__t1283t__);
  buf__unsafe_size=__t1283t__;
  __t1284t=0;
  __t_errcode=str__t1256t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1284t,length,&__t1286t__unsafe_ptr,&__t1286t__dat__pos,&__t1286t__dat__length,&__t1286t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3778t=__t1286t__unsafe_ptr;
  *__t3779t=__t1286t__dat__pos;
  *__t3780t=__t1286t__dat__length;
  *__t3781t=__t1286t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void supports_ansi__t428t(char* __t3782t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t3782t=supports;
}

static inline __attribute__((always_inline)) void colors__t429t(char* __t3783t) {
  char __t430t__=0;
  char initialized=0;
  supports_ansi__t428t(&__t430t__);
  initialized=__t430t__;
  goto __t_return;
  __t_return:
  *__t3783t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t951t(char** __t3784t, uint64_t* __t3785t, uint32_t* __t3786t, uint32_t* __t3787t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3784t=unsafe_ptr;
  *__t3785t=unsafe_size;
  *__t3786t=unsafe_offset;
  *__t3787t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t682t(char** __t3788t) {
  char* allocated=*__t3788t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t3788t=allocated;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t3789t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3789t=z;
}

static inline __attribute__((always_inline)) void zero__t683t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t612t(char* x, char* __t3790t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3790t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t3791t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3791t=z;
}

static inline __attribute__((always_inline)) int alloc__t675t(uint64_t bytes, char** __t3792t) {
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
  *__t3792t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t799t(char** __t3793t, uint64_t* __t3794t, uint32_t* __t3795t, uint32_t* __t3796t, uint64_t size, char** __t3797t, uint64_t* __t3798t, uint32_t* __t3799t, uint32_t* __t3800t) {
  char* buffer__unsafe_ptr=*__t3793t;
  uint64_t buffer__unsafe_size=*__t3794t;
  uint32_t buffer__unsafe_offset=*__t3795t;
  uint32_t buffer__unsafe_align=*__t3796t;
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
  *__t3793t=buffer__unsafe_ptr;
  *__t3794t=buffer__unsafe_size;
  *__t3795t=buffer__unsafe_offset;
  *__t3796t=buffer__unsafe_align;
  *__t3797t=buffer__unsafe_ptr;
  *__t3798t=buffer__unsafe_size;
  *__t3799t=buffer__unsafe_offset;
  *__t3800t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t950t(uint64_t size, char** __t3801t, uint64_t* __t3802t, uint32_t* __t3803t, uint32_t* __t3804t) {
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
  *__t3801t=__t954t__unsafe_ptr;
  *__t3802t=__t954t__unsafe_size;
  *__t3803t=__t954t__unsafe_offset;
  *__t3804t=__t954t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1009t(char** __t3805t, uint64_t* __t3806t, uint32_t* __t3807t, uint32_t* __t3808t, uint64_t _pos, char** __t3809t, uint64_t* __t3810t, uint32_t* __t3811t, uint32_t* __t3812t, uint64_t* __t3813t) {
  char* buf__unsafe_ptr=*__t3805t;
  uint64_t buf__unsafe_size=*__t3806t;
  uint32_t buf__unsafe_offset=*__t3807t;
  uint32_t buf__unsafe_align=*__t3808t;
  uint64_t __t1010t=0;
  uint64_t pos=0;
  __t1010t=_pos;
  pos=__t1010t;
  goto __t_return;
  __t_return:
  *__t3805t=buf__unsafe_ptr;
  *__t3806t=buf__unsafe_size;
  *__t3807t=buf__unsafe_offset;
  *__t3808t=buf__unsafe_align;
  *__t3809t=buf__unsafe_ptr;
  *__t3810t=buf__unsafe_size;
  *__t3811t=buf__unsafe_offset;
  *__t3812t=buf__unsafe_align;
  *__t3813t=pos;
}

static inline __attribute__((always_inline)) void arena__t1012t(char** __t3814t, uint64_t* __t3815t, uint32_t* __t3816t, uint32_t* __t3817t, char** __t3818t, uint64_t* __t3819t, uint32_t* __t3820t, uint32_t* __t3821t, uint64_t* __t3822t) {
  char* buf__unsafe_ptr=*__t3814t;
  uint64_t buf__unsafe_size=*__t3815t;
  uint32_t buf__unsafe_offset=*__t3816t;
  uint32_t buf__unsafe_align=*__t3817t;
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
  *__t3814t=buf__unsafe_ptr;
  *__t3815t=buf__unsafe_size;
  *__t3816t=buf__unsafe_offset;
  *__t3817t=buf__unsafe_align;
  *__t3818t=__t1014t__buf__unsafe_ptr;
  *__t3819t=__t1014t__buf__unsafe_size;
  *__t3820t=__t1014t__buf__unsafe_offset;
  *__t3821t=__t1014t__buf__unsafe_align;
  *__t3822t=__t1014t__pos;
}

static inline __attribute__((always_inline)) void len__t1287t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3823t) {
  goto __t_return;
  __t_return:
  *__t3823t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t1004t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t3824t) {
  goto __t_return;
  __t_return:
  *__t3824t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t3825t) {
  int __t290t__=0;
  char z=0;
  is_different__t108t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t3825t=z;
}

static inline __attribute__((always_inline)) void allocated__t1016t(char** __t3826t, uint64_t* __t3827t, uint32_t* __t3828t, uint32_t* __t3829t, uint64_t pos, char** __t3830t, uint64_t* __t3831t, uint32_t* __t3832t, uint32_t* __t3833t, uint64_t* __t3834t) {
  char* buf__unsafe_ptr=*__t3826t;
  uint64_t buf__unsafe_size=*__t3827t;
  uint32_t buf__unsafe_offset=*__t3828t;
  uint32_t buf__unsafe_align=*__t3829t;
  goto __t_return;
  __t_return:
  *__t3826t=buf__unsafe_ptr;
  *__t3827t=buf__unsafe_size;
  *__t3828t=buf__unsafe_offset;
  *__t3829t=buf__unsafe_align;
  *__t3830t=buf__unsafe_ptr;
  *__t3831t=buf__unsafe_size;
  *__t3832t=buf__unsafe_offset;
  *__t3833t=buf__unsafe_align;
  *__t3834t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1079t(char** __t3835t, uint64_t* __t3836t, uint32_t* __t3837t, uint32_t* __t3838t, uint64_t* __t3839t, uint64_t length, char** __t3840t, uint64_t* __t3841t, uint32_t* __t3842t, uint32_t* __t3843t, uint64_t* __t3844t) {
  char* allocator__buf__unsafe_ptr=*__t3835t;
  uint64_t allocator__buf__unsafe_size=*__t3836t;
  uint32_t allocator__buf__unsafe_offset=*__t3837t;
  uint32_t allocator__buf__unsafe_align=*__t3838t;
  uint64_t allocator__pos=*__t3839t;
  int __t1080t=0;
  uint64_t __t1081t__=0;
  uint64_t next_pos=0;
  uint64_t __t1082t__=0;
  char __t1083t__=0;
  uint64_t __t1084t=0;
  uint64_t __t1085t__=0;
  uint64_t pos=0;
  char* __t1086t__buf__unsafe_ptr=0;
  uint64_t __t1086t__buf__unsafe_size=0;
  uint32_t __t1086t__buf__unsafe_offset=0;
  uint32_t __t1086t__buf__unsafe_align=0;
  uint64_t __t1086t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1081t__);
  next_pos=__t1081t__;
  len__t1004t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1082t__);
  gt__t289t(next_pos,__t1082t__,&__t1083t__);
  if(__t1083t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t1084t=0;
  add__t188t(allocator__pos,__t1084t,&__t1085t__);
  pos=__t1085t__;
  allocator__pos=next_pos;
  allocated__t1016t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1086t__buf__unsafe_ptr,&__t1086t__buf__unsafe_size,&__t1086t__buf__unsafe_offset,&__t1086t__buf__unsafe_align,&__t1086t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3835t=allocator__buf__unsafe_ptr;
  *__t3836t=allocator__buf__unsafe_size;
  *__t3837t=allocator__buf__unsafe_offset;
  *__t3838t=allocator__buf__unsafe_align;
  *__t3839t=allocator__pos;
  *__t3840t=__t1086t__buf__unsafe_ptr;
  *__t3841t=__t1086t__buf__unsafe_size;
  *__t3842t=__t1086t__buf__unsafe_offset;
  *__t3843t=__t1086t__buf__unsafe_align;
  *__t3844t=__t1086t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1309t(char** __t3845t, uint64_t* __t3846t, uint32_t* __t3847t, uint32_t* __t3848t, uint64_t* __t3849t, const char* _other, char** __t3850t, uint64_t* __t3851t, uint64_t* __t3852t, char* __t3853t) {
  char* CHARS__buf__unsafe_ptr=*__t3845t;
  uint64_t CHARS__buf__unsafe_size=*__t3846t;
  uint32_t CHARS__buf__unsafe_offset=*__t3847t;
  uint32_t CHARS__buf__unsafe_align=*__t3848t;
  uint64_t CHARS__pos=*__t3849t;
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
  __t_errcode=str__t1278t(_other,&__t1310t__unsafe_ptr,&__t1310t__dat__pos,&__t1310t__dat__length,&__t1310t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1310t__unsafe_ptr;
  other__dat__pos=__t1310t__dat__pos;
  other__dat__length=__t1310t__dat__length;
  other__dat__first=__t1310t__dat__first;
  len__t1287t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1311t__);
  __t_errcode=alloc__t1079t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1311t__,&__t1312t__buf__unsafe_ptr,&__t1312t__buf__unsafe_size,&__t1312t__buf__unsafe_offset,&__t1312t__buf__unsafe_align,&__t1312t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1312t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1312t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1312t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1312t__buf__unsafe_align;
  surface__pos=__t1312t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1222t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1313t__unsafe_ptr,&__t1313t__dat__pos,&__t1313t__dat__length,&__t1313t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3845t=CHARS__buf__unsafe_ptr;
  *__t3846t=CHARS__buf__unsafe_size;
  *__t3847t=CHARS__buf__unsafe_offset;
  *__t3848t=CHARS__buf__unsafe_align;
  *__t3849t=CHARS__pos;
  *__t3850t=__t1313t__unsafe_ptr;
  *__t3851t=__t1313t__dat__pos;
  *__t3852t=__t1313t__dat__length;
  *__t3853t=__t1313t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1005t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1335t(char** __t3854t, uint64_t* __t3855t, uint32_t* __t3856t, uint32_t* __t3857t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3854t=unsafe_ptr;
  *__t3855t=unsafe_size;
  *__t3856t=unsafe_offset;
  *__t3857t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1334t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3858t, uint64_t* __t3859t, uint64_t* __t3860t, char* __t3861t) {
  char* __t1337t__unsafe_ptr=0;
  uint64_t __t1337t__unsafe_size=0;
  uint32_t __t1337t__unsafe_offset=0;
  uint32_t __t1337t__unsafe_align=0;
  uint64_t __t1338t=0;
  uint64_t __t1339t__=0;
  uint64_t __t1340t__=0;
  char* __t1341t__unsafe_ptr=0;
  uint64_t __t1341t__unsafe_size=0;
  uint32_t __t1341t__unsafe_offset=0;
  uint32_t __t1341t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1343t=0;
  char* __t1344t__unsafe_ptr=0;
  uint64_t __t1344t__dat__pos=0;
  uint64_t __t1344t__dat__length=0;
  char __t1344t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1335t(&__t1337t__unsafe_ptr,&__t1337t__unsafe_size,&__t1337t__unsafe_offset,&__t1337t__unsafe_align);
  __t1338t=1;
  len__t1287t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1339t__);
  add__t188t(__t1338t,__t1339t__,&__t1340t__);
  __t_errcode=alloc__t799t(&__t1337t__unsafe_ptr,&__t1337t__unsafe_size,&__t1337t__unsafe_offset,&__t1337t__unsafe_align,__t1340t__,&__t1341t__unsafe_ptr,&__t1341t__unsafe_size,&__t1341t__unsafe_offset,&__t1341t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1341t__unsafe_ptr;
  buf__unsafe_size=__t1341t__unsafe_size;
  buf__unsafe_offset=__t1341t__unsafe_offset;
  buf__unsafe_align=__t1341t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1343t=0;
  __t_errcode=str__t1222t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1343t,other__dat__length,other__dat__first,&__t1344t__unsafe_ptr,&__t1344t__dat__pos,&__t1344t__dat__length,&__t1344t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t682t(&__t1344t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3858t=__t1344t__unsafe_ptr;
  *__t3859t=__t1344t__dat__pos;
  *__t3860t=__t1344t__dat__length;
  *__t3861t=__t1344t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1359t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3862t, char** __t3863t, uint64_t* __t3864t, uint64_t* __t3865t, char* __t3866t) {
  int __t1360t=0;
  char* __t1362t__unsafe_ptr=0;
  uint64_t __t1362t__dat__pos=0;
  uint64_t __t1362t__dat__length=0;
  char __t1362t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1364t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1005t();
  __t_errcode=copy_null_terminated__t1334t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1362t__unsafe_ptr,&__t1362t__dat__pos,&__t1362t__dat__length,&__t1362t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1362t__unsafe_ptr;
  str__dat__pos=__t1362t__dat__pos;
  str__dat__length=__t1362t__dat__length;
  str__dat__first=__t1362t__dat__first;
  add__t684t(str__unsafe_ptr,str__dat__pos,&__t1364t__);
  _ret=__t1364t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t682t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3862t=cstr;
  *__t3863t=str__unsafe_ptr;
  *__t3864t=str__dat__pos;
  *__t3865t=str__dat__length;
  *__t3866t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1369t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3867t) {
  goto __t_return;
  __t_return:
  *__t3867t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t3392t(char* unsafe_ptr) {
  int __t3394t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t3395t(const char* path, char** __t3868t) {
  int __t3397t=0;
  char* unsafe_ptr=0;
  char __t3399t__=0;
  char __t3400t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t612t(unsafe_ptr,&__t3399t__);
  not__t41t(__t3399t__,&__t3400t__);
  if(__t3400t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t3392t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3868t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t3402t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t3869t) {
  const char* __t3403t__cstr=0;
  char* __t3403t__str__unsafe_ptr=0;
  uint64_t __t3403t__str__dat__pos=0;
  uint64_t __t3403t__str__dat__length=0;
  char __t3403t__str__dat__first=0;
  const char* __t3405t__=0;
  char* __t3406t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1359t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t3403t__cstr,&__t3403t__str__unsafe_ptr,&__t3403t__str__dat__pos,&__t3403t__str__dat__length,&__t3403t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1369t(__t3403t__cstr,__t3403t__str__unsafe_ptr,__t3403t__str__dat__pos,__t3403t__str__dat__length,__t3403t__str__dat__first,&__t3405t__);
  __t_errcode=open__t3395t(__t3405t__,&__t3406t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t3392t(__t3406t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3869t=__t3406t__unsafe_ptr;
  
  __t_skip_returns:free__t682t(&__t3403t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t3414t(char** __t3870t, const char** __t3871t) {
  char* f__unsafe_ptr=*__t3870t;
  char __t3415t__=0;
  char __t3416t__=0;
  char* de=0;
  char __t3417t__=0;
  char __t3418t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t612t(f__unsafe_ptr,&__t3415t__);
  not__t41t(__t3415t__,&__t3416t__);
  if(__t3416t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t612t(de,&__t3417t__);
  not__t41t(__t3417t__,&__t3418t__);
  if(__t3418t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3870t=f__unsafe_ptr;
  *__t3871t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t3419t(char** __t3872t, char** __t3873t, uint64_t* __t3874t, uint64_t* __t3875t, char* __t3876t) {
  char* f__unsafe_ptr=*__t3872t;
  const char* __t3420t__=0;
  char* __t3421t__unsafe_ptr=0;
  uint64_t __t3421t__dat__pos=0;
  uint64_t __t3421t__dat__length=0;
  char __t3421t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t3414t(&f__unsafe_ptr,&__t3420t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1278t(__t3420t__,&__t3421t__unsafe_ptr,&__t3421t__dat__pos,&__t3421t__dat__length,&__t3421t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3872t=f__unsafe_ptr;
  *__t3873t=__t3421t__unsafe_ptr;
  *__t3874t=__t3421t__dat__pos;
  *__t3875t=__t3421t__dat__length;
  *__t3876t=__t3421t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t3485t(char** __t3877t, uint64_t __t_anon1, char** __t3878t, uint64_t* __t3879t, uint64_t* __t3880t, char* __t3881t) {
  char* data__unsafe_ptr=*__t3877t;
  char* __t3486t__unsafe_ptr=0;
  uint64_t __t3486t__dat__pos=0;
  uint64_t __t3486t__dat__length=0;
  char __t3486t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t3419t(&data__unsafe_ptr,&__t3486t__unsafe_ptr,&__t3486t__dat__pos,&__t3486t__dat__length,&__t3486t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3877t=data__unsafe_ptr;
  *__t3878t=__t3486t__unsafe_ptr;
  *__t3879t=__t3486t__dat__pos;
  *__t3880t=__t3486t__dat__length;
  *__t3881t=__t3486t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1289t(const char* s, char* __t3882t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t3882t=c;
}

static inline __attribute__((always_inline)) void neq__t1291t(char x, char y, char* __t3883t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t3883t=z;
}

static inline __attribute__((always_inline)) void eq__t1374t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t3884t) {
  uint64_t __t1375t__=0;
  uint64_t n=0;
  uint64_t __t1376t__=0;
  char __t1377t__=0;
  char __t1378t=0;
  char __t1379t__=0;
  char __t1380t=0;
  char z=0;
  len__t1287t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1375t__);
  n=__t1375t__;
  len__t1287t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1376t__);
  neq__t157t(n,__t1376t__,&__t1377t__);
  if(__t1377t__){
  __t1378t=0;
  goto __t_return;
  }
  neq__t1291t(x__dat__first,y__dat__first,&__t1379t__);
  if(__t1379t__){
  __t1380t=0;
  __t1378t=__t1380t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1378t=z;
  goto __t_return;
  __t_return:
  *__t3884t=__t1378t;
}

int eq__t1381t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t3885t) {
  char __t1382t__=0;
  char __t1383t__=0;
  char __t1384t=0;
  char* __t1385t__unsafe_ptr=0;
  uint64_t __t1385t__dat__pos=0;
  uint64_t __t1385t__dat__length=0;
  char __t1385t__dat__first=0;
  char __t1386t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char__t1289t(y,&__t1382t__);
  neq__t1291t(x__dat__first,__t1382t__,&__t1383t__);
  if(__t1383t__){
  __t1384t=0;
  goto __t_return;
  }
  __t_errcode=str__t1278t(y,&__t1385t__unsafe_ptr,&__t1385t__dat__pos,&__t1385t__dat__length,&__t1385t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t1374t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1385t__unsafe_ptr,__t1385t__dat__pos,__t1385t__dat__length,__t1385t__dat__first,&__t1386t__);
  __t1384t=__t1386t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3885t=__t1384t;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1345t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3886t, char** __t3887t, uint64_t* __t3888t, uint64_t* __t3889t, char* __t3890t) {
  int __t1346t=0;
  char* __t1347t__unsafe_ptr=0;
  uint64_t __t1347t__unsafe_size=0;
  uint32_t __t1347t__unsafe_offset=0;
  uint32_t __t1347t__unsafe_align=0;
  uint64_t __t1348t=0;
  uint64_t __t1349t__=0;
  uint64_t __t1350t__=0;
  char* __t1351t__unsafe_ptr=0;
  uint64_t __t1351t__unsafe_size=0;
  uint32_t __t1351t__unsafe_offset=0;
  uint32_t __t1351t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1353t=0;
  char __t1354t__=0;
  char first_character=0;
  uint64_t __t1355t=0;
  char* __t1356t__unsafe_ptr=0;
  uint64_t __t1356t__dat__pos=0;
  uint64_t __t1356t__dat__length=0;
  char __t1356t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1357t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1335t(&__t1347t__unsafe_ptr,&__t1347t__unsafe_size,&__t1347t__unsafe_offset,&__t1347t__unsafe_align);
  __t1348t=1;
  add__t188t(__t1348t,other__dat__length,&__t1349t__);
  add__t188t(__t1349t__,prefix__dat__length,&__t1350t__);
  __t_errcode=alloc__t799t(&__t1347t__unsafe_ptr,&__t1347t__unsafe_size,&__t1347t__unsafe_offset,&__t1347t__unsafe_align,__t1350t__,&__t1351t__unsafe_ptr,&__t1351t__unsafe_size,&__t1351t__unsafe_offset,&__t1351t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1351t__unsafe_ptr;
  buf__unsafe_size=__t1351t__unsafe_size;
  buf__unsafe_offset=__t1351t__unsafe_offset;
  buf__unsafe_align=__t1351t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1353t=0;
  eq__t133t(prefix__dat__length,__t1353t,&__t1354t__);
  if(__t1354t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1355t=0;
  __t_errcode=str__t1222t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1355t,other__dat__length,first_character,&__t1356t__unsafe_ptr,&__t1356t__dat__pos,&__t1356t__dat__length,&__t1356t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1356t__unsafe_ptr;
  str__dat__pos=__t1356t__dat__pos;
  str__dat__length=__t1356t__dat__length;
  str__dat__first=__t1356t__dat__first;
  add__t684t(str__unsafe_ptr,str__dat__pos,&__t1357t__);
  _ret=__t1357t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t682t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3886t=cstr;
  *__t3887t=str__unsafe_ptr;
  *__t3888t=str__dat__pos;
  *__t3889t=str__dat__length;
  *__t3890t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1368t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3891t) {
  goto __t_return;
  __t_return:
  *__t3891t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t3319t(const char* path, char* __t3892t) {
  int __t3321t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t3892t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t3329t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t3893t) {
  int __t3331t=0;
  const char* __t3332t__cstr=0;
  char* __t3332t__str__unsafe_ptr=0;
  uint64_t __t3332t__str__dat__pos=0;
  uint64_t __t3332t__str__dat__length=0;
  char __t3332t__str__dat__first=0;
  const char* __t3334t__=0;
  char __t3335t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1345t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t3332t__cstr,&__t3332t__str__unsafe_ptr,&__t3332t__str__dat__pos,&__t3332t__str__dat__length,&__t3332t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1368t(__t3332t__cstr,__t3332t__str__unsafe_ptr,__t3332t__str__dat__pos,__t3332t__str__dat__length,__t3332t__str__dat__first,&__t3334t__);
  is_dir__t3319t(__t3334t__,&__t3335t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3893t=__t3335t__;
  
  __t_skip_returns:free__t682t(&__t3332t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void reuse__t3666t(char** __t3894t, uint64_t* __t3895t, uint32_t* __t3896t, uint32_t* __t3897t, uint64_t* __t3898t, uint64_t* __t3899t) {
  char* arn__buf__unsafe_ptr=*__t3894t;
  uint64_t arn__buf__unsafe_size=*__t3895t;
  uint32_t arn__buf__unsafe_offset=*__t3896t;
  uint32_t arn__buf__unsafe_align=*__t3897t;
  uint64_t arn__pos=*__t3898t;
  uint64_t __t3667t=0;
  uint64_t __t3668t__=0;
  uint64_t tracked_position=0;
  uint64_t __t3669t=0;
  uint64_t __t3670t__=0;
  __t3667t=0;
  add__t188t(__t3667t,arn__pos,&__t3668t__);
  tracked_position=__t3668t__;
  goto __t_return;
  __t_return:
  *__t3894t=arn__buf__unsafe_ptr;
  *__t3895t=arn__buf__unsafe_size;
  *__t3896t=arn__buf__unsafe_offset;
  *__t3897t=arn__buf__unsafe_align;
  *__t3898t=arn__pos;
  *__t3899t=tracked_position;
}

static inline __attribute__((always_inline)) void str__t1255t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3900t, uint64_t* __t3901t, uint64_t* __t3902t, char* __t3903t) {
  goto __t_return;
  __t_return:
  *__t3900t=other__unsafe_ptr;
  *__t3901t=other__dat__pos;
  *__t3902t=other__dat__length;
  *__t3903t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t161t(char* x, char* y, char* __t3904t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t3904t=z;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t3905t) {
  int __t266t__=0;
  char z=0;
  is_different__t108t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t3905t=z;
}

static inline __attribute__((always_inline)) void status__t1021t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t3906t, uint64_t* __t3907t, uint32_t* __t3908t, uint32_t* __t3909t, uint64_t* __t3910t) {
  char* __t1022t__unsafe_ptr=0;
  uint64_t __t1022t__unsafe_size=0;
  uint32_t __t1022t__unsafe_offset=0;
  uint32_t __t1022t__unsafe_align=0;
  uint64_t __t1023t=0;
  __t1022t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1022t__unsafe_size=self__buf__unsafe_size;
  __t1022t__unsafe_offset=self__buf__unsafe_offset;
  __t1022t__unsafe_align=self__buf__unsafe_align;
  __t1023t=self__pos;
  goto __t_return;
  __t_return:
  *__t3906t=__t1022t__unsafe_ptr;
  *__t3907t=__t1022t__unsafe_size;
  *__t3908t=__t1022t__unsafe_offset;
  *__t3909t=__t1022t__unsafe_align;
  *__t3910t=__t1023t;
}

static inline __attribute__((always_inline)) int copy__t1304t(char** __t3911t, uint64_t* __t3912t, uint32_t* __t3913t, uint32_t* __t3914t, uint64_t* __t3915t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t3916t, uint64_t* __t3917t, uint64_t* __t3918t, char* __t3919t) {
  char* CHARS__buf__unsafe_ptr=*__t3911t;
  uint64_t CHARS__buf__unsafe_size=*__t3912t;
  uint32_t CHARS__buf__unsafe_offset=*__t3913t;
  uint32_t CHARS__buf__unsafe_align=*__t3914t;
  uint64_t CHARS__pos=*__t3915t;
  char* __t1305t__unsafe_ptr=0;
  uint64_t __t1305t__dat__pos=0;
  uint64_t __t1305t__dat__length=0;
  char __t1305t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1306t__=0;
  char* __t1307t__buf__unsafe_ptr=0;
  uint64_t __t1307t__buf__unsafe_size=0;
  uint32_t __t1307t__buf__unsafe_offset=0;
  uint32_t __t1307t__buf__unsafe_align=0;
  uint64_t __t1307t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1308t__unsafe_ptr=0;
  uint64_t __t1308t__dat__pos=0;
  uint64_t __t1308t__dat__length=0;
  char __t1308t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1255t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1305t__unsafe_ptr,&__t1305t__dat__pos,&__t1305t__dat__length,&__t1305t__dat__first);
  other__unsafe_ptr=__t1305t__unsafe_ptr;
  other__dat__pos=__t1305t__dat__pos;
  other__dat__length=__t1305t__dat__length;
  other__dat__first=__t1305t__dat__first;
  len__t1287t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1306t__);
  __t_errcode=alloc__t1079t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1306t__,&__t1307t__buf__unsafe_ptr,&__t1307t__buf__unsafe_size,&__t1307t__buf__unsafe_offset,&__t1307t__buf__unsafe_align,&__t1307t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1307t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1307t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1307t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1307t__buf__unsafe_align;
  surface__pos=__t1307t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1222t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1308t__unsafe_ptr,&__t1308t__dat__pos,&__t1308t__dat__length,&__t1308t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3911t=CHARS__buf__unsafe_ptr;
  *__t3912t=CHARS__buf__unsafe_size;
  *__t3913t=CHARS__buf__unsafe_offset;
  *__t3914t=CHARS__buf__unsafe_align;
  *__t3915t=CHARS__pos;
  *__t3916t=__t1308t__unsafe_ptr;
  *__t3917t=__t1308t__dat__pos;
  *__t3918t=__t1308t__dat__length;
  *__t3919t=__t1308t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1018t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t3920t, uint64_t* __t3921t, uint32_t* __t3922t, uint32_t* __t3923t, uint64_t* __t3924t) {
  char* __t1019t__unsafe_ptr=0;
  uint64_t __t1019t__unsafe_size=0;
  uint32_t __t1019t__unsafe_offset=0;
  uint32_t __t1019t__unsafe_align=0;
  uint64_t __t1020t=0;
  __t1019t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1019t__unsafe_size=self__buf__unsafe_size;
  __t1019t__unsafe_offset=self__buf__unsafe_offset;
  __t1019t__unsafe_align=self__buf__unsafe_align;
  __t1020t=self__pos;
  goto __t_return;
  __t_return:
  *__t3920t=__t1019t__unsafe_ptr;
  *__t3921t=__t1019t__unsafe_size;
  *__t3922t=__t1019t__unsafe_offset;
  *__t3923t=__t1019t__unsafe_align;
  *__t3924t=__t1020t;
}

static inline __attribute__((always_inline)) int sub__t365t(uint64_t x, uint64_t y, uint64_t* __t3925t) {
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
  *__t3925t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1274t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t3926t, uint64_t* __t3927t, uint64_t* __t3928t, char* __t3929t) {
  uint64_t __t1276t__=0;
  char* __t1277t__unsafe_ptr=0;
  uint64_t __t1277t__dat__pos=0;
  uint64_t __t1277t__dat__length=0;
  char __t1277t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t365t(endpos,pos,&__t1276t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1256t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1276t__,&__t1277t__unsafe_ptr,&__t1277t__dat__pos,&__t1277t__dat__length,&__t1277t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3926t=__t1277t__unsafe_ptr;
  *__t3927t=__t1277t__dat__pos;
  *__t3928t=__t1277t__dat__length;
  *__t3929t=__t1277t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t1883t(char** __t3930t, uint64_t* __t3931t, uint32_t* __t3932t, uint32_t* __t3933t, uint64_t* __t3934t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t3935t, uint64_t* __t3936t, uint64_t* __t3937t, char* __t3938t) {
  char* CHARS__buf__unsafe_ptr=*__t3930t;
  uint64_t CHARS__buf__unsafe_size=*__t3931t;
  uint32_t CHARS__buf__unsafe_offset=*__t3932t;
  uint32_t CHARS__buf__unsafe_align=*__t3933t;
  uint64_t CHARS__pos=*__t3934t;
  char* __t1884t__unsafe_ptr=0;
  uint64_t __t1884t__dat__pos=0;
  uint64_t __t1884t__dat__length=0;
  char __t1884t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1885t__unsafe_ptr=0;
  uint64_t __t1885t__dat__pos=0;
  uint64_t __t1885t__dat__length=0;
  char __t1885t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t1886t__=0;
  uint64_t __t1887t__=0;
  char __t1888t__=0;
  char __t1889t=0;
  uint64_t __t1890t__=0;
  char __t1891t__=0;
  char __t1892t=0;
  uint64_t __t1893t__=0;
  char* __t1894t__buf__unsafe_ptr=0;
  uint64_t __t1894t__buf__unsafe_size=0;
  uint32_t __t1894t__buf__unsafe_offset=0;
  uint32_t __t1894t__buf__unsafe_align=0;
  uint64_t __t1894t__pos=0;
  char* __t1895t____t1022t__unsafe_ptr=0;
  uint64_t __t1895t____t1022t__unsafe_size=0;
  uint32_t __t1895t____t1022t__unsafe_offset=0;
  uint32_t __t1895t____t1022t__unsafe_align=0;
  uint64_t __t1895t____t1023t=0;
  char* __t1896t__buf__unsafe_ptr=0;
  uint64_t __t1896t__buf__unsafe_size=0;
  uint32_t __t1896t__buf__unsafe_offset=0;
  uint32_t __t1896t__buf__unsafe_align=0;
  uint64_t __t1896t__pos=0;
  char* __t1897t__buf__unsafe_ptr=0;
  uint64_t __t1897t__buf__unsafe_size=0;
  uint32_t __t1897t__buf__unsafe_offset=0;
  uint32_t __t1897t__buf__unsafe_align=0;
  uint64_t __t1897t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1898t__unsafe_ptr=0;
  uint64_t __t1898t__dat__pos=0;
  uint64_t __t1898t__dat__length=0;
  char __t1898t__dat__first=0;
  char* __t1899t____t1019t__unsafe_ptr=0;
  uint64_t __t1899t____t1019t__unsafe_size=0;
  uint32_t __t1899t____t1019t__unsafe_offset=0;
  uint32_t __t1899t____t1019t__unsafe_align=0;
  uint64_t __t1899t____t1020t=0;
  uint64_t __t1901t=0;
  uint64_t __t1902t__=0;
  char* __t1903t__unsafe_ptr=0;
  uint64_t __t1903t__dat__pos=0;
  uint64_t __t1903t__dat__length=0;
  char __t1903t__dat__first=0;
  char __t1904t__=0;
  char __t1905t__=0;
  char __t1906t=0;
  uint64_t __t1907t__=0;
  char __t1908t__=0;
  char __t1909t=0;
  uint64_t __t1910t__=0;
  char* __t1912t__unsafe_ptr=0;
  uint64_t __t1912t__dat__pos=0;
  uint64_t __t1912t__dat__length=0;
  char __t1912t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t1913t__=0;
  uint64_t __t1914t__=0;
  uint64_t __t1915t__=0;
  char* __t1916t__buf__unsafe_ptr=0;
  uint64_t __t1916t__buf__unsafe_size=0;
  uint32_t __t1916t__buf__unsafe_offset=0;
  uint32_t __t1916t__buf__unsafe_align=0;
  uint64_t __t1916t__pos=0;
  char* __t1917t____t1022t__unsafe_ptr=0;
  uint64_t __t1917t____t1022t__unsafe_size=0;
  uint32_t __t1917t____t1022t__unsafe_offset=0;
  uint32_t __t1917t____t1022t__unsafe_align=0;
  uint64_t __t1917t____t1023t=0;
  char* __t1918t__buf__unsafe_ptr=0;
  uint64_t __t1918t__buf__unsafe_size=0;
  uint32_t __t1918t__buf__unsafe_offset=0;
  uint32_t __t1918t__buf__unsafe_align=0;
  uint64_t __t1918t__pos=0;
  char* __t1919t__buf__unsafe_ptr=0;
  uint64_t __t1919t__buf__unsafe_size=0;
  uint32_t __t1919t__buf__unsafe_offset=0;
  uint32_t __t1919t__buf__unsafe_align=0;
  uint64_t __t1919t__pos=0;
  char* __t1920t__unsafe_ptr=0;
  uint64_t __t1920t__dat__pos=0;
  uint64_t __t1920t__dat__length=0;
  char __t1920t__dat__first=0;
  char* __t1921t__unsafe_ptr=0;
  uint64_t __t1921t__dat__pos=0;
  uint64_t __t1921t__dat__length=0;
  char __t1921t__dat__first=0;
  char* __t1922t____t1019t__unsafe_ptr=0;
  uint64_t __t1922t____t1019t__unsafe_size=0;
  uint32_t __t1922t____t1019t__unsafe_offset=0;
  uint32_t __t1922t____t1019t__unsafe_align=0;
  uint64_t __t1922t____t1020t=0;
  uint64_t __t1924t=0;
  uint64_t __t1925t__=0;
  char* __t1926t__unsafe_ptr=0;
  uint64_t __t1926t__dat__pos=0;
  uint64_t __t1926t__dat__length=0;
  char __t1926t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1255t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t1884t__unsafe_ptr,&__t1884t__dat__pos,&__t1884t__dat__length,&__t1884t__dat__first);
  s1__unsafe_ptr=__t1884t__unsafe_ptr;
  s1__dat__pos=__t1884t__dat__pos;
  s1__dat__length=__t1884t__dat__length;
  s1__dat__first=__t1884t__dat__first;
  str__t1255t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t1885t__unsafe_ptr,&__t1885t__dat__pos,&__t1885t__dat__length,&__t1885t__dat__first);
  s2__unsafe_ptr=__t1885t__unsafe_ptr;
  s2__dat__pos=__t1885t__dat__pos;
  s2__dat__length=__t1885t__dat__length;
  s2__dat__first=__t1885t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1886t__);
  if(__t1886t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1887t__);
  eq__t133t(CHARS__pos,__t1887t__,&__t1888t__);
  __t1889t=__t1888t__;
  }
  if(__t1889t){
  add__t188t(CHARS__pos,s2__dat__length,&__t1890t__);
  lt__t265t(__t1890t__,CHARS__buf__unsafe_size,&__t1891t__);
  __t1892t=__t1891t__;
  }
  if(__t1892t){
  len__t1287t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1893t__);
  __t_errcode=alloc__t1079t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1893t__,&__t1894t__buf__unsafe_ptr,&__t1894t__buf__unsafe_size,&__t1894t__buf__unsafe_offset,&__t1894t__buf__unsafe_align,&__t1894t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1021t(__t1894t__buf__unsafe_ptr,__t1894t__buf__unsafe_size,__t1894t__buf__unsafe_offset,__t1894t__buf__unsafe_align,__t1894t__pos,&__t1895t____t1022t__unsafe_ptr,&__t1895t____t1022t__unsafe_size,&__t1895t____t1022t__unsafe_offset,&__t1895t____t1022t__unsafe_align,&__t1895t____t1023t);
  arena__t1009t(&__t1895t____t1022t__unsafe_ptr,&__t1895t____t1022t__unsafe_size,&__t1895t____t1022t__unsafe_offset,&__t1895t____t1022t__unsafe_align,__t1895t____t1023t,&__t1896t__buf__unsafe_ptr,&__t1896t__buf__unsafe_size,&__t1896t__buf__unsafe_offset,&__t1896t__buf__unsafe_align,&__t1896t__pos);
  __t1897t__buf__unsafe_ptr=__t1896t__buf__unsafe_ptr;
  __t1897t__buf__unsafe_size=__t1896t__buf__unsafe_size;
  __t1897t__buf__unsafe_offset=__t1896t__buf__unsafe_offset;
  __t1897t__buf__unsafe_align=__t1896t__buf__unsafe_align;
  __t1897t__pos=__t1896t__pos;
  surface__buf__unsafe_ptr=__t1897t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1897t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1897t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1897t__buf__unsafe_align;
  surface__pos=__t1897t__pos;
  __t_errcode=copy__t1304t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1898t__unsafe_ptr,&__t1898t__dat__pos,&__t1898t__dat__length,&__t1898t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1018t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1899t____t1019t__unsafe_ptr,&__t1899t____t1019t__unsafe_size,&__t1899t____t1019t__unsafe_offset,&__t1899t____t1019t__unsafe_align,&__t1899t____t1020t);
  __t1901t=0;
  add__t188t(s1__dat__pos,__t1901t,&__t1902t__);
  __t_errcode=str__t1274t(__t1899t____t1019t__unsafe_ptr,__t1899t____t1019t__unsafe_size,__t1899t____t1019t__unsafe_offset,__t1899t____t1019t__unsafe_align,__t1899t____t1020t,__t1902t__,&__t1903t__unsafe_ptr,&__t1903t__dat__pos,&__t1903t__dat__length,&__t1903t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1904t__);
  if(__t1904t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1905t__);
  __t1906t=__t1905t__;
  }
  if(__t1906t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1907t__);
  eq__t133t(s2__dat__pos,__t1907t__,&__t1908t__);
  __t1909t=__t1908t__;
  }
  if(__t1909t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t1910t__);
  __t_errcode=str__t1274t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t1910t__,s1__dat__pos,&__t1912t__unsafe_ptr,&__t1912t__dat__pos,&__t1912t__dat__length,&__t1912t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1903t__unsafe_ptr=__t1912t__unsafe_ptr;
  __t1903t__dat__pos=__t1912t__dat__pos;
  __t1903t__dat__length=__t1912t__dat__length;
  __t1903t__dat__first=__t1912t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1287t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1913t__);
  len__t1287t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1914t__);
  add__t188t(__t1913t__,__t1914t__,&__t1915t__);
  __t_errcode=alloc__t1079t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1915t__,&__t1916t__buf__unsafe_ptr,&__t1916t__buf__unsafe_size,&__t1916t__buf__unsafe_offset,&__t1916t__buf__unsafe_align,&__t1916t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1021t(__t1916t__buf__unsafe_ptr,__t1916t__buf__unsafe_size,__t1916t__buf__unsafe_offset,__t1916t__buf__unsafe_align,__t1916t__pos,&__t1917t____t1022t__unsafe_ptr,&__t1917t____t1022t__unsafe_size,&__t1917t____t1022t__unsafe_offset,&__t1917t____t1022t__unsafe_align,&__t1917t____t1023t);
  arena__t1009t(&__t1917t____t1022t__unsafe_ptr,&__t1917t____t1022t__unsafe_size,&__t1917t____t1022t__unsafe_offset,&__t1917t____t1022t__unsafe_align,__t1917t____t1023t,&__t1918t__buf__unsafe_ptr,&__t1918t__buf__unsafe_size,&__t1918t__buf__unsafe_offset,&__t1918t__buf__unsafe_align,&__t1918t__pos);
  __t1919t__buf__unsafe_ptr=__t1918t__buf__unsafe_ptr;
  __t1919t__buf__unsafe_size=__t1918t__buf__unsafe_size;
  __t1919t__buf__unsafe_offset=__t1918t__buf__unsafe_offset;
  __t1919t__buf__unsafe_align=__t1918t__buf__unsafe_align;
  __t1919t__pos=__t1918t__pos;
  surface__buf__unsafe_ptr=__t1919t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1919t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1919t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1919t__buf__unsafe_align;
  surface__pos=__t1919t__pos;
  __t_errcode=copy__t1304t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1920t__unsafe_ptr,&__t1920t__dat__pos,&__t1920t__dat__length,&__t1920t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1304t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1921t__unsafe_ptr,&__t1921t__dat__pos,&__t1921t__dat__length,&__t1921t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1018t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1922t____t1019t__unsafe_ptr,&__t1922t____t1019t__unsafe_size,&__t1922t____t1019t__unsafe_offset,&__t1922t____t1019t__unsafe_align,&__t1922t____t1020t);
  __t1924t=0;
  add__t188t(prev_pos,__t1924t,&__t1925t__);
  __t_errcode=str__t1274t(__t1922t____t1019t__unsafe_ptr,__t1922t____t1019t__unsafe_size,__t1922t____t1019t__unsafe_offset,__t1922t____t1019t__unsafe_align,__t1922t____t1020t,__t1925t__,&__t1926t__unsafe_ptr,&__t1926t__dat__pos,&__t1926t__dat__length,&__t1926t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1903t__unsafe_ptr=__t1926t__unsafe_ptr;
  __t1903t__dat__pos=__t1926t__dat__pos;
  __t1903t__dat__length=__t1926t__dat__length;
  __t1903t__dat__first=__t1926t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3930t=CHARS__buf__unsafe_ptr;
  *__t3931t=CHARS__buf__unsafe_size;
  *__t3932t=CHARS__buf__unsafe_offset;
  *__t3933t=CHARS__buf__unsafe_align;
  *__t3934t=CHARS__pos;
  *__t3935t=__t1903t__unsafe_ptr;
  *__t3936t=__t1903t__dat__pos;
  *__t3937t=__t1903t__dat__length;
  *__t3938t=__t1903t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t1927t(char** __t3939t, uint64_t* __t3940t, uint32_t* __t3941t, uint32_t* __t3942t, uint64_t* __t3943t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t3944t, uint64_t* __t3945t, uint64_t* __t3946t, char* __t3947t) {
  char* CHARS__buf__unsafe_ptr=*__t3939t;
  uint64_t CHARS__buf__unsafe_size=*__t3940t;
  uint32_t CHARS__buf__unsafe_offset=*__t3941t;
  uint32_t CHARS__buf__unsafe_align=*__t3942t;
  uint64_t CHARS__pos=*__t3943t;
  char* __t1928t__unsafe_ptr=0;
  uint64_t __t1928t__dat__pos=0;
  uint64_t __t1928t__dat__length=0;
  char __t1928t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1929t__unsafe_ptr=0;
  uint64_t __t1929t__dat__pos=0;
  uint64_t __t1929t__dat__length=0;
  char __t1929t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t1930t__=0;
  uint64_t __t1931t__=0;
  char __t1932t__=0;
  char __t1933t=0;
  uint64_t __t1934t__=0;
  char __t1935t__=0;
  char __t1936t=0;
  uint64_t __t1937t__=0;
  char* __t1938t__buf__unsafe_ptr=0;
  uint64_t __t1938t__buf__unsafe_size=0;
  uint32_t __t1938t__buf__unsafe_offset=0;
  uint32_t __t1938t__buf__unsafe_align=0;
  uint64_t __t1938t__pos=0;
  char* __t1939t____t1022t__unsafe_ptr=0;
  uint64_t __t1939t____t1022t__unsafe_size=0;
  uint32_t __t1939t____t1022t__unsafe_offset=0;
  uint32_t __t1939t____t1022t__unsafe_align=0;
  uint64_t __t1939t____t1023t=0;
  char* __t1940t__buf__unsafe_ptr=0;
  uint64_t __t1940t__buf__unsafe_size=0;
  uint32_t __t1940t__buf__unsafe_offset=0;
  uint32_t __t1940t__buf__unsafe_align=0;
  uint64_t __t1940t__pos=0;
  char* __t1941t__buf__unsafe_ptr=0;
  uint64_t __t1941t__buf__unsafe_size=0;
  uint32_t __t1941t__buf__unsafe_offset=0;
  uint32_t __t1941t__buf__unsafe_align=0;
  uint64_t __t1941t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1942t__unsafe_ptr=0;
  uint64_t __t1942t__dat__pos=0;
  uint64_t __t1942t__dat__length=0;
  char __t1942t__dat__first=0;
  char* __t1943t____t1019t__unsafe_ptr=0;
  uint64_t __t1943t____t1019t__unsafe_size=0;
  uint32_t __t1943t____t1019t__unsafe_offset=0;
  uint32_t __t1943t____t1019t__unsafe_align=0;
  uint64_t __t1943t____t1020t=0;
  uint64_t __t1945t=0;
  uint64_t __t1946t__=0;
  char* __t1947t__unsafe_ptr=0;
  uint64_t __t1947t__dat__pos=0;
  uint64_t __t1947t__dat__length=0;
  char __t1947t__dat__first=0;
  char __t1948t__=0;
  char __t1949t__=0;
  char __t1950t=0;
  uint64_t __t1951t__=0;
  char __t1952t__=0;
  char __t1953t=0;
  uint64_t __t1954t__=0;
  char* __t1956t__unsafe_ptr=0;
  uint64_t __t1956t__dat__pos=0;
  uint64_t __t1956t__dat__length=0;
  char __t1956t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t1957t__=0;
  uint64_t __t1958t__=0;
  uint64_t __t1959t__=0;
  char* __t1960t__buf__unsafe_ptr=0;
  uint64_t __t1960t__buf__unsafe_size=0;
  uint32_t __t1960t__buf__unsafe_offset=0;
  uint32_t __t1960t__buf__unsafe_align=0;
  uint64_t __t1960t__pos=0;
  char* __t1961t____t1022t__unsafe_ptr=0;
  uint64_t __t1961t____t1022t__unsafe_size=0;
  uint32_t __t1961t____t1022t__unsafe_offset=0;
  uint32_t __t1961t____t1022t__unsafe_align=0;
  uint64_t __t1961t____t1023t=0;
  char* __t1962t__buf__unsafe_ptr=0;
  uint64_t __t1962t__buf__unsafe_size=0;
  uint32_t __t1962t__buf__unsafe_offset=0;
  uint32_t __t1962t__buf__unsafe_align=0;
  uint64_t __t1962t__pos=0;
  char* __t1963t__buf__unsafe_ptr=0;
  uint64_t __t1963t__buf__unsafe_size=0;
  uint32_t __t1963t__buf__unsafe_offset=0;
  uint32_t __t1963t__buf__unsafe_align=0;
  uint64_t __t1963t__pos=0;
  char* __t1964t__unsafe_ptr=0;
  uint64_t __t1964t__dat__pos=0;
  uint64_t __t1964t__dat__length=0;
  char __t1964t__dat__first=0;
  char* __t1965t__unsafe_ptr=0;
  uint64_t __t1965t__dat__pos=0;
  uint64_t __t1965t__dat__length=0;
  char __t1965t__dat__first=0;
  char* __t1966t____t1019t__unsafe_ptr=0;
  uint64_t __t1966t____t1019t__unsafe_size=0;
  uint32_t __t1966t____t1019t__unsafe_offset=0;
  uint32_t __t1966t____t1019t__unsafe_align=0;
  uint64_t __t1966t____t1020t=0;
  uint64_t __t1968t=0;
  uint64_t __t1969t__=0;
  char* __t1970t__unsafe_ptr=0;
  uint64_t __t1970t__dat__pos=0;
  uint64_t __t1970t__dat__length=0;
  char __t1970t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1255t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t1928t__unsafe_ptr,&__t1928t__dat__pos,&__t1928t__dat__length,&__t1928t__dat__first);
  s1__unsafe_ptr=__t1928t__unsafe_ptr;
  s1__dat__pos=__t1928t__dat__pos;
  s1__dat__length=__t1928t__dat__length;
  s1__dat__first=__t1928t__dat__first;
  __t_errcode=str__t1278t(_s2,&__t1929t__unsafe_ptr,&__t1929t__dat__pos,&__t1929t__dat__length,&__t1929t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__unsafe_ptr=__t1929t__unsafe_ptr;
  s2__dat__pos=__t1929t__dat__pos;
  s2__dat__length=__t1929t__dat__length;
  s2__dat__first=__t1929t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1930t__);
  if(__t1930t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1931t__);
  eq__t133t(CHARS__pos,__t1931t__,&__t1932t__);
  __t1933t=__t1932t__;
  }
  if(__t1933t){
  add__t188t(CHARS__pos,s2__dat__length,&__t1934t__);
  lt__t265t(__t1934t__,CHARS__buf__unsafe_size,&__t1935t__);
  __t1936t=__t1935t__;
  }
  if(__t1936t){
  len__t1287t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1937t__);
  __t_errcode=alloc__t1079t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1937t__,&__t1938t__buf__unsafe_ptr,&__t1938t__buf__unsafe_size,&__t1938t__buf__unsafe_offset,&__t1938t__buf__unsafe_align,&__t1938t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1021t(__t1938t__buf__unsafe_ptr,__t1938t__buf__unsafe_size,__t1938t__buf__unsafe_offset,__t1938t__buf__unsafe_align,__t1938t__pos,&__t1939t____t1022t__unsafe_ptr,&__t1939t____t1022t__unsafe_size,&__t1939t____t1022t__unsafe_offset,&__t1939t____t1022t__unsafe_align,&__t1939t____t1023t);
  arena__t1009t(&__t1939t____t1022t__unsafe_ptr,&__t1939t____t1022t__unsafe_size,&__t1939t____t1022t__unsafe_offset,&__t1939t____t1022t__unsafe_align,__t1939t____t1023t,&__t1940t__buf__unsafe_ptr,&__t1940t__buf__unsafe_size,&__t1940t__buf__unsafe_offset,&__t1940t__buf__unsafe_align,&__t1940t__pos);
  __t1941t__buf__unsafe_ptr=__t1940t__buf__unsafe_ptr;
  __t1941t__buf__unsafe_size=__t1940t__buf__unsafe_size;
  __t1941t__buf__unsafe_offset=__t1940t__buf__unsafe_offset;
  __t1941t__buf__unsafe_align=__t1940t__buf__unsafe_align;
  __t1941t__pos=__t1940t__pos;
  surface__buf__unsafe_ptr=__t1941t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1941t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1941t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1941t__buf__unsafe_align;
  surface__pos=__t1941t__pos;
  __t_errcode=copy__t1304t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1942t__unsafe_ptr,&__t1942t__dat__pos,&__t1942t__dat__length,&__t1942t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1018t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1943t____t1019t__unsafe_ptr,&__t1943t____t1019t__unsafe_size,&__t1943t____t1019t__unsafe_offset,&__t1943t____t1019t__unsafe_align,&__t1943t____t1020t);
  __t1945t=0;
  add__t188t(s1__dat__pos,__t1945t,&__t1946t__);
  __t_errcode=str__t1274t(__t1943t____t1019t__unsafe_ptr,__t1943t____t1019t__unsafe_size,__t1943t____t1019t__unsafe_offset,__t1943t____t1019t__unsafe_align,__t1943t____t1020t,__t1946t__,&__t1947t__unsafe_ptr,&__t1947t__dat__pos,&__t1947t__dat__length,&__t1947t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1948t__);
  if(__t1948t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1949t__);
  __t1950t=__t1949t__;
  }
  if(__t1950t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1951t__);
  eq__t133t(s2__dat__pos,__t1951t__,&__t1952t__);
  __t1953t=__t1952t__;
  }
  if(__t1953t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t1954t__);
  __t_errcode=str__t1274t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t1954t__,s1__dat__pos,&__t1956t__unsafe_ptr,&__t1956t__dat__pos,&__t1956t__dat__length,&__t1956t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1947t__unsafe_ptr=__t1956t__unsafe_ptr;
  __t1947t__dat__pos=__t1956t__dat__pos;
  __t1947t__dat__length=__t1956t__dat__length;
  __t1947t__dat__first=__t1956t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1287t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1957t__);
  len__t1287t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1958t__);
  add__t188t(__t1957t__,__t1958t__,&__t1959t__);
  __t_errcode=alloc__t1079t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1959t__,&__t1960t__buf__unsafe_ptr,&__t1960t__buf__unsafe_size,&__t1960t__buf__unsafe_offset,&__t1960t__buf__unsafe_align,&__t1960t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1021t(__t1960t__buf__unsafe_ptr,__t1960t__buf__unsafe_size,__t1960t__buf__unsafe_offset,__t1960t__buf__unsafe_align,__t1960t__pos,&__t1961t____t1022t__unsafe_ptr,&__t1961t____t1022t__unsafe_size,&__t1961t____t1022t__unsafe_offset,&__t1961t____t1022t__unsafe_align,&__t1961t____t1023t);
  arena__t1009t(&__t1961t____t1022t__unsafe_ptr,&__t1961t____t1022t__unsafe_size,&__t1961t____t1022t__unsafe_offset,&__t1961t____t1022t__unsafe_align,__t1961t____t1023t,&__t1962t__buf__unsafe_ptr,&__t1962t__buf__unsafe_size,&__t1962t__buf__unsafe_offset,&__t1962t__buf__unsafe_align,&__t1962t__pos);
  __t1963t__buf__unsafe_ptr=__t1962t__buf__unsafe_ptr;
  __t1963t__buf__unsafe_size=__t1962t__buf__unsafe_size;
  __t1963t__buf__unsafe_offset=__t1962t__buf__unsafe_offset;
  __t1963t__buf__unsafe_align=__t1962t__buf__unsafe_align;
  __t1963t__pos=__t1962t__pos;
  surface__buf__unsafe_ptr=__t1963t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1963t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1963t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1963t__buf__unsafe_align;
  surface__pos=__t1963t__pos;
  __t_errcode=copy__t1304t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1964t__unsafe_ptr,&__t1964t__dat__pos,&__t1964t__dat__length,&__t1964t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1304t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1965t__unsafe_ptr,&__t1965t__dat__pos,&__t1965t__dat__length,&__t1965t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1018t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1966t____t1019t__unsafe_ptr,&__t1966t____t1019t__unsafe_size,&__t1966t____t1019t__unsafe_offset,&__t1966t____t1019t__unsafe_align,&__t1966t____t1020t);
  __t1968t=0;
  add__t188t(prev_pos,__t1968t,&__t1969t__);
  __t_errcode=str__t1274t(__t1966t____t1019t__unsafe_ptr,__t1966t____t1019t__unsafe_size,__t1966t____t1019t__unsafe_offset,__t1966t____t1019t__unsafe_align,__t1966t____t1020t,__t1969t__,&__t1970t__unsafe_ptr,&__t1970t__dat__pos,&__t1970t__dat__length,&__t1970t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1947t__unsafe_ptr=__t1970t__unsafe_ptr;
  __t1947t__dat__pos=__t1970t__dat__pos;
  __t1947t__dat__length=__t1970t__dat__length;
  __t1947t__dat__first=__t1970t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3939t=CHARS__buf__unsafe_ptr;
  *__t3940t=CHARS__buf__unsafe_size;
  *__t3941t=CHARS__buf__unsafe_offset;
  *__t3942t=CHARS__buf__unsafe_align;
  *__t3943t=CHARS__pos;
  *__t3944t=__t1947t__unsafe_ptr;
  *__t3945t=__t1947t__dat__pos;
  *__t3946t=__t1947t__dat__length;
  *__t3947t=__t1947t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1440t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t3948t) {
  uint64_t __t1441t__=0;
  char* __t1442t__=0;
  add__t188t(s__dat__pos,i,&__t1441t__);
  add__t684t(s__unsafe_ptr,__t1441t__,&__t1442t__);
  goto __t_return;
  __t_return:
  *__t3948t=__t1442t__;
}

int slice__t1463t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t3949t, uint64_t* __t3950t, uint64_t* __t3951t, char* __t3952t) {
  char* __t1464t__unsafe_ptr=0;
  uint64_t __t1464t__dat__pos=0;
  uint64_t __t1464t__dat__length=0;
  char __t1464t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1465t__=0;
  char* __t1466t__unsafe_ptr=0;
  uint64_t __t1466t__dat__pos=0;
  uint64_t __t1466t__dat__length=0;
  char __t1466t__dat__first=0;
  char __t1467t__=0;
  char __t1468t__=0;
  char __t1469t=0;
  char __t1470t__=0;
  uint64_t __t1471t__=0;
  uint64_t new_length=0;
  uint64_t __t1472t=0;
  char __t1473t__=0;
  char new_first=0;
  char* __t1475t__=0;
  char __t1476t__value=0;
  uint64_t __t1477t__=0;
  char* __t1478t__unsafe_ptr=0;
  uint64_t __t1478t__dat__pos=0;
  uint64_t __t1478t__dat__length=0;
  char __t1478t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1255t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1464t__unsafe_ptr,&__t1464t__dat__pos,&__t1464t__dat__length,&__t1464t__dat__first);
  s__unsafe_ptr=__t1464t__unsafe_ptr;
  s__dat__pos=__t1464t__dat__pos;
  s__dat__length=__t1464t__dat__length;
  s__dat__first=__t1464t__dat__first;
  eq__t133t(from,to,&__t1465t__);
  if(__t1465t__){
  __t_errcode=str__t1278t(__t391t,&__t1466t__unsafe_ptr,&__t1466t__dat__pos,&__t1466t__dat__length,&__t1466t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t289t(from,to,&__t1467t__);
  if(!__t1467t__){
  gt__t289t(to,s__dat__length,&__t1468t__);
  __t1469t=__t1468t__;
  }
  else{
  __t1469t=0;
  not__t41t(__t1469t,&__t1470t__);
  __t1469t=__t1470t__;
  }
  if(__t1469t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t365t(to,from,&__t1471t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1471t__;
  __t1472t=0;
  neq__t157t(from,__t1472t,&__t1473t__);
  if(__t1473t__){
  get__t1440t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1475t__);
  if(!__t1475t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1476t__value,__t1475t__,1);
  new_first=__t1476t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1477t__);
  str__t1218t(s__unsafe_ptr,__t1477t__,new_length,new_first,&__t1478t__unsafe_ptr,&__t1478t__dat__pos,&__t1478t__dat__length,&__t1478t__dat__first);
  __t1466t__unsafe_ptr=__t1478t__unsafe_ptr;
  __t1466t__dat__pos=__t1478t__dat__pos;
  __t1466t__dat__length=__t1478t__dat__length;
  __t1466t__dat__first=__t1478t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3949t=__t1466t__unsafe_ptr;
  *__t3950t=__t1466t__dat__pos;
  *__t3951t=__t1466t__dat__length;
  *__t3952t=__t1466t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1543t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t3953t) {
  char* __t1544t__unsafe_ptr=0;
  uint64_t __t1544t__dat__pos=0;
  uint64_t __t1544t__dat__length=0;
  char __t1544t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1545t__unsafe_ptr=0;
  uint64_t __t1545t__dat__pos=0;
  uint64_t __t1545t__dat__length=0;
  char __t1545t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1546t__=0;
  char __t1547t=0;
  uint64_t __t1548t__=0;
  uint64_t n=0;
  uint64_t __t1549t__=0;
  uint64_t __t1550t__=0;
  char* __t1551t__unsafe_ptr=0;
  uint64_t __t1551t__dat__pos=0;
  uint64_t __t1551t__dat__length=0;
  char __t1551t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1552t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1255t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1544t__unsafe_ptr,&__t1544t__dat__pos,&__t1544t__dat__length,&__t1544t__dat__first);
  stack__unsafe_ptr=__t1544t__unsafe_ptr;
  stack__dat__pos=__t1544t__dat__pos;
  stack__dat__length=__t1544t__dat__length;
  stack__dat__first=__t1544t__dat__first;
  __t_errcode=str__t1278t(_needle,&__t1545t__unsafe_ptr,&__t1545t__dat__pos,&__t1545t__dat__length,&__t1545t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1545t__unsafe_ptr;
  needle__dat__pos=__t1545t__dat__pos;
  needle__dat__length=__t1545t__dat__length;
  needle__dat__first=__t1545t__dat__first;
  lt__t265t(stack__dat__length,needle__dat__length,&__t1546t__);
  if(__t1546t__){
  __t1547t=0;
  goto __t_return;
  }
  len__t1287t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1548t__);
  n=__t1548t__;
  len__t1287t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1549t__);
  __t_errcode=sub__t365t(n,__t1549t__,&__t1550t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1463t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1550t__,n,&__t1551t__unsafe_ptr,&__t1551t__dat__pos,&__t1551t__dat__length,&__t1551t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1551t__unsafe_ptr;
  ret__dat__pos=__t1551t__dat__pos;
  ret__dat__length=__t1551t__dat__length;
  ret__dat__first=__t1551t__dat__first;
  eq__t1374t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1552t__);
  __t1547t=__t1552t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3953t=__t1547t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t633t(uint64_t to, uint64_t* __t3954t, uint64_t* __t3955t) {
  uint64_t __t634t=0;
  __t634t=0;
  goto __t_return;
  __t_return:
  *__t3954t=__t634t;
  *__t3955t=to;
}

static inline __attribute__((always_inline)) void range__t650t(uint64_t _from, uint64_t to, uint64_t* __t3956t, uint64_t* __t3957t) {
  uint64_t __t651t=0;
  uint64_t from=0;
  __t651t=_from;
  from=__t651t;
  goto __t_return;
  __t_return:
  *__t3956t=from;
  *__t3957t=to;
}

static inline __attribute__((always_inline)) int get__t657t(uint64_t r__from, uint64_t r__to, uint64_t _pos, uint64_t* __t3958t) {
  uint64_t __t658t__=0;
  uint64_t pos=0;
  char __t659t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(_pos,r__from,&__t658t__);
  pos=__t658t__;
  ge__t337t(pos,r__to,&__t659t__);
  if(__t659t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3958t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int contains__t1631t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t3959t) {
  char* __t1632t__unsafe_ptr=0;
  uint64_t __t1632t__dat__pos=0;
  uint64_t __t1632t__dat__length=0;
  char __t1632t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1633t__unsafe_ptr=0;
  uint64_t __t1633t__dat__pos=0;
  uint64_t __t1633t__dat__length=0;
  char __t1633t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1634t__=0;
  char __t1635t=0;
  uint64_t __t1636t__=0;
  uint64_t d=0;
  uint64_t __t1637t__=0;
  uint64_t __t1638t__=0;
  uint64_t n=0;
  uint64_t __t1639t=0;
  uint64_t __t1640t____t634t=0;
  uint64_t __t1640t__to=0;
  uint64_t __t1641t__from=0;
  uint64_t __t1641t__to=0;
  char __t1642t=0;
  uint64_t __t1643t__=0;
  uint64_t i=0;
  uint64_t __t1644t__=0;
  char* __t1645t__unsafe_ptr=0;
  uint64_t __t1645t__dat__pos=0;
  uint64_t __t1645t__dat__length=0;
  char __t1645t__dat__first=0;
  char __t1646t__=0;
  char __t1647t=0;
  char __t1648t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1255t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1632t__unsafe_ptr,&__t1632t__dat__pos,&__t1632t__dat__length,&__t1632t__dat__first);
  stack__unsafe_ptr=__t1632t__unsafe_ptr;
  stack__dat__pos=__t1632t__dat__pos;
  stack__dat__length=__t1632t__dat__length;
  stack__dat__first=__t1632t__dat__first;
  __t_errcode=str__t1278t(_needle,&__t1633t__unsafe_ptr,&__t1633t__dat__pos,&__t1633t__dat__length,&__t1633t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1633t__unsafe_ptr;
  needle__dat__pos=__t1633t__dat__pos;
  needle__dat__length=__t1633t__dat__length;
  needle__dat__first=__t1633t__dat__first;
  lt__t265t(stack__dat__length,needle__dat__length,&__t1634t__);
  if(__t1634t__){
  __t1635t=0;
  goto __t_return;
  }
  len__t1287t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1636t__);
  d=__t1636t__;
  len__t1287t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1637t__);
  __t_errcode=sub__t365t(__t1637t__,d,&__t1638t__);
  if(__t_errcode){
  goto __t_failure;
  }
  n=__t1638t__;
  of__t633t(n,&__t1640t____t634t,&__t1640t__to);
  range__t650t(__t1640t____t634t,__t1640t__to,&__t1641t__from,&__t1641t__to);
  __t1639t=0-1;
  while(1){
  __t1639t=__t1639t+1;
  __t_complain=get__t657t(__t1641t__from,__t1641t__to,__t1639t,&__t1643t__);
  __t1642t=__t_complain;
  if(__t_complain){
  goto __t1642t__label;
  }
  i=__t1643t__;
  __t1642t__label:__t1642t=__t1642t==0;
  if(!__t1642t){
  break;
  }
  add__t188t(i,d,&__t1644t__);
  __t_errcode=slice__t1463t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t1644t__,&__t1645t__unsafe_ptr,&__t1645t__dat__pos,&__t1645t__dat__length,&__t1645t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t1374t(__t1645t__unsafe_ptr,__t1645t__dat__pos,__t1645t__dat__length,__t1645t__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1646t__);
  if(__t1646t__){
  __t1647t=1;
  __t1635t=__t1647t;
  goto __t_return;
  }
  }
  __t1648t=0;
  __t1635t=__t1648t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3959t=__t1635t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t390t(const char* value, const char** __t3960t, const char** __t3961t) {
  const char* __t392t=0;
  __t392t=__t391t;
  goto __t_return;
  __t_return:
  *__t3960t=value;
  *__t3961t=__t392t;
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

static inline __attribute__((always_inline)) void print_marker__t3580t(char colors__initialized) {
  const char* __t3582t__value=0;
  const char* __t3582t____t392t=0;
  int __t3584t=0;
  int __t3585t=0;
  char __t3586t=0;
  char __t3587t=0;
  const char* __t3591t__value=0;
  const char* __t3591t____t392t=0;
  const char* __t3595t__value=0;
  const char* __t3595t____t392t=0;
  nn__t390t(__t3544t,&__t3582t__value,&__t3582t____t392t);
  print__t399t(__t3582t__value,__t3582t____t392t);
  __t3587t=1;
  if(__t3588t!=__t3588t){
  __t3587t=0;
  }
  if(__t3587t){
  __t3586t=1;
  }
  if(__t3586t){
  set__t443t(colors__initialized);
  nn__t390t(__t2207t,&__t3591t__value,&__t3591t____t392t);
  print__t399t(__t3591t__value,__t3591t____t392t);
  }
  set__t555t(colors__initialized);
  nn__t390t(__t3559t,&__t3595t__value,&__t3595t____t392t);
  print__t399t(__t3595t__value,__t3595t____t392t);
}

static inline __attribute__((always_inline)) void nn__t1667t(char* value__unsafe_ptr, uint64_t value__dat__pos, uint64_t value__dat__length, char value__dat__first, char** __t3962t, uint64_t* __t3963t, uint64_t* __t3964t, char* __t3965t, const char** __t3966t) {
  const char* __t1668t=0;
  __t1668t=__t391t;
  goto __t_return;
  __t_return:
  *__t3962t=value__unsafe_ptr;
  *__t3963t=value__dat__pos;
  *__t3964t=value__dat__length;
  *__t3965t=value__dat__first;
  *__t3966t=__t1668t;
}

static inline __attribute__((always_inline)) void print__t1436t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, const char* endl) {
  int __t1437t=0;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t389t() {
  fflush(stdout);
}

static inline __attribute__((always_inline)) void popen__t2707t(const char* cmd, char** __t3967t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t3967t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2706t(char* unsafe_ptr, int64_t* __t3968t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t3968t=status;
}

static inline __attribute__((always_inline)) void int__t592t(uint64_t x, int64_t* __t3969t) {
  int __t593t=0;
  int __t594t=0;
  int __t595t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t3969t=z;
}

static inline __attribute__((always_inline)) void is_different__t96t(int64_t x, int64_t y, int* __t3970t) {
  int __t97t=0;
  int __t98t__=0;
  not__t50t(__t97t,&__t98t__);
  goto __t_return;
  __t_return:
  *__t3970t=__t98t__;
}

static inline __attribute__((always_inline)) void neq__t146t(int64_t x, int64_t y, char* __t3971t) {
  int __t147t__=0;
  char z=0;
  is_different__t96t(x,y,&__t147t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3971t=z;
}

static inline __attribute__((always_inline)) int open__t2708t(const char* cmd, char** __t3972t) {
  char* __t2709t__=0;
  char* unsafe_ptr=0;
  char __t2710t__=0;
  char __t2711t__=0;
  char __t2712t__=0;
  int64_t __t2713t__=0;
  int64_t status=0;
  uint64_t __t2714t=0;
  int64_t __t2715t__=0;
  char __t2716t__=0;
  char __t2717t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2707t(cmd,&__t2709t__);
  unsafe_ptr=__t2709t__;
  exists__t612t(unsafe_ptr,&__t2710t__);
  not__t41t(__t2710t__,&__t2711t__);
  if(__t2711t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t612t(unsafe_ptr,&__t2712t__);
  if(__t2712t__){
  pclose__t2706t(unsafe_ptr,&__t2713t__);
  status=__t2713t__;
  unsafe_ptr=0;
  __t2714t=0;
  int__t592t(__t2714t,&__t2715t__);
  neq__t146t(status,__t2715t__,&__t2716t__);
  if(__t2716t__){
  __t_complain=37;
  goto __t2717t__label;
  __t2717t__label:__t2717t=__t2717t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3972t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2719t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t3973t) {
  const char* __t2720t__cstr=0;
  char* __t2720t__str__unsafe_ptr=0;
  uint64_t __t2720t__str__dat__pos=0;
  uint64_t __t2720t__str__dat__length=0;
  char __t2720t__str__dat__first=0;
  const char* __t2722t__=0;
  char* __t2723t__unsafe_ptr=0;
  char __t2724t____t2712t__=0;
  int64_t __t2724t____t2713t__=0;
  int64_t __t2724t__status=0;
  uint64_t __t2724t____t2714t=0;
  int64_t __t2724t____t2715t__=0;
  char __t2724t____t2716t__=0;
  char __t2724t____t2717t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1359t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2720t__cstr,&__t2720t__str__unsafe_ptr,&__t2720t__str__dat__pos,&__t2720t__str__dat__length,&__t2720t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1369t(__t2720t__cstr,__t2720t__str__unsafe_ptr,__t2720t__str__dat__pos,__t2720t__str__dat__length,__t2720t__str__dat__first,&__t2722t__);
  __t_errcode=open__t2708t(__t2722t__,&__t2723t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t612t(__t2723t__unsafe_ptr,&__t2724t____t2712t__);
  if(__t2724t____t2712t__){
  pclose__t2706t(__t2723t__unsafe_ptr,&__t2724t____t2713t__);
  __t2724t__status=__t2724t____t2713t__;
  __t2723t__unsafe_ptr=0;
  __t2724t____t2714t=0;
  int__t592t(__t2724t____t2714t,&__t2724t____t2715t__);
  neq__t146t(__t2724t__status,__t2724t____t2715t__,&__t2724t____t2716t__);
  if(__t2724t____t2716t__){
  __t_complain=37;
  goto __t2717t__label;
  __t2717t__label:__t2724t____t2717t=__t2724t____t2717t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3973t=__t2723t__unsafe_ptr;
  
  __t_skip_returns:free__t682t(&__t2720t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2681t(int64_t value, const char** __t3974t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t3974t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t3975t) {
  const char* value=0;
  *__t3975t=value;
}

int run__t3526t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t3976t) {
  char* __t3527t__unsafe_ptr=0;
  char __t3528t____t2724t____t2712t__=0;
  int64_t __t3528t____t2724t____t2713t__=0;
  int64_t __t3528t____t2724t__status=0;
  uint64_t __t3528t____t2724t____t2714t=0;
  int64_t __t3528t____t2724t____t2715t__=0;
  char __t3528t____t2724t____t2716t__=0;
  char __t3528t____t2724t____t2717t=0;
  char* proc__unsafe_ptr=0;
  char __t3529t=0;
  int64_t __t3530t=0;
  int64_t error=0;
  const char* __t3531t__=0;
  const char* __t3532t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2719t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3527t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t3527t__unsafe_ptr;
  exists__t612t(__t3527t__unsafe_ptr,&__t3528t____t2724t____t2712t__);
  if(__t3528t____t2724t____t2712t__){
  pclose__t2706t(__t3527t__unsafe_ptr,&__t3528t____t2724t____t2713t__);
  __t3528t____t2724t__status=__t3528t____t2724t____t2713t__;
  __t3527t__unsafe_ptr=0;
  __t3528t____t2724t____t2714t=0;
  int__t592t(__t3528t____t2724t____t2714t,&__t3528t____t2724t____t2715t__);
  neq__t146t(__t3528t____t2724t__status,__t3528t____t2724t____t2715t__,&__t3528t____t2724t____t2716t__);
  if(__t3528t____t2724t____t2716t__){
  __t_complain=37;
  goto __t2717t__label;
  __t2717t__label:__t3528t____t2724t____t2717t=__t3528t____t2724t____t2717t==0;
  }
  }
  __t3530t=__t_complain;
  __t3529t=(__t_complain==0);
  __t_complain=0;
  error=__t3530t;
  __t3529t__label:__t3529t=__t3529t==0;
  if(__t3529t){
  cstr__t2681t(error,&__t3531t__);
  goto __t_return;
  }
  cstr__t1t(&__t3532t__);
  __t3531t__=__t3532t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3976t=__t3531t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t3977t) {
  int value=0;
  *__t3977t=value;
}

static inline __attribute__((always_inline)) void not__t52t(int __t_anon0, int* __t3978t) {
  int __t53t__=0;
  true__t15t(&__t53t__);
  goto __t_return;
  __t_return:
  *__t3978t=__t53t__;
}

static inline __attribute__((always_inline)) void exists__t1216t(const char* c, char* __t3979t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t3979t=z;
}

static inline __attribute__((always_inline)) void set__t435t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3562t(char colors__initialized) {
  const char* __t3564t__value=0;
  const char* __t3564t____t392t=0;
  int __t3566t=0;
  char __t3567t=0;
  char __t3568t=0;
  const char* __t3573t__value=0;
  const char* __t3573t____t392t=0;
  int __t3575t=0;
  const char* __t3578t__value=0;
  const char* __t3578t____t392t=0;
  nn__t390t(__t3544t,&__t3564t__value,&__t3564t____t392t);
  print__t399t(__t3564t__value,__t3564t____t392t);
  __t3568t=1;
  if(__t3569t!=__t3569t){
  __t3568t=0;
  }
  if(__t3568t){
  __t3567t=1;
  }
  if(__t3567t){
  set__t435t(colors__initialized);
  nn__t390t(__t3572t,&__t3573t__value,&__t3573t____t392t);
  print__t399t(__t3573t__value,__t3573t____t392t);
  }
  set__t555t(colors__initialized);
  nn__t390t(__t3559t,&__t3578t__value,&__t3578t____t392t);
  print__t399t(__t3578t__value,__t3578t____t392t);
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

static inline __attribute__((always_inline)) void print_marker__t3542t(char colors__initialized) {
  const char* __t3545t__value=0;
  const char* __t3545t____t392t=0;
  char __t3547t=0;
  char __t3548t=0;
  const char* __t3553t__value=0;
  const char* __t3553t____t392t=0;
  int __t3555t=0;
  int __t3556t=0;
  const char* __t3560t__value=0;
  const char* __t3560t____t392t=0;
  nn__t390t(__t3544t,&__t3545t__value,&__t3545t____t392t);
  print__t399t(__t3545t__value,__t3545t____t392t);
  __t3548t=1;
  if(__t3549t!=__t3549t){
  __t3548t=0;
  }
  if(__t3548t){
  __t3547t=1;
  }
  if(__t3547t){
  set__t439t(colors__initialized);
  nn__t390t(__t3552t,&__t3553t__value,&__t3553t____t392t);
  print__t399t(__t3553t__value,__t3553t____t392t);
  }
  set__t555t(colors__initialized);
  nn__t390t(__t3559t,&__t3560t__value,&__t3560t____t392t);
  print__t399t(__t3560t__value,__t3560t____t392t);
}

static inline __attribute__((always_inline)) int test__t3597t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t3980t) {
  char* __t3601t__value__unsafe_ptr=0;
  uint64_t __t3601t__value__dat__pos=0;
  uint64_t __t3601t__value__dat__length=0;
  char __t3601t__value__dat__first=0;
  const char* __t3601t____t1668t=0;
  const char* __t3605t__=0;
  const char* __t3606t=0;
  const char* error=0;
  int __t3607t=0;
  int __t3608t__=0;
  char __t3609t__=0;
  const char* __t3610t__=0;
  const char* __t3613t__value=0;
  const char* __t3613t____t392t=0;
  char __t3615t__=0;
  const char* __t3620t__value=0;
  const char* __t3620t____t392t=0;
  char __t3623t=0;
  char __t3627t=0;
  int __t_errcode=0;
  int __t_complain=0;
  print_marker__t3580t(colors__initialized);
  nn__t1667t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3601t__value__unsafe_ptr,&__t3601t__value__dat__pos,&__t3601t__value__dat__length,&__t3601t__value__dat__first,&__t3601t____t1668t);
  print__t1436t(__t3601t__value__unsafe_ptr,__t3601t__value__dat__pos,__t3601t__value__dat__length,__t3601t__value__dat__first,__t3601t____t1668t);
  print__t389t();
  __t_errcode=run__t3526t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3605t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3606t=__t3605t__;
  error=__t3606t;
  not__t52t(__t3607t,&__t3608t__);
  if(should_fail){
  exists__t1216t(error,&__t3609t__);
  if(__t3609t__){
  cstr__t1t(&__t3610t__);
  error=__t3610t__;
  }
  else{
  error=__t3611t;
  }
  }
  nn__t390t(__t3612t,&__t3613t__value,&__t3613t____t392t);
  print__t399t(__t3613t__value,__t3613t____t392t);
  exists__t1216t(error,&__t3615t__);
  if(__t3615t__){
  print_marker__t3562t(colors__initialized);
  print__t401t(__t391t);
  nn__t390t(__t3619t,&__t3620t__value,&__t3620t____t392t);
  print__t399t(__t3620t__value,__t3620t____t392t);
  print__t401t(error);
  __t3623t=0;
  goto __t_return;
  }
  print_marker__t3542t(colors__initialized);
  print__t401t(__t391t);
  __t3627t=1;
  __t3623t=__t3627t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3980t=__t3623t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t412t(uint64_t value, const char* endl) {
  int __t413t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t397t(uint64_t value, uint64_t* __t3981t, const char** __t3982t) {
  const char* __t398t=0;
  __t398t=__t391t;
  goto __t_return;
  __t_return:
  *__t3981t=value;
  *__t3982t=__t398t;
}

static inline __attribute__((always_inline)) int main__t3671t() {
  char* __t3673t__unsafe_ptr=0;
  uint64_t __t3673t__dat__pos=0;
  uint64_t __t3673t__dat__length=0;
  char __t3673t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t3676t__initialized=0;
  char colors__initialized=0;
  uint64_t __t3678t=0;
  char* __t3679t__unsafe_ptr=0;
  uint64_t __t3679t__unsafe_size=0;
  uint32_t __t3679t__unsafe_offset=0;
  uint32_t __t3679t__unsafe_align=0;
  char* __t3681t__buf__unsafe_ptr=0;
  uint64_t __t3681t__buf__unsafe_size=0;
  uint32_t __t3681t__buf__unsafe_offset=0;
  uint32_t __t3681t__buf__unsafe_align=0;
  uint64_t __t3681t__pos=0;
  char* __t3682t__buf__unsafe_ptr=0;
  uint64_t __t3682t__buf__unsafe_size=0;
  uint32_t __t3682t__buf__unsafe_offset=0;
  uint32_t __t3682t__buf__unsafe_align=0;
  uint64_t __t3682t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t3684t__unsafe_ptr=0;
  uint64_t __t3684t__dat__pos=0;
  uint64_t __t3684t__dat__length=0;
  char __t3684t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  uint64_t __t3685t=0;
  uint64_t __t3686t=0;
  uint64_t counter=0;
  uint64_t __t3687t=0;
  uint64_t __t3688t=0;
  uint64_t failures=0;
  uint64_t __t3689t=0;
  char* __t3690t__unsafe_ptr=0;
  char __t3692t=0;
  char* __t3693t__unsafe_ptr=0;
  uint64_t __t3693t__dat__pos=0;
  uint64_t __t3693t__dat__length=0;
  char __t3693t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t3695t__=0;
  char __t3696t__=0;
  char __t3697t__=0;
  char __t3698t=0;
  char __t3699t__=0;
  uint64_t __t3700t__=0;
  uint64_t __t3701t____t3669t=0;
  uint64_t __t3701t____t3670t__=0;
  char* __t3702t__unsafe_ptr=0;
  uint64_t __t3702t__dat__pos=0;
  uint64_t __t3702t__dat__length=0;
  char __t3702t__dat__first=0;
  char* __t3704t__unsafe_ptr=0;
  uint64_t __t3704t__dat__pos=0;
  uint64_t __t3704t__dat__length=0;
  char __t3704t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t3705t=0;
  char* __t3706t__unsafe_ptr=0;
  char __t3708t=0;
  char* __t3709t__unsafe_ptr=0;
  uint64_t __t3709t__dat__pos=0;
  uint64_t __t3709t__dat__length=0;
  char __t3709t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t3711t__=0;
  char __t3712t__=0;
  uint64_t __t3713t__=0;
  uint64_t __t3714t____t3669t=0;
  uint64_t __t3714t____t3670t__=0;
  uint64_t __t3715t=0;
  uint64_t __t3716t__=0;
  char __t3718t__=0;
  char should_fail=0;
  char* __t3719t__unsafe_ptr=0;
  uint64_t __t3719t__dat__pos=0;
  uint64_t __t3719t__dat__length=0;
  char __t3719t__dat__first=0;
  char* __t3720t__unsafe_ptr=0;
  uint64_t __t3720t__dat__pos=0;
  uint64_t __t3720t__dat__length=0;
  char __t3720t__dat__first=0;
  char __t3721t__=0;
  char __t3722t__=0;
  uint64_t __t3723t=0;
  uint64_t __t3724t__=0;
  uint64_t __t3725t=0;
  char __t3726t__=0;
  const char* __t3740t__value=0;
  const char* __t3740t____t392t=0;
  const char* __t3730t__value=0;
  const char* __t3730t____t392t=0;
  const char* __t3735t__value=0;
  const char* __t3735t____t392t=0;
  uint64_t __t3746t__value=0;
  const char* __t3746t____t398t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1278t(__t3672t,&__t3673t__unsafe_ptr,&__t3673t__dat__pos,&__t3673t__dat__length,&__t3673t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  test_root__unsafe_ptr=__t3673t__unsafe_ptr;
  test_root__dat__pos=__t3673t__dat__pos;
  test_root__dat__length=__t3673t__dat__length;
  test_root__dat__first=__t3673t__dat__first;
  console__t379t();
  colors__t429t(&__t3676t__initialized);
  colors__initialized=__t3676t__initialized;
  __t3678t=128;
  __t_errcode=alloc__t950t(__t3678t,&__t3679t__unsafe_ptr,&__t3679t__unsafe_size,&__t3679t__unsafe_offset,&__t3679t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1012t(&__t3679t__unsafe_ptr,&__t3679t__unsafe_size,&__t3679t__unsafe_offset,&__t3679t__unsafe_align,&__t3681t__buf__unsafe_ptr,&__t3681t__buf__unsafe_size,&__t3681t__buf__unsafe_offset,&__t3681t__buf__unsafe_align,&__t3681t__pos);
  __t3682t__buf__unsafe_ptr=__t3681t__buf__unsafe_ptr;
  __t3682t__buf__unsafe_size=__t3681t__buf__unsafe_size;
  __t3682t__buf__unsafe_offset=__t3681t__buf__unsafe_offset;
  __t3682t__buf__unsafe_align=__t3681t__buf__unsafe_align;
  __t3682t__pos=__t3681t__pos;
  CHARS__buf__unsafe_ptr=__t3682t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t3682t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t3682t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t3682t__buf__unsafe_align;
  CHARS__pos=__t3682t__pos;
  __t_errcode=copy__t1309t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3683t,&__t3684t__unsafe_ptr,&__t3684t__dat__pos,&__t3684t__dat__length,&__t3684t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t3684t__unsafe_ptr;
  command_base__dat__pos=__t3684t__dat__pos;
  command_base__dat__length=__t3684t__dat__length;
  command_base__dat__first=__t3684t__dat__first;
  __t3685t=0;
  __t3686t=__t3685t;
  counter=__t3686t;
  __t3687t=0;
  __t3688t=__t3687t;
  failures=__t3688t;
  __t_errcode=open__t3402t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t3690t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3689t=0-1;
  while(1){
  __t3689t=__t3689t+1;
  __t_complain=get__t3485t(&__t3690t__unsafe_ptr,__t3689t,&__t3693t__unsafe_ptr,&__t3693t__dat__pos,&__t3693t__dat__length,&__t3693t__dat__first);
  __t3692t=__t_complain;
  if(__t_complain){
  goto __t3692t__label;
  }
  path__unsafe_ptr=__t3693t__unsafe_ptr;
  path__dat__pos=__t3693t__dat__pos;
  path__dat__length=__t3693t__dat__length;
  path__dat__first=__t3693t__dat__first;
  __t3692t__label:__t3692t=__t3692t==0;
  if(!__t3692t){
  break;
  }
  __t_errcode=eq__t1381t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t3694t,&__t3695t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3695t__){
  __t_errcode=is_dir__t3329t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t3696t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3696t__,&__t3697t__);
  __t3698t=__t3697t__;
  }
  else{
  __t3698t=0;
  not__t41t(__t3698t,&__t3699t__);
  __t3698t=__t3699t__;
  }
  if(__t3698t){
  continue;
  }
  reuse__t3666t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t3700t__);
  __t_errcode=add__t1883t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t3702t__unsafe_ptr,&__t3702t__dat__pos,&__t3702t__dat__length,&__t3702t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1927t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3702t__unsafe_ptr,__t3702t__dat__pos,__t3702t__dat__length,__t3702t__dat__first,__t3703t,&__t3704t__unsafe_ptr,&__t3704t__dat__pos,&__t3704t__dat__length,&__t3704t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t3704t__unsafe_ptr;
  dir_path__dat__pos=__t3704t__dat__pos;
  dir_path__dat__length=__t3704t__dat__length;
  dir_path__dat__first=__t3704t__dat__first;
  __t_errcode=open__t3402t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t3706t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3705t=0-1;
  while(1){
  __t3705t=__t3705t+1;
  __t_complain=get__t3485t(&__t3706t__unsafe_ptr,__t3705t,&__t3709t__unsafe_ptr,&__t3709t__dat__pos,&__t3709t__dat__length,&__t3709t__dat__first);
  __t3708t=__t_complain;
  if(__t_complain){
  goto __t3708t__label;
  }
  entry__unsafe_ptr=__t3709t__unsafe_ptr;
  entry__dat__pos=__t3709t__dat__pos;
  entry__dat__length=__t3709t__dat__length;
  entry__dat__first=__t3709t__dat__first;
  __t3708t__label:__t3708t=__t3708t==0;
  if(!__t3708t){
  break;
  }
  __t_errcode=ends_with__t1543t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t3710t,&__t3711t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3711t__,&__t3712t__);
  if(__t3712t__){
  continue;
  }
  reuse__t3666t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t3713t__);
  __t3715t=1;
  add__t188t(counter,__t3715t,&__t3716t__);
  counter=__t3716t__;
  __t_errcode=contains__t1631t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t3717t,&__t3718t__);
  if(__t_errcode){
  goto __t_failure;
  }
  should_fail=__t3718t__;
  __t_errcode=add__t1883t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t3719t__unsafe_ptr,&__t3719t__dat__pos,&__t3719t__dat__length,&__t3719t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1883t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3719t__unsafe_ptr,__t3719t__dat__pos,__t3719t__dat__length,__t3719t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t3720t__unsafe_ptr,&__t3720t__dat__pos,&__t3720t__dat__length,&__t3720t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t3597t(colors__initialized,__t3720t__unsafe_ptr,__t3720t__dat__pos,__t3720t__dat__length,__t3720t__dat__first,should_fail,&__t3721t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3721t__,&__t3722t__);
  if(__t3722t__){
  __t3723t=1;
  add__t188t(failures,__t3723t,&__t3724t__);
  failures=__t3724t__;
  }
  __t3714t____t3669t=0;
  add__t188t(__t3713t__,__t3714t____t3669t,&__t3714t____t3670t__);
  CHARS__pos=__t3714t____t3670t__;
  }
  __t3701t____t3669t=0;
  add__t188t(__t3700t__,__t3701t____t3669t,&__t3701t____t3670t__);
  CHARS__pos=__t3701t____t3670t__;
  closedir__t3392t(__t3706t__unsafe_ptr);
  }
  __t3725t=0;
  eq__t133t(failures,__t3725t,&__t3726t__);
  if(__t3726t__){
  set__t439t(colors__initialized);
  nn__t390t(__t3729t,&__t3730t__value,&__t3730t____t392t);
  print__t399t(__t3730t__value,__t3730t____t392t);
  set__t555t(colors__initialized);
  nn__t390t(__t3734t,&__t3735t__value,&__t3735t____t392t);
  print__t399t(__t3735t__value,__t3735t____t392t);
  }
  else{
  set__t435t(colors__initialized);
  nn__t390t(__t3739t,&__t3740t__value,&__t3740t____t392t);
  print__t399t(__t3740t__value,__t3740t____t392t);
  set__t555t(colors__initialized);
  print__t412t(failures,__t3744t);
  }
  nn__t397t(counter,&__t3746t__value,&__t3746t____t398t);
  print__t412t(__t3746t__value,__t3746t____t398t);
  print__t401t(__t3748t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t3392t(__t3690t__unsafe_ptr);
  free__t682t(&__t3679t__unsafe_ptr);
  if(__t3676t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t3671t();return 0;}