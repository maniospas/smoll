#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t3679t=".s";
const char* const __t3557t="[";
const char* const __t3636t="./tests/passing/";
const char* const __t3697t="SUCCESS ";
const char* const __t3572t="] ";
const char* const __t403t="\n";
const char* const __t3665t="./smoll --cleanup ";
const char* const __t3601t="pending";
const char* const __t3565t="V";
const char* const __t3668t="/";
const char* const __t3585t="X";
const char* const __t3702t="no errors across ";
const char* const __t3707t="FAILED ";
const char* const __t391t="";
const char* const __t3562t="success";
const char* const __t3626t="    ";
const char* const __t3651t="..";
const char* const __t3619t="\r";
const char* const __t3716t=" tests";
const char* const __t3582t="failure";
const char* const __t2220t="+";
const char* const __t3712t=" out of ";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1209t(char** __t3718t, uint64_t* __t3719t, uint32_t* __t3720t, uint32_t* __t3721t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3718t=unsafe_ptr;
  *__t3719t=unsafe_size;
  *__t3720t=unsafe_offset;
  *__t3721t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t3722t) {
  *__t3722t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t3723t) {
  int value=0;
  *__t3723t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t3724t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t3724t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t3725t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t3725t=__t110t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t3726t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3726t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t3727t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3727t=z;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t3728t) {
  int __t338t__=0;
  char z=0;
  is_different__t108t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3728t=z;
}

static inline __attribute__((always_inline)) void nat__t687t(uint32_t x, uint64_t* __t3729t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3729t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t3730t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3730t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t3731t) {
  *__t3731t=to;
}

static inline __attribute__((always_inline)) void add__t684t(char* allocated, uint64_t offset, char** __t3732t) {
  char* element=0;
  char* __t685t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t685t__);
  goto __t_return;
  __t_return:
  *__t3732t=__t685t__;
}

static inline __attribute__((always_inline)) int get__t1009t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t3733t) {
  char __t1010t__=0;
  uint64_t __t1011t__=0;
  uint64_t __t1012t__=0;
  uint64_t __t1013t__=0;
  uint64_t __t1014t__=0;
  char* __t1015t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,buffer__unsafe_size,&__t1010t__);
  if(__t1010t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t687t(buffer__unsafe_align,&__t1011t__);
  mul__t212t(i,__t1011t__,&__t1012t__);
  nat__t687t(buffer__unsafe_offset,&__t1013t__);
  add__t188t(__t1012t__,__t1013t__,&__t1014t__);
  add__t684t(buffer__unsafe_ptr,__t1014t__,&__t1015t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3733t=__t1015t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1231t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3734t, uint64_t* __t3735t, uint64_t* __t3736t, char* __t3737t) {
  goto __t_return;
  __t_return:
  *__t3734t=unsafe_ptr;
  *__t3735t=dat__pos;
  *__t3736t=dat__length;
  *__t3737t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1235t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3738t, uint64_t* __t3739t, uint64_t* __t3740t, char* __t3741t) {
  char* unsafe_ptr=0;
  uint64_t __t1236t__=0;
  uint64_t __t1237t=0;
  char __t1238t__=0;
  uint64_t __t1239t__=0;
  uint64_t __t1240t=0;
  char __t1241t__=0;
  char* __t1242t__unsafe_ptr=0;
  uint64_t __t1242t__dat__pos=0;
  uint64_t __t1242t__dat__length=0;
  char __t1242t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t687t(buf__unsafe_align,&__t1236t__);
  __t1237t=1;
  neq__t157t(__t1236t__,__t1237t,&__t1238t__);
  if(__t1238t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t687t(buf__unsafe_offset,&__t1239t__);
  __t1240t=0;
  neq__t157t(__t1239t__,__t1240t,&__t1241t__);
  if(__t1241t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t1231t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1242t__unsafe_ptr,&__t1242t__dat__pos,&__t1242t__dat__length,&__t1242t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3738t=__t1242t__unsafe_ptr;
  *__t3739t=__t1242t__dat__pos;
  *__t3740t=__t1242t__dat__length;
  *__t3741t=__t1242t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1269t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t3742t, uint64_t* __t3743t, uint64_t* __t3744t, char* __t3745t) {
  uint64_t __t1270t=0;
  char __t1271t__=0;
  char* __t1273t__=0;
  char __t1274t__value=0;
  char first=0;
  char* __t1275t__unsafe_ptr=0;
  uint64_t __t1275t__dat__pos=0;
  uint64_t __t1275t__dat__length=0;
  char __t1275t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1270t=0;
  neq__t157t(length,__t1270t,&__t1271t__);
  if(__t1271t__){
  __t_errcode=get__t1009t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1273t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1273t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1274t__value,__t1273t__,1);
  first=__t1274t__value;
  }
  __t_errcode=str__t1235t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1275t__unsafe_ptr,&__t1275t__dat__pos,&__t1275t__dat__length,&__t1275t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3742t=__t1275t__unsafe_ptr;
  *__t3743t=__t1275t__dat__pos;
  *__t3744t=__t1275t__dat__length;
  *__t3745t=__t1275t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1291t(const char* c, char** __t3746t, uint64_t* __t3747t, uint64_t* __t3748t, char* __t3749t) {
  char* __t1292t__unsafe_ptr=0;
  uint64_t __t1292t__unsafe_size=0;
  uint32_t __t1292t__unsafe_offset=0;
  uint32_t __t1292t__unsafe_align=0;
  char* __t1293t__unsafe_ptr=0;
  uint64_t __t1293t__unsafe_size=0;
  uint32_t __t1293t__unsafe_offset=0;
  uint32_t __t1293t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1294t__=0;
  uint64_t length=0;
  uint64_t __t1295t=0;
  uint64_t __t1296t__=0;
  uint64_t __t1297t=0;
  char* __t1299t__unsafe_ptr=0;
  uint64_t __t1299t__dat__pos=0;
  uint64_t __t1299t__dat__length=0;
  char __t1299t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1209t(&__t1292t__unsafe_ptr,&__t1292t__unsafe_size,&__t1292t__unsafe_offset,&__t1292t__unsafe_align);
  __t1293t__unsafe_ptr=__t1292t__unsafe_ptr;
  __t1293t__unsafe_size=__t1292t__unsafe_size;
  __t1293t__unsafe_offset=__t1292t__unsafe_offset;
  __t1293t__unsafe_align=__t1292t__unsafe_align;
  buf__unsafe_ptr=__t1293t__unsafe_ptr;
  buf__unsafe_size=__t1293t__unsafe_size;
  buf__unsafe_offset=__t1293t__unsafe_offset;
  buf__unsafe_align=__t1293t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1294t__);
  buf__unsafe_ptr=__t1294t__;
  if(c){
  length=strlen(c);
  }
  __t1295t=1;
  add__t188t(length,__t1295t,&__t1296t__);
  buf__unsafe_size=__t1296t__;
  __t1297t=0;
  __t_errcode=str__t1269t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1297t,length,&__t1299t__unsafe_ptr,&__t1299t__dat__pos,&__t1299t__dat__length,&__t1299t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3746t=__t1299t__unsafe_ptr;
  *__t3747t=__t1299t__dat__pos;
  *__t3748t=__t1299t__dat__length;
  *__t3749t=__t1299t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void supports_ansi__t428t(char* __t3750t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t3750t=supports;
}

static inline __attribute__((always_inline)) void colors__t429t(char* __t3751t) {
  char __t430t__=0;
  char initialized=0;
  supports_ansi__t428t(&__t430t__);
  initialized=__t430t__;
  goto __t_return;
  __t_return:
  *__t3751t=initialized;
}

static inline __attribute__((always_inline)) void new__t1017t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1348t(char** __t3752t, uint64_t* __t3753t, uint32_t* __t3754t, uint32_t* __t3755t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3752t=unsafe_ptr;
  *__t3753t=unsafe_size;
  *__t3754t=unsafe_offset;
  *__t3755t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t1300t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3756t) {
  goto __t_return;
  __t_return:
  *__t3756t=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__t612t(char* x, char* __t3757t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3757t=z;
}

static inline __attribute__((always_inline)) void free__t682t(char** __t3758t) {
  char* allocated=*__t3758t;
  if(allocated){
  free(allocated);
  }
  *__t3758t=allocated;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t3759t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3759t=z;
}

static inline __attribute__((always_inline)) void zero__t683t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t3760t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3760t=z;
}

static inline __attribute__((always_inline)) int alloc__t675t(uint64_t bytes, char** __t3761t) {
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
  *__t3761t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t804t(char** __t3762t, uint64_t* __t3763t, uint32_t* __t3764t, uint32_t* __t3765t, uint64_t size, char** __t3766t, uint64_t* __t3767t, uint32_t* __t3768t, uint32_t* __t3769t) {
  char* buffer__unsafe_ptr=*__t3762t;
  uint64_t buffer__unsafe_size=*__t3763t;
  uint32_t buffer__unsafe_offset=*__t3764t;
  uint32_t buffer__unsafe_align=*__t3765t;
  int __t805t=0;
  char __t806t__=0;
  char __t808t__=0;
  uint64_t __t809t=0;
  char __t810t__=0;
  char __t811t=0;
  uint64_t __t812t=0;
  uint64_t __t813t__=0;
  uint64_t __t814t__=0;
  int __t816t=0;
  uint64_t __t817t=0;
  char __t818t__=0;
  uint64_t __t819t__=0;
  uint64_t __t820t__=0;
  uint64_t bytes=0;
  int __t821t=0;
  uint64_t __t822t=0;
  char __t823t__=0;
  char* __t824t__=0;
  int __t825t=0;
  uint64_t __t826t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t808t__);
  if(__t808t__){
  __t809t=0;
  neq__t157t(size,__t809t,&__t810t__);
  __t811t=__t810t__;
  }
  if(__t811t){
  __t812t=0;
  nat__t687t(buffer__unsafe_align,&__t813t__);
  mul__t212t(__t813t__,size,&__t814t__);
  zero__t683t(buffer__unsafe_ptr,__t812t,__t814t__);
  goto __t_return;
  }
  __t817t=0;
  neq__t157t(buffer__unsafe_size,__t817t,&__t818t__);
  if(__t818t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t687t(buffer__unsafe_align,&__t819t__);
  mul__t212t(__t819t__,size,&__t820t__);
  bytes=__t820t__;
  __t822t=0;
  eq__t133t(bytes,__t822t,&__t823t__);
  if(__t823t__){
  __t_errcode=12;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t675t(bytes,&__t824t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t826t=0;
  zero__t683t(__t824t__,__t826t,bytes);
  buffer__unsafe_ptr=__t824t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t612t(buffer__unsafe_ptr,&__t806t__);
  if(__t806t__){
  free__t682t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3762t=buffer__unsafe_ptr;
  *__t3763t=buffer__unsafe_size;
  *__t3764t=buffer__unsafe_offset;
  *__t3765t=buffer__unsafe_align;
  *__t3766t=buffer__unsafe_ptr;
  *__t3767t=buffer__unsafe_size;
  *__t3768t=buffer__unsafe_offset;
  *__t3769t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1347t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3770t, uint64_t* __t3771t, uint64_t* __t3772t, char* __t3773t) {
  char* __t1350t__unsafe_ptr=0;
  uint64_t __t1350t__unsafe_size=0;
  uint32_t __t1350t__unsafe_offset=0;
  uint32_t __t1350t__unsafe_align=0;
  uint64_t __t1351t=0;
  uint64_t __t1352t__=0;
  uint64_t __t1353t__=0;
  char* __t1354t__unsafe_ptr=0;
  uint64_t __t1354t__unsafe_size=0;
  uint32_t __t1354t__unsafe_offset=0;
  uint32_t __t1354t__unsafe_align=0;
  char __t1355t____t806t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1356t=0;
  char* __t1357t__unsafe_ptr=0;
  uint64_t __t1357t__dat__pos=0;
  uint64_t __t1357t__dat__length=0;
  char __t1357t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1348t(&__t1350t__unsafe_ptr,&__t1350t__unsafe_size,&__t1350t__unsafe_offset,&__t1350t__unsafe_align);
  __t1351t=1;
  len__t1300t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1352t__);
  add__t188t(__t1351t,__t1352t__,&__t1353t__);
  __t_errcode=alloc__t804t(&__t1350t__unsafe_ptr,&__t1350t__unsafe_size,&__t1350t__unsafe_offset,&__t1350t__unsafe_align,__t1353t__,&__t1354t__unsafe_ptr,&__t1354t__unsafe_size,&__t1354t__unsafe_offset,&__t1354t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1354t__unsafe_ptr;
  buf__unsafe_size=__t1354t__unsafe_size;
  buf__unsafe_offset=__t1354t__unsafe_offset;
  buf__unsafe_align=__t1354t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1356t=0;
  __t_errcode=str__t1235t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1356t,other__dat__length,other__dat__first,&__t1357t__unsafe_ptr,&__t1357t__dat__pos,&__t1357t__dat__length,&__t1357t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t612t(__t1357t__unsafe_ptr,&__t1355t____t806t__);
  if(__t1355t____t806t__){
  free__t682t(&__t1357t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3770t=__t1357t__unsafe_ptr;
  *__t3771t=__t1357t__dat__pos;
  *__t3772t=__t1357t__dat__length;
  *__t3773t=__t1357t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1372t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3774t, char** __t3775t, uint64_t* __t3776t, uint64_t* __t3777t, char* __t3778t) {
  int __t1373t=0;
  char* __t1375t__unsafe_ptr=0;
  uint64_t __t1375t__dat__pos=0;
  uint64_t __t1375t__dat__length=0;
  char __t1375t__dat__first=0;
  char __t1376t____t1355t____t806t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1377t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1017t();
  __t_errcode=copy_null_terminated__t1347t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1375t__unsafe_ptr,&__t1375t__dat__pos,&__t1375t__dat__length,&__t1375t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1375t__unsafe_ptr;
  str__dat__pos=__t1375t__dat__pos;
  str__dat__length=__t1375t__dat__length;
  str__dat__first=__t1375t__dat__first;
  add__t684t(str__unsafe_ptr,str__dat__pos,&__t1377t__);
  _ret=__t1377t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t612t(str__unsafe_ptr,&__t1376t____t1355t____t806t__);
  if(__t1376t____t1355t____t806t__){
  free__t682t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3774t=cstr;
  *__t3775t=str__unsafe_ptr;
  *__t3776t=str__dat__pos;
  *__t3777t=str__dat__length;
  *__t3778t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1382t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3779t) {
  goto __t_return;
  __t_return:
  *__t3779t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t3405t(char* unsafe_ptr) {
  int __t3407t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t3408t(const char* path, char** __t3780t) {
  int __t3410t=0;
  char* unsafe_ptr=0;
  char __t3412t__=0;
  char __t3413t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t612t(unsafe_ptr,&__t3412t__);
  not__t41t(__t3412t__,&__t3413t__);
  if(__t3413t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t3405t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3780t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t3415t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t3781t) {
  const char* __t3416t__cstr=0;
  char* __t3416t__str__unsafe_ptr=0;
  uint64_t __t3416t__str__dat__pos=0;
  uint64_t __t3416t__str__dat__length=0;
  char __t3416t__str__dat__first=0;
  char __t3417t____t1376t____t1355t____t806t__=0;
  const char* __t3418t__=0;
  char* __t3419t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1372t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t3416t__cstr,&__t3416t__str__unsafe_ptr,&__t3416t__str__dat__pos,&__t3416t__str__dat__length,&__t3416t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1382t(__t3416t__cstr,__t3416t__str__unsafe_ptr,__t3416t__str__dat__pos,__t3416t__str__dat__length,__t3416t__str__dat__first,&__t3418t__);
  __t_errcode=open__t3408t(__t3418t__,&__t3419t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t3405t(__t3419t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3781t=__t3419t__unsafe_ptr;
  
  __t_skip_returns:exists__t612t(__t3416t__str__unsafe_ptr,&__t3417t____t1376t____t1355t____t806t__);
  if(__t3417t____t1376t____t1355t____t806t__){
  free__t682t(&__t3416t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t3427t(char** __t3782t, const char** __t3783t) {
  char* f__unsafe_ptr=*__t3782t;
  char __t3428t__=0;
  char __t3429t__=0;
  char* de=0;
  char __t3430t__=0;
  char __t3431t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t612t(f__unsafe_ptr,&__t3428t__);
  not__t41t(__t3428t__,&__t3429t__);
  if(__t3429t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t612t(de,&__t3430t__);
  not__t41t(__t3430t__,&__t3431t__);
  if(__t3431t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3782t=f__unsafe_ptr;
  *__t3783t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t3432t(char** __t3784t, char** __t3785t, uint64_t* __t3786t, uint64_t* __t3787t, char* __t3788t) {
  char* f__unsafe_ptr=*__t3784t;
  const char* __t3433t__=0;
  char* __t3434t__unsafe_ptr=0;
  uint64_t __t3434t__dat__pos=0;
  uint64_t __t3434t__dat__length=0;
  char __t3434t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t3427t(&f__unsafe_ptr,&__t3433t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1291t(__t3433t__,&__t3434t__unsafe_ptr,&__t3434t__dat__pos,&__t3434t__dat__length,&__t3434t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3784t=f__unsafe_ptr;
  *__t3785t=__t3434t__unsafe_ptr;
  *__t3786t=__t3434t__dat__pos;
  *__t3787t=__t3434t__dat__length;
  *__t3788t=__t3434t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t3498t(char** __t3789t, uint64_t __t_anon1, char** __t3790t, uint64_t* __t3791t, uint64_t* __t3792t, char* __t3793t) {
  char* data__unsafe_ptr=*__t3789t;
  char* __t3499t__unsafe_ptr=0;
  uint64_t __t3499t__dat__pos=0;
  uint64_t __t3499t__dat__length=0;
  char __t3499t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t3432t(&data__unsafe_ptr,&__t3499t__unsafe_ptr,&__t3499t__dat__pos,&__t3499t__dat__length,&__t3499t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3789t=data__unsafe_ptr;
  *__t3790t=__t3499t__unsafe_ptr;
  *__t3791t=__t3499t__dat__pos;
  *__t3792t=__t3499t__dat__length;
  *__t3793t=__t3499t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1302t(const char* s, char* __t3794t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t3794t=c;
}

static inline __attribute__((always_inline)) void neq__t1304t(char x, char y, char* __t3795t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t3795t=z;
}

static inline __attribute__((always_inline)) void eq__t1387t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t3796t) {
  uint64_t __t1388t__=0;
  uint64_t n=0;
  uint64_t __t1389t__=0;
  char __t1390t__=0;
  char __t1391t=0;
  char __t1392t__=0;
  char __t1393t=0;
  char z=0;
  len__t1300t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1388t__);
  n=__t1388t__;
  len__t1300t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1389t__);
  neq__t157t(n,__t1389t__,&__t1390t__);
  if(__t1390t__){
  __t1391t=0;
  goto __t_return;
  }
  neq__t1304t(x__dat__first,y__dat__first,&__t1392t__);
  if(__t1392t__){
  __t1393t=0;
  __t1391t=__t1393t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1391t=z;
  goto __t_return;
  __t_return:
  *__t3796t=__t1391t;
}

int eq__t1394t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t3797t) {
  char __t1395t__=0;
  char __t1396t__=0;
  char __t1397t=0;
  char* __t1398t__unsafe_ptr=0;
  uint64_t __t1398t__dat__pos=0;
  uint64_t __t1398t__dat__length=0;
  char __t1398t__dat__first=0;
  char __t1399t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char__t1302t(y,&__t1395t__);
  neq__t1304t(x__dat__first,__t1395t__,&__t1396t__);
  if(__t1396t__){
  __t1397t=0;
  goto __t_return;
  }
  __t_errcode=str__t1291t(y,&__t1398t__unsafe_ptr,&__t1398t__dat__pos,&__t1398t__dat__length,&__t1398t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t1387t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1398t__unsafe_ptr,__t1398t__dat__pos,__t1398t__dat__length,__t1398t__dat__first,&__t1399t__);
  __t1397t=__t1399t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3797t=__t1397t;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1358t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3798t, char** __t3799t, uint64_t* __t3800t, uint64_t* __t3801t, char* __t3802t) {
  int __t1359t=0;
  char* __t1360t__unsafe_ptr=0;
  uint64_t __t1360t__unsafe_size=0;
  uint32_t __t1360t__unsafe_offset=0;
  uint32_t __t1360t__unsafe_align=0;
  uint64_t __t1361t=0;
  uint64_t __t1362t__=0;
  uint64_t __t1363t__=0;
  char* __t1364t__unsafe_ptr=0;
  uint64_t __t1364t__unsafe_size=0;
  uint32_t __t1364t__unsafe_offset=0;
  uint32_t __t1364t__unsafe_align=0;
  char __t1365t____t806t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1366t=0;
  char __t1367t__=0;
  char first_character=0;
  uint64_t __t1368t=0;
  char* __t1369t__unsafe_ptr=0;
  uint64_t __t1369t__dat__pos=0;
  uint64_t __t1369t__dat__length=0;
  char __t1369t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1370t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1348t(&__t1360t__unsafe_ptr,&__t1360t__unsafe_size,&__t1360t__unsafe_offset,&__t1360t__unsafe_align);
  __t1361t=1;
  add__t188t(__t1361t,other__dat__length,&__t1362t__);
  add__t188t(__t1362t__,prefix__dat__length,&__t1363t__);
  __t_errcode=alloc__t804t(&__t1360t__unsafe_ptr,&__t1360t__unsafe_size,&__t1360t__unsafe_offset,&__t1360t__unsafe_align,__t1363t__,&__t1364t__unsafe_ptr,&__t1364t__unsafe_size,&__t1364t__unsafe_offset,&__t1364t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1364t__unsafe_ptr;
  buf__unsafe_size=__t1364t__unsafe_size;
  buf__unsafe_offset=__t1364t__unsafe_offset;
  buf__unsafe_align=__t1364t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1366t=0;
  eq__t133t(prefix__dat__length,__t1366t,&__t1367t__);
  if(__t1367t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1368t=0;
  __t_errcode=str__t1235t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1368t,other__dat__length,first_character,&__t1369t__unsafe_ptr,&__t1369t__dat__pos,&__t1369t__dat__length,&__t1369t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1369t__unsafe_ptr;
  str__dat__pos=__t1369t__dat__pos;
  str__dat__length=__t1369t__dat__length;
  str__dat__first=__t1369t__dat__first;
  add__t684t(str__unsafe_ptr,str__dat__pos,&__t1370t__);
  _ret=__t1370t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t612t(str__unsafe_ptr,&__t1365t____t806t__);
  if(__t1365t____t806t__){
  free__t682t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3798t=cstr;
  *__t3799t=str__unsafe_ptr;
  *__t3800t=str__dat__pos;
  *__t3801t=str__dat__length;
  *__t3802t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1381t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3803t) {
  goto __t_return;
  __t_return:
  *__t3803t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t3332t(const char* path, char* __t3804t) {
  int __t3334t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t3804t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t3342t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t3805t) {
  int __t3344t=0;
  const char* __t3345t__cstr=0;
  char* __t3345t__str__unsafe_ptr=0;
  uint64_t __t3345t__str__dat__pos=0;
  uint64_t __t3345t__str__dat__length=0;
  char __t3345t__str__dat__first=0;
  char __t3346t____t1365t____t806t__=0;
  const char* __t3347t__=0;
  char __t3348t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1358t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t3345t__cstr,&__t3345t__str__unsafe_ptr,&__t3345t__str__dat__pos,&__t3345t__str__dat__length,&__t3345t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1381t(__t3345t__cstr,__t3345t__str__unsafe_ptr,__t3345t__str__dat__pos,__t3345t__str__dat__length,__t3345t__str__dat__first,&__t3347t__);
  is_dir__t3332t(__t3347t__,&__t3348t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3805t=__t3348t__;
  
  __t_skip_returns:exists__t612t(__t3345t__str__unsafe_ptr,&__t3346t____t1365t____t806t__);
  if(__t3346t____t1365t____t806t__){
  free__t682t(&__t3345t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t3657t(char** __t3806t, uint64_t* __t3807t, uint32_t* __t3808t, uint32_t* __t3809t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3806t=unsafe_ptr;
  *__t3807t=unsafe_size;
  *__t3808t=unsafe_offset;
  *__t3809t=unsafe_align;
}

static inline __attribute__((always_inline)) void arena__t1021t(char** __t3810t, uint64_t* __t3811t, uint32_t* __t3812t, uint32_t* __t3813t, uint64_t _pos, char** __t3814t, uint64_t* __t3815t, uint32_t* __t3816t, uint32_t* __t3817t, uint64_t* __t3818t) {
  char* buf__unsafe_ptr=*__t3810t;
  uint64_t buf__unsafe_size=*__t3811t;
  uint32_t buf__unsafe_offset=*__t3812t;
  uint32_t buf__unsafe_align=*__t3813t;
  uint64_t __t1022t=0;
  uint64_t pos=0;
  __t1022t=_pos;
  pos=__t1022t;
  goto __t_return;
  __t_return:
  *__t3810t=buf__unsafe_ptr;
  *__t3811t=buf__unsafe_size;
  *__t3812t=buf__unsafe_offset;
  *__t3813t=buf__unsafe_align;
  *__t3814t=buf__unsafe_ptr;
  *__t3815t=buf__unsafe_size;
  *__t3816t=buf__unsafe_offset;
  *__t3817t=buf__unsafe_align;
  *__t3818t=pos;
}

static inline __attribute__((always_inline)) void arena__t1024t(char** __t3819t, uint64_t* __t3820t, uint32_t* __t3821t, uint32_t* __t3822t, char** __t3823t, uint64_t* __t3824t, uint32_t* __t3825t, uint32_t* __t3826t, uint64_t* __t3827t) {
  char* buf__unsafe_ptr=*__t3819t;
  uint64_t buf__unsafe_size=*__t3820t;
  uint32_t buf__unsafe_offset=*__t3821t;
  uint32_t buf__unsafe_align=*__t3822t;
  uint64_t __t1025t=0;
  char* __t1026t__buf__unsafe_ptr=0;
  uint64_t __t1026t__buf__unsafe_size=0;
  uint32_t __t1026t__buf__unsafe_offset=0;
  uint32_t __t1026t__buf__unsafe_align=0;
  uint64_t __t1026t__pos=0;
  __t1025t=0;
  arena__t1021t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1025t,&__t1026t__buf__unsafe_ptr,&__t1026t__buf__unsafe_size,&__t1026t__buf__unsafe_offset,&__t1026t__buf__unsafe_align,&__t1026t__pos);
  goto __t_return;
  __t_return:
  *__t3819t=buf__unsafe_ptr;
  *__t3820t=buf__unsafe_size;
  *__t3821t=buf__unsafe_offset;
  *__t3822t=buf__unsafe_align;
  *__t3823t=__t1026t__buf__unsafe_ptr;
  *__t3824t=__t1026t__buf__unsafe_size;
  *__t3825t=__t1026t__buf__unsafe_offset;
  *__t3826t=__t1026t__buf__unsafe_align;
  *__t3827t=__t1026t__pos;
}

static inline __attribute__((always_inline)) void len__t1016t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t3828t) {
  goto __t_return;
  __t_return:
  *__t3828t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t3829t) {
  int __t290t__=0;
  char z=0;
  is_different__t108t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t3829t=z;
}

static inline __attribute__((always_inline)) void allocated__t1029t(char** __t3830t, uint64_t* __t3831t, uint32_t* __t3832t, uint32_t* __t3833t, uint64_t pos, char** __t3834t, uint64_t* __t3835t, uint32_t* __t3836t, uint32_t* __t3837t, uint64_t* __t3838t) {
  char* buf__unsafe_ptr=*__t3830t;
  uint64_t buf__unsafe_size=*__t3831t;
  uint32_t buf__unsafe_offset=*__t3832t;
  uint32_t buf__unsafe_align=*__t3833t;
  goto __t_return;
  __t_return:
  *__t3830t=buf__unsafe_ptr;
  *__t3831t=buf__unsafe_size;
  *__t3832t=buf__unsafe_offset;
  *__t3833t=buf__unsafe_align;
  *__t3834t=buf__unsafe_ptr;
  *__t3835t=buf__unsafe_size;
  *__t3836t=buf__unsafe_offset;
  *__t3837t=buf__unsafe_align;
  *__t3838t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1092t(char** __t3839t, uint64_t* __t3840t, uint32_t* __t3841t, uint32_t* __t3842t, uint64_t* __t3843t, uint64_t length, char** __t3844t, uint64_t* __t3845t, uint32_t* __t3846t, uint32_t* __t3847t, uint64_t* __t3848t) {
  char* allocator__buf__unsafe_ptr=*__t3839t;
  uint64_t allocator__buf__unsafe_size=*__t3840t;
  uint32_t allocator__buf__unsafe_offset=*__t3841t;
  uint32_t allocator__buf__unsafe_align=*__t3842t;
  uint64_t allocator__pos=*__t3843t;
  int __t1093t=0;
  uint64_t __t1094t__=0;
  uint64_t next_pos=0;
  uint64_t __t1095t__=0;
  char __t1096t__=0;
  uint64_t __t1097t=0;
  uint64_t __t1098t__=0;
  uint64_t pos=0;
  char* __t1099t__buf__unsafe_ptr=0;
  uint64_t __t1099t__buf__unsafe_size=0;
  uint32_t __t1099t__buf__unsafe_offset=0;
  uint32_t __t1099t__buf__unsafe_align=0;
  uint64_t __t1099t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1094t__);
  next_pos=__t1094t__;
  len__t1016t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1095t__);
  gt__t289t(next_pos,__t1095t__,&__t1096t__);
  if(__t1096t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t1097t=0;
  add__t188t(allocator__pos,__t1097t,&__t1098t__);
  pos=__t1098t__;
  allocator__pos=next_pos;
  allocated__t1029t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1099t__buf__unsafe_ptr,&__t1099t__buf__unsafe_size,&__t1099t__buf__unsafe_offset,&__t1099t__buf__unsafe_align,&__t1099t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3839t=allocator__buf__unsafe_ptr;
  *__t3840t=allocator__buf__unsafe_size;
  *__t3841t=allocator__buf__unsafe_offset;
  *__t3842t=allocator__buf__unsafe_align;
  *__t3843t=allocator__pos;
  *__t3844t=__t1099t__buf__unsafe_ptr;
  *__t3845t=__t1099t__buf__unsafe_size;
  *__t3846t=__t1099t__buf__unsafe_offset;
  *__t3847t=__t1099t__buf__unsafe_align;
  *__t3848t=__t1099t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1322t(char** __t3849t, uint64_t* __t3850t, uint32_t* __t3851t, uint32_t* __t3852t, uint64_t* __t3853t, const char* _other, char** __t3854t, uint64_t* __t3855t, uint64_t* __t3856t, char* __t3857t) {
  char* CHARS__buf__unsafe_ptr=*__t3849t;
  uint64_t CHARS__buf__unsafe_size=*__t3850t;
  uint32_t CHARS__buf__unsafe_offset=*__t3851t;
  uint32_t CHARS__buf__unsafe_align=*__t3852t;
  uint64_t CHARS__pos=*__t3853t;
  char* __t1323t__unsafe_ptr=0;
  uint64_t __t1323t__dat__pos=0;
  uint64_t __t1323t__dat__length=0;
  char __t1323t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1324t__=0;
  char* __t1325t__buf__unsafe_ptr=0;
  uint64_t __t1325t__buf__unsafe_size=0;
  uint32_t __t1325t__buf__unsafe_offset=0;
  uint32_t __t1325t__buf__unsafe_align=0;
  uint64_t __t1325t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1326t__unsafe_ptr=0;
  uint64_t __t1326t__dat__pos=0;
  uint64_t __t1326t__dat__length=0;
  char __t1326t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1291t(_other,&__t1323t__unsafe_ptr,&__t1323t__dat__pos,&__t1323t__dat__length,&__t1323t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1323t__unsafe_ptr;
  other__dat__pos=__t1323t__dat__pos;
  other__dat__length=__t1323t__dat__length;
  other__dat__first=__t1323t__dat__first;
  len__t1300t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1324t__);
  __t_errcode=alloc__t1092t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1324t__,&__t1325t__buf__unsafe_ptr,&__t1325t__buf__unsafe_size,&__t1325t__buf__unsafe_offset,&__t1325t__buf__unsafe_align,&__t1325t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1325t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1325t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1325t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1325t__buf__unsafe_align;
  surface__pos=__t1325t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1235t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1326t__unsafe_ptr,&__t1326t__dat__pos,&__t1326t__dat__length,&__t1326t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3849t=CHARS__buf__unsafe_ptr;
  *__t3850t=CHARS__buf__unsafe_size;
  *__t3851t=CHARS__buf__unsafe_offset;
  *__t3852t=CHARS__buf__unsafe_align;
  *__t3853t=CHARS__pos;
  *__t3854t=__t1326t__unsafe_ptr;
  *__t3855t=__t1326t__dat__pos;
  *__t3856t=__t1326t__dat__length;
  *__t3857t=__t1326t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1268t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3858t, uint64_t* __t3859t, uint64_t* __t3860t, char* __t3861t) {
  goto __t_return;
  __t_return:
  *__t3858t=other__unsafe_ptr;
  *__t3859t=other__dat__pos;
  *__t3860t=other__dat__length;
  *__t3861t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t161t(char* x, char* y, char* __t3862t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t3862t=z;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t3863t) {
  int __t266t__=0;
  char z=0;
  is_different__t108t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t3863t=z;
}

static inline __attribute__((always_inline)) void status__t1034t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t3864t, uint64_t* __t3865t, uint32_t* __t3866t, uint32_t* __t3867t, uint64_t* __t3868t) {
  char* __t1035t__unsafe_ptr=0;
  uint64_t __t1035t__unsafe_size=0;
  uint32_t __t1035t__unsafe_offset=0;
  uint32_t __t1035t__unsafe_align=0;
  uint64_t __t1036t=0;
  __t1035t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1035t__unsafe_size=self__buf__unsafe_size;
  __t1035t__unsafe_offset=self__buf__unsafe_offset;
  __t1035t__unsafe_align=self__buf__unsafe_align;
  __t1036t=self__pos;
  goto __t_return;
  __t_return:
  *__t3864t=__t1035t__unsafe_ptr;
  *__t3865t=__t1035t__unsafe_size;
  *__t3866t=__t1035t__unsafe_offset;
  *__t3867t=__t1035t__unsafe_align;
  *__t3868t=__t1036t;
}

static inline __attribute__((always_inline)) int copy__t1317t(char** __t3869t, uint64_t* __t3870t, uint32_t* __t3871t, uint32_t* __t3872t, uint64_t* __t3873t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t3874t, uint64_t* __t3875t, uint64_t* __t3876t, char* __t3877t) {
  char* CHARS__buf__unsafe_ptr=*__t3869t;
  uint64_t CHARS__buf__unsafe_size=*__t3870t;
  uint32_t CHARS__buf__unsafe_offset=*__t3871t;
  uint32_t CHARS__buf__unsafe_align=*__t3872t;
  uint64_t CHARS__pos=*__t3873t;
  char* __t1318t__unsafe_ptr=0;
  uint64_t __t1318t__dat__pos=0;
  uint64_t __t1318t__dat__length=0;
  char __t1318t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1319t__=0;
  char* __t1320t__buf__unsafe_ptr=0;
  uint64_t __t1320t__buf__unsafe_size=0;
  uint32_t __t1320t__buf__unsafe_offset=0;
  uint32_t __t1320t__buf__unsafe_align=0;
  uint64_t __t1320t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1321t__unsafe_ptr=0;
  uint64_t __t1321t__dat__pos=0;
  uint64_t __t1321t__dat__length=0;
  char __t1321t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1268t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1318t__unsafe_ptr,&__t1318t__dat__pos,&__t1318t__dat__length,&__t1318t__dat__first);
  other__unsafe_ptr=__t1318t__unsafe_ptr;
  other__dat__pos=__t1318t__dat__pos;
  other__dat__length=__t1318t__dat__length;
  other__dat__first=__t1318t__dat__first;
  len__t1300t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1319t__);
  __t_errcode=alloc__t1092t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1319t__,&__t1320t__buf__unsafe_ptr,&__t1320t__buf__unsafe_size,&__t1320t__buf__unsafe_offset,&__t1320t__buf__unsafe_align,&__t1320t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1320t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1320t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1320t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1320t__buf__unsafe_align;
  surface__pos=__t1320t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1235t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1321t__unsafe_ptr,&__t1321t__dat__pos,&__t1321t__dat__length,&__t1321t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3869t=CHARS__buf__unsafe_ptr;
  *__t3870t=CHARS__buf__unsafe_size;
  *__t3871t=CHARS__buf__unsafe_offset;
  *__t3872t=CHARS__buf__unsafe_align;
  *__t3873t=CHARS__pos;
  *__t3874t=__t1321t__unsafe_ptr;
  *__t3875t=__t1321t__dat__pos;
  *__t3876t=__t1321t__dat__length;
  *__t3877t=__t1321t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1031t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t3878t, uint64_t* __t3879t, uint32_t* __t3880t, uint32_t* __t3881t, uint64_t* __t3882t) {
  char* __t1032t__unsafe_ptr=0;
  uint64_t __t1032t__unsafe_size=0;
  uint32_t __t1032t__unsafe_offset=0;
  uint32_t __t1032t__unsafe_align=0;
  uint64_t __t1033t=0;
  __t1032t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1032t__unsafe_size=self__buf__unsafe_size;
  __t1032t__unsafe_offset=self__buf__unsafe_offset;
  __t1032t__unsafe_align=self__buf__unsafe_align;
  __t1033t=self__pos;
  goto __t_return;
  __t_return:
  *__t3878t=__t1032t__unsafe_ptr;
  *__t3879t=__t1032t__unsafe_size;
  *__t3880t=__t1032t__unsafe_offset;
  *__t3881t=__t1032t__unsafe_align;
  *__t3882t=__t1033t;
}

static inline __attribute__((always_inline)) int sub__t365t(uint64_t x, uint64_t y, uint64_t* __t3883t) {
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
  *__t3883t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1287t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t3884t, uint64_t* __t3885t, uint64_t* __t3886t, char* __t3887t) {
  uint64_t __t1289t__=0;
  char* __t1290t__unsafe_ptr=0;
  uint64_t __t1290t__dat__pos=0;
  uint64_t __t1290t__dat__length=0;
  char __t1290t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t365t(endpos,pos,&__t1289t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1269t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1289t__,&__t1290t__unsafe_ptr,&__t1290t__dat__pos,&__t1290t__dat__length,&__t1290t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3884t=__t1290t__unsafe_ptr;
  *__t3885t=__t1290t__dat__pos;
  *__t3886t=__t1290t__dat__length;
  *__t3887t=__t1290t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t1896t(char** __t3888t, uint64_t* __t3889t, uint32_t* __t3890t, uint32_t* __t3891t, uint64_t* __t3892t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t3893t, uint64_t* __t3894t, uint64_t* __t3895t, char* __t3896t) {
  char* CHARS__buf__unsafe_ptr=*__t3888t;
  uint64_t CHARS__buf__unsafe_size=*__t3889t;
  uint32_t CHARS__buf__unsafe_offset=*__t3890t;
  uint32_t CHARS__buf__unsafe_align=*__t3891t;
  uint64_t CHARS__pos=*__t3892t;
  char* __t1897t__unsafe_ptr=0;
  uint64_t __t1897t__dat__pos=0;
  uint64_t __t1897t__dat__length=0;
  char __t1897t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1898t__unsafe_ptr=0;
  uint64_t __t1898t__dat__pos=0;
  uint64_t __t1898t__dat__length=0;
  char __t1898t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t1899t__=0;
  uint64_t __t1900t__=0;
  char __t1901t__=0;
  char __t1902t=0;
  uint64_t __t1903t__=0;
  char __t1904t__=0;
  char __t1905t=0;
  uint64_t __t1906t__=0;
  char* __t1907t__buf__unsafe_ptr=0;
  uint64_t __t1907t__buf__unsafe_size=0;
  uint32_t __t1907t__buf__unsafe_offset=0;
  uint32_t __t1907t__buf__unsafe_align=0;
  uint64_t __t1907t__pos=0;
  char* __t1908t____t1035t__unsafe_ptr=0;
  uint64_t __t1908t____t1035t__unsafe_size=0;
  uint32_t __t1908t____t1035t__unsafe_offset=0;
  uint32_t __t1908t____t1035t__unsafe_align=0;
  uint64_t __t1908t____t1036t=0;
  char* __t1909t__buf__unsafe_ptr=0;
  uint64_t __t1909t__buf__unsafe_size=0;
  uint32_t __t1909t__buf__unsafe_offset=0;
  uint32_t __t1909t__buf__unsafe_align=0;
  uint64_t __t1909t__pos=0;
  char* __t1910t__buf__unsafe_ptr=0;
  uint64_t __t1910t__buf__unsafe_size=0;
  uint32_t __t1910t__buf__unsafe_offset=0;
  uint32_t __t1910t__buf__unsafe_align=0;
  uint64_t __t1910t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1911t__unsafe_ptr=0;
  uint64_t __t1911t__dat__pos=0;
  uint64_t __t1911t__dat__length=0;
  char __t1911t__dat__first=0;
  char* __t1912t____t1032t__unsafe_ptr=0;
  uint64_t __t1912t____t1032t__unsafe_size=0;
  uint32_t __t1912t____t1032t__unsafe_offset=0;
  uint32_t __t1912t____t1032t__unsafe_align=0;
  uint64_t __t1912t____t1033t=0;
  uint64_t __t1914t=0;
  uint64_t __t1915t__=0;
  char* __t1916t__unsafe_ptr=0;
  uint64_t __t1916t__dat__pos=0;
  uint64_t __t1916t__dat__length=0;
  char __t1916t__dat__first=0;
  char __t1917t__=0;
  char __t1918t__=0;
  char __t1919t=0;
  uint64_t __t1920t__=0;
  char __t1921t__=0;
  char __t1922t=0;
  uint64_t __t1923t__=0;
  char* __t1925t__unsafe_ptr=0;
  uint64_t __t1925t__dat__pos=0;
  uint64_t __t1925t__dat__length=0;
  char __t1925t__dat__first=0;
  uint64_t __t1926t__=0;
  uint64_t __t1927t__=0;
  uint64_t __t1928t__=0;
  char* __t1929t__buf__unsafe_ptr=0;
  uint64_t __t1929t__buf__unsafe_size=0;
  uint32_t __t1929t__buf__unsafe_offset=0;
  uint32_t __t1929t__buf__unsafe_align=0;
  uint64_t __t1929t__pos=0;
  char* __t1930t____t1035t__unsafe_ptr=0;
  uint64_t __t1930t____t1035t__unsafe_size=0;
  uint32_t __t1930t____t1035t__unsafe_offset=0;
  uint32_t __t1930t____t1035t__unsafe_align=0;
  uint64_t __t1930t____t1036t=0;
  char* __t1931t__buf__unsafe_ptr=0;
  uint64_t __t1931t__buf__unsafe_size=0;
  uint32_t __t1931t__buf__unsafe_offset=0;
  uint32_t __t1931t__buf__unsafe_align=0;
  uint64_t __t1931t__pos=0;
  char* __t1932t__buf__unsafe_ptr=0;
  uint64_t __t1932t__buf__unsafe_size=0;
  uint32_t __t1932t__buf__unsafe_offset=0;
  uint32_t __t1932t__buf__unsafe_align=0;
  uint64_t __t1932t__pos=0;
  char* __t1933t__unsafe_ptr=0;
  uint64_t __t1933t__dat__pos=0;
  uint64_t __t1933t__dat__length=0;
  char __t1933t__dat__first=0;
  char* __t1934t__unsafe_ptr=0;
  uint64_t __t1934t__dat__pos=0;
  uint64_t __t1934t__dat__length=0;
  char __t1934t__dat__first=0;
  char* __t1935t____t1032t__unsafe_ptr=0;
  uint64_t __t1935t____t1032t__unsafe_size=0;
  uint32_t __t1935t____t1032t__unsafe_offset=0;
  uint32_t __t1935t____t1032t__unsafe_align=0;
  uint64_t __t1935t____t1033t=0;
  uint64_t __t1937t=0;
  uint64_t __t1938t__=0;
  char* __t1939t__unsafe_ptr=0;
  uint64_t __t1939t__dat__pos=0;
  uint64_t __t1939t__dat__length=0;
  char __t1939t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1268t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t1897t__unsafe_ptr,&__t1897t__dat__pos,&__t1897t__dat__length,&__t1897t__dat__first);
  s1__unsafe_ptr=__t1897t__unsafe_ptr;
  s1__dat__pos=__t1897t__dat__pos;
  s1__dat__length=__t1897t__dat__length;
  s1__dat__first=__t1897t__dat__first;
  str__t1268t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t1898t__unsafe_ptr,&__t1898t__dat__pos,&__t1898t__dat__length,&__t1898t__dat__first);
  s2__unsafe_ptr=__t1898t__unsafe_ptr;
  s2__dat__pos=__t1898t__dat__pos;
  s2__dat__length=__t1898t__dat__length;
  s2__dat__first=__t1898t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1899t__);
  if(__t1899t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1900t__);
  eq__t133t(CHARS__pos,__t1900t__,&__t1901t__);
  __t1902t=__t1901t__;
  }
  if(__t1902t){
  add__t188t(CHARS__pos,s2__dat__length,&__t1903t__);
  lt__t265t(__t1903t__,CHARS__buf__unsafe_size,&__t1904t__);
  __t1905t=__t1904t__;
  }
  if(__t1905t){
  len__t1300t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1906t__);
  __t_errcode=alloc__t1092t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1906t__,&__t1907t__buf__unsafe_ptr,&__t1907t__buf__unsafe_size,&__t1907t__buf__unsafe_offset,&__t1907t__buf__unsafe_align,&__t1907t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1034t(__t1907t__buf__unsafe_ptr,__t1907t__buf__unsafe_size,__t1907t__buf__unsafe_offset,__t1907t__buf__unsafe_align,__t1907t__pos,&__t1908t____t1035t__unsafe_ptr,&__t1908t____t1035t__unsafe_size,&__t1908t____t1035t__unsafe_offset,&__t1908t____t1035t__unsafe_align,&__t1908t____t1036t);
  arena__t1021t(&__t1908t____t1035t__unsafe_ptr,&__t1908t____t1035t__unsafe_size,&__t1908t____t1035t__unsafe_offset,&__t1908t____t1035t__unsafe_align,__t1908t____t1036t,&__t1909t__buf__unsafe_ptr,&__t1909t__buf__unsafe_size,&__t1909t__buf__unsafe_offset,&__t1909t__buf__unsafe_align,&__t1909t__pos);
  __t1910t__buf__unsafe_ptr=__t1909t__buf__unsafe_ptr;
  __t1910t__buf__unsafe_size=__t1909t__buf__unsafe_size;
  __t1910t__buf__unsafe_offset=__t1909t__buf__unsafe_offset;
  __t1910t__buf__unsafe_align=__t1909t__buf__unsafe_align;
  __t1910t__pos=__t1909t__pos;
  surface__buf__unsafe_ptr=__t1910t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1910t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1910t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1910t__buf__unsafe_align;
  surface__pos=__t1910t__pos;
  __t_errcode=copy__t1317t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1911t__unsafe_ptr,&__t1911t__dat__pos,&__t1911t__dat__length,&__t1911t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1031t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1912t____t1032t__unsafe_ptr,&__t1912t____t1032t__unsafe_size,&__t1912t____t1032t__unsafe_offset,&__t1912t____t1032t__unsafe_align,&__t1912t____t1033t);
  __t1914t=0;
  add__t188t(s1__dat__pos,__t1914t,&__t1915t__);
  __t_errcode=str__t1287t(__t1912t____t1032t__unsafe_ptr,__t1912t____t1032t__unsafe_size,__t1912t____t1032t__unsafe_offset,__t1912t____t1032t__unsafe_align,__t1912t____t1033t,__t1915t__,&__t1916t__unsafe_ptr,&__t1916t__dat__pos,&__t1916t__dat__length,&__t1916t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1917t__);
  if(__t1917t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1918t__);
  __t1919t=__t1918t__;
  }
  if(__t1919t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1920t__);
  eq__t133t(s2__dat__pos,__t1920t__,&__t1921t__);
  __t1922t=__t1921t__;
  }
  if(__t1922t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t1923t__);
  __t_errcode=str__t1287t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t1923t__,s1__dat__pos,&__t1925t__unsafe_ptr,&__t1925t__dat__pos,&__t1925t__dat__length,&__t1925t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1916t__unsafe_ptr=__t1925t__unsafe_ptr;
  __t1916t__dat__pos=__t1925t__dat__pos;
  __t1916t__dat__length=__t1925t__dat__length;
  __t1916t__dat__first=__t1925t__dat__first;
  goto __t_return;
  }
  len__t1300t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1926t__);
  len__t1300t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1927t__);
  add__t188t(__t1926t__,__t1927t__,&__t1928t__);
  __t_errcode=alloc__t1092t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1928t__,&__t1929t__buf__unsafe_ptr,&__t1929t__buf__unsafe_size,&__t1929t__buf__unsafe_offset,&__t1929t__buf__unsafe_align,&__t1929t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1034t(__t1929t__buf__unsafe_ptr,__t1929t__buf__unsafe_size,__t1929t__buf__unsafe_offset,__t1929t__buf__unsafe_align,__t1929t__pos,&__t1930t____t1035t__unsafe_ptr,&__t1930t____t1035t__unsafe_size,&__t1930t____t1035t__unsafe_offset,&__t1930t____t1035t__unsafe_align,&__t1930t____t1036t);
  arena__t1021t(&__t1930t____t1035t__unsafe_ptr,&__t1930t____t1035t__unsafe_size,&__t1930t____t1035t__unsafe_offset,&__t1930t____t1035t__unsafe_align,__t1930t____t1036t,&__t1931t__buf__unsafe_ptr,&__t1931t__buf__unsafe_size,&__t1931t__buf__unsafe_offset,&__t1931t__buf__unsafe_align,&__t1931t__pos);
  __t1932t__buf__unsafe_ptr=__t1931t__buf__unsafe_ptr;
  __t1932t__buf__unsafe_size=__t1931t__buf__unsafe_size;
  __t1932t__buf__unsafe_offset=__t1931t__buf__unsafe_offset;
  __t1932t__buf__unsafe_align=__t1931t__buf__unsafe_align;
  __t1932t__pos=__t1931t__pos;
  surface__buf__unsafe_ptr=__t1932t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1932t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1932t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1932t__buf__unsafe_align;
  surface__pos=__t1932t__pos;
  __t_errcode=copy__t1317t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1933t__unsafe_ptr,&__t1933t__dat__pos,&__t1933t__dat__length,&__t1933t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1317t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1934t__unsafe_ptr,&__t1934t__dat__pos,&__t1934t__dat__length,&__t1934t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1031t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1935t____t1032t__unsafe_ptr,&__t1935t____t1032t__unsafe_size,&__t1935t____t1032t__unsafe_offset,&__t1935t____t1032t__unsafe_align,&__t1935t____t1033t);
  __t1937t=0;
  add__t188t(surface__pos,__t1937t,&__t1938t__);
  __t_errcode=str__t1287t(__t1935t____t1032t__unsafe_ptr,__t1935t____t1032t__unsafe_size,__t1935t____t1032t__unsafe_offset,__t1935t____t1032t__unsafe_align,__t1935t____t1033t,__t1938t__,&__t1939t__unsafe_ptr,&__t1939t__dat__pos,&__t1939t__dat__length,&__t1939t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1916t__unsafe_ptr=__t1939t__unsafe_ptr;
  __t1916t__dat__pos=__t1939t__dat__pos;
  __t1916t__dat__length=__t1939t__dat__length;
  __t1916t__dat__first=__t1939t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3888t=CHARS__buf__unsafe_ptr;
  *__t3889t=CHARS__buf__unsafe_size;
  *__t3890t=CHARS__buf__unsafe_offset;
  *__t3891t=CHARS__buf__unsafe_align;
  *__t3892t=CHARS__pos;
  *__t3893t=__t1916t__unsafe_ptr;
  *__t3894t=__t1916t__dat__pos;
  *__t3895t=__t1916t__dat__length;
  *__t3896t=__t1916t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t1940t(char** __t3897t, uint64_t* __t3898t, uint32_t* __t3899t, uint32_t* __t3900t, uint64_t* __t3901t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t3902t, uint64_t* __t3903t, uint64_t* __t3904t, char* __t3905t) {
  char* CHARS__buf__unsafe_ptr=*__t3897t;
  uint64_t CHARS__buf__unsafe_size=*__t3898t;
  uint32_t CHARS__buf__unsafe_offset=*__t3899t;
  uint32_t CHARS__buf__unsafe_align=*__t3900t;
  uint64_t CHARS__pos=*__t3901t;
  char* __t1941t__unsafe_ptr=0;
  uint64_t __t1941t__dat__pos=0;
  uint64_t __t1941t__dat__length=0;
  char __t1941t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1942t__unsafe_ptr=0;
  uint64_t __t1942t__dat__pos=0;
  uint64_t __t1942t__dat__length=0;
  char __t1942t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t1943t__=0;
  uint64_t __t1944t__=0;
  char __t1945t__=0;
  char __t1946t=0;
  uint64_t __t1947t__=0;
  char __t1948t__=0;
  char __t1949t=0;
  uint64_t __t1950t__=0;
  char* __t1951t__buf__unsafe_ptr=0;
  uint64_t __t1951t__buf__unsafe_size=0;
  uint32_t __t1951t__buf__unsafe_offset=0;
  uint32_t __t1951t__buf__unsafe_align=0;
  uint64_t __t1951t__pos=0;
  char* __t1952t____t1035t__unsafe_ptr=0;
  uint64_t __t1952t____t1035t__unsafe_size=0;
  uint32_t __t1952t____t1035t__unsafe_offset=0;
  uint32_t __t1952t____t1035t__unsafe_align=0;
  uint64_t __t1952t____t1036t=0;
  char* __t1953t__buf__unsafe_ptr=0;
  uint64_t __t1953t__buf__unsafe_size=0;
  uint32_t __t1953t__buf__unsafe_offset=0;
  uint32_t __t1953t__buf__unsafe_align=0;
  uint64_t __t1953t__pos=0;
  char* __t1954t__buf__unsafe_ptr=0;
  uint64_t __t1954t__buf__unsafe_size=0;
  uint32_t __t1954t__buf__unsafe_offset=0;
  uint32_t __t1954t__buf__unsafe_align=0;
  uint64_t __t1954t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1955t__unsafe_ptr=0;
  uint64_t __t1955t__dat__pos=0;
  uint64_t __t1955t__dat__length=0;
  char __t1955t__dat__first=0;
  char* __t1956t____t1032t__unsafe_ptr=0;
  uint64_t __t1956t____t1032t__unsafe_size=0;
  uint32_t __t1956t____t1032t__unsafe_offset=0;
  uint32_t __t1956t____t1032t__unsafe_align=0;
  uint64_t __t1956t____t1033t=0;
  uint64_t __t1958t=0;
  uint64_t __t1959t__=0;
  char* __t1960t__unsafe_ptr=0;
  uint64_t __t1960t__dat__pos=0;
  uint64_t __t1960t__dat__length=0;
  char __t1960t__dat__first=0;
  char __t1961t__=0;
  char __t1962t__=0;
  char __t1963t=0;
  uint64_t __t1964t__=0;
  char __t1965t__=0;
  char __t1966t=0;
  uint64_t __t1967t__=0;
  char* __t1969t__unsafe_ptr=0;
  uint64_t __t1969t__dat__pos=0;
  uint64_t __t1969t__dat__length=0;
  char __t1969t__dat__first=0;
  uint64_t __t1970t__=0;
  uint64_t __t1971t__=0;
  uint64_t __t1972t__=0;
  char* __t1973t__buf__unsafe_ptr=0;
  uint64_t __t1973t__buf__unsafe_size=0;
  uint32_t __t1973t__buf__unsafe_offset=0;
  uint32_t __t1973t__buf__unsafe_align=0;
  uint64_t __t1973t__pos=0;
  char* __t1974t____t1035t__unsafe_ptr=0;
  uint64_t __t1974t____t1035t__unsafe_size=0;
  uint32_t __t1974t____t1035t__unsafe_offset=0;
  uint32_t __t1974t____t1035t__unsafe_align=0;
  uint64_t __t1974t____t1036t=0;
  char* __t1975t__buf__unsafe_ptr=0;
  uint64_t __t1975t__buf__unsafe_size=0;
  uint32_t __t1975t__buf__unsafe_offset=0;
  uint32_t __t1975t__buf__unsafe_align=0;
  uint64_t __t1975t__pos=0;
  char* __t1976t__buf__unsafe_ptr=0;
  uint64_t __t1976t__buf__unsafe_size=0;
  uint32_t __t1976t__buf__unsafe_offset=0;
  uint32_t __t1976t__buf__unsafe_align=0;
  uint64_t __t1976t__pos=0;
  char* __t1977t__unsafe_ptr=0;
  uint64_t __t1977t__dat__pos=0;
  uint64_t __t1977t__dat__length=0;
  char __t1977t__dat__first=0;
  char* __t1978t__unsafe_ptr=0;
  uint64_t __t1978t__dat__pos=0;
  uint64_t __t1978t__dat__length=0;
  char __t1978t__dat__first=0;
  char* __t1979t____t1032t__unsafe_ptr=0;
  uint64_t __t1979t____t1032t__unsafe_size=0;
  uint32_t __t1979t____t1032t__unsafe_offset=0;
  uint32_t __t1979t____t1032t__unsafe_align=0;
  uint64_t __t1979t____t1033t=0;
  uint64_t __t1981t=0;
  uint64_t __t1982t__=0;
  char* __t1983t__unsafe_ptr=0;
  uint64_t __t1983t__dat__pos=0;
  uint64_t __t1983t__dat__length=0;
  char __t1983t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1268t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t1941t__unsafe_ptr,&__t1941t__dat__pos,&__t1941t__dat__length,&__t1941t__dat__first);
  s1__unsafe_ptr=__t1941t__unsafe_ptr;
  s1__dat__pos=__t1941t__dat__pos;
  s1__dat__length=__t1941t__dat__length;
  s1__dat__first=__t1941t__dat__first;
  __t_errcode=str__t1291t(_s2,&__t1942t__unsafe_ptr,&__t1942t__dat__pos,&__t1942t__dat__length,&__t1942t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__unsafe_ptr=__t1942t__unsafe_ptr;
  s2__dat__pos=__t1942t__dat__pos;
  s2__dat__length=__t1942t__dat__length;
  s2__dat__first=__t1942t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1943t__);
  if(__t1943t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1944t__);
  eq__t133t(CHARS__pos,__t1944t__,&__t1945t__);
  __t1946t=__t1945t__;
  }
  if(__t1946t){
  add__t188t(CHARS__pos,s2__dat__length,&__t1947t__);
  lt__t265t(__t1947t__,CHARS__buf__unsafe_size,&__t1948t__);
  __t1949t=__t1948t__;
  }
  if(__t1949t){
  len__t1300t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1950t__);
  __t_errcode=alloc__t1092t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1950t__,&__t1951t__buf__unsafe_ptr,&__t1951t__buf__unsafe_size,&__t1951t__buf__unsafe_offset,&__t1951t__buf__unsafe_align,&__t1951t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1034t(__t1951t__buf__unsafe_ptr,__t1951t__buf__unsafe_size,__t1951t__buf__unsafe_offset,__t1951t__buf__unsafe_align,__t1951t__pos,&__t1952t____t1035t__unsafe_ptr,&__t1952t____t1035t__unsafe_size,&__t1952t____t1035t__unsafe_offset,&__t1952t____t1035t__unsafe_align,&__t1952t____t1036t);
  arena__t1021t(&__t1952t____t1035t__unsafe_ptr,&__t1952t____t1035t__unsafe_size,&__t1952t____t1035t__unsafe_offset,&__t1952t____t1035t__unsafe_align,__t1952t____t1036t,&__t1953t__buf__unsafe_ptr,&__t1953t__buf__unsafe_size,&__t1953t__buf__unsafe_offset,&__t1953t__buf__unsafe_align,&__t1953t__pos);
  __t1954t__buf__unsafe_ptr=__t1953t__buf__unsafe_ptr;
  __t1954t__buf__unsafe_size=__t1953t__buf__unsafe_size;
  __t1954t__buf__unsafe_offset=__t1953t__buf__unsafe_offset;
  __t1954t__buf__unsafe_align=__t1953t__buf__unsafe_align;
  __t1954t__pos=__t1953t__pos;
  surface__buf__unsafe_ptr=__t1954t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1954t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1954t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1954t__buf__unsafe_align;
  surface__pos=__t1954t__pos;
  __t_errcode=copy__t1317t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1955t__unsafe_ptr,&__t1955t__dat__pos,&__t1955t__dat__length,&__t1955t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1031t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1956t____t1032t__unsafe_ptr,&__t1956t____t1032t__unsafe_size,&__t1956t____t1032t__unsafe_offset,&__t1956t____t1032t__unsafe_align,&__t1956t____t1033t);
  __t1958t=0;
  add__t188t(s1__dat__pos,__t1958t,&__t1959t__);
  __t_errcode=str__t1287t(__t1956t____t1032t__unsafe_ptr,__t1956t____t1032t__unsafe_size,__t1956t____t1032t__unsafe_offset,__t1956t____t1032t__unsafe_align,__t1956t____t1033t,__t1959t__,&__t1960t__unsafe_ptr,&__t1960t__dat__pos,&__t1960t__dat__length,&__t1960t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1961t__);
  if(__t1961t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1962t__);
  __t1963t=__t1962t__;
  }
  if(__t1963t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1964t__);
  eq__t133t(s2__dat__pos,__t1964t__,&__t1965t__);
  __t1966t=__t1965t__;
  }
  if(__t1966t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t1967t__);
  __t_errcode=str__t1287t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t1967t__,s1__dat__pos,&__t1969t__unsafe_ptr,&__t1969t__dat__pos,&__t1969t__dat__length,&__t1969t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1960t__unsafe_ptr=__t1969t__unsafe_ptr;
  __t1960t__dat__pos=__t1969t__dat__pos;
  __t1960t__dat__length=__t1969t__dat__length;
  __t1960t__dat__first=__t1969t__dat__first;
  goto __t_return;
  }
  len__t1300t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1970t__);
  len__t1300t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1971t__);
  add__t188t(__t1970t__,__t1971t__,&__t1972t__);
  __t_errcode=alloc__t1092t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1972t__,&__t1973t__buf__unsafe_ptr,&__t1973t__buf__unsafe_size,&__t1973t__buf__unsafe_offset,&__t1973t__buf__unsafe_align,&__t1973t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1034t(__t1973t__buf__unsafe_ptr,__t1973t__buf__unsafe_size,__t1973t__buf__unsafe_offset,__t1973t__buf__unsafe_align,__t1973t__pos,&__t1974t____t1035t__unsafe_ptr,&__t1974t____t1035t__unsafe_size,&__t1974t____t1035t__unsafe_offset,&__t1974t____t1035t__unsafe_align,&__t1974t____t1036t);
  arena__t1021t(&__t1974t____t1035t__unsafe_ptr,&__t1974t____t1035t__unsafe_size,&__t1974t____t1035t__unsafe_offset,&__t1974t____t1035t__unsafe_align,__t1974t____t1036t,&__t1975t__buf__unsafe_ptr,&__t1975t__buf__unsafe_size,&__t1975t__buf__unsafe_offset,&__t1975t__buf__unsafe_align,&__t1975t__pos);
  __t1976t__buf__unsafe_ptr=__t1975t__buf__unsafe_ptr;
  __t1976t__buf__unsafe_size=__t1975t__buf__unsafe_size;
  __t1976t__buf__unsafe_offset=__t1975t__buf__unsafe_offset;
  __t1976t__buf__unsafe_align=__t1975t__buf__unsafe_align;
  __t1976t__pos=__t1975t__pos;
  surface__buf__unsafe_ptr=__t1976t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1976t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1976t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1976t__buf__unsafe_align;
  surface__pos=__t1976t__pos;
  __t_errcode=copy__t1317t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1977t__unsafe_ptr,&__t1977t__dat__pos,&__t1977t__dat__length,&__t1977t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1317t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1978t__unsafe_ptr,&__t1978t__dat__pos,&__t1978t__dat__length,&__t1978t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1031t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1979t____t1032t__unsafe_ptr,&__t1979t____t1032t__unsafe_size,&__t1979t____t1032t__unsafe_offset,&__t1979t____t1032t__unsafe_align,&__t1979t____t1033t);
  __t1981t=0;
  add__t188t(surface__pos,__t1981t,&__t1982t__);
  __t_errcode=str__t1287t(__t1979t____t1032t__unsafe_ptr,__t1979t____t1032t__unsafe_size,__t1979t____t1032t__unsafe_offset,__t1979t____t1032t__unsafe_align,__t1979t____t1033t,__t1982t__,&__t1983t__unsafe_ptr,&__t1983t__dat__pos,&__t1983t__dat__length,&__t1983t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1960t__unsafe_ptr=__t1983t__unsafe_ptr;
  __t1960t__dat__pos=__t1983t__dat__pos;
  __t1960t__dat__length=__t1983t__dat__length;
  __t1960t__dat__first=__t1983t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3897t=CHARS__buf__unsafe_ptr;
  *__t3898t=CHARS__buf__unsafe_size;
  *__t3899t=CHARS__buf__unsafe_offset;
  *__t3900t=CHARS__buf__unsafe_align;
  *__t3901t=CHARS__pos;
  *__t3902t=__t1960t__unsafe_ptr;
  *__t3903t=__t1960t__dat__pos;
  *__t3904t=__t1960t__dat__length;
  *__t3905t=__t1960t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1453t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t3906t) {
  uint64_t __t1454t__=0;
  char* __t1455t__=0;
  add__t188t(s__dat__pos,i,&__t1454t__);
  add__t684t(s__unsafe_ptr,__t1454t__,&__t1455t__);
  goto __t_return;
  __t_return:
  *__t3906t=__t1455t__;
}

int slice__t1476t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t3907t, uint64_t* __t3908t, uint64_t* __t3909t, char* __t3910t) {
  char* __t1477t__unsafe_ptr=0;
  uint64_t __t1477t__dat__pos=0;
  uint64_t __t1477t__dat__length=0;
  char __t1477t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1478t__=0;
  char* __t1479t__unsafe_ptr=0;
  uint64_t __t1479t__dat__pos=0;
  uint64_t __t1479t__dat__length=0;
  char __t1479t__dat__first=0;
  char __t1480t__=0;
  char __t1481t__=0;
  char __t1482t=0;
  char __t1483t__=0;
  uint64_t __t1484t__=0;
  uint64_t new_length=0;
  uint64_t __t1485t=0;
  char __t1486t__=0;
  char new_first=0;
  char* __t1488t__=0;
  char __t1489t__value=0;
  uint64_t __t1490t__=0;
  char* __t1491t__unsafe_ptr=0;
  uint64_t __t1491t__dat__pos=0;
  uint64_t __t1491t__dat__length=0;
  char __t1491t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1268t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1477t__unsafe_ptr,&__t1477t__dat__pos,&__t1477t__dat__length,&__t1477t__dat__first);
  s__unsafe_ptr=__t1477t__unsafe_ptr;
  s__dat__pos=__t1477t__dat__pos;
  s__dat__length=__t1477t__dat__length;
  s__dat__first=__t1477t__dat__first;
  eq__t133t(from,to,&__t1478t__);
  if(__t1478t__){
  __t_errcode=str__t1291t(__t391t,&__t1479t__unsafe_ptr,&__t1479t__dat__pos,&__t1479t__dat__length,&__t1479t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t289t(from,to,&__t1480t__);
  if(!__t1480t__){
  gt__t289t(to,s__dat__length,&__t1481t__);
  __t1482t=__t1481t__;
  }
  else{
  __t1482t=0;
  not__t41t(__t1482t,&__t1483t__);
  __t1482t=__t1483t__;
  }
  if(__t1482t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t365t(to,from,&__t1484t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1484t__;
  __t1485t=0;
  neq__t157t(from,__t1485t,&__t1486t__);
  if(__t1486t__){
  get__t1453t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1488t__);
  if(!__t1488t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1489t__value,__t1488t__,1);
  new_first=__t1489t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1490t__);
  str__t1231t(s__unsafe_ptr,__t1490t__,new_length,new_first,&__t1491t__unsafe_ptr,&__t1491t__dat__pos,&__t1491t__dat__length,&__t1491t__dat__first);
  __t1479t__unsafe_ptr=__t1491t__unsafe_ptr;
  __t1479t__dat__pos=__t1491t__dat__pos;
  __t1479t__dat__length=__t1491t__dat__length;
  __t1479t__dat__first=__t1491t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3907t=__t1479t__unsafe_ptr;
  *__t3908t=__t1479t__dat__pos;
  *__t3909t=__t1479t__dat__length;
  *__t3910t=__t1479t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1556t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t3911t) {
  char* __t1557t__unsafe_ptr=0;
  uint64_t __t1557t__dat__pos=0;
  uint64_t __t1557t__dat__length=0;
  char __t1557t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1558t__unsafe_ptr=0;
  uint64_t __t1558t__dat__pos=0;
  uint64_t __t1558t__dat__length=0;
  char __t1558t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1559t__=0;
  char __t1560t=0;
  uint64_t __t1561t__=0;
  uint64_t n=0;
  uint64_t __t1562t__=0;
  uint64_t __t1563t__=0;
  char* __t1564t__unsafe_ptr=0;
  uint64_t __t1564t__dat__pos=0;
  uint64_t __t1564t__dat__length=0;
  char __t1564t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1565t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1268t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1557t__unsafe_ptr,&__t1557t__dat__pos,&__t1557t__dat__length,&__t1557t__dat__first);
  stack__unsafe_ptr=__t1557t__unsafe_ptr;
  stack__dat__pos=__t1557t__dat__pos;
  stack__dat__length=__t1557t__dat__length;
  stack__dat__first=__t1557t__dat__first;
  __t_errcode=str__t1291t(_needle,&__t1558t__unsafe_ptr,&__t1558t__dat__pos,&__t1558t__dat__length,&__t1558t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1558t__unsafe_ptr;
  needle__dat__pos=__t1558t__dat__pos;
  needle__dat__length=__t1558t__dat__length;
  needle__dat__first=__t1558t__dat__first;
  lt__t265t(stack__dat__length,needle__dat__length,&__t1559t__);
  if(__t1559t__){
  __t1560t=0;
  goto __t_return;
  }
  len__t1300t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1561t__);
  n=__t1561t__;
  len__t1300t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1562t__);
  __t_errcode=sub__t365t(n,__t1562t__,&__t1563t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1476t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1563t__,n,&__t1564t__unsafe_ptr,&__t1564t__dat__pos,&__t1564t__dat__length,&__t1564t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1564t__unsafe_ptr;
  ret__dat__pos=__t1564t__dat__pos;
  ret__dat__length=__t1564t__dat__length;
  ret__dat__first=__t1564t__dat__first;
  eq__t1387t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1565t__);
  __t1560t=__t1565t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3911t=__t1560t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1384t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3912t) {
  uint64_t __t1385t__=0;
  add__t188t(s__dat__pos,s__dat__length,&__t1385t__);
  goto __t_return;
  __t_return:
  *__t3912t=__t1385t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t3913t) {
  int value=0;
  *__t3913t=value;
}

static inline __attribute__((always_inline)) void not__t52t(int __t_anon0, int* __t3914t) {
  int __t53t__=0;
  true__t15t(&__t53t__);
  goto __t_return;
  __t_return:
  *__t3914t=__t53t__;
}

static inline __attribute__((always_inline)) int str__t1243t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t length, char** __t3915t, uint64_t* __t3916t, uint64_t* __t3917t, char* __t3918t) {
  int __t1244t=0;
  int __t1245t=0;
  int __t1246t__=0;
  uint64_t __t1247t__=0;
  char __t1248t__=0;
  uint64_t __t1249t=0;
  uint64_t __t1250t=0;
  char* __t1252t__=0;
  char __t1253t__value=0;
  char* __t1254t__unsafe_ptr=0;
  uint64_t __t1254t__dat__pos=0;
  uint64_t __t1254t__dat__length=0;
  char __t1254t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t52t(__t1245t,&__t1246t__);
  len__t1016t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1247t__);
  gt__t289t(length,__t1247t__,&__t1248t__);
  if(__t1248t__){
  __t_errcode=20;
  goto __t_failure;
  }
  __t1249t=0;
  __t1250t=0;
  __t_errcode=get__t1009t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1250t,&__t1252t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1252t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1253t__value,__t1252t__,1);
  __t_errcode=str__t1235t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1249t,length,__t1253t__value,&__t1254t__unsafe_ptr,&__t1254t__dat__pos,&__t1254t__dat__length,&__t1254t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3915t=__t1254t__unsafe_ptr;
  *__t3916t=__t1254t__dat__pos;
  *__t3917t=__t1254t__dat__length;
  *__t3918t=__t1254t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t390t(const char* value, const char** __t3919t, const char** __t3920t) {
  const char* __t392t=0;
  __t392t=__t391t;
  goto __t_return;
  __t_return:
  *__t3919t=value;
  *__t3920t=__t392t;
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

static inline __attribute__((always_inline)) void print_marker__t3593t(char colors__initialized) {
  const char* __t3595t__value=0;
  const char* __t3595t____t392t=0;
  int __t3597t=0;
  int __t3598t=0;
  char __t3599t=0;
  char __t3600t=0;
  const char* __t3604t__value=0;
  const char* __t3604t____t392t=0;
  const char* __t3608t__value=0;
  const char* __t3608t____t392t=0;
  nn__t390t(__t3557t,&__t3595t__value,&__t3595t____t392t);
  print__t399t(__t3595t__value,__t3595t____t392t);
  __t3600t=1;
  if(__t3601t!=__t3601t){
  __t3600t=0;
  }
  if(__t3600t){
  __t3599t=1;
  }
  if(__t3599t){
  set__t443t(colors__initialized);
  nn__t390t(__t2220t,&__t3604t__value,&__t3604t____t392t);
  print__t399t(__t3604t__value,__t3604t____t392t);
  }
  set__t555t(colors__initialized);
  nn__t390t(__t3572t,&__t3608t__value,&__t3608t____t392t);
  print__t399t(__t3608t__value,__t3608t____t392t);
}

static inline __attribute__((always_inline)) void nn__t1680t(char* value__unsafe_ptr, uint64_t value__dat__pos, uint64_t value__dat__length, char value__dat__first, char** __t3921t, uint64_t* __t3922t, uint64_t* __t3923t, char* __t3924t, const char** __t3925t) {
  const char* __t1681t=0;
  __t1681t=__t391t;
  goto __t_return;
  __t_return:
  *__t3921t=value__unsafe_ptr;
  *__t3922t=value__dat__pos;
  *__t3923t=value__dat__length;
  *__t3924t=value__dat__first;
  *__t3925t=__t1681t;
}

static inline __attribute__((always_inline)) void print__t1449t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, const char* endl) {
  int __t1450t=0;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t389t() {
  fflush(stdout);
}

static inline __attribute__((always_inline)) void popen__t2720t(const char* cmd, char** __t3926t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t3926t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2719t(char* unsafe_ptr, int64_t* __t3927t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t3927t=status;
}

static inline __attribute__((always_inline)) void int__t592t(uint64_t x, int64_t* __t3928t) {
  int __t593t=0;
  int __t594t=0;
  int __t595t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t3928t=z;
}

static inline __attribute__((always_inline)) void is_different__t96t(int64_t x, int64_t y, int* __t3929t) {
  int __t97t=0;
  int __t98t__=0;
  not__t50t(__t97t,&__t98t__);
  goto __t_return;
  __t_return:
  *__t3929t=__t98t__;
}

static inline __attribute__((always_inline)) void neq__t146t(int64_t x, int64_t y, char* __t3930t) {
  int __t147t__=0;
  char z=0;
  is_different__t96t(x,y,&__t147t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3930t=z;
}

static inline __attribute__((always_inline)) int open__t2721t(const char* cmd, char** __t3931t) {
  char* __t2722t__=0;
  char* unsafe_ptr=0;
  char __t2723t__=0;
  char __t2724t__=0;
  char __t2725t__=0;
  int64_t __t2726t__=0;
  int64_t status=0;
  uint64_t __t2727t=0;
  int64_t __t2728t__=0;
  char __t2729t__=0;
  char __t2730t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2720t(cmd,&__t2722t__);
  unsafe_ptr=__t2722t__;
  exists__t612t(unsafe_ptr,&__t2723t__);
  not__t41t(__t2723t__,&__t2724t__);
  if(__t2724t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t612t(unsafe_ptr,&__t2725t__);
  if(__t2725t__){
  pclose__t2719t(unsafe_ptr,&__t2726t__);
  status=__t2726t__;
  unsafe_ptr=0;
  __t2727t=0;
  int__t592t(__t2727t,&__t2728t__);
  neq__t146t(status,__t2728t__,&__t2729t__);
  if(__t2729t__){
  __t_complain=37;
  goto __t2730t__label;
  __t2730t__label:__t2730t=__t2730t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3931t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2732t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t3932t) {
  const char* __t2733t__cstr=0;
  char* __t2733t__str__unsafe_ptr=0;
  uint64_t __t2733t__str__dat__pos=0;
  uint64_t __t2733t__str__dat__length=0;
  char __t2733t__str__dat__first=0;
  char __t2734t____t1376t____t1355t____t806t__=0;
  const char* __t2735t__=0;
  char* __t2736t__unsafe_ptr=0;
  char __t2737t____t2725t__=0;
  int64_t __t2737t____t2726t__=0;
  int64_t __t2737t__status=0;
  uint64_t __t2737t____t2727t=0;
  int64_t __t2737t____t2728t__=0;
  char __t2737t____t2729t__=0;
  char __t2737t____t2730t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1372t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2733t__cstr,&__t2733t__str__unsafe_ptr,&__t2733t__str__dat__pos,&__t2733t__str__dat__length,&__t2733t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1382t(__t2733t__cstr,__t2733t__str__unsafe_ptr,__t2733t__str__dat__pos,__t2733t__str__dat__length,__t2733t__str__dat__first,&__t2735t__);
  __t_errcode=open__t2721t(__t2735t__,&__t2736t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t612t(__t2736t__unsafe_ptr,&__t2737t____t2725t__);
  if(__t2737t____t2725t__){
  pclose__t2719t(__t2736t__unsafe_ptr,&__t2737t____t2726t__);
  __t2737t__status=__t2737t____t2726t__;
  __t2736t__unsafe_ptr=0;
  __t2737t____t2727t=0;
  int__t592t(__t2737t____t2727t,&__t2737t____t2728t__);
  neq__t146t(__t2737t__status,__t2737t____t2728t__,&__t2737t____t2729t__);
  if(__t2737t____t2729t__){
  __t_complain=37;
  goto __t2730t__label;
  __t2730t__label:__t2737t____t2730t=__t2737t____t2730t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3932t=__t2736t__unsafe_ptr;
  
  __t_skip_returns:exists__t612t(__t2733t__str__unsafe_ptr,&__t2734t____t1376t____t1355t____t806t__);
  if(__t2734t____t1376t____t1355t____t806t__){
  free__t682t(&__t2733t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2694t(int64_t value, const char** __t3933t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t3933t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t3934t) {
  const char* value=0;
  *__t3934t=value;
}

static inline __attribute__((always_inline)) int run__t3539t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t3935t) {
  char* __t3540t__unsafe_ptr=0;
  char __t3541t____t2737t____t2725t__=0;
  int64_t __t3541t____t2737t____t2726t__=0;
  int64_t __t3541t____t2737t__status=0;
  uint64_t __t3541t____t2737t____t2727t=0;
  int64_t __t3541t____t2737t____t2728t__=0;
  char __t3541t____t2737t____t2729t__=0;
  char __t3541t____t2737t____t2730t=0;
  char* proc__unsafe_ptr=0;
  char __t3542t=0;
  int64_t __t3543t=0;
  int64_t error=0;
  const char* __t3544t__=0;
  const char* __t3545t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2732t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3540t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t3540t__unsafe_ptr;
  exists__t612t(__t3540t__unsafe_ptr,&__t3541t____t2737t____t2725t__);
  if(__t3541t____t2737t____t2725t__){
  pclose__t2719t(__t3540t__unsafe_ptr,&__t3541t____t2737t____t2726t__);
  __t3541t____t2737t__status=__t3541t____t2737t____t2726t__;
  __t3540t__unsafe_ptr=0;
  __t3541t____t2737t____t2727t=0;
  int__t592t(__t3541t____t2737t____t2727t,&__t3541t____t2737t____t2728t__);
  neq__t146t(__t3541t____t2737t__status,__t3541t____t2737t____t2728t__,&__t3541t____t2737t____t2729t__);
  if(__t3541t____t2737t____t2729t__){
  __t_complain=37;
  goto __t2730t__label;
  __t2730t__label:__t3541t____t2737t____t2730t=__t3541t____t2737t____t2730t==0;
  }
  }
  __t3543t=__t_complain;
  __t3542t=(__t_complain==0);
  __t_complain=0;
  error=__t3543t;
  __t3542t__label:__t3542t=__t3542t==0;
  if(__t3542t){
  cstr__t2694t(error,&__t3544t__);
  goto __t_return;
  }
  cstr__t1t(&__t3545t__);
  __t3544t__=__t3545t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3935t=__t3544t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void exists__t1229t(const char* c, char* __t3936t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t3936t=z;
}

static inline __attribute__((always_inline)) void set__t435t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3575t(char colors__initialized) {
  const char* __t3577t__value=0;
  const char* __t3577t____t392t=0;
  int __t3579t=0;
  char __t3580t=0;
  char __t3581t=0;
  const char* __t3586t__value=0;
  const char* __t3586t____t392t=0;
  int __t3588t=0;
  const char* __t3591t__value=0;
  const char* __t3591t____t392t=0;
  nn__t390t(__t3557t,&__t3577t__value,&__t3577t____t392t);
  print__t399t(__t3577t__value,__t3577t____t392t);
  __t3581t=1;
  if(__t3582t!=__t3582t){
  __t3581t=0;
  }
  if(__t3581t){
  __t3580t=1;
  }
  if(__t3580t){
  set__t435t(colors__initialized);
  nn__t390t(__t3585t,&__t3586t__value,&__t3586t____t392t);
  print__t399t(__t3586t__value,__t3586t____t392t);
  }
  set__t555t(colors__initialized);
  nn__t390t(__t3572t,&__t3591t__value,&__t3591t____t392t);
  print__t399t(__t3591t__value,__t3591t____t392t);
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

static inline __attribute__((always_inline)) void print_marker__t3555t(char colors__initialized) {
  const char* __t3558t__value=0;
  const char* __t3558t____t392t=0;
  char __t3560t=0;
  char __t3561t=0;
  const char* __t3566t__value=0;
  const char* __t3566t____t392t=0;
  int __t3568t=0;
  int __t3569t=0;
  const char* __t3573t__value=0;
  const char* __t3573t____t392t=0;
  nn__t390t(__t3557t,&__t3558t__value,&__t3558t____t392t);
  print__t399t(__t3558t__value,__t3558t____t392t);
  __t3561t=1;
  if(__t3562t!=__t3562t){
  __t3561t=0;
  }
  if(__t3561t){
  __t3560t=1;
  }
  if(__t3560t){
  set__t439t(colors__initialized);
  nn__t390t(__t3565t,&__t3566t__value,&__t3566t____t392t);
  print__t399t(__t3566t__value,__t3566t____t392t);
  }
  set__t555t(colors__initialized);
  nn__t390t(__t3572t,&__t3573t__value,&__t3573t____t392t);
  print__t399t(__t3573t__value,__t3573t____t392t);
}

static inline __attribute__((always_inline)) int test__t3610t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char* __t3937t) {
  char* __t3614t__value__unsafe_ptr=0;
  uint64_t __t3614t__value__dat__pos=0;
  uint64_t __t3614t__value__dat__length=0;
  char __t3614t__value__dat__first=0;
  const char* __t3614t____t1681t=0;
  const char* __t3618t__=0;
  const char* error=0;
  const char* __t3620t__value=0;
  const char* __t3620t____t392t=0;
  char __t3622t__=0;
  const char* __t3627t__value=0;
  const char* __t3627t____t392t=0;
  char __t3630t=0;
  char __t3634t=0;
  int __t_errcode=0;
  int __t_complain=0;
  print_marker__t3593t(colors__initialized);
  nn__t1680t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3614t__value__unsafe_ptr,&__t3614t__value__dat__pos,&__t3614t__value__dat__length,&__t3614t__value__dat__first,&__t3614t____t1681t);
  print__t1449t(__t3614t__value__unsafe_ptr,__t3614t__value__dat__pos,__t3614t__value__dat__length,__t3614t__value__dat__first,__t3614t____t1681t);
  print__t389t();
  __t_errcode=run__t3539t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3618t__);
  if(__t_errcode){
  goto __t_failure;
  }
  error=__t3618t__;
  nn__t390t(__t3619t,&__t3620t__value,&__t3620t____t392t);
  print__t399t(__t3620t__value,__t3620t____t392t);
  exists__t1229t(error,&__t3622t__);
  if(__t3622t__){
  print_marker__t3575t(colors__initialized);
  print__t401t(__t391t);
  nn__t390t(__t3626t,&__t3627t__value,&__t3627t____t392t);
  print__t399t(__t3627t__value,__t3627t____t392t);
  print__t401t(error);
  __t3630t=0;
  goto __t_return;
  }
  print_marker__t3555t(colors__initialized);
  print__t401t(__t391t);
  __t3634t=1;
  __t3630t=__t3634t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3937t=__t3630t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t412t(uint64_t value, const char* endl) {
  int __t413t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t397t(uint64_t value, uint64_t* __t3938t, const char** __t3939t) {
  const char* __t398t=0;
  __t398t=__t391t;
  goto __t_return;
  __t_return:
  *__t3938t=value;
  *__t3939t=__t398t;
}

static inline __attribute__((always_inline)) int main__t3635t() {
  char* __t3637t__unsafe_ptr=0;
  uint64_t __t3637t__dat__pos=0;
  uint64_t __t3637t__dat__length=0;
  char __t3637t__dat__first=0;
  char* root__unsafe_ptr=0;
  uint64_t root__dat__pos=0;
  uint64_t root__dat__length=0;
  char root__dat__first=0;
  char __t3640t__initialized=0;
  char colors__initialized=0;
  uint64_t __t3642t=0;
  uint64_t __t3643t=0;
  uint64_t counter=0;
  uint64_t __t3644t=0;
  uint64_t __t3645t=0;
  uint64_t failures=0;
  uint64_t __t3646t=0;
  char* __t3647t__unsafe_ptr=0;
  char __t3649t=0;
  char* __t3650t__unsafe_ptr=0;
  uint64_t __t3650t__dat__pos=0;
  uint64_t __t3650t__dat__length=0;
  char __t3650t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t3652t__=0;
  char __t3653t__=0;
  char __t3654t__=0;
  char __t3655t=0;
  char __t3656t__=0;
  char* __t3659t__unsafe_ptr=0;
  uint64_t __t3659t__unsafe_size=0;
  uint32_t __t3659t__unsafe_offset=0;
  uint32_t __t3659t__unsafe_align=0;
  uint64_t __t3660t=0;
  char* __t3661t__unsafe_ptr=0;
  uint64_t __t3661t__unsafe_size=0;
  uint32_t __t3661t__unsafe_offset=0;
  uint32_t __t3661t__unsafe_align=0;
  char __t3662t____t806t__=0;
  char* __t3663t__buf__unsafe_ptr=0;
  uint64_t __t3663t__buf__unsafe_size=0;
  uint32_t __t3663t__buf__unsafe_offset=0;
  uint32_t __t3663t__buf__unsafe_align=0;
  uint64_t __t3663t__pos=0;
  char* __t3664t__buf__unsafe_ptr=0;
  uint64_t __t3664t__buf__unsafe_size=0;
  uint32_t __t3664t__buf__unsafe_offset=0;
  uint32_t __t3664t__buf__unsafe_align=0;
  uint64_t __t3664t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t3666t__unsafe_ptr=0;
  uint64_t __t3666t__dat__pos=0;
  uint64_t __t3666t__dat__length=0;
  char __t3666t__dat__first=0;
  uint64_t allocator_pos=0;
  char* __t3667t__unsafe_ptr=0;
  uint64_t __t3667t__dat__pos=0;
  uint64_t __t3667t__dat__length=0;
  char __t3667t__dat__first=0;
  char* __t3669t__unsafe_ptr=0;
  uint64_t __t3669t__dat__pos=0;
  uint64_t __t3669t__dat__length=0;
  char __t3669t__dat__first=0;
  char* __t3670t____t1032t__unsafe_ptr=0;
  uint64_t __t3670t____t1032t__unsafe_size=0;
  uint32_t __t3670t____t1032t__unsafe_offset=0;
  uint32_t __t3670t____t1032t__unsafe_align=0;
  uint64_t __t3670t____t1033t=0;
  char* __t3672t__unsafe_ptr=0;
  uint64_t __t3672t__dat__pos=0;
  uint64_t __t3672t__dat__length=0;
  char __t3672t__dat__first=0;
  char* __t3673t__unsafe_ptr=0;
  char* __t3675t__unsafe_ptr=0;
  char* dir__unsafe_ptr=0;
  uint64_t __t3676t=0;
  char __t3677t=0;
  char* __t3678t__unsafe_ptr=0;
  uint64_t __t3678t__dat__pos=0;
  uint64_t __t3678t__dat__length=0;
  char __t3678t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t3680t__=0;
  char __t3681t__=0;
  uint64_t __t3682t=0;
  uint64_t __t3683t__=0;
  char* __t3684t__buf__unsafe_ptr=0;
  uint64_t __t3684t__buf__unsafe_size=0;
  uint32_t __t3684t__buf__unsafe_offset=0;
  uint32_t __t3684t__buf__unsafe_align=0;
  uint64_t __t3684t__pos=0;
  char* __t3685t__unsafe_ptr=0;
  uint64_t __t3685t__dat__pos=0;
  uint64_t __t3685t__dat__length=0;
  char __t3685t__dat__first=0;
  char* __t3686t__unsafe_ptr=0;
  uint64_t __t3686t__dat__pos=0;
  uint64_t __t3686t__dat__length=0;
  char __t3686t__dat__first=0;
  uint64_t __t3687t__=0;
  char* __t3688t__unsafe_ptr=0;
  uint64_t __t3688t__dat__pos=0;
  uint64_t __t3688t__dat__length=0;
  char __t3688t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  char __t3689t__=0;
  char __t3690t__=0;
  uint64_t __t3691t=0;
  uint64_t __t3692t__=0;
  uint64_t __t3693t=0;
  char __t3694t__=0;
  const char* __t3708t__value=0;
  const char* __t3708t____t392t=0;
  const char* __t3698t__value=0;
  const char* __t3698t____t392t=0;
  const char* __t3703t__value=0;
  const char* __t3703t____t392t=0;
  uint64_t __t3714t__value=0;
  const char* __t3714t____t398t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1291t(__t3636t,&__t3637t__unsafe_ptr,&__t3637t__dat__pos,&__t3637t__dat__length,&__t3637t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  root__unsafe_ptr=__t3637t__unsafe_ptr;
  root__dat__pos=__t3637t__dat__pos;
  root__dat__length=__t3637t__dat__length;
  root__dat__first=__t3637t__dat__first;
  console__t379t();
  colors__t429t(&__t3640t__initialized);
  colors__initialized=__t3640t__initialized;
  __t3642t=0;
  __t3643t=__t3642t;
  counter=__t3643t;
  __t3644t=0;
  __t3645t=__t3644t;
  failures=__t3645t;
  __t_errcode=open__t3415t(root__unsafe_ptr,root__dat__pos,root__dat__length,root__dat__first,&__t3647t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3646t=0-1;
  while(1){
  __t3646t=__t3646t+1;
  __t_complain=get__t3498t(&__t3647t__unsafe_ptr,__t3646t,&__t3650t__unsafe_ptr,&__t3650t__dat__pos,&__t3650t__dat__length,&__t3650t__dat__first);
  __t3649t=__t_complain;
  if(__t_complain){
  goto __t3649t__label;
  }
  path__unsafe_ptr=__t3650t__unsafe_ptr;
  path__dat__pos=__t3650t__dat__pos;
  path__dat__length=__t3650t__dat__length;
  path__dat__first=__t3650t__dat__first;
  __t3649t__label:__t3649t=__t3649t==0;
  if(!__t3649t){
  break;
  }
  __t_errcode=eq__t1394t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t3651t,&__t3652t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3652t__){
  __t_errcode=is_dir__t3342t(root__unsafe_ptr,root__dat__pos,root__dat__length,root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t3653t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3653t__,&__t3654t__);
  __t3655t=__t3654t__;
  }
  else{
  __t3655t=0;
  not__t41t(__t3655t,&__t3656t__);
  __t3655t=__t3656t__;
  }
  if(__t3655t){
  continue;
  }
  char____t_buffer____buffer__t3657t(&__t3659t__unsafe_ptr,&__t3659t__unsafe_size,&__t3659t__unsafe_offset,&__t3659t__unsafe_align);
  __t3660t=256;
  __t_errcode=alloc__t804t(&__t3659t__unsafe_ptr,&__t3659t__unsafe_size,&__t3659t__unsafe_offset,&__t3659t__unsafe_align,__t3660t,&__t3661t__unsafe_ptr,&__t3661t__unsafe_size,&__t3661t__unsafe_offset,&__t3661t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1024t(&__t3661t__unsafe_ptr,&__t3661t__unsafe_size,&__t3661t__unsafe_offset,&__t3661t__unsafe_align,&__t3663t__buf__unsafe_ptr,&__t3663t__buf__unsafe_size,&__t3663t__buf__unsafe_offset,&__t3663t__buf__unsafe_align,&__t3663t__pos);
  __t3664t__buf__unsafe_ptr=__t3663t__buf__unsafe_ptr;
  __t3664t__buf__unsafe_size=__t3663t__buf__unsafe_size;
  __t3664t__buf__unsafe_offset=__t3663t__buf__unsafe_offset;
  __t3664t__buf__unsafe_align=__t3663t__buf__unsafe_align;
  __t3664t__pos=__t3663t__pos;
  CHARS__buf__unsafe_ptr=__t3664t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t3664t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t3664t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t3664t__buf__unsafe_align;
  CHARS__pos=__t3664t__pos;
  __t_errcode=copy__t1322t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3665t,&__t3666t__unsafe_ptr,&__t3666t__dat__pos,&__t3666t__dat__length,&__t3666t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  allocator_pos=CHARS__pos;
  __t_errcode=add__t1896t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,root__unsafe_ptr,root__dat__pos,root__dat__length,root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t3667t__unsafe_ptr,&__t3667t__dat__pos,&__t3667t__dat__length,&__t3667t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1940t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3667t__unsafe_ptr,__t3667t__dat__pos,__t3667t__dat__length,__t3667t__dat__first,__t3668t,&__t3669t__unsafe_ptr,&__t3669t__dat__pos,&__t3669t__dat__length,&__t3669t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1031t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,CHARS__pos,&__t3670t____t1032t__unsafe_ptr,&__t3670t____t1032t__unsafe_size,&__t3670t____t1032t__unsafe_offset,&__t3670t____t1032t__unsafe_align,&__t3670t____t1033t);
  __t_errcode=str__t1287t(__t3670t____t1032t__unsafe_ptr,__t3670t____t1032t__unsafe_size,__t3670t____t1032t__unsafe_offset,__t3670t____t1032t__unsafe_align,__t3670t____t1033t,allocator_pos,&__t3672t__unsafe_ptr,&__t3672t__dat__pos,&__t3672t__dat__length,&__t3672t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t3415t(__t3672t__unsafe_ptr,__t3672t__dat__pos,__t3672t__dat__length,__t3672t__dat__first,&__t3673t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3675t__unsafe_ptr=__t3673t__unsafe_ptr;
  dir__unsafe_ptr=__t3675t__unsafe_ptr;
  __t3676t=0-1;
  while(1){
  __t3676t=__t3676t+1;
  __t_complain=get__t3498t(&dir__unsafe_ptr,__t3676t,&__t3678t__unsafe_ptr,&__t3678t__dat__pos,&__t3678t__dat__length,&__t3678t__dat__first);
  __t3677t=__t_complain;
  if(__t_complain){
  goto __t3677t__label;
  }
  entry__unsafe_ptr=__t3678t__unsafe_ptr;
  entry__dat__pos=__t3678t__dat__pos;
  entry__dat__length=__t3678t__dat__length;
  entry__dat__first=__t3678t__dat__first;
  __t3677t__label:__t3677t=__t3677t==0;
  if(!__t3677t){
  break;
  }
  __t_errcode=ends_with__t1556t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t3679t,&__t3680t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3680t__,&__t3681t__);
  if(__t3681t__){
  continue;
  }
  __t3682t=1;
  add__t188t(counter,__t3682t,&__t3683t__);
  counter=__t3683t__;
  __t3684t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t3684t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t3684t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t3684t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t3684t__pos=CHARS__pos;
  str__t1268t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t3685t__unsafe_ptr,&__t3685t__dat__pos,&__t3685t__dat__length,&__t3685t__dat__first);
  __t_errcode=copy__t1317t(&__t3684t__buf__unsafe_ptr,&__t3684t__buf__unsafe_size,&__t3684t__buf__unsafe_offset,&__t3684t__buf__unsafe_align,&__t3684t__pos,__t3685t__unsafe_ptr,__t3685t__dat__pos,__t3685t__dat__length,__t3685t__dat__first,&__t3686t__unsafe_ptr,&__t3686t__dat__pos,&__t3686t__dat__length,&__t3686t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1384t(__t3686t__unsafe_ptr,__t3686t__dat__pos,__t3686t__dat__length,__t3686t__dat__first,&__t3687t__);
  __t_errcode=str__t1243t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t3687t__,&__t3688t__unsafe_ptr,&__t3688t__dat__pos,&__t3688t__dat__length,&__t3688t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t3688t__unsafe_ptr;
  command__dat__pos=__t3688t__dat__pos;
  command__dat__length=__t3688t__dat__length;
  command__dat__first=__t3688t__dat__first;
  __t_errcode=test__t3610t(colors__initialized,command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3689t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3689t__,&__t3690t__);
  if(__t3690t__){
  __t3691t=1;
  add__t188t(failures,__t3691t,&__t3692t__);
  failures=__t3692t__;
  }
  }
  exists__t612t(__t3661t__unsafe_ptr,&__t3662t____t806t__);
  if(__t3662t____t806t__){
  free__t682t(&__t3661t__unsafe_ptr);
  }
  closedir__t3405t(__t3673t__unsafe_ptr);
  }
  __t3693t=0;
  eq__t133t(failures,__t3693t,&__t3694t__);
  if(__t3694t__){
  set__t439t(colors__initialized);
  nn__t390t(__t3697t,&__t3698t__value,&__t3698t____t392t);
  print__t399t(__t3698t__value,__t3698t____t392t);
  set__t555t(colors__initialized);
  nn__t390t(__t3702t,&__t3703t__value,&__t3703t____t392t);
  print__t399t(__t3703t__value,__t3703t____t392t);
  }
  else{
  set__t435t(colors__initialized);
  nn__t390t(__t3707t,&__t3708t__value,&__t3708t____t392t);
  print__t399t(__t3708t__value,__t3708t____t392t);
  set__t555t(colors__initialized);
  print__t412t(failures,__t3712t);
  }
  nn__t397t(counter,&__t3714t__value,&__t3714t____t398t);
  print__t412t(__t3714t__value,__t3714t____t398t);
  print__t401t(__t3716t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t3405t(__t3647t__unsafe_ptr);
  if(__t3640t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t3635t();return 0;}