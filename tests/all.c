#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t4690t=" out of ";
const char* const __t4504t="] ";
const char* const __t4564t="    ";
const char* const __t4629t="./smoll --cleanup ";
const char* const __t430t="";
const char* const __t442t="\n";
const char* const __t4514t="failure";
const char* const __t4680t="no errors across ";
const char* const __t4675t="PASSING ";
const char* const __t3148t="+";
const char* const __t4685t="FAILED ";
const char* const __t4694t=" tests";
const char* const __t4649t="/";
const char* const __t4494t="success";
const char* const __t4557t="\r";
const char* const __t4640t="..";
const char* const __t4489t="[";
const char* const __t4656t=".s";
const char* const __t4517t="X";
const char* const __t4663t="_fail_";
const char* const __t4618t="./tests/passing/";
const char* const __t4556t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t4533t="pending";
const char* const __t4497t="V";
static const char* __t_all_errcodes[56] = {"noerr",
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
"not found",
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
"failed to flush file contents",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir"
};

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1267t(char** __t4696t, uint64_t* __t4697t, uint32_t* __t4698t, uint32_t* __t4699t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4696t=unsafe_ptr;
  *__t4697t=unsafe_size;
  *__t4698t=unsafe_offset;
  *__t4699t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t4700t) {
  *__t4700t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t4701t) {
  int value=0;
  *__t4701t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t4702t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t4702t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t4703t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t4703t=__t110t__;
}

static inline __attribute__((always_inline)) void add__t187t(uint64_t x, uint64_t y, uint64_t* __t4704t) {
  int __t188t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t188t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t4704t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t4705t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t4705t=z;
}

static inline __attribute__((always_inline)) void ge__t372t(uint64_t x, uint64_t y, char* __t4706t) {
  int __t373t__=0;
  char z=0;
  is_different__t108t(x,y,&__t373t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t4706t=z;
}

static inline __attribute__((always_inline)) void nat__t727t(uint32_t x, uint64_t* __t4707t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4707t=value;
}

static inline __attribute__((always_inline)) void mul__t211t(uint64_t x, uint64_t y, uint64_t* __t4708t) {
  int __t212t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t212t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t4708t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t4709t) {
  *__t4709t=to;
}

static inline __attribute__((always_inline)) void add__t724t(char* allocated, uint64_t offset, char** __t4710t) {
  char* element=0;
  char* __t725t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t725t__);
  goto __t_return;
  __t_return:
  *__t4710t=__t725t__;
}

static inline __attribute__((always_inline)) int get__t1055t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t4711t) {
  int __t1056t=0;
  char __t1057t__=0;
  uint64_t __t1058t__=0;
  uint64_t __t1059t__=0;
  uint64_t __t1060t__=0;
  uint64_t __t1061t__=0;
  char* __t1062t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t372t(i,buffer__unsafe_size,&__t1057t__);
  if(__t1057t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t727t(buffer__unsafe_align,&__t1058t__);
  mul__t211t(i,__t1058t__,&__t1059t__);
  nat__t727t(buffer__unsafe_offset,&__t1060t__);
  add__t187t(__t1059t__,__t1060t__,&__t1061t__);
  add__t724t(buffer__unsafe_ptr,__t1061t__,&__t1062t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4711t=__t1062t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1289t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4712t, uint64_t* __t4713t, uint64_t* __t4714t, char* __t4715t) {
  goto __t_return;
  __t_return:
  *__t4712t=unsafe_ptr;
  *__t4713t=dat__pos;
  *__t4714t=dat__length;
  *__t4715t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1293t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4716t, uint64_t* __t4717t, uint64_t* __t4718t, char* __t4719t) {
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
  *__t4716t=__t1300t__unsafe_ptr;
  *__t4717t=__t1300t__dat__pos;
  *__t4718t=__t1300t__dat__length;
  *__t4719t=__t1300t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1327t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t4720t, uint64_t* __t4721t, uint64_t* __t4722t, char* __t4723t) {
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
  *__t4720t=__t1333t__unsafe_ptr;
  *__t4721t=__t1333t__dat__pos;
  *__t4722t=__t1333t__dat__length;
  *__t4723t=__t1333t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1349t(const char* c, char** __t4724t, uint64_t* __t4725t, uint64_t* __t4726t, char* __t4727t) {
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
  add__t187t(length,__t1353t,&__t1354t__);
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
  *__t4724t=ret__unsafe_ptr;
  *__t4725t=ret__dat__pos;
  *__t4726t=ret__dat__length;
  *__t4727t=ret__dat__first;
}

static inline __attribute__((always_inline)) void console__t418t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void supports_ansi__t467t(char* __t4728t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t4728t=supports;
}

static inline __attribute__((always_inline)) void colors__t468t(char* __t4729t) {
  char __t469t__=0;
  char initialized=0;
  supports_ansi__t467t(&__t469t__);
  initialized=__t469t__;
  goto __t_return;
  __t_return:
  *__t4729t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t991t(char** __t4730t, uint64_t* __t4731t, uint32_t* __t4732t, uint32_t* __t4733t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4730t=unsafe_ptr;
  *__t4731t=unsafe_size;
  *__t4732t=unsafe_offset;
  *__t4733t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t722t(char** __t4734t) {
  char* allocated=*__t4734t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t4734t=allocated;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t4735t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t4735t=z;
}

static inline __attribute__((always_inline)) void zero__t723t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t651t(char* x, char* __t4736t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t4736t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t4737t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t4737t=z;
}

static inline __attribute__((always_inline)) int alloc__t715t(uint64_t bytes, char** __t4738t) {
  char* allocated=0;
  char __t716t__=0;
  char __t717t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t651t(allocated,&__t716t__);
  not__t41t(__t716t__,&__t717t__);
  if(__t717t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4738t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t839t(char** __t4739t, uint64_t* __t4740t, uint32_t* __t4741t, uint32_t* __t4742t, uint64_t size, char** __t4743t, uint64_t* __t4744t, uint32_t* __t4745t, uint32_t* __t4746t) {
  char* buffer__unsafe_ptr=*__t4739t;
  uint64_t buffer__unsafe_size=*__t4740t;
  uint32_t buffer__unsafe_offset=*__t4741t;
  uint32_t buffer__unsafe_align=*__t4742t;
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
  mul__t211t(__t847t__,size,&__t848t__);
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
  mul__t211t(__t853t__,size,&__t854t__);
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
  *__t4739t=buffer__unsafe_ptr;
  *__t4740t=buffer__unsafe_size;
  *__t4741t=buffer__unsafe_offset;
  *__t4742t=buffer__unsafe_align;
  *__t4743t=buffer__unsafe_ptr;
  *__t4744t=buffer__unsafe_size;
  *__t4745t=buffer__unsafe_offset;
  *__t4746t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t990t(uint64_t size, char** __t4747t, uint64_t* __t4748t, uint32_t* __t4749t, uint32_t* __t4750t) {
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
  *__t4747t=__t994t__unsafe_ptr;
  *__t4748t=__t994t__unsafe_size;
  *__t4749t=__t994t__unsafe_offset;
  *__t4750t=__t994t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1068t(char** __t4751t, uint64_t* __t4752t, uint32_t* __t4753t, uint32_t* __t4754t, uint64_t _pos, char** __t4755t, uint64_t* __t4756t, uint32_t* __t4757t, uint32_t* __t4758t, uint64_t* __t4759t) {
  char* buf__unsafe_ptr=*__t4751t;
  uint64_t buf__unsafe_size=*__t4752t;
  uint32_t buf__unsafe_offset=*__t4753t;
  uint32_t buf__unsafe_align=*__t4754t;
  uint64_t __t1069t=0;
  uint64_t pos=0;
  __t1069t=_pos;
  pos=__t1069t;
  goto __t_return;
  __t_return:
  *__t4751t=buf__unsafe_ptr;
  *__t4752t=buf__unsafe_size;
  *__t4753t=buf__unsafe_offset;
  *__t4754t=buf__unsafe_align;
  *__t4755t=buf__unsafe_ptr;
  *__t4756t=buf__unsafe_size;
  *__t4757t=buf__unsafe_offset;
  *__t4758t=buf__unsafe_align;
  *__t4759t=pos;
}

static inline __attribute__((always_inline)) void arena__t1071t(char** __t4760t, uint64_t* __t4761t, uint32_t* __t4762t, uint32_t* __t4763t, char** __t4764t, uint64_t* __t4765t, uint32_t* __t4766t, uint32_t* __t4767t, uint64_t* __t4768t) {
  char* buf__unsafe_ptr=*__t4760t;
  uint64_t buf__unsafe_size=*__t4761t;
  uint32_t buf__unsafe_offset=*__t4762t;
  uint32_t buf__unsafe_align=*__t4763t;
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
  *__t4760t=buf__unsafe_ptr;
  *__t4761t=buf__unsafe_size;
  *__t4762t=buf__unsafe_offset;
  *__t4763t=buf__unsafe_align;
  *__t4764t=__t1073t__buf__unsafe_ptr;
  *__t4765t=__t1073t__buf__unsafe_size;
  *__t4766t=__t1073t__buf__unsafe_offset;
  *__t4767t=__t1073t__buf__unsafe_align;
  *__t4768t=__t1073t__pos;
}

static inline __attribute__((always_inline)) void len__t1359t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t4769t) {
  goto __t_return;
  __t_return:
  *__t4769t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t1063t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t4770t) {
  goto __t_return;
  __t_return:
  *__t4770t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t324t(uint64_t x, uint64_t y, char* __t4771t) {
  int __t325t__=0;
  char z=0;
  is_different__t108t(x,y,&__t325t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t4771t=z;
}

static inline __attribute__((always_inline)) void allocated__t1075t(char** __t4772t, uint64_t* __t4773t, uint32_t* __t4774t, uint32_t* __t4775t, uint64_t pos, char** __t4776t, uint64_t* __t4777t, uint32_t* __t4778t, uint32_t* __t4779t, uint64_t* __t4780t) {
  char* buf__unsafe_ptr=*__t4772t;
  uint64_t buf__unsafe_size=*__t4773t;
  uint32_t buf__unsafe_offset=*__t4774t;
  uint32_t buf__unsafe_align=*__t4775t;
  goto __t_return;
  __t_return:
  *__t4772t=buf__unsafe_ptr;
  *__t4773t=buf__unsafe_size;
  *__t4774t=buf__unsafe_offset;
  *__t4775t=buf__unsafe_align;
  *__t4776t=buf__unsafe_ptr;
  *__t4777t=buf__unsafe_size;
  *__t4778t=buf__unsafe_offset;
  *__t4779t=buf__unsafe_align;
  *__t4780t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1150t(char** __t4781t, uint64_t* __t4782t, uint32_t* __t4783t, uint32_t* __t4784t, uint64_t* __t4785t, uint64_t length, char** __t4786t, uint64_t* __t4787t, uint32_t* __t4788t, uint32_t* __t4789t, uint64_t* __t4790t) {
  char* allocator__buf__unsafe_ptr=*__t4781t;
  uint64_t allocator__buf__unsafe_size=*__t4782t;
  uint32_t allocator__buf__unsafe_offset=*__t4783t;
  uint32_t allocator__buf__unsafe_align=*__t4784t;
  uint64_t allocator__pos=*__t4785t;
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
  add__t187t(allocator__pos,length,&__t1152t__);
  next_pos=__t1152t__;
  len__t1063t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1153t__);
  gt__t324t(next_pos,__t1153t__,&__t1154t__);
  if(__t1154t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t1155t=0;
  add__t187t(allocator__pos,__t1155t,&__t1156t__);
  pos=__t1156t__;
  allocator__pos=next_pos;
  allocated__t1075t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1157t__buf__unsafe_ptr,&__t1157t__buf__unsafe_size,&__t1157t__buf__unsafe_offset,&__t1157t__buf__unsafe_align,&__t1157t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4781t=allocator__buf__unsafe_ptr;
  *__t4782t=allocator__buf__unsafe_size;
  *__t4783t=allocator__buf__unsafe_offset;
  *__t4784t=allocator__buf__unsafe_align;
  *__t4785t=allocator__pos;
  *__t4786t=__t1157t__buf__unsafe_ptr;
  *__t4787t=__t1157t__buf__unsafe_size;
  *__t4788t=__t1157t__buf__unsafe_offset;
  *__t4789t=__t1157t__buf__unsafe_align;
  *__t4790t=__t1157t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1381t(char** __t4791t, uint64_t* __t4792t, uint32_t* __t4793t, uint32_t* __t4794t, uint64_t* __t4795t, const char* _other, char** __t4796t, uint64_t* __t4797t, uint64_t* __t4798t, char* __t4799t) {
  char* CHARS__buf__unsafe_ptr=*__t4791t;
  uint64_t CHARS__buf__unsafe_size=*__t4792t;
  uint32_t CHARS__buf__unsafe_offset=*__t4793t;
  uint32_t CHARS__buf__unsafe_align=*__t4794t;
  uint64_t CHARS__pos=*__t4795t;
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
  *__t4791t=CHARS__buf__unsafe_ptr;
  *__t4792t=CHARS__buf__unsafe_size;
  *__t4793t=CHARS__buf__unsafe_offset;
  *__t4794t=CHARS__buf__unsafe_align;
  *__t4795t=CHARS__pos;
  *__t4796t=__t1385t__unsafe_ptr;
  *__t4797t=__t1385t__dat__pos;
  *__t4798t=__t1385t__dat__length;
  *__t4799t=__t1385t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1064t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1407t(char** __t4800t, uint64_t* __t4801t, uint32_t* __t4802t, uint32_t* __t4803t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4800t=unsafe_ptr;
  *__t4801t=unsafe_size;
  *__t4802t=unsafe_offset;
  *__t4803t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1406t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t4804t, uint64_t* __t4805t, uint64_t* __t4806t, char* __t4807t) {
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
  add__t187t(__t1410t,__t1411t__,&__t1412t__);
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
  *__t4804t=__t1416t__unsafe_ptr;
  *__t4805t=__t1416t__dat__pos;
  *__t4806t=__t1416t__dat__length;
  *__t4807t=__t1416t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1431t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t4808t, char** __t4809t, uint64_t* __t4810t, uint64_t* __t4811t, char* __t4812t) {
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
  *__t4808t=cstr;
  *__t4809t=str__unsafe_ptr;
  *__t4810t=str__dat__pos;
  *__t4811t=str__dat__length;
  *__t4812t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1441t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t4813t) {
  goto __t_return;
  __t_return:
  *__t4813t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t4337t(char* unsafe_ptr) {
  int __t4339t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t4340t(const char* path, char** __t4814t) {
  int __t4342t=0;
  char* unsafe_ptr=0;
  char __t4344t__=0;
  char __t4345t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t651t(unsafe_ptr,&__t4344t__);
  not__t41t(__t4344t__,&__t4345t__);
  if(__t4345t__){
  __t_errcode=42;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t4337t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4814t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t4347t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t4815t) {
  const char* __t4348t__cstr=0;
  char* __t4348t__str__unsafe_ptr=0;
  uint64_t __t4348t__str__dat__pos=0;
  uint64_t __t4348t__str__dat__length=0;
  char __t4348t__str__dat__first=0;
  const char* __t4350t__=0;
  char* __t4351t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1431t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t4348t__cstr,&__t4348t__str__unsafe_ptr,&__t4348t__str__dat__pos,&__t4348t__str__dat__length,&__t4348t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1441t(__t4348t__cstr,__t4348t__str__unsafe_ptr,__t4348t__str__dat__pos,__t4348t__str__dat__length,__t4348t__str__dat__first,&__t4350t__);
  __t_errcode=open__t4340t(__t4350t__,&__t4351t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t4337t(__t4351t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4815t=__t4351t__unsafe_ptr;
  
  __t_skip_returns:free__t722t(&__t4348t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t4359t(char** __t4816t, const char** __t4817t) {
  char* f__unsafe_ptr=*__t4816t;
  char __t4360t__=0;
  char __t4361t__=0;
  char* de=0;
  char __t4362t__=0;
  char __t4363t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t651t(f__unsafe_ptr,&__t4360t__);
  not__t41t(__t4360t__,&__t4361t__);
  if(__t4361t__){
  __t_errcode=54;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t651t(de,&__t4362t__);
  not__t41t(__t4362t__,&__t4363t__);
  if(__t4363t__){
  __t_errcode=55;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4816t=f__unsafe_ptr;
  *__t4817t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t4364t(char** __t4818t, char** __t4819t, uint64_t* __t4820t, uint64_t* __t4821t, char* __t4822t) {
  char* f__unsafe_ptr=*__t4818t;
  const char* __t4365t__=0;
  char* __t4366t__unsafe_ptr=0;
  uint64_t __t4366t__dat__pos=0;
  uint64_t __t4366t__dat__length=0;
  char __t4366t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t4359t(&f__unsafe_ptr,&__t4365t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1349t(__t4365t__,&__t4366t__unsafe_ptr,&__t4366t__dat__pos,&__t4366t__dat__length,&__t4366t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4818t=f__unsafe_ptr;
  *__t4819t=__t4366t__unsafe_ptr;
  *__t4820t=__t4366t__dat__pos;
  *__t4821t=__t4366t__dat__length;
  *__t4822t=__t4366t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t4430t(char** __t4823t, uint64_t __t_anon1, char** __t4824t, uint64_t* __t4825t, uint64_t* __t4826t, char* __t4827t) {
  char* data__unsafe_ptr=*__t4823t;
  char* __t4431t__unsafe_ptr=0;
  uint64_t __t4431t__dat__pos=0;
  uint64_t __t4431t__dat__length=0;
  char __t4431t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t4364t(&data__unsafe_ptr,&__t4431t__unsafe_ptr,&__t4431t__dat__pos,&__t4431t__dat__length,&__t4431t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4823t=data__unsafe_ptr;
  *__t4824t=__t4431t__unsafe_ptr;
  *__t4825t=__t4431t__dat__pos;
  *__t4826t=__t4431t__dat__length;
  *__t4827t=__t4431t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1361t(const char* s, char* __t4828t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t4828t=c;
}

static inline __attribute__((always_inline)) void neq__t1363t(char x, char y, char* __t4829t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t4829t=z;
}

static inline __attribute__((always_inline)) void eq__t1448t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t4830t) {
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
  *__t4830t=__t1452t;
}

void eq__t1455t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t4831t) {
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
  *__t4831t=__t1458t;
}

int unsafe_temp__t1417t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t4832t, char** __t4833t, uint64_t* __t4834t, uint64_t* __t4835t, char* __t4836t) {
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
  add__t187t(__t1420t,other__dat__length,&__t1421t__);
  add__t187t(__t1421t__,prefix__dat__length,&__t1422t__);
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
  *__t4832t=cstr;
  *__t4833t=str__unsafe_ptr;
  *__t4834t=str__dat__pos;
  *__t4835t=str__dat__length;
  *__t4836t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1440t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t4837t) {
  goto __t_return;
  __t_return:
  *__t4837t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t4264t(const char* path, char* __t4838t) {
  int __t4266t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t4838t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t4274t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t4839t) {
  int __t4276t=0;
  const char* __t4277t__cstr=0;
  char* __t4277t__str__unsafe_ptr=0;
  uint64_t __t4277t__str__dat__pos=0;
  uint64_t __t4277t__str__dat__length=0;
  char __t4277t__str__dat__first=0;
  const char* __t4279t__=0;
  char __t4280t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1417t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t4277t__cstr,&__t4277t__str__unsafe_ptr,&__t4277t__str__dat__pos,&__t4277t__str__dat__length,&__t4277t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1440t(__t4277t__cstr,__t4277t__str__unsafe_ptr,__t4277t__str__dat__pos,__t4277t__str__dat__length,__t4277t__str__dat__first,&__t4279t__);
  is_dir__t4264t(__t4279t__,&__t4280t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4839t=__t4280t__;
  
  __t_skip_returns:free__t722t(&__t4277t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t408t(uint64_t x, uint64_t y, uint64_t* __t4840t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t4840t=z;
}

static inline __attribute__((always_inline)) void reuse__t4611t(char** __t4841t, uint64_t* __t4842t, uint32_t* __t4843t, uint32_t* __t4844t, uint64_t* __t4845t, uint64_t* __t4846t) {
  char* arn__buf__unsafe_ptr=*__t4841t;
  uint64_t arn__buf__unsafe_size=*__t4842t;
  uint32_t arn__buf__unsafe_offset=*__t4843t;
  uint32_t arn__buf__unsafe_align=*__t4844t;
  uint64_t arn__pos=*__t4845t;
  uint64_t __t4612t=0;
  uint64_t __t4613t__=0;
  uint64_t tracked_position=0;
  uint64_t __t4614t=0;
  uint64_t __t4616t__=0;
  __t4612t=0;
  add__t187t(__t4612t,arn__pos,&__t4613t__);
  tracked_position=__t4613t__;
  goto __t_return;
  __t_return:
  *__t4841t=arn__buf__unsafe_ptr;
  *__t4842t=arn__buf__unsafe_size;
  *__t4843t=arn__buf__unsafe_offset;
  *__t4844t=arn__buf__unsafe_align;
  *__t4845t=arn__pos;
  *__t4846t=tracked_position;
}

static inline __attribute__((always_inline)) void str__t1326t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t4847t, uint64_t* __t4848t, uint64_t* __t4849t, char* __t4850t) {
  goto __t_return;
  __t_return:
  *__t4847t=other__unsafe_ptr;
  *__t4848t=other__dat__pos;
  *__t4849t=other__dat__length;
  *__t4850t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t161t(char* x, char* y, char* __t4851t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t4851t=z;
}

static inline __attribute__((always_inline)) void lt__t300t(uint64_t x, uint64_t y, char* __t4852t) {
  int __t301t__=0;
  char z=0;
  is_different__t108t(x,y,&__t301t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t4852t=z;
}

static inline __attribute__((always_inline)) void status__t1080t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t4853t, uint64_t* __t4854t, uint32_t* __t4855t, uint32_t* __t4856t, uint64_t* __t4857t) {
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
  *__t4853t=__t1081t__unsafe_ptr;
  *__t4854t=__t1081t__unsafe_size;
  *__t4855t=__t1081t__unsafe_offset;
  *__t4856t=__t1081t__unsafe_align;
  *__t4857t=__t1082t;
}

static inline __attribute__((always_inline)) int copy__t1376t(char** __t4858t, uint64_t* __t4859t, uint32_t* __t4860t, uint32_t* __t4861t, uint64_t* __t4862t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t4863t, uint64_t* __t4864t, uint64_t* __t4865t, char* __t4866t) {
  char* CHARS__buf__unsafe_ptr=*__t4858t;
  uint64_t CHARS__buf__unsafe_size=*__t4859t;
  uint32_t CHARS__buf__unsafe_offset=*__t4860t;
  uint32_t CHARS__buf__unsafe_align=*__t4861t;
  uint64_t CHARS__pos=*__t4862t;
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
  *__t4858t=CHARS__buf__unsafe_ptr;
  *__t4859t=CHARS__buf__unsafe_size;
  *__t4860t=CHARS__buf__unsafe_offset;
  *__t4861t=CHARS__buf__unsafe_align;
  *__t4862t=CHARS__pos;
  *__t4863t=__t1380t__unsafe_ptr;
  *__t4864t=__t1380t__dat__pos;
  *__t4865t=__t1380t__dat__length;
  *__t4866t=__t1380t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1077t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t4867t, uint64_t* __t4868t, uint32_t* __t4869t, uint32_t* __t4870t, uint64_t* __t4871t) {
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
  *__t4867t=__t1078t__unsafe_ptr;
  *__t4868t=__t1078t__unsafe_size;
  *__t4869t=__t1078t__unsafe_offset;
  *__t4870t=__t1078t__unsafe_align;
  *__t4871t=__t1079t;
}

static inline __attribute__((always_inline)) int sub__t400t(uint64_t x, uint64_t y, uint64_t* __t4872t) {
  int __t401t__=0;
  int __t402t=0;
  int __t403t=0;
  char __t404t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t108t(x,y,&__t401t__);
  lt__t300t(x,y,&__t404t__);
  if(__t404t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4872t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1345t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t4873t, uint64_t* __t4874t, uint64_t* __t4875t, char* __t4876t) {
  uint64_t __t1347t__=0;
  char* __t1348t__unsafe_ptr=0;
  uint64_t __t1348t__dat__pos=0;
  uint64_t __t1348t__dat__length=0;
  char __t1348t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t400t(endpos,pos,&__t1347t__);
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
  *__t4873t=__t1348t__unsafe_ptr;
  *__t4874t=__t1348t__dat__pos;
  *__t4875t=__t1348t__dat__length;
  *__t4876t=__t1348t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2421t(char** __t4877t, uint64_t* __t4878t, uint32_t* __t4879t, uint32_t* __t4880t, uint64_t* __t4881t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t4882t, uint64_t* __t4883t, uint64_t* __t4884t, char* __t4885t) {
  char* CHARS__buf__unsafe_ptr=*__t4877t;
  uint64_t CHARS__buf__unsafe_size=*__t4878t;
  uint32_t CHARS__buf__unsafe_offset=*__t4879t;
  uint32_t CHARS__buf__unsafe_align=*__t4880t;
  uint64_t CHARS__pos=*__t4881t;
  char* __t2422t__unsafe_ptr=0;
  uint64_t __t2422t__dat__pos=0;
  uint64_t __t2422t__dat__length=0;
  char __t2422t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2423t__unsafe_ptr=0;
  uint64_t __t2423t__dat__pos=0;
  uint64_t __t2423t__dat__length=0;
  char __t2423t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2424t__=0;
  uint64_t __t2425t__=0;
  char __t2426t__=0;
  char __t2427t=0;
  uint64_t __t2428t__=0;
  char __t2429t__=0;
  char __t2430t=0;
  uint64_t __t2431t__=0;
  char* __t2432t__buf__unsafe_ptr=0;
  uint64_t __t2432t__buf__unsafe_size=0;
  uint32_t __t2432t__buf__unsafe_offset=0;
  uint32_t __t2432t__buf__unsafe_align=0;
  uint64_t __t2432t__pos=0;
  char* __t2433t____t1081t__unsafe_ptr=0;
  uint64_t __t2433t____t1081t__unsafe_size=0;
  uint32_t __t2433t____t1081t__unsafe_offset=0;
  uint32_t __t2433t____t1081t__unsafe_align=0;
  uint64_t __t2433t____t1082t=0;
  char* __t2434t__buf__unsafe_ptr=0;
  uint64_t __t2434t__buf__unsafe_size=0;
  uint32_t __t2434t__buf__unsafe_offset=0;
  uint32_t __t2434t__buf__unsafe_align=0;
  uint64_t __t2434t__pos=0;
  char* __t2435t__buf__unsafe_ptr=0;
  uint64_t __t2435t__buf__unsafe_size=0;
  uint32_t __t2435t__buf__unsafe_offset=0;
  uint32_t __t2435t__buf__unsafe_align=0;
  uint64_t __t2435t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2436t__unsafe_ptr=0;
  uint64_t __t2436t__dat__pos=0;
  uint64_t __t2436t__dat__length=0;
  char __t2436t__dat__first=0;
  char* __t2437t____t1078t__unsafe_ptr=0;
  uint64_t __t2437t____t1078t__unsafe_size=0;
  uint32_t __t2437t____t1078t__unsafe_offset=0;
  uint32_t __t2437t____t1078t__unsafe_align=0;
  uint64_t __t2437t____t1079t=0;
  uint64_t __t2439t=0;
  uint64_t __t2440t__=0;
  char* __t2441t__unsafe_ptr=0;
  uint64_t __t2441t__dat__pos=0;
  uint64_t __t2441t__dat__length=0;
  char __t2441t__dat__first=0;
  char __t2442t__=0;
  char __t2443t__=0;
  char __t2444t=0;
  uint64_t __t2445t__=0;
  char __t2446t__=0;
  char __t2447t=0;
  uint64_t __t2448t__=0;
  char* __t2450t__unsafe_ptr=0;
  uint64_t __t2450t__dat__pos=0;
  uint64_t __t2450t__dat__length=0;
  char __t2450t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2451t__=0;
  uint64_t __t2452t__=0;
  uint64_t __t2453t__=0;
  char* __t2454t__buf__unsafe_ptr=0;
  uint64_t __t2454t__buf__unsafe_size=0;
  uint32_t __t2454t__buf__unsafe_offset=0;
  uint32_t __t2454t__buf__unsafe_align=0;
  uint64_t __t2454t__pos=0;
  char* __t2455t____t1081t__unsafe_ptr=0;
  uint64_t __t2455t____t1081t__unsafe_size=0;
  uint32_t __t2455t____t1081t__unsafe_offset=0;
  uint32_t __t2455t____t1081t__unsafe_align=0;
  uint64_t __t2455t____t1082t=0;
  char* __t2456t__buf__unsafe_ptr=0;
  uint64_t __t2456t__buf__unsafe_size=0;
  uint32_t __t2456t__buf__unsafe_offset=0;
  uint32_t __t2456t__buf__unsafe_align=0;
  uint64_t __t2456t__pos=0;
  char* __t2457t__buf__unsafe_ptr=0;
  uint64_t __t2457t__buf__unsafe_size=0;
  uint32_t __t2457t__buf__unsafe_offset=0;
  uint32_t __t2457t__buf__unsafe_align=0;
  uint64_t __t2457t__pos=0;
  char* __t2458t__unsafe_ptr=0;
  uint64_t __t2458t__dat__pos=0;
  uint64_t __t2458t__dat__length=0;
  char __t2458t__dat__first=0;
  char* __t2459t__unsafe_ptr=0;
  uint64_t __t2459t__dat__pos=0;
  uint64_t __t2459t__dat__length=0;
  char __t2459t__dat__first=0;
  char* __t2460t____t1078t__unsafe_ptr=0;
  uint64_t __t2460t____t1078t__unsafe_size=0;
  uint32_t __t2460t____t1078t__unsafe_offset=0;
  uint32_t __t2460t____t1078t__unsafe_align=0;
  uint64_t __t2460t____t1079t=0;
  uint64_t __t2462t=0;
  uint64_t __t2463t__=0;
  char* __t2464t__unsafe_ptr=0;
  uint64_t __t2464t__dat__pos=0;
  uint64_t __t2464t__dat__length=0;
  char __t2464t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1326t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2422t__unsafe_ptr,&__t2422t__dat__pos,&__t2422t__dat__length,&__t2422t__dat__first);
  s1__unsafe_ptr=__t2422t__unsafe_ptr;
  s1__dat__pos=__t2422t__dat__pos;
  s1__dat__length=__t2422t__dat__length;
  s1__dat__first=__t2422t__dat__first;
  str__t1326t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2423t__unsafe_ptr,&__t2423t__dat__pos,&__t2423t__dat__length,&__t2423t__dat__first);
  s2__unsafe_ptr=__t2423t__unsafe_ptr;
  s2__dat__pos=__t2423t__dat__pos;
  s2__dat__length=__t2423t__dat__length;
  s2__dat__first=__t2423t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2424t__);
  if(__t2424t__){
  add__t187t(s1__dat__pos,s1__dat__length,&__t2425t__);
  eq__t133t(CHARS__pos,__t2425t__,&__t2426t__);
  __t2427t=__t2426t__;
  }
  if(__t2427t){
  add__t187t(CHARS__pos,s2__dat__length,&__t2428t__);
  lt__t300t(__t2428t__,CHARS__buf__unsafe_size,&__t2429t__);
  __t2430t=__t2429t__;
  }
  if(__t2430t){
  len__t1359t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2431t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2431t__,&__t2432t__buf__unsafe_ptr,&__t2432t__buf__unsafe_size,&__t2432t__buf__unsafe_offset,&__t2432t__buf__unsafe_align,&__t2432t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1080t(__t2432t__buf__unsafe_ptr,__t2432t__buf__unsafe_size,__t2432t__buf__unsafe_offset,__t2432t__buf__unsafe_align,__t2432t__pos,&__t2433t____t1081t__unsafe_ptr,&__t2433t____t1081t__unsafe_size,&__t2433t____t1081t__unsafe_offset,&__t2433t____t1081t__unsafe_align,&__t2433t____t1082t);
  arena__t1068t(&__t2433t____t1081t__unsafe_ptr,&__t2433t____t1081t__unsafe_size,&__t2433t____t1081t__unsafe_offset,&__t2433t____t1081t__unsafe_align,__t2433t____t1082t,&__t2434t__buf__unsafe_ptr,&__t2434t__buf__unsafe_size,&__t2434t__buf__unsafe_offset,&__t2434t__buf__unsafe_align,&__t2434t__pos);
  __t2435t__buf__unsafe_ptr=__t2434t__buf__unsafe_ptr;
  __t2435t__buf__unsafe_size=__t2434t__buf__unsafe_size;
  __t2435t__buf__unsafe_offset=__t2434t__buf__unsafe_offset;
  __t2435t__buf__unsafe_align=__t2434t__buf__unsafe_align;
  __t2435t__pos=__t2434t__pos;
  surface__buf__unsafe_ptr=__t2435t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2435t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2435t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2435t__buf__unsafe_align;
  surface__pos=__t2435t__pos;
  __t_errcode=copy__t1376t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2436t__unsafe_ptr,&__t2436t__dat__pos,&__t2436t__dat__length,&__t2436t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1077t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2437t____t1078t__unsafe_ptr,&__t2437t____t1078t__unsafe_size,&__t2437t____t1078t__unsafe_offset,&__t2437t____t1078t__unsafe_align,&__t2437t____t1079t);
  __t2439t=0;
  add__t187t(s1__dat__pos,__t2439t,&__t2440t__);
  __t_errcode=str__t1345t(__t2437t____t1078t__unsafe_ptr,__t2437t____t1078t__unsafe_size,__t2437t____t1078t__unsafe_offset,__t2437t____t1078t__unsafe_align,__t2437t____t1079t,__t2440t__,&__t2441t__unsafe_ptr,&__t2441t__dat__pos,&__t2441t__dat__length,&__t2441t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2442t__);
  if(__t2442t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2443t__);
  __t2444t=__t2443t__;
  }
  if(__t2444t){
  add__t187t(s1__dat__pos,s1__dat__length,&__t2445t__);
  eq__t133t(s2__dat__pos,__t2445t__,&__t2446t__);
  __t2447t=__t2446t__;
  }
  if(__t2447t){
  add__t187t(s2__dat__pos,s2__dat__length,&__t2448t__);
  __t_errcode=str__t1345t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2448t__,s1__dat__pos,&__t2450t__unsafe_ptr,&__t2450t__dat__pos,&__t2450t__dat__length,&__t2450t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2441t__unsafe_ptr=__t2450t__unsafe_ptr;
  __t2441t__dat__pos=__t2450t__dat__pos;
  __t2441t__dat__length=__t2450t__dat__length;
  __t2441t__dat__first=__t2450t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1359t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2451t__);
  len__t1359t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2452t__);
  add__t187t(__t2451t__,__t2452t__,&__t2453t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2453t__,&__t2454t__buf__unsafe_ptr,&__t2454t__buf__unsafe_size,&__t2454t__buf__unsafe_offset,&__t2454t__buf__unsafe_align,&__t2454t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1080t(__t2454t__buf__unsafe_ptr,__t2454t__buf__unsafe_size,__t2454t__buf__unsafe_offset,__t2454t__buf__unsafe_align,__t2454t__pos,&__t2455t____t1081t__unsafe_ptr,&__t2455t____t1081t__unsafe_size,&__t2455t____t1081t__unsafe_offset,&__t2455t____t1081t__unsafe_align,&__t2455t____t1082t);
  arena__t1068t(&__t2455t____t1081t__unsafe_ptr,&__t2455t____t1081t__unsafe_size,&__t2455t____t1081t__unsafe_offset,&__t2455t____t1081t__unsafe_align,__t2455t____t1082t,&__t2456t__buf__unsafe_ptr,&__t2456t__buf__unsafe_size,&__t2456t__buf__unsafe_offset,&__t2456t__buf__unsafe_align,&__t2456t__pos);
  __t2457t__buf__unsafe_ptr=__t2456t__buf__unsafe_ptr;
  __t2457t__buf__unsafe_size=__t2456t__buf__unsafe_size;
  __t2457t__buf__unsafe_offset=__t2456t__buf__unsafe_offset;
  __t2457t__buf__unsafe_align=__t2456t__buf__unsafe_align;
  __t2457t__pos=__t2456t__pos;
  surface__buf__unsafe_ptr=__t2457t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2457t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2457t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2457t__buf__unsafe_align;
  surface__pos=__t2457t__pos;
  __t_errcode=copy__t1376t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2458t__unsafe_ptr,&__t2458t__dat__pos,&__t2458t__dat__length,&__t2458t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1376t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2459t__unsafe_ptr,&__t2459t__dat__pos,&__t2459t__dat__length,&__t2459t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1077t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2460t____t1078t__unsafe_ptr,&__t2460t____t1078t__unsafe_size,&__t2460t____t1078t__unsafe_offset,&__t2460t____t1078t__unsafe_align,&__t2460t____t1079t);
  __t2462t=0;
  add__t187t(prev_pos,__t2462t,&__t2463t__);
  __t_errcode=str__t1345t(__t2460t____t1078t__unsafe_ptr,__t2460t____t1078t__unsafe_size,__t2460t____t1078t__unsafe_offset,__t2460t____t1078t__unsafe_align,__t2460t____t1079t,__t2463t__,&__t2464t__unsafe_ptr,&__t2464t__dat__pos,&__t2464t__dat__length,&__t2464t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2441t__unsafe_ptr=__t2464t__unsafe_ptr;
  __t2441t__dat__pos=__t2464t__dat__pos;
  __t2441t__dat__length=__t2464t__dat__length;
  __t2441t__dat__first=__t2464t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4877t=CHARS__buf__unsafe_ptr;
  *__t4878t=CHARS__buf__unsafe_size;
  *__t4879t=CHARS__buf__unsafe_offset;
  *__t4880t=CHARS__buf__unsafe_align;
  *__t4881t=CHARS__pos;
  *__t4882t=__t2441t__unsafe_ptr;
  *__t4883t=__t2441t__dat__pos;
  *__t4884t=__t2441t__dat__length;
  *__t4885t=__t2441t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2465t(char** __t4886t, uint64_t* __t4887t, uint32_t* __t4888t, uint32_t* __t4889t, uint64_t* __t4890t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t4891t, uint64_t* __t4892t, uint64_t* __t4893t, char* __t4894t) {
  char* CHARS__buf__unsafe_ptr=*__t4886t;
  uint64_t CHARS__buf__unsafe_size=*__t4887t;
  uint32_t CHARS__buf__unsafe_offset=*__t4888t;
  uint32_t CHARS__buf__unsafe_align=*__t4889t;
  uint64_t CHARS__pos=*__t4890t;
  char* __t2466t__unsafe_ptr=0;
  uint64_t __t2466t__dat__pos=0;
  uint64_t __t2466t__dat__length=0;
  char __t2466t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2467t__unsafe_ptr=0;
  uint64_t __t2467t__dat__pos=0;
  uint64_t __t2467t__dat__length=0;
  char __t2467t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2468t__=0;
  uint64_t __t2469t__=0;
  char __t2470t__=0;
  char __t2471t=0;
  uint64_t __t2472t__=0;
  char __t2473t__=0;
  char __t2474t=0;
  uint64_t __t2475t__=0;
  char* __t2476t__buf__unsafe_ptr=0;
  uint64_t __t2476t__buf__unsafe_size=0;
  uint32_t __t2476t__buf__unsafe_offset=0;
  uint32_t __t2476t__buf__unsafe_align=0;
  uint64_t __t2476t__pos=0;
  char* __t2477t____t1081t__unsafe_ptr=0;
  uint64_t __t2477t____t1081t__unsafe_size=0;
  uint32_t __t2477t____t1081t__unsafe_offset=0;
  uint32_t __t2477t____t1081t__unsafe_align=0;
  uint64_t __t2477t____t1082t=0;
  char* __t2478t__buf__unsafe_ptr=0;
  uint64_t __t2478t__buf__unsafe_size=0;
  uint32_t __t2478t__buf__unsafe_offset=0;
  uint32_t __t2478t__buf__unsafe_align=0;
  uint64_t __t2478t__pos=0;
  char* __t2479t__buf__unsafe_ptr=0;
  uint64_t __t2479t__buf__unsafe_size=0;
  uint32_t __t2479t__buf__unsafe_offset=0;
  uint32_t __t2479t__buf__unsafe_align=0;
  uint64_t __t2479t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2480t__unsafe_ptr=0;
  uint64_t __t2480t__dat__pos=0;
  uint64_t __t2480t__dat__length=0;
  char __t2480t__dat__first=0;
  char* __t2481t____t1078t__unsafe_ptr=0;
  uint64_t __t2481t____t1078t__unsafe_size=0;
  uint32_t __t2481t____t1078t__unsafe_offset=0;
  uint32_t __t2481t____t1078t__unsafe_align=0;
  uint64_t __t2481t____t1079t=0;
  uint64_t __t2483t=0;
  uint64_t __t2484t__=0;
  char* __t2485t__unsafe_ptr=0;
  uint64_t __t2485t__dat__pos=0;
  uint64_t __t2485t__dat__length=0;
  char __t2485t__dat__first=0;
  char __t2486t__=0;
  char __t2487t__=0;
  char __t2488t=0;
  uint64_t __t2489t__=0;
  char __t2490t__=0;
  char __t2491t=0;
  uint64_t __t2492t__=0;
  char* __t2494t__unsafe_ptr=0;
  uint64_t __t2494t__dat__pos=0;
  uint64_t __t2494t__dat__length=0;
  char __t2494t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2495t__=0;
  uint64_t __t2496t__=0;
  uint64_t __t2497t__=0;
  char* __t2498t__buf__unsafe_ptr=0;
  uint64_t __t2498t__buf__unsafe_size=0;
  uint32_t __t2498t__buf__unsafe_offset=0;
  uint32_t __t2498t__buf__unsafe_align=0;
  uint64_t __t2498t__pos=0;
  char* __t2499t____t1081t__unsafe_ptr=0;
  uint64_t __t2499t____t1081t__unsafe_size=0;
  uint32_t __t2499t____t1081t__unsafe_offset=0;
  uint32_t __t2499t____t1081t__unsafe_align=0;
  uint64_t __t2499t____t1082t=0;
  char* __t2500t__buf__unsafe_ptr=0;
  uint64_t __t2500t__buf__unsafe_size=0;
  uint32_t __t2500t__buf__unsafe_offset=0;
  uint32_t __t2500t__buf__unsafe_align=0;
  uint64_t __t2500t__pos=0;
  char* __t2501t__buf__unsafe_ptr=0;
  uint64_t __t2501t__buf__unsafe_size=0;
  uint32_t __t2501t__buf__unsafe_offset=0;
  uint32_t __t2501t__buf__unsafe_align=0;
  uint64_t __t2501t__pos=0;
  char* __t2502t__unsafe_ptr=0;
  uint64_t __t2502t__dat__pos=0;
  uint64_t __t2502t__dat__length=0;
  char __t2502t__dat__first=0;
  char* __t2503t__unsafe_ptr=0;
  uint64_t __t2503t__dat__pos=0;
  uint64_t __t2503t__dat__length=0;
  char __t2503t__dat__first=0;
  char* __t2504t____t1078t__unsafe_ptr=0;
  uint64_t __t2504t____t1078t__unsafe_size=0;
  uint32_t __t2504t____t1078t__unsafe_offset=0;
  uint32_t __t2504t____t1078t__unsafe_align=0;
  uint64_t __t2504t____t1079t=0;
  uint64_t __t2506t=0;
  uint64_t __t2507t__=0;
  char* __t2508t__unsafe_ptr=0;
  uint64_t __t2508t__dat__pos=0;
  uint64_t __t2508t__dat__length=0;
  char __t2508t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1326t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2466t__unsafe_ptr,&__t2466t__dat__pos,&__t2466t__dat__length,&__t2466t__dat__first);
  s1__unsafe_ptr=__t2466t__unsafe_ptr;
  s1__dat__pos=__t2466t__dat__pos;
  s1__dat__length=__t2466t__dat__length;
  s1__dat__first=__t2466t__dat__first;
  str__t1349t(_s2,&__t2467t__unsafe_ptr,&__t2467t__dat__pos,&__t2467t__dat__length,&__t2467t__dat__first);
  s2__unsafe_ptr=__t2467t__unsafe_ptr;
  s2__dat__pos=__t2467t__dat__pos;
  s2__dat__length=__t2467t__dat__length;
  s2__dat__first=__t2467t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2468t__);
  if(__t2468t__){
  add__t187t(s1__dat__pos,s1__dat__length,&__t2469t__);
  eq__t133t(CHARS__pos,__t2469t__,&__t2470t__);
  __t2471t=__t2470t__;
  }
  if(__t2471t){
  add__t187t(CHARS__pos,s2__dat__length,&__t2472t__);
  lt__t300t(__t2472t__,CHARS__buf__unsafe_size,&__t2473t__);
  __t2474t=__t2473t__;
  }
  if(__t2474t){
  len__t1359t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2475t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2475t__,&__t2476t__buf__unsafe_ptr,&__t2476t__buf__unsafe_size,&__t2476t__buf__unsafe_offset,&__t2476t__buf__unsafe_align,&__t2476t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1080t(__t2476t__buf__unsafe_ptr,__t2476t__buf__unsafe_size,__t2476t__buf__unsafe_offset,__t2476t__buf__unsafe_align,__t2476t__pos,&__t2477t____t1081t__unsafe_ptr,&__t2477t____t1081t__unsafe_size,&__t2477t____t1081t__unsafe_offset,&__t2477t____t1081t__unsafe_align,&__t2477t____t1082t);
  arena__t1068t(&__t2477t____t1081t__unsafe_ptr,&__t2477t____t1081t__unsafe_size,&__t2477t____t1081t__unsafe_offset,&__t2477t____t1081t__unsafe_align,__t2477t____t1082t,&__t2478t__buf__unsafe_ptr,&__t2478t__buf__unsafe_size,&__t2478t__buf__unsafe_offset,&__t2478t__buf__unsafe_align,&__t2478t__pos);
  __t2479t__buf__unsafe_ptr=__t2478t__buf__unsafe_ptr;
  __t2479t__buf__unsafe_size=__t2478t__buf__unsafe_size;
  __t2479t__buf__unsafe_offset=__t2478t__buf__unsafe_offset;
  __t2479t__buf__unsafe_align=__t2478t__buf__unsafe_align;
  __t2479t__pos=__t2478t__pos;
  surface__buf__unsafe_ptr=__t2479t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2479t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2479t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2479t__buf__unsafe_align;
  surface__pos=__t2479t__pos;
  __t_errcode=copy__t1376t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2480t__unsafe_ptr,&__t2480t__dat__pos,&__t2480t__dat__length,&__t2480t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1077t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2481t____t1078t__unsafe_ptr,&__t2481t____t1078t__unsafe_size,&__t2481t____t1078t__unsafe_offset,&__t2481t____t1078t__unsafe_align,&__t2481t____t1079t);
  __t2483t=0;
  add__t187t(s1__dat__pos,__t2483t,&__t2484t__);
  __t_errcode=str__t1345t(__t2481t____t1078t__unsafe_ptr,__t2481t____t1078t__unsafe_size,__t2481t____t1078t__unsafe_offset,__t2481t____t1078t__unsafe_align,__t2481t____t1079t,__t2484t__,&__t2485t__unsafe_ptr,&__t2485t__dat__pos,&__t2485t__dat__length,&__t2485t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2486t__);
  if(__t2486t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2487t__);
  __t2488t=__t2487t__;
  }
  if(__t2488t){
  add__t187t(s1__dat__pos,s1__dat__length,&__t2489t__);
  eq__t133t(s2__dat__pos,__t2489t__,&__t2490t__);
  __t2491t=__t2490t__;
  }
  if(__t2491t){
  add__t187t(s2__dat__pos,s2__dat__length,&__t2492t__);
  __t_errcode=str__t1345t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2492t__,s1__dat__pos,&__t2494t__unsafe_ptr,&__t2494t__dat__pos,&__t2494t__dat__length,&__t2494t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2485t__unsafe_ptr=__t2494t__unsafe_ptr;
  __t2485t__dat__pos=__t2494t__dat__pos;
  __t2485t__dat__length=__t2494t__dat__length;
  __t2485t__dat__first=__t2494t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1359t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2495t__);
  len__t1359t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2496t__);
  add__t187t(__t2495t__,__t2496t__,&__t2497t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2497t__,&__t2498t__buf__unsafe_ptr,&__t2498t__buf__unsafe_size,&__t2498t__buf__unsafe_offset,&__t2498t__buf__unsafe_align,&__t2498t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1080t(__t2498t__buf__unsafe_ptr,__t2498t__buf__unsafe_size,__t2498t__buf__unsafe_offset,__t2498t__buf__unsafe_align,__t2498t__pos,&__t2499t____t1081t__unsafe_ptr,&__t2499t____t1081t__unsafe_size,&__t2499t____t1081t__unsafe_offset,&__t2499t____t1081t__unsafe_align,&__t2499t____t1082t);
  arena__t1068t(&__t2499t____t1081t__unsafe_ptr,&__t2499t____t1081t__unsafe_size,&__t2499t____t1081t__unsafe_offset,&__t2499t____t1081t__unsafe_align,__t2499t____t1082t,&__t2500t__buf__unsafe_ptr,&__t2500t__buf__unsafe_size,&__t2500t__buf__unsafe_offset,&__t2500t__buf__unsafe_align,&__t2500t__pos);
  __t2501t__buf__unsafe_ptr=__t2500t__buf__unsafe_ptr;
  __t2501t__buf__unsafe_size=__t2500t__buf__unsafe_size;
  __t2501t__buf__unsafe_offset=__t2500t__buf__unsafe_offset;
  __t2501t__buf__unsafe_align=__t2500t__buf__unsafe_align;
  __t2501t__pos=__t2500t__pos;
  surface__buf__unsafe_ptr=__t2501t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2501t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2501t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2501t__buf__unsafe_align;
  surface__pos=__t2501t__pos;
  __t_errcode=copy__t1376t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2502t__unsafe_ptr,&__t2502t__dat__pos,&__t2502t__dat__length,&__t2502t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1376t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2503t__unsafe_ptr,&__t2503t__dat__pos,&__t2503t__dat__length,&__t2503t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1077t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2504t____t1078t__unsafe_ptr,&__t2504t____t1078t__unsafe_size,&__t2504t____t1078t__unsafe_offset,&__t2504t____t1078t__unsafe_align,&__t2504t____t1079t);
  __t2506t=0;
  add__t187t(prev_pos,__t2506t,&__t2507t__);
  __t_errcode=str__t1345t(__t2504t____t1078t__unsafe_ptr,__t2504t____t1078t__unsafe_size,__t2504t____t1078t__unsafe_offset,__t2504t____t1078t__unsafe_align,__t2504t____t1079t,__t2507t__,&__t2508t__unsafe_ptr,&__t2508t__dat__pos,&__t2508t__dat__length,&__t2508t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2485t__unsafe_ptr=__t2508t__unsafe_ptr;
  __t2485t__dat__pos=__t2508t__dat__pos;
  __t2485t__dat__length=__t2508t__dat__length;
  __t2485t__dat__first=__t2508t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4886t=CHARS__buf__unsafe_ptr;
  *__t4887t=CHARS__buf__unsafe_size;
  *__t4888t=CHARS__buf__unsafe_offset;
  *__t4889t=CHARS__buf__unsafe_align;
  *__t4890t=CHARS__pos;
  *__t4891t=__t2485t__unsafe_ptr;
  *__t4892t=__t2485t__dat__pos;
  *__t4893t=__t2485t__dat__length;
  *__t4894t=__t2485t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1518t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t4895t) {
  int __t1519t=0;
  char __t1520t__=0;
  uint64_t __t1521t__=0;
  char* __t1522t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t372t(i,s__dat__length,&__t1520t__);
  if(__t1520t__){
  __t_errcode=15;
  goto __t_failure;
  }
  add__t187t(s__dat__pos,i,&__t1521t__);
  add__t724t(s__unsafe_ptr,__t1521t__,&__t1522t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4895t=__t1522t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1544t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t4896t, uint64_t* __t4897t, uint64_t* __t4898t, char* __t4899t) {
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
  str__t1349t(__t430t,&__t1547t__unsafe_ptr,&__t1547t__dat__pos,&__t1547t__dat__length,&__t1547t__dat__first);
  goto __t_return;
  }
  gt__t324t(from,to,&__t1548t__);
  if(!__t1548t__){
  gt__t324t(to,s__dat__length,&__t1549t__);
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
  sub__t408t(to,from,&__t1553t__);
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
  add__t187t(s__dat__pos,from,&__t1559t__);
  str__t1289t(s__unsafe_ptr,__t1559t__,new_length,new_first,&__t1560t__unsafe_ptr,&__t1560t__dat__pos,&__t1560t__dat__length,&__t1560t__dat__first);
  __t1547t__unsafe_ptr=__t1560t__unsafe_ptr;
  __t1547t__dat__pos=__t1560t__dat__pos;
  __t1547t__dat__length=__t1560t__dat__length;
  __t1547t__dat__first=__t1560t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4896t=__t1547t__unsafe_ptr;
  *__t4897t=__t1547t__dat__pos;
  *__t4898t=__t1547t__dat__length;
  *__t4899t=__t1547t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1623t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t4900t) {
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
  __t_complain=sub__t400t(n,needle__dat__length,&__t1627t__);
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
  *__t4900t=__t1629t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t672t(uint64_t to, uint64_t* __t4901t, uint64_t* __t4902t) {
  uint64_t __t673t=0;
  __t673t=0;
  goto __t_return;
  __t_return:
  *__t4901t=__t673t;
  *__t4902t=to;
}

static inline __attribute__((always_inline)) void range__t689t(uint64_t _from, uint64_t to, uint64_t* __t4903t, uint64_t* __t4904t) {
  uint64_t __t690t=0;
  uint64_t from=0;
  __t690t=_from;
  from=__t690t;
  goto __t_return;
  __t_return:
  *__t4903t=from;
  *__t4904t=to;
}

static inline __attribute__((always_inline)) int get__t696t(uint64_t r__from, uint64_t r__to, uint64_t _pos, uint64_t* __t4905t) {
  uint64_t __t697t__=0;
  uint64_t pos=0;
  char __t698t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t187t(_pos,r__from,&__t697t__);
  pos=__t697t__;
  ge__t372t(pos,r__to,&__t698t__);
  if(__t698t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4905t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t1709t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t4906t) {
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
  uint64_t __t1717t____t673t=0;
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
  __t_complain=sub__t400t(stack__dat__length,d,&__t1713t__);
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
  of__t672t(n,&__t1717t____t673t,&__t1717t__to);
  range__t689t(__t1717t____t673t,__t1717t__to,&__t1718t__from,&__t1718t__to);
  __t1716t=0-1;
  while(1){
  __t1716t=__t1716t+1;
  __t_complain=get__t696t(__t1718t__from,__t1718t__to,__t1716t,&__t1720t__);
  __t1719t=__t_complain;
  if(__t_complain){
  goto __t1719t__label;
  }
  i=__t1720t__;
  __t1719t__label:__t1719t=__t1719t==0;
  if(!__t1719t){
  break;
  }
  add__t187t(i,d,&__t1722t__);
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
  *__t4906t=__t1715t;
}

static inline __attribute__((always_inline)) void nn__t429t(const char* value, const char** __t4907t, const char** __t4908t) {
  const char* __t431t=0;
  __t431t=__t430t;
  goto __t_return;
  __t_return:
  *__t4907t=value;
  *__t4908t=__t431t;
}

static inline __attribute__((always_inline)) void print__t438t(const char* value, const char* endl) {
  int __t439t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t482t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[33m");
  }
}

static inline __attribute__((always_inline)) void set__t594t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t4525t(char colors__initialized) {
  const char* __t4527t__value=0;
  const char* __t4527t____t431t=0;
  int __t4529t=0;
  int __t4530t=0;
  char __t4531t=0;
  char __t4532t=0;
  const char* __t4536t__value=0;
  const char* __t4536t____t431t=0;
  const char* __t4540t__value=0;
  const char* __t4540t____t431t=0;
  nn__t429t(__t4489t,&__t4527t__value,&__t4527t____t431t);
  print__t438t(__t4527t__value,__t4527t____t431t);
  __t4532t=1;
  if(__t4533t!=__t4533t){
  __t4532t=0;
  }
  if(__t4532t){
  __t4531t=1;
  }
  if(__t4531t){
  set__t482t(colors__initialized);
  nn__t429t(__t3148t,&__t4536t__value,&__t4536t____t431t);
  print__t438t(__t4536t__value,__t4536t____t431t);
  }
  set__t594t(colors__initialized);
  nn__t429t(__t4504t,&__t4540t__value,&__t4540t____t431t);
  print__t438t(__t4540t__value,__t4540t____t431t);
}

static inline __attribute__((always_inline)) void nn__t2205t(char* value__unsafe_ptr, uint64_t value__dat__pos, uint64_t value__dat__length, char value__dat__first, char** __t4909t, uint64_t* __t4910t, uint64_t* __t4911t, char* __t4912t, const char** __t4913t) {
  const char* __t2206t=0;
  __t2206t=__t430t;
  goto __t_return;
  __t_return:
  *__t4909t=value__unsafe_ptr;
  *__t4910t=value__dat__pos;
  *__t4911t=value__dat__length;
  *__t4912t=value__dat__first;
  *__t4913t=__t2206t;
}

static inline __attribute__((always_inline)) void print__t1510t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, const char* endl) {
  int __t1511t=0;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t428t() {
  fflush(stdout);
}

static inline __attribute__((always_inline)) void popen__t3648t(const char* cmd, char** __t4914t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t4914t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t3647t(char* unsafe_ptr, int64_t* __t4915t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t4915t=status;
}

static inline __attribute__((always_inline)) void int__t631t(uint64_t x, int64_t* __t4916t) {
  int __t632t=0;
  int __t633t=0;
  int __t634t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t4916t=z;
}

static inline __attribute__((always_inline)) void is_different__t96t(int64_t x, int64_t y, int* __t4917t) {
  int __t97t=0;
  int __t98t__=0;
  not__t50t(__t97t,&__t98t__);
  goto __t_return;
  __t_return:
  *__t4917t=__t98t__;
}

static inline __attribute__((always_inline)) void neq__t146t(int64_t x, int64_t y, char* __t4918t) {
  int __t147t__=0;
  char z=0;
  is_different__t96t(x,y,&__t147t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t4918t=z;
}

static inline __attribute__((always_inline)) int open__t3649t(const char* cmd, char** __t4919t) {
  char* __t3650t__=0;
  char* unsafe_ptr=0;
  char __t3651t__=0;
  char __t3652t__=0;
  char __t3653t__=0;
  int64_t __t3654t__=0;
  int64_t status=0;
  uint64_t __t3655t=0;
  int64_t __t3656t__=0;
  char __t3657t__=0;
  char __t3658t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t3648t(cmd,&__t3650t__);
  unsafe_ptr=__t3650t__;
  exists__t651t(unsafe_ptr,&__t3651t__);
  not__t41t(__t3651t__,&__t3652t__);
  if(__t3652t__){
  __t_errcode=37;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t651t(unsafe_ptr,&__t3653t__);
  if(__t3653t__){
  pclose__t3647t(unsafe_ptr,&__t3654t__);
  status=__t3654t__;
  unsafe_ptr=0;
  __t3655t=0;
  int__t631t(__t3655t,&__t3656t__);
  neq__t146t(status,__t3656t__,&__t3657t__);
  if(__t3657t__){
  __t_complain=38;
  goto __t3658t__label;
  __t3658t__label:__t3658t=__t3658t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t4919t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t3660t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t4920t) {
  const char* __t3661t__cstr=0;
  char* __t3661t__str__unsafe_ptr=0;
  uint64_t __t3661t__str__dat__pos=0;
  uint64_t __t3661t__str__dat__length=0;
  char __t3661t__str__dat__first=0;
  const char* __t3663t__=0;
  char* __t3664t__unsafe_ptr=0;
  char __t3665t____t3653t__=0;
  int64_t __t3665t____t3654t__=0;
  int64_t __t3665t__status=0;
  uint64_t __t3665t____t3655t=0;
  int64_t __t3665t____t3656t__=0;
  char __t3665t____t3657t__=0;
  char __t3665t____t3658t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1431t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t3661t__cstr,&__t3661t__str__unsafe_ptr,&__t3661t__str__dat__pos,&__t3661t__str__dat__length,&__t3661t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1441t(__t3661t__cstr,__t3661t__str__unsafe_ptr,__t3661t__str__dat__pos,__t3661t__str__dat__length,__t3661t__str__dat__first,&__t3663t__);
  __t_errcode=open__t3649t(__t3663t__,&__t3664t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t651t(__t3664t__unsafe_ptr,&__t3665t____t3653t__);
  if(__t3665t____t3653t__){
  pclose__t3647t(__t3664t__unsafe_ptr,&__t3665t____t3654t__);
  __t3665t__status=__t3665t____t3654t__;
  __t3664t__unsafe_ptr=0;
  __t3665t____t3655t=0;
  int__t631t(__t3665t____t3655t,&__t3665t____t3656t__);
  neq__t146t(__t3665t__status,__t3665t____t3656t__,&__t3665t____t3657t__);
  if(__t3665t____t3657t__){
  __t_complain=38;
  goto __t3658t__label;
  __t3658t__label:__t3665t____t3658t=__t3665t____t3658t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t4920t=__t3664t__unsafe_ptr;
  
  __t_skip_returns:free__t722t(&__t3661t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t3622t(int64_t value, const char** __t4921t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t4921t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t4922t) {
  const char* value=0;
  *__t4922t=value;
}

int run__t4471t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t4923t) {
  char* __t4472t__unsafe_ptr=0;
  char __t4473t____t3665t____t3653t__=0;
  int64_t __t4473t____t3665t____t3654t__=0;
  int64_t __t4473t____t3665t__status=0;
  uint64_t __t4473t____t3665t____t3655t=0;
  int64_t __t4473t____t3665t____t3656t__=0;
  char __t4473t____t3665t____t3657t__=0;
  char __t4473t____t3665t____t3658t=0;
  char* proc__unsafe_ptr=0;
  char __t4474t=0;
  int64_t __t4475t=0;
  int64_t error=0;
  const char* __t4476t__=0;
  const char* __t4477t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t3660t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t4472t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t4472t__unsafe_ptr;
  exists__t651t(__t4472t__unsafe_ptr,&__t4473t____t3665t____t3653t__);
  if(__t4473t____t3665t____t3653t__){
  pclose__t3647t(__t4472t__unsafe_ptr,&__t4473t____t3665t____t3654t__);
  __t4473t____t3665t__status=__t4473t____t3665t____t3654t__;
  __t4472t__unsafe_ptr=0;
  __t4473t____t3665t____t3655t=0;
  int__t631t(__t4473t____t3665t____t3655t,&__t4473t____t3665t____t3656t__);
  neq__t146t(__t4473t____t3665t__status,__t4473t____t3665t____t3656t__,&__t4473t____t3665t____t3657t__);
  if(__t4473t____t3665t____t3657t__){
  __t_complain=38;
  goto __t3658t__label;
  __t3658t__label:__t4473t____t3665t____t3658t=__t4473t____t3665t____t3658t==0;
  }
  }
  __t4475t=__t_complain;
  __t4474t=(__t_complain==0);
  __t_complain=0;
  error=__t4475t;
  __t4474t__label:__t4474t=__t4474t==0;
  if(__t4474t){
  cstr__t3622t(error,&__t4476t__);
  goto __t_return;
  }
  cstr__t1t(&__t4477t__);
  __t4476t__=__t4477t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4923t=__t4476t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t4924t) {
  int value=0;
  *__t4924t=value;
}

static inline __attribute__((always_inline)) void not__t52t(int __t_anon0, int* __t4925t) {
  int __t53t__=0;
  true__t15t(&__t53t__);
  goto __t_return;
  __t_return:
  *__t4925t=__t53t__;
}

static inline __attribute__((always_inline)) void exists__t1287t(const char* c, char* __t4926t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t4926t=z;
}

static inline __attribute__((always_inline)) void set__t474t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t4507t(char colors__initialized) {
  const char* __t4509t__value=0;
  const char* __t4509t____t431t=0;
  int __t4511t=0;
  char __t4512t=0;
  char __t4513t=0;
  const char* __t4518t__value=0;
  const char* __t4518t____t431t=0;
  int __t4520t=0;
  const char* __t4523t__value=0;
  const char* __t4523t____t431t=0;
  nn__t429t(__t4489t,&__t4509t__value,&__t4509t____t431t);
  print__t438t(__t4509t__value,__t4509t____t431t);
  __t4513t=1;
  if(__t4514t!=__t4514t){
  __t4513t=0;
  }
  if(__t4513t){
  __t4512t=1;
  }
  if(__t4512t){
  set__t474t(colors__initialized);
  nn__t429t(__t4517t,&__t4518t__value,&__t4518t____t431t);
  print__t438t(__t4518t__value,__t4518t____t431t);
  }
  set__t594t(colors__initialized);
  nn__t429t(__t4504t,&__t4523t__value,&__t4523t____t431t);
  print__t438t(__t4523t__value,__t4523t____t431t);
}

static inline __attribute__((always_inline)) void print__t440t(const char* value) {
  int __t441t=0;
  const char* endl=0;
  endl=__t442t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t478t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[32m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t4487t(char colors__initialized) {
  const char* __t4490t__value=0;
  const char* __t4490t____t431t=0;
  char __t4492t=0;
  char __t4493t=0;
  const char* __t4498t__value=0;
  const char* __t4498t____t431t=0;
  int __t4500t=0;
  int __t4501t=0;
  const char* __t4505t__value=0;
  const char* __t4505t____t431t=0;
  nn__t429t(__t4489t,&__t4490t__value,&__t4490t____t431t);
  print__t438t(__t4490t__value,__t4490t____t431t);
  __t4493t=1;
  if(__t4494t!=__t4494t){
  __t4493t=0;
  }
  if(__t4493t){
  __t4492t=1;
  }
  if(__t4492t){
  set__t478t(colors__initialized);
  nn__t429t(__t4497t,&__t4498t__value,&__t4498t____t431t);
  print__t438t(__t4498t__value,__t4498t____t431t);
  }
  set__t594t(colors__initialized);
  nn__t429t(__t4504t,&__t4505t__value,&__t4505t____t431t);
  print__t438t(__t4505t__value,__t4505t____t431t);
}

static inline __attribute__((always_inline)) int test__t4542t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t4927t) {
  char* __t4546t__value__unsafe_ptr=0;
  uint64_t __t4546t__value__dat__pos=0;
  uint64_t __t4546t__value__dat__length=0;
  char __t4546t__value__dat__first=0;
  const char* __t4546t____t2206t=0;
  const char* __t4550t__=0;
  const char* __t4551t=0;
  const char* error=0;
  int __t4552t=0;
  int __t4553t__=0;
  char __t4554t__=0;
  const char* __t4555t__=0;
  const char* __t4558t__value=0;
  const char* __t4558t____t431t=0;
  char __t4560t__=0;
  const char* __t4565t__value=0;
  const char* __t4565t____t431t=0;
  char __t4568t=0;
  char __t4572t=0;
  int __t_errcode=0;
  int __t_complain=0;
  print_marker__t4525t(colors__initialized);
  nn__t2205t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t4546t__value__unsafe_ptr,&__t4546t__value__dat__pos,&__t4546t__value__dat__length,&__t4546t__value__dat__first,&__t4546t____t2206t);
  print__t1510t(__t4546t__value__unsafe_ptr,__t4546t__value__dat__pos,__t4546t__value__dat__length,__t4546t__value__dat__first,__t4546t____t2206t);
  print__t428t();
  __t_errcode=run__t4471t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t4550t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4551t=__t4550t__;
  error=__t4551t;
  not__t52t(__t4552t,&__t4553t__);
  if(should_fail){
  exists__t1287t(error,&__t4554t__);
  if(__t4554t__){
  cstr__t1t(&__t4555t__);
  error=__t4555t__;
  }
  else{
  error=__t4556t;
  }
  }
  nn__t429t(__t4557t,&__t4558t__value,&__t4558t____t431t);
  print__t438t(__t4558t__value,__t4558t____t431t);
  exists__t1287t(error,&__t4560t__);
  if(__t4560t__){
  print_marker__t4507t(colors__initialized);
  print__t440t(__t430t);
  nn__t429t(__t4564t,&__t4565t__value,&__t4565t____t431t);
  print__t438t(__t4565t__value,__t4565t____t431t);
  print__t440t(error);
  __t4568t=0;
  goto __t_return;
  }
  print_marker__t4487t(colors__initialized);
  print__t440t(__t430t);
  __t4572t=1;
  __t4568t=__t4572t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4927t=__t4568t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t451t(uint64_t value, const char* endl) {
  int __t452t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t436t(uint64_t value, uint64_t* __t4928t, const char** __t4929t) {
  const char* __t437t=0;
  __t437t=__t430t;
  goto __t_return;
  __t_return:
  *__t4928t=value;
  *__t4929t=__t437t;
}

static inline __attribute__((always_inline)) int main__t4617t() {
  char* __t4619t__unsafe_ptr=0;
  uint64_t __t4619t__dat__pos=0;
  uint64_t __t4619t__dat__length=0;
  char __t4619t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t4622t__initialized=0;
  char colors__initialized=0;
  uint64_t __t4624t=0;
  char* __t4625t__unsafe_ptr=0;
  uint64_t __t4625t__unsafe_size=0;
  uint32_t __t4625t__unsafe_offset=0;
  uint32_t __t4625t__unsafe_align=0;
  char* __t4627t__buf__unsafe_ptr=0;
  uint64_t __t4627t__buf__unsafe_size=0;
  uint32_t __t4627t__buf__unsafe_offset=0;
  uint32_t __t4627t__buf__unsafe_align=0;
  uint64_t __t4627t__pos=0;
  char* __t4628t__buf__unsafe_ptr=0;
  uint64_t __t4628t__buf__unsafe_size=0;
  uint32_t __t4628t__buf__unsafe_offset=0;
  uint32_t __t4628t__buf__unsafe_align=0;
  uint64_t __t4628t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t4630t__unsafe_ptr=0;
  uint64_t __t4630t__dat__pos=0;
  uint64_t __t4630t__dat__length=0;
  char __t4630t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  uint64_t __t4631t=0;
  uint64_t __t4632t=0;
  uint64_t counter=0;
  uint64_t __t4633t=0;
  uint64_t __t4634t=0;
  uint64_t failures=0;
  uint64_t __t4635t=0;
  char* __t4636t__unsafe_ptr=0;
  char __t4638t=0;
  char* __t4639t__unsafe_ptr=0;
  uint64_t __t4639t__dat__pos=0;
  uint64_t __t4639t__dat__length=0;
  char __t4639t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t4641t__=0;
  char __t4642t__=0;
  char __t4643t__=0;
  char __t4644t=0;
  char __t4645t__=0;
  uint64_t __t4646t__=0;
  uint64_t __t4647t____t4614t=0;
  uint64_t __t4647t____t4616t__=0;
  char* __t4648t__unsafe_ptr=0;
  uint64_t __t4648t__dat__pos=0;
  uint64_t __t4648t__dat__length=0;
  char __t4648t__dat__first=0;
  char* __t4650t__unsafe_ptr=0;
  uint64_t __t4650t__dat__pos=0;
  uint64_t __t4650t__dat__length=0;
  char __t4650t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t4651t=0;
  char* __t4652t__unsafe_ptr=0;
  char __t4654t=0;
  char* __t4655t__unsafe_ptr=0;
  uint64_t __t4655t__dat__pos=0;
  uint64_t __t4655t__dat__length=0;
  char __t4655t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t4657t__=0;
  char __t4658t__=0;
  uint64_t __t4659t__=0;
  uint64_t __t4660t____t4614t=0;
  uint64_t __t4660t____t4616t__=0;
  uint64_t __t4661t=0;
  uint64_t __t4662t__=0;
  char __t4664t__=0;
  char should_fail=0;
  char* __t4665t__unsafe_ptr=0;
  uint64_t __t4665t__dat__pos=0;
  uint64_t __t4665t__dat__length=0;
  char __t4665t__dat__first=0;
  char* __t4666t__unsafe_ptr=0;
  uint64_t __t4666t__dat__pos=0;
  uint64_t __t4666t__dat__length=0;
  char __t4666t__dat__first=0;
  char __t4667t__=0;
  char __t4668t__=0;
  uint64_t __t4669t=0;
  uint64_t __t4670t__=0;
  uint64_t __t4671t=0;
  char __t4672t__=0;
  const char* __t4686t__value=0;
  const char* __t4686t____t431t=0;
  const char* __t4676t__value=0;
  const char* __t4676t____t431t=0;
  const char* __t4681t__value=0;
  const char* __t4681t____t431t=0;
  uint64_t __t4692t__value=0;
  const char* __t4692t____t437t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1349t(__t4618t,&__t4619t__unsafe_ptr,&__t4619t__dat__pos,&__t4619t__dat__length,&__t4619t__dat__first);
  test_root__unsafe_ptr=__t4619t__unsafe_ptr;
  test_root__dat__pos=__t4619t__dat__pos;
  test_root__dat__length=__t4619t__dat__length;
  test_root__dat__first=__t4619t__dat__first;
  console__t418t();
  colors__t468t(&__t4622t__initialized);
  colors__initialized=__t4622t__initialized;
  __t4624t=128;
  __t_errcode=alloc__t990t(__t4624t,&__t4625t__unsafe_ptr,&__t4625t__unsafe_size,&__t4625t__unsafe_offset,&__t4625t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1071t(&__t4625t__unsafe_ptr,&__t4625t__unsafe_size,&__t4625t__unsafe_offset,&__t4625t__unsafe_align,&__t4627t__buf__unsafe_ptr,&__t4627t__buf__unsafe_size,&__t4627t__buf__unsafe_offset,&__t4627t__buf__unsafe_align,&__t4627t__pos);
  __t4628t__buf__unsafe_ptr=__t4627t__buf__unsafe_ptr;
  __t4628t__buf__unsafe_size=__t4627t__buf__unsafe_size;
  __t4628t__buf__unsafe_offset=__t4627t__buf__unsafe_offset;
  __t4628t__buf__unsafe_align=__t4627t__buf__unsafe_align;
  __t4628t__pos=__t4627t__pos;
  CHARS__buf__unsafe_ptr=__t4628t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t4628t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t4628t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t4628t__buf__unsafe_align;
  CHARS__pos=__t4628t__pos;
  __t_errcode=copy__t1381t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t4629t,&__t4630t__unsafe_ptr,&__t4630t__dat__pos,&__t4630t__dat__length,&__t4630t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t4630t__unsafe_ptr;
  command_base__dat__pos=__t4630t__dat__pos;
  command_base__dat__length=__t4630t__dat__length;
  command_base__dat__first=__t4630t__dat__first;
  __t4631t=0;
  __t4632t=__t4631t;
  counter=__t4632t;
  __t4633t=0;
  __t4634t=__t4633t;
  failures=__t4634t;
  __t_errcode=open__t4347t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t4636t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4635t=0-1;
  while(1){
  __t4635t=__t4635t+1;
  __t_complain=get__t4430t(&__t4636t__unsafe_ptr,__t4635t,&__t4639t__unsafe_ptr,&__t4639t__dat__pos,&__t4639t__dat__length,&__t4639t__dat__first);
  __t4638t=__t_complain;
  if(__t_complain){
  goto __t4638t__label;
  }
  path__unsafe_ptr=__t4639t__unsafe_ptr;
  path__dat__pos=__t4639t__dat__pos;
  path__dat__length=__t4639t__dat__length;
  path__dat__first=__t4639t__dat__first;
  __t4638t__label:__t4638t=__t4638t==0;
  if(!__t4638t){
  break;
  }
  eq__t1455t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t4640t,&__t4641t__);
  if(!__t4641t__){
  __t_errcode=is_dir__t4274t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t4642t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t4642t__,&__t4643t__);
  __t4644t=__t4643t__;
  }
  else{
  __t4644t=0;
  not__t41t(__t4644t,&__t4645t__);
  __t4644t=__t4645t__;
  }
  if(__t4644t){
  continue;
  }
  reuse__t4611t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t4646t__);
  __t_errcode=add__t2421t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t4648t__unsafe_ptr,&__t4648t__dat__pos,&__t4648t__dat__length,&__t4648t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2465t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t4648t__unsafe_ptr,__t4648t__dat__pos,__t4648t__dat__length,__t4648t__dat__first,__t4649t,&__t4650t__unsafe_ptr,&__t4650t__dat__pos,&__t4650t__dat__length,&__t4650t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t4650t__unsafe_ptr;
  dir_path__dat__pos=__t4650t__dat__pos;
  dir_path__dat__length=__t4650t__dat__length;
  dir_path__dat__first=__t4650t__dat__first;
  __t_errcode=open__t4347t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t4652t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4651t=0-1;
  while(1){
  __t4651t=__t4651t+1;
  __t_complain=get__t4430t(&__t4652t__unsafe_ptr,__t4651t,&__t4655t__unsafe_ptr,&__t4655t__dat__pos,&__t4655t__dat__length,&__t4655t__dat__first);
  __t4654t=__t_complain;
  if(__t_complain){
  goto __t4654t__label;
  }
  entry__unsafe_ptr=__t4655t__unsafe_ptr;
  entry__dat__pos=__t4655t__dat__pos;
  entry__dat__length=__t4655t__dat__length;
  entry__dat__first=__t4655t__dat__first;
  __t4654t__label:__t4654t=__t4654t==0;
  if(!__t4654t){
  break;
  }
  __t_errcode=ends_with__t1623t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t4656t,&__t4657t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t4657t__,&__t4658t__);
  if(__t4658t__){
  continue;
  }
  reuse__t4611t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t4659t__);
  __t4661t=1;
  add__t187t(counter,__t4661t,&__t4662t__);
  counter=__t4662t__;
  contains__t1709t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t4663t,&__t4664t__);
  should_fail=__t4664t__;
  __t_errcode=add__t2421t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t4665t__unsafe_ptr,&__t4665t__dat__pos,&__t4665t__dat__length,&__t4665t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2421t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t4665t__unsafe_ptr,__t4665t__dat__pos,__t4665t__dat__length,__t4665t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t4666t__unsafe_ptr,&__t4666t__dat__pos,&__t4666t__dat__length,&__t4666t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t4542t(colors__initialized,__t4666t__unsafe_ptr,__t4666t__dat__pos,__t4666t__dat__length,__t4666t__dat__first,should_fail,&__t4667t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t4667t__,&__t4668t__);
  if(__t4668t__){
  __t4669t=1;
  add__t187t(failures,__t4669t,&__t4670t__);
  failures=__t4670t__;
  }
  __t4660t____t4614t=0;
  sub__t408t(__t4659t__,__t4660t____t4614t,&__t4660t____t4616t__);
  CHARS__pos=__t4660t____t4616t__;
  }
  __t4647t____t4614t=0;
  sub__t408t(__t4646t__,__t4647t____t4614t,&__t4647t____t4616t__);
  CHARS__pos=__t4647t____t4616t__;
  closedir__t4337t(__t4652t__unsafe_ptr);
  }
  __t4671t=0;
  eq__t133t(failures,__t4671t,&__t4672t__);
  if(__t4672t__){
  set__t478t(colors__initialized);
  nn__t429t(__t4675t,&__t4676t__value,&__t4676t____t431t);
  print__t438t(__t4676t__value,__t4676t____t431t);
  set__t594t(colors__initialized);
  nn__t429t(__t4680t,&__t4681t__value,&__t4681t____t431t);
  print__t438t(__t4681t__value,__t4681t____t431t);
  }
  else{
  set__t474t(colors__initialized);
  nn__t429t(__t4685t,&__t4686t__value,&__t4686t____t431t);
  print__t438t(__t4686t__value,__t4686t____t431t);
  set__t594t(colors__initialized);
  print__t451t(failures,__t4690t);
  }
  nn__t436t(counter,&__t4692t__value,&__t4692t____t437t);
  print__t451t(__t4692t__value,__t4692t____t437t);
  print__t440t(__t4694t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t4337t(__t4636t__unsafe_ptr);
  free__t722t(&__t4625t__unsafe_ptr);
  if(__t4622t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t4617t();
                }