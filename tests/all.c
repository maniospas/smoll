#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t4528t="[";
const char* const __t4543t="] ";
const char* const __t4724t="no errors across ";
const char* const __t4700t=".s";
const char* const __t430t="";
const char* const __t4707t="_fail_";
const char* const __t442t="\n";
const char* const __t4536t="V";
const char* const __t4612t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t4553t="failure";
const char* const __t4590t=" |- ";
const char* const __t4693t="/";
const char* const __t4734t=" out of ";
const char* const __t4729t="FAILED ";
const char* const __t4738t=" tests";
const char* const __t4556t="X";
const char* const __t4719t="PASSING ";
const char* const __t4533t="success";
const char* const __t4673t="./smoll --cleanup ";
const char* const __t4662t="./tests/passing/";
const char* const __t4684t="..";
const char* const __t4622t="completed";
static const char* __t_all_errcodes[57] = {"noerr",
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
"end of dir",
"assertion failed"
};

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1267t(char** __t4740t, uint64_t* __t4741t, uint32_t* __t4742t, uint32_t* __t4743t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4740t=unsafe_ptr;
  *__t4741t=unsafe_size;
  *__t4742t=unsafe_offset;
  *__t4743t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t4744t) {
  *__t4744t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t4745t) {
  int value=0;
  *__t4745t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t4746t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t4746t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t4747t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t4747t=__t110t__;
}

static inline __attribute__((always_inline)) void add__t187t(uint64_t x, uint64_t y, uint64_t* __t4748t) {
  int __t188t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t188t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t4748t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t4749t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t4749t=z;
}

static inline __attribute__((always_inline)) void ge__t372t(uint64_t x, uint64_t y, char* __t4750t) {
  int __t373t__=0;
  char z=0;
  is_different__t108t(x,y,&__t373t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t4750t=z;
}

static inline __attribute__((always_inline)) void nat__t727t(uint32_t x, uint64_t* __t4751t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4751t=value;
}

static inline __attribute__((always_inline)) void mul__t211t(uint64_t x, uint64_t y, uint64_t* __t4752t) {
  int __t212t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t212t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t4752t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t4753t) {
  *__t4753t=to;
}

static inline __attribute__((always_inline)) void add__t724t(char* allocated, uint64_t offset, char** __t4754t) {
  char* element=0;
  char* __t725t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t725t__);
  goto __t_return;
  __t_return:
  *__t4754t=__t725t__;
}

static inline __attribute__((always_inline)) int get__t1055t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t4755t) {
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
  *__t4755t=__t1062t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1292t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4756t, uint64_t* __t4757t, uint64_t* __t4758t, char* __t4759t) {
  goto __t_return;
  __t_return:
  *__t4756t=unsafe_ptr;
  *__t4757t=dat__pos;
  *__t4758t=dat__length;
  *__t4759t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1296t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4760t, uint64_t* __t4761t, uint64_t* __t4762t, char* __t4763t) {
  char* unsafe_ptr=0;
  uint64_t __t1297t__=0;
  uint64_t __t1298t=0;
  char __t1299t__=0;
  uint64_t __t1300t__=0;
  uint64_t __t1301t=0;
  char __t1302t__=0;
  char* __t1303t__unsafe_ptr=0;
  uint64_t __t1303t__dat__pos=0;
  uint64_t __t1303t__dat__length=0;
  char __t1303t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t727t(buf__unsafe_align,&__t1297t__);
  __t1298t=1;
  neq__t157t(__t1297t__,__t1298t,&__t1299t__);
  if(__t1299t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t727t(buf__unsafe_offset,&__t1300t__);
  __t1301t=0;
  neq__t157t(__t1300t__,__t1301t,&__t1302t__);
  if(__t1302t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t1292t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1303t__unsafe_ptr,&__t1303t__dat__pos,&__t1303t__dat__length,&__t1303t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4760t=__t1303t__unsafe_ptr;
  *__t4761t=__t1303t__dat__pos;
  *__t4762t=__t1303t__dat__length;
  *__t4763t=__t1303t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1330t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t4764t, uint64_t* __t4765t, uint64_t* __t4766t, char* __t4767t) {
  uint64_t __t1331t=0;
  char __t1332t__=0;
  char* __t1334t__=0;
  char __t1335t__value=0;
  char first=0;
  char* __t1336t__unsafe_ptr=0;
  uint64_t __t1336t__dat__pos=0;
  uint64_t __t1336t__dat__length=0;
  char __t1336t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1331t=0;
  neq__t157t(length,__t1331t,&__t1332t__);
  if(__t1332t__){
  __t_errcode=get__t1055t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1334t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1334t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1335t__value,__t1334t__,1);
  first=__t1335t__value;
  }
  __t_errcode=str__t1296t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1336t__unsafe_ptr,&__t1336t__dat__pos,&__t1336t__dat__length,&__t1336t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4764t=__t1336t__unsafe_ptr;
  *__t4765t=__t1336t__dat__pos;
  *__t4766t=__t1336t__dat__length;
  *__t4767t=__t1336t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1352t(const char* c, char** __t4768t, uint64_t* __t4769t, uint64_t* __t4770t, char* __t4771t) {
  char* __t1353t__unsafe_ptr=0;
  uint64_t __t1353t__unsafe_size=0;
  uint32_t __t1353t__unsafe_offset=0;
  uint32_t __t1353t__unsafe_align=0;
  char* __t1354t__unsafe_ptr=0;
  uint64_t __t1354t__unsafe_size=0;
  uint32_t __t1354t__unsafe_offset=0;
  uint32_t __t1354t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1355t__=0;
  uint64_t length=0;
  uint64_t __t1356t=0;
  uint64_t __t1357t__=0;
  char __t1358t=0;
  uint64_t __t1359t=0;
  char* __t1361t__unsafe_ptr=0;
  uint64_t __t1361t__dat__pos=0;
  uint64_t __t1361t__dat__length=0;
  char __t1361t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1267t(&__t1353t__unsafe_ptr,&__t1353t__unsafe_size,&__t1353t__unsafe_offset,&__t1353t__unsafe_align);
  __t1354t__unsafe_ptr=__t1353t__unsafe_ptr;
  __t1354t__unsafe_size=__t1353t__unsafe_size;
  __t1354t__unsafe_offset=__t1353t__unsafe_offset;
  __t1354t__unsafe_align=__t1353t__unsafe_align;
  buf__unsafe_ptr=__t1354t__unsafe_ptr;
  buf__unsafe_size=__t1354t__unsafe_size;
  buf__unsafe_offset=__t1354t__unsafe_offset;
  buf__unsafe_align=__t1354t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1355t__);
  buf__unsafe_ptr=__t1355t__;
  if(c){
  length=strlen(c);
  }
  __t1356t=1;
  add__t187t(length,__t1356t,&__t1357t__);
  buf__unsafe_size=__t1357t__;
  __t1359t=0;
  __t_complain=str__t1330t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1359t,length,&__t1361t__unsafe_ptr,&__t1361t__dat__pos,&__t1361t__dat__length,&__t1361t__dat__first);
  __t1358t=__t_complain;
  if(__t_complain){
  goto __t1358t__label;
  }
  ret__unsafe_ptr=__t1361t__unsafe_ptr;
  ret__dat__pos=__t1361t__dat__pos;
  ret__dat__length=__t1361t__dat__length;
  ret__dat__first=__t1361t__dat__first;
  __t1358t__label:__t1358t=__t1358t==0;
  goto __t_return;
  __t_return:
  *__t4768t=ret__unsafe_ptr;
  *__t4769t=ret__dat__pos;
  *__t4770t=ret__dat__length;
  *__t4771t=ret__dat__first;
}

static inline __attribute__((always_inline)) void console__t418t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void supports_ansi__t467t(char* __t4772t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t4772t=supports;
}

static inline __attribute__((always_inline)) void colors__t468t(char* __t4773t) {
  char __t469t__=0;
  char initialized=0;
  supports_ansi__t467t(&__t469t__);
  initialized=__t469t__;
  goto __t_return;
  __t_return:
  *__t4773t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t991t(char** __t4774t, uint64_t* __t4775t, uint32_t* __t4776t, uint32_t* __t4777t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4774t=unsafe_ptr;
  *__t4775t=unsafe_size;
  *__t4776t=unsafe_offset;
  *__t4777t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t722t(char** __t4778t) {
  char* allocated=*__t4778t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t4778t=allocated;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t4779t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t4779t=z;
}

static inline __attribute__((always_inline)) void zero__t723t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t651t(char* x, char* __t4780t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t4780t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t4781t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t4781t=z;
}

static inline __attribute__((always_inline)) int alloc__t715t(uint64_t bytes, char** __t4782t) {
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
  *__t4782t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t839t(char** __t4783t, uint64_t* __t4784t, uint32_t* __t4785t, uint32_t* __t4786t, uint64_t size, char** __t4787t, uint64_t* __t4788t, uint32_t* __t4789t, uint32_t* __t4790t) {
  char* buffer__unsafe_ptr=*__t4783t;
  uint64_t buffer__unsafe_size=*__t4784t;
  uint32_t buffer__unsafe_offset=*__t4785t;
  uint32_t buffer__unsafe_align=*__t4786t;
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
  *__t4783t=buffer__unsafe_ptr;
  *__t4784t=buffer__unsafe_size;
  *__t4785t=buffer__unsafe_offset;
  *__t4786t=buffer__unsafe_align;
  *__t4787t=buffer__unsafe_ptr;
  *__t4788t=buffer__unsafe_size;
  *__t4789t=buffer__unsafe_offset;
  *__t4790t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t990t(uint64_t size, char** __t4791t, uint64_t* __t4792t, uint32_t* __t4793t, uint32_t* __t4794t) {
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
  *__t4791t=__t994t__unsafe_ptr;
  *__t4792t=__t994t__unsafe_size;
  *__t4793t=__t994t__unsafe_offset;
  *__t4794t=__t994t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1068t(char** __t4795t, uint64_t* __t4796t, uint32_t* __t4797t, uint32_t* __t4798t, uint64_t _pos, char** __t4799t, uint64_t* __t4800t, uint32_t* __t4801t, uint32_t* __t4802t, uint64_t* __t4803t) {
  char* buf__unsafe_ptr=*__t4795t;
  uint64_t buf__unsafe_size=*__t4796t;
  uint32_t buf__unsafe_offset=*__t4797t;
  uint32_t buf__unsafe_align=*__t4798t;
  uint64_t __t1069t=0;
  uint64_t pos=0;
  __t1069t=_pos;
  pos=__t1069t;
  goto __t_return;
  __t_return:
  *__t4795t=buf__unsafe_ptr;
  *__t4796t=buf__unsafe_size;
  *__t4797t=buf__unsafe_offset;
  *__t4798t=buf__unsafe_align;
  *__t4799t=buf__unsafe_ptr;
  *__t4800t=buf__unsafe_size;
  *__t4801t=buf__unsafe_offset;
  *__t4802t=buf__unsafe_align;
  *__t4803t=pos;
}

static inline __attribute__((always_inline)) void arena__t1071t(char** __t4804t, uint64_t* __t4805t, uint32_t* __t4806t, uint32_t* __t4807t, char** __t4808t, uint64_t* __t4809t, uint32_t* __t4810t, uint32_t* __t4811t, uint64_t* __t4812t) {
  char* buf__unsafe_ptr=*__t4804t;
  uint64_t buf__unsafe_size=*__t4805t;
  uint32_t buf__unsafe_offset=*__t4806t;
  uint32_t buf__unsafe_align=*__t4807t;
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
  *__t4804t=buf__unsafe_ptr;
  *__t4805t=buf__unsafe_size;
  *__t4806t=buf__unsafe_offset;
  *__t4807t=buf__unsafe_align;
  *__t4808t=__t1073t__buf__unsafe_ptr;
  *__t4809t=__t1073t__buf__unsafe_size;
  *__t4810t=__t1073t__buf__unsafe_offset;
  *__t4811t=__t1073t__buf__unsafe_align;
  *__t4812t=__t1073t__pos;
}

static inline __attribute__((always_inline)) void len__t1362t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t4813t) {
  goto __t_return;
  __t_return:
  *__t4813t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t1063t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t4814t) {
  goto __t_return;
  __t_return:
  *__t4814t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t324t(uint64_t x, uint64_t y, char* __t4815t) {
  int __t325t__=0;
  char z=0;
  is_different__t108t(x,y,&__t325t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t4815t=z;
}

static inline __attribute__((always_inline)) void allocated__t1075t(char** __t4816t, uint64_t* __t4817t, uint32_t* __t4818t, uint32_t* __t4819t, uint64_t pos, char** __t4820t, uint64_t* __t4821t, uint32_t* __t4822t, uint32_t* __t4823t, uint64_t* __t4824t) {
  char* buf__unsafe_ptr=*__t4816t;
  uint64_t buf__unsafe_size=*__t4817t;
  uint32_t buf__unsafe_offset=*__t4818t;
  uint32_t buf__unsafe_align=*__t4819t;
  goto __t_return;
  __t_return:
  *__t4816t=buf__unsafe_ptr;
  *__t4817t=buf__unsafe_size;
  *__t4818t=buf__unsafe_offset;
  *__t4819t=buf__unsafe_align;
  *__t4820t=buf__unsafe_ptr;
  *__t4821t=buf__unsafe_size;
  *__t4822t=buf__unsafe_offset;
  *__t4823t=buf__unsafe_align;
  *__t4824t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1150t(char** __t4825t, uint64_t* __t4826t, uint32_t* __t4827t, uint32_t* __t4828t, uint64_t* __t4829t, uint64_t length, char** __t4830t, uint64_t* __t4831t, uint32_t* __t4832t, uint32_t* __t4833t, uint64_t* __t4834t) {
  char* allocator__buf__unsafe_ptr=*__t4825t;
  uint64_t allocator__buf__unsafe_size=*__t4826t;
  uint32_t allocator__buf__unsafe_offset=*__t4827t;
  uint32_t allocator__buf__unsafe_align=*__t4828t;
  uint64_t allocator__pos=*__t4829t;
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
  *__t4825t=allocator__buf__unsafe_ptr;
  *__t4826t=allocator__buf__unsafe_size;
  *__t4827t=allocator__buf__unsafe_offset;
  *__t4828t=allocator__buf__unsafe_align;
  *__t4829t=allocator__pos;
  *__t4830t=__t1157t__buf__unsafe_ptr;
  *__t4831t=__t1157t__buf__unsafe_size;
  *__t4832t=__t1157t__buf__unsafe_offset;
  *__t4833t=__t1157t__buf__unsafe_align;
  *__t4834t=__t1157t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1384t(char** __t4835t, uint64_t* __t4836t, uint32_t* __t4837t, uint32_t* __t4838t, uint64_t* __t4839t, const char* _other, char** __t4840t, uint64_t* __t4841t, uint64_t* __t4842t, char* __t4843t) {
  char* CHARS__buf__unsafe_ptr=*__t4835t;
  uint64_t CHARS__buf__unsafe_size=*__t4836t;
  uint32_t CHARS__buf__unsafe_offset=*__t4837t;
  uint32_t CHARS__buf__unsafe_align=*__t4838t;
  uint64_t CHARS__pos=*__t4839t;
  char* __t1385t__unsafe_ptr=0;
  uint64_t __t1385t__dat__pos=0;
  uint64_t __t1385t__dat__length=0;
  char __t1385t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1386t__=0;
  char* __t1387t__buf__unsafe_ptr=0;
  uint64_t __t1387t__buf__unsafe_size=0;
  uint32_t __t1387t__buf__unsafe_offset=0;
  uint32_t __t1387t__buf__unsafe_align=0;
  uint64_t __t1387t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1388t__unsafe_ptr=0;
  uint64_t __t1388t__dat__pos=0;
  uint64_t __t1388t__dat__length=0;
  char __t1388t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1352t(_other,&__t1385t__unsafe_ptr,&__t1385t__dat__pos,&__t1385t__dat__length,&__t1385t__dat__first);
  other__unsafe_ptr=__t1385t__unsafe_ptr;
  other__dat__pos=__t1385t__dat__pos;
  other__dat__length=__t1385t__dat__length;
  other__dat__first=__t1385t__dat__first;
  len__t1362t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1386t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1386t__,&__t1387t__buf__unsafe_ptr,&__t1387t__buf__unsafe_size,&__t1387t__buf__unsafe_offset,&__t1387t__buf__unsafe_align,&__t1387t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1387t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1387t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1387t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1387t__buf__unsafe_align;
  surface__pos=__t1387t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1296t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1388t__unsafe_ptr,&__t1388t__dat__pos,&__t1388t__dat__length,&__t1388t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4835t=CHARS__buf__unsafe_ptr;
  *__t4836t=CHARS__buf__unsafe_size;
  *__t4837t=CHARS__buf__unsafe_offset;
  *__t4838t=CHARS__buf__unsafe_align;
  *__t4839t=CHARS__pos;
  *__t4840t=__t1388t__unsafe_ptr;
  *__t4841t=__t1388t__dat__pos;
  *__t4842t=__t1388t__dat__length;
  *__t4843t=__t1388t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1064t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1410t(char** __t4844t, uint64_t* __t4845t, uint32_t* __t4846t, uint32_t* __t4847t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4844t=unsafe_ptr;
  *__t4845t=unsafe_size;
  *__t4846t=unsafe_offset;
  *__t4847t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1409t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t4848t, uint64_t* __t4849t, uint64_t* __t4850t, char* __t4851t) {
  char* __t1412t__unsafe_ptr=0;
  uint64_t __t1412t__unsafe_size=0;
  uint32_t __t1412t__unsafe_offset=0;
  uint32_t __t1412t__unsafe_align=0;
  uint64_t __t1413t=0;
  uint64_t __t1414t__=0;
  uint64_t __t1415t__=0;
  char* __t1416t__unsafe_ptr=0;
  uint64_t __t1416t__unsafe_size=0;
  uint32_t __t1416t__unsafe_offset=0;
  uint32_t __t1416t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1418t=0;
  char* __t1419t__unsafe_ptr=0;
  uint64_t __t1419t__dat__pos=0;
  uint64_t __t1419t__dat__length=0;
  char __t1419t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1410t(&__t1412t__unsafe_ptr,&__t1412t__unsafe_size,&__t1412t__unsafe_offset,&__t1412t__unsafe_align);
  __t1413t=1;
  len__t1362t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1414t__);
  add__t187t(__t1413t,__t1414t__,&__t1415t__);
  __t_errcode=alloc__t839t(&__t1412t__unsafe_ptr,&__t1412t__unsafe_size,&__t1412t__unsafe_offset,&__t1412t__unsafe_align,__t1415t__,&__t1416t__unsafe_ptr,&__t1416t__unsafe_size,&__t1416t__unsafe_offset,&__t1416t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1416t__unsafe_ptr;
  buf__unsafe_size=__t1416t__unsafe_size;
  buf__unsafe_offset=__t1416t__unsafe_offset;
  buf__unsafe_align=__t1416t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1418t=0;
  __t_errcode=str__t1296t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1418t,other__dat__length,other__dat__first,&__t1419t__unsafe_ptr,&__t1419t__dat__pos,&__t1419t__dat__length,&__t1419t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t722t(&__t1419t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4848t=__t1419t__unsafe_ptr;
  *__t4849t=__t1419t__dat__pos;
  *__t4850t=__t1419t__dat__length;
  *__t4851t=__t1419t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1434t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t4852t, char** __t4853t, uint64_t* __t4854t, uint64_t* __t4855t, char* __t4856t) {
  int __t1435t=0;
  char* __t1437t__unsafe_ptr=0;
  uint64_t __t1437t__dat__pos=0;
  uint64_t __t1437t__dat__length=0;
  char __t1437t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1439t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1064t();
  __t_errcode=copy_null_terminated__t1409t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1437t__unsafe_ptr,&__t1437t__dat__pos,&__t1437t__dat__length,&__t1437t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1437t__unsafe_ptr;
  str__dat__pos=__t1437t__dat__pos;
  str__dat__length=__t1437t__dat__length;
  str__dat__first=__t1437t__dat__first;
  add__t724t(str__unsafe_ptr,str__dat__pos,&__t1439t__);
  _ret=__t1439t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t722t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4852t=cstr;
  *__t4853t=str__unsafe_ptr;
  *__t4854t=str__dat__pos;
  *__t4855t=str__dat__length;
  *__t4856t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1444t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t4857t) {
  goto __t_return;
  __t_return:
  *__t4857t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t4376t(char* unsafe_ptr) {
  int __t4378t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t4379t(const char* path, char** __t4858t) {
  int __t4381t=0;
  char* unsafe_ptr=0;
  char __t4383t__=0;
  char __t4384t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t651t(unsafe_ptr,&__t4383t__);
  not__t41t(__t4383t__,&__t4384t__);
  if(__t4384t__){
  __t_errcode=42;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t4376t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4858t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t4386t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t4859t) {
  const char* __t4387t__cstr=0;
  char* __t4387t__str__unsafe_ptr=0;
  uint64_t __t4387t__str__dat__pos=0;
  uint64_t __t4387t__str__dat__length=0;
  char __t4387t__str__dat__first=0;
  const char* __t4389t__=0;
  char* __t4390t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1434t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t4387t__cstr,&__t4387t__str__unsafe_ptr,&__t4387t__str__dat__pos,&__t4387t__str__dat__length,&__t4387t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1444t(__t4387t__cstr,__t4387t__str__unsafe_ptr,__t4387t__str__dat__pos,__t4387t__str__dat__length,__t4387t__str__dat__first,&__t4389t__);
  __t_errcode=open__t4379t(__t4389t__,&__t4390t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t4376t(__t4390t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4859t=__t4390t__unsafe_ptr;
  
  __t_skip_returns:free__t722t(&__t4387t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t4398t(char** __t4860t, const char** __t4861t) {
  char* f__unsafe_ptr=*__t4860t;
  char __t4399t__=0;
  char __t4400t__=0;
  char* de=0;
  char __t4401t__=0;
  char __t4402t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t651t(f__unsafe_ptr,&__t4399t__);
  not__t41t(__t4399t__,&__t4400t__);
  if(__t4400t__){
  __t_errcode=54;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t651t(de,&__t4401t__);
  not__t41t(__t4401t__,&__t4402t__);
  if(__t4402t__){
  __t_errcode=55;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4860t=f__unsafe_ptr;
  *__t4861t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t4403t(char** __t4862t, char** __t4863t, uint64_t* __t4864t, uint64_t* __t4865t, char* __t4866t) {
  char* f__unsafe_ptr=*__t4862t;
  const char* __t4404t__=0;
  char* __t4405t__unsafe_ptr=0;
  uint64_t __t4405t__dat__pos=0;
  uint64_t __t4405t__dat__length=0;
  char __t4405t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t4398t(&f__unsafe_ptr,&__t4404t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1352t(__t4404t__,&__t4405t__unsafe_ptr,&__t4405t__dat__pos,&__t4405t__dat__length,&__t4405t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4862t=f__unsafe_ptr;
  *__t4863t=__t4405t__unsafe_ptr;
  *__t4864t=__t4405t__dat__pos;
  *__t4865t=__t4405t__dat__length;
  *__t4866t=__t4405t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t4469t(char** __t4867t, uint64_t __t_anon1, char** __t4868t, uint64_t* __t4869t, uint64_t* __t4870t, char* __t4871t) {
  char* data__unsafe_ptr=*__t4867t;
  char* __t4470t__unsafe_ptr=0;
  uint64_t __t4470t__dat__pos=0;
  uint64_t __t4470t__dat__length=0;
  char __t4470t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t4403t(&data__unsafe_ptr,&__t4470t__unsafe_ptr,&__t4470t__dat__pos,&__t4470t__dat__length,&__t4470t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4867t=data__unsafe_ptr;
  *__t4868t=__t4470t__unsafe_ptr;
  *__t4869t=__t4470t__dat__pos;
  *__t4870t=__t4470t__dat__length;
  *__t4871t=__t4470t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1364t(const char* s, char* __t4872t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t4872t=c;
}

static inline __attribute__((always_inline)) void neq__t1366t(char x, char y, char* __t4873t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t4873t=z;
}

static inline __attribute__((always_inline)) void eq__t1451t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t4874t) {
  uint64_t __t1452t__=0;
  uint64_t n=0;
  uint64_t __t1453t__=0;
  char __t1454t__=0;
  char __t1455t=0;
  char __t1456t__=0;
  char __t1457t=0;
  char z=0;
  len__t1362t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1452t__);
  n=__t1452t__;
  len__t1362t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1453t__);
  neq__t157t(n,__t1453t__,&__t1454t__);
  if(__t1454t__){
  __t1455t=0;
  goto __t_return;
  }
  neq__t1366t(x__dat__first,y__dat__first,&__t1456t__);
  if(__t1456t__){
  __t1457t=0;
  __t1455t=__t1457t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1455t=z;
  goto __t_return;
  __t_return:
  *__t4874t=__t1455t;
}

void eq__t1458t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t4875t) {
  char __t1459t__=0;
  char __t1460t__=0;
  char __t1461t=0;
  char* __t1462t__unsafe_ptr=0;
  uint64_t __t1462t__dat__pos=0;
  uint64_t __t1462t__dat__length=0;
  char __t1462t__dat__first=0;
  char __t1463t__=0;
  char__t1364t(y,&__t1459t__);
  neq__t1366t(x__dat__first,__t1459t__,&__t1460t__);
  if(__t1460t__){
  __t1461t=0;
  goto __t_return;
  }
  str__t1352t(y,&__t1462t__unsafe_ptr,&__t1462t__dat__pos,&__t1462t__dat__length,&__t1462t__dat__first);
  eq__t1451t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1462t__unsafe_ptr,__t1462t__dat__pos,__t1462t__dat__length,__t1462t__dat__first,&__t1463t__);
  __t1461t=__t1463t__;
  goto __t_return;
  __t_return:
  *__t4875t=__t1461t;
}

int unsafe_temp__t1420t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t4876t, char** __t4877t, uint64_t* __t4878t, uint64_t* __t4879t, char* __t4880t) {
  int __t1421t=0;
  char* __t1422t__unsafe_ptr=0;
  uint64_t __t1422t__unsafe_size=0;
  uint32_t __t1422t__unsafe_offset=0;
  uint32_t __t1422t__unsafe_align=0;
  uint64_t __t1423t=0;
  uint64_t __t1424t__=0;
  uint64_t __t1425t__=0;
  char* __t1426t__unsafe_ptr=0;
  uint64_t __t1426t__unsafe_size=0;
  uint32_t __t1426t__unsafe_offset=0;
  uint32_t __t1426t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1428t=0;
  char __t1429t__=0;
  char first_character=0;
  uint64_t __t1430t=0;
  char* __t1431t__unsafe_ptr=0;
  uint64_t __t1431t__dat__pos=0;
  uint64_t __t1431t__dat__length=0;
  char __t1431t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1432t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1410t(&__t1422t__unsafe_ptr,&__t1422t__unsafe_size,&__t1422t__unsafe_offset,&__t1422t__unsafe_align);
  __t1423t=1;
  add__t187t(__t1423t,other__dat__length,&__t1424t__);
  add__t187t(__t1424t__,prefix__dat__length,&__t1425t__);
  __t_errcode=alloc__t839t(&__t1422t__unsafe_ptr,&__t1422t__unsafe_size,&__t1422t__unsafe_offset,&__t1422t__unsafe_align,__t1425t__,&__t1426t__unsafe_ptr,&__t1426t__unsafe_size,&__t1426t__unsafe_offset,&__t1426t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1426t__unsafe_ptr;
  buf__unsafe_size=__t1426t__unsafe_size;
  buf__unsafe_offset=__t1426t__unsafe_offset;
  buf__unsafe_align=__t1426t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1428t=0;
  eq__t133t(prefix__dat__length,__t1428t,&__t1429t__);
  if(__t1429t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1430t=0;
  __t_errcode=str__t1296t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1430t,other__dat__length,first_character,&__t1431t__unsafe_ptr,&__t1431t__dat__pos,&__t1431t__dat__length,&__t1431t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1431t__unsafe_ptr;
  str__dat__pos=__t1431t__dat__pos;
  str__dat__length=__t1431t__dat__length;
  str__dat__first=__t1431t__dat__first;
  add__t724t(str__unsafe_ptr,str__dat__pos,&__t1432t__);
  _ret=__t1432t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t722t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4876t=cstr;
  *__t4877t=str__unsafe_ptr;
  *__t4878t=str__dat__pos;
  *__t4879t=str__dat__length;
  *__t4880t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1443t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t4881t) {
  goto __t_return;
  __t_return:
  *__t4881t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t4303t(const char* path, char* __t4882t) {
  int __t4305t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t4882t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t4313t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t4883t) {
  int __t4315t=0;
  const char* __t4316t__cstr=0;
  char* __t4316t__str__unsafe_ptr=0;
  uint64_t __t4316t__str__dat__pos=0;
  uint64_t __t4316t__str__dat__length=0;
  char __t4316t__str__dat__first=0;
  const char* __t4318t__=0;
  char __t4319t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1420t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t4316t__cstr,&__t4316t__str__unsafe_ptr,&__t4316t__str__dat__pos,&__t4316t__str__dat__length,&__t4316t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1443t(__t4316t__cstr,__t4316t__str__unsafe_ptr,__t4316t__str__dat__pos,__t4316t__str__dat__length,__t4316t__str__dat__first,&__t4318t__);
  is_dir__t4303t(__t4318t__,&__t4319t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4883t=__t4319t__;
  
  __t_skip_returns:free__t722t(&__t4316t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t408t(uint64_t x, uint64_t y, uint64_t* __t4884t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t4884t=z;
}

static inline __attribute__((always_inline)) void reuse__t4655t(char** __t4885t, uint64_t* __t4886t, uint32_t* __t4887t, uint32_t* __t4888t, uint64_t* __t4889t, uint64_t* __t4890t) {
  char* arn__buf__unsafe_ptr=*__t4885t;
  uint64_t arn__buf__unsafe_size=*__t4886t;
  uint32_t arn__buf__unsafe_offset=*__t4887t;
  uint32_t arn__buf__unsafe_align=*__t4888t;
  uint64_t arn__pos=*__t4889t;
  uint64_t __t4656t=0;
  uint64_t __t4657t__=0;
  uint64_t tracked_position=0;
  uint64_t __t4658t=0;
  uint64_t __t4660t__=0;
  __t4656t=0;
  add__t187t(__t4656t,arn__pos,&__t4657t__);
  tracked_position=__t4657t__;
  goto __t_return;
  __t_return:
  *__t4885t=arn__buf__unsafe_ptr;
  *__t4886t=arn__buf__unsafe_size;
  *__t4887t=arn__buf__unsafe_offset;
  *__t4888t=arn__buf__unsafe_align;
  *__t4889t=arn__pos;
  *__t4890t=tracked_position;
}

static inline __attribute__((always_inline)) void str__t1329t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t4891t, uint64_t* __t4892t, uint64_t* __t4893t, char* __t4894t) {
  goto __t_return;
  __t_return:
  *__t4891t=other__unsafe_ptr;
  *__t4892t=other__dat__pos;
  *__t4893t=other__dat__length;
  *__t4894t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t161t(char* x, char* y, char* __t4895t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t4895t=z;
}

static inline __attribute__((always_inline)) void lt__t300t(uint64_t x, uint64_t y, char* __t4896t) {
  int __t301t__=0;
  char z=0;
  is_different__t108t(x,y,&__t301t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t4896t=z;
}

static inline __attribute__((always_inline)) void status__t1080t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t4897t, uint64_t* __t4898t, uint32_t* __t4899t, uint32_t* __t4900t, uint64_t* __t4901t) {
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
  *__t4897t=__t1081t__unsafe_ptr;
  *__t4898t=__t1081t__unsafe_size;
  *__t4899t=__t1081t__unsafe_offset;
  *__t4900t=__t1081t__unsafe_align;
  *__t4901t=__t1082t;
}

static inline __attribute__((always_inline)) int copy__t1379t(char** __t4902t, uint64_t* __t4903t, uint32_t* __t4904t, uint32_t* __t4905t, uint64_t* __t4906t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t4907t, uint64_t* __t4908t, uint64_t* __t4909t, char* __t4910t) {
  char* CHARS__buf__unsafe_ptr=*__t4902t;
  uint64_t CHARS__buf__unsafe_size=*__t4903t;
  uint32_t CHARS__buf__unsafe_offset=*__t4904t;
  uint32_t CHARS__buf__unsafe_align=*__t4905t;
  uint64_t CHARS__pos=*__t4906t;
  char* __t1380t__unsafe_ptr=0;
  uint64_t __t1380t__dat__pos=0;
  uint64_t __t1380t__dat__length=0;
  char __t1380t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1381t__=0;
  char* __t1382t__buf__unsafe_ptr=0;
  uint64_t __t1382t__buf__unsafe_size=0;
  uint32_t __t1382t__buf__unsafe_offset=0;
  uint32_t __t1382t__buf__unsafe_align=0;
  uint64_t __t1382t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1383t__unsafe_ptr=0;
  uint64_t __t1383t__dat__pos=0;
  uint64_t __t1383t__dat__length=0;
  char __t1383t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1329t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1380t__unsafe_ptr,&__t1380t__dat__pos,&__t1380t__dat__length,&__t1380t__dat__first);
  other__unsafe_ptr=__t1380t__unsafe_ptr;
  other__dat__pos=__t1380t__dat__pos;
  other__dat__length=__t1380t__dat__length;
  other__dat__first=__t1380t__dat__first;
  len__t1362t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1381t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1381t__,&__t1382t__buf__unsafe_ptr,&__t1382t__buf__unsafe_size,&__t1382t__buf__unsafe_offset,&__t1382t__buf__unsafe_align,&__t1382t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1382t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1382t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1382t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1382t__buf__unsafe_align;
  surface__pos=__t1382t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1296t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1383t__unsafe_ptr,&__t1383t__dat__pos,&__t1383t__dat__length,&__t1383t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4902t=CHARS__buf__unsafe_ptr;
  *__t4903t=CHARS__buf__unsafe_size;
  *__t4904t=CHARS__buf__unsafe_offset;
  *__t4905t=CHARS__buf__unsafe_align;
  *__t4906t=CHARS__pos;
  *__t4907t=__t1383t__unsafe_ptr;
  *__t4908t=__t1383t__dat__pos;
  *__t4909t=__t1383t__dat__length;
  *__t4910t=__t1383t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1077t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t4911t, uint64_t* __t4912t, uint32_t* __t4913t, uint32_t* __t4914t, uint64_t* __t4915t) {
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
  *__t4911t=__t1078t__unsafe_ptr;
  *__t4912t=__t1078t__unsafe_size;
  *__t4913t=__t1078t__unsafe_offset;
  *__t4914t=__t1078t__unsafe_align;
  *__t4915t=__t1079t;
}

static inline __attribute__((always_inline)) int sub__t400t(uint64_t x, uint64_t y, uint64_t* __t4916t) {
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
  *__t4916t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1348t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t4917t, uint64_t* __t4918t, uint64_t* __t4919t, char* __t4920t) {
  uint64_t __t1350t__=0;
  char* __t1351t__unsafe_ptr=0;
  uint64_t __t1351t__dat__pos=0;
  uint64_t __t1351t__dat__length=0;
  char __t1351t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t400t(endpos,pos,&__t1350t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1330t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1350t__,&__t1351t__unsafe_ptr,&__t1351t__dat__pos,&__t1351t__dat__length,&__t1351t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4917t=__t1351t__unsafe_ptr;
  *__t4918t=__t1351t__dat__pos;
  *__t4919t=__t1351t__dat__length;
  *__t4920t=__t1351t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2456t(char** __t4921t, uint64_t* __t4922t, uint32_t* __t4923t, uint32_t* __t4924t, uint64_t* __t4925t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t4926t, uint64_t* __t4927t, uint64_t* __t4928t, char* __t4929t) {
  char* CHARS__buf__unsafe_ptr=*__t4921t;
  uint64_t CHARS__buf__unsafe_size=*__t4922t;
  uint32_t CHARS__buf__unsafe_offset=*__t4923t;
  uint32_t CHARS__buf__unsafe_align=*__t4924t;
  uint64_t CHARS__pos=*__t4925t;
  char* __t2457t__unsafe_ptr=0;
  uint64_t __t2457t__dat__pos=0;
  uint64_t __t2457t__dat__length=0;
  char __t2457t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2458t__unsafe_ptr=0;
  uint64_t __t2458t__dat__pos=0;
  uint64_t __t2458t__dat__length=0;
  char __t2458t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2459t__=0;
  uint64_t __t2460t__=0;
  char __t2461t__=0;
  char __t2462t=0;
  uint64_t __t2463t__=0;
  char __t2464t__=0;
  char __t2465t=0;
  uint64_t __t2466t__=0;
  char* __t2467t__buf__unsafe_ptr=0;
  uint64_t __t2467t__buf__unsafe_size=0;
  uint32_t __t2467t__buf__unsafe_offset=0;
  uint32_t __t2467t__buf__unsafe_align=0;
  uint64_t __t2467t__pos=0;
  char* __t2468t____t1081t__unsafe_ptr=0;
  uint64_t __t2468t____t1081t__unsafe_size=0;
  uint32_t __t2468t____t1081t__unsafe_offset=0;
  uint32_t __t2468t____t1081t__unsafe_align=0;
  uint64_t __t2468t____t1082t=0;
  char* __t2469t__buf__unsafe_ptr=0;
  uint64_t __t2469t__buf__unsafe_size=0;
  uint32_t __t2469t__buf__unsafe_offset=0;
  uint32_t __t2469t__buf__unsafe_align=0;
  uint64_t __t2469t__pos=0;
  char* __t2470t__buf__unsafe_ptr=0;
  uint64_t __t2470t__buf__unsafe_size=0;
  uint32_t __t2470t__buf__unsafe_offset=0;
  uint32_t __t2470t__buf__unsafe_align=0;
  uint64_t __t2470t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2471t__unsafe_ptr=0;
  uint64_t __t2471t__dat__pos=0;
  uint64_t __t2471t__dat__length=0;
  char __t2471t__dat__first=0;
  char* __t2472t____t1078t__unsafe_ptr=0;
  uint64_t __t2472t____t1078t__unsafe_size=0;
  uint32_t __t2472t____t1078t__unsafe_offset=0;
  uint32_t __t2472t____t1078t__unsafe_align=0;
  uint64_t __t2472t____t1079t=0;
  uint64_t __t2474t=0;
  uint64_t __t2475t__=0;
  char* __t2476t__unsafe_ptr=0;
  uint64_t __t2476t__dat__pos=0;
  uint64_t __t2476t__dat__length=0;
  char __t2476t__dat__first=0;
  char __t2477t__=0;
  char __t2478t__=0;
  char __t2479t=0;
  uint64_t __t2480t__=0;
  char __t2481t__=0;
  char __t2482t=0;
  uint64_t __t2483t__=0;
  char* __t2485t__unsafe_ptr=0;
  uint64_t __t2485t__dat__pos=0;
  uint64_t __t2485t__dat__length=0;
  char __t2485t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2486t__=0;
  uint64_t __t2487t__=0;
  uint64_t __t2488t__=0;
  char* __t2489t__buf__unsafe_ptr=0;
  uint64_t __t2489t__buf__unsafe_size=0;
  uint32_t __t2489t__buf__unsafe_offset=0;
  uint32_t __t2489t__buf__unsafe_align=0;
  uint64_t __t2489t__pos=0;
  char* __t2490t____t1081t__unsafe_ptr=0;
  uint64_t __t2490t____t1081t__unsafe_size=0;
  uint32_t __t2490t____t1081t__unsafe_offset=0;
  uint32_t __t2490t____t1081t__unsafe_align=0;
  uint64_t __t2490t____t1082t=0;
  char* __t2491t__buf__unsafe_ptr=0;
  uint64_t __t2491t__buf__unsafe_size=0;
  uint32_t __t2491t__buf__unsafe_offset=0;
  uint32_t __t2491t__buf__unsafe_align=0;
  uint64_t __t2491t__pos=0;
  char* __t2492t__buf__unsafe_ptr=0;
  uint64_t __t2492t__buf__unsafe_size=0;
  uint32_t __t2492t__buf__unsafe_offset=0;
  uint32_t __t2492t__buf__unsafe_align=0;
  uint64_t __t2492t__pos=0;
  char* __t2493t__unsafe_ptr=0;
  uint64_t __t2493t__dat__pos=0;
  uint64_t __t2493t__dat__length=0;
  char __t2493t__dat__first=0;
  char* __t2494t__unsafe_ptr=0;
  uint64_t __t2494t__dat__pos=0;
  uint64_t __t2494t__dat__length=0;
  char __t2494t__dat__first=0;
  char __t2495t=0;
  char* __t2496t____t1078t__unsafe_ptr=0;
  uint64_t __t2496t____t1078t__unsafe_size=0;
  uint32_t __t2496t____t1078t__unsafe_offset=0;
  uint32_t __t2496t____t1078t__unsafe_align=0;
  uint64_t __t2496t____t1079t=0;
  uint64_t __t2498t=0;
  uint64_t __t2499t__=0;
  char* __t2500t__unsafe_ptr=0;
  uint64_t __t2500t__dat__pos=0;
  uint64_t __t2500t__dat__length=0;
  char __t2500t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1329t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2457t__unsafe_ptr,&__t2457t__dat__pos,&__t2457t__dat__length,&__t2457t__dat__first);
  s1__unsafe_ptr=__t2457t__unsafe_ptr;
  s1__dat__pos=__t2457t__dat__pos;
  s1__dat__length=__t2457t__dat__length;
  s1__dat__first=__t2457t__dat__first;
  str__t1329t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2458t__unsafe_ptr,&__t2458t__dat__pos,&__t2458t__dat__length,&__t2458t__dat__first);
  s2__unsafe_ptr=__t2458t__unsafe_ptr;
  s2__dat__pos=__t2458t__dat__pos;
  s2__dat__length=__t2458t__dat__length;
  s2__dat__first=__t2458t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2459t__);
  if(__t2459t__){
  add__t187t(s1__dat__pos,s1__dat__length,&__t2460t__);
  eq__t133t(CHARS__pos,__t2460t__,&__t2461t__);
  __t2462t=__t2461t__;
  }
  if(__t2462t){
  add__t187t(CHARS__pos,s2__dat__length,&__t2463t__);
  lt__t300t(__t2463t__,CHARS__buf__unsafe_size,&__t2464t__);
  __t2465t=__t2464t__;
  }
  if(__t2465t){
  len__t1362t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2466t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2466t__,&__t2467t__buf__unsafe_ptr,&__t2467t__buf__unsafe_size,&__t2467t__buf__unsafe_offset,&__t2467t__buf__unsafe_align,&__t2467t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1080t(__t2467t__buf__unsafe_ptr,__t2467t__buf__unsafe_size,__t2467t__buf__unsafe_offset,__t2467t__buf__unsafe_align,__t2467t__pos,&__t2468t____t1081t__unsafe_ptr,&__t2468t____t1081t__unsafe_size,&__t2468t____t1081t__unsafe_offset,&__t2468t____t1081t__unsafe_align,&__t2468t____t1082t);
  arena__t1068t(&__t2468t____t1081t__unsafe_ptr,&__t2468t____t1081t__unsafe_size,&__t2468t____t1081t__unsafe_offset,&__t2468t____t1081t__unsafe_align,__t2468t____t1082t,&__t2469t__buf__unsafe_ptr,&__t2469t__buf__unsafe_size,&__t2469t__buf__unsafe_offset,&__t2469t__buf__unsafe_align,&__t2469t__pos);
  __t2470t__buf__unsafe_ptr=__t2469t__buf__unsafe_ptr;
  __t2470t__buf__unsafe_size=__t2469t__buf__unsafe_size;
  __t2470t__buf__unsafe_offset=__t2469t__buf__unsafe_offset;
  __t2470t__buf__unsafe_align=__t2469t__buf__unsafe_align;
  __t2470t__pos=__t2469t__pos;
  surface__buf__unsafe_ptr=__t2470t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2470t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2470t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2470t__buf__unsafe_align;
  surface__pos=__t2470t__pos;
  __t_errcode=copy__t1379t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2471t__unsafe_ptr,&__t2471t__dat__pos,&__t2471t__dat__length,&__t2471t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1077t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2472t____t1078t__unsafe_ptr,&__t2472t____t1078t__unsafe_size,&__t2472t____t1078t__unsafe_offset,&__t2472t____t1078t__unsafe_align,&__t2472t____t1079t);
  __t2474t=0;
  add__t187t(s1__dat__pos,__t2474t,&__t2475t__);
  __t_errcode=str__t1348t(__t2472t____t1078t__unsafe_ptr,__t2472t____t1078t__unsafe_size,__t2472t____t1078t__unsafe_offset,__t2472t____t1078t__unsafe_align,__t2472t____t1079t,__t2475t__,&__t2476t__unsafe_ptr,&__t2476t__dat__pos,&__t2476t__dat__length,&__t2476t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2477t__);
  if(__t2477t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2478t__);
  __t2479t=__t2478t__;
  }
  if(__t2479t){
  add__t187t(s1__dat__pos,s1__dat__length,&__t2480t__);
  eq__t133t(s2__dat__pos,__t2480t__,&__t2481t__);
  __t2482t=__t2481t__;
  }
  if(__t2482t){
  add__t187t(s2__dat__pos,s2__dat__length,&__t2483t__);
  __t_errcode=str__t1348t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2483t__,s1__dat__pos,&__t2485t__unsafe_ptr,&__t2485t__dat__pos,&__t2485t__dat__length,&__t2485t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2476t__unsafe_ptr=__t2485t__unsafe_ptr;
  __t2476t__dat__pos=__t2485t__dat__pos;
  __t2476t__dat__length=__t2485t__dat__length;
  __t2476t__dat__first=__t2485t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1362t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2486t__);
  len__t1362t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2487t__);
  add__t187t(__t2486t__,__t2487t__,&__t2488t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2488t__,&__t2489t__buf__unsafe_ptr,&__t2489t__buf__unsafe_size,&__t2489t__buf__unsafe_offset,&__t2489t__buf__unsafe_align,&__t2489t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1080t(__t2489t__buf__unsafe_ptr,__t2489t__buf__unsafe_size,__t2489t__buf__unsafe_offset,__t2489t__buf__unsafe_align,__t2489t__pos,&__t2490t____t1081t__unsafe_ptr,&__t2490t____t1081t__unsafe_size,&__t2490t____t1081t__unsafe_offset,&__t2490t____t1081t__unsafe_align,&__t2490t____t1082t);
  arena__t1068t(&__t2490t____t1081t__unsafe_ptr,&__t2490t____t1081t__unsafe_size,&__t2490t____t1081t__unsafe_offset,&__t2490t____t1081t__unsafe_align,__t2490t____t1082t,&__t2491t__buf__unsafe_ptr,&__t2491t__buf__unsafe_size,&__t2491t__buf__unsafe_offset,&__t2491t__buf__unsafe_align,&__t2491t__pos);
  __t2492t__buf__unsafe_ptr=__t2491t__buf__unsafe_ptr;
  __t2492t__buf__unsafe_size=__t2491t__buf__unsafe_size;
  __t2492t__buf__unsafe_offset=__t2491t__buf__unsafe_offset;
  __t2492t__buf__unsafe_align=__t2491t__buf__unsafe_align;
  __t2492t__pos=__t2491t__pos;
  surface__buf__unsafe_ptr=__t2492t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2492t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2492t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2492t__buf__unsafe_align;
  surface__pos=__t2492t__pos;
  __t_errcode=copy__t1379t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2493t__unsafe_ptr,&__t2493t__dat__pos,&__t2493t__dat__length,&__t2493t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1379t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2494t__unsafe_ptr,&__t2494t__dat__pos,&__t2494t__dat__length,&__t2494t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1077t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2496t____t1078t__unsafe_ptr,&__t2496t____t1078t__unsafe_size,&__t2496t____t1078t__unsafe_offset,&__t2496t____t1078t__unsafe_align,&__t2496t____t1079t);
  __t2498t=0;
  add__t187t(prev_pos,__t2498t,&__t2499t__);
  __t_complain=str__t1348t(__t2496t____t1078t__unsafe_ptr,__t2496t____t1078t__unsafe_size,__t2496t____t1078t__unsafe_offset,__t2496t____t1078t__unsafe_align,__t2496t____t1079t,__t2499t__,&__t2500t__unsafe_ptr,&__t2500t__dat__pos,&__t2500t__dat__length,&__t2500t__dat__first);
  __t2495t=__t_complain;
  if(__t_complain){
  goto __t2495t__label;
  }
  ret__unsafe_ptr=__t2500t__unsafe_ptr;
  ret__dat__pos=__t2500t__dat__pos;
  ret__dat__length=__t2500t__dat__length;
  ret__dat__first=__t2500t__dat__first;
  __t2495t__label:__t2495t=__t2495t==0;
  __t2476t__unsafe_ptr=ret__unsafe_ptr;
  __t2476t__dat__pos=ret__dat__pos;
  __t2476t__dat__length=ret__dat__length;
  __t2476t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4921t=CHARS__buf__unsafe_ptr;
  *__t4922t=CHARS__buf__unsafe_size;
  *__t4923t=CHARS__buf__unsafe_offset;
  *__t4924t=CHARS__buf__unsafe_align;
  *__t4925t=CHARS__pos;
  *__t4926t=__t2476t__unsafe_ptr;
  *__t4927t=__t2476t__dat__pos;
  *__t4928t=__t2476t__dat__length;
  *__t4929t=__t2476t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2501t(char** __t4930t, uint64_t* __t4931t, uint32_t* __t4932t, uint32_t* __t4933t, uint64_t* __t4934t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t4935t, uint64_t* __t4936t, uint64_t* __t4937t, char* __t4938t) {
  char* CHARS__buf__unsafe_ptr=*__t4930t;
  uint64_t CHARS__buf__unsafe_size=*__t4931t;
  uint32_t CHARS__buf__unsafe_offset=*__t4932t;
  uint32_t CHARS__buf__unsafe_align=*__t4933t;
  uint64_t CHARS__pos=*__t4934t;
  char* __t2502t__unsafe_ptr=0;
  uint64_t __t2502t__dat__pos=0;
  uint64_t __t2502t__dat__length=0;
  char __t2502t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2503t__unsafe_ptr=0;
  uint64_t __t2503t__dat__pos=0;
  uint64_t __t2503t__dat__length=0;
  char __t2503t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2504t__=0;
  uint64_t __t2505t__=0;
  char __t2506t__=0;
  char __t2507t=0;
  uint64_t __t2508t__=0;
  char __t2509t__=0;
  char __t2510t=0;
  uint64_t __t2511t__=0;
  char* __t2512t__buf__unsafe_ptr=0;
  uint64_t __t2512t__buf__unsafe_size=0;
  uint32_t __t2512t__buf__unsafe_offset=0;
  uint32_t __t2512t__buf__unsafe_align=0;
  uint64_t __t2512t__pos=0;
  char* __t2513t____t1081t__unsafe_ptr=0;
  uint64_t __t2513t____t1081t__unsafe_size=0;
  uint32_t __t2513t____t1081t__unsafe_offset=0;
  uint32_t __t2513t____t1081t__unsafe_align=0;
  uint64_t __t2513t____t1082t=0;
  char* __t2514t__buf__unsafe_ptr=0;
  uint64_t __t2514t__buf__unsafe_size=0;
  uint32_t __t2514t__buf__unsafe_offset=0;
  uint32_t __t2514t__buf__unsafe_align=0;
  uint64_t __t2514t__pos=0;
  char* __t2515t__buf__unsafe_ptr=0;
  uint64_t __t2515t__buf__unsafe_size=0;
  uint32_t __t2515t__buf__unsafe_offset=0;
  uint32_t __t2515t__buf__unsafe_align=0;
  uint64_t __t2515t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2516t__unsafe_ptr=0;
  uint64_t __t2516t__dat__pos=0;
  uint64_t __t2516t__dat__length=0;
  char __t2516t__dat__first=0;
  char* __t2517t____t1078t__unsafe_ptr=0;
  uint64_t __t2517t____t1078t__unsafe_size=0;
  uint32_t __t2517t____t1078t__unsafe_offset=0;
  uint32_t __t2517t____t1078t__unsafe_align=0;
  uint64_t __t2517t____t1079t=0;
  uint64_t __t2519t=0;
  uint64_t __t2520t__=0;
  char* __t2521t__unsafe_ptr=0;
  uint64_t __t2521t__dat__pos=0;
  uint64_t __t2521t__dat__length=0;
  char __t2521t__dat__first=0;
  char __t2522t__=0;
  char __t2523t__=0;
  char __t2524t=0;
  uint64_t __t2525t__=0;
  char __t2526t__=0;
  char __t2527t=0;
  uint64_t __t2528t__=0;
  char* __t2530t__unsafe_ptr=0;
  uint64_t __t2530t__dat__pos=0;
  uint64_t __t2530t__dat__length=0;
  char __t2530t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2531t__=0;
  uint64_t __t2532t__=0;
  uint64_t __t2533t__=0;
  char* __t2534t__buf__unsafe_ptr=0;
  uint64_t __t2534t__buf__unsafe_size=0;
  uint32_t __t2534t__buf__unsafe_offset=0;
  uint32_t __t2534t__buf__unsafe_align=0;
  uint64_t __t2534t__pos=0;
  char* __t2535t____t1081t__unsafe_ptr=0;
  uint64_t __t2535t____t1081t__unsafe_size=0;
  uint32_t __t2535t____t1081t__unsafe_offset=0;
  uint32_t __t2535t____t1081t__unsafe_align=0;
  uint64_t __t2535t____t1082t=0;
  char* __t2536t__buf__unsafe_ptr=0;
  uint64_t __t2536t__buf__unsafe_size=0;
  uint32_t __t2536t__buf__unsafe_offset=0;
  uint32_t __t2536t__buf__unsafe_align=0;
  uint64_t __t2536t__pos=0;
  char* __t2537t__buf__unsafe_ptr=0;
  uint64_t __t2537t__buf__unsafe_size=0;
  uint32_t __t2537t__buf__unsafe_offset=0;
  uint32_t __t2537t__buf__unsafe_align=0;
  uint64_t __t2537t__pos=0;
  char* __t2538t__unsafe_ptr=0;
  uint64_t __t2538t__dat__pos=0;
  uint64_t __t2538t__dat__length=0;
  char __t2538t__dat__first=0;
  char* __t2539t__unsafe_ptr=0;
  uint64_t __t2539t__dat__pos=0;
  uint64_t __t2539t__dat__length=0;
  char __t2539t__dat__first=0;
  char __t2540t=0;
  char* __t2541t____t1078t__unsafe_ptr=0;
  uint64_t __t2541t____t1078t__unsafe_size=0;
  uint32_t __t2541t____t1078t__unsafe_offset=0;
  uint32_t __t2541t____t1078t__unsafe_align=0;
  uint64_t __t2541t____t1079t=0;
  uint64_t __t2543t=0;
  uint64_t __t2544t__=0;
  char* __t2545t__unsafe_ptr=0;
  uint64_t __t2545t__dat__pos=0;
  uint64_t __t2545t__dat__length=0;
  char __t2545t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1329t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2502t__unsafe_ptr,&__t2502t__dat__pos,&__t2502t__dat__length,&__t2502t__dat__first);
  s1__unsafe_ptr=__t2502t__unsafe_ptr;
  s1__dat__pos=__t2502t__dat__pos;
  s1__dat__length=__t2502t__dat__length;
  s1__dat__first=__t2502t__dat__first;
  str__t1352t(_s2,&__t2503t__unsafe_ptr,&__t2503t__dat__pos,&__t2503t__dat__length,&__t2503t__dat__first);
  s2__unsafe_ptr=__t2503t__unsafe_ptr;
  s2__dat__pos=__t2503t__dat__pos;
  s2__dat__length=__t2503t__dat__length;
  s2__dat__first=__t2503t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2504t__);
  if(__t2504t__){
  add__t187t(s1__dat__pos,s1__dat__length,&__t2505t__);
  eq__t133t(CHARS__pos,__t2505t__,&__t2506t__);
  __t2507t=__t2506t__;
  }
  if(__t2507t){
  add__t187t(CHARS__pos,s2__dat__length,&__t2508t__);
  lt__t300t(__t2508t__,CHARS__buf__unsafe_size,&__t2509t__);
  __t2510t=__t2509t__;
  }
  if(__t2510t){
  len__t1362t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2511t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2511t__,&__t2512t__buf__unsafe_ptr,&__t2512t__buf__unsafe_size,&__t2512t__buf__unsafe_offset,&__t2512t__buf__unsafe_align,&__t2512t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1080t(__t2512t__buf__unsafe_ptr,__t2512t__buf__unsafe_size,__t2512t__buf__unsafe_offset,__t2512t__buf__unsafe_align,__t2512t__pos,&__t2513t____t1081t__unsafe_ptr,&__t2513t____t1081t__unsafe_size,&__t2513t____t1081t__unsafe_offset,&__t2513t____t1081t__unsafe_align,&__t2513t____t1082t);
  arena__t1068t(&__t2513t____t1081t__unsafe_ptr,&__t2513t____t1081t__unsafe_size,&__t2513t____t1081t__unsafe_offset,&__t2513t____t1081t__unsafe_align,__t2513t____t1082t,&__t2514t__buf__unsafe_ptr,&__t2514t__buf__unsafe_size,&__t2514t__buf__unsafe_offset,&__t2514t__buf__unsafe_align,&__t2514t__pos);
  __t2515t__buf__unsafe_ptr=__t2514t__buf__unsafe_ptr;
  __t2515t__buf__unsafe_size=__t2514t__buf__unsafe_size;
  __t2515t__buf__unsafe_offset=__t2514t__buf__unsafe_offset;
  __t2515t__buf__unsafe_align=__t2514t__buf__unsafe_align;
  __t2515t__pos=__t2514t__pos;
  surface__buf__unsafe_ptr=__t2515t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2515t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2515t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2515t__buf__unsafe_align;
  surface__pos=__t2515t__pos;
  __t_errcode=copy__t1379t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2516t__unsafe_ptr,&__t2516t__dat__pos,&__t2516t__dat__length,&__t2516t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1077t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2517t____t1078t__unsafe_ptr,&__t2517t____t1078t__unsafe_size,&__t2517t____t1078t__unsafe_offset,&__t2517t____t1078t__unsafe_align,&__t2517t____t1079t);
  __t2519t=0;
  add__t187t(s1__dat__pos,__t2519t,&__t2520t__);
  __t_errcode=str__t1348t(__t2517t____t1078t__unsafe_ptr,__t2517t____t1078t__unsafe_size,__t2517t____t1078t__unsafe_offset,__t2517t____t1078t__unsafe_align,__t2517t____t1079t,__t2520t__,&__t2521t__unsafe_ptr,&__t2521t__dat__pos,&__t2521t__dat__length,&__t2521t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2522t__);
  if(__t2522t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2523t__);
  __t2524t=__t2523t__;
  }
  if(__t2524t){
  add__t187t(s1__dat__pos,s1__dat__length,&__t2525t__);
  eq__t133t(s2__dat__pos,__t2525t__,&__t2526t__);
  __t2527t=__t2526t__;
  }
  if(__t2527t){
  add__t187t(s2__dat__pos,s2__dat__length,&__t2528t__);
  __t_errcode=str__t1348t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2528t__,s1__dat__pos,&__t2530t__unsafe_ptr,&__t2530t__dat__pos,&__t2530t__dat__length,&__t2530t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2521t__unsafe_ptr=__t2530t__unsafe_ptr;
  __t2521t__dat__pos=__t2530t__dat__pos;
  __t2521t__dat__length=__t2530t__dat__length;
  __t2521t__dat__first=__t2530t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1362t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2531t__);
  len__t1362t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2532t__);
  add__t187t(__t2531t__,__t2532t__,&__t2533t__);
  __t_errcode=alloc__t1150t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2533t__,&__t2534t__buf__unsafe_ptr,&__t2534t__buf__unsafe_size,&__t2534t__buf__unsafe_offset,&__t2534t__buf__unsafe_align,&__t2534t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1080t(__t2534t__buf__unsafe_ptr,__t2534t__buf__unsafe_size,__t2534t__buf__unsafe_offset,__t2534t__buf__unsafe_align,__t2534t__pos,&__t2535t____t1081t__unsafe_ptr,&__t2535t____t1081t__unsafe_size,&__t2535t____t1081t__unsafe_offset,&__t2535t____t1081t__unsafe_align,&__t2535t____t1082t);
  arena__t1068t(&__t2535t____t1081t__unsafe_ptr,&__t2535t____t1081t__unsafe_size,&__t2535t____t1081t__unsafe_offset,&__t2535t____t1081t__unsafe_align,__t2535t____t1082t,&__t2536t__buf__unsafe_ptr,&__t2536t__buf__unsafe_size,&__t2536t__buf__unsafe_offset,&__t2536t__buf__unsafe_align,&__t2536t__pos);
  __t2537t__buf__unsafe_ptr=__t2536t__buf__unsafe_ptr;
  __t2537t__buf__unsafe_size=__t2536t__buf__unsafe_size;
  __t2537t__buf__unsafe_offset=__t2536t__buf__unsafe_offset;
  __t2537t__buf__unsafe_align=__t2536t__buf__unsafe_align;
  __t2537t__pos=__t2536t__pos;
  surface__buf__unsafe_ptr=__t2537t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2537t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2537t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2537t__buf__unsafe_align;
  surface__pos=__t2537t__pos;
  __t_errcode=copy__t1379t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2538t__unsafe_ptr,&__t2538t__dat__pos,&__t2538t__dat__length,&__t2538t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1379t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2539t__unsafe_ptr,&__t2539t__dat__pos,&__t2539t__dat__length,&__t2539t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1077t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2541t____t1078t__unsafe_ptr,&__t2541t____t1078t__unsafe_size,&__t2541t____t1078t__unsafe_offset,&__t2541t____t1078t__unsafe_align,&__t2541t____t1079t);
  __t2543t=0;
  add__t187t(prev_pos,__t2543t,&__t2544t__);
  __t_complain=str__t1348t(__t2541t____t1078t__unsafe_ptr,__t2541t____t1078t__unsafe_size,__t2541t____t1078t__unsafe_offset,__t2541t____t1078t__unsafe_align,__t2541t____t1079t,__t2544t__,&__t2545t__unsafe_ptr,&__t2545t__dat__pos,&__t2545t__dat__length,&__t2545t__dat__first);
  __t2540t=__t_complain;
  if(__t_complain){
  goto __t2540t__label;
  }
  ret__unsafe_ptr=__t2545t__unsafe_ptr;
  ret__dat__pos=__t2545t__dat__pos;
  ret__dat__length=__t2545t__dat__length;
  ret__dat__first=__t2545t__dat__first;
  __t2540t__label:__t2540t=__t2540t==0;
  __t2521t__unsafe_ptr=ret__unsafe_ptr;
  __t2521t__dat__pos=ret__dat__pos;
  __t2521t__dat__length=ret__dat__length;
  __t2521t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4930t=CHARS__buf__unsafe_ptr;
  *__t4931t=CHARS__buf__unsafe_size;
  *__t4932t=CHARS__buf__unsafe_offset;
  *__t4933t=CHARS__buf__unsafe_align;
  *__t4934t=CHARS__pos;
  *__t4935t=__t2521t__unsafe_ptr;
  *__t4936t=__t2521t__dat__pos;
  *__t4937t=__t2521t__dat__length;
  *__t4938t=__t2521t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1521t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t4939t) {
  int __t1522t=0;
  char __t1523t__=0;
  uint64_t __t1524t__=0;
  char* __t1525t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t372t(i,s__dat__length,&__t1523t__);
  if(__t1523t__){
  __t_errcode=15;
  goto __t_failure;
  }
  add__t187t(s__dat__pos,i,&__t1524t__);
  add__t724t(s__unsafe_ptr,__t1524t__,&__t1525t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4939t=__t1525t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1547t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t4940t, uint64_t* __t4941t, uint64_t* __t4942t, char* __t4943t) {
  char* __t1548t__unsafe_ptr=0;
  uint64_t __t1548t__dat__pos=0;
  uint64_t __t1548t__dat__length=0;
  char __t1548t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1549t__=0;
  char* __t1550t__unsafe_ptr=0;
  uint64_t __t1550t__dat__pos=0;
  uint64_t __t1550t__dat__length=0;
  char __t1550t__dat__first=0;
  char __t1551t__=0;
  char __t1552t__=0;
  char __t1553t=0;
  char __t1554t__=0;
  uint64_t __t1556t__=0;
  uint64_t new_length=0;
  uint64_t __t1557t=0;
  char __t1558t__=0;
  char new_first=0;
  char* __t1560t__=0;
  char __t1561t__value=0;
  uint64_t __t1562t__=0;
  char* __t1563t__unsafe_ptr=0;
  uint64_t __t1563t__dat__pos=0;
  uint64_t __t1563t__dat__length=0;
  char __t1563t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1329t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1548t__unsafe_ptr,&__t1548t__dat__pos,&__t1548t__dat__length,&__t1548t__dat__first);
  s__unsafe_ptr=__t1548t__unsafe_ptr;
  s__dat__pos=__t1548t__dat__pos;
  s__dat__length=__t1548t__dat__length;
  s__dat__first=__t1548t__dat__first;
  eq__t133t(from,to,&__t1549t__);
  if(__t1549t__){
  str__t1352t(__t430t,&__t1550t__unsafe_ptr,&__t1550t__dat__pos,&__t1550t__dat__length,&__t1550t__dat__first);
  goto __t_return;
  }
  gt__t324t(from,to,&__t1551t__);
  if(!__t1551t__){
  gt__t324t(to,s__dat__length,&__t1552t__);
  __t1553t=__t1552t__;
  }
  else{
  __t1553t=0;
  not__t41t(__t1553t,&__t1554t__);
  __t1553t=__t1554t__;
  }
  if(__t1553t){
  __t_errcode=22;
  goto __t_failure;
  }
  sub__t408t(to,from,&__t1556t__);
  new_length=__t1556t__;
  __t1557t=0;
  neq__t157t(from,__t1557t,&__t1558t__);
  if(__t1558t__){
  __t_errcode=get__t1521t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1560t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1560t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1561t__value,__t1560t__,1);
  new_first=__t1561t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t187t(s__dat__pos,from,&__t1562t__);
  str__t1292t(s__unsafe_ptr,__t1562t__,new_length,new_first,&__t1563t__unsafe_ptr,&__t1563t__dat__pos,&__t1563t__dat__length,&__t1563t__dat__first);
  __t1550t__unsafe_ptr=__t1563t__unsafe_ptr;
  __t1550t__dat__pos=__t1563t__dat__pos;
  __t1550t__dat__length=__t1563t__dat__length;
  __t1550t__dat__first=__t1563t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4940t=__t1550t__unsafe_ptr;
  *__t4941t=__t1550t__dat__pos;
  *__t4942t=__t1550t__dat__length;
  *__t4943t=__t1550t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1626t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t4944t) {
  char* __t1627t__unsafe_ptr=0;
  uint64_t __t1627t__dat__pos=0;
  uint64_t __t1627t__dat__length=0;
  char __t1627t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1628t__unsafe_ptr=0;
  uint64_t __t1628t__dat__pos=0;
  uint64_t __t1628t__dat__length=0;
  char __t1628t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t1629t=0;
  uint64_t __t1630t__=0;
  uint64_t d=0;
  char __t1631t__=0;
  char __t1632t=0;
  char* __t1633t__unsafe_ptr=0;
  uint64_t __t1633t__dat__pos=0;
  uint64_t __t1633t__dat__length=0;
  char __t1633t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1634t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1329t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1627t__unsafe_ptr,&__t1627t__dat__pos,&__t1627t__dat__length,&__t1627t__dat__first);
  stack__unsafe_ptr=__t1627t__unsafe_ptr;
  stack__dat__pos=__t1627t__dat__pos;
  stack__dat__length=__t1627t__dat__length;
  stack__dat__first=__t1627t__dat__first;
  str__t1352t(_needle,&__t1628t__unsafe_ptr,&__t1628t__dat__pos,&__t1628t__dat__length,&__t1628t__dat__first);
  needle__unsafe_ptr=__t1628t__unsafe_ptr;
  needle__dat__pos=__t1628t__dat__pos;
  needle__dat__length=__t1628t__dat__length;
  needle__dat__first=__t1628t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t400t(n,needle__dat__length,&__t1630t__);
  __t1629t=__t_complain;
  if(__t_complain){
  goto __t1629t__label;
  }
  d=__t1630t__;
  __t1629t__label:__t1629t=__t1629t==0;
  not__t41t(__t1629t,&__t1631t__);
  if(__t1631t__){
  __t1632t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1547t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t1633t__unsafe_ptr,&__t1633t__dat__pos,&__t1633t__dat__length,&__t1633t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1633t__unsafe_ptr;
  ret__dat__pos=__t1633t__dat__pos;
  ret__dat__length=__t1633t__dat__length;
  ret__dat__first=__t1633t__dat__first;
  eq__t1451t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1634t__);
  __t1632t=__t1634t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4944t=__t1632t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t672t(uint64_t to, uint64_t* __t4945t, uint64_t* __t4946t) {
  uint64_t __t673t=0;
  __t673t=0;
  goto __t_return;
  __t_return:
  *__t4945t=__t673t;
  *__t4946t=to;
}

static inline __attribute__((always_inline)) void range__t689t(uint64_t _from, uint64_t to, uint64_t* __t4947t, uint64_t* __t4948t) {
  uint64_t __t690t=0;
  uint64_t from=0;
  __t690t=_from;
  from=__t690t;
  goto __t_return;
  __t_return:
  *__t4947t=from;
  *__t4948t=to;
}

static inline __attribute__((always_inline)) int get__t696t(uint64_t r__from, uint64_t r__to, uint64_t _pos, uint64_t* __t4949t) {
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
  *__t4949t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t1712t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t4950t) {
  char* __t1713t__unsafe_ptr=0;
  uint64_t __t1713t__dat__pos=0;
  uint64_t __t1713t__dat__length=0;
  char __t1713t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1714t__unsafe_ptr=0;
  uint64_t __t1714t__dat__pos=0;
  uint64_t __t1714t__dat__length=0;
  char __t1714t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t1715t=0;
  uint64_t __t1716t__=0;
  uint64_t n=0;
  char __t1717t__=0;
  char __t1718t=0;
  uint64_t __t1719t=0;
  uint64_t __t1720t____t673t=0;
  uint64_t __t1720t__to=0;
  uint64_t __t1721t__from=0;
  uint64_t __t1721t__to=0;
  char __t1722t=0;
  uint64_t __t1723t__=0;
  uint64_t i=0;
  char __t1724t=0;
  uint64_t __t1725t__=0;
  char* __t1726t__unsafe_ptr=0;
  uint64_t __t1726t__dat__pos=0;
  uint64_t __t1726t__dat__length=0;
  char __t1726t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t1727t__=0;
  char __t1728t=0;
  char __t1729t=0;
  int __t_complain=0;
  str__t1329t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1713t__unsafe_ptr,&__t1713t__dat__pos,&__t1713t__dat__length,&__t1713t__dat__first);
  stack__unsafe_ptr=__t1713t__unsafe_ptr;
  stack__dat__pos=__t1713t__dat__pos;
  stack__dat__length=__t1713t__dat__length;
  stack__dat__first=__t1713t__dat__first;
  str__t1352t(_needle,&__t1714t__unsafe_ptr,&__t1714t__dat__pos,&__t1714t__dat__length,&__t1714t__dat__first);
  needle__unsafe_ptr=__t1714t__unsafe_ptr;
  needle__dat__pos=__t1714t__dat__pos;
  needle__dat__length=__t1714t__dat__length;
  needle__dat__first=__t1714t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t400t(stack__dat__length,d,&__t1716t__);
  __t1715t=__t_complain;
  if(__t_complain){
  goto __t1715t__label;
  }
  n=__t1716t__;
  __t1715t__label:__t1715t=__t1715t==0;
  not__t41t(__t1715t,&__t1717t__);
  if(__t1717t__){
  __t1718t=0;
  goto __t_return;
  }
  of__t672t(n,&__t1720t____t673t,&__t1720t__to);
  range__t689t(__t1720t____t673t,__t1720t__to,&__t1721t__from,&__t1721t__to);
  __t1719t=0-1;
  while(1){
  __t1719t=__t1719t+1;
  __t_complain=get__t696t(__t1721t__from,__t1721t__to,__t1719t,&__t1723t__);
  __t1722t=__t_complain;
  if(__t_complain){
  goto __t1722t__label;
  }
  i=__t1723t__;
  __t1722t__label:__t1722t=__t1722t==0;
  if(!__t1722t){
  break;
  }
  add__t187t(i,d,&__t1725t__);
  __t_complain=slice__t1547t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t1725t__,&__t1726t__unsafe_ptr,&__t1726t__dat__pos,&__t1726t__dat__length,&__t1726t__dat__first);
  __t1724t=__t_complain;
  if(__t_complain){
  goto __t1724t__label;
  }
  sliced__unsafe_ptr=__t1726t__unsafe_ptr;
  sliced__dat__pos=__t1726t__dat__pos;
  sliced__dat__length=__t1726t__dat__length;
  sliced__dat__first=__t1726t__dat__first;
  __t1724t__label:__t1724t=__t1724t==0;
  eq__t1451t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1727t__);
  if(__t1727t__){
  __t1728t=1;
  __t1718t=__t1728t;
  goto __t_return;
  }
  }
  __t1729t=0;
  __t1718t=__t1729t;
  goto __t_return;
  __t_return:
  *__t4950t=__t1718t;
}

static inline __attribute__((always_inline)) void print__t1515t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1516t=0;
  const char* endl=0;
  endl=__t442t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void popen__t3687t(const char* cmd, char** __t4951t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t4951t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t3686t(char* unsafe_ptr, int64_t* __t4952t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t4952t=status;
}

static inline __attribute__((always_inline)) void int__t631t(uint64_t x, int64_t* __t4953t) {
  int __t632t=0;
  int __t633t=0;
  int __t634t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t4953t=z;
}

static inline __attribute__((always_inline)) void is_different__t96t(int64_t x, int64_t y, int* __t4954t) {
  int __t97t=0;
  int __t98t__=0;
  not__t50t(__t97t,&__t98t__);
  goto __t_return;
  __t_return:
  *__t4954t=__t98t__;
}

static inline __attribute__((always_inline)) void neq__t146t(int64_t x, int64_t y, char* __t4955t) {
  int __t147t__=0;
  char z=0;
  is_different__t96t(x,y,&__t147t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t4955t=z;
}

static inline __attribute__((always_inline)) int open__t3688t(const char* cmd, char** __t4956t) {
  char* __t3689t__=0;
  char* unsafe_ptr=0;
  char __t3690t__=0;
  char __t3691t__=0;
  char __t3692t__=0;
  int64_t __t3693t__=0;
  int64_t status=0;
  uint64_t __t3694t=0;
  int64_t __t3695t__=0;
  char __t3696t__=0;
  char __t3697t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t3687t(cmd,&__t3689t__);
  unsafe_ptr=__t3689t__;
  exists__t651t(unsafe_ptr,&__t3690t__);
  not__t41t(__t3690t__,&__t3691t__);
  if(__t3691t__){
  __t_errcode=37;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t651t(unsafe_ptr,&__t3692t__);
  if(__t3692t__){
  pclose__t3686t(unsafe_ptr,&__t3693t__);
  status=__t3693t__;
  unsafe_ptr=0;
  __t3694t=0;
  int__t631t(__t3694t,&__t3695t__);
  neq__t146t(status,__t3695t__,&__t3696t__);
  if(__t3696t__){
  __t_complain=38;
  goto __t3697t__label;
  __t3697t__label:__t3697t=__t3697t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t4956t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t3699t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t4957t) {
  const char* __t3700t__cstr=0;
  char* __t3700t__str__unsafe_ptr=0;
  uint64_t __t3700t__str__dat__pos=0;
  uint64_t __t3700t__str__dat__length=0;
  char __t3700t__str__dat__first=0;
  const char* __t3702t__=0;
  char* __t3703t__unsafe_ptr=0;
  char __t3704t____t3692t__=0;
  int64_t __t3704t____t3693t__=0;
  int64_t __t3704t__status=0;
  uint64_t __t3704t____t3694t=0;
  int64_t __t3704t____t3695t__=0;
  char __t3704t____t3696t__=0;
  char __t3704t____t3697t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1434t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t3700t__cstr,&__t3700t__str__unsafe_ptr,&__t3700t__str__dat__pos,&__t3700t__str__dat__length,&__t3700t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1444t(__t3700t__cstr,__t3700t__str__unsafe_ptr,__t3700t__str__dat__pos,__t3700t__str__dat__length,__t3700t__str__dat__first,&__t3702t__);
  __t_errcode=open__t3688t(__t3702t__,&__t3703t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t651t(__t3703t__unsafe_ptr,&__t3704t____t3692t__);
  if(__t3704t____t3692t__){
  pclose__t3686t(__t3703t__unsafe_ptr,&__t3704t____t3693t__);
  __t3704t__status=__t3704t____t3693t__;
  __t3703t__unsafe_ptr=0;
  __t3704t____t3694t=0;
  int__t631t(__t3704t____t3694t,&__t3704t____t3695t__);
  neq__t146t(__t3704t__status,__t3704t____t3695t__,&__t3704t____t3696t__);
  if(__t3704t____t3696t__){
  __t_complain=38;
  goto __t3697t__label;
  __t3697t__label:__t3704t____t3697t=__t3704t____t3697t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t4957t=__t3703t__unsafe_ptr;
  
  __t_skip_returns:free__t722t(&__t3700t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t3661t(int64_t value, const char** __t4958t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t4958t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t4959t) {
  const char* value=0;
  *__t4959t=value;
}

int run__t4510t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t4960t) {
  char* __t4511t__unsafe_ptr=0;
  char __t4512t____t3704t____t3692t__=0;
  int64_t __t4512t____t3704t____t3693t__=0;
  int64_t __t4512t____t3704t__status=0;
  uint64_t __t4512t____t3704t____t3694t=0;
  int64_t __t4512t____t3704t____t3695t__=0;
  char __t4512t____t3704t____t3696t__=0;
  char __t4512t____t3704t____t3697t=0;
  char* proc__unsafe_ptr=0;
  char __t4513t=0;
  int64_t __t4514t=0;
  int64_t error=0;
  const char* __t4515t__=0;
  const char* __t4516t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t3699t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t4511t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t4511t__unsafe_ptr;
  exists__t651t(__t4511t__unsafe_ptr,&__t4512t____t3704t____t3692t__);
  if(__t4512t____t3704t____t3692t__){
  pclose__t3686t(__t4511t__unsafe_ptr,&__t4512t____t3704t____t3693t__);
  __t4512t____t3704t__status=__t4512t____t3704t____t3693t__;
  __t4511t__unsafe_ptr=0;
  __t4512t____t3704t____t3694t=0;
  int__t631t(__t4512t____t3704t____t3694t,&__t4512t____t3704t____t3695t__);
  neq__t146t(__t4512t____t3704t__status,__t4512t____t3704t____t3695t__,&__t4512t____t3704t____t3696t__);
  if(__t4512t____t3704t____t3696t__){
  __t_complain=38;
  goto __t3697t__label;
  __t3697t__label:__t4512t____t3704t____t3697t=__t4512t____t3704t____t3697t==0;
  }
  }
  __t4514t=__t_complain;
  __t4513t=(__t_complain==0);
  __t_complain=0;
  error=__t4514t;
  __t4513t__label:__t4513t=__t4513t==0;
  if(__t4513t){
  cstr__t3661t(error,&__t4515t__);
  goto __t_return;
  }
  cstr__t1t(&__t4516t__);
  __t4515t__=__t4516t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4960t=__t4515t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t4961t) {
  int value=0;
  *__t4961t=value;
}

static inline __attribute__((always_inline)) void not__t52t(int __t_anon0, int* __t4962t) {
  int __t53t__=0;
  true__t15t(&__t53t__);
  goto __t_return;
  __t_return:
  *__t4962t=__t53t__;
}

static inline __attribute__((always_inline)) void exists__t1290t(const char* c, char* __t4963t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t4963t=z;
}

static inline __attribute__((always_inline)) void nn__t429t(const char* value, const char** __t4964t, const char** __t4965t) {
  const char* __t431t=0;
  __t431t=__t430t;
  goto __t_return;
  __t_return:
  *__t4964t=value;
  *__t4965t=__t431t;
}

static inline __attribute__((always_inline)) void print__t438t(const char* value, const char* endl) {
  int __t439t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t474t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void set__t594t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t4546t(char colors__initialized) {
  const char* __t4548t__value=0;
  const char* __t4548t____t431t=0;
  int __t4550t=0;
  char __t4551t=0;
  char __t4552t=0;
  const char* __t4557t__value=0;
  const char* __t4557t____t431t=0;
  int __t4559t=0;
  const char* __t4562t__value=0;
  const char* __t4562t____t431t=0;
  nn__t429t(__t4528t,&__t4548t__value,&__t4548t____t431t);
  print__t438t(__t4548t__value,__t4548t____t431t);
  __t4552t=1;
  if(__t4553t!=__t4553t){
  __t4552t=0;
  }
  if(__t4552t){
  __t4551t=1;
  }
  if(__t4551t){
  set__t474t(colors__initialized);
  nn__t429t(__t4556t,&__t4557t__value,&__t4557t____t431t);
  print__t438t(__t4557t__value,__t4557t____t431t);
  }
  set__t594t(colors__initialized);
  nn__t429t(__t4543t,&__t4562t__value,&__t4562t____t431t);
  print__t438t(__t4562t__value,__t4562t____t431t);
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

static inline __attribute__((always_inline)) void print_marker__t4526t(char colors__initialized) {
  const char* __t4529t__value=0;
  const char* __t4529t____t431t=0;
  char __t4531t=0;
  char __t4532t=0;
  const char* __t4537t__value=0;
  const char* __t4537t____t431t=0;
  int __t4539t=0;
  int __t4540t=0;
  const char* __t4544t__value=0;
  const char* __t4544t____t431t=0;
  nn__t429t(__t4528t,&__t4529t__value,&__t4529t____t431t);
  print__t438t(__t4529t__value,__t4529t____t431t);
  __t4532t=1;
  if(__t4533t!=__t4533t){
  __t4532t=0;
  }
  if(__t4532t){
  __t4531t=1;
  }
  if(__t4531t){
  set__t478t(colors__initialized);
  nn__t429t(__t4536t,&__t4537t__value,&__t4537t____t431t);
  print__t438t(__t4537t__value,__t4537t____t431t);
  }
  set__t594t(colors__initialized);
  nn__t429t(__t4543t,&__t4544t__value,&__t4544t____t431t);
  print__t438t(__t4544t__value,__t4544t____t431t);
}

static inline __attribute__((always_inline)) int test__t4603t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t4966t) {
  const char* __t4606t__=0;
  const char* __t4607t=0;
  const char* error=0;
  int __t4608t=0;
  int __t4609t__=0;
  char __t4610t__=0;
  const char* __t4611t__=0;
  const char* __t4613t__value=0;
  const char* __t4613t____t431t=0;
  char __t4615t__=0;
  char __t4619t=0;
  char __t4624t=0;
  int __t_errcode=0;
  int __t_complain=0;
  print__t1515t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t4510t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t4606t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4607t=__t4606t__;
  error=__t4607t;
  not__t52t(__t4608t,&__t4609t__);
  if(should_fail){
  exists__t1290t(error,&__t4610t__);
  if(__t4610t__){
  cstr__t1t(&__t4611t__);
  error=__t4611t__;
  }
  else{
  error=__t4612t;
  }
  }
  nn__t429t(__t4590t,&__t4613t__value,&__t4613t____t431t);
  print__t438t(__t4613t__value,__t4613t____t431t);
  exists__t1290t(error,&__t4615t__);
  if(__t4615t__){
  print_marker__t4546t(colors__initialized);
  print__t440t(error);
  __t4619t=0;
  goto __t_return;
  }
  print_marker__t4526t(colors__initialized);
  print__t440t(__t4622t);
  __t4624t=1;
  __t4619t=__t4624t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4966t=__t4619t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t451t(uint64_t value, const char* endl) {
  int __t452t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t436t(uint64_t value, uint64_t* __t4967t, const char** __t4968t) {
  const char* __t437t=0;
  __t437t=__t430t;
  goto __t_return;
  __t_return:
  *__t4967t=value;
  *__t4968t=__t437t;
}

static inline __attribute__((always_inline)) int main__t4661t() {
  char* __t4663t__unsafe_ptr=0;
  uint64_t __t4663t__dat__pos=0;
  uint64_t __t4663t__dat__length=0;
  char __t4663t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t4666t__initialized=0;
  char colors__initialized=0;
  uint64_t __t4668t=0;
  char* __t4669t__unsafe_ptr=0;
  uint64_t __t4669t__unsafe_size=0;
  uint32_t __t4669t__unsafe_offset=0;
  uint32_t __t4669t__unsafe_align=0;
  char* __t4671t__buf__unsafe_ptr=0;
  uint64_t __t4671t__buf__unsafe_size=0;
  uint32_t __t4671t__buf__unsafe_offset=0;
  uint32_t __t4671t__buf__unsafe_align=0;
  uint64_t __t4671t__pos=0;
  char* __t4672t__buf__unsafe_ptr=0;
  uint64_t __t4672t__buf__unsafe_size=0;
  uint32_t __t4672t__buf__unsafe_offset=0;
  uint32_t __t4672t__buf__unsafe_align=0;
  uint64_t __t4672t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t4674t__unsafe_ptr=0;
  uint64_t __t4674t__dat__pos=0;
  uint64_t __t4674t__dat__length=0;
  char __t4674t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  uint64_t __t4675t=0;
  uint64_t __t4676t=0;
  uint64_t counter=0;
  uint64_t __t4677t=0;
  uint64_t __t4678t=0;
  uint64_t failures=0;
  uint64_t __t4679t=0;
  char* __t4680t__unsafe_ptr=0;
  char __t4682t=0;
  char* __t4683t__unsafe_ptr=0;
  uint64_t __t4683t__dat__pos=0;
  uint64_t __t4683t__dat__length=0;
  char __t4683t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t4685t__=0;
  char __t4686t__=0;
  char __t4687t__=0;
  char __t4688t=0;
  char __t4689t__=0;
  uint64_t __t4690t__=0;
  uint64_t __t4691t____t4658t=0;
  uint64_t __t4691t____t4660t__=0;
  char* __t4692t__unsafe_ptr=0;
  uint64_t __t4692t__dat__pos=0;
  uint64_t __t4692t__dat__length=0;
  char __t4692t__dat__first=0;
  char* __t4694t__unsafe_ptr=0;
  uint64_t __t4694t__dat__pos=0;
  uint64_t __t4694t__dat__length=0;
  char __t4694t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t4695t=0;
  char* __t4696t__unsafe_ptr=0;
  char __t4698t=0;
  char* __t4699t__unsafe_ptr=0;
  uint64_t __t4699t__dat__pos=0;
  uint64_t __t4699t__dat__length=0;
  char __t4699t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t4701t__=0;
  char __t4702t__=0;
  uint64_t __t4703t__=0;
  uint64_t __t4704t____t4658t=0;
  uint64_t __t4704t____t4660t__=0;
  uint64_t __t4705t=0;
  uint64_t __t4706t__=0;
  char __t4708t__=0;
  char should_fail=0;
  char* __t4709t__unsafe_ptr=0;
  uint64_t __t4709t__dat__pos=0;
  uint64_t __t4709t__dat__length=0;
  char __t4709t__dat__first=0;
  char* __t4710t__unsafe_ptr=0;
  uint64_t __t4710t__dat__pos=0;
  uint64_t __t4710t__dat__length=0;
  char __t4710t__dat__first=0;
  char __t4711t__=0;
  char __t4712t__=0;
  uint64_t __t4713t=0;
  uint64_t __t4714t__=0;
  uint64_t __t4715t=0;
  char __t4716t__=0;
  const char* __t4730t__value=0;
  const char* __t4730t____t431t=0;
  const char* __t4720t__value=0;
  const char* __t4720t____t431t=0;
  const char* __t4725t__value=0;
  const char* __t4725t____t431t=0;
  uint64_t __t4736t__value=0;
  const char* __t4736t____t437t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1352t(__t4662t,&__t4663t__unsafe_ptr,&__t4663t__dat__pos,&__t4663t__dat__length,&__t4663t__dat__first);
  test_root__unsafe_ptr=__t4663t__unsafe_ptr;
  test_root__dat__pos=__t4663t__dat__pos;
  test_root__dat__length=__t4663t__dat__length;
  test_root__dat__first=__t4663t__dat__first;
  console__t418t();
  colors__t468t(&__t4666t__initialized);
  colors__initialized=__t4666t__initialized;
  __t4668t=128;
  __t_errcode=alloc__t990t(__t4668t,&__t4669t__unsafe_ptr,&__t4669t__unsafe_size,&__t4669t__unsafe_offset,&__t4669t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1071t(&__t4669t__unsafe_ptr,&__t4669t__unsafe_size,&__t4669t__unsafe_offset,&__t4669t__unsafe_align,&__t4671t__buf__unsafe_ptr,&__t4671t__buf__unsafe_size,&__t4671t__buf__unsafe_offset,&__t4671t__buf__unsafe_align,&__t4671t__pos);
  __t4672t__buf__unsafe_ptr=__t4671t__buf__unsafe_ptr;
  __t4672t__buf__unsafe_size=__t4671t__buf__unsafe_size;
  __t4672t__buf__unsafe_offset=__t4671t__buf__unsafe_offset;
  __t4672t__buf__unsafe_align=__t4671t__buf__unsafe_align;
  __t4672t__pos=__t4671t__pos;
  CHARS__buf__unsafe_ptr=__t4672t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t4672t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t4672t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t4672t__buf__unsafe_align;
  CHARS__pos=__t4672t__pos;
  __t_errcode=copy__t1384t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t4673t,&__t4674t__unsafe_ptr,&__t4674t__dat__pos,&__t4674t__dat__length,&__t4674t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t4674t__unsafe_ptr;
  command_base__dat__pos=__t4674t__dat__pos;
  command_base__dat__length=__t4674t__dat__length;
  command_base__dat__first=__t4674t__dat__first;
  __t4675t=0;
  __t4676t=__t4675t;
  counter=__t4676t;
  __t4677t=0;
  __t4678t=__t4677t;
  failures=__t4678t;
  __t_errcode=open__t4386t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t4680t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4679t=0-1;
  while(1){
  __t4679t=__t4679t+1;
  __t_complain=get__t4469t(&__t4680t__unsafe_ptr,__t4679t,&__t4683t__unsafe_ptr,&__t4683t__dat__pos,&__t4683t__dat__length,&__t4683t__dat__first);
  __t4682t=__t_complain;
  if(__t_complain){
  goto __t4682t__label;
  }
  path__unsafe_ptr=__t4683t__unsafe_ptr;
  path__dat__pos=__t4683t__dat__pos;
  path__dat__length=__t4683t__dat__length;
  path__dat__first=__t4683t__dat__first;
  __t4682t__label:__t4682t=__t4682t==0;
  if(!__t4682t){
  break;
  }
  eq__t1458t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t4684t,&__t4685t__);
  if(!__t4685t__){
  __t_errcode=is_dir__t4313t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t4686t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t4686t__,&__t4687t__);
  __t4688t=__t4687t__;
  }
  else{
  __t4688t=0;
  not__t41t(__t4688t,&__t4689t__);
  __t4688t=__t4689t__;
  }
  if(__t4688t){
  continue;
  }
  reuse__t4655t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t4690t__);
  __t_errcode=add__t2456t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t4692t__unsafe_ptr,&__t4692t__dat__pos,&__t4692t__dat__length,&__t4692t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2501t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t4692t__unsafe_ptr,__t4692t__dat__pos,__t4692t__dat__length,__t4692t__dat__first,__t4693t,&__t4694t__unsafe_ptr,&__t4694t__dat__pos,&__t4694t__dat__length,&__t4694t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t4694t__unsafe_ptr;
  dir_path__dat__pos=__t4694t__dat__pos;
  dir_path__dat__length=__t4694t__dat__length;
  dir_path__dat__first=__t4694t__dat__first;
  __t_errcode=open__t4386t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t4696t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4695t=0-1;
  while(1){
  __t4695t=__t4695t+1;
  __t_complain=get__t4469t(&__t4696t__unsafe_ptr,__t4695t,&__t4699t__unsafe_ptr,&__t4699t__dat__pos,&__t4699t__dat__length,&__t4699t__dat__first);
  __t4698t=__t_complain;
  if(__t_complain){
  goto __t4698t__label;
  }
  entry__unsafe_ptr=__t4699t__unsafe_ptr;
  entry__dat__pos=__t4699t__dat__pos;
  entry__dat__length=__t4699t__dat__length;
  entry__dat__first=__t4699t__dat__first;
  __t4698t__label:__t4698t=__t4698t==0;
  if(!__t4698t){
  break;
  }
  __t_errcode=ends_with__t1626t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t4700t,&__t4701t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t4701t__,&__t4702t__);
  if(__t4702t__){
  continue;
  }
  reuse__t4655t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t4703t__);
  __t4705t=1;
  add__t187t(counter,__t4705t,&__t4706t__);
  counter=__t4706t__;
  contains__t1712t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t4707t,&__t4708t__);
  should_fail=__t4708t__;
  __t_errcode=add__t2456t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t4709t__unsafe_ptr,&__t4709t__dat__pos,&__t4709t__dat__length,&__t4709t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2456t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t4709t__unsafe_ptr,__t4709t__dat__pos,__t4709t__dat__length,__t4709t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t4710t__unsafe_ptr,&__t4710t__dat__pos,&__t4710t__dat__length,&__t4710t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t4603t(colors__initialized,__t4710t__unsafe_ptr,__t4710t__dat__pos,__t4710t__dat__length,__t4710t__dat__first,should_fail,&__t4711t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t4711t__,&__t4712t__);
  if(__t4712t__){
  __t4713t=1;
  add__t187t(failures,__t4713t,&__t4714t__);
  failures=__t4714t__;
  }
  __t4704t____t4658t=0;
  sub__t408t(__t4703t__,__t4704t____t4658t,&__t4704t____t4660t__);
  CHARS__pos=__t4704t____t4660t__;
  }
  __t4691t____t4658t=0;
  sub__t408t(__t4690t__,__t4691t____t4658t,&__t4691t____t4660t__);
  CHARS__pos=__t4691t____t4660t__;
  closedir__t4376t(__t4696t__unsafe_ptr);
  }
  __t4715t=0;
  eq__t133t(failures,__t4715t,&__t4716t__);
  if(__t4716t__){
  set__t478t(colors__initialized);
  nn__t429t(__t4719t,&__t4720t__value,&__t4720t____t431t);
  print__t438t(__t4720t__value,__t4720t____t431t);
  set__t594t(colors__initialized);
  nn__t429t(__t4724t,&__t4725t__value,&__t4725t____t431t);
  print__t438t(__t4725t__value,__t4725t____t431t);
  }
  else{
  set__t474t(colors__initialized);
  nn__t429t(__t4729t,&__t4730t__value,&__t4730t____t431t);
  print__t438t(__t4730t__value,__t4730t____t431t);
  set__t594t(colors__initialized);
  print__t451t(failures,__t4734t);
  }
  nn__t436t(counter,&__t4736t__value,&__t4736t____t437t);
  print__t451t(__t4736t__value,__t4736t____t437t);
  print__t440t(__t4738t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t4376t(__t4680t__unsafe_ptr);
  free__t722t(&__t4669t__unsafe_ptr);
  if(__t4666t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t4661t();
                }