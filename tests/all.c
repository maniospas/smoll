#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5366t="..";
const char* const __t431t="";
const char* const __t5299t="completed";
const char* const __t5418t=" out of ";
const char* const __t5208t="V";
const char* const __t5355t="./smoll --cleanup ";
const char* const __t5408t="no errors across ";
const char* const __t5200t="[";
const char* const __t5389t="_fail_";
const char* const __t5225t="failure";
const char* const __t5375t="/";
const char* const __t5215t="] ";
const char* const __t5403t="PASSING ";
const char* const __t443t="\n";
const char* const __t5382t=".s";
const char* const __t5262t=" |- ";
const char* const __t5422t=" tests";
const char* const __t5341t="./tests/passing/";
const char* const __t5205t="success";
const char* const __t5228t="X";
const char* const __t5413t="FAILED ";
const char* const __t5289t="no errors found, but the run should be failing (contains _fail_ in its name)";
static const char* __t_all_errcodes[62] = {"noerr",
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

static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1567t(char** __t5433t, uint64_t* __t5434t, uint32_t* __t5435t, uint32_t* __t5436t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5433t=unsafe_ptr;
  *__t5434t=unsafe_size;
  *__t5435t=unsafe_offset;
  *__t5436t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5437t) {
  *__t5437t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5438t) {
  int value=0;
  *__t5438t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5439t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5439t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5440t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5440t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5441t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5441t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5442t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5442t=z;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t5443t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5443t=z;
}

static inline __attribute__((always_inline)) void nat__t684t(uint32_t x, uint64_t* __t5444t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5444t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5445t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5445t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5446t) {
  *__t5446t=to;
}

static inline __attribute__((always_inline)) void add__t793t(char* allocated, uint64_t offset, char** __t5447t) {
  char* element=0;
  char* __t794t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t794t__);
  goto __t_return;
  __t_return:
  *__t5447t=__t794t__;
}

static inline __attribute__((always_inline)) int get__t1134t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5448t) {
  int __t1135t=0;
  char __t1136t__=0;
  uint64_t __t1137t__=0;
  uint64_t __t1138t__=0;
  uint64_t __t1139t__=0;
  uint64_t __t1140t__=0;
  char* __t1141t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1136t__);
  if(__t1136t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t1137t__);
  mul__t212t(i,__t1137t__,&__t1138t__);
  nat__t684t(buffer__unsafe_offset,&__t1139t__);
  add__t188t(__t1138t__,__t1139t__,&__t1140t__);
  add__t793t(buffer__unsafe_ptr,__t1140t__,&__t1141t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5448t=__t1141t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1592t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5449t, uint64_t* __t5450t, uint64_t* __t5451t, char* __t5452t) {
  goto __t_return;
  __t_return:
  *__t5449t=unsafe_ptr;
  *__t5450t=dat__pos;
  *__t5451t=dat__length;
  *__t5452t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1596t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5453t, uint64_t* __t5454t, uint64_t* __t5455t, char* __t5456t) {
  char* unsafe_ptr=0;
  uint64_t __t1597t__=0;
  uint64_t __t1598t=0;
  char __t1599t__=0;
  uint64_t __t1600t__=0;
  uint64_t __t1601t=0;
  char __t1602t__=0;
  char* __t1603t__unsafe_ptr=0;
  uint64_t __t1603t__dat__pos=0;
  uint64_t __t1603t__dat__length=0;
  char __t1603t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t684t(buf__unsafe_align,&__t1597t__);
  __t1598t=1;
  neq__t158t(__t1597t__,__t1598t,&__t1599t__);
  if(__t1599t__){
  __t_errcode=23;
  goto __t_failure;
  }
  nat__t684t(buf__unsafe_offset,&__t1600t__);
  __t1601t=0;
  neq__t158t(__t1600t__,__t1601t,&__t1602t__);
  if(__t1602t__){
  __t_errcode=24;
  goto __t_failure;
  }
  str__t1592t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1603t__unsafe_ptr,&__t1603t__dat__pos,&__t1603t__dat__length,&__t1603t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5453t=__t1603t__unsafe_ptr;
  *__t5454t=__t1603t__dat__pos;
  *__t5455t=__t1603t__dat__length;
  *__t5456t=__t1603t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1630t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5457t, uint64_t* __t5458t, uint64_t* __t5459t, char* __t5460t) {
  uint64_t __t1631t=0;
  char __t1632t__=0;
  char* __t1634t__=0;
  char __t1635t__value=0;
  char first=0;
  char* __t1636t__unsafe_ptr=0;
  uint64_t __t1636t__dat__pos=0;
  uint64_t __t1636t__dat__length=0;
  char __t1636t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1631t=0;
  neq__t158t(length,__t1631t,&__t1632t__);
  if(__t1632t__){
  __t_errcode=get__t1134t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1634t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1634t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1635t__value,__t1634t__,1);
  first=__t1635t__value;
  }
  __t_errcode=str__t1596t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1636t__unsafe_ptr,&__t1636t__dat__pos,&__t1636t__dat__length,&__t1636t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5457t=__t1636t__unsafe_ptr;
  *__t5458t=__t1636t__dat__pos;
  *__t5459t=__t1636t__dat__length;
  *__t5460t=__t1636t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1652t(const char* c, char** __t5461t, uint64_t* __t5462t, uint64_t* __t5463t, char* __t5464t) {
  char* __t1653t__unsafe_ptr=0;
  uint64_t __t1653t__unsafe_size=0;
  uint32_t __t1653t__unsafe_offset=0;
  uint32_t __t1653t__unsafe_align=0;
  char* __t1654t__unsafe_ptr=0;
  uint64_t __t1654t__unsafe_size=0;
  uint32_t __t1654t__unsafe_offset=0;
  uint32_t __t1654t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1655t__=0;
  uint64_t length=0;
  uint64_t __t1656t=0;
  uint64_t __t1657t__=0;
  char __t1658t=0;
  uint64_t __t1659t=0;
  char* __t1661t__unsafe_ptr=0;
  uint64_t __t1661t__dat__pos=0;
  uint64_t __t1661t__dat__length=0;
  char __t1661t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1567t(&__t1653t__unsafe_ptr,&__t1653t__unsafe_size,&__t1653t__unsafe_offset,&__t1653t__unsafe_align);
  __t1654t__unsafe_ptr=__t1653t__unsafe_ptr;
  __t1654t__unsafe_size=__t1653t__unsafe_size;
  __t1654t__unsafe_offset=__t1653t__unsafe_offset;
  __t1654t__unsafe_align=__t1653t__unsafe_align;
  buf__unsafe_ptr=__t1654t__unsafe_ptr;
  buf__unsafe_size=__t1654t__unsafe_size;
  buf__unsafe_offset=__t1654t__unsafe_offset;
  buf__unsafe_align=__t1654t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1655t__);
  buf__unsafe_ptr=__t1655t__;
  if(c){
  length=strlen(c);
  }
  __t1656t=1;
  add__t188t(length,__t1656t,&__t1657t__);
  buf__unsafe_size=__t1657t__;
  __t1659t=0;
  __t_complain=str__t1630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1659t,length,&__t1661t__unsafe_ptr,&__t1661t__dat__pos,&__t1661t__dat__length,&__t1661t__dat__first);
  __t1658t=__t_complain;
  if(__t_complain){
  goto __t1658t__label;
  }
  ret__unsafe_ptr=__t1661t__unsafe_ptr;
  ret__dat__pos=__t1661t__dat__pos;
  ret__dat__length=__t1661t__dat__length;
  ret__dat__first=__t1661t__dat__first;
  __t1658t__label:__t1658t=__t1658t==0;
  goto __t_return;
  __t_return:
  *__t5461t=ret__unsafe_ptr;
  *__t5462t=ret__dat__pos;
  *__t5463t=ret__dat__length;
  *__t5464t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t468t(char* __t5465t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5465t=supports;
}

static inline __attribute__((always_inline)) void colors__t469t(char* __t5466t) {
  char __t470t__=0;
  char initialized=0;
  supports_ansi__t468t(&__t470t__);
  initialized=__t470t__;
  goto __t_return;
  __t_return:
  *__t5466t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1070t(char** __t5467t, uint64_t* __t5468t, uint32_t* __t5469t, uint32_t* __t5470t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5467t=unsafe_ptr;
  *__t5468t=unsafe_size;
  *__t5469t=unsafe_offset;
  *__t5470t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t791t(char** __t5471t) {
  char* allocated=*__t5471t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5471t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5472t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5472t=z;
}

static inline __attribute__((always_inline)) void zero__t792t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t645t(char* x, char* __t5473t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5473t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5474t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5474t=z;
}

static inline __attribute__((always_inline)) int alloc__t775t(uint64_t bytes, char** __t5475t) {
  char* allocated=0;
  char __t776t__=0;
  char __t777t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t645t(allocated,&__t776t__);
  not__t42t(__t776t__,&__t777t__);
  if(__t777t__){
  __t_errcode=15;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5475t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t914t(char** __t5476t, uint64_t* __t5477t, uint32_t* __t5478t, uint32_t* __t5479t, uint64_t size, char** __t5480t, uint64_t* __t5481t, uint32_t* __t5482t, uint32_t* __t5483t) {
  char* buffer__unsafe_ptr=*__t5476t;
  uint64_t buffer__unsafe_size=*__t5477t;
  uint32_t buffer__unsafe_offset=*__t5478t;
  uint32_t buffer__unsafe_align=*__t5479t;
  int __t915t=0;
  int __t916t=0;
  char __t918t__=0;
  uint64_t __t919t=0;
  char __t920t__=0;
  char __t921t=0;
  uint64_t __t922t=0;
  uint64_t __t923t__=0;
  uint64_t __t924t__=0;
  int __t926t=0;
  uint64_t __t927t=0;
  char __t928t__=0;
  uint64_t __t929t__=0;
  uint64_t __t930t__=0;
  uint64_t bytes=0;
  int __t931t=0;
  uint64_t __t932t=0;
  char __t933t__=0;
  char* __t934t__=0;
  int __t935t=0;
  uint64_t __t936t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t918t__);
  if(__t918t__){
  __t919t=0;
  neq__t158t(size,__t919t,&__t920t__);
  __t921t=__t920t__;
  }
  if(__t921t){
  __t922t=0;
  nat__t684t(buffer__unsafe_align,&__t923t__);
  mul__t212t(__t923t__,size,&__t924t__);
  zero__t792t(buffer__unsafe_ptr,__t922t,__t924t__);
  goto __t_return;
  }
  __t927t=0;
  neq__t158t(buffer__unsafe_size,__t927t,&__t928t__);
  if(__t928t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t929t__);
  mul__t212t(__t929t__,size,&__t930t__);
  bytes=__t930t__;
  __t932t=0;
  eq__t134t(bytes,__t932t,&__t933t__);
  if(__t933t__){
  __t_errcode=17;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t775t(bytes,&__t934t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t936t=0;
  zero__t792t(__t934t__,__t936t,bytes);
  buffer__unsafe_ptr=__t934t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t791t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5476t=buffer__unsafe_ptr;
  *__t5477t=buffer__unsafe_size;
  *__t5478t=buffer__unsafe_offset;
  *__t5479t=buffer__unsafe_align;
  *__t5480t=buffer__unsafe_ptr;
  *__t5481t=buffer__unsafe_size;
  *__t5482t=buffer__unsafe_offset;
  *__t5483t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1069t(uint64_t size, char** __t5484t, uint64_t* __t5485t, uint32_t* __t5486t, uint32_t* __t5487t) {
  char* __t1072t__unsafe_ptr=0;
  uint64_t __t1072t__unsafe_size=0;
  uint32_t __t1072t__unsafe_offset=0;
  uint32_t __t1072t__unsafe_align=0;
  char* __t1073t__unsafe_ptr=0;
  uint64_t __t1073t__unsafe_size=0;
  uint32_t __t1073t__unsafe_offset=0;
  uint32_t __t1073t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1070t(&__t1072t__unsafe_ptr,&__t1072t__unsafe_size,&__t1072t__unsafe_offset,&__t1072t__unsafe_align);
  __t_errcode=alloc__t914t(&__t1072t__unsafe_ptr,&__t1072t__unsafe_size,&__t1072t__unsafe_offset,&__t1072t__unsafe_align,size,&__t1073t__unsafe_ptr,&__t1073t__unsafe_size,&__t1073t__unsafe_offset,&__t1073t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t791t(&__t1073t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5484t=__t1073t__unsafe_ptr;
  *__t5485t=__t1073t__unsafe_size;
  *__t5486t=__t1073t__unsafe_offset;
  *__t5487t=__t1073t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1185t(char** __t5488t, uint64_t* __t5489t, uint32_t* __t5490t, uint32_t* __t5491t, uint64_t _pos, char** __t5492t, uint64_t* __t5493t, uint32_t* __t5494t, uint32_t* __t5495t, uint64_t* __t5496t) {
  char* buf__unsafe_ptr=*__t5488t;
  uint64_t buf__unsafe_size=*__t5489t;
  uint32_t buf__unsafe_offset=*__t5490t;
  uint32_t buf__unsafe_align=*__t5491t;
  uint64_t __t1186t=0;
  uint64_t pos=0;
  __t1186t=_pos;
  pos=__t1186t;
  goto __t_return;
  __t_return:
  *__t5488t=buf__unsafe_ptr;
  *__t5489t=buf__unsafe_size;
  *__t5490t=buf__unsafe_offset;
  *__t5491t=buf__unsafe_align;
  *__t5492t=buf__unsafe_ptr;
  *__t5493t=buf__unsafe_size;
  *__t5494t=buf__unsafe_offset;
  *__t5495t=buf__unsafe_align;
  *__t5496t=pos;
}

static inline __attribute__((always_inline)) void arena__t1188t(char** __t5497t, uint64_t* __t5498t, uint32_t* __t5499t, uint32_t* __t5500t, char** __t5501t, uint64_t* __t5502t, uint32_t* __t5503t, uint32_t* __t5504t, uint64_t* __t5505t) {
  char* buf__unsafe_ptr=*__t5497t;
  uint64_t buf__unsafe_size=*__t5498t;
  uint32_t buf__unsafe_offset=*__t5499t;
  uint32_t buf__unsafe_align=*__t5500t;
  uint64_t __t1189t=0;
  char* __t1190t__buf__unsafe_ptr=0;
  uint64_t __t1190t__buf__unsafe_size=0;
  uint32_t __t1190t__buf__unsafe_offset=0;
  uint32_t __t1190t__buf__unsafe_align=0;
  uint64_t __t1190t__pos=0;
  __t1189t=0;
  arena__t1185t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1189t,&__t1190t__buf__unsafe_ptr,&__t1190t__buf__unsafe_size,&__t1190t__buf__unsafe_offset,&__t1190t__buf__unsafe_align,&__t1190t__pos);
  goto __t_return;
  __t_return:
  *__t5497t=buf__unsafe_ptr;
  *__t5498t=buf__unsafe_size;
  *__t5499t=buf__unsafe_offset;
  *__t5500t=buf__unsafe_align;
  *__t5501t=__t1190t__buf__unsafe_ptr;
  *__t5502t=__t1190t__buf__unsafe_size;
  *__t5503t=__t1190t__buf__unsafe_offset;
  *__t5504t=__t1190t__buf__unsafe_align;
  *__t5505t=__t1190t__pos;
}

static inline __attribute__((always_inline)) void len__t1142t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5506t) {
  goto __t_return;
  __t_return:
  *__t5506t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t5507t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5507t=z;
}

static inline __attribute__((always_inline)) void allocated__t1192t(char** __t5508t, uint64_t* __t5509t, uint32_t* __t5510t, uint32_t* __t5511t, uint64_t pos, char** __t5512t, uint64_t* __t5513t, uint32_t* __t5514t, uint32_t* __t5515t, uint64_t* __t5516t) {
  char* buf__unsafe_ptr=*__t5508t;
  uint64_t buf__unsafe_size=*__t5509t;
  uint32_t buf__unsafe_offset=*__t5510t;
  uint32_t buf__unsafe_align=*__t5511t;
  goto __t_return;
  __t_return:
  *__t5508t=buf__unsafe_ptr;
  *__t5509t=buf__unsafe_size;
  *__t5510t=buf__unsafe_offset;
  *__t5511t=buf__unsafe_align;
  *__t5512t=buf__unsafe_ptr;
  *__t5513t=buf__unsafe_size;
  *__t5514t=buf__unsafe_offset;
  *__t5515t=buf__unsafe_align;
  *__t5516t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1267t(char** __t5517t, uint64_t* __t5518t, uint32_t* __t5519t, uint32_t* __t5520t, uint64_t* __t5521t, uint64_t length, char** __t5522t, uint64_t* __t5523t, uint32_t* __t5524t, uint32_t* __t5525t, uint64_t* __t5526t) {
  char* allocator__buf__unsafe_ptr=*__t5517t;
  uint64_t allocator__buf__unsafe_size=*__t5518t;
  uint32_t allocator__buf__unsafe_offset=*__t5519t;
  uint32_t allocator__buf__unsafe_align=*__t5520t;
  uint64_t allocator__pos=*__t5521t;
  int __t1268t=0;
  uint64_t __t1269t__=0;
  uint64_t next_pos=0;
  uint64_t __t1270t__=0;
  char __t1271t__=0;
  uint64_t __t1272t=0;
  uint64_t __t1273t__=0;
  uint64_t pos=0;
  char* __t1274t__buf__unsafe_ptr=0;
  uint64_t __t1274t__buf__unsafe_size=0;
  uint32_t __t1274t__buf__unsafe_offset=0;
  uint32_t __t1274t__buf__unsafe_align=0;
  uint64_t __t1274t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1269t__);
  next_pos=__t1269t__;
  len__t1142t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1270t__);
  gt__t325t(next_pos,__t1270t__,&__t1271t__);
  if(__t1271t__){
  __t_errcode=21;
  goto __t_failure;
  }
  __t1272t=0;
  add__t188t(allocator__pos,__t1272t,&__t1273t__);
  pos=__t1273t__;
  allocator__pos=next_pos;
  allocated__t1192t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1274t__buf__unsafe_ptr,&__t1274t__buf__unsafe_size,&__t1274t__buf__unsafe_offset,&__t1274t__buf__unsafe_align,&__t1274t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5517t=allocator__buf__unsafe_ptr;
  *__t5518t=allocator__buf__unsafe_size;
  *__t5519t=allocator__buf__unsafe_offset;
  *__t5520t=allocator__buf__unsafe_align;
  *__t5521t=allocator__pos;
  *__t5522t=__t1274t__buf__unsafe_ptr;
  *__t5523t=__t1274t__buf__unsafe_size;
  *__t5524t=__t1274t__buf__unsafe_offset;
  *__t5525t=__t1274t__buf__unsafe_align;
  *__t5526t=__t1274t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1701t(char** __t5527t, uint64_t* __t5528t, uint32_t* __t5529t, uint32_t* __t5530t, uint64_t* __t5531t, const char* _other, char** __t5532t, uint64_t* __t5533t, uint64_t* __t5534t, char* __t5535t) {
  char* CHARS__buf__unsafe_ptr=*__t5527t;
  uint64_t CHARS__buf__unsafe_size=*__t5528t;
  uint32_t CHARS__buf__unsafe_offset=*__t5529t;
  uint32_t CHARS__buf__unsafe_align=*__t5530t;
  uint64_t CHARS__pos=*__t5531t;
  char* __t1702t__unsafe_ptr=0;
  uint64_t __t1702t__dat__pos=0;
  uint64_t __t1702t__dat__length=0;
  char __t1702t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1703t__buf__unsafe_ptr=0;
  uint64_t __t1703t__buf__unsafe_size=0;
  uint32_t __t1703t__buf__unsafe_offset=0;
  uint32_t __t1703t__buf__unsafe_align=0;
  uint64_t __t1703t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1704t=0;
  char* __t1705t__unsafe_ptr=0;
  uint64_t __t1705t__dat__pos=0;
  uint64_t __t1705t__dat__length=0;
  char __t1705t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1652t(_other,&__t1702t__unsafe_ptr,&__t1702t__dat__pos,&__t1702t__dat__length,&__t1702t__dat__first);
  other__unsafe_ptr=__t1702t__unsafe_ptr;
  other__dat__pos=__t1702t__dat__pos;
  other__dat__length=__t1702t__dat__length;
  other__dat__first=__t1702t__dat__first;
  __t_errcode=alloc__t1267t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1703t__buf__unsafe_ptr,&__t1703t__buf__unsafe_size,&__t1703t__buf__unsafe_offset,&__t1703t__buf__unsafe_align,&__t1703t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1703t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1703t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1703t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1703t__buf__unsafe_align;
  surface__pos=__t1703t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1596t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1705t__unsafe_ptr,&__t1705t__dat__pos,&__t1705t__dat__length,&__t1705t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5527t=CHARS__buf__unsafe_ptr;
  *__t5528t=CHARS__buf__unsafe_size;
  *__t5529t=CHARS__buf__unsafe_offset;
  *__t5530t=CHARS__buf__unsafe_align;
  *__t5531t=CHARS__pos;
  *__t5532t=__t1705t__unsafe_ptr;
  *__t5533t=__t1705t__dat__pos;
  *__t5534t=__t1705t__dat__length;
  *__t5535t=__t1705t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1143t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1668t(char** __t5536t, uint64_t* __t5537t, uint32_t* __t5538t, uint32_t* __t5539t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5536t=unsafe_ptr;
  *__t5537t=unsafe_size;
  *__t5538t=unsafe_offset;
  *__t5539t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t1662t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5540t) {
  goto __t_return;
  __t_return:
  *__t5540t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1726t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5541t, uint64_t* __t5542t, uint64_t* __t5543t, char* __t5544t) {
  char* __t1727t__unsafe_ptr=0;
  uint64_t __t1727t__unsafe_size=0;
  uint32_t __t1727t__unsafe_offset=0;
  uint32_t __t1727t__unsafe_align=0;
  uint64_t __t1728t=0;
  uint64_t __t1729t__=0;
  uint64_t __t1730t__=0;
  char* __t1731t__unsafe_ptr=0;
  uint64_t __t1731t__unsafe_size=0;
  uint32_t __t1731t__unsafe_offset=0;
  uint32_t __t1731t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t1733t=0;
  uint64_t __t1734t=0;
  char* __t1735t__unsafe_ptr=0;
  uint64_t __t1735t__dat__pos=0;
  uint64_t __t1735t__dat__length=0;
  char __t1735t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1668t(&__t1727t__unsafe_ptr,&__t1727t__unsafe_size,&__t1727t__unsafe_offset,&__t1727t__unsafe_align);
  __t1728t=1;
  len__t1662t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1729t__);
  add__t188t(__t1728t,__t1729t__,&__t1730t__);
  __t_errcode=alloc__t914t(&__t1727t__unsafe_ptr,&__t1727t__unsafe_size,&__t1727t__unsafe_offset,&__t1727t__unsafe_align,__t1730t__,&__t1731t__unsafe_ptr,&__t1731t__unsafe_size,&__t1731t__unsafe_offset,&__t1731t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1731t__unsafe_ptr;
  buf__unsafe_size=__t1731t__unsafe_size;
  buf__unsafe_offset=__t1731t__unsafe_offset;
  buf__unsafe_align=__t1731t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1734t=0;
  __t_errcode=str__t1596t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1734t,other__dat__length,other__dat__first,&__t1735t__unsafe_ptr,&__t1735t__dat__pos,&__t1735t__dat__length,&__t1735t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t791t(&__t1735t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5541t=__t1735t__unsafe_ptr;
  *__t5542t=__t1735t__dat__pos;
  *__t5543t=__t1735t__dat__length;
  *__t5544t=__t1735t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1750t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5545t, char** __t5546t, uint64_t* __t5547t, uint64_t* __t5548t, char* __t5549t) {
  int __t1751t=0;
  char* __t1753t__unsafe_ptr=0;
  uint64_t __t1753t__dat__pos=0;
  uint64_t __t1753t__dat__length=0;
  char __t1753t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1755t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1143t();
  __t_errcode=copy_null_terminated__t1726t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1753t__unsafe_ptr,&__t1753t__dat__pos,&__t1753t__dat__length,&__t1753t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1753t__unsafe_ptr;
  str__dat__pos=__t1753t__dat__pos;
  str__dat__length=__t1753t__dat__length;
  str__dat__first=__t1753t__dat__first;
  add__t793t(str__unsafe_ptr,str__dat__pos,&__t1755t__);
  _ret=__t1755t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t791t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5545t=cstr;
  *__t5546t=str__unsafe_ptr;
  *__t5547t=str__dat__pos;
  *__t5548t=str__dat__length;
  *__t5549t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1760t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5550t) {
  goto __t_return;
  __t_return:
  *__t5550t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t5046t(char* unsafe_ptr) {
  int __t5048t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t5049t(const char* path, char** __t5551t) {
  int __t5051t=0;
  char* unsafe_ptr=0;
  char __t5053t__=0;
  char __t5054t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t645t(unsafe_ptr,&__t5053t__);
  not__t42t(__t5053t__,&__t5054t__);
  if(__t5054t__){
  __t_errcode=47;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5046t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5551t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t5056t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t5552t) {
  const char* __t5057t__cstr=0;
  char* __t5057t__str__unsafe_ptr=0;
  uint64_t __t5057t__str__dat__pos=0;
  uint64_t __t5057t__str__dat__length=0;
  char __t5057t__str__dat__first=0;
  const char* __t5059t__=0;
  char* __t5060t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1750t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5057t__cstr,&__t5057t__str__unsafe_ptr,&__t5057t__str__dat__pos,&__t5057t__str__dat__length,&__t5057t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1760t(__t5057t__cstr,__t5057t__str__unsafe_ptr,__t5057t__str__dat__pos,__t5057t__str__dat__length,__t5057t__str__dat__first,&__t5059t__);
  __t_errcode=open__t5049t(__t5059t__,&__t5060t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5046t(__t5060t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5552t=__t5060t__unsafe_ptr;
  
  __t_skip_returns:free__t791t(&__t5057t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t5068t(char** __t5553t, const char** __t5554t) {
  char* f__unsafe_ptr=*__t5553t;
  char __t5069t__=0;
  char __t5070t__=0;
  char* de=0;
  char __t5071t__=0;
  char __t5072t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t645t(f__unsafe_ptr,&__t5069t__);
  not__t42t(__t5069t__,&__t5070t__);
  if(__t5070t__){
  __t_errcode=58;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t645t(de,&__t5071t__);
  not__t42t(__t5071t__,&__t5072t__);
  if(__t5072t__){
  __t_errcode=59;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5553t=f__unsafe_ptr;
  *__t5554t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t5073t(char** __t5555t, char** __t5556t, uint64_t* __t5557t, uint64_t* __t5558t, char* __t5559t) {
  char* f__unsafe_ptr=*__t5555t;
  const char* __t5074t__=0;
  char* __t5075t__unsafe_ptr=0;
  uint64_t __t5075t__dat__pos=0;
  uint64_t __t5075t__dat__length=0;
  char __t5075t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t5068t(&f__unsafe_ptr,&__t5074t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1652t(__t5074t__,&__t5075t__unsafe_ptr,&__t5075t__dat__pos,&__t5075t__dat__length,&__t5075t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5555t=f__unsafe_ptr;
  *__t5556t=__t5075t__unsafe_ptr;
  *__t5557t=__t5075t__dat__pos;
  *__t5558t=__t5075t__dat__length;
  *__t5559t=__t5075t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t5139t(char** __t5560t, uint64_t __t_anon1, char** __t5561t, uint64_t* __t5562t, uint64_t* __t5563t, char* __t5564t) {
  char* data__unsafe_ptr=*__t5560t;
  char* __t5140t__unsafe_ptr=0;
  uint64_t __t5140t__dat__pos=0;
  uint64_t __t5140t__dat__length=0;
  char __t5140t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t5073t(&data__unsafe_ptr,&__t5140t__unsafe_ptr,&__t5140t__dat__pos,&__t5140t__dat__length,&__t5140t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5560t=data__unsafe_ptr;
  *__t5561t=__t5140t__unsafe_ptr;
  *__t5562t=__t5140t__dat__pos;
  *__t5563t=__t5140t__dat__length;
  *__t5564t=__t5140t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1664t(const char* s, char* __t5565t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t5565t=c;
}

static inline __attribute__((always_inline)) void neq__t1666t(char x, char y, char* __t5566t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5566t=z;
}

static inline __attribute__((always_inline)) void eq__t1767t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5567t) {
  uint64_t __t1768t__=0;
  uint64_t n=0;
  uint64_t __t1769t__=0;
  char __t1770t__=0;
  char __t1771t=0;
  char __t1772t__=0;
  char __t1773t=0;
  char z=0;
  len__t1662t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1768t__);
  n=__t1768t__;
  len__t1662t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1769t__);
  neq__t158t(n,__t1769t__,&__t1770t__);
  if(__t1770t__){
  __t1771t=0;
  goto __t_return;
  }
  neq__t1666t(x__dat__first,y__dat__first,&__t1772t__);
  if(__t1772t__){
  __t1773t=0;
  __t1771t=__t1773t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1771t=z;
  goto __t_return;
  __t_return:
  *__t5567t=__t1771t;
}

void eq__t1774t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t5568t) {
  char __t1775t__=0;
  char __t1776t__=0;
  char __t1777t=0;
  char* __t1778t__unsafe_ptr=0;
  uint64_t __t1778t__dat__pos=0;
  uint64_t __t1778t__dat__length=0;
  char __t1778t__dat__first=0;
  char __t1779t__=0;
  char__t1664t(y,&__t1775t__);
  neq__t1666t(x__dat__first,__t1775t__,&__t1776t__);
  if(__t1776t__){
  __t1777t=0;
  goto __t_return;
  }
  str__t1652t(y,&__t1778t__unsafe_ptr,&__t1778t__dat__pos,&__t1778t__dat__length,&__t1778t__dat__first);
  eq__t1767t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1778t__unsafe_ptr,__t1778t__dat__pos,__t1778t__dat__length,__t1778t__dat__first,&__t1779t__);
  __t1777t=__t1779t__;
  goto __t_return;
  __t_return:
  *__t5568t=__t1777t;
}

int unsafe_temp__t1736t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5569t, char** __t5570t, uint64_t* __t5571t, uint64_t* __t5572t, char* __t5573t) {
  int __t1737t=0;
  char* __t1738t__unsafe_ptr=0;
  uint64_t __t1738t__unsafe_size=0;
  uint32_t __t1738t__unsafe_offset=0;
  uint32_t __t1738t__unsafe_align=0;
  uint64_t __t1739t=0;
  uint64_t __t1740t__=0;
  uint64_t __t1741t__=0;
  char* __t1742t__unsafe_ptr=0;
  uint64_t __t1742t__unsafe_size=0;
  uint32_t __t1742t__unsafe_offset=0;
  uint32_t __t1742t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1744t=0;
  char __t1745t__=0;
  char first_character=0;
  uint64_t __t1746t=0;
  char* __t1747t__unsafe_ptr=0;
  uint64_t __t1747t__dat__pos=0;
  uint64_t __t1747t__dat__length=0;
  char __t1747t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1748t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1668t(&__t1738t__unsafe_ptr,&__t1738t__unsafe_size,&__t1738t__unsafe_offset,&__t1738t__unsafe_align);
  __t1739t=1;
  add__t188t(__t1739t,other__dat__length,&__t1740t__);
  add__t188t(__t1740t__,prefix__dat__length,&__t1741t__);
  __t_errcode=alloc__t914t(&__t1738t__unsafe_ptr,&__t1738t__unsafe_size,&__t1738t__unsafe_offset,&__t1738t__unsafe_align,__t1741t__,&__t1742t__unsafe_ptr,&__t1742t__unsafe_size,&__t1742t__unsafe_offset,&__t1742t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1742t__unsafe_ptr;
  buf__unsafe_size=__t1742t__unsafe_size;
  buf__unsafe_offset=__t1742t__unsafe_offset;
  buf__unsafe_align=__t1742t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1744t=0;
  eq__t134t(prefix__dat__length,__t1744t,&__t1745t__);
  if(__t1745t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1746t=0;
  __t_errcode=str__t1596t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1746t,other__dat__length,first_character,&__t1747t__unsafe_ptr,&__t1747t__dat__pos,&__t1747t__dat__length,&__t1747t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1747t__unsafe_ptr;
  str__dat__pos=__t1747t__dat__pos;
  str__dat__length=__t1747t__dat__length;
  str__dat__first=__t1747t__dat__first;
  add__t793t(str__unsafe_ptr,str__dat__pos,&__t1748t__);
  _ret=__t1748t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t791t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5569t=cstr;
  *__t5570t=str__unsafe_ptr;
  *__t5571t=str__dat__pos;
  *__t5572t=str__dat__length;
  *__t5573t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1759t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5574t) {
  goto __t_return;
  __t_return:
  *__t5574t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t4973t(const char* path, char* __t5575t) {
  int __t4975t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t5575t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t4983t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t5576t) {
  int __t4985t=0;
  const char* __t4986t__cstr=0;
  char* __t4986t__str__unsafe_ptr=0;
  uint64_t __t4986t__str__dat__pos=0;
  uint64_t __t4986t__str__dat__length=0;
  char __t4986t__str__dat__first=0;
  const char* __t4988t__=0;
  char __t4989t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1736t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t4986t__cstr,&__t4986t__str__unsafe_ptr,&__t4986t__str__dat__pos,&__t4986t__str__dat__length,&__t4986t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1759t(__t4986t__cstr,__t4986t__str__unsafe_ptr,__t4986t__str__dat__pos,__t4986t__str__dat__length,__t4986t__str__dat__first,&__t4988t__);
  is_dir__t4973t(__t4988t__,&__t4989t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5576t=__t4989t__;
  
  __t_skip_returns:free__t791t(&__t4986t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t409t(uint64_t x, uint64_t y, uint64_t* __t5577t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5577t=z;
}

static inline __attribute__((always_inline)) void reuse__t5334t(char** __t5578t, uint64_t* __t5579t, uint32_t* __t5580t, uint32_t* __t5581t, uint64_t* __t5582t, uint64_t* __t5583t) {
  char* arn__buf__unsafe_ptr=*__t5578t;
  uint64_t arn__buf__unsafe_size=*__t5579t;
  uint32_t arn__buf__unsafe_offset=*__t5580t;
  uint32_t arn__buf__unsafe_align=*__t5581t;
  uint64_t arn__pos=*__t5582t;
  uint64_t __t5335t=0;
  uint64_t __t5336t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5337t=0;
  uint64_t __t5339t__=0;
  __t5335t=0;
  add__t188t(__t5335t,arn__pos,&__t5336t__);
  tracked_position=__t5336t__;
  goto __t_return;
  __t_return:
  *__t5578t=arn__buf__unsafe_ptr;
  *__t5579t=arn__buf__unsafe_size;
  *__t5580t=arn__buf__unsafe_offset;
  *__t5581t=arn__buf__unsafe_align;
  *__t5582t=arn__pos;
  *__t5583t=tracked_position;
}

static inline __attribute__((always_inline)) void str__t1629t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5584t, uint64_t* __t5585t, uint64_t* __t5586t, char* __t5587t) {
  goto __t_return;
  __t_return:
  *__t5584t=other__unsafe_ptr;
  *__t5585t=other__dat__pos;
  *__t5586t=other__dat__length;
  *__t5587t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5588t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5588t=z;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t5589t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5589t=z;
}

static inline __attribute__((always_inline)) void status__t1197t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5590t, uint64_t* __t5591t, uint32_t* __t5592t, uint32_t* __t5593t, uint64_t* __t5594t) {
  char* __t1198t__unsafe_ptr=0;
  uint64_t __t1198t__unsafe_size=0;
  uint32_t __t1198t__unsafe_offset=0;
  uint32_t __t1198t__unsafe_align=0;
  uint64_t __t1199t=0;
  __t1198t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1198t__unsafe_size=self__buf__unsafe_size;
  __t1198t__unsafe_offset=self__buf__unsafe_offset;
  __t1198t__unsafe_align=self__buf__unsafe_align;
  __t1199t=self__pos;
  goto __t_return;
  __t_return:
  *__t5590t=__t1198t__unsafe_ptr;
  *__t5591t=__t1198t__unsafe_size;
  *__t5592t=__t1198t__unsafe_offset;
  *__t5593t=__t1198t__unsafe_align;
  *__t5594t=__t1199t;
}

static inline __attribute__((always_inline)) int copy__t1696t(char** __t5595t, uint64_t* __t5596t, uint32_t* __t5597t, uint32_t* __t5598t, uint64_t* __t5599t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5600t, uint64_t* __t5601t, uint64_t* __t5602t, char* __t5603t) {
  char* CHARS__buf__unsafe_ptr=*__t5595t;
  uint64_t CHARS__buf__unsafe_size=*__t5596t;
  uint32_t CHARS__buf__unsafe_offset=*__t5597t;
  uint32_t CHARS__buf__unsafe_align=*__t5598t;
  uint64_t CHARS__pos=*__t5599t;
  char* __t1697t__unsafe_ptr=0;
  uint64_t __t1697t__dat__pos=0;
  uint64_t __t1697t__dat__length=0;
  char __t1697t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1698t__buf__unsafe_ptr=0;
  uint64_t __t1698t__buf__unsafe_size=0;
  uint32_t __t1698t__buf__unsafe_offset=0;
  uint32_t __t1698t__buf__unsafe_align=0;
  uint64_t __t1698t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1699t=0;
  char* __t1700t__unsafe_ptr=0;
  uint64_t __t1700t__dat__pos=0;
  uint64_t __t1700t__dat__length=0;
  char __t1700t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1629t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1697t__unsafe_ptr,&__t1697t__dat__pos,&__t1697t__dat__length,&__t1697t__dat__first);
  other__unsafe_ptr=__t1697t__unsafe_ptr;
  other__dat__pos=__t1697t__dat__pos;
  other__dat__length=__t1697t__dat__length;
  other__dat__first=__t1697t__dat__first;
  __t_errcode=alloc__t1267t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1698t__buf__unsafe_ptr,&__t1698t__buf__unsafe_size,&__t1698t__buf__unsafe_offset,&__t1698t__buf__unsafe_align,&__t1698t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1698t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1698t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1698t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1698t__buf__unsafe_align;
  surface__pos=__t1698t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1596t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1700t__unsafe_ptr,&__t1700t__dat__pos,&__t1700t__dat__length,&__t1700t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5595t=CHARS__buf__unsafe_ptr;
  *__t5596t=CHARS__buf__unsafe_size;
  *__t5597t=CHARS__buf__unsafe_offset;
  *__t5598t=CHARS__buf__unsafe_align;
  *__t5599t=CHARS__pos;
  *__t5600t=__t1700t__unsafe_ptr;
  *__t5601t=__t1700t__dat__pos;
  *__t5602t=__t1700t__dat__length;
  *__t5603t=__t1700t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1194t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5604t, uint64_t* __t5605t, uint32_t* __t5606t, uint32_t* __t5607t, uint64_t* __t5608t) {
  char* __t1195t__unsafe_ptr=0;
  uint64_t __t1195t__unsafe_size=0;
  uint32_t __t1195t__unsafe_offset=0;
  uint32_t __t1195t__unsafe_align=0;
  uint64_t __t1196t=0;
  __t1195t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1195t__unsafe_size=self__buf__unsafe_size;
  __t1195t__unsafe_offset=self__buf__unsafe_offset;
  __t1195t__unsafe_align=self__buf__unsafe_align;
  __t1196t=self__pos;
  goto __t_return;
  __t_return:
  *__t5604t=__t1195t__unsafe_ptr;
  *__t5605t=__t1195t__unsafe_size;
  *__t5606t=__t1195t__unsafe_offset;
  *__t5607t=__t1195t__unsafe_align;
  *__t5608t=__t1196t;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t5609t) {
  int __t402t__=0;
  int __t403t=0;
  int __t404t=0;
  char __t405t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t109t(x,y,&__t402t__);
  lt__t301t(x,y,&__t405t__);
  if(__t405t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5609t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1648t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5610t, uint64_t* __t5611t, uint64_t* __t5612t, char* __t5613t) {
  uint64_t __t1650t__=0;
  char* __t1651t__unsafe_ptr=0;
  uint64_t __t1651t__dat__pos=0;
  uint64_t __t1651t__dat__length=0;
  char __t1651t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t401t(endpos,pos,&__t1650t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1630t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1650t__,&__t1651t__unsafe_ptr,&__t1651t__dat__pos,&__t1651t__dat__length,&__t1651t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5610t=__t1651t__unsafe_ptr;
  *__t5611t=__t1651t__dat__pos;
  *__t5612t=__t1651t__dat__length;
  *__t5613t=__t1651t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2848t(char** __t5614t, uint64_t* __t5615t, uint32_t* __t5616t, uint32_t* __t5617t, uint64_t* __t5618t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5619t, uint64_t* __t5620t, uint64_t* __t5621t, char* __t5622t) {
  char* CHARS__buf__unsafe_ptr=*__t5614t;
  uint64_t CHARS__buf__unsafe_size=*__t5615t;
  uint32_t CHARS__buf__unsafe_offset=*__t5616t;
  uint32_t CHARS__buf__unsafe_align=*__t5617t;
  uint64_t CHARS__pos=*__t5618t;
  char* __t2849t__unsafe_ptr=0;
  uint64_t __t2849t__dat__pos=0;
  uint64_t __t2849t__dat__length=0;
  char __t2849t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2850t__unsafe_ptr=0;
  uint64_t __t2850t__dat__pos=0;
  uint64_t __t2850t__dat__length=0;
  char __t2850t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2851t__=0;
  uint64_t __t2852t__=0;
  char __t2853t__=0;
  char __t2854t=0;
  uint64_t __t2855t__=0;
  char __t2856t__=0;
  char __t2857t=0;
  uint64_t __t2858t__=0;
  char* __t2859t__buf__unsafe_ptr=0;
  uint64_t __t2859t__buf__unsafe_size=0;
  uint32_t __t2859t__buf__unsafe_offset=0;
  uint32_t __t2859t__buf__unsafe_align=0;
  uint64_t __t2859t__pos=0;
  char* __t2860t____t1198t__unsafe_ptr=0;
  uint64_t __t2860t____t1198t__unsafe_size=0;
  uint32_t __t2860t____t1198t__unsafe_offset=0;
  uint32_t __t2860t____t1198t__unsafe_align=0;
  uint64_t __t2860t____t1199t=0;
  char* __t2861t__buf__unsafe_ptr=0;
  uint64_t __t2861t__buf__unsafe_size=0;
  uint32_t __t2861t__buf__unsafe_offset=0;
  uint32_t __t2861t__buf__unsafe_align=0;
  uint64_t __t2861t__pos=0;
  char* __t2862t__buf__unsafe_ptr=0;
  uint64_t __t2862t__buf__unsafe_size=0;
  uint32_t __t2862t__buf__unsafe_offset=0;
  uint32_t __t2862t__buf__unsafe_align=0;
  uint64_t __t2862t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2863t__unsafe_ptr=0;
  uint64_t __t2863t__dat__pos=0;
  uint64_t __t2863t__dat__length=0;
  char __t2863t__dat__first=0;
  char* __t2864t____t1195t__unsafe_ptr=0;
  uint64_t __t2864t____t1195t__unsafe_size=0;
  uint32_t __t2864t____t1195t__unsafe_offset=0;
  uint32_t __t2864t____t1195t__unsafe_align=0;
  uint64_t __t2864t____t1196t=0;
  uint64_t __t2866t=0;
  uint64_t __t2867t__=0;
  char* __t2868t__unsafe_ptr=0;
  uint64_t __t2868t__dat__pos=0;
  uint64_t __t2868t__dat__length=0;
  char __t2868t__dat__first=0;
  char __t2869t__=0;
  char __t2870t__=0;
  char __t2871t=0;
  uint64_t __t2872t__=0;
  char __t2873t__=0;
  char __t2874t=0;
  uint64_t __t2875t__=0;
  char* __t2877t__unsafe_ptr=0;
  uint64_t __t2877t__dat__pos=0;
  uint64_t __t2877t__dat__length=0;
  char __t2877t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2878t__=0;
  uint64_t __t2879t__=0;
  uint64_t __t2880t__=0;
  char* __t2881t__buf__unsafe_ptr=0;
  uint64_t __t2881t__buf__unsafe_size=0;
  uint32_t __t2881t__buf__unsafe_offset=0;
  uint32_t __t2881t__buf__unsafe_align=0;
  uint64_t __t2881t__pos=0;
  char* __t2882t____t1198t__unsafe_ptr=0;
  uint64_t __t2882t____t1198t__unsafe_size=0;
  uint32_t __t2882t____t1198t__unsafe_offset=0;
  uint32_t __t2882t____t1198t__unsafe_align=0;
  uint64_t __t2882t____t1199t=0;
  char* __t2883t__buf__unsafe_ptr=0;
  uint64_t __t2883t__buf__unsafe_size=0;
  uint32_t __t2883t__buf__unsafe_offset=0;
  uint32_t __t2883t__buf__unsafe_align=0;
  uint64_t __t2883t__pos=0;
  char* __t2884t__buf__unsafe_ptr=0;
  uint64_t __t2884t__buf__unsafe_size=0;
  uint32_t __t2884t__buf__unsafe_offset=0;
  uint32_t __t2884t__buf__unsafe_align=0;
  uint64_t __t2884t__pos=0;
  char* __t2885t__unsafe_ptr=0;
  uint64_t __t2885t__dat__pos=0;
  uint64_t __t2885t__dat__length=0;
  char __t2885t__dat__first=0;
  char* __t2886t__unsafe_ptr=0;
  uint64_t __t2886t__dat__pos=0;
  uint64_t __t2886t__dat__length=0;
  char __t2886t__dat__first=0;
  char __t2887t=0;
  char* __t2888t____t1195t__unsafe_ptr=0;
  uint64_t __t2888t____t1195t__unsafe_size=0;
  uint32_t __t2888t____t1195t__unsafe_offset=0;
  uint32_t __t2888t____t1195t__unsafe_align=0;
  uint64_t __t2888t____t1196t=0;
  uint64_t __t2890t=0;
  uint64_t __t2891t__=0;
  char* __t2892t__unsafe_ptr=0;
  uint64_t __t2892t__dat__pos=0;
  uint64_t __t2892t__dat__length=0;
  char __t2892t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1629t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2849t__unsafe_ptr,&__t2849t__dat__pos,&__t2849t__dat__length,&__t2849t__dat__first);
  s1__unsafe_ptr=__t2849t__unsafe_ptr;
  s1__dat__pos=__t2849t__dat__pos;
  s1__dat__length=__t2849t__dat__length;
  s1__dat__first=__t2849t__dat__first;
  str__t1629t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2850t__unsafe_ptr,&__t2850t__dat__pos,&__t2850t__dat__length,&__t2850t__dat__first);
  s2__unsafe_ptr=__t2850t__unsafe_ptr;
  s2__dat__pos=__t2850t__dat__pos;
  s2__dat__length=__t2850t__dat__length;
  s2__dat__first=__t2850t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2851t__);
  if(__t2851t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2852t__);
  eq__t134t(CHARS__pos,__t2852t__,&__t2853t__);
  __t2854t=__t2853t__;
  }
  if(__t2854t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2855t__);
  lt__t301t(__t2855t__,CHARS__buf__unsafe_size,&__t2856t__);
  __t2857t=__t2856t__;
  }
  if(__t2857t){
  len__t1662t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2858t__);
  __t_errcode=alloc__t1267t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2858t__,&__t2859t__buf__unsafe_ptr,&__t2859t__buf__unsafe_size,&__t2859t__buf__unsafe_offset,&__t2859t__buf__unsafe_align,&__t2859t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1197t(__t2859t__buf__unsafe_ptr,__t2859t__buf__unsafe_size,__t2859t__buf__unsafe_offset,__t2859t__buf__unsafe_align,__t2859t__pos,&__t2860t____t1198t__unsafe_ptr,&__t2860t____t1198t__unsafe_size,&__t2860t____t1198t__unsafe_offset,&__t2860t____t1198t__unsafe_align,&__t2860t____t1199t);
  arena__t1185t(&__t2860t____t1198t__unsafe_ptr,&__t2860t____t1198t__unsafe_size,&__t2860t____t1198t__unsafe_offset,&__t2860t____t1198t__unsafe_align,__t2860t____t1199t,&__t2861t__buf__unsafe_ptr,&__t2861t__buf__unsafe_size,&__t2861t__buf__unsafe_offset,&__t2861t__buf__unsafe_align,&__t2861t__pos);
  __t2862t__buf__unsafe_ptr=__t2861t__buf__unsafe_ptr;
  __t2862t__buf__unsafe_size=__t2861t__buf__unsafe_size;
  __t2862t__buf__unsafe_offset=__t2861t__buf__unsafe_offset;
  __t2862t__buf__unsafe_align=__t2861t__buf__unsafe_align;
  __t2862t__pos=__t2861t__pos;
  surface__buf__unsafe_ptr=__t2862t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2862t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2862t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2862t__buf__unsafe_align;
  surface__pos=__t2862t__pos;
  __t_errcode=copy__t1696t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2863t__unsafe_ptr,&__t2863t__dat__pos,&__t2863t__dat__length,&__t2863t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1194t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2864t____t1195t__unsafe_ptr,&__t2864t____t1195t__unsafe_size,&__t2864t____t1195t__unsafe_offset,&__t2864t____t1195t__unsafe_align,&__t2864t____t1196t);
  __t2866t=0;
  add__t188t(s1__dat__pos,__t2866t,&__t2867t__);
  __t_errcode=str__t1648t(__t2864t____t1195t__unsafe_ptr,__t2864t____t1195t__unsafe_size,__t2864t____t1195t__unsafe_offset,__t2864t____t1195t__unsafe_align,__t2864t____t1196t,__t2867t__,&__t2868t__unsafe_ptr,&__t2868t__dat__pos,&__t2868t__dat__length,&__t2868t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2869t__);
  if(__t2869t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2870t__);
  __t2871t=__t2870t__;
  }
  if(__t2871t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2872t__);
  eq__t134t(s2__dat__pos,__t2872t__,&__t2873t__);
  __t2874t=__t2873t__;
  }
  if(__t2874t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2875t__);
  __t_errcode=str__t1648t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2875t__,s1__dat__pos,&__t2877t__unsafe_ptr,&__t2877t__dat__pos,&__t2877t__dat__length,&__t2877t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2868t__unsafe_ptr=__t2877t__unsafe_ptr;
  __t2868t__dat__pos=__t2877t__dat__pos;
  __t2868t__dat__length=__t2877t__dat__length;
  __t2868t__dat__first=__t2877t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1662t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2878t__);
  len__t1662t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2879t__);
  add__t188t(__t2878t__,__t2879t__,&__t2880t__);
  __t_errcode=alloc__t1267t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2880t__,&__t2881t__buf__unsafe_ptr,&__t2881t__buf__unsafe_size,&__t2881t__buf__unsafe_offset,&__t2881t__buf__unsafe_align,&__t2881t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1197t(__t2881t__buf__unsafe_ptr,__t2881t__buf__unsafe_size,__t2881t__buf__unsafe_offset,__t2881t__buf__unsafe_align,__t2881t__pos,&__t2882t____t1198t__unsafe_ptr,&__t2882t____t1198t__unsafe_size,&__t2882t____t1198t__unsafe_offset,&__t2882t____t1198t__unsafe_align,&__t2882t____t1199t);
  arena__t1185t(&__t2882t____t1198t__unsafe_ptr,&__t2882t____t1198t__unsafe_size,&__t2882t____t1198t__unsafe_offset,&__t2882t____t1198t__unsafe_align,__t2882t____t1199t,&__t2883t__buf__unsafe_ptr,&__t2883t__buf__unsafe_size,&__t2883t__buf__unsafe_offset,&__t2883t__buf__unsafe_align,&__t2883t__pos);
  __t2884t__buf__unsafe_ptr=__t2883t__buf__unsafe_ptr;
  __t2884t__buf__unsafe_size=__t2883t__buf__unsafe_size;
  __t2884t__buf__unsafe_offset=__t2883t__buf__unsafe_offset;
  __t2884t__buf__unsafe_align=__t2883t__buf__unsafe_align;
  __t2884t__pos=__t2883t__pos;
  surface__buf__unsafe_ptr=__t2884t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2884t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2884t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2884t__buf__unsafe_align;
  surface__pos=__t2884t__pos;
  __t_errcode=copy__t1696t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2885t__unsafe_ptr,&__t2885t__dat__pos,&__t2885t__dat__length,&__t2885t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1696t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2886t__unsafe_ptr,&__t2886t__dat__pos,&__t2886t__dat__length,&__t2886t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1194t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2888t____t1195t__unsafe_ptr,&__t2888t____t1195t__unsafe_size,&__t2888t____t1195t__unsafe_offset,&__t2888t____t1195t__unsafe_align,&__t2888t____t1196t);
  __t2890t=0;
  add__t188t(prev_pos,__t2890t,&__t2891t__);
  __t_complain=str__t1648t(__t2888t____t1195t__unsafe_ptr,__t2888t____t1195t__unsafe_size,__t2888t____t1195t__unsafe_offset,__t2888t____t1195t__unsafe_align,__t2888t____t1196t,__t2891t__,&__t2892t__unsafe_ptr,&__t2892t__dat__pos,&__t2892t__dat__length,&__t2892t__dat__first);
  __t2887t=__t_complain;
  if(__t_complain){
  goto __t2887t__label;
  }
  ret__unsafe_ptr=__t2892t__unsafe_ptr;
  ret__dat__pos=__t2892t__dat__pos;
  ret__dat__length=__t2892t__dat__length;
  ret__dat__first=__t2892t__dat__first;
  __t2887t__label:__t2887t=__t2887t==0;
  __t2868t__unsafe_ptr=ret__unsafe_ptr;
  __t2868t__dat__pos=ret__dat__pos;
  __t2868t__dat__length=ret__dat__length;
  __t2868t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5614t=CHARS__buf__unsafe_ptr;
  *__t5615t=CHARS__buf__unsafe_size;
  *__t5616t=CHARS__buf__unsafe_offset;
  *__t5617t=CHARS__buf__unsafe_align;
  *__t5618t=CHARS__pos;
  *__t5619t=__t2868t__unsafe_ptr;
  *__t5620t=__t2868t__dat__pos;
  *__t5621t=__t2868t__dat__length;
  *__t5622t=__t2868t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2893t(char** __t5623t, uint64_t* __t5624t, uint32_t* __t5625t, uint32_t* __t5626t, uint64_t* __t5627t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5628t, uint64_t* __t5629t, uint64_t* __t5630t, char* __t5631t) {
  char* CHARS__buf__unsafe_ptr=*__t5623t;
  uint64_t CHARS__buf__unsafe_size=*__t5624t;
  uint32_t CHARS__buf__unsafe_offset=*__t5625t;
  uint32_t CHARS__buf__unsafe_align=*__t5626t;
  uint64_t CHARS__pos=*__t5627t;
  char* __t2894t__unsafe_ptr=0;
  uint64_t __t2894t__dat__pos=0;
  uint64_t __t2894t__dat__length=0;
  char __t2894t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2895t__unsafe_ptr=0;
  uint64_t __t2895t__dat__pos=0;
  uint64_t __t2895t__dat__length=0;
  char __t2895t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2896t__=0;
  uint64_t __t2897t__=0;
  char __t2898t__=0;
  char __t2899t=0;
  uint64_t __t2900t__=0;
  char __t2901t__=0;
  char __t2902t=0;
  uint64_t __t2903t__=0;
  char* __t2904t__buf__unsafe_ptr=0;
  uint64_t __t2904t__buf__unsafe_size=0;
  uint32_t __t2904t__buf__unsafe_offset=0;
  uint32_t __t2904t__buf__unsafe_align=0;
  uint64_t __t2904t__pos=0;
  char* __t2905t____t1198t__unsafe_ptr=0;
  uint64_t __t2905t____t1198t__unsafe_size=0;
  uint32_t __t2905t____t1198t__unsafe_offset=0;
  uint32_t __t2905t____t1198t__unsafe_align=0;
  uint64_t __t2905t____t1199t=0;
  char* __t2906t__buf__unsafe_ptr=0;
  uint64_t __t2906t__buf__unsafe_size=0;
  uint32_t __t2906t__buf__unsafe_offset=0;
  uint32_t __t2906t__buf__unsafe_align=0;
  uint64_t __t2906t__pos=0;
  char* __t2907t__buf__unsafe_ptr=0;
  uint64_t __t2907t__buf__unsafe_size=0;
  uint32_t __t2907t__buf__unsafe_offset=0;
  uint32_t __t2907t__buf__unsafe_align=0;
  uint64_t __t2907t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2908t__unsafe_ptr=0;
  uint64_t __t2908t__dat__pos=0;
  uint64_t __t2908t__dat__length=0;
  char __t2908t__dat__first=0;
  char* __t2909t____t1195t__unsafe_ptr=0;
  uint64_t __t2909t____t1195t__unsafe_size=0;
  uint32_t __t2909t____t1195t__unsafe_offset=0;
  uint32_t __t2909t____t1195t__unsafe_align=0;
  uint64_t __t2909t____t1196t=0;
  uint64_t __t2911t=0;
  uint64_t __t2912t__=0;
  char* __t2913t__unsafe_ptr=0;
  uint64_t __t2913t__dat__pos=0;
  uint64_t __t2913t__dat__length=0;
  char __t2913t__dat__first=0;
  char __t2914t__=0;
  char __t2915t__=0;
  char __t2916t=0;
  uint64_t __t2917t__=0;
  char __t2918t__=0;
  char __t2919t=0;
  uint64_t __t2920t__=0;
  char* __t2922t__unsafe_ptr=0;
  uint64_t __t2922t__dat__pos=0;
  uint64_t __t2922t__dat__length=0;
  char __t2922t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2923t__=0;
  uint64_t __t2924t__=0;
  uint64_t __t2925t__=0;
  char* __t2926t__buf__unsafe_ptr=0;
  uint64_t __t2926t__buf__unsafe_size=0;
  uint32_t __t2926t__buf__unsafe_offset=0;
  uint32_t __t2926t__buf__unsafe_align=0;
  uint64_t __t2926t__pos=0;
  char* __t2927t____t1198t__unsafe_ptr=0;
  uint64_t __t2927t____t1198t__unsafe_size=0;
  uint32_t __t2927t____t1198t__unsafe_offset=0;
  uint32_t __t2927t____t1198t__unsafe_align=0;
  uint64_t __t2927t____t1199t=0;
  char* __t2928t__buf__unsafe_ptr=0;
  uint64_t __t2928t__buf__unsafe_size=0;
  uint32_t __t2928t__buf__unsafe_offset=0;
  uint32_t __t2928t__buf__unsafe_align=0;
  uint64_t __t2928t__pos=0;
  char* __t2929t__buf__unsafe_ptr=0;
  uint64_t __t2929t__buf__unsafe_size=0;
  uint32_t __t2929t__buf__unsafe_offset=0;
  uint32_t __t2929t__buf__unsafe_align=0;
  uint64_t __t2929t__pos=0;
  char* __t2930t__unsafe_ptr=0;
  uint64_t __t2930t__dat__pos=0;
  uint64_t __t2930t__dat__length=0;
  char __t2930t__dat__first=0;
  char* __t2931t__unsafe_ptr=0;
  uint64_t __t2931t__dat__pos=0;
  uint64_t __t2931t__dat__length=0;
  char __t2931t__dat__first=0;
  char __t2932t=0;
  char* __t2933t____t1195t__unsafe_ptr=0;
  uint64_t __t2933t____t1195t__unsafe_size=0;
  uint32_t __t2933t____t1195t__unsafe_offset=0;
  uint32_t __t2933t____t1195t__unsafe_align=0;
  uint64_t __t2933t____t1196t=0;
  uint64_t __t2935t=0;
  uint64_t __t2936t__=0;
  char* __t2937t__unsafe_ptr=0;
  uint64_t __t2937t__dat__pos=0;
  uint64_t __t2937t__dat__length=0;
  char __t2937t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1629t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2894t__unsafe_ptr,&__t2894t__dat__pos,&__t2894t__dat__length,&__t2894t__dat__first);
  s1__unsafe_ptr=__t2894t__unsafe_ptr;
  s1__dat__pos=__t2894t__dat__pos;
  s1__dat__length=__t2894t__dat__length;
  s1__dat__first=__t2894t__dat__first;
  str__t1652t(_s2,&__t2895t__unsafe_ptr,&__t2895t__dat__pos,&__t2895t__dat__length,&__t2895t__dat__first);
  s2__unsafe_ptr=__t2895t__unsafe_ptr;
  s2__dat__pos=__t2895t__dat__pos;
  s2__dat__length=__t2895t__dat__length;
  s2__dat__first=__t2895t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2896t__);
  if(__t2896t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2897t__);
  eq__t134t(CHARS__pos,__t2897t__,&__t2898t__);
  __t2899t=__t2898t__;
  }
  if(__t2899t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2900t__);
  lt__t301t(__t2900t__,CHARS__buf__unsafe_size,&__t2901t__);
  __t2902t=__t2901t__;
  }
  if(__t2902t){
  len__t1662t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2903t__);
  __t_errcode=alloc__t1267t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2903t__,&__t2904t__buf__unsafe_ptr,&__t2904t__buf__unsafe_size,&__t2904t__buf__unsafe_offset,&__t2904t__buf__unsafe_align,&__t2904t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1197t(__t2904t__buf__unsafe_ptr,__t2904t__buf__unsafe_size,__t2904t__buf__unsafe_offset,__t2904t__buf__unsafe_align,__t2904t__pos,&__t2905t____t1198t__unsafe_ptr,&__t2905t____t1198t__unsafe_size,&__t2905t____t1198t__unsafe_offset,&__t2905t____t1198t__unsafe_align,&__t2905t____t1199t);
  arena__t1185t(&__t2905t____t1198t__unsafe_ptr,&__t2905t____t1198t__unsafe_size,&__t2905t____t1198t__unsafe_offset,&__t2905t____t1198t__unsafe_align,__t2905t____t1199t,&__t2906t__buf__unsafe_ptr,&__t2906t__buf__unsafe_size,&__t2906t__buf__unsafe_offset,&__t2906t__buf__unsafe_align,&__t2906t__pos);
  __t2907t__buf__unsafe_ptr=__t2906t__buf__unsafe_ptr;
  __t2907t__buf__unsafe_size=__t2906t__buf__unsafe_size;
  __t2907t__buf__unsafe_offset=__t2906t__buf__unsafe_offset;
  __t2907t__buf__unsafe_align=__t2906t__buf__unsafe_align;
  __t2907t__pos=__t2906t__pos;
  surface__buf__unsafe_ptr=__t2907t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2907t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2907t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2907t__buf__unsafe_align;
  surface__pos=__t2907t__pos;
  __t_errcode=copy__t1696t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2908t__unsafe_ptr,&__t2908t__dat__pos,&__t2908t__dat__length,&__t2908t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1194t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2909t____t1195t__unsafe_ptr,&__t2909t____t1195t__unsafe_size,&__t2909t____t1195t__unsafe_offset,&__t2909t____t1195t__unsafe_align,&__t2909t____t1196t);
  __t2911t=0;
  add__t188t(s1__dat__pos,__t2911t,&__t2912t__);
  __t_errcode=str__t1648t(__t2909t____t1195t__unsafe_ptr,__t2909t____t1195t__unsafe_size,__t2909t____t1195t__unsafe_offset,__t2909t____t1195t__unsafe_align,__t2909t____t1196t,__t2912t__,&__t2913t__unsafe_ptr,&__t2913t__dat__pos,&__t2913t__dat__length,&__t2913t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2914t__);
  if(__t2914t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2915t__);
  __t2916t=__t2915t__;
  }
  if(__t2916t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2917t__);
  eq__t134t(s2__dat__pos,__t2917t__,&__t2918t__);
  __t2919t=__t2918t__;
  }
  if(__t2919t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2920t__);
  __t_errcode=str__t1648t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2920t__,s1__dat__pos,&__t2922t__unsafe_ptr,&__t2922t__dat__pos,&__t2922t__dat__length,&__t2922t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2913t__unsafe_ptr=__t2922t__unsafe_ptr;
  __t2913t__dat__pos=__t2922t__dat__pos;
  __t2913t__dat__length=__t2922t__dat__length;
  __t2913t__dat__first=__t2922t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1662t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2923t__);
  len__t1662t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2924t__);
  add__t188t(__t2923t__,__t2924t__,&__t2925t__);
  __t_errcode=alloc__t1267t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2925t__,&__t2926t__buf__unsafe_ptr,&__t2926t__buf__unsafe_size,&__t2926t__buf__unsafe_offset,&__t2926t__buf__unsafe_align,&__t2926t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1197t(__t2926t__buf__unsafe_ptr,__t2926t__buf__unsafe_size,__t2926t__buf__unsafe_offset,__t2926t__buf__unsafe_align,__t2926t__pos,&__t2927t____t1198t__unsafe_ptr,&__t2927t____t1198t__unsafe_size,&__t2927t____t1198t__unsafe_offset,&__t2927t____t1198t__unsafe_align,&__t2927t____t1199t);
  arena__t1185t(&__t2927t____t1198t__unsafe_ptr,&__t2927t____t1198t__unsafe_size,&__t2927t____t1198t__unsafe_offset,&__t2927t____t1198t__unsafe_align,__t2927t____t1199t,&__t2928t__buf__unsafe_ptr,&__t2928t__buf__unsafe_size,&__t2928t__buf__unsafe_offset,&__t2928t__buf__unsafe_align,&__t2928t__pos);
  __t2929t__buf__unsafe_ptr=__t2928t__buf__unsafe_ptr;
  __t2929t__buf__unsafe_size=__t2928t__buf__unsafe_size;
  __t2929t__buf__unsafe_offset=__t2928t__buf__unsafe_offset;
  __t2929t__buf__unsafe_align=__t2928t__buf__unsafe_align;
  __t2929t__pos=__t2928t__pos;
  surface__buf__unsafe_ptr=__t2929t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2929t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2929t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2929t__buf__unsafe_align;
  surface__pos=__t2929t__pos;
  __t_errcode=copy__t1696t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2930t__unsafe_ptr,&__t2930t__dat__pos,&__t2930t__dat__length,&__t2930t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1696t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2931t__unsafe_ptr,&__t2931t__dat__pos,&__t2931t__dat__length,&__t2931t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1194t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2933t____t1195t__unsafe_ptr,&__t2933t____t1195t__unsafe_size,&__t2933t____t1195t__unsafe_offset,&__t2933t____t1195t__unsafe_align,&__t2933t____t1196t);
  __t2935t=0;
  add__t188t(prev_pos,__t2935t,&__t2936t__);
  __t_complain=str__t1648t(__t2933t____t1195t__unsafe_ptr,__t2933t____t1195t__unsafe_size,__t2933t____t1195t__unsafe_offset,__t2933t____t1195t__unsafe_align,__t2933t____t1196t,__t2936t__,&__t2937t__unsafe_ptr,&__t2937t__dat__pos,&__t2937t__dat__length,&__t2937t__dat__first);
  __t2932t=__t_complain;
  if(__t_complain){
  goto __t2932t__label;
  }
  ret__unsafe_ptr=__t2937t__unsafe_ptr;
  ret__dat__pos=__t2937t__dat__pos;
  ret__dat__length=__t2937t__dat__length;
  ret__dat__first=__t2937t__dat__first;
  __t2932t__label:__t2932t=__t2932t==0;
  __t2913t__unsafe_ptr=ret__unsafe_ptr;
  __t2913t__dat__pos=ret__dat__pos;
  __t2913t__dat__length=ret__dat__length;
  __t2913t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5623t=CHARS__buf__unsafe_ptr;
  *__t5624t=CHARS__buf__unsafe_size;
  *__t5625t=CHARS__buf__unsafe_offset;
  *__t5626t=CHARS__buf__unsafe_align;
  *__t5627t=CHARS__pos;
  *__t5628t=__t2913t__unsafe_ptr;
  *__t5629t=__t2913t__dat__pos;
  *__t5630t=__t2913t__dat__length;
  *__t5631t=__t2913t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1837t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t5632t) {
  int __t1838t=0;
  char __t1839t__=0;
  uint64_t __t1840t__=0;
  char* __t1841t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,s__dat__length,&__t1839t__);
  if(__t1839t__){
  __t_errcode=20;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t1840t__);
  add__t793t(s__unsafe_ptr,__t1840t__,&__t1841t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5632t=__t1841t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1863t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t5633t, uint64_t* __t5634t, uint64_t* __t5635t, char* __t5636t) {
  char* __t1864t__unsafe_ptr=0;
  uint64_t __t1864t__dat__pos=0;
  uint64_t __t1864t__dat__length=0;
  char __t1864t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1865t__=0;
  char* __t1866t__unsafe_ptr=0;
  uint64_t __t1866t__dat__pos=0;
  uint64_t __t1866t__dat__length=0;
  char __t1866t__dat__first=0;
  char __t1867t__=0;
  char __t1868t__=0;
  char __t1869t=0;
  char __t1870t__=0;
  uint64_t __t1872t__=0;
  uint64_t new_length=0;
  uint64_t __t1873t=0;
  char __t1874t__=0;
  char new_first=0;
  char* __t1876t__=0;
  char __t1877t__value=0;
  uint64_t __t1878t__=0;
  char* __t1879t__unsafe_ptr=0;
  uint64_t __t1879t__dat__pos=0;
  uint64_t __t1879t__dat__length=0;
  char __t1879t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1629t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1864t__unsafe_ptr,&__t1864t__dat__pos,&__t1864t__dat__length,&__t1864t__dat__first);
  s__unsafe_ptr=__t1864t__unsafe_ptr;
  s__dat__pos=__t1864t__dat__pos;
  s__dat__length=__t1864t__dat__length;
  s__dat__first=__t1864t__dat__first;
  eq__t134t(from,to,&__t1865t__);
  if(__t1865t__){
  str__t1652t(__t431t,&__t1866t__unsafe_ptr,&__t1866t__dat__pos,&__t1866t__dat__length,&__t1866t__dat__first);
  goto __t_return;
  }
  gt__t325t(from,to,&__t1867t__);
  if(!__t1867t__){
  gt__t325t(to,s__dat__length,&__t1868t__);
  __t1869t=__t1868t__;
  }
  else{
  __t1869t=0;
  not__t42t(__t1869t,&__t1870t__);
  __t1869t=__t1870t__;
  }
  if(__t1869t){
  __t_errcode=27;
  goto __t_failure;
  }
  sub__t409t(to,from,&__t1872t__);
  new_length=__t1872t__;
  __t1873t=0;
  neq__t158t(from,__t1873t,&__t1874t__);
  if(__t1874t__){
  __t_errcode=get__t1837t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1876t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1876t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1877t__value,__t1876t__,1);
  new_first=__t1877t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1878t__);
  str__t1592t(s__unsafe_ptr,__t1878t__,new_length,new_first,&__t1879t__unsafe_ptr,&__t1879t__dat__pos,&__t1879t__dat__length,&__t1879t__dat__first);
  __t1866t__unsafe_ptr=__t1879t__unsafe_ptr;
  __t1866t__dat__pos=__t1879t__dat__pos;
  __t1866t__dat__length=__t1879t__dat__length;
  __t1866t__dat__first=__t1879t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5633t=__t1866t__unsafe_ptr;
  *__t5634t=__t1866t__dat__pos;
  *__t5635t=__t1866t__dat__length;
  *__t5636t=__t1866t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1942t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5637t) {
  char* __t1943t__unsafe_ptr=0;
  uint64_t __t1943t__dat__pos=0;
  uint64_t __t1943t__dat__length=0;
  char __t1943t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1944t__unsafe_ptr=0;
  uint64_t __t1944t__dat__pos=0;
  uint64_t __t1944t__dat__length=0;
  char __t1944t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t1945t=0;
  uint64_t __t1946t__=0;
  uint64_t d=0;
  char __t1947t__=0;
  char __t1948t=0;
  char* __t1949t__unsafe_ptr=0;
  uint64_t __t1949t__dat__pos=0;
  uint64_t __t1949t__dat__length=0;
  char __t1949t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1950t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1629t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1943t__unsafe_ptr,&__t1943t__dat__pos,&__t1943t__dat__length,&__t1943t__dat__first);
  stack__unsafe_ptr=__t1943t__unsafe_ptr;
  stack__dat__pos=__t1943t__dat__pos;
  stack__dat__length=__t1943t__dat__length;
  stack__dat__first=__t1943t__dat__first;
  str__t1652t(_needle,&__t1944t__unsafe_ptr,&__t1944t__dat__pos,&__t1944t__dat__length,&__t1944t__dat__first);
  needle__unsafe_ptr=__t1944t__unsafe_ptr;
  needle__dat__pos=__t1944t__dat__pos;
  needle__dat__length=__t1944t__dat__length;
  needle__dat__first=__t1944t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t401t(n,needle__dat__length,&__t1946t__);
  __t1945t=__t_complain;
  if(__t_complain){
  goto __t1945t__label;
  }
  d=__t1946t__;
  __t1945t__label:__t1945t=__t1945t==0;
  not__t42t(__t1945t,&__t1947t__);
  if(__t1947t__){
  __t1948t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1863t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t1949t__unsafe_ptr,&__t1949t__dat__pos,&__t1949t__dat__length,&__t1949t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1949t__unsafe_ptr;
  ret__dat__pos=__t1949t__dat__pos;
  ret__dat__length=__t1949t__dat__length;
  ret__dat__first=__t1949t__dat__first;
  eq__t1767t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1950t__);
  __t1948t=__t1950t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5637t=__t1948t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t726t(uint64_t to, uint64_t* __t5638t, uint64_t* __t5639t) {
  uint64_t __t727t=0;
  __t727t=0;
  goto __t_return;
  __t_return:
  *__t5638t=__t727t;
  *__t5639t=to;
}

static inline __attribute__((always_inline)) void range__t743t(uint64_t _from, uint64_t to, uint64_t* __t5640t, uint64_t* __t5641t) {
  uint64_t __t744t=0;
  uint64_t __t745t__=0;
  uint64_t __t746t=0;
  uint64_t from=0;
  __t744t=0;
  add__t188t(__t744t,_from,&__t745t__);
  __t746t=__t745t__;
  from=__t746t;
  goto __t_return;
  __t_return:
  *__t5640t=from;
  *__t5641t=to;
}

static inline __attribute__((always_inline)) int mutget__t748t(uint64_t* __t5642t, uint64_t r__to, uint64_t skipped, uint64_t* __t5643t) {
  uint64_t r__from=*__t5642t;
  char __t749t__=0;
  uint64_t ret=0;
  uint64_t __t750t=0;
  uint64_t __t751t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(r__from,r__to,&__t749t__);
  if(__t749t__){
  __t_errcode=14;
  goto __t_failure;
  }
  ret=r__from;
  __t750t=1;
  add__t188t(ret,__t750t,&__t751t__);
  r__from=__t751t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5642t=r__from;
  *__t5643t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2028t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5644t) {
  char* __t2029t__unsafe_ptr=0;
  uint64_t __t2029t__dat__pos=0;
  uint64_t __t2029t__dat__length=0;
  char __t2029t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2030t__unsafe_ptr=0;
  uint64_t __t2030t__dat__pos=0;
  uint64_t __t2030t__dat__length=0;
  char __t2030t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t2031t=0;
  uint64_t __t2032t__=0;
  uint64_t n=0;
  char __t2033t__=0;
  char __t2034t=0;
  uint64_t __t2035t=0;
  uint64_t __t2036t____t727t=0;
  uint64_t __t2036t__to=0;
  uint64_t __t2037t__from=0;
  uint64_t __t2037t__to=0;
  char __t2038t=0;
  uint64_t __t2039t__=0;
  uint64_t i=0;
  char __t2040t=0;
  uint64_t __t2041t__=0;
  char* __t2042t__unsafe_ptr=0;
  uint64_t __t2042t__dat__pos=0;
  uint64_t __t2042t__dat__length=0;
  char __t2042t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t2043t__=0;
  char __t2044t=0;
  char __t2045t=0;
  int __t_complain=0;
  str__t1629t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2029t__unsafe_ptr,&__t2029t__dat__pos,&__t2029t__dat__length,&__t2029t__dat__first);
  stack__unsafe_ptr=__t2029t__unsafe_ptr;
  stack__dat__pos=__t2029t__dat__pos;
  stack__dat__length=__t2029t__dat__length;
  stack__dat__first=__t2029t__dat__first;
  str__t1652t(_needle,&__t2030t__unsafe_ptr,&__t2030t__dat__pos,&__t2030t__dat__length,&__t2030t__dat__first);
  needle__unsafe_ptr=__t2030t__unsafe_ptr;
  needle__dat__pos=__t2030t__dat__pos;
  needle__dat__length=__t2030t__dat__length;
  needle__dat__first=__t2030t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t401t(stack__dat__length,d,&__t2032t__);
  __t2031t=__t_complain;
  if(__t_complain){
  goto __t2031t__label;
  }
  n=__t2032t__;
  __t2031t__label:__t2031t=__t2031t==0;
  not__t42t(__t2031t,&__t2033t__);
  if(__t2033t__){
  __t2034t=0;
  goto __t_return;
  }
  of__t726t(n,&__t2036t____t727t,&__t2036t__to);
  range__t743t(__t2036t____t727t,__t2036t__to,&__t2037t__from,&__t2037t__to);
  __t2035t=0-1;
  while(1){
  __t2035t=__t2035t+1;
  __t_complain=mutget__t748t(&__t2037t__from,__t2037t__to,__t2035t,&__t2039t__);
  __t2038t=__t_complain;
  if(__t_complain){
  goto __t2038t__label;
  }
  i=__t2039t__;
  __t2038t__label:__t2038t=__t2038t==0;
  if(!__t2038t){
  break;
  }
  add__t188t(i,d,&__t2041t__);
  __t_complain=slice__t1863t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t2041t__,&__t2042t__unsafe_ptr,&__t2042t__dat__pos,&__t2042t__dat__length,&__t2042t__dat__first);
  __t2040t=__t_complain;
  if(__t_complain){
  goto __t2040t__label;
  }
  sliced__unsafe_ptr=__t2042t__unsafe_ptr;
  sliced__dat__pos=__t2042t__dat__pos;
  sliced__dat__length=__t2042t__dat__length;
  sliced__dat__first=__t2042t__dat__first;
  __t2040t__label:__t2040t=__t2040t==0;
  eq__t1767t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2043t__);
  if(__t2043t__){
  __t2044t=1;
  __t2034t=__t2044t;
  goto __t_return;
  }
  }
  __t2045t=0;
  __t2034t=__t2045t;
  goto __t_return;
  __t_return:
  *__t5644t=__t2034t;
}

static inline __attribute__((always_inline)) void restore_stdout__t5253t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
}

static inline __attribute__((always_inline)) void stdout_to_err__t5254t(int64_t* __t5645t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5645t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t1831t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1832t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void popen__t4217t(const char* cmd, char** __t5646t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t5646t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4216t(char* unsafe_ptr, int64_t* __t5647t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t5647t=status;
}

static inline __attribute__((always_inline)) void int__t626t(uint64_t x, int64_t* __t5648t) {
  int __t627t=0;
  int __t628t=0;
  int __t629t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5648t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t5649t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t5649t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t5650t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5650t=z;
}

static inline __attribute__((always_inline)) int open__t4218t(const char* cmd, char** __t5651t) {
  char* __t4219t__=0;
  char* unsafe_ptr=0;
  char __t4220t__=0;
  char __t4221t__=0;
  char __t4222t__=0;
  int64_t __t4223t__=0;
  int64_t status=0;
  uint64_t __t4224t=0;
  int64_t __t4225t__=0;
  char __t4226t__=0;
  char __t4227t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4217t(cmd,&__t4219t__);
  unsafe_ptr=__t4219t__;
  exists__t645t(unsafe_ptr,&__t4220t__);
  not__t42t(__t4220t__,&__t4221t__);
  if(__t4221t__){
  __t_errcode=42;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t645t(unsafe_ptr,&__t4222t__);
  if(__t4222t__){
  pclose__t4216t(unsafe_ptr,&__t4223t__);
  status=__t4223t__;
  unsafe_ptr=0;
  __t4224t=0;
  int__t626t(__t4224t,&__t4225t__);
  neq__t147t(status,__t4225t__,&__t4226t__);
  if(__t4226t__){
  __t_complain=43;
  goto __t4227t__label;
  __t4227t__label:__t4227t=__t4227t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5651t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4229t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t5652t) {
  const char* __t4230t__cstr=0;
  char* __t4230t__str__unsafe_ptr=0;
  uint64_t __t4230t__str__dat__pos=0;
  uint64_t __t4230t__str__dat__length=0;
  char __t4230t__str__dat__first=0;
  const char* __t4232t__=0;
  char* __t4233t__unsafe_ptr=0;
  char __t4234t____t4222t__=0;
  int64_t __t4234t____t4223t__=0;
  int64_t __t4234t__status=0;
  uint64_t __t4234t____t4224t=0;
  int64_t __t4234t____t4225t__=0;
  char __t4234t____t4226t__=0;
  char __t4234t____t4227t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1750t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4230t__cstr,&__t4230t__str__unsafe_ptr,&__t4230t__str__dat__pos,&__t4230t__str__dat__length,&__t4230t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1760t(__t4230t__cstr,__t4230t__str__unsafe_ptr,__t4230t__str__dat__pos,__t4230t__str__dat__length,__t4230t__str__dat__first,&__t4232t__);
  __t_errcode=open__t4218t(__t4232t__,&__t4233t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t645t(__t4233t__unsafe_ptr,&__t4234t____t4222t__);
  if(__t4234t____t4222t__){
  pclose__t4216t(__t4233t__unsafe_ptr,&__t4234t____t4223t__);
  __t4234t__status=__t4234t____t4223t__;
  __t4233t__unsafe_ptr=0;
  __t4234t____t4224t=0;
  int__t626t(__t4234t____t4224t,&__t4234t____t4225t__);
  neq__t147t(__t4234t__status,__t4234t____t4225t__,&__t4234t____t4226t__);
  if(__t4234t____t4226t__){
  __t_complain=43;
  goto __t4227t__label;
  __t4227t__label:__t4234t____t4227t=__t4234t____t4227t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5652t=__t4233t__unsafe_ptr;
  
  __t_skip_returns:free__t791t(&__t4230t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4191t(int64_t value, char* __t5653t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t5653t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4190t(int64_t value, const char** __t5654t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5654t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t5655t) {
  const char* value=0;
  *__t5655t=value;
}

int run__t5181t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t5656t) {
  char* __t5182t__unsafe_ptr=0;
  char __t5183t____t4234t____t4222t__=0;
  int64_t __t5183t____t4234t____t4223t__=0;
  int64_t __t5183t____t4234t__status=0;
  uint64_t __t5183t____t4234t____t4224t=0;
  int64_t __t5183t____t4234t____t4225t__=0;
  char __t5183t____t4234t____t4226t__=0;
  char __t5183t____t4234t____t4227t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t5184t=0;
  int64_t error=0;
  char __t5185t__=0;
  char __t5186t__=0;
  const char* __t5187t__=0;
  const char* __t5188t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4229t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5182t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t5182t__unsafe_ptr;
  exists__t645t(__t5182t__unsafe_ptr,&__t5183t____t4234t____t4222t__);
  if(__t5183t____t4234t____t4222t__){
  pclose__t4216t(__t5182t__unsafe_ptr,&__t5183t____t4234t____t4223t__);
  __t5183t____t4234t__status=__t5183t____t4234t____t4223t__;
  __t5182t__unsafe_ptr=0;
  __t5183t____t4234t____t4224t=0;
  int__t626t(__t5183t____t4234t____t4224t,&__t5183t____t4234t____t4225t__);
  neq__t147t(__t5183t____t4234t__status,__t5183t____t4234t____t4225t__,&__t5183t____t4234t____t4226t__);
  if(__t5183t____t4234t____t4226t__){
  __t_complain=43;
  goto __t4227t__label;
  __t4227t__label:__t5183t____t4234t____t4227t=__t5183t____t4234t____t4227t==0;
  }
  }
  __t5184t=__t_complain;
  error=__t5184t;
  ok__t4191t(error,&__t5185t__);
  not__t42t(__t5185t__,&__t5186t__);
  if(__t5186t__){
  cstr__t4190t(error,&__t5187t__);
  goto __t_return;
  }
  cstr__t1t(&__t5188t__);
  __t5187t__=__t5188t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5656t=__t5187t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5657t) {
  int value=0;
  *__t5657t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5658t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5658t=__t54t__;
}

static inline __attribute__((always_inline)) void exists__t1590t(const char* c, char* __t5659t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5659t=z;
}

static inline __attribute__((always_inline)) void nn__t430t(const char* value, const char** __t5660t, const char** __t5661t) {
  const char* __t432t=0;
  __t432t=__t431t;
  goto __t_return;
  __t_return:
  *__t5660t=value;
  *__t5661t=__t432t;
}

static inline __attribute__((always_inline)) void print__t439t(const char* value, const char* endl) {
  int __t440t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t475t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void set__t595t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t5218t(char colors__initialized) {
  const char* __t5220t__value=0;
  const char* __t5220t____t432t=0;
  int __t5222t=0;
  char __t5223t=0;
  char __t5224t=0;
  const char* __t5229t__value=0;
  const char* __t5229t____t432t=0;
  int __t5231t=0;
  const char* __t5234t__value=0;
  const char* __t5234t____t432t=0;
  nn__t430t(__t5200t,&__t5220t__value,&__t5220t____t432t);
  print__t439t(__t5220t__value,__t5220t____t432t);
  __t5224t=1;
  if(__t5225t!=__t5225t){
  __t5224t=0;
  }
  if(__t5224t){
  __t5223t=1;
  }
  if(__t5223t){
  set__t475t(colors__initialized);
  nn__t430t(__t5228t,&__t5229t__value,&__t5229t____t432t);
  print__t439t(__t5229t__value,__t5229t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5215t,&__t5234t__value,&__t5234t____t432t);
  print__t439t(__t5234t__value,__t5234t____t432t);
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

static inline __attribute__((always_inline)) void print_marker__t5198t(char colors__initialized) {
  const char* __t5201t__value=0;
  const char* __t5201t____t432t=0;
  char __t5203t=0;
  char __t5204t=0;
  const char* __t5209t__value=0;
  const char* __t5209t____t432t=0;
  int __t5211t=0;
  int __t5212t=0;
  const char* __t5216t__value=0;
  const char* __t5216t____t432t=0;
  nn__t430t(__t5200t,&__t5201t__value,&__t5201t____t432t);
  print__t439t(__t5201t__value,__t5201t____t432t);
  __t5204t=1;
  if(__t5205t!=__t5205t){
  __t5204t=0;
  }
  if(__t5204t){
  __t5203t=1;
  }
  if(__t5203t){
  set__t479t(colors__initialized);
  nn__t430t(__t5208t,&__t5209t__value,&__t5209t____t432t);
  print__t439t(__t5209t__value,__t5209t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5215t,&__t5216t__value,&__t5216t____t432t);
  print__t439t(__t5216t__value,__t5216t____t432t);
}

static inline __attribute__((always_inline)) int test__t5278t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t5662t) {
  int64_t __t5280t__=0;
  const char* __t5283t__=0;
  const char* __t5284t=0;
  const char* error=0;
  int __t5285t=0;
  int __t5286t__=0;
  char __t5287t__=0;
  const char* __t5288t__=0;
  const char* __t5290t__value=0;
  const char* __t5290t____t432t=0;
  char __t5292t__=0;
  char __t5296t=0;
  char __t5301t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5254t(&__t5280t__);
  print__t1831t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t5181t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5283t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5284t=__t5283t__;
  error=__t5284t;
  not__t53t(__t5285t,&__t5286t__);
  if(should_fail){
  exists__t1590t(error,&__t5287t__);
  if(__t5287t__){
  cstr__t1t(&__t5288t__);
  error=__t5288t__;
  }
  else{
  error=__t5289t;
  }
  }
  nn__t430t(__t5262t,&__t5290t__value,&__t5290t____t432t);
  print__t439t(__t5290t__value,__t5290t____t432t);
  exists__t1590t(error,&__t5292t__);
  if(__t5292t__){
  print_marker__t5218t(colors__initialized);
  print__t441t(error);
  __t5296t=0;
  goto __t_return;
  }
  print_marker__t5198t(colors__initialized);
  print__t441t(__t5299t);
  __t5301t=1;
  __t5296t=__t5301t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5662t=__t5296t;
  
  __t_skip_returns:restore_stdout__t5253t(__t5280t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t452t(uint64_t value, const char* endl) {
  int __t453t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t437t(uint64_t value, uint64_t* __t5663t, const char** __t5664t) {
  const char* __t438t=0;
  __t438t=__t431t;
  goto __t_return;
  __t_return:
  *__t5663t=value;
  *__t5664t=__t438t;
}

static inline __attribute__((always_inline)) int _main__t5340t() {
  char* __t5342t__unsafe_ptr=0;
  uint64_t __t5342t__dat__pos=0;
  uint64_t __t5342t__dat__length=0;
  char __t5342t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5343t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5345t=0;
  char* __t5346t__unsafe_ptr=0;
  uint64_t __t5346t__unsafe_size=0;
  uint32_t __t5346t__unsafe_offset=0;
  uint32_t __t5346t__unsafe_align=0;
  char* __t5348t__buf__unsafe_ptr=0;
  uint64_t __t5348t__buf__unsafe_size=0;
  uint32_t __t5348t__buf__unsafe_offset=0;
  uint32_t __t5348t__buf__unsafe_align=0;
  uint64_t __t5348t__pos=0;
  char* __t5349t__buf__unsafe_ptr=0;
  uint64_t __t5349t__buf__unsafe_size=0;
  uint32_t __t5349t__buf__unsafe_offset=0;
  uint32_t __t5349t__buf__unsafe_align=0;
  uint64_t __t5349t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  int __t5354t=0;
  char* __t5356t__unsafe_ptr=0;
  uint64_t __t5356t__dat__pos=0;
  uint64_t __t5356t__dat__length=0;
  char __t5356t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  uint64_t __t5357t=0;
  uint64_t __t5358t=0;
  uint64_t counter=0;
  uint64_t __t5359t=0;
  uint64_t __t5360t=0;
  uint64_t failures=0;
  uint64_t __t5361t=0;
  char* __t5362t__unsafe_ptr=0;
  char __t5364t=0;
  char* __t5365t__unsafe_ptr=0;
  uint64_t __t5365t__dat__pos=0;
  uint64_t __t5365t__dat__length=0;
  char __t5365t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5367t__=0;
  char __t5368t__=0;
  char __t5369t__=0;
  char __t5370t=0;
  char __t5371t__=0;
  uint64_t __t5372t__=0;
  uint64_t __t5373t____t5337t=0;
  uint64_t __t5373t____t5339t__=0;
  char* __t5374t__unsafe_ptr=0;
  uint64_t __t5374t__dat__pos=0;
  uint64_t __t5374t__dat__length=0;
  char __t5374t__dat__first=0;
  char* __t5376t__unsafe_ptr=0;
  uint64_t __t5376t__dat__pos=0;
  uint64_t __t5376t__dat__length=0;
  char __t5376t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5377t=0;
  char* __t5378t__unsafe_ptr=0;
  char __t5380t=0;
  char* __t5381t__unsafe_ptr=0;
  uint64_t __t5381t__dat__pos=0;
  uint64_t __t5381t__dat__length=0;
  char __t5381t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5383t__=0;
  char __t5384t__=0;
  uint64_t __t5385t__=0;
  uint64_t __t5386t____t5337t=0;
  uint64_t __t5386t____t5339t__=0;
  uint64_t __t5387t=0;
  uint64_t __t5388t__=0;
  char __t5390t__=0;
  char should_fail=0;
  char* __t5391t__unsafe_ptr=0;
  uint64_t __t5391t__dat__pos=0;
  uint64_t __t5391t__dat__length=0;
  char __t5391t__dat__first=0;
  char* __t5392t__unsafe_ptr=0;
  uint64_t __t5392t__dat__pos=0;
  uint64_t __t5392t__dat__length=0;
  char __t5392t__dat__first=0;
  char __t5393t__=0;
  char __t5394t__=0;
  uint64_t __t5395t=0;
  uint64_t __t5396t__=0;
  int64_t __t5397t__=0;
  uint64_t __t5399t=0;
  char __t5400t__=0;
  const char* __t5414t__value=0;
  const char* __t5414t____t432t=0;
  const char* __t5404t__value=0;
  const char* __t5404t____t432t=0;
  const char* __t5409t__value=0;
  const char* __t5409t____t432t=0;
  uint64_t __t5420t__value=0;
  const char* __t5420t____t438t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1652t(__t5341t,&__t5342t__unsafe_ptr,&__t5342t__dat__pos,&__t5342t__dat__length,&__t5342t__dat__first);
  test_root__unsafe_ptr=__t5342t__unsafe_ptr;
  test_root__dat__pos=__t5342t__dat__pos;
  test_root__dat__length=__t5342t__dat__length;
  test_root__dat__first=__t5342t__dat__first;
  colors__t469t(&__t5343t__initialized);
  colors__initialized=__t5343t__initialized;
  __t5345t=128;
  __t_errcode=alloc__t1069t(__t5345t,&__t5346t__unsafe_ptr,&__t5346t__unsafe_size,&__t5346t__unsafe_offset,&__t5346t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1188t(&__t5346t__unsafe_ptr,&__t5346t__unsafe_size,&__t5346t__unsafe_offset,&__t5346t__unsafe_align,&__t5348t__buf__unsafe_ptr,&__t5348t__buf__unsafe_size,&__t5348t__buf__unsafe_offset,&__t5348t__buf__unsafe_align,&__t5348t__pos);
  __t5349t__buf__unsafe_ptr=__t5348t__buf__unsafe_ptr;
  __t5349t__buf__unsafe_size=__t5348t__buf__unsafe_size;
  __t5349t__buf__unsafe_offset=__t5348t__buf__unsafe_offset;
  __t5349t__buf__unsafe_align=__t5348t__buf__unsafe_align;
  __t5349t__pos=__t5348t__pos;
  CHARS__buf__unsafe_ptr=__t5349t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5349t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5349t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5349t__buf__unsafe_align;
  CHARS__pos=__t5349t__pos;
  __t_errcode=copy__t1701t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5355t,&__t5356t__unsafe_ptr,&__t5356t__dat__pos,&__t5356t__dat__length,&__t5356t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5356t__unsafe_ptr;
  command_base__dat__pos=__t5356t__dat__pos;
  command_base__dat__length=__t5356t__dat__length;
  command_base__dat__first=__t5356t__dat__first;
  __t5357t=0;
  __t5358t=__t5357t;
  counter=__t5358t;
  __t5359t=0;
  __t5360t=__t5359t;
  failures=__t5360t;
  __t_errcode=open__t5056t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5362t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5361t=0-1;
  while(1){
  __t5361t=__t5361t+1;
  __t_complain=mutget__t5139t(&__t5362t__unsafe_ptr,__t5361t,&__t5365t__unsafe_ptr,&__t5365t__dat__pos,&__t5365t__dat__length,&__t5365t__dat__first);
  __t5364t=__t_complain;
  if(__t_complain){
  goto __t5364t__label;
  }
  path__unsafe_ptr=__t5365t__unsafe_ptr;
  path__dat__pos=__t5365t__dat__pos;
  path__dat__length=__t5365t__dat__length;
  path__dat__first=__t5365t__dat__first;
  __t5364t__label:__t5364t=__t5364t==0;
  if(!__t5364t){
  break;
  }
  eq__t1774t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5366t,&__t5367t__);
  if(!__t5367t__){
  __t_errcode=is_dir__t4983t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5368t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5368t__,&__t5369t__);
  __t5370t=__t5369t__;
  }
  else{
  __t5370t=0;
  not__t42t(__t5370t,&__t5371t__);
  __t5370t=__t5371t__;
  }
  if(__t5370t){
  continue;
  }
  reuse__t5334t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5372t__);
  __t_errcode=add__t2848t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5374t__unsafe_ptr,&__t5374t__dat__pos,&__t5374t__dat__length,&__t5374t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2893t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5374t__unsafe_ptr,__t5374t__dat__pos,__t5374t__dat__length,__t5374t__dat__first,__t5375t,&__t5376t__unsafe_ptr,&__t5376t__dat__pos,&__t5376t__dat__length,&__t5376t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5376t__unsafe_ptr;
  dir_path__dat__pos=__t5376t__dat__pos;
  dir_path__dat__length=__t5376t__dat__length;
  dir_path__dat__first=__t5376t__dat__first;
  __t_errcode=open__t5056t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5378t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5377t=0-1;
  while(1){
  __t5377t=__t5377t+1;
  __t_complain=mutget__t5139t(&__t5378t__unsafe_ptr,__t5377t,&__t5381t__unsafe_ptr,&__t5381t__dat__pos,&__t5381t__dat__length,&__t5381t__dat__first);
  __t5380t=__t_complain;
  if(__t_complain){
  goto __t5380t__label;
  }
  entry__unsafe_ptr=__t5381t__unsafe_ptr;
  entry__dat__pos=__t5381t__dat__pos;
  entry__dat__length=__t5381t__dat__length;
  entry__dat__first=__t5381t__dat__first;
  __t5380t__label:__t5380t=__t5380t==0;
  if(!__t5380t){
  break;
  }
  __t_errcode=ends_with__t1942t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5382t,&__t5383t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5383t__,&__t5384t__);
  if(__t5384t__){
  continue;
  }
  reuse__t5334t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5385t__);
  __t5387t=1;
  add__t188t(counter,__t5387t,&__t5388t__);
  counter=__t5388t__;
  contains__t2028t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5389t,&__t5390t__);
  should_fail=__t5390t__;
  __t_errcode=add__t2848t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5391t__unsafe_ptr,&__t5391t__dat__pos,&__t5391t__dat__length,&__t5391t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2848t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5391t__unsafe_ptr,__t5391t__dat__pos,__t5391t__dat__length,__t5391t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5392t__unsafe_ptr,&__t5392t__dat__pos,&__t5392t__dat__length,&__t5392t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5278t(colors__initialized,__t5392t__unsafe_ptr,__t5392t__dat__pos,__t5392t__dat__length,__t5392t__dat__first,should_fail,&__t5393t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5393t__,&__t5394t__);
  if(__t5394t__){
  __t5395t=1;
  add__t188t(failures,__t5395t,&__t5396t__);
  failures=__t5396t__;
  }
  __t5386t____t5337t=0;
  sub__t409t(__t5385t__,__t5386t____t5337t,&__t5386t____t5339t__);
  CHARS__pos=__t5386t____t5339t__;
  }
  __t5373t____t5337t=0;
  sub__t409t(__t5372t__,__t5373t____t5337t,&__t5373t____t5339t__);
  CHARS__pos=__t5373t____t5339t__;
  closedir__t5046t(__t5378t__unsafe_ptr);
  }
  stdout_to_err__t5254t(&__t5397t__);
  __t5399t=0;
  eq__t134t(failures,__t5399t,&__t5400t__);
  if(__t5400t__){
  set__t479t(colors__initialized);
  nn__t430t(__t5403t,&__t5404t__value,&__t5404t____t432t);
  print__t439t(__t5404t__value,__t5404t____t432t);
  set__t595t(colors__initialized);
  nn__t430t(__t5408t,&__t5409t__value,&__t5409t____t432t);
  print__t439t(__t5409t__value,__t5409t____t432t);
  }
  else{
  set__t475t(colors__initialized);
  nn__t430t(__t5413t,&__t5414t__value,&__t5414t____t432t);
  print__t439t(__t5414t__value,__t5414t____t432t);
  set__t595t(colors__initialized);
  print__t452t(failures,__t5418t);
  }
  nn__t437t(counter,&__t5420t__value,&__t5420t____t438t);
  print__t452t(__t5420t__value,__t5420t____t438t);
  print__t441t(__t5422t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:restore_stdout__t5253t(__t5397t__);
  closedir__t5046t(__t5362t__unsafe_ptr);
  free__t791t(&__t5346t__unsafe_ptr);
  if(__t5343t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5424t() {
  char __t5427t=0;
  char __t5429t__=0;
  int64_t __t5430t=0;
  const char* __t5431t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t_complain=_main__t5340t();
  __t5427t=__t_complain;
  if(__t_complain){
  goto __t5427t__label;
  }
  __t5427t__label:__t5427t=__t5427t==0;
  not__t42t(__t5427t,&__t5429t__);
  if(__t5429t__){
  __t5430t=__t_complain;
  cstr__t4190t(__t5430t,&__t5431t__);
  print__t441t(__t5431t__);
  __t_errcode=61;
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t5424t();
                }