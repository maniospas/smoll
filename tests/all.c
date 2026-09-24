#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5616t="no errors across ";
const char* const __t5426t="failure";
const char* const __t5406t="success";
const char* const __t5542t="./tests/passing/";
const char* const __t5626t=" out of ";
const char* const __t4273t="[";
const char* const __t5429t="X";
const char* const __t5611t="PASSING ";
const char* const __t5416t="] ";
const char* const __t5556t=" --cleanup ";
const char* const __t5563t="./smoll --cleanup ";
const char* const __t5574t="..";
const char* const __t5409t="V";
const char* const __t5552t="--testback";
const char* const __t5597t="_fail_";
const char* const __t5621t="FAILED ";
const char* const __t5554t="./smoll --back ";
const char* const __t452t="\n";
const char* const __t5590t=".s";
const char* const __t5583t="/";
const char* const __t5500t="completed";
const char* const __t5463t=" |- ";
const char* const __t440t="";
const char* const __t5490t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t5630t=" tests";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1593t(char** __t5641t, uint64_t* __t5642t, uint32_t* __t5643t, uint32_t* __t5644t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5641t=unsafe_ptr;
  *__t5642t=unsafe_size;
  *__t5643t=unsafe_offset;
  *__t5644t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5645t) {
  *__t5645t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5646t) {
  int value=0;
  *__t5646t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5647t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5647t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5648t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5648t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5649t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5649t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5650t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5650t=z;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t5651t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5651t=z;
}

static inline __attribute__((always_inline)) void nat__t695t(uint32_t x, uint64_t* __t5652t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5652t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5653t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5653t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5654t) {
  *__t5654t=to;
}

static inline __attribute__((always_inline)) void add__t817t(char* allocated, uint64_t offset, char** __t5655t) {
  char* element=0;
  char* __t818t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t818t__);
  goto __t_return;
  __t_return:
  *__t5655t=__t818t__;
}

static inline __attribute__((always_inline)) int get__t1160t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5656t) {
  int __t1161t=0;
  char __t1162t__=0;
  uint64_t __t1163t__=0;
  uint64_t __t1164t__=0;
  uint64_t __t1165t__=0;
  uint64_t __t1166t__=0;
  char* __t1167t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,buffer__unsafe_size,&__t1162t__);
  if(__t1162t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t695t(buffer__unsafe_align,&__t1163t__);
  mul__t212t(i,__t1163t__,&__t1164t__);
  nat__t695t(buffer__unsafe_offset,&__t1165t__);
  add__t188t(__t1164t__,__t1165t__,&__t1166t__);
  add__t817t(buffer__unsafe_ptr,__t1166t__,&__t1167t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5656t=__t1167t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1618t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5657t, uint64_t* __t5658t, uint64_t* __t5659t, char* __t5660t) {
  goto __t_return;
  __t_return:
  *__t5657t=unsafe_ptr;
  *__t5658t=dat__pos;
  *__t5659t=dat__length;
  *__t5660t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1622t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5661t, uint64_t* __t5662t, uint64_t* __t5663t, char* __t5664t) {
  char* unsafe_ptr=0;
  uint64_t __t1623t__=0;
  uint64_t __t1624t=0;
  char __t1625t__=0;
  uint64_t __t1626t__=0;
  uint64_t __t1627t=0;
  char __t1628t__=0;
  char* __t1629t__unsafe_ptr=0;
  uint64_t __t1629t__dat__pos=0;
  uint64_t __t1629t__dat__length=0;
  char __t1629t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t695t(buf__unsafe_align,&__t1623t__);
  __t1624t=1;
  neq__t158t(__t1623t__,__t1624t,&__t1625t__);
  if(__t1625t__){
  __t_errcode=25;
  goto __t_failure;
  }
  nat__t695t(buf__unsafe_offset,&__t1626t__);
  __t1627t=0;
  neq__t158t(__t1626t__,__t1627t,&__t1628t__);
  if(__t1628t__){
  __t_errcode=26;
  goto __t_failure;
  }
  str__t1618t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1629t__unsafe_ptr,&__t1629t__dat__pos,&__t1629t__dat__length,&__t1629t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5661t=__t1629t__unsafe_ptr;
  *__t5662t=__t1629t__dat__pos;
  *__t5663t=__t1629t__dat__length;
  *__t5664t=__t1629t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1656t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5665t, uint64_t* __t5666t, uint64_t* __t5667t, char* __t5668t) {
  uint64_t __t1657t=0;
  char __t1658t__=0;
  char* __t1660t__=0;
  char __t1661t__value=0;
  char first=0;
  char* __t1662t__unsafe_ptr=0;
  uint64_t __t1662t__dat__pos=0;
  uint64_t __t1662t__dat__length=0;
  char __t1662t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1657t=0;
  neq__t158t(length,__t1657t,&__t1658t__);
  if(__t1658t__){
  __t_errcode=get__t1160t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1660t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1660t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1661t__value,__t1660t__,1);
  first=__t1661t__value;
  }
  __t_errcode=str__t1622t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1662t__unsafe_ptr,&__t1662t__dat__pos,&__t1662t__dat__length,&__t1662t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5665t=__t1662t__unsafe_ptr;
  *__t5666t=__t1662t__dat__pos;
  *__t5667t=__t1662t__dat__length;
  *__t5668t=__t1662t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1678t(const char* c, char** __t5669t, uint64_t* __t5670t, uint64_t* __t5671t, char* __t5672t) {
  char* __t1679t__unsafe_ptr=0;
  uint64_t __t1679t__unsafe_size=0;
  uint32_t __t1679t__unsafe_offset=0;
  uint32_t __t1679t__unsafe_align=0;
  char* __t1680t__unsafe_ptr=0;
  uint64_t __t1680t__unsafe_size=0;
  uint32_t __t1680t__unsafe_offset=0;
  uint32_t __t1680t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1681t__=0;
  uint64_t length=0;
  uint64_t __t1682t=0;
  uint64_t __t1683t__=0;
  char __t1684t=0;
  uint64_t __t1685t=0;
  char* __t1687t__unsafe_ptr=0;
  uint64_t __t1687t__dat__pos=0;
  uint64_t __t1687t__dat__length=0;
  char __t1687t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1593t(&__t1679t__unsafe_ptr,&__t1679t__unsafe_size,&__t1679t__unsafe_offset,&__t1679t__unsafe_align);
  __t1680t__unsafe_ptr=__t1679t__unsafe_ptr;
  __t1680t__unsafe_size=__t1679t__unsafe_size;
  __t1680t__unsafe_offset=__t1679t__unsafe_offset;
  __t1680t__unsafe_align=__t1679t__unsafe_align;
  buf__unsafe_ptr=__t1680t__unsafe_ptr;
  buf__unsafe_size=__t1680t__unsafe_size;
  buf__unsafe_offset=__t1680t__unsafe_offset;
  buf__unsafe_align=__t1680t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1681t__);
  buf__unsafe_ptr=__t1681t__;
  if(c){
  length=strlen(c);
  }
  __t1682t=1;
  add__t188t(length,__t1682t,&__t1683t__);
  buf__unsafe_size=__t1683t__;
  __t1685t=0;
  __t_complain=str__t1656t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1685t,length,&__t1687t__unsafe_ptr,&__t1687t__dat__pos,&__t1687t__dat__length,&__t1687t__dat__first);
  __t1684t=__t_complain;
  if(__t_complain){
  goto __t1684t__label;
  }
  ret__unsafe_ptr=__t1687t__unsafe_ptr;
  ret__dat__pos=__t1687t__dat__pos;
  ret__dat__length=__t1687t__dat__length;
  ret__dat__first=__t1687t__dat__first;
  __t1684t__label:__t1684t=__t1684t==0;
  goto __t_return;
  __t_return:
  *__t5669t=ret__unsafe_ptr;
  *__t5670t=ret__dat__pos;
  *__t5671t=ret__dat__length;
  *__t5672t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t477t(char* __t5673t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5673t=supports;
}

static inline __attribute__((always_inline)) void colors__t478t(char* __t5674t) {
  char __t479t__=0;
  char initialized=0;
  supports_ansi__t477t(&__t479t__);
  initialized=__t479t__;
  goto __t_return;
  __t_return:
  *__t5674t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1097t(char** __t5675t, uint64_t* __t5676t, uint32_t* __t5677t, uint32_t* __t5678t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5675t=unsafe_ptr;
  *__t5676t=unsafe_size;
  *__t5677t=unsafe_offset;
  *__t5678t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t815t(char** __t5679t) {
  char* allocated=*__t5679t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t5679t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5680t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5680t=z;
}

static inline __attribute__((always_inline)) void zero__t816t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t654t(char* x, char* __t5681t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5681t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5682t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5682t=z;
}

static inline __attribute__((always_inline)) int alloc__t799t(uint64_t bytes, char** __t5683t) {
  char* allocated=0;
  char __t800t__=0;
  char __t801t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t654t(allocated,&__t800t__);
  not__t42t(__t800t__,&__t801t__);
  if(__t801t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5683t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t940t(char** __t5684t, uint64_t* __t5685t, uint32_t* __t5686t, uint32_t* __t5687t, uint64_t size, char** __t5688t, uint64_t* __t5689t, uint32_t* __t5690t, uint32_t* __t5691t) {
  char* buffer__unsafe_ptr=*__t5684t;
  uint64_t buffer__unsafe_size=*__t5685t;
  uint32_t buffer__unsafe_offset=*__t5686t;
  uint32_t buffer__unsafe_align=*__t5687t;
  int __t941t=0;
  int __t942t=0;
  char __t944t__=0;
  uint64_t __t945t=0;
  char __t946t__=0;
  char __t947t=0;
  uint64_t __t948t=0;
  uint64_t __t949t__=0;
  uint64_t __t950t__=0;
  int __t952t=0;
  uint64_t __t953t=0;
  char __t954t__=0;
  uint64_t __t955t__=0;
  uint64_t __t956t__=0;
  uint64_t bytes=0;
  int __t957t=0;
  uint64_t __t958t=0;
  char __t959t__=0;
  char* __t960t__=0;
  int __t961t=0;
  uint64_t __t962t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t944t__);
  if(__t944t__){
  __t945t=0;
  neq__t158t(size,__t945t,&__t946t__);
  __t947t=__t946t__;
  }
  if(__t947t){
  __t948t=0;
  nat__t695t(buffer__unsafe_align,&__t949t__);
  mul__t212t(__t949t__,size,&__t950t__);
  zero__t816t(buffer__unsafe_ptr,__t948t,__t950t__);
  goto __t_return;
  }
  __t953t=0;
  neq__t158t(buffer__unsafe_size,__t953t,&__t954t__);
  if(__t954t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t695t(buffer__unsafe_align,&__t955t__);
  mul__t212t(__t955t__,size,&__t956t__);
  bytes=__t956t__;
  __t958t=0;
  eq__t134t(bytes,__t958t,&__t959t__);
  if(__t959t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t799t(bytes,&__t960t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t962t=0;
  zero__t816t(__t960t__,__t962t,bytes);
  buffer__unsafe_ptr=__t960t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t815t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5684t=buffer__unsafe_ptr;
  *__t5685t=buffer__unsafe_size;
  *__t5686t=buffer__unsafe_offset;
  *__t5687t=buffer__unsafe_align;
  *__t5688t=buffer__unsafe_ptr;
  *__t5689t=buffer__unsafe_size;
  *__t5690t=buffer__unsafe_offset;
  *__t5691t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int alloc__t1095t(uint64_t size, char** __t5692t, uint64_t* __t5693t, uint32_t* __t5694t, uint32_t* __t5695t) {
  char __t1096t=0;
  char* __t1099t__unsafe_ptr=0;
  uint64_t __t1099t__unsafe_size=0;
  uint32_t __t1099t__unsafe_offset=0;
  uint32_t __t1099t__unsafe_align=0;
  char* __t1100t__unsafe_ptr=0;
  uint64_t __t1100t__unsafe_size=0;
  uint32_t __t1100t__unsafe_offset=0;
  uint32_t __t1100t__unsafe_align=0;
  char* __t1102t__unsafe_ptr=0;
  uint64_t __t1102t__unsafe_size=0;
  uint32_t __t1102t__unsafe_offset=0;
  uint32_t __t1102t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  char __t1103t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1097t(&__t1099t__unsafe_ptr,&__t1099t__unsafe_size,&__t1099t__unsafe_offset,&__t1099t__unsafe_align);
  __t_complain=alloc__t940t(&__t1099t__unsafe_ptr,&__t1099t__unsafe_size,&__t1099t__unsafe_offset,&__t1099t__unsafe_align,size,&__t1100t__unsafe_ptr,&__t1100t__unsafe_size,&__t1100t__unsafe_offset,&__t1100t__unsafe_align);
  __t1096t=__t_complain;
  if(__t_complain){
  goto __t1096t__label;
  }
  __t1102t__unsafe_ptr=__t1100t__unsafe_ptr;
  __t1102t__unsafe_size=__t1100t__unsafe_size;
  __t1102t__unsafe_offset=__t1100t__unsafe_offset;
  __t1102t__unsafe_align=__t1100t__unsafe_align;
  ret__unsafe_ptr=__t1102t__unsafe_ptr;
  ret__unsafe_size=__t1102t__unsafe_size;
  ret__unsafe_offset=__t1102t__unsafe_offset;
  ret__unsafe_align=__t1102t__unsafe_align;
  __t1096t__label:__t1096t=__t1096t==0;
  not__t42t(__t1096t,&__t1103t__);
  if(__t1103t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t815t(&ret__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5692t=ret__unsafe_ptr;
  *__t5693t=ret__unsafe_size;
  *__t5694t=ret__unsafe_offset;
  *__t5695t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1211t(char** __t5696t, uint64_t* __t5697t, uint32_t* __t5698t, uint32_t* __t5699t, uint64_t _pos, char** __t5700t, uint64_t* __t5701t, uint32_t* __t5702t, uint32_t* __t5703t, uint64_t* __t5704t) {
  char* buf__unsafe_ptr=*__t5696t;
  uint64_t buf__unsafe_size=*__t5697t;
  uint32_t buf__unsafe_offset=*__t5698t;
  uint32_t buf__unsafe_align=*__t5699t;
  uint64_t __t1212t=0;
  uint64_t pos=0;
  __t1212t=_pos;
  pos=__t1212t;
  goto __t_return;
  __t_return:
  *__t5696t=buf__unsafe_ptr;
  *__t5697t=buf__unsafe_size;
  *__t5698t=buf__unsafe_offset;
  *__t5699t=buf__unsafe_align;
  *__t5700t=buf__unsafe_ptr;
  *__t5701t=buf__unsafe_size;
  *__t5702t=buf__unsafe_offset;
  *__t5703t=buf__unsafe_align;
  *__t5704t=pos;
}

static inline __attribute__((always_inline)) void arena__t1214t(char** __t5705t, uint64_t* __t5706t, uint32_t* __t5707t, uint32_t* __t5708t, char** __t5709t, uint64_t* __t5710t, uint32_t* __t5711t, uint32_t* __t5712t, uint64_t* __t5713t) {
  char* buf__unsafe_ptr=*__t5705t;
  uint64_t buf__unsafe_size=*__t5706t;
  uint32_t buf__unsafe_offset=*__t5707t;
  uint32_t buf__unsafe_align=*__t5708t;
  uint64_t __t1215t=0;
  char* __t1216t__buf__unsafe_ptr=0;
  uint64_t __t1216t__buf__unsafe_size=0;
  uint32_t __t1216t__buf__unsafe_offset=0;
  uint32_t __t1216t__buf__unsafe_align=0;
  uint64_t __t1216t__pos=0;
  __t1215t=0;
  arena__t1211t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1215t,&__t1216t__buf__unsafe_ptr,&__t1216t__buf__unsafe_size,&__t1216t__buf__unsafe_offset,&__t1216t__buf__unsafe_align,&__t1216t__pos);
  goto __t_return;
  __t_return:
  *__t5705t=buf__unsafe_ptr;
  *__t5706t=buf__unsafe_size;
  *__t5707t=buf__unsafe_offset;
  *__t5708t=buf__unsafe_align;
  *__t5709t=__t1216t__buf__unsafe_ptr;
  *__t5710t=__t1216t__buf__unsafe_size;
  *__t5711t=__t1216t__buf__unsafe_offset;
  *__t5712t=__t1216t__buf__unsafe_align;
  *__t5713t=__t1216t__pos;
}

static inline __attribute__((always_inline)) void argument____t_buffer____buffer__t4398t(char** __t5714t, uint64_t* __t5715t, uint32_t* __t5716t, uint32_t* __t5717t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t5714t=unsafe_ptr;
  *__t5715t=unsafe_size;
  *__t5716t=unsafe_offset;
  *__t5717t=unsafe_align;
}

static inline __attribute__((always_inline)) void args__t4397t(char** __t5718t, uint64_t* __t5719t, uint32_t* __t5720t, uint32_t* __t5721t) {
  char* __t4400t__unsafe_ptr=0;
  uint64_t __t4400t__unsafe_size=0;
  uint32_t __t4400t__unsafe_offset=0;
  uint32_t __t4400t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  argument____t_buffer____buffer__t4398t(&__t4400t__unsafe_ptr,&__t4400t__unsafe_size,&__t4400t__unsafe_offset,&__t4400t__unsafe_align);
  ret__unsafe_ptr=__t4400t__unsafe_ptr;
  ret__unsafe_size=__t4400t__unsafe_size;
  ret__unsafe_offset=__t4400t__unsafe_offset;
  ret__unsafe_align=__t4400t__unsafe_align;
  ret__unsafe_ptr=(char*)__t_argv;
  ret__unsafe_size=__t_argc;
  goto __t_return;
  __t_return:
  *__t5718t=ret__unsafe_ptr;
  *__t5719t=ret__unsafe_size;
  *__t5720t=ret__unsafe_offset;
  *__t5721t=ret__unsafe_align;
}

void str__t4395t(const char* arg__unsafe_value, char** __t5722t, uint64_t* __t5723t, uint64_t* __t5724t, char* __t5725t) {
  char* __t4396t__unsafe_ptr=0;
  uint64_t __t4396t__dat__pos=0;
  uint64_t __t4396t__dat__length=0;
  char __t4396t__dat__first=0;
  str__t1678t(arg__unsafe_value,&__t4396t__unsafe_ptr,&__t4396t__dat__pos,&__t4396t__dat__length,&__t4396t__dat__first);
  goto __t_return;
  __t_return:
  *__t5722t=__t4396t__unsafe_ptr;
  *__t5723t=__t4396t__dat__pos;
  *__t5724t=__t4396t__dat__length;
  *__t5725t=__t4396t__dat__first;
}

void char__t1690t(const char* s, char* __t5726t) {
  char* __t1691t__unsafe_ptr=0;
  uint64_t __t1691t__dat__pos=0;
  uint64_t __t1691t__dat__length=0;
  char __t1691t__dat__first=0;
  str__t1678t(s,&__t1691t__unsafe_ptr,&__t1691t__dat__pos,&__t1691t__dat__length,&__t1691t__dat__first);
  goto __t_return;
  __t_return:
  *__t5726t=__t1691t__dat__first;
}

static inline __attribute__((always_inline)) void neq__t1693t(char x, char y, char* __t5727t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5727t=z;
}

static inline __attribute__((always_inline)) void len__t1688t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5728t) {
  goto __t_return;
  __t_return:
  *__t5728t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t1825t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5729t) {
  uint64_t __t1826t__=0;
  uint64_t n=0;
  uint64_t __t1827t__=0;
  char __t1828t__=0;
  char __t1829t=0;
  char __t1830t__=0;
  char __t1831t=0;
  char z=0;
  len__t1688t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1826t__);
  n=__t1826t__;
  len__t1688t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1827t__);
  neq__t158t(n,__t1827t__,&__t1828t__);
  if(__t1828t__){
  __t1829t=0;
  goto __t_return;
  }
  neq__t1693t(x__dat__first,y__dat__first,&__t1830t__);
  if(__t1830t__){
  __t1831t=0;
  __t1829t=__t1831t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1829t=z;
  goto __t_return;
  __t_return:
  *__t5729t=__t1829t;
}

void eq__t1838t(const char* x, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5730t) {
  char __t1839t__=0;
  char __t1840t__=0;
  char __t1841t=0;
  char* __t1842t__unsafe_ptr=0;
  uint64_t __t1842t__dat__pos=0;
  uint64_t __t1842t__dat__length=0;
  char __t1842t__dat__first=0;
  char __t1843t__=0;
  char__t1690t(x,&__t1839t__);
  neq__t1693t(y__dat__first,__t1839t__,&__t1840t__);
  if(__t1840t__){
  __t1841t=0;
  goto __t_return;
  }
  str__t1678t(x,&__t1842t__unsafe_ptr,&__t1842t__dat__pos,&__t1842t__dat__length,&__t1842t__dat__first);
  eq__t1825t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,__t1842t__unsafe_ptr,__t1842t__dat__pos,__t1842t__dat__length,__t1842t__dat__first,&__t1843t__);
  __t1841t=__t1843t__;
  goto __t_return;
  __t_return:
  *__t5730t=__t1841t;
}

static inline __attribute__((always_inline)) void len__t1168t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5731t) {
  goto __t_return;
  __t_return:
  *__t5731t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t5732t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5732t=z;
}

static inline __attribute__((always_inline)) int arg_after__t4411t(const char* flag, char** __t5733t, uint64_t* __t5734t, uint64_t* __t5735t, char* __t5736t) {
  char* __t4412t__unsafe_ptr=0;
  uint64_t __t4412t__unsafe_size=0;
  uint32_t __t4412t__unsafe_offset=0;
  uint32_t __t4412t__unsafe_align=0;
  char* args__unsafe_ptr=0;
  uint64_t args__unsafe_size=0;
  uint32_t args__unsafe_offset=0;
  uint32_t args__unsafe_align=0;
  uint64_t __t4413t=0;
  char __t4414t=0;
  char* __t4415t__=0;
  const char* __t4416t__unsafe_value=0;
  const char* arg__unsafe_value=0;
  char* __t4417t__unsafe_ptr=0;
  uint64_t __t4417t__dat__pos=0;
  uint64_t __t4417t__dat__length=0;
  char __t4417t__dat__first=0;
  char __t4418t__=0;
  uint64_t __t4419t=0;
  uint64_t __t4420t__=0;
  uint64_t __t4421t__=0;
  char __t4422t__=0;
  char __t4423t=0;
  uint64_t __t4424t=0;
  uint64_t __t4425t__=0;
  char* __t4427t__=0;
  const char* __t4428t__unsafe_value=0;
  char* __t4429t__unsafe_ptr=0;
  uint64_t __t4429t__dat__pos=0;
  uint64_t __t4429t__dat__length=0;
  char __t4429t__dat__first=0;
  int __t4430t=0;
  int __t_errcode=0;
  int __t_complain=0;
  args__t4397t(&__t4412t__unsafe_ptr,&__t4412t__unsafe_size,&__t4412t__unsafe_offset,&__t4412t__unsafe_align);
  args__unsafe_ptr=__t4412t__unsafe_ptr;
  args__unsafe_size=__t4412t__unsafe_size;
  args__unsafe_offset=__t4412t__unsafe_offset;
  args__unsafe_align=__t4412t__unsafe_align;
  __t4413t=0-1;
  while(1){
  __t4413t=__t4413t+1;
  __t_complain=get__t1160t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4413t,&__t4415t__);
  __t4414t=__t_complain;
  if(__t_complain){
  goto __t4414t__label;
  }
  if(!__t4415t__){
  __t_complain=2;
  goto __t4414t__label;
  }
  else{
  memcpy(&__t4416t__unsafe_value,__t4415t__,8);
  }
  arg__unsafe_value=__t4416t__unsafe_value;
  __t4414t__label:__t4414t=__t4414t==0;
  if(!__t4414t){
  break;
  }
  str__t4395t(arg__unsafe_value,&__t4417t__unsafe_ptr,&__t4417t__dat__pos,&__t4417t__dat__length,&__t4417t__dat__first);
  eq__t1838t(flag,__t4417t__unsafe_ptr,__t4417t__dat__pos,__t4417t__dat__length,__t4417t__dat__first,&__t4418t__);
  if(__t4418t__){
  __t4419t=1;
  add__t188t(__t4413t,__t4419t,&__t4420t__);
  len__t1168t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,&__t4421t__);
  lt__t302t(__t4420t__,__t4421t__,&__t4422t__);
  __t4423t=__t4422t__;
  }
  else{
  __t4423t=0;
  }
  if(__t4423t){
  __t4424t=1;
  add__t188t(__t4413t,__t4424t,&__t4425t__);
  __t_errcode=get__t1160t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4425t__,&__t4427t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4427t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4428t__unsafe_value,__t4427t__,8);
  str__t4395t(__t4428t__unsafe_value,&__t4429t__unsafe_ptr,&__t4429t__dat__pos,&__t4429t__dat__length,&__t4429t__dat__first);
  goto __t_return;
  }
  }
  __t_errcode=45;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5733t=__t4429t__unsafe_ptr;
  *__t5734t=__t4429t__dat__pos;
  *__t5735t=__t4429t__dat__length;
  *__t5736t=__t4429t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1655t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5737t, uint64_t* __t5738t, uint64_t* __t5739t, char* __t5740t) {
  goto __t_return;
  __t_return:
  *__t5737t=other__unsafe_ptr;
  *__t5738t=other__dat__pos;
  *__t5739t=other__dat__length;
  *__t5740t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5741t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5741t=z;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t5742t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5742t=z;
}

static inline __attribute__((always_inline)) void allocated__t1218t(char** __t5743t, uint64_t* __t5744t, uint32_t* __t5745t, uint32_t* __t5746t, uint64_t pos, char** __t5747t, uint64_t* __t5748t, uint32_t* __t5749t, uint32_t* __t5750t, uint64_t* __t5751t) {
  char* buf__unsafe_ptr=*__t5743t;
  uint64_t buf__unsafe_size=*__t5744t;
  uint32_t buf__unsafe_offset=*__t5745t;
  uint32_t buf__unsafe_align=*__t5746t;
  goto __t_return;
  __t_return:
  *__t5743t=buf__unsafe_ptr;
  *__t5744t=buf__unsafe_size;
  *__t5745t=buf__unsafe_offset;
  *__t5746t=buf__unsafe_align;
  *__t5747t=buf__unsafe_ptr;
  *__t5748t=buf__unsafe_size;
  *__t5749t=buf__unsafe_offset;
  *__t5750t=buf__unsafe_align;
  *__t5751t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1293t(char** __t5752t, uint64_t* __t5753t, uint32_t* __t5754t, uint32_t* __t5755t, uint64_t* __t5756t, uint64_t length, char** __t5757t, uint64_t* __t5758t, uint32_t* __t5759t, uint32_t* __t5760t, uint64_t* __t5761t) {
  char* allocator__buf__unsafe_ptr=*__t5752t;
  uint64_t allocator__buf__unsafe_size=*__t5753t;
  uint32_t allocator__buf__unsafe_offset=*__t5754t;
  uint32_t allocator__buf__unsafe_align=*__t5755t;
  uint64_t allocator__pos=*__t5756t;
  int __t1294t=0;
  uint64_t __t1295t__=0;
  uint64_t next_pos=0;
  uint64_t __t1296t__=0;
  char __t1297t__=0;
  uint64_t __t1298t=0;
  uint64_t __t1299t__=0;
  uint64_t pos=0;
  char* __t1300t__buf__unsafe_ptr=0;
  uint64_t __t1300t__buf__unsafe_size=0;
  uint32_t __t1300t__buf__unsafe_offset=0;
  uint32_t __t1300t__buf__unsafe_align=0;
  uint64_t __t1300t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1295t__);
  next_pos=__t1295t__;
  len__t1168t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1296t__);
  gt__t326t(next_pos,__t1296t__,&__t1297t__);
  if(__t1297t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1298t=0;
  add__t188t(allocator__pos,__t1298t,&__t1299t__);
  pos=__t1299t__;
  allocator__pos=next_pos;
  allocated__t1218t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1300t__buf__unsafe_ptr,&__t1300t__buf__unsafe_size,&__t1300t__buf__unsafe_offset,&__t1300t__buf__unsafe_align,&__t1300t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5752t=allocator__buf__unsafe_ptr;
  *__t5753t=allocator__buf__unsafe_size;
  *__t5754t=allocator__buf__unsafe_offset;
  *__t5755t=allocator__buf__unsafe_align;
  *__t5756t=allocator__pos;
  *__t5757t=__t1300t__buf__unsafe_ptr;
  *__t5758t=__t1300t__buf__unsafe_size;
  *__t5759t=__t1300t__buf__unsafe_offset;
  *__t5760t=__t1300t__buf__unsafe_align;
  *__t5761t=__t1300t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1223t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5762t, uint64_t* __t5763t, uint32_t* __t5764t, uint32_t* __t5765t, uint64_t* __t5766t) {
  char* __t1224t__unsafe_ptr=0;
  uint64_t __t1224t__unsafe_size=0;
  uint32_t __t1224t__unsafe_offset=0;
  uint32_t __t1224t__unsafe_align=0;
  uint64_t __t1225t=0;
  __t1224t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1224t__unsafe_size=self__buf__unsafe_size;
  __t1224t__unsafe_offset=self__buf__unsafe_offset;
  __t1224t__unsafe_align=self__buf__unsafe_align;
  __t1225t=self__pos;
  goto __t_return;
  __t_return:
  *__t5762t=__t1224t__unsafe_ptr;
  *__t5763t=__t1224t__unsafe_size;
  *__t5764t=__t1224t__unsafe_offset;
  *__t5765t=__t1224t__unsafe_align;
  *__t5766t=__t1225t;
}

static inline __attribute__((always_inline)) int copy__t1754t(char** __t5767t, uint64_t* __t5768t, uint32_t* __t5769t, uint32_t* __t5770t, uint64_t* __t5771t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5772t, uint64_t* __t5773t, uint64_t* __t5774t, char* __t5775t) {
  char* CHARS__buf__unsafe_ptr=*__t5767t;
  uint64_t CHARS__buf__unsafe_size=*__t5768t;
  uint32_t CHARS__buf__unsafe_offset=*__t5769t;
  uint32_t CHARS__buf__unsafe_align=*__t5770t;
  uint64_t CHARS__pos=*__t5771t;
  char* __t1755t__unsafe_ptr=0;
  uint64_t __t1755t__dat__pos=0;
  uint64_t __t1755t__dat__length=0;
  char __t1755t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1756t__buf__unsafe_ptr=0;
  uint64_t __t1756t__buf__unsafe_size=0;
  uint32_t __t1756t__buf__unsafe_offset=0;
  uint32_t __t1756t__buf__unsafe_align=0;
  uint64_t __t1756t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1757t=0;
  char* __t1758t__unsafe_ptr=0;
  uint64_t __t1758t__dat__pos=0;
  uint64_t __t1758t__dat__length=0;
  char __t1758t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1655t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1755t__unsafe_ptr,&__t1755t__dat__pos,&__t1755t__dat__length,&__t1755t__dat__first);
  other__unsafe_ptr=__t1755t__unsafe_ptr;
  other__dat__pos=__t1755t__dat__pos;
  other__dat__length=__t1755t__dat__length;
  other__dat__first=__t1755t__dat__first;
  __t_errcode=alloc__t1293t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1756t__buf__unsafe_ptr,&__t1756t__buf__unsafe_size,&__t1756t__buf__unsafe_offset,&__t1756t__buf__unsafe_align,&__t1756t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1756t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1756t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1756t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1756t__buf__unsafe_align;
  surface__pos=__t1756t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1622t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1758t__unsafe_ptr,&__t1758t__dat__pos,&__t1758t__dat__length,&__t1758t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5767t=CHARS__buf__unsafe_ptr;
  *__t5768t=CHARS__buf__unsafe_size;
  *__t5769t=CHARS__buf__unsafe_offset;
  *__t5770t=CHARS__buf__unsafe_align;
  *__t5771t=CHARS__pos;
  *__t5772t=__t1758t__unsafe_ptr;
  *__t5773t=__t1758t__dat__pos;
  *__t5774t=__t1758t__dat__length;
  *__t5775t=__t1758t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1220t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5776t, uint64_t* __t5777t, uint32_t* __t5778t, uint32_t* __t5779t, uint64_t* __t5780t) {
  char* __t1221t__unsafe_ptr=0;
  uint64_t __t1221t__unsafe_size=0;
  uint32_t __t1221t__unsafe_offset=0;
  uint32_t __t1221t__unsafe_align=0;
  uint64_t __t1222t=0;
  __t1221t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1221t__unsafe_size=self__buf__unsafe_size;
  __t1221t__unsafe_offset=self__buf__unsafe_offset;
  __t1221t__unsafe_align=self__buf__unsafe_align;
  __t1222t=self__pos;
  goto __t_return;
  __t_return:
  *__t5776t=__t1221t__unsafe_ptr;
  *__t5777t=__t1221t__unsafe_size;
  *__t5778t=__t1221t__unsafe_offset;
  *__t5779t=__t1221t__unsafe_align;
  *__t5780t=__t1222t;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t5781t) {
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
  *__t5781t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1674t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5782t, uint64_t* __t5783t, uint64_t* __t5784t, char* __t5785t) {
  uint64_t __t1676t__=0;
  char* __t1677t__unsafe_ptr=0;
  uint64_t __t1677t__dat__pos=0;
  uint64_t __t1677t__dat__length=0;
  char __t1677t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(endpos,pos,&__t1676t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1656t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1676t__,&__t1677t__unsafe_ptr,&__t1677t__dat__pos,&__t1677t__dat__length,&__t1677t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5782t=__t1677t__unsafe_ptr;
  *__t5783t=__t1677t__dat__pos;
  *__t5784t=__t1677t__dat__length;
  *__t5785t=__t1677t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2996t(char** __t5786t, uint64_t* __t5787t, uint32_t* __t5788t, uint32_t* __t5789t, uint64_t* __t5790t, const char* _s1, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5791t, uint64_t* __t5792t, uint64_t* __t5793t, char* __t5794t) {
  char* CHARS__buf__unsafe_ptr=*__t5786t;
  uint64_t CHARS__buf__unsafe_size=*__t5787t;
  uint32_t CHARS__buf__unsafe_offset=*__t5788t;
  uint32_t CHARS__buf__unsafe_align=*__t5789t;
  uint64_t CHARS__pos=*__t5790t;
  char* __t2997t__unsafe_ptr=0;
  uint64_t __t2997t__dat__pos=0;
  uint64_t __t2997t__dat__length=0;
  char __t2997t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2998t__unsafe_ptr=0;
  uint64_t __t2998t__dat__pos=0;
  uint64_t __t2998t__dat__length=0;
  char __t2998t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2999t__=0;
  uint64_t __t3000t__=0;
  char __t3001t__=0;
  char __t3002t=0;
  uint64_t __t3003t__=0;
  char __t3004t__=0;
  char __t3005t=0;
  uint64_t __t3006t__=0;
  char* __t3007t__buf__unsafe_ptr=0;
  uint64_t __t3007t__buf__unsafe_size=0;
  uint32_t __t3007t__buf__unsafe_offset=0;
  uint32_t __t3007t__buf__unsafe_align=0;
  uint64_t __t3007t__pos=0;
  char* __t3008t____t1224t__unsafe_ptr=0;
  uint64_t __t3008t____t1224t__unsafe_size=0;
  uint32_t __t3008t____t1224t__unsafe_offset=0;
  uint32_t __t3008t____t1224t__unsafe_align=0;
  uint64_t __t3008t____t1225t=0;
  char* __t3009t__buf__unsafe_ptr=0;
  uint64_t __t3009t__buf__unsafe_size=0;
  uint32_t __t3009t__buf__unsafe_offset=0;
  uint32_t __t3009t__buf__unsafe_align=0;
  uint64_t __t3009t__pos=0;
  char* __t3010t__buf__unsafe_ptr=0;
  uint64_t __t3010t__buf__unsafe_size=0;
  uint32_t __t3010t__buf__unsafe_offset=0;
  uint32_t __t3010t__buf__unsafe_align=0;
  uint64_t __t3010t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t3011t__unsafe_ptr=0;
  uint64_t __t3011t__dat__pos=0;
  uint64_t __t3011t__dat__length=0;
  char __t3011t__dat__first=0;
  char* __t3012t____t1221t__unsafe_ptr=0;
  uint64_t __t3012t____t1221t__unsafe_size=0;
  uint32_t __t3012t____t1221t__unsafe_offset=0;
  uint32_t __t3012t____t1221t__unsafe_align=0;
  uint64_t __t3012t____t1222t=0;
  uint64_t __t3014t=0;
  uint64_t __t3015t__=0;
  char* __t3016t__unsafe_ptr=0;
  uint64_t __t3016t__dat__pos=0;
  uint64_t __t3016t__dat__length=0;
  char __t3016t__dat__first=0;
  char __t3017t__=0;
  char __t3018t__=0;
  char __t3019t=0;
  uint64_t __t3020t__=0;
  char __t3021t__=0;
  char __t3022t=0;
  uint64_t __t3023t__=0;
  char* __t3025t__unsafe_ptr=0;
  uint64_t __t3025t__dat__pos=0;
  uint64_t __t3025t__dat__length=0;
  char __t3025t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t3026t__=0;
  uint64_t __t3027t__=0;
  uint64_t __t3028t__=0;
  char* __t3029t__buf__unsafe_ptr=0;
  uint64_t __t3029t__buf__unsafe_size=0;
  uint32_t __t3029t__buf__unsafe_offset=0;
  uint32_t __t3029t__buf__unsafe_align=0;
  uint64_t __t3029t__pos=0;
  char* __t3030t____t1224t__unsafe_ptr=0;
  uint64_t __t3030t____t1224t__unsafe_size=0;
  uint32_t __t3030t____t1224t__unsafe_offset=0;
  uint32_t __t3030t____t1224t__unsafe_align=0;
  uint64_t __t3030t____t1225t=0;
  char* __t3031t__buf__unsafe_ptr=0;
  uint64_t __t3031t__buf__unsafe_size=0;
  uint32_t __t3031t__buf__unsafe_offset=0;
  uint32_t __t3031t__buf__unsafe_align=0;
  uint64_t __t3031t__pos=0;
  char* __t3032t__buf__unsafe_ptr=0;
  uint64_t __t3032t__buf__unsafe_size=0;
  uint32_t __t3032t__buf__unsafe_offset=0;
  uint32_t __t3032t__buf__unsafe_align=0;
  uint64_t __t3032t__pos=0;
  char* __t3033t__unsafe_ptr=0;
  uint64_t __t3033t__dat__pos=0;
  uint64_t __t3033t__dat__length=0;
  char __t3033t__dat__first=0;
  char* __t3034t__unsafe_ptr=0;
  uint64_t __t3034t__dat__pos=0;
  uint64_t __t3034t__dat__length=0;
  char __t3034t__dat__first=0;
  char __t3035t=0;
  char* __t3036t____t1221t__unsafe_ptr=0;
  uint64_t __t3036t____t1221t__unsafe_size=0;
  uint32_t __t3036t____t1221t__unsafe_offset=0;
  uint32_t __t3036t____t1221t__unsafe_align=0;
  uint64_t __t3036t____t1222t=0;
  uint64_t __t3038t=0;
  uint64_t __t3039t__=0;
  char* __t3040t__unsafe_ptr=0;
  uint64_t __t3040t__dat__pos=0;
  uint64_t __t3040t__dat__length=0;
  char __t3040t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1678t(_s1,&__t2997t__unsafe_ptr,&__t2997t__dat__pos,&__t2997t__dat__length,&__t2997t__dat__first);
  s1__unsafe_ptr=__t2997t__unsafe_ptr;
  s1__dat__pos=__t2997t__dat__pos;
  s1__dat__length=__t2997t__dat__length;
  s1__dat__first=__t2997t__dat__first;
  str__t1655t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2998t__unsafe_ptr,&__t2998t__dat__pos,&__t2998t__dat__length,&__t2998t__dat__first);
  s2__unsafe_ptr=__t2998t__unsafe_ptr;
  s2__dat__pos=__t2998t__dat__pos;
  s2__dat__length=__t2998t__dat__length;
  s2__dat__first=__t2998t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2999t__);
  if(__t2999t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3000t__);
  eq__t134t(CHARS__pos,__t3000t__,&__t3001t__);
  __t3002t=__t3001t__;
  }
  if(__t3002t){
  add__t188t(CHARS__pos,s2__dat__length,&__t3003t__);
  lt__t302t(__t3003t__,CHARS__buf__unsafe_size,&__t3004t__);
  __t3005t=__t3004t__;
  }
  if(__t3005t){
  len__t1688t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3006t__);
  __t_errcode=alloc__t1293t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3006t__,&__t3007t__buf__unsafe_ptr,&__t3007t__buf__unsafe_size,&__t3007t__buf__unsafe_offset,&__t3007t__buf__unsafe_align,&__t3007t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1223t(__t3007t__buf__unsafe_ptr,__t3007t__buf__unsafe_size,__t3007t__buf__unsafe_offset,__t3007t__buf__unsafe_align,__t3007t__pos,&__t3008t____t1224t__unsafe_ptr,&__t3008t____t1224t__unsafe_size,&__t3008t____t1224t__unsafe_offset,&__t3008t____t1224t__unsafe_align,&__t3008t____t1225t);
  arena__t1211t(&__t3008t____t1224t__unsafe_ptr,&__t3008t____t1224t__unsafe_size,&__t3008t____t1224t__unsafe_offset,&__t3008t____t1224t__unsafe_align,__t3008t____t1225t,&__t3009t__buf__unsafe_ptr,&__t3009t__buf__unsafe_size,&__t3009t__buf__unsafe_offset,&__t3009t__buf__unsafe_align,&__t3009t__pos);
  __t3010t__buf__unsafe_ptr=__t3009t__buf__unsafe_ptr;
  __t3010t__buf__unsafe_size=__t3009t__buf__unsafe_size;
  __t3010t__buf__unsafe_offset=__t3009t__buf__unsafe_offset;
  __t3010t__buf__unsafe_align=__t3009t__buf__unsafe_align;
  __t3010t__pos=__t3009t__pos;
  surface__buf__unsafe_ptr=__t3010t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3010t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3010t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3010t__buf__unsafe_align;
  surface__pos=__t3010t__pos;
  __t_errcode=copy__t1754t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3011t__unsafe_ptr,&__t3011t__dat__pos,&__t3011t__dat__length,&__t3011t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3012t____t1221t__unsafe_ptr,&__t3012t____t1221t__unsafe_size,&__t3012t____t1221t__unsafe_offset,&__t3012t____t1221t__unsafe_align,&__t3012t____t1222t);
  __t3014t=0;
  add__t188t(s1__dat__pos,__t3014t,&__t3015t__);
  __t_errcode=str__t1674t(__t3012t____t1221t__unsafe_ptr,__t3012t____t1221t__unsafe_size,__t3012t____t1221t__unsafe_offset,__t3012t____t1221t__unsafe_align,__t3012t____t1222t,__t3015t__,&__t3016t__unsafe_ptr,&__t3016t__dat__pos,&__t3016t__dat__length,&__t3016t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3017t__);
  if(__t3017t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3018t__);
  __t3019t=__t3018t__;
  }
  if(__t3019t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3020t__);
  eq__t134t(s2__dat__pos,__t3020t__,&__t3021t__);
  __t3022t=__t3021t__;
  }
  if(__t3022t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t3023t__);
  __t_errcode=str__t1674t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t3023t__,s1__dat__pos,&__t3025t__unsafe_ptr,&__t3025t__dat__pos,&__t3025t__dat__length,&__t3025t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3016t__unsafe_ptr=__t3025t__unsafe_ptr;
  __t3016t__dat__pos=__t3025t__dat__pos;
  __t3016t__dat__length=__t3025t__dat__length;
  __t3016t__dat__first=__t3025t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1688t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3026t__);
  len__t1688t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3027t__);
  add__t188t(__t3026t__,__t3027t__,&__t3028t__);
  __t_errcode=alloc__t1293t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3028t__,&__t3029t__buf__unsafe_ptr,&__t3029t__buf__unsafe_size,&__t3029t__buf__unsafe_offset,&__t3029t__buf__unsafe_align,&__t3029t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1223t(__t3029t__buf__unsafe_ptr,__t3029t__buf__unsafe_size,__t3029t__buf__unsafe_offset,__t3029t__buf__unsafe_align,__t3029t__pos,&__t3030t____t1224t__unsafe_ptr,&__t3030t____t1224t__unsafe_size,&__t3030t____t1224t__unsafe_offset,&__t3030t____t1224t__unsafe_align,&__t3030t____t1225t);
  arena__t1211t(&__t3030t____t1224t__unsafe_ptr,&__t3030t____t1224t__unsafe_size,&__t3030t____t1224t__unsafe_offset,&__t3030t____t1224t__unsafe_align,__t3030t____t1225t,&__t3031t__buf__unsafe_ptr,&__t3031t__buf__unsafe_size,&__t3031t__buf__unsafe_offset,&__t3031t__buf__unsafe_align,&__t3031t__pos);
  __t3032t__buf__unsafe_ptr=__t3031t__buf__unsafe_ptr;
  __t3032t__buf__unsafe_size=__t3031t__buf__unsafe_size;
  __t3032t__buf__unsafe_offset=__t3031t__buf__unsafe_offset;
  __t3032t__buf__unsafe_align=__t3031t__buf__unsafe_align;
  __t3032t__pos=__t3031t__pos;
  surface__buf__unsafe_ptr=__t3032t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3032t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3032t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3032t__buf__unsafe_align;
  surface__pos=__t3032t__pos;
  __t_errcode=copy__t1754t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3033t__unsafe_ptr,&__t3033t__dat__pos,&__t3033t__dat__length,&__t3033t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1754t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3034t__unsafe_ptr,&__t3034t__dat__pos,&__t3034t__dat__length,&__t3034t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3036t____t1221t__unsafe_ptr,&__t3036t____t1221t__unsafe_size,&__t3036t____t1221t__unsafe_offset,&__t3036t____t1221t__unsafe_align,&__t3036t____t1222t);
  __t3038t=0;
  add__t188t(prev_pos,__t3038t,&__t3039t__);
  __t_complain=str__t1674t(__t3036t____t1221t__unsafe_ptr,__t3036t____t1221t__unsafe_size,__t3036t____t1221t__unsafe_offset,__t3036t____t1221t__unsafe_align,__t3036t____t1222t,__t3039t__,&__t3040t__unsafe_ptr,&__t3040t__dat__pos,&__t3040t__dat__length,&__t3040t__dat__first);
  __t3035t=__t_complain;
  if(__t_complain){
  goto __t3035t__label;
  }
  ret__unsafe_ptr=__t3040t__unsafe_ptr;
  ret__dat__pos=__t3040t__dat__pos;
  ret__dat__length=__t3040t__dat__length;
  ret__dat__first=__t3040t__dat__first;
  __t3035t__label:__t3035t=__t3035t==0;
  __t3016t__unsafe_ptr=ret__unsafe_ptr;
  __t3016t__dat__pos=ret__dat__pos;
  __t3016t__dat__length=ret__dat__length;
  __t3016t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5786t=CHARS__buf__unsafe_ptr;
  *__t5787t=CHARS__buf__unsafe_size;
  *__t5788t=CHARS__buf__unsafe_offset;
  *__t5789t=CHARS__buf__unsafe_align;
  *__t5790t=CHARS__pos;
  *__t5791t=__t3016t__unsafe_ptr;
  *__t5792t=__t3016t__dat__pos;
  *__t5793t=__t3016t__dat__length;
  *__t5794t=__t3016t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2951t(char** __t5795t, uint64_t* __t5796t, uint32_t* __t5797t, uint32_t* __t5798t, uint64_t* __t5799t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5800t, uint64_t* __t5801t, uint64_t* __t5802t, char* __t5803t) {
  char* CHARS__buf__unsafe_ptr=*__t5795t;
  uint64_t CHARS__buf__unsafe_size=*__t5796t;
  uint32_t CHARS__buf__unsafe_offset=*__t5797t;
  uint32_t CHARS__buf__unsafe_align=*__t5798t;
  uint64_t CHARS__pos=*__t5799t;
  char* __t2952t__unsafe_ptr=0;
  uint64_t __t2952t__dat__pos=0;
  uint64_t __t2952t__dat__length=0;
  char __t2952t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2953t__unsafe_ptr=0;
  uint64_t __t2953t__dat__pos=0;
  uint64_t __t2953t__dat__length=0;
  char __t2953t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2954t__=0;
  uint64_t __t2955t__=0;
  char __t2956t__=0;
  char __t2957t=0;
  uint64_t __t2958t__=0;
  char __t2959t__=0;
  char __t2960t=0;
  uint64_t __t2961t__=0;
  char* __t2962t__buf__unsafe_ptr=0;
  uint64_t __t2962t__buf__unsafe_size=0;
  uint32_t __t2962t__buf__unsafe_offset=0;
  uint32_t __t2962t__buf__unsafe_align=0;
  uint64_t __t2962t__pos=0;
  char* __t2963t____t1224t__unsafe_ptr=0;
  uint64_t __t2963t____t1224t__unsafe_size=0;
  uint32_t __t2963t____t1224t__unsafe_offset=0;
  uint32_t __t2963t____t1224t__unsafe_align=0;
  uint64_t __t2963t____t1225t=0;
  char* __t2964t__buf__unsafe_ptr=0;
  uint64_t __t2964t__buf__unsafe_size=0;
  uint32_t __t2964t__buf__unsafe_offset=0;
  uint32_t __t2964t__buf__unsafe_align=0;
  uint64_t __t2964t__pos=0;
  char* __t2965t__buf__unsafe_ptr=0;
  uint64_t __t2965t__buf__unsafe_size=0;
  uint32_t __t2965t__buf__unsafe_offset=0;
  uint32_t __t2965t__buf__unsafe_align=0;
  uint64_t __t2965t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2966t__unsafe_ptr=0;
  uint64_t __t2966t__dat__pos=0;
  uint64_t __t2966t__dat__length=0;
  char __t2966t__dat__first=0;
  char* __t2967t____t1221t__unsafe_ptr=0;
  uint64_t __t2967t____t1221t__unsafe_size=0;
  uint32_t __t2967t____t1221t__unsafe_offset=0;
  uint32_t __t2967t____t1221t__unsafe_align=0;
  uint64_t __t2967t____t1222t=0;
  uint64_t __t2969t=0;
  uint64_t __t2970t__=0;
  char* __t2971t__unsafe_ptr=0;
  uint64_t __t2971t__dat__pos=0;
  uint64_t __t2971t__dat__length=0;
  char __t2971t__dat__first=0;
  char __t2972t__=0;
  char __t2973t__=0;
  char __t2974t=0;
  uint64_t __t2975t__=0;
  char __t2976t__=0;
  char __t2977t=0;
  uint64_t __t2978t__=0;
  char* __t2980t__unsafe_ptr=0;
  uint64_t __t2980t__dat__pos=0;
  uint64_t __t2980t__dat__length=0;
  char __t2980t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2981t__=0;
  uint64_t __t2982t__=0;
  uint64_t __t2983t__=0;
  char* __t2984t__buf__unsafe_ptr=0;
  uint64_t __t2984t__buf__unsafe_size=0;
  uint32_t __t2984t__buf__unsafe_offset=0;
  uint32_t __t2984t__buf__unsafe_align=0;
  uint64_t __t2984t__pos=0;
  char* __t2985t____t1224t__unsafe_ptr=0;
  uint64_t __t2985t____t1224t__unsafe_size=0;
  uint32_t __t2985t____t1224t__unsafe_offset=0;
  uint32_t __t2985t____t1224t__unsafe_align=0;
  uint64_t __t2985t____t1225t=0;
  char* __t2986t__buf__unsafe_ptr=0;
  uint64_t __t2986t__buf__unsafe_size=0;
  uint32_t __t2986t__buf__unsafe_offset=0;
  uint32_t __t2986t__buf__unsafe_align=0;
  uint64_t __t2986t__pos=0;
  char* __t2987t__buf__unsafe_ptr=0;
  uint64_t __t2987t__buf__unsafe_size=0;
  uint32_t __t2987t__buf__unsafe_offset=0;
  uint32_t __t2987t__buf__unsafe_align=0;
  uint64_t __t2987t__pos=0;
  char* __t2988t__unsafe_ptr=0;
  uint64_t __t2988t__dat__pos=0;
  uint64_t __t2988t__dat__length=0;
  char __t2988t__dat__first=0;
  char* __t2989t__unsafe_ptr=0;
  uint64_t __t2989t__dat__pos=0;
  uint64_t __t2989t__dat__length=0;
  char __t2989t__dat__first=0;
  char __t2990t=0;
  char* __t2991t____t1221t__unsafe_ptr=0;
  uint64_t __t2991t____t1221t__unsafe_size=0;
  uint32_t __t2991t____t1221t__unsafe_offset=0;
  uint32_t __t2991t____t1221t__unsafe_align=0;
  uint64_t __t2991t____t1222t=0;
  uint64_t __t2993t=0;
  uint64_t __t2994t__=0;
  char* __t2995t__unsafe_ptr=0;
  uint64_t __t2995t__dat__pos=0;
  uint64_t __t2995t__dat__length=0;
  char __t2995t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1655t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2952t__unsafe_ptr,&__t2952t__dat__pos,&__t2952t__dat__length,&__t2952t__dat__first);
  s1__unsafe_ptr=__t2952t__unsafe_ptr;
  s1__dat__pos=__t2952t__dat__pos;
  s1__dat__length=__t2952t__dat__length;
  s1__dat__first=__t2952t__dat__first;
  str__t1678t(_s2,&__t2953t__unsafe_ptr,&__t2953t__dat__pos,&__t2953t__dat__length,&__t2953t__dat__first);
  s2__unsafe_ptr=__t2953t__unsafe_ptr;
  s2__dat__pos=__t2953t__dat__pos;
  s2__dat__length=__t2953t__dat__length;
  s2__dat__first=__t2953t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2954t__);
  if(__t2954t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2955t__);
  eq__t134t(CHARS__pos,__t2955t__,&__t2956t__);
  __t2957t=__t2956t__;
  }
  if(__t2957t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2958t__);
  lt__t302t(__t2958t__,CHARS__buf__unsafe_size,&__t2959t__);
  __t2960t=__t2959t__;
  }
  if(__t2960t){
  len__t1688t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2961t__);
  __t_errcode=alloc__t1293t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2961t__,&__t2962t__buf__unsafe_ptr,&__t2962t__buf__unsafe_size,&__t2962t__buf__unsafe_offset,&__t2962t__buf__unsafe_align,&__t2962t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1223t(__t2962t__buf__unsafe_ptr,__t2962t__buf__unsafe_size,__t2962t__buf__unsafe_offset,__t2962t__buf__unsafe_align,__t2962t__pos,&__t2963t____t1224t__unsafe_ptr,&__t2963t____t1224t__unsafe_size,&__t2963t____t1224t__unsafe_offset,&__t2963t____t1224t__unsafe_align,&__t2963t____t1225t);
  arena__t1211t(&__t2963t____t1224t__unsafe_ptr,&__t2963t____t1224t__unsafe_size,&__t2963t____t1224t__unsafe_offset,&__t2963t____t1224t__unsafe_align,__t2963t____t1225t,&__t2964t__buf__unsafe_ptr,&__t2964t__buf__unsafe_size,&__t2964t__buf__unsafe_offset,&__t2964t__buf__unsafe_align,&__t2964t__pos);
  __t2965t__buf__unsafe_ptr=__t2964t__buf__unsafe_ptr;
  __t2965t__buf__unsafe_size=__t2964t__buf__unsafe_size;
  __t2965t__buf__unsafe_offset=__t2964t__buf__unsafe_offset;
  __t2965t__buf__unsafe_align=__t2964t__buf__unsafe_align;
  __t2965t__pos=__t2964t__pos;
  surface__buf__unsafe_ptr=__t2965t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2965t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2965t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2965t__buf__unsafe_align;
  surface__pos=__t2965t__pos;
  __t_errcode=copy__t1754t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2966t__unsafe_ptr,&__t2966t__dat__pos,&__t2966t__dat__length,&__t2966t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2967t____t1221t__unsafe_ptr,&__t2967t____t1221t__unsafe_size,&__t2967t____t1221t__unsafe_offset,&__t2967t____t1221t__unsafe_align,&__t2967t____t1222t);
  __t2969t=0;
  add__t188t(s1__dat__pos,__t2969t,&__t2970t__);
  __t_errcode=str__t1674t(__t2967t____t1221t__unsafe_ptr,__t2967t____t1221t__unsafe_size,__t2967t____t1221t__unsafe_offset,__t2967t____t1221t__unsafe_align,__t2967t____t1222t,__t2970t__,&__t2971t__unsafe_ptr,&__t2971t__dat__pos,&__t2971t__dat__length,&__t2971t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2972t__);
  if(__t2972t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2973t__);
  __t2974t=__t2973t__;
  }
  if(__t2974t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2975t__);
  eq__t134t(s2__dat__pos,__t2975t__,&__t2976t__);
  __t2977t=__t2976t__;
  }
  if(__t2977t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2978t__);
  __t_errcode=str__t1674t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2978t__,s1__dat__pos,&__t2980t__unsafe_ptr,&__t2980t__dat__pos,&__t2980t__dat__length,&__t2980t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2971t__unsafe_ptr=__t2980t__unsafe_ptr;
  __t2971t__dat__pos=__t2980t__dat__pos;
  __t2971t__dat__length=__t2980t__dat__length;
  __t2971t__dat__first=__t2980t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1688t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2981t__);
  len__t1688t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2982t__);
  add__t188t(__t2981t__,__t2982t__,&__t2983t__);
  __t_errcode=alloc__t1293t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2983t__,&__t2984t__buf__unsafe_ptr,&__t2984t__buf__unsafe_size,&__t2984t__buf__unsafe_offset,&__t2984t__buf__unsafe_align,&__t2984t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1223t(__t2984t__buf__unsafe_ptr,__t2984t__buf__unsafe_size,__t2984t__buf__unsafe_offset,__t2984t__buf__unsafe_align,__t2984t__pos,&__t2985t____t1224t__unsafe_ptr,&__t2985t____t1224t__unsafe_size,&__t2985t____t1224t__unsafe_offset,&__t2985t____t1224t__unsafe_align,&__t2985t____t1225t);
  arena__t1211t(&__t2985t____t1224t__unsafe_ptr,&__t2985t____t1224t__unsafe_size,&__t2985t____t1224t__unsafe_offset,&__t2985t____t1224t__unsafe_align,__t2985t____t1225t,&__t2986t__buf__unsafe_ptr,&__t2986t__buf__unsafe_size,&__t2986t__buf__unsafe_offset,&__t2986t__buf__unsafe_align,&__t2986t__pos);
  __t2987t__buf__unsafe_ptr=__t2986t__buf__unsafe_ptr;
  __t2987t__buf__unsafe_size=__t2986t__buf__unsafe_size;
  __t2987t__buf__unsafe_offset=__t2986t__buf__unsafe_offset;
  __t2987t__buf__unsafe_align=__t2986t__buf__unsafe_align;
  __t2987t__pos=__t2986t__pos;
  surface__buf__unsafe_ptr=__t2987t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2987t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2987t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2987t__buf__unsafe_align;
  surface__pos=__t2987t__pos;
  __t_errcode=copy__t1754t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2988t__unsafe_ptr,&__t2988t__dat__pos,&__t2988t__dat__length,&__t2988t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1754t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2989t__unsafe_ptr,&__t2989t__dat__pos,&__t2989t__dat__length,&__t2989t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2991t____t1221t__unsafe_ptr,&__t2991t____t1221t__unsafe_size,&__t2991t____t1221t__unsafe_offset,&__t2991t____t1221t__unsafe_align,&__t2991t____t1222t);
  __t2993t=0;
  add__t188t(prev_pos,__t2993t,&__t2994t__);
  __t_complain=str__t1674t(__t2991t____t1221t__unsafe_ptr,__t2991t____t1221t__unsafe_size,__t2991t____t1221t__unsafe_offset,__t2991t____t1221t__unsafe_align,__t2991t____t1222t,__t2994t__,&__t2995t__unsafe_ptr,&__t2995t__dat__pos,&__t2995t__dat__length,&__t2995t__dat__first);
  __t2990t=__t_complain;
  if(__t_complain){
  goto __t2990t__label;
  }
  ret__unsafe_ptr=__t2995t__unsafe_ptr;
  ret__dat__pos=__t2995t__dat__pos;
  ret__dat__length=__t2995t__dat__length;
  ret__dat__first=__t2995t__dat__first;
  __t2990t__label:__t2990t=__t2990t==0;
  __t2971t__unsafe_ptr=ret__unsafe_ptr;
  __t2971t__dat__pos=ret__dat__pos;
  __t2971t__dat__length=ret__dat__length;
  __t2971t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5795t=CHARS__buf__unsafe_ptr;
  *__t5796t=CHARS__buf__unsafe_size;
  *__t5797t=CHARS__buf__unsafe_offset;
  *__t5798t=CHARS__buf__unsafe_align;
  *__t5799t=CHARS__pos;
  *__t5800t=__t2971t__unsafe_ptr;
  *__t5801t=__t2971t__dat__pos;
  *__t5802t=__t2971t__dat__length;
  *__t5803t=__t2971t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1759t(char** __t5804t, uint64_t* __t5805t, uint32_t* __t5806t, uint32_t* __t5807t, uint64_t* __t5808t, const char* _other, char** __t5809t, uint64_t* __t5810t, uint64_t* __t5811t, char* __t5812t) {
  char* CHARS__buf__unsafe_ptr=*__t5804t;
  uint64_t CHARS__buf__unsafe_size=*__t5805t;
  uint32_t CHARS__buf__unsafe_offset=*__t5806t;
  uint32_t CHARS__buf__unsafe_align=*__t5807t;
  uint64_t CHARS__pos=*__t5808t;
  char* __t1760t__unsafe_ptr=0;
  uint64_t __t1760t__dat__pos=0;
  uint64_t __t1760t__dat__length=0;
  char __t1760t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1761t__buf__unsafe_ptr=0;
  uint64_t __t1761t__buf__unsafe_size=0;
  uint32_t __t1761t__buf__unsafe_offset=0;
  uint32_t __t1761t__buf__unsafe_align=0;
  uint64_t __t1761t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1762t=0;
  char* __t1763t__unsafe_ptr=0;
  uint64_t __t1763t__dat__pos=0;
  uint64_t __t1763t__dat__length=0;
  char __t1763t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1678t(_other,&__t1760t__unsafe_ptr,&__t1760t__dat__pos,&__t1760t__dat__length,&__t1760t__dat__first);
  other__unsafe_ptr=__t1760t__unsafe_ptr;
  other__dat__pos=__t1760t__dat__pos;
  other__dat__length=__t1760t__dat__length;
  other__dat__first=__t1760t__dat__first;
  __t_errcode=alloc__t1293t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1761t__buf__unsafe_ptr,&__t1761t__buf__unsafe_size,&__t1761t__buf__unsafe_offset,&__t1761t__buf__unsafe_align,&__t1761t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1761t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1761t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1761t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1761t__buf__unsafe_align;
  surface__pos=__t1761t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1622t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1763t__unsafe_ptr,&__t1763t__dat__pos,&__t1763t__dat__length,&__t1763t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5804t=CHARS__buf__unsafe_ptr;
  *__t5805t=CHARS__buf__unsafe_size;
  *__t5806t=CHARS__buf__unsafe_offset;
  *__t5807t=CHARS__buf__unsafe_align;
  *__t5808t=CHARS__pos;
  *__t5809t=__t1763t__unsafe_ptr;
  *__t5810t=__t1763t__dat__pos;
  *__t5811t=__t1763t__dat__length;
  *__t5812t=__t1763t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1169t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1695t(char** __t5813t, uint64_t* __t5814t, uint32_t* __t5815t, uint32_t* __t5816t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5813t=unsafe_ptr;
  *__t5814t=unsafe_size;
  *__t5815t=unsafe_offset;
  *__t5816t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1784t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5817t, uint64_t* __t5818t, uint64_t* __t5819t, char* __t5820t) {
  char* __t1785t__unsafe_ptr=0;
  uint64_t __t1785t__unsafe_size=0;
  uint32_t __t1785t__unsafe_offset=0;
  uint32_t __t1785t__unsafe_align=0;
  uint64_t __t1786t=0;
  uint64_t __t1787t__=0;
  uint64_t __t1788t__=0;
  char* __t1789t__unsafe_ptr=0;
  uint64_t __t1789t__unsafe_size=0;
  uint32_t __t1789t__unsafe_offset=0;
  uint32_t __t1789t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t1791t=0;
  uint64_t __t1792t=0;
  char* __t1793t__unsafe_ptr=0;
  uint64_t __t1793t__dat__pos=0;
  uint64_t __t1793t__dat__length=0;
  char __t1793t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1695t(&__t1785t__unsafe_ptr,&__t1785t__unsafe_size,&__t1785t__unsafe_offset,&__t1785t__unsafe_align);
  __t1786t=1;
  len__t1688t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1787t__);
  add__t188t(__t1786t,__t1787t__,&__t1788t__);
  __t_errcode=alloc__t940t(&__t1785t__unsafe_ptr,&__t1785t__unsafe_size,&__t1785t__unsafe_offset,&__t1785t__unsafe_align,__t1788t__,&__t1789t__unsafe_ptr,&__t1789t__unsafe_size,&__t1789t__unsafe_offset,&__t1789t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1789t__unsafe_ptr;
  buf__unsafe_size=__t1789t__unsafe_size;
  buf__unsafe_offset=__t1789t__unsafe_offset;
  buf__unsafe_align=__t1789t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1792t=0;
  __t_errcode=str__t1622t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1792t,other__dat__length,other__dat__first,&__t1793t__unsafe_ptr,&__t1793t__dat__pos,&__t1793t__dat__length,&__t1793t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t815t(&__t1793t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5817t=__t1793t__unsafe_ptr;
  *__t5818t=__t1793t__dat__pos;
  *__t5819t=__t1793t__dat__length;
  *__t5820t=__t1793t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1808t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5821t, char** __t5822t, uint64_t* __t5823t, uint64_t* __t5824t, char* __t5825t) {
  int __t1809t=0;
  char* __t1811t__unsafe_ptr=0;
  uint64_t __t1811t__dat__pos=0;
  uint64_t __t1811t__dat__length=0;
  char __t1811t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1813t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1169t();
  __t_errcode=copy_null_terminated__t1784t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1811t__unsafe_ptr,&__t1811t__dat__pos,&__t1811t__dat__length,&__t1811t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1811t__unsafe_ptr;
  str__dat__pos=__t1811t__dat__pos;
  str__dat__length=__t1811t__dat__length;
  str__dat__first=__t1811t__dat__first;
  add__t817t(str__unsafe_ptr,str__dat__pos,&__t1813t__);
  _ret=__t1813t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t815t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5821t=cstr;
  *__t5822t=str__unsafe_ptr;
  *__t5823t=str__dat__pos;
  *__t5824t=str__dat__length;
  *__t5825t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1818t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5826t) {
  goto __t_return;
  __t_return:
  *__t5826t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t5248t(char* unsafe_ptr) {
  int __t5250t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int open__t5251t(const char* path, char** __t5827t) {
  int __t5253t=0;
  char* unsafe_ptr=0;
  char __t5255t__=0;
  char __t5256t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t654t(unsafe_ptr,&__t5255t__);
  not__t42t(__t5255t__,&__t5256t__);
  if(__t5256t__){
  __t_errcode=52;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5248t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5827t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t5258t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t5828t) {
  const char* __t5259t__cstr=0;
  char* __t5259t__str__unsafe_ptr=0;
  uint64_t __t5259t__str__dat__pos=0;
  uint64_t __t5259t__str__dat__length=0;
  char __t5259t__str__dat__first=0;
  const char* __t5261t__=0;
  char* __t5262t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1808t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5259t__cstr,&__t5259t__str__unsafe_ptr,&__t5259t__str__dat__pos,&__t5259t__str__dat__length,&__t5259t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1818t(__t5259t__cstr,__t5259t__str__unsafe_ptr,__t5259t__str__dat__pos,__t5259t__str__dat__length,__t5259t__str__dat__first,&__t5261t__);
  __t_errcode=open__t5251t(__t5261t__,&__t5262t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5248t(__t5262t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5828t=__t5262t__unsafe_ptr;
  
  __t_skip_returns:free__t815t(&__t5259t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t5270t(char** __t5829t, const char** __t5830t) {
  char* f__unsafe_ptr=*__t5829t;
  char __t5271t__=0;
  char __t5272t__=0;
  char* de=0;
  char __t5273t__=0;
  char __t5274t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t654t(f__unsafe_ptr,&__t5271t__);
  not__t42t(__t5271t__,&__t5272t__);
  if(__t5272t__){
  __t_errcode=63;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t654t(de,&__t5273t__);
  not__t42t(__t5273t__,&__t5274t__);
  if(__t5274t__){
  __t_errcode=64;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5829t=f__unsafe_ptr;
  *__t5830t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t5275t(char** __t5831t, char** __t5832t, uint64_t* __t5833t, uint64_t* __t5834t, char* __t5835t) {
  char* f__unsafe_ptr=*__t5831t;
  const char* __t5276t__=0;
  char* __t5277t__unsafe_ptr=0;
  uint64_t __t5277t__dat__pos=0;
  uint64_t __t5277t__dat__length=0;
  char __t5277t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t5270t(&f__unsafe_ptr,&__t5276t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1678t(__t5276t__,&__t5277t__unsafe_ptr,&__t5277t__dat__pos,&__t5277t__dat__length,&__t5277t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5831t=f__unsafe_ptr;
  *__t5832t=__t5277t__unsafe_ptr;
  *__t5833t=__t5277t__dat__pos;
  *__t5834t=__t5277t__dat__length;
  *__t5835t=__t5277t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t5341t(char** __t5836t, uint64_t nat, char** __t5837t, uint64_t* __t5838t, uint64_t* __t5839t, char* __t5840t) {
  char* data__unsafe_ptr=*__t5836t;
  char* __t5342t__unsafe_ptr=0;
  uint64_t __t5342t__dat__pos=0;
  uint64_t __t5342t__dat__length=0;
  char __t5342t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t5275t(&data__unsafe_ptr,&__t5342t__unsafe_ptr,&__t5342t__dat__pos,&__t5342t__dat__length,&__t5342t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5836t=data__unsafe_ptr;
  *__t5837t=__t5342t__unsafe_ptr;
  *__t5838t=__t5342t__dat__pos;
  *__t5839t=__t5342t__dat__length;
  *__t5840t=__t5342t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void eq__t1832t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t5841t) {
  char __t1833t__=0;
  char __t1834t__=0;
  char __t1835t=0;
  char* __t1836t__unsafe_ptr=0;
  uint64_t __t1836t__dat__pos=0;
  uint64_t __t1836t__dat__length=0;
  char __t1836t__dat__first=0;
  char __t1837t__=0;
  char__t1690t(y,&__t1833t__);
  neq__t1693t(x__dat__first,__t1833t__,&__t1834t__);
  if(__t1834t__){
  __t1835t=0;
  goto __t_return;
  }
  str__t1678t(y,&__t1836t__unsafe_ptr,&__t1836t__dat__pos,&__t1836t__dat__length,&__t1836t__dat__first);
  eq__t1825t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1836t__unsafe_ptr,__t1836t__dat__pos,__t1836t__dat__length,__t1836t__dat__first,&__t1837t__);
  __t1835t=__t1837t__;
  goto __t_return;
  __t_return:
  *__t5841t=__t1835t;
}

int unsafe_temp__t1794t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5842t, char** __t5843t, uint64_t* __t5844t, uint64_t* __t5845t, char* __t5846t) {
  int __t1795t=0;
  char* __t1796t__unsafe_ptr=0;
  uint64_t __t1796t__unsafe_size=0;
  uint32_t __t1796t__unsafe_offset=0;
  uint32_t __t1796t__unsafe_align=0;
  uint64_t __t1797t=0;
  uint64_t __t1798t__=0;
  uint64_t __t1799t__=0;
  char* __t1800t__unsafe_ptr=0;
  uint64_t __t1800t__unsafe_size=0;
  uint32_t __t1800t__unsafe_offset=0;
  uint32_t __t1800t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1802t=0;
  char __t1803t__=0;
  char first_character=0;
  uint64_t __t1804t=0;
  char* __t1805t__unsafe_ptr=0;
  uint64_t __t1805t__dat__pos=0;
  uint64_t __t1805t__dat__length=0;
  char __t1805t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1806t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1695t(&__t1796t__unsafe_ptr,&__t1796t__unsafe_size,&__t1796t__unsafe_offset,&__t1796t__unsafe_align);
  __t1797t=1;
  add__t188t(__t1797t,other__dat__length,&__t1798t__);
  add__t188t(__t1798t__,prefix__dat__length,&__t1799t__);
  __t_errcode=alloc__t940t(&__t1796t__unsafe_ptr,&__t1796t__unsafe_size,&__t1796t__unsafe_offset,&__t1796t__unsafe_align,__t1799t__,&__t1800t__unsafe_ptr,&__t1800t__unsafe_size,&__t1800t__unsafe_offset,&__t1800t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1800t__unsafe_ptr;
  buf__unsafe_size=__t1800t__unsafe_size;
  buf__unsafe_offset=__t1800t__unsafe_offset;
  buf__unsafe_align=__t1800t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1802t=0;
  eq__t134t(prefix__dat__length,__t1802t,&__t1803t__);
  if(__t1803t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1804t=0;
  __t_errcode=str__t1622t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1804t,other__dat__length,first_character,&__t1805t__unsafe_ptr,&__t1805t__dat__pos,&__t1805t__dat__length,&__t1805t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1805t__unsafe_ptr;
  str__dat__pos=__t1805t__dat__pos;
  str__dat__length=__t1805t__dat__length;
  str__dat__first=__t1805t__dat__first;
  add__t817t(str__unsafe_ptr,str__dat__pos,&__t1806t__);
  _ret=__t1806t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t815t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5842t=cstr;
  *__t5843t=str__unsafe_ptr;
  *__t5844t=str__dat__pos;
  *__t5845t=str__dat__length;
  *__t5846t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1817t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5847t) {
  goto __t_return;
  __t_return:
  *__t5847t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t5175t(const char* path, char* __t5848t) {
  int __t5177t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t5848t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t5185t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t5849t) {
  int __t5187t=0;
  const char* __t5188t__cstr=0;
  char* __t5188t__str__unsafe_ptr=0;
  uint64_t __t5188t__str__dat__pos=0;
  uint64_t __t5188t__str__dat__length=0;
  char __t5188t__str__dat__first=0;
  const char* __t5190t__=0;
  char __t5191t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1794t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t5188t__cstr,&__t5188t__str__unsafe_ptr,&__t5188t__str__dat__pos,&__t5188t__str__dat__length,&__t5188t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1817t(__t5188t__cstr,__t5188t__str__unsafe_ptr,__t5188t__str__dat__pos,__t5188t__str__dat__length,__t5188t__str__dat__first,&__t5190t__);
  is_dir__t5175t(__t5190t__,&__t5191t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5849t=__t5191t__;
  
  __t_skip_returns:free__t815t(&__t5188t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t410t(uint64_t x, uint64_t y, uint64_t* __t5850t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5850t=z;
}

static inline __attribute__((always_inline)) void reuse__t5535t(char** __t5851t, uint64_t* __t5852t, uint32_t* __t5853t, uint32_t* __t5854t, uint64_t* __t5855t, uint64_t* __t5856t) {
  char* arn__buf__unsafe_ptr=*__t5851t;
  uint64_t arn__buf__unsafe_size=*__t5852t;
  uint32_t arn__buf__unsafe_offset=*__t5853t;
  uint32_t arn__buf__unsafe_align=*__t5854t;
  uint64_t arn__pos=*__t5855t;
  uint64_t __t5536t=0;
  uint64_t __t5537t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5538t=0;
  uint64_t __t5540t__=0;
  __t5536t=0;
  add__t188t(__t5536t,arn__pos,&__t5537t__);
  tracked_position=__t5537t__;
  goto __t_return;
  __t_return:
  *__t5851t=arn__buf__unsafe_ptr;
  *__t5852t=arn__buf__unsafe_size;
  *__t5853t=arn__buf__unsafe_offset;
  *__t5854t=arn__buf__unsafe_align;
  *__t5855t=arn__pos;
  *__t5856t=tracked_position;
}

int add__t2906t(char** __t5857t, uint64_t* __t5858t, uint32_t* __t5859t, uint32_t* __t5860t, uint64_t* __t5861t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5862t, uint64_t* __t5863t, uint64_t* __t5864t, char* __t5865t) {
  char* CHARS__buf__unsafe_ptr=*__t5857t;
  uint64_t CHARS__buf__unsafe_size=*__t5858t;
  uint32_t CHARS__buf__unsafe_offset=*__t5859t;
  uint32_t CHARS__buf__unsafe_align=*__t5860t;
  uint64_t CHARS__pos=*__t5861t;
  char* __t2907t__unsafe_ptr=0;
  uint64_t __t2907t__dat__pos=0;
  uint64_t __t2907t__dat__length=0;
  char __t2907t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2908t__unsafe_ptr=0;
  uint64_t __t2908t__dat__pos=0;
  uint64_t __t2908t__dat__length=0;
  char __t2908t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2909t__=0;
  uint64_t __t2910t__=0;
  char __t2911t__=0;
  char __t2912t=0;
  uint64_t __t2913t__=0;
  char __t2914t__=0;
  char __t2915t=0;
  uint64_t __t2916t__=0;
  char* __t2917t__buf__unsafe_ptr=0;
  uint64_t __t2917t__buf__unsafe_size=0;
  uint32_t __t2917t__buf__unsafe_offset=0;
  uint32_t __t2917t__buf__unsafe_align=0;
  uint64_t __t2917t__pos=0;
  char* __t2918t____t1224t__unsafe_ptr=0;
  uint64_t __t2918t____t1224t__unsafe_size=0;
  uint32_t __t2918t____t1224t__unsafe_offset=0;
  uint32_t __t2918t____t1224t__unsafe_align=0;
  uint64_t __t2918t____t1225t=0;
  char* __t2919t__buf__unsafe_ptr=0;
  uint64_t __t2919t__buf__unsafe_size=0;
  uint32_t __t2919t__buf__unsafe_offset=0;
  uint32_t __t2919t__buf__unsafe_align=0;
  uint64_t __t2919t__pos=0;
  char* __t2920t__buf__unsafe_ptr=0;
  uint64_t __t2920t__buf__unsafe_size=0;
  uint32_t __t2920t__buf__unsafe_offset=0;
  uint32_t __t2920t__buf__unsafe_align=0;
  uint64_t __t2920t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2921t__unsafe_ptr=0;
  uint64_t __t2921t__dat__pos=0;
  uint64_t __t2921t__dat__length=0;
  char __t2921t__dat__first=0;
  char* __t2922t____t1221t__unsafe_ptr=0;
  uint64_t __t2922t____t1221t__unsafe_size=0;
  uint32_t __t2922t____t1221t__unsafe_offset=0;
  uint32_t __t2922t____t1221t__unsafe_align=0;
  uint64_t __t2922t____t1222t=0;
  uint64_t __t2924t=0;
  uint64_t __t2925t__=0;
  char* __t2926t__unsafe_ptr=0;
  uint64_t __t2926t__dat__pos=0;
  uint64_t __t2926t__dat__length=0;
  char __t2926t__dat__first=0;
  char __t2927t__=0;
  char __t2928t__=0;
  char __t2929t=0;
  uint64_t __t2930t__=0;
  char __t2931t__=0;
  char __t2932t=0;
  uint64_t __t2933t__=0;
  char* __t2935t__unsafe_ptr=0;
  uint64_t __t2935t__dat__pos=0;
  uint64_t __t2935t__dat__length=0;
  char __t2935t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2936t__=0;
  uint64_t __t2937t__=0;
  uint64_t __t2938t__=0;
  char* __t2939t__buf__unsafe_ptr=0;
  uint64_t __t2939t__buf__unsafe_size=0;
  uint32_t __t2939t__buf__unsafe_offset=0;
  uint32_t __t2939t__buf__unsafe_align=0;
  uint64_t __t2939t__pos=0;
  char* __t2940t____t1224t__unsafe_ptr=0;
  uint64_t __t2940t____t1224t__unsafe_size=0;
  uint32_t __t2940t____t1224t__unsafe_offset=0;
  uint32_t __t2940t____t1224t__unsafe_align=0;
  uint64_t __t2940t____t1225t=0;
  char* __t2941t__buf__unsafe_ptr=0;
  uint64_t __t2941t__buf__unsafe_size=0;
  uint32_t __t2941t__buf__unsafe_offset=0;
  uint32_t __t2941t__buf__unsafe_align=0;
  uint64_t __t2941t__pos=0;
  char* __t2942t__buf__unsafe_ptr=0;
  uint64_t __t2942t__buf__unsafe_size=0;
  uint32_t __t2942t__buf__unsafe_offset=0;
  uint32_t __t2942t__buf__unsafe_align=0;
  uint64_t __t2942t__pos=0;
  char* __t2943t__unsafe_ptr=0;
  uint64_t __t2943t__dat__pos=0;
  uint64_t __t2943t__dat__length=0;
  char __t2943t__dat__first=0;
  char* __t2944t__unsafe_ptr=0;
  uint64_t __t2944t__dat__pos=0;
  uint64_t __t2944t__dat__length=0;
  char __t2944t__dat__first=0;
  char __t2945t=0;
  char* __t2946t____t1221t__unsafe_ptr=0;
  uint64_t __t2946t____t1221t__unsafe_size=0;
  uint32_t __t2946t____t1221t__unsafe_offset=0;
  uint32_t __t2946t____t1221t__unsafe_align=0;
  uint64_t __t2946t____t1222t=0;
  uint64_t __t2948t=0;
  uint64_t __t2949t__=0;
  char* __t2950t__unsafe_ptr=0;
  uint64_t __t2950t__dat__pos=0;
  uint64_t __t2950t__dat__length=0;
  char __t2950t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1655t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2907t__unsafe_ptr,&__t2907t__dat__pos,&__t2907t__dat__length,&__t2907t__dat__first);
  s1__unsafe_ptr=__t2907t__unsafe_ptr;
  s1__dat__pos=__t2907t__dat__pos;
  s1__dat__length=__t2907t__dat__length;
  s1__dat__first=__t2907t__dat__first;
  str__t1655t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2908t__unsafe_ptr,&__t2908t__dat__pos,&__t2908t__dat__length,&__t2908t__dat__first);
  s2__unsafe_ptr=__t2908t__unsafe_ptr;
  s2__dat__pos=__t2908t__dat__pos;
  s2__dat__length=__t2908t__dat__length;
  s2__dat__first=__t2908t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2909t__);
  if(__t2909t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2910t__);
  eq__t134t(CHARS__pos,__t2910t__,&__t2911t__);
  __t2912t=__t2911t__;
  }
  if(__t2912t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2913t__);
  lt__t302t(__t2913t__,CHARS__buf__unsafe_size,&__t2914t__);
  __t2915t=__t2914t__;
  }
  if(__t2915t){
  len__t1688t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2916t__);
  __t_errcode=alloc__t1293t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2916t__,&__t2917t__buf__unsafe_ptr,&__t2917t__buf__unsafe_size,&__t2917t__buf__unsafe_offset,&__t2917t__buf__unsafe_align,&__t2917t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1223t(__t2917t__buf__unsafe_ptr,__t2917t__buf__unsafe_size,__t2917t__buf__unsafe_offset,__t2917t__buf__unsafe_align,__t2917t__pos,&__t2918t____t1224t__unsafe_ptr,&__t2918t____t1224t__unsafe_size,&__t2918t____t1224t__unsafe_offset,&__t2918t____t1224t__unsafe_align,&__t2918t____t1225t);
  arena__t1211t(&__t2918t____t1224t__unsafe_ptr,&__t2918t____t1224t__unsafe_size,&__t2918t____t1224t__unsafe_offset,&__t2918t____t1224t__unsafe_align,__t2918t____t1225t,&__t2919t__buf__unsafe_ptr,&__t2919t__buf__unsafe_size,&__t2919t__buf__unsafe_offset,&__t2919t__buf__unsafe_align,&__t2919t__pos);
  __t2920t__buf__unsafe_ptr=__t2919t__buf__unsafe_ptr;
  __t2920t__buf__unsafe_size=__t2919t__buf__unsafe_size;
  __t2920t__buf__unsafe_offset=__t2919t__buf__unsafe_offset;
  __t2920t__buf__unsafe_align=__t2919t__buf__unsafe_align;
  __t2920t__pos=__t2919t__pos;
  surface__buf__unsafe_ptr=__t2920t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2920t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2920t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2920t__buf__unsafe_align;
  surface__pos=__t2920t__pos;
  __t_errcode=copy__t1754t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2921t__unsafe_ptr,&__t2921t__dat__pos,&__t2921t__dat__length,&__t2921t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2922t____t1221t__unsafe_ptr,&__t2922t____t1221t__unsafe_size,&__t2922t____t1221t__unsafe_offset,&__t2922t____t1221t__unsafe_align,&__t2922t____t1222t);
  __t2924t=0;
  add__t188t(s1__dat__pos,__t2924t,&__t2925t__);
  __t_errcode=str__t1674t(__t2922t____t1221t__unsafe_ptr,__t2922t____t1221t__unsafe_size,__t2922t____t1221t__unsafe_offset,__t2922t____t1221t__unsafe_align,__t2922t____t1222t,__t2925t__,&__t2926t__unsafe_ptr,&__t2926t__dat__pos,&__t2926t__dat__length,&__t2926t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2927t__);
  if(__t2927t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2928t__);
  __t2929t=__t2928t__;
  }
  if(__t2929t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2930t__);
  eq__t134t(s2__dat__pos,__t2930t__,&__t2931t__);
  __t2932t=__t2931t__;
  }
  if(__t2932t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2933t__);
  __t_errcode=str__t1674t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2933t__,s1__dat__pos,&__t2935t__unsafe_ptr,&__t2935t__dat__pos,&__t2935t__dat__length,&__t2935t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2926t__unsafe_ptr=__t2935t__unsafe_ptr;
  __t2926t__dat__pos=__t2935t__dat__pos;
  __t2926t__dat__length=__t2935t__dat__length;
  __t2926t__dat__first=__t2935t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1688t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2936t__);
  len__t1688t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2937t__);
  add__t188t(__t2936t__,__t2937t__,&__t2938t__);
  __t_errcode=alloc__t1293t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2938t__,&__t2939t__buf__unsafe_ptr,&__t2939t__buf__unsafe_size,&__t2939t__buf__unsafe_offset,&__t2939t__buf__unsafe_align,&__t2939t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1223t(__t2939t__buf__unsafe_ptr,__t2939t__buf__unsafe_size,__t2939t__buf__unsafe_offset,__t2939t__buf__unsafe_align,__t2939t__pos,&__t2940t____t1224t__unsafe_ptr,&__t2940t____t1224t__unsafe_size,&__t2940t____t1224t__unsafe_offset,&__t2940t____t1224t__unsafe_align,&__t2940t____t1225t);
  arena__t1211t(&__t2940t____t1224t__unsafe_ptr,&__t2940t____t1224t__unsafe_size,&__t2940t____t1224t__unsafe_offset,&__t2940t____t1224t__unsafe_align,__t2940t____t1225t,&__t2941t__buf__unsafe_ptr,&__t2941t__buf__unsafe_size,&__t2941t__buf__unsafe_offset,&__t2941t__buf__unsafe_align,&__t2941t__pos);
  __t2942t__buf__unsafe_ptr=__t2941t__buf__unsafe_ptr;
  __t2942t__buf__unsafe_size=__t2941t__buf__unsafe_size;
  __t2942t__buf__unsafe_offset=__t2941t__buf__unsafe_offset;
  __t2942t__buf__unsafe_align=__t2941t__buf__unsafe_align;
  __t2942t__pos=__t2941t__pos;
  surface__buf__unsafe_ptr=__t2942t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2942t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2942t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2942t__buf__unsafe_align;
  surface__pos=__t2942t__pos;
  __t_errcode=copy__t1754t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2943t__unsafe_ptr,&__t2943t__dat__pos,&__t2943t__dat__length,&__t2943t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1754t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2944t__unsafe_ptr,&__t2944t__dat__pos,&__t2944t__dat__length,&__t2944t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2946t____t1221t__unsafe_ptr,&__t2946t____t1221t__unsafe_size,&__t2946t____t1221t__unsafe_offset,&__t2946t____t1221t__unsafe_align,&__t2946t____t1222t);
  __t2948t=0;
  add__t188t(prev_pos,__t2948t,&__t2949t__);
  __t_complain=str__t1674t(__t2946t____t1221t__unsafe_ptr,__t2946t____t1221t__unsafe_size,__t2946t____t1221t__unsafe_offset,__t2946t____t1221t__unsafe_align,__t2946t____t1222t,__t2949t__,&__t2950t__unsafe_ptr,&__t2950t__dat__pos,&__t2950t__dat__length,&__t2950t__dat__first);
  __t2945t=__t_complain;
  if(__t_complain){
  goto __t2945t__label;
  }
  ret__unsafe_ptr=__t2950t__unsafe_ptr;
  ret__dat__pos=__t2950t__dat__pos;
  ret__dat__length=__t2950t__dat__length;
  ret__dat__first=__t2950t__dat__first;
  __t2945t__label:__t2945t=__t2945t==0;
  __t2926t__unsafe_ptr=ret__unsafe_ptr;
  __t2926t__dat__pos=ret__dat__pos;
  __t2926t__dat__length=ret__dat__length;
  __t2926t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5857t=CHARS__buf__unsafe_ptr;
  *__t5858t=CHARS__buf__unsafe_size;
  *__t5859t=CHARS__buf__unsafe_offset;
  *__t5860t=CHARS__buf__unsafe_align;
  *__t5861t=CHARS__pos;
  *__t5862t=__t2926t__unsafe_ptr;
  *__t5863t=__t2926t__dat__pos;
  *__t5864t=__t2926t__dat__length;
  *__t5865t=__t2926t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1895t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t5866t) {
  int __t1896t=0;
  char __t1897t__=0;
  uint64_t __t1898t__=0;
  char* __t1899t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,s__dat__length,&__t1897t__);
  if(__t1897t__){
  __t_errcode=22;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t1898t__);
  add__t817t(s__unsafe_ptr,__t1898t__,&__t1899t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5866t=__t1899t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1921t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t5867t, uint64_t* __t5868t, uint64_t* __t5869t, char* __t5870t) {
  char* __t1922t__unsafe_ptr=0;
  uint64_t __t1922t__dat__pos=0;
  uint64_t __t1922t__dat__length=0;
  char __t1922t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1923t__=0;
  char* __t1924t__unsafe_ptr=0;
  uint64_t __t1924t__dat__pos=0;
  uint64_t __t1924t__dat__length=0;
  char __t1924t__dat__first=0;
  char __t1925t__=0;
  char __t1926t__=0;
  char __t1927t=0;
  char __t1928t__=0;
  uint64_t __t1930t__=0;
  uint64_t new_length=0;
  uint64_t __t1931t=0;
  char __t1932t__=0;
  char new_first=0;
  char* __t1934t__=0;
  char __t1935t__value=0;
  uint64_t __t1936t__=0;
  char* __t1937t__unsafe_ptr=0;
  uint64_t __t1937t__dat__pos=0;
  uint64_t __t1937t__dat__length=0;
  char __t1937t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1655t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1922t__unsafe_ptr,&__t1922t__dat__pos,&__t1922t__dat__length,&__t1922t__dat__first);
  s__unsafe_ptr=__t1922t__unsafe_ptr;
  s__dat__pos=__t1922t__dat__pos;
  s__dat__length=__t1922t__dat__length;
  s__dat__first=__t1922t__dat__first;
  eq__t134t(from,to,&__t1923t__);
  if(__t1923t__){
  str__t1678t(__t440t,&__t1924t__unsafe_ptr,&__t1924t__dat__pos,&__t1924t__dat__length,&__t1924t__dat__first);
  goto __t_return;
  }
  gt__t326t(from,to,&__t1925t__);
  if(!__t1925t__){
  gt__t326t(to,s__dat__length,&__t1926t__);
  __t1927t=__t1926t__;
  }
  else{
  __t1927t=0;
  not__t42t(__t1927t,&__t1928t__);
  __t1927t=__t1928t__;
  }
  if(__t1927t){
  __t_errcode=29;
  goto __t_failure;
  }
  sub__t410t(to,from,&__t1930t__);
  new_length=__t1930t__;
  __t1931t=0;
  neq__t158t(from,__t1931t,&__t1932t__);
  if(__t1932t__){
  __t_errcode=get__t1895t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1934t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1934t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1935t__value,__t1934t__,1);
  new_first=__t1935t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1936t__);
  str__t1618t(s__unsafe_ptr,__t1936t__,new_length,new_first,&__t1937t__unsafe_ptr,&__t1937t__dat__pos,&__t1937t__dat__length,&__t1937t__dat__first);
  __t1924t__unsafe_ptr=__t1937t__unsafe_ptr;
  __t1924t__dat__pos=__t1937t__dat__pos;
  __t1924t__dat__length=__t1937t__dat__length;
  __t1924t__dat__first=__t1937t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5867t=__t1924t__unsafe_ptr;
  *__t5868t=__t1924t__dat__pos;
  *__t5869t=__t1924t__dat__length;
  *__t5870t=__t1924t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t2000t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5871t) {
  char* __t2001t__unsafe_ptr=0;
  uint64_t __t2001t__dat__pos=0;
  uint64_t __t2001t__dat__length=0;
  char __t2001t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2002t__unsafe_ptr=0;
  uint64_t __t2002t__dat__pos=0;
  uint64_t __t2002t__dat__length=0;
  char __t2002t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t2003t=0;
  uint64_t __t2004t__=0;
  uint64_t d=0;
  char __t2005t__=0;
  char __t2006t=0;
  char* __t2007t__unsafe_ptr=0;
  uint64_t __t2007t__dat__pos=0;
  uint64_t __t2007t__dat__length=0;
  char __t2007t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t2008t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1655t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2001t__unsafe_ptr,&__t2001t__dat__pos,&__t2001t__dat__length,&__t2001t__dat__first);
  stack__unsafe_ptr=__t2001t__unsafe_ptr;
  stack__dat__pos=__t2001t__dat__pos;
  stack__dat__length=__t2001t__dat__length;
  stack__dat__first=__t2001t__dat__first;
  str__t1678t(_needle,&__t2002t__unsafe_ptr,&__t2002t__dat__pos,&__t2002t__dat__length,&__t2002t__dat__first);
  needle__unsafe_ptr=__t2002t__unsafe_ptr;
  needle__dat__pos=__t2002t__dat__pos;
  needle__dat__length=__t2002t__dat__length;
  needle__dat__first=__t2002t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t402t(n,needle__dat__length,&__t2004t__);
  __t2003t=__t_complain;
  if(__t_complain){
  goto __t2003t__label;
  }
  d=__t2004t__;
  __t2003t__label:__t2003t=__t2003t==0;
  not__t42t(__t2003t,&__t2005t__);
  if(__t2005t__){
  __t2006t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1921t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t2007t__unsafe_ptr,&__t2007t__dat__pos,&__t2007t__dat__length,&__t2007t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t2007t__unsafe_ptr;
  ret__dat__pos=__t2007t__dat__pos;
  ret__dat__length=__t2007t__dat__length;
  ret__dat__first=__t2007t__dat__first;
  eq__t1825t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2008t__);
  __t2006t=__t2008t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5871t=__t2006t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t750t(uint64_t to, uint64_t* __t5872t, uint64_t* __t5873t) {
  uint64_t __t751t=0;
  uint64_t from=0;
  __t751t=0;
  from=__t751t;
  goto __t_return;
  __t_return:
  *__t5872t=from;
  *__t5873t=to;
}

static inline __attribute__((always_inline)) void range__t767t(uint64_t _from, uint64_t to, uint64_t* __t5874t, uint64_t* __t5875t) {
  uint64_t __t768t=0;
  uint64_t __t769t__=0;
  uint64_t __t770t=0;
  uint64_t from=0;
  __t768t=0;
  add__t188t(__t768t,_from,&__t769t__);
  __t770t=__t769t__;
  from=__t770t;
  goto __t_return;
  __t_return:
  *__t5874t=from;
  *__t5875t=to;
}

static inline __attribute__((always_inline)) int mutget__t772t(uint64_t* __t5876t, uint64_t r__to, uint64_t skipped, uint64_t* __t5877t) {
  uint64_t r__from=*__t5876t;
  char __t773t__=0;
  uint64_t ret=0;
  uint64_t __t774t=0;
  uint64_t __t775t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(r__from,r__to,&__t773t__);
  if(__t773t__){
  __t_errcode=16;
  goto __t_failure;
  }
  ret=r__from;
  __t774t=1;
  add__t188t(ret,__t774t,&__t775t__);
  r__from=__t775t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5876t=r__from;
  *__t5877t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2086t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5878t) {
  char* __t2087t__unsafe_ptr=0;
  uint64_t __t2087t__dat__pos=0;
  uint64_t __t2087t__dat__length=0;
  char __t2087t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2088t__unsafe_ptr=0;
  uint64_t __t2088t__dat__pos=0;
  uint64_t __t2088t__dat__length=0;
  char __t2088t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t2089t=0;
  uint64_t __t2090t__=0;
  uint64_t n=0;
  char __t2091t__=0;
  char __t2092t=0;
  uint64_t __t2093t=0;
  uint64_t __t2094t__from=0;
  uint64_t __t2094t__to=0;
  uint64_t __t2095t__from=0;
  uint64_t __t2095t__to=0;
  char __t2096t=0;
  uint64_t __t2097t__=0;
  uint64_t i=0;
  char __t2098t=0;
  uint64_t __t2099t__=0;
  char* __t2100t__unsafe_ptr=0;
  uint64_t __t2100t__dat__pos=0;
  uint64_t __t2100t__dat__length=0;
  char __t2100t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t2101t__=0;
  char __t2102t=0;
  char __t2103t=0;
  int __t_complain=0;
  str__t1655t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2087t__unsafe_ptr,&__t2087t__dat__pos,&__t2087t__dat__length,&__t2087t__dat__first);
  stack__unsafe_ptr=__t2087t__unsafe_ptr;
  stack__dat__pos=__t2087t__dat__pos;
  stack__dat__length=__t2087t__dat__length;
  stack__dat__first=__t2087t__dat__first;
  str__t1678t(_needle,&__t2088t__unsafe_ptr,&__t2088t__dat__pos,&__t2088t__dat__length,&__t2088t__dat__first);
  needle__unsafe_ptr=__t2088t__unsafe_ptr;
  needle__dat__pos=__t2088t__dat__pos;
  needle__dat__length=__t2088t__dat__length;
  needle__dat__first=__t2088t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t402t(stack__dat__length,d,&__t2090t__);
  __t2089t=__t_complain;
  if(__t_complain){
  goto __t2089t__label;
  }
  n=__t2090t__;
  __t2089t__label:__t2089t=__t2089t==0;
  not__t42t(__t2089t,&__t2091t__);
  if(__t2091t__){
  __t2092t=0;
  goto __t_return;
  }
  of__t750t(n,&__t2094t__from,&__t2094t__to);
  range__t767t(__t2094t__from,__t2094t__to,&__t2095t__from,&__t2095t__to);
  __t2093t=0-1;
  while(1){
  __t2093t=__t2093t+1;
  __t_complain=mutget__t772t(&__t2095t__from,__t2095t__to,__t2093t,&__t2097t__);
  __t2096t=__t_complain;
  if(__t_complain){
  goto __t2096t__label;
  }
  i=__t2097t__;
  __t2096t__label:__t2096t=__t2096t==0;
  if(!__t2096t){
  break;
  }
  add__t188t(i,d,&__t2099t__);
  __t_complain=slice__t1921t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t2099t__,&__t2100t__unsafe_ptr,&__t2100t__dat__pos,&__t2100t__dat__length,&__t2100t__dat__first);
  __t2098t=__t_complain;
  if(__t_complain){
  goto __t2098t__label;
  }
  sliced__unsafe_ptr=__t2100t__unsafe_ptr;
  sliced__dat__pos=__t2100t__dat__pos;
  sliced__dat__length=__t2100t__dat__length;
  sliced__dat__first=__t2100t__dat__first;
  __t2098t__label:__t2098t=__t2098t==0;
  eq__t1825t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2101t__);
  if(__t2101t__){
  __t2102t=1;
  __t2092t=__t2102t;
  goto __t_return;
  }
  }
  __t2103t=0;
  __t2092t=__t2103t;
  goto __t_return;
  __t_return:
  *__t5878t=__t2092t;
}

static inline __attribute__((always_inline)) void restore_stdout__t5454t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void stdout_to_err__t5455t(int64_t* __t5879t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5879t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t1889t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1890t=0;
  const char* endl=0;
  endl=__t452t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void popen__t4499t(const char* cmd, char** __t5880t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t5880t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4498t(char* unsafe_ptr, int64_t* __t5881t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t5881t=status;
}

static inline __attribute__((always_inline)) void int__t635t(uint64_t x, int64_t* __t5882t) {
  int __t636t=0;
  int __t637t=0;
  int __t638t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5882t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t5883t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t5883t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t5884t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5884t=z;
}

static inline __attribute__((always_inline)) int open__t4500t(const char* cmd, char** __t5885t) {
  char* __t4501t__=0;
  char* unsafe_ptr=0;
  char __t4502t__=0;
  char __t4503t__=0;
  char __t4504t__=0;
  int64_t __t4505t__=0;
  int64_t status=0;
  uint64_t __t4506t=0;
  int64_t __t4507t__=0;
  char __t4508t__=0;
  char __t4509t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4499t(cmd,&__t4501t__);
  unsafe_ptr=__t4501t__;
  exists__t654t(unsafe_ptr,&__t4502t__);
  not__t42t(__t4502t__,&__t4503t__);
  if(__t4503t__){
  __t_errcode=47;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t654t(unsafe_ptr,&__t4504t__);
  if(__t4504t__){
  pclose__t4498t(unsafe_ptr,&__t4505t__);
  status=__t4505t__;
  unsafe_ptr=0;
  __t4506t=0;
  int__t635t(__t4506t,&__t4507t__);
  neq__t147t(status,__t4507t__,&__t4508t__);
  if(__t4508t__){
  __t_complain=48;
  goto __t4509t__label;
  __t4509t__label:__t4509t=__t4509t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5885t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4511t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t5886t) {
  const char* __t4512t__cstr=0;
  char* __t4512t__str__unsafe_ptr=0;
  uint64_t __t4512t__str__dat__pos=0;
  uint64_t __t4512t__str__dat__length=0;
  char __t4512t__str__dat__first=0;
  const char* __t4514t__=0;
  char* __t4515t__unsafe_ptr=0;
  char __t4516t____t4504t__=0;
  int64_t __t4516t____t4505t__=0;
  int64_t __t4516t__status=0;
  uint64_t __t4516t____t4506t=0;
  int64_t __t4516t____t4507t__=0;
  char __t4516t____t4508t__=0;
  char __t4516t____t4509t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1808t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4512t__cstr,&__t4512t__str__unsafe_ptr,&__t4512t__str__dat__pos,&__t4512t__str__dat__length,&__t4512t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1818t(__t4512t__cstr,__t4512t__str__unsafe_ptr,__t4512t__str__dat__pos,__t4512t__str__dat__length,__t4512t__str__dat__first,&__t4514t__);
  __t_errcode=open__t4500t(__t4514t__,&__t4515t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t654t(__t4515t__unsafe_ptr,&__t4516t____t4504t__);
  if(__t4516t____t4504t__){
  pclose__t4498t(__t4515t__unsafe_ptr,&__t4516t____t4505t__);
  __t4516t__status=__t4516t____t4505t__;
  __t4515t__unsafe_ptr=0;
  __t4516t____t4506t=0;
  int__t635t(__t4516t____t4506t,&__t4516t____t4507t__);
  neq__t147t(__t4516t__status,__t4516t____t4507t__,&__t4516t____t4508t__);
  if(__t4516t____t4508t__){
  __t_complain=48;
  goto __t4509t__label;
  __t4509t__label:__t4516t____t4509t=__t4516t____t4509t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5886t=__t4515t__unsafe_ptr;
  
  __t_skip_returns:free__t815t(&__t4512t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4253t(int64_t value, char* __t5887t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t5887t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4252t(int64_t value, const char** __t5888t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5888t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t5889t) {
  const char* value=0;
  *__t5889t=value;
}

int run__t5383t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t5890t) {
  char* __t5384t__unsafe_ptr=0;
  char __t5385t____t4516t____t4504t__=0;
  int64_t __t5385t____t4516t____t4505t__=0;
  int64_t __t5385t____t4516t__status=0;
  uint64_t __t5385t____t4516t____t4506t=0;
  int64_t __t5385t____t4516t____t4507t__=0;
  char __t5385t____t4516t____t4508t__=0;
  char __t5385t____t4516t____t4509t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t5386t=0;
  int64_t error=0;
  char __t5387t__=0;
  char __t5388t__=0;
  const char* __t5389t__=0;
  const char* __t5390t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4511t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5384t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t5384t__unsafe_ptr;
  exists__t654t(__t5384t__unsafe_ptr,&__t5385t____t4516t____t4504t__);
  if(__t5385t____t4516t____t4504t__){
  pclose__t4498t(__t5384t__unsafe_ptr,&__t5385t____t4516t____t4505t__);
  __t5385t____t4516t__status=__t5385t____t4516t____t4505t__;
  __t5384t__unsafe_ptr=0;
  __t5385t____t4516t____t4506t=0;
  int__t635t(__t5385t____t4516t____t4506t,&__t5385t____t4516t____t4507t__);
  neq__t147t(__t5385t____t4516t__status,__t5385t____t4516t____t4507t__,&__t5385t____t4516t____t4508t__);
  if(__t5385t____t4516t____t4508t__){
  __t_complain=48;
  goto __t4509t__label;
  __t4509t__label:__t5385t____t4516t____t4509t=__t5385t____t4516t____t4509t==0;
  }
  }
  __t5386t=__t_complain;
  error=__t5386t;
  ok__t4253t(error,&__t5387t__);
  not__t42t(__t5387t__,&__t5388t__);
  if(__t5388t__){
  cstr__t4252t(error,&__t5389t__);
  goto __t_return;
  }
  cstr__t1t(&__t5390t__);
  __t5389t__=__t5390t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5890t=__t5389t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5891t) {
  int value=0;
  *__t5891t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5892t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5892t=__t54t__;
}

static inline __attribute__((always_inline)) void exists__t1616t(const char* c, char* __t5893t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5893t=z;
}

static inline __attribute__((always_inline)) void nn__t439t(const char* value, const char** __t5894t, const char** __t5895t) {
  const char* __t441t=0;
  __t441t=__t440t;
  goto __t_return;
  __t_return:
  *__t5894t=value;
  *__t5895t=__t441t;
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

static inline __attribute__((always_inline)) void print_marker__t5419t(char colors__initialized) {
  const char* __t5421t__value=0;
  const char* __t5421t____t441t=0;
  int __t5423t=0;
  char __t5424t=0;
  char __t5425t=0;
  const char* __t5430t__value=0;
  const char* __t5430t____t441t=0;
  int __t5432t=0;
  const char* __t5435t__value=0;
  const char* __t5435t____t441t=0;
  nn__t439t(__t4273t,&__t5421t__value,&__t5421t____t441t);
  print__t448t(__t5421t__value,__t5421t____t441t);
  __t5425t=1;
  if(__t5426t!=__t5426t){
  __t5425t=0;
  }
  if(__t5425t){
  __t5424t=1;
  }
  if(__t5424t){
  set__t484t(colors__initialized);
  nn__t439t(__t5429t,&__t5430t__value,&__t5430t____t441t);
  print__t448t(__t5430t__value,__t5430t____t441t);
  }
  set__t604t(colors__initialized);
  nn__t439t(__t5416t,&__t5435t__value,&__t5435t____t441t);
  print__t448t(__t5435t__value,__t5435t____t441t);
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

static inline __attribute__((always_inline)) void print_marker__t5400t(char colors__initialized) {
  const char* __t5402t__value=0;
  const char* __t5402t____t441t=0;
  char __t5404t=0;
  char __t5405t=0;
  const char* __t5410t__value=0;
  const char* __t5410t____t441t=0;
  int __t5412t=0;
  int __t5413t=0;
  const char* __t5417t__value=0;
  const char* __t5417t____t441t=0;
  nn__t439t(__t4273t,&__t5402t__value,&__t5402t____t441t);
  print__t448t(__t5402t__value,__t5402t____t441t);
  __t5405t=1;
  if(__t5406t!=__t5406t){
  __t5405t=0;
  }
  if(__t5405t){
  __t5404t=1;
  }
  if(__t5404t){
  set__t488t(colors__initialized);
  nn__t439t(__t5409t,&__t5410t__value,&__t5410t____t441t);
  print__t448t(__t5410t__value,__t5410t____t441t);
  }
  set__t604t(colors__initialized);
  nn__t439t(__t5416t,&__t5417t__value,&__t5417t____t441t);
  print__t448t(__t5417t__value,__t5417t____t441t);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int test__t5479t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t5896t) {
  int64_t __t5481t__=0;
  const char* __t5484t__=0;
  const char* __t5485t=0;
  const char* error=0;
  int __t5486t=0;
  int __t5487t__=0;
  char __t5488t__=0;
  const char* __t5489t__=0;
  const char* __t5491t__value=0;
  const char* __t5491t____t441t=0;
  char __t5493t__=0;
  char __t5497t=0;
  char __t5502t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5455t(&__t5481t__);
  print__t1889t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t5383t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5484t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5485t=__t5484t__;
  error=__t5485t;
  not__t53t(__t5486t,&__t5487t__);
  if(should_fail){
  exists__t1616t(error,&__t5488t__);
  if(__t5488t__){
  cstr__t1t(&__t5489t__);
  error=__t5489t__;
  }
  else{
  error=__t5490t;
  }
  }
  nn__t439t(__t5463t,&__t5491t__value,&__t5491t____t441t);
  print__t448t(__t5491t__value,__t5491t____t441t);
  exists__t1616t(error,&__t5493t__);
  if(__t5493t__){
  print_marker__t5419t(colors__initialized);
  print__t450t(error);
  __t5497t=0;
  goto __t_return;
  }
  print_marker__t5400t(colors__initialized);
  print__t450t(__t5500t);
  __t5502t=1;
  __t5497t=__t5502t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5896t=__t5497t;
  
  __t_skip_returns:restore_stdout__t5454t(__t5481t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t461t(uint64_t value, const char* endl) {
  int __t462t=0;
  printf("%llu%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void nn__t446t(uint64_t value, uint64_t* __t5897t, const char** __t5898t) {
  const char* __t447t=0;
  __t447t=__t440t;
  goto __t_return;
  __t_return:
  *__t5897t=value;
  *__t5898t=__t447t;
}

static inline __attribute__((always_inline)) int _main__t5541t() {
  char* __t5543t__unsafe_ptr=0;
  uint64_t __t5543t__dat__pos=0;
  uint64_t __t5543t__dat__length=0;
  char __t5543t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5544t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5546t=0;
  char* __t5547t__unsafe_ptr=0;
  uint64_t __t5547t__unsafe_size=0;
  uint32_t __t5547t__unsafe_offset=0;
  uint32_t __t5547t__unsafe_align=0;
  char* __t5549t__buf__unsafe_ptr=0;
  uint64_t __t5549t__buf__unsafe_size=0;
  uint32_t __t5549t__buf__unsafe_offset=0;
  uint32_t __t5549t__buf__unsafe_align=0;
  uint64_t __t5549t__pos=0;
  char* __t5550t__buf__unsafe_ptr=0;
  uint64_t __t5550t__buf__unsafe_size=0;
  uint32_t __t5550t__buf__unsafe_offset=0;
  uint32_t __t5550t__buf__unsafe_align=0;
  uint64_t __t5550t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char __t5551t=0;
  char* __t5553t__unsafe_ptr=0;
  uint64_t __t5553t__dat__pos=0;
  uint64_t __t5553t__dat__length=0;
  char __t5553t__dat__first=0;
  char* preferred_backend__unsafe_ptr=0;
  uint64_t preferred_backend__dat__pos=0;
  uint64_t preferred_backend__dat__length=0;
  char preferred_backend__dat__first=0;
  int __t5562t=0;
  char* __t5564t__unsafe_ptr=0;
  uint64_t __t5564t__dat__pos=0;
  uint64_t __t5564t__dat__length=0;
  char __t5564t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  char* __t5555t__unsafe_ptr=0;
  uint64_t __t5555t__dat__pos=0;
  uint64_t __t5555t__dat__length=0;
  char __t5555t__dat__first=0;
  char* __t5557t__unsafe_ptr=0;
  uint64_t __t5557t__dat__pos=0;
  uint64_t __t5557t__dat__length=0;
  char __t5557t__dat__first=0;
  uint64_t __t5565t=0;
  uint64_t __t5566t=0;
  uint64_t counter=0;
  uint64_t __t5567t=0;
  uint64_t __t5568t=0;
  uint64_t failures=0;
  uint64_t __t5569t=0;
  char* __t5570t__unsafe_ptr=0;
  char __t5572t=0;
  char* __t5573t__unsafe_ptr=0;
  uint64_t __t5573t__dat__pos=0;
  uint64_t __t5573t__dat__length=0;
  char __t5573t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5575t__=0;
  char __t5576t__=0;
  char __t5577t__=0;
  char __t5578t=0;
  char __t5579t__=0;
  uint64_t __t5580t__=0;
  uint64_t __t5581t____t5538t=0;
  uint64_t __t5581t____t5540t__=0;
  char* __t5582t__unsafe_ptr=0;
  uint64_t __t5582t__dat__pos=0;
  uint64_t __t5582t__dat__length=0;
  char __t5582t__dat__first=0;
  char* __t5584t__unsafe_ptr=0;
  uint64_t __t5584t__dat__pos=0;
  uint64_t __t5584t__dat__length=0;
  char __t5584t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5585t=0;
  char* __t5586t__unsafe_ptr=0;
  char __t5588t=0;
  char* __t5589t__unsafe_ptr=0;
  uint64_t __t5589t__dat__pos=0;
  uint64_t __t5589t__dat__length=0;
  char __t5589t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5591t__=0;
  char __t5592t__=0;
  uint64_t __t5593t__=0;
  uint64_t __t5594t____t5538t=0;
  uint64_t __t5594t____t5540t__=0;
  uint64_t __t5595t=0;
  uint64_t __t5596t__=0;
  char __t5598t__=0;
  char should_fail=0;
  char* __t5599t__unsafe_ptr=0;
  uint64_t __t5599t__dat__pos=0;
  uint64_t __t5599t__dat__length=0;
  char __t5599t__dat__first=0;
  char* __t5600t__unsafe_ptr=0;
  uint64_t __t5600t__dat__pos=0;
  uint64_t __t5600t__dat__length=0;
  char __t5600t__dat__first=0;
  char __t5601t__=0;
  char __t5602t__=0;
  uint64_t __t5603t=0;
  uint64_t __t5604t__=0;
  int64_t __t5605t__=0;
  uint64_t __t5607t=0;
  char __t5608t__=0;
  const char* __t5622t__value=0;
  const char* __t5622t____t441t=0;
  const char* __t5612t__value=0;
  const char* __t5612t____t441t=0;
  const char* __t5617t__value=0;
  const char* __t5617t____t441t=0;
  uint64_t __t5628t__value=0;
  const char* __t5628t____t447t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1678t(__t5542t,&__t5543t__unsafe_ptr,&__t5543t__dat__pos,&__t5543t__dat__length,&__t5543t__dat__first);
  test_root__unsafe_ptr=__t5543t__unsafe_ptr;
  test_root__dat__pos=__t5543t__dat__pos;
  test_root__dat__length=__t5543t__dat__length;
  test_root__dat__first=__t5543t__dat__first;
  colors__t478t(&__t5544t__initialized);
  colors__initialized=__t5544t__initialized;
  __t5546t=128;
  __t_errcode=alloc__t1095t(__t5546t,&__t5547t__unsafe_ptr,&__t5547t__unsafe_size,&__t5547t__unsafe_offset,&__t5547t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1214t(&__t5547t__unsafe_ptr,&__t5547t__unsafe_size,&__t5547t__unsafe_offset,&__t5547t__unsafe_align,&__t5549t__buf__unsafe_ptr,&__t5549t__buf__unsafe_size,&__t5549t__buf__unsafe_offset,&__t5549t__buf__unsafe_align,&__t5549t__pos);
  __t5550t__buf__unsafe_ptr=__t5549t__buf__unsafe_ptr;
  __t5550t__buf__unsafe_size=__t5549t__buf__unsafe_size;
  __t5550t__buf__unsafe_offset=__t5549t__buf__unsafe_offset;
  __t5550t__buf__unsafe_align=__t5549t__buf__unsafe_align;
  __t5550t__pos=__t5549t__pos;
  CHARS__buf__unsafe_ptr=__t5550t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5550t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5550t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5550t__buf__unsafe_align;
  CHARS__pos=__t5550t__pos;
  __t_complain=arg_after__t4411t(__t5552t,&__t5553t__unsafe_ptr,&__t5553t__dat__pos,&__t5553t__dat__length,&__t5553t__dat__first);
  __t5551t=__t_complain;
  if(__t_complain){
  goto __t5551t__label;
  }
  preferred_backend__unsafe_ptr=__t5553t__unsafe_ptr;
  preferred_backend__dat__pos=__t5553t__dat__pos;
  preferred_backend__dat__length=__t5553t__dat__length;
  preferred_backend__dat__first=__t5553t__dat__first;
  __t5551t__label:__t5551t=__t5551t==0;
  if(__t5551t){
  __t_errcode=add__t2996t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5554t,preferred_backend__unsafe_ptr,preferred_backend__dat__pos,preferred_backend__dat__length,preferred_backend__dat__first,&__t5555t__unsafe_ptr,&__t5555t__dat__pos,&__t5555t__dat__length,&__t5555t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2951t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5555t__unsafe_ptr,__t5555t__dat__pos,__t5555t__dat__length,__t5555t__dat__first,__t5556t,&__t5557t__unsafe_ptr,&__t5557t__dat__pos,&__t5557t__dat__length,&__t5557t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5557t__unsafe_ptr;
  command_base__dat__pos=__t5557t__dat__pos;
  command_base__dat__length=__t5557t__dat__length;
  command_base__dat__first=__t5557t__dat__first;
  }
  else{
  __t_errcode=copy__t1759t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5563t,&__t5564t__unsafe_ptr,&__t5564t__dat__pos,&__t5564t__dat__length,&__t5564t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5564t__unsafe_ptr;
  command_base__dat__pos=__t5564t__dat__pos;
  command_base__dat__length=__t5564t__dat__length;
  command_base__dat__first=__t5564t__dat__first;
  }
  __t5565t=0;
  __t5566t=__t5565t;
  counter=__t5566t;
  __t5567t=0;
  __t5568t=__t5567t;
  failures=__t5568t;
  __t_errcode=open__t5258t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5570t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5569t=0-1;
  while(1){
  __t5569t=__t5569t+1;
  __t_complain=mutget__t5341t(&__t5570t__unsafe_ptr,__t5569t,&__t5573t__unsafe_ptr,&__t5573t__dat__pos,&__t5573t__dat__length,&__t5573t__dat__first);
  __t5572t=__t_complain;
  if(__t_complain){
  goto __t5572t__label;
  }
  path__unsafe_ptr=__t5573t__unsafe_ptr;
  path__dat__pos=__t5573t__dat__pos;
  path__dat__length=__t5573t__dat__length;
  path__dat__first=__t5573t__dat__first;
  __t5572t__label:__t5572t=__t5572t==0;
  if(!__t5572t){
  break;
  }
  eq__t1832t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5574t,&__t5575t__);
  if(!__t5575t__){
  __t_errcode=is_dir__t5185t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5576t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5576t__,&__t5577t__);
  __t5578t=__t5577t__;
  }
  else{
  __t5578t=0;
  not__t42t(__t5578t,&__t5579t__);
  __t5578t=__t5579t__;
  }
  if(__t5578t){
  continue;
  }
  reuse__t5535t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5580t__);
  __t_errcode=add__t2906t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5582t__unsafe_ptr,&__t5582t__dat__pos,&__t5582t__dat__length,&__t5582t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2951t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5582t__unsafe_ptr,__t5582t__dat__pos,__t5582t__dat__length,__t5582t__dat__first,__t5583t,&__t5584t__unsafe_ptr,&__t5584t__dat__pos,&__t5584t__dat__length,&__t5584t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5584t__unsafe_ptr;
  dir_path__dat__pos=__t5584t__dat__pos;
  dir_path__dat__length=__t5584t__dat__length;
  dir_path__dat__first=__t5584t__dat__first;
  __t_errcode=open__t5258t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5586t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5585t=0-1;
  while(1){
  __t5585t=__t5585t+1;
  __t_complain=mutget__t5341t(&__t5586t__unsafe_ptr,__t5585t,&__t5589t__unsafe_ptr,&__t5589t__dat__pos,&__t5589t__dat__length,&__t5589t__dat__first);
  __t5588t=__t_complain;
  if(__t_complain){
  goto __t5588t__label;
  }
  entry__unsafe_ptr=__t5589t__unsafe_ptr;
  entry__dat__pos=__t5589t__dat__pos;
  entry__dat__length=__t5589t__dat__length;
  entry__dat__first=__t5589t__dat__first;
  __t5588t__label:__t5588t=__t5588t==0;
  if(!__t5588t){
  break;
  }
  __t_errcode=ends_with__t2000t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5590t,&__t5591t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5591t__,&__t5592t__);
  if(__t5592t__){
  continue;
  }
  reuse__t5535t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5593t__);
  __t5595t=1;
  add__t188t(counter,__t5595t,&__t5596t__);
  counter=__t5596t__;
  contains__t2086t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5597t,&__t5598t__);
  should_fail=__t5598t__;
  __t_errcode=add__t2906t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5599t__unsafe_ptr,&__t5599t__dat__pos,&__t5599t__dat__length,&__t5599t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2906t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5599t__unsafe_ptr,__t5599t__dat__pos,__t5599t__dat__length,__t5599t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5600t__unsafe_ptr,&__t5600t__dat__pos,&__t5600t__dat__length,&__t5600t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5479t(colors__initialized,__t5600t__unsafe_ptr,__t5600t__dat__pos,__t5600t__dat__length,__t5600t__dat__first,should_fail,&__t5601t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5601t__,&__t5602t__);
  if(__t5602t__){
  __t5603t=1;
  add__t188t(failures,__t5603t,&__t5604t__);
  failures=__t5604t__;
  }
  __t5594t____t5538t=0;
  sub__t410t(__t5593t__,__t5594t____t5538t,&__t5594t____t5540t__);
  CHARS__pos=__t5594t____t5540t__;
  }
  __t5581t____t5538t=0;
  sub__t410t(__t5580t__,__t5581t____t5538t,&__t5581t____t5540t__);
  CHARS__pos=__t5581t____t5540t__;
  closedir__t5248t(__t5586t__unsafe_ptr);
  }
  stdout_to_err__t5455t(&__t5605t__);
  __t5607t=0;
  eq__t134t(failures,__t5607t,&__t5608t__);
  if(__t5608t__){
  set__t488t(colors__initialized);
  nn__t439t(__t5611t,&__t5612t__value,&__t5612t____t441t);
  print__t448t(__t5612t__value,__t5612t____t441t);
  set__t604t(colors__initialized);
  nn__t439t(__t5616t,&__t5617t__value,&__t5617t____t441t);
  print__t448t(__t5617t__value,__t5617t____t441t);
  }
  else{
  set__t484t(colors__initialized);
  nn__t439t(__t5621t,&__t5622t__value,&__t5622t____t441t);
  print__t448t(__t5622t__value,__t5622t____t441t);
  set__t604t(colors__initialized);
  print__t461t(failures,__t5626t);
  }
  nn__t446t(counter,&__t5628t__value,&__t5628t____t447t);
  print__t461t(__t5628t__value,__t5628t____t447t);
  print__t450t(__t5630t);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:restore_stdout__t5454t(__t5605t__);
  closedir__t5248t(__t5570t__unsafe_ptr);
  free__t815t(&__t5547t__unsafe_ptr);
  if(__t5544t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5632t() {
  char __t5635t=0;
  char __t5637t__=0;
  int64_t __t5638t=0;
  const char* __t5639t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t425t();
  __t_complain=_main__t5541t();
  __t5635t=__t_complain;
  if(__t_complain){
  goto __t5635t__label;
  }
  __t5635t__label:__t5635t=__t5635t==0;
  not__t42t(__t5635t,&__t5637t__);
  if(__t5637t__){
  __t5638t=__t_complain;
  cstr__t4252t(__t5638t,&__t5639t__);
  print__t450t(__t5639t__);
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
  __t_errcode=main__t5632t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}