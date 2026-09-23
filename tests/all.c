#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5616t=" tests";
const char* const __t4259t="[";
const char* const __t5528t="./tests/passing/";
const char* const __t5538t="--testback";
const char* const __t5486t="completed";
const char* const __t5392t="success";
const char* const __t5542t=" --cleanup ";
const char* const __t5412t="failure";
const char* const __t5569t="/";
const char* const __t5540t="./smoll --back ";
const char* const __t5549t="./smoll --cleanup ";
const char* const __t5612t=" out of ";
const char* const __t5602t="no errors across ";
const char* const __t5576t=".s";
const char* const __t5597t="PASSING ";
const char* const __t5402t="] ";
const char* const __t5560t="..";
const char* const __t5415t="X";
const char* const __t5607t="FAILED ";
const char* const __t5449t=" |- ";
const char* const __t452t="\n";
const char* const __t5583t="_fail_";
const char* const __t5476t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t5395t="V";
const char* const __t440t="";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1593t(char** __t5627t, uint64_t* __t5628t, uint32_t* __t5629t, uint32_t* __t5630t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5627t=unsafe_ptr;
  *__t5628t=unsafe_size;
  *__t5629t=unsafe_offset;
  *__t5630t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5631t) {
  *__t5631t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5632t) {
  int value=0;
  *__t5632t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5633t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5633t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5634t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5634t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5635t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5635t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5636t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5636t=z;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t5637t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5637t=z;
}

static inline __attribute__((always_inline)) void nat__t695t(uint32_t x, uint64_t* __t5638t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5638t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5639t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5639t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5640t) {
  *__t5640t=to;
}

static inline __attribute__((always_inline)) void add__t817t(char* allocated, uint64_t offset, char** __t5641t) {
  char* element=0;
  char* __t818t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t818t__);
  goto __t_return;
  __t_return:
  *__t5641t=__t818t__;
}

static inline __attribute__((always_inline)) int get__t1160t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5642t) {
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
  *__t5642t=__t1167t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1618t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5643t, uint64_t* __t5644t, uint64_t* __t5645t, char* __t5646t) {
  goto __t_return;
  __t_return:
  *__t5643t=unsafe_ptr;
  *__t5644t=dat__pos;
  *__t5645t=dat__length;
  *__t5646t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1622t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5647t, uint64_t* __t5648t, uint64_t* __t5649t, char* __t5650t) {
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
  *__t5647t=__t1629t__unsafe_ptr;
  *__t5648t=__t1629t__dat__pos;
  *__t5649t=__t1629t__dat__length;
  *__t5650t=__t1629t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1656t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5651t, uint64_t* __t5652t, uint64_t* __t5653t, char* __t5654t) {
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
  *__t5651t=__t1662t__unsafe_ptr;
  *__t5652t=__t1662t__dat__pos;
  *__t5653t=__t1662t__dat__length;
  *__t5654t=__t1662t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1678t(const char* c, char** __t5655t, uint64_t* __t5656t, uint64_t* __t5657t, char* __t5658t) {
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
  *__t5655t=ret__unsafe_ptr;
  *__t5656t=ret__dat__pos;
  *__t5657t=ret__dat__length;
  *__t5658t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t477t(char* __t5659t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5659t=supports;
}

static inline __attribute__((always_inline)) void colors__t478t(char* __t5660t) {
  char __t479t__=0;
  char initialized=0;
  supports_ansi__t477t(&__t479t__);
  initialized=__t479t__;
  goto __t_return;
  __t_return:
  *__t5660t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1097t(char** __t5661t, uint64_t* __t5662t, uint32_t* __t5663t, uint32_t* __t5664t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5661t=unsafe_ptr;
  *__t5662t=unsafe_size;
  *__t5663t=unsafe_offset;
  *__t5664t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t815t(char** __t5665t) {
  char* allocated=*__t5665t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t5665t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5666t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5666t=z;
}

static inline __attribute__((always_inline)) void zero__t816t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t654t(char* x, char* __t5667t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5667t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5668t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5668t=z;
}

static inline __attribute__((always_inline)) int alloc__t799t(uint64_t bytes, char** __t5669t) {
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
  *__t5669t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t940t(char** __t5670t, uint64_t* __t5671t, uint32_t* __t5672t, uint32_t* __t5673t, uint64_t size, char** __t5674t, uint64_t* __t5675t, uint32_t* __t5676t, uint32_t* __t5677t) {
  char* buffer__unsafe_ptr=*__t5670t;
  uint64_t buffer__unsafe_size=*__t5671t;
  uint32_t buffer__unsafe_offset=*__t5672t;
  uint32_t buffer__unsafe_align=*__t5673t;
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
  *__t5670t=buffer__unsafe_ptr;
  *__t5671t=buffer__unsafe_size;
  *__t5672t=buffer__unsafe_offset;
  *__t5673t=buffer__unsafe_align;
  *__t5674t=buffer__unsafe_ptr;
  *__t5675t=buffer__unsafe_size;
  *__t5676t=buffer__unsafe_offset;
  *__t5677t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int alloc__t1095t(uint64_t size, char** __t5678t, uint64_t* __t5679t, uint32_t* __t5680t, uint32_t* __t5681t) {
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
  *__t5678t=ret__unsafe_ptr;
  *__t5679t=ret__unsafe_size;
  *__t5680t=ret__unsafe_offset;
  *__t5681t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1211t(char** __t5682t, uint64_t* __t5683t, uint32_t* __t5684t, uint32_t* __t5685t, uint64_t _pos, char** __t5686t, uint64_t* __t5687t, uint32_t* __t5688t, uint32_t* __t5689t, uint64_t* __t5690t) {
  char* buf__unsafe_ptr=*__t5682t;
  uint64_t buf__unsafe_size=*__t5683t;
  uint32_t buf__unsafe_offset=*__t5684t;
  uint32_t buf__unsafe_align=*__t5685t;
  uint64_t __t1212t=0;
  uint64_t pos=0;
  __t1212t=_pos;
  pos=__t1212t;
  goto __t_return;
  __t_return:
  *__t5682t=buf__unsafe_ptr;
  *__t5683t=buf__unsafe_size;
  *__t5684t=buf__unsafe_offset;
  *__t5685t=buf__unsafe_align;
  *__t5686t=buf__unsafe_ptr;
  *__t5687t=buf__unsafe_size;
  *__t5688t=buf__unsafe_offset;
  *__t5689t=buf__unsafe_align;
  *__t5690t=pos;
}

static inline __attribute__((always_inline)) void arena__t1214t(char** __t5691t, uint64_t* __t5692t, uint32_t* __t5693t, uint32_t* __t5694t, char** __t5695t, uint64_t* __t5696t, uint32_t* __t5697t, uint32_t* __t5698t, uint64_t* __t5699t) {
  char* buf__unsafe_ptr=*__t5691t;
  uint64_t buf__unsafe_size=*__t5692t;
  uint32_t buf__unsafe_offset=*__t5693t;
  uint32_t buf__unsafe_align=*__t5694t;
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
  *__t5691t=buf__unsafe_ptr;
  *__t5692t=buf__unsafe_size;
  *__t5693t=buf__unsafe_offset;
  *__t5694t=buf__unsafe_align;
  *__t5695t=__t1216t__buf__unsafe_ptr;
  *__t5696t=__t1216t__buf__unsafe_size;
  *__t5697t=__t1216t__buf__unsafe_offset;
  *__t5698t=__t1216t__buf__unsafe_align;
  *__t5699t=__t1216t__pos;
}

static inline __attribute__((always_inline)) void argument____t_buffer____buffer__t4384t(char** __t5700t, uint64_t* __t5701t, uint32_t* __t5702t, uint32_t* __t5703t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t5700t=unsafe_ptr;
  *__t5701t=unsafe_size;
  *__t5702t=unsafe_offset;
  *__t5703t=unsafe_align;
}

static inline __attribute__((always_inline)) void args__t4383t(char** __t5704t, uint64_t* __t5705t, uint32_t* __t5706t, uint32_t* __t5707t) {
  char* __t4386t__unsafe_ptr=0;
  uint64_t __t4386t__unsafe_size=0;
  uint32_t __t4386t__unsafe_offset=0;
  uint32_t __t4386t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  argument____t_buffer____buffer__t4384t(&__t4386t__unsafe_ptr,&__t4386t__unsafe_size,&__t4386t__unsafe_offset,&__t4386t__unsafe_align);
  ret__unsafe_ptr=__t4386t__unsafe_ptr;
  ret__unsafe_size=__t4386t__unsafe_size;
  ret__unsafe_offset=__t4386t__unsafe_offset;
  ret__unsafe_align=__t4386t__unsafe_align;
  ret__unsafe_ptr=(char*)__t_argv;
  ret__unsafe_size=__t_argc;
  goto __t_return;
  __t_return:
  *__t5704t=ret__unsafe_ptr;
  *__t5705t=ret__unsafe_size;
  *__t5706t=ret__unsafe_offset;
  *__t5707t=ret__unsafe_align;
}

void str__t4381t(const char* arg__unsafe_value, char** __t5708t, uint64_t* __t5709t, uint64_t* __t5710t, char* __t5711t) {
  char* __t4382t__unsafe_ptr=0;
  uint64_t __t4382t__dat__pos=0;
  uint64_t __t4382t__dat__length=0;
  char __t4382t__dat__first=0;
  str__t1678t(arg__unsafe_value,&__t4382t__unsafe_ptr,&__t4382t__dat__pos,&__t4382t__dat__length,&__t4382t__dat__first);
  goto __t_return;
  __t_return:
  *__t5708t=__t4382t__unsafe_ptr;
  *__t5709t=__t4382t__dat__pos;
  *__t5710t=__t4382t__dat__length;
  *__t5711t=__t4382t__dat__first;
}

void char__t1690t(const char* s, char* __t5712t) {
  char* __t1691t__unsafe_ptr=0;
  uint64_t __t1691t__dat__pos=0;
  uint64_t __t1691t__dat__length=0;
  char __t1691t__dat__first=0;
  str__t1678t(s,&__t1691t__unsafe_ptr,&__t1691t__dat__pos,&__t1691t__dat__length,&__t1691t__dat__first);
  goto __t_return;
  __t_return:
  *__t5712t=__t1691t__dat__first;
}

static inline __attribute__((always_inline)) void neq__t1693t(char x, char y, char* __t5713t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5713t=z;
}

static inline __attribute__((always_inline)) void len__t1688t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5714t) {
  goto __t_return;
  __t_return:
  *__t5714t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t1825t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5715t) {
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
  *__t5715t=__t1829t;
}

void eq__t1838t(const char* x, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5716t) {
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
  *__t5716t=__t1841t;
}

static inline __attribute__((always_inline)) void len__t1168t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5717t) {
  goto __t_return;
  __t_return:
  *__t5717t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t5718t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5718t=z;
}

static inline __attribute__((always_inline)) int arg_after__t4397t(const char* flag, char** __t5719t, uint64_t* __t5720t, uint64_t* __t5721t, char* __t5722t) {
  char* __t4398t__unsafe_ptr=0;
  uint64_t __t4398t__unsafe_size=0;
  uint32_t __t4398t__unsafe_offset=0;
  uint32_t __t4398t__unsafe_align=0;
  char* args__unsafe_ptr=0;
  uint64_t args__unsafe_size=0;
  uint32_t args__unsafe_offset=0;
  uint32_t args__unsafe_align=0;
  uint64_t __t4399t=0;
  char __t4400t=0;
  char* __t4401t__=0;
  const char* __t4402t__unsafe_value=0;
  const char* arg__unsafe_value=0;
  char* __t4403t__unsafe_ptr=0;
  uint64_t __t4403t__dat__pos=0;
  uint64_t __t4403t__dat__length=0;
  char __t4403t__dat__first=0;
  char __t4404t__=0;
  uint64_t __t4405t=0;
  uint64_t __t4406t__=0;
  uint64_t __t4407t__=0;
  char __t4408t__=0;
  char __t4409t=0;
  uint64_t __t4410t=0;
  uint64_t __t4411t__=0;
  char* __t4413t__=0;
  const char* __t4414t__unsafe_value=0;
  char* __t4415t__unsafe_ptr=0;
  uint64_t __t4415t__dat__pos=0;
  uint64_t __t4415t__dat__length=0;
  char __t4415t__dat__first=0;
  int __t4416t=0;
  int __t_errcode=0;
  int __t_complain=0;
  args__t4383t(&__t4398t__unsafe_ptr,&__t4398t__unsafe_size,&__t4398t__unsafe_offset,&__t4398t__unsafe_align);
  args__unsafe_ptr=__t4398t__unsafe_ptr;
  args__unsafe_size=__t4398t__unsafe_size;
  args__unsafe_offset=__t4398t__unsafe_offset;
  args__unsafe_align=__t4398t__unsafe_align;
  __t4399t=0-1;
  while(1){
  __t4399t=__t4399t+1;
  __t_complain=get__t1160t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4399t,&__t4401t__);
  __t4400t=__t_complain;
  if(__t_complain){
  goto __t4400t__label;
  }
  if(!__t4401t__){
  __t_complain=2;
  goto __t4400t__label;
  }
  else{
  memcpy(&__t4402t__unsafe_value,__t4401t__,8);
  }
  arg__unsafe_value=__t4402t__unsafe_value;
  __t4400t__label:__t4400t=__t4400t==0;
  if(!__t4400t){
  break;
  }
  str__t4381t(arg__unsafe_value,&__t4403t__unsafe_ptr,&__t4403t__dat__pos,&__t4403t__dat__length,&__t4403t__dat__first);
  eq__t1838t(flag,__t4403t__unsafe_ptr,__t4403t__dat__pos,__t4403t__dat__length,__t4403t__dat__first,&__t4404t__);
  if(__t4404t__){
  __t4405t=1;
  add__t188t(__t4399t,__t4405t,&__t4406t__);
  len__t1168t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,&__t4407t__);
  lt__t302t(__t4406t__,__t4407t__,&__t4408t__);
  __t4409t=__t4408t__;
  }
  else{
  __t4409t=0;
  }
  if(__t4409t){
  __t4410t=1;
  add__t188t(__t4399t,__t4410t,&__t4411t__);
  __t_errcode=get__t1160t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4411t__,&__t4413t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4413t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4414t__unsafe_value,__t4413t__,8);
  str__t4381t(__t4414t__unsafe_value,&__t4415t__unsafe_ptr,&__t4415t__dat__pos,&__t4415t__dat__length,&__t4415t__dat__first);
  goto __t_return;
  }
  }
  __t_errcode=45;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5719t=__t4415t__unsafe_ptr;
  *__t5720t=__t4415t__dat__pos;
  *__t5721t=__t4415t__dat__length;
  *__t5722t=__t4415t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1655t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5723t, uint64_t* __t5724t, uint64_t* __t5725t, char* __t5726t) {
  goto __t_return;
  __t_return:
  *__t5723t=other__unsafe_ptr;
  *__t5724t=other__dat__pos;
  *__t5725t=other__dat__length;
  *__t5726t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5727t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5727t=z;
}

static inline __attribute__((always_inline)) void gt__t326t(uint64_t x, uint64_t y, char* __t5728t) {
  int __t327t__=0;
  char z=0;
  is_different__t109t(x,y,&__t327t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5728t=z;
}

static inline __attribute__((always_inline)) void allocated__t1218t(char** __t5729t, uint64_t* __t5730t, uint32_t* __t5731t, uint32_t* __t5732t, uint64_t pos, char** __t5733t, uint64_t* __t5734t, uint32_t* __t5735t, uint32_t* __t5736t, uint64_t* __t5737t) {
  char* buf__unsafe_ptr=*__t5729t;
  uint64_t buf__unsafe_size=*__t5730t;
  uint32_t buf__unsafe_offset=*__t5731t;
  uint32_t buf__unsafe_align=*__t5732t;
  goto __t_return;
  __t_return:
  *__t5729t=buf__unsafe_ptr;
  *__t5730t=buf__unsafe_size;
  *__t5731t=buf__unsafe_offset;
  *__t5732t=buf__unsafe_align;
  *__t5733t=buf__unsafe_ptr;
  *__t5734t=buf__unsafe_size;
  *__t5735t=buf__unsafe_offset;
  *__t5736t=buf__unsafe_align;
  *__t5737t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1293t(char** __t5738t, uint64_t* __t5739t, uint32_t* __t5740t, uint32_t* __t5741t, uint64_t* __t5742t, uint64_t length, char** __t5743t, uint64_t* __t5744t, uint32_t* __t5745t, uint32_t* __t5746t, uint64_t* __t5747t) {
  char* allocator__buf__unsafe_ptr=*__t5738t;
  uint64_t allocator__buf__unsafe_size=*__t5739t;
  uint32_t allocator__buf__unsafe_offset=*__t5740t;
  uint32_t allocator__buf__unsafe_align=*__t5741t;
  uint64_t allocator__pos=*__t5742t;
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
  *__t5738t=allocator__buf__unsafe_ptr;
  *__t5739t=allocator__buf__unsafe_size;
  *__t5740t=allocator__buf__unsafe_offset;
  *__t5741t=allocator__buf__unsafe_align;
  *__t5742t=allocator__pos;
  *__t5743t=__t1300t__buf__unsafe_ptr;
  *__t5744t=__t1300t__buf__unsafe_size;
  *__t5745t=__t1300t__buf__unsafe_offset;
  *__t5746t=__t1300t__buf__unsafe_align;
  *__t5747t=__t1300t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1223t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5748t, uint64_t* __t5749t, uint32_t* __t5750t, uint32_t* __t5751t, uint64_t* __t5752t) {
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
  *__t5748t=__t1224t__unsafe_ptr;
  *__t5749t=__t1224t__unsafe_size;
  *__t5750t=__t1224t__unsafe_offset;
  *__t5751t=__t1224t__unsafe_align;
  *__t5752t=__t1225t;
}

static inline __attribute__((always_inline)) int copy__t1754t(char** __t5753t, uint64_t* __t5754t, uint32_t* __t5755t, uint32_t* __t5756t, uint64_t* __t5757t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5758t, uint64_t* __t5759t, uint64_t* __t5760t, char* __t5761t) {
  char* CHARS__buf__unsafe_ptr=*__t5753t;
  uint64_t CHARS__buf__unsafe_size=*__t5754t;
  uint32_t CHARS__buf__unsafe_offset=*__t5755t;
  uint32_t CHARS__buf__unsafe_align=*__t5756t;
  uint64_t CHARS__pos=*__t5757t;
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
  *__t5753t=CHARS__buf__unsafe_ptr;
  *__t5754t=CHARS__buf__unsafe_size;
  *__t5755t=CHARS__buf__unsafe_offset;
  *__t5756t=CHARS__buf__unsafe_align;
  *__t5757t=CHARS__pos;
  *__t5758t=__t1758t__unsafe_ptr;
  *__t5759t=__t1758t__dat__pos;
  *__t5760t=__t1758t__dat__length;
  *__t5761t=__t1758t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1220t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5762t, uint64_t* __t5763t, uint32_t* __t5764t, uint32_t* __t5765t, uint64_t* __t5766t) {
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
  *__t5762t=__t1221t__unsafe_ptr;
  *__t5763t=__t1221t__unsafe_size;
  *__t5764t=__t1221t__unsafe_offset;
  *__t5765t=__t1221t__unsafe_align;
  *__t5766t=__t1222t;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t5767t) {
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
  *__t5767t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1674t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5768t, uint64_t* __t5769t, uint64_t* __t5770t, char* __t5771t) {
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
  *__t5768t=__t1677t__unsafe_ptr;
  *__t5769t=__t1677t__dat__pos;
  *__t5770t=__t1677t__dat__length;
  *__t5771t=__t1677t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2996t(char** __t5772t, uint64_t* __t5773t, uint32_t* __t5774t, uint32_t* __t5775t, uint64_t* __t5776t, const char* _s1, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5777t, uint64_t* __t5778t, uint64_t* __t5779t, char* __t5780t) {
  char* CHARS__buf__unsafe_ptr=*__t5772t;
  uint64_t CHARS__buf__unsafe_size=*__t5773t;
  uint32_t CHARS__buf__unsafe_offset=*__t5774t;
  uint32_t CHARS__buf__unsafe_align=*__t5775t;
  uint64_t CHARS__pos=*__t5776t;
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
  *__t5772t=CHARS__buf__unsafe_ptr;
  *__t5773t=CHARS__buf__unsafe_size;
  *__t5774t=CHARS__buf__unsafe_offset;
  *__t5775t=CHARS__buf__unsafe_align;
  *__t5776t=CHARS__pos;
  *__t5777t=__t3016t__unsafe_ptr;
  *__t5778t=__t3016t__dat__pos;
  *__t5779t=__t3016t__dat__length;
  *__t5780t=__t3016t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2951t(char** __t5781t, uint64_t* __t5782t, uint32_t* __t5783t, uint32_t* __t5784t, uint64_t* __t5785t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5786t, uint64_t* __t5787t, uint64_t* __t5788t, char* __t5789t) {
  char* CHARS__buf__unsafe_ptr=*__t5781t;
  uint64_t CHARS__buf__unsafe_size=*__t5782t;
  uint32_t CHARS__buf__unsafe_offset=*__t5783t;
  uint32_t CHARS__buf__unsafe_align=*__t5784t;
  uint64_t CHARS__pos=*__t5785t;
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
  *__t5781t=CHARS__buf__unsafe_ptr;
  *__t5782t=CHARS__buf__unsafe_size;
  *__t5783t=CHARS__buf__unsafe_offset;
  *__t5784t=CHARS__buf__unsafe_align;
  *__t5785t=CHARS__pos;
  *__t5786t=__t2971t__unsafe_ptr;
  *__t5787t=__t2971t__dat__pos;
  *__t5788t=__t2971t__dat__length;
  *__t5789t=__t2971t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1759t(char** __t5790t, uint64_t* __t5791t, uint32_t* __t5792t, uint32_t* __t5793t, uint64_t* __t5794t, const char* _other, char** __t5795t, uint64_t* __t5796t, uint64_t* __t5797t, char* __t5798t) {
  char* CHARS__buf__unsafe_ptr=*__t5790t;
  uint64_t CHARS__buf__unsafe_size=*__t5791t;
  uint32_t CHARS__buf__unsafe_offset=*__t5792t;
  uint32_t CHARS__buf__unsafe_align=*__t5793t;
  uint64_t CHARS__pos=*__t5794t;
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
  *__t5790t=CHARS__buf__unsafe_ptr;
  *__t5791t=CHARS__buf__unsafe_size;
  *__t5792t=CHARS__buf__unsafe_offset;
  *__t5793t=CHARS__buf__unsafe_align;
  *__t5794t=CHARS__pos;
  *__t5795t=__t1763t__unsafe_ptr;
  *__t5796t=__t1763t__dat__pos;
  *__t5797t=__t1763t__dat__length;
  *__t5798t=__t1763t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1169t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1695t(char** __t5799t, uint64_t* __t5800t, uint32_t* __t5801t, uint32_t* __t5802t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5799t=unsafe_ptr;
  *__t5800t=unsafe_size;
  *__t5801t=unsafe_offset;
  *__t5802t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1784t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5803t, uint64_t* __t5804t, uint64_t* __t5805t, char* __t5806t) {
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
  *__t5803t=__t1793t__unsafe_ptr;
  *__t5804t=__t1793t__dat__pos;
  *__t5805t=__t1793t__dat__length;
  *__t5806t=__t1793t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1808t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5807t, char** __t5808t, uint64_t* __t5809t, uint64_t* __t5810t, char* __t5811t) {
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
  *__t5807t=cstr;
  *__t5808t=str__unsafe_ptr;
  *__t5809t=str__dat__pos;
  *__t5810t=str__dat__length;
  *__t5811t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1818t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5812t) {
  goto __t_return;
  __t_return:
  *__t5812t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t5234t(char* unsafe_ptr) {
  int __t5236t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int open__t5237t(const char* path, char** __t5813t) {
  int __t5239t=0;
  char* unsafe_ptr=0;
  char __t5241t__=0;
  char __t5242t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t654t(unsafe_ptr,&__t5241t__);
  not__t42t(__t5241t__,&__t5242t__);
  if(__t5242t__){
  __t_errcode=52;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5234t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5813t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t5244t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t5814t) {
  const char* __t5245t__cstr=0;
  char* __t5245t__str__unsafe_ptr=0;
  uint64_t __t5245t__str__dat__pos=0;
  uint64_t __t5245t__str__dat__length=0;
  char __t5245t__str__dat__first=0;
  const char* __t5247t__=0;
  char* __t5248t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1808t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5245t__cstr,&__t5245t__str__unsafe_ptr,&__t5245t__str__dat__pos,&__t5245t__str__dat__length,&__t5245t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1818t(__t5245t__cstr,__t5245t__str__unsafe_ptr,__t5245t__str__dat__pos,__t5245t__str__dat__length,__t5245t__str__dat__first,&__t5247t__);
  __t_errcode=open__t5237t(__t5247t__,&__t5248t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5234t(__t5248t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5814t=__t5248t__unsafe_ptr;
  
  __t_skip_returns:free__t815t(&__t5245t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t5256t(char** __t5815t, const char** __t5816t) {
  char* f__unsafe_ptr=*__t5815t;
  char __t5257t__=0;
  char __t5258t__=0;
  char* de=0;
  char __t5259t__=0;
  char __t5260t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t654t(f__unsafe_ptr,&__t5257t__);
  not__t42t(__t5257t__,&__t5258t__);
  if(__t5258t__){
  __t_errcode=63;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t654t(de,&__t5259t__);
  not__t42t(__t5259t__,&__t5260t__);
  if(__t5260t__){
  __t_errcode=64;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5815t=f__unsafe_ptr;
  *__t5816t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t5261t(char** __t5817t, char** __t5818t, uint64_t* __t5819t, uint64_t* __t5820t, char* __t5821t) {
  char* f__unsafe_ptr=*__t5817t;
  const char* __t5262t__=0;
  char* __t5263t__unsafe_ptr=0;
  uint64_t __t5263t__dat__pos=0;
  uint64_t __t5263t__dat__length=0;
  char __t5263t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t5256t(&f__unsafe_ptr,&__t5262t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1678t(__t5262t__,&__t5263t__unsafe_ptr,&__t5263t__dat__pos,&__t5263t__dat__length,&__t5263t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5817t=f__unsafe_ptr;
  *__t5818t=__t5263t__unsafe_ptr;
  *__t5819t=__t5263t__dat__pos;
  *__t5820t=__t5263t__dat__length;
  *__t5821t=__t5263t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t5327t(char** __t5822t, uint64_t nat, char** __t5823t, uint64_t* __t5824t, uint64_t* __t5825t, char* __t5826t) {
  char* data__unsafe_ptr=*__t5822t;
  char* __t5328t__unsafe_ptr=0;
  uint64_t __t5328t__dat__pos=0;
  uint64_t __t5328t__dat__length=0;
  char __t5328t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t5261t(&data__unsafe_ptr,&__t5328t__unsafe_ptr,&__t5328t__dat__pos,&__t5328t__dat__length,&__t5328t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5822t=data__unsafe_ptr;
  *__t5823t=__t5328t__unsafe_ptr;
  *__t5824t=__t5328t__dat__pos;
  *__t5825t=__t5328t__dat__length;
  *__t5826t=__t5328t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void eq__t1832t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t5827t) {
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
  *__t5827t=__t1835t;
}

int unsafe_temp__t1794t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5828t, char** __t5829t, uint64_t* __t5830t, uint64_t* __t5831t, char* __t5832t) {
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
  *__t5828t=cstr;
  *__t5829t=str__unsafe_ptr;
  *__t5830t=str__dat__pos;
  *__t5831t=str__dat__length;
  *__t5832t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1817t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5833t) {
  goto __t_return;
  __t_return:
  *__t5833t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t5161t(const char* path, char* __t5834t) {
  int __t5163t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t5834t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t5171t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t5835t) {
  int __t5173t=0;
  const char* __t5174t__cstr=0;
  char* __t5174t__str__unsafe_ptr=0;
  uint64_t __t5174t__str__dat__pos=0;
  uint64_t __t5174t__str__dat__length=0;
  char __t5174t__str__dat__first=0;
  const char* __t5176t__=0;
  char __t5177t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1794t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t5174t__cstr,&__t5174t__str__unsafe_ptr,&__t5174t__str__dat__pos,&__t5174t__str__dat__length,&__t5174t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1817t(__t5174t__cstr,__t5174t__str__unsafe_ptr,__t5174t__str__dat__pos,__t5174t__str__dat__length,__t5174t__str__dat__first,&__t5176t__);
  is_dir__t5161t(__t5176t__,&__t5177t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5835t=__t5177t__;
  
  __t_skip_returns:free__t815t(&__t5174t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t410t(uint64_t x, uint64_t y, uint64_t* __t5836t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5836t=z;
}

static inline __attribute__((always_inline)) void reuse__t5521t(char** __t5837t, uint64_t* __t5838t, uint32_t* __t5839t, uint32_t* __t5840t, uint64_t* __t5841t, uint64_t* __t5842t) {
  char* arn__buf__unsafe_ptr=*__t5837t;
  uint64_t arn__buf__unsafe_size=*__t5838t;
  uint32_t arn__buf__unsafe_offset=*__t5839t;
  uint32_t arn__buf__unsafe_align=*__t5840t;
  uint64_t arn__pos=*__t5841t;
  uint64_t __t5522t=0;
  uint64_t __t5523t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5524t=0;
  uint64_t __t5526t__=0;
  __t5522t=0;
  add__t188t(__t5522t,arn__pos,&__t5523t__);
  tracked_position=__t5523t__;
  goto __t_return;
  __t_return:
  *__t5837t=arn__buf__unsafe_ptr;
  *__t5838t=arn__buf__unsafe_size;
  *__t5839t=arn__buf__unsafe_offset;
  *__t5840t=arn__buf__unsafe_align;
  *__t5841t=arn__pos;
  *__t5842t=tracked_position;
}

int add__t2906t(char** __t5843t, uint64_t* __t5844t, uint32_t* __t5845t, uint32_t* __t5846t, uint64_t* __t5847t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5848t, uint64_t* __t5849t, uint64_t* __t5850t, char* __t5851t) {
  char* CHARS__buf__unsafe_ptr=*__t5843t;
  uint64_t CHARS__buf__unsafe_size=*__t5844t;
  uint32_t CHARS__buf__unsafe_offset=*__t5845t;
  uint32_t CHARS__buf__unsafe_align=*__t5846t;
  uint64_t CHARS__pos=*__t5847t;
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
  *__t5843t=CHARS__buf__unsafe_ptr;
  *__t5844t=CHARS__buf__unsafe_size;
  *__t5845t=CHARS__buf__unsafe_offset;
  *__t5846t=CHARS__buf__unsafe_align;
  *__t5847t=CHARS__pos;
  *__t5848t=__t2926t__unsafe_ptr;
  *__t5849t=__t2926t__dat__pos;
  *__t5850t=__t2926t__dat__length;
  *__t5851t=__t2926t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1895t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t5852t) {
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
  *__t5852t=__t1899t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1921t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t5853t, uint64_t* __t5854t, uint64_t* __t5855t, char* __t5856t) {
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
  *__t5853t=__t1924t__unsafe_ptr;
  *__t5854t=__t1924t__dat__pos;
  *__t5855t=__t1924t__dat__length;
  *__t5856t=__t1924t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t2000t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5857t) {
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
  *__t5857t=__t2006t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t750t(uint64_t to, uint64_t* __t5858t, uint64_t* __t5859t) {
  uint64_t __t751t=0;
  uint64_t from=0;
  __t751t=0;
  from=__t751t;
  goto __t_return;
  __t_return:
  *__t5858t=from;
  *__t5859t=to;
}

static inline __attribute__((always_inline)) void range__t767t(uint64_t _from, uint64_t to, uint64_t* __t5860t, uint64_t* __t5861t) {
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
  *__t5860t=from;
  *__t5861t=to;
}

static inline __attribute__((always_inline)) int mutget__t772t(uint64_t* __t5862t, uint64_t r__to, uint64_t skipped, uint64_t* __t5863t) {
  uint64_t r__from=*__t5862t;
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
  *__t5862t=r__from;
  *__t5863t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2086t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5864t) {
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
  *__t5864t=__t2092t;
}

static inline __attribute__((always_inline)) void restore_stdout__t5440t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void stdout_to_err__t5441t(int64_t* __t5865t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5865t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t1889t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1890t=0;
  const char* endl=0;
  endl=__t452t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void popen__t4485t(const char* cmd, char** __t5866t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t5866t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4484t(char* unsafe_ptr, int64_t* __t5867t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t5867t=status;
}

static inline __attribute__((always_inline)) void int__t635t(uint64_t x, int64_t* __t5868t) {
  int __t636t=0;
  int __t637t=0;
  int __t638t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5868t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t5869t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t5869t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t5870t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5870t=z;
}

static inline __attribute__((always_inline)) int open__t4486t(const char* cmd, char** __t5871t) {
  char* __t4487t__=0;
  char* unsafe_ptr=0;
  char __t4488t__=0;
  char __t4489t__=0;
  char __t4490t__=0;
  int64_t __t4491t__=0;
  int64_t status=0;
  uint64_t __t4492t=0;
  int64_t __t4493t__=0;
  char __t4494t__=0;
  char __t4495t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4485t(cmd,&__t4487t__);
  unsafe_ptr=__t4487t__;
  exists__t654t(unsafe_ptr,&__t4488t__);
  not__t42t(__t4488t__,&__t4489t__);
  if(__t4489t__){
  __t_errcode=47;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t654t(unsafe_ptr,&__t4490t__);
  if(__t4490t__){
  pclose__t4484t(unsafe_ptr,&__t4491t__);
  status=__t4491t__;
  unsafe_ptr=0;
  __t4492t=0;
  int__t635t(__t4492t,&__t4493t__);
  neq__t147t(status,__t4493t__,&__t4494t__);
  if(__t4494t__){
  __t_complain=48;
  goto __t4495t__label;
  __t4495t__label:__t4495t=__t4495t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5871t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4497t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t5872t) {
  const char* __t4498t__cstr=0;
  char* __t4498t__str__unsafe_ptr=0;
  uint64_t __t4498t__str__dat__pos=0;
  uint64_t __t4498t__str__dat__length=0;
  char __t4498t__str__dat__first=0;
  const char* __t4500t__=0;
  char* __t4501t__unsafe_ptr=0;
  char __t4502t____t4490t__=0;
  int64_t __t4502t____t4491t__=0;
  int64_t __t4502t__status=0;
  uint64_t __t4502t____t4492t=0;
  int64_t __t4502t____t4493t__=0;
  char __t4502t____t4494t__=0;
  char __t4502t____t4495t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1808t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4498t__cstr,&__t4498t__str__unsafe_ptr,&__t4498t__str__dat__pos,&__t4498t__str__dat__length,&__t4498t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1818t(__t4498t__cstr,__t4498t__str__unsafe_ptr,__t4498t__str__dat__pos,__t4498t__str__dat__length,__t4498t__str__dat__first,&__t4500t__);
  __t_errcode=open__t4486t(__t4500t__,&__t4501t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t654t(__t4501t__unsafe_ptr,&__t4502t____t4490t__);
  if(__t4502t____t4490t__){
  pclose__t4484t(__t4501t__unsafe_ptr,&__t4502t____t4491t__);
  __t4502t__status=__t4502t____t4491t__;
  __t4501t__unsafe_ptr=0;
  __t4502t____t4492t=0;
  int__t635t(__t4502t____t4492t,&__t4502t____t4493t__);
  neq__t147t(__t4502t__status,__t4502t____t4493t__,&__t4502t____t4494t__);
  if(__t4502t____t4494t__){
  __t_complain=48;
  goto __t4495t__label;
  __t4495t__label:__t4502t____t4495t=__t4502t____t4495t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5872t=__t4501t__unsafe_ptr;
  
  __t_skip_returns:free__t815t(&__t4498t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4249t(int64_t value, char* __t5873t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t5873t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4248t(int64_t value, const char** __t5874t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5874t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t5875t) {
  const char* value=0;
  *__t5875t=value;
}

int run__t5369t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t5876t) {
  char* __t5370t__unsafe_ptr=0;
  char __t5371t____t4502t____t4490t__=0;
  int64_t __t5371t____t4502t____t4491t__=0;
  int64_t __t5371t____t4502t__status=0;
  uint64_t __t5371t____t4502t____t4492t=0;
  int64_t __t5371t____t4502t____t4493t__=0;
  char __t5371t____t4502t____t4494t__=0;
  char __t5371t____t4502t____t4495t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t5372t=0;
  int64_t error=0;
  char __t5373t__=0;
  char __t5374t__=0;
  const char* __t5375t__=0;
  const char* __t5376t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4497t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5370t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t5370t__unsafe_ptr;
  exists__t654t(__t5370t__unsafe_ptr,&__t5371t____t4502t____t4490t__);
  if(__t5371t____t4502t____t4490t__){
  pclose__t4484t(__t5370t__unsafe_ptr,&__t5371t____t4502t____t4491t__);
  __t5371t____t4502t__status=__t5371t____t4502t____t4491t__;
  __t5370t__unsafe_ptr=0;
  __t5371t____t4502t____t4492t=0;
  int__t635t(__t5371t____t4502t____t4492t,&__t5371t____t4502t____t4493t__);
  neq__t147t(__t5371t____t4502t__status,__t5371t____t4502t____t4493t__,&__t5371t____t4502t____t4494t__);
  if(__t5371t____t4502t____t4494t__){
  __t_complain=48;
  goto __t4495t__label;
  __t4495t__label:__t5371t____t4502t____t4495t=__t5371t____t4502t____t4495t==0;
  }
  }
  __t5372t=__t_complain;
  error=__t5372t;
  ok__t4249t(error,&__t5373t__);
  not__t42t(__t5373t__,&__t5374t__);
  if(__t5374t__){
  cstr__t4248t(error,&__t5375t__);
  goto __t_return;
  }
  cstr__t1t(&__t5376t__);
  __t5375t__=__t5376t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5876t=__t5375t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5877t) {
  int value=0;
  *__t5877t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5878t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5878t=__t54t__;
}

static inline __attribute__((always_inline)) void exists__t1616t(const char* c, char* __t5879t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5879t=z;
}

static inline __attribute__((always_inline)) void nn__t439t(const char* value, const char** __t5880t, const char** __t5881t) {
  const char* __t441t=0;
  __t441t=__t440t;
  goto __t_return;
  __t_return:
  *__t5880t=value;
  *__t5881t=__t441t;
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

static inline __attribute__((always_inline)) void print_marker__t5405t(char colors__initialized) {
  const char* __t5407t__value=0;
  const char* __t5407t____t441t=0;
  int __t5409t=0;
  char __t5410t=0;
  char __t5411t=0;
  const char* __t5416t__value=0;
  const char* __t5416t____t441t=0;
  int __t5418t=0;
  const char* __t5421t__value=0;
  const char* __t5421t____t441t=0;
  nn__t439t(__t4259t,&__t5407t__value,&__t5407t____t441t);
  print__t448t(__t5407t__value,__t5407t____t441t);
  __t5411t=1;
  if(__t5412t!=__t5412t){
  __t5411t=0;
  }
  if(__t5411t){
  __t5410t=1;
  }
  if(__t5410t){
  set__t484t(colors__initialized);
  nn__t439t(__t5415t,&__t5416t__value,&__t5416t____t441t);
  print__t448t(__t5416t__value,__t5416t____t441t);
  }
  set__t604t(colors__initialized);
  nn__t439t(__t5402t,&__t5421t__value,&__t5421t____t441t);
  print__t448t(__t5421t__value,__t5421t____t441t);
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

static inline __attribute__((always_inline)) void print_marker__t5386t(char colors__initialized) {
  const char* __t5388t__value=0;
  const char* __t5388t____t441t=0;
  char __t5390t=0;
  char __t5391t=0;
  const char* __t5396t__value=0;
  const char* __t5396t____t441t=0;
  int __t5398t=0;
  int __t5399t=0;
  const char* __t5403t__value=0;
  const char* __t5403t____t441t=0;
  nn__t439t(__t4259t,&__t5388t__value,&__t5388t____t441t);
  print__t448t(__t5388t__value,__t5388t____t441t);
  __t5391t=1;
  if(__t5392t!=__t5392t){
  __t5391t=0;
  }
  if(__t5391t){
  __t5390t=1;
  }
  if(__t5390t){
  set__t488t(colors__initialized);
  nn__t439t(__t5395t,&__t5396t__value,&__t5396t____t441t);
  print__t448t(__t5396t__value,__t5396t____t441t);
  }
  set__t604t(colors__initialized);
  nn__t439t(__t5402t,&__t5403t__value,&__t5403t____t441t);
  print__t448t(__t5403t__value,__t5403t____t441t);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) int test__t5465t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t5882t) {
  int64_t __t5467t__=0;
  const char* __t5470t__=0;
  const char* __t5471t=0;
  const char* error=0;
  int __t5472t=0;
  int __t5473t__=0;
  char __t5474t__=0;
  const char* __t5475t__=0;
  const char* __t5477t__value=0;
  const char* __t5477t____t441t=0;
  char __t5479t__=0;
  char __t5483t=0;
  char __t5488t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5441t(&__t5467t__);
  print__t1889t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t5369t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5470t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5471t=__t5470t__;
  error=__t5471t;
  not__t53t(__t5472t,&__t5473t__);
  if(should_fail){
  exists__t1616t(error,&__t5474t__);
  if(__t5474t__){
  cstr__t1t(&__t5475t__);
  error=__t5475t__;
  }
  else{
  error=__t5476t;
  }
  }
  nn__t439t(__t5449t,&__t5477t__value,&__t5477t____t441t);
  print__t448t(__t5477t__value,__t5477t____t441t);
  exists__t1616t(error,&__t5479t__);
  if(__t5479t__){
  print_marker__t5405t(colors__initialized);
  print__t450t(error);
  __t5483t=0;
  goto __t_return;
  }
  print_marker__t5386t(colors__initialized);
  print__t450t(__t5486t);
  __t5488t=1;
  __t5483t=__t5488t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5882t=__t5483t;
  
  __t_skip_returns:restore_stdout__t5440t(__t5467t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t461t(uint64_t value, const char* endl) {
  int __t462t=0;
  printf("%llu%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void nn__t446t(uint64_t value, uint64_t* __t5883t, const char** __t5884t) {
  const char* __t447t=0;
  __t447t=__t440t;
  goto __t_return;
  __t_return:
  *__t5883t=value;
  *__t5884t=__t447t;
}

static inline __attribute__((always_inline)) int _main__t5527t() {
  char* __t5529t__unsafe_ptr=0;
  uint64_t __t5529t__dat__pos=0;
  uint64_t __t5529t__dat__length=0;
  char __t5529t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5530t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5532t=0;
  char* __t5533t__unsafe_ptr=0;
  uint64_t __t5533t__unsafe_size=0;
  uint32_t __t5533t__unsafe_offset=0;
  uint32_t __t5533t__unsafe_align=0;
  char* __t5535t__buf__unsafe_ptr=0;
  uint64_t __t5535t__buf__unsafe_size=0;
  uint32_t __t5535t__buf__unsafe_offset=0;
  uint32_t __t5535t__buf__unsafe_align=0;
  uint64_t __t5535t__pos=0;
  char* __t5536t__buf__unsafe_ptr=0;
  uint64_t __t5536t__buf__unsafe_size=0;
  uint32_t __t5536t__buf__unsafe_offset=0;
  uint32_t __t5536t__buf__unsafe_align=0;
  uint64_t __t5536t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char __t5537t=0;
  char* __t5539t__unsafe_ptr=0;
  uint64_t __t5539t__dat__pos=0;
  uint64_t __t5539t__dat__length=0;
  char __t5539t__dat__first=0;
  char* preferred_backend__unsafe_ptr=0;
  uint64_t preferred_backend__dat__pos=0;
  uint64_t preferred_backend__dat__length=0;
  char preferred_backend__dat__first=0;
  int __t5548t=0;
  char* __t5550t__unsafe_ptr=0;
  uint64_t __t5550t__dat__pos=0;
  uint64_t __t5550t__dat__length=0;
  char __t5550t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  char* __t5541t__unsafe_ptr=0;
  uint64_t __t5541t__dat__pos=0;
  uint64_t __t5541t__dat__length=0;
  char __t5541t__dat__first=0;
  char* __t5543t__unsafe_ptr=0;
  uint64_t __t5543t__dat__pos=0;
  uint64_t __t5543t__dat__length=0;
  char __t5543t__dat__first=0;
  uint64_t __t5551t=0;
  uint64_t __t5552t=0;
  uint64_t counter=0;
  uint64_t __t5553t=0;
  uint64_t __t5554t=0;
  uint64_t failures=0;
  uint64_t __t5555t=0;
  char* __t5556t__unsafe_ptr=0;
  char __t5558t=0;
  char* __t5559t__unsafe_ptr=0;
  uint64_t __t5559t__dat__pos=0;
  uint64_t __t5559t__dat__length=0;
  char __t5559t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5561t__=0;
  char __t5562t__=0;
  char __t5563t__=0;
  char __t5564t=0;
  char __t5565t__=0;
  uint64_t __t5566t__=0;
  uint64_t __t5567t____t5524t=0;
  uint64_t __t5567t____t5526t__=0;
  char* __t5568t__unsafe_ptr=0;
  uint64_t __t5568t__dat__pos=0;
  uint64_t __t5568t__dat__length=0;
  char __t5568t__dat__first=0;
  char* __t5570t__unsafe_ptr=0;
  uint64_t __t5570t__dat__pos=0;
  uint64_t __t5570t__dat__length=0;
  char __t5570t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5571t=0;
  char* __t5572t__unsafe_ptr=0;
  char __t5574t=0;
  char* __t5575t__unsafe_ptr=0;
  uint64_t __t5575t__dat__pos=0;
  uint64_t __t5575t__dat__length=0;
  char __t5575t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5577t__=0;
  char __t5578t__=0;
  uint64_t __t5579t__=0;
  uint64_t __t5580t____t5524t=0;
  uint64_t __t5580t____t5526t__=0;
  uint64_t __t5581t=0;
  uint64_t __t5582t__=0;
  char __t5584t__=0;
  char should_fail=0;
  char* __t5585t__unsafe_ptr=0;
  uint64_t __t5585t__dat__pos=0;
  uint64_t __t5585t__dat__length=0;
  char __t5585t__dat__first=0;
  char* __t5586t__unsafe_ptr=0;
  uint64_t __t5586t__dat__pos=0;
  uint64_t __t5586t__dat__length=0;
  char __t5586t__dat__first=0;
  char __t5587t__=0;
  char __t5588t__=0;
  uint64_t __t5589t=0;
  uint64_t __t5590t__=0;
  int64_t __t5591t__=0;
  uint64_t __t5593t=0;
  char __t5594t__=0;
  const char* __t5608t__value=0;
  const char* __t5608t____t441t=0;
  const char* __t5598t__value=0;
  const char* __t5598t____t441t=0;
  const char* __t5603t__value=0;
  const char* __t5603t____t441t=0;
  uint64_t __t5614t__value=0;
  const char* __t5614t____t447t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1678t(__t5528t,&__t5529t__unsafe_ptr,&__t5529t__dat__pos,&__t5529t__dat__length,&__t5529t__dat__first);
  test_root__unsafe_ptr=__t5529t__unsafe_ptr;
  test_root__dat__pos=__t5529t__dat__pos;
  test_root__dat__length=__t5529t__dat__length;
  test_root__dat__first=__t5529t__dat__first;
  colors__t478t(&__t5530t__initialized);
  colors__initialized=__t5530t__initialized;
  __t5532t=128;
  __t_errcode=alloc__t1095t(__t5532t,&__t5533t__unsafe_ptr,&__t5533t__unsafe_size,&__t5533t__unsafe_offset,&__t5533t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1214t(&__t5533t__unsafe_ptr,&__t5533t__unsafe_size,&__t5533t__unsafe_offset,&__t5533t__unsafe_align,&__t5535t__buf__unsafe_ptr,&__t5535t__buf__unsafe_size,&__t5535t__buf__unsafe_offset,&__t5535t__buf__unsafe_align,&__t5535t__pos);
  __t5536t__buf__unsafe_ptr=__t5535t__buf__unsafe_ptr;
  __t5536t__buf__unsafe_size=__t5535t__buf__unsafe_size;
  __t5536t__buf__unsafe_offset=__t5535t__buf__unsafe_offset;
  __t5536t__buf__unsafe_align=__t5535t__buf__unsafe_align;
  __t5536t__pos=__t5535t__pos;
  CHARS__buf__unsafe_ptr=__t5536t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5536t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5536t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5536t__buf__unsafe_align;
  CHARS__pos=__t5536t__pos;
  __t_complain=arg_after__t4397t(__t5538t,&__t5539t__unsafe_ptr,&__t5539t__dat__pos,&__t5539t__dat__length,&__t5539t__dat__first);
  __t5537t=__t_complain;
  if(__t_complain){
  goto __t5537t__label;
  }
  preferred_backend__unsafe_ptr=__t5539t__unsafe_ptr;
  preferred_backend__dat__pos=__t5539t__dat__pos;
  preferred_backend__dat__length=__t5539t__dat__length;
  preferred_backend__dat__first=__t5539t__dat__first;
  __t5537t__label:__t5537t=__t5537t==0;
  if(__t5537t){
  __t_errcode=add__t2996t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5540t,preferred_backend__unsafe_ptr,preferred_backend__dat__pos,preferred_backend__dat__length,preferred_backend__dat__first,&__t5541t__unsafe_ptr,&__t5541t__dat__pos,&__t5541t__dat__length,&__t5541t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2951t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5541t__unsafe_ptr,__t5541t__dat__pos,__t5541t__dat__length,__t5541t__dat__first,__t5542t,&__t5543t__unsafe_ptr,&__t5543t__dat__pos,&__t5543t__dat__length,&__t5543t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5543t__unsafe_ptr;
  command_base__dat__pos=__t5543t__dat__pos;
  command_base__dat__length=__t5543t__dat__length;
  command_base__dat__first=__t5543t__dat__first;
  }
  else{
  __t_errcode=copy__t1759t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5549t,&__t5550t__unsafe_ptr,&__t5550t__dat__pos,&__t5550t__dat__length,&__t5550t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5550t__unsafe_ptr;
  command_base__dat__pos=__t5550t__dat__pos;
  command_base__dat__length=__t5550t__dat__length;
  command_base__dat__first=__t5550t__dat__first;
  }
  __t5551t=0;
  __t5552t=__t5551t;
  counter=__t5552t;
  __t5553t=0;
  __t5554t=__t5553t;
  failures=__t5554t;
  __t_errcode=open__t5244t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5556t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5555t=0-1;
  while(1){
  __t5555t=__t5555t+1;
  __t_complain=mutget__t5327t(&__t5556t__unsafe_ptr,__t5555t,&__t5559t__unsafe_ptr,&__t5559t__dat__pos,&__t5559t__dat__length,&__t5559t__dat__first);
  __t5558t=__t_complain;
  if(__t_complain){
  goto __t5558t__label;
  }
  path__unsafe_ptr=__t5559t__unsafe_ptr;
  path__dat__pos=__t5559t__dat__pos;
  path__dat__length=__t5559t__dat__length;
  path__dat__first=__t5559t__dat__first;
  __t5558t__label:__t5558t=__t5558t==0;
  if(!__t5558t){
  break;
  }
  eq__t1832t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5560t,&__t5561t__);
  if(!__t5561t__){
  __t_errcode=is_dir__t5171t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5562t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5562t__,&__t5563t__);
  __t5564t=__t5563t__;
  }
  else{
  __t5564t=0;
  not__t42t(__t5564t,&__t5565t__);
  __t5564t=__t5565t__;
  }
  if(__t5564t){
  continue;
  }
  reuse__t5521t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5566t__);
  __t_errcode=add__t2906t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5568t__unsafe_ptr,&__t5568t__dat__pos,&__t5568t__dat__length,&__t5568t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2951t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5568t__unsafe_ptr,__t5568t__dat__pos,__t5568t__dat__length,__t5568t__dat__first,__t5569t,&__t5570t__unsafe_ptr,&__t5570t__dat__pos,&__t5570t__dat__length,&__t5570t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5570t__unsafe_ptr;
  dir_path__dat__pos=__t5570t__dat__pos;
  dir_path__dat__length=__t5570t__dat__length;
  dir_path__dat__first=__t5570t__dat__first;
  __t_errcode=open__t5244t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5572t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5571t=0-1;
  while(1){
  __t5571t=__t5571t+1;
  __t_complain=mutget__t5327t(&__t5572t__unsafe_ptr,__t5571t,&__t5575t__unsafe_ptr,&__t5575t__dat__pos,&__t5575t__dat__length,&__t5575t__dat__first);
  __t5574t=__t_complain;
  if(__t_complain){
  goto __t5574t__label;
  }
  entry__unsafe_ptr=__t5575t__unsafe_ptr;
  entry__dat__pos=__t5575t__dat__pos;
  entry__dat__length=__t5575t__dat__length;
  entry__dat__first=__t5575t__dat__first;
  __t5574t__label:__t5574t=__t5574t==0;
  if(!__t5574t){
  break;
  }
  __t_errcode=ends_with__t2000t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5576t,&__t5577t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5577t__,&__t5578t__);
  if(__t5578t__){
  continue;
  }
  reuse__t5521t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5579t__);
  __t5581t=1;
  add__t188t(counter,__t5581t,&__t5582t__);
  counter=__t5582t__;
  contains__t2086t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5583t,&__t5584t__);
  should_fail=__t5584t__;
  __t_errcode=add__t2906t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5585t__unsafe_ptr,&__t5585t__dat__pos,&__t5585t__dat__length,&__t5585t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2906t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5585t__unsafe_ptr,__t5585t__dat__pos,__t5585t__dat__length,__t5585t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5586t__unsafe_ptr,&__t5586t__dat__pos,&__t5586t__dat__length,&__t5586t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5465t(colors__initialized,__t5586t__unsafe_ptr,__t5586t__dat__pos,__t5586t__dat__length,__t5586t__dat__first,should_fail,&__t5587t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5587t__,&__t5588t__);
  if(__t5588t__){
  __t5589t=1;
  add__t188t(failures,__t5589t,&__t5590t__);
  failures=__t5590t__;
  }
  __t5580t____t5524t=0;
  sub__t410t(__t5579t__,__t5580t____t5524t,&__t5580t____t5526t__);
  CHARS__pos=__t5580t____t5526t__;
  }
  __t5567t____t5524t=0;
  sub__t410t(__t5566t__,__t5567t____t5524t,&__t5567t____t5526t__);
  CHARS__pos=__t5567t____t5526t__;
  closedir__t5234t(__t5572t__unsafe_ptr);
  }
  stdout_to_err__t5441t(&__t5591t__);
  __t5593t=0;
  eq__t134t(failures,__t5593t,&__t5594t__);
  if(__t5594t__){
  set__t488t(colors__initialized);
  nn__t439t(__t5597t,&__t5598t__value,&__t5598t____t441t);
  print__t448t(__t5598t__value,__t5598t____t441t);
  set__t604t(colors__initialized);
  nn__t439t(__t5602t,&__t5603t__value,&__t5603t____t441t);
  print__t448t(__t5603t__value,__t5603t____t441t);
  }
  else{
  set__t484t(colors__initialized);
  nn__t439t(__t5607t,&__t5608t__value,&__t5608t____t441t);
  print__t448t(__t5608t__value,__t5608t____t441t);
  set__t604t(colors__initialized);
  print__t461t(failures,__t5612t);
  }
  nn__t446t(counter,&__t5614t__value,&__t5614t____t447t);
  print__t461t(__t5614t__value,__t5614t____t447t);
  print__t450t(__t5616t);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:restore_stdout__t5440t(__t5591t__);
  closedir__t5234t(__t5556t__unsafe_ptr);
  free__t815t(&__t5533t__unsafe_ptr);
  if(__t5530t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5618t() {
  char __t5621t=0;
  char __t5623t__=0;
  int64_t __t5624t=0;
  const char* __t5625t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t425t();
  __t_complain=_main__t5527t();
  __t5621t=__t_complain;
  if(__t_complain){
  goto __t5621t__label;
  }
  __t5621t__label:__t5621t=__t5621t==0;
  not__t42t(__t5621t,&__t5623t__);
  if(__t5623t__){
  __t5624t=__t_complain;
  cstr__t4248t(__t5624t,&__t5625t__);
  print__t450t(__t5625t__);
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
  __t_errcode=main__t5618t();
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}