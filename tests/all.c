#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t3694t="pending";
const char* const __t3835t="PASSING ";
const char* const __t3854t=" tests";
const char* const __t3655t="success";
const char* const __t2313t="+";
const char* const __t3717t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t3725t="    ";
const char* const __t3789t="./smoll --cleanup ";
const char* const __t3816t=".s";
const char* const __t431t="";
const char* const __t3845t="FAILED ";
const char* const __t3840t="no errors across ";
const char* const __t3718t="\r";
const char* const __t3823t="_fail_";
const char* const __t3850t=" out of ";
const char* const __t3675t="failure";
const char* const __t3800t="..";
const char* const __t3658t="V";
const char* const __t3650t="[";
const char* const __t3665t="] ";
const char* const __t443t="\n";
const char* const __t3678t="X";
const char* const __t3809t="/";
const char* const __t3778t="./tests/passing/";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1267t(char** __t3856t, uint64_t* __t3857t, uint32_t* __t3858t, uint32_t* __t3859t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3856t=unsafe_ptr;
  *__t3857t=unsafe_size;
  *__t3858t=unsafe_offset;
  *__t3859t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t3860t) {
  *__t3860t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t3861t) {
  int value=0;
  *__t3861t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t3862t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t3862t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t3863t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t3863t=__t110t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t3864t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3864t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t3865t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3865t=z;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t3866t) {
  int __t374t__=0;
  char z=0;
  is_different__t108t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3866t=z;
}

static inline __attribute__((always_inline)) void nat__t727t(uint32_t x, uint64_t* __t3867t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3867t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t3868t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3868t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t3869t) {
  *__t3869t=to;
}

static inline __attribute__((always_inline)) void add__t724t(char* allocated, uint64_t offset, char** __t3870t) {
  char* element=0;
  char* __t725t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t725t__);
  goto __t_return;
  __t_return:
  *__t3870t=__t725t__;
}

static inline __attribute__((always_inline)) int get__t1055t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t3871t) {
  int __t1056t=0;
  char __t1057t__=0;
  uint64_t __t1058t__=0;
  uint64_t __t1059t__=0;
  uint64_t __t1060t__=0;
  uint64_t __t1061t__=0;
  char* __t1062t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1057t__);
  if(__t1057t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t727t(buffer__unsafe_align,&__t1058t__);
  mul__t212t(i,__t1058t__,&__t1059t__);
  nat__t727t(buffer__unsafe_offset,&__t1060t__);
  add__t188t(__t1059t__,__t1060t__,&__t1061t__);
  add__t724t(buffer__unsafe_ptr,__t1061t__,&__t1062t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3871t=__t1062t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1289t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3872t, uint64_t* __t3873t, uint64_t* __t3874t, char* __t3875t) {
  goto __t_return;
  __t_return:
  *__t3872t=unsafe_ptr;
  *__t3873t=dat__pos;
  *__t3874t=dat__length;
  *__t3875t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1293t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t3876t, uint64_t* __t3877t, uint64_t* __t3878t, char* __t3879t) {
  char* unsafe_ptr=0;
  uint64_t __t1294t__=0;
  uint64_t __t1295t=0;
  char __t1296t__=0;
  uint64_t __t1297t__=0;
  uint64_t __t1298t=0;
  char __t1299t__=0;
  char* __t1300t__unsafe_ptr=0;
  uint64_t __t1300t__dat__pos=0;
  uint64_t __t1300t__dat__length=0;
  char __t1300t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t727t(buf__unsafe_align,&__t1294t__);
  __t1295t=1;
  neq__t157t(__t1294t__,__t1295t,&__t1296t__);
  if(__t1296t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t727t(buf__unsafe_offset,&__t1297t__);
  __t1298t=0;
  neq__t157t(__t1297t__,__t1298t,&__t1299t__);
  if(__t1299t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t1289t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1300t__unsafe_ptr,&__t1300t__dat__pos,&__t1300t__dat__length,&__t1300t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3876t=__t1300t__unsafe_ptr;
  *__t3877t=__t1300t__dat__pos;
  *__t3878t=__t1300t__dat__length;
  *__t3879t=__t1300t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1327t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t3880t, uint64_t* __t3881t, uint64_t* __t3882t, char* __t3883t) {
  uint64_t __t1328t=0;
  char __t1329t__=0;
  char* __t1331t__=0;
  char __t1332t__value=0;
  char first=0;
  char* __t1333t__unsafe_ptr=0;
  uint64_t __t1333t__dat__pos=0;
  uint64_t __t1333t__dat__length=0;
  char __t1333t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1328t=0;
  neq__t157t(length,__t1328t,&__t1329t__);
  if(__t1329t__){
  __t_errcode=get__t1055t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1331t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1331t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1332t__value,__t1331t__,1);
  first=__t1332t__value;
  }
  __t_errcode=str__t1293t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1333t__unsafe_ptr,&__t1333t__dat__pos,&__t1333t__dat__length,&__t1333t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3880t=__t1333t__unsafe_ptr;
  *__t3881t=__t1333t__dat__pos;
  *__t3882t=__t1333t__dat__length;
  *__t3883t=__t1333t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1349t(const char* c, char** __t3884t, uint64_t* __t3885t, uint64_t* __t3886t, char* __t3887t) {
  char* __t1350t__unsafe_ptr=0;
  uint64_t __t1350t__unsafe_size=0;
  uint32_t __t1350t__unsafe_offset=0;
  uint32_t __t1350t__unsafe_align=0;
  char* __t1351t__unsafe_ptr=0;
  uint64_t __t1351t__unsafe_size=0;
  uint32_t __t1351t__unsafe_offset=0;
  uint32_t __t1351t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1352t__=0;
  uint64_t length=0;
  uint64_t __t1353t=0;
  uint64_t __t1354t__=0;
  char __t1355t=0;
  uint64_t __t1356t=0;
  char* __t1358t__unsafe_ptr=0;
  uint64_t __t1358t__dat__pos=0;
  uint64_t __t1358t__dat__length=0;
  char __t1358t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1267t(&__t1350t__unsafe_ptr,&__t1350t__unsafe_size,&__t1350t__unsafe_offset,&__t1350t__unsafe_align);
  __t1351t__unsafe_ptr=__t1350t__unsafe_ptr;
  __t1351t__unsafe_size=__t1350t__unsafe_size;
  __t1351t__unsafe_offset=__t1350t__unsafe_offset;
  __t1351t__unsafe_align=__t1350t__unsafe_align;
  buf__unsafe_ptr=__t1351t__unsafe_ptr;
  buf__unsafe_size=__t1351t__unsafe_size;
  buf__unsafe_offset=__t1351t__unsafe_offset;
  buf__unsafe_align=__t1351t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1352t__);
  buf__unsafe_ptr=__t1352t__;
  if(c){
  length=strlen(c);
  }
  __t1353t=1;
  add__t188t(length,__t1353t,&__t1354t__);
  buf__unsafe_size=__t1354t__;
  __t1356t=0;
  __t_complain=str__t1327t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1356t,length,&__t1358t__unsafe_ptr,&__t1358t__dat__pos,&__t1358t__dat__length,&__t1358t__dat__first);
  __t1355t=__t_complain;
  if(__t_complain){
  goto __t1355t__label;
  }
  ret__unsafe_ptr=__t1358t__unsafe_ptr;
  ret__dat__pos=__t1358t__dat__pos;
  ret__dat__length=__t1358t__dat__length;
  ret__dat__first=__t1358t__dat__first;
  __t1355t__label:__t1355t=__t1355t==0;
  goto __t_return;
  __t_return:
  *__t3884t=ret__unsafe_ptr;
  *__t3885t=ret__dat__pos;
  *__t3886t=ret__dat__length;
  *__t3887t=ret__dat__first;
}

static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void supports_ansi__t468t(char* __t3888t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t3888t=supports;
}

static inline __attribute__((always_inline)) void colors__t469t(char* __t3889t) {
  char __t470t__=0;
  char initialized=0;
  supports_ansi__t468t(&__t470t__);
  initialized=__t470t__;
  goto __t_return;
  __t_return:
  *__t3889t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t991t(char** __t3890t, uint64_t* __t3891t, uint32_t* __t3892t, uint32_t* __t3893t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3890t=unsafe_ptr;
  *__t3891t=unsafe_size;
  *__t3892t=unsafe_offset;
  *__t3893t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t722t(char** __t3894t) {
  char* allocated=*__t3894t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t3894t=allocated;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t3895t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3895t=z;
}

static inline __attribute__((always_inline)) void zero__t723t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t652t(char* x, char* __t3896t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3896t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t3897t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3897t=z;
}

static inline __attribute__((always_inline)) int alloc__t715t(uint64_t bytes, char** __t3898t) {
  char* allocated=0;
  char __t716t__=0;
  char __t717t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t652t(allocated,&__t716t__);
  not__t41t(__t716t__,&__t717t__);
  if(__t717t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3898t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t839t(char** __t3899t, uint64_t* __t3900t, uint32_t* __t3901t, uint32_t* __t3902t, uint64_t size, char** __t3903t, uint64_t* __t3904t, uint32_t* __t3905t, uint32_t* __t3906t) {
  char* buffer__unsafe_ptr=*__t3899t;
  uint64_t buffer__unsafe_size=*__t3900t;
  uint32_t buffer__unsafe_offset=*__t3901t;
  uint32_t buffer__unsafe_align=*__t3902t;
  int __t840t=0;
  char __t842t__=0;
  uint64_t __t843t=0;
  char __t844t__=0;
  char __t845t=0;
  uint64_t __t846t=0;
  uint64_t __t847t__=0;
  uint64_t __t848t__=0;
  int __t850t=0;
  uint64_t __t851t=0;
  char __t852t__=0;
  uint64_t __t853t__=0;
  uint64_t __t854t__=0;
  uint64_t bytes=0;
  int __t855t=0;
  uint64_t __t856t=0;
  char __t857t__=0;
  char* __t858t__=0;
  int __t859t=0;
  uint64_t __t860t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t842t__);
  if(__t842t__){
  __t843t=0;
  neq__t157t(size,__t843t,&__t844t__);
  __t845t=__t844t__;
  }
  if(__t845t){
  __t846t=0;
  nat__t727t(buffer__unsafe_align,&__t847t__);
  mul__t212t(__t847t__,size,&__t848t__);
  zero__t723t(buffer__unsafe_ptr,__t846t,__t848t__);
  goto __t_return;
  }
  __t851t=0;
  neq__t157t(buffer__unsafe_size,__t851t,&__t852t__);
  if(__t852t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t727t(buffer__unsafe_align,&__t853t__);
  mul__t212t(__t853t__,size,&__t854t__);
  bytes=__t854t__;
  __t856t=0;
  eq__t133t(bytes,__t856t,&__t857t__);
  if(__t857t__){
  __t_errcode=12;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t715t(bytes,&__t858t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t860t=0;
  zero__t723t(__t858t__,__t860t,bytes);
  buffer__unsafe_ptr=__t858t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t722t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3899t=buffer__unsafe_ptr;
  *__t3900t=buffer__unsafe_size;
  *__t3901t=buffer__unsafe_offset;
  *__t3902t=buffer__unsafe_align;
  *__t3903t=buffer__unsafe_ptr;
  *__t3904t=buffer__unsafe_size;
  *__t3905t=buffer__unsafe_offset;
  *__t3906t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t990t(uint64_t size, char** __t3907t, uint64_t* __t3908t, uint32_t* __t3909t, uint32_t* __t3910t) {
  char* __t993t__unsafe_ptr=0;
  uint64_t __t993t__unsafe_size=0;
  uint32_t __t993t__unsafe_offset=0;
  uint32_t __t993t__unsafe_align=0;
  char* __t994t__unsafe_ptr=0;
  uint64_t __t994t__unsafe_size=0;
  uint32_t __t994t__unsafe_offset=0;
  uint32_t __t994t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t991t(&__t993t__unsafe_ptr,&__t993t__unsafe_size,&__t993t__unsafe_offset,&__t993t__unsafe_align);
  __t_errcode=alloc__t839t(&__t993t__unsafe_ptr,&__t993t__unsafe_size,&__t993t__unsafe_offset,&__t993t__unsafe_align,size,&__t994t__unsafe_ptr,&__t994t__unsafe_size,&__t994t__unsafe_offset,&__t994t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t722t(&__t994t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3907t=__t994t__unsafe_ptr;
  *__t3908t=__t994t__unsafe_size;
  *__t3909t=__t994t__unsafe_offset;
  *__t3910t=__t994t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1068t(char** __t3911t, uint64_t* __t3912t, uint32_t* __t3913t, uint32_t* __t3914t, uint64_t _pos, char** __t3915t, uint64_t* __t3916t, uint32_t* __t3917t, uint32_t* __t3918t, uint64_t* __t3919t) {
  char* buf__unsafe_ptr=*__t3911t;
  uint64_t buf__unsafe_size=*__t3912t;
  uint32_t buf__unsafe_offset=*__t3913t;
  uint32_t buf__unsafe_align=*__t3914t;
  uint64_t __t1069t=0;
  uint64_t pos=0;
  __t1069t=_pos;
  pos=__t1069t;
  goto __t_return;
  __t_return:
  *__t3911t=buf__unsafe_ptr;
  *__t3912t=buf__unsafe_size;
  *__t3913t=buf__unsafe_offset;
  *__t3914t=buf__unsafe_align;
  *__t3915t=buf__unsafe_ptr;
  *__t3916t=buf__unsafe_size;
  *__t3917t=buf__unsafe_offset;
  *__t3918t=buf__unsafe_align;
  *__t3919t=pos;
}

static inline __attribute__((always_inline)) void arena__t1071t(char** __t3920t, uint64_t* __t3921t, uint32_t* __t3922t, uint32_t* __t3923t, char** __t3924t, uint64_t* __t3925t, uint32_t* __t3926t, uint32_t* __t3927t, uint64_t* __t3928t) {
  char* buf__unsafe_ptr=*__t3920t;
  uint64_t buf__unsafe_size=*__t3921t;
  uint32_t buf__unsafe_offset=*__t3922t;
  uint32_t buf__unsafe_align=*__t3923t;
  uint64_t __t1072t=0;
  char* __t1073t__buf__unsafe_ptr=0;
  uint64_t __t1073t__buf__unsafe_size=0;
  uint32_t __t1073t__buf__unsafe_offset=0;
  uint32_t __t1073t__buf__unsafe_align=0;
  uint64_t __t1073t__pos=0;
  __t1072t=0;
  arena__t1068t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1072t,&__t1073t__buf__unsafe_ptr,&__t1073t__buf__unsafe_size,&__t1073t__buf__unsafe_offset,&__t1073t__buf__unsafe_align,&__t1073t__pos);
  goto __t_return;
  __t_return:
  *__t3920t=buf__unsafe_ptr;
  *__t3921t=buf__unsafe_size;
  *__t3922t=buf__unsafe_offset;
  *__t3923t=buf__unsafe_align;
  *__t3924t=__t1073t__buf__unsafe_ptr;
  *__t3925t=__t1073t__buf__unsafe_size;
  *__t3926t=__t1073t__buf__unsafe_offset;
  *__t3927t=__t1073t__buf__unsafe_align;
  *__t3928t=__t1073t__pos;
}

static inline __attribute__((always_inline)) void len__t1359t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t3929t) {
  goto __t_return;
  __t_return:
  *__t3929t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t1063t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t3930t) {
  goto __t_return;
  __t_return:
  *__t3930t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t3931t) {
  int __t326t__=0;
  char z=0;
  is_different__t108t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t3931t=z;
}

static inline __attribute__((always_inline)) void allocated__t1075t(char** __t3932t, uint64_t* __t3933t, uint32_t* __t3934t, uint32_t* __t3935t, uint64_t pos, char** __t3936t, uint64_t* __t3937t, uint32_t* __t3938t, uint32_t* __t3939t, uint64_t* __t3940t) {
  char* buf__unsafe_ptr=*__t3932t;
  uint64_t buf__unsafe_size=*__t3933t;
  uint32_t buf__unsafe_offset=*__t3934t;
  uint32_t buf__unsafe_align=*__t3935t;
  goto __t_return;
  __t_return:
  *__t3932t=buf__unsafe_ptr;
  *__t3933t=buf__unsafe_size;
  *__t3934t=buf__unsafe_offset;
  *__t3935t=buf__unsafe_align;
  *__t3936t=buf__unsafe_ptr;
  *__t3937t=buf__unsafe_size;
  *__t3938t=buf__unsafe_offset;
  *__t3939t=buf__unsafe_align;
  *__t3940t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1150t(char** __t3941t, uint64_t* __t3942t, uint32_t* __t3943t, uint32_t* __t3944t, uint64_t* __t3945t, uint64_t length, char** __t3946t, uint64_t* __t3947t, uint32_t* __t3948t, uint32_t* __t3949t, uint64_t* __t3950t) {
  char* allocator__buf__unsafe_ptr=*__t3941t;
  uint64_t allocator__buf__unsafe_size=*__t3942t;
  uint32_t allocator__buf__unsafe_offset=*__t3943t;
  uint32_t allocator__buf__unsafe_align=*__t3944t;
  uint64_t allocator__pos=*__t3945t;
  int __t1151t=0;
  uint64_t __t1152t__=0;
  uint64_t next_pos=0;
  uint64_t __t1153t__=0;
  char __t1154t__=0;
  uint64_t __t1155t=0;
  uint64_t __t1156t__=0;
  uint64_t pos=0;
  char* __t1157t__buf__unsafe_ptr=0;
  uint64_t __t1157t__buf__unsafe_size=0;
  uint32_t __t1157t__buf__unsafe_offset=0;
  uint32_t __t1157t__buf__unsafe_align=0;
  uint64_t __t1157t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1152t__);
  next_pos=__t1152t__;
  len__t1063t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1153t__);
  gt__t325t(next_pos,__t1153t__,&__t1154t__);
  if(__t1154t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t1155t=0;
  add__t188t(allocator__pos,__t1155t,&__t1156t__);
  pos=__t1156t__;
  allocator__pos=next_pos;
  allocated__t1075t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1157t__buf__unsafe_ptr,&__t1157t__buf__unsafe_size,&__t1157t__buf__unsafe_offset,&__t1157t__buf__unsafe_align,&__t1157t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3941t=allocator__buf__unsafe_ptr;
  *__t3942t=allocator__buf__unsafe_size;
  *__t3943t=allocator__buf__unsafe_offset;
  *__t3944t=allocator__buf__unsafe_align;
  *__t3945t=allocator__pos;
  *__t3946t=__t1157t__buf__unsafe_ptr;
  *__t3947t=__t1157t__buf__unsafe_size;
  *__t3948t=__t1157t__buf__unsafe_offset;
  *__t3949t=__t1157t__buf__unsafe_align;
  *__t3950t=__t1157t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1381t(char** __t3951t, uint64_t* __t3952t, uint32_t* __t3953t, uint32_t* __t3954t, uint64_t* __t3955t, const char* _other, char** __t3956t, uint64_t* __t3957t, uint64_t* __t3958t, char* __t3959t) {
  char* CHARS__buf__unsafe_ptr=*__t3951t;
  uint64_t CHARS__buf__unsafe_size=*__t3952t;
  uint32_t CHARS__buf__unsafe_offset=*__t3953t;
  uint32_t CHARS__buf__unsafe_align=*__t3954t;
  uint64_t CHARS__pos=*__t3955t;
  char* __t1382t__unsafe_ptr=0;
  uint64_t __t1382t__dat__pos=0;
  uint64_t __t1382t__dat__length=0;
  char __t1382t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1383t__=0;
  char* __t1384t__buf__unsafe_ptr=0;
  uint64_t __t1384t__buf__unsafe_size=0;
  uint32_t __t1384t__buf__unsafe_offset=0;
  uint32_t __t1384t__buf__unsafe_align=0;
  uint64_t __t1384t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1385t__unsafe_ptr=0;
  uint64_t __t1385t__dat__pos=0;
  uint64_t __t1385t__dat__length=0;
  char __t1385t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1349t(_other,&__t1382t__unsafe_ptr,&__t1382t__dat__pos,&__t1382t__dat__length,&__t1382t__dat__first);
  other__unsafe_ptr=__t1382t__unsafe_ptr;
  other__dat__pos=__t1382t__dat__pos;
  other__dat__length=__t1382t__dat__length;
  other__dat__first=__t1382t__dat__first;
  len__t1359t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1383t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1383t__,&__t1384t__buf__unsafe_ptr,&__t1384t__buf__unsafe_size,&__t1384t__buf__unsafe_offset,&__t1384t__buf__unsafe_align,&__t1384t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1384t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1384t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1384t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1384t__buf__unsafe_align;
  surface__pos=__t1384t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1293t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1385t__unsafe_ptr,&__t1385t__dat__pos,&__t1385t__dat__length,&__t1385t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3951t=CHARS__buf__unsafe_ptr;
  *__t3952t=CHARS__buf__unsafe_size;
  *__t3953t=CHARS__buf__unsafe_offset;
  *__t3954t=CHARS__buf__unsafe_align;
  *__t3955t=CHARS__pos;
  *__t3956t=__t1385t__unsafe_ptr;
  *__t3957t=__t1385t__dat__pos;
  *__t3958t=__t1385t__dat__length;
  *__t3959t=__t1385t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1064t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1407t(char** __t3960t, uint64_t* __t3961t, uint32_t* __t3962t, uint32_t* __t3963t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t3960t=unsafe_ptr;
  *__t3961t=unsafe_size;
  *__t3962t=unsafe_offset;
  *__t3963t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1406t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t3964t, uint64_t* __t3965t, uint64_t* __t3966t, char* __t3967t) {
  char* __t1409t__unsafe_ptr=0;
  uint64_t __t1409t__unsafe_size=0;
  uint32_t __t1409t__unsafe_offset=0;
  uint32_t __t1409t__unsafe_align=0;
  uint64_t __t1410t=0;
  uint64_t __t1411t__=0;
  uint64_t __t1412t__=0;
  char* __t1413t__unsafe_ptr=0;
  uint64_t __t1413t__unsafe_size=0;
  uint32_t __t1413t__unsafe_offset=0;
  uint32_t __t1413t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1415t=0;
  char* __t1416t__unsafe_ptr=0;
  uint64_t __t1416t__dat__pos=0;
  uint64_t __t1416t__dat__length=0;
  char __t1416t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1407t(&__t1409t__unsafe_ptr,&__t1409t__unsafe_size,&__t1409t__unsafe_offset,&__t1409t__unsafe_align);
  __t1410t=1;
  len__t1359t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1411t__);
  add__t188t(__t1410t,__t1411t__,&__t1412t__);
  __t_errcode=alloc__t839t(&__t1409t__unsafe_ptr,&__t1409t__unsafe_size,&__t1409t__unsafe_offset,&__t1409t__unsafe_align,__t1412t__,&__t1413t__unsafe_ptr,&__t1413t__unsafe_size,&__t1413t__unsafe_offset,&__t1413t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1413t__unsafe_ptr;
  buf__unsafe_size=__t1413t__unsafe_size;
  buf__unsafe_offset=__t1413t__unsafe_offset;
  buf__unsafe_align=__t1413t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1415t=0;
  __t_errcode=str__t1293t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1415t,other__dat__length,other__dat__first,&__t1416t__unsafe_ptr,&__t1416t__dat__pos,&__t1416t__dat__length,&__t1416t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t722t(&__t1416t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3964t=__t1416t__unsafe_ptr;
  *__t3965t=__t1416t__dat__pos;
  *__t3966t=__t1416t__dat__length;
  *__t3967t=__t1416t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1431t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3968t, char** __t3969t, uint64_t* __t3970t, uint64_t* __t3971t, char* __t3972t) {
  int __t1432t=0;
  char* __t1434t__unsafe_ptr=0;
  uint64_t __t1434t__dat__pos=0;
  uint64_t __t1434t__dat__length=0;
  char __t1434t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1436t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1064t();
  __t_errcode=copy_null_terminated__t1406t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1434t__unsafe_ptr,&__t1434t__dat__pos,&__t1434t__dat__length,&__t1434t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1434t__unsafe_ptr;
  str__dat__pos=__t1434t__dat__pos;
  str__dat__length=__t1434t__dat__length;
  str__dat__first=__t1434t__dat__first;
  add__t724t(str__unsafe_ptr,str__dat__pos,&__t1436t__);
  _ret=__t1436t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t722t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3968t=cstr;
  *__t3969t=str__unsafe_ptr;
  *__t3970t=str__dat__pos;
  *__t3971t=str__dat__length;
  *__t3972t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1441t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3973t) {
  goto __t_return;
  __t_return:
  *__t3973t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t3498t(char* unsafe_ptr) {
  int __t3500t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t3501t(const char* path, char** __t3974t) {
  int __t3503t=0;
  char* unsafe_ptr=0;
  char __t3505t__=0;
  char __t3506t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t652t(unsafe_ptr,&__t3505t__);
  not__t41t(__t3505t__,&__t3506t__);
  if(__t3506t__){
  __t_errcode=41;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t3498t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3974t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t3508t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t3975t) {
  const char* __t3509t__cstr=0;
  char* __t3509t__str__unsafe_ptr=0;
  uint64_t __t3509t__str__dat__pos=0;
  uint64_t __t3509t__str__dat__length=0;
  char __t3509t__str__dat__first=0;
  const char* __t3511t__=0;
  char* __t3512t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1431t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t3509t__cstr,&__t3509t__str__unsafe_ptr,&__t3509t__str__dat__pos,&__t3509t__str__dat__length,&__t3509t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1441t(__t3509t__cstr,__t3509t__str__unsafe_ptr,__t3509t__str__dat__pos,__t3509t__str__dat__length,__t3509t__str__dat__first,&__t3511t__);
  __t_errcode=open__t3501t(__t3511t__,&__t3512t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t3498t(__t3512t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3975t=__t3512t__unsafe_ptr;
  
  __t_skip_returns:free__t722t(&__t3509t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t3520t(char** __t3976t, const char** __t3977t) {
  char* f__unsafe_ptr=*__t3976t;
  char __t3521t__=0;
  char __t3522t__=0;
  char* de=0;
  char __t3523t__=0;
  char __t3524t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t652t(f__unsafe_ptr,&__t3521t__);
  not__t41t(__t3521t__,&__t3522t__);
  if(__t3522t__){
  __t_errcode=52;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t652t(de,&__t3523t__);
  not__t41t(__t3523t__,&__t3524t__);
  if(__t3524t__){
  __t_errcode=53;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3976t=f__unsafe_ptr;
  *__t3977t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t3525t(char** __t3978t, char** __t3979t, uint64_t* __t3980t, uint64_t* __t3981t, char* __t3982t) {
  char* f__unsafe_ptr=*__t3978t;
  const char* __t3526t__=0;
  char* __t3527t__unsafe_ptr=0;
  uint64_t __t3527t__dat__pos=0;
  uint64_t __t3527t__dat__length=0;
  char __t3527t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t3520t(&f__unsafe_ptr,&__t3526t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1349t(__t3526t__,&__t3527t__unsafe_ptr,&__t3527t__dat__pos,&__t3527t__dat__length,&__t3527t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3978t=f__unsafe_ptr;
  *__t3979t=__t3527t__unsafe_ptr;
  *__t3980t=__t3527t__dat__pos;
  *__t3981t=__t3527t__dat__length;
  *__t3982t=__t3527t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t3591t(char** __t3983t, uint64_t __t_anon1, char** __t3984t, uint64_t* __t3985t, uint64_t* __t3986t, char* __t3987t) {
  char* data__unsafe_ptr=*__t3983t;
  char* __t3592t__unsafe_ptr=0;
  uint64_t __t3592t__dat__pos=0;
  uint64_t __t3592t__dat__length=0;
  char __t3592t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t3525t(&data__unsafe_ptr,&__t3592t__unsafe_ptr,&__t3592t__dat__pos,&__t3592t__dat__length,&__t3592t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3983t=data__unsafe_ptr;
  *__t3984t=__t3592t__unsafe_ptr;
  *__t3985t=__t3592t__dat__pos;
  *__t3986t=__t3592t__dat__length;
  *__t3987t=__t3592t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1361t(const char* s, char* __t3988t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t3988t=c;
}

static inline __attribute__((always_inline)) void neq__t1363t(char x, char y, char* __t3989t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t3989t=z;
}

static inline __attribute__((always_inline)) void eq__t1448t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t3990t) {
  uint64_t __t1449t__=0;
  uint64_t n=0;
  uint64_t __t1450t__=0;
  char __t1451t__=0;
  char __t1452t=0;
  char __t1453t__=0;
  char __t1454t=0;
  char z=0;
  len__t1359t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1449t__);
  n=__t1449t__;
  len__t1359t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1450t__);
  neq__t157t(n,__t1450t__,&__t1451t__);
  if(__t1451t__){
  __t1452t=0;
  goto __t_return;
  }
  neq__t1363t(x__dat__first,y__dat__first,&__t1453t__);
  if(__t1453t__){
  __t1454t=0;
  __t1452t=__t1454t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1452t=z;
  goto __t_return;
  __t_return:
  *__t3990t=__t1452t;
}

void eq__t1455t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t3991t) {
  char __t1456t__=0;
  char __t1457t__=0;
  char __t1458t=0;
  char* __t1459t__unsafe_ptr=0;
  uint64_t __t1459t__dat__pos=0;
  uint64_t __t1459t__dat__length=0;
  char __t1459t__dat__first=0;
  char __t1460t__=0;
  char__t1361t(y,&__t1456t__);
  neq__t1363t(x__dat__first,__t1456t__,&__t1457t__);
  if(__t1457t__){
  __t1458t=0;
  goto __t_return;
  }
  str__t1349t(y,&__t1459t__unsafe_ptr,&__t1459t__dat__pos,&__t1459t__dat__length,&__t1459t__dat__first);
  eq__t1448t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1459t__unsafe_ptr,__t1459t__dat__pos,__t1459t__dat__length,__t1459t__dat__first,&__t1460t__);
  __t1458t=__t1460t__;
  goto __t_return;
  __t_return:
  *__t3991t=__t1458t;
}

int unsafe_temp__t1417t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t3992t, char** __t3993t, uint64_t* __t3994t, uint64_t* __t3995t, char* __t3996t) {
  int __t1418t=0;
  char* __t1419t__unsafe_ptr=0;
  uint64_t __t1419t__unsafe_size=0;
  uint32_t __t1419t__unsafe_offset=0;
  uint32_t __t1419t__unsafe_align=0;
  uint64_t __t1420t=0;
  uint64_t __t1421t__=0;
  uint64_t __t1422t__=0;
  char* __t1423t__unsafe_ptr=0;
  uint64_t __t1423t__unsafe_size=0;
  uint32_t __t1423t__unsafe_offset=0;
  uint32_t __t1423t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1425t=0;
  char __t1426t__=0;
  char first_character=0;
  uint64_t __t1427t=0;
  char* __t1428t__unsafe_ptr=0;
  uint64_t __t1428t__dat__pos=0;
  uint64_t __t1428t__dat__length=0;
  char __t1428t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1429t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1407t(&__t1419t__unsafe_ptr,&__t1419t__unsafe_size,&__t1419t__unsafe_offset,&__t1419t__unsafe_align);
  __t1420t=1;
  add__t188t(__t1420t,other__dat__length,&__t1421t__);
  add__t188t(__t1421t__,prefix__dat__length,&__t1422t__);
  __t_errcode=alloc__t839t(&__t1419t__unsafe_ptr,&__t1419t__unsafe_size,&__t1419t__unsafe_offset,&__t1419t__unsafe_align,__t1422t__,&__t1423t__unsafe_ptr,&__t1423t__unsafe_size,&__t1423t__unsafe_offset,&__t1423t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1423t__unsafe_ptr;
  buf__unsafe_size=__t1423t__unsafe_size;
  buf__unsafe_offset=__t1423t__unsafe_offset;
  buf__unsafe_align=__t1423t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1425t=0;
  eq__t133t(prefix__dat__length,__t1425t,&__t1426t__);
  if(__t1426t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1427t=0;
  __t_errcode=str__t1293t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1427t,other__dat__length,first_character,&__t1428t__unsafe_ptr,&__t1428t__dat__pos,&__t1428t__dat__length,&__t1428t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1428t__unsafe_ptr;
  str__dat__pos=__t1428t__dat__pos;
  str__dat__length=__t1428t__dat__length;
  str__dat__first=__t1428t__dat__first;
  add__t724t(str__unsafe_ptr,str__dat__pos,&__t1429t__);
  _ret=__t1429t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t722t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t3992t=cstr;
  *__t3993t=str__unsafe_ptr;
  *__t3994t=str__dat__pos;
  *__t3995t=str__dat__length;
  *__t3996t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1440t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t3997t) {
  goto __t_return;
  __t_return:
  *__t3997t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t3425t(const char* path, char* __t3998t) {
  int __t3427t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t3998t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t3435t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t3999t) {
  int __t3437t=0;
  const char* __t3438t__cstr=0;
  char* __t3438t__str__unsafe_ptr=0;
  uint64_t __t3438t__str__dat__pos=0;
  uint64_t __t3438t__str__dat__length=0;
  char __t3438t__str__dat__first=0;
  const char* __t3440t__=0;
  char __t3441t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1417t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t3438t__cstr,&__t3438t__str__unsafe_ptr,&__t3438t__str__dat__pos,&__t3438t__str__dat__length,&__t3438t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1440t(__t3438t__cstr,__t3438t__str__unsafe_ptr,__t3438t__str__dat__pos,__t3438t__str__dat__length,__t3438t__str__dat__first,&__t3440t__);
  is_dir__t3425t(__t3440t__,&__t3441t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3999t=__t3441t__;
  
  __t_skip_returns:free__t722t(&__t3438t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void reuse__t3772t(char** __t4000t, uint64_t* __t4001t, uint32_t* __t4002t, uint32_t* __t4003t, uint64_t* __t4004t, uint64_t* __t4005t) {
  char* arn__buf__unsafe_ptr=*__t4000t;
  uint64_t arn__buf__unsafe_size=*__t4001t;
  uint32_t arn__buf__unsafe_offset=*__t4002t;
  uint32_t arn__buf__unsafe_align=*__t4003t;
  uint64_t arn__pos=*__t4004t;
  uint64_t __t3773t=0;
  uint64_t __t3774t__=0;
  uint64_t tracked_position=0;
  uint64_t __t3775t=0;
  uint64_t __t3776t__=0;
  __t3773t=0;
  add__t188t(__t3773t,arn__pos,&__t3774t__);
  tracked_position=__t3774t__;
  goto __t_return;
  __t_return:
  *__t4000t=arn__buf__unsafe_ptr;
  *__t4001t=arn__buf__unsafe_size;
  *__t4002t=arn__buf__unsafe_offset;
  *__t4003t=arn__buf__unsafe_align;
  *__t4004t=arn__pos;
  *__t4005t=tracked_position;
}

static inline __attribute__((always_inline)) void str__t1326t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t4006t, uint64_t* __t4007t, uint64_t* __t4008t, char* __t4009t) {
  goto __t_return;
  __t_return:
  *__t4006t=other__unsafe_ptr;
  *__t4007t=other__dat__pos;
  *__t4008t=other__dat__length;
  *__t4009t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t161t(char* x, char* y, char* __t4010t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t4010t=z;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t4011t) {
  int __t302t__=0;
  char z=0;
  is_different__t108t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t4011t=z;
}

static inline __attribute__((always_inline)) void status__t1080t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t4012t, uint64_t* __t4013t, uint32_t* __t4014t, uint32_t* __t4015t, uint64_t* __t4016t) {
  char* __t1081t__unsafe_ptr=0;
  uint64_t __t1081t__unsafe_size=0;
  uint32_t __t1081t__unsafe_offset=0;
  uint32_t __t1081t__unsafe_align=0;
  uint64_t __t1082t=0;
  __t1081t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1081t__unsafe_size=self__buf__unsafe_size;
  __t1081t__unsafe_offset=self__buf__unsafe_offset;
  __t1081t__unsafe_align=self__buf__unsafe_align;
  __t1082t=self__pos;
  goto __t_return;
  __t_return:
  *__t4012t=__t1081t__unsafe_ptr;
  *__t4013t=__t1081t__unsafe_size;
  *__t4014t=__t1081t__unsafe_offset;
  *__t4015t=__t1081t__unsafe_align;
  *__t4016t=__t1082t;
}

static inline __attribute__((always_inline)) int copy__t1376t(char** __t4017t, uint64_t* __t4018t, uint32_t* __t4019t, uint32_t* __t4020t, uint64_t* __t4021t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t4022t, uint64_t* __t4023t, uint64_t* __t4024t, char* __t4025t) {
  char* CHARS__buf__unsafe_ptr=*__t4017t;
  uint64_t CHARS__buf__unsafe_size=*__t4018t;
  uint32_t CHARS__buf__unsafe_offset=*__t4019t;
  uint32_t CHARS__buf__unsafe_align=*__t4020t;
  uint64_t CHARS__pos=*__t4021t;
  char* __t1377t__unsafe_ptr=0;
  uint64_t __t1377t__dat__pos=0;
  uint64_t __t1377t__dat__length=0;
  char __t1377t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1378t__=0;
  char* __t1379t__buf__unsafe_ptr=0;
  uint64_t __t1379t__buf__unsafe_size=0;
  uint32_t __t1379t__buf__unsafe_offset=0;
  uint32_t __t1379t__buf__unsafe_align=0;
  uint64_t __t1379t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1380t__unsafe_ptr=0;
  uint64_t __t1380t__dat__pos=0;
  uint64_t __t1380t__dat__length=0;
  char __t1380t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1326t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1377t__unsafe_ptr,&__t1377t__dat__pos,&__t1377t__dat__length,&__t1377t__dat__first);
  other__unsafe_ptr=__t1377t__unsafe_ptr;
  other__dat__pos=__t1377t__dat__pos;
  other__dat__length=__t1377t__dat__length;
  other__dat__first=__t1377t__dat__first;
  len__t1359t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1378t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1378t__,&__t1379t__buf__unsafe_ptr,&__t1379t__buf__unsafe_size,&__t1379t__buf__unsafe_offset,&__t1379t__buf__unsafe_align,&__t1379t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1379t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1379t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1379t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1379t__buf__unsafe_align;
  surface__pos=__t1379t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1293t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1380t__unsafe_ptr,&__t1380t__dat__pos,&__t1380t__dat__length,&__t1380t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4017t=CHARS__buf__unsafe_ptr;
  *__t4018t=CHARS__buf__unsafe_size;
  *__t4019t=CHARS__buf__unsafe_offset;
  *__t4020t=CHARS__buf__unsafe_align;
  *__t4021t=CHARS__pos;
  *__t4022t=__t1380t__unsafe_ptr;
  *__t4023t=__t1380t__dat__pos;
  *__t4024t=__t1380t__dat__length;
  *__t4025t=__t1380t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1077t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t4026t, uint64_t* __t4027t, uint32_t* __t4028t, uint32_t* __t4029t, uint64_t* __t4030t) {
  char* __t1078t__unsafe_ptr=0;
  uint64_t __t1078t__unsafe_size=0;
  uint32_t __t1078t__unsafe_offset=0;
  uint32_t __t1078t__unsafe_align=0;
  uint64_t __t1079t=0;
  __t1078t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1078t__unsafe_size=self__buf__unsafe_size;
  __t1078t__unsafe_offset=self__buf__unsafe_offset;
  __t1078t__unsafe_align=self__buf__unsafe_align;
  __t1079t=self__pos;
  goto __t_return;
  __t_return:
  *__t4026t=__t1078t__unsafe_ptr;
  *__t4027t=__t1078t__unsafe_size;
  *__t4028t=__t1078t__unsafe_offset;
  *__t4029t=__t1078t__unsafe_align;
  *__t4030t=__t1079t;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t4031t) {
  int __t402t__=0;
  int __t403t=0;
  int __t404t=0;
  char __t405t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t108t(x,y,&__t402t__);
  lt__t301t(x,y,&__t405t__);
  if(__t405t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4031t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1345t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t4032t, uint64_t* __t4033t, uint64_t* __t4034t, char* __t4035t) {
  uint64_t __t1347t__=0;
  char* __t1348t__unsafe_ptr=0;
  uint64_t __t1348t__dat__pos=0;
  uint64_t __t1348t__dat__length=0;
  char __t1348t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t401t(endpos,pos,&__t1347t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1327t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1347t__,&__t1348t__unsafe_ptr,&__t1348t__dat__pos,&__t1348t__dat__length,&__t1348t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4032t=__t1348t__unsafe_ptr;
  *__t4033t=__t1348t__dat__pos;
  *__t4034t=__t1348t__dat__length;
  *__t4035t=__t1348t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t1961t(char** __t4036t, uint64_t* __t4037t, uint32_t* __t4038t, uint32_t* __t4039t, uint64_t* __t4040t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t4041t, uint64_t* __t4042t, uint64_t* __t4043t, char* __t4044t) {
  char* CHARS__buf__unsafe_ptr=*__t4036t;
  uint64_t CHARS__buf__unsafe_size=*__t4037t;
  uint32_t CHARS__buf__unsafe_offset=*__t4038t;
  uint32_t CHARS__buf__unsafe_align=*__t4039t;
  uint64_t CHARS__pos=*__t4040t;
  char* __t1962t__unsafe_ptr=0;
  uint64_t __t1962t__dat__pos=0;
  uint64_t __t1962t__dat__length=0;
  char __t1962t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1963t__unsafe_ptr=0;
  uint64_t __t1963t__dat__pos=0;
  uint64_t __t1963t__dat__length=0;
  char __t1963t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t1964t__=0;
  uint64_t __t1965t__=0;
  char __t1966t__=0;
  char __t1967t=0;
  uint64_t __t1968t__=0;
  char __t1969t__=0;
  char __t1970t=0;
  uint64_t __t1971t__=0;
  char* __t1972t__buf__unsafe_ptr=0;
  uint64_t __t1972t__buf__unsafe_size=0;
  uint32_t __t1972t__buf__unsafe_offset=0;
  uint32_t __t1972t__buf__unsafe_align=0;
  uint64_t __t1972t__pos=0;
  char* __t1973t____t1081t__unsafe_ptr=0;
  uint64_t __t1973t____t1081t__unsafe_size=0;
  uint32_t __t1973t____t1081t__unsafe_offset=0;
  uint32_t __t1973t____t1081t__unsafe_align=0;
  uint64_t __t1973t____t1082t=0;
  char* __t1974t__buf__unsafe_ptr=0;
  uint64_t __t1974t__buf__unsafe_size=0;
  uint32_t __t1974t__buf__unsafe_offset=0;
  uint32_t __t1974t__buf__unsafe_align=0;
  uint64_t __t1974t__pos=0;
  char* __t1975t__buf__unsafe_ptr=0;
  uint64_t __t1975t__buf__unsafe_size=0;
  uint32_t __t1975t__buf__unsafe_offset=0;
  uint32_t __t1975t__buf__unsafe_align=0;
  uint64_t __t1975t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1976t__unsafe_ptr=0;
  uint64_t __t1976t__dat__pos=0;
  uint64_t __t1976t__dat__length=0;
  char __t1976t__dat__first=0;
  char* __t1977t____t1078t__unsafe_ptr=0;
  uint64_t __t1977t____t1078t__unsafe_size=0;
  uint32_t __t1977t____t1078t__unsafe_offset=0;
  uint32_t __t1977t____t1078t__unsafe_align=0;
  uint64_t __t1977t____t1079t=0;
  uint64_t __t1979t=0;
  uint64_t __t1980t__=0;
  char* __t1981t__unsafe_ptr=0;
  uint64_t __t1981t__dat__pos=0;
  uint64_t __t1981t__dat__length=0;
  char __t1981t__dat__first=0;
  char __t1982t__=0;
  char __t1983t__=0;
  char __t1984t=0;
  uint64_t __t1985t__=0;
  char __t1986t__=0;
  char __t1987t=0;
  uint64_t __t1988t__=0;
  char* __t1990t__unsafe_ptr=0;
  uint64_t __t1990t__dat__pos=0;
  uint64_t __t1990t__dat__length=0;
  char __t1990t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t1991t__=0;
  uint64_t __t1992t__=0;
  uint64_t __t1993t__=0;
  char* __t1994t__buf__unsafe_ptr=0;
  uint64_t __t1994t__buf__unsafe_size=0;
  uint32_t __t1994t__buf__unsafe_offset=0;
  uint32_t __t1994t__buf__unsafe_align=0;
  uint64_t __t1994t__pos=0;
  char* __t1995t____t1081t__unsafe_ptr=0;
  uint64_t __t1995t____t1081t__unsafe_size=0;
  uint32_t __t1995t____t1081t__unsafe_offset=0;
  uint32_t __t1995t____t1081t__unsafe_align=0;
  uint64_t __t1995t____t1082t=0;
  char* __t1996t__buf__unsafe_ptr=0;
  uint64_t __t1996t__buf__unsafe_size=0;
  uint32_t __t1996t__buf__unsafe_offset=0;
  uint32_t __t1996t__buf__unsafe_align=0;
  uint64_t __t1996t__pos=0;
  char* __t1997t__buf__unsafe_ptr=0;
  uint64_t __t1997t__buf__unsafe_size=0;
  uint32_t __t1997t__buf__unsafe_offset=0;
  uint32_t __t1997t__buf__unsafe_align=0;
  uint64_t __t1997t__pos=0;
  char* __t1998t__unsafe_ptr=0;
  uint64_t __t1998t__dat__pos=0;
  uint64_t __t1998t__dat__length=0;
  char __t1998t__dat__first=0;
  char* __t1999t__unsafe_ptr=0;
  uint64_t __t1999t__dat__pos=0;
  uint64_t __t1999t__dat__length=0;
  char __t1999t__dat__first=0;
  char* __t2000t____t1078t__unsafe_ptr=0;
  uint64_t __t2000t____t1078t__unsafe_size=0;
  uint32_t __t2000t____t1078t__unsafe_offset=0;
  uint32_t __t2000t____t1078t__unsafe_align=0;
  uint64_t __t2000t____t1079t=0;
  uint64_t __t2002t=0;
  uint64_t __t2003t__=0;
  char* __t2004t__unsafe_ptr=0;
  uint64_t __t2004t__dat__pos=0;
  uint64_t __t2004t__dat__length=0;
  char __t2004t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1326t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t1962t__unsafe_ptr,&__t1962t__dat__pos,&__t1962t__dat__length,&__t1962t__dat__first);
  s1__unsafe_ptr=__t1962t__unsafe_ptr;
  s1__dat__pos=__t1962t__dat__pos;
  s1__dat__length=__t1962t__dat__length;
  s1__dat__first=__t1962t__dat__first;
  str__t1326t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t1963t__unsafe_ptr,&__t1963t__dat__pos,&__t1963t__dat__length,&__t1963t__dat__first);
  s2__unsafe_ptr=__t1963t__unsafe_ptr;
  s2__dat__pos=__t1963t__dat__pos;
  s2__dat__length=__t1963t__dat__length;
  s2__dat__first=__t1963t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1964t__);
  if(__t1964t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1965t__);
  eq__t133t(CHARS__pos,__t1965t__,&__t1966t__);
  __t1967t=__t1966t__;
  }
  if(__t1967t){
  add__t188t(CHARS__pos,s2__dat__length,&__t1968t__);
  lt__t301t(__t1968t__,CHARS__buf__unsafe_size,&__t1969t__);
  __t1970t=__t1969t__;
  }
  if(__t1970t){
  len__t1359t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1971t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1971t__,&__t1972t__buf__unsafe_ptr,&__t1972t__buf__unsafe_size,&__t1972t__buf__unsafe_offset,&__t1972t__buf__unsafe_align,&__t1972t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1080t(__t1972t__buf__unsafe_ptr,__t1972t__buf__unsafe_size,__t1972t__buf__unsafe_offset,__t1972t__buf__unsafe_align,__t1972t__pos,&__t1973t____t1081t__unsafe_ptr,&__t1973t____t1081t__unsafe_size,&__t1973t____t1081t__unsafe_offset,&__t1973t____t1081t__unsafe_align,&__t1973t____t1082t);
  arena__t1068t(&__t1973t____t1081t__unsafe_ptr,&__t1973t____t1081t__unsafe_size,&__t1973t____t1081t__unsafe_offset,&__t1973t____t1081t__unsafe_align,__t1973t____t1082t,&__t1974t__buf__unsafe_ptr,&__t1974t__buf__unsafe_size,&__t1974t__buf__unsafe_offset,&__t1974t__buf__unsafe_align,&__t1974t__pos);
  __t1975t__buf__unsafe_ptr=__t1974t__buf__unsafe_ptr;
  __t1975t__buf__unsafe_size=__t1974t__buf__unsafe_size;
  __t1975t__buf__unsafe_offset=__t1974t__buf__unsafe_offset;
  __t1975t__buf__unsafe_align=__t1974t__buf__unsafe_align;
  __t1975t__pos=__t1974t__pos;
  surface__buf__unsafe_ptr=__t1975t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1975t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1975t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1975t__buf__unsafe_align;
  surface__pos=__t1975t__pos;
  __t_errcode=copy__t1376t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1976t__unsafe_ptr,&__t1976t__dat__pos,&__t1976t__dat__length,&__t1976t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1077t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1977t____t1078t__unsafe_ptr,&__t1977t____t1078t__unsafe_size,&__t1977t____t1078t__unsafe_offset,&__t1977t____t1078t__unsafe_align,&__t1977t____t1079t);
  __t1979t=0;
  add__t188t(s1__dat__pos,__t1979t,&__t1980t__);
  __t_errcode=str__t1345t(__t1977t____t1078t__unsafe_ptr,__t1977t____t1078t__unsafe_size,__t1977t____t1078t__unsafe_offset,__t1977t____t1078t__unsafe_align,__t1977t____t1079t,__t1980t__,&__t1981t__unsafe_ptr,&__t1981t__dat__pos,&__t1981t__dat__length,&__t1981t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1982t__);
  if(__t1982t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1983t__);
  __t1984t=__t1983t__;
  }
  if(__t1984t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1985t__);
  eq__t133t(s2__dat__pos,__t1985t__,&__t1986t__);
  __t1987t=__t1986t__;
  }
  if(__t1987t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t1988t__);
  __t_errcode=str__t1345t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t1988t__,s1__dat__pos,&__t1990t__unsafe_ptr,&__t1990t__dat__pos,&__t1990t__dat__length,&__t1990t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1981t__unsafe_ptr=__t1990t__unsafe_ptr;
  __t1981t__dat__pos=__t1990t__dat__pos;
  __t1981t__dat__length=__t1990t__dat__length;
  __t1981t__dat__first=__t1990t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1359t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1991t__);
  len__t1359t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1992t__);
  add__t188t(__t1991t__,__t1992t__,&__t1993t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1993t__,&__t1994t__buf__unsafe_ptr,&__t1994t__buf__unsafe_size,&__t1994t__buf__unsafe_offset,&__t1994t__buf__unsafe_align,&__t1994t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1080t(__t1994t__buf__unsafe_ptr,__t1994t__buf__unsafe_size,__t1994t__buf__unsafe_offset,__t1994t__buf__unsafe_align,__t1994t__pos,&__t1995t____t1081t__unsafe_ptr,&__t1995t____t1081t__unsafe_size,&__t1995t____t1081t__unsafe_offset,&__t1995t____t1081t__unsafe_align,&__t1995t____t1082t);
  arena__t1068t(&__t1995t____t1081t__unsafe_ptr,&__t1995t____t1081t__unsafe_size,&__t1995t____t1081t__unsafe_offset,&__t1995t____t1081t__unsafe_align,__t1995t____t1082t,&__t1996t__buf__unsafe_ptr,&__t1996t__buf__unsafe_size,&__t1996t__buf__unsafe_offset,&__t1996t__buf__unsafe_align,&__t1996t__pos);
  __t1997t__buf__unsafe_ptr=__t1996t__buf__unsafe_ptr;
  __t1997t__buf__unsafe_size=__t1996t__buf__unsafe_size;
  __t1997t__buf__unsafe_offset=__t1996t__buf__unsafe_offset;
  __t1997t__buf__unsafe_align=__t1996t__buf__unsafe_align;
  __t1997t__pos=__t1996t__pos;
  surface__buf__unsafe_ptr=__t1997t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1997t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1997t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1997t__buf__unsafe_align;
  surface__pos=__t1997t__pos;
  __t_errcode=copy__t1376t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1998t__unsafe_ptr,&__t1998t__dat__pos,&__t1998t__dat__length,&__t1998t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1376t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1999t__unsafe_ptr,&__t1999t__dat__pos,&__t1999t__dat__length,&__t1999t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1077t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2000t____t1078t__unsafe_ptr,&__t2000t____t1078t__unsafe_size,&__t2000t____t1078t__unsafe_offset,&__t2000t____t1078t__unsafe_align,&__t2000t____t1079t);
  __t2002t=0;
  add__t188t(prev_pos,__t2002t,&__t2003t__);
  __t_errcode=str__t1345t(__t2000t____t1078t__unsafe_ptr,__t2000t____t1078t__unsafe_size,__t2000t____t1078t__unsafe_offset,__t2000t____t1078t__unsafe_align,__t2000t____t1079t,__t2003t__,&__t2004t__unsafe_ptr,&__t2004t__dat__pos,&__t2004t__dat__length,&__t2004t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1981t__unsafe_ptr=__t2004t__unsafe_ptr;
  __t1981t__dat__pos=__t2004t__dat__pos;
  __t1981t__dat__length=__t2004t__dat__length;
  __t1981t__dat__first=__t2004t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4036t=CHARS__buf__unsafe_ptr;
  *__t4037t=CHARS__buf__unsafe_size;
  *__t4038t=CHARS__buf__unsafe_offset;
  *__t4039t=CHARS__buf__unsafe_align;
  *__t4040t=CHARS__pos;
  *__t4041t=__t1981t__unsafe_ptr;
  *__t4042t=__t1981t__dat__pos;
  *__t4043t=__t1981t__dat__length;
  *__t4044t=__t1981t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2005t(char** __t4045t, uint64_t* __t4046t, uint32_t* __t4047t, uint32_t* __t4048t, uint64_t* __t4049t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t4050t, uint64_t* __t4051t, uint64_t* __t4052t, char* __t4053t) {
  char* CHARS__buf__unsafe_ptr=*__t4045t;
  uint64_t CHARS__buf__unsafe_size=*__t4046t;
  uint32_t CHARS__buf__unsafe_offset=*__t4047t;
  uint32_t CHARS__buf__unsafe_align=*__t4048t;
  uint64_t CHARS__pos=*__t4049t;
  char* __t2006t__unsafe_ptr=0;
  uint64_t __t2006t__dat__pos=0;
  uint64_t __t2006t__dat__length=0;
  char __t2006t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2007t__unsafe_ptr=0;
  uint64_t __t2007t__dat__pos=0;
  uint64_t __t2007t__dat__length=0;
  char __t2007t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2008t__=0;
  uint64_t __t2009t__=0;
  char __t2010t__=0;
  char __t2011t=0;
  uint64_t __t2012t__=0;
  char __t2013t__=0;
  char __t2014t=0;
  uint64_t __t2015t__=0;
  char* __t2016t__buf__unsafe_ptr=0;
  uint64_t __t2016t__buf__unsafe_size=0;
  uint32_t __t2016t__buf__unsafe_offset=0;
  uint32_t __t2016t__buf__unsafe_align=0;
  uint64_t __t2016t__pos=0;
  char* __t2017t____t1081t__unsafe_ptr=0;
  uint64_t __t2017t____t1081t__unsafe_size=0;
  uint32_t __t2017t____t1081t__unsafe_offset=0;
  uint32_t __t2017t____t1081t__unsafe_align=0;
  uint64_t __t2017t____t1082t=0;
  char* __t2018t__buf__unsafe_ptr=0;
  uint64_t __t2018t__buf__unsafe_size=0;
  uint32_t __t2018t__buf__unsafe_offset=0;
  uint32_t __t2018t__buf__unsafe_align=0;
  uint64_t __t2018t__pos=0;
  char* __t2019t__buf__unsafe_ptr=0;
  uint64_t __t2019t__buf__unsafe_size=0;
  uint32_t __t2019t__buf__unsafe_offset=0;
  uint32_t __t2019t__buf__unsafe_align=0;
  uint64_t __t2019t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2020t__unsafe_ptr=0;
  uint64_t __t2020t__dat__pos=0;
  uint64_t __t2020t__dat__length=0;
  char __t2020t__dat__first=0;
  char* __t2021t____t1078t__unsafe_ptr=0;
  uint64_t __t2021t____t1078t__unsafe_size=0;
  uint32_t __t2021t____t1078t__unsafe_offset=0;
  uint32_t __t2021t____t1078t__unsafe_align=0;
  uint64_t __t2021t____t1079t=0;
  uint64_t __t2023t=0;
  uint64_t __t2024t__=0;
  char* __t2025t__unsafe_ptr=0;
  uint64_t __t2025t__dat__pos=0;
  uint64_t __t2025t__dat__length=0;
  char __t2025t__dat__first=0;
  char __t2026t__=0;
  char __t2027t__=0;
  char __t2028t=0;
  uint64_t __t2029t__=0;
  char __t2030t__=0;
  char __t2031t=0;
  uint64_t __t2032t__=0;
  char* __t2034t__unsafe_ptr=0;
  uint64_t __t2034t__dat__pos=0;
  uint64_t __t2034t__dat__length=0;
  char __t2034t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2035t__=0;
  uint64_t __t2036t__=0;
  uint64_t __t2037t__=0;
  char* __t2038t__buf__unsafe_ptr=0;
  uint64_t __t2038t__buf__unsafe_size=0;
  uint32_t __t2038t__buf__unsafe_offset=0;
  uint32_t __t2038t__buf__unsafe_align=0;
  uint64_t __t2038t__pos=0;
  char* __t2039t____t1081t__unsafe_ptr=0;
  uint64_t __t2039t____t1081t__unsafe_size=0;
  uint32_t __t2039t____t1081t__unsafe_offset=0;
  uint32_t __t2039t____t1081t__unsafe_align=0;
  uint64_t __t2039t____t1082t=0;
  char* __t2040t__buf__unsafe_ptr=0;
  uint64_t __t2040t__buf__unsafe_size=0;
  uint32_t __t2040t__buf__unsafe_offset=0;
  uint32_t __t2040t__buf__unsafe_align=0;
  uint64_t __t2040t__pos=0;
  char* __t2041t__buf__unsafe_ptr=0;
  uint64_t __t2041t__buf__unsafe_size=0;
  uint32_t __t2041t__buf__unsafe_offset=0;
  uint32_t __t2041t__buf__unsafe_align=0;
  uint64_t __t2041t__pos=0;
  char* __t2042t__unsafe_ptr=0;
  uint64_t __t2042t__dat__pos=0;
  uint64_t __t2042t__dat__length=0;
  char __t2042t__dat__first=0;
  char* __t2043t__unsafe_ptr=0;
  uint64_t __t2043t__dat__pos=0;
  uint64_t __t2043t__dat__length=0;
  char __t2043t__dat__first=0;
  char* __t2044t____t1078t__unsafe_ptr=0;
  uint64_t __t2044t____t1078t__unsafe_size=0;
  uint32_t __t2044t____t1078t__unsafe_offset=0;
  uint32_t __t2044t____t1078t__unsafe_align=0;
  uint64_t __t2044t____t1079t=0;
  uint64_t __t2046t=0;
  uint64_t __t2047t__=0;
  char* __t2048t__unsafe_ptr=0;
  uint64_t __t2048t__dat__pos=0;
  uint64_t __t2048t__dat__length=0;
  char __t2048t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1326t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2006t__unsafe_ptr,&__t2006t__dat__pos,&__t2006t__dat__length,&__t2006t__dat__first);
  s1__unsafe_ptr=__t2006t__unsafe_ptr;
  s1__dat__pos=__t2006t__dat__pos;
  s1__dat__length=__t2006t__dat__length;
  s1__dat__first=__t2006t__dat__first;
  str__t1349t(_s2,&__t2007t__unsafe_ptr,&__t2007t__dat__pos,&__t2007t__dat__length,&__t2007t__dat__first);
  s2__unsafe_ptr=__t2007t__unsafe_ptr;
  s2__dat__pos=__t2007t__dat__pos;
  s2__dat__length=__t2007t__dat__length;
  s2__dat__first=__t2007t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2008t__);
  if(__t2008t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2009t__);
  eq__t133t(CHARS__pos,__t2009t__,&__t2010t__);
  __t2011t=__t2010t__;
  }
  if(__t2011t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2012t__);
  lt__t301t(__t2012t__,CHARS__buf__unsafe_size,&__t2013t__);
  __t2014t=__t2013t__;
  }
  if(__t2014t){
  len__t1359t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2015t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2015t__,&__t2016t__buf__unsafe_ptr,&__t2016t__buf__unsafe_size,&__t2016t__buf__unsafe_offset,&__t2016t__buf__unsafe_align,&__t2016t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1080t(__t2016t__buf__unsafe_ptr,__t2016t__buf__unsafe_size,__t2016t__buf__unsafe_offset,__t2016t__buf__unsafe_align,__t2016t__pos,&__t2017t____t1081t__unsafe_ptr,&__t2017t____t1081t__unsafe_size,&__t2017t____t1081t__unsafe_offset,&__t2017t____t1081t__unsafe_align,&__t2017t____t1082t);
  arena__t1068t(&__t2017t____t1081t__unsafe_ptr,&__t2017t____t1081t__unsafe_size,&__t2017t____t1081t__unsafe_offset,&__t2017t____t1081t__unsafe_align,__t2017t____t1082t,&__t2018t__buf__unsafe_ptr,&__t2018t__buf__unsafe_size,&__t2018t__buf__unsafe_offset,&__t2018t__buf__unsafe_align,&__t2018t__pos);
  __t2019t__buf__unsafe_ptr=__t2018t__buf__unsafe_ptr;
  __t2019t__buf__unsafe_size=__t2018t__buf__unsafe_size;
  __t2019t__buf__unsafe_offset=__t2018t__buf__unsafe_offset;
  __t2019t__buf__unsafe_align=__t2018t__buf__unsafe_align;
  __t2019t__pos=__t2018t__pos;
  surface__buf__unsafe_ptr=__t2019t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2019t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2019t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2019t__buf__unsafe_align;
  surface__pos=__t2019t__pos;
  __t_errcode=copy__t1376t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2020t__unsafe_ptr,&__t2020t__dat__pos,&__t2020t__dat__length,&__t2020t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1077t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2021t____t1078t__unsafe_ptr,&__t2021t____t1078t__unsafe_size,&__t2021t____t1078t__unsafe_offset,&__t2021t____t1078t__unsafe_align,&__t2021t____t1079t);
  __t2023t=0;
  add__t188t(s1__dat__pos,__t2023t,&__t2024t__);
  __t_errcode=str__t1345t(__t2021t____t1078t__unsafe_ptr,__t2021t____t1078t__unsafe_size,__t2021t____t1078t__unsafe_offset,__t2021t____t1078t__unsafe_align,__t2021t____t1079t,__t2024t__,&__t2025t__unsafe_ptr,&__t2025t__dat__pos,&__t2025t__dat__length,&__t2025t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2026t__);
  if(__t2026t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2027t__);
  __t2028t=__t2027t__;
  }
  if(__t2028t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2029t__);
  eq__t133t(s2__dat__pos,__t2029t__,&__t2030t__);
  __t2031t=__t2030t__;
  }
  if(__t2031t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2032t__);
  __t_errcode=str__t1345t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2032t__,s1__dat__pos,&__t2034t__unsafe_ptr,&__t2034t__dat__pos,&__t2034t__dat__length,&__t2034t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2025t__unsafe_ptr=__t2034t__unsafe_ptr;
  __t2025t__dat__pos=__t2034t__dat__pos;
  __t2025t__dat__length=__t2034t__dat__length;
  __t2025t__dat__first=__t2034t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1359t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2035t__);
  len__t1359t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2036t__);
  add__t188t(__t2035t__,__t2036t__,&__t2037t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2037t__,&__t2038t__buf__unsafe_ptr,&__t2038t__buf__unsafe_size,&__t2038t__buf__unsafe_offset,&__t2038t__buf__unsafe_align,&__t2038t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1080t(__t2038t__buf__unsafe_ptr,__t2038t__buf__unsafe_size,__t2038t__buf__unsafe_offset,__t2038t__buf__unsafe_align,__t2038t__pos,&__t2039t____t1081t__unsafe_ptr,&__t2039t____t1081t__unsafe_size,&__t2039t____t1081t__unsafe_offset,&__t2039t____t1081t__unsafe_align,&__t2039t____t1082t);
  arena__t1068t(&__t2039t____t1081t__unsafe_ptr,&__t2039t____t1081t__unsafe_size,&__t2039t____t1081t__unsafe_offset,&__t2039t____t1081t__unsafe_align,__t2039t____t1082t,&__t2040t__buf__unsafe_ptr,&__t2040t__buf__unsafe_size,&__t2040t__buf__unsafe_offset,&__t2040t__buf__unsafe_align,&__t2040t__pos);
  __t2041t__buf__unsafe_ptr=__t2040t__buf__unsafe_ptr;
  __t2041t__buf__unsafe_size=__t2040t__buf__unsafe_size;
  __t2041t__buf__unsafe_offset=__t2040t__buf__unsafe_offset;
  __t2041t__buf__unsafe_align=__t2040t__buf__unsafe_align;
  __t2041t__pos=__t2040t__pos;
  surface__buf__unsafe_ptr=__t2041t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2041t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2041t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2041t__buf__unsafe_align;
  surface__pos=__t2041t__pos;
  __t_errcode=copy__t1376t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2042t__unsafe_ptr,&__t2042t__dat__pos,&__t2042t__dat__length,&__t2042t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1376t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2043t__unsafe_ptr,&__t2043t__dat__pos,&__t2043t__dat__length,&__t2043t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1077t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2044t____t1078t__unsafe_ptr,&__t2044t____t1078t__unsafe_size,&__t2044t____t1078t__unsafe_offset,&__t2044t____t1078t__unsafe_align,&__t2044t____t1079t);
  __t2046t=0;
  add__t188t(prev_pos,__t2046t,&__t2047t__);
  __t_errcode=str__t1345t(__t2044t____t1078t__unsafe_ptr,__t2044t____t1078t__unsafe_size,__t2044t____t1078t__unsafe_offset,__t2044t____t1078t__unsafe_align,__t2044t____t1079t,__t2047t__,&__t2048t__unsafe_ptr,&__t2048t__dat__pos,&__t2048t__dat__length,&__t2048t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2025t__unsafe_ptr=__t2048t__unsafe_ptr;
  __t2025t__dat__pos=__t2048t__dat__pos;
  __t2025t__dat__length=__t2048t__dat__length;
  __t2025t__dat__first=__t2048t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4045t=CHARS__buf__unsafe_ptr;
  *__t4046t=CHARS__buf__unsafe_size;
  *__t4047t=CHARS__buf__unsafe_offset;
  *__t4048t=CHARS__buf__unsafe_align;
  *__t4049t=CHARS__pos;
  *__t4050t=__t2025t__unsafe_ptr;
  *__t4051t=__t2025t__dat__pos;
  *__t4052t=__t2025t__dat__length;
  *__t4053t=__t2025t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t409t(uint64_t x, uint64_t y, uint64_t* __t4054t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t4054t=z;
}

static inline __attribute__((always_inline)) int get__t1518t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t4055t) {
  int __t1519t=0;
  char __t1520t__=0;
  uint64_t __t1521t__=0;
  char* __t1522t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,s__dat__length,&__t1520t__);
  if(__t1520t__){
  __t_errcode=15;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t1521t__);
  add__t724t(s__unsafe_ptr,__t1521t__,&__t1522t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4055t=__t1522t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1544t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t4056t, uint64_t* __t4057t, uint64_t* __t4058t, char* __t4059t) {
  char* __t1545t__unsafe_ptr=0;
  uint64_t __t1545t__dat__pos=0;
  uint64_t __t1545t__dat__length=0;
  char __t1545t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1546t__=0;
  char* __t1547t__unsafe_ptr=0;
  uint64_t __t1547t__dat__pos=0;
  uint64_t __t1547t__dat__length=0;
  char __t1547t__dat__first=0;
  char __t1548t__=0;
  char __t1549t__=0;
  char __t1550t=0;
  char __t1551t__=0;
  uint64_t __t1553t__=0;
  uint64_t new_length=0;
  uint64_t __t1554t=0;
  char __t1555t__=0;
  char new_first=0;
  char* __t1557t__=0;
  char __t1558t__value=0;
  uint64_t __t1559t__=0;
  char* __t1560t__unsafe_ptr=0;
  uint64_t __t1560t__dat__pos=0;
  uint64_t __t1560t__dat__length=0;
  char __t1560t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1326t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1545t__unsafe_ptr,&__t1545t__dat__pos,&__t1545t__dat__length,&__t1545t__dat__first);
  s__unsafe_ptr=__t1545t__unsafe_ptr;
  s__dat__pos=__t1545t__dat__pos;
  s__dat__length=__t1545t__dat__length;
  s__dat__first=__t1545t__dat__first;
  eq__t133t(from,to,&__t1546t__);
  if(__t1546t__){
  str__t1349t(__t431t,&__t1547t__unsafe_ptr,&__t1547t__dat__pos,&__t1547t__dat__length,&__t1547t__dat__first);
  goto __t_return;
  }
  gt__t325t(from,to,&__t1548t__);
  if(!__t1548t__){
  gt__t325t(to,s__dat__length,&__t1549t__);
  __t1550t=__t1549t__;
  }
  else{
  __t1550t=0;
  not__t41t(__t1550t,&__t1551t__);
  __t1550t=__t1551t__;
  }
  if(__t1550t){
  __t_errcode=22;
  goto __t_failure;
  }
  sub__t409t(to,from,&__t1553t__);
  new_length=__t1553t__;
  __t1554t=0;
  neq__t157t(from,__t1554t,&__t1555t__);
  if(__t1555t__){
  __t_errcode=get__t1518t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1557t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1557t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1558t__value,__t1557t__,1);
  new_first=__t1558t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1559t__);
  str__t1289t(s__unsafe_ptr,__t1559t__,new_length,new_first,&__t1560t__unsafe_ptr,&__t1560t__dat__pos,&__t1560t__dat__length,&__t1560t__dat__first);
  __t1547t__unsafe_ptr=__t1560t__unsafe_ptr;
  __t1547t__dat__pos=__t1560t__dat__pos;
  __t1547t__dat__length=__t1560t__dat__length;
  __t1547t__dat__first=__t1560t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4056t=__t1547t__unsafe_ptr;
  *__t4057t=__t1547t__dat__pos;
  *__t4058t=__t1547t__dat__length;
  *__t4059t=__t1547t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1623t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t4060t) {
  char* __t1624t__unsafe_ptr=0;
  uint64_t __t1624t__dat__pos=0;
  uint64_t __t1624t__dat__length=0;
  char __t1624t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1625t__unsafe_ptr=0;
  uint64_t __t1625t__dat__pos=0;
  uint64_t __t1625t__dat__length=0;
  char __t1625t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t1626t=0;
  uint64_t __t1627t__=0;
  uint64_t d=0;
  char __t1628t__=0;
  char __t1629t=0;
  char* __t1630t__unsafe_ptr=0;
  uint64_t __t1630t__dat__pos=0;
  uint64_t __t1630t__dat__length=0;
  char __t1630t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1631t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1326t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1624t__unsafe_ptr,&__t1624t__dat__pos,&__t1624t__dat__length,&__t1624t__dat__first);
  stack__unsafe_ptr=__t1624t__unsafe_ptr;
  stack__dat__pos=__t1624t__dat__pos;
  stack__dat__length=__t1624t__dat__length;
  stack__dat__first=__t1624t__dat__first;
  str__t1349t(_needle,&__t1625t__unsafe_ptr,&__t1625t__dat__pos,&__t1625t__dat__length,&__t1625t__dat__first);
  needle__unsafe_ptr=__t1625t__unsafe_ptr;
  needle__dat__pos=__t1625t__dat__pos;
  needle__dat__length=__t1625t__dat__length;
  needle__dat__first=__t1625t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t401t(n,needle__dat__length,&__t1627t__);
  __t1626t=__t_complain;
  if(__t_complain){
  goto __t1626t__label;
  }
  d=__t1627t__;
  __t1626t__label:__t1626t=__t1626t==0;
  not__t41t(__t1626t,&__t1628t__);
  if(__t1628t__){
  __t1629t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1544t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t1630t__unsafe_ptr,&__t1630t__dat__pos,&__t1630t__dat__length,&__t1630t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1630t__unsafe_ptr;
  ret__dat__pos=__t1630t__dat__pos;
  ret__dat__length=__t1630t__dat__length;
  ret__dat__first=__t1630t__dat__first;
  eq__t1448t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1631t__);
  __t1629t=__t1631t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4060t=__t1629t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t673t(uint64_t to, uint64_t* __t4061t, uint64_t* __t4062t) {
  uint64_t __t674t=0;
  __t674t=0;
  goto __t_return;
  __t_return:
  *__t4061t=__t674t;
  *__t4062t=to;
}

static inline __attribute__((always_inline)) void range__t690t(uint64_t _from, uint64_t to, uint64_t* __t4063t, uint64_t* __t4064t) {
  uint64_t __t691t=0;
  uint64_t from=0;
  __t691t=_from;
  from=__t691t;
  goto __t_return;
  __t_return:
  *__t4063t=from;
  *__t4064t=to;
}

static inline __attribute__((always_inline)) int get__t697t(uint64_t r__from, uint64_t r__to, uint64_t _pos, uint64_t* __t4065t) {
  uint64_t __t698t__=0;
  uint64_t pos=0;
  char __t699t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(_pos,r__from,&__t698t__);
  pos=__t698t__;
  ge__t373t(pos,r__to,&__t699t__);
  if(__t699t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4065t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t1709t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t4066t) {
  char* __t1710t__unsafe_ptr=0;
  uint64_t __t1710t__dat__pos=0;
  uint64_t __t1710t__dat__length=0;
  char __t1710t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1711t__unsafe_ptr=0;
  uint64_t __t1711t__dat__pos=0;
  uint64_t __t1711t__dat__length=0;
  char __t1711t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t1712t=0;
  uint64_t __t1713t__=0;
  uint64_t n=0;
  char __t1714t__=0;
  char __t1715t=0;
  uint64_t __t1716t=0;
  uint64_t __t1717t____t674t=0;
  uint64_t __t1717t__to=0;
  uint64_t __t1718t__from=0;
  uint64_t __t1718t__to=0;
  char __t1719t=0;
  uint64_t __t1720t__=0;
  uint64_t i=0;
  char __t1721t=0;
  uint64_t __t1722t__=0;
  char* __t1723t__unsafe_ptr=0;
  uint64_t __t1723t__dat__pos=0;
  uint64_t __t1723t__dat__length=0;
  char __t1723t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t1724t__=0;
  char __t1725t=0;
  char __t1726t=0;
  int __t_complain=0;
  str__t1326t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1710t__unsafe_ptr,&__t1710t__dat__pos,&__t1710t__dat__length,&__t1710t__dat__first);
  stack__unsafe_ptr=__t1710t__unsafe_ptr;
  stack__dat__pos=__t1710t__dat__pos;
  stack__dat__length=__t1710t__dat__length;
  stack__dat__first=__t1710t__dat__first;
  str__t1349t(_needle,&__t1711t__unsafe_ptr,&__t1711t__dat__pos,&__t1711t__dat__length,&__t1711t__dat__first);
  needle__unsafe_ptr=__t1711t__unsafe_ptr;
  needle__dat__pos=__t1711t__dat__pos;
  needle__dat__length=__t1711t__dat__length;
  needle__dat__first=__t1711t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t401t(stack__dat__length,d,&__t1713t__);
  __t1712t=__t_complain;
  if(__t_complain){
  goto __t1712t__label;
  }
  n=__t1713t__;
  __t1712t__label:__t1712t=__t1712t==0;
  not__t41t(__t1712t,&__t1714t__);
  if(__t1714t__){
  __t1715t=0;
  goto __t_return;
  }
  of__t673t(n,&__t1717t____t674t,&__t1717t__to);
  range__t690t(__t1717t____t674t,__t1717t__to,&__t1718t__from,&__t1718t__to);
  __t1716t=0-1;
  while(1){
  __t1716t=__t1716t+1;
  __t_complain=get__t697t(__t1718t__from,__t1718t__to,__t1716t,&__t1720t__);
  __t1719t=__t_complain;
  if(__t_complain){
  goto __t1719t__label;
  }
  i=__t1720t__;
  __t1719t__label:__t1719t=__t1719t==0;
  if(!__t1719t){
  break;
  }
  add__t188t(i,d,&__t1722t__);
  __t_complain=slice__t1544t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t1722t__,&__t1723t__unsafe_ptr,&__t1723t__dat__pos,&__t1723t__dat__length,&__t1723t__dat__first);
  __t1721t=__t_complain;
  if(__t_complain){
  goto __t1721t__label;
  }
  sliced__unsafe_ptr=__t1723t__unsafe_ptr;
  sliced__dat__pos=__t1723t__dat__pos;
  sliced__dat__length=__t1723t__dat__length;
  sliced__dat__first=__t1723t__dat__first;
  __t1721t__label:__t1721t=__t1721t==0;
  eq__t1448t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1724t__);
  if(__t1724t__){
  __t1725t=1;
  __t1715t=__t1725t;
  goto __t_return;
  }
  }
  __t1726t=0;
  __t1715t=__t1726t;
  goto __t_return;
  __t_return:
  *__t4066t=__t1715t;
}

static inline __attribute__((always_inline)) void nn__t430t(const char* value, const char** __t4067t, const char** __t4068t) {
  const char* __t432t=0;
  __t432t=__t431t;
  goto __t_return;
  __t_return:
  *__t4067t=value;
  *__t4068t=__t432t;
}

static inline __attribute__((always_inline)) void print__t439t(const char* value, const char* endl) {
  int __t440t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t483t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[33m");
  }
}

static inline __attribute__((always_inline)) void set__t595t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3686t(char colors__initialized) {
  const char* __t3688t__value=0;
  const char* __t3688t____t432t=0;
  int __t3690t=0;
  int __t3691t=0;
  char __t3692t=0;
  char __t3693t=0;
  const char* __t3697t__value=0;
  const char* __t3697t____t432t=0;
  const char* __t3701t__value=0;
  const char* __t3701t____t432t=0;
  nn__t430t(__t3650t,&__t3688t__value,&__t3688t____t432t);
  print__t439t(__t3688t__value,__t3688t____t432t);
  __t3693t=1;
  if(__t3694t!=__t3694t){
  __t3693t=0;
  }
  if(__t3693t){
  __t3692t=1;
  }
  if(__t3692t){
  set__t483t(colors__initialized);
  nn__t430t(__t2313t,&__t3697t__value,&__t3697t____t432t);
  print__t439t(__t3697t__value,__t3697t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t3665t,&__t3701t__value,&__t3701t____t432t);
  print__t439t(__t3701t__value,__t3701t____t432t);
}

static inline __attribute__((always_inline)) void nn__t1745t(char* value__unsafe_ptr, uint64_t value__dat__pos, uint64_t value__dat__length, char value__dat__first, char** __t4069t, uint64_t* __t4070t, uint64_t* __t4071t, char* __t4072t, const char** __t4073t) {
  const char* __t1746t=0;
  __t1746t=__t431t;
  goto __t_return;
  __t_return:
  *__t4069t=value__unsafe_ptr;
  *__t4070t=value__dat__pos;
  *__t4071t=value__dat__length;
  *__t4072t=value__dat__first;
  *__t4073t=__t1746t;
}

static inline __attribute__((always_inline)) void print__t1510t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, const char* endl) {
  int __t1511t=0;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t429t() {
  fflush(stdout);
}

static inline __attribute__((always_inline)) void popen__t2813t(const char* cmd, char** __t4074t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t4074t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t2812t(char* unsafe_ptr, int64_t* __t4075t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t4075t=status;
}

static inline __attribute__((always_inline)) void int__t632t(uint64_t x, int64_t* __t4076t) {
  int __t633t=0;
  int __t634t=0;
  int __t635t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t4076t=z;
}

static inline __attribute__((always_inline)) void is_different__t96t(int64_t x, int64_t y, int* __t4077t) {
  int __t97t=0;
  int __t98t__=0;
  not__t50t(__t97t,&__t98t__);
  goto __t_return;
  __t_return:
  *__t4077t=__t98t__;
}

static inline __attribute__((always_inline)) void neq__t146t(int64_t x, int64_t y, char* __t4078t) {
  int __t147t__=0;
  char z=0;
  is_different__t96t(x,y,&__t147t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t4078t=z;
}

static inline __attribute__((always_inline)) int open__t2814t(const char* cmd, char** __t4079t) {
  char* __t2815t__=0;
  char* unsafe_ptr=0;
  char __t2816t__=0;
  char __t2817t__=0;
  char __t2818t__=0;
  int64_t __t2819t__=0;
  int64_t status=0;
  uint64_t __t2820t=0;
  int64_t __t2821t__=0;
  char __t2822t__=0;
  char __t2823t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t2813t(cmd,&__t2815t__);
  unsafe_ptr=__t2815t__;
  exists__t652t(unsafe_ptr,&__t2816t__);
  not__t41t(__t2816t__,&__t2817t__);
  if(__t2817t__){
  __t_errcode=36;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t652t(unsafe_ptr,&__t2818t__);
  if(__t2818t__){
  pclose__t2812t(unsafe_ptr,&__t2819t__);
  status=__t2819t__;
  unsafe_ptr=0;
  __t2820t=0;
  int__t632t(__t2820t,&__t2821t__);
  neq__t146t(status,__t2821t__,&__t2822t__);
  if(__t2822t__){
  __t_complain=37;
  goto __t2823t__label;
  __t2823t__label:__t2823t=__t2823t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t4079t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t2825t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t4080t) {
  const char* __t2826t__cstr=0;
  char* __t2826t__str__unsafe_ptr=0;
  uint64_t __t2826t__str__dat__pos=0;
  uint64_t __t2826t__str__dat__length=0;
  char __t2826t__str__dat__first=0;
  const char* __t2828t__=0;
  char* __t2829t__unsafe_ptr=0;
  char __t2830t____t2818t__=0;
  int64_t __t2830t____t2819t__=0;
  int64_t __t2830t__status=0;
  uint64_t __t2830t____t2820t=0;
  int64_t __t2830t____t2821t__=0;
  char __t2830t____t2822t__=0;
  char __t2830t____t2823t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1431t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t2826t__cstr,&__t2826t__str__unsafe_ptr,&__t2826t__str__dat__pos,&__t2826t__str__dat__length,&__t2826t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1441t(__t2826t__cstr,__t2826t__str__unsafe_ptr,__t2826t__str__dat__pos,__t2826t__str__dat__length,__t2826t__str__dat__first,&__t2828t__);
  __t_errcode=open__t2814t(__t2828t__,&__t2829t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t652t(__t2829t__unsafe_ptr,&__t2830t____t2818t__);
  if(__t2830t____t2818t__){
  pclose__t2812t(__t2829t__unsafe_ptr,&__t2830t____t2819t__);
  __t2830t__status=__t2830t____t2819t__;
  __t2829t__unsafe_ptr=0;
  __t2830t____t2820t=0;
  int__t632t(__t2830t____t2820t,&__t2830t____t2821t__);
  neq__t146t(__t2830t__status,__t2830t____t2821t__,&__t2830t____t2822t__);
  if(__t2830t____t2822t__){
  __t_complain=37;
  goto __t2823t__label;
  __t2823t__label:__t2830t____t2823t=__t2830t____t2823t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t4080t=__t2829t__unsafe_ptr;
  
  __t_skip_returns:free__t722t(&__t2826t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t2787t(int64_t value, const char** __t4081t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t4081t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t4082t) {
  const char* value=0;
  *__t4082t=value;
}

int run__t3632t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t4083t) {
  char* __t3633t__unsafe_ptr=0;
  char __t3634t____t2830t____t2818t__=0;
  int64_t __t3634t____t2830t____t2819t__=0;
  int64_t __t3634t____t2830t__status=0;
  uint64_t __t3634t____t2830t____t2820t=0;
  int64_t __t3634t____t2830t____t2821t__=0;
  char __t3634t____t2830t____t2822t__=0;
  char __t3634t____t2830t____t2823t=0;
  char* proc__unsafe_ptr=0;
  char __t3635t=0;
  int64_t __t3636t=0;
  int64_t error=0;
  const char* __t3637t__=0;
  const char* __t3638t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t2825t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3633t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t3633t__unsafe_ptr;
  exists__t652t(__t3633t__unsafe_ptr,&__t3634t____t2830t____t2818t__);
  if(__t3634t____t2830t____t2818t__){
  pclose__t2812t(__t3633t__unsafe_ptr,&__t3634t____t2830t____t2819t__);
  __t3634t____t2830t__status=__t3634t____t2830t____t2819t__;
  __t3633t__unsafe_ptr=0;
  __t3634t____t2830t____t2820t=0;
  int__t632t(__t3634t____t2830t____t2820t,&__t3634t____t2830t____t2821t__);
  neq__t146t(__t3634t____t2830t__status,__t3634t____t2830t____t2821t__,&__t3634t____t2830t____t2822t__);
  if(__t3634t____t2830t____t2822t__){
  __t_complain=37;
  goto __t2823t__label;
  __t2823t__label:__t3634t____t2830t____t2823t=__t3634t____t2830t____t2823t==0;
  }
  }
  __t3636t=__t_complain;
  __t3635t=(__t_complain==0);
  __t_complain=0;
  error=__t3636t;
  __t3635t__label:__t3635t=__t3635t==0;
  if(__t3635t){
  cstr__t2787t(error,&__t3637t__);
  goto __t_return;
  }
  cstr__t1t(&__t3638t__);
  __t3637t__=__t3638t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4083t=__t3637t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t4084t) {
  int value=0;
  *__t4084t=value;
}

static inline __attribute__((always_inline)) void not__t52t(int __t_anon0, int* __t4085t) {
  int __t53t__=0;
  true__t15t(&__t53t__);
  goto __t_return;
  __t_return:
  *__t4085t=__t53t__;
}

static inline __attribute__((always_inline)) void exists__t1287t(const char* c, char* __t4086t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t4086t=z;
}

static inline __attribute__((always_inline)) void set__t475t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3668t(char colors__initialized) {
  const char* __t3670t__value=0;
  const char* __t3670t____t432t=0;
  int __t3672t=0;
  char __t3673t=0;
  char __t3674t=0;
  const char* __t3679t__value=0;
  const char* __t3679t____t432t=0;
  int __t3681t=0;
  const char* __t3684t__value=0;
  const char* __t3684t____t432t=0;
  nn__t430t(__t3650t,&__t3670t__value,&__t3670t____t432t);
  print__t439t(__t3670t__value,__t3670t____t432t);
  __t3674t=1;
  if(__t3675t!=__t3675t){
  __t3674t=0;
  }
  if(__t3674t){
  __t3673t=1;
  }
  if(__t3673t){
  set__t475t(colors__initialized);
  nn__t430t(__t3678t,&__t3679t__value,&__t3679t____t432t);
  print__t439t(__t3679t__value,__t3679t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t3665t,&__t3684t__value,&__t3684t____t432t);
  print__t439t(__t3684t__value,__t3684t____t432t);
}

static inline __attribute__((always_inline)) void print__t441t(const char* value) {
  int __t442t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t479t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[32m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t3648t(char colors__initialized) {
  const char* __t3651t__value=0;
  const char* __t3651t____t432t=0;
  char __t3653t=0;
  char __t3654t=0;
  const char* __t3659t__value=0;
  const char* __t3659t____t432t=0;
  int __t3661t=0;
  int __t3662t=0;
  const char* __t3666t__value=0;
  const char* __t3666t____t432t=0;
  nn__t430t(__t3650t,&__t3651t__value,&__t3651t____t432t);
  print__t439t(__t3651t__value,__t3651t____t432t);
  __t3654t=1;
  if(__t3655t!=__t3655t){
  __t3654t=0;
  }
  if(__t3654t){
  __t3653t=1;
  }
  if(__t3653t){
  set__t479t(colors__initialized);
  nn__t430t(__t3658t,&__t3659t__value,&__t3659t____t432t);
  print__t439t(__t3659t__value,__t3659t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t3665t,&__t3666t__value,&__t3666t____t432t);
  print__t439t(__t3666t__value,__t3666t____t432t);
}

static inline __attribute__((always_inline)) int test__t3703t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t4087t) {
  char* __t3707t__value__unsafe_ptr=0;
  uint64_t __t3707t__value__dat__pos=0;
  uint64_t __t3707t__value__dat__length=0;
  char __t3707t__value__dat__first=0;
  const char* __t3707t____t1746t=0;
  const char* __t3711t__=0;
  const char* __t3712t=0;
  const char* error=0;
  int __t3713t=0;
  int __t3714t__=0;
  char __t3715t__=0;
  const char* __t3716t__=0;
  const char* __t3719t__value=0;
  const char* __t3719t____t432t=0;
  char __t3721t__=0;
  const char* __t3726t__value=0;
  const char* __t3726t____t432t=0;
  char __t3729t=0;
  char __t3733t=0;
  int __t_errcode=0;
  int __t_complain=0;
  print_marker__t3686t(colors__initialized);
  nn__t1745t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3707t__value__unsafe_ptr,&__t3707t__value__dat__pos,&__t3707t__value__dat__length,&__t3707t__value__dat__first,&__t3707t____t1746t);
  print__t1510t(__t3707t__value__unsafe_ptr,__t3707t__value__dat__pos,__t3707t__value__dat__length,__t3707t__value__dat__first,__t3707t____t1746t);
  print__t429t();
  __t_errcode=run__t3632t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t3711t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3712t=__t3711t__;
  error=__t3712t;
  not__t52t(__t3713t,&__t3714t__);
  if(should_fail){
  exists__t1287t(error,&__t3715t__);
  if(__t3715t__){
  cstr__t1t(&__t3716t__);
  error=__t3716t__;
  }
  else{
  error=__t3717t;
  }
  }
  nn__t430t(__t3718t,&__t3719t__value,&__t3719t____t432t);
  print__t439t(__t3719t__value,__t3719t____t432t);
  exists__t1287t(error,&__t3721t__);
  if(__t3721t__){
  print_marker__t3668t(colors__initialized);
  print__t441t(__t431t);
  nn__t430t(__t3725t,&__t3726t__value,&__t3726t____t432t);
  print__t439t(__t3726t__value,__t3726t____t432t);
  print__t441t(error);
  __t3729t=0;
  goto __t_return;
  }
  print_marker__t3648t(colors__initialized);
  print__t441t(__t431t);
  __t3733t=1;
  __t3729t=__t3733t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4087t=__t3729t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t452t(uint64_t value, const char* endl) {
  int __t453t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t437t(uint64_t value, uint64_t* __t4088t, const char** __t4089t) {
  const char* __t438t=0;
  __t438t=__t431t;
  goto __t_return;
  __t_return:
  *__t4088t=value;
  *__t4089t=__t438t;
}

static inline __attribute__((always_inline)) int main__t3777t() {
  char* __t3779t__unsafe_ptr=0;
  uint64_t __t3779t__dat__pos=0;
  uint64_t __t3779t__dat__length=0;
  char __t3779t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t3782t__initialized=0;
  char colors__initialized=0;
  uint64_t __t3784t=0;
  char* __t3785t__unsafe_ptr=0;
  uint64_t __t3785t__unsafe_size=0;
  uint32_t __t3785t__unsafe_offset=0;
  uint32_t __t3785t__unsafe_align=0;
  char* __t3787t__buf__unsafe_ptr=0;
  uint64_t __t3787t__buf__unsafe_size=0;
  uint32_t __t3787t__buf__unsafe_offset=0;
  uint32_t __t3787t__buf__unsafe_align=0;
  uint64_t __t3787t__pos=0;
  char* __t3788t__buf__unsafe_ptr=0;
  uint64_t __t3788t__buf__unsafe_size=0;
  uint32_t __t3788t__buf__unsafe_offset=0;
  uint32_t __t3788t__buf__unsafe_align=0;
  uint64_t __t3788t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t3790t__unsafe_ptr=0;
  uint64_t __t3790t__dat__pos=0;
  uint64_t __t3790t__dat__length=0;
  char __t3790t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  uint64_t __t3791t=0;
  uint64_t __t3792t=0;
  uint64_t counter=0;
  uint64_t __t3793t=0;
  uint64_t __t3794t=0;
  uint64_t failures=0;
  uint64_t __t3795t=0;
  char* __t3796t__unsafe_ptr=0;
  char __t3798t=0;
  char* __t3799t__unsafe_ptr=0;
  uint64_t __t3799t__dat__pos=0;
  uint64_t __t3799t__dat__length=0;
  char __t3799t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t3801t__=0;
  char __t3802t__=0;
  char __t3803t__=0;
  char __t3804t=0;
  char __t3805t__=0;
  uint64_t __t3806t__=0;
  uint64_t __t3807t____t3775t=0;
  uint64_t __t3807t____t3776t__=0;
  char* __t3808t__unsafe_ptr=0;
  uint64_t __t3808t__dat__pos=0;
  uint64_t __t3808t__dat__length=0;
  char __t3808t__dat__first=0;
  char* __t3810t__unsafe_ptr=0;
  uint64_t __t3810t__dat__pos=0;
  uint64_t __t3810t__dat__length=0;
  char __t3810t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t3811t=0;
  char* __t3812t__unsafe_ptr=0;
  char __t3814t=0;
  char* __t3815t__unsafe_ptr=0;
  uint64_t __t3815t__dat__pos=0;
  uint64_t __t3815t__dat__length=0;
  char __t3815t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t3817t__=0;
  char __t3818t__=0;
  uint64_t __t3819t__=0;
  uint64_t __t3820t____t3775t=0;
  uint64_t __t3820t____t3776t__=0;
  uint64_t __t3821t=0;
  uint64_t __t3822t__=0;
  char __t3824t__=0;
  char should_fail=0;
  char* __t3825t__unsafe_ptr=0;
  uint64_t __t3825t__dat__pos=0;
  uint64_t __t3825t__dat__length=0;
  char __t3825t__dat__first=0;
  char* __t3826t__unsafe_ptr=0;
  uint64_t __t3826t__dat__pos=0;
  uint64_t __t3826t__dat__length=0;
  char __t3826t__dat__first=0;
  char __t3827t__=0;
  char __t3828t__=0;
  uint64_t __t3829t=0;
  uint64_t __t3830t__=0;
  uint64_t __t3831t=0;
  char __t3832t__=0;
  const char* __t3846t__value=0;
  const char* __t3846t____t432t=0;
  const char* __t3836t__value=0;
  const char* __t3836t____t432t=0;
  const char* __t3841t__value=0;
  const char* __t3841t____t432t=0;
  uint64_t __t3852t__value=0;
  const char* __t3852t____t438t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1349t(__t3778t,&__t3779t__unsafe_ptr,&__t3779t__dat__pos,&__t3779t__dat__length,&__t3779t__dat__first);
  test_root__unsafe_ptr=__t3779t__unsafe_ptr;
  test_root__dat__pos=__t3779t__dat__pos;
  test_root__dat__length=__t3779t__dat__length;
  test_root__dat__first=__t3779t__dat__first;
  console__t419t();
  colors__t469t(&__t3782t__initialized);
  colors__initialized=__t3782t__initialized;
  __t3784t=128;
  __t_errcode=alloc__t990t(__t3784t,&__t3785t__unsafe_ptr,&__t3785t__unsafe_size,&__t3785t__unsafe_offset,&__t3785t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1071t(&__t3785t__unsafe_ptr,&__t3785t__unsafe_size,&__t3785t__unsafe_offset,&__t3785t__unsafe_align,&__t3787t__buf__unsafe_ptr,&__t3787t__buf__unsafe_size,&__t3787t__buf__unsafe_offset,&__t3787t__buf__unsafe_align,&__t3787t__pos);
  __t3788t__buf__unsafe_ptr=__t3787t__buf__unsafe_ptr;
  __t3788t__buf__unsafe_size=__t3787t__buf__unsafe_size;
  __t3788t__buf__unsafe_offset=__t3787t__buf__unsafe_offset;
  __t3788t__buf__unsafe_align=__t3787t__buf__unsafe_align;
  __t3788t__pos=__t3787t__pos;
  CHARS__buf__unsafe_ptr=__t3788t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t3788t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t3788t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t3788t__buf__unsafe_align;
  CHARS__pos=__t3788t__pos;
  __t_errcode=copy__t1381t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3789t,&__t3790t__unsafe_ptr,&__t3790t__dat__pos,&__t3790t__dat__length,&__t3790t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t3790t__unsafe_ptr;
  command_base__dat__pos=__t3790t__dat__pos;
  command_base__dat__length=__t3790t__dat__length;
  command_base__dat__first=__t3790t__dat__first;
  __t3791t=0;
  __t3792t=__t3791t;
  counter=__t3792t;
  __t3793t=0;
  __t3794t=__t3793t;
  failures=__t3794t;
  __t_errcode=open__t3508t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t3796t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3795t=0-1;
  while(1){
  __t3795t=__t3795t+1;
  __t_complain=get__t3591t(&__t3796t__unsafe_ptr,__t3795t,&__t3799t__unsafe_ptr,&__t3799t__dat__pos,&__t3799t__dat__length,&__t3799t__dat__first);
  __t3798t=__t_complain;
  if(__t_complain){
  goto __t3798t__label;
  }
  path__unsafe_ptr=__t3799t__unsafe_ptr;
  path__dat__pos=__t3799t__dat__pos;
  path__dat__length=__t3799t__dat__length;
  path__dat__first=__t3799t__dat__first;
  __t3798t__label:__t3798t=__t3798t==0;
  if(!__t3798t){
  break;
  }
  eq__t1455t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t3800t,&__t3801t__);
  if(!__t3801t__){
  __t_errcode=is_dir__t3435t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t3802t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3802t__,&__t3803t__);
  __t3804t=__t3803t__;
  }
  else{
  __t3804t=0;
  not__t41t(__t3804t,&__t3805t__);
  __t3804t=__t3805t__;
  }
  if(__t3804t){
  continue;
  }
  reuse__t3772t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t3806t__);
  __t_errcode=add__t1961t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t3808t__unsafe_ptr,&__t3808t__dat__pos,&__t3808t__dat__length,&__t3808t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2005t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3808t__unsafe_ptr,__t3808t__dat__pos,__t3808t__dat__length,__t3808t__dat__first,__t3809t,&__t3810t__unsafe_ptr,&__t3810t__dat__pos,&__t3810t__dat__length,&__t3810t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t3810t__unsafe_ptr;
  dir_path__dat__pos=__t3810t__dat__pos;
  dir_path__dat__length=__t3810t__dat__length;
  dir_path__dat__first=__t3810t__dat__first;
  __t_errcode=open__t3508t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t3812t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3811t=0-1;
  while(1){
  __t3811t=__t3811t+1;
  __t_complain=get__t3591t(&__t3812t__unsafe_ptr,__t3811t,&__t3815t__unsafe_ptr,&__t3815t__dat__pos,&__t3815t__dat__length,&__t3815t__dat__first);
  __t3814t=__t_complain;
  if(__t_complain){
  goto __t3814t__label;
  }
  entry__unsafe_ptr=__t3815t__unsafe_ptr;
  entry__dat__pos=__t3815t__dat__pos;
  entry__dat__length=__t3815t__dat__length;
  entry__dat__first=__t3815t__dat__first;
  __t3814t__label:__t3814t=__t3814t==0;
  if(!__t3814t){
  break;
  }
  __t_errcode=ends_with__t1623t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t3816t,&__t3817t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3817t__,&__t3818t__);
  if(__t3818t__){
  continue;
  }
  reuse__t3772t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t3819t__);
  __t3821t=1;
  add__t188t(counter,__t3821t,&__t3822t__);
  counter=__t3822t__;
  contains__t1709t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t3823t,&__t3824t__);
  should_fail=__t3824t__;
  __t_errcode=add__t1961t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t3825t__unsafe_ptr,&__t3825t__dat__pos,&__t3825t__dat__length,&__t3825t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1961t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3825t__unsafe_ptr,__t3825t__dat__pos,__t3825t__dat__length,__t3825t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t3826t__unsafe_ptr,&__t3826t__dat__pos,&__t3826t__dat__length,&__t3826t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t3703t(colors__initialized,__t3826t__unsafe_ptr,__t3826t__dat__pos,__t3826t__dat__length,__t3826t__dat__first,should_fail,&__t3827t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t3827t__,&__t3828t__);
  if(__t3828t__){
  __t3829t=1;
  add__t188t(failures,__t3829t,&__t3830t__);
  failures=__t3830t__;
  }
  __t3820t____t3775t=0;
  add__t188t(__t3819t__,__t3820t____t3775t,&__t3820t____t3776t__);
  CHARS__pos=__t3820t____t3776t__;
  }
  __t3807t____t3775t=0;
  add__t188t(__t3806t__,__t3807t____t3775t,&__t3807t____t3776t__);
  CHARS__pos=__t3807t____t3776t__;
  closedir__t3498t(__t3812t__unsafe_ptr);
  }
  __t3831t=0;
  eq__t133t(failures,__t3831t,&__t3832t__);
  if(__t3832t__){
  set__t479t(colors__initialized);
  nn__t430t(__t3835t,&__t3836t__value,&__t3836t____t432t);
  print__t439t(__t3836t__value,__t3836t____t432t);
  set__t595t(colors__initialized);
  nn__t430t(__t3840t,&__t3841t__value,&__t3841t____t432t);
  print__t439t(__t3841t__value,__t3841t____t432t);
  }
  else{
  set__t475t(colors__initialized);
  nn__t430t(__t3845t,&__t3846t__value,&__t3846t____t432t);
  print__t439t(__t3846t__value,__t3846t____t432t);
  set__t595t(colors__initialized);
  print__t452t(failures,__t3850t);
  }
  nn__t437t(counter,&__t3852t__value,&__t3852t____t438t);
  print__t452t(__t3852t__value,__t3852t____t438t);
  print__t441t(__t3854t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t3498t(__t3796t__unsafe_ptr);
  free__t722t(&__t3785t__unsafe_ptr);
  if(__t3782t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t3777t();return 0;}