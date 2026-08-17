#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t3408t="FAILED ";
const char* const __t3381t="    ";
const char* const __t3310t="X";
const char* const __t3374t="\r";
const char* const __t3415t=" out of ";
const char* const __t3348t="./tests/passing/";
const char* const __t400t="\n";
const char* const __t3282t="[";
const char* const __t3287t="success";
const char* const __t3394t="SUCCESS ";
const char* const __t3307t="failure";
const char* const __t3290t="V";
const char* const __t3360t=".s";
const char* const __t3399t="no errors across ";
const char* const __t388t="";
const char* const __t1980t="+";
const char* const __t3297t="] ";
const char* const __t3404t=" tests";
const char* const __t3326t="pending";
const char* const __t3349t="./smoll --cleanup ";
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

static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t3338t(char** __t3421t, uint64_t* __t3422t, uint32_t* __t3423t, uint32_t* __t3424t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3421t=unsafe_ptr;
  *__t3422t=unsafe_size;
  *__t3423t=unsafe_offset;
  *__t3424t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t609t(char* x, char* __t3425t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3425t=z;
}

static inline __attribute__((always_inline)) void free__t679t(char** __t3426t) {
  char* allocated=*__t3426t;
  if(allocated){
  free(allocated);
  }
  *__t3426t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t3427t) {
  int value=0;
  *__t3427t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t3428t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t3428t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t3429t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t3429t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t3430t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3430t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t3431t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3431t=z;
}

static inline __attribute__((always_inline)) void nat__t684t(uint32_t x, uint64_t* __t3432t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3432t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t3433t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3433t=z;
}

static inline __attribute__((always_inline)) void zero__t680t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t3434t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3434t=z;
}

static inline __attribute__((always_inline)) int alloc__t672t(uint64_t bytes, char** __t3435t) {
  char* allocated=0;
  char __t673t__=0;
  char __t674t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t609t(allocated,&__t673t__);
  not__t41t(__t673t__,&__t674t__);
  if(__t674t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3435t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t801t(char** __t3436t, uint64_t* __t3437t, uint32_t* __t3438t, uint32_t* __t3439t, uint64_t size, char** __t3440t, uint64_t* __t3441t, uint32_t* __t3442t, uint32_t* __t3443t) {
  char* buffer__unsafe_ptr=*__t3436t;
  uint64_t buffer__unsafe_size=*__t3437t;
  uint32_t buffer__unsafe_offset=*__t3438t;
  uint32_t buffer__unsafe_align=*__t3439t;
  int __t802t=0;
  char __t803t__=0;
  char __t805t__=0;
  uint64_t __t806t=0;
  char __t807t__=0;
  char __t808t=0;
  uint64_t __t809t=0;
  uint64_t __t810t__=0;
  uint64_t __t811t__=0;
  int __t813t=0;
  uint64_t __t814t=0;
  char __t815t__=0;
  uint64_t __t816t__=0;
  uint64_t __t817t__=0;
  uint64_t bytes=0;
  int __t818t=0;
  uint64_t __t819t=0;
  char __t820t__=0;
  char* __t821t__=0;
  int __t822t=0;
  uint64_t __t823t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t805t__);
  if(__t805t__){
  __t806t=0;
  neq__t157t(size,__t806t,&__t807t__);
  __t808t=__t807t__;
  }
  if(__t808t){
  __t809t=0;
  nat__t684t(buffer__unsafe_align,&__t810t__);
  mul__t212t(__t810t__,size,&__t811t__);
  zero__t680t(buffer__unsafe_ptr,__t809t,__t811t__);
  goto __t_return;
  }
  __t814t=0;
  neq__t157t(buffer__unsafe_size,__t814t,&__t815t__);
  if(__t815t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t816t__);
  mul__t212t(__t816t__,size,&__t817t__);
  bytes=__t817t__;
  __t819t=0;
  eq__t133t(bytes,__t819t,&__t820t__);
  if(__t820t__){
  __t_errcode=12;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t672t(bytes,&__t821t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t823t=0;
  zero__t680t(__t821t__,__t823t,bytes);
  buffer__unsafe_ptr=__t821t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t609t(buffer__unsafe_ptr,&__t803t__);
  if(__t803t__){
  free__t679t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3436t=buffer__unsafe_ptr;
  *__t3437t=buffer__unsafe_size;
  *__t3438t=buffer__unsafe_offset;
  *__t3439t=buffer__unsafe_align;
  *__t3440t=buffer__unsafe_ptr;
  *__t3441t=buffer__unsafe_size;
  *__t3442t=buffer__unsafe_offset;
  *__t3443t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1018t(char** __t3444t, uint64_t* __t3445t, uint32_t* __t3446t, uint32_t* __t3447t, uint64_t _pos, char** __t3448t, uint64_t* __t3449t, uint32_t* __t3450t, uint32_t* __t3451t, uint64_t* __t3452t) {
  char* buf__unsafe_ptr=*__t3444t;
  uint64_t buf__unsafe_size=*__t3445t;
  uint32_t buf__unsafe_offset=*__t3446t;
  uint32_t buf__unsafe_align=*__t3447t;
  uint64_t __t1019t=0;
  uint64_t pos=0;
  __t1019t=_pos;
  pos=__t1019t;
  goto __t_return;
  __t_return:
  *__t3444t=buf__unsafe_ptr;
  *__t3445t=buf__unsafe_size;
  *__t3446t=buf__unsafe_offset;
  *__t3447t=buf__unsafe_align;
  *__t3448t=buf__unsafe_ptr;
  *__t3449t=buf__unsafe_size;
  *__t3450t=buf__unsafe_offset;
  *__t3451t=buf__unsafe_align;
  *__t3452t=pos;
}

static inline __attribute__((always_inline)) void arena__t1021t(char** __t3453t, uint64_t* __t3454t, uint32_t* __t3455t, uint32_t* __t3456t, char** __t3457t, uint64_t* __t3458t, uint32_t* __t3459t, uint32_t* __t3460t, uint64_t* __t3461t) {
  char* buf__unsafe_ptr=*__t3453t;
  uint64_t buf__unsafe_size=*__t3454t;
  uint32_t buf__unsafe_offset=*__t3455t;
  uint32_t buf__unsafe_align=*__t3456t;
  uint64_t __t1022t=0;
  char* __t1023t__buf__unsafe_ptr=0;
  uint64_t __t1023t__buf__unsafe_size=0;
  uint32_t __t1023t__buf__unsafe_offset=0;
  uint32_t __t1023t__buf__unsafe_align=0;
  uint64_t __t1023t__pos=0;
  __t1022t=0;
  arena__t1018t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1022t,&__t1023t__buf__unsafe_ptr,&__t1023t__buf__unsafe_size,&__t1023t__buf__unsafe_offset,&__t1023t__buf__unsafe_align,&__t1023t__pos);
  goto __t_return;
  __t_return:
  *__t3453t=buf__unsafe_ptr;
  *__t3454t=buf__unsafe_size;
  *__t3455t=buf__unsafe_offset;
  *__t3456t=buf__unsafe_align;
  *__t3457t=__t1023t__buf__unsafe_ptr;
  *__t3458t=__t1023t__buf__unsafe_size;
  *__t3459t=__t1023t__buf__unsafe_offset;
  *__t3460t=__t1023t__buf__unsafe_align;
  *__t3461t=__t1023t__pos;
}

static inline __attribute__((always_inline)) void supports_ansi__t425t(char* __t3462t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t3462t=supports;
}

static inline __attribute__((always_inline)) void colors__t426t(char* __t3463t) {
  char __t427t__=0;
  char initialized=0;
  supports_ansi__t425t(&__t427t__);
  initialized=__t427t__;
  goto __t_return;
  __t_return:
  *__t3463t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1154t(char** __t3464t, uint64_t* __t3465t, uint32_t* __t3466t, uint32_t* __t3467t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3464t=unsafe_ptr;
  *__t3465t=unsafe_size;
  *__t3466t=unsafe_offset;
  *__t3467t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t3468t) {
  *__t3468t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t3469t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3469t=z;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t3470t) {
  int __t338t__=0;
  char z=0;
  is_different__t108t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3470t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t3471t) {
  *__t3471t=to;
}

static inline __attribute__((always_inline)) void add__t681t(char* allocated, uint64_t offset, char** __t3472t) {
  char* element=0;
  char* __t682t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t682t__);
  goto __t_return;
  __t_return:
  *__t3472t=__t682t__;
}

static inline __attribute__((always_inline)) int get__t1006t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t3473t) {
  char __t1007t__=0;
  uint64_t __t1008t__=0;
  uint64_t __t1009t__=0;
  uint64_t __t1010t__=0;
  uint64_t __t1011t__=0;
  char* __t1012t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,buffer__unsafe_size,&__t1007t__);
  if(__t1007t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t1008t__);
  mul__t212t(i,__t1008t__,&__t1009t__);
  nat__t684t(buffer__unsafe_offset,&__t1010t__);
  add__t188t(__t1009t__,__t1010t__,&__t1011t__);
  add__t681t(buffer__unsafe_ptr,__t1011t__,&__t1012t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3473t=__t1012t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1176t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3474t, uint64_t* __t3475t, uint64_t* __t3476t, char* __t3477t) {
  goto __t_return;
  __t_return:
  *__t3474t=unsafe_ptr;
  *__t3475t=dat__pos;
  *__t3476t=dat__length;
  *__t3477t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1180t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3478t, uint64_t* __t3479t, uint64_t* __t3480t, char* __t3481t) {
  char* unsafe_ptr=0;
  uint64_t __t1181t__=0;
  uint64_t __t1182t=0;
  char __t1183t__=0;
  uint64_t __t1184t__=0;
  uint64_t __t1185t=0;
  char __t1186t__=0;
  char* __t1187t__unsafe_ptr=0;
  uint64_t __t1187t__dat__pos=0;
  uint64_t __t1187t__dat__length=0;
  char __t1187t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t684t(buf__unsafe_align,&__t1181t__);
  __t1182t=1;
  neq__t157t(__t1181t__,__t1182t,&__t1183t__);
  if(__t1183t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t684t(buf__unsafe_offset,&__t1184t__);
  __t1185t=0;
  neq__t157t(__t1184t__,__t1185t,&__t1186t__);
  if(__t1186t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t1176t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1187t__unsafe_ptr,&__t1187t__dat__pos,&__t1187t__dat__length,&__t1187t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3478t=__t1187t__unsafe_ptr;
  *__t3479t=__t1187t__dat__pos;
  *__t3480t=__t1187t__dat__length;
  *__t3481t=__t1187t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1214t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t3482t, uint64_t* __t3483t, uint64_t* __t3484t, char* __t3485t) {
  uint64_t __t1215t=0;
  char __t1216t__=0;
  char* __t1218t__=0;
  char __t1219t__value=0;
  char first=0;
  char* __t1220t__unsafe_ptr=0;
  uint64_t __t1220t__dat__pos=0;
  uint64_t __t1220t__dat__length=0;
  char __t1220t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1215t=0;
  neq__t157t(length,__t1215t,&__t1216t__);
  if(__t1216t__){
  __t_errcode=get__t1006t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1218t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1218t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1219t__value,__t1218t__,1);
  first=__t1219t__value;
  }
  __t_errcode=str__t1180t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1220t__unsafe_ptr,&__t1220t__dat__pos,&__t1220t__dat__length,&__t1220t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3482t=__t1220t__unsafe_ptr;
  *__t3483t=__t1220t__dat__pos;
  *__t3484t=__t1220t__dat__length;
  *__t3485t=__t1220t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1236t(const char* c, char** __t3486t, uint64_t* __t3487t, uint64_t* __t3488t, char* __t3489t) {
  char* __t1237t__unsafe_ptr=0;
  uint64_t __t1237t__unsafe_size=0;
  uint32_t __t1237t__unsafe_offset=0;
  uint32_t __t1237t__unsafe_align=0;
  char* __t1238t__unsafe_ptr=0;
  uint64_t __t1238t__unsafe_size=0;
  uint32_t __t1238t__unsafe_offset=0;
  uint32_t __t1238t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1239t__=0;
  uint64_t length=0;
  uint64_t __t1240t=0;
  uint64_t __t1241t__=0;
  uint64_t __t1242t=0;
  char* __t1244t__unsafe_ptr=0;
  uint64_t __t1244t__dat__pos=0;
  uint64_t __t1244t__dat__length=0;
  char __t1244t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1154t(&__t1237t__unsafe_ptr,&__t1237t__unsafe_size,&__t1237t__unsafe_offset,&__t1237t__unsafe_align);
  __t1238t__unsafe_ptr=__t1237t__unsafe_ptr;
  __t1238t__unsafe_size=__t1237t__unsafe_size;
  __t1238t__unsafe_offset=__t1237t__unsafe_offset;
  __t1238t__unsafe_align=__t1237t__unsafe_align;
  buf__unsafe_ptr=__t1238t__unsafe_ptr;
  buf__unsafe_size=__t1238t__unsafe_size;
  buf__unsafe_offset=__t1238t__unsafe_offset;
  buf__unsafe_align=__t1238t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1239t__);
  buf__unsafe_ptr=__t1239t__;
  if(c){
  length=strlen(c);
  }
  __t1240t=1;
  add__t188t(length,__t1240t,&__t1241t__);
  buf__unsafe_size=__t1241t__;
  __t1242t=0;
  __t_errcode=str__t1214t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1242t,length,&__t1244t__unsafe_ptr,&__t1244t__dat__pos,&__t1244t__dat__length,&__t1244t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3486t=__t1244t__unsafe_ptr;
  *__t3487t=__t1244t__dat__pos;
  *__t3488t=__t1244t__dat__length;
  *__t3489t=__t1244t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1245t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3490t) {
  goto __t_return;
  __t_return:
  *__t3490t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t1013t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t3491t) {
  goto __t_return;
  __t_return:
  *__t3491t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t3492t) {
  int __t290t__=0;
  char z=0;
  is_different__t108t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t3492t=z;
}

static inline __attribute__((always_inline)) void allocated__t1026t(char** __t3493t, uint64_t* __t3494t, uint32_t* __t3495t, uint32_t* __t3496t, uint64_t pos, char** __t3497t, uint64_t* __t3498t, uint32_t* __t3499t, uint32_t* __t3500t, uint64_t* __t3501t) {
  char* buf__unsafe_ptr=*__t3493t;
  uint64_t buf__unsafe_size=*__t3494t;
  uint32_t buf__unsafe_offset=*__t3495t;
  uint32_t buf__unsafe_align=*__t3496t;
  goto __t_return;
  __t_return:
  *__t3493t=buf__unsafe_ptr;
  *__t3494t=buf__unsafe_size;
  *__t3495t=buf__unsafe_offset;
  *__t3496t=buf__unsafe_align;
  *__t3497t=buf__unsafe_ptr;
  *__t3498t=buf__unsafe_size;
  *__t3499t=buf__unsafe_offset;
  *__t3500t=buf__unsafe_align;
  *__t3501t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1066t(char** __t3502t, uint64_t* __t3503t, uint32_t* __t3504t, uint32_t* __t3505t, uint64_t* __t3506t, uint64_t length, char** __t3507t, uint64_t* __t3508t, uint32_t* __t3509t, uint32_t* __t3510t, uint64_t* __t3511t) {
  char* allocator__buf__unsafe_ptr=*__t3502t;
  uint64_t allocator__buf__unsafe_size=*__t3503t;
  uint32_t allocator__buf__unsafe_offset=*__t3504t;
  uint32_t allocator__buf__unsafe_align=*__t3505t;
  uint64_t allocator__pos=*__t3506t;
  int __t1067t=0;
  uint64_t __t1068t__=0;
  uint64_t next_pos=0;
  uint64_t __t1069t__=0;
  char __t1070t__=0;
  uint64_t __t1071t=0;
  uint64_t __t1072t__=0;
  uint64_t pos=0;
  char* __t1073t__buf__unsafe_ptr=0;
  uint64_t __t1073t__buf__unsafe_size=0;
  uint32_t __t1073t__buf__unsafe_offset=0;
  uint32_t __t1073t__buf__unsafe_align=0;
  uint64_t __t1073t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1068t__);
  next_pos=__t1068t__;
  len__t1013t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1069t__);
  gt__t289t(next_pos,__t1069t__,&__t1070t__);
  if(__t1070t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t1071t=0;
  add__t188t(allocator__pos,__t1071t,&__t1072t__);
  pos=__t1072t__;
  allocator__pos=next_pos;
  allocated__t1026t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1073t__buf__unsafe_ptr,&__t1073t__buf__unsafe_size,&__t1073t__buf__unsafe_offset,&__t1073t__buf__unsafe_align,&__t1073t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3502t=allocator__buf__unsafe_ptr;
  *__t3503t=allocator__buf__unsafe_size;
  *__t3504t=allocator__buf__unsafe_offset;
  *__t3505t=allocator__buf__unsafe_align;
  *__t3506t=allocator__pos;
  *__t3507t=__t1073t__buf__unsafe_ptr;
  *__t3508t=__t1073t__buf__unsafe_size;
  *__t3509t=__t1073t__buf__unsafe_offset;
  *__t3510t=__t1073t__buf__unsafe_align;
  *__t3511t=__t1073t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1267t(char** __t3512t, uint64_t* __t3513t, uint32_t* __t3514t, uint32_t* __t3515t, uint64_t* __t3516t, const char* _other, char** __t3517t, uint64_t* __t3518t, uint64_t* __t3519t, char* __t3520t) {
  char* CHARS__buf__unsafe_ptr=*__t3512t;
  uint64_t CHARS__buf__unsafe_size=*__t3513t;
  uint32_t CHARS__buf__unsafe_offset=*__t3514t;
  uint32_t CHARS__buf__unsafe_align=*__t3515t;
  uint64_t CHARS__pos=*__t3516t;
  char* __t1268t__unsafe_ptr=0;
  uint64_t __t1268t__dat__pos=0;
  uint64_t __t1268t__dat__length=0;
  char __t1268t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1269t__=0;
  char* __t1270t__buf__unsafe_ptr=0;
  uint64_t __t1270t__buf__unsafe_size=0;
  uint32_t __t1270t__buf__unsafe_offset=0;
  uint32_t __t1270t__buf__unsafe_align=0;
  uint64_t __t1270t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1271t__unsafe_ptr=0;
  uint64_t __t1271t__dat__pos=0;
  uint64_t __t1271t__dat__length=0;
  char __t1271t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1236t(_other,&__t1268t__unsafe_ptr,&__t1268t__dat__pos,&__t1268t__dat__length,&__t1268t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1268t__unsafe_ptr;
  other__dat__pos=__t1268t__dat__pos;
  other__dat__length=__t1268t__dat__length;
  other__dat__first=__t1268t__dat__first;
  len__t1245t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1269t__);
  __t_errcode=alloc__t1066t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1269t__,&__t1270t__buf__unsafe_ptr,&__t1270t__buf__unsafe_size,&__t1270t__buf__unsafe_offset,&__t1270t__buf__unsafe_align,&__t1270t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1270t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1270t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1270t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1270t__buf__unsafe_align;
  surface__pos=__t1270t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1180t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1271t__unsafe_ptr,&__t1271t__dat__pos,&__t1271t__dat__length,&__t1271t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3512t=CHARS__buf__unsafe_ptr;
  *__t3513t=CHARS__buf__unsafe_size;
  *__t3514t=CHARS__buf__unsafe_offset;
  *__t3515t=CHARS__buf__unsafe_align;
  *__t3516t=CHARS__pos;
  *__t3517t=__t1271t__unsafe_ptr;
  *__t3518t=__t1271t__dat__pos;
  *__t3519t=__t1271t__dat__length;
  *__t3520t=__t1271t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void closedir__t3136t(char* unsafe_ptr) {
  int __t3138t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t3139t(const char* path, char** __t3521t) {
  int __t3141t=0;
  char* unsafe_ptr=0;
  char __t3143t__=0;
  char __t3144t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t609t(unsafe_ptr,&__t3143t__);
  not__t41t(__t3143t__,&__t3144t__);
  if(__t3144t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t3136t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3521t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t3152t(char** __t3522t, const char** __t3523t) {
  char* f__unsafe_ptr=*__t3522t;
  char __t3153t__=0;
  char __t3154t__=0;
  char* de=0;
  char __t3155t__=0;
  char __t3156t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t609t(f__unsafe_ptr,&__t3153t__);
  not__t41t(__t3153t__,&__t3154t__);
  if(__t3154t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t609t(de,&__t3155t__);
  not__t41t(__t3155t__,&__t3156t__);
  if(__t3156t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3522t=f__unsafe_ptr;
  *__t3523t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t3157t(char** __t3524t, char** __t3525t, uint64_t* __t3526t, uint64_t* __t3527t, char* __t3528t) {
  char* f__unsafe_ptr=*__t3524t;
  const char* __t3158t__=0;
  char* __t3159t__unsafe_ptr=0;
  uint64_t __t3159t__dat__pos=0;
  uint64_t __t3159t__dat__length=0;
  char __t3159t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t3152t(&f__unsafe_ptr,&__t3158t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1236t(__t3158t__,&__t3159t__unsafe_ptr,&__t3159t__dat__pos,&__t3159t__dat__length,&__t3159t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3524t=f__unsafe_ptr;
  *__t3525t=__t3159t__unsafe_ptr;
  *__t3526t=__t3159t__dat__pos;
  *__t3527t=__t3159t__dat__length;
  *__t3528t=__t3159t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t3223t(char** __t3529t, uint64_t __t_anon1, char** __t3530t, uint64_t* __t3531t, uint64_t* __t3532t, char* __t3533t) {
  char* data__unsafe_ptr=*__t3529t;
  char* __t3224t__unsafe_ptr=0;
  uint64_t __t3224t__dat__pos=0;
  uint64_t __t3224t__dat__length=0;
  char __t3224t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t3157t(&data__unsafe_ptr,&__t3224t__unsafe_ptr,&__t3224t__dat__pos,&__t3224t__dat__length,&__t3224t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3529t=data__unsafe_ptr;
  *__t3530t=__t3224t__unsafe_ptr;
  *__t3531t=__t3224t__dat__pos;
  *__t3532t=__t3224t__dat__length;
  *__t3533t=__t3224t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1213t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3534t, uint64_t* __t3535t, uint64_t* __t3536t, char* __t3537t) {
  goto __t_return;
  __t_return:
  *__t3534t=other__unsafe_ptr;
  *__t3535t=other__dat__pos;
  *__t3536t=other__dat__length;
  *__t3537t=other__dat__first;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t3538t) {
  int __t266t__=0;
  char z=0;
  is_different__t108t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t3538t=z;
}

static inline __attribute__((always_inline)) int sub__t365t(uint64_t x, uint64_t y, uint64_t* __t3539t) {
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
  *__t3539t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void get__t1382t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t3540t) {
  uint64_t __t1383t__=0;
  char* __t1384t__=0;
  add__t188t(s__dat__pos,i,&__t1383t__);
  add__t681t(s__unsafe_ptr,__t1383t__,&__t1384t__);
  goto __t_return;
  __t_return:
  *__t3540t=__t1384t__;
}

int slice__t1405t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t3541t, uint64_t* __t3542t, uint64_t* __t3543t, char* __t3544t) {
  char* __t1406t__unsafe_ptr=0;
  uint64_t __t1406t__dat__pos=0;
  uint64_t __t1406t__dat__length=0;
  char __t1406t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1407t__=0;
  char* __t1408t__unsafe_ptr=0;
  uint64_t __t1408t__dat__pos=0;
  uint64_t __t1408t__dat__length=0;
  char __t1408t__dat__first=0;
  char __t1409t__=0;
  char __t1410t__=0;
  char __t1411t=0;
  char __t1412t__=0;
  uint64_t __t1413t__=0;
  uint64_t new_length=0;
  uint64_t __t1414t=0;
  char __t1415t__=0;
  char new_first=0;
  char* __t1417t__=0;
  char __t1418t__value=0;
  uint64_t __t1419t__=0;
  char* __t1420t__unsafe_ptr=0;
  uint64_t __t1420t__dat__pos=0;
  uint64_t __t1420t__dat__length=0;
  char __t1420t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1213t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1406t__unsafe_ptr,&__t1406t__dat__pos,&__t1406t__dat__length,&__t1406t__dat__first);
  s__unsafe_ptr=__t1406t__unsafe_ptr;
  s__dat__pos=__t1406t__dat__pos;
  s__dat__length=__t1406t__dat__length;
  s__dat__first=__t1406t__dat__first;
  eq__t133t(from,to,&__t1407t__);
  if(__t1407t__){
  __t_errcode=str__t1236t(__t388t,&__t1408t__unsafe_ptr,&__t1408t__dat__pos,&__t1408t__dat__length,&__t1408t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  gt__t289t(from,to,&__t1409t__);
  if(!__t1409t__){
  gt__t289t(to,s__dat__length,&__t1410t__);
  __t1411t=__t1410t__;
  }
  else{
  __t1411t=0;
  not__t41t(__t1411t,&__t1412t__);
  __t1411t=__t1412t__;
  }
  if(__t1411t){
  __t_errcode=22;
  goto __t_failure;
  }
  __t_errcode=sub__t365t(to,from,&__t1413t__);
  if(__t_errcode){
  goto __t_failure;
  }
  new_length=__t1413t__;
  __t1414t=0;
  neq__t157t(from,__t1414t,&__t1415t__);
  if(__t1415t__){
  get__t1382t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1417t__);
  if(!__t1417t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1418t__value,__t1417t__,1);
  new_first=__t1418t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1419t__);
  str__t1176t(s__unsafe_ptr,__t1419t__,new_length,new_first,&__t1420t__unsafe_ptr,&__t1420t__dat__pos,&__t1420t__dat__length,&__t1420t__dat__first);
  __t1408t__unsafe_ptr=__t1420t__unsafe_ptr;
  __t1408t__dat__pos=__t1420t__dat__pos;
  __t1408t__dat__length=__t1420t__dat__length;
  __t1408t__dat__first=__t1420t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3541t=__t1408t__unsafe_ptr;
  *__t3542t=__t1408t__dat__pos;
  *__t3543t=__t1408t__dat__length;
  *__t3544t=__t1408t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t1249t(char x, char y, char* __t3545t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t3545t=z;
}

static inline __attribute__((always_inline)) void eq__t1316t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t3546t) {
  uint64_t __t1317t__=0;
  uint64_t n=0;
  uint64_t __t1318t__=0;
  char __t1319t__=0;
  char __t1320t=0;
  char __t1321t__=0;
  char __t1322t=0;
  char z=0;
  len__t1245t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1317t__);
  n=__t1317t__;
  len__t1245t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1318t__);
  neq__t157t(n,__t1318t__,&__t1319t__);
  if(__t1319t__){
  __t1320t=0;
  goto __t_return;
  }
  neq__t1249t(x__dat__first,y__dat__first,&__t1321t__);
  if(__t1321t__){
  __t1322t=0;
  __t1320t=__t1322t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1320t=z;
  goto __t_return;
  __t_return:
  *__t3546t=__t1320t;
}

static inline __attribute__((always_inline)) int ends_with__t1485t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t3547t) {
  char* __t1486t__unsafe_ptr=0;
  uint64_t __t1486t__dat__pos=0;
  uint64_t __t1486t__dat__length=0;
  char __t1486t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1487t__unsafe_ptr=0;
  uint64_t __t1487t__dat__pos=0;
  uint64_t __t1487t__dat__length=0;
  char __t1487t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  char __t1488t__=0;
  char __t1489t=0;
  uint64_t __t1490t__=0;
  uint64_t n=0;
  uint64_t __t1491t__=0;
  uint64_t __t1492t__=0;
  char* __t1493t__unsafe_ptr=0;
  uint64_t __t1493t__dat__pos=0;
  uint64_t __t1493t__dat__length=0;
  char __t1493t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1494t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1213t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1486t__unsafe_ptr,&__t1486t__dat__pos,&__t1486t__dat__length,&__t1486t__dat__first);
  stack__unsafe_ptr=__t1486t__unsafe_ptr;
  stack__dat__pos=__t1486t__dat__pos;
  stack__dat__length=__t1486t__dat__length;
  stack__dat__first=__t1486t__dat__first;
  __t_errcode=str__t1236t(_needle,&__t1487t__unsafe_ptr,&__t1487t__dat__pos,&__t1487t__dat__length,&__t1487t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  needle__unsafe_ptr=__t1487t__unsafe_ptr;
  needle__dat__pos=__t1487t__dat__pos;
  needle__dat__length=__t1487t__dat__length;
  needle__dat__first=__t1487t__dat__first;
  lt__t265t(stack__dat__length,needle__dat__length,&__t1488t__);
  if(__t1488t__){
  __t1489t=0;
  goto __t_return;
  }
  len__t1245t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,&__t1490t__);
  n=__t1490t__;
  len__t1245t(needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1491t__);
  __t_errcode=sub__t365t(n,__t1491t__,&__t1492t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=slice__t1405t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,__t1492t__,n,&__t1493t__unsafe_ptr,&__t1493t__dat__pos,&__t1493t__dat__length,&__t1493t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1493t__unsafe_ptr;
  ret__dat__pos=__t1493t__dat__pos;
  ret__dat__length=__t1493t__dat__length;
  ret__dat__first=__t1493t__dat__first;
  eq__t1316t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1494t__);
  __t1489t=__t1494t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3547t=__t1489t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1356t(char** __t3548t, uint64_t* __t3549t, uint32_t* __t3550t, uint32_t* __t3551t, uint64_t* __t3552t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t3553t, uint64_t* __t3554t, uint64_t* __t3555t, char* __t3556t) {
  char* CHARS__buf__unsafe_ptr=*__t3548t;
  uint64_t CHARS__buf__unsafe_size=*__t3549t;
  uint32_t CHARS__buf__unsafe_offset=*__t3550t;
  uint32_t CHARS__buf__unsafe_align=*__t3551t;
  uint64_t CHARS__pos=*__t3552t;
  char* __t1357t__unsafe_ptr=0;
  uint64_t __t1357t__dat__pos=0;
  uint64_t __t1357t__dat__length=0;
  char __t1357t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1358t__=0;
  uint64_t __t1359t__=0;
  uint64_t null_pos=0;
  uint64_t __t1360t=0;
  uint64_t __t1361t__=0;
  uint64_t next_pos=0;
  uint64_t __t1362t__=0;
  char __t1363t__=0;
  char* endpos=0;
  uint64_t __t1364t=0;
  uint64_t __t1365t__=0;
  uint64_t prev_pos=0;
  char* __t1366t__unsafe_ptr=0;
  uint64_t __t1366t__dat__pos=0;
  uint64_t __t1366t__dat__length=0;
  char __t1366t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1213t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1357t__unsafe_ptr,&__t1357t__dat__pos,&__t1357t__dat__length,&__t1357t__dat__first);
  other__unsafe_ptr=__t1357t__unsafe_ptr;
  other__dat__pos=__t1357t__dat__pos;
  other__dat__length=__t1357t__dat__length;
  other__dat__first=__t1357t__dat__first;
  len__t1245t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1358t__);
  add__t188t(CHARS__pos,__t1358t__,&__t1359t__);
  null_pos=__t1359t__;
  __t1360t=1;
  add__t188t(null_pos,__t1360t,&__t1361t__);
  next_pos=__t1361t__;
  len__t1013t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,&__t1362t__);
  gt__t289t(next_pos,__t1362t__,&__t1363t__);
  if(__t1363t__){
  __t_errcode=21;
  goto __t_failure;
  }
  memcpy(CHARS__buf__unsafe_ptr+CHARS__pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=CHARS__buf__unsafe_ptr+null_pos;
  *endpos=0;
  __t1364t=0;
  add__t188t(CHARS__pos,__t1364t,&__t1365t__);
  prev_pos=__t1365t__;
  CHARS__pos=next_pos;
  __t_errcode=str__t1180t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__t1366t__unsafe_ptr,&__t1366t__dat__pos,&__t1366t__dat__length,&__t1366t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3548t=CHARS__buf__unsafe_ptr;
  *__t3549t=CHARS__buf__unsafe_size;
  *__t3550t=CHARS__buf__unsafe_offset;
  *__t3551t=CHARS__buf__unsafe_align;
  *__t3552t=CHARS__pos;
  *__t3553t=__t1366t__unsafe_ptr;
  *__t3554t=__t1366t__dat__pos;
  *__t3555t=__t1366t__dat__length;
  *__t3556t=__t1366t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void endpos__t1313t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3557t) {
  uint64_t __t1314t__=0;
  add__t188t(s__dat__pos,s__dat__length,&__t1314t__);
  goto __t_return;
  __t_return:
  *__t3557t=__t1314t__;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t3558t) {
  int value=0;
  *__t3558t=value;
}

static inline __attribute__((always_inline)) void not__t52t(int __t_anon0, int* __t3559t) {
  int __t53t__=0;
  true__t15t(&__t53t__);
  goto __t_return;
  __t_return:
  *__t3559t=__t53t__;
}

static inline __attribute__((always_inline)) int str__t1188t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t length, char** __t3560t, uint64_t* __t3561t, uint64_t* __t3562t, char* __t3563t) {
  int __t1189t=0;
  int __t1190t=0;
  int __t1191t__=0;
  uint64_t __t1192t__=0;
  char __t1193t__=0;
  uint64_t __t1194t=0;
  uint64_t __t1195t=0;
  char* __t1197t__=0;
  char __t1198t__value=0;
  char* __t1199t__unsafe_ptr=0;
  uint64_t __t1199t__dat__pos=0;
  uint64_t __t1199t__dat__length=0;
  char __t1199t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  not__t52t(__t1190t,&__t1191t__);
  len__t1013t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1192t__);
  gt__t289t(length,__t1192t__,&__t1193t__);
  if(__t1193t__){
  __t_errcode=20;
  goto __t_failure;
  }
  __t1194t=0;
  __t1195t=0;
  __t_errcode=get__t1006t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1195t,&__t1197t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1197t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1198t__value,__t1197t__,1);
  __t_errcode=str__t1180t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1194t,length,__t1198t__value,&__t1199t__unsafe_ptr,&__t1199t__dat__pos,&__t1199t__dat__length,&__t1199t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3560t=__t1199t__unsafe_ptr;
  *__t3561t=__t1199t__dat__pos;
  *__t3562t=__t1199t__dat__length;
  *__t3563t=__t1199t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t387t(const char* value, const char** __t3564t, const char** __t3565t) {
  const char* __t389t=0;
  __t389t=__t388t;
  goto __t_return;
  __t_return:
  *__t3564t=value;
  *__t3565t=__t389t;
}

static inline __attribute__((always_inline)) void print__t396t(const char* value, const char* endl) {
  int __t397t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t440t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[33m");
  }
}

static inline __attribute__((always_inline)) void set__t552t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3318t(char colors__initialized) {
  const char* __t3320t__value=0;
  const char* __t3320t____t389t=0;
  int __t3322t=0;
  int __t3323t=0;
  char __t3324t=0;
  char __t3325t=0;
  const char* __t3329t__value=0;
  const char* __t3329t____t389t=0;
  const char* __t3333t__value=0;
  const char* __t3333t____t389t=0;
  nn__t387t(__t3282t,&__t3320t__value,&__t3320t____t389t);
  print__t396t(__t3320t__value,__t3320t____t389t);
  __t3325t=1;
  if(__t3326t!=__t3326t){
  __t3325t=0;
  }
  if(__t3325t){
  __t3324t=1;
  }
  if(__t3324t){
  set__t440t(colors__initialized);
  nn__t387t(__t1980t,&__t3329t__value,&__t3329t____t389t);
  print__t396t(__t3329t__value,__t3329t____t389t);
  }
  set__t552t(colors__initialized);
  nn__t387t(__t3297t,&__t3333t__value,&__t3333t____t389t);
  print__t396t(__t3333t__value,__t3333t____t389t);
}

static inline __attribute__((always_inline)) void nn__t1609t(char* value__unsafe_ptr, uint64_t value__dat__pos, uint64_t value__dat__length, char value__dat__first, char** __t3566t, uint64_t* __t3567t, uint64_t* __t3568t, char* __t3569t, const char** __t3570t) {
  const char* __t1610t=0;
  __t1610t=__t388t;
  goto __t_return;
  __t_return:
  *__t3566t=value__unsafe_ptr;
  *__t3567t=value__dat__pos;
  *__t3568t=value__dat__length;
  *__t3569t=value__dat__first;
  *__t3570t=__t1610t;
}

static inline __attribute__((always_inline)) void print__t1378t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, const char* endl) {
  int __t1379t=0;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void flush__t386t() {
  fflush(stdout);
}

static inline __attribute__((always_inline)) void new__t1014t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1293t(char** __t3571t, uint64_t* __t3572t, uint32_t* __t3573t, uint32_t* __t3574t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3571t=unsafe_ptr;
  *__t3572t=unsafe_size;
  *__t3573t=unsafe_offset;
  *__t3574t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1292t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3575t, uint64_t* __t3576t, uint64_t* __t3577t, char* __t3578t) {
  char* __t1295t__unsafe_ptr=0;
  uint64_t __t1295t__unsafe_size=0;
  uint32_t __t1295t__unsafe_offset=0;
  uint32_t __t1295t__unsafe_align=0;
  uint64_t __t1296t=0;
  uint64_t __t1297t__=0;
  uint64_t __t1298t__=0;
  char* __t1299t__unsafe_ptr=0;
  uint64_t __t1299t__unsafe_size=0;
  uint32_t __t1299t__unsafe_offset=0;
  uint32_t __t1299t__unsafe_align=0;
  char __t1300t____t803t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1301t=0;
  char* __t1302t__unsafe_ptr=0;
  uint64_t __t1302t__dat__pos=0;
  uint64_t __t1302t__dat__length=0;
  char __t1302t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1293t(&__t1295t__unsafe_ptr,&__t1295t__unsafe_size,&__t1295t__unsafe_offset,&__t1295t__unsafe_align);
  __t1296t=1;
  len__t1245t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1297t__);
  add__t188t(__t1296t,__t1297t__,&__t1298t__);
  __t_errcode=alloc__t801t(&__t1295t__unsafe_ptr,&__t1295t__unsafe_size,&__t1295t__unsafe_offset,&__t1295t__unsafe_align,__t1298t__,&__t1299t__unsafe_ptr,&__t1299t__unsafe_size,&__t1299t__unsafe_offset,&__t1299t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1299t__unsafe_ptr;
  buf__unsafe_size=__t1299t__unsafe_size;
  buf__unsafe_offset=__t1299t__unsafe_offset;
  buf__unsafe_align=__t1299t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1301t=0;
  __t_errcode=str__t1180t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1301t,other__dat__length,other__dat__first,&__t1302t__unsafe_ptr,&__t1302t__dat__pos,&__t1302t__dat__length,&__t1302t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t609t(__t1302t__unsafe_ptr,&__t1300t____t803t__);
  if(__t1300t____t803t__){
  free__t679t(&__t1302t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3575t=__t1302t__unsafe_ptr;
  *__t3576t=__t1302t__dat__pos;
  *__t3577t=__t1302t__dat__length;
  *__t3578t=__t1302t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1303t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3579t, char** __t3580t, uint64_t* __t3581t, uint64_t* __t3582t, char* __t3583t) {
  char* __t1305t__unsafe_ptr=0;
  uint64_t __t1305t__dat__pos=0;
  uint64_t __t1305t__dat__length=0;
  char __t1305t__dat__first=0;
  char __t1306t____t1300t____t803t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1307t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1014t();
  __t_errcode=copy_null_terminated__t1292t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1305t__unsafe_ptr,&__t1305t__dat__pos,&__t1305t__dat__length,&__t1305t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1305t__unsafe_ptr;
  str__dat__pos=__t1305t__dat__pos;
  str__dat__length=__t1305t__dat__length;
  str__dat__first=__t1305t__dat__first;
  add__t681t(str__unsafe_ptr,str__dat__pos,&__t1307t__);
  _ret=__t1307t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t609t(str__unsafe_ptr,&__t1306t____t1300t____t803t__);
  if(__t1306t____t1300t____t803t__){
  free__t679t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3579t=cstr;
  *__t3580t=str__unsafe_ptr;
  *__t3581t=str__dat__pos;
  *__t3582t=str__dat__length;
  *__t3583t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1311t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3584t) {
  goto __t_return;
  __t_return:
  *__t3584t=value__cstr;
}

static inline __attribute__((always_inline)) void popen__t2480t(const char* cmd, char** __t3585t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t3585t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2479t(char* unsafe_ptr, int64_t* __t3586t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t3586t=status;
}

static inline __attribute__((always_inline)) void int__t589t(uint64_t x, int64_t* __t3587t) {
  int __t590t=0;
  int __t591t=0;
  int __t592t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t3587t=z;
}

static inline __attribute__((always_inline)) void is_different__t96t(int64_t x, int64_t y, int* __t3588t) {
  int __t97t=0;
  int __t98t__=0;
  not__t50t(__t97t,&__t98t__);
  goto __t_return;
  __t_return:
  *__t3588t=__t98t__;
}

static inline __attribute__((always_inline)) void neq__t146t(int64_t x, int64_t y, char* __t3589t) {
  int __t147t__=0;
  char z=0;
  is_different__t96t(x,y,&__t147t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3589t=z;
}

static inline __attribute__((always_inline)) int open__t2481t(const char* cmd, char** __t3590t) {
  char* __t2482t__=0;
  char* unsafe_ptr=0;
  char __t2483t__=0;
  char __t2484t__=0;
  char __t2485t__=0;
  int64_t __t2486t__=0;
  int64_t status=0;
  uint64_t __t2487t=0;
  int64_t __t2488t__=0;
  char __t2489t__=0;
  char __t2490t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2480t(cmd,&__t2482t__);
  unsafe_ptr=__t2482t__;
  exists__t609t(unsafe_ptr,&__t2483t__);
  not__t41t(__t2483t__,&__t2484t__);
  if(__t2484t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t609t(unsafe_ptr,&__t2485t__);
  if(__t2485t__){
  pclose__t2479t(unsafe_ptr,&__t2486t__);
  status=__t2486t__;
  unsafe_ptr=0;
  __t2487t=0;
  int__t589t(__t2487t,&__t2488t__);
  neq__t146t(status,__t2488t__,&__t2489t__);
  if(__t2489t__){
  __t_complain=37;
  goto __t2490t__label;
  __t2490t__label:__t2490t=__t2490t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3590t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2492t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t3591t) {
  const char* __t2493t__cstr=0;
  char* __t2493t__str__unsafe_ptr=0;
  uint64_t __t2493t__str__dat__pos=0;
  uint64_t __t2493t__str__dat__length=0;
  char __t2493t__str__dat__first=0;
  char __t2494t____t1306t____t1300t____t803t__=0;
  const char* __t2495t__=0;
  char* __t2496t__unsafe_ptr=0;
  char __t2497t____t2485t__=0;
  int64_t __t2497t____t2486t__=0;
  int64_t __t2497t__status=0;
  uint64_t __t2497t____t2487t=0;
  int64_t __t2497t____t2488t__=0;
  char __t2497t____t2489t__=0;
  char __t2497t____t2490t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1303t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2493t__cstr,&__t2493t__str__unsafe_ptr,&__t2493t__str__dat__pos,&__t2493t__str__dat__length,&__t2493t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1311t(__t2493t__cstr,__t2493t__str__unsafe_ptr,__t2493t__str__dat__pos,__t2493t__str__dat__length,__t2493t__str__dat__first,&__t2495t__);
  __t_errcode=open__t2481t(__t2495t__,&__t2496t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t609t(__t2496t__unsafe_ptr,&__t2497t____t2485t__);
  if(__t2497t____t2485t__){
  pclose__t2479t(__t2496t__unsafe_ptr,&__t2497t____t2486t__);
  __t2497t__status=__t2497t____t2486t__;
  __t2496t__unsafe_ptr=0;
  __t2497t____t2487t=0;
  int__t589t(__t2497t____t2487t,&__t2497t____t2488t__);
  neq__t146t(__t2497t__status,__t2497t____t2488t__,&__t2497t____t2489t__);
  if(__t2497t____t2489t__){
  __t_complain=37;
  goto __t2490t__label;
  __t2490t__label:__t2497t____t2490t=__t2497t____t2490t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t3591t=__t2496t__unsafe_ptr;
  
  __t_skip_returns:exists__t609t(__t2493t__str__unsafe_ptr,&__t2494t____t1306t____t1300t____t803t__);
  if(__t2494t____t1306t____t1300t____t803t__){
  free__t679t(&__t2493t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2454t(int64_t value, const char** __t3592t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t3592t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t3593t) {
  const char* value=0;
  *__t3593t=value;
}

static inline __attribute__((always_inline)) int run__t3264t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t3594t) {
  char* __t3265t__unsafe_ptr=0;
  char __t3266t____t2497t____t2485t__=0;
  int64_t __t3266t____t2497t____t2486t__=0;
  int64_t __t3266t____t2497t__status=0;
  uint64_t __t3266t____t2497t____t2487t=0;
  int64_t __t3266t____t2497t____t2488t__=0;
  char __t3266t____t2497t____t2489t__=0;
  char __t3266t____t2497t____t2490t=0;
  char* proc__unsafe_ptr=0;
  char __t3267t=0;
  int64_t __t3268t=0;
  int64_t error=0;
  const char* __t3269t__=0;
  const char* __t3270t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2492t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3265t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t3265t__unsafe_ptr;
  exists__t609t(__t3265t__unsafe_ptr,&__t3266t____t2497t____t2485t__);
  if(__t3266t____t2497t____t2485t__){
  pclose__t2479t(__t3265t__unsafe_ptr,&__t3266t____t2497t____t2486t__);
  __t3266t____t2497t__status=__t3266t____t2497t____t2486t__;
  __t3265t__unsafe_ptr=0;
  __t3266t____t2497t____t2487t=0;
  int__t589t(__t3266t____t2497t____t2487t,&__t3266t____t2497t____t2488t__);
  neq__t146t(__t3266t____t2497t__status,__t3266t____t2497t____t2488t__,&__t3266t____t2497t____t2489t__);
  if(__t3266t____t2497t____t2489t__){
  __t_complain=37;
  goto __t2490t__label;
  __t2490t__label:__t3266t____t2497t____t2490t=__t3266t____t2497t____t2490t==0;
  }
  }
  __t3268t=__t_complain;
  __t3267t=(__t_complain==0);
  __t_complain=0;
  error=__t3268t;
  __t3267t__label:__t3267t=__t3267t==0;
  if(__t3267t){
  cstr__t2454t(error,&__t3269t__);
  goto __t_return;
  }
  cstr__t1t(&__t3270t__);
  __t3269t__=__t3270t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3594t=__t3269t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void exists__t1174t(const char* c, char* __t3595t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t3595t=z;
}

static inline __attribute__((always_inline)) void set__t432t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3300t(char colors__initialized) {
  const char* __t3302t__value=0;
  const char* __t3302t____t389t=0;
  int __t3304t=0;
  char __t3305t=0;
  char __t3306t=0;
  const char* __t3311t__value=0;
  const char* __t3311t____t389t=0;
  int __t3313t=0;
  const char* __t3316t__value=0;
  const char* __t3316t____t389t=0;
  nn__t387t(__t3282t,&__t3302t__value,&__t3302t____t389t);
  print__t396t(__t3302t__value,__t3302t____t389t);
  __t3306t=1;
  if(__t3307t!=__t3307t){
  __t3306t=0;
  }
  if(__t3306t){
  __t3305t=1;
  }
  if(__t3305t){
  set__t432t(colors__initialized);
  nn__t387t(__t3310t,&__t3311t__value,&__t3311t____t389t);
  print__t396t(__t3311t__value,__t3311t____t389t);
  }
  set__t552t(colors__initialized);
  nn__t387t(__t3297t,&__t3316t__value,&__t3316t____t389t);
  print__t396t(__t3316t__value,__t3316t____t389t);
}

static inline __attribute__((always_inline)) void print__t398t(const char* value) {
  int __t399t=0;
  const char* endl=0;
  endl=__t400t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t436t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[32m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3280t(char colors__initialized) {
  const char* __t3283t__value=0;
  const char* __t3283t____t389t=0;
  char __t3285t=0;
  char __t3286t=0;
  const char* __t3291t__value=0;
  const char* __t3291t____t389t=0;
  int __t3293t=0;
  int __t3294t=0;
  const char* __t3298t__value=0;
  const char* __t3298t____t389t=0;
  nn__t387t(__t3282t,&__t3283t__value,&__t3283t____t389t);
  print__t396t(__t3283t__value,__t3283t____t389t);
  __t3286t=1;
  if(__t3287t!=__t3287t){
  __t3286t=0;
  }
  if(__t3286t){
  __t3285t=1;
  }
  if(__t3285t){
  set__t436t(colors__initialized);
  nn__t387t(__t3290t,&__t3291t__value,&__t3291t____t389t);
  print__t396t(__t3291t__value,__t3291t____t389t);
  }
  set__t552t(colors__initialized);
  nn__t387t(__t3297t,&__t3298t__value,&__t3298t____t389t);
  print__t396t(__t3298t__value,__t3298t____t389t);
}

static inline __attribute__((always_inline)) void nn__t394t(uint64_t value, uint64_t* __t3596t, const char** __t3597t) {
  const char* __t395t=0;
  __t395t=__t388t;
  goto __t_return;
  __t_return:
  *__t3596t=value;
  *__t3597t=__t395t;
}

static inline __attribute__((always_inline)) void print__t409t(uint64_t value, const char* endl) {
  int __t410t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t3335t() {
  char* __t3340t__unsafe_ptr=0;
  uint64_t __t3340t__unsafe_size=0;
  uint32_t __t3340t__unsafe_offset=0;
  uint32_t __t3340t__unsafe_align=0;
  uint64_t __t3341t=0;
  char* __t3342t__unsafe_ptr=0;
  uint64_t __t3342t__unsafe_size=0;
  uint32_t __t3342t__unsafe_offset=0;
  uint32_t __t3342t__unsafe_align=0;
  char __t3343t____t803t__=0;
  char* __t3344t__buf__unsafe_ptr=0;
  uint64_t __t3344t__buf__unsafe_size=0;
  uint32_t __t3344t__buf__unsafe_offset=0;
  uint32_t __t3344t__buf__unsafe_align=0;
  uint64_t __t3344t__pos=0;
  char* __t3345t__buf__unsafe_ptr=0;
  uint64_t __t3345t__buf__unsafe_size=0;
  uint32_t __t3345t__buf__unsafe_offset=0;
  uint32_t __t3345t__buf__unsafe_align=0;
  uint64_t __t3345t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char __t3346t__initialized=0;
  char colors__initialized=0;
  const char* path=0;
  char* __t3350t__unsafe_ptr=0;
  uint64_t __t3350t__dat__pos=0;
  uint64_t __t3350t__dat__length=0;
  char __t3350t__dat__first=0;
  char* __t3351t__unsafe_ptr=0;
  uint64_t __t3351t__dat__pos=0;
  uint64_t __t3351t__dat__length=0;
  char __t3351t__dat__first=0;
  char* __t3352t__unsafe_ptr=0;
  char* __t3354t__unsafe_ptr=0;
  char* test_dir__unsafe_ptr=0;
  uint64_t __t3355t=0;
  uint64_t __t3356t=0;
  uint64_t failures=0;
  uint64_t __t3357t=0;
  char __t3358t=0;
  char* __t3359t__unsafe_ptr=0;
  uint64_t __t3359t__dat__pos=0;
  uint64_t __t3359t__dat__length=0;
  char __t3359t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t3361t__=0;
  char __t3362t__=0;
  uint64_t counter=0;
  char* __t3363t__buf__unsafe_ptr=0;
  uint64_t __t3363t__buf__unsafe_size=0;
  uint32_t __t3363t__buf__unsafe_offset=0;
  uint32_t __t3363t__buf__unsafe_align=0;
  uint64_t __t3363t__pos=0;
  char* __t3364t__unsafe_ptr=0;
  uint64_t __t3364t__dat__pos=0;
  uint64_t __t3364t__dat__length=0;
  char __t3364t__dat__first=0;
  char* __t3365t__unsafe_ptr=0;
  uint64_t __t3365t__dat__pos=0;
  uint64_t __t3365t__dat__length=0;
  char __t3365t__dat__first=0;
  uint64_t __t3366t__=0;
  char* __t3367t__unsafe_ptr=0;
  uint64_t __t3367t__dat__pos=0;
  uint64_t __t3367t__dat__length=0;
  char __t3367t__dat__first=0;
  char* command__unsafe_ptr=0;
  uint64_t command__dat__pos=0;
  uint64_t command__dat__length=0;
  char command__dat__first=0;
  char* __t3370t__value__unsafe_ptr=0;
  uint64_t __t3370t__value__dat__pos=0;
  uint64_t __t3370t__value__dat__length=0;
  char __t3370t__value__dat__first=0;
  const char* __t3370t____t1610t=0;
  const char* __t3373t__=0;
  const char* error=0;
  const char* __t3375t__value=0;
  const char* __t3375t____t389t=0;
  char __t3377t__=0;
  const char* __t3382t__value=0;
  const char* __t3382t____t389t=0;
  uint64_t __t3385t=0;
  uint64_t __t3386t__=0;
  uint64_t __t3390t=0;
  char __t3391t__=0;
  const char* __t3409t__value=0;
  const char* __t3409t____t389t=0;
  uint64_t __t3413t__value=0;
  const char* __t3413t____t395t=0;
  const char* __t3416t__value=0;
  const char* __t3416t____t389t=0;
  uint64_t __t3418t__value=0;
  const char* __t3418t____t395t=0;
  const char* __t3395t__value=0;
  const char* __t3395t____t389t=0;
  const char* __t3400t__value=0;
  const char* __t3400t____t389t=0;
  uint64_t __t3402t__value=0;
  const char* __t3402t____t395t=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  char____t_buffer____buffer__t3338t(&__t3340t__unsafe_ptr,&__t3340t__unsafe_size,&__t3340t__unsafe_offset,&__t3340t__unsafe_align);
  __t3341t=256;
  __t_errcode=alloc__t801t(&__t3340t__unsafe_ptr,&__t3340t__unsafe_size,&__t3340t__unsafe_offset,&__t3340t__unsafe_align,__t3341t,&__t3342t__unsafe_ptr,&__t3342t__unsafe_size,&__t3342t__unsafe_offset,&__t3342t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1021t(&__t3342t__unsafe_ptr,&__t3342t__unsafe_size,&__t3342t__unsafe_offset,&__t3342t__unsafe_align,&__t3344t__buf__unsafe_ptr,&__t3344t__buf__unsafe_size,&__t3344t__buf__unsafe_offset,&__t3344t__buf__unsafe_align,&__t3344t__pos);
  __t3345t__buf__unsafe_ptr=__t3344t__buf__unsafe_ptr;
  __t3345t__buf__unsafe_size=__t3344t__buf__unsafe_size;
  __t3345t__buf__unsafe_offset=__t3344t__buf__unsafe_offset;
  __t3345t__buf__unsafe_align=__t3344t__buf__unsafe_align;
  __t3345t__pos=__t3344t__pos;
  CHARS__buf__unsafe_ptr=__t3345t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t3345t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t3345t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t3345t__buf__unsafe_align;
  CHARS__pos=__t3345t__pos;
  colors__t426t(&__t3346t__initialized);
  colors__initialized=__t3346t__initialized;
  path=__t3348t;
  __t_errcode=copy__t1267t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3349t,&__t3350t__unsafe_ptr,&__t3350t__dat__pos,&__t3350t__dat__length,&__t3350t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1267t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,path,&__t3351t__unsafe_ptr,&__t3351t__dat__pos,&__t3351t__dat__length,&__t3351t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=open__t3139t(path,&__t3352t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3354t__unsafe_ptr=__t3352t__unsafe_ptr;
  test_dir__unsafe_ptr=__t3354t__unsafe_ptr;
  __t3355t=0;
  __t3356t=__t3355t;
  failures=__t3356t;
  __t3357t=0-1;
  while(1){
  __t3357t=__t3357t+1;
  __t_complain=get__t3223t(&test_dir__unsafe_ptr,__t3357t,&__t3359t__unsafe_ptr,&__t3359t__dat__pos,&__t3359t__dat__length,&__t3359t__dat__first);
  __t3358t=__t_complain;
  if(__t_complain){
  goto __t3358t__label;
  }
  entry__unsafe_ptr=__t3359t__unsafe_ptr;
  entry__dat__pos=__t3359t__dat__pos;
  entry__dat__length=__t3359t__dat__length;
  entry__dat__first=__t3359t__dat__first;
  __t3358t__label:__t3358t=__t3358t==0;
  if(!__t3358t){
  break;
  }
  __t_errcode=ends_with__t1485t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t3360t,&__t3361t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3361t__,&__t3362t__);
  if(__t3362t__){
  continue;
  }
  counter=__t3357t;
  __t3363t__buf__unsafe_ptr=CHARS__buf__unsafe_ptr;
  __t3363t__buf__unsafe_size=CHARS__buf__unsafe_size;
  __t3363t__buf__unsafe_offset=CHARS__buf__unsafe_offset;
  __t3363t__buf__unsafe_align=CHARS__buf__unsafe_align;
  __t3363t__pos=CHARS__pos;
  str__t1213t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t3364t__unsafe_ptr,&__t3364t__dat__pos,&__t3364t__dat__length,&__t3364t__dat__first);
  __t_errcode=copy_null_terminated__t1356t(&__t3363t__buf__unsafe_ptr,&__t3363t__buf__unsafe_size,&__t3363t__buf__unsafe_offset,&__t3363t__buf__unsafe_align,&__t3363t__pos,__t3364t__unsafe_ptr,__t3364t__dat__pos,__t3364t__dat__length,__t3364t__dat__first,&__t3365t__unsafe_ptr,&__t3365t__dat__pos,&__t3365t__dat__length,&__t3365t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  endpos__t1313t(__t3365t__unsafe_ptr,__t3365t__dat__pos,__t3365t__dat__length,__t3365t__dat__first,&__t3366t__);
  __t_errcode=str__t1188t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t3366t__,&__t3367t__unsafe_ptr,&__t3367t__dat__pos,&__t3367t__dat__length,&__t3367t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command__unsafe_ptr=__t3367t__unsafe_ptr;
  command__dat__pos=__t3367t__dat__pos;
  command__dat__length=__t3367t__dat__length;
  command__dat__first=__t3367t__dat__first;
  print_marker__t3318t(colors__initialized);
  nn__t1609t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3370t__value__unsafe_ptr,&__t3370t__value__dat__pos,&__t3370t__value__dat__length,&__t3370t__value__dat__first,&__t3370t____t1610t);
  print__t1378t(__t3370t__value__unsafe_ptr,__t3370t__value__dat__pos,__t3370t__value__dat__length,__t3370t__value__dat__first,__t3370t____t1610t);
  flush__t386t();
  __t_errcode=run__t3264t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3373t__);
  if(__t_errcode){
  goto __t_failure;
  }
  error=__t3373t__;
  nn__t387t(__t3374t,&__t3375t__value,&__t3375t____t389t);
  print__t396t(__t3375t__value,__t3375t____t389t);
  exists__t1174t(error,&__t3377t__);
  if(__t3377t__){
  print_marker__t3300t(colors__initialized);
  print__t398t(__t388t);
  nn__t387t(__t3381t,&__t3382t__value,&__t3382t____t389t);
  print__t396t(__t3382t__value,__t3382t____t389t);
  print__t398t(error);
  __t3385t=1;
  add__t188t(failures,__t3385t,&__t3386t__);
  failures=__t3386t__;
  }
  else{
  print_marker__t3280t(colors__initialized);
  print__t398t(__t388t);
  }
  }
  __t3390t=0;
  eq__t133t(failures,__t3390t,&__t3391t__);
  if(__t3391t__){
  set__t436t(colors__initialized);
  nn__t387t(__t3394t,&__t3395t__value,&__t3395t____t389t);
  print__t396t(__t3395t__value,__t3395t____t389t);
  set__t552t(colors__initialized);
  nn__t387t(__t3399t,&__t3400t__value,&__t3400t____t389t);
  print__t396t(__t3400t__value,__t3400t____t389t);
  nn__t394t(counter,&__t3402t__value,&__t3402t____t395t);
  print__t409t(__t3402t__value,__t3402t____t395t);
  print__t398t(__t3404t);
  }
  else{
  set__t432t(colors__initialized);
  nn__t387t(__t3408t,&__t3409t__value,&__t3409t____t389t);
  print__t396t(__t3409t__value,__t3409t____t389t);
  set__t552t(colors__initialized);
  nn__t394t(failures,&__t3413t__value,&__t3413t____t395t);
  print__t409t(__t3413t__value,__t3413t____t395t);
  nn__t387t(__t3415t,&__t3416t__value,&__t3416t____t389t);
  print__t396t(__t3416t__value,__t3416t____t389t);
  nn__t394t(counter,&__t3418t__value,&__t3418t____t395t);
  print__t409t(__t3418t__value,__t3418t____t395t);
  print__t398t(__t3404t);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t3136t(__t3352t__unsafe_ptr);
  if(__t3346t__initialized){
  printf("\033[0m");
  }
  exists__t609t(__t3342t__unsafe_ptr,&__t3343t____t803t__);
  if(__t3343t____t803t__){
  free__t679t(&__t3342t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t3335t();return 0;}