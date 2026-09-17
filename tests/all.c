#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t431t="";
const char* const __t5305t="V";
const char* const __t5486t="_fail_";
const char* const __t5452t="./smoll --cleanup ";
const char* const __t5472t="/";
const char* const __t5438t="./tests/passing/";
const char* const __t5515t=" out of ";
const char* const __t5302t="success";
const char* const __t5479t=".s";
const char* const __t443t="\n";
const char* const __t4251t="[";
const char* const __t5510t="FAILED ";
const char* const __t5359t=" |- ";
const char* const __t5396t="completed";
const char* const __t5322t="failure";
const char* const __t5519t=" tests";
const char* const __t5325t="X";
const char* const __t5500t="PASSING ";
const char* const __t5463t="..";
const char* const __t5312t="] ";
const char* const __t5505t="no errors across ";
const char* const __t5386t="no errors found, but the run should be failing (contains _fail_ in its name)";
static const char* __t_all_errcodes[65] = {"noerr",
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1585t(char** __t5530t, uint64_t* __t5531t, uint32_t* __t5532t, uint32_t* __t5533t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5530t=unsafe_ptr;
  *__t5531t=unsafe_size;
  *__t5532t=unsafe_offset;
  *__t5533t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5534t) {
  *__t5534t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5535t) {
  int value=0;
  *__t5535t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5536t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5536t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5537t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5537t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5538t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5538t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5539t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5539t=z;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t5540t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5540t=z;
}

static inline __attribute__((always_inline)) void nat__t686t(uint32_t x, uint64_t* __t5541t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5541t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5542t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5542t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5543t) {
  *__t5543t=to;
}

static inline __attribute__((always_inline)) void add__t808t(char* allocated, uint64_t offset, char** __t5544t) {
  char* element=0;
  char* __t809t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t809t__);
  goto __t_return;
  __t_return:
  *__t5544t=__t809t__;
}

static inline __attribute__((always_inline)) int get__t1152t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5545t) {
  int __t1153t=0;
  char __t1154t__=0;
  uint64_t __t1155t__=0;
  uint64_t __t1156t__=0;
  uint64_t __t1157t__=0;
  uint64_t __t1158t__=0;
  char* __t1159t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1154t__);
  if(__t1154t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t686t(buffer__unsafe_align,&__t1155t__);
  mul__t212t(i,__t1155t__,&__t1156t__);
  nat__t686t(buffer__unsafe_offset,&__t1157t__);
  add__t188t(__t1156t__,__t1157t__,&__t1158t__);
  add__t808t(buffer__unsafe_ptr,__t1158t__,&__t1159t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5545t=__t1159t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1610t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5546t, uint64_t* __t5547t, uint64_t* __t5548t, char* __t5549t) {
  goto __t_return;
  __t_return:
  *__t5546t=unsafe_ptr;
  *__t5547t=dat__pos;
  *__t5548t=dat__length;
  *__t5549t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1614t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5550t, uint64_t* __t5551t, uint64_t* __t5552t, char* __t5553t) {
  char* unsafe_ptr=0;
  uint64_t __t1615t__=0;
  uint64_t __t1616t=0;
  char __t1617t__=0;
  uint64_t __t1618t__=0;
  uint64_t __t1619t=0;
  char __t1620t__=0;
  char* __t1621t__unsafe_ptr=0;
  uint64_t __t1621t__dat__pos=0;
  uint64_t __t1621t__dat__length=0;
  char __t1621t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t686t(buf__unsafe_align,&__t1615t__);
  __t1616t=1;
  neq__t158t(__t1615t__,__t1616t,&__t1617t__);
  if(__t1617t__){
  __t_errcode=25;
  goto __t_failure;
  }
  nat__t686t(buf__unsafe_offset,&__t1618t__);
  __t1619t=0;
  neq__t158t(__t1618t__,__t1619t,&__t1620t__);
  if(__t1620t__){
  __t_errcode=26;
  goto __t_failure;
  }
  str__t1610t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1621t__unsafe_ptr,&__t1621t__dat__pos,&__t1621t__dat__length,&__t1621t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5550t=__t1621t__unsafe_ptr;
  *__t5551t=__t1621t__dat__pos;
  *__t5552t=__t1621t__dat__length;
  *__t5553t=__t1621t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1648t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5554t, uint64_t* __t5555t, uint64_t* __t5556t, char* __t5557t) {
  uint64_t __t1649t=0;
  char __t1650t__=0;
  char* __t1652t__=0;
  char __t1653t__value=0;
  char first=0;
  char* __t1654t__unsafe_ptr=0;
  uint64_t __t1654t__dat__pos=0;
  uint64_t __t1654t__dat__length=0;
  char __t1654t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1649t=0;
  neq__t158t(length,__t1649t,&__t1650t__);
  if(__t1650t__){
  __t_errcode=get__t1152t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1652t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1652t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1653t__value,__t1652t__,1);
  first=__t1653t__value;
  }
  __t_errcode=str__t1614t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1654t__unsafe_ptr,&__t1654t__dat__pos,&__t1654t__dat__length,&__t1654t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5554t=__t1654t__unsafe_ptr;
  *__t5555t=__t1654t__dat__pos;
  *__t5556t=__t1654t__dat__length;
  *__t5557t=__t1654t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1670t(const char* c, char** __t5558t, uint64_t* __t5559t, uint64_t* __t5560t, char* __t5561t) {
  char* __t1671t__unsafe_ptr=0;
  uint64_t __t1671t__unsafe_size=0;
  uint32_t __t1671t__unsafe_offset=0;
  uint32_t __t1671t__unsafe_align=0;
  char* __t1672t__unsafe_ptr=0;
  uint64_t __t1672t__unsafe_size=0;
  uint32_t __t1672t__unsafe_offset=0;
  uint32_t __t1672t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1673t__=0;
  uint64_t length=0;
  uint64_t __t1674t=0;
  uint64_t __t1675t__=0;
  char __t1676t=0;
  uint64_t __t1677t=0;
  char* __t1679t__unsafe_ptr=0;
  uint64_t __t1679t__dat__pos=0;
  uint64_t __t1679t__dat__length=0;
  char __t1679t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1585t(&__t1671t__unsafe_ptr,&__t1671t__unsafe_size,&__t1671t__unsafe_offset,&__t1671t__unsafe_align);
  __t1672t__unsafe_ptr=__t1671t__unsafe_ptr;
  __t1672t__unsafe_size=__t1671t__unsafe_size;
  __t1672t__unsafe_offset=__t1671t__unsafe_offset;
  __t1672t__unsafe_align=__t1671t__unsafe_align;
  buf__unsafe_ptr=__t1672t__unsafe_ptr;
  buf__unsafe_size=__t1672t__unsafe_size;
  buf__unsafe_offset=__t1672t__unsafe_offset;
  buf__unsafe_align=__t1672t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1673t__);
  buf__unsafe_ptr=__t1673t__;
  if(c){
  length=strlen(c);
  }
  __t1674t=1;
  add__t188t(length,__t1674t,&__t1675t__);
  buf__unsafe_size=__t1675t__;
  __t1677t=0;
  __t_complain=str__t1648t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1677t,length,&__t1679t__unsafe_ptr,&__t1679t__dat__pos,&__t1679t__dat__length,&__t1679t__dat__first);
  __t1676t=__t_complain;
  if(__t_complain){
  goto __t1676t__label;
  }
  ret__unsafe_ptr=__t1679t__unsafe_ptr;
  ret__dat__pos=__t1679t__dat__pos;
  ret__dat__length=__t1679t__dat__length;
  ret__dat__first=__t1679t__dat__first;
  __t1676t__label:__t1676t=__t1676t==0;
  goto __t_return;
  __t_return:
  *__t5558t=ret__unsafe_ptr;
  *__t5559t=ret__dat__pos;
  *__t5560t=ret__dat__length;
  *__t5561t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t468t(char* __t5562t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5562t=supports;
}

static inline __attribute__((always_inline)) void colors__t469t(char* __t5563t) {
  char __t470t__=0;
  char initialized=0;
  supports_ansi__t468t(&__t470t__);
  initialized=__t470t__;
  goto __t_return;
  __t_return:
  *__t5563t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1086t(char** __t5564t, uint64_t* __t5565t, uint32_t* __t5566t, uint32_t* __t5567t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5564t=unsafe_ptr;
  *__t5565t=unsafe_size;
  *__t5566t=unsafe_offset;
  *__t5567t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t806t(char** __t5568t) {
  char* allocated=*__t5568t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5568t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5569t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5569t=z;
}

static inline __attribute__((always_inline)) void zero__t807t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t645t(char* x, char* __t5570t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5570t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5571t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5571t=z;
}

static inline __attribute__((always_inline)) int alloc__t790t(uint64_t bytes, char** __t5572t) {
  char* allocated=0;
  char __t791t__=0;
  char __t792t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t645t(allocated,&__t791t__);
  not__t42t(__t791t__,&__t792t__);
  if(__t792t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5572t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t929t(char** __t5573t, uint64_t* __t5574t, uint32_t* __t5575t, uint32_t* __t5576t, uint64_t size, char** __t5577t, uint64_t* __t5578t, uint32_t* __t5579t, uint32_t* __t5580t) {
  char* buffer__unsafe_ptr=*__t5573t;
  uint64_t buffer__unsafe_size=*__t5574t;
  uint32_t buffer__unsafe_offset=*__t5575t;
  uint32_t buffer__unsafe_align=*__t5576t;
  int __t930t=0;
  int __t931t=0;
  char __t933t__=0;
  uint64_t __t934t=0;
  char __t935t__=0;
  char __t936t=0;
  uint64_t __t937t=0;
  uint64_t __t938t__=0;
  uint64_t __t939t__=0;
  int __t941t=0;
  uint64_t __t942t=0;
  char __t943t__=0;
  uint64_t __t944t__=0;
  uint64_t __t945t__=0;
  uint64_t bytes=0;
  int __t946t=0;
  uint64_t __t947t=0;
  char __t948t__=0;
  char* __t949t__=0;
  int __t950t=0;
  uint64_t __t951t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t933t__);
  if(__t933t__){
  __t934t=0;
  neq__t158t(size,__t934t,&__t935t__);
  __t936t=__t935t__;
  }
  if(__t936t){
  __t937t=0;
  nat__t686t(buffer__unsafe_align,&__t938t__);
  mul__t212t(__t938t__,size,&__t939t__);
  zero__t807t(buffer__unsafe_ptr,__t937t,__t939t__);
  goto __t_return;
  }
  __t942t=0;
  neq__t158t(buffer__unsafe_size,__t942t,&__t943t__);
  if(__t943t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t686t(buffer__unsafe_align,&__t944t__);
  mul__t212t(__t944t__,size,&__t945t__);
  bytes=__t945t__;
  __t947t=0;
  eq__t134t(bytes,__t947t,&__t948t__);
  if(__t948t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t790t(bytes,&__t949t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t951t=0;
  zero__t807t(__t949t__,__t951t,bytes);
  buffer__unsafe_ptr=__t949t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t806t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5573t=buffer__unsafe_ptr;
  *__t5574t=buffer__unsafe_size;
  *__t5575t=buffer__unsafe_offset;
  *__t5576t=buffer__unsafe_align;
  *__t5577t=buffer__unsafe_ptr;
  *__t5578t=buffer__unsafe_size;
  *__t5579t=buffer__unsafe_offset;
  *__t5580t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int alloc__t1084t(uint64_t size, char** __t5581t, uint64_t* __t5582t, uint32_t* __t5583t, uint32_t* __t5584t) {
  char __t1085t=0;
  char* __t1088t__unsafe_ptr=0;
  uint64_t __t1088t__unsafe_size=0;
  uint32_t __t1088t__unsafe_offset=0;
  uint32_t __t1088t__unsafe_align=0;
  char* __t1089t__unsafe_ptr=0;
  uint64_t __t1089t__unsafe_size=0;
  uint32_t __t1089t__unsafe_offset=0;
  uint32_t __t1089t__unsafe_align=0;
  char* __t1091t__unsafe_ptr=0;
  uint64_t __t1091t__unsafe_size=0;
  uint32_t __t1091t__unsafe_offset=0;
  uint32_t __t1091t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  char __t1092t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1086t(&__t1088t__unsafe_ptr,&__t1088t__unsafe_size,&__t1088t__unsafe_offset,&__t1088t__unsafe_align);
  __t_complain=alloc__t929t(&__t1088t__unsafe_ptr,&__t1088t__unsafe_size,&__t1088t__unsafe_offset,&__t1088t__unsafe_align,size,&__t1089t__unsafe_ptr,&__t1089t__unsafe_size,&__t1089t__unsafe_offset,&__t1089t__unsafe_align);
  __t1085t=__t_complain;
  if(__t_complain){
  goto __t1085t__label;
  }
  __t1091t__unsafe_ptr=__t1089t__unsafe_ptr;
  __t1091t__unsafe_size=__t1089t__unsafe_size;
  __t1091t__unsafe_offset=__t1089t__unsafe_offset;
  __t1091t__unsafe_align=__t1089t__unsafe_align;
  ret__unsafe_ptr=__t1091t__unsafe_ptr;
  ret__unsafe_size=__t1091t__unsafe_size;
  ret__unsafe_offset=__t1091t__unsafe_offset;
  ret__unsafe_align=__t1091t__unsafe_align;
  __t1085t__label:__t1085t=__t1085t==0;
  not__t42t(__t1085t,&__t1092t__);
  if(__t1092t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t806t(&ret__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5581t=ret__unsafe_ptr;
  *__t5582t=ret__unsafe_size;
  *__t5583t=ret__unsafe_offset;
  *__t5584t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1203t(char** __t5585t, uint64_t* __t5586t, uint32_t* __t5587t, uint32_t* __t5588t, uint64_t _pos, char** __t5589t, uint64_t* __t5590t, uint32_t* __t5591t, uint32_t* __t5592t, uint64_t* __t5593t) {
  char* buf__unsafe_ptr=*__t5585t;
  uint64_t buf__unsafe_size=*__t5586t;
  uint32_t buf__unsafe_offset=*__t5587t;
  uint32_t buf__unsafe_align=*__t5588t;
  uint64_t __t1204t=0;
  uint64_t pos=0;
  __t1204t=_pos;
  pos=__t1204t;
  goto __t_return;
  __t_return:
  *__t5585t=buf__unsafe_ptr;
  *__t5586t=buf__unsafe_size;
  *__t5587t=buf__unsafe_offset;
  *__t5588t=buf__unsafe_align;
  *__t5589t=buf__unsafe_ptr;
  *__t5590t=buf__unsafe_size;
  *__t5591t=buf__unsafe_offset;
  *__t5592t=buf__unsafe_align;
  *__t5593t=pos;
}

static inline __attribute__((always_inline)) void arena__t1206t(char** __t5594t, uint64_t* __t5595t, uint32_t* __t5596t, uint32_t* __t5597t, char** __t5598t, uint64_t* __t5599t, uint32_t* __t5600t, uint32_t* __t5601t, uint64_t* __t5602t) {
  char* buf__unsafe_ptr=*__t5594t;
  uint64_t buf__unsafe_size=*__t5595t;
  uint32_t buf__unsafe_offset=*__t5596t;
  uint32_t buf__unsafe_align=*__t5597t;
  uint64_t __t1207t=0;
  char* __t1208t__buf__unsafe_ptr=0;
  uint64_t __t1208t__buf__unsafe_size=0;
  uint32_t __t1208t__buf__unsafe_offset=0;
  uint32_t __t1208t__buf__unsafe_align=0;
  uint64_t __t1208t__pos=0;
  __t1207t=0;
  arena__t1203t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1207t,&__t1208t__buf__unsafe_ptr,&__t1208t__buf__unsafe_size,&__t1208t__buf__unsafe_offset,&__t1208t__buf__unsafe_align,&__t1208t__pos);
  goto __t_return;
  __t_return:
  *__t5594t=buf__unsafe_ptr;
  *__t5595t=buf__unsafe_size;
  *__t5596t=buf__unsafe_offset;
  *__t5597t=buf__unsafe_align;
  *__t5598t=__t1208t__buf__unsafe_ptr;
  *__t5599t=__t1208t__buf__unsafe_size;
  *__t5600t=__t1208t__buf__unsafe_offset;
  *__t5601t=__t1208t__buf__unsafe_align;
  *__t5602t=__t1208t__pos;
}

static inline __attribute__((always_inline)) void len__t1160t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5603t) {
  goto __t_return;
  __t_return:
  *__t5603t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t5604t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5604t=z;
}

static inline __attribute__((always_inline)) void allocated__t1210t(char** __t5605t, uint64_t* __t5606t, uint32_t* __t5607t, uint32_t* __t5608t, uint64_t pos, char** __t5609t, uint64_t* __t5610t, uint32_t* __t5611t, uint32_t* __t5612t, uint64_t* __t5613t) {
  char* buf__unsafe_ptr=*__t5605t;
  uint64_t buf__unsafe_size=*__t5606t;
  uint32_t buf__unsafe_offset=*__t5607t;
  uint32_t buf__unsafe_align=*__t5608t;
  goto __t_return;
  __t_return:
  *__t5605t=buf__unsafe_ptr;
  *__t5606t=buf__unsafe_size;
  *__t5607t=buf__unsafe_offset;
  *__t5608t=buf__unsafe_align;
  *__t5609t=buf__unsafe_ptr;
  *__t5610t=buf__unsafe_size;
  *__t5611t=buf__unsafe_offset;
  *__t5612t=buf__unsafe_align;
  *__t5613t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1285t(char** __t5614t, uint64_t* __t5615t, uint32_t* __t5616t, uint32_t* __t5617t, uint64_t* __t5618t, uint64_t length, char** __t5619t, uint64_t* __t5620t, uint32_t* __t5621t, uint32_t* __t5622t, uint64_t* __t5623t) {
  char* allocator__buf__unsafe_ptr=*__t5614t;
  uint64_t allocator__buf__unsafe_size=*__t5615t;
  uint32_t allocator__buf__unsafe_offset=*__t5616t;
  uint32_t allocator__buf__unsafe_align=*__t5617t;
  uint64_t allocator__pos=*__t5618t;
  int __t1286t=0;
  uint64_t __t1287t__=0;
  uint64_t next_pos=0;
  uint64_t __t1288t__=0;
  char __t1289t__=0;
  uint64_t __t1290t=0;
  uint64_t __t1291t__=0;
  uint64_t pos=0;
  char* __t1292t__buf__unsafe_ptr=0;
  uint64_t __t1292t__buf__unsafe_size=0;
  uint32_t __t1292t__buf__unsafe_offset=0;
  uint32_t __t1292t__buf__unsafe_align=0;
  uint64_t __t1292t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1287t__);
  next_pos=__t1287t__;
  len__t1160t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1288t__);
  gt__t325t(next_pos,__t1288t__,&__t1289t__);
  if(__t1289t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1290t=0;
  add__t188t(allocator__pos,__t1290t,&__t1291t__);
  pos=__t1291t__;
  allocator__pos=next_pos;
  allocated__t1210t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1292t__buf__unsafe_ptr,&__t1292t__buf__unsafe_size,&__t1292t__buf__unsafe_offset,&__t1292t__buf__unsafe_align,&__t1292t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5614t=allocator__buf__unsafe_ptr;
  *__t5615t=allocator__buf__unsafe_size;
  *__t5616t=allocator__buf__unsafe_offset;
  *__t5617t=allocator__buf__unsafe_align;
  *__t5618t=allocator__pos;
  *__t5619t=__t1292t__buf__unsafe_ptr;
  *__t5620t=__t1292t__buf__unsafe_size;
  *__t5621t=__t1292t__buf__unsafe_offset;
  *__t5622t=__t1292t__buf__unsafe_align;
  *__t5623t=__t1292t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1751t(char** __t5624t, uint64_t* __t5625t, uint32_t* __t5626t, uint32_t* __t5627t, uint64_t* __t5628t, const char* _other, char** __t5629t, uint64_t* __t5630t, uint64_t* __t5631t, char* __t5632t) {
  char* CHARS__buf__unsafe_ptr=*__t5624t;
  uint64_t CHARS__buf__unsafe_size=*__t5625t;
  uint32_t CHARS__buf__unsafe_offset=*__t5626t;
  uint32_t CHARS__buf__unsafe_align=*__t5627t;
  uint64_t CHARS__pos=*__t5628t;
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
  str__t1670t(_other,&__t1752t__unsafe_ptr,&__t1752t__dat__pos,&__t1752t__dat__length,&__t1752t__dat__first);
  other__unsafe_ptr=__t1752t__unsafe_ptr;
  other__dat__pos=__t1752t__dat__pos;
  other__dat__length=__t1752t__dat__length;
  other__dat__first=__t1752t__dat__first;
  __t_errcode=alloc__t1285t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1753t__buf__unsafe_ptr,&__t1753t__buf__unsafe_size,&__t1753t__buf__unsafe_offset,&__t1753t__buf__unsafe_align,&__t1753t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1753t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1753t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1753t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1753t__buf__unsafe_align;
  surface__pos=__t1753t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1614t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1755t__unsafe_ptr,&__t1755t__dat__pos,&__t1755t__dat__length,&__t1755t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5624t=CHARS__buf__unsafe_ptr;
  *__t5625t=CHARS__buf__unsafe_size;
  *__t5626t=CHARS__buf__unsafe_offset;
  *__t5627t=CHARS__buf__unsafe_align;
  *__t5628t=CHARS__pos;
  *__t5629t=__t1755t__unsafe_ptr;
  *__t5630t=__t1755t__dat__pos;
  *__t5631t=__t1755t__dat__length;
  *__t5632t=__t1755t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1161t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1687t(char** __t5633t, uint64_t* __t5634t, uint32_t* __t5635t, uint32_t* __t5636t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5633t=unsafe_ptr;
  *__t5634t=unsafe_size;
  *__t5635t=unsafe_offset;
  *__t5636t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t1680t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5637t) {
  goto __t_return;
  __t_return:
  *__t5637t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1776t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5638t, uint64_t* __t5639t, uint64_t* __t5640t, char* __t5641t) {
  char* __t1777t__unsafe_ptr=0;
  uint64_t __t1777t__unsafe_size=0;
  uint32_t __t1777t__unsafe_offset=0;
  uint32_t __t1777t__unsafe_align=0;
  uint64_t __t1778t=0;
  uint64_t __t1779t__=0;
  uint64_t __t1780t__=0;
  char* __t1781t__unsafe_ptr=0;
  uint64_t __t1781t__unsafe_size=0;
  uint32_t __t1781t__unsafe_offset=0;
  uint32_t __t1781t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t1783t=0;
  uint64_t __t1784t=0;
  char* __t1785t__unsafe_ptr=0;
  uint64_t __t1785t__dat__pos=0;
  uint64_t __t1785t__dat__length=0;
  char __t1785t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1687t(&__t1777t__unsafe_ptr,&__t1777t__unsafe_size,&__t1777t__unsafe_offset,&__t1777t__unsafe_align);
  __t1778t=1;
  len__t1680t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1779t__);
  add__t188t(__t1778t,__t1779t__,&__t1780t__);
  __t_errcode=alloc__t929t(&__t1777t__unsafe_ptr,&__t1777t__unsafe_size,&__t1777t__unsafe_offset,&__t1777t__unsafe_align,__t1780t__,&__t1781t__unsafe_ptr,&__t1781t__unsafe_size,&__t1781t__unsafe_offset,&__t1781t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1781t__unsafe_ptr;
  buf__unsafe_size=__t1781t__unsafe_size;
  buf__unsafe_offset=__t1781t__unsafe_offset;
  buf__unsafe_align=__t1781t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1784t=0;
  __t_errcode=str__t1614t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1784t,other__dat__length,other__dat__first,&__t1785t__unsafe_ptr,&__t1785t__dat__pos,&__t1785t__dat__length,&__t1785t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t806t(&__t1785t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5638t=__t1785t__unsafe_ptr;
  *__t5639t=__t1785t__dat__pos;
  *__t5640t=__t1785t__dat__length;
  *__t5641t=__t1785t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1800t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5642t, char** __t5643t, uint64_t* __t5644t, uint64_t* __t5645t, char* __t5646t) {
  int __t1801t=0;
  char* __t1803t__unsafe_ptr=0;
  uint64_t __t1803t__dat__pos=0;
  uint64_t __t1803t__dat__length=0;
  char __t1803t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1805t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1161t();
  __t_errcode=copy_null_terminated__t1776t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1803t__unsafe_ptr,&__t1803t__dat__pos,&__t1803t__dat__length,&__t1803t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1803t__unsafe_ptr;
  str__dat__pos=__t1803t__dat__pos;
  str__dat__length=__t1803t__dat__length;
  str__dat__first=__t1803t__dat__first;
  add__t808t(str__unsafe_ptr,str__dat__pos,&__t1805t__);
  _ret=__t1805t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t806t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5642t=cstr;
  *__t5643t=str__unsafe_ptr;
  *__t5644t=str__dat__pos;
  *__t5645t=str__dat__length;
  *__t5646t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1810t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5647t) {
  goto __t_return;
  __t_return:
  *__t5647t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t5144t(char* unsafe_ptr) {
  int __t5146t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t5147t(const char* path, char** __t5648t) {
  int __t5149t=0;
  char* unsafe_ptr=0;
  char __t5151t__=0;
  char __t5152t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t645t(unsafe_ptr,&__t5151t__);
  not__t42t(__t5151t__,&__t5152t__);
  if(__t5152t__){
  __t_errcode=50;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5144t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5648t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t5154t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t5649t) {
  const char* __t5155t__cstr=0;
  char* __t5155t__str__unsafe_ptr=0;
  uint64_t __t5155t__str__dat__pos=0;
  uint64_t __t5155t__str__dat__length=0;
  char __t5155t__str__dat__first=0;
  const char* __t5157t__=0;
  char* __t5158t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1800t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5155t__cstr,&__t5155t__str__unsafe_ptr,&__t5155t__str__dat__pos,&__t5155t__str__dat__length,&__t5155t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1810t(__t5155t__cstr,__t5155t__str__unsafe_ptr,__t5155t__str__dat__pos,__t5155t__str__dat__length,__t5155t__str__dat__first,&__t5157t__);
  __t_errcode=open__t5147t(__t5157t__,&__t5158t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5144t(__t5158t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5649t=__t5158t__unsafe_ptr;
  
  __t_skip_returns:free__t806t(&__t5155t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t5166t(char** __t5650t, const char** __t5651t) {
  char* f__unsafe_ptr=*__t5650t;
  char __t5167t__=0;
  char __t5168t__=0;
  char* de=0;
  char __t5169t__=0;
  char __t5170t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t645t(f__unsafe_ptr,&__t5167t__);
  not__t42t(__t5167t__,&__t5168t__);
  if(__t5168t__){
  __t_errcode=61;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t645t(de,&__t5169t__);
  not__t42t(__t5169t__,&__t5170t__);
  if(__t5170t__){
  __t_errcode=62;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5650t=f__unsafe_ptr;
  *__t5651t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t5171t(char** __t5652t, char** __t5653t, uint64_t* __t5654t, uint64_t* __t5655t, char* __t5656t) {
  char* f__unsafe_ptr=*__t5652t;
  const char* __t5172t__=0;
  char* __t5173t__unsafe_ptr=0;
  uint64_t __t5173t__dat__pos=0;
  uint64_t __t5173t__dat__length=0;
  char __t5173t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t5166t(&f__unsafe_ptr,&__t5172t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1670t(__t5172t__,&__t5173t__unsafe_ptr,&__t5173t__dat__pos,&__t5173t__dat__length,&__t5173t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5652t=f__unsafe_ptr;
  *__t5653t=__t5173t__unsafe_ptr;
  *__t5654t=__t5173t__dat__pos;
  *__t5655t=__t5173t__dat__length;
  *__t5656t=__t5173t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t5237t(char** __t5657t, uint64_t __t_anon1, char** __t5658t, uint64_t* __t5659t, uint64_t* __t5660t, char* __t5661t) {
  char* data__unsafe_ptr=*__t5657t;
  char* __t5238t__unsafe_ptr=0;
  uint64_t __t5238t__dat__pos=0;
  uint64_t __t5238t__dat__length=0;
  char __t5238t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t5171t(&data__unsafe_ptr,&__t5238t__unsafe_ptr,&__t5238t__dat__pos,&__t5238t__dat__length,&__t5238t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5657t=data__unsafe_ptr;
  *__t5658t=__t5238t__unsafe_ptr;
  *__t5659t=__t5238t__dat__pos;
  *__t5660t=__t5238t__dat__length;
  *__t5661t=__t5238t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void char__t1682t(const char* s, char* __t5662t) {
  char* __t1683t__unsafe_ptr=0;
  uint64_t __t1683t__dat__pos=0;
  uint64_t __t1683t__dat__length=0;
  char __t1683t__dat__first=0;
  str__t1670t(s,&__t1683t__unsafe_ptr,&__t1683t__dat__pos,&__t1683t__dat__length,&__t1683t__dat__first);
  goto __t_return;
  __t_return:
  *__t5662t=__t1683t__dat__first;
}

static inline __attribute__((always_inline)) void neq__t1685t(char x, char y, char* __t5663t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5663t=z;
}

static inline __attribute__((always_inline)) void eq__t1817t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5664t) {
  uint64_t __t1818t__=0;
  uint64_t n=0;
  uint64_t __t1819t__=0;
  char __t1820t__=0;
  char __t1821t=0;
  char __t1822t__=0;
  char __t1823t=0;
  char z=0;
  len__t1680t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1818t__);
  n=__t1818t__;
  len__t1680t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1819t__);
  neq__t158t(n,__t1819t__,&__t1820t__);
  if(__t1820t__){
  __t1821t=0;
  goto __t_return;
  }
  neq__t1685t(x__dat__first,y__dat__first,&__t1822t__);
  if(__t1822t__){
  __t1823t=0;
  __t1821t=__t1823t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1821t=z;
  goto __t_return;
  __t_return:
  *__t5664t=__t1821t;
}

void eq__t1824t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t5665t) {
  char __t1825t__=0;
  char __t1826t__=0;
  char __t1827t=0;
  char* __t1828t__unsafe_ptr=0;
  uint64_t __t1828t__dat__pos=0;
  uint64_t __t1828t__dat__length=0;
  char __t1828t__dat__first=0;
  char __t1829t__=0;
  char__t1682t(y,&__t1825t__);
  neq__t1685t(x__dat__first,__t1825t__,&__t1826t__);
  if(__t1826t__){
  __t1827t=0;
  goto __t_return;
  }
  str__t1670t(y,&__t1828t__unsafe_ptr,&__t1828t__dat__pos,&__t1828t__dat__length,&__t1828t__dat__first);
  eq__t1817t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1828t__unsafe_ptr,__t1828t__dat__pos,__t1828t__dat__length,__t1828t__dat__first,&__t1829t__);
  __t1827t=__t1829t__;
  goto __t_return;
  __t_return:
  *__t5665t=__t1827t;
}

int unsafe_temp__t1786t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5666t, char** __t5667t, uint64_t* __t5668t, uint64_t* __t5669t, char* __t5670t) {
  int __t1787t=0;
  char* __t1788t__unsafe_ptr=0;
  uint64_t __t1788t__unsafe_size=0;
  uint32_t __t1788t__unsafe_offset=0;
  uint32_t __t1788t__unsafe_align=0;
  uint64_t __t1789t=0;
  uint64_t __t1790t__=0;
  uint64_t __t1791t__=0;
  char* __t1792t__unsafe_ptr=0;
  uint64_t __t1792t__unsafe_size=0;
  uint32_t __t1792t__unsafe_offset=0;
  uint32_t __t1792t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1794t=0;
  char __t1795t__=0;
  char first_character=0;
  uint64_t __t1796t=0;
  char* __t1797t__unsafe_ptr=0;
  uint64_t __t1797t__dat__pos=0;
  uint64_t __t1797t__dat__length=0;
  char __t1797t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1798t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1687t(&__t1788t__unsafe_ptr,&__t1788t__unsafe_size,&__t1788t__unsafe_offset,&__t1788t__unsafe_align);
  __t1789t=1;
  add__t188t(__t1789t,other__dat__length,&__t1790t__);
  add__t188t(__t1790t__,prefix__dat__length,&__t1791t__);
  __t_errcode=alloc__t929t(&__t1788t__unsafe_ptr,&__t1788t__unsafe_size,&__t1788t__unsafe_offset,&__t1788t__unsafe_align,__t1791t__,&__t1792t__unsafe_ptr,&__t1792t__unsafe_size,&__t1792t__unsafe_offset,&__t1792t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1792t__unsafe_ptr;
  buf__unsafe_size=__t1792t__unsafe_size;
  buf__unsafe_offset=__t1792t__unsafe_offset;
  buf__unsafe_align=__t1792t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1794t=0;
  eq__t134t(prefix__dat__length,__t1794t,&__t1795t__);
  if(__t1795t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1796t=0;
  __t_errcode=str__t1614t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1796t,other__dat__length,first_character,&__t1797t__unsafe_ptr,&__t1797t__dat__pos,&__t1797t__dat__length,&__t1797t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1797t__unsafe_ptr;
  str__dat__pos=__t1797t__dat__pos;
  str__dat__length=__t1797t__dat__length;
  str__dat__first=__t1797t__dat__first;
  add__t808t(str__unsafe_ptr,str__dat__pos,&__t1798t__);
  _ret=__t1798t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t806t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5666t=cstr;
  *__t5667t=str__unsafe_ptr;
  *__t5668t=str__dat__pos;
  *__t5669t=str__dat__length;
  *__t5670t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1809t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5671t) {
  goto __t_return;
  __t_return:
  *__t5671t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t5071t(const char* path, char* __t5672t) {
  int __t5073t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t5672t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t5081t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t5673t) {
  int __t5083t=0;
  const char* __t5084t__cstr=0;
  char* __t5084t__str__unsafe_ptr=0;
  uint64_t __t5084t__str__dat__pos=0;
  uint64_t __t5084t__str__dat__length=0;
  char __t5084t__str__dat__first=0;
  const char* __t5086t__=0;
  char __t5087t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1786t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t5084t__cstr,&__t5084t__str__unsafe_ptr,&__t5084t__str__dat__pos,&__t5084t__str__dat__length,&__t5084t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1809t(__t5084t__cstr,__t5084t__str__unsafe_ptr,__t5084t__str__dat__pos,__t5084t__str__dat__length,__t5084t__str__dat__first,&__t5086t__);
  is_dir__t5071t(__t5086t__,&__t5087t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5673t=__t5087t__;
  
  __t_skip_returns:free__t806t(&__t5084t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t409t(uint64_t x, uint64_t y, uint64_t* __t5674t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5674t=z;
}

static inline __attribute__((always_inline)) void reuse__t5431t(char** __t5675t, uint64_t* __t5676t, uint32_t* __t5677t, uint32_t* __t5678t, uint64_t* __t5679t, uint64_t* __t5680t) {
  char* arn__buf__unsafe_ptr=*__t5675t;
  uint64_t arn__buf__unsafe_size=*__t5676t;
  uint32_t arn__buf__unsafe_offset=*__t5677t;
  uint32_t arn__buf__unsafe_align=*__t5678t;
  uint64_t arn__pos=*__t5679t;
  uint64_t __t5432t=0;
  uint64_t __t5433t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5434t=0;
  uint64_t __t5436t__=0;
  __t5432t=0;
  add__t188t(__t5432t,arn__pos,&__t5433t__);
  tracked_position=__t5433t__;
  goto __t_return;
  __t_return:
  *__t5675t=arn__buf__unsafe_ptr;
  *__t5676t=arn__buf__unsafe_size;
  *__t5677t=arn__buf__unsafe_offset;
  *__t5678t=arn__buf__unsafe_align;
  *__t5679t=arn__pos;
  *__t5680t=tracked_position;
}

static inline __attribute__((always_inline)) void str__t1647t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5681t, uint64_t* __t5682t, uint64_t* __t5683t, char* __t5684t) {
  goto __t_return;
  __t_return:
  *__t5681t=other__unsafe_ptr;
  *__t5682t=other__dat__pos;
  *__t5683t=other__dat__length;
  *__t5684t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5685t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5685t=z;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t5686t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5686t=z;
}

static inline __attribute__((always_inline)) void status__t1215t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5687t, uint64_t* __t5688t, uint32_t* __t5689t, uint32_t* __t5690t, uint64_t* __t5691t) {
  char* __t1216t__unsafe_ptr=0;
  uint64_t __t1216t__unsafe_size=0;
  uint32_t __t1216t__unsafe_offset=0;
  uint32_t __t1216t__unsafe_align=0;
  uint64_t __t1217t=0;
  __t1216t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1216t__unsafe_size=self__buf__unsafe_size;
  __t1216t__unsafe_offset=self__buf__unsafe_offset;
  __t1216t__unsafe_align=self__buf__unsafe_align;
  __t1217t=self__pos;
  goto __t_return;
  __t_return:
  *__t5687t=__t1216t__unsafe_ptr;
  *__t5688t=__t1216t__unsafe_size;
  *__t5689t=__t1216t__unsafe_offset;
  *__t5690t=__t1216t__unsafe_align;
  *__t5691t=__t1217t;
}

static inline __attribute__((always_inline)) int copy__t1746t(char** __t5692t, uint64_t* __t5693t, uint32_t* __t5694t, uint32_t* __t5695t, uint64_t* __t5696t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5697t, uint64_t* __t5698t, uint64_t* __t5699t, char* __t5700t) {
  char* CHARS__buf__unsafe_ptr=*__t5692t;
  uint64_t CHARS__buf__unsafe_size=*__t5693t;
  uint32_t CHARS__buf__unsafe_offset=*__t5694t;
  uint32_t CHARS__buf__unsafe_align=*__t5695t;
  uint64_t CHARS__pos=*__t5696t;
  char* __t1747t__unsafe_ptr=0;
  uint64_t __t1747t__dat__pos=0;
  uint64_t __t1747t__dat__length=0;
  char __t1747t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1748t__buf__unsafe_ptr=0;
  uint64_t __t1748t__buf__unsafe_size=0;
  uint32_t __t1748t__buf__unsafe_offset=0;
  uint32_t __t1748t__buf__unsafe_align=0;
  uint64_t __t1748t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1749t=0;
  char* __t1750t__unsafe_ptr=0;
  uint64_t __t1750t__dat__pos=0;
  uint64_t __t1750t__dat__length=0;
  char __t1750t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1647t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1747t__unsafe_ptr,&__t1747t__dat__pos,&__t1747t__dat__length,&__t1747t__dat__first);
  other__unsafe_ptr=__t1747t__unsafe_ptr;
  other__dat__pos=__t1747t__dat__pos;
  other__dat__length=__t1747t__dat__length;
  other__dat__first=__t1747t__dat__first;
  __t_errcode=alloc__t1285t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1748t__buf__unsafe_ptr,&__t1748t__buf__unsafe_size,&__t1748t__buf__unsafe_offset,&__t1748t__buf__unsafe_align,&__t1748t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1748t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1748t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1748t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1748t__buf__unsafe_align;
  surface__pos=__t1748t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1614t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1750t__unsafe_ptr,&__t1750t__dat__pos,&__t1750t__dat__length,&__t1750t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5692t=CHARS__buf__unsafe_ptr;
  *__t5693t=CHARS__buf__unsafe_size;
  *__t5694t=CHARS__buf__unsafe_offset;
  *__t5695t=CHARS__buf__unsafe_align;
  *__t5696t=CHARS__pos;
  *__t5697t=__t1750t__unsafe_ptr;
  *__t5698t=__t1750t__dat__pos;
  *__t5699t=__t1750t__dat__length;
  *__t5700t=__t1750t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1212t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5701t, uint64_t* __t5702t, uint32_t* __t5703t, uint32_t* __t5704t, uint64_t* __t5705t) {
  char* __t1213t__unsafe_ptr=0;
  uint64_t __t1213t__unsafe_size=0;
  uint32_t __t1213t__unsafe_offset=0;
  uint32_t __t1213t__unsafe_align=0;
  uint64_t __t1214t=0;
  __t1213t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1213t__unsafe_size=self__buf__unsafe_size;
  __t1213t__unsafe_offset=self__buf__unsafe_offset;
  __t1213t__unsafe_align=self__buf__unsafe_align;
  __t1214t=self__pos;
  goto __t_return;
  __t_return:
  *__t5701t=__t1213t__unsafe_ptr;
  *__t5702t=__t1213t__unsafe_size;
  *__t5703t=__t1213t__unsafe_offset;
  *__t5704t=__t1213t__unsafe_align;
  *__t5705t=__t1214t;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t5706t) {
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
  *__t5706t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1666t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5707t, uint64_t* __t5708t, uint64_t* __t5709t, char* __t5710t) {
  uint64_t __t1668t__=0;
  char* __t1669t__unsafe_ptr=0;
  uint64_t __t1669t__dat__pos=0;
  uint64_t __t1669t__dat__length=0;
  char __t1669t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t401t(endpos,pos,&__t1668t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1648t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1668t__,&__t1669t__unsafe_ptr,&__t1669t__dat__pos,&__t1669t__dat__length,&__t1669t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5707t=__t1669t__unsafe_ptr;
  *__t5708t=__t1669t__dat__pos;
  *__t5709t=__t1669t__dat__length;
  *__t5710t=__t1669t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2898t(char** __t5711t, uint64_t* __t5712t, uint32_t* __t5713t, uint32_t* __t5714t, uint64_t* __t5715t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5716t, uint64_t* __t5717t, uint64_t* __t5718t, char* __t5719t) {
  char* CHARS__buf__unsafe_ptr=*__t5711t;
  uint64_t CHARS__buf__unsafe_size=*__t5712t;
  uint32_t CHARS__buf__unsafe_offset=*__t5713t;
  uint32_t CHARS__buf__unsafe_align=*__t5714t;
  uint64_t CHARS__pos=*__t5715t;
  char* __t2899t__unsafe_ptr=0;
  uint64_t __t2899t__dat__pos=0;
  uint64_t __t2899t__dat__length=0;
  char __t2899t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2900t__unsafe_ptr=0;
  uint64_t __t2900t__dat__pos=0;
  uint64_t __t2900t__dat__length=0;
  char __t2900t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2901t__=0;
  uint64_t __t2902t__=0;
  char __t2903t__=0;
  char __t2904t=0;
  uint64_t __t2905t__=0;
  char __t2906t__=0;
  char __t2907t=0;
  uint64_t __t2908t__=0;
  char* __t2909t__buf__unsafe_ptr=0;
  uint64_t __t2909t__buf__unsafe_size=0;
  uint32_t __t2909t__buf__unsafe_offset=0;
  uint32_t __t2909t__buf__unsafe_align=0;
  uint64_t __t2909t__pos=0;
  char* __t2910t____t1216t__unsafe_ptr=0;
  uint64_t __t2910t____t1216t__unsafe_size=0;
  uint32_t __t2910t____t1216t__unsafe_offset=0;
  uint32_t __t2910t____t1216t__unsafe_align=0;
  uint64_t __t2910t____t1217t=0;
  char* __t2911t__buf__unsafe_ptr=0;
  uint64_t __t2911t__buf__unsafe_size=0;
  uint32_t __t2911t__buf__unsafe_offset=0;
  uint32_t __t2911t__buf__unsafe_align=0;
  uint64_t __t2911t__pos=0;
  char* __t2912t__buf__unsafe_ptr=0;
  uint64_t __t2912t__buf__unsafe_size=0;
  uint32_t __t2912t__buf__unsafe_offset=0;
  uint32_t __t2912t__buf__unsafe_align=0;
  uint64_t __t2912t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2913t__unsafe_ptr=0;
  uint64_t __t2913t__dat__pos=0;
  uint64_t __t2913t__dat__length=0;
  char __t2913t__dat__first=0;
  char* __t2914t____t1213t__unsafe_ptr=0;
  uint64_t __t2914t____t1213t__unsafe_size=0;
  uint32_t __t2914t____t1213t__unsafe_offset=0;
  uint32_t __t2914t____t1213t__unsafe_align=0;
  uint64_t __t2914t____t1214t=0;
  uint64_t __t2916t=0;
  uint64_t __t2917t__=0;
  char* __t2918t__unsafe_ptr=0;
  uint64_t __t2918t__dat__pos=0;
  uint64_t __t2918t__dat__length=0;
  char __t2918t__dat__first=0;
  char __t2919t__=0;
  char __t2920t__=0;
  char __t2921t=0;
  uint64_t __t2922t__=0;
  char __t2923t__=0;
  char __t2924t=0;
  uint64_t __t2925t__=0;
  char* __t2927t__unsafe_ptr=0;
  uint64_t __t2927t__dat__pos=0;
  uint64_t __t2927t__dat__length=0;
  char __t2927t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2928t__=0;
  uint64_t __t2929t__=0;
  uint64_t __t2930t__=0;
  char* __t2931t__buf__unsafe_ptr=0;
  uint64_t __t2931t__buf__unsafe_size=0;
  uint32_t __t2931t__buf__unsafe_offset=0;
  uint32_t __t2931t__buf__unsafe_align=0;
  uint64_t __t2931t__pos=0;
  char* __t2932t____t1216t__unsafe_ptr=0;
  uint64_t __t2932t____t1216t__unsafe_size=0;
  uint32_t __t2932t____t1216t__unsafe_offset=0;
  uint32_t __t2932t____t1216t__unsafe_align=0;
  uint64_t __t2932t____t1217t=0;
  char* __t2933t__buf__unsafe_ptr=0;
  uint64_t __t2933t__buf__unsafe_size=0;
  uint32_t __t2933t__buf__unsafe_offset=0;
  uint32_t __t2933t__buf__unsafe_align=0;
  uint64_t __t2933t__pos=0;
  char* __t2934t__buf__unsafe_ptr=0;
  uint64_t __t2934t__buf__unsafe_size=0;
  uint32_t __t2934t__buf__unsafe_offset=0;
  uint32_t __t2934t__buf__unsafe_align=0;
  uint64_t __t2934t__pos=0;
  char* __t2935t__unsafe_ptr=0;
  uint64_t __t2935t__dat__pos=0;
  uint64_t __t2935t__dat__length=0;
  char __t2935t__dat__first=0;
  char* __t2936t__unsafe_ptr=0;
  uint64_t __t2936t__dat__pos=0;
  uint64_t __t2936t__dat__length=0;
  char __t2936t__dat__first=0;
  char __t2937t=0;
  char* __t2938t____t1213t__unsafe_ptr=0;
  uint64_t __t2938t____t1213t__unsafe_size=0;
  uint32_t __t2938t____t1213t__unsafe_offset=0;
  uint32_t __t2938t____t1213t__unsafe_align=0;
  uint64_t __t2938t____t1214t=0;
  uint64_t __t2940t=0;
  uint64_t __t2941t__=0;
  char* __t2942t__unsafe_ptr=0;
  uint64_t __t2942t__dat__pos=0;
  uint64_t __t2942t__dat__length=0;
  char __t2942t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1647t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2899t__unsafe_ptr,&__t2899t__dat__pos,&__t2899t__dat__length,&__t2899t__dat__first);
  s1__unsafe_ptr=__t2899t__unsafe_ptr;
  s1__dat__pos=__t2899t__dat__pos;
  s1__dat__length=__t2899t__dat__length;
  s1__dat__first=__t2899t__dat__first;
  str__t1647t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2900t__unsafe_ptr,&__t2900t__dat__pos,&__t2900t__dat__length,&__t2900t__dat__first);
  s2__unsafe_ptr=__t2900t__unsafe_ptr;
  s2__dat__pos=__t2900t__dat__pos;
  s2__dat__length=__t2900t__dat__length;
  s2__dat__first=__t2900t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2901t__);
  if(__t2901t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2902t__);
  eq__t134t(CHARS__pos,__t2902t__,&__t2903t__);
  __t2904t=__t2903t__;
  }
  if(__t2904t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2905t__);
  lt__t301t(__t2905t__,CHARS__buf__unsafe_size,&__t2906t__);
  __t2907t=__t2906t__;
  }
  if(__t2907t){
  len__t1680t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2908t__);
  __t_errcode=alloc__t1285t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2908t__,&__t2909t__buf__unsafe_ptr,&__t2909t__buf__unsafe_size,&__t2909t__buf__unsafe_offset,&__t2909t__buf__unsafe_align,&__t2909t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1215t(__t2909t__buf__unsafe_ptr,__t2909t__buf__unsafe_size,__t2909t__buf__unsafe_offset,__t2909t__buf__unsafe_align,__t2909t__pos,&__t2910t____t1216t__unsafe_ptr,&__t2910t____t1216t__unsafe_size,&__t2910t____t1216t__unsafe_offset,&__t2910t____t1216t__unsafe_align,&__t2910t____t1217t);
  arena__t1203t(&__t2910t____t1216t__unsafe_ptr,&__t2910t____t1216t__unsafe_size,&__t2910t____t1216t__unsafe_offset,&__t2910t____t1216t__unsafe_align,__t2910t____t1217t,&__t2911t__buf__unsafe_ptr,&__t2911t__buf__unsafe_size,&__t2911t__buf__unsafe_offset,&__t2911t__buf__unsafe_align,&__t2911t__pos);
  __t2912t__buf__unsafe_ptr=__t2911t__buf__unsafe_ptr;
  __t2912t__buf__unsafe_size=__t2911t__buf__unsafe_size;
  __t2912t__buf__unsafe_offset=__t2911t__buf__unsafe_offset;
  __t2912t__buf__unsafe_align=__t2911t__buf__unsafe_align;
  __t2912t__pos=__t2911t__pos;
  surface__buf__unsafe_ptr=__t2912t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2912t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2912t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2912t__buf__unsafe_align;
  surface__pos=__t2912t__pos;
  __t_errcode=copy__t1746t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2913t__unsafe_ptr,&__t2913t__dat__pos,&__t2913t__dat__length,&__t2913t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1212t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2914t____t1213t__unsafe_ptr,&__t2914t____t1213t__unsafe_size,&__t2914t____t1213t__unsafe_offset,&__t2914t____t1213t__unsafe_align,&__t2914t____t1214t);
  __t2916t=0;
  add__t188t(s1__dat__pos,__t2916t,&__t2917t__);
  __t_errcode=str__t1666t(__t2914t____t1213t__unsafe_ptr,__t2914t____t1213t__unsafe_size,__t2914t____t1213t__unsafe_offset,__t2914t____t1213t__unsafe_align,__t2914t____t1214t,__t2917t__,&__t2918t__unsafe_ptr,&__t2918t__dat__pos,&__t2918t__dat__length,&__t2918t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2919t__);
  if(__t2919t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2920t__);
  __t2921t=__t2920t__;
  }
  if(__t2921t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2922t__);
  eq__t134t(s2__dat__pos,__t2922t__,&__t2923t__);
  __t2924t=__t2923t__;
  }
  if(__t2924t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2925t__);
  __t_errcode=str__t1666t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2925t__,s1__dat__pos,&__t2927t__unsafe_ptr,&__t2927t__dat__pos,&__t2927t__dat__length,&__t2927t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2918t__unsafe_ptr=__t2927t__unsafe_ptr;
  __t2918t__dat__pos=__t2927t__dat__pos;
  __t2918t__dat__length=__t2927t__dat__length;
  __t2918t__dat__first=__t2927t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1680t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2928t__);
  len__t1680t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2929t__);
  add__t188t(__t2928t__,__t2929t__,&__t2930t__);
  __t_errcode=alloc__t1285t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2930t__,&__t2931t__buf__unsafe_ptr,&__t2931t__buf__unsafe_size,&__t2931t__buf__unsafe_offset,&__t2931t__buf__unsafe_align,&__t2931t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1215t(__t2931t__buf__unsafe_ptr,__t2931t__buf__unsafe_size,__t2931t__buf__unsafe_offset,__t2931t__buf__unsafe_align,__t2931t__pos,&__t2932t____t1216t__unsafe_ptr,&__t2932t____t1216t__unsafe_size,&__t2932t____t1216t__unsafe_offset,&__t2932t____t1216t__unsafe_align,&__t2932t____t1217t);
  arena__t1203t(&__t2932t____t1216t__unsafe_ptr,&__t2932t____t1216t__unsafe_size,&__t2932t____t1216t__unsafe_offset,&__t2932t____t1216t__unsafe_align,__t2932t____t1217t,&__t2933t__buf__unsafe_ptr,&__t2933t__buf__unsafe_size,&__t2933t__buf__unsafe_offset,&__t2933t__buf__unsafe_align,&__t2933t__pos);
  __t2934t__buf__unsafe_ptr=__t2933t__buf__unsafe_ptr;
  __t2934t__buf__unsafe_size=__t2933t__buf__unsafe_size;
  __t2934t__buf__unsafe_offset=__t2933t__buf__unsafe_offset;
  __t2934t__buf__unsafe_align=__t2933t__buf__unsafe_align;
  __t2934t__pos=__t2933t__pos;
  surface__buf__unsafe_ptr=__t2934t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2934t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2934t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2934t__buf__unsafe_align;
  surface__pos=__t2934t__pos;
  __t_errcode=copy__t1746t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2935t__unsafe_ptr,&__t2935t__dat__pos,&__t2935t__dat__length,&__t2935t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1746t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2936t__unsafe_ptr,&__t2936t__dat__pos,&__t2936t__dat__length,&__t2936t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1212t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2938t____t1213t__unsafe_ptr,&__t2938t____t1213t__unsafe_size,&__t2938t____t1213t__unsafe_offset,&__t2938t____t1213t__unsafe_align,&__t2938t____t1214t);
  __t2940t=0;
  add__t188t(prev_pos,__t2940t,&__t2941t__);
  __t_complain=str__t1666t(__t2938t____t1213t__unsafe_ptr,__t2938t____t1213t__unsafe_size,__t2938t____t1213t__unsafe_offset,__t2938t____t1213t__unsafe_align,__t2938t____t1214t,__t2941t__,&__t2942t__unsafe_ptr,&__t2942t__dat__pos,&__t2942t__dat__length,&__t2942t__dat__first);
  __t2937t=__t_complain;
  if(__t_complain){
  goto __t2937t__label;
  }
  ret__unsafe_ptr=__t2942t__unsafe_ptr;
  ret__dat__pos=__t2942t__dat__pos;
  ret__dat__length=__t2942t__dat__length;
  ret__dat__first=__t2942t__dat__first;
  __t2937t__label:__t2937t=__t2937t==0;
  __t2918t__unsafe_ptr=ret__unsafe_ptr;
  __t2918t__dat__pos=ret__dat__pos;
  __t2918t__dat__length=ret__dat__length;
  __t2918t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5711t=CHARS__buf__unsafe_ptr;
  *__t5712t=CHARS__buf__unsafe_size;
  *__t5713t=CHARS__buf__unsafe_offset;
  *__t5714t=CHARS__buf__unsafe_align;
  *__t5715t=CHARS__pos;
  *__t5716t=__t2918t__unsafe_ptr;
  *__t5717t=__t2918t__dat__pos;
  *__t5718t=__t2918t__dat__length;
  *__t5719t=__t2918t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2943t(char** __t5720t, uint64_t* __t5721t, uint32_t* __t5722t, uint32_t* __t5723t, uint64_t* __t5724t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5725t, uint64_t* __t5726t, uint64_t* __t5727t, char* __t5728t) {
  char* CHARS__buf__unsafe_ptr=*__t5720t;
  uint64_t CHARS__buf__unsafe_size=*__t5721t;
  uint32_t CHARS__buf__unsafe_offset=*__t5722t;
  uint32_t CHARS__buf__unsafe_align=*__t5723t;
  uint64_t CHARS__pos=*__t5724t;
  char* __t2944t__unsafe_ptr=0;
  uint64_t __t2944t__dat__pos=0;
  uint64_t __t2944t__dat__length=0;
  char __t2944t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2945t__unsafe_ptr=0;
  uint64_t __t2945t__dat__pos=0;
  uint64_t __t2945t__dat__length=0;
  char __t2945t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2946t__=0;
  uint64_t __t2947t__=0;
  char __t2948t__=0;
  char __t2949t=0;
  uint64_t __t2950t__=0;
  char __t2951t__=0;
  char __t2952t=0;
  uint64_t __t2953t__=0;
  char* __t2954t__buf__unsafe_ptr=0;
  uint64_t __t2954t__buf__unsafe_size=0;
  uint32_t __t2954t__buf__unsafe_offset=0;
  uint32_t __t2954t__buf__unsafe_align=0;
  uint64_t __t2954t__pos=0;
  char* __t2955t____t1216t__unsafe_ptr=0;
  uint64_t __t2955t____t1216t__unsafe_size=0;
  uint32_t __t2955t____t1216t__unsafe_offset=0;
  uint32_t __t2955t____t1216t__unsafe_align=0;
  uint64_t __t2955t____t1217t=0;
  char* __t2956t__buf__unsafe_ptr=0;
  uint64_t __t2956t__buf__unsafe_size=0;
  uint32_t __t2956t__buf__unsafe_offset=0;
  uint32_t __t2956t__buf__unsafe_align=0;
  uint64_t __t2956t__pos=0;
  char* __t2957t__buf__unsafe_ptr=0;
  uint64_t __t2957t__buf__unsafe_size=0;
  uint32_t __t2957t__buf__unsafe_offset=0;
  uint32_t __t2957t__buf__unsafe_align=0;
  uint64_t __t2957t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2958t__unsafe_ptr=0;
  uint64_t __t2958t__dat__pos=0;
  uint64_t __t2958t__dat__length=0;
  char __t2958t__dat__first=0;
  char* __t2959t____t1213t__unsafe_ptr=0;
  uint64_t __t2959t____t1213t__unsafe_size=0;
  uint32_t __t2959t____t1213t__unsafe_offset=0;
  uint32_t __t2959t____t1213t__unsafe_align=0;
  uint64_t __t2959t____t1214t=0;
  uint64_t __t2961t=0;
  uint64_t __t2962t__=0;
  char* __t2963t__unsafe_ptr=0;
  uint64_t __t2963t__dat__pos=0;
  uint64_t __t2963t__dat__length=0;
  char __t2963t__dat__first=0;
  char __t2964t__=0;
  char __t2965t__=0;
  char __t2966t=0;
  uint64_t __t2967t__=0;
  char __t2968t__=0;
  char __t2969t=0;
  uint64_t __t2970t__=0;
  char* __t2972t__unsafe_ptr=0;
  uint64_t __t2972t__dat__pos=0;
  uint64_t __t2972t__dat__length=0;
  char __t2972t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2973t__=0;
  uint64_t __t2974t__=0;
  uint64_t __t2975t__=0;
  char* __t2976t__buf__unsafe_ptr=0;
  uint64_t __t2976t__buf__unsafe_size=0;
  uint32_t __t2976t__buf__unsafe_offset=0;
  uint32_t __t2976t__buf__unsafe_align=0;
  uint64_t __t2976t__pos=0;
  char* __t2977t____t1216t__unsafe_ptr=0;
  uint64_t __t2977t____t1216t__unsafe_size=0;
  uint32_t __t2977t____t1216t__unsafe_offset=0;
  uint32_t __t2977t____t1216t__unsafe_align=0;
  uint64_t __t2977t____t1217t=0;
  char* __t2978t__buf__unsafe_ptr=0;
  uint64_t __t2978t__buf__unsafe_size=0;
  uint32_t __t2978t__buf__unsafe_offset=0;
  uint32_t __t2978t__buf__unsafe_align=0;
  uint64_t __t2978t__pos=0;
  char* __t2979t__buf__unsafe_ptr=0;
  uint64_t __t2979t__buf__unsafe_size=0;
  uint32_t __t2979t__buf__unsafe_offset=0;
  uint32_t __t2979t__buf__unsafe_align=0;
  uint64_t __t2979t__pos=0;
  char* __t2980t__unsafe_ptr=0;
  uint64_t __t2980t__dat__pos=0;
  uint64_t __t2980t__dat__length=0;
  char __t2980t__dat__first=0;
  char* __t2981t__unsafe_ptr=0;
  uint64_t __t2981t__dat__pos=0;
  uint64_t __t2981t__dat__length=0;
  char __t2981t__dat__first=0;
  char __t2982t=0;
  char* __t2983t____t1213t__unsafe_ptr=0;
  uint64_t __t2983t____t1213t__unsafe_size=0;
  uint32_t __t2983t____t1213t__unsafe_offset=0;
  uint32_t __t2983t____t1213t__unsafe_align=0;
  uint64_t __t2983t____t1214t=0;
  uint64_t __t2985t=0;
  uint64_t __t2986t__=0;
  char* __t2987t__unsafe_ptr=0;
  uint64_t __t2987t__dat__pos=0;
  uint64_t __t2987t__dat__length=0;
  char __t2987t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1647t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2944t__unsafe_ptr,&__t2944t__dat__pos,&__t2944t__dat__length,&__t2944t__dat__first);
  s1__unsafe_ptr=__t2944t__unsafe_ptr;
  s1__dat__pos=__t2944t__dat__pos;
  s1__dat__length=__t2944t__dat__length;
  s1__dat__first=__t2944t__dat__first;
  str__t1670t(_s2,&__t2945t__unsafe_ptr,&__t2945t__dat__pos,&__t2945t__dat__length,&__t2945t__dat__first);
  s2__unsafe_ptr=__t2945t__unsafe_ptr;
  s2__dat__pos=__t2945t__dat__pos;
  s2__dat__length=__t2945t__dat__length;
  s2__dat__first=__t2945t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2946t__);
  if(__t2946t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2947t__);
  eq__t134t(CHARS__pos,__t2947t__,&__t2948t__);
  __t2949t=__t2948t__;
  }
  if(__t2949t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2950t__);
  lt__t301t(__t2950t__,CHARS__buf__unsafe_size,&__t2951t__);
  __t2952t=__t2951t__;
  }
  if(__t2952t){
  len__t1680t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2953t__);
  __t_errcode=alloc__t1285t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2953t__,&__t2954t__buf__unsafe_ptr,&__t2954t__buf__unsafe_size,&__t2954t__buf__unsafe_offset,&__t2954t__buf__unsafe_align,&__t2954t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1215t(__t2954t__buf__unsafe_ptr,__t2954t__buf__unsafe_size,__t2954t__buf__unsafe_offset,__t2954t__buf__unsafe_align,__t2954t__pos,&__t2955t____t1216t__unsafe_ptr,&__t2955t____t1216t__unsafe_size,&__t2955t____t1216t__unsafe_offset,&__t2955t____t1216t__unsafe_align,&__t2955t____t1217t);
  arena__t1203t(&__t2955t____t1216t__unsafe_ptr,&__t2955t____t1216t__unsafe_size,&__t2955t____t1216t__unsafe_offset,&__t2955t____t1216t__unsafe_align,__t2955t____t1217t,&__t2956t__buf__unsafe_ptr,&__t2956t__buf__unsafe_size,&__t2956t__buf__unsafe_offset,&__t2956t__buf__unsafe_align,&__t2956t__pos);
  __t2957t__buf__unsafe_ptr=__t2956t__buf__unsafe_ptr;
  __t2957t__buf__unsafe_size=__t2956t__buf__unsafe_size;
  __t2957t__buf__unsafe_offset=__t2956t__buf__unsafe_offset;
  __t2957t__buf__unsafe_align=__t2956t__buf__unsafe_align;
  __t2957t__pos=__t2956t__pos;
  surface__buf__unsafe_ptr=__t2957t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2957t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2957t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2957t__buf__unsafe_align;
  surface__pos=__t2957t__pos;
  __t_errcode=copy__t1746t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2958t__unsafe_ptr,&__t2958t__dat__pos,&__t2958t__dat__length,&__t2958t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1212t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2959t____t1213t__unsafe_ptr,&__t2959t____t1213t__unsafe_size,&__t2959t____t1213t__unsafe_offset,&__t2959t____t1213t__unsafe_align,&__t2959t____t1214t);
  __t2961t=0;
  add__t188t(s1__dat__pos,__t2961t,&__t2962t__);
  __t_errcode=str__t1666t(__t2959t____t1213t__unsafe_ptr,__t2959t____t1213t__unsafe_size,__t2959t____t1213t__unsafe_offset,__t2959t____t1213t__unsafe_align,__t2959t____t1214t,__t2962t__,&__t2963t__unsafe_ptr,&__t2963t__dat__pos,&__t2963t__dat__length,&__t2963t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2964t__);
  if(__t2964t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2965t__);
  __t2966t=__t2965t__;
  }
  if(__t2966t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2967t__);
  eq__t134t(s2__dat__pos,__t2967t__,&__t2968t__);
  __t2969t=__t2968t__;
  }
  if(__t2969t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2970t__);
  __t_errcode=str__t1666t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2970t__,s1__dat__pos,&__t2972t__unsafe_ptr,&__t2972t__dat__pos,&__t2972t__dat__length,&__t2972t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2963t__unsafe_ptr=__t2972t__unsafe_ptr;
  __t2963t__dat__pos=__t2972t__dat__pos;
  __t2963t__dat__length=__t2972t__dat__length;
  __t2963t__dat__first=__t2972t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1680t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2973t__);
  len__t1680t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2974t__);
  add__t188t(__t2973t__,__t2974t__,&__t2975t__);
  __t_errcode=alloc__t1285t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2975t__,&__t2976t__buf__unsafe_ptr,&__t2976t__buf__unsafe_size,&__t2976t__buf__unsafe_offset,&__t2976t__buf__unsafe_align,&__t2976t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1215t(__t2976t__buf__unsafe_ptr,__t2976t__buf__unsafe_size,__t2976t__buf__unsafe_offset,__t2976t__buf__unsafe_align,__t2976t__pos,&__t2977t____t1216t__unsafe_ptr,&__t2977t____t1216t__unsafe_size,&__t2977t____t1216t__unsafe_offset,&__t2977t____t1216t__unsafe_align,&__t2977t____t1217t);
  arena__t1203t(&__t2977t____t1216t__unsafe_ptr,&__t2977t____t1216t__unsafe_size,&__t2977t____t1216t__unsafe_offset,&__t2977t____t1216t__unsafe_align,__t2977t____t1217t,&__t2978t__buf__unsafe_ptr,&__t2978t__buf__unsafe_size,&__t2978t__buf__unsafe_offset,&__t2978t__buf__unsafe_align,&__t2978t__pos);
  __t2979t__buf__unsafe_ptr=__t2978t__buf__unsafe_ptr;
  __t2979t__buf__unsafe_size=__t2978t__buf__unsafe_size;
  __t2979t__buf__unsafe_offset=__t2978t__buf__unsafe_offset;
  __t2979t__buf__unsafe_align=__t2978t__buf__unsafe_align;
  __t2979t__pos=__t2978t__pos;
  surface__buf__unsafe_ptr=__t2979t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2979t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2979t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2979t__buf__unsafe_align;
  surface__pos=__t2979t__pos;
  __t_errcode=copy__t1746t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2980t__unsafe_ptr,&__t2980t__dat__pos,&__t2980t__dat__length,&__t2980t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1746t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2981t__unsafe_ptr,&__t2981t__dat__pos,&__t2981t__dat__length,&__t2981t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1212t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2983t____t1213t__unsafe_ptr,&__t2983t____t1213t__unsafe_size,&__t2983t____t1213t__unsafe_offset,&__t2983t____t1213t__unsafe_align,&__t2983t____t1214t);
  __t2985t=0;
  add__t188t(prev_pos,__t2985t,&__t2986t__);
  __t_complain=str__t1666t(__t2983t____t1213t__unsafe_ptr,__t2983t____t1213t__unsafe_size,__t2983t____t1213t__unsafe_offset,__t2983t____t1213t__unsafe_align,__t2983t____t1214t,__t2986t__,&__t2987t__unsafe_ptr,&__t2987t__dat__pos,&__t2987t__dat__length,&__t2987t__dat__first);
  __t2982t=__t_complain;
  if(__t_complain){
  goto __t2982t__label;
  }
  ret__unsafe_ptr=__t2987t__unsafe_ptr;
  ret__dat__pos=__t2987t__dat__pos;
  ret__dat__length=__t2987t__dat__length;
  ret__dat__first=__t2987t__dat__first;
  __t2982t__label:__t2982t=__t2982t==0;
  __t2963t__unsafe_ptr=ret__unsafe_ptr;
  __t2963t__dat__pos=ret__dat__pos;
  __t2963t__dat__length=ret__dat__length;
  __t2963t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5720t=CHARS__buf__unsafe_ptr;
  *__t5721t=CHARS__buf__unsafe_size;
  *__t5722t=CHARS__buf__unsafe_offset;
  *__t5723t=CHARS__buf__unsafe_align;
  *__t5724t=CHARS__pos;
  *__t5725t=__t2963t__unsafe_ptr;
  *__t5726t=__t2963t__dat__pos;
  *__t5727t=__t2963t__dat__length;
  *__t5728t=__t2963t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1887t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t5729t) {
  int __t1888t=0;
  char __t1889t__=0;
  uint64_t __t1890t__=0;
  char* __t1891t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,s__dat__length,&__t1889t__);
  if(__t1889t__){
  __t_errcode=22;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t1890t__);
  add__t808t(s__unsafe_ptr,__t1890t__,&__t1891t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5729t=__t1891t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1913t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t5730t, uint64_t* __t5731t, uint64_t* __t5732t, char* __t5733t) {
  char* __t1914t__unsafe_ptr=0;
  uint64_t __t1914t__dat__pos=0;
  uint64_t __t1914t__dat__length=0;
  char __t1914t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1915t__=0;
  char* __t1916t__unsafe_ptr=0;
  uint64_t __t1916t__dat__pos=0;
  uint64_t __t1916t__dat__length=0;
  char __t1916t__dat__first=0;
  char __t1917t__=0;
  char __t1918t__=0;
  char __t1919t=0;
  char __t1920t__=0;
  uint64_t __t1922t__=0;
  uint64_t new_length=0;
  uint64_t __t1923t=0;
  char __t1924t__=0;
  char new_first=0;
  char* __t1926t__=0;
  char __t1927t__value=0;
  uint64_t __t1928t__=0;
  char* __t1929t__unsafe_ptr=0;
  uint64_t __t1929t__dat__pos=0;
  uint64_t __t1929t__dat__length=0;
  char __t1929t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1647t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1914t__unsafe_ptr,&__t1914t__dat__pos,&__t1914t__dat__length,&__t1914t__dat__first);
  s__unsafe_ptr=__t1914t__unsafe_ptr;
  s__dat__pos=__t1914t__dat__pos;
  s__dat__length=__t1914t__dat__length;
  s__dat__first=__t1914t__dat__first;
  eq__t134t(from,to,&__t1915t__);
  if(__t1915t__){
  str__t1670t(__t431t,&__t1916t__unsafe_ptr,&__t1916t__dat__pos,&__t1916t__dat__length,&__t1916t__dat__first);
  goto __t_return;
  }
  gt__t325t(from,to,&__t1917t__);
  if(!__t1917t__){
  gt__t325t(to,s__dat__length,&__t1918t__);
  __t1919t=__t1918t__;
  }
  else{
  __t1919t=0;
  not__t42t(__t1919t,&__t1920t__);
  __t1919t=__t1920t__;
  }
  if(__t1919t){
  __t_errcode=29;
  goto __t_failure;
  }
  sub__t409t(to,from,&__t1922t__);
  new_length=__t1922t__;
  __t1923t=0;
  neq__t158t(from,__t1923t,&__t1924t__);
  if(__t1924t__){
  __t_errcode=get__t1887t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1926t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1926t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1927t__value,__t1926t__,1);
  new_first=__t1927t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1928t__);
  str__t1610t(s__unsafe_ptr,__t1928t__,new_length,new_first,&__t1929t__unsafe_ptr,&__t1929t__dat__pos,&__t1929t__dat__length,&__t1929t__dat__first);
  __t1916t__unsafe_ptr=__t1929t__unsafe_ptr;
  __t1916t__dat__pos=__t1929t__dat__pos;
  __t1916t__dat__length=__t1929t__dat__length;
  __t1916t__dat__first=__t1929t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5730t=__t1916t__unsafe_ptr;
  *__t5731t=__t1916t__dat__pos;
  *__t5732t=__t1916t__dat__length;
  *__t5733t=__t1916t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1992t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5734t) {
  char* __t1993t__unsafe_ptr=0;
  uint64_t __t1993t__dat__pos=0;
  uint64_t __t1993t__dat__length=0;
  char __t1993t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1994t__unsafe_ptr=0;
  uint64_t __t1994t__dat__pos=0;
  uint64_t __t1994t__dat__length=0;
  char __t1994t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t1995t=0;
  uint64_t __t1996t__=0;
  uint64_t d=0;
  char __t1997t__=0;
  char __t1998t=0;
  char* __t1999t__unsafe_ptr=0;
  uint64_t __t1999t__dat__pos=0;
  uint64_t __t1999t__dat__length=0;
  char __t1999t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t2000t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1647t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1993t__unsafe_ptr,&__t1993t__dat__pos,&__t1993t__dat__length,&__t1993t__dat__first);
  stack__unsafe_ptr=__t1993t__unsafe_ptr;
  stack__dat__pos=__t1993t__dat__pos;
  stack__dat__length=__t1993t__dat__length;
  stack__dat__first=__t1993t__dat__first;
  str__t1670t(_needle,&__t1994t__unsafe_ptr,&__t1994t__dat__pos,&__t1994t__dat__length,&__t1994t__dat__first);
  needle__unsafe_ptr=__t1994t__unsafe_ptr;
  needle__dat__pos=__t1994t__dat__pos;
  needle__dat__length=__t1994t__dat__length;
  needle__dat__first=__t1994t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t401t(n,needle__dat__length,&__t1996t__);
  __t1995t=__t_complain;
  if(__t_complain){
  goto __t1995t__label;
  }
  d=__t1996t__;
  __t1995t__label:__t1995t=__t1995t==0;
  not__t42t(__t1995t,&__t1997t__);
  if(__t1997t__){
  __t1998t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1913t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t1999t__unsafe_ptr,&__t1999t__dat__pos,&__t1999t__dat__length,&__t1999t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1999t__unsafe_ptr;
  ret__dat__pos=__t1999t__dat__pos;
  ret__dat__length=__t1999t__dat__length;
  ret__dat__first=__t1999t__dat__first;
  eq__t1817t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2000t__);
  __t1998t=__t2000t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5734t=__t1998t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t741t(uint64_t to, uint64_t* __t5735t, uint64_t* __t5736t) {
  uint64_t __t742t=0;
  uint64_t from=0;
  __t742t=0;
  from=__t742t;
  goto __t_return;
  __t_return:
  *__t5735t=from;
  *__t5736t=to;
}

static inline __attribute__((always_inline)) void range__t758t(uint64_t _from, uint64_t to, uint64_t* __t5737t, uint64_t* __t5738t) {
  uint64_t __t759t=0;
  uint64_t __t760t__=0;
  uint64_t __t761t=0;
  uint64_t from=0;
  __t759t=0;
  add__t188t(__t759t,_from,&__t760t__);
  __t761t=__t760t__;
  from=__t761t;
  goto __t_return;
  __t_return:
  *__t5737t=from;
  *__t5738t=to;
}

static inline __attribute__((always_inline)) int mutget__t763t(uint64_t* __t5739t, uint64_t r__to, uint64_t skipped, uint64_t* __t5740t) {
  uint64_t r__from=*__t5739t;
  char __t764t__=0;
  uint64_t ret=0;
  uint64_t __t765t=0;
  uint64_t __t766t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(r__from,r__to,&__t764t__);
  if(__t764t__){
  __t_errcode=16;
  goto __t_failure;
  }
  ret=r__from;
  __t765t=1;
  add__t188t(ret,__t765t,&__t766t__);
  r__from=__t766t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5739t=r__from;
  *__t5740t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2078t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5741t) {
  char* __t2079t__unsafe_ptr=0;
  uint64_t __t2079t__dat__pos=0;
  uint64_t __t2079t__dat__length=0;
  char __t2079t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2080t__unsafe_ptr=0;
  uint64_t __t2080t__dat__pos=0;
  uint64_t __t2080t__dat__length=0;
  char __t2080t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t2081t=0;
  uint64_t __t2082t__=0;
  uint64_t n=0;
  char __t2083t__=0;
  char __t2084t=0;
  uint64_t __t2085t=0;
  uint64_t __t2086t__from=0;
  uint64_t __t2086t__to=0;
  uint64_t __t2087t__from=0;
  uint64_t __t2087t__to=0;
  char __t2088t=0;
  uint64_t __t2089t__=0;
  uint64_t i=0;
  char __t2090t=0;
  uint64_t __t2091t__=0;
  char* __t2092t__unsafe_ptr=0;
  uint64_t __t2092t__dat__pos=0;
  uint64_t __t2092t__dat__length=0;
  char __t2092t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t2093t__=0;
  char __t2094t=0;
  char __t2095t=0;
  int __t_complain=0;
  str__t1647t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2079t__unsafe_ptr,&__t2079t__dat__pos,&__t2079t__dat__length,&__t2079t__dat__first);
  stack__unsafe_ptr=__t2079t__unsafe_ptr;
  stack__dat__pos=__t2079t__dat__pos;
  stack__dat__length=__t2079t__dat__length;
  stack__dat__first=__t2079t__dat__first;
  str__t1670t(_needle,&__t2080t__unsafe_ptr,&__t2080t__dat__pos,&__t2080t__dat__length,&__t2080t__dat__first);
  needle__unsafe_ptr=__t2080t__unsafe_ptr;
  needle__dat__pos=__t2080t__dat__pos;
  needle__dat__length=__t2080t__dat__length;
  needle__dat__first=__t2080t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t401t(stack__dat__length,d,&__t2082t__);
  __t2081t=__t_complain;
  if(__t_complain){
  goto __t2081t__label;
  }
  n=__t2082t__;
  __t2081t__label:__t2081t=__t2081t==0;
  not__t42t(__t2081t,&__t2083t__);
  if(__t2083t__){
  __t2084t=0;
  goto __t_return;
  }
  of__t741t(n,&__t2086t__from,&__t2086t__to);
  range__t758t(__t2086t__from,__t2086t__to,&__t2087t__from,&__t2087t__to);
  __t2085t=0-1;
  while(1){
  __t2085t=__t2085t+1;
  __t_complain=mutget__t763t(&__t2087t__from,__t2087t__to,__t2085t,&__t2089t__);
  __t2088t=__t_complain;
  if(__t_complain){
  goto __t2088t__label;
  }
  i=__t2089t__;
  __t2088t__label:__t2088t=__t2088t==0;
  if(!__t2088t){
  break;
  }
  add__t188t(i,d,&__t2091t__);
  __t_complain=slice__t1913t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t2091t__,&__t2092t__unsafe_ptr,&__t2092t__dat__pos,&__t2092t__dat__length,&__t2092t__dat__first);
  __t2090t=__t_complain;
  if(__t_complain){
  goto __t2090t__label;
  }
  sliced__unsafe_ptr=__t2092t__unsafe_ptr;
  sliced__dat__pos=__t2092t__dat__pos;
  sliced__dat__length=__t2092t__dat__length;
  sliced__dat__first=__t2092t__dat__first;
  __t2090t__label:__t2090t=__t2090t==0;
  eq__t1817t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2093t__);
  if(__t2093t__){
  __t2094t=1;
  __t2084t=__t2094t;
  goto __t_return;
  }
  }
  __t2095t=0;
  __t2084t=__t2095t;
  goto __t_return;
  __t_return:
  *__t5741t=__t2084t;
}

static inline __attribute__((always_inline)) void restore_stdout__t5350t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
}

static inline __attribute__((always_inline)) void stdout_to_err__t5351t(int64_t* __t5742t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5742t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t1881t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1882t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void popen__t4395t(const char* cmd, char** __t5743t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t5743t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4394t(char* unsafe_ptr, int64_t* __t5744t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t5744t=status;
}

static inline __attribute__((always_inline)) void int__t626t(uint64_t x, int64_t* __t5745t) {
  int __t627t=0;
  int __t628t=0;
  int __t629t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5745t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t5746t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t5746t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t5747t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5747t=z;
}

static inline __attribute__((always_inline)) int open__t4396t(const char* cmd, char** __t5748t) {
  char* __t4397t__=0;
  char* unsafe_ptr=0;
  char __t4398t__=0;
  char __t4399t__=0;
  char __t4400t__=0;
  int64_t __t4401t__=0;
  int64_t status=0;
  uint64_t __t4402t=0;
  int64_t __t4403t__=0;
  char __t4404t__=0;
  char __t4405t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4395t(cmd,&__t4397t__);
  unsafe_ptr=__t4397t__;
  exists__t645t(unsafe_ptr,&__t4398t__);
  not__t42t(__t4398t__,&__t4399t__);
  if(__t4399t__){
  __t_errcode=45;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t645t(unsafe_ptr,&__t4400t__);
  if(__t4400t__){
  pclose__t4394t(unsafe_ptr,&__t4401t__);
  status=__t4401t__;
  unsafe_ptr=0;
  __t4402t=0;
  int__t626t(__t4402t,&__t4403t__);
  neq__t147t(status,__t4403t__,&__t4404t__);
  if(__t4404t__){
  __t_complain=46;
  goto __t4405t__label;
  __t4405t__label:__t4405t=__t4405t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5748t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4407t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t5749t) {
  const char* __t4408t__cstr=0;
  char* __t4408t__str__unsafe_ptr=0;
  uint64_t __t4408t__str__dat__pos=0;
  uint64_t __t4408t__str__dat__length=0;
  char __t4408t__str__dat__first=0;
  const char* __t4410t__=0;
  char* __t4411t__unsafe_ptr=0;
  char __t4412t____t4400t__=0;
  int64_t __t4412t____t4401t__=0;
  int64_t __t4412t__status=0;
  uint64_t __t4412t____t4402t=0;
  int64_t __t4412t____t4403t__=0;
  char __t4412t____t4404t__=0;
  char __t4412t____t4405t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1800t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4408t__cstr,&__t4408t__str__unsafe_ptr,&__t4408t__str__dat__pos,&__t4408t__str__dat__length,&__t4408t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1810t(__t4408t__cstr,__t4408t__str__unsafe_ptr,__t4408t__str__dat__pos,__t4408t__str__dat__length,__t4408t__str__dat__first,&__t4410t__);
  __t_errcode=open__t4396t(__t4410t__,&__t4411t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t645t(__t4411t__unsafe_ptr,&__t4412t____t4400t__);
  if(__t4412t____t4400t__){
  pclose__t4394t(__t4411t__unsafe_ptr,&__t4412t____t4401t__);
  __t4412t__status=__t4412t____t4401t__;
  __t4411t__unsafe_ptr=0;
  __t4412t____t4402t=0;
  int__t626t(__t4412t____t4402t,&__t4412t____t4403t__);
  neq__t147t(__t4412t__status,__t4412t____t4403t__,&__t4412t____t4404t__);
  if(__t4412t____t4404t__){
  __t_complain=46;
  goto __t4405t__label;
  __t4405t__label:__t4412t____t4405t=__t4412t____t4405t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5749t=__t4411t__unsafe_ptr;
  
  __t_skip_returns:free__t806t(&__t4408t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4241t(int64_t value, char* __t5750t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t5750t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4240t(int64_t value, const char** __t5751t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5751t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t5752t) {
  const char* value=0;
  *__t5752t=value;
}

int run__t5279t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t5753t) {
  char* __t5280t__unsafe_ptr=0;
  char __t5281t____t4412t____t4400t__=0;
  int64_t __t5281t____t4412t____t4401t__=0;
  int64_t __t5281t____t4412t__status=0;
  uint64_t __t5281t____t4412t____t4402t=0;
  int64_t __t5281t____t4412t____t4403t__=0;
  char __t5281t____t4412t____t4404t__=0;
  char __t5281t____t4412t____t4405t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t5282t=0;
  int64_t error=0;
  char __t5283t__=0;
  char __t5284t__=0;
  const char* __t5285t__=0;
  const char* __t5286t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4407t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5280t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t5280t__unsafe_ptr;
  exists__t645t(__t5280t__unsafe_ptr,&__t5281t____t4412t____t4400t__);
  if(__t5281t____t4412t____t4400t__){
  pclose__t4394t(__t5280t__unsafe_ptr,&__t5281t____t4412t____t4401t__);
  __t5281t____t4412t__status=__t5281t____t4412t____t4401t__;
  __t5280t__unsafe_ptr=0;
  __t5281t____t4412t____t4402t=0;
  int__t626t(__t5281t____t4412t____t4402t,&__t5281t____t4412t____t4403t__);
  neq__t147t(__t5281t____t4412t__status,__t5281t____t4412t____t4403t__,&__t5281t____t4412t____t4404t__);
  if(__t5281t____t4412t____t4404t__){
  __t_complain=46;
  goto __t4405t__label;
  __t4405t__label:__t5281t____t4412t____t4405t=__t5281t____t4412t____t4405t==0;
  }
  }
  __t5282t=__t_complain;
  error=__t5282t;
  ok__t4241t(error,&__t5283t__);
  not__t42t(__t5283t__,&__t5284t__);
  if(__t5284t__){
  cstr__t4240t(error,&__t5285t__);
  goto __t_return;
  }
  cstr__t1t(&__t5286t__);
  __t5285t__=__t5286t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5753t=__t5285t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5754t) {
  int value=0;
  *__t5754t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5755t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5755t=__t54t__;
}

static inline __attribute__((always_inline)) void exists__t1608t(const char* c, char* __t5756t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5756t=z;
}

static inline __attribute__((always_inline)) void nn__t430t(const char* value, const char** __t5757t, const char** __t5758t) {
  const char* __t432t=0;
  __t432t=__t431t;
  goto __t_return;
  __t_return:
  *__t5757t=value;
  *__t5758t=__t432t;
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

static inline __attribute__((always_inline)) void print_marker__t5315t(char colors__initialized) {
  const char* __t5317t__value=0;
  const char* __t5317t____t432t=0;
  int __t5319t=0;
  char __t5320t=0;
  char __t5321t=0;
  const char* __t5326t__value=0;
  const char* __t5326t____t432t=0;
  int __t5328t=0;
  const char* __t5331t__value=0;
  const char* __t5331t____t432t=0;
  nn__t430t(__t4251t,&__t5317t__value,&__t5317t____t432t);
  print__t439t(__t5317t__value,__t5317t____t432t);
  __t5321t=1;
  if(__t5322t!=__t5322t){
  __t5321t=0;
  }
  if(__t5321t){
  __t5320t=1;
  }
  if(__t5320t){
  set__t475t(colors__initialized);
  nn__t430t(__t5325t,&__t5326t__value,&__t5326t____t432t);
  print__t439t(__t5326t__value,__t5326t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5312t,&__t5331t__value,&__t5331t____t432t);
  print__t439t(__t5331t__value,__t5331t____t432t);
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

static inline __attribute__((always_inline)) void print_marker__t5296t(char colors__initialized) {
  const char* __t5298t__value=0;
  const char* __t5298t____t432t=0;
  char __t5300t=0;
  char __t5301t=0;
  const char* __t5306t__value=0;
  const char* __t5306t____t432t=0;
  int __t5308t=0;
  int __t5309t=0;
  const char* __t5313t__value=0;
  const char* __t5313t____t432t=0;
  nn__t430t(__t4251t,&__t5298t__value,&__t5298t____t432t);
  print__t439t(__t5298t__value,__t5298t____t432t);
  __t5301t=1;
  if(__t5302t!=__t5302t){
  __t5301t=0;
  }
  if(__t5301t){
  __t5300t=1;
  }
  if(__t5300t){
  set__t479t(colors__initialized);
  nn__t430t(__t5305t,&__t5306t__value,&__t5306t____t432t);
  print__t439t(__t5306t__value,__t5306t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5312t,&__t5313t__value,&__t5313t____t432t);
  print__t439t(__t5313t__value,__t5313t____t432t);
}

static inline __attribute__((always_inline)) int test__t5375t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t5759t) {
  int64_t __t5377t__=0;
  const char* __t5380t__=0;
  const char* __t5381t=0;
  const char* error=0;
  int __t5382t=0;
  int __t5383t__=0;
  char __t5384t__=0;
  const char* __t5385t__=0;
  const char* __t5387t__value=0;
  const char* __t5387t____t432t=0;
  char __t5389t__=0;
  char __t5393t=0;
  char __t5398t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5351t(&__t5377t__);
  print__t1881t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t5279t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5380t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5381t=__t5380t__;
  error=__t5381t;
  not__t53t(__t5382t,&__t5383t__);
  if(should_fail){
  exists__t1608t(error,&__t5384t__);
  if(__t5384t__){
  cstr__t1t(&__t5385t__);
  error=__t5385t__;
  }
  else{
  error=__t5386t;
  }
  }
  nn__t430t(__t5359t,&__t5387t__value,&__t5387t____t432t);
  print__t439t(__t5387t__value,__t5387t____t432t);
  exists__t1608t(error,&__t5389t__);
  if(__t5389t__){
  print_marker__t5315t(colors__initialized);
  print__t441t(error);
  __t5393t=0;
  goto __t_return;
  }
  print_marker__t5296t(colors__initialized);
  print__t441t(__t5396t);
  __t5398t=1;
  __t5393t=__t5398t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5759t=__t5393t;
  
  __t_skip_returns:restore_stdout__t5350t(__t5377t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t452t(uint64_t value, const char* endl) {
  int __t453t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t437t(uint64_t value, uint64_t* __t5760t, const char** __t5761t) {
  const char* __t438t=0;
  __t438t=__t431t;
  goto __t_return;
  __t_return:
  *__t5760t=value;
  *__t5761t=__t438t;
}

static inline __attribute__((always_inline)) int _main__t5437t() {
  char* __t5439t__unsafe_ptr=0;
  uint64_t __t5439t__dat__pos=0;
  uint64_t __t5439t__dat__length=0;
  char __t5439t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5440t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5442t=0;
  char* __t5443t__unsafe_ptr=0;
  uint64_t __t5443t__unsafe_size=0;
  uint32_t __t5443t__unsafe_offset=0;
  uint32_t __t5443t__unsafe_align=0;
  char* __t5445t__buf__unsafe_ptr=0;
  uint64_t __t5445t__buf__unsafe_size=0;
  uint32_t __t5445t__buf__unsafe_offset=0;
  uint32_t __t5445t__buf__unsafe_align=0;
  uint64_t __t5445t__pos=0;
  char* __t5446t__buf__unsafe_ptr=0;
  uint64_t __t5446t__buf__unsafe_size=0;
  uint32_t __t5446t__buf__unsafe_offset=0;
  uint32_t __t5446t__buf__unsafe_align=0;
  uint64_t __t5446t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  int __t5451t=0;
  char* __t5453t__unsafe_ptr=0;
  uint64_t __t5453t__dat__pos=0;
  uint64_t __t5453t__dat__length=0;
  char __t5453t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  uint64_t __t5454t=0;
  uint64_t __t5455t=0;
  uint64_t counter=0;
  uint64_t __t5456t=0;
  uint64_t __t5457t=0;
  uint64_t failures=0;
  uint64_t __t5458t=0;
  char* __t5459t__unsafe_ptr=0;
  char __t5461t=0;
  char* __t5462t__unsafe_ptr=0;
  uint64_t __t5462t__dat__pos=0;
  uint64_t __t5462t__dat__length=0;
  char __t5462t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5464t__=0;
  char __t5465t__=0;
  char __t5466t__=0;
  char __t5467t=0;
  char __t5468t__=0;
  uint64_t __t5469t__=0;
  uint64_t __t5470t____t5434t=0;
  uint64_t __t5470t____t5436t__=0;
  char* __t5471t__unsafe_ptr=0;
  uint64_t __t5471t__dat__pos=0;
  uint64_t __t5471t__dat__length=0;
  char __t5471t__dat__first=0;
  char* __t5473t__unsafe_ptr=0;
  uint64_t __t5473t__dat__pos=0;
  uint64_t __t5473t__dat__length=0;
  char __t5473t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5474t=0;
  char* __t5475t__unsafe_ptr=0;
  char __t5477t=0;
  char* __t5478t__unsafe_ptr=0;
  uint64_t __t5478t__dat__pos=0;
  uint64_t __t5478t__dat__length=0;
  char __t5478t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5480t__=0;
  char __t5481t__=0;
  uint64_t __t5482t__=0;
  uint64_t __t5483t____t5434t=0;
  uint64_t __t5483t____t5436t__=0;
  uint64_t __t5484t=0;
  uint64_t __t5485t__=0;
  char __t5487t__=0;
  char should_fail=0;
  char* __t5488t__unsafe_ptr=0;
  uint64_t __t5488t__dat__pos=0;
  uint64_t __t5488t__dat__length=0;
  char __t5488t__dat__first=0;
  char* __t5489t__unsafe_ptr=0;
  uint64_t __t5489t__dat__pos=0;
  uint64_t __t5489t__dat__length=0;
  char __t5489t__dat__first=0;
  char __t5490t__=0;
  char __t5491t__=0;
  uint64_t __t5492t=0;
  uint64_t __t5493t__=0;
  int64_t __t5494t__=0;
  uint64_t __t5496t=0;
  char __t5497t__=0;
  const char* __t5511t__value=0;
  const char* __t5511t____t432t=0;
  const char* __t5501t__value=0;
  const char* __t5501t____t432t=0;
  const char* __t5506t__value=0;
  const char* __t5506t____t432t=0;
  uint64_t __t5517t__value=0;
  const char* __t5517t____t438t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1670t(__t5438t,&__t5439t__unsafe_ptr,&__t5439t__dat__pos,&__t5439t__dat__length,&__t5439t__dat__first);
  test_root__unsafe_ptr=__t5439t__unsafe_ptr;
  test_root__dat__pos=__t5439t__dat__pos;
  test_root__dat__length=__t5439t__dat__length;
  test_root__dat__first=__t5439t__dat__first;
  colors__t469t(&__t5440t__initialized);
  colors__initialized=__t5440t__initialized;
  __t5442t=128;
  __t_errcode=alloc__t1084t(__t5442t,&__t5443t__unsafe_ptr,&__t5443t__unsafe_size,&__t5443t__unsafe_offset,&__t5443t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1206t(&__t5443t__unsafe_ptr,&__t5443t__unsafe_size,&__t5443t__unsafe_offset,&__t5443t__unsafe_align,&__t5445t__buf__unsafe_ptr,&__t5445t__buf__unsafe_size,&__t5445t__buf__unsafe_offset,&__t5445t__buf__unsafe_align,&__t5445t__pos);
  __t5446t__buf__unsafe_ptr=__t5445t__buf__unsafe_ptr;
  __t5446t__buf__unsafe_size=__t5445t__buf__unsafe_size;
  __t5446t__buf__unsafe_offset=__t5445t__buf__unsafe_offset;
  __t5446t__buf__unsafe_align=__t5445t__buf__unsafe_align;
  __t5446t__pos=__t5445t__pos;
  CHARS__buf__unsafe_ptr=__t5446t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5446t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5446t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5446t__buf__unsafe_align;
  CHARS__pos=__t5446t__pos;
  __t_errcode=copy__t1751t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5452t,&__t5453t__unsafe_ptr,&__t5453t__dat__pos,&__t5453t__dat__length,&__t5453t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5453t__unsafe_ptr;
  command_base__dat__pos=__t5453t__dat__pos;
  command_base__dat__length=__t5453t__dat__length;
  command_base__dat__first=__t5453t__dat__first;
  __t5454t=0;
  __t5455t=__t5454t;
  counter=__t5455t;
  __t5456t=0;
  __t5457t=__t5456t;
  failures=__t5457t;
  __t_errcode=open__t5154t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5459t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5458t=0-1;
  while(1){
  __t5458t=__t5458t+1;
  __t_complain=mutget__t5237t(&__t5459t__unsafe_ptr,__t5458t,&__t5462t__unsafe_ptr,&__t5462t__dat__pos,&__t5462t__dat__length,&__t5462t__dat__first);
  __t5461t=__t_complain;
  if(__t_complain){
  goto __t5461t__label;
  }
  path__unsafe_ptr=__t5462t__unsafe_ptr;
  path__dat__pos=__t5462t__dat__pos;
  path__dat__length=__t5462t__dat__length;
  path__dat__first=__t5462t__dat__first;
  __t5461t__label:__t5461t=__t5461t==0;
  if(!__t5461t){
  break;
  }
  eq__t1824t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5463t,&__t5464t__);
  if(!__t5464t__){
  __t_errcode=is_dir__t5081t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5465t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5465t__,&__t5466t__);
  __t5467t=__t5466t__;
  }
  else{
  __t5467t=0;
  not__t42t(__t5467t,&__t5468t__);
  __t5467t=__t5468t__;
  }
  if(__t5467t){
  continue;
  }
  reuse__t5431t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5469t__);
  __t_errcode=add__t2898t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5471t__unsafe_ptr,&__t5471t__dat__pos,&__t5471t__dat__length,&__t5471t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2943t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5471t__unsafe_ptr,__t5471t__dat__pos,__t5471t__dat__length,__t5471t__dat__first,__t5472t,&__t5473t__unsafe_ptr,&__t5473t__dat__pos,&__t5473t__dat__length,&__t5473t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5473t__unsafe_ptr;
  dir_path__dat__pos=__t5473t__dat__pos;
  dir_path__dat__length=__t5473t__dat__length;
  dir_path__dat__first=__t5473t__dat__first;
  __t_errcode=open__t5154t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5475t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5474t=0-1;
  while(1){
  __t5474t=__t5474t+1;
  __t_complain=mutget__t5237t(&__t5475t__unsafe_ptr,__t5474t,&__t5478t__unsafe_ptr,&__t5478t__dat__pos,&__t5478t__dat__length,&__t5478t__dat__first);
  __t5477t=__t_complain;
  if(__t_complain){
  goto __t5477t__label;
  }
  entry__unsafe_ptr=__t5478t__unsafe_ptr;
  entry__dat__pos=__t5478t__dat__pos;
  entry__dat__length=__t5478t__dat__length;
  entry__dat__first=__t5478t__dat__first;
  __t5477t__label:__t5477t=__t5477t==0;
  if(!__t5477t){
  break;
  }
  __t_errcode=ends_with__t1992t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5479t,&__t5480t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5480t__,&__t5481t__);
  if(__t5481t__){
  continue;
  }
  reuse__t5431t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5482t__);
  __t5484t=1;
  add__t188t(counter,__t5484t,&__t5485t__);
  counter=__t5485t__;
  contains__t2078t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5486t,&__t5487t__);
  should_fail=__t5487t__;
  __t_errcode=add__t2898t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5488t__unsafe_ptr,&__t5488t__dat__pos,&__t5488t__dat__length,&__t5488t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2898t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5488t__unsafe_ptr,__t5488t__dat__pos,__t5488t__dat__length,__t5488t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5489t__unsafe_ptr,&__t5489t__dat__pos,&__t5489t__dat__length,&__t5489t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5375t(colors__initialized,__t5489t__unsafe_ptr,__t5489t__dat__pos,__t5489t__dat__length,__t5489t__dat__first,should_fail,&__t5490t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5490t__,&__t5491t__);
  if(__t5491t__){
  __t5492t=1;
  add__t188t(failures,__t5492t,&__t5493t__);
  failures=__t5493t__;
  }
  __t5483t____t5434t=0;
  sub__t409t(__t5482t__,__t5483t____t5434t,&__t5483t____t5436t__);
  CHARS__pos=__t5483t____t5436t__;
  }
  __t5470t____t5434t=0;
  sub__t409t(__t5469t__,__t5470t____t5434t,&__t5470t____t5436t__);
  CHARS__pos=__t5470t____t5436t__;
  closedir__t5144t(__t5475t__unsafe_ptr);
  }
  stdout_to_err__t5351t(&__t5494t__);
  __t5496t=0;
  eq__t134t(failures,__t5496t,&__t5497t__);
  if(__t5497t__){
  set__t479t(colors__initialized);
  nn__t430t(__t5500t,&__t5501t__value,&__t5501t____t432t);
  print__t439t(__t5501t__value,__t5501t____t432t);
  set__t595t(colors__initialized);
  nn__t430t(__t5505t,&__t5506t__value,&__t5506t____t432t);
  print__t439t(__t5506t__value,__t5506t____t432t);
  }
  else{
  set__t475t(colors__initialized);
  nn__t430t(__t5510t,&__t5511t__value,&__t5511t____t432t);
  print__t439t(__t5511t__value,__t5511t____t432t);
  set__t595t(colors__initialized);
  print__t452t(failures,__t5515t);
  }
  nn__t437t(counter,&__t5517t__value,&__t5517t____t438t);
  print__t452t(__t5517t__value,__t5517t____t438t);
  print__t441t(__t5519t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:restore_stdout__t5350t(__t5494t__);
  closedir__t5144t(__t5459t__unsafe_ptr);
  free__t806t(&__t5443t__unsafe_ptr);
  if(__t5440t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5521t() {
  char __t5524t=0;
  char __t5526t__=0;
  int64_t __t5527t=0;
  const char* __t5528t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t_complain=_main__t5437t();
  __t5524t=__t_complain;
  if(__t_complain){
  goto __t5524t__label;
  }
  __t5524t__label:__t5524t=__t5524t==0;
  not__t42t(__t5524t,&__t5526t__);
  if(__t5526t__){
  __t5527t=__t_complain;
  cstr__t4240t(__t5527t,&__t5528t__);
  print__t441t(__t5528t__);
  __t_errcode=64;
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
                    return main__t5521t();
                }