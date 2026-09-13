#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5366t="_fail_";
const char* const __t431t="";
const char* const __t5202t="failure";
const char* const __t5318t="./tests/passing/";
const char* const __t5343t="..";
const char* const __t5177t="[";
const char* const __t5276t="completed";
const char* const __t5399t=" tests";
const char* const __t5385t="no errors across ";
const char* const __t5266t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t443t="\n";
const char* const __t5390t="FAILED ";
const char* const __t5185t="V";
const char* const __t5359t=".s";
const char* const __t5380t="PASSING ";
const char* const __t5239t=" |- ";
const char* const __t5182t="success";
const char* const __t5352t="/";
const char* const __t5192t="] ";
const char* const __t5205t="X";
const char* const __t5332t="./smoll --cleanup ";
const char* const __t5395t=" out of ";
static const char* __t_all_errcodes[60] = {"noerr",
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1544t(char** __t5410t, uint64_t* __t5411t, uint32_t* __t5412t, uint32_t* __t5413t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5410t=unsafe_ptr;
  *__t5411t=unsafe_size;
  *__t5412t=unsafe_offset;
  *__t5413t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5414t) {
  *__t5414t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5415t) {
  int value=0;
  *__t5415t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5416t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5416t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5417t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5417t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5418t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5418t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5419t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5419t=z;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t5420t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5420t=z;
}

static inline __attribute__((always_inline)) void nat__t688t(uint32_t x, uint64_t* __t5421t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5421t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5422t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5422t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5423t) {
  *__t5423t=to;
}

static inline __attribute__((always_inline)) void add__t770t(char* allocated, uint64_t offset, char** __t5424t) {
  char* element=0;
  char* __t771t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t771t__);
  goto __t_return;
  __t_return:
  *__t5424t=__t771t__;
}

static inline __attribute__((always_inline)) int get__t1111t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5425t) {
  int __t1112t=0;
  char __t1113t__=0;
  uint64_t __t1114t__=0;
  uint64_t __t1115t__=0;
  uint64_t __t1116t__=0;
  uint64_t __t1117t__=0;
  char* __t1118t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1113t__);
  if(__t1113t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t688t(buffer__unsafe_align,&__t1114t__);
  mul__t212t(i,__t1114t__,&__t1115t__);
  nat__t688t(buffer__unsafe_offset,&__t1116t__);
  add__t188t(__t1115t__,__t1116t__,&__t1117t__);
  add__t770t(buffer__unsafe_ptr,__t1117t__,&__t1118t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5425t=__t1118t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1569t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5426t, uint64_t* __t5427t, uint64_t* __t5428t, char* __t5429t) {
  goto __t_return;
  __t_return:
  *__t5426t=unsafe_ptr;
  *__t5427t=dat__pos;
  *__t5428t=dat__length;
  *__t5429t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1573t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5430t, uint64_t* __t5431t, uint64_t* __t5432t, char* __t5433t) {
  char* unsafe_ptr=0;
  uint64_t __t1574t__=0;
  uint64_t __t1575t=0;
  char __t1576t__=0;
  uint64_t __t1577t__=0;
  uint64_t __t1578t=0;
  char __t1579t__=0;
  char* __t1580t__unsafe_ptr=0;
  uint64_t __t1580t__dat__pos=0;
  uint64_t __t1580t__dat__length=0;
  char __t1580t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t688t(buf__unsafe_align,&__t1574t__);
  __t1575t=1;
  neq__t158t(__t1574t__,__t1575t,&__t1576t__);
  if(__t1576t__){
  __t_errcode=21;
  goto __t_failure;
  }
  nat__t688t(buf__unsafe_offset,&__t1577t__);
  __t1578t=0;
  neq__t158t(__t1577t__,__t1578t,&__t1579t__);
  if(__t1579t__){
  __t_errcode=22;
  goto __t_failure;
  }
  str__t1569t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1580t__unsafe_ptr,&__t1580t__dat__pos,&__t1580t__dat__length,&__t1580t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5430t=__t1580t__unsafe_ptr;
  *__t5431t=__t1580t__dat__pos;
  *__t5432t=__t1580t__dat__length;
  *__t5433t=__t1580t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1607t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5434t, uint64_t* __t5435t, uint64_t* __t5436t, char* __t5437t) {
  uint64_t __t1608t=0;
  char __t1609t__=0;
  char* __t1611t__=0;
  char __t1612t__value=0;
  char first=0;
  char* __t1613t__unsafe_ptr=0;
  uint64_t __t1613t__dat__pos=0;
  uint64_t __t1613t__dat__length=0;
  char __t1613t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1608t=0;
  neq__t158t(length,__t1608t,&__t1609t__);
  if(__t1609t__){
  __t_errcode=get__t1111t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1611t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1611t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1612t__value,__t1611t__,1);
  first=__t1612t__value;
  }
  __t_errcode=str__t1573t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1613t__unsafe_ptr,&__t1613t__dat__pos,&__t1613t__dat__length,&__t1613t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5434t=__t1613t__unsafe_ptr;
  *__t5435t=__t1613t__dat__pos;
  *__t5436t=__t1613t__dat__length;
  *__t5437t=__t1613t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1629t(const char* c, char** __t5438t, uint64_t* __t5439t, uint64_t* __t5440t, char* __t5441t) {
  char* __t1630t__unsafe_ptr=0;
  uint64_t __t1630t__unsafe_size=0;
  uint32_t __t1630t__unsafe_offset=0;
  uint32_t __t1630t__unsafe_align=0;
  char* __t1631t__unsafe_ptr=0;
  uint64_t __t1631t__unsafe_size=0;
  uint32_t __t1631t__unsafe_offset=0;
  uint32_t __t1631t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1632t__=0;
  uint64_t length=0;
  uint64_t __t1633t=0;
  uint64_t __t1634t__=0;
  char __t1635t=0;
  uint64_t __t1636t=0;
  char* __t1638t__unsafe_ptr=0;
  uint64_t __t1638t__dat__pos=0;
  uint64_t __t1638t__dat__length=0;
  char __t1638t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1544t(&__t1630t__unsafe_ptr,&__t1630t__unsafe_size,&__t1630t__unsafe_offset,&__t1630t__unsafe_align);
  __t1631t__unsafe_ptr=__t1630t__unsafe_ptr;
  __t1631t__unsafe_size=__t1630t__unsafe_size;
  __t1631t__unsafe_offset=__t1630t__unsafe_offset;
  __t1631t__unsafe_align=__t1630t__unsafe_align;
  buf__unsafe_ptr=__t1631t__unsafe_ptr;
  buf__unsafe_size=__t1631t__unsafe_size;
  buf__unsafe_offset=__t1631t__unsafe_offset;
  buf__unsafe_align=__t1631t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1632t__);
  buf__unsafe_ptr=__t1632t__;
  if(c){
  length=strlen(c);
  }
  __t1633t=1;
  add__t188t(length,__t1633t,&__t1634t__);
  buf__unsafe_size=__t1634t__;
  __t1636t=0;
  __t_complain=str__t1607t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1636t,length,&__t1638t__unsafe_ptr,&__t1638t__dat__pos,&__t1638t__dat__length,&__t1638t__dat__first);
  __t1635t=__t_complain;
  if(__t_complain){
  goto __t1635t__label;
  }
  ret__unsafe_ptr=__t1638t__unsafe_ptr;
  ret__dat__pos=__t1638t__dat__pos;
  ret__dat__length=__t1638t__dat__length;
  ret__dat__first=__t1638t__dat__first;
  __t1635t__label:__t1635t=__t1635t==0;
  goto __t_return;
  __t_return:
  *__t5438t=ret__unsafe_ptr;
  *__t5439t=ret__dat__pos;
  *__t5440t=ret__dat__length;
  *__t5441t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t468t(char* __t5442t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5442t=supports;
}

static inline __attribute__((always_inline)) void colors__t469t(char* __t5443t) {
  char __t470t__=0;
  char initialized=0;
  supports_ansi__t468t(&__t470t__);
  initialized=__t470t__;
  goto __t_return;
  __t_return:
  *__t5443t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1047t(char** __t5444t, uint64_t* __t5445t, uint32_t* __t5446t, uint32_t* __t5447t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5444t=unsafe_ptr;
  *__t5445t=unsafe_size;
  *__t5446t=unsafe_offset;
  *__t5447t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t768t(char** __t5448t) {
  char* allocated=*__t5448t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5448t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5449t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5449t=z;
}

static inline __attribute__((always_inline)) void zero__t769t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t652t(char* x, char* __t5450t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5450t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5451t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5451t=z;
}

static inline __attribute__((always_inline)) int alloc__t752t(uint64_t bytes, char** __t5452t) {
  char* allocated=0;
  char __t753t__=0;
  char __t754t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t652t(allocated,&__t753t__);
  not__t42t(__t753t__,&__t754t__);
  if(__t754t__){
  __t_errcode=13;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5452t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t891t(char** __t5453t, uint64_t* __t5454t, uint32_t* __t5455t, uint32_t* __t5456t, uint64_t size, char** __t5457t, uint64_t* __t5458t, uint32_t* __t5459t, uint32_t* __t5460t) {
  char* buffer__unsafe_ptr=*__t5453t;
  uint64_t buffer__unsafe_size=*__t5454t;
  uint32_t buffer__unsafe_offset=*__t5455t;
  uint32_t buffer__unsafe_align=*__t5456t;
  int __t892t=0;
  int __t893t=0;
  char __t895t__=0;
  uint64_t __t896t=0;
  char __t897t__=0;
  char __t898t=0;
  uint64_t __t899t=0;
  uint64_t __t900t__=0;
  uint64_t __t901t__=0;
  int __t903t=0;
  uint64_t __t904t=0;
  char __t905t__=0;
  uint64_t __t906t__=0;
  uint64_t __t907t__=0;
  uint64_t bytes=0;
  int __t908t=0;
  uint64_t __t909t=0;
  char __t910t__=0;
  char* __t911t__=0;
  int __t912t=0;
  uint64_t __t913t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t895t__);
  if(__t895t__){
  __t896t=0;
  neq__t158t(size,__t896t,&__t897t__);
  __t898t=__t897t__;
  }
  if(__t898t){
  __t899t=0;
  nat__t688t(buffer__unsafe_align,&__t900t__);
  mul__t212t(__t900t__,size,&__t901t__);
  zero__t769t(buffer__unsafe_ptr,__t899t,__t901t__);
  goto __t_return;
  }
  __t904t=0;
  neq__t158t(buffer__unsafe_size,__t904t,&__t905t__);
  if(__t905t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t688t(buffer__unsafe_align,&__t906t__);
  mul__t212t(__t906t__,size,&__t907t__);
  bytes=__t907t__;
  __t909t=0;
  eq__t134t(bytes,__t909t,&__t910t__);
  if(__t910t__){
  __t_errcode=15;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t752t(bytes,&__t911t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t913t=0;
  zero__t769t(__t911t__,__t913t,bytes);
  buffer__unsafe_ptr=__t911t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t768t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5453t=buffer__unsafe_ptr;
  *__t5454t=buffer__unsafe_size;
  *__t5455t=buffer__unsafe_offset;
  *__t5456t=buffer__unsafe_align;
  *__t5457t=buffer__unsafe_ptr;
  *__t5458t=buffer__unsafe_size;
  *__t5459t=buffer__unsafe_offset;
  *__t5460t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1046t(uint64_t size, char** __t5461t, uint64_t* __t5462t, uint32_t* __t5463t, uint32_t* __t5464t) {
  char* __t1049t__unsafe_ptr=0;
  uint64_t __t1049t__unsafe_size=0;
  uint32_t __t1049t__unsafe_offset=0;
  uint32_t __t1049t__unsafe_align=0;
  char* __t1050t__unsafe_ptr=0;
  uint64_t __t1050t__unsafe_size=0;
  uint32_t __t1050t__unsafe_offset=0;
  uint32_t __t1050t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1047t(&__t1049t__unsafe_ptr,&__t1049t__unsafe_size,&__t1049t__unsafe_offset,&__t1049t__unsafe_align);
  __t_errcode=alloc__t891t(&__t1049t__unsafe_ptr,&__t1049t__unsafe_size,&__t1049t__unsafe_offset,&__t1049t__unsafe_align,size,&__t1050t__unsafe_ptr,&__t1050t__unsafe_size,&__t1050t__unsafe_offset,&__t1050t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t768t(&__t1050t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5461t=__t1050t__unsafe_ptr;
  *__t5462t=__t1050t__unsafe_size;
  *__t5463t=__t1050t__unsafe_offset;
  *__t5464t=__t1050t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1162t(char** __t5465t, uint64_t* __t5466t, uint32_t* __t5467t, uint32_t* __t5468t, uint64_t _pos, char** __t5469t, uint64_t* __t5470t, uint32_t* __t5471t, uint32_t* __t5472t, uint64_t* __t5473t) {
  char* buf__unsafe_ptr=*__t5465t;
  uint64_t buf__unsafe_size=*__t5466t;
  uint32_t buf__unsafe_offset=*__t5467t;
  uint32_t buf__unsafe_align=*__t5468t;
  uint64_t __t1163t=0;
  uint64_t pos=0;
  __t1163t=_pos;
  pos=__t1163t;
  goto __t_return;
  __t_return:
  *__t5465t=buf__unsafe_ptr;
  *__t5466t=buf__unsafe_size;
  *__t5467t=buf__unsafe_offset;
  *__t5468t=buf__unsafe_align;
  *__t5469t=buf__unsafe_ptr;
  *__t5470t=buf__unsafe_size;
  *__t5471t=buf__unsafe_offset;
  *__t5472t=buf__unsafe_align;
  *__t5473t=pos;
}

static inline __attribute__((always_inline)) void arena__t1165t(char** __t5474t, uint64_t* __t5475t, uint32_t* __t5476t, uint32_t* __t5477t, char** __t5478t, uint64_t* __t5479t, uint32_t* __t5480t, uint32_t* __t5481t, uint64_t* __t5482t) {
  char* buf__unsafe_ptr=*__t5474t;
  uint64_t buf__unsafe_size=*__t5475t;
  uint32_t buf__unsafe_offset=*__t5476t;
  uint32_t buf__unsafe_align=*__t5477t;
  uint64_t __t1166t=0;
  char* __t1167t__buf__unsafe_ptr=0;
  uint64_t __t1167t__buf__unsafe_size=0;
  uint32_t __t1167t__buf__unsafe_offset=0;
  uint32_t __t1167t__buf__unsafe_align=0;
  uint64_t __t1167t__pos=0;
  __t1166t=0;
  arena__t1162t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1166t,&__t1167t__buf__unsafe_ptr,&__t1167t__buf__unsafe_size,&__t1167t__buf__unsafe_offset,&__t1167t__buf__unsafe_align,&__t1167t__pos);
  goto __t_return;
  __t_return:
  *__t5474t=buf__unsafe_ptr;
  *__t5475t=buf__unsafe_size;
  *__t5476t=buf__unsafe_offset;
  *__t5477t=buf__unsafe_align;
  *__t5478t=__t1167t__buf__unsafe_ptr;
  *__t5479t=__t1167t__buf__unsafe_size;
  *__t5480t=__t1167t__buf__unsafe_offset;
  *__t5481t=__t1167t__buf__unsafe_align;
  *__t5482t=__t1167t__pos;
}

static inline __attribute__((always_inline)) void len__t1119t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5483t) {
  goto __t_return;
  __t_return:
  *__t5483t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t5484t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5484t=z;
}

static inline __attribute__((always_inline)) void allocated__t1169t(char** __t5485t, uint64_t* __t5486t, uint32_t* __t5487t, uint32_t* __t5488t, uint64_t pos, char** __t5489t, uint64_t* __t5490t, uint32_t* __t5491t, uint32_t* __t5492t, uint64_t* __t5493t) {
  char* buf__unsafe_ptr=*__t5485t;
  uint64_t buf__unsafe_size=*__t5486t;
  uint32_t buf__unsafe_offset=*__t5487t;
  uint32_t buf__unsafe_align=*__t5488t;
  goto __t_return;
  __t_return:
  *__t5485t=buf__unsafe_ptr;
  *__t5486t=buf__unsafe_size;
  *__t5487t=buf__unsafe_offset;
  *__t5488t=buf__unsafe_align;
  *__t5489t=buf__unsafe_ptr;
  *__t5490t=buf__unsafe_size;
  *__t5491t=buf__unsafe_offset;
  *__t5492t=buf__unsafe_align;
  *__t5493t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1244t(char** __t5494t, uint64_t* __t5495t, uint32_t* __t5496t, uint32_t* __t5497t, uint64_t* __t5498t, uint64_t length, char** __t5499t, uint64_t* __t5500t, uint32_t* __t5501t, uint32_t* __t5502t, uint64_t* __t5503t) {
  char* allocator__buf__unsafe_ptr=*__t5494t;
  uint64_t allocator__buf__unsafe_size=*__t5495t;
  uint32_t allocator__buf__unsafe_offset=*__t5496t;
  uint32_t allocator__buf__unsafe_align=*__t5497t;
  uint64_t allocator__pos=*__t5498t;
  int __t1245t=0;
  uint64_t __t1246t__=0;
  uint64_t next_pos=0;
  uint64_t __t1247t__=0;
  char __t1248t__=0;
  uint64_t __t1249t=0;
  uint64_t __t1250t__=0;
  uint64_t pos=0;
  char* __t1251t__buf__unsafe_ptr=0;
  uint64_t __t1251t__buf__unsafe_size=0;
  uint32_t __t1251t__buf__unsafe_offset=0;
  uint32_t __t1251t__buf__unsafe_align=0;
  uint64_t __t1251t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1246t__);
  next_pos=__t1246t__;
  len__t1119t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1247t__);
  gt__t325t(next_pos,__t1247t__,&__t1248t__);
  if(__t1248t__){
  __t_errcode=19;
  goto __t_failure;
  }
  __t1249t=0;
  add__t188t(allocator__pos,__t1249t,&__t1250t__);
  pos=__t1250t__;
  allocator__pos=next_pos;
  allocated__t1169t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1251t__buf__unsafe_ptr,&__t1251t__buf__unsafe_size,&__t1251t__buf__unsafe_offset,&__t1251t__buf__unsafe_align,&__t1251t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5494t=allocator__buf__unsafe_ptr;
  *__t5495t=allocator__buf__unsafe_size;
  *__t5496t=allocator__buf__unsafe_offset;
  *__t5497t=allocator__buf__unsafe_align;
  *__t5498t=allocator__pos;
  *__t5499t=__t1251t__buf__unsafe_ptr;
  *__t5500t=__t1251t__buf__unsafe_size;
  *__t5501t=__t1251t__buf__unsafe_offset;
  *__t5502t=__t1251t__buf__unsafe_align;
  *__t5503t=__t1251t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1678t(char** __t5504t, uint64_t* __t5505t, uint32_t* __t5506t, uint32_t* __t5507t, uint64_t* __t5508t, const char* _other, char** __t5509t, uint64_t* __t5510t, uint64_t* __t5511t, char* __t5512t) {
  char* CHARS__buf__unsafe_ptr=*__t5504t;
  uint64_t CHARS__buf__unsafe_size=*__t5505t;
  uint32_t CHARS__buf__unsafe_offset=*__t5506t;
  uint32_t CHARS__buf__unsafe_align=*__t5507t;
  uint64_t CHARS__pos=*__t5508t;
  char* __t1679t__unsafe_ptr=0;
  uint64_t __t1679t__dat__pos=0;
  uint64_t __t1679t__dat__length=0;
  char __t1679t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1680t__buf__unsafe_ptr=0;
  uint64_t __t1680t__buf__unsafe_size=0;
  uint32_t __t1680t__buf__unsafe_offset=0;
  uint32_t __t1680t__buf__unsafe_align=0;
  uint64_t __t1680t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1681t=0;
  char* __t1682t__unsafe_ptr=0;
  uint64_t __t1682t__dat__pos=0;
  uint64_t __t1682t__dat__length=0;
  char __t1682t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1629t(_other,&__t1679t__unsafe_ptr,&__t1679t__dat__pos,&__t1679t__dat__length,&__t1679t__dat__first);
  other__unsafe_ptr=__t1679t__unsafe_ptr;
  other__dat__pos=__t1679t__dat__pos;
  other__dat__length=__t1679t__dat__length;
  other__dat__first=__t1679t__dat__first;
  __t_errcode=alloc__t1244t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1680t__buf__unsafe_ptr,&__t1680t__buf__unsafe_size,&__t1680t__buf__unsafe_offset,&__t1680t__buf__unsafe_align,&__t1680t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1680t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1680t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1680t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1680t__buf__unsafe_align;
  surface__pos=__t1680t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1573t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1682t__unsafe_ptr,&__t1682t__dat__pos,&__t1682t__dat__length,&__t1682t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5504t=CHARS__buf__unsafe_ptr;
  *__t5505t=CHARS__buf__unsafe_size;
  *__t5506t=CHARS__buf__unsafe_offset;
  *__t5507t=CHARS__buf__unsafe_align;
  *__t5508t=CHARS__pos;
  *__t5509t=__t1682t__unsafe_ptr;
  *__t5510t=__t1682t__dat__pos;
  *__t5511t=__t1682t__dat__length;
  *__t5512t=__t1682t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1120t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1645t(char** __t5513t, uint64_t* __t5514t, uint32_t* __t5515t, uint32_t* __t5516t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5513t=unsafe_ptr;
  *__t5514t=unsafe_size;
  *__t5515t=unsafe_offset;
  *__t5516t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t1639t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5517t) {
  goto __t_return;
  __t_return:
  *__t5517t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1703t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5518t, uint64_t* __t5519t, uint64_t* __t5520t, char* __t5521t) {
  char* __t1704t__unsafe_ptr=0;
  uint64_t __t1704t__unsafe_size=0;
  uint32_t __t1704t__unsafe_offset=0;
  uint32_t __t1704t__unsafe_align=0;
  uint64_t __t1705t=0;
  uint64_t __t1706t__=0;
  uint64_t __t1707t__=0;
  char* __t1708t__unsafe_ptr=0;
  uint64_t __t1708t__unsafe_size=0;
  uint32_t __t1708t__unsafe_offset=0;
  uint32_t __t1708t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t1710t=0;
  uint64_t __t1711t=0;
  char* __t1712t__unsafe_ptr=0;
  uint64_t __t1712t__dat__pos=0;
  uint64_t __t1712t__dat__length=0;
  char __t1712t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1645t(&__t1704t__unsafe_ptr,&__t1704t__unsafe_size,&__t1704t__unsafe_offset,&__t1704t__unsafe_align);
  __t1705t=1;
  len__t1639t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1706t__);
  add__t188t(__t1705t,__t1706t__,&__t1707t__);
  __t_errcode=alloc__t891t(&__t1704t__unsafe_ptr,&__t1704t__unsafe_size,&__t1704t__unsafe_offset,&__t1704t__unsafe_align,__t1707t__,&__t1708t__unsafe_ptr,&__t1708t__unsafe_size,&__t1708t__unsafe_offset,&__t1708t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1708t__unsafe_ptr;
  buf__unsafe_size=__t1708t__unsafe_size;
  buf__unsafe_offset=__t1708t__unsafe_offset;
  buf__unsafe_align=__t1708t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1711t=0;
  __t_errcode=str__t1573t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1711t,other__dat__length,other__dat__first,&__t1712t__unsafe_ptr,&__t1712t__dat__pos,&__t1712t__dat__length,&__t1712t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t768t(&__t1712t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5518t=__t1712t__unsafe_ptr;
  *__t5519t=__t1712t__dat__pos;
  *__t5520t=__t1712t__dat__length;
  *__t5521t=__t1712t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1727t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5522t, char** __t5523t, uint64_t* __t5524t, uint64_t* __t5525t, char* __t5526t) {
  int __t1728t=0;
  char* __t1730t__unsafe_ptr=0;
  uint64_t __t1730t__dat__pos=0;
  uint64_t __t1730t__dat__length=0;
  char __t1730t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1732t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1120t();
  __t_errcode=copy_null_terminated__t1703t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1730t__unsafe_ptr,&__t1730t__dat__pos,&__t1730t__dat__length,&__t1730t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1730t__unsafe_ptr;
  str__dat__pos=__t1730t__dat__pos;
  str__dat__length=__t1730t__dat__length;
  str__dat__first=__t1730t__dat__first;
  add__t770t(str__unsafe_ptr,str__dat__pos,&__t1732t__);
  _ret=__t1732t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t768t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5522t=cstr;
  *__t5523t=str__unsafe_ptr;
  *__t5524t=str__dat__pos;
  *__t5525t=str__dat__length;
  *__t5526t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1737t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5527t) {
  goto __t_return;
  __t_return:
  *__t5527t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t5023t(char* unsafe_ptr) {
  int __t5025t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t5026t(const char* path, char** __t5528t) {
  int __t5028t=0;
  char* unsafe_ptr=0;
  char __t5030t__=0;
  char __t5031t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t652t(unsafe_ptr,&__t5030t__);
  not__t42t(__t5030t__,&__t5031t__);
  if(__t5031t__){
  __t_errcode=45;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5023t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5528t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t5033t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t5529t) {
  const char* __t5034t__cstr=0;
  char* __t5034t__str__unsafe_ptr=0;
  uint64_t __t5034t__str__dat__pos=0;
  uint64_t __t5034t__str__dat__length=0;
  char __t5034t__str__dat__first=0;
  const char* __t5036t__=0;
  char* __t5037t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1727t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5034t__cstr,&__t5034t__str__unsafe_ptr,&__t5034t__str__dat__pos,&__t5034t__str__dat__length,&__t5034t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1737t(__t5034t__cstr,__t5034t__str__unsafe_ptr,__t5034t__str__dat__pos,__t5034t__str__dat__length,__t5034t__str__dat__first,&__t5036t__);
  __t_errcode=open__t5026t(__t5036t__,&__t5037t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5023t(__t5037t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5529t=__t5037t__unsafe_ptr;
  
  __t_skip_returns:free__t768t(&__t5034t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t5045t(char** __t5530t, const char** __t5531t) {
  char* f__unsafe_ptr=*__t5530t;
  char __t5046t__=0;
  char __t5047t__=0;
  char* de=0;
  char __t5048t__=0;
  char __t5049t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t652t(f__unsafe_ptr,&__t5046t__);
  not__t42t(__t5046t__,&__t5047t__);
  if(__t5047t__){
  __t_errcode=56;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t652t(de,&__t5048t__);
  not__t42t(__t5048t__,&__t5049t__);
  if(__t5049t__){
  __t_errcode=57;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5530t=f__unsafe_ptr;
  *__t5531t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t5050t(char** __t5532t, char** __t5533t, uint64_t* __t5534t, uint64_t* __t5535t, char* __t5536t) {
  char* f__unsafe_ptr=*__t5532t;
  const char* __t5051t__=0;
  char* __t5052t__unsafe_ptr=0;
  uint64_t __t5052t__dat__pos=0;
  uint64_t __t5052t__dat__length=0;
  char __t5052t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t5045t(&f__unsafe_ptr,&__t5051t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1629t(__t5051t__,&__t5052t__unsafe_ptr,&__t5052t__dat__pos,&__t5052t__dat__length,&__t5052t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5532t=f__unsafe_ptr;
  *__t5533t=__t5052t__unsafe_ptr;
  *__t5534t=__t5052t__dat__pos;
  *__t5535t=__t5052t__dat__length;
  *__t5536t=__t5052t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t5116t(char** __t5537t, uint64_t __t_anon1, char** __t5538t, uint64_t* __t5539t, uint64_t* __t5540t, char* __t5541t) {
  char* data__unsafe_ptr=*__t5537t;
  char* __t5117t__unsafe_ptr=0;
  uint64_t __t5117t__dat__pos=0;
  uint64_t __t5117t__dat__length=0;
  char __t5117t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t5050t(&data__unsafe_ptr,&__t5117t__unsafe_ptr,&__t5117t__dat__pos,&__t5117t__dat__length,&__t5117t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5537t=data__unsafe_ptr;
  *__t5538t=__t5117t__unsafe_ptr;
  *__t5539t=__t5117t__dat__pos;
  *__t5540t=__t5117t__dat__length;
  *__t5541t=__t5117t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1641t(const char* s, char* __t5542t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t5542t=c;
}

static inline __attribute__((always_inline)) void neq__t1643t(char x, char y, char* __t5543t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5543t=z;
}

static inline __attribute__((always_inline)) void eq__t1744t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5544t) {
  uint64_t __t1745t__=0;
  uint64_t n=0;
  uint64_t __t1746t__=0;
  char __t1747t__=0;
  char __t1748t=0;
  char __t1749t__=0;
  char __t1750t=0;
  char z=0;
  len__t1639t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1745t__);
  n=__t1745t__;
  len__t1639t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1746t__);
  neq__t158t(n,__t1746t__,&__t1747t__);
  if(__t1747t__){
  __t1748t=0;
  goto __t_return;
  }
  neq__t1643t(x__dat__first,y__dat__first,&__t1749t__);
  if(__t1749t__){
  __t1750t=0;
  __t1748t=__t1750t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1748t=z;
  goto __t_return;
  __t_return:
  *__t5544t=__t1748t;
}

void eq__t1751t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t5545t) {
  char __t1752t__=0;
  char __t1753t__=0;
  char __t1754t=0;
  char* __t1755t__unsafe_ptr=0;
  uint64_t __t1755t__dat__pos=0;
  uint64_t __t1755t__dat__length=0;
  char __t1755t__dat__first=0;
  char __t1756t__=0;
  char__t1641t(y,&__t1752t__);
  neq__t1643t(x__dat__first,__t1752t__,&__t1753t__);
  if(__t1753t__){
  __t1754t=0;
  goto __t_return;
  }
  str__t1629t(y,&__t1755t__unsafe_ptr,&__t1755t__dat__pos,&__t1755t__dat__length,&__t1755t__dat__first);
  eq__t1744t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1755t__unsafe_ptr,__t1755t__dat__pos,__t1755t__dat__length,__t1755t__dat__first,&__t1756t__);
  __t1754t=__t1756t__;
  goto __t_return;
  __t_return:
  *__t5545t=__t1754t;
}

int unsafe_temp__t1713t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5546t, char** __t5547t, uint64_t* __t5548t, uint64_t* __t5549t, char* __t5550t) {
  int __t1714t=0;
  char* __t1715t__unsafe_ptr=0;
  uint64_t __t1715t__unsafe_size=0;
  uint32_t __t1715t__unsafe_offset=0;
  uint32_t __t1715t__unsafe_align=0;
  uint64_t __t1716t=0;
  uint64_t __t1717t__=0;
  uint64_t __t1718t__=0;
  char* __t1719t__unsafe_ptr=0;
  uint64_t __t1719t__unsafe_size=0;
  uint32_t __t1719t__unsafe_offset=0;
  uint32_t __t1719t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1721t=0;
  char __t1722t__=0;
  char first_character=0;
  uint64_t __t1723t=0;
  char* __t1724t__unsafe_ptr=0;
  uint64_t __t1724t__dat__pos=0;
  uint64_t __t1724t__dat__length=0;
  char __t1724t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1725t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1645t(&__t1715t__unsafe_ptr,&__t1715t__unsafe_size,&__t1715t__unsafe_offset,&__t1715t__unsafe_align);
  __t1716t=1;
  add__t188t(__t1716t,other__dat__length,&__t1717t__);
  add__t188t(__t1717t__,prefix__dat__length,&__t1718t__);
  __t_errcode=alloc__t891t(&__t1715t__unsafe_ptr,&__t1715t__unsafe_size,&__t1715t__unsafe_offset,&__t1715t__unsafe_align,__t1718t__,&__t1719t__unsafe_ptr,&__t1719t__unsafe_size,&__t1719t__unsafe_offset,&__t1719t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1719t__unsafe_ptr;
  buf__unsafe_size=__t1719t__unsafe_size;
  buf__unsafe_offset=__t1719t__unsafe_offset;
  buf__unsafe_align=__t1719t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1721t=0;
  eq__t134t(prefix__dat__length,__t1721t,&__t1722t__);
  if(__t1722t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1723t=0;
  __t_errcode=str__t1573t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1723t,other__dat__length,first_character,&__t1724t__unsafe_ptr,&__t1724t__dat__pos,&__t1724t__dat__length,&__t1724t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1724t__unsafe_ptr;
  str__dat__pos=__t1724t__dat__pos;
  str__dat__length=__t1724t__dat__length;
  str__dat__first=__t1724t__dat__first;
  add__t770t(str__unsafe_ptr,str__dat__pos,&__t1725t__);
  _ret=__t1725t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t768t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5546t=cstr;
  *__t5547t=str__unsafe_ptr;
  *__t5548t=str__dat__pos;
  *__t5549t=str__dat__length;
  *__t5550t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1736t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5551t) {
  goto __t_return;
  __t_return:
  *__t5551t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t4950t(const char* path, char* __t5552t) {
  int __t4952t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t5552t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t4960t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t5553t) {
  int __t4962t=0;
  const char* __t4963t__cstr=0;
  char* __t4963t__str__unsafe_ptr=0;
  uint64_t __t4963t__str__dat__pos=0;
  uint64_t __t4963t__str__dat__length=0;
  char __t4963t__str__dat__first=0;
  const char* __t4965t__=0;
  char __t4966t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1713t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t4963t__cstr,&__t4963t__str__unsafe_ptr,&__t4963t__str__dat__pos,&__t4963t__str__dat__length,&__t4963t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1736t(__t4963t__cstr,__t4963t__str__unsafe_ptr,__t4963t__str__dat__pos,__t4963t__str__dat__length,__t4963t__str__dat__first,&__t4965t__);
  is_dir__t4950t(__t4965t__,&__t4966t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5553t=__t4966t__;
  
  __t_skip_returns:free__t768t(&__t4963t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t409t(uint64_t x, uint64_t y, uint64_t* __t5554t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5554t=z;
}

static inline __attribute__((always_inline)) void reuse__t5311t(char** __t5555t, uint64_t* __t5556t, uint32_t* __t5557t, uint32_t* __t5558t, uint64_t* __t5559t, uint64_t* __t5560t) {
  char* arn__buf__unsafe_ptr=*__t5555t;
  uint64_t arn__buf__unsafe_size=*__t5556t;
  uint32_t arn__buf__unsafe_offset=*__t5557t;
  uint32_t arn__buf__unsafe_align=*__t5558t;
  uint64_t arn__pos=*__t5559t;
  uint64_t __t5312t=0;
  uint64_t __t5313t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5314t=0;
  uint64_t __t5316t__=0;
  __t5312t=0;
  add__t188t(__t5312t,arn__pos,&__t5313t__);
  tracked_position=__t5313t__;
  goto __t_return;
  __t_return:
  *__t5555t=arn__buf__unsafe_ptr;
  *__t5556t=arn__buf__unsafe_size;
  *__t5557t=arn__buf__unsafe_offset;
  *__t5558t=arn__buf__unsafe_align;
  *__t5559t=arn__pos;
  *__t5560t=tracked_position;
}

static inline __attribute__((always_inline)) void str__t1606t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5561t, uint64_t* __t5562t, uint64_t* __t5563t, char* __t5564t) {
  goto __t_return;
  __t_return:
  *__t5561t=other__unsafe_ptr;
  *__t5562t=other__dat__pos;
  *__t5563t=other__dat__length;
  *__t5564t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5565t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5565t=z;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t5566t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5566t=z;
}

static inline __attribute__((always_inline)) void status__t1174t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5567t, uint64_t* __t5568t, uint32_t* __t5569t, uint32_t* __t5570t, uint64_t* __t5571t) {
  char* __t1175t__unsafe_ptr=0;
  uint64_t __t1175t__unsafe_size=0;
  uint32_t __t1175t__unsafe_offset=0;
  uint32_t __t1175t__unsafe_align=0;
  uint64_t __t1176t=0;
  __t1175t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1175t__unsafe_size=self__buf__unsafe_size;
  __t1175t__unsafe_offset=self__buf__unsafe_offset;
  __t1175t__unsafe_align=self__buf__unsafe_align;
  __t1176t=self__pos;
  goto __t_return;
  __t_return:
  *__t5567t=__t1175t__unsafe_ptr;
  *__t5568t=__t1175t__unsafe_size;
  *__t5569t=__t1175t__unsafe_offset;
  *__t5570t=__t1175t__unsafe_align;
  *__t5571t=__t1176t;
}

static inline __attribute__((always_inline)) int copy__t1673t(char** __t5572t, uint64_t* __t5573t, uint32_t* __t5574t, uint32_t* __t5575t, uint64_t* __t5576t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5577t, uint64_t* __t5578t, uint64_t* __t5579t, char* __t5580t) {
  char* CHARS__buf__unsafe_ptr=*__t5572t;
  uint64_t CHARS__buf__unsafe_size=*__t5573t;
  uint32_t CHARS__buf__unsafe_offset=*__t5574t;
  uint32_t CHARS__buf__unsafe_align=*__t5575t;
  uint64_t CHARS__pos=*__t5576t;
  char* __t1674t__unsafe_ptr=0;
  uint64_t __t1674t__dat__pos=0;
  uint64_t __t1674t__dat__length=0;
  char __t1674t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1675t__buf__unsafe_ptr=0;
  uint64_t __t1675t__buf__unsafe_size=0;
  uint32_t __t1675t__buf__unsafe_offset=0;
  uint32_t __t1675t__buf__unsafe_align=0;
  uint64_t __t1675t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1676t=0;
  char* __t1677t__unsafe_ptr=0;
  uint64_t __t1677t__dat__pos=0;
  uint64_t __t1677t__dat__length=0;
  char __t1677t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1606t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1674t__unsafe_ptr,&__t1674t__dat__pos,&__t1674t__dat__length,&__t1674t__dat__first);
  other__unsafe_ptr=__t1674t__unsafe_ptr;
  other__dat__pos=__t1674t__dat__pos;
  other__dat__length=__t1674t__dat__length;
  other__dat__first=__t1674t__dat__first;
  __t_errcode=alloc__t1244t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1675t__buf__unsafe_ptr,&__t1675t__buf__unsafe_size,&__t1675t__buf__unsafe_offset,&__t1675t__buf__unsafe_align,&__t1675t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1675t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1675t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1675t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1675t__buf__unsafe_align;
  surface__pos=__t1675t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1573t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1677t__unsafe_ptr,&__t1677t__dat__pos,&__t1677t__dat__length,&__t1677t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5572t=CHARS__buf__unsafe_ptr;
  *__t5573t=CHARS__buf__unsafe_size;
  *__t5574t=CHARS__buf__unsafe_offset;
  *__t5575t=CHARS__buf__unsafe_align;
  *__t5576t=CHARS__pos;
  *__t5577t=__t1677t__unsafe_ptr;
  *__t5578t=__t1677t__dat__pos;
  *__t5579t=__t1677t__dat__length;
  *__t5580t=__t1677t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1171t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5581t, uint64_t* __t5582t, uint32_t* __t5583t, uint32_t* __t5584t, uint64_t* __t5585t) {
  char* __t1172t__unsafe_ptr=0;
  uint64_t __t1172t__unsafe_size=0;
  uint32_t __t1172t__unsafe_offset=0;
  uint32_t __t1172t__unsafe_align=0;
  uint64_t __t1173t=0;
  __t1172t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1172t__unsafe_size=self__buf__unsafe_size;
  __t1172t__unsafe_offset=self__buf__unsafe_offset;
  __t1172t__unsafe_align=self__buf__unsafe_align;
  __t1173t=self__pos;
  goto __t_return;
  __t_return:
  *__t5581t=__t1172t__unsafe_ptr;
  *__t5582t=__t1172t__unsafe_size;
  *__t5583t=__t1172t__unsafe_offset;
  *__t5584t=__t1172t__unsafe_align;
  *__t5585t=__t1173t;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t5586t) {
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
  *__t5586t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1625t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5587t, uint64_t* __t5588t, uint64_t* __t5589t, char* __t5590t) {
  uint64_t __t1627t__=0;
  char* __t1628t__unsafe_ptr=0;
  uint64_t __t1628t__dat__pos=0;
  uint64_t __t1628t__dat__length=0;
  char __t1628t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t401t(endpos,pos,&__t1627t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1607t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1627t__,&__t1628t__unsafe_ptr,&__t1628t__dat__pos,&__t1628t__dat__length,&__t1628t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5587t=__t1628t__unsafe_ptr;
  *__t5588t=__t1628t__dat__pos;
  *__t5589t=__t1628t__dat__length;
  *__t5590t=__t1628t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2825t(char** __t5591t, uint64_t* __t5592t, uint32_t* __t5593t, uint32_t* __t5594t, uint64_t* __t5595t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5596t, uint64_t* __t5597t, uint64_t* __t5598t, char* __t5599t) {
  char* CHARS__buf__unsafe_ptr=*__t5591t;
  uint64_t CHARS__buf__unsafe_size=*__t5592t;
  uint32_t CHARS__buf__unsafe_offset=*__t5593t;
  uint32_t CHARS__buf__unsafe_align=*__t5594t;
  uint64_t CHARS__pos=*__t5595t;
  char* __t2826t__unsafe_ptr=0;
  uint64_t __t2826t__dat__pos=0;
  uint64_t __t2826t__dat__length=0;
  char __t2826t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2827t__unsafe_ptr=0;
  uint64_t __t2827t__dat__pos=0;
  uint64_t __t2827t__dat__length=0;
  char __t2827t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2828t__=0;
  uint64_t __t2829t__=0;
  char __t2830t__=0;
  char __t2831t=0;
  uint64_t __t2832t__=0;
  char __t2833t__=0;
  char __t2834t=0;
  uint64_t __t2835t__=0;
  char* __t2836t__buf__unsafe_ptr=0;
  uint64_t __t2836t__buf__unsafe_size=0;
  uint32_t __t2836t__buf__unsafe_offset=0;
  uint32_t __t2836t__buf__unsafe_align=0;
  uint64_t __t2836t__pos=0;
  char* __t2837t____t1175t__unsafe_ptr=0;
  uint64_t __t2837t____t1175t__unsafe_size=0;
  uint32_t __t2837t____t1175t__unsafe_offset=0;
  uint32_t __t2837t____t1175t__unsafe_align=0;
  uint64_t __t2837t____t1176t=0;
  char* __t2838t__buf__unsafe_ptr=0;
  uint64_t __t2838t__buf__unsafe_size=0;
  uint32_t __t2838t__buf__unsafe_offset=0;
  uint32_t __t2838t__buf__unsafe_align=0;
  uint64_t __t2838t__pos=0;
  char* __t2839t__buf__unsafe_ptr=0;
  uint64_t __t2839t__buf__unsafe_size=0;
  uint32_t __t2839t__buf__unsafe_offset=0;
  uint32_t __t2839t__buf__unsafe_align=0;
  uint64_t __t2839t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2840t__unsafe_ptr=0;
  uint64_t __t2840t__dat__pos=0;
  uint64_t __t2840t__dat__length=0;
  char __t2840t__dat__first=0;
  char* __t2841t____t1172t__unsafe_ptr=0;
  uint64_t __t2841t____t1172t__unsafe_size=0;
  uint32_t __t2841t____t1172t__unsafe_offset=0;
  uint32_t __t2841t____t1172t__unsafe_align=0;
  uint64_t __t2841t____t1173t=0;
  uint64_t __t2843t=0;
  uint64_t __t2844t__=0;
  char* __t2845t__unsafe_ptr=0;
  uint64_t __t2845t__dat__pos=0;
  uint64_t __t2845t__dat__length=0;
  char __t2845t__dat__first=0;
  char __t2846t__=0;
  char __t2847t__=0;
  char __t2848t=0;
  uint64_t __t2849t__=0;
  char __t2850t__=0;
  char __t2851t=0;
  uint64_t __t2852t__=0;
  char* __t2854t__unsafe_ptr=0;
  uint64_t __t2854t__dat__pos=0;
  uint64_t __t2854t__dat__length=0;
  char __t2854t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2855t__=0;
  uint64_t __t2856t__=0;
  uint64_t __t2857t__=0;
  char* __t2858t__buf__unsafe_ptr=0;
  uint64_t __t2858t__buf__unsafe_size=0;
  uint32_t __t2858t__buf__unsafe_offset=0;
  uint32_t __t2858t__buf__unsafe_align=0;
  uint64_t __t2858t__pos=0;
  char* __t2859t____t1175t__unsafe_ptr=0;
  uint64_t __t2859t____t1175t__unsafe_size=0;
  uint32_t __t2859t____t1175t__unsafe_offset=0;
  uint32_t __t2859t____t1175t__unsafe_align=0;
  uint64_t __t2859t____t1176t=0;
  char* __t2860t__buf__unsafe_ptr=0;
  uint64_t __t2860t__buf__unsafe_size=0;
  uint32_t __t2860t__buf__unsafe_offset=0;
  uint32_t __t2860t__buf__unsafe_align=0;
  uint64_t __t2860t__pos=0;
  char* __t2861t__buf__unsafe_ptr=0;
  uint64_t __t2861t__buf__unsafe_size=0;
  uint32_t __t2861t__buf__unsafe_offset=0;
  uint32_t __t2861t__buf__unsafe_align=0;
  uint64_t __t2861t__pos=0;
  char* __t2862t__unsafe_ptr=0;
  uint64_t __t2862t__dat__pos=0;
  uint64_t __t2862t__dat__length=0;
  char __t2862t__dat__first=0;
  char* __t2863t__unsafe_ptr=0;
  uint64_t __t2863t__dat__pos=0;
  uint64_t __t2863t__dat__length=0;
  char __t2863t__dat__first=0;
  char __t2864t=0;
  char* __t2865t____t1172t__unsafe_ptr=0;
  uint64_t __t2865t____t1172t__unsafe_size=0;
  uint32_t __t2865t____t1172t__unsafe_offset=0;
  uint32_t __t2865t____t1172t__unsafe_align=0;
  uint64_t __t2865t____t1173t=0;
  uint64_t __t2867t=0;
  uint64_t __t2868t__=0;
  char* __t2869t__unsafe_ptr=0;
  uint64_t __t2869t__dat__pos=0;
  uint64_t __t2869t__dat__length=0;
  char __t2869t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1606t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2826t__unsafe_ptr,&__t2826t__dat__pos,&__t2826t__dat__length,&__t2826t__dat__first);
  s1__unsafe_ptr=__t2826t__unsafe_ptr;
  s1__dat__pos=__t2826t__dat__pos;
  s1__dat__length=__t2826t__dat__length;
  s1__dat__first=__t2826t__dat__first;
  str__t1606t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2827t__unsafe_ptr,&__t2827t__dat__pos,&__t2827t__dat__length,&__t2827t__dat__first);
  s2__unsafe_ptr=__t2827t__unsafe_ptr;
  s2__dat__pos=__t2827t__dat__pos;
  s2__dat__length=__t2827t__dat__length;
  s2__dat__first=__t2827t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2828t__);
  if(__t2828t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2829t__);
  eq__t134t(CHARS__pos,__t2829t__,&__t2830t__);
  __t2831t=__t2830t__;
  }
  if(__t2831t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2832t__);
  lt__t301t(__t2832t__,CHARS__buf__unsafe_size,&__t2833t__);
  __t2834t=__t2833t__;
  }
  if(__t2834t){
  len__t1639t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2835t__);
  __t_errcode=alloc__t1244t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2835t__,&__t2836t__buf__unsafe_ptr,&__t2836t__buf__unsafe_size,&__t2836t__buf__unsafe_offset,&__t2836t__buf__unsafe_align,&__t2836t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1174t(__t2836t__buf__unsafe_ptr,__t2836t__buf__unsafe_size,__t2836t__buf__unsafe_offset,__t2836t__buf__unsafe_align,__t2836t__pos,&__t2837t____t1175t__unsafe_ptr,&__t2837t____t1175t__unsafe_size,&__t2837t____t1175t__unsafe_offset,&__t2837t____t1175t__unsafe_align,&__t2837t____t1176t);
  arena__t1162t(&__t2837t____t1175t__unsafe_ptr,&__t2837t____t1175t__unsafe_size,&__t2837t____t1175t__unsafe_offset,&__t2837t____t1175t__unsafe_align,__t2837t____t1176t,&__t2838t__buf__unsafe_ptr,&__t2838t__buf__unsafe_size,&__t2838t__buf__unsafe_offset,&__t2838t__buf__unsafe_align,&__t2838t__pos);
  __t2839t__buf__unsafe_ptr=__t2838t__buf__unsafe_ptr;
  __t2839t__buf__unsafe_size=__t2838t__buf__unsafe_size;
  __t2839t__buf__unsafe_offset=__t2838t__buf__unsafe_offset;
  __t2839t__buf__unsafe_align=__t2838t__buf__unsafe_align;
  __t2839t__pos=__t2838t__pos;
  surface__buf__unsafe_ptr=__t2839t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2839t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2839t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2839t__buf__unsafe_align;
  surface__pos=__t2839t__pos;
  __t_errcode=copy__t1673t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2840t__unsafe_ptr,&__t2840t__dat__pos,&__t2840t__dat__length,&__t2840t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1171t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2841t____t1172t__unsafe_ptr,&__t2841t____t1172t__unsafe_size,&__t2841t____t1172t__unsafe_offset,&__t2841t____t1172t__unsafe_align,&__t2841t____t1173t);
  __t2843t=0;
  add__t188t(s1__dat__pos,__t2843t,&__t2844t__);
  __t_errcode=str__t1625t(__t2841t____t1172t__unsafe_ptr,__t2841t____t1172t__unsafe_size,__t2841t____t1172t__unsafe_offset,__t2841t____t1172t__unsafe_align,__t2841t____t1173t,__t2844t__,&__t2845t__unsafe_ptr,&__t2845t__dat__pos,&__t2845t__dat__length,&__t2845t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2846t__);
  if(__t2846t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2847t__);
  __t2848t=__t2847t__;
  }
  if(__t2848t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2849t__);
  eq__t134t(s2__dat__pos,__t2849t__,&__t2850t__);
  __t2851t=__t2850t__;
  }
  if(__t2851t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2852t__);
  __t_errcode=str__t1625t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2852t__,s1__dat__pos,&__t2854t__unsafe_ptr,&__t2854t__dat__pos,&__t2854t__dat__length,&__t2854t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2845t__unsafe_ptr=__t2854t__unsafe_ptr;
  __t2845t__dat__pos=__t2854t__dat__pos;
  __t2845t__dat__length=__t2854t__dat__length;
  __t2845t__dat__first=__t2854t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1639t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2855t__);
  len__t1639t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2856t__);
  add__t188t(__t2855t__,__t2856t__,&__t2857t__);
  __t_errcode=alloc__t1244t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2857t__,&__t2858t__buf__unsafe_ptr,&__t2858t__buf__unsafe_size,&__t2858t__buf__unsafe_offset,&__t2858t__buf__unsafe_align,&__t2858t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1174t(__t2858t__buf__unsafe_ptr,__t2858t__buf__unsafe_size,__t2858t__buf__unsafe_offset,__t2858t__buf__unsafe_align,__t2858t__pos,&__t2859t____t1175t__unsafe_ptr,&__t2859t____t1175t__unsafe_size,&__t2859t____t1175t__unsafe_offset,&__t2859t____t1175t__unsafe_align,&__t2859t____t1176t);
  arena__t1162t(&__t2859t____t1175t__unsafe_ptr,&__t2859t____t1175t__unsafe_size,&__t2859t____t1175t__unsafe_offset,&__t2859t____t1175t__unsafe_align,__t2859t____t1176t,&__t2860t__buf__unsafe_ptr,&__t2860t__buf__unsafe_size,&__t2860t__buf__unsafe_offset,&__t2860t__buf__unsafe_align,&__t2860t__pos);
  __t2861t__buf__unsafe_ptr=__t2860t__buf__unsafe_ptr;
  __t2861t__buf__unsafe_size=__t2860t__buf__unsafe_size;
  __t2861t__buf__unsafe_offset=__t2860t__buf__unsafe_offset;
  __t2861t__buf__unsafe_align=__t2860t__buf__unsafe_align;
  __t2861t__pos=__t2860t__pos;
  surface__buf__unsafe_ptr=__t2861t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2861t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2861t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2861t__buf__unsafe_align;
  surface__pos=__t2861t__pos;
  __t_errcode=copy__t1673t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2862t__unsafe_ptr,&__t2862t__dat__pos,&__t2862t__dat__length,&__t2862t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1673t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2863t__unsafe_ptr,&__t2863t__dat__pos,&__t2863t__dat__length,&__t2863t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1171t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2865t____t1172t__unsafe_ptr,&__t2865t____t1172t__unsafe_size,&__t2865t____t1172t__unsafe_offset,&__t2865t____t1172t__unsafe_align,&__t2865t____t1173t);
  __t2867t=0;
  add__t188t(prev_pos,__t2867t,&__t2868t__);
  __t_complain=str__t1625t(__t2865t____t1172t__unsafe_ptr,__t2865t____t1172t__unsafe_size,__t2865t____t1172t__unsafe_offset,__t2865t____t1172t__unsafe_align,__t2865t____t1173t,__t2868t__,&__t2869t__unsafe_ptr,&__t2869t__dat__pos,&__t2869t__dat__length,&__t2869t__dat__first);
  __t2864t=__t_complain;
  if(__t_complain){
  goto __t2864t__label;
  }
  ret__unsafe_ptr=__t2869t__unsafe_ptr;
  ret__dat__pos=__t2869t__dat__pos;
  ret__dat__length=__t2869t__dat__length;
  ret__dat__first=__t2869t__dat__first;
  __t2864t__label:__t2864t=__t2864t==0;
  __t2845t__unsafe_ptr=ret__unsafe_ptr;
  __t2845t__dat__pos=ret__dat__pos;
  __t2845t__dat__length=ret__dat__length;
  __t2845t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5591t=CHARS__buf__unsafe_ptr;
  *__t5592t=CHARS__buf__unsafe_size;
  *__t5593t=CHARS__buf__unsafe_offset;
  *__t5594t=CHARS__buf__unsafe_align;
  *__t5595t=CHARS__pos;
  *__t5596t=__t2845t__unsafe_ptr;
  *__t5597t=__t2845t__dat__pos;
  *__t5598t=__t2845t__dat__length;
  *__t5599t=__t2845t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2870t(char** __t5600t, uint64_t* __t5601t, uint32_t* __t5602t, uint32_t* __t5603t, uint64_t* __t5604t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5605t, uint64_t* __t5606t, uint64_t* __t5607t, char* __t5608t) {
  char* CHARS__buf__unsafe_ptr=*__t5600t;
  uint64_t CHARS__buf__unsafe_size=*__t5601t;
  uint32_t CHARS__buf__unsafe_offset=*__t5602t;
  uint32_t CHARS__buf__unsafe_align=*__t5603t;
  uint64_t CHARS__pos=*__t5604t;
  char* __t2871t__unsafe_ptr=0;
  uint64_t __t2871t__dat__pos=0;
  uint64_t __t2871t__dat__length=0;
  char __t2871t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2872t__unsafe_ptr=0;
  uint64_t __t2872t__dat__pos=0;
  uint64_t __t2872t__dat__length=0;
  char __t2872t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2873t__=0;
  uint64_t __t2874t__=0;
  char __t2875t__=0;
  char __t2876t=0;
  uint64_t __t2877t__=0;
  char __t2878t__=0;
  char __t2879t=0;
  uint64_t __t2880t__=0;
  char* __t2881t__buf__unsafe_ptr=0;
  uint64_t __t2881t__buf__unsafe_size=0;
  uint32_t __t2881t__buf__unsafe_offset=0;
  uint32_t __t2881t__buf__unsafe_align=0;
  uint64_t __t2881t__pos=0;
  char* __t2882t____t1175t__unsafe_ptr=0;
  uint64_t __t2882t____t1175t__unsafe_size=0;
  uint32_t __t2882t____t1175t__unsafe_offset=0;
  uint32_t __t2882t____t1175t__unsafe_align=0;
  uint64_t __t2882t____t1176t=0;
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
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2885t__unsafe_ptr=0;
  uint64_t __t2885t__dat__pos=0;
  uint64_t __t2885t__dat__length=0;
  char __t2885t__dat__first=0;
  char* __t2886t____t1172t__unsafe_ptr=0;
  uint64_t __t2886t____t1172t__unsafe_size=0;
  uint32_t __t2886t____t1172t__unsafe_offset=0;
  uint32_t __t2886t____t1172t__unsafe_align=0;
  uint64_t __t2886t____t1173t=0;
  uint64_t __t2888t=0;
  uint64_t __t2889t__=0;
  char* __t2890t__unsafe_ptr=0;
  uint64_t __t2890t__dat__pos=0;
  uint64_t __t2890t__dat__length=0;
  char __t2890t__dat__first=0;
  char __t2891t__=0;
  char __t2892t__=0;
  char __t2893t=0;
  uint64_t __t2894t__=0;
  char __t2895t__=0;
  char __t2896t=0;
  uint64_t __t2897t__=0;
  char* __t2899t__unsafe_ptr=0;
  uint64_t __t2899t__dat__pos=0;
  uint64_t __t2899t__dat__length=0;
  char __t2899t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2900t__=0;
  uint64_t __t2901t__=0;
  uint64_t __t2902t__=0;
  char* __t2903t__buf__unsafe_ptr=0;
  uint64_t __t2903t__buf__unsafe_size=0;
  uint32_t __t2903t__buf__unsafe_offset=0;
  uint32_t __t2903t__buf__unsafe_align=0;
  uint64_t __t2903t__pos=0;
  char* __t2904t____t1175t__unsafe_ptr=0;
  uint64_t __t2904t____t1175t__unsafe_size=0;
  uint32_t __t2904t____t1175t__unsafe_offset=0;
  uint32_t __t2904t____t1175t__unsafe_align=0;
  uint64_t __t2904t____t1176t=0;
  char* __t2905t__buf__unsafe_ptr=0;
  uint64_t __t2905t__buf__unsafe_size=0;
  uint32_t __t2905t__buf__unsafe_offset=0;
  uint32_t __t2905t__buf__unsafe_align=0;
  uint64_t __t2905t__pos=0;
  char* __t2906t__buf__unsafe_ptr=0;
  uint64_t __t2906t__buf__unsafe_size=0;
  uint32_t __t2906t__buf__unsafe_offset=0;
  uint32_t __t2906t__buf__unsafe_align=0;
  uint64_t __t2906t__pos=0;
  char* __t2907t__unsafe_ptr=0;
  uint64_t __t2907t__dat__pos=0;
  uint64_t __t2907t__dat__length=0;
  char __t2907t__dat__first=0;
  char* __t2908t__unsafe_ptr=0;
  uint64_t __t2908t__dat__pos=0;
  uint64_t __t2908t__dat__length=0;
  char __t2908t__dat__first=0;
  char __t2909t=0;
  char* __t2910t____t1172t__unsafe_ptr=0;
  uint64_t __t2910t____t1172t__unsafe_size=0;
  uint32_t __t2910t____t1172t__unsafe_offset=0;
  uint32_t __t2910t____t1172t__unsafe_align=0;
  uint64_t __t2910t____t1173t=0;
  uint64_t __t2912t=0;
  uint64_t __t2913t__=0;
  char* __t2914t__unsafe_ptr=0;
  uint64_t __t2914t__dat__pos=0;
  uint64_t __t2914t__dat__length=0;
  char __t2914t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1606t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2871t__unsafe_ptr,&__t2871t__dat__pos,&__t2871t__dat__length,&__t2871t__dat__first);
  s1__unsafe_ptr=__t2871t__unsafe_ptr;
  s1__dat__pos=__t2871t__dat__pos;
  s1__dat__length=__t2871t__dat__length;
  s1__dat__first=__t2871t__dat__first;
  str__t1629t(_s2,&__t2872t__unsafe_ptr,&__t2872t__dat__pos,&__t2872t__dat__length,&__t2872t__dat__first);
  s2__unsafe_ptr=__t2872t__unsafe_ptr;
  s2__dat__pos=__t2872t__dat__pos;
  s2__dat__length=__t2872t__dat__length;
  s2__dat__first=__t2872t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2873t__);
  if(__t2873t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2874t__);
  eq__t134t(CHARS__pos,__t2874t__,&__t2875t__);
  __t2876t=__t2875t__;
  }
  if(__t2876t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2877t__);
  lt__t301t(__t2877t__,CHARS__buf__unsafe_size,&__t2878t__);
  __t2879t=__t2878t__;
  }
  if(__t2879t){
  len__t1639t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2880t__);
  __t_errcode=alloc__t1244t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2880t__,&__t2881t__buf__unsafe_ptr,&__t2881t__buf__unsafe_size,&__t2881t__buf__unsafe_offset,&__t2881t__buf__unsafe_align,&__t2881t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1174t(__t2881t__buf__unsafe_ptr,__t2881t__buf__unsafe_size,__t2881t__buf__unsafe_offset,__t2881t__buf__unsafe_align,__t2881t__pos,&__t2882t____t1175t__unsafe_ptr,&__t2882t____t1175t__unsafe_size,&__t2882t____t1175t__unsafe_offset,&__t2882t____t1175t__unsafe_align,&__t2882t____t1176t);
  arena__t1162t(&__t2882t____t1175t__unsafe_ptr,&__t2882t____t1175t__unsafe_size,&__t2882t____t1175t__unsafe_offset,&__t2882t____t1175t__unsafe_align,__t2882t____t1176t,&__t2883t__buf__unsafe_ptr,&__t2883t__buf__unsafe_size,&__t2883t__buf__unsafe_offset,&__t2883t__buf__unsafe_align,&__t2883t__pos);
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
  __t_errcode=copy__t1673t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2885t__unsafe_ptr,&__t2885t__dat__pos,&__t2885t__dat__length,&__t2885t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1171t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2886t____t1172t__unsafe_ptr,&__t2886t____t1172t__unsafe_size,&__t2886t____t1172t__unsafe_offset,&__t2886t____t1172t__unsafe_align,&__t2886t____t1173t);
  __t2888t=0;
  add__t188t(s1__dat__pos,__t2888t,&__t2889t__);
  __t_errcode=str__t1625t(__t2886t____t1172t__unsafe_ptr,__t2886t____t1172t__unsafe_size,__t2886t____t1172t__unsafe_offset,__t2886t____t1172t__unsafe_align,__t2886t____t1173t,__t2889t__,&__t2890t__unsafe_ptr,&__t2890t__dat__pos,&__t2890t__dat__length,&__t2890t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2891t__);
  if(__t2891t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2892t__);
  __t2893t=__t2892t__;
  }
  if(__t2893t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2894t__);
  eq__t134t(s2__dat__pos,__t2894t__,&__t2895t__);
  __t2896t=__t2895t__;
  }
  if(__t2896t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2897t__);
  __t_errcode=str__t1625t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2897t__,s1__dat__pos,&__t2899t__unsafe_ptr,&__t2899t__dat__pos,&__t2899t__dat__length,&__t2899t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2890t__unsafe_ptr=__t2899t__unsafe_ptr;
  __t2890t__dat__pos=__t2899t__dat__pos;
  __t2890t__dat__length=__t2899t__dat__length;
  __t2890t__dat__first=__t2899t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1639t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2900t__);
  len__t1639t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2901t__);
  add__t188t(__t2900t__,__t2901t__,&__t2902t__);
  __t_errcode=alloc__t1244t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2902t__,&__t2903t__buf__unsafe_ptr,&__t2903t__buf__unsafe_size,&__t2903t__buf__unsafe_offset,&__t2903t__buf__unsafe_align,&__t2903t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1174t(__t2903t__buf__unsafe_ptr,__t2903t__buf__unsafe_size,__t2903t__buf__unsafe_offset,__t2903t__buf__unsafe_align,__t2903t__pos,&__t2904t____t1175t__unsafe_ptr,&__t2904t____t1175t__unsafe_size,&__t2904t____t1175t__unsafe_offset,&__t2904t____t1175t__unsafe_align,&__t2904t____t1176t);
  arena__t1162t(&__t2904t____t1175t__unsafe_ptr,&__t2904t____t1175t__unsafe_size,&__t2904t____t1175t__unsafe_offset,&__t2904t____t1175t__unsafe_align,__t2904t____t1176t,&__t2905t__buf__unsafe_ptr,&__t2905t__buf__unsafe_size,&__t2905t__buf__unsafe_offset,&__t2905t__buf__unsafe_align,&__t2905t__pos);
  __t2906t__buf__unsafe_ptr=__t2905t__buf__unsafe_ptr;
  __t2906t__buf__unsafe_size=__t2905t__buf__unsafe_size;
  __t2906t__buf__unsafe_offset=__t2905t__buf__unsafe_offset;
  __t2906t__buf__unsafe_align=__t2905t__buf__unsafe_align;
  __t2906t__pos=__t2905t__pos;
  surface__buf__unsafe_ptr=__t2906t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2906t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2906t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2906t__buf__unsafe_align;
  surface__pos=__t2906t__pos;
  __t_errcode=copy__t1673t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2907t__unsafe_ptr,&__t2907t__dat__pos,&__t2907t__dat__length,&__t2907t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1673t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2908t__unsafe_ptr,&__t2908t__dat__pos,&__t2908t__dat__length,&__t2908t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1171t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2910t____t1172t__unsafe_ptr,&__t2910t____t1172t__unsafe_size,&__t2910t____t1172t__unsafe_offset,&__t2910t____t1172t__unsafe_align,&__t2910t____t1173t);
  __t2912t=0;
  add__t188t(prev_pos,__t2912t,&__t2913t__);
  __t_complain=str__t1625t(__t2910t____t1172t__unsafe_ptr,__t2910t____t1172t__unsafe_size,__t2910t____t1172t__unsafe_offset,__t2910t____t1172t__unsafe_align,__t2910t____t1173t,__t2913t__,&__t2914t__unsafe_ptr,&__t2914t__dat__pos,&__t2914t__dat__length,&__t2914t__dat__first);
  __t2909t=__t_complain;
  if(__t_complain){
  goto __t2909t__label;
  }
  ret__unsafe_ptr=__t2914t__unsafe_ptr;
  ret__dat__pos=__t2914t__dat__pos;
  ret__dat__length=__t2914t__dat__length;
  ret__dat__first=__t2914t__dat__first;
  __t2909t__label:__t2909t=__t2909t==0;
  __t2890t__unsafe_ptr=ret__unsafe_ptr;
  __t2890t__dat__pos=ret__dat__pos;
  __t2890t__dat__length=ret__dat__length;
  __t2890t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5600t=CHARS__buf__unsafe_ptr;
  *__t5601t=CHARS__buf__unsafe_size;
  *__t5602t=CHARS__buf__unsafe_offset;
  *__t5603t=CHARS__buf__unsafe_align;
  *__t5604t=CHARS__pos;
  *__t5605t=__t2890t__unsafe_ptr;
  *__t5606t=__t2890t__dat__pos;
  *__t5607t=__t2890t__dat__length;
  *__t5608t=__t2890t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1814t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t5609t) {
  int __t1815t=0;
  char __t1816t__=0;
  uint64_t __t1817t__=0;
  char* __t1818t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,s__dat__length,&__t1816t__);
  if(__t1816t__){
  __t_errcode=18;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t1817t__);
  add__t770t(s__unsafe_ptr,__t1817t__,&__t1818t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5609t=__t1818t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1840t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t5610t, uint64_t* __t5611t, uint64_t* __t5612t, char* __t5613t) {
  char* __t1841t__unsafe_ptr=0;
  uint64_t __t1841t__dat__pos=0;
  uint64_t __t1841t__dat__length=0;
  char __t1841t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1842t__=0;
  char* __t1843t__unsafe_ptr=0;
  uint64_t __t1843t__dat__pos=0;
  uint64_t __t1843t__dat__length=0;
  char __t1843t__dat__first=0;
  char __t1844t__=0;
  char __t1845t__=0;
  char __t1846t=0;
  char __t1847t__=0;
  uint64_t __t1849t__=0;
  uint64_t new_length=0;
  uint64_t __t1850t=0;
  char __t1851t__=0;
  char new_first=0;
  char* __t1853t__=0;
  char __t1854t__value=0;
  uint64_t __t1855t__=0;
  char* __t1856t__unsafe_ptr=0;
  uint64_t __t1856t__dat__pos=0;
  uint64_t __t1856t__dat__length=0;
  char __t1856t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1606t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1841t__unsafe_ptr,&__t1841t__dat__pos,&__t1841t__dat__length,&__t1841t__dat__first);
  s__unsafe_ptr=__t1841t__unsafe_ptr;
  s__dat__pos=__t1841t__dat__pos;
  s__dat__length=__t1841t__dat__length;
  s__dat__first=__t1841t__dat__first;
  eq__t134t(from,to,&__t1842t__);
  if(__t1842t__){
  str__t1629t(__t431t,&__t1843t__unsafe_ptr,&__t1843t__dat__pos,&__t1843t__dat__length,&__t1843t__dat__first);
  goto __t_return;
  }
  gt__t325t(from,to,&__t1844t__);
  if(!__t1844t__){
  gt__t325t(to,s__dat__length,&__t1845t__);
  __t1846t=__t1845t__;
  }
  else{
  __t1846t=0;
  not__t42t(__t1846t,&__t1847t__);
  __t1846t=__t1847t__;
  }
  if(__t1846t){
  __t_errcode=25;
  goto __t_failure;
  }
  sub__t409t(to,from,&__t1849t__);
  new_length=__t1849t__;
  __t1850t=0;
  neq__t158t(from,__t1850t,&__t1851t__);
  if(__t1851t__){
  __t_errcode=get__t1814t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1853t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1853t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1854t__value,__t1853t__,1);
  new_first=__t1854t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1855t__);
  str__t1569t(s__unsafe_ptr,__t1855t__,new_length,new_first,&__t1856t__unsafe_ptr,&__t1856t__dat__pos,&__t1856t__dat__length,&__t1856t__dat__first);
  __t1843t__unsafe_ptr=__t1856t__unsafe_ptr;
  __t1843t__dat__pos=__t1856t__dat__pos;
  __t1843t__dat__length=__t1856t__dat__length;
  __t1843t__dat__first=__t1856t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5610t=__t1843t__unsafe_ptr;
  *__t5611t=__t1843t__dat__pos;
  *__t5612t=__t1843t__dat__length;
  *__t5613t=__t1843t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1919t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5614t) {
  char* __t1920t__unsafe_ptr=0;
  uint64_t __t1920t__dat__pos=0;
  uint64_t __t1920t__dat__length=0;
  char __t1920t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1921t__unsafe_ptr=0;
  uint64_t __t1921t__dat__pos=0;
  uint64_t __t1921t__dat__length=0;
  char __t1921t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t1922t=0;
  uint64_t __t1923t__=0;
  uint64_t d=0;
  char __t1924t__=0;
  char __t1925t=0;
  char* __t1926t__unsafe_ptr=0;
  uint64_t __t1926t__dat__pos=0;
  uint64_t __t1926t__dat__length=0;
  char __t1926t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1927t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1606t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1920t__unsafe_ptr,&__t1920t__dat__pos,&__t1920t__dat__length,&__t1920t__dat__first);
  stack__unsafe_ptr=__t1920t__unsafe_ptr;
  stack__dat__pos=__t1920t__dat__pos;
  stack__dat__length=__t1920t__dat__length;
  stack__dat__first=__t1920t__dat__first;
  str__t1629t(_needle,&__t1921t__unsafe_ptr,&__t1921t__dat__pos,&__t1921t__dat__length,&__t1921t__dat__first);
  needle__unsafe_ptr=__t1921t__unsafe_ptr;
  needle__dat__pos=__t1921t__dat__pos;
  needle__dat__length=__t1921t__dat__length;
  needle__dat__first=__t1921t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t401t(n,needle__dat__length,&__t1923t__);
  __t1922t=__t_complain;
  if(__t_complain){
  goto __t1922t__label;
  }
  d=__t1923t__;
  __t1922t__label:__t1922t=__t1922t==0;
  not__t42t(__t1922t,&__t1924t__);
  if(__t1924t__){
  __t1925t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1840t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t1926t__unsafe_ptr,&__t1926t__dat__pos,&__t1926t__dat__length,&__t1926t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1926t__unsafe_ptr;
  ret__dat__pos=__t1926t__dat__pos;
  ret__dat__length=__t1926t__dat__length;
  ret__dat__first=__t1926t__dat__first;
  eq__t1744t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1927t__);
  __t1925t=__t1927t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5614t=__t1925t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t703t(uint64_t to, uint64_t* __t5615t, uint64_t* __t5616t) {
  uint64_t __t704t=0;
  __t704t=0;
  goto __t_return;
  __t_return:
  *__t5615t=__t704t;
  *__t5616t=to;
}

static inline __attribute__((always_inline)) void range__t720t(uint64_t _from, uint64_t to, uint64_t* __t5617t, uint64_t* __t5618t) {
  uint64_t __t721t=0;
  uint64_t __t722t__=0;
  uint64_t __t723t=0;
  uint64_t from=0;
  __t721t=0;
  add__t188t(__t721t,_from,&__t722t__);
  __t723t=__t722t__;
  from=__t723t;
  goto __t_return;
  __t_return:
  *__t5617t=from;
  *__t5618t=to;
}

static inline __attribute__((always_inline)) int mutget__t725t(uint64_t* __t5619t, uint64_t r__to, uint64_t skipped, uint64_t* __t5620t) {
  uint64_t r__from=*__t5619t;
  char __t726t__=0;
  uint64_t ret=0;
  uint64_t __t727t=0;
  uint64_t __t728t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(r__from,r__to,&__t726t__);
  if(__t726t__){
  __t_errcode=12;
  goto __t_failure;
  }
  ret=r__from;
  __t727t=1;
  add__t188t(ret,__t727t,&__t728t__);
  r__from=__t728t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5619t=r__from;
  *__t5620t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2005t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5621t) {
  char* __t2006t__unsafe_ptr=0;
  uint64_t __t2006t__dat__pos=0;
  uint64_t __t2006t__dat__length=0;
  char __t2006t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2007t__unsafe_ptr=0;
  uint64_t __t2007t__dat__pos=0;
  uint64_t __t2007t__dat__length=0;
  char __t2007t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t2008t=0;
  uint64_t __t2009t__=0;
  uint64_t n=0;
  char __t2010t__=0;
  char __t2011t=0;
  uint64_t __t2012t=0;
  uint64_t __t2013t____t704t=0;
  uint64_t __t2013t__to=0;
  uint64_t __t2014t__from=0;
  uint64_t __t2014t__to=0;
  char __t2015t=0;
  uint64_t __t2016t__=0;
  uint64_t i=0;
  char __t2017t=0;
  uint64_t __t2018t__=0;
  char* __t2019t__unsafe_ptr=0;
  uint64_t __t2019t__dat__pos=0;
  uint64_t __t2019t__dat__length=0;
  char __t2019t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t2020t__=0;
  char __t2021t=0;
  char __t2022t=0;
  int __t_complain=0;
  str__t1606t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2006t__unsafe_ptr,&__t2006t__dat__pos,&__t2006t__dat__length,&__t2006t__dat__first);
  stack__unsafe_ptr=__t2006t__unsafe_ptr;
  stack__dat__pos=__t2006t__dat__pos;
  stack__dat__length=__t2006t__dat__length;
  stack__dat__first=__t2006t__dat__first;
  str__t1629t(_needle,&__t2007t__unsafe_ptr,&__t2007t__dat__pos,&__t2007t__dat__length,&__t2007t__dat__first);
  needle__unsafe_ptr=__t2007t__unsafe_ptr;
  needle__dat__pos=__t2007t__dat__pos;
  needle__dat__length=__t2007t__dat__length;
  needle__dat__first=__t2007t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t401t(stack__dat__length,d,&__t2009t__);
  __t2008t=__t_complain;
  if(__t_complain){
  goto __t2008t__label;
  }
  n=__t2009t__;
  __t2008t__label:__t2008t=__t2008t==0;
  not__t42t(__t2008t,&__t2010t__);
  if(__t2010t__){
  __t2011t=0;
  goto __t_return;
  }
  of__t703t(n,&__t2013t____t704t,&__t2013t__to);
  range__t720t(__t2013t____t704t,__t2013t__to,&__t2014t__from,&__t2014t__to);
  __t2012t=0-1;
  while(1){
  __t2012t=__t2012t+1;
  __t_complain=mutget__t725t(&__t2014t__from,__t2014t__to,__t2012t,&__t2016t__);
  __t2015t=__t_complain;
  if(__t_complain){
  goto __t2015t__label;
  }
  i=__t2016t__;
  __t2015t__label:__t2015t=__t2015t==0;
  if(!__t2015t){
  break;
  }
  add__t188t(i,d,&__t2018t__);
  __t_complain=slice__t1840t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t2018t__,&__t2019t__unsafe_ptr,&__t2019t__dat__pos,&__t2019t__dat__length,&__t2019t__dat__first);
  __t2017t=__t_complain;
  if(__t_complain){
  goto __t2017t__label;
  }
  sliced__unsafe_ptr=__t2019t__unsafe_ptr;
  sliced__dat__pos=__t2019t__dat__pos;
  sliced__dat__length=__t2019t__dat__length;
  sliced__dat__first=__t2019t__dat__first;
  __t2017t__label:__t2017t=__t2017t==0;
  eq__t1744t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2020t__);
  if(__t2020t__){
  __t2021t=1;
  __t2011t=__t2021t;
  goto __t_return;
  }
  }
  __t2022t=0;
  __t2011t=__t2022t;
  goto __t_return;
  __t_return:
  *__t5621t=__t2011t;
}

static inline __attribute__((always_inline)) void restore_stdout__t5230t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
}

static inline __attribute__((always_inline)) void stdout_to_err__t5231t(int64_t* __t5622t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5622t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t1808t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1809t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void popen__t4194t(const char* cmd, char** __t5623t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t5623t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4193t(char* unsafe_ptr, int64_t* __t5624t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t5624t=status;
}

static inline __attribute__((always_inline)) void int__t632t(uint64_t x, int64_t* __t5625t) {
  int __t633t=0;
  int __t634t=0;
  int __t635t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5625t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t5626t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t5626t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t5627t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5627t=z;
}

static inline __attribute__((always_inline)) int open__t4195t(const char* cmd, char** __t5628t) {
  char* __t4196t__=0;
  char* unsafe_ptr=0;
  char __t4197t__=0;
  char __t4198t__=0;
  char __t4199t__=0;
  int64_t __t4200t__=0;
  int64_t status=0;
  uint64_t __t4201t=0;
  int64_t __t4202t__=0;
  char __t4203t__=0;
  char __t4204t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4194t(cmd,&__t4196t__);
  unsafe_ptr=__t4196t__;
  exists__t652t(unsafe_ptr,&__t4197t__);
  not__t42t(__t4197t__,&__t4198t__);
  if(__t4198t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t652t(unsafe_ptr,&__t4199t__);
  if(__t4199t__){
  pclose__t4193t(unsafe_ptr,&__t4200t__);
  status=__t4200t__;
  unsafe_ptr=0;
  __t4201t=0;
  int__t632t(__t4201t,&__t4202t__);
  neq__t147t(status,__t4202t__,&__t4203t__);
  if(__t4203t__){
  __t_complain=41;
  goto __t4204t__label;
  __t4204t__label:__t4204t=__t4204t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5628t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4206t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t5629t) {
  const char* __t4207t__cstr=0;
  char* __t4207t__str__unsafe_ptr=0;
  uint64_t __t4207t__str__dat__pos=0;
  uint64_t __t4207t__str__dat__length=0;
  char __t4207t__str__dat__first=0;
  const char* __t4209t__=0;
  char* __t4210t__unsafe_ptr=0;
  char __t4211t____t4199t__=0;
  int64_t __t4211t____t4200t__=0;
  int64_t __t4211t__status=0;
  uint64_t __t4211t____t4201t=0;
  int64_t __t4211t____t4202t__=0;
  char __t4211t____t4203t__=0;
  char __t4211t____t4204t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1727t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4207t__cstr,&__t4207t__str__unsafe_ptr,&__t4207t__str__dat__pos,&__t4207t__str__dat__length,&__t4207t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1737t(__t4207t__cstr,__t4207t__str__unsafe_ptr,__t4207t__str__dat__pos,__t4207t__str__dat__length,__t4207t__str__dat__first,&__t4209t__);
  __t_errcode=open__t4195t(__t4209t__,&__t4210t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t652t(__t4210t__unsafe_ptr,&__t4211t____t4199t__);
  if(__t4211t____t4199t__){
  pclose__t4193t(__t4210t__unsafe_ptr,&__t4211t____t4200t__);
  __t4211t__status=__t4211t____t4200t__;
  __t4210t__unsafe_ptr=0;
  __t4211t____t4201t=0;
  int__t632t(__t4211t____t4201t,&__t4211t____t4202t__);
  neq__t147t(__t4211t__status,__t4211t____t4202t__,&__t4211t____t4203t__);
  if(__t4211t____t4203t__){
  __t_complain=41;
  goto __t4204t__label;
  __t4204t__label:__t4211t____t4204t=__t4211t____t4204t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5629t=__t4210t__unsafe_ptr;
  
  __t_skip_returns:free__t768t(&__t4207t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4168t(int64_t value, char* __t5630t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t5630t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4167t(int64_t value, const char** __t5631t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5631t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t5632t) {
  const char* value=0;
  *__t5632t=value;
}

int run__t5158t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t5633t) {
  char* __t5159t__unsafe_ptr=0;
  char __t5160t____t4211t____t4199t__=0;
  int64_t __t5160t____t4211t____t4200t__=0;
  int64_t __t5160t____t4211t__status=0;
  uint64_t __t5160t____t4211t____t4201t=0;
  int64_t __t5160t____t4211t____t4202t__=0;
  char __t5160t____t4211t____t4203t__=0;
  char __t5160t____t4211t____t4204t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t5161t=0;
  int64_t error=0;
  char __t5162t__=0;
  char __t5163t__=0;
  const char* __t5164t__=0;
  const char* __t5165t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4206t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5159t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t5159t__unsafe_ptr;
  exists__t652t(__t5159t__unsafe_ptr,&__t5160t____t4211t____t4199t__);
  if(__t5160t____t4211t____t4199t__){
  pclose__t4193t(__t5159t__unsafe_ptr,&__t5160t____t4211t____t4200t__);
  __t5160t____t4211t__status=__t5160t____t4211t____t4200t__;
  __t5159t__unsafe_ptr=0;
  __t5160t____t4211t____t4201t=0;
  int__t632t(__t5160t____t4211t____t4201t,&__t5160t____t4211t____t4202t__);
  neq__t147t(__t5160t____t4211t__status,__t5160t____t4211t____t4202t__,&__t5160t____t4211t____t4203t__);
  if(__t5160t____t4211t____t4203t__){
  __t_complain=41;
  goto __t4204t__label;
  __t4204t__label:__t5160t____t4211t____t4204t=__t5160t____t4211t____t4204t==0;
  }
  }
  __t5161t=__t_complain;
  error=__t5161t;
  ok__t4168t(error,&__t5162t__);
  not__t42t(__t5162t__,&__t5163t__);
  if(__t5163t__){
  cstr__t4167t(error,&__t5164t__);
  goto __t_return;
  }
  cstr__t1t(&__t5165t__);
  __t5164t__=__t5165t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5633t=__t5164t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5634t) {
  int value=0;
  *__t5634t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5635t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5635t=__t54t__;
}

static inline __attribute__((always_inline)) void exists__t1567t(const char* c, char* __t5636t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5636t=z;
}

static inline __attribute__((always_inline)) void nn__t430t(const char* value, const char** __t5637t, const char** __t5638t) {
  const char* __t432t=0;
  __t432t=__t431t;
  goto __t_return;
  __t_return:
  *__t5637t=value;
  *__t5638t=__t432t;
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

static inline __attribute__((always_inline)) void print_marker__t5195t(char colors__initialized) {
  const char* __t5197t__value=0;
  const char* __t5197t____t432t=0;
  int __t5199t=0;
  char __t5200t=0;
  char __t5201t=0;
  const char* __t5206t__value=0;
  const char* __t5206t____t432t=0;
  int __t5208t=0;
  const char* __t5211t__value=0;
  const char* __t5211t____t432t=0;
  nn__t430t(__t5177t,&__t5197t__value,&__t5197t____t432t);
  print__t439t(__t5197t__value,__t5197t____t432t);
  __t5201t=1;
  if(__t5202t!=__t5202t){
  __t5201t=0;
  }
  if(__t5201t){
  __t5200t=1;
  }
  if(__t5200t){
  set__t475t(colors__initialized);
  nn__t430t(__t5205t,&__t5206t__value,&__t5206t____t432t);
  print__t439t(__t5206t__value,__t5206t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5192t,&__t5211t__value,&__t5211t____t432t);
  print__t439t(__t5211t__value,__t5211t____t432t);
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

static inline __attribute__((always_inline)) void print_marker__t5175t(char colors__initialized) {
  const char* __t5178t__value=0;
  const char* __t5178t____t432t=0;
  char __t5180t=0;
  char __t5181t=0;
  const char* __t5186t__value=0;
  const char* __t5186t____t432t=0;
  int __t5188t=0;
  int __t5189t=0;
  const char* __t5193t__value=0;
  const char* __t5193t____t432t=0;
  nn__t430t(__t5177t,&__t5178t__value,&__t5178t____t432t);
  print__t439t(__t5178t__value,__t5178t____t432t);
  __t5181t=1;
  if(__t5182t!=__t5182t){
  __t5181t=0;
  }
  if(__t5181t){
  __t5180t=1;
  }
  if(__t5180t){
  set__t479t(colors__initialized);
  nn__t430t(__t5185t,&__t5186t__value,&__t5186t____t432t);
  print__t439t(__t5186t__value,__t5186t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5192t,&__t5193t__value,&__t5193t____t432t);
  print__t439t(__t5193t__value,__t5193t____t432t);
}

static inline __attribute__((always_inline)) int test__t5255t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t5639t) {
  int64_t __t5257t__=0;
  const char* __t5260t__=0;
  const char* __t5261t=0;
  const char* error=0;
  int __t5262t=0;
  int __t5263t__=0;
  char __t5264t__=0;
  const char* __t5265t__=0;
  const char* __t5267t__value=0;
  const char* __t5267t____t432t=0;
  char __t5269t__=0;
  char __t5273t=0;
  char __t5278t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5231t(&__t5257t__);
  print__t1808t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t5158t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5260t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5261t=__t5260t__;
  error=__t5261t;
  not__t53t(__t5262t,&__t5263t__);
  if(should_fail){
  exists__t1567t(error,&__t5264t__);
  if(__t5264t__){
  cstr__t1t(&__t5265t__);
  error=__t5265t__;
  }
  else{
  error=__t5266t;
  }
  }
  nn__t430t(__t5239t,&__t5267t__value,&__t5267t____t432t);
  print__t439t(__t5267t__value,__t5267t____t432t);
  exists__t1567t(error,&__t5269t__);
  if(__t5269t__){
  print_marker__t5195t(colors__initialized);
  print__t441t(error);
  __t5273t=0;
  goto __t_return;
  }
  print_marker__t5175t(colors__initialized);
  print__t441t(__t5276t);
  __t5278t=1;
  __t5273t=__t5278t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5639t=__t5273t;
  
  __t_skip_returns:restore_stdout__t5230t(__t5257t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t452t(uint64_t value, const char* endl) {
  int __t453t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t437t(uint64_t value, uint64_t* __t5640t, const char** __t5641t) {
  const char* __t438t=0;
  __t438t=__t431t;
  goto __t_return;
  __t_return:
  *__t5640t=value;
  *__t5641t=__t438t;
}

static inline __attribute__((always_inline)) int _main__t5317t() {
  char* __t5319t__unsafe_ptr=0;
  uint64_t __t5319t__dat__pos=0;
  uint64_t __t5319t__dat__length=0;
  char __t5319t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5320t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5322t=0;
  char* __t5323t__unsafe_ptr=0;
  uint64_t __t5323t__unsafe_size=0;
  uint32_t __t5323t__unsafe_offset=0;
  uint32_t __t5323t__unsafe_align=0;
  char* __t5325t__buf__unsafe_ptr=0;
  uint64_t __t5325t__buf__unsafe_size=0;
  uint32_t __t5325t__buf__unsafe_offset=0;
  uint32_t __t5325t__buf__unsafe_align=0;
  uint64_t __t5325t__pos=0;
  char* __t5326t__buf__unsafe_ptr=0;
  uint64_t __t5326t__buf__unsafe_size=0;
  uint32_t __t5326t__buf__unsafe_offset=0;
  uint32_t __t5326t__buf__unsafe_align=0;
  uint64_t __t5326t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  int __t5331t=0;
  char* __t5333t__unsafe_ptr=0;
  uint64_t __t5333t__dat__pos=0;
  uint64_t __t5333t__dat__length=0;
  char __t5333t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  uint64_t __t5334t=0;
  uint64_t __t5335t=0;
  uint64_t counter=0;
  uint64_t __t5336t=0;
  uint64_t __t5337t=0;
  uint64_t failures=0;
  uint64_t __t5338t=0;
  char* __t5339t__unsafe_ptr=0;
  char __t5341t=0;
  char* __t5342t__unsafe_ptr=0;
  uint64_t __t5342t__dat__pos=0;
  uint64_t __t5342t__dat__length=0;
  char __t5342t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5344t__=0;
  char __t5345t__=0;
  char __t5346t__=0;
  char __t5347t=0;
  char __t5348t__=0;
  uint64_t __t5349t__=0;
  uint64_t __t5350t____t5314t=0;
  uint64_t __t5350t____t5316t__=0;
  char* __t5351t__unsafe_ptr=0;
  uint64_t __t5351t__dat__pos=0;
  uint64_t __t5351t__dat__length=0;
  char __t5351t__dat__first=0;
  char* __t5353t__unsafe_ptr=0;
  uint64_t __t5353t__dat__pos=0;
  uint64_t __t5353t__dat__length=0;
  char __t5353t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5354t=0;
  char* __t5355t__unsafe_ptr=0;
  char __t5357t=0;
  char* __t5358t__unsafe_ptr=0;
  uint64_t __t5358t__dat__pos=0;
  uint64_t __t5358t__dat__length=0;
  char __t5358t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5360t__=0;
  char __t5361t__=0;
  uint64_t __t5362t__=0;
  uint64_t __t5363t____t5314t=0;
  uint64_t __t5363t____t5316t__=0;
  uint64_t __t5364t=0;
  uint64_t __t5365t__=0;
  char __t5367t__=0;
  char should_fail=0;
  char* __t5368t__unsafe_ptr=0;
  uint64_t __t5368t__dat__pos=0;
  uint64_t __t5368t__dat__length=0;
  char __t5368t__dat__first=0;
  char* __t5369t__unsafe_ptr=0;
  uint64_t __t5369t__dat__pos=0;
  uint64_t __t5369t__dat__length=0;
  char __t5369t__dat__first=0;
  char __t5370t__=0;
  char __t5371t__=0;
  uint64_t __t5372t=0;
  uint64_t __t5373t__=0;
  int64_t __t5374t__=0;
  uint64_t __t5376t=0;
  char __t5377t__=0;
  const char* __t5391t__value=0;
  const char* __t5391t____t432t=0;
  const char* __t5381t__value=0;
  const char* __t5381t____t432t=0;
  const char* __t5386t__value=0;
  const char* __t5386t____t432t=0;
  uint64_t __t5397t__value=0;
  const char* __t5397t____t438t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1629t(__t5318t,&__t5319t__unsafe_ptr,&__t5319t__dat__pos,&__t5319t__dat__length,&__t5319t__dat__first);
  test_root__unsafe_ptr=__t5319t__unsafe_ptr;
  test_root__dat__pos=__t5319t__dat__pos;
  test_root__dat__length=__t5319t__dat__length;
  test_root__dat__first=__t5319t__dat__first;
  colors__t469t(&__t5320t__initialized);
  colors__initialized=__t5320t__initialized;
  __t5322t=128;
  __t_errcode=alloc__t1046t(__t5322t,&__t5323t__unsafe_ptr,&__t5323t__unsafe_size,&__t5323t__unsafe_offset,&__t5323t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1165t(&__t5323t__unsafe_ptr,&__t5323t__unsafe_size,&__t5323t__unsafe_offset,&__t5323t__unsafe_align,&__t5325t__buf__unsafe_ptr,&__t5325t__buf__unsafe_size,&__t5325t__buf__unsafe_offset,&__t5325t__buf__unsafe_align,&__t5325t__pos);
  __t5326t__buf__unsafe_ptr=__t5325t__buf__unsafe_ptr;
  __t5326t__buf__unsafe_size=__t5325t__buf__unsafe_size;
  __t5326t__buf__unsafe_offset=__t5325t__buf__unsafe_offset;
  __t5326t__buf__unsafe_align=__t5325t__buf__unsafe_align;
  __t5326t__pos=__t5325t__pos;
  CHARS__buf__unsafe_ptr=__t5326t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5326t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5326t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5326t__buf__unsafe_align;
  CHARS__pos=__t5326t__pos;
  __t_errcode=copy__t1678t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5332t,&__t5333t__unsafe_ptr,&__t5333t__dat__pos,&__t5333t__dat__length,&__t5333t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5333t__unsafe_ptr;
  command_base__dat__pos=__t5333t__dat__pos;
  command_base__dat__length=__t5333t__dat__length;
  command_base__dat__first=__t5333t__dat__first;
  __t5334t=0;
  __t5335t=__t5334t;
  counter=__t5335t;
  __t5336t=0;
  __t5337t=__t5336t;
  failures=__t5337t;
  __t_errcode=open__t5033t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5339t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5338t=0-1;
  while(1){
  __t5338t=__t5338t+1;
  __t_complain=mutget__t5116t(&__t5339t__unsafe_ptr,__t5338t,&__t5342t__unsafe_ptr,&__t5342t__dat__pos,&__t5342t__dat__length,&__t5342t__dat__first);
  __t5341t=__t_complain;
  if(__t_complain){
  goto __t5341t__label;
  }
  path__unsafe_ptr=__t5342t__unsafe_ptr;
  path__dat__pos=__t5342t__dat__pos;
  path__dat__length=__t5342t__dat__length;
  path__dat__first=__t5342t__dat__first;
  __t5341t__label:__t5341t=__t5341t==0;
  if(!__t5341t){
  break;
  }
  eq__t1751t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5343t,&__t5344t__);
  if(!__t5344t__){
  __t_errcode=is_dir__t4960t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5345t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5345t__,&__t5346t__);
  __t5347t=__t5346t__;
  }
  else{
  __t5347t=0;
  not__t42t(__t5347t,&__t5348t__);
  __t5347t=__t5348t__;
  }
  if(__t5347t){
  continue;
  }
  reuse__t5311t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5349t__);
  __t_errcode=add__t2825t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5351t__unsafe_ptr,&__t5351t__dat__pos,&__t5351t__dat__length,&__t5351t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2870t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5351t__unsafe_ptr,__t5351t__dat__pos,__t5351t__dat__length,__t5351t__dat__first,__t5352t,&__t5353t__unsafe_ptr,&__t5353t__dat__pos,&__t5353t__dat__length,&__t5353t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5353t__unsafe_ptr;
  dir_path__dat__pos=__t5353t__dat__pos;
  dir_path__dat__length=__t5353t__dat__length;
  dir_path__dat__first=__t5353t__dat__first;
  __t_errcode=open__t5033t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5355t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5354t=0-1;
  while(1){
  __t5354t=__t5354t+1;
  __t_complain=mutget__t5116t(&__t5355t__unsafe_ptr,__t5354t,&__t5358t__unsafe_ptr,&__t5358t__dat__pos,&__t5358t__dat__length,&__t5358t__dat__first);
  __t5357t=__t_complain;
  if(__t_complain){
  goto __t5357t__label;
  }
  entry__unsafe_ptr=__t5358t__unsafe_ptr;
  entry__dat__pos=__t5358t__dat__pos;
  entry__dat__length=__t5358t__dat__length;
  entry__dat__first=__t5358t__dat__first;
  __t5357t__label:__t5357t=__t5357t==0;
  if(!__t5357t){
  break;
  }
  __t_errcode=ends_with__t1919t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5359t,&__t5360t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5360t__,&__t5361t__);
  if(__t5361t__){
  continue;
  }
  reuse__t5311t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5362t__);
  __t5364t=1;
  add__t188t(counter,__t5364t,&__t5365t__);
  counter=__t5365t__;
  contains__t2005t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5366t,&__t5367t__);
  should_fail=__t5367t__;
  __t_errcode=add__t2825t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5368t__unsafe_ptr,&__t5368t__dat__pos,&__t5368t__dat__length,&__t5368t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2825t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5368t__unsafe_ptr,__t5368t__dat__pos,__t5368t__dat__length,__t5368t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5369t__unsafe_ptr,&__t5369t__dat__pos,&__t5369t__dat__length,&__t5369t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5255t(colors__initialized,__t5369t__unsafe_ptr,__t5369t__dat__pos,__t5369t__dat__length,__t5369t__dat__first,should_fail,&__t5370t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5370t__,&__t5371t__);
  if(__t5371t__){
  __t5372t=1;
  add__t188t(failures,__t5372t,&__t5373t__);
  failures=__t5373t__;
  }
  __t5363t____t5314t=0;
  sub__t409t(__t5362t__,__t5363t____t5314t,&__t5363t____t5316t__);
  CHARS__pos=__t5363t____t5316t__;
  }
  __t5350t____t5314t=0;
  sub__t409t(__t5349t__,__t5350t____t5314t,&__t5350t____t5316t__);
  CHARS__pos=__t5350t____t5316t__;
  closedir__t5023t(__t5355t__unsafe_ptr);
  }
  stdout_to_err__t5231t(&__t5374t__);
  __t5376t=0;
  eq__t134t(failures,__t5376t,&__t5377t__);
  if(__t5377t__){
  set__t479t(colors__initialized);
  nn__t430t(__t5380t,&__t5381t__value,&__t5381t____t432t);
  print__t439t(__t5381t__value,__t5381t____t432t);
  set__t595t(colors__initialized);
  nn__t430t(__t5385t,&__t5386t__value,&__t5386t____t432t);
  print__t439t(__t5386t__value,__t5386t____t432t);
  }
  else{
  set__t475t(colors__initialized);
  nn__t430t(__t5390t,&__t5391t__value,&__t5391t____t432t);
  print__t439t(__t5391t__value,__t5391t____t432t);
  set__t595t(colors__initialized);
  print__t452t(failures,__t5395t);
  }
  nn__t437t(counter,&__t5397t__value,&__t5397t____t438t);
  print__t452t(__t5397t__value,__t5397t____t438t);
  print__t441t(__t5399t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:restore_stdout__t5230t(__t5374t__);
  closedir__t5023t(__t5339t__unsafe_ptr);
  free__t768t(&__t5323t__unsafe_ptr);
  if(__t5320t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5401t() {
  char __t5404t=0;
  char __t5406t__=0;
  int64_t __t5407t=0;
  const char* __t5408t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t_complain=_main__t5317t();
  __t5404t=__t_complain;
  if(__t_complain){
  goto __t5404t__label;
  }
  __t5404t__label:__t5404t=__t5404t==0;
  not__t42t(__t5404t,&__t5406t__);
  if(__t5406t__){
  __t5407t=__t_complain;
  cstr__t4167t(__t5407t,&__t5408t__);
  print__t441t(__t5408t__);
  __t_errcode=59;
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
                    return main__t5401t();
                }