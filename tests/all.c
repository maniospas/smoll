#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5531t="./smoll --back ";
const char* const __t5383t="success";
const char* const __t5406t="X";
const char* const __t5533t=" --cleanup ";
const char* const __t5467t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t5529t="--testback";
const char* const __t5603t=" out of ";
const char* const __t436t="";
const char* const __t5567t=".s";
const char* const __t5477t="completed";
const char* const __t5440t=" |- ";
const char* const __t5540t="./smoll --cleanup ";
const char* const __t5574t="_fail_";
const char* const __t5403t="failure";
const char* const __t5593t="no errors across ";
const char* const __t448t="\n";
const char* const __t4256t="[";
const char* const __t5588t="PASSING ";
const char* const __t5551t="..";
const char* const __t5560t="/";
const char* const __t5607t=" tests";
const char* const __t5598t="FAILED ";
const char* const __t5519t="./tests/passing/";
const char* const __t5393t="] ";
const char* const __t5386t="V";
static const char* __t_all_errcodes[66] = {"noerr",
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

static inline __attribute__((always_inline)) void console__t424t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1590t(char** __t5618t, uint64_t* __t5619t, uint32_t* __t5620t, uint32_t* __t5621t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5618t=unsafe_ptr;
  *__t5619t=unsafe_size;
  *__t5620t=unsafe_offset;
  *__t5621t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5622t) {
  *__t5622t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5623t) {
  int value=0;
  *__t5623t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5624t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5624t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5625t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5625t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5626t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5626t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5627t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5627t=z;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t5628t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5628t=z;
}

static inline __attribute__((always_inline)) void nat__t691t(uint32_t x, uint64_t* __t5629t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5629t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5630t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5630t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5631t) {
  *__t5631t=to;
}

static inline __attribute__((always_inline)) void add__t813t(char* allocated, uint64_t offset, char** __t5632t) {
  char* element=0;
  char* __t814t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t814t__);
  goto __t_return;
  __t_return:
  *__t5632t=__t814t__;
}

static inline __attribute__((always_inline)) int get__t1157t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5633t) {
  int __t1158t=0;
  char __t1159t__=0;
  uint64_t __t1160t__=0;
  uint64_t __t1161t__=0;
  uint64_t __t1162t__=0;
  uint64_t __t1163t__=0;
  char* __t1164t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1159t__);
  if(__t1159t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t691t(buffer__unsafe_align,&__t1160t__);
  mul__t212t(i,__t1160t__,&__t1161t__);
  nat__t691t(buffer__unsafe_offset,&__t1162t__);
  add__t188t(__t1161t__,__t1162t__,&__t1163t__);
  add__t813t(buffer__unsafe_ptr,__t1163t__,&__t1164t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5633t=__t1164t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1615t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5634t, uint64_t* __t5635t, uint64_t* __t5636t, char* __t5637t) {
  goto __t_return;
  __t_return:
  *__t5634t=unsafe_ptr;
  *__t5635t=dat__pos;
  *__t5636t=dat__length;
  *__t5637t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1619t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5638t, uint64_t* __t5639t, uint64_t* __t5640t, char* __t5641t) {
  char* unsafe_ptr=0;
  uint64_t __t1620t__=0;
  uint64_t __t1621t=0;
  char __t1622t__=0;
  uint64_t __t1623t__=0;
  uint64_t __t1624t=0;
  char __t1625t__=0;
  char* __t1626t__unsafe_ptr=0;
  uint64_t __t1626t__dat__pos=0;
  uint64_t __t1626t__dat__length=0;
  char __t1626t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t691t(buf__unsafe_align,&__t1620t__);
  __t1621t=1;
  neq__t158t(__t1620t__,__t1621t,&__t1622t__);
  if(__t1622t__){
  __t_errcode=25;
  goto __t_failure;
  }
  nat__t691t(buf__unsafe_offset,&__t1623t__);
  __t1624t=0;
  neq__t158t(__t1623t__,__t1624t,&__t1625t__);
  if(__t1625t__){
  __t_errcode=26;
  goto __t_failure;
  }
  str__t1615t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1626t__unsafe_ptr,&__t1626t__dat__pos,&__t1626t__dat__length,&__t1626t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5638t=__t1626t__unsafe_ptr;
  *__t5639t=__t1626t__dat__pos;
  *__t5640t=__t1626t__dat__length;
  *__t5641t=__t1626t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1653t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5642t, uint64_t* __t5643t, uint64_t* __t5644t, char* __t5645t) {
  uint64_t __t1654t=0;
  char __t1655t__=0;
  char* __t1657t__=0;
  char __t1658t__value=0;
  char first=0;
  char* __t1659t__unsafe_ptr=0;
  uint64_t __t1659t__dat__pos=0;
  uint64_t __t1659t__dat__length=0;
  char __t1659t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1654t=0;
  neq__t158t(length,__t1654t,&__t1655t__);
  if(__t1655t__){
  __t_errcode=get__t1157t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1657t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1657t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1658t__value,__t1657t__,1);
  first=__t1658t__value;
  }
  __t_errcode=str__t1619t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1659t__unsafe_ptr,&__t1659t__dat__pos,&__t1659t__dat__length,&__t1659t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5642t=__t1659t__unsafe_ptr;
  *__t5643t=__t1659t__dat__pos;
  *__t5644t=__t1659t__dat__length;
  *__t5645t=__t1659t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1675t(const char* c, char** __t5646t, uint64_t* __t5647t, uint64_t* __t5648t, char* __t5649t) {
  char* __t1676t__unsafe_ptr=0;
  uint64_t __t1676t__unsafe_size=0;
  uint32_t __t1676t__unsafe_offset=0;
  uint32_t __t1676t__unsafe_align=0;
  char* __t1677t__unsafe_ptr=0;
  uint64_t __t1677t__unsafe_size=0;
  uint32_t __t1677t__unsafe_offset=0;
  uint32_t __t1677t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1678t__=0;
  uint64_t length=0;
  uint64_t __t1679t=0;
  uint64_t __t1680t__=0;
  char __t1681t=0;
  uint64_t __t1682t=0;
  char* __t1684t__unsafe_ptr=0;
  uint64_t __t1684t__dat__pos=0;
  uint64_t __t1684t__dat__length=0;
  char __t1684t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1590t(&__t1676t__unsafe_ptr,&__t1676t__unsafe_size,&__t1676t__unsafe_offset,&__t1676t__unsafe_align);
  __t1677t__unsafe_ptr=__t1676t__unsafe_ptr;
  __t1677t__unsafe_size=__t1676t__unsafe_size;
  __t1677t__unsafe_offset=__t1676t__unsafe_offset;
  __t1677t__unsafe_align=__t1676t__unsafe_align;
  buf__unsafe_ptr=__t1677t__unsafe_ptr;
  buf__unsafe_size=__t1677t__unsafe_size;
  buf__unsafe_offset=__t1677t__unsafe_offset;
  buf__unsafe_align=__t1677t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1678t__);
  buf__unsafe_ptr=__t1678t__;
  if(c){
  length=strlen(c);
  }
  __t1679t=1;
  add__t188t(length,__t1679t,&__t1680t__);
  buf__unsafe_size=__t1680t__;
  __t1682t=0;
  __t_complain=str__t1653t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1682t,length,&__t1684t__unsafe_ptr,&__t1684t__dat__pos,&__t1684t__dat__length,&__t1684t__dat__first);
  __t1681t=__t_complain;
  if(__t_complain){
  goto __t1681t__label;
  }
  ret__unsafe_ptr=__t1684t__unsafe_ptr;
  ret__dat__pos=__t1684t__dat__pos;
  ret__dat__length=__t1684t__dat__length;
  ret__dat__first=__t1684t__dat__first;
  __t1681t__label:__t1681t=__t1681t==0;
  goto __t_return;
  __t_return:
  *__t5646t=ret__unsafe_ptr;
  *__t5647t=ret__dat__pos;
  *__t5648t=ret__dat__length;
  *__t5649t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t473t(char* __t5650t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5650t=supports;
}

static inline __attribute__((always_inline)) void colors__t474t(char* __t5651t) {
  char __t475t__=0;
  char initialized=0;
  supports_ansi__t473t(&__t475t__);
  initialized=__t475t__;
  goto __t_return;
  __t_return:
  *__t5651t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1091t(char** __t5652t, uint64_t* __t5653t, uint32_t* __t5654t, uint32_t* __t5655t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5652t=unsafe_ptr;
  *__t5653t=unsafe_size;
  *__t5654t=unsafe_offset;
  *__t5655t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t811t(char** __t5656t) {
  char* allocated=*__t5656t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5656t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5657t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5657t=z;
}

static inline __attribute__((always_inline)) void zero__t812t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t650t(char* x, char* __t5658t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5658t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5659t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5659t=z;
}

static inline __attribute__((always_inline)) int alloc__t795t(uint64_t bytes, char** __t5660t) {
  char* allocated=0;
  char __t796t__=0;
  char __t797t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t650t(allocated,&__t796t__);
  not__t42t(__t796t__,&__t797t__);
  if(__t797t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5660t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t934t(char** __t5661t, uint64_t* __t5662t, uint32_t* __t5663t, uint32_t* __t5664t, uint64_t size, char** __t5665t, uint64_t* __t5666t, uint32_t* __t5667t, uint32_t* __t5668t) {
  char* buffer__unsafe_ptr=*__t5661t;
  uint64_t buffer__unsafe_size=*__t5662t;
  uint32_t buffer__unsafe_offset=*__t5663t;
  uint32_t buffer__unsafe_align=*__t5664t;
  int __t935t=0;
  int __t936t=0;
  char __t938t__=0;
  uint64_t __t939t=0;
  char __t940t__=0;
  char __t941t=0;
  uint64_t __t942t=0;
  uint64_t __t943t__=0;
  uint64_t __t944t__=0;
  int __t946t=0;
  uint64_t __t947t=0;
  char __t948t__=0;
  uint64_t __t949t__=0;
  uint64_t __t950t__=0;
  uint64_t bytes=0;
  int __t951t=0;
  uint64_t __t952t=0;
  char __t953t__=0;
  char* __t954t__=0;
  int __t955t=0;
  uint64_t __t956t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t938t__);
  if(__t938t__){
  __t939t=0;
  neq__t158t(size,__t939t,&__t940t__);
  __t941t=__t940t__;
  }
  if(__t941t){
  __t942t=0;
  nat__t691t(buffer__unsafe_align,&__t943t__);
  mul__t212t(__t943t__,size,&__t944t__);
  zero__t812t(buffer__unsafe_ptr,__t942t,__t944t__);
  goto __t_return;
  }
  __t947t=0;
  neq__t158t(buffer__unsafe_size,__t947t,&__t948t__);
  if(__t948t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t691t(buffer__unsafe_align,&__t949t__);
  mul__t212t(__t949t__,size,&__t950t__);
  bytes=__t950t__;
  __t952t=0;
  eq__t134t(bytes,__t952t,&__t953t__);
  if(__t953t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t795t(bytes,&__t954t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t956t=0;
  zero__t812t(__t954t__,__t956t,bytes);
  buffer__unsafe_ptr=__t954t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t811t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5661t=buffer__unsafe_ptr;
  *__t5662t=buffer__unsafe_size;
  *__t5663t=buffer__unsafe_offset;
  *__t5664t=buffer__unsafe_align;
  *__t5665t=buffer__unsafe_ptr;
  *__t5666t=buffer__unsafe_size;
  *__t5667t=buffer__unsafe_offset;
  *__t5668t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int alloc__t1089t(uint64_t size, char** __t5669t, uint64_t* __t5670t, uint32_t* __t5671t, uint32_t* __t5672t) {
  char __t1090t=0;
  char* __t1093t__unsafe_ptr=0;
  uint64_t __t1093t__unsafe_size=0;
  uint32_t __t1093t__unsafe_offset=0;
  uint32_t __t1093t__unsafe_align=0;
  char* __t1094t__unsafe_ptr=0;
  uint64_t __t1094t__unsafe_size=0;
  uint32_t __t1094t__unsafe_offset=0;
  uint32_t __t1094t__unsafe_align=0;
  char* __t1096t__unsafe_ptr=0;
  uint64_t __t1096t__unsafe_size=0;
  uint32_t __t1096t__unsafe_offset=0;
  uint32_t __t1096t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  char __t1097t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1091t(&__t1093t__unsafe_ptr,&__t1093t__unsafe_size,&__t1093t__unsafe_offset,&__t1093t__unsafe_align);
  __t_complain=alloc__t934t(&__t1093t__unsafe_ptr,&__t1093t__unsafe_size,&__t1093t__unsafe_offset,&__t1093t__unsafe_align,size,&__t1094t__unsafe_ptr,&__t1094t__unsafe_size,&__t1094t__unsafe_offset,&__t1094t__unsafe_align);
  __t1090t=__t_complain;
  if(__t_complain){
  goto __t1090t__label;
  }
  __t1096t__unsafe_ptr=__t1094t__unsafe_ptr;
  __t1096t__unsafe_size=__t1094t__unsafe_size;
  __t1096t__unsafe_offset=__t1094t__unsafe_offset;
  __t1096t__unsafe_align=__t1094t__unsafe_align;
  ret__unsafe_ptr=__t1096t__unsafe_ptr;
  ret__unsafe_size=__t1096t__unsafe_size;
  ret__unsafe_offset=__t1096t__unsafe_offset;
  ret__unsafe_align=__t1096t__unsafe_align;
  __t1090t__label:__t1090t=__t1090t==0;
  not__t42t(__t1090t,&__t1097t__);
  if(__t1097t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t811t(&ret__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5669t=ret__unsafe_ptr;
  *__t5670t=ret__unsafe_size;
  *__t5671t=ret__unsafe_offset;
  *__t5672t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1208t(char** __t5673t, uint64_t* __t5674t, uint32_t* __t5675t, uint32_t* __t5676t, uint64_t _pos, char** __t5677t, uint64_t* __t5678t, uint32_t* __t5679t, uint32_t* __t5680t, uint64_t* __t5681t) {
  char* buf__unsafe_ptr=*__t5673t;
  uint64_t buf__unsafe_size=*__t5674t;
  uint32_t buf__unsafe_offset=*__t5675t;
  uint32_t buf__unsafe_align=*__t5676t;
  uint64_t __t1209t=0;
  uint64_t pos=0;
  __t1209t=_pos;
  pos=__t1209t;
  goto __t_return;
  __t_return:
  *__t5673t=buf__unsafe_ptr;
  *__t5674t=buf__unsafe_size;
  *__t5675t=buf__unsafe_offset;
  *__t5676t=buf__unsafe_align;
  *__t5677t=buf__unsafe_ptr;
  *__t5678t=buf__unsafe_size;
  *__t5679t=buf__unsafe_offset;
  *__t5680t=buf__unsafe_align;
  *__t5681t=pos;
}

static inline __attribute__((always_inline)) void arena__t1211t(char** __t5682t, uint64_t* __t5683t, uint32_t* __t5684t, uint32_t* __t5685t, char** __t5686t, uint64_t* __t5687t, uint32_t* __t5688t, uint32_t* __t5689t, uint64_t* __t5690t) {
  char* buf__unsafe_ptr=*__t5682t;
  uint64_t buf__unsafe_size=*__t5683t;
  uint32_t buf__unsafe_offset=*__t5684t;
  uint32_t buf__unsafe_align=*__t5685t;
  uint64_t __t1212t=0;
  char* __t1213t__buf__unsafe_ptr=0;
  uint64_t __t1213t__buf__unsafe_size=0;
  uint32_t __t1213t__buf__unsafe_offset=0;
  uint32_t __t1213t__buf__unsafe_align=0;
  uint64_t __t1213t__pos=0;
  __t1212t=0;
  arena__t1208t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1212t,&__t1213t__buf__unsafe_ptr,&__t1213t__buf__unsafe_size,&__t1213t__buf__unsafe_offset,&__t1213t__buf__unsafe_align,&__t1213t__pos);
  goto __t_return;
  __t_return:
  *__t5682t=buf__unsafe_ptr;
  *__t5683t=buf__unsafe_size;
  *__t5684t=buf__unsafe_offset;
  *__t5685t=buf__unsafe_align;
  *__t5686t=__t1213t__buf__unsafe_ptr;
  *__t5687t=__t1213t__buf__unsafe_size;
  *__t5688t=__t1213t__buf__unsafe_offset;
  *__t5689t=__t1213t__buf__unsafe_align;
  *__t5690t=__t1213t__pos;
}

static inline __attribute__((always_inline)) void argument____t_buffer____buffer__t4381t(char** __t5691t, uint64_t* __t5692t, uint32_t* __t5693t, uint32_t* __t5694t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t5691t=unsafe_ptr;
  *__t5692t=unsafe_size;
  *__t5693t=unsafe_offset;
  *__t5694t=unsafe_align;
}

static inline __attribute__((always_inline)) void args__t4380t(char** __t5695t, uint64_t* __t5696t, uint32_t* __t5697t, uint32_t* __t5698t) {
  char* __t4383t__unsafe_ptr=0;
  uint64_t __t4383t__unsafe_size=0;
  uint32_t __t4383t__unsafe_offset=0;
  uint32_t __t4383t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  argument____t_buffer____buffer__t4381t(&__t4383t__unsafe_ptr,&__t4383t__unsafe_size,&__t4383t__unsafe_offset,&__t4383t__unsafe_align);
  ret__unsafe_ptr=__t4383t__unsafe_ptr;
  ret__unsafe_size=__t4383t__unsafe_size;
  ret__unsafe_offset=__t4383t__unsafe_offset;
  ret__unsafe_align=__t4383t__unsafe_align;
  ret__unsafe_ptr=(char*)__t_argv;
  ret__unsafe_size=__t_argc;
  goto __t_return;
  __t_return:
  *__t5695t=ret__unsafe_ptr;
  *__t5696t=ret__unsafe_size;
  *__t5697t=ret__unsafe_offset;
  *__t5698t=ret__unsafe_align;
}

void str__t4378t(const char* arg__unsafe_value, char** __t5699t, uint64_t* __t5700t, uint64_t* __t5701t, char* __t5702t) {
  char* __t4379t__unsafe_ptr=0;
  uint64_t __t4379t__dat__pos=0;
  uint64_t __t4379t__dat__length=0;
  char __t4379t__dat__first=0;
  str__t1675t(arg__unsafe_value,&__t4379t__unsafe_ptr,&__t4379t__dat__pos,&__t4379t__dat__length,&__t4379t__dat__first);
  goto __t_return;
  __t_return:
  *__t5699t=__t4379t__unsafe_ptr;
  *__t5700t=__t4379t__dat__pos;
  *__t5701t=__t4379t__dat__length;
  *__t5702t=__t4379t__dat__first;
}

void char__t1687t(const char* s, char* __t5703t) {
  char* __t1688t__unsafe_ptr=0;
  uint64_t __t1688t__dat__pos=0;
  uint64_t __t1688t__dat__length=0;
  char __t1688t__dat__first=0;
  str__t1675t(s,&__t1688t__unsafe_ptr,&__t1688t__dat__pos,&__t1688t__dat__length,&__t1688t__dat__first);
  goto __t_return;
  __t_return:
  *__t5703t=__t1688t__dat__first;
}

static inline __attribute__((always_inline)) void neq__t1690t(char x, char y, char* __t5704t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5704t=z;
}

static inline __attribute__((always_inline)) void len__t1685t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5705t) {
  goto __t_return;
  __t_return:
  *__t5705t=s__dat__length;
}

static inline __attribute__((always_inline)) void eq__t1822t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5706t) {
  uint64_t __t1823t__=0;
  uint64_t n=0;
  uint64_t __t1824t__=0;
  char __t1825t__=0;
  char __t1826t=0;
  char __t1827t__=0;
  char __t1828t=0;
  char z=0;
  len__t1685t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1823t__);
  n=__t1823t__;
  len__t1685t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1824t__);
  neq__t158t(n,__t1824t__,&__t1825t__);
  if(__t1825t__){
  __t1826t=0;
  goto __t_return;
  }
  neq__t1690t(x__dat__first,y__dat__first,&__t1827t__);
  if(__t1827t__){
  __t1828t=0;
  __t1826t=__t1828t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1826t=z;
  goto __t_return;
  __t_return:
  *__t5706t=__t1826t;
}

void eq__t1835t(const char* x, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5707t) {
  char __t1836t__=0;
  char __t1837t__=0;
  char __t1838t=0;
  char* __t1839t__unsafe_ptr=0;
  uint64_t __t1839t__dat__pos=0;
  uint64_t __t1839t__dat__length=0;
  char __t1839t__dat__first=0;
  char __t1840t__=0;
  char__t1687t(x,&__t1836t__);
  neq__t1690t(y__dat__first,__t1836t__,&__t1837t__);
  if(__t1837t__){
  __t1838t=0;
  goto __t_return;
  }
  str__t1675t(x,&__t1839t__unsafe_ptr,&__t1839t__dat__pos,&__t1839t__dat__length,&__t1839t__dat__first);
  eq__t1822t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,__t1839t__unsafe_ptr,__t1839t__dat__pos,__t1839t__dat__length,__t1839t__dat__first,&__t1840t__);
  __t1838t=__t1840t__;
  goto __t_return;
  __t_return:
  *__t5707t=__t1838t;
}

static inline __attribute__((always_inline)) void len__t1165t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5708t) {
  goto __t_return;
  __t_return:
  *__t5708t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t5709t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5709t=z;
}

static inline __attribute__((always_inline)) int arg_after__t4394t(const char* flag, char** __t5710t, uint64_t* __t5711t, uint64_t* __t5712t, char* __t5713t) {
  char* __t4395t__unsafe_ptr=0;
  uint64_t __t4395t__unsafe_size=0;
  uint32_t __t4395t__unsafe_offset=0;
  uint32_t __t4395t__unsafe_align=0;
  char* args__unsafe_ptr=0;
  uint64_t args__unsafe_size=0;
  uint32_t args__unsafe_offset=0;
  uint32_t args__unsafe_align=0;
  uint64_t __t4396t=0;
  char __t4397t=0;
  char* __t4398t__=0;
  const char* __t4399t__unsafe_value=0;
  const char* arg__unsafe_value=0;
  char* __t4400t__unsafe_ptr=0;
  uint64_t __t4400t__dat__pos=0;
  uint64_t __t4400t__dat__length=0;
  char __t4400t__dat__first=0;
  char __t4401t__=0;
  uint64_t __t4402t=0;
  uint64_t __t4403t__=0;
  uint64_t __t4404t__=0;
  char __t4405t__=0;
  char __t4406t=0;
  uint64_t __t4407t=0;
  uint64_t __t4408t__=0;
  char* __t4410t__=0;
  const char* __t4411t__unsafe_value=0;
  char* __t4412t__unsafe_ptr=0;
  uint64_t __t4412t__dat__pos=0;
  uint64_t __t4412t__dat__length=0;
  char __t4412t__dat__first=0;
  int __t4413t=0;
  int __t_errcode=0;
  int __t_complain=0;
  args__t4380t(&__t4395t__unsafe_ptr,&__t4395t__unsafe_size,&__t4395t__unsafe_offset,&__t4395t__unsafe_align);
  args__unsafe_ptr=__t4395t__unsafe_ptr;
  args__unsafe_size=__t4395t__unsafe_size;
  args__unsafe_offset=__t4395t__unsafe_offset;
  args__unsafe_align=__t4395t__unsafe_align;
  __t4396t=0-1;
  while(1){
  __t4396t=__t4396t+1;
  __t_complain=get__t1157t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4396t,&__t4398t__);
  __t4397t=__t_complain;
  if(__t_complain){
  goto __t4397t__label;
  }
  if(!__t4398t__){
  __t_complain=2;
  goto __t4397t__label;
  }
  else{
  memcpy(&__t4399t__unsafe_value,__t4398t__,8);
  }
  arg__unsafe_value=__t4399t__unsafe_value;
  __t4397t__label:__t4397t=__t4397t==0;
  if(!__t4397t){
  break;
  }
  str__t4378t(arg__unsafe_value,&__t4400t__unsafe_ptr,&__t4400t__dat__pos,&__t4400t__dat__length,&__t4400t__dat__first);
  eq__t1835t(flag,__t4400t__unsafe_ptr,__t4400t__dat__pos,__t4400t__dat__length,__t4400t__dat__first,&__t4401t__);
  if(__t4401t__){
  __t4402t=1;
  add__t188t(__t4396t,__t4402t,&__t4403t__);
  len__t1165t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,&__t4404t__);
  lt__t301t(__t4403t__,__t4404t__,&__t4405t__);
  __t4406t=__t4405t__;
  }
  else{
  __t4406t=0;
  }
  if(__t4406t){
  __t4407t=1;
  add__t188t(__t4396t,__t4407t,&__t4408t__);
  __t_errcode=get__t1157t(args__unsafe_ptr,args__unsafe_size,args__unsafe_offset,args__unsafe_align,__t4408t__,&__t4410t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4410t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4411t__unsafe_value,__t4410t__,8);
  str__t4378t(__t4411t__unsafe_value,&__t4412t__unsafe_ptr,&__t4412t__dat__pos,&__t4412t__dat__length,&__t4412t__dat__first);
  goto __t_return;
  }
  }
  __t_errcode=44;
  goto __t_failure;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5710t=__t4412t__unsafe_ptr;
  *__t5711t=__t4412t__dat__pos;
  *__t5712t=__t4412t__dat__length;
  *__t5713t=__t4412t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1652t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5714t, uint64_t* __t5715t, uint64_t* __t5716t, char* __t5717t) {
  goto __t_return;
  __t_return:
  *__t5714t=other__unsafe_ptr;
  *__t5715t=other__dat__pos;
  *__t5716t=other__dat__length;
  *__t5717t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5718t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5718t=z;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t5719t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5719t=z;
}

static inline __attribute__((always_inline)) void allocated__t1215t(char** __t5720t, uint64_t* __t5721t, uint32_t* __t5722t, uint32_t* __t5723t, uint64_t pos, char** __t5724t, uint64_t* __t5725t, uint32_t* __t5726t, uint32_t* __t5727t, uint64_t* __t5728t) {
  char* buf__unsafe_ptr=*__t5720t;
  uint64_t buf__unsafe_size=*__t5721t;
  uint32_t buf__unsafe_offset=*__t5722t;
  uint32_t buf__unsafe_align=*__t5723t;
  goto __t_return;
  __t_return:
  *__t5720t=buf__unsafe_ptr;
  *__t5721t=buf__unsafe_size;
  *__t5722t=buf__unsafe_offset;
  *__t5723t=buf__unsafe_align;
  *__t5724t=buf__unsafe_ptr;
  *__t5725t=buf__unsafe_size;
  *__t5726t=buf__unsafe_offset;
  *__t5727t=buf__unsafe_align;
  *__t5728t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1290t(char** __t5729t, uint64_t* __t5730t, uint32_t* __t5731t, uint32_t* __t5732t, uint64_t* __t5733t, uint64_t length, char** __t5734t, uint64_t* __t5735t, uint32_t* __t5736t, uint32_t* __t5737t, uint64_t* __t5738t) {
  char* allocator__buf__unsafe_ptr=*__t5729t;
  uint64_t allocator__buf__unsafe_size=*__t5730t;
  uint32_t allocator__buf__unsafe_offset=*__t5731t;
  uint32_t allocator__buf__unsafe_align=*__t5732t;
  uint64_t allocator__pos=*__t5733t;
  int __t1291t=0;
  uint64_t __t1292t__=0;
  uint64_t next_pos=0;
  uint64_t __t1293t__=0;
  char __t1294t__=0;
  uint64_t __t1295t=0;
  uint64_t __t1296t__=0;
  uint64_t pos=0;
  char* __t1297t__buf__unsafe_ptr=0;
  uint64_t __t1297t__buf__unsafe_size=0;
  uint32_t __t1297t__buf__unsafe_offset=0;
  uint32_t __t1297t__buf__unsafe_align=0;
  uint64_t __t1297t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1292t__);
  next_pos=__t1292t__;
  len__t1165t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1293t__);
  gt__t325t(next_pos,__t1293t__,&__t1294t__);
  if(__t1294t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1295t=0;
  add__t188t(allocator__pos,__t1295t,&__t1296t__);
  pos=__t1296t__;
  allocator__pos=next_pos;
  allocated__t1215t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1297t__buf__unsafe_ptr,&__t1297t__buf__unsafe_size,&__t1297t__buf__unsafe_offset,&__t1297t__buf__unsafe_align,&__t1297t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5729t=allocator__buf__unsafe_ptr;
  *__t5730t=allocator__buf__unsafe_size;
  *__t5731t=allocator__buf__unsafe_offset;
  *__t5732t=allocator__buf__unsafe_align;
  *__t5733t=allocator__pos;
  *__t5734t=__t1297t__buf__unsafe_ptr;
  *__t5735t=__t1297t__buf__unsafe_size;
  *__t5736t=__t1297t__buf__unsafe_offset;
  *__t5737t=__t1297t__buf__unsafe_align;
  *__t5738t=__t1297t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1220t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5739t, uint64_t* __t5740t, uint32_t* __t5741t, uint32_t* __t5742t, uint64_t* __t5743t) {
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
  *__t5739t=__t1221t__unsafe_ptr;
  *__t5740t=__t1221t__unsafe_size;
  *__t5741t=__t1221t__unsafe_offset;
  *__t5742t=__t1221t__unsafe_align;
  *__t5743t=__t1222t;
}

static inline __attribute__((always_inline)) int copy__t1751t(char** __t5744t, uint64_t* __t5745t, uint32_t* __t5746t, uint32_t* __t5747t, uint64_t* __t5748t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5749t, uint64_t* __t5750t, uint64_t* __t5751t, char* __t5752t) {
  char* CHARS__buf__unsafe_ptr=*__t5744t;
  uint64_t CHARS__buf__unsafe_size=*__t5745t;
  uint32_t CHARS__buf__unsafe_offset=*__t5746t;
  uint32_t CHARS__buf__unsafe_align=*__t5747t;
  uint64_t CHARS__pos=*__t5748t;
  char* __t1752t__unsafe_ptr=0;
  uint64_t __t1752t__dat__pos=0;
  uint64_t __t1752t__dat__length=0;
  char __t1752t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1753t__buf__unsafe_ptr=0;
  uint64_t __t1753t__buf__unsafe_size=0;
  uint32_t __t1753t__buf__unsafe_offset=0;
  uint32_t __t1753t__buf__unsafe_align=0;
  uint64_t __t1753t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1754t=0;
  char* __t1755t__unsafe_ptr=0;
  uint64_t __t1755t__dat__pos=0;
  uint64_t __t1755t__dat__length=0;
  char __t1755t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1652t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1752t__unsafe_ptr,&__t1752t__dat__pos,&__t1752t__dat__length,&__t1752t__dat__first);
  other__unsafe_ptr=__t1752t__unsafe_ptr;
  other__dat__pos=__t1752t__dat__pos;
  other__dat__length=__t1752t__dat__length;
  other__dat__first=__t1752t__dat__first;
  __t_errcode=alloc__t1290t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1753t__buf__unsafe_ptr,&__t1753t__buf__unsafe_size,&__t1753t__buf__unsafe_offset,&__t1753t__buf__unsafe_align,&__t1753t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1753t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1753t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1753t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1753t__buf__unsafe_align;
  surface__pos=__t1753t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1619t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1755t__unsafe_ptr,&__t1755t__dat__pos,&__t1755t__dat__length,&__t1755t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5744t=CHARS__buf__unsafe_ptr;
  *__t5745t=CHARS__buf__unsafe_size;
  *__t5746t=CHARS__buf__unsafe_offset;
  *__t5747t=CHARS__buf__unsafe_align;
  *__t5748t=CHARS__pos;
  *__t5749t=__t1755t__unsafe_ptr;
  *__t5750t=__t1755t__dat__pos;
  *__t5751t=__t1755t__dat__length;
  *__t5752t=__t1755t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1217t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5753t, uint64_t* __t5754t, uint32_t* __t5755t, uint32_t* __t5756t, uint64_t* __t5757t) {
  char* __t1218t__unsafe_ptr=0;
  uint64_t __t1218t__unsafe_size=0;
  uint32_t __t1218t__unsafe_offset=0;
  uint32_t __t1218t__unsafe_align=0;
  uint64_t __t1219t=0;
  __t1218t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1218t__unsafe_size=self__buf__unsafe_size;
  __t1218t__unsafe_offset=self__buf__unsafe_offset;
  __t1218t__unsafe_align=self__buf__unsafe_align;
  __t1219t=self__pos;
  goto __t_return;
  __t_return:
  *__t5753t=__t1218t__unsafe_ptr;
  *__t5754t=__t1218t__unsafe_size;
  *__t5755t=__t1218t__unsafe_offset;
  *__t5756t=__t1218t__unsafe_align;
  *__t5757t=__t1219t;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t5758t) {
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
  *__t5758t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1671t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5759t, uint64_t* __t5760t, uint64_t* __t5761t, char* __t5762t) {
  uint64_t __t1673t__=0;
  char* __t1674t__unsafe_ptr=0;
  uint64_t __t1674t__dat__pos=0;
  uint64_t __t1674t__dat__length=0;
  char __t1674t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t401t(endpos,pos,&__t1673t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1653t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1673t__,&__t1674t__unsafe_ptr,&__t1674t__dat__pos,&__t1674t__dat__length,&__t1674t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5759t=__t1674t__unsafe_ptr;
  *__t5760t=__t1674t__dat__pos;
  *__t5761t=__t1674t__dat__length;
  *__t5762t=__t1674t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2993t(char** __t5763t, uint64_t* __t5764t, uint32_t* __t5765t, uint32_t* __t5766t, uint64_t* __t5767t, const char* _s1, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5768t, uint64_t* __t5769t, uint64_t* __t5770t, char* __t5771t) {
  char* CHARS__buf__unsafe_ptr=*__t5763t;
  uint64_t CHARS__buf__unsafe_size=*__t5764t;
  uint32_t CHARS__buf__unsafe_offset=*__t5765t;
  uint32_t CHARS__buf__unsafe_align=*__t5766t;
  uint64_t CHARS__pos=*__t5767t;
  char* __t2994t__unsafe_ptr=0;
  uint64_t __t2994t__dat__pos=0;
  uint64_t __t2994t__dat__length=0;
  char __t2994t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2995t__unsafe_ptr=0;
  uint64_t __t2995t__dat__pos=0;
  uint64_t __t2995t__dat__length=0;
  char __t2995t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2996t__=0;
  uint64_t __t2997t__=0;
  char __t2998t__=0;
  char __t2999t=0;
  uint64_t __t3000t__=0;
  char __t3001t__=0;
  char __t3002t=0;
  uint64_t __t3003t__=0;
  char* __t3004t__buf__unsafe_ptr=0;
  uint64_t __t3004t__buf__unsafe_size=0;
  uint32_t __t3004t__buf__unsafe_offset=0;
  uint32_t __t3004t__buf__unsafe_align=0;
  uint64_t __t3004t__pos=0;
  char* __t3005t____t1221t__unsafe_ptr=0;
  uint64_t __t3005t____t1221t__unsafe_size=0;
  uint32_t __t3005t____t1221t__unsafe_offset=0;
  uint32_t __t3005t____t1221t__unsafe_align=0;
  uint64_t __t3005t____t1222t=0;
  char* __t3006t__buf__unsafe_ptr=0;
  uint64_t __t3006t__buf__unsafe_size=0;
  uint32_t __t3006t__buf__unsafe_offset=0;
  uint32_t __t3006t__buf__unsafe_align=0;
  uint64_t __t3006t__pos=0;
  char* __t3007t__buf__unsafe_ptr=0;
  uint64_t __t3007t__buf__unsafe_size=0;
  uint32_t __t3007t__buf__unsafe_offset=0;
  uint32_t __t3007t__buf__unsafe_align=0;
  uint64_t __t3007t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t3008t__unsafe_ptr=0;
  uint64_t __t3008t__dat__pos=0;
  uint64_t __t3008t__dat__length=0;
  char __t3008t__dat__first=0;
  char* __t3009t____t1218t__unsafe_ptr=0;
  uint64_t __t3009t____t1218t__unsafe_size=0;
  uint32_t __t3009t____t1218t__unsafe_offset=0;
  uint32_t __t3009t____t1218t__unsafe_align=0;
  uint64_t __t3009t____t1219t=0;
  uint64_t __t3011t=0;
  uint64_t __t3012t__=0;
  char* __t3013t__unsafe_ptr=0;
  uint64_t __t3013t__dat__pos=0;
  uint64_t __t3013t__dat__length=0;
  char __t3013t__dat__first=0;
  char __t3014t__=0;
  char __t3015t__=0;
  char __t3016t=0;
  uint64_t __t3017t__=0;
  char __t3018t__=0;
  char __t3019t=0;
  uint64_t __t3020t__=0;
  char* __t3022t__unsafe_ptr=0;
  uint64_t __t3022t__dat__pos=0;
  uint64_t __t3022t__dat__length=0;
  char __t3022t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t3023t__=0;
  uint64_t __t3024t__=0;
  uint64_t __t3025t__=0;
  char* __t3026t__buf__unsafe_ptr=0;
  uint64_t __t3026t__buf__unsafe_size=0;
  uint32_t __t3026t__buf__unsafe_offset=0;
  uint32_t __t3026t__buf__unsafe_align=0;
  uint64_t __t3026t__pos=0;
  char* __t3027t____t1221t__unsafe_ptr=0;
  uint64_t __t3027t____t1221t__unsafe_size=0;
  uint32_t __t3027t____t1221t__unsafe_offset=0;
  uint32_t __t3027t____t1221t__unsafe_align=0;
  uint64_t __t3027t____t1222t=0;
  char* __t3028t__buf__unsafe_ptr=0;
  uint64_t __t3028t__buf__unsafe_size=0;
  uint32_t __t3028t__buf__unsafe_offset=0;
  uint32_t __t3028t__buf__unsafe_align=0;
  uint64_t __t3028t__pos=0;
  char* __t3029t__buf__unsafe_ptr=0;
  uint64_t __t3029t__buf__unsafe_size=0;
  uint32_t __t3029t__buf__unsafe_offset=0;
  uint32_t __t3029t__buf__unsafe_align=0;
  uint64_t __t3029t__pos=0;
  char* __t3030t__unsafe_ptr=0;
  uint64_t __t3030t__dat__pos=0;
  uint64_t __t3030t__dat__length=0;
  char __t3030t__dat__first=0;
  char* __t3031t__unsafe_ptr=0;
  uint64_t __t3031t__dat__pos=0;
  uint64_t __t3031t__dat__length=0;
  char __t3031t__dat__first=0;
  char __t3032t=0;
  char* __t3033t____t1218t__unsafe_ptr=0;
  uint64_t __t3033t____t1218t__unsafe_size=0;
  uint32_t __t3033t____t1218t__unsafe_offset=0;
  uint32_t __t3033t____t1218t__unsafe_align=0;
  uint64_t __t3033t____t1219t=0;
  uint64_t __t3035t=0;
  uint64_t __t3036t__=0;
  char* __t3037t__unsafe_ptr=0;
  uint64_t __t3037t__dat__pos=0;
  uint64_t __t3037t__dat__length=0;
  char __t3037t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1675t(_s1,&__t2994t__unsafe_ptr,&__t2994t__dat__pos,&__t2994t__dat__length,&__t2994t__dat__first);
  s1__unsafe_ptr=__t2994t__unsafe_ptr;
  s1__dat__pos=__t2994t__dat__pos;
  s1__dat__length=__t2994t__dat__length;
  s1__dat__first=__t2994t__dat__first;
  str__t1652t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2995t__unsafe_ptr,&__t2995t__dat__pos,&__t2995t__dat__length,&__t2995t__dat__first);
  s2__unsafe_ptr=__t2995t__unsafe_ptr;
  s2__dat__pos=__t2995t__dat__pos;
  s2__dat__length=__t2995t__dat__length;
  s2__dat__first=__t2995t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2996t__);
  if(__t2996t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2997t__);
  eq__t134t(CHARS__pos,__t2997t__,&__t2998t__);
  __t2999t=__t2998t__;
  }
  if(__t2999t){
  add__t188t(CHARS__pos,s2__dat__length,&__t3000t__);
  lt__t301t(__t3000t__,CHARS__buf__unsafe_size,&__t3001t__);
  __t3002t=__t3001t__;
  }
  if(__t3002t){
  len__t1685t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3003t__);
  __t_errcode=alloc__t1290t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3003t__,&__t3004t__buf__unsafe_ptr,&__t3004t__buf__unsafe_size,&__t3004t__buf__unsafe_offset,&__t3004t__buf__unsafe_align,&__t3004t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(__t3004t__buf__unsafe_ptr,__t3004t__buf__unsafe_size,__t3004t__buf__unsafe_offset,__t3004t__buf__unsafe_align,__t3004t__pos,&__t3005t____t1221t__unsafe_ptr,&__t3005t____t1221t__unsafe_size,&__t3005t____t1221t__unsafe_offset,&__t3005t____t1221t__unsafe_align,&__t3005t____t1222t);
  arena__t1208t(&__t3005t____t1221t__unsafe_ptr,&__t3005t____t1221t__unsafe_size,&__t3005t____t1221t__unsafe_offset,&__t3005t____t1221t__unsafe_align,__t3005t____t1222t,&__t3006t__buf__unsafe_ptr,&__t3006t__buf__unsafe_size,&__t3006t__buf__unsafe_offset,&__t3006t__buf__unsafe_align,&__t3006t__pos);
  __t3007t__buf__unsafe_ptr=__t3006t__buf__unsafe_ptr;
  __t3007t__buf__unsafe_size=__t3006t__buf__unsafe_size;
  __t3007t__buf__unsafe_offset=__t3006t__buf__unsafe_offset;
  __t3007t__buf__unsafe_align=__t3006t__buf__unsafe_align;
  __t3007t__pos=__t3006t__pos;
  surface__buf__unsafe_ptr=__t3007t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3007t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3007t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3007t__buf__unsafe_align;
  surface__pos=__t3007t__pos;
  __t_errcode=copy__t1751t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3008t__unsafe_ptr,&__t3008t__dat__pos,&__t3008t__dat__length,&__t3008t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1217t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3009t____t1218t__unsafe_ptr,&__t3009t____t1218t__unsafe_size,&__t3009t____t1218t__unsafe_offset,&__t3009t____t1218t__unsafe_align,&__t3009t____t1219t);
  __t3011t=0;
  add__t188t(s1__dat__pos,__t3011t,&__t3012t__);
  __t_errcode=str__t1671t(__t3009t____t1218t__unsafe_ptr,__t3009t____t1218t__unsafe_size,__t3009t____t1218t__unsafe_offset,__t3009t____t1218t__unsafe_align,__t3009t____t1219t,__t3012t__,&__t3013t__unsafe_ptr,&__t3013t__dat__pos,&__t3013t__dat__length,&__t3013t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3014t__);
  if(__t3014t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3015t__);
  __t3016t=__t3015t__;
  }
  if(__t3016t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3017t__);
  eq__t134t(s2__dat__pos,__t3017t__,&__t3018t__);
  __t3019t=__t3018t__;
  }
  if(__t3019t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t3020t__);
  __t_errcode=str__t1671t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t3020t__,s1__dat__pos,&__t3022t__unsafe_ptr,&__t3022t__dat__pos,&__t3022t__dat__length,&__t3022t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3013t__unsafe_ptr=__t3022t__unsafe_ptr;
  __t3013t__dat__pos=__t3022t__dat__pos;
  __t3013t__dat__length=__t3022t__dat__length;
  __t3013t__dat__first=__t3022t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1685t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3023t__);
  len__t1685t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3024t__);
  add__t188t(__t3023t__,__t3024t__,&__t3025t__);
  __t_errcode=alloc__t1290t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3025t__,&__t3026t__buf__unsafe_ptr,&__t3026t__buf__unsafe_size,&__t3026t__buf__unsafe_offset,&__t3026t__buf__unsafe_align,&__t3026t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(__t3026t__buf__unsafe_ptr,__t3026t__buf__unsafe_size,__t3026t__buf__unsafe_offset,__t3026t__buf__unsafe_align,__t3026t__pos,&__t3027t____t1221t__unsafe_ptr,&__t3027t____t1221t__unsafe_size,&__t3027t____t1221t__unsafe_offset,&__t3027t____t1221t__unsafe_align,&__t3027t____t1222t);
  arena__t1208t(&__t3027t____t1221t__unsafe_ptr,&__t3027t____t1221t__unsafe_size,&__t3027t____t1221t__unsafe_offset,&__t3027t____t1221t__unsafe_align,__t3027t____t1222t,&__t3028t__buf__unsafe_ptr,&__t3028t__buf__unsafe_size,&__t3028t__buf__unsafe_offset,&__t3028t__buf__unsafe_align,&__t3028t__pos);
  __t3029t__buf__unsafe_ptr=__t3028t__buf__unsafe_ptr;
  __t3029t__buf__unsafe_size=__t3028t__buf__unsafe_size;
  __t3029t__buf__unsafe_offset=__t3028t__buf__unsafe_offset;
  __t3029t__buf__unsafe_align=__t3028t__buf__unsafe_align;
  __t3029t__pos=__t3028t__pos;
  surface__buf__unsafe_ptr=__t3029t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3029t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3029t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3029t__buf__unsafe_align;
  surface__pos=__t3029t__pos;
  __t_errcode=copy__t1751t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3030t__unsafe_ptr,&__t3030t__dat__pos,&__t3030t__dat__length,&__t3030t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1751t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3031t__unsafe_ptr,&__t3031t__dat__pos,&__t3031t__dat__length,&__t3031t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1217t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3033t____t1218t__unsafe_ptr,&__t3033t____t1218t__unsafe_size,&__t3033t____t1218t__unsafe_offset,&__t3033t____t1218t__unsafe_align,&__t3033t____t1219t);
  __t3035t=0;
  add__t188t(prev_pos,__t3035t,&__t3036t__);
  __t_complain=str__t1671t(__t3033t____t1218t__unsafe_ptr,__t3033t____t1218t__unsafe_size,__t3033t____t1218t__unsafe_offset,__t3033t____t1218t__unsafe_align,__t3033t____t1219t,__t3036t__,&__t3037t__unsafe_ptr,&__t3037t__dat__pos,&__t3037t__dat__length,&__t3037t__dat__first);
  __t3032t=__t_complain;
  if(__t_complain){
  goto __t3032t__label;
  }
  ret__unsafe_ptr=__t3037t__unsafe_ptr;
  ret__dat__pos=__t3037t__dat__pos;
  ret__dat__length=__t3037t__dat__length;
  ret__dat__first=__t3037t__dat__first;
  __t3032t__label:__t3032t=__t3032t==0;
  __t3013t__unsafe_ptr=ret__unsafe_ptr;
  __t3013t__dat__pos=ret__dat__pos;
  __t3013t__dat__length=ret__dat__length;
  __t3013t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5763t=CHARS__buf__unsafe_ptr;
  *__t5764t=CHARS__buf__unsafe_size;
  *__t5765t=CHARS__buf__unsafe_offset;
  *__t5766t=CHARS__buf__unsafe_align;
  *__t5767t=CHARS__pos;
  *__t5768t=__t3013t__unsafe_ptr;
  *__t5769t=__t3013t__dat__pos;
  *__t5770t=__t3013t__dat__length;
  *__t5771t=__t3013t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2948t(char** __t5772t, uint64_t* __t5773t, uint32_t* __t5774t, uint32_t* __t5775t, uint64_t* __t5776t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5777t, uint64_t* __t5778t, uint64_t* __t5779t, char* __t5780t) {
  char* CHARS__buf__unsafe_ptr=*__t5772t;
  uint64_t CHARS__buf__unsafe_size=*__t5773t;
  uint32_t CHARS__buf__unsafe_offset=*__t5774t;
  uint32_t CHARS__buf__unsafe_align=*__t5775t;
  uint64_t CHARS__pos=*__t5776t;
  char* __t2949t__unsafe_ptr=0;
  uint64_t __t2949t__dat__pos=0;
  uint64_t __t2949t__dat__length=0;
  char __t2949t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2950t__unsafe_ptr=0;
  uint64_t __t2950t__dat__pos=0;
  uint64_t __t2950t__dat__length=0;
  char __t2950t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2951t__=0;
  uint64_t __t2952t__=0;
  char __t2953t__=0;
  char __t2954t=0;
  uint64_t __t2955t__=0;
  char __t2956t__=0;
  char __t2957t=0;
  uint64_t __t2958t__=0;
  char* __t2959t__buf__unsafe_ptr=0;
  uint64_t __t2959t__buf__unsafe_size=0;
  uint32_t __t2959t__buf__unsafe_offset=0;
  uint32_t __t2959t__buf__unsafe_align=0;
  uint64_t __t2959t__pos=0;
  char* __t2960t____t1221t__unsafe_ptr=0;
  uint64_t __t2960t____t1221t__unsafe_size=0;
  uint32_t __t2960t____t1221t__unsafe_offset=0;
  uint32_t __t2960t____t1221t__unsafe_align=0;
  uint64_t __t2960t____t1222t=0;
  char* __t2961t__buf__unsafe_ptr=0;
  uint64_t __t2961t__buf__unsafe_size=0;
  uint32_t __t2961t__buf__unsafe_offset=0;
  uint32_t __t2961t__buf__unsafe_align=0;
  uint64_t __t2961t__pos=0;
  char* __t2962t__buf__unsafe_ptr=0;
  uint64_t __t2962t__buf__unsafe_size=0;
  uint32_t __t2962t__buf__unsafe_offset=0;
  uint32_t __t2962t__buf__unsafe_align=0;
  uint64_t __t2962t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2963t__unsafe_ptr=0;
  uint64_t __t2963t__dat__pos=0;
  uint64_t __t2963t__dat__length=0;
  char __t2963t__dat__first=0;
  char* __t2964t____t1218t__unsafe_ptr=0;
  uint64_t __t2964t____t1218t__unsafe_size=0;
  uint32_t __t2964t____t1218t__unsafe_offset=0;
  uint32_t __t2964t____t1218t__unsafe_align=0;
  uint64_t __t2964t____t1219t=0;
  uint64_t __t2966t=0;
  uint64_t __t2967t__=0;
  char* __t2968t__unsafe_ptr=0;
  uint64_t __t2968t__dat__pos=0;
  uint64_t __t2968t__dat__length=0;
  char __t2968t__dat__first=0;
  char __t2969t__=0;
  char __t2970t__=0;
  char __t2971t=0;
  uint64_t __t2972t__=0;
  char __t2973t__=0;
  char __t2974t=0;
  uint64_t __t2975t__=0;
  char* __t2977t__unsafe_ptr=0;
  uint64_t __t2977t__dat__pos=0;
  uint64_t __t2977t__dat__length=0;
  char __t2977t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2978t__=0;
  uint64_t __t2979t__=0;
  uint64_t __t2980t__=0;
  char* __t2981t__buf__unsafe_ptr=0;
  uint64_t __t2981t__buf__unsafe_size=0;
  uint32_t __t2981t__buf__unsafe_offset=0;
  uint32_t __t2981t__buf__unsafe_align=0;
  uint64_t __t2981t__pos=0;
  char* __t2982t____t1221t__unsafe_ptr=0;
  uint64_t __t2982t____t1221t__unsafe_size=0;
  uint32_t __t2982t____t1221t__unsafe_offset=0;
  uint32_t __t2982t____t1221t__unsafe_align=0;
  uint64_t __t2982t____t1222t=0;
  char* __t2983t__buf__unsafe_ptr=0;
  uint64_t __t2983t__buf__unsafe_size=0;
  uint32_t __t2983t__buf__unsafe_offset=0;
  uint32_t __t2983t__buf__unsafe_align=0;
  uint64_t __t2983t__pos=0;
  char* __t2984t__buf__unsafe_ptr=0;
  uint64_t __t2984t__buf__unsafe_size=0;
  uint32_t __t2984t__buf__unsafe_offset=0;
  uint32_t __t2984t__buf__unsafe_align=0;
  uint64_t __t2984t__pos=0;
  char* __t2985t__unsafe_ptr=0;
  uint64_t __t2985t__dat__pos=0;
  uint64_t __t2985t__dat__length=0;
  char __t2985t__dat__first=0;
  char* __t2986t__unsafe_ptr=0;
  uint64_t __t2986t__dat__pos=0;
  uint64_t __t2986t__dat__length=0;
  char __t2986t__dat__first=0;
  char __t2987t=0;
  char* __t2988t____t1218t__unsafe_ptr=0;
  uint64_t __t2988t____t1218t__unsafe_size=0;
  uint32_t __t2988t____t1218t__unsafe_offset=0;
  uint32_t __t2988t____t1218t__unsafe_align=0;
  uint64_t __t2988t____t1219t=0;
  uint64_t __t2990t=0;
  uint64_t __t2991t__=0;
  char* __t2992t__unsafe_ptr=0;
  uint64_t __t2992t__dat__pos=0;
  uint64_t __t2992t__dat__length=0;
  char __t2992t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1652t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2949t__unsafe_ptr,&__t2949t__dat__pos,&__t2949t__dat__length,&__t2949t__dat__first);
  s1__unsafe_ptr=__t2949t__unsafe_ptr;
  s1__dat__pos=__t2949t__dat__pos;
  s1__dat__length=__t2949t__dat__length;
  s1__dat__first=__t2949t__dat__first;
  str__t1675t(_s2,&__t2950t__unsafe_ptr,&__t2950t__dat__pos,&__t2950t__dat__length,&__t2950t__dat__first);
  s2__unsafe_ptr=__t2950t__unsafe_ptr;
  s2__dat__pos=__t2950t__dat__pos;
  s2__dat__length=__t2950t__dat__length;
  s2__dat__first=__t2950t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2951t__);
  if(__t2951t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2952t__);
  eq__t134t(CHARS__pos,__t2952t__,&__t2953t__);
  __t2954t=__t2953t__;
  }
  if(__t2954t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2955t__);
  lt__t301t(__t2955t__,CHARS__buf__unsafe_size,&__t2956t__);
  __t2957t=__t2956t__;
  }
  if(__t2957t){
  len__t1685t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2958t__);
  __t_errcode=alloc__t1290t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2958t__,&__t2959t__buf__unsafe_ptr,&__t2959t__buf__unsafe_size,&__t2959t__buf__unsafe_offset,&__t2959t__buf__unsafe_align,&__t2959t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(__t2959t__buf__unsafe_ptr,__t2959t__buf__unsafe_size,__t2959t__buf__unsafe_offset,__t2959t__buf__unsafe_align,__t2959t__pos,&__t2960t____t1221t__unsafe_ptr,&__t2960t____t1221t__unsafe_size,&__t2960t____t1221t__unsafe_offset,&__t2960t____t1221t__unsafe_align,&__t2960t____t1222t);
  arena__t1208t(&__t2960t____t1221t__unsafe_ptr,&__t2960t____t1221t__unsafe_size,&__t2960t____t1221t__unsafe_offset,&__t2960t____t1221t__unsafe_align,__t2960t____t1222t,&__t2961t__buf__unsafe_ptr,&__t2961t__buf__unsafe_size,&__t2961t__buf__unsafe_offset,&__t2961t__buf__unsafe_align,&__t2961t__pos);
  __t2962t__buf__unsafe_ptr=__t2961t__buf__unsafe_ptr;
  __t2962t__buf__unsafe_size=__t2961t__buf__unsafe_size;
  __t2962t__buf__unsafe_offset=__t2961t__buf__unsafe_offset;
  __t2962t__buf__unsafe_align=__t2961t__buf__unsafe_align;
  __t2962t__pos=__t2961t__pos;
  surface__buf__unsafe_ptr=__t2962t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2962t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2962t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2962t__buf__unsafe_align;
  surface__pos=__t2962t__pos;
  __t_errcode=copy__t1751t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2963t__unsafe_ptr,&__t2963t__dat__pos,&__t2963t__dat__length,&__t2963t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1217t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2964t____t1218t__unsafe_ptr,&__t2964t____t1218t__unsafe_size,&__t2964t____t1218t__unsafe_offset,&__t2964t____t1218t__unsafe_align,&__t2964t____t1219t);
  __t2966t=0;
  add__t188t(s1__dat__pos,__t2966t,&__t2967t__);
  __t_errcode=str__t1671t(__t2964t____t1218t__unsafe_ptr,__t2964t____t1218t__unsafe_size,__t2964t____t1218t__unsafe_offset,__t2964t____t1218t__unsafe_align,__t2964t____t1219t,__t2967t__,&__t2968t__unsafe_ptr,&__t2968t__dat__pos,&__t2968t__dat__length,&__t2968t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2969t__);
  if(__t2969t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2970t__);
  __t2971t=__t2970t__;
  }
  if(__t2971t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2972t__);
  eq__t134t(s2__dat__pos,__t2972t__,&__t2973t__);
  __t2974t=__t2973t__;
  }
  if(__t2974t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2975t__);
  __t_errcode=str__t1671t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2975t__,s1__dat__pos,&__t2977t__unsafe_ptr,&__t2977t__dat__pos,&__t2977t__dat__length,&__t2977t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2968t__unsafe_ptr=__t2977t__unsafe_ptr;
  __t2968t__dat__pos=__t2977t__dat__pos;
  __t2968t__dat__length=__t2977t__dat__length;
  __t2968t__dat__first=__t2977t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1685t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2978t__);
  len__t1685t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2979t__);
  add__t188t(__t2978t__,__t2979t__,&__t2980t__);
  __t_errcode=alloc__t1290t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2980t__,&__t2981t__buf__unsafe_ptr,&__t2981t__buf__unsafe_size,&__t2981t__buf__unsafe_offset,&__t2981t__buf__unsafe_align,&__t2981t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(__t2981t__buf__unsafe_ptr,__t2981t__buf__unsafe_size,__t2981t__buf__unsafe_offset,__t2981t__buf__unsafe_align,__t2981t__pos,&__t2982t____t1221t__unsafe_ptr,&__t2982t____t1221t__unsafe_size,&__t2982t____t1221t__unsafe_offset,&__t2982t____t1221t__unsafe_align,&__t2982t____t1222t);
  arena__t1208t(&__t2982t____t1221t__unsafe_ptr,&__t2982t____t1221t__unsafe_size,&__t2982t____t1221t__unsafe_offset,&__t2982t____t1221t__unsafe_align,__t2982t____t1222t,&__t2983t__buf__unsafe_ptr,&__t2983t__buf__unsafe_size,&__t2983t__buf__unsafe_offset,&__t2983t__buf__unsafe_align,&__t2983t__pos);
  __t2984t__buf__unsafe_ptr=__t2983t__buf__unsafe_ptr;
  __t2984t__buf__unsafe_size=__t2983t__buf__unsafe_size;
  __t2984t__buf__unsafe_offset=__t2983t__buf__unsafe_offset;
  __t2984t__buf__unsafe_align=__t2983t__buf__unsafe_align;
  __t2984t__pos=__t2983t__pos;
  surface__buf__unsafe_ptr=__t2984t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2984t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2984t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2984t__buf__unsafe_align;
  surface__pos=__t2984t__pos;
  __t_errcode=copy__t1751t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2985t__unsafe_ptr,&__t2985t__dat__pos,&__t2985t__dat__length,&__t2985t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1751t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2986t__unsafe_ptr,&__t2986t__dat__pos,&__t2986t__dat__length,&__t2986t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1217t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2988t____t1218t__unsafe_ptr,&__t2988t____t1218t__unsafe_size,&__t2988t____t1218t__unsafe_offset,&__t2988t____t1218t__unsafe_align,&__t2988t____t1219t);
  __t2990t=0;
  add__t188t(prev_pos,__t2990t,&__t2991t__);
  __t_complain=str__t1671t(__t2988t____t1218t__unsafe_ptr,__t2988t____t1218t__unsafe_size,__t2988t____t1218t__unsafe_offset,__t2988t____t1218t__unsafe_align,__t2988t____t1219t,__t2991t__,&__t2992t__unsafe_ptr,&__t2992t__dat__pos,&__t2992t__dat__length,&__t2992t__dat__first);
  __t2987t=__t_complain;
  if(__t_complain){
  goto __t2987t__label;
  }
  ret__unsafe_ptr=__t2992t__unsafe_ptr;
  ret__dat__pos=__t2992t__dat__pos;
  ret__dat__length=__t2992t__dat__length;
  ret__dat__first=__t2992t__dat__first;
  __t2987t__label:__t2987t=__t2987t==0;
  __t2968t__unsafe_ptr=ret__unsafe_ptr;
  __t2968t__dat__pos=ret__dat__pos;
  __t2968t__dat__length=ret__dat__length;
  __t2968t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5772t=CHARS__buf__unsafe_ptr;
  *__t5773t=CHARS__buf__unsafe_size;
  *__t5774t=CHARS__buf__unsafe_offset;
  *__t5775t=CHARS__buf__unsafe_align;
  *__t5776t=CHARS__pos;
  *__t5777t=__t2968t__unsafe_ptr;
  *__t5778t=__t2968t__dat__pos;
  *__t5779t=__t2968t__dat__length;
  *__t5780t=__t2968t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1756t(char** __t5781t, uint64_t* __t5782t, uint32_t* __t5783t, uint32_t* __t5784t, uint64_t* __t5785t, const char* _other, char** __t5786t, uint64_t* __t5787t, uint64_t* __t5788t, char* __t5789t) {
  char* CHARS__buf__unsafe_ptr=*__t5781t;
  uint64_t CHARS__buf__unsafe_size=*__t5782t;
  uint32_t CHARS__buf__unsafe_offset=*__t5783t;
  uint32_t CHARS__buf__unsafe_align=*__t5784t;
  uint64_t CHARS__pos=*__t5785t;
  char* __t1757t__unsafe_ptr=0;
  uint64_t __t1757t__dat__pos=0;
  uint64_t __t1757t__dat__length=0;
  char __t1757t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1758t__buf__unsafe_ptr=0;
  uint64_t __t1758t__buf__unsafe_size=0;
  uint32_t __t1758t__buf__unsafe_offset=0;
  uint32_t __t1758t__buf__unsafe_align=0;
  uint64_t __t1758t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1759t=0;
  char* __t1760t__unsafe_ptr=0;
  uint64_t __t1760t__dat__pos=0;
  uint64_t __t1760t__dat__length=0;
  char __t1760t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1675t(_other,&__t1757t__unsafe_ptr,&__t1757t__dat__pos,&__t1757t__dat__length,&__t1757t__dat__first);
  other__unsafe_ptr=__t1757t__unsafe_ptr;
  other__dat__pos=__t1757t__dat__pos;
  other__dat__length=__t1757t__dat__length;
  other__dat__first=__t1757t__dat__first;
  __t_errcode=alloc__t1290t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1758t__buf__unsafe_ptr,&__t1758t__buf__unsafe_size,&__t1758t__buf__unsafe_offset,&__t1758t__buf__unsafe_align,&__t1758t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1758t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1758t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1758t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1758t__buf__unsafe_align;
  surface__pos=__t1758t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1619t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1760t__unsafe_ptr,&__t1760t__dat__pos,&__t1760t__dat__length,&__t1760t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5781t=CHARS__buf__unsafe_ptr;
  *__t5782t=CHARS__buf__unsafe_size;
  *__t5783t=CHARS__buf__unsafe_offset;
  *__t5784t=CHARS__buf__unsafe_align;
  *__t5785t=CHARS__pos;
  *__t5786t=__t1760t__unsafe_ptr;
  *__t5787t=__t1760t__dat__pos;
  *__t5788t=__t1760t__dat__length;
  *__t5789t=__t1760t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1166t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1692t(char** __t5790t, uint64_t* __t5791t, uint32_t* __t5792t, uint32_t* __t5793t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5790t=unsafe_ptr;
  *__t5791t=unsafe_size;
  *__t5792t=unsafe_offset;
  *__t5793t=unsafe_align;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1781t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5794t, uint64_t* __t5795t, uint64_t* __t5796t, char* __t5797t) {
  char* __t1782t__unsafe_ptr=0;
  uint64_t __t1782t__unsafe_size=0;
  uint32_t __t1782t__unsafe_offset=0;
  uint32_t __t1782t__unsafe_align=0;
  uint64_t __t1783t=0;
  uint64_t __t1784t__=0;
  uint64_t __t1785t__=0;
  char* __t1786t__unsafe_ptr=0;
  uint64_t __t1786t__unsafe_size=0;
  uint32_t __t1786t__unsafe_offset=0;
  uint32_t __t1786t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t1788t=0;
  uint64_t __t1789t=0;
  char* __t1790t__unsafe_ptr=0;
  uint64_t __t1790t__dat__pos=0;
  uint64_t __t1790t__dat__length=0;
  char __t1790t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1692t(&__t1782t__unsafe_ptr,&__t1782t__unsafe_size,&__t1782t__unsafe_offset,&__t1782t__unsafe_align);
  __t1783t=1;
  len__t1685t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1784t__);
  add__t188t(__t1783t,__t1784t__,&__t1785t__);
  __t_errcode=alloc__t934t(&__t1782t__unsafe_ptr,&__t1782t__unsafe_size,&__t1782t__unsafe_offset,&__t1782t__unsafe_align,__t1785t__,&__t1786t__unsafe_ptr,&__t1786t__unsafe_size,&__t1786t__unsafe_offset,&__t1786t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1786t__unsafe_ptr;
  buf__unsafe_size=__t1786t__unsafe_size;
  buf__unsafe_offset=__t1786t__unsafe_offset;
  buf__unsafe_align=__t1786t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1789t=0;
  __t_errcode=str__t1619t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1789t,other__dat__length,other__dat__first,&__t1790t__unsafe_ptr,&__t1790t__dat__pos,&__t1790t__dat__length,&__t1790t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t811t(&__t1790t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5794t=__t1790t__unsafe_ptr;
  *__t5795t=__t1790t__dat__pos;
  *__t5796t=__t1790t__dat__length;
  *__t5797t=__t1790t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1805t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5798t, char** __t5799t, uint64_t* __t5800t, uint64_t* __t5801t, char* __t5802t) {
  int __t1806t=0;
  char* __t1808t__unsafe_ptr=0;
  uint64_t __t1808t__dat__pos=0;
  uint64_t __t1808t__dat__length=0;
  char __t1808t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1810t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1166t();
  __t_errcode=copy_null_terminated__t1781t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1808t__unsafe_ptr,&__t1808t__dat__pos,&__t1808t__dat__length,&__t1808t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1808t__unsafe_ptr;
  str__dat__pos=__t1808t__dat__pos;
  str__dat__length=__t1808t__dat__length;
  str__dat__first=__t1808t__dat__first;
  add__t813t(str__unsafe_ptr,str__dat__pos,&__t1810t__);
  _ret=__t1810t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t811t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5798t=cstr;
  *__t5799t=str__unsafe_ptr;
  *__t5800t=str__dat__pos;
  *__t5801t=str__dat__length;
  *__t5802t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1815t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5803t) {
  goto __t_return;
  __t_return:
  *__t5803t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t5225t(char* unsafe_ptr) {
  int __t5227t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t5228t(const char* path, char** __t5804t) {
  int __t5230t=0;
  char* unsafe_ptr=0;
  char __t5232t__=0;
  char __t5233t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t650t(unsafe_ptr,&__t5232t__);
  not__t42t(__t5232t__,&__t5233t__);
  if(__t5233t__){
  __t_errcode=51;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5225t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5804t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t5235t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t5805t) {
  const char* __t5236t__cstr=0;
  char* __t5236t__str__unsafe_ptr=0;
  uint64_t __t5236t__str__dat__pos=0;
  uint64_t __t5236t__str__dat__length=0;
  char __t5236t__str__dat__first=0;
  const char* __t5238t__=0;
  char* __t5239t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1805t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5236t__cstr,&__t5236t__str__unsafe_ptr,&__t5236t__str__dat__pos,&__t5236t__str__dat__length,&__t5236t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1815t(__t5236t__cstr,__t5236t__str__unsafe_ptr,__t5236t__str__dat__pos,__t5236t__str__dat__length,__t5236t__str__dat__first,&__t5238t__);
  __t_errcode=open__t5228t(__t5238t__,&__t5239t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5225t(__t5239t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5805t=__t5239t__unsafe_ptr;
  
  __t_skip_returns:free__t811t(&__t5236t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t5247t(char** __t5806t, const char** __t5807t) {
  char* f__unsafe_ptr=*__t5806t;
  char __t5248t__=0;
  char __t5249t__=0;
  char* de=0;
  char __t5250t__=0;
  char __t5251t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t650t(f__unsafe_ptr,&__t5248t__);
  not__t42t(__t5248t__,&__t5249t__);
  if(__t5249t__){
  __t_errcode=62;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t650t(de,&__t5250t__);
  not__t42t(__t5250t__,&__t5251t__);
  if(__t5251t__){
  __t_errcode=63;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5806t=f__unsafe_ptr;
  *__t5807t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t5252t(char** __t5808t, char** __t5809t, uint64_t* __t5810t, uint64_t* __t5811t, char* __t5812t) {
  char* f__unsafe_ptr=*__t5808t;
  const char* __t5253t__=0;
  char* __t5254t__unsafe_ptr=0;
  uint64_t __t5254t__dat__pos=0;
  uint64_t __t5254t__dat__length=0;
  char __t5254t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t5247t(&f__unsafe_ptr,&__t5253t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1675t(__t5253t__,&__t5254t__unsafe_ptr,&__t5254t__dat__pos,&__t5254t__dat__length,&__t5254t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5808t=f__unsafe_ptr;
  *__t5809t=__t5254t__unsafe_ptr;
  *__t5810t=__t5254t__dat__pos;
  *__t5811t=__t5254t__dat__length;
  *__t5812t=__t5254t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t5318t(char** __t5813t, uint64_t __t_anon1, char** __t5814t, uint64_t* __t5815t, uint64_t* __t5816t, char* __t5817t) {
  char* data__unsafe_ptr=*__t5813t;
  char* __t5319t__unsafe_ptr=0;
  uint64_t __t5319t__dat__pos=0;
  uint64_t __t5319t__dat__length=0;
  char __t5319t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t5252t(&data__unsafe_ptr,&__t5319t__unsafe_ptr,&__t5319t__dat__pos,&__t5319t__dat__length,&__t5319t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5813t=data__unsafe_ptr;
  *__t5814t=__t5319t__unsafe_ptr;
  *__t5815t=__t5319t__dat__pos;
  *__t5816t=__t5319t__dat__length;
  *__t5817t=__t5319t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void eq__t1829t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t5818t) {
  char __t1830t__=0;
  char __t1831t__=0;
  char __t1832t=0;
  char* __t1833t__unsafe_ptr=0;
  uint64_t __t1833t__dat__pos=0;
  uint64_t __t1833t__dat__length=0;
  char __t1833t__dat__first=0;
  char __t1834t__=0;
  char__t1687t(y,&__t1830t__);
  neq__t1690t(x__dat__first,__t1830t__,&__t1831t__);
  if(__t1831t__){
  __t1832t=0;
  goto __t_return;
  }
  str__t1675t(y,&__t1833t__unsafe_ptr,&__t1833t__dat__pos,&__t1833t__dat__length,&__t1833t__dat__first);
  eq__t1822t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1833t__unsafe_ptr,__t1833t__dat__pos,__t1833t__dat__length,__t1833t__dat__first,&__t1834t__);
  __t1832t=__t1834t__;
  goto __t_return;
  __t_return:
  *__t5818t=__t1832t;
}

int unsafe_temp__t1791t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5819t, char** __t5820t, uint64_t* __t5821t, uint64_t* __t5822t, char* __t5823t) {
  int __t1792t=0;
  char* __t1793t__unsafe_ptr=0;
  uint64_t __t1793t__unsafe_size=0;
  uint32_t __t1793t__unsafe_offset=0;
  uint32_t __t1793t__unsafe_align=0;
  uint64_t __t1794t=0;
  uint64_t __t1795t__=0;
  uint64_t __t1796t__=0;
  char* __t1797t__unsafe_ptr=0;
  uint64_t __t1797t__unsafe_size=0;
  uint32_t __t1797t__unsafe_offset=0;
  uint32_t __t1797t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1799t=0;
  char __t1800t__=0;
  char first_character=0;
  uint64_t __t1801t=0;
  char* __t1802t__unsafe_ptr=0;
  uint64_t __t1802t__dat__pos=0;
  uint64_t __t1802t__dat__length=0;
  char __t1802t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1803t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1692t(&__t1793t__unsafe_ptr,&__t1793t__unsafe_size,&__t1793t__unsafe_offset,&__t1793t__unsafe_align);
  __t1794t=1;
  add__t188t(__t1794t,other__dat__length,&__t1795t__);
  add__t188t(__t1795t__,prefix__dat__length,&__t1796t__);
  __t_errcode=alloc__t934t(&__t1793t__unsafe_ptr,&__t1793t__unsafe_size,&__t1793t__unsafe_offset,&__t1793t__unsafe_align,__t1796t__,&__t1797t__unsafe_ptr,&__t1797t__unsafe_size,&__t1797t__unsafe_offset,&__t1797t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1797t__unsafe_ptr;
  buf__unsafe_size=__t1797t__unsafe_size;
  buf__unsafe_offset=__t1797t__unsafe_offset;
  buf__unsafe_align=__t1797t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1799t=0;
  eq__t134t(prefix__dat__length,__t1799t,&__t1800t__);
  if(__t1800t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1801t=0;
  __t_errcode=str__t1619t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1801t,other__dat__length,first_character,&__t1802t__unsafe_ptr,&__t1802t__dat__pos,&__t1802t__dat__length,&__t1802t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1802t__unsafe_ptr;
  str__dat__pos=__t1802t__dat__pos;
  str__dat__length=__t1802t__dat__length;
  str__dat__first=__t1802t__dat__first;
  add__t813t(str__unsafe_ptr,str__dat__pos,&__t1803t__);
  _ret=__t1803t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t811t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5819t=cstr;
  *__t5820t=str__unsafe_ptr;
  *__t5821t=str__dat__pos;
  *__t5822t=str__dat__length;
  *__t5823t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1814t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5824t) {
  goto __t_return;
  __t_return:
  *__t5824t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t5152t(const char* path, char* __t5825t) {
  int __t5154t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t5825t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t5162t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t5826t) {
  int __t5164t=0;
  const char* __t5165t__cstr=0;
  char* __t5165t__str__unsafe_ptr=0;
  uint64_t __t5165t__str__dat__pos=0;
  uint64_t __t5165t__str__dat__length=0;
  char __t5165t__str__dat__first=0;
  const char* __t5167t__=0;
  char __t5168t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1791t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t5165t__cstr,&__t5165t__str__unsafe_ptr,&__t5165t__str__dat__pos,&__t5165t__str__dat__length,&__t5165t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1814t(__t5165t__cstr,__t5165t__str__unsafe_ptr,__t5165t__str__dat__pos,__t5165t__str__dat__length,__t5165t__str__dat__first,&__t5167t__);
  is_dir__t5152t(__t5167t__,&__t5168t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5826t=__t5168t__;
  
  __t_skip_returns:free__t811t(&__t5165t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t409t(uint64_t x, uint64_t y, uint64_t* __t5827t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5827t=z;
}

static inline __attribute__((always_inline)) void reuse__t5512t(char** __t5828t, uint64_t* __t5829t, uint32_t* __t5830t, uint32_t* __t5831t, uint64_t* __t5832t, uint64_t* __t5833t) {
  char* arn__buf__unsafe_ptr=*__t5828t;
  uint64_t arn__buf__unsafe_size=*__t5829t;
  uint32_t arn__buf__unsafe_offset=*__t5830t;
  uint32_t arn__buf__unsafe_align=*__t5831t;
  uint64_t arn__pos=*__t5832t;
  uint64_t __t5513t=0;
  uint64_t __t5514t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5515t=0;
  uint64_t __t5517t__=0;
  __t5513t=0;
  add__t188t(__t5513t,arn__pos,&__t5514t__);
  tracked_position=__t5514t__;
  goto __t_return;
  __t_return:
  *__t5828t=arn__buf__unsafe_ptr;
  *__t5829t=arn__buf__unsafe_size;
  *__t5830t=arn__buf__unsafe_offset;
  *__t5831t=arn__buf__unsafe_align;
  *__t5832t=arn__pos;
  *__t5833t=tracked_position;
}

int add__t2903t(char** __t5834t, uint64_t* __t5835t, uint32_t* __t5836t, uint32_t* __t5837t, uint64_t* __t5838t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5839t, uint64_t* __t5840t, uint64_t* __t5841t, char* __t5842t) {
  char* CHARS__buf__unsafe_ptr=*__t5834t;
  uint64_t CHARS__buf__unsafe_size=*__t5835t;
  uint32_t CHARS__buf__unsafe_offset=*__t5836t;
  uint32_t CHARS__buf__unsafe_align=*__t5837t;
  uint64_t CHARS__pos=*__t5838t;
  char* __t2904t__unsafe_ptr=0;
  uint64_t __t2904t__dat__pos=0;
  uint64_t __t2904t__dat__length=0;
  char __t2904t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2905t__unsafe_ptr=0;
  uint64_t __t2905t__dat__pos=0;
  uint64_t __t2905t__dat__length=0;
  char __t2905t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2906t__=0;
  uint64_t __t2907t__=0;
  char __t2908t__=0;
  char __t2909t=0;
  uint64_t __t2910t__=0;
  char __t2911t__=0;
  char __t2912t=0;
  uint64_t __t2913t__=0;
  char* __t2914t__buf__unsafe_ptr=0;
  uint64_t __t2914t__buf__unsafe_size=0;
  uint32_t __t2914t__buf__unsafe_offset=0;
  uint32_t __t2914t__buf__unsafe_align=0;
  uint64_t __t2914t__pos=0;
  char* __t2915t____t1221t__unsafe_ptr=0;
  uint64_t __t2915t____t1221t__unsafe_size=0;
  uint32_t __t2915t____t1221t__unsafe_offset=0;
  uint32_t __t2915t____t1221t__unsafe_align=0;
  uint64_t __t2915t____t1222t=0;
  char* __t2916t__buf__unsafe_ptr=0;
  uint64_t __t2916t__buf__unsafe_size=0;
  uint32_t __t2916t__buf__unsafe_offset=0;
  uint32_t __t2916t__buf__unsafe_align=0;
  uint64_t __t2916t__pos=0;
  char* __t2917t__buf__unsafe_ptr=0;
  uint64_t __t2917t__buf__unsafe_size=0;
  uint32_t __t2917t__buf__unsafe_offset=0;
  uint32_t __t2917t__buf__unsafe_align=0;
  uint64_t __t2917t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2918t__unsafe_ptr=0;
  uint64_t __t2918t__dat__pos=0;
  uint64_t __t2918t__dat__length=0;
  char __t2918t__dat__first=0;
  char* __t2919t____t1218t__unsafe_ptr=0;
  uint64_t __t2919t____t1218t__unsafe_size=0;
  uint32_t __t2919t____t1218t__unsafe_offset=0;
  uint32_t __t2919t____t1218t__unsafe_align=0;
  uint64_t __t2919t____t1219t=0;
  uint64_t __t2921t=0;
  uint64_t __t2922t__=0;
  char* __t2923t__unsafe_ptr=0;
  uint64_t __t2923t__dat__pos=0;
  uint64_t __t2923t__dat__length=0;
  char __t2923t__dat__first=0;
  char __t2924t__=0;
  char __t2925t__=0;
  char __t2926t=0;
  uint64_t __t2927t__=0;
  char __t2928t__=0;
  char __t2929t=0;
  uint64_t __t2930t__=0;
  char* __t2932t__unsafe_ptr=0;
  uint64_t __t2932t__dat__pos=0;
  uint64_t __t2932t__dat__length=0;
  char __t2932t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2933t__=0;
  uint64_t __t2934t__=0;
  uint64_t __t2935t__=0;
  char* __t2936t__buf__unsafe_ptr=0;
  uint64_t __t2936t__buf__unsafe_size=0;
  uint32_t __t2936t__buf__unsafe_offset=0;
  uint32_t __t2936t__buf__unsafe_align=0;
  uint64_t __t2936t__pos=0;
  char* __t2937t____t1221t__unsafe_ptr=0;
  uint64_t __t2937t____t1221t__unsafe_size=0;
  uint32_t __t2937t____t1221t__unsafe_offset=0;
  uint32_t __t2937t____t1221t__unsafe_align=0;
  uint64_t __t2937t____t1222t=0;
  char* __t2938t__buf__unsafe_ptr=0;
  uint64_t __t2938t__buf__unsafe_size=0;
  uint32_t __t2938t__buf__unsafe_offset=0;
  uint32_t __t2938t__buf__unsafe_align=0;
  uint64_t __t2938t__pos=0;
  char* __t2939t__buf__unsafe_ptr=0;
  uint64_t __t2939t__buf__unsafe_size=0;
  uint32_t __t2939t__buf__unsafe_offset=0;
  uint32_t __t2939t__buf__unsafe_align=0;
  uint64_t __t2939t__pos=0;
  char* __t2940t__unsafe_ptr=0;
  uint64_t __t2940t__dat__pos=0;
  uint64_t __t2940t__dat__length=0;
  char __t2940t__dat__first=0;
  char* __t2941t__unsafe_ptr=0;
  uint64_t __t2941t__dat__pos=0;
  uint64_t __t2941t__dat__length=0;
  char __t2941t__dat__first=0;
  char __t2942t=0;
  char* __t2943t____t1218t__unsafe_ptr=0;
  uint64_t __t2943t____t1218t__unsafe_size=0;
  uint32_t __t2943t____t1218t__unsafe_offset=0;
  uint32_t __t2943t____t1218t__unsafe_align=0;
  uint64_t __t2943t____t1219t=0;
  uint64_t __t2945t=0;
  uint64_t __t2946t__=0;
  char* __t2947t__unsafe_ptr=0;
  uint64_t __t2947t__dat__pos=0;
  uint64_t __t2947t__dat__length=0;
  char __t2947t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1652t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2904t__unsafe_ptr,&__t2904t__dat__pos,&__t2904t__dat__length,&__t2904t__dat__first);
  s1__unsafe_ptr=__t2904t__unsafe_ptr;
  s1__dat__pos=__t2904t__dat__pos;
  s1__dat__length=__t2904t__dat__length;
  s1__dat__first=__t2904t__dat__first;
  str__t1652t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2905t__unsafe_ptr,&__t2905t__dat__pos,&__t2905t__dat__length,&__t2905t__dat__first);
  s2__unsafe_ptr=__t2905t__unsafe_ptr;
  s2__dat__pos=__t2905t__dat__pos;
  s2__dat__length=__t2905t__dat__length;
  s2__dat__first=__t2905t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2906t__);
  if(__t2906t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2907t__);
  eq__t134t(CHARS__pos,__t2907t__,&__t2908t__);
  __t2909t=__t2908t__;
  }
  if(__t2909t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2910t__);
  lt__t301t(__t2910t__,CHARS__buf__unsafe_size,&__t2911t__);
  __t2912t=__t2911t__;
  }
  if(__t2912t){
  len__t1685t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2913t__);
  __t_errcode=alloc__t1290t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2913t__,&__t2914t__buf__unsafe_ptr,&__t2914t__buf__unsafe_size,&__t2914t__buf__unsafe_offset,&__t2914t__buf__unsafe_align,&__t2914t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(__t2914t__buf__unsafe_ptr,__t2914t__buf__unsafe_size,__t2914t__buf__unsafe_offset,__t2914t__buf__unsafe_align,__t2914t__pos,&__t2915t____t1221t__unsafe_ptr,&__t2915t____t1221t__unsafe_size,&__t2915t____t1221t__unsafe_offset,&__t2915t____t1221t__unsafe_align,&__t2915t____t1222t);
  arena__t1208t(&__t2915t____t1221t__unsafe_ptr,&__t2915t____t1221t__unsafe_size,&__t2915t____t1221t__unsafe_offset,&__t2915t____t1221t__unsafe_align,__t2915t____t1222t,&__t2916t__buf__unsafe_ptr,&__t2916t__buf__unsafe_size,&__t2916t__buf__unsafe_offset,&__t2916t__buf__unsafe_align,&__t2916t__pos);
  __t2917t__buf__unsafe_ptr=__t2916t__buf__unsafe_ptr;
  __t2917t__buf__unsafe_size=__t2916t__buf__unsafe_size;
  __t2917t__buf__unsafe_offset=__t2916t__buf__unsafe_offset;
  __t2917t__buf__unsafe_align=__t2916t__buf__unsafe_align;
  __t2917t__pos=__t2916t__pos;
  surface__buf__unsafe_ptr=__t2917t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2917t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2917t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2917t__buf__unsafe_align;
  surface__pos=__t2917t__pos;
  __t_errcode=copy__t1751t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2918t__unsafe_ptr,&__t2918t__dat__pos,&__t2918t__dat__length,&__t2918t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1217t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2919t____t1218t__unsafe_ptr,&__t2919t____t1218t__unsafe_size,&__t2919t____t1218t__unsafe_offset,&__t2919t____t1218t__unsafe_align,&__t2919t____t1219t);
  __t2921t=0;
  add__t188t(s1__dat__pos,__t2921t,&__t2922t__);
  __t_errcode=str__t1671t(__t2919t____t1218t__unsafe_ptr,__t2919t____t1218t__unsafe_size,__t2919t____t1218t__unsafe_offset,__t2919t____t1218t__unsafe_align,__t2919t____t1219t,__t2922t__,&__t2923t__unsafe_ptr,&__t2923t__dat__pos,&__t2923t__dat__length,&__t2923t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2924t__);
  if(__t2924t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2925t__);
  __t2926t=__t2925t__;
  }
  if(__t2926t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2927t__);
  eq__t134t(s2__dat__pos,__t2927t__,&__t2928t__);
  __t2929t=__t2928t__;
  }
  if(__t2929t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2930t__);
  __t_errcode=str__t1671t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2930t__,s1__dat__pos,&__t2932t__unsafe_ptr,&__t2932t__dat__pos,&__t2932t__dat__length,&__t2932t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2923t__unsafe_ptr=__t2932t__unsafe_ptr;
  __t2923t__dat__pos=__t2932t__dat__pos;
  __t2923t__dat__length=__t2932t__dat__length;
  __t2923t__dat__first=__t2932t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1685t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2933t__);
  len__t1685t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2934t__);
  add__t188t(__t2933t__,__t2934t__,&__t2935t__);
  __t_errcode=alloc__t1290t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2935t__,&__t2936t__buf__unsafe_ptr,&__t2936t__buf__unsafe_size,&__t2936t__buf__unsafe_offset,&__t2936t__buf__unsafe_align,&__t2936t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1220t(__t2936t__buf__unsafe_ptr,__t2936t__buf__unsafe_size,__t2936t__buf__unsafe_offset,__t2936t__buf__unsafe_align,__t2936t__pos,&__t2937t____t1221t__unsafe_ptr,&__t2937t____t1221t__unsafe_size,&__t2937t____t1221t__unsafe_offset,&__t2937t____t1221t__unsafe_align,&__t2937t____t1222t);
  arena__t1208t(&__t2937t____t1221t__unsafe_ptr,&__t2937t____t1221t__unsafe_size,&__t2937t____t1221t__unsafe_offset,&__t2937t____t1221t__unsafe_align,__t2937t____t1222t,&__t2938t__buf__unsafe_ptr,&__t2938t__buf__unsafe_size,&__t2938t__buf__unsafe_offset,&__t2938t__buf__unsafe_align,&__t2938t__pos);
  __t2939t__buf__unsafe_ptr=__t2938t__buf__unsafe_ptr;
  __t2939t__buf__unsafe_size=__t2938t__buf__unsafe_size;
  __t2939t__buf__unsafe_offset=__t2938t__buf__unsafe_offset;
  __t2939t__buf__unsafe_align=__t2938t__buf__unsafe_align;
  __t2939t__pos=__t2938t__pos;
  surface__buf__unsafe_ptr=__t2939t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2939t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2939t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2939t__buf__unsafe_align;
  surface__pos=__t2939t__pos;
  __t_errcode=copy__t1751t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2940t__unsafe_ptr,&__t2940t__dat__pos,&__t2940t__dat__length,&__t2940t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1751t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2941t__unsafe_ptr,&__t2941t__dat__pos,&__t2941t__dat__length,&__t2941t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1217t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2943t____t1218t__unsafe_ptr,&__t2943t____t1218t__unsafe_size,&__t2943t____t1218t__unsafe_offset,&__t2943t____t1218t__unsafe_align,&__t2943t____t1219t);
  __t2945t=0;
  add__t188t(prev_pos,__t2945t,&__t2946t__);
  __t_complain=str__t1671t(__t2943t____t1218t__unsafe_ptr,__t2943t____t1218t__unsafe_size,__t2943t____t1218t__unsafe_offset,__t2943t____t1218t__unsafe_align,__t2943t____t1219t,__t2946t__,&__t2947t__unsafe_ptr,&__t2947t__dat__pos,&__t2947t__dat__length,&__t2947t__dat__first);
  __t2942t=__t_complain;
  if(__t_complain){
  goto __t2942t__label;
  }
  ret__unsafe_ptr=__t2947t__unsafe_ptr;
  ret__dat__pos=__t2947t__dat__pos;
  ret__dat__length=__t2947t__dat__length;
  ret__dat__first=__t2947t__dat__first;
  __t2942t__label:__t2942t=__t2942t==0;
  __t2923t__unsafe_ptr=ret__unsafe_ptr;
  __t2923t__dat__pos=ret__dat__pos;
  __t2923t__dat__length=ret__dat__length;
  __t2923t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5834t=CHARS__buf__unsafe_ptr;
  *__t5835t=CHARS__buf__unsafe_size;
  *__t5836t=CHARS__buf__unsafe_offset;
  *__t5837t=CHARS__buf__unsafe_align;
  *__t5838t=CHARS__pos;
  *__t5839t=__t2923t__unsafe_ptr;
  *__t5840t=__t2923t__dat__pos;
  *__t5841t=__t2923t__dat__length;
  *__t5842t=__t2923t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1892t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t5843t) {
  int __t1893t=0;
  char __t1894t__=0;
  uint64_t __t1895t__=0;
  char* __t1896t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,s__dat__length,&__t1894t__);
  if(__t1894t__){
  __t_errcode=22;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t1895t__);
  add__t813t(s__unsafe_ptr,__t1895t__,&__t1896t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5843t=__t1896t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1918t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t5844t, uint64_t* __t5845t, uint64_t* __t5846t, char* __t5847t) {
  char* __t1919t__unsafe_ptr=0;
  uint64_t __t1919t__dat__pos=0;
  uint64_t __t1919t__dat__length=0;
  char __t1919t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1920t__=0;
  char* __t1921t__unsafe_ptr=0;
  uint64_t __t1921t__dat__pos=0;
  uint64_t __t1921t__dat__length=0;
  char __t1921t__dat__first=0;
  char __t1922t__=0;
  char __t1923t__=0;
  char __t1924t=0;
  char __t1925t__=0;
  uint64_t __t1927t__=0;
  uint64_t new_length=0;
  uint64_t __t1928t=0;
  char __t1929t__=0;
  char new_first=0;
  char* __t1931t__=0;
  char __t1932t__value=0;
  uint64_t __t1933t__=0;
  char* __t1934t__unsafe_ptr=0;
  uint64_t __t1934t__dat__pos=0;
  uint64_t __t1934t__dat__length=0;
  char __t1934t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1652t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1919t__unsafe_ptr,&__t1919t__dat__pos,&__t1919t__dat__length,&__t1919t__dat__first);
  s__unsafe_ptr=__t1919t__unsafe_ptr;
  s__dat__pos=__t1919t__dat__pos;
  s__dat__length=__t1919t__dat__length;
  s__dat__first=__t1919t__dat__first;
  eq__t134t(from,to,&__t1920t__);
  if(__t1920t__){
  str__t1675t(__t436t,&__t1921t__unsafe_ptr,&__t1921t__dat__pos,&__t1921t__dat__length,&__t1921t__dat__first);
  goto __t_return;
  }
  gt__t325t(from,to,&__t1922t__);
  if(!__t1922t__){
  gt__t325t(to,s__dat__length,&__t1923t__);
  __t1924t=__t1923t__;
  }
  else{
  __t1924t=0;
  not__t42t(__t1924t,&__t1925t__);
  __t1924t=__t1925t__;
  }
  if(__t1924t){
  __t_errcode=29;
  goto __t_failure;
  }
  sub__t409t(to,from,&__t1927t__);
  new_length=__t1927t__;
  __t1928t=0;
  neq__t158t(from,__t1928t,&__t1929t__);
  if(__t1929t__){
  __t_errcode=get__t1892t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1931t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1931t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1932t__value,__t1931t__,1);
  new_first=__t1932t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1933t__);
  str__t1615t(s__unsafe_ptr,__t1933t__,new_length,new_first,&__t1934t__unsafe_ptr,&__t1934t__dat__pos,&__t1934t__dat__length,&__t1934t__dat__first);
  __t1921t__unsafe_ptr=__t1934t__unsafe_ptr;
  __t1921t__dat__pos=__t1934t__dat__pos;
  __t1921t__dat__length=__t1934t__dat__length;
  __t1921t__dat__first=__t1934t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5844t=__t1921t__unsafe_ptr;
  *__t5845t=__t1921t__dat__pos;
  *__t5846t=__t1921t__dat__length;
  *__t5847t=__t1921t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1997t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5848t) {
  char* __t1998t__unsafe_ptr=0;
  uint64_t __t1998t__dat__pos=0;
  uint64_t __t1998t__dat__length=0;
  char __t1998t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1999t__unsafe_ptr=0;
  uint64_t __t1999t__dat__pos=0;
  uint64_t __t1999t__dat__length=0;
  char __t1999t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t2000t=0;
  uint64_t __t2001t__=0;
  uint64_t d=0;
  char __t2002t__=0;
  char __t2003t=0;
  char* __t2004t__unsafe_ptr=0;
  uint64_t __t2004t__dat__pos=0;
  uint64_t __t2004t__dat__length=0;
  char __t2004t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t2005t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1652t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1998t__unsafe_ptr,&__t1998t__dat__pos,&__t1998t__dat__length,&__t1998t__dat__first);
  stack__unsafe_ptr=__t1998t__unsafe_ptr;
  stack__dat__pos=__t1998t__dat__pos;
  stack__dat__length=__t1998t__dat__length;
  stack__dat__first=__t1998t__dat__first;
  str__t1675t(_needle,&__t1999t__unsafe_ptr,&__t1999t__dat__pos,&__t1999t__dat__length,&__t1999t__dat__first);
  needle__unsafe_ptr=__t1999t__unsafe_ptr;
  needle__dat__pos=__t1999t__dat__pos;
  needle__dat__length=__t1999t__dat__length;
  needle__dat__first=__t1999t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t401t(n,needle__dat__length,&__t2001t__);
  __t2000t=__t_complain;
  if(__t_complain){
  goto __t2000t__label;
  }
  d=__t2001t__;
  __t2000t__label:__t2000t=__t2000t==0;
  not__t42t(__t2000t,&__t2002t__);
  if(__t2002t__){
  __t2003t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1918t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t2004t__unsafe_ptr,&__t2004t__dat__pos,&__t2004t__dat__length,&__t2004t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t2004t__unsafe_ptr;
  ret__dat__pos=__t2004t__dat__pos;
  ret__dat__length=__t2004t__dat__length;
  ret__dat__first=__t2004t__dat__first;
  eq__t1822t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2005t__);
  __t2003t=__t2005t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5848t=__t2003t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t746t(uint64_t to, uint64_t* __t5849t, uint64_t* __t5850t) {
  uint64_t __t747t=0;
  uint64_t from=0;
  __t747t=0;
  from=__t747t;
  goto __t_return;
  __t_return:
  *__t5849t=from;
  *__t5850t=to;
}

static inline __attribute__((always_inline)) void range__t763t(uint64_t _from, uint64_t to, uint64_t* __t5851t, uint64_t* __t5852t) {
  uint64_t __t764t=0;
  uint64_t __t765t__=0;
  uint64_t __t766t=0;
  uint64_t from=0;
  __t764t=0;
  add__t188t(__t764t,_from,&__t765t__);
  __t766t=__t765t__;
  from=__t766t;
  goto __t_return;
  __t_return:
  *__t5851t=from;
  *__t5852t=to;
}

static inline __attribute__((always_inline)) int mutget__t768t(uint64_t* __t5853t, uint64_t r__to, uint64_t skipped, uint64_t* __t5854t) {
  uint64_t r__from=*__t5853t;
  char __t769t__=0;
  uint64_t ret=0;
  uint64_t __t770t=0;
  uint64_t __t771t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(r__from,r__to,&__t769t__);
  if(__t769t__){
  __t_errcode=16;
  goto __t_failure;
  }
  ret=r__from;
  __t770t=1;
  add__t188t(ret,__t770t,&__t771t__);
  r__from=__t771t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5853t=r__from;
  *__t5854t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2083t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5855t) {
  char* __t2084t__unsafe_ptr=0;
  uint64_t __t2084t__dat__pos=0;
  uint64_t __t2084t__dat__length=0;
  char __t2084t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2085t__unsafe_ptr=0;
  uint64_t __t2085t__dat__pos=0;
  uint64_t __t2085t__dat__length=0;
  char __t2085t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t2086t=0;
  uint64_t __t2087t__=0;
  uint64_t n=0;
  char __t2088t__=0;
  char __t2089t=0;
  uint64_t __t2090t=0;
  uint64_t __t2091t__from=0;
  uint64_t __t2091t__to=0;
  uint64_t __t2092t__from=0;
  uint64_t __t2092t__to=0;
  char __t2093t=0;
  uint64_t __t2094t__=0;
  uint64_t i=0;
  char __t2095t=0;
  uint64_t __t2096t__=0;
  char* __t2097t__unsafe_ptr=0;
  uint64_t __t2097t__dat__pos=0;
  uint64_t __t2097t__dat__length=0;
  char __t2097t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t2098t__=0;
  char __t2099t=0;
  char __t2100t=0;
  int __t_complain=0;
  str__t1652t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2084t__unsafe_ptr,&__t2084t__dat__pos,&__t2084t__dat__length,&__t2084t__dat__first);
  stack__unsafe_ptr=__t2084t__unsafe_ptr;
  stack__dat__pos=__t2084t__dat__pos;
  stack__dat__length=__t2084t__dat__length;
  stack__dat__first=__t2084t__dat__first;
  str__t1675t(_needle,&__t2085t__unsafe_ptr,&__t2085t__dat__pos,&__t2085t__dat__length,&__t2085t__dat__first);
  needle__unsafe_ptr=__t2085t__unsafe_ptr;
  needle__dat__pos=__t2085t__dat__pos;
  needle__dat__length=__t2085t__dat__length;
  needle__dat__first=__t2085t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t401t(stack__dat__length,d,&__t2087t__);
  __t2086t=__t_complain;
  if(__t_complain){
  goto __t2086t__label;
  }
  n=__t2087t__;
  __t2086t__label:__t2086t=__t2086t==0;
  not__t42t(__t2086t,&__t2088t__);
  if(__t2088t__){
  __t2089t=0;
  goto __t_return;
  }
  of__t746t(n,&__t2091t__from,&__t2091t__to);
  range__t763t(__t2091t__from,__t2091t__to,&__t2092t__from,&__t2092t__to);
  __t2090t=0-1;
  while(1){
  __t2090t=__t2090t+1;
  __t_complain=mutget__t768t(&__t2092t__from,__t2092t__to,__t2090t,&__t2094t__);
  __t2093t=__t_complain;
  if(__t_complain){
  goto __t2093t__label;
  }
  i=__t2094t__;
  __t2093t__label:__t2093t=__t2093t==0;
  if(!__t2093t){
  break;
  }
  add__t188t(i,d,&__t2096t__);
  __t_complain=slice__t1918t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t2096t__,&__t2097t__unsafe_ptr,&__t2097t__dat__pos,&__t2097t__dat__length,&__t2097t__dat__first);
  __t2095t=__t_complain;
  if(__t_complain){
  goto __t2095t__label;
  }
  sliced__unsafe_ptr=__t2097t__unsafe_ptr;
  sliced__dat__pos=__t2097t__dat__pos;
  sliced__dat__length=__t2097t__dat__length;
  sliced__dat__first=__t2097t__dat__first;
  __t2095t__label:__t2095t=__t2095t==0;
  eq__t1822t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2098t__);
  if(__t2098t__){
  __t2099t=1;
  __t2089t=__t2099t;
  goto __t_return;
  }
  }
  __t2100t=0;
  __t2089t=__t2100t;
  goto __t_return;
  __t_return:
  *__t5855t=__t2089t;
}

static inline __attribute__((always_inline)) void restore_stdout__t5431t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
}

static inline __attribute__((always_inline)) void stdout_to_err__t5432t(int64_t* __t5856t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5856t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t1886t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1887t=0;
  const char* endl=0;
  endl=__t448t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void popen__t4476t(const char* cmd, char** __t5857t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t5857t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4475t(char* unsafe_ptr, int64_t* __t5858t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t5858t=status;
}

static inline __attribute__((always_inline)) void int__t631t(uint64_t x, int64_t* __t5859t) {
  int __t632t=0;
  int __t633t=0;
  int __t634t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5859t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t5860t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t5860t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t5861t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5861t=z;
}

static inline __attribute__((always_inline)) int open__t4477t(const char* cmd, char** __t5862t) {
  char* __t4478t__=0;
  char* unsafe_ptr=0;
  char __t4479t__=0;
  char __t4480t__=0;
  char __t4481t__=0;
  int64_t __t4482t__=0;
  int64_t status=0;
  uint64_t __t4483t=0;
  int64_t __t4484t__=0;
  char __t4485t__=0;
  char __t4486t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4476t(cmd,&__t4478t__);
  unsafe_ptr=__t4478t__;
  exists__t650t(unsafe_ptr,&__t4479t__);
  not__t42t(__t4479t__,&__t4480t__);
  if(__t4480t__){
  __t_errcode=46;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t650t(unsafe_ptr,&__t4481t__);
  if(__t4481t__){
  pclose__t4475t(unsafe_ptr,&__t4482t__);
  status=__t4482t__;
  unsafe_ptr=0;
  __t4483t=0;
  int__t631t(__t4483t,&__t4484t__);
  neq__t147t(status,__t4484t__,&__t4485t__);
  if(__t4485t__){
  __t_complain=47;
  goto __t4486t__label;
  __t4486t__label:__t4486t=__t4486t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5862t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4488t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t5863t) {
  const char* __t4489t__cstr=0;
  char* __t4489t__str__unsafe_ptr=0;
  uint64_t __t4489t__str__dat__pos=0;
  uint64_t __t4489t__str__dat__length=0;
  char __t4489t__str__dat__first=0;
  const char* __t4491t__=0;
  char* __t4492t__unsafe_ptr=0;
  char __t4493t____t4481t__=0;
  int64_t __t4493t____t4482t__=0;
  int64_t __t4493t__status=0;
  uint64_t __t4493t____t4483t=0;
  int64_t __t4493t____t4484t__=0;
  char __t4493t____t4485t__=0;
  char __t4493t____t4486t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1805t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4489t__cstr,&__t4489t__str__unsafe_ptr,&__t4489t__str__dat__pos,&__t4489t__str__dat__length,&__t4489t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1815t(__t4489t__cstr,__t4489t__str__unsafe_ptr,__t4489t__str__dat__pos,__t4489t__str__dat__length,__t4489t__str__dat__first,&__t4491t__);
  __t_errcode=open__t4477t(__t4491t__,&__t4492t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t650t(__t4492t__unsafe_ptr,&__t4493t____t4481t__);
  if(__t4493t____t4481t__){
  pclose__t4475t(__t4492t__unsafe_ptr,&__t4493t____t4482t__);
  __t4493t__status=__t4493t____t4482t__;
  __t4492t__unsafe_ptr=0;
  __t4493t____t4483t=0;
  int__t631t(__t4493t____t4483t,&__t4493t____t4484t__);
  neq__t147t(__t4493t__status,__t4493t____t4484t__,&__t4493t____t4485t__);
  if(__t4493t____t4485t__){
  __t_complain=47;
  goto __t4486t__label;
  __t4486t__label:__t4493t____t4486t=__t4493t____t4486t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5863t=__t4492t__unsafe_ptr;
  
  __t_skip_returns:free__t811t(&__t4489t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4246t(int64_t value, char* __t5864t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t5864t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4245t(int64_t value, const char** __t5865t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5865t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t5866t) {
  const char* value=0;
  *__t5866t=value;
}

int run__t5360t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t5867t) {
  char* __t5361t__unsafe_ptr=0;
  char __t5362t____t4493t____t4481t__=0;
  int64_t __t5362t____t4493t____t4482t__=0;
  int64_t __t5362t____t4493t__status=0;
  uint64_t __t5362t____t4493t____t4483t=0;
  int64_t __t5362t____t4493t____t4484t__=0;
  char __t5362t____t4493t____t4485t__=0;
  char __t5362t____t4493t____t4486t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t5363t=0;
  int64_t error=0;
  char __t5364t__=0;
  char __t5365t__=0;
  const char* __t5366t__=0;
  const char* __t5367t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4488t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5361t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t5361t__unsafe_ptr;
  exists__t650t(__t5361t__unsafe_ptr,&__t5362t____t4493t____t4481t__);
  if(__t5362t____t4493t____t4481t__){
  pclose__t4475t(__t5361t__unsafe_ptr,&__t5362t____t4493t____t4482t__);
  __t5362t____t4493t__status=__t5362t____t4493t____t4482t__;
  __t5361t__unsafe_ptr=0;
  __t5362t____t4493t____t4483t=0;
  int__t631t(__t5362t____t4493t____t4483t,&__t5362t____t4493t____t4484t__);
  neq__t147t(__t5362t____t4493t__status,__t5362t____t4493t____t4484t__,&__t5362t____t4493t____t4485t__);
  if(__t5362t____t4493t____t4485t__){
  __t_complain=47;
  goto __t4486t__label;
  __t4486t__label:__t5362t____t4493t____t4486t=__t5362t____t4493t____t4486t==0;
  }
  }
  __t5363t=__t_complain;
  error=__t5363t;
  ok__t4246t(error,&__t5364t__);
  not__t42t(__t5364t__,&__t5365t__);
  if(__t5365t__){
  cstr__t4245t(error,&__t5366t__);
  goto __t_return;
  }
  cstr__t1t(&__t5367t__);
  __t5366t__=__t5367t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5867t=__t5366t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5868t) {
  int value=0;
  *__t5868t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5869t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5869t=__t54t__;
}

static inline __attribute__((always_inline)) void exists__t1613t(const char* c, char* __t5870t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5870t=z;
}

static inline __attribute__((always_inline)) void nn__t435t(const char* value, const char** __t5871t, const char** __t5872t) {
  const char* __t437t=0;
  __t437t=__t436t;
  goto __t_return;
  __t_return:
  *__t5871t=value;
  *__t5872t=__t437t;
}

static inline __attribute__((always_inline)) void print__t444t(const char* value, const char* endl) {
  int __t445t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t480t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[31m");
  }
}

static inline __attribute__((always_inline)) void set__t600t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[0m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t5396t(char colors__initialized) {
  const char* __t5398t__value=0;
  const char* __t5398t____t437t=0;
  int __t5400t=0;
  char __t5401t=0;
  char __t5402t=0;
  const char* __t5407t__value=0;
  const char* __t5407t____t437t=0;
  int __t5409t=0;
  const char* __t5412t__value=0;
  const char* __t5412t____t437t=0;
  nn__t435t(__t4256t,&__t5398t__value,&__t5398t____t437t);
  print__t444t(__t5398t__value,__t5398t____t437t);
  __t5402t=1;
  if(__t5403t!=__t5403t){
  __t5402t=0;
  }
  if(__t5402t){
  __t5401t=1;
  }
  if(__t5401t){
  set__t480t(colors__initialized);
  nn__t435t(__t5406t,&__t5407t__value,&__t5407t____t437t);
  print__t444t(__t5407t__value,__t5407t____t437t);
  }
  set__t600t(colors__initialized);
  nn__t435t(__t5393t,&__t5412t__value,&__t5412t____t437t);
  print__t444t(__t5412t__value,__t5412t____t437t);
}

static inline __attribute__((always_inline)) void print__t446t(const char* value) {
  int __t447t=0;
  const char* endl=0;
  endl=__t448t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void set__t484t(char colors__initialized) {
  if(colors__initialized){
  printf("\033[32m");
  }
}

static inline __attribute__((always_inline)) void print_marker__t5377t(char colors__initialized) {
  const char* __t5379t__value=0;
  const char* __t5379t____t437t=0;
  char __t5381t=0;
  char __t5382t=0;
  const char* __t5387t__value=0;
  const char* __t5387t____t437t=0;
  int __t5389t=0;
  int __t5390t=0;
  const char* __t5394t__value=0;
  const char* __t5394t____t437t=0;
  nn__t435t(__t4256t,&__t5379t__value,&__t5379t____t437t);
  print__t444t(__t5379t__value,__t5379t____t437t);
  __t5382t=1;
  if(__t5383t!=__t5383t){
  __t5382t=0;
  }
  if(__t5382t){
  __t5381t=1;
  }
  if(__t5381t){
  set__t484t(colors__initialized);
  nn__t435t(__t5386t,&__t5387t__value,&__t5387t____t437t);
  print__t444t(__t5387t__value,__t5387t____t437t);
  }
  set__t600t(colors__initialized);
  nn__t435t(__t5393t,&__t5394t__value,&__t5394t____t437t);
  print__t444t(__t5394t__value,__t5394t____t437t);
}

static inline __attribute__((always_inline)) int test__t5456t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t5873t) {
  int64_t __t5458t__=0;
  const char* __t5461t__=0;
  const char* __t5462t=0;
  const char* error=0;
  int __t5463t=0;
  int __t5464t__=0;
  char __t5465t__=0;
  const char* __t5466t__=0;
  const char* __t5468t__value=0;
  const char* __t5468t____t437t=0;
  char __t5470t__=0;
  char __t5474t=0;
  char __t5479t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5432t(&__t5458t__);
  print__t1886t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t5360t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5461t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5462t=__t5461t__;
  error=__t5462t;
  not__t53t(__t5463t,&__t5464t__);
  if(should_fail){
  exists__t1613t(error,&__t5465t__);
  if(__t5465t__){
  cstr__t1t(&__t5466t__);
  error=__t5466t__;
  }
  else{
  error=__t5467t;
  }
  }
  nn__t435t(__t5440t,&__t5468t__value,&__t5468t____t437t);
  print__t444t(__t5468t__value,__t5468t____t437t);
  exists__t1613t(error,&__t5470t__);
  if(__t5470t__){
  print_marker__t5396t(colors__initialized);
  print__t446t(error);
  __t5474t=0;
  goto __t_return;
  }
  print_marker__t5377t(colors__initialized);
  print__t446t(__t5477t);
  __t5479t=1;
  __t5474t=__t5479t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5873t=__t5474t;
  
  __t_skip_returns:restore_stdout__t5431t(__t5458t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t457t(uint64_t value, const char* endl) {
  int __t458t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t442t(uint64_t value, uint64_t* __t5874t, const char** __t5875t) {
  const char* __t443t=0;
  __t443t=__t436t;
  goto __t_return;
  __t_return:
  *__t5874t=value;
  *__t5875t=__t443t;
}

static inline __attribute__((always_inline)) int _main__t5518t() {
  char* __t5520t__unsafe_ptr=0;
  uint64_t __t5520t__dat__pos=0;
  uint64_t __t5520t__dat__length=0;
  char __t5520t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5521t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5523t=0;
  char* __t5524t__unsafe_ptr=0;
  uint64_t __t5524t__unsafe_size=0;
  uint32_t __t5524t__unsafe_offset=0;
  uint32_t __t5524t__unsafe_align=0;
  char* __t5526t__buf__unsafe_ptr=0;
  uint64_t __t5526t__buf__unsafe_size=0;
  uint32_t __t5526t__buf__unsafe_offset=0;
  uint32_t __t5526t__buf__unsafe_align=0;
  uint64_t __t5526t__pos=0;
  char* __t5527t__buf__unsafe_ptr=0;
  uint64_t __t5527t__buf__unsafe_size=0;
  uint32_t __t5527t__buf__unsafe_offset=0;
  uint32_t __t5527t__buf__unsafe_align=0;
  uint64_t __t5527t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char __t5528t=0;
  char* __t5530t__unsafe_ptr=0;
  uint64_t __t5530t__dat__pos=0;
  uint64_t __t5530t__dat__length=0;
  char __t5530t__dat__first=0;
  char* preferred_backend__unsafe_ptr=0;
  uint64_t preferred_backend__dat__pos=0;
  uint64_t preferred_backend__dat__length=0;
  char preferred_backend__dat__first=0;
  int __t5539t=0;
  char* __t5541t__unsafe_ptr=0;
  uint64_t __t5541t__dat__pos=0;
  uint64_t __t5541t__dat__length=0;
  char __t5541t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  char* __t5532t__unsafe_ptr=0;
  uint64_t __t5532t__dat__pos=0;
  uint64_t __t5532t__dat__length=0;
  char __t5532t__dat__first=0;
  char* __t5534t__unsafe_ptr=0;
  uint64_t __t5534t__dat__pos=0;
  uint64_t __t5534t__dat__length=0;
  char __t5534t__dat__first=0;
  uint64_t __t5542t=0;
  uint64_t __t5543t=0;
  uint64_t counter=0;
  uint64_t __t5544t=0;
  uint64_t __t5545t=0;
  uint64_t failures=0;
  uint64_t __t5546t=0;
  char* __t5547t__unsafe_ptr=0;
  char __t5549t=0;
  char* __t5550t__unsafe_ptr=0;
  uint64_t __t5550t__dat__pos=0;
  uint64_t __t5550t__dat__length=0;
  char __t5550t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5552t__=0;
  char __t5553t__=0;
  char __t5554t__=0;
  char __t5555t=0;
  char __t5556t__=0;
  uint64_t __t5557t__=0;
  uint64_t __t5558t____t5515t=0;
  uint64_t __t5558t____t5517t__=0;
  char* __t5559t__unsafe_ptr=0;
  uint64_t __t5559t__dat__pos=0;
  uint64_t __t5559t__dat__length=0;
  char __t5559t__dat__first=0;
  char* __t5561t__unsafe_ptr=0;
  uint64_t __t5561t__dat__pos=0;
  uint64_t __t5561t__dat__length=0;
  char __t5561t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5562t=0;
  char* __t5563t__unsafe_ptr=0;
  char __t5565t=0;
  char* __t5566t__unsafe_ptr=0;
  uint64_t __t5566t__dat__pos=0;
  uint64_t __t5566t__dat__length=0;
  char __t5566t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5568t__=0;
  char __t5569t__=0;
  uint64_t __t5570t__=0;
  uint64_t __t5571t____t5515t=0;
  uint64_t __t5571t____t5517t__=0;
  uint64_t __t5572t=0;
  uint64_t __t5573t__=0;
  char __t5575t__=0;
  char should_fail=0;
  char* __t5576t__unsafe_ptr=0;
  uint64_t __t5576t__dat__pos=0;
  uint64_t __t5576t__dat__length=0;
  char __t5576t__dat__first=0;
  char* __t5577t__unsafe_ptr=0;
  uint64_t __t5577t__dat__pos=0;
  uint64_t __t5577t__dat__length=0;
  char __t5577t__dat__first=0;
  char __t5578t__=0;
  char __t5579t__=0;
  uint64_t __t5580t=0;
  uint64_t __t5581t__=0;
  int64_t __t5582t__=0;
  uint64_t __t5584t=0;
  char __t5585t__=0;
  const char* __t5599t__value=0;
  const char* __t5599t____t437t=0;
  const char* __t5589t__value=0;
  const char* __t5589t____t437t=0;
  const char* __t5594t__value=0;
  const char* __t5594t____t437t=0;
  uint64_t __t5605t__value=0;
  const char* __t5605t____t443t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1675t(__t5519t,&__t5520t__unsafe_ptr,&__t5520t__dat__pos,&__t5520t__dat__length,&__t5520t__dat__first);
  test_root__unsafe_ptr=__t5520t__unsafe_ptr;
  test_root__dat__pos=__t5520t__dat__pos;
  test_root__dat__length=__t5520t__dat__length;
  test_root__dat__first=__t5520t__dat__first;
  colors__t474t(&__t5521t__initialized);
  colors__initialized=__t5521t__initialized;
  __t5523t=128;
  __t_errcode=alloc__t1089t(__t5523t,&__t5524t__unsafe_ptr,&__t5524t__unsafe_size,&__t5524t__unsafe_offset,&__t5524t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1211t(&__t5524t__unsafe_ptr,&__t5524t__unsafe_size,&__t5524t__unsafe_offset,&__t5524t__unsafe_align,&__t5526t__buf__unsafe_ptr,&__t5526t__buf__unsafe_size,&__t5526t__buf__unsafe_offset,&__t5526t__buf__unsafe_align,&__t5526t__pos);
  __t5527t__buf__unsafe_ptr=__t5526t__buf__unsafe_ptr;
  __t5527t__buf__unsafe_size=__t5526t__buf__unsafe_size;
  __t5527t__buf__unsafe_offset=__t5526t__buf__unsafe_offset;
  __t5527t__buf__unsafe_align=__t5526t__buf__unsafe_align;
  __t5527t__pos=__t5526t__pos;
  CHARS__buf__unsafe_ptr=__t5527t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5527t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5527t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5527t__buf__unsafe_align;
  CHARS__pos=__t5527t__pos;
  __t_complain=arg_after__t4394t(__t5529t,&__t5530t__unsafe_ptr,&__t5530t__dat__pos,&__t5530t__dat__length,&__t5530t__dat__first);
  __t5528t=__t_complain;
  if(__t_complain){
  goto __t5528t__label;
  }
  preferred_backend__unsafe_ptr=__t5530t__unsafe_ptr;
  preferred_backend__dat__pos=__t5530t__dat__pos;
  preferred_backend__dat__length=__t5530t__dat__length;
  preferred_backend__dat__first=__t5530t__dat__first;
  __t5528t__label:__t5528t=__t5528t==0;
  if(__t5528t){
  __t_errcode=add__t2993t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5531t,preferred_backend__unsafe_ptr,preferred_backend__dat__pos,preferred_backend__dat__length,preferred_backend__dat__first,&__t5532t__unsafe_ptr,&__t5532t__dat__pos,&__t5532t__dat__length,&__t5532t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2948t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5532t__unsafe_ptr,__t5532t__dat__pos,__t5532t__dat__length,__t5532t__dat__first,__t5533t,&__t5534t__unsafe_ptr,&__t5534t__dat__pos,&__t5534t__dat__length,&__t5534t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5534t__unsafe_ptr;
  command_base__dat__pos=__t5534t__dat__pos;
  command_base__dat__length=__t5534t__dat__length;
  command_base__dat__first=__t5534t__dat__first;
  }
  else{
  __t_errcode=copy__t1756t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5540t,&__t5541t__unsafe_ptr,&__t5541t__dat__pos,&__t5541t__dat__length,&__t5541t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5541t__unsafe_ptr;
  command_base__dat__pos=__t5541t__dat__pos;
  command_base__dat__length=__t5541t__dat__length;
  command_base__dat__first=__t5541t__dat__first;
  }
  __t5542t=0;
  __t5543t=__t5542t;
  counter=__t5543t;
  __t5544t=0;
  __t5545t=__t5544t;
  failures=__t5545t;
  __t_errcode=open__t5235t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5547t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5546t=0-1;
  while(1){
  __t5546t=__t5546t+1;
  __t_complain=mutget__t5318t(&__t5547t__unsafe_ptr,__t5546t,&__t5550t__unsafe_ptr,&__t5550t__dat__pos,&__t5550t__dat__length,&__t5550t__dat__first);
  __t5549t=__t_complain;
  if(__t_complain){
  goto __t5549t__label;
  }
  path__unsafe_ptr=__t5550t__unsafe_ptr;
  path__dat__pos=__t5550t__dat__pos;
  path__dat__length=__t5550t__dat__length;
  path__dat__first=__t5550t__dat__first;
  __t5549t__label:__t5549t=__t5549t==0;
  if(!__t5549t){
  break;
  }
  eq__t1829t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5551t,&__t5552t__);
  if(!__t5552t__){
  __t_errcode=is_dir__t5162t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5553t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5553t__,&__t5554t__);
  __t5555t=__t5554t__;
  }
  else{
  __t5555t=0;
  not__t42t(__t5555t,&__t5556t__);
  __t5555t=__t5556t__;
  }
  if(__t5555t){
  continue;
  }
  reuse__t5512t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5557t__);
  __t_errcode=add__t2903t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5559t__unsafe_ptr,&__t5559t__dat__pos,&__t5559t__dat__length,&__t5559t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2948t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5559t__unsafe_ptr,__t5559t__dat__pos,__t5559t__dat__length,__t5559t__dat__first,__t5560t,&__t5561t__unsafe_ptr,&__t5561t__dat__pos,&__t5561t__dat__length,&__t5561t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5561t__unsafe_ptr;
  dir_path__dat__pos=__t5561t__dat__pos;
  dir_path__dat__length=__t5561t__dat__length;
  dir_path__dat__first=__t5561t__dat__first;
  __t_errcode=open__t5235t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5563t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5562t=0-1;
  while(1){
  __t5562t=__t5562t+1;
  __t_complain=mutget__t5318t(&__t5563t__unsafe_ptr,__t5562t,&__t5566t__unsafe_ptr,&__t5566t__dat__pos,&__t5566t__dat__length,&__t5566t__dat__first);
  __t5565t=__t_complain;
  if(__t_complain){
  goto __t5565t__label;
  }
  entry__unsafe_ptr=__t5566t__unsafe_ptr;
  entry__dat__pos=__t5566t__dat__pos;
  entry__dat__length=__t5566t__dat__length;
  entry__dat__first=__t5566t__dat__first;
  __t5565t__label:__t5565t=__t5565t==0;
  if(!__t5565t){
  break;
  }
  __t_errcode=ends_with__t1997t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5567t,&__t5568t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5568t__,&__t5569t__);
  if(__t5569t__){
  continue;
  }
  reuse__t5512t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5570t__);
  __t5572t=1;
  add__t188t(counter,__t5572t,&__t5573t__);
  counter=__t5573t__;
  contains__t2083t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5574t,&__t5575t__);
  should_fail=__t5575t__;
  __t_errcode=add__t2903t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5576t__unsafe_ptr,&__t5576t__dat__pos,&__t5576t__dat__length,&__t5576t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2903t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5576t__unsafe_ptr,__t5576t__dat__pos,__t5576t__dat__length,__t5576t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5577t__unsafe_ptr,&__t5577t__dat__pos,&__t5577t__dat__length,&__t5577t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5456t(colors__initialized,__t5577t__unsafe_ptr,__t5577t__dat__pos,__t5577t__dat__length,__t5577t__dat__first,should_fail,&__t5578t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5578t__,&__t5579t__);
  if(__t5579t__){
  __t5580t=1;
  add__t188t(failures,__t5580t,&__t5581t__);
  failures=__t5581t__;
  }
  __t5571t____t5515t=0;
  sub__t409t(__t5570t__,__t5571t____t5515t,&__t5571t____t5517t__);
  CHARS__pos=__t5571t____t5517t__;
  }
  __t5558t____t5515t=0;
  sub__t409t(__t5557t__,__t5558t____t5515t,&__t5558t____t5517t__);
  CHARS__pos=__t5558t____t5517t__;
  closedir__t5225t(__t5563t__unsafe_ptr);
  }
  stdout_to_err__t5432t(&__t5582t__);
  __t5584t=0;
  eq__t134t(failures,__t5584t,&__t5585t__);
  if(__t5585t__){
  set__t484t(colors__initialized);
  nn__t435t(__t5588t,&__t5589t__value,&__t5589t____t437t);
  print__t444t(__t5589t__value,__t5589t____t437t);
  set__t600t(colors__initialized);
  nn__t435t(__t5593t,&__t5594t__value,&__t5594t____t437t);
  print__t444t(__t5594t__value,__t5594t____t437t);
  }
  else{
  set__t480t(colors__initialized);
  nn__t435t(__t5598t,&__t5599t__value,&__t5599t____t437t);
  print__t444t(__t5599t__value,__t5599t____t437t);
  set__t600t(colors__initialized);
  print__t457t(failures,__t5603t);
  }
  nn__t442t(counter,&__t5605t__value,&__t5605t____t443t);
  print__t457t(__t5605t__value,__t5605t____t443t);
  print__t446t(__t5607t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:restore_stdout__t5431t(__t5582t__);
  closedir__t5225t(__t5547t__unsafe_ptr);
  free__t811t(&__t5524t__unsafe_ptr);
  if(__t5521t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5609t() {
  char __t5612t=0;
  char __t5614t__=0;
  int64_t __t5615t=0;
  const char* __t5616t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t424t();
  __t_complain=_main__t5518t();
  __t5612t=__t_complain;
  if(__t_complain){
  goto __t5612t__label;
  }
  __t5612t__label:__t5612t=__t5612t==0;
  not__t42t(__t5612t,&__t5614t__);
  if(__t5614t__){
  __t5615t=__t_complain;
  cstr__t4245t(__t5615t,&__t5616t__);
  print__t446t(__t5616t__);
  __t_errcode=65;
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
                    return main__t5609t();
                }