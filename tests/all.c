#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5010t="failure";
const char* const __t5122t="./tests/passing/";
const char* const __t4993t="V";
const char* const __t430t="";
const char* const __t5047t=" |- ";
const char* const __t5013t="X";
const char* const __t442t="\n";
const char* const __t4985t="[";
const char* const __t5160t=".s";
const char* const __t5184t="no errors across ";
const char* const __t5179t="PASSING ";
const char* const __t5000t="] ";
const char* const __t5194t=" out of ";
const char* const __t5133t="./smoll --cleanup ";
const char* const __t4990t="success";
const char* const __t5082t="completed";
const char* const __t5072t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t5198t=" tests";
const char* const __t5144t="..";
const char* const __t5153t="/";
const char* const __t5167t="_fail_";
const char* const __t5189t="FAILED ";
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
"assert failed"
};

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1495t(char** __t5200t, uint64_t* __t5201t, uint32_t* __t5202t, uint32_t* __t5203t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5200t=unsafe_ptr;
  *__t5201t=unsafe_size;
  *__t5202t=unsafe_offset;
  *__t5203t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5204t) {
  *__t5204t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5205t) {
  int value=0;
  *__t5205t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t5206t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t5206t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t5207t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t5207t=__t110t__;
}

static inline __attribute__((always_inline)) void add__t187t(uint64_t x, uint64_t y, uint64_t* __t5208t) {
  int __t188t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t188t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5208t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t5209t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5209t=z;
}

static inline __attribute__((always_inline)) void ge__t372t(uint64_t x, uint64_t y, char* __t5210t) {
  int __t373t__=0;
  char z=0;
  is_different__t108t(x,y,&__t373t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5210t=z;
}

static inline __attribute__((always_inline)) void nat__t739t(uint32_t x, uint64_t* __t5211t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5211t=value;
}

static inline __attribute__((always_inline)) void mul__t211t(uint64_t x, uint64_t y, uint64_t* __t5212t) {
  int __t212t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t212t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5212t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5213t) {
  *__t5213t=to;
}

static inline __attribute__((always_inline)) void add__t733t(char* allocated, uint64_t offset, char** __t5214t) {
  char* element=0;
  char* __t734t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t734t__);
  goto __t_return;
  __t_return:
  *__t5214t=__t734t__;
}

static inline __attribute__((always_inline)) int get__t1073t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5215t) {
  int __t1074t=0;
  char __t1075t__=0;
  uint64_t __t1076t__=0;
  uint64_t __t1077t__=0;
  uint64_t __t1078t__=0;
  uint64_t __t1079t__=0;
  char* __t1080t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t372t(i,buffer__unsafe_size,&__t1075t__);
  if(__t1075t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t739t(buffer__unsafe_align,&__t1076t__);
  mul__t211t(i,__t1076t__,&__t1077t__);
  nat__t739t(buffer__unsafe_offset,&__t1078t__);
  add__t187t(__t1077t__,__t1078t__,&__t1079t__);
  add__t733t(buffer__unsafe_ptr,__t1079t__,&__t1080t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5215t=__t1080t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1520t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5216t, uint64_t* __t5217t, uint64_t* __t5218t, char* __t5219t) {
  goto __t_return;
  __t_return:
  *__t5216t=unsafe_ptr;
  *__t5217t=dat__pos;
  *__t5218t=dat__length;
  *__t5219t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1524t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5220t, uint64_t* __t5221t, uint64_t* __t5222t, char* __t5223t) {
  char* unsafe_ptr=0;
  uint64_t __t1525t__=0;
  uint64_t __t1526t=0;
  char __t1527t__=0;
  uint64_t __t1528t__=0;
  uint64_t __t1529t=0;
  char __t1530t__=0;
  char* __t1531t__unsafe_ptr=0;
  uint64_t __t1531t__dat__pos=0;
  uint64_t __t1531t__dat__length=0;
  char __t1531t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t739t(buf__unsafe_align,&__t1525t__);
  __t1526t=1;
  neq__t157t(__t1525t__,__t1526t,&__t1527t__);
  if(__t1527t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t739t(buf__unsafe_offset,&__t1528t__);
  __t1529t=0;
  neq__t157t(__t1528t__,__t1529t,&__t1530t__);
  if(__t1530t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t1520t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1531t__unsafe_ptr,&__t1531t__dat__pos,&__t1531t__dat__length,&__t1531t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5220t=__t1531t__unsafe_ptr;
  *__t5221t=__t1531t__dat__pos;
  *__t5222t=__t1531t__dat__length;
  *__t5223t=__t1531t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1558t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5224t, uint64_t* __t5225t, uint64_t* __t5226t, char* __t5227t) {
  uint64_t __t1559t=0;
  char __t1560t__=0;
  char* __t1562t__=0;
  char __t1563t__value=0;
  char first=0;
  char* __t1564t__unsafe_ptr=0;
  uint64_t __t1564t__dat__pos=0;
  uint64_t __t1564t__dat__length=0;
  char __t1564t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1559t=0;
  neq__t157t(length,__t1559t,&__t1560t__);
  if(__t1560t__){
  __t_errcode=get__t1073t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1562t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1562t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1563t__value,__t1562t__,1);
  first=__t1563t__value;
  }
  __t_errcode=str__t1524t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1564t__unsafe_ptr,&__t1564t__dat__pos,&__t1564t__dat__length,&__t1564t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5224t=__t1564t__unsafe_ptr;
  *__t5225t=__t1564t__dat__pos;
  *__t5226t=__t1564t__dat__length;
  *__t5227t=__t1564t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1580t(const char* c, char** __t5228t, uint64_t* __t5229t, uint64_t* __t5230t, char* __t5231t) {
  char* __t1581t__unsafe_ptr=0;
  uint64_t __t1581t__unsafe_size=0;
  uint32_t __t1581t__unsafe_offset=0;
  uint32_t __t1581t__unsafe_align=0;
  char* __t1582t__unsafe_ptr=0;
  uint64_t __t1582t__unsafe_size=0;
  uint32_t __t1582t__unsafe_offset=0;
  uint32_t __t1582t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1583t__=0;
  uint64_t length=0;
  uint64_t __t1584t=0;
  uint64_t __t1585t__=0;
  char __t1586t=0;
  uint64_t __t1587t=0;
  char* __t1589t__unsafe_ptr=0;
  uint64_t __t1589t__dat__pos=0;
  uint64_t __t1589t__dat__length=0;
  char __t1589t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1495t(&__t1581t__unsafe_ptr,&__t1581t__unsafe_size,&__t1581t__unsafe_offset,&__t1581t__unsafe_align);
  __t1582t__unsafe_ptr=__t1581t__unsafe_ptr;
  __t1582t__unsafe_size=__t1581t__unsafe_size;
  __t1582t__unsafe_offset=__t1581t__unsafe_offset;
  __t1582t__unsafe_align=__t1581t__unsafe_align;
  buf__unsafe_ptr=__t1582t__unsafe_ptr;
  buf__unsafe_size=__t1582t__unsafe_size;
  buf__unsafe_offset=__t1582t__unsafe_offset;
  buf__unsafe_align=__t1582t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1583t__);
  buf__unsafe_ptr=__t1583t__;
  if(c){
  length=strlen(c);
  }
  __t1584t=1;
  add__t187t(length,__t1584t,&__t1585t__);
  buf__unsafe_size=__t1585t__;
  __t1587t=0;
  __t_complain=str__t1558t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1587t,length,&__t1589t__unsafe_ptr,&__t1589t__dat__pos,&__t1589t__dat__length,&__t1589t__dat__first);
  __t1586t=__t_complain;
  if(__t_complain){
  goto __t1586t__label;
  }
  ret__unsafe_ptr=__t1589t__unsafe_ptr;
  ret__dat__pos=__t1589t__dat__pos;
  ret__dat__length=__t1589t__dat__length;
  ret__dat__first=__t1589t__dat__first;
  __t1586t__label:__t1586t=__t1586t==0;
  goto __t_return;
  __t_return:
  *__t5228t=ret__unsafe_ptr;
  *__t5229t=ret__dat__pos;
  *__t5230t=ret__dat__length;
  *__t5231t=ret__dat__first;
}

static inline __attribute__((always_inline)) void console__t418t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void supports_ansi__t467t(char* __t5232t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5232t=supports;
}

static inline __attribute__((always_inline)) void colors__t468t(char* __t5233t) {
  char __t469t__=0;
  char initialized=0;
  supports_ansi__t467t(&__t469t__);
  initialized=__t469t__;
  goto __t_return;
  __t_return:
  *__t5233t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1009t(char** __t5234t, uint64_t* __t5235t, uint32_t* __t5236t, uint32_t* __t5237t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5234t=unsafe_ptr;
  *__t5235t=unsafe_size;
  *__t5236t=unsafe_offset;
  *__t5237t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t731t(char** __t5238t) {
  char* allocated=*__t5238t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5238t=allocated;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t5239t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5239t=z;
}

static inline __attribute__((always_inline)) void zero__t732t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t651t(char* x, char* __t5240t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5240t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t5241t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5241t=z;
}

static inline __attribute__((always_inline)) int alloc__t715t(uint64_t bytes, char** __t5242t) {
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
  *__t5242t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t853t(char** __t5243t, uint64_t* __t5244t, uint32_t* __t5245t, uint32_t* __t5246t, uint64_t size, char** __t5247t, uint64_t* __t5248t, uint32_t* __t5249t, uint32_t* __t5250t) {
  char* buffer__unsafe_ptr=*__t5243t;
  uint64_t buffer__unsafe_size=*__t5244t;
  uint32_t buffer__unsafe_offset=*__t5245t;
  uint32_t buffer__unsafe_align=*__t5246t;
  int __t854t=0;
  int __t855t=0;
  char __t857t__=0;
  uint64_t __t858t=0;
  char __t859t__=0;
  char __t860t=0;
  uint64_t __t861t=0;
  uint64_t __t862t__=0;
  uint64_t __t863t__=0;
  int __t865t=0;
  uint64_t __t866t=0;
  char __t867t__=0;
  uint64_t __t868t__=0;
  uint64_t __t869t__=0;
  uint64_t bytes=0;
  int __t870t=0;
  uint64_t __t871t=0;
  char __t872t__=0;
  char* __t873t__=0;
  int __t874t=0;
  uint64_t __t875t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t857t__);
  if(__t857t__){
  __t858t=0;
  neq__t157t(size,__t858t,&__t859t__);
  __t860t=__t859t__;
  }
  if(__t860t){
  __t861t=0;
  nat__t739t(buffer__unsafe_align,&__t862t__);
  mul__t211t(__t862t__,size,&__t863t__);
  zero__t732t(buffer__unsafe_ptr,__t861t,__t863t__);
  goto __t_return;
  }
  __t866t=0;
  neq__t157t(buffer__unsafe_size,__t866t,&__t867t__);
  if(__t867t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t739t(buffer__unsafe_align,&__t868t__);
  mul__t211t(__t868t__,size,&__t869t__);
  bytes=__t869t__;
  __t871t=0;
  eq__t133t(bytes,__t871t,&__t872t__);
  if(__t872t__){
  __t_errcode=12;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t715t(bytes,&__t873t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t875t=0;
  zero__t732t(__t873t__,__t875t,bytes);
  buffer__unsafe_ptr=__t873t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t731t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5243t=buffer__unsafe_ptr;
  *__t5244t=buffer__unsafe_size;
  *__t5245t=buffer__unsafe_offset;
  *__t5246t=buffer__unsafe_align;
  *__t5247t=buffer__unsafe_ptr;
  *__t5248t=buffer__unsafe_size;
  *__t5249t=buffer__unsafe_offset;
  *__t5250t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1008t(uint64_t size, char** __t5251t, uint64_t* __t5252t, uint32_t* __t5253t, uint32_t* __t5254t) {
  char* __t1011t__unsafe_ptr=0;
  uint64_t __t1011t__unsafe_size=0;
  uint32_t __t1011t__unsafe_offset=0;
  uint32_t __t1011t__unsafe_align=0;
  char* __t1012t__unsafe_ptr=0;
  uint64_t __t1012t__unsafe_size=0;
  uint32_t __t1012t__unsafe_offset=0;
  uint32_t __t1012t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1009t(&__t1011t__unsafe_ptr,&__t1011t__unsafe_size,&__t1011t__unsafe_offset,&__t1011t__unsafe_align);
  __t_errcode=alloc__t853t(&__t1011t__unsafe_ptr,&__t1011t__unsafe_size,&__t1011t__unsafe_offset,&__t1011t__unsafe_align,size,&__t1012t__unsafe_ptr,&__t1012t__unsafe_size,&__t1012t__unsafe_offset,&__t1012t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t731t(&__t1012t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5251t=__t1012t__unsafe_ptr;
  *__t5252t=__t1012t__unsafe_size;
  *__t5253t=__t1012t__unsafe_offset;
  *__t5254t=__t1012t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1120t(char** __t5255t, uint64_t* __t5256t, uint32_t* __t5257t, uint32_t* __t5258t, uint64_t _pos, char** __t5259t, uint64_t* __t5260t, uint32_t* __t5261t, uint32_t* __t5262t, uint64_t* __t5263t) {
  char* buf__unsafe_ptr=*__t5255t;
  uint64_t buf__unsafe_size=*__t5256t;
  uint32_t buf__unsafe_offset=*__t5257t;
  uint32_t buf__unsafe_align=*__t5258t;
  uint64_t __t1121t=0;
  uint64_t pos=0;
  __t1121t=_pos;
  pos=__t1121t;
  goto __t_return;
  __t_return:
  *__t5255t=buf__unsafe_ptr;
  *__t5256t=buf__unsafe_size;
  *__t5257t=buf__unsafe_offset;
  *__t5258t=buf__unsafe_align;
  *__t5259t=buf__unsafe_ptr;
  *__t5260t=buf__unsafe_size;
  *__t5261t=buf__unsafe_offset;
  *__t5262t=buf__unsafe_align;
  *__t5263t=pos;
}

static inline __attribute__((always_inline)) void arena__t1123t(char** __t5264t, uint64_t* __t5265t, uint32_t* __t5266t, uint32_t* __t5267t, char** __t5268t, uint64_t* __t5269t, uint32_t* __t5270t, uint32_t* __t5271t, uint64_t* __t5272t) {
  char* buf__unsafe_ptr=*__t5264t;
  uint64_t buf__unsafe_size=*__t5265t;
  uint32_t buf__unsafe_offset=*__t5266t;
  uint32_t buf__unsafe_align=*__t5267t;
  uint64_t __t1124t=0;
  char* __t1125t__buf__unsafe_ptr=0;
  uint64_t __t1125t__buf__unsafe_size=0;
  uint32_t __t1125t__buf__unsafe_offset=0;
  uint32_t __t1125t__buf__unsafe_align=0;
  uint64_t __t1125t__pos=0;
  __t1124t=0;
  arena__t1120t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1124t,&__t1125t__buf__unsafe_ptr,&__t1125t__buf__unsafe_size,&__t1125t__buf__unsafe_offset,&__t1125t__buf__unsafe_align,&__t1125t__pos);
  goto __t_return;
  __t_return:
  *__t5264t=buf__unsafe_ptr;
  *__t5265t=buf__unsafe_size;
  *__t5266t=buf__unsafe_offset;
  *__t5267t=buf__unsafe_align;
  *__t5268t=__t1125t__buf__unsafe_ptr;
  *__t5269t=__t1125t__buf__unsafe_size;
  *__t5270t=__t1125t__buf__unsafe_offset;
  *__t5271t=__t1125t__buf__unsafe_align;
  *__t5272t=__t1125t__pos;
}

static inline __attribute__((always_inline)) void len__t1081t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5273t) {
  goto __t_return;
  __t_return:
  *__t5273t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t324t(uint64_t x, uint64_t y, char* __t5274t) {
  int __t325t__=0;
  char z=0;
  is_different__t108t(x,y,&__t325t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5274t=z;
}

static inline __attribute__((always_inline)) void allocated__t1127t(char** __t5275t, uint64_t* __t5276t, uint32_t* __t5277t, uint32_t* __t5278t, uint64_t pos, char** __t5279t, uint64_t* __t5280t, uint32_t* __t5281t, uint32_t* __t5282t, uint64_t* __t5283t) {
  char* buf__unsafe_ptr=*__t5275t;
  uint64_t buf__unsafe_size=*__t5276t;
  uint32_t buf__unsafe_offset=*__t5277t;
  uint32_t buf__unsafe_align=*__t5278t;
  goto __t_return;
  __t_return:
  *__t5275t=buf__unsafe_ptr;
  *__t5276t=buf__unsafe_size;
  *__t5277t=buf__unsafe_offset;
  *__t5278t=buf__unsafe_align;
  *__t5279t=buf__unsafe_ptr;
  *__t5280t=buf__unsafe_size;
  *__t5281t=buf__unsafe_offset;
  *__t5282t=buf__unsafe_align;
  *__t5283t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1202t(char** __t5284t, uint64_t* __t5285t, uint32_t* __t5286t, uint32_t* __t5287t, uint64_t* __t5288t, uint64_t length, char** __t5289t, uint64_t* __t5290t, uint32_t* __t5291t, uint32_t* __t5292t, uint64_t* __t5293t) {
  char* allocator__buf__unsafe_ptr=*__t5284t;
  uint64_t allocator__buf__unsafe_size=*__t5285t;
  uint32_t allocator__buf__unsafe_offset=*__t5286t;
  uint32_t allocator__buf__unsafe_align=*__t5287t;
  uint64_t allocator__pos=*__t5288t;
  int __t1203t=0;
  uint64_t __t1204t__=0;
  uint64_t next_pos=0;
  uint64_t __t1205t__=0;
  char __t1206t__=0;
  uint64_t __t1207t=0;
  uint64_t __t1208t__=0;
  uint64_t pos=0;
  char* __t1209t__buf__unsafe_ptr=0;
  uint64_t __t1209t__buf__unsafe_size=0;
  uint32_t __t1209t__buf__unsafe_offset=0;
  uint32_t __t1209t__buf__unsafe_align=0;
  uint64_t __t1209t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t187t(allocator__pos,length,&__t1204t__);
  next_pos=__t1204t__;
  len__t1081t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1205t__);
  gt__t324t(next_pos,__t1205t__,&__t1206t__);
  if(__t1206t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t1207t=0;
  add__t187t(allocator__pos,__t1207t,&__t1208t__);
  pos=__t1208t__;
  allocator__pos=next_pos;
  allocated__t1127t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1209t__buf__unsafe_ptr,&__t1209t__buf__unsafe_size,&__t1209t__buf__unsafe_offset,&__t1209t__buf__unsafe_align,&__t1209t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5284t=allocator__buf__unsafe_ptr;
  *__t5285t=allocator__buf__unsafe_size;
  *__t5286t=allocator__buf__unsafe_offset;
  *__t5287t=allocator__buf__unsafe_align;
  *__t5288t=allocator__pos;
  *__t5289t=__t1209t__buf__unsafe_ptr;
  *__t5290t=__t1209t__buf__unsafe_size;
  *__t5291t=__t1209t__buf__unsafe_offset;
  *__t5292t=__t1209t__buf__unsafe_align;
  *__t5293t=__t1209t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1629t(char** __t5294t, uint64_t* __t5295t, uint32_t* __t5296t, uint32_t* __t5297t, uint64_t* __t5298t, const char* _other, char** __t5299t, uint64_t* __t5300t, uint64_t* __t5301t, char* __t5302t) {
  char* CHARS__buf__unsafe_ptr=*__t5294t;
  uint64_t CHARS__buf__unsafe_size=*__t5295t;
  uint32_t CHARS__buf__unsafe_offset=*__t5296t;
  uint32_t CHARS__buf__unsafe_align=*__t5297t;
  uint64_t CHARS__pos=*__t5298t;
  char* __t1630t__unsafe_ptr=0;
  uint64_t __t1630t__dat__pos=0;
  uint64_t __t1630t__dat__length=0;
  char __t1630t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1631t__buf__unsafe_ptr=0;
  uint64_t __t1631t__buf__unsafe_size=0;
  uint32_t __t1631t__buf__unsafe_offset=0;
  uint32_t __t1631t__buf__unsafe_align=0;
  uint64_t __t1631t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1632t=0;
  char* __t1633t__unsafe_ptr=0;
  uint64_t __t1633t__dat__pos=0;
  uint64_t __t1633t__dat__length=0;
  char __t1633t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1580t(_other,&__t1630t__unsafe_ptr,&__t1630t__dat__pos,&__t1630t__dat__length,&__t1630t__dat__first);
  other__unsafe_ptr=__t1630t__unsafe_ptr;
  other__dat__pos=__t1630t__dat__pos;
  other__dat__length=__t1630t__dat__length;
  other__dat__first=__t1630t__dat__first;
  __t_errcode=alloc__t1202t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1631t__buf__unsafe_ptr,&__t1631t__buf__unsafe_size,&__t1631t__buf__unsafe_offset,&__t1631t__buf__unsafe_align,&__t1631t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1631t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1631t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1631t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1631t__buf__unsafe_align;
  surface__pos=__t1631t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1524t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1633t__unsafe_ptr,&__t1633t__dat__pos,&__t1633t__dat__length,&__t1633t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5294t=CHARS__buf__unsafe_ptr;
  *__t5295t=CHARS__buf__unsafe_size;
  *__t5296t=CHARS__buf__unsafe_offset;
  *__t5297t=CHARS__buf__unsafe_align;
  *__t5298t=CHARS__pos;
  *__t5299t=__t1633t__unsafe_ptr;
  *__t5300t=__t1633t__dat__pos;
  *__t5301t=__t1633t__dat__length;
  *__t5302t=__t1633t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1082t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1596t(char** __t5303t, uint64_t* __t5304t, uint32_t* __t5305t, uint32_t* __t5306t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5303t=unsafe_ptr;
  *__t5304t=unsafe_size;
  *__t5305t=unsafe_offset;
  *__t5306t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t1590t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5307t) {
  goto __t_return;
  __t_return:
  *__t5307t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1654t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5308t, uint64_t* __t5309t, uint64_t* __t5310t, char* __t5311t) {
  char* __t1655t__unsafe_ptr=0;
  uint64_t __t1655t__unsafe_size=0;
  uint32_t __t1655t__unsafe_offset=0;
  uint32_t __t1655t__unsafe_align=0;
  uint64_t __t1656t=0;
  uint64_t __t1657t__=0;
  uint64_t __t1658t__=0;
  char* __t1659t__unsafe_ptr=0;
  uint64_t __t1659t__unsafe_size=0;
  uint32_t __t1659t__unsafe_offset=0;
  uint32_t __t1659t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t1661t=0;
  uint64_t __t1662t=0;
  char* __t1663t__unsafe_ptr=0;
  uint64_t __t1663t__dat__pos=0;
  uint64_t __t1663t__dat__length=0;
  char __t1663t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1596t(&__t1655t__unsafe_ptr,&__t1655t__unsafe_size,&__t1655t__unsafe_offset,&__t1655t__unsafe_align);
  __t1656t=1;
  len__t1590t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1657t__);
  add__t187t(__t1656t,__t1657t__,&__t1658t__);
  __t_errcode=alloc__t853t(&__t1655t__unsafe_ptr,&__t1655t__unsafe_size,&__t1655t__unsafe_offset,&__t1655t__unsafe_align,__t1658t__,&__t1659t__unsafe_ptr,&__t1659t__unsafe_size,&__t1659t__unsafe_offset,&__t1659t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1659t__unsafe_ptr;
  buf__unsafe_size=__t1659t__unsafe_size;
  buf__unsafe_offset=__t1659t__unsafe_offset;
  buf__unsafe_align=__t1659t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1662t=0;
  __t_errcode=str__t1524t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1662t,other__dat__length,other__dat__first,&__t1663t__unsafe_ptr,&__t1663t__dat__pos,&__t1663t__dat__length,&__t1663t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t731t(&__t1663t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5308t=__t1663t__unsafe_ptr;
  *__t5309t=__t1663t__dat__pos;
  *__t5310t=__t1663t__dat__length;
  *__t5311t=__t1663t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1678t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5312t, char** __t5313t, uint64_t* __t5314t, uint64_t* __t5315t, char* __t5316t) {
  int __t1679t=0;
  char* __t1681t__unsafe_ptr=0;
  uint64_t __t1681t__dat__pos=0;
  uint64_t __t1681t__dat__length=0;
  char __t1681t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1683t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1082t();
  __t_errcode=copy_null_terminated__t1654t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1681t__unsafe_ptr,&__t1681t__dat__pos,&__t1681t__dat__length,&__t1681t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1681t__unsafe_ptr;
  str__dat__pos=__t1681t__dat__pos;
  str__dat__length=__t1681t__dat__length;
  str__dat__first=__t1681t__dat__first;
  add__t733t(str__unsafe_ptr,str__dat__pos,&__t1683t__);
  _ret=__t1683t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t731t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5312t=cstr;
  *__t5313t=str__unsafe_ptr;
  *__t5314t=str__dat__pos;
  *__t5315t=str__dat__length;
  *__t5316t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1688t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5317t) {
  goto __t_return;
  __t_return:
  *__t5317t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t4833t(char* unsafe_ptr) {
  int __t4835t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t4836t(const char* path, char** __t5318t) {
  int __t4838t=0;
  char* unsafe_ptr=0;
  char __t4840t__=0;
  char __t4841t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t651t(unsafe_ptr,&__t4840t__);
  not__t41t(__t4840t__,&__t4841t__);
  if(__t4841t__){
  __t_errcode=42;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t4833t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5318t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t4843t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t5319t) {
  const char* __t4844t__cstr=0;
  char* __t4844t__str__unsafe_ptr=0;
  uint64_t __t4844t__str__dat__pos=0;
  uint64_t __t4844t__str__dat__length=0;
  char __t4844t__str__dat__first=0;
  const char* __t4846t__=0;
  char* __t4847t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1678t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t4844t__cstr,&__t4844t__str__unsafe_ptr,&__t4844t__str__dat__pos,&__t4844t__str__dat__length,&__t4844t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1688t(__t4844t__cstr,__t4844t__str__unsafe_ptr,__t4844t__str__dat__pos,__t4844t__str__dat__length,__t4844t__str__dat__first,&__t4846t__);
  __t_errcode=open__t4836t(__t4846t__,&__t4847t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t4833t(__t4847t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5319t=__t4847t__unsafe_ptr;
  
  __t_skip_returns:free__t731t(&__t4844t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t4855t(char** __t5320t, const char** __t5321t) {
  char* f__unsafe_ptr=*__t5320t;
  char __t4856t__=0;
  char __t4857t__=0;
  char* de=0;
  char __t4858t__=0;
  char __t4859t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t651t(f__unsafe_ptr,&__t4856t__);
  not__t41t(__t4856t__,&__t4857t__);
  if(__t4857t__){
  __t_errcode=54;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t651t(de,&__t4858t__);
  not__t41t(__t4858t__,&__t4859t__);
  if(__t4859t__){
  __t_errcode=55;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5320t=f__unsafe_ptr;
  *__t5321t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t4860t(char** __t5322t, char** __t5323t, uint64_t* __t5324t, uint64_t* __t5325t, char* __t5326t) {
  char* f__unsafe_ptr=*__t5322t;
  const char* __t4861t__=0;
  char* __t4862t__unsafe_ptr=0;
  uint64_t __t4862t__dat__pos=0;
  uint64_t __t4862t__dat__length=0;
  char __t4862t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t4855t(&f__unsafe_ptr,&__t4861t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1580t(__t4861t__,&__t4862t__unsafe_ptr,&__t4862t__dat__pos,&__t4862t__dat__length,&__t4862t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5322t=f__unsafe_ptr;
  *__t5323t=__t4862t__unsafe_ptr;
  *__t5324t=__t4862t__dat__pos;
  *__t5325t=__t4862t__dat__length;
  *__t5326t=__t4862t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t4926t(char** __t5327t, uint64_t __t_anon1, char** __t5328t, uint64_t* __t5329t, uint64_t* __t5330t, char* __t5331t) {
  char* data__unsafe_ptr=*__t5327t;
  char* __t4927t__unsafe_ptr=0;
  uint64_t __t4927t__dat__pos=0;
  uint64_t __t4927t__dat__length=0;
  char __t4927t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t4860t(&data__unsafe_ptr,&__t4927t__unsafe_ptr,&__t4927t__dat__pos,&__t4927t__dat__length,&__t4927t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5327t=data__unsafe_ptr;
  *__t5328t=__t4927t__unsafe_ptr;
  *__t5329t=__t4927t__dat__pos;
  *__t5330t=__t4927t__dat__length;
  *__t5331t=__t4927t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1592t(const char* s, char* __t5332t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t5332t=c;
}

static inline __attribute__((always_inline)) void neq__t1594t(char x, char y, char* __t5333t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5333t=z;
}

static inline __attribute__((always_inline)) void eq__t1695t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5334t) {
  uint64_t __t1696t__=0;
  uint64_t n=0;
  uint64_t __t1697t__=0;
  char __t1698t__=0;
  char __t1699t=0;
  char __t1700t__=0;
  char __t1701t=0;
  char z=0;
  len__t1590t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1696t__);
  n=__t1696t__;
  len__t1590t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1697t__);
  neq__t157t(n,__t1697t__,&__t1698t__);
  if(__t1698t__){
  __t1699t=0;
  goto __t_return;
  }
  neq__t1594t(x__dat__first,y__dat__first,&__t1700t__);
  if(__t1700t__){
  __t1701t=0;
  __t1699t=__t1701t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1699t=z;
  goto __t_return;
  __t_return:
  *__t5334t=__t1699t;
}

void eq__t1702t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t5335t) {
  char __t1703t__=0;
  char __t1704t__=0;
  char __t1705t=0;
  char* __t1706t__unsafe_ptr=0;
  uint64_t __t1706t__dat__pos=0;
  uint64_t __t1706t__dat__length=0;
  char __t1706t__dat__first=0;
  char __t1707t__=0;
  char__t1592t(y,&__t1703t__);
  neq__t1594t(x__dat__first,__t1703t__,&__t1704t__);
  if(__t1704t__){
  __t1705t=0;
  goto __t_return;
  }
  str__t1580t(y,&__t1706t__unsafe_ptr,&__t1706t__dat__pos,&__t1706t__dat__length,&__t1706t__dat__first);
  eq__t1695t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1706t__unsafe_ptr,__t1706t__dat__pos,__t1706t__dat__length,__t1706t__dat__first,&__t1707t__);
  __t1705t=__t1707t__;
  goto __t_return;
  __t_return:
  *__t5335t=__t1705t;
}

int unsafe_temp__t1664t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5336t, char** __t5337t, uint64_t* __t5338t, uint64_t* __t5339t, char* __t5340t) {
  int __t1665t=0;
  char* __t1666t__unsafe_ptr=0;
  uint64_t __t1666t__unsafe_size=0;
  uint32_t __t1666t__unsafe_offset=0;
  uint32_t __t1666t__unsafe_align=0;
  uint64_t __t1667t=0;
  uint64_t __t1668t__=0;
  uint64_t __t1669t__=0;
  char* __t1670t__unsafe_ptr=0;
  uint64_t __t1670t__unsafe_size=0;
  uint32_t __t1670t__unsafe_offset=0;
  uint32_t __t1670t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1672t=0;
  char __t1673t__=0;
  char first_character=0;
  uint64_t __t1674t=0;
  char* __t1675t__unsafe_ptr=0;
  uint64_t __t1675t__dat__pos=0;
  uint64_t __t1675t__dat__length=0;
  char __t1675t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1676t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1596t(&__t1666t__unsafe_ptr,&__t1666t__unsafe_size,&__t1666t__unsafe_offset,&__t1666t__unsafe_align);
  __t1667t=1;
  add__t187t(__t1667t,other__dat__length,&__t1668t__);
  add__t187t(__t1668t__,prefix__dat__length,&__t1669t__);
  __t_errcode=alloc__t853t(&__t1666t__unsafe_ptr,&__t1666t__unsafe_size,&__t1666t__unsafe_offset,&__t1666t__unsafe_align,__t1669t__,&__t1670t__unsafe_ptr,&__t1670t__unsafe_size,&__t1670t__unsafe_offset,&__t1670t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1670t__unsafe_ptr;
  buf__unsafe_size=__t1670t__unsafe_size;
  buf__unsafe_offset=__t1670t__unsafe_offset;
  buf__unsafe_align=__t1670t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1672t=0;
  eq__t133t(prefix__dat__length,__t1672t,&__t1673t__);
  if(__t1673t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1674t=0;
  __t_errcode=str__t1524t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1674t,other__dat__length,first_character,&__t1675t__unsafe_ptr,&__t1675t__dat__pos,&__t1675t__dat__length,&__t1675t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1675t__unsafe_ptr;
  str__dat__pos=__t1675t__dat__pos;
  str__dat__length=__t1675t__dat__length;
  str__dat__first=__t1675t__dat__first;
  add__t733t(str__unsafe_ptr,str__dat__pos,&__t1676t__);
  _ret=__t1676t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t731t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5336t=cstr;
  *__t5337t=str__unsafe_ptr;
  *__t5338t=str__dat__pos;
  *__t5339t=str__dat__length;
  *__t5340t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1687t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5341t) {
  goto __t_return;
  __t_return:
  *__t5341t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t4760t(const char* path, char* __t5342t) {
  int __t4762t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t5342t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t4770t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t5343t) {
  int __t4772t=0;
  const char* __t4773t__cstr=0;
  char* __t4773t__str__unsafe_ptr=0;
  uint64_t __t4773t__str__dat__pos=0;
  uint64_t __t4773t__str__dat__length=0;
  char __t4773t__str__dat__first=0;
  const char* __t4775t__=0;
  char __t4776t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1664t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t4773t__cstr,&__t4773t__str__unsafe_ptr,&__t4773t__str__dat__pos,&__t4773t__str__dat__length,&__t4773t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1687t(__t4773t__cstr,__t4773t__str__unsafe_ptr,__t4773t__str__dat__pos,__t4773t__str__dat__length,__t4773t__str__dat__first,&__t4775t__);
  is_dir__t4760t(__t4775t__,&__t4776t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5343t=__t4776t__;
  
  __t_skip_returns:free__t731t(&__t4773t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t408t(uint64_t x, uint64_t y, uint64_t* __t5344t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5344t=z;
}

static inline __attribute__((always_inline)) void reuse__t5115t(char** __t5345t, uint64_t* __t5346t, uint32_t* __t5347t, uint32_t* __t5348t, uint64_t* __t5349t, uint64_t* __t5350t) {
  char* arn__buf__unsafe_ptr=*__t5345t;
  uint64_t arn__buf__unsafe_size=*__t5346t;
  uint32_t arn__buf__unsafe_offset=*__t5347t;
  uint32_t arn__buf__unsafe_align=*__t5348t;
  uint64_t arn__pos=*__t5349t;
  uint64_t __t5116t=0;
  uint64_t __t5117t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5118t=0;
  uint64_t __t5120t__=0;
  __t5116t=0;
  add__t187t(__t5116t,arn__pos,&__t5117t__);
  tracked_position=__t5117t__;
  goto __t_return;
  __t_return:
  *__t5345t=arn__buf__unsafe_ptr;
  *__t5346t=arn__buf__unsafe_size;
  *__t5347t=arn__buf__unsafe_offset;
  *__t5348t=arn__buf__unsafe_align;
  *__t5349t=arn__pos;
  *__t5350t=tracked_position;
}

static inline __attribute__((always_inline)) void str__t1557t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5351t, uint64_t* __t5352t, uint64_t* __t5353t, char* __t5354t) {
  goto __t_return;
  __t_return:
  *__t5351t=other__unsafe_ptr;
  *__t5352t=other__dat__pos;
  *__t5353t=other__dat__length;
  *__t5354t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t161t(char* x, char* y, char* __t5355t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5355t=z;
}

static inline __attribute__((always_inline)) void lt__t300t(uint64_t x, uint64_t y, char* __t5356t) {
  int __t301t__=0;
  char z=0;
  is_different__t108t(x,y,&__t301t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5356t=z;
}

static inline __attribute__((always_inline)) void status__t1132t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5357t, uint64_t* __t5358t, uint32_t* __t5359t, uint32_t* __t5360t, uint64_t* __t5361t) {
  char* __t1133t__unsafe_ptr=0;
  uint64_t __t1133t__unsafe_size=0;
  uint32_t __t1133t__unsafe_offset=0;
  uint32_t __t1133t__unsafe_align=0;
  uint64_t __t1134t=0;
  __t1133t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1133t__unsafe_size=self__buf__unsafe_size;
  __t1133t__unsafe_offset=self__buf__unsafe_offset;
  __t1133t__unsafe_align=self__buf__unsafe_align;
  __t1134t=self__pos;
  goto __t_return;
  __t_return:
  *__t5357t=__t1133t__unsafe_ptr;
  *__t5358t=__t1133t__unsafe_size;
  *__t5359t=__t1133t__unsafe_offset;
  *__t5360t=__t1133t__unsafe_align;
  *__t5361t=__t1134t;
}

static inline __attribute__((always_inline)) int copy__t1624t(char** __t5362t, uint64_t* __t5363t, uint32_t* __t5364t, uint32_t* __t5365t, uint64_t* __t5366t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5367t, uint64_t* __t5368t, uint64_t* __t5369t, char* __t5370t) {
  char* CHARS__buf__unsafe_ptr=*__t5362t;
  uint64_t CHARS__buf__unsafe_size=*__t5363t;
  uint32_t CHARS__buf__unsafe_offset=*__t5364t;
  uint32_t CHARS__buf__unsafe_align=*__t5365t;
  uint64_t CHARS__pos=*__t5366t;
  char* __t1625t__unsafe_ptr=0;
  uint64_t __t1625t__dat__pos=0;
  uint64_t __t1625t__dat__length=0;
  char __t1625t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1626t__buf__unsafe_ptr=0;
  uint64_t __t1626t__buf__unsafe_size=0;
  uint32_t __t1626t__buf__unsafe_offset=0;
  uint32_t __t1626t__buf__unsafe_align=0;
  uint64_t __t1626t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1627t=0;
  char* __t1628t__unsafe_ptr=0;
  uint64_t __t1628t__dat__pos=0;
  uint64_t __t1628t__dat__length=0;
  char __t1628t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1557t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1625t__unsafe_ptr,&__t1625t__dat__pos,&__t1625t__dat__length,&__t1625t__dat__first);
  other__unsafe_ptr=__t1625t__unsafe_ptr;
  other__dat__pos=__t1625t__dat__pos;
  other__dat__length=__t1625t__dat__length;
  other__dat__first=__t1625t__dat__first;
  __t_errcode=alloc__t1202t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1626t__buf__unsafe_ptr,&__t1626t__buf__unsafe_size,&__t1626t__buf__unsafe_offset,&__t1626t__buf__unsafe_align,&__t1626t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1626t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1626t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1626t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1626t__buf__unsafe_align;
  surface__pos=__t1626t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1524t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1628t__unsafe_ptr,&__t1628t__dat__pos,&__t1628t__dat__length,&__t1628t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5362t=CHARS__buf__unsafe_ptr;
  *__t5363t=CHARS__buf__unsafe_size;
  *__t5364t=CHARS__buf__unsafe_offset;
  *__t5365t=CHARS__buf__unsafe_align;
  *__t5366t=CHARS__pos;
  *__t5367t=__t1628t__unsafe_ptr;
  *__t5368t=__t1628t__dat__pos;
  *__t5369t=__t1628t__dat__length;
  *__t5370t=__t1628t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1129t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5371t, uint64_t* __t5372t, uint32_t* __t5373t, uint32_t* __t5374t, uint64_t* __t5375t) {
  char* __t1130t__unsafe_ptr=0;
  uint64_t __t1130t__unsafe_size=0;
  uint32_t __t1130t__unsafe_offset=0;
  uint32_t __t1130t__unsafe_align=0;
  uint64_t __t1131t=0;
  __t1130t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1130t__unsafe_size=self__buf__unsafe_size;
  __t1130t__unsafe_offset=self__buf__unsafe_offset;
  __t1130t__unsafe_align=self__buf__unsafe_align;
  __t1131t=self__pos;
  goto __t_return;
  __t_return:
  *__t5371t=__t1130t__unsafe_ptr;
  *__t5372t=__t1130t__unsafe_size;
  *__t5373t=__t1130t__unsafe_offset;
  *__t5374t=__t1130t__unsafe_align;
  *__t5375t=__t1131t;
}

static inline __attribute__((always_inline)) int sub__t400t(uint64_t x, uint64_t y, uint64_t* __t5376t) {
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
  *__t5376t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1576t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5377t, uint64_t* __t5378t, uint64_t* __t5379t, char* __t5380t) {
  uint64_t __t1578t__=0;
  char* __t1579t__unsafe_ptr=0;
  uint64_t __t1579t__dat__pos=0;
  uint64_t __t1579t__dat__length=0;
  char __t1579t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t400t(endpos,pos,&__t1578t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1558t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1578t__,&__t1579t__unsafe_ptr,&__t1579t__dat__pos,&__t1579t__dat__length,&__t1579t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5377t=__t1579t__unsafe_ptr;
  *__t5378t=__t1579t__dat__pos;
  *__t5379t=__t1579t__dat__length;
  *__t5380t=__t1579t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2776t(char** __t5381t, uint64_t* __t5382t, uint32_t* __t5383t, uint32_t* __t5384t, uint64_t* __t5385t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5386t, uint64_t* __t5387t, uint64_t* __t5388t, char* __t5389t) {
  char* CHARS__buf__unsafe_ptr=*__t5381t;
  uint64_t CHARS__buf__unsafe_size=*__t5382t;
  uint32_t CHARS__buf__unsafe_offset=*__t5383t;
  uint32_t CHARS__buf__unsafe_align=*__t5384t;
  uint64_t CHARS__pos=*__t5385t;
  char* __t2777t__unsafe_ptr=0;
  uint64_t __t2777t__dat__pos=0;
  uint64_t __t2777t__dat__length=0;
  char __t2777t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2778t__unsafe_ptr=0;
  uint64_t __t2778t__dat__pos=0;
  uint64_t __t2778t__dat__length=0;
  char __t2778t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2779t__=0;
  uint64_t __t2780t__=0;
  char __t2781t__=0;
  char __t2782t=0;
  uint64_t __t2783t__=0;
  char __t2784t__=0;
  char __t2785t=0;
  uint64_t __t2786t__=0;
  char* __t2787t__buf__unsafe_ptr=0;
  uint64_t __t2787t__buf__unsafe_size=0;
  uint32_t __t2787t__buf__unsafe_offset=0;
  uint32_t __t2787t__buf__unsafe_align=0;
  uint64_t __t2787t__pos=0;
  char* __t2788t____t1133t__unsafe_ptr=0;
  uint64_t __t2788t____t1133t__unsafe_size=0;
  uint32_t __t2788t____t1133t__unsafe_offset=0;
  uint32_t __t2788t____t1133t__unsafe_align=0;
  uint64_t __t2788t____t1134t=0;
  char* __t2789t__buf__unsafe_ptr=0;
  uint64_t __t2789t__buf__unsafe_size=0;
  uint32_t __t2789t__buf__unsafe_offset=0;
  uint32_t __t2789t__buf__unsafe_align=0;
  uint64_t __t2789t__pos=0;
  char* __t2790t__buf__unsafe_ptr=0;
  uint64_t __t2790t__buf__unsafe_size=0;
  uint32_t __t2790t__buf__unsafe_offset=0;
  uint32_t __t2790t__buf__unsafe_align=0;
  uint64_t __t2790t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2791t__unsafe_ptr=0;
  uint64_t __t2791t__dat__pos=0;
  uint64_t __t2791t__dat__length=0;
  char __t2791t__dat__first=0;
  char* __t2792t____t1130t__unsafe_ptr=0;
  uint64_t __t2792t____t1130t__unsafe_size=0;
  uint32_t __t2792t____t1130t__unsafe_offset=0;
  uint32_t __t2792t____t1130t__unsafe_align=0;
  uint64_t __t2792t____t1131t=0;
  uint64_t __t2794t=0;
  uint64_t __t2795t__=0;
  char* __t2796t__unsafe_ptr=0;
  uint64_t __t2796t__dat__pos=0;
  uint64_t __t2796t__dat__length=0;
  char __t2796t__dat__first=0;
  char __t2797t__=0;
  char __t2798t__=0;
  char __t2799t=0;
  uint64_t __t2800t__=0;
  char __t2801t__=0;
  char __t2802t=0;
  uint64_t __t2803t__=0;
  char* __t2805t__unsafe_ptr=0;
  uint64_t __t2805t__dat__pos=0;
  uint64_t __t2805t__dat__length=0;
  char __t2805t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2806t__=0;
  uint64_t __t2807t__=0;
  uint64_t __t2808t__=0;
  char* __t2809t__buf__unsafe_ptr=0;
  uint64_t __t2809t__buf__unsafe_size=0;
  uint32_t __t2809t__buf__unsafe_offset=0;
  uint32_t __t2809t__buf__unsafe_align=0;
  uint64_t __t2809t__pos=0;
  char* __t2810t____t1133t__unsafe_ptr=0;
  uint64_t __t2810t____t1133t__unsafe_size=0;
  uint32_t __t2810t____t1133t__unsafe_offset=0;
  uint32_t __t2810t____t1133t__unsafe_align=0;
  uint64_t __t2810t____t1134t=0;
  char* __t2811t__buf__unsafe_ptr=0;
  uint64_t __t2811t__buf__unsafe_size=0;
  uint32_t __t2811t__buf__unsafe_offset=0;
  uint32_t __t2811t__buf__unsafe_align=0;
  uint64_t __t2811t__pos=0;
  char* __t2812t__buf__unsafe_ptr=0;
  uint64_t __t2812t__buf__unsafe_size=0;
  uint32_t __t2812t__buf__unsafe_offset=0;
  uint32_t __t2812t__buf__unsafe_align=0;
  uint64_t __t2812t__pos=0;
  char* __t2813t__unsafe_ptr=0;
  uint64_t __t2813t__dat__pos=0;
  uint64_t __t2813t__dat__length=0;
  char __t2813t__dat__first=0;
  char* __t2814t__unsafe_ptr=0;
  uint64_t __t2814t__dat__pos=0;
  uint64_t __t2814t__dat__length=0;
  char __t2814t__dat__first=0;
  char __t2815t=0;
  char* __t2816t____t1130t__unsafe_ptr=0;
  uint64_t __t2816t____t1130t__unsafe_size=0;
  uint32_t __t2816t____t1130t__unsafe_offset=0;
  uint32_t __t2816t____t1130t__unsafe_align=0;
  uint64_t __t2816t____t1131t=0;
  uint64_t __t2818t=0;
  uint64_t __t2819t__=0;
  char* __t2820t__unsafe_ptr=0;
  uint64_t __t2820t__dat__pos=0;
  uint64_t __t2820t__dat__length=0;
  char __t2820t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1557t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2777t__unsafe_ptr,&__t2777t__dat__pos,&__t2777t__dat__length,&__t2777t__dat__first);
  s1__unsafe_ptr=__t2777t__unsafe_ptr;
  s1__dat__pos=__t2777t__dat__pos;
  s1__dat__length=__t2777t__dat__length;
  s1__dat__first=__t2777t__dat__first;
  str__t1557t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2778t__unsafe_ptr,&__t2778t__dat__pos,&__t2778t__dat__length,&__t2778t__dat__first);
  s2__unsafe_ptr=__t2778t__unsafe_ptr;
  s2__dat__pos=__t2778t__dat__pos;
  s2__dat__length=__t2778t__dat__length;
  s2__dat__first=__t2778t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2779t__);
  if(__t2779t__){
  add__t187t(s1__dat__pos,s1__dat__length,&__t2780t__);
  eq__t133t(CHARS__pos,__t2780t__,&__t2781t__);
  __t2782t=__t2781t__;
  }
  if(__t2782t){
  add__t187t(CHARS__pos,s2__dat__length,&__t2783t__);
  lt__t300t(__t2783t__,CHARS__buf__unsafe_size,&__t2784t__);
  __t2785t=__t2784t__;
  }
  if(__t2785t){
  len__t1590t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2786t__);
  __t_errcode=alloc__t1202t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2786t__,&__t2787t__buf__unsafe_ptr,&__t2787t__buf__unsafe_size,&__t2787t__buf__unsafe_offset,&__t2787t__buf__unsafe_align,&__t2787t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1132t(__t2787t__buf__unsafe_ptr,__t2787t__buf__unsafe_size,__t2787t__buf__unsafe_offset,__t2787t__buf__unsafe_align,__t2787t__pos,&__t2788t____t1133t__unsafe_ptr,&__t2788t____t1133t__unsafe_size,&__t2788t____t1133t__unsafe_offset,&__t2788t____t1133t__unsafe_align,&__t2788t____t1134t);
  arena__t1120t(&__t2788t____t1133t__unsafe_ptr,&__t2788t____t1133t__unsafe_size,&__t2788t____t1133t__unsafe_offset,&__t2788t____t1133t__unsafe_align,__t2788t____t1134t,&__t2789t__buf__unsafe_ptr,&__t2789t__buf__unsafe_size,&__t2789t__buf__unsafe_offset,&__t2789t__buf__unsafe_align,&__t2789t__pos);
  __t2790t__buf__unsafe_ptr=__t2789t__buf__unsafe_ptr;
  __t2790t__buf__unsafe_size=__t2789t__buf__unsafe_size;
  __t2790t__buf__unsafe_offset=__t2789t__buf__unsafe_offset;
  __t2790t__buf__unsafe_align=__t2789t__buf__unsafe_align;
  __t2790t__pos=__t2789t__pos;
  surface__buf__unsafe_ptr=__t2790t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2790t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2790t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2790t__buf__unsafe_align;
  surface__pos=__t2790t__pos;
  __t_errcode=copy__t1624t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2791t__unsafe_ptr,&__t2791t__dat__pos,&__t2791t__dat__length,&__t2791t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1129t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2792t____t1130t__unsafe_ptr,&__t2792t____t1130t__unsafe_size,&__t2792t____t1130t__unsafe_offset,&__t2792t____t1130t__unsafe_align,&__t2792t____t1131t);
  __t2794t=0;
  add__t187t(s1__dat__pos,__t2794t,&__t2795t__);
  __t_errcode=str__t1576t(__t2792t____t1130t__unsafe_ptr,__t2792t____t1130t__unsafe_size,__t2792t____t1130t__unsafe_offset,__t2792t____t1130t__unsafe_align,__t2792t____t1131t,__t2795t__,&__t2796t__unsafe_ptr,&__t2796t__dat__pos,&__t2796t__dat__length,&__t2796t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2797t__);
  if(__t2797t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2798t__);
  __t2799t=__t2798t__;
  }
  if(__t2799t){
  add__t187t(s1__dat__pos,s1__dat__length,&__t2800t__);
  eq__t133t(s2__dat__pos,__t2800t__,&__t2801t__);
  __t2802t=__t2801t__;
  }
  if(__t2802t){
  add__t187t(s2__dat__pos,s2__dat__length,&__t2803t__);
  __t_errcode=str__t1576t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2803t__,s1__dat__pos,&__t2805t__unsafe_ptr,&__t2805t__dat__pos,&__t2805t__dat__length,&__t2805t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2796t__unsafe_ptr=__t2805t__unsafe_ptr;
  __t2796t__dat__pos=__t2805t__dat__pos;
  __t2796t__dat__length=__t2805t__dat__length;
  __t2796t__dat__first=__t2805t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1590t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2806t__);
  len__t1590t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2807t__);
  add__t187t(__t2806t__,__t2807t__,&__t2808t__);
  __t_errcode=alloc__t1202t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2808t__,&__t2809t__buf__unsafe_ptr,&__t2809t__buf__unsafe_size,&__t2809t__buf__unsafe_offset,&__t2809t__buf__unsafe_align,&__t2809t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1132t(__t2809t__buf__unsafe_ptr,__t2809t__buf__unsafe_size,__t2809t__buf__unsafe_offset,__t2809t__buf__unsafe_align,__t2809t__pos,&__t2810t____t1133t__unsafe_ptr,&__t2810t____t1133t__unsafe_size,&__t2810t____t1133t__unsafe_offset,&__t2810t____t1133t__unsafe_align,&__t2810t____t1134t);
  arena__t1120t(&__t2810t____t1133t__unsafe_ptr,&__t2810t____t1133t__unsafe_size,&__t2810t____t1133t__unsafe_offset,&__t2810t____t1133t__unsafe_align,__t2810t____t1134t,&__t2811t__buf__unsafe_ptr,&__t2811t__buf__unsafe_size,&__t2811t__buf__unsafe_offset,&__t2811t__buf__unsafe_align,&__t2811t__pos);
  __t2812t__buf__unsafe_ptr=__t2811t__buf__unsafe_ptr;
  __t2812t__buf__unsafe_size=__t2811t__buf__unsafe_size;
  __t2812t__buf__unsafe_offset=__t2811t__buf__unsafe_offset;
  __t2812t__buf__unsafe_align=__t2811t__buf__unsafe_align;
  __t2812t__pos=__t2811t__pos;
  surface__buf__unsafe_ptr=__t2812t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2812t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2812t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2812t__buf__unsafe_align;
  surface__pos=__t2812t__pos;
  __t_errcode=copy__t1624t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2813t__unsafe_ptr,&__t2813t__dat__pos,&__t2813t__dat__length,&__t2813t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1624t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2814t__unsafe_ptr,&__t2814t__dat__pos,&__t2814t__dat__length,&__t2814t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1129t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2816t____t1130t__unsafe_ptr,&__t2816t____t1130t__unsafe_size,&__t2816t____t1130t__unsafe_offset,&__t2816t____t1130t__unsafe_align,&__t2816t____t1131t);
  __t2818t=0;
  add__t187t(prev_pos,__t2818t,&__t2819t__);
  __t_complain=str__t1576t(__t2816t____t1130t__unsafe_ptr,__t2816t____t1130t__unsafe_size,__t2816t____t1130t__unsafe_offset,__t2816t____t1130t__unsafe_align,__t2816t____t1131t,__t2819t__,&__t2820t__unsafe_ptr,&__t2820t__dat__pos,&__t2820t__dat__length,&__t2820t__dat__first);
  __t2815t=__t_complain;
  if(__t_complain){
  goto __t2815t__label;
  }
  ret__unsafe_ptr=__t2820t__unsafe_ptr;
  ret__dat__pos=__t2820t__dat__pos;
  ret__dat__length=__t2820t__dat__length;
  ret__dat__first=__t2820t__dat__first;
  __t2815t__label:__t2815t=__t2815t==0;
  __t2796t__unsafe_ptr=ret__unsafe_ptr;
  __t2796t__dat__pos=ret__dat__pos;
  __t2796t__dat__length=ret__dat__length;
  __t2796t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5381t=CHARS__buf__unsafe_ptr;
  *__t5382t=CHARS__buf__unsafe_size;
  *__t5383t=CHARS__buf__unsafe_offset;
  *__t5384t=CHARS__buf__unsafe_align;
  *__t5385t=CHARS__pos;
  *__t5386t=__t2796t__unsafe_ptr;
  *__t5387t=__t2796t__dat__pos;
  *__t5388t=__t2796t__dat__length;
  *__t5389t=__t2796t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2821t(char** __t5390t, uint64_t* __t5391t, uint32_t* __t5392t, uint32_t* __t5393t, uint64_t* __t5394t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5395t, uint64_t* __t5396t, uint64_t* __t5397t, char* __t5398t) {
  char* CHARS__buf__unsafe_ptr=*__t5390t;
  uint64_t CHARS__buf__unsafe_size=*__t5391t;
  uint32_t CHARS__buf__unsafe_offset=*__t5392t;
  uint32_t CHARS__buf__unsafe_align=*__t5393t;
  uint64_t CHARS__pos=*__t5394t;
  char* __t2822t__unsafe_ptr=0;
  uint64_t __t2822t__dat__pos=0;
  uint64_t __t2822t__dat__length=0;
  char __t2822t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2823t__unsafe_ptr=0;
  uint64_t __t2823t__dat__pos=0;
  uint64_t __t2823t__dat__length=0;
  char __t2823t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2824t__=0;
  uint64_t __t2825t__=0;
  char __t2826t__=0;
  char __t2827t=0;
  uint64_t __t2828t__=0;
  char __t2829t__=0;
  char __t2830t=0;
  uint64_t __t2831t__=0;
  char* __t2832t__buf__unsafe_ptr=0;
  uint64_t __t2832t__buf__unsafe_size=0;
  uint32_t __t2832t__buf__unsafe_offset=0;
  uint32_t __t2832t__buf__unsafe_align=0;
  uint64_t __t2832t__pos=0;
  char* __t2833t____t1133t__unsafe_ptr=0;
  uint64_t __t2833t____t1133t__unsafe_size=0;
  uint32_t __t2833t____t1133t__unsafe_offset=0;
  uint32_t __t2833t____t1133t__unsafe_align=0;
  uint64_t __t2833t____t1134t=0;
  char* __t2834t__buf__unsafe_ptr=0;
  uint64_t __t2834t__buf__unsafe_size=0;
  uint32_t __t2834t__buf__unsafe_offset=0;
  uint32_t __t2834t__buf__unsafe_align=0;
  uint64_t __t2834t__pos=0;
  char* __t2835t__buf__unsafe_ptr=0;
  uint64_t __t2835t__buf__unsafe_size=0;
  uint32_t __t2835t__buf__unsafe_offset=0;
  uint32_t __t2835t__buf__unsafe_align=0;
  uint64_t __t2835t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2836t__unsafe_ptr=0;
  uint64_t __t2836t__dat__pos=0;
  uint64_t __t2836t__dat__length=0;
  char __t2836t__dat__first=0;
  char* __t2837t____t1130t__unsafe_ptr=0;
  uint64_t __t2837t____t1130t__unsafe_size=0;
  uint32_t __t2837t____t1130t__unsafe_offset=0;
  uint32_t __t2837t____t1130t__unsafe_align=0;
  uint64_t __t2837t____t1131t=0;
  uint64_t __t2839t=0;
  uint64_t __t2840t__=0;
  char* __t2841t__unsafe_ptr=0;
  uint64_t __t2841t__dat__pos=0;
  uint64_t __t2841t__dat__length=0;
  char __t2841t__dat__first=0;
  char __t2842t__=0;
  char __t2843t__=0;
  char __t2844t=0;
  uint64_t __t2845t__=0;
  char __t2846t__=0;
  char __t2847t=0;
  uint64_t __t2848t__=0;
  char* __t2850t__unsafe_ptr=0;
  uint64_t __t2850t__dat__pos=0;
  uint64_t __t2850t__dat__length=0;
  char __t2850t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2851t__=0;
  uint64_t __t2852t__=0;
  uint64_t __t2853t__=0;
  char* __t2854t__buf__unsafe_ptr=0;
  uint64_t __t2854t__buf__unsafe_size=0;
  uint32_t __t2854t__buf__unsafe_offset=0;
  uint32_t __t2854t__buf__unsafe_align=0;
  uint64_t __t2854t__pos=0;
  char* __t2855t____t1133t__unsafe_ptr=0;
  uint64_t __t2855t____t1133t__unsafe_size=0;
  uint32_t __t2855t____t1133t__unsafe_offset=0;
  uint32_t __t2855t____t1133t__unsafe_align=0;
  uint64_t __t2855t____t1134t=0;
  char* __t2856t__buf__unsafe_ptr=0;
  uint64_t __t2856t__buf__unsafe_size=0;
  uint32_t __t2856t__buf__unsafe_offset=0;
  uint32_t __t2856t__buf__unsafe_align=0;
  uint64_t __t2856t__pos=0;
  char* __t2857t__buf__unsafe_ptr=0;
  uint64_t __t2857t__buf__unsafe_size=0;
  uint32_t __t2857t__buf__unsafe_offset=0;
  uint32_t __t2857t__buf__unsafe_align=0;
  uint64_t __t2857t__pos=0;
  char* __t2858t__unsafe_ptr=0;
  uint64_t __t2858t__dat__pos=0;
  uint64_t __t2858t__dat__length=0;
  char __t2858t__dat__first=0;
  char* __t2859t__unsafe_ptr=0;
  uint64_t __t2859t__dat__pos=0;
  uint64_t __t2859t__dat__length=0;
  char __t2859t__dat__first=0;
  char __t2860t=0;
  char* __t2861t____t1130t__unsafe_ptr=0;
  uint64_t __t2861t____t1130t__unsafe_size=0;
  uint32_t __t2861t____t1130t__unsafe_offset=0;
  uint32_t __t2861t____t1130t__unsafe_align=0;
  uint64_t __t2861t____t1131t=0;
  uint64_t __t2863t=0;
  uint64_t __t2864t__=0;
  char* __t2865t__unsafe_ptr=0;
  uint64_t __t2865t__dat__pos=0;
  uint64_t __t2865t__dat__length=0;
  char __t2865t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1557t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2822t__unsafe_ptr,&__t2822t__dat__pos,&__t2822t__dat__length,&__t2822t__dat__first);
  s1__unsafe_ptr=__t2822t__unsafe_ptr;
  s1__dat__pos=__t2822t__dat__pos;
  s1__dat__length=__t2822t__dat__length;
  s1__dat__first=__t2822t__dat__first;
  str__t1580t(_s2,&__t2823t__unsafe_ptr,&__t2823t__dat__pos,&__t2823t__dat__length,&__t2823t__dat__first);
  s2__unsafe_ptr=__t2823t__unsafe_ptr;
  s2__dat__pos=__t2823t__dat__pos;
  s2__dat__length=__t2823t__dat__length;
  s2__dat__first=__t2823t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2824t__);
  if(__t2824t__){
  add__t187t(s1__dat__pos,s1__dat__length,&__t2825t__);
  eq__t133t(CHARS__pos,__t2825t__,&__t2826t__);
  __t2827t=__t2826t__;
  }
  if(__t2827t){
  add__t187t(CHARS__pos,s2__dat__length,&__t2828t__);
  lt__t300t(__t2828t__,CHARS__buf__unsafe_size,&__t2829t__);
  __t2830t=__t2829t__;
  }
  if(__t2830t){
  len__t1590t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2831t__);
  __t_errcode=alloc__t1202t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2831t__,&__t2832t__buf__unsafe_ptr,&__t2832t__buf__unsafe_size,&__t2832t__buf__unsafe_offset,&__t2832t__buf__unsafe_align,&__t2832t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1132t(__t2832t__buf__unsafe_ptr,__t2832t__buf__unsafe_size,__t2832t__buf__unsafe_offset,__t2832t__buf__unsafe_align,__t2832t__pos,&__t2833t____t1133t__unsafe_ptr,&__t2833t____t1133t__unsafe_size,&__t2833t____t1133t__unsafe_offset,&__t2833t____t1133t__unsafe_align,&__t2833t____t1134t);
  arena__t1120t(&__t2833t____t1133t__unsafe_ptr,&__t2833t____t1133t__unsafe_size,&__t2833t____t1133t__unsafe_offset,&__t2833t____t1133t__unsafe_align,__t2833t____t1134t,&__t2834t__buf__unsafe_ptr,&__t2834t__buf__unsafe_size,&__t2834t__buf__unsafe_offset,&__t2834t__buf__unsafe_align,&__t2834t__pos);
  __t2835t__buf__unsafe_ptr=__t2834t__buf__unsafe_ptr;
  __t2835t__buf__unsafe_size=__t2834t__buf__unsafe_size;
  __t2835t__buf__unsafe_offset=__t2834t__buf__unsafe_offset;
  __t2835t__buf__unsafe_align=__t2834t__buf__unsafe_align;
  __t2835t__pos=__t2834t__pos;
  surface__buf__unsafe_ptr=__t2835t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2835t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2835t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2835t__buf__unsafe_align;
  surface__pos=__t2835t__pos;
  __t_errcode=copy__t1624t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2836t__unsafe_ptr,&__t2836t__dat__pos,&__t2836t__dat__length,&__t2836t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1129t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2837t____t1130t__unsafe_ptr,&__t2837t____t1130t__unsafe_size,&__t2837t____t1130t__unsafe_offset,&__t2837t____t1130t__unsafe_align,&__t2837t____t1131t);
  __t2839t=0;
  add__t187t(s1__dat__pos,__t2839t,&__t2840t__);
  __t_errcode=str__t1576t(__t2837t____t1130t__unsafe_ptr,__t2837t____t1130t__unsafe_size,__t2837t____t1130t__unsafe_offset,__t2837t____t1130t__unsafe_align,__t2837t____t1131t,__t2840t__,&__t2841t__unsafe_ptr,&__t2841t__dat__pos,&__t2841t__dat__length,&__t2841t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2842t__);
  if(__t2842t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2843t__);
  __t2844t=__t2843t__;
  }
  if(__t2844t){
  add__t187t(s1__dat__pos,s1__dat__length,&__t2845t__);
  eq__t133t(s2__dat__pos,__t2845t__,&__t2846t__);
  __t2847t=__t2846t__;
  }
  if(__t2847t){
  add__t187t(s2__dat__pos,s2__dat__length,&__t2848t__);
  __t_errcode=str__t1576t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2848t__,s1__dat__pos,&__t2850t__unsafe_ptr,&__t2850t__dat__pos,&__t2850t__dat__length,&__t2850t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2841t__unsafe_ptr=__t2850t__unsafe_ptr;
  __t2841t__dat__pos=__t2850t__dat__pos;
  __t2841t__dat__length=__t2850t__dat__length;
  __t2841t__dat__first=__t2850t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1590t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2851t__);
  len__t1590t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2852t__);
  add__t187t(__t2851t__,__t2852t__,&__t2853t__);
  __t_errcode=alloc__t1202t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2853t__,&__t2854t__buf__unsafe_ptr,&__t2854t__buf__unsafe_size,&__t2854t__buf__unsafe_offset,&__t2854t__buf__unsafe_align,&__t2854t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1132t(__t2854t__buf__unsafe_ptr,__t2854t__buf__unsafe_size,__t2854t__buf__unsafe_offset,__t2854t__buf__unsafe_align,__t2854t__pos,&__t2855t____t1133t__unsafe_ptr,&__t2855t____t1133t__unsafe_size,&__t2855t____t1133t__unsafe_offset,&__t2855t____t1133t__unsafe_align,&__t2855t____t1134t);
  arena__t1120t(&__t2855t____t1133t__unsafe_ptr,&__t2855t____t1133t__unsafe_size,&__t2855t____t1133t__unsafe_offset,&__t2855t____t1133t__unsafe_align,__t2855t____t1134t,&__t2856t__buf__unsafe_ptr,&__t2856t__buf__unsafe_size,&__t2856t__buf__unsafe_offset,&__t2856t__buf__unsafe_align,&__t2856t__pos);
  __t2857t__buf__unsafe_ptr=__t2856t__buf__unsafe_ptr;
  __t2857t__buf__unsafe_size=__t2856t__buf__unsafe_size;
  __t2857t__buf__unsafe_offset=__t2856t__buf__unsafe_offset;
  __t2857t__buf__unsafe_align=__t2856t__buf__unsafe_align;
  __t2857t__pos=__t2856t__pos;
  surface__buf__unsafe_ptr=__t2857t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2857t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2857t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2857t__buf__unsafe_align;
  surface__pos=__t2857t__pos;
  __t_errcode=copy__t1624t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2858t__unsafe_ptr,&__t2858t__dat__pos,&__t2858t__dat__length,&__t2858t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1624t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2859t__unsafe_ptr,&__t2859t__dat__pos,&__t2859t__dat__length,&__t2859t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1129t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2861t____t1130t__unsafe_ptr,&__t2861t____t1130t__unsafe_size,&__t2861t____t1130t__unsafe_offset,&__t2861t____t1130t__unsafe_align,&__t2861t____t1131t);
  __t2863t=0;
  add__t187t(prev_pos,__t2863t,&__t2864t__);
  __t_complain=str__t1576t(__t2861t____t1130t__unsafe_ptr,__t2861t____t1130t__unsafe_size,__t2861t____t1130t__unsafe_offset,__t2861t____t1130t__unsafe_align,__t2861t____t1131t,__t2864t__,&__t2865t__unsafe_ptr,&__t2865t__dat__pos,&__t2865t__dat__length,&__t2865t__dat__first);
  __t2860t=__t_complain;
  if(__t_complain){
  goto __t2860t__label;
  }
  ret__unsafe_ptr=__t2865t__unsafe_ptr;
  ret__dat__pos=__t2865t__dat__pos;
  ret__dat__length=__t2865t__dat__length;
  ret__dat__first=__t2865t__dat__first;
  __t2860t__label:__t2860t=__t2860t==0;
  __t2841t__unsafe_ptr=ret__unsafe_ptr;
  __t2841t__dat__pos=ret__dat__pos;
  __t2841t__dat__length=ret__dat__length;
  __t2841t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5390t=CHARS__buf__unsafe_ptr;
  *__t5391t=CHARS__buf__unsafe_size;
  *__t5392t=CHARS__buf__unsafe_offset;
  *__t5393t=CHARS__buf__unsafe_align;
  *__t5394t=CHARS__pos;
  *__t5395t=__t2841t__unsafe_ptr;
  *__t5396t=__t2841t__dat__pos;
  *__t5397t=__t2841t__dat__length;
  *__t5398t=__t2841t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1765t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t5399t) {
  int __t1766t=0;
  char __t1767t__=0;
  uint64_t __t1768t__=0;
  char* __t1769t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t372t(i,s__dat__length,&__t1767t__);
  if(__t1767t__){
  __t_errcode=15;
  goto __t_failure;
  }
  add__t187t(s__dat__pos,i,&__t1768t__);
  add__t733t(s__unsafe_ptr,__t1768t__,&__t1769t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5399t=__t1769t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1791t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t5400t, uint64_t* __t5401t, uint64_t* __t5402t, char* __t5403t) {
  char* __t1792t__unsafe_ptr=0;
  uint64_t __t1792t__dat__pos=0;
  uint64_t __t1792t__dat__length=0;
  char __t1792t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1793t__=0;
  char* __t1794t__unsafe_ptr=0;
  uint64_t __t1794t__dat__pos=0;
  uint64_t __t1794t__dat__length=0;
  char __t1794t__dat__first=0;
  char __t1795t__=0;
  char __t1796t__=0;
  char __t1797t=0;
  char __t1798t__=0;
  uint64_t __t1800t__=0;
  uint64_t new_length=0;
  uint64_t __t1801t=0;
  char __t1802t__=0;
  char new_first=0;
  char* __t1804t__=0;
  char __t1805t__value=0;
  uint64_t __t1806t__=0;
  char* __t1807t__unsafe_ptr=0;
  uint64_t __t1807t__dat__pos=0;
  uint64_t __t1807t__dat__length=0;
  char __t1807t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1557t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1792t__unsafe_ptr,&__t1792t__dat__pos,&__t1792t__dat__length,&__t1792t__dat__first);
  s__unsafe_ptr=__t1792t__unsafe_ptr;
  s__dat__pos=__t1792t__dat__pos;
  s__dat__length=__t1792t__dat__length;
  s__dat__first=__t1792t__dat__first;
  eq__t133t(from,to,&__t1793t__);
  if(__t1793t__){
  str__t1580t(__t430t,&__t1794t__unsafe_ptr,&__t1794t__dat__pos,&__t1794t__dat__length,&__t1794t__dat__first);
  goto __t_return;
  }
  gt__t324t(from,to,&__t1795t__);
  if(!__t1795t__){
  gt__t324t(to,s__dat__length,&__t1796t__);
  __t1797t=__t1796t__;
  }
  else{
  __t1797t=0;
  not__t41t(__t1797t,&__t1798t__);
  __t1797t=__t1798t__;
  }
  if(__t1797t){
  __t_errcode=22;
  goto __t_failure;
  }
  sub__t408t(to,from,&__t1800t__);
  new_length=__t1800t__;
  __t1801t=0;
  neq__t157t(from,__t1801t,&__t1802t__);
  if(__t1802t__){
  __t_errcode=get__t1765t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1804t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1804t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1805t__value,__t1804t__,1);
  new_first=__t1805t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t187t(s__dat__pos,from,&__t1806t__);
  str__t1520t(s__unsafe_ptr,__t1806t__,new_length,new_first,&__t1807t__unsafe_ptr,&__t1807t__dat__pos,&__t1807t__dat__length,&__t1807t__dat__first);
  __t1794t__unsafe_ptr=__t1807t__unsafe_ptr;
  __t1794t__dat__pos=__t1807t__dat__pos;
  __t1794t__dat__length=__t1807t__dat__length;
  __t1794t__dat__first=__t1807t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5400t=__t1794t__unsafe_ptr;
  *__t5401t=__t1794t__dat__pos;
  *__t5402t=__t1794t__dat__length;
  *__t5403t=__t1794t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1870t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5404t) {
  char* __t1871t__unsafe_ptr=0;
  uint64_t __t1871t__dat__pos=0;
  uint64_t __t1871t__dat__length=0;
  char __t1871t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1872t__unsafe_ptr=0;
  uint64_t __t1872t__dat__pos=0;
  uint64_t __t1872t__dat__length=0;
  char __t1872t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t1873t=0;
  uint64_t __t1874t__=0;
  uint64_t d=0;
  char __t1875t__=0;
  char __t1876t=0;
  char* __t1877t__unsafe_ptr=0;
  uint64_t __t1877t__dat__pos=0;
  uint64_t __t1877t__dat__length=0;
  char __t1877t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1878t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1557t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1871t__unsafe_ptr,&__t1871t__dat__pos,&__t1871t__dat__length,&__t1871t__dat__first);
  stack__unsafe_ptr=__t1871t__unsafe_ptr;
  stack__dat__pos=__t1871t__dat__pos;
  stack__dat__length=__t1871t__dat__length;
  stack__dat__first=__t1871t__dat__first;
  str__t1580t(_needle,&__t1872t__unsafe_ptr,&__t1872t__dat__pos,&__t1872t__dat__length,&__t1872t__dat__first);
  needle__unsafe_ptr=__t1872t__unsafe_ptr;
  needle__dat__pos=__t1872t__dat__pos;
  needle__dat__length=__t1872t__dat__length;
  needle__dat__first=__t1872t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t400t(n,needle__dat__length,&__t1874t__);
  __t1873t=__t_complain;
  if(__t_complain){
  goto __t1873t__label;
  }
  d=__t1874t__;
  __t1873t__label:__t1873t=__t1873t==0;
  not__t41t(__t1873t,&__t1875t__);
  if(__t1875t__){
  __t1876t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1791t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t1877t__unsafe_ptr,&__t1877t__dat__pos,&__t1877t__dat__length,&__t1877t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1877t__unsafe_ptr;
  ret__dat__pos=__t1877t__dat__pos;
  ret__dat__length=__t1877t__dat__length;
  ret__dat__first=__t1877t__dat__first;
  eq__t1695t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1878t__);
  __t1876t=__t1878t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5404t=__t1876t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t672t(uint64_t to, uint64_t* __t5405t, uint64_t* __t5406t) {
  uint64_t __t673t=0;
  __t673t=0;
  goto __t_return;
  __t_return:
  *__t5405t=__t673t;
  *__t5406t=to;
}

static inline __attribute__((always_inline)) void range__t689t(uint64_t _from, uint64_t to, uint64_t* __t5407t, uint64_t* __t5408t) {
  uint64_t __t690t=0;
  uint64_t from=0;
  __t690t=_from;
  from=__t690t;
  goto __t_return;
  __t_return:
  *__t5407t=from;
  *__t5408t=to;
}

static inline __attribute__((always_inline)) int get__t696t(uint64_t r__from, uint64_t r__to, uint64_t _pos, uint64_t* __t5409t) {
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
  *__t5409t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t1956t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5410t) {
  char* __t1957t__unsafe_ptr=0;
  uint64_t __t1957t__dat__pos=0;
  uint64_t __t1957t__dat__length=0;
  char __t1957t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1958t__unsafe_ptr=0;
  uint64_t __t1958t__dat__pos=0;
  uint64_t __t1958t__dat__length=0;
  char __t1958t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t1959t=0;
  uint64_t __t1960t__=0;
  uint64_t n=0;
  char __t1961t__=0;
  char __t1962t=0;
  uint64_t __t1963t=0;
  uint64_t __t1964t____t673t=0;
  uint64_t __t1964t__to=0;
  uint64_t __t1965t__from=0;
  uint64_t __t1965t__to=0;
  char __t1966t=0;
  uint64_t __t1967t__=0;
  uint64_t i=0;
  char __t1968t=0;
  uint64_t __t1969t__=0;
  char* __t1970t__unsafe_ptr=0;
  uint64_t __t1970t__dat__pos=0;
  uint64_t __t1970t__dat__length=0;
  char __t1970t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t1971t__=0;
  char __t1972t=0;
  char __t1973t=0;
  int __t_complain=0;
  str__t1557t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1957t__unsafe_ptr,&__t1957t__dat__pos,&__t1957t__dat__length,&__t1957t__dat__first);
  stack__unsafe_ptr=__t1957t__unsafe_ptr;
  stack__dat__pos=__t1957t__dat__pos;
  stack__dat__length=__t1957t__dat__length;
  stack__dat__first=__t1957t__dat__first;
  str__t1580t(_needle,&__t1958t__unsafe_ptr,&__t1958t__dat__pos,&__t1958t__dat__length,&__t1958t__dat__first);
  needle__unsafe_ptr=__t1958t__unsafe_ptr;
  needle__dat__pos=__t1958t__dat__pos;
  needle__dat__length=__t1958t__dat__length;
  needle__dat__first=__t1958t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t400t(stack__dat__length,d,&__t1960t__);
  __t1959t=__t_complain;
  if(__t_complain){
  goto __t1959t__label;
  }
  n=__t1960t__;
  __t1959t__label:__t1959t=__t1959t==0;
  not__t41t(__t1959t,&__t1961t__);
  if(__t1961t__){
  __t1962t=0;
  goto __t_return;
  }
  of__t672t(n,&__t1964t____t673t,&__t1964t__to);
  range__t689t(__t1964t____t673t,__t1964t__to,&__t1965t__from,&__t1965t__to);
  __t1963t=0-1;
  while(1){
  __t1963t=__t1963t+1;
  __t_complain=get__t696t(__t1965t__from,__t1965t__to,__t1963t,&__t1967t__);
  __t1966t=__t_complain;
  if(__t_complain){
  goto __t1966t__label;
  }
  i=__t1967t__;
  __t1966t__label:__t1966t=__t1966t==0;
  if(!__t1966t){
  break;
  }
  add__t187t(i,d,&__t1969t__);
  __t_complain=slice__t1791t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t1969t__,&__t1970t__unsafe_ptr,&__t1970t__dat__pos,&__t1970t__dat__length,&__t1970t__dat__first);
  __t1968t=__t_complain;
  if(__t_complain){
  goto __t1968t__label;
  }
  sliced__unsafe_ptr=__t1970t__unsafe_ptr;
  sliced__dat__pos=__t1970t__dat__pos;
  sliced__dat__length=__t1970t__dat__length;
  sliced__dat__first=__t1970t__dat__first;
  __t1968t__label:__t1968t=__t1968t==0;
  eq__t1695t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1971t__);
  if(__t1971t__){
  __t1972t=1;
  __t1962t=__t1972t;
  goto __t_return;
  }
  }
  __t1973t=0;
  __t1962t=__t1973t;
  goto __t_return;
  __t_return:
  *__t5410t=__t1962t;
}

static inline __attribute__((always_inline)) void print__t1759t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1760t=0;
  const char* endl=0;
  endl=__t442t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void popen__t4144t(const char* cmd, char** __t5411t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t5411t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4143t(char* unsafe_ptr, int64_t* __t5412t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t5412t=status;
}

static inline __attribute__((always_inline)) void int__t631t(uint64_t x, int64_t* __t5413t) {
  int __t632t=0;
  int __t633t=0;
  int __t634t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5413t=z;
}

static inline __attribute__((always_inline)) void is_different__t96t(int64_t x, int64_t y, int* __t5414t) {
  int __t97t=0;
  int __t98t__=0;
  not__t50t(__t97t,&__t98t__);
  goto __t_return;
  __t_return:
  *__t5414t=__t98t__;
}

static inline __attribute__((always_inline)) void neq__t146t(int64_t x, int64_t y, char* __t5415t) {
  int __t147t__=0;
  char z=0;
  is_different__t96t(x,y,&__t147t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5415t=z;
}

static inline __attribute__((always_inline)) int open__t4145t(const char* cmd, char** __t5416t) {
  char* __t4146t__=0;
  char* unsafe_ptr=0;
  char __t4147t__=0;
  char __t4148t__=0;
  char __t4149t__=0;
  int64_t __t4150t__=0;
  int64_t status=0;
  uint64_t __t4151t=0;
  int64_t __t4152t__=0;
  char __t4153t__=0;
  char __t4154t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4144t(cmd,&__t4146t__);
  unsafe_ptr=__t4146t__;
  exists__t651t(unsafe_ptr,&__t4147t__);
  not__t41t(__t4147t__,&__t4148t__);
  if(__t4148t__){
  __t_errcode=37;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t651t(unsafe_ptr,&__t4149t__);
  if(__t4149t__){
  pclose__t4143t(unsafe_ptr,&__t4150t__);
  status=__t4150t__;
  unsafe_ptr=0;
  __t4151t=0;
  int__t631t(__t4151t,&__t4152t__);
  neq__t146t(status,__t4152t__,&__t4153t__);
  if(__t4153t__){
  __t_complain=38;
  goto __t4154t__label;
  __t4154t__label:__t4154t=__t4154t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5416t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4156t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t5417t) {
  const char* __t4157t__cstr=0;
  char* __t4157t__str__unsafe_ptr=0;
  uint64_t __t4157t__str__dat__pos=0;
  uint64_t __t4157t__str__dat__length=0;
  char __t4157t__str__dat__first=0;
  const char* __t4159t__=0;
  char* __t4160t__unsafe_ptr=0;
  char __t4161t____t4149t__=0;
  int64_t __t4161t____t4150t__=0;
  int64_t __t4161t__status=0;
  uint64_t __t4161t____t4151t=0;
  int64_t __t4161t____t4152t__=0;
  char __t4161t____t4153t__=0;
  char __t4161t____t4154t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1678t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4157t__cstr,&__t4157t__str__unsafe_ptr,&__t4157t__str__dat__pos,&__t4157t__str__dat__length,&__t4157t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1688t(__t4157t__cstr,__t4157t__str__unsafe_ptr,__t4157t__str__dat__pos,__t4157t__str__dat__length,__t4157t__str__dat__first,&__t4159t__);
  __t_errcode=open__t4145t(__t4159t__,&__t4160t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t651t(__t4160t__unsafe_ptr,&__t4161t____t4149t__);
  if(__t4161t____t4149t__){
  pclose__t4143t(__t4160t__unsafe_ptr,&__t4161t____t4150t__);
  __t4161t__status=__t4161t____t4150t__;
  __t4160t__unsafe_ptr=0;
  __t4161t____t4151t=0;
  int__t631t(__t4161t____t4151t,&__t4161t____t4152t__);
  neq__t146t(__t4161t__status,__t4161t____t4152t__,&__t4161t____t4153t__);
  if(__t4161t____t4153t__){
  __t_complain=38;
  goto __t4154t__label;
  __t4154t__label:__t4161t____t4154t=__t4161t____t4154t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5417t=__t4160t__unsafe_ptr;
  
  __t_skip_returns:free__t731t(&__t4157t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t4118t(int64_t value, const char** __t5418t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5418t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t5419t) {
  const char* value=0;
  *__t5419t=value;
}

int run__t4967t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t5420t) {
  char* __t4968t__unsafe_ptr=0;
  char __t4969t____t4161t____t4149t__=0;
  int64_t __t4969t____t4161t____t4150t__=0;
  int64_t __t4969t____t4161t__status=0;
  uint64_t __t4969t____t4161t____t4151t=0;
  int64_t __t4969t____t4161t____t4152t__=0;
  char __t4969t____t4161t____t4153t__=0;
  char __t4969t____t4161t____t4154t=0;
  char* proc__unsafe_ptr=0;
  char __t4970t=0;
  int64_t __t4971t=0;
  int64_t error=0;
  const char* __t4972t__=0;
  const char* __t4973t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4156t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t4968t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t4968t__unsafe_ptr;
  exists__t651t(__t4968t__unsafe_ptr,&__t4969t____t4161t____t4149t__);
  if(__t4969t____t4161t____t4149t__){
  pclose__t4143t(__t4968t__unsafe_ptr,&__t4969t____t4161t____t4150t__);
  __t4969t____t4161t__status=__t4969t____t4161t____t4150t__;
  __t4968t__unsafe_ptr=0;
  __t4969t____t4161t____t4151t=0;
  int__t631t(__t4969t____t4161t____t4151t,&__t4969t____t4161t____t4152t__);
  neq__t146t(__t4969t____t4161t__status,__t4969t____t4161t____t4152t__,&__t4969t____t4161t____t4153t__);
  if(__t4969t____t4161t____t4153t__){
  __t_complain=38;
  goto __t4154t__label;
  __t4154t__label:__t4969t____t4161t____t4154t=__t4969t____t4161t____t4154t==0;
  }
  }
  __t4971t=__t_complain;
  __t4970t=(__t_complain==0);
  __t_complain=0;
  error=__t4971t;
  __t4970t__label:__t4970t=__t4970t==0;
  if(__t4970t){
  cstr__t4118t(error,&__t4972t__);
  goto __t_return;
  }
  cstr__t1t(&__t4973t__);
  __t4972t__=__t4973t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5420t=__t4972t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5421t) {
  int value=0;
  *__t5421t=value;
}

static inline __attribute__((always_inline)) void not__t52t(int __t_anon0, int* __t5422t) {
  int __t53t__=0;
  true__t15t(&__t53t__);
  goto __t_return;
  __t_return:
  *__t5422t=__t53t__;
}

static inline __attribute__((always_inline)) void exists__t1518t(const char* c, char* __t5423t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5423t=z;
}

static inline __attribute__((always_inline)) void nn__t429t(const char* value, const char** __t5424t, const char** __t5425t) {
  const char* __t431t=0;
  __t431t=__t430t;
  goto __t_return;
  __t_return:
  *__t5424t=value;
  *__t5425t=__t431t;
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

static inline __attribute__((always_inline)) void print_marker__t5003t(char colors__initialized) {
  const char* __t5005t__value=0;
  const char* __t5005t____t431t=0;
  int __t5007t=0;
  char __t5008t=0;
  char __t5009t=0;
  const char* __t5014t__value=0;
  const char* __t5014t____t431t=0;
  int __t5016t=0;
  const char* __t5019t__value=0;
  const char* __t5019t____t431t=0;
  nn__t429t(__t4985t,&__t5005t__value,&__t5005t____t431t);
  print__t438t(__t5005t__value,__t5005t____t431t);
  __t5009t=1;
  if(__t5010t!=__t5010t){
  __t5009t=0;
  }
  if(__t5009t){
  __t5008t=1;
  }
  if(__t5008t){
  set__t474t(colors__initialized);
  nn__t429t(__t5013t,&__t5014t__value,&__t5014t____t431t);
  print__t438t(__t5014t__value,__t5014t____t431t);
  }
  set__t594t(colors__initialized);
  nn__t429t(__t5000t,&__t5019t__value,&__t5019t____t431t);
  print__t438t(__t5019t__value,__t5019t____t431t);
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

static inline __attribute__((always_inline)) void print_marker__t4983t(char colors__initialized) {
  const char* __t4986t__value=0;
  const char* __t4986t____t431t=0;
  char __t4988t=0;
  char __t4989t=0;
  const char* __t4994t__value=0;
  const char* __t4994t____t431t=0;
  int __t4996t=0;
  int __t4997t=0;
  const char* __t5001t__value=0;
  const char* __t5001t____t431t=0;
  nn__t429t(__t4985t,&__t4986t__value,&__t4986t____t431t);
  print__t438t(__t4986t__value,__t4986t____t431t);
  __t4989t=1;
  if(__t4990t!=__t4990t){
  __t4989t=0;
  }
  if(__t4989t){
  __t4988t=1;
  }
  if(__t4988t){
  set__t478t(colors__initialized);
  nn__t429t(__t4993t,&__t4994t__value,&__t4994t____t431t);
  print__t438t(__t4994t__value,__t4994t____t431t);
  }
  set__t594t(colors__initialized);
  nn__t429t(__t5000t,&__t5001t__value,&__t5001t____t431t);
  print__t438t(__t5001t__value,__t5001t____t431t);
}

static inline __attribute__((always_inline)) int test__t5063t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t5426t) {
  const char* __t5066t__=0;
  const char* __t5067t=0;
  const char* error=0;
  int __t5068t=0;
  int __t5069t__=0;
  char __t5070t__=0;
  const char* __t5071t__=0;
  const char* __t5073t__value=0;
  const char* __t5073t____t431t=0;
  char __t5075t__=0;
  char __t5079t=0;
  char __t5084t=0;
  int __t_errcode=0;
  int __t_complain=0;
  print__t1759t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t4967t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5066t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5067t=__t5066t__;
  error=__t5067t;
  not__t52t(__t5068t,&__t5069t__);
  if(should_fail){
  exists__t1518t(error,&__t5070t__);
  if(__t5070t__){
  cstr__t1t(&__t5071t__);
  error=__t5071t__;
  }
  else{
  error=__t5072t;
  }
  }
  nn__t429t(__t5047t,&__t5073t__value,&__t5073t____t431t);
  print__t438t(__t5073t__value,__t5073t____t431t);
  exists__t1518t(error,&__t5075t__);
  if(__t5075t__){
  print_marker__t5003t(colors__initialized);
  print__t440t(error);
  __t5079t=0;
  goto __t_return;
  }
  print_marker__t4983t(colors__initialized);
  print__t440t(__t5082t);
  __t5084t=1;
  __t5079t=__t5084t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5426t=__t5079t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t451t(uint64_t value, const char* endl) {
  int __t452t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t436t(uint64_t value, uint64_t* __t5427t, const char** __t5428t) {
  const char* __t437t=0;
  __t437t=__t430t;
  goto __t_return;
  __t_return:
  *__t5427t=value;
  *__t5428t=__t437t;
}

static inline __attribute__((always_inline)) int main__t5121t() {
  char* __t5123t__unsafe_ptr=0;
  uint64_t __t5123t__dat__pos=0;
  uint64_t __t5123t__dat__length=0;
  char __t5123t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5126t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5128t=0;
  char* __t5129t__unsafe_ptr=0;
  uint64_t __t5129t__unsafe_size=0;
  uint32_t __t5129t__unsafe_offset=0;
  uint32_t __t5129t__unsafe_align=0;
  char* __t5131t__buf__unsafe_ptr=0;
  uint64_t __t5131t__buf__unsafe_size=0;
  uint32_t __t5131t__buf__unsafe_offset=0;
  uint32_t __t5131t__buf__unsafe_align=0;
  uint64_t __t5131t__pos=0;
  char* __t5132t__buf__unsafe_ptr=0;
  uint64_t __t5132t__buf__unsafe_size=0;
  uint32_t __t5132t__buf__unsafe_offset=0;
  uint32_t __t5132t__buf__unsafe_align=0;
  uint64_t __t5132t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t5134t__unsafe_ptr=0;
  uint64_t __t5134t__dat__pos=0;
  uint64_t __t5134t__dat__length=0;
  char __t5134t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  uint64_t __t5135t=0;
  uint64_t __t5136t=0;
  uint64_t counter=0;
  uint64_t __t5137t=0;
  uint64_t __t5138t=0;
  uint64_t failures=0;
  uint64_t __t5139t=0;
  char* __t5140t__unsafe_ptr=0;
  char __t5142t=0;
  char* __t5143t__unsafe_ptr=0;
  uint64_t __t5143t__dat__pos=0;
  uint64_t __t5143t__dat__length=0;
  char __t5143t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5145t__=0;
  char __t5146t__=0;
  char __t5147t__=0;
  char __t5148t=0;
  char __t5149t__=0;
  uint64_t __t5150t__=0;
  uint64_t __t5151t____t5118t=0;
  uint64_t __t5151t____t5120t__=0;
  char* __t5152t__unsafe_ptr=0;
  uint64_t __t5152t__dat__pos=0;
  uint64_t __t5152t__dat__length=0;
  char __t5152t__dat__first=0;
  char* __t5154t__unsafe_ptr=0;
  uint64_t __t5154t__dat__pos=0;
  uint64_t __t5154t__dat__length=0;
  char __t5154t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5155t=0;
  char* __t5156t__unsafe_ptr=0;
  char __t5158t=0;
  char* __t5159t__unsafe_ptr=0;
  uint64_t __t5159t__dat__pos=0;
  uint64_t __t5159t__dat__length=0;
  char __t5159t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5161t__=0;
  char __t5162t__=0;
  uint64_t __t5163t__=0;
  uint64_t __t5164t____t5118t=0;
  uint64_t __t5164t____t5120t__=0;
  uint64_t __t5165t=0;
  uint64_t __t5166t__=0;
  char __t5168t__=0;
  char should_fail=0;
  char* __t5169t__unsafe_ptr=0;
  uint64_t __t5169t__dat__pos=0;
  uint64_t __t5169t__dat__length=0;
  char __t5169t__dat__first=0;
  char* __t5170t__unsafe_ptr=0;
  uint64_t __t5170t__dat__pos=0;
  uint64_t __t5170t__dat__length=0;
  char __t5170t__dat__first=0;
  char __t5171t__=0;
  char __t5172t__=0;
  uint64_t __t5173t=0;
  uint64_t __t5174t__=0;
  uint64_t __t5175t=0;
  char __t5176t__=0;
  const char* __t5190t__value=0;
  const char* __t5190t____t431t=0;
  const char* __t5180t__value=0;
  const char* __t5180t____t431t=0;
  const char* __t5185t__value=0;
  const char* __t5185t____t431t=0;
  uint64_t __t5196t__value=0;
  const char* __t5196t____t437t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1580t(__t5122t,&__t5123t__unsafe_ptr,&__t5123t__dat__pos,&__t5123t__dat__length,&__t5123t__dat__first);
  test_root__unsafe_ptr=__t5123t__unsafe_ptr;
  test_root__dat__pos=__t5123t__dat__pos;
  test_root__dat__length=__t5123t__dat__length;
  test_root__dat__first=__t5123t__dat__first;
  console__t418t();
  colors__t468t(&__t5126t__initialized);
  colors__initialized=__t5126t__initialized;
  __t5128t=128;
  __t_errcode=alloc__t1008t(__t5128t,&__t5129t__unsafe_ptr,&__t5129t__unsafe_size,&__t5129t__unsafe_offset,&__t5129t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1123t(&__t5129t__unsafe_ptr,&__t5129t__unsafe_size,&__t5129t__unsafe_offset,&__t5129t__unsafe_align,&__t5131t__buf__unsafe_ptr,&__t5131t__buf__unsafe_size,&__t5131t__buf__unsafe_offset,&__t5131t__buf__unsafe_align,&__t5131t__pos);
  __t5132t__buf__unsafe_ptr=__t5131t__buf__unsafe_ptr;
  __t5132t__buf__unsafe_size=__t5131t__buf__unsafe_size;
  __t5132t__buf__unsafe_offset=__t5131t__buf__unsafe_offset;
  __t5132t__buf__unsafe_align=__t5131t__buf__unsafe_align;
  __t5132t__pos=__t5131t__pos;
  CHARS__buf__unsafe_ptr=__t5132t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5132t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5132t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5132t__buf__unsafe_align;
  CHARS__pos=__t5132t__pos;
  __t_errcode=copy__t1629t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5133t,&__t5134t__unsafe_ptr,&__t5134t__dat__pos,&__t5134t__dat__length,&__t5134t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5134t__unsafe_ptr;
  command_base__dat__pos=__t5134t__dat__pos;
  command_base__dat__length=__t5134t__dat__length;
  command_base__dat__first=__t5134t__dat__first;
  __t5135t=0;
  __t5136t=__t5135t;
  counter=__t5136t;
  __t5137t=0;
  __t5138t=__t5137t;
  failures=__t5138t;
  __t_errcode=open__t4843t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5140t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5139t=0-1;
  while(1){
  __t5139t=__t5139t+1;
  __t_complain=get__t4926t(&__t5140t__unsafe_ptr,__t5139t,&__t5143t__unsafe_ptr,&__t5143t__dat__pos,&__t5143t__dat__length,&__t5143t__dat__first);
  __t5142t=__t_complain;
  if(__t_complain){
  goto __t5142t__label;
  }
  path__unsafe_ptr=__t5143t__unsafe_ptr;
  path__dat__pos=__t5143t__dat__pos;
  path__dat__length=__t5143t__dat__length;
  path__dat__first=__t5143t__dat__first;
  __t5142t__label:__t5142t=__t5142t==0;
  if(!__t5142t){
  break;
  }
  eq__t1702t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5144t,&__t5145t__);
  if(!__t5145t__){
  __t_errcode=is_dir__t4770t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5146t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t5146t__,&__t5147t__);
  __t5148t=__t5147t__;
  }
  else{
  __t5148t=0;
  not__t41t(__t5148t,&__t5149t__);
  __t5148t=__t5149t__;
  }
  if(__t5148t){
  continue;
  }
  reuse__t5115t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5150t__);
  __t_errcode=add__t2776t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5152t__unsafe_ptr,&__t5152t__dat__pos,&__t5152t__dat__length,&__t5152t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2821t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5152t__unsafe_ptr,__t5152t__dat__pos,__t5152t__dat__length,__t5152t__dat__first,__t5153t,&__t5154t__unsafe_ptr,&__t5154t__dat__pos,&__t5154t__dat__length,&__t5154t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5154t__unsafe_ptr;
  dir_path__dat__pos=__t5154t__dat__pos;
  dir_path__dat__length=__t5154t__dat__length;
  dir_path__dat__first=__t5154t__dat__first;
  __t_errcode=open__t4843t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5156t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5155t=0-1;
  while(1){
  __t5155t=__t5155t+1;
  __t_complain=get__t4926t(&__t5156t__unsafe_ptr,__t5155t,&__t5159t__unsafe_ptr,&__t5159t__dat__pos,&__t5159t__dat__length,&__t5159t__dat__first);
  __t5158t=__t_complain;
  if(__t_complain){
  goto __t5158t__label;
  }
  entry__unsafe_ptr=__t5159t__unsafe_ptr;
  entry__dat__pos=__t5159t__dat__pos;
  entry__dat__length=__t5159t__dat__length;
  entry__dat__first=__t5159t__dat__first;
  __t5158t__label:__t5158t=__t5158t==0;
  if(!__t5158t){
  break;
  }
  __t_errcode=ends_with__t1870t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5160t,&__t5161t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t5161t__,&__t5162t__);
  if(__t5162t__){
  continue;
  }
  reuse__t5115t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5163t__);
  __t5165t=1;
  add__t187t(counter,__t5165t,&__t5166t__);
  counter=__t5166t__;
  contains__t1956t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5167t,&__t5168t__);
  should_fail=__t5168t__;
  __t_errcode=add__t2776t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5169t__unsafe_ptr,&__t5169t__dat__pos,&__t5169t__dat__length,&__t5169t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2776t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5169t__unsafe_ptr,__t5169t__dat__pos,__t5169t__dat__length,__t5169t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5170t__unsafe_ptr,&__t5170t__dat__pos,&__t5170t__dat__length,&__t5170t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5063t(colors__initialized,__t5170t__unsafe_ptr,__t5170t__dat__pos,__t5170t__dat__length,__t5170t__dat__first,should_fail,&__t5171t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t41t(__t5171t__,&__t5172t__);
  if(__t5172t__){
  __t5173t=1;
  add__t187t(failures,__t5173t,&__t5174t__);
  failures=__t5174t__;
  }
  __t5164t____t5118t=0;
  sub__t408t(__t5163t__,__t5164t____t5118t,&__t5164t____t5120t__);
  CHARS__pos=__t5164t____t5120t__;
  }
  __t5151t____t5118t=0;
  sub__t408t(__t5150t__,__t5151t____t5118t,&__t5151t____t5120t__);
  CHARS__pos=__t5151t____t5120t__;
  closedir__t4833t(__t5156t__unsafe_ptr);
  }
  __t5175t=0;
  eq__t133t(failures,__t5175t,&__t5176t__);
  if(__t5176t__){
  set__t478t(colors__initialized);
  nn__t429t(__t5179t,&__t5180t__value,&__t5180t____t431t);
  print__t438t(__t5180t__value,__t5180t____t431t);
  set__t594t(colors__initialized);
  nn__t429t(__t5184t,&__t5185t__value,&__t5185t____t431t);
  print__t438t(__t5185t__value,__t5185t____t431t);
  }
  else{
  set__t474t(colors__initialized);
  nn__t429t(__t5189t,&__t5190t__value,&__t5190t____t431t);
  print__t438t(__t5190t__value,__t5190t____t431t);
  set__t594t(colors__initialized);
  print__t451t(failures,__t5194t);
  }
  nn__t436t(counter,&__t5196t__value,&__t5196t____t437t);
  print__t451t(__t5196t__value,__t5196t____t437t);
  print__t440t(__t5198t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t4833t(__t5140t__unsafe_ptr);
  free__t731t(&__t5129t__unsafe_ptr);
  if(__t5126t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t5121t();
                }