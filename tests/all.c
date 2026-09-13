#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t431t="";
const char* const __t5199t="failure";
const char* const __t5236t=" |- ";
const char* const __t5363t="_fail_";
const char* const __t5356t=".s";
const char* const __t5202t="X";
const char* const __t5392t=" out of ";
const char* const __t5340t="..";
const char* const __t5377t="PASSING ";
const char* const __t5329t="./smoll --cleanup ";
const char* const __t5263t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t5315t="./tests/passing/";
const char* const __t5179t="success";
const char* const __t443t="\n";
const char* const __t5382t="no errors across ";
const char* const __t5174t="[";
const char* const __t5273t="completed";
const char* const __t5396t=" tests";
const char* const __t5182t="V";
const char* const __t5349t="/";
const char* const __t5387t="FAILED ";
const char* const __t5189t="] ";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1541t(char** __t5407t, uint64_t* __t5408t, uint32_t* __t5409t, uint32_t* __t5410t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5407t=unsafe_ptr;
  *__t5408t=unsafe_size;
  *__t5409t=unsafe_offset;
  *__t5410t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5411t) {
  *__t5411t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5412t) {
  int value=0;
  *__t5412t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5413t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5413t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5414t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5414t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5415t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5415t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5416t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5416t=z;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t5417t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5417t=z;
}

static inline __attribute__((always_inline)) void nat__t684t(uint32_t x, uint64_t* __t5418t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5418t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5419t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5419t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5420t) {
  *__t5420t=to;
}

static inline __attribute__((always_inline)) void add__t767t(char* allocated, uint64_t offset, char** __t5421t) {
  char* element=0;
  char* __t768t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t768t__);
  goto __t_return;
  __t_return:
  *__t5421t=__t768t__;
}

static inline __attribute__((always_inline)) int get__t1108t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5422t) {
  int __t1109t=0;
  char __t1110t__=0;
  uint64_t __t1111t__=0;
  uint64_t __t1112t__=0;
  uint64_t __t1113t__=0;
  uint64_t __t1114t__=0;
  char* __t1115t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1110t__);
  if(__t1110t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t1111t__);
  mul__t212t(i,__t1111t__,&__t1112t__);
  nat__t684t(buffer__unsafe_offset,&__t1113t__);
  add__t188t(__t1112t__,__t1113t__,&__t1114t__);
  add__t767t(buffer__unsafe_ptr,__t1114t__,&__t1115t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5422t=__t1115t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1566t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5423t, uint64_t* __t5424t, uint64_t* __t5425t, char* __t5426t) {
  goto __t_return;
  __t_return:
  *__t5423t=unsafe_ptr;
  *__t5424t=dat__pos;
  *__t5425t=dat__length;
  *__t5426t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1570t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5427t, uint64_t* __t5428t, uint64_t* __t5429t, char* __t5430t) {
  char* unsafe_ptr=0;
  uint64_t __t1571t__=0;
  uint64_t __t1572t=0;
  char __t1573t__=0;
  uint64_t __t1574t__=0;
  uint64_t __t1575t=0;
  char __t1576t__=0;
  char* __t1577t__unsafe_ptr=0;
  uint64_t __t1577t__dat__pos=0;
  uint64_t __t1577t__dat__length=0;
  char __t1577t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t684t(buf__unsafe_align,&__t1571t__);
  __t1572t=1;
  neq__t158t(__t1571t__,__t1572t,&__t1573t__);
  if(__t1573t__){
  __t_errcode=21;
  goto __t_failure;
  }
  nat__t684t(buf__unsafe_offset,&__t1574t__);
  __t1575t=0;
  neq__t158t(__t1574t__,__t1575t,&__t1576t__);
  if(__t1576t__){
  __t_errcode=22;
  goto __t_failure;
  }
  str__t1566t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1577t__unsafe_ptr,&__t1577t__dat__pos,&__t1577t__dat__length,&__t1577t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5427t=__t1577t__unsafe_ptr;
  *__t5428t=__t1577t__dat__pos;
  *__t5429t=__t1577t__dat__length;
  *__t5430t=__t1577t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1604t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5431t, uint64_t* __t5432t, uint64_t* __t5433t, char* __t5434t) {
  uint64_t __t1605t=0;
  char __t1606t__=0;
  char* __t1608t__=0;
  char __t1609t__value=0;
  char first=0;
  char* __t1610t__unsafe_ptr=0;
  uint64_t __t1610t__dat__pos=0;
  uint64_t __t1610t__dat__length=0;
  char __t1610t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1605t=0;
  neq__t158t(length,__t1605t,&__t1606t__);
  if(__t1606t__){
  __t_errcode=get__t1108t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1608t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1608t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1609t__value,__t1608t__,1);
  first=__t1609t__value;
  }
  __t_errcode=str__t1570t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1610t__unsafe_ptr,&__t1610t__dat__pos,&__t1610t__dat__length,&__t1610t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5431t=__t1610t__unsafe_ptr;
  *__t5432t=__t1610t__dat__pos;
  *__t5433t=__t1610t__dat__length;
  *__t5434t=__t1610t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1626t(const char* c, char** __t5435t, uint64_t* __t5436t, uint64_t* __t5437t, char* __t5438t) {
  char* __t1627t__unsafe_ptr=0;
  uint64_t __t1627t__unsafe_size=0;
  uint32_t __t1627t__unsafe_offset=0;
  uint32_t __t1627t__unsafe_align=0;
  char* __t1628t__unsafe_ptr=0;
  uint64_t __t1628t__unsafe_size=0;
  uint32_t __t1628t__unsafe_offset=0;
  uint32_t __t1628t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1629t__=0;
  uint64_t length=0;
  uint64_t __t1630t=0;
  uint64_t __t1631t__=0;
  char __t1632t=0;
  uint64_t __t1633t=0;
  char* __t1635t__unsafe_ptr=0;
  uint64_t __t1635t__dat__pos=0;
  uint64_t __t1635t__dat__length=0;
  char __t1635t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1541t(&__t1627t__unsafe_ptr,&__t1627t__unsafe_size,&__t1627t__unsafe_offset,&__t1627t__unsafe_align);
  __t1628t__unsafe_ptr=__t1627t__unsafe_ptr;
  __t1628t__unsafe_size=__t1627t__unsafe_size;
  __t1628t__unsafe_offset=__t1627t__unsafe_offset;
  __t1628t__unsafe_align=__t1627t__unsafe_align;
  buf__unsafe_ptr=__t1628t__unsafe_ptr;
  buf__unsafe_size=__t1628t__unsafe_size;
  buf__unsafe_offset=__t1628t__unsafe_offset;
  buf__unsafe_align=__t1628t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1629t__);
  buf__unsafe_ptr=__t1629t__;
  if(c){
  length=strlen(c);
  }
  __t1630t=1;
  add__t188t(length,__t1630t,&__t1631t__);
  buf__unsafe_size=__t1631t__;
  __t1633t=0;
  __t_complain=str__t1604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1633t,length,&__t1635t__unsafe_ptr,&__t1635t__dat__pos,&__t1635t__dat__length,&__t1635t__dat__first);
  __t1632t=__t_complain;
  if(__t_complain){
  goto __t1632t__label;
  }
  ret__unsafe_ptr=__t1635t__unsafe_ptr;
  ret__dat__pos=__t1635t__dat__pos;
  ret__dat__length=__t1635t__dat__length;
  ret__dat__first=__t1635t__dat__first;
  __t1632t__label:__t1632t=__t1632t==0;
  goto __t_return;
  __t_return:
  *__t5435t=ret__unsafe_ptr;
  *__t5436t=ret__dat__pos;
  *__t5437t=ret__dat__length;
  *__t5438t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t468t(char* __t5439t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5439t=supports;
}

static inline __attribute__((always_inline)) void colors__t469t(char* __t5440t) {
  char __t470t__=0;
  char initialized=0;
  supports_ansi__t468t(&__t470t__);
  initialized=__t470t__;
  goto __t_return;
  __t_return:
  *__t5440t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1044t(char** __t5441t, uint64_t* __t5442t, uint32_t* __t5443t, uint32_t* __t5444t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5441t=unsafe_ptr;
  *__t5442t=unsafe_size;
  *__t5443t=unsafe_offset;
  *__t5444t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t765t(char** __t5445t) {
  char* allocated=*__t5445t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5445t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5446t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5446t=z;
}

static inline __attribute__((always_inline)) void zero__t766t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t645t(char* x, char* __t5447t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5447t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5448t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5448t=z;
}

static inline __attribute__((always_inline)) int alloc__t749t(uint64_t bytes, char** __t5449t) {
  char* allocated=0;
  char __t750t__=0;
  char __t751t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t645t(allocated,&__t750t__);
  not__t42t(__t750t__,&__t751t__);
  if(__t751t__){
  __t_errcode=13;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5449t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t888t(char** __t5450t, uint64_t* __t5451t, uint32_t* __t5452t, uint32_t* __t5453t, uint64_t size, char** __t5454t, uint64_t* __t5455t, uint32_t* __t5456t, uint32_t* __t5457t) {
  char* buffer__unsafe_ptr=*__t5450t;
  uint64_t buffer__unsafe_size=*__t5451t;
  uint32_t buffer__unsafe_offset=*__t5452t;
  uint32_t buffer__unsafe_align=*__t5453t;
  int __t889t=0;
  int __t890t=0;
  char __t892t__=0;
  uint64_t __t893t=0;
  char __t894t__=0;
  char __t895t=0;
  uint64_t __t896t=0;
  uint64_t __t897t__=0;
  uint64_t __t898t__=0;
  int __t900t=0;
  uint64_t __t901t=0;
  char __t902t__=0;
  uint64_t __t903t__=0;
  uint64_t __t904t__=0;
  uint64_t bytes=0;
  int __t905t=0;
  uint64_t __t906t=0;
  char __t907t__=0;
  char* __t908t__=0;
  int __t909t=0;
  uint64_t __t910t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t892t__);
  if(__t892t__){
  __t893t=0;
  neq__t158t(size,__t893t,&__t894t__);
  __t895t=__t894t__;
  }
  if(__t895t){
  __t896t=0;
  nat__t684t(buffer__unsafe_align,&__t897t__);
  mul__t212t(__t897t__,size,&__t898t__);
  zero__t766t(buffer__unsafe_ptr,__t896t,__t898t__);
  goto __t_return;
  }
  __t901t=0;
  neq__t158t(buffer__unsafe_size,__t901t,&__t902t__);
  if(__t902t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t903t__);
  mul__t212t(__t903t__,size,&__t904t__);
  bytes=__t904t__;
  __t906t=0;
  eq__t134t(bytes,__t906t,&__t907t__);
  if(__t907t__){
  __t_errcode=15;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t749t(bytes,&__t908t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t910t=0;
  zero__t766t(__t908t__,__t910t,bytes);
  buffer__unsafe_ptr=__t908t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t765t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5450t=buffer__unsafe_ptr;
  *__t5451t=buffer__unsafe_size;
  *__t5452t=buffer__unsafe_offset;
  *__t5453t=buffer__unsafe_align;
  *__t5454t=buffer__unsafe_ptr;
  *__t5455t=buffer__unsafe_size;
  *__t5456t=buffer__unsafe_offset;
  *__t5457t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1043t(uint64_t size, char** __t5458t, uint64_t* __t5459t, uint32_t* __t5460t, uint32_t* __t5461t) {
  char* __t1046t__unsafe_ptr=0;
  uint64_t __t1046t__unsafe_size=0;
  uint32_t __t1046t__unsafe_offset=0;
  uint32_t __t1046t__unsafe_align=0;
  char* __t1047t__unsafe_ptr=0;
  uint64_t __t1047t__unsafe_size=0;
  uint32_t __t1047t__unsafe_offset=0;
  uint32_t __t1047t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1044t(&__t1046t__unsafe_ptr,&__t1046t__unsafe_size,&__t1046t__unsafe_offset,&__t1046t__unsafe_align);
  __t_errcode=alloc__t888t(&__t1046t__unsafe_ptr,&__t1046t__unsafe_size,&__t1046t__unsafe_offset,&__t1046t__unsafe_align,size,&__t1047t__unsafe_ptr,&__t1047t__unsafe_size,&__t1047t__unsafe_offset,&__t1047t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t765t(&__t1047t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5458t=__t1047t__unsafe_ptr;
  *__t5459t=__t1047t__unsafe_size;
  *__t5460t=__t1047t__unsafe_offset;
  *__t5461t=__t1047t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1159t(char** __t5462t, uint64_t* __t5463t, uint32_t* __t5464t, uint32_t* __t5465t, uint64_t _pos, char** __t5466t, uint64_t* __t5467t, uint32_t* __t5468t, uint32_t* __t5469t, uint64_t* __t5470t) {
  char* buf__unsafe_ptr=*__t5462t;
  uint64_t buf__unsafe_size=*__t5463t;
  uint32_t buf__unsafe_offset=*__t5464t;
  uint32_t buf__unsafe_align=*__t5465t;
  uint64_t __t1160t=0;
  uint64_t pos=0;
  __t1160t=_pos;
  pos=__t1160t;
  goto __t_return;
  __t_return:
  *__t5462t=buf__unsafe_ptr;
  *__t5463t=buf__unsafe_size;
  *__t5464t=buf__unsafe_offset;
  *__t5465t=buf__unsafe_align;
  *__t5466t=buf__unsafe_ptr;
  *__t5467t=buf__unsafe_size;
  *__t5468t=buf__unsafe_offset;
  *__t5469t=buf__unsafe_align;
  *__t5470t=pos;
}

static inline __attribute__((always_inline)) void arena__t1162t(char** __t5471t, uint64_t* __t5472t, uint32_t* __t5473t, uint32_t* __t5474t, char** __t5475t, uint64_t* __t5476t, uint32_t* __t5477t, uint32_t* __t5478t, uint64_t* __t5479t) {
  char* buf__unsafe_ptr=*__t5471t;
  uint64_t buf__unsafe_size=*__t5472t;
  uint32_t buf__unsafe_offset=*__t5473t;
  uint32_t buf__unsafe_align=*__t5474t;
  uint64_t __t1163t=0;
  char* __t1164t__buf__unsafe_ptr=0;
  uint64_t __t1164t__buf__unsafe_size=0;
  uint32_t __t1164t__buf__unsafe_offset=0;
  uint32_t __t1164t__buf__unsafe_align=0;
  uint64_t __t1164t__pos=0;
  __t1163t=0;
  arena__t1159t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1163t,&__t1164t__buf__unsafe_ptr,&__t1164t__buf__unsafe_size,&__t1164t__buf__unsafe_offset,&__t1164t__buf__unsafe_align,&__t1164t__pos);
  goto __t_return;
  __t_return:
  *__t5471t=buf__unsafe_ptr;
  *__t5472t=buf__unsafe_size;
  *__t5473t=buf__unsafe_offset;
  *__t5474t=buf__unsafe_align;
  *__t5475t=__t1164t__buf__unsafe_ptr;
  *__t5476t=__t1164t__buf__unsafe_size;
  *__t5477t=__t1164t__buf__unsafe_offset;
  *__t5478t=__t1164t__buf__unsafe_align;
  *__t5479t=__t1164t__pos;
}

static inline __attribute__((always_inline)) void len__t1116t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5480t) {
  goto __t_return;
  __t_return:
  *__t5480t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t5481t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5481t=z;
}

static inline __attribute__((always_inline)) void allocated__t1166t(char** __t5482t, uint64_t* __t5483t, uint32_t* __t5484t, uint32_t* __t5485t, uint64_t pos, char** __t5486t, uint64_t* __t5487t, uint32_t* __t5488t, uint32_t* __t5489t, uint64_t* __t5490t) {
  char* buf__unsafe_ptr=*__t5482t;
  uint64_t buf__unsafe_size=*__t5483t;
  uint32_t buf__unsafe_offset=*__t5484t;
  uint32_t buf__unsafe_align=*__t5485t;
  goto __t_return;
  __t_return:
  *__t5482t=buf__unsafe_ptr;
  *__t5483t=buf__unsafe_size;
  *__t5484t=buf__unsafe_offset;
  *__t5485t=buf__unsafe_align;
  *__t5486t=buf__unsafe_ptr;
  *__t5487t=buf__unsafe_size;
  *__t5488t=buf__unsafe_offset;
  *__t5489t=buf__unsafe_align;
  *__t5490t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1241t(char** __t5491t, uint64_t* __t5492t, uint32_t* __t5493t, uint32_t* __t5494t, uint64_t* __t5495t, uint64_t length, char** __t5496t, uint64_t* __t5497t, uint32_t* __t5498t, uint32_t* __t5499t, uint64_t* __t5500t) {
  char* allocator__buf__unsafe_ptr=*__t5491t;
  uint64_t allocator__buf__unsafe_size=*__t5492t;
  uint32_t allocator__buf__unsafe_offset=*__t5493t;
  uint32_t allocator__buf__unsafe_align=*__t5494t;
  uint64_t allocator__pos=*__t5495t;
  int __t1242t=0;
  uint64_t __t1243t__=0;
  uint64_t next_pos=0;
  uint64_t __t1244t__=0;
  char __t1245t__=0;
  uint64_t __t1246t=0;
  uint64_t __t1247t__=0;
  uint64_t pos=0;
  char* __t1248t__buf__unsafe_ptr=0;
  uint64_t __t1248t__buf__unsafe_size=0;
  uint32_t __t1248t__buf__unsafe_offset=0;
  uint32_t __t1248t__buf__unsafe_align=0;
  uint64_t __t1248t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1243t__);
  next_pos=__t1243t__;
  len__t1116t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1244t__);
  gt__t325t(next_pos,__t1244t__,&__t1245t__);
  if(__t1245t__){
  __t_errcode=19;
  goto __t_failure;
  }
  __t1246t=0;
  add__t188t(allocator__pos,__t1246t,&__t1247t__);
  pos=__t1247t__;
  allocator__pos=next_pos;
  allocated__t1166t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1248t__buf__unsafe_ptr,&__t1248t__buf__unsafe_size,&__t1248t__buf__unsafe_offset,&__t1248t__buf__unsafe_align,&__t1248t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5491t=allocator__buf__unsafe_ptr;
  *__t5492t=allocator__buf__unsafe_size;
  *__t5493t=allocator__buf__unsafe_offset;
  *__t5494t=allocator__buf__unsafe_align;
  *__t5495t=allocator__pos;
  *__t5496t=__t1248t__buf__unsafe_ptr;
  *__t5497t=__t1248t__buf__unsafe_size;
  *__t5498t=__t1248t__buf__unsafe_offset;
  *__t5499t=__t1248t__buf__unsafe_align;
  *__t5500t=__t1248t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1675t(char** __t5501t, uint64_t* __t5502t, uint32_t* __t5503t, uint32_t* __t5504t, uint64_t* __t5505t, const char* _other, char** __t5506t, uint64_t* __t5507t, uint64_t* __t5508t, char* __t5509t) {
  char* CHARS__buf__unsafe_ptr=*__t5501t;
  uint64_t CHARS__buf__unsafe_size=*__t5502t;
  uint32_t CHARS__buf__unsafe_offset=*__t5503t;
  uint32_t CHARS__buf__unsafe_align=*__t5504t;
  uint64_t CHARS__pos=*__t5505t;
  char* __t1676t__unsafe_ptr=0;
  uint64_t __t1676t__dat__pos=0;
  uint64_t __t1676t__dat__length=0;
  char __t1676t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1677t__buf__unsafe_ptr=0;
  uint64_t __t1677t__buf__unsafe_size=0;
  uint32_t __t1677t__buf__unsafe_offset=0;
  uint32_t __t1677t__buf__unsafe_align=0;
  uint64_t __t1677t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1678t=0;
  char* __t1679t__unsafe_ptr=0;
  uint64_t __t1679t__dat__pos=0;
  uint64_t __t1679t__dat__length=0;
  char __t1679t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1626t(_other,&__t1676t__unsafe_ptr,&__t1676t__dat__pos,&__t1676t__dat__length,&__t1676t__dat__first);
  other__unsafe_ptr=__t1676t__unsafe_ptr;
  other__dat__pos=__t1676t__dat__pos;
  other__dat__length=__t1676t__dat__length;
  other__dat__first=__t1676t__dat__first;
  __t_errcode=alloc__t1241t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1677t__buf__unsafe_ptr,&__t1677t__buf__unsafe_size,&__t1677t__buf__unsafe_offset,&__t1677t__buf__unsafe_align,&__t1677t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1677t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1677t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1677t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1677t__buf__unsafe_align;
  surface__pos=__t1677t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1570t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1679t__unsafe_ptr,&__t1679t__dat__pos,&__t1679t__dat__length,&__t1679t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5501t=CHARS__buf__unsafe_ptr;
  *__t5502t=CHARS__buf__unsafe_size;
  *__t5503t=CHARS__buf__unsafe_offset;
  *__t5504t=CHARS__buf__unsafe_align;
  *__t5505t=CHARS__pos;
  *__t5506t=__t1679t__unsafe_ptr;
  *__t5507t=__t1679t__dat__pos;
  *__t5508t=__t1679t__dat__length;
  *__t5509t=__t1679t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1117t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1642t(char** __t5510t, uint64_t* __t5511t, uint32_t* __t5512t, uint32_t* __t5513t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5510t=unsafe_ptr;
  *__t5511t=unsafe_size;
  *__t5512t=unsafe_offset;
  *__t5513t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t1636t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5514t) {
  goto __t_return;
  __t_return:
  *__t5514t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1700t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5515t, uint64_t* __t5516t, uint64_t* __t5517t, char* __t5518t) {
  char* __t1701t__unsafe_ptr=0;
  uint64_t __t1701t__unsafe_size=0;
  uint32_t __t1701t__unsafe_offset=0;
  uint32_t __t1701t__unsafe_align=0;
  uint64_t __t1702t=0;
  uint64_t __t1703t__=0;
  uint64_t __t1704t__=0;
  char* __t1705t__unsafe_ptr=0;
  uint64_t __t1705t__unsafe_size=0;
  uint32_t __t1705t__unsafe_offset=0;
  uint32_t __t1705t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t1707t=0;
  uint64_t __t1708t=0;
  char* __t1709t__unsafe_ptr=0;
  uint64_t __t1709t__dat__pos=0;
  uint64_t __t1709t__dat__length=0;
  char __t1709t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1642t(&__t1701t__unsafe_ptr,&__t1701t__unsafe_size,&__t1701t__unsafe_offset,&__t1701t__unsafe_align);
  __t1702t=1;
  len__t1636t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1703t__);
  add__t188t(__t1702t,__t1703t__,&__t1704t__);
  __t_errcode=alloc__t888t(&__t1701t__unsafe_ptr,&__t1701t__unsafe_size,&__t1701t__unsafe_offset,&__t1701t__unsafe_align,__t1704t__,&__t1705t__unsafe_ptr,&__t1705t__unsafe_size,&__t1705t__unsafe_offset,&__t1705t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1705t__unsafe_ptr;
  buf__unsafe_size=__t1705t__unsafe_size;
  buf__unsafe_offset=__t1705t__unsafe_offset;
  buf__unsafe_align=__t1705t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1708t=0;
  __t_errcode=str__t1570t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1708t,other__dat__length,other__dat__first,&__t1709t__unsafe_ptr,&__t1709t__dat__pos,&__t1709t__dat__length,&__t1709t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t765t(&__t1709t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5515t=__t1709t__unsafe_ptr;
  *__t5516t=__t1709t__dat__pos;
  *__t5517t=__t1709t__dat__length;
  *__t5518t=__t1709t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1724t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5519t, char** __t5520t, uint64_t* __t5521t, uint64_t* __t5522t, char* __t5523t) {
  int __t1725t=0;
  char* __t1727t__unsafe_ptr=0;
  uint64_t __t1727t__dat__pos=0;
  uint64_t __t1727t__dat__length=0;
  char __t1727t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1729t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1117t();
  __t_errcode=copy_null_terminated__t1700t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1727t__unsafe_ptr,&__t1727t__dat__pos,&__t1727t__dat__length,&__t1727t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1727t__unsafe_ptr;
  str__dat__pos=__t1727t__dat__pos;
  str__dat__length=__t1727t__dat__length;
  str__dat__first=__t1727t__dat__first;
  add__t767t(str__unsafe_ptr,str__dat__pos,&__t1729t__);
  _ret=__t1729t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t765t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5519t=cstr;
  *__t5520t=str__unsafe_ptr;
  *__t5521t=str__dat__pos;
  *__t5522t=str__dat__length;
  *__t5523t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1734t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5524t) {
  goto __t_return;
  __t_return:
  *__t5524t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t5020t(char* unsafe_ptr) {
  int __t5022t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t5023t(const char* path, char** __t5525t) {
  int __t5025t=0;
  char* unsafe_ptr=0;
  char __t5027t__=0;
  char __t5028t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t645t(unsafe_ptr,&__t5027t__);
  not__t42t(__t5027t__,&__t5028t__);
  if(__t5028t__){
  __t_errcode=45;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5020t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5525t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t5030t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t5526t) {
  const char* __t5031t__cstr=0;
  char* __t5031t__str__unsafe_ptr=0;
  uint64_t __t5031t__str__dat__pos=0;
  uint64_t __t5031t__str__dat__length=0;
  char __t5031t__str__dat__first=0;
  const char* __t5033t__=0;
  char* __t5034t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1724t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5031t__cstr,&__t5031t__str__unsafe_ptr,&__t5031t__str__dat__pos,&__t5031t__str__dat__length,&__t5031t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1734t(__t5031t__cstr,__t5031t__str__unsafe_ptr,__t5031t__str__dat__pos,__t5031t__str__dat__length,__t5031t__str__dat__first,&__t5033t__);
  __t_errcode=open__t5023t(__t5033t__,&__t5034t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t5020t(__t5034t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5526t=__t5034t__unsafe_ptr;
  
  __t_skip_returns:free__t765t(&__t5031t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t5042t(char** __t5527t, const char** __t5528t) {
  char* f__unsafe_ptr=*__t5527t;
  char __t5043t__=0;
  char __t5044t__=0;
  char* de=0;
  char __t5045t__=0;
  char __t5046t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t645t(f__unsafe_ptr,&__t5043t__);
  not__t42t(__t5043t__,&__t5044t__);
  if(__t5044t__){
  __t_errcode=56;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t645t(de,&__t5045t__);
  not__t42t(__t5045t__,&__t5046t__);
  if(__t5046t__){
  __t_errcode=57;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5527t=f__unsafe_ptr;
  *__t5528t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t5047t(char** __t5529t, char** __t5530t, uint64_t* __t5531t, uint64_t* __t5532t, char* __t5533t) {
  char* f__unsafe_ptr=*__t5529t;
  const char* __t5048t__=0;
  char* __t5049t__unsafe_ptr=0;
  uint64_t __t5049t__dat__pos=0;
  uint64_t __t5049t__dat__length=0;
  char __t5049t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t5042t(&f__unsafe_ptr,&__t5048t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1626t(__t5048t__,&__t5049t__unsafe_ptr,&__t5049t__dat__pos,&__t5049t__dat__length,&__t5049t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5529t=f__unsafe_ptr;
  *__t5530t=__t5049t__unsafe_ptr;
  *__t5531t=__t5049t__dat__pos;
  *__t5532t=__t5049t__dat__length;
  *__t5533t=__t5049t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t5113t(char** __t5534t, uint64_t __t_anon1, char** __t5535t, uint64_t* __t5536t, uint64_t* __t5537t, char* __t5538t) {
  char* data__unsafe_ptr=*__t5534t;
  char* __t5114t__unsafe_ptr=0;
  uint64_t __t5114t__dat__pos=0;
  uint64_t __t5114t__dat__length=0;
  char __t5114t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t5047t(&data__unsafe_ptr,&__t5114t__unsafe_ptr,&__t5114t__dat__pos,&__t5114t__dat__length,&__t5114t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5534t=data__unsafe_ptr;
  *__t5535t=__t5114t__unsafe_ptr;
  *__t5536t=__t5114t__dat__pos;
  *__t5537t=__t5114t__dat__length;
  *__t5538t=__t5114t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1638t(const char* s, char* __t5539t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t5539t=c;
}

static inline __attribute__((always_inline)) void neq__t1640t(char x, char y, char* __t5540t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5540t=z;
}

static inline __attribute__((always_inline)) void eq__t1741t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5541t) {
  uint64_t __t1742t__=0;
  uint64_t n=0;
  uint64_t __t1743t__=0;
  char __t1744t__=0;
  char __t1745t=0;
  char __t1746t__=0;
  char __t1747t=0;
  char z=0;
  len__t1636t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1742t__);
  n=__t1742t__;
  len__t1636t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1743t__);
  neq__t158t(n,__t1743t__,&__t1744t__);
  if(__t1744t__){
  __t1745t=0;
  goto __t_return;
  }
  neq__t1640t(x__dat__first,y__dat__first,&__t1746t__);
  if(__t1746t__){
  __t1747t=0;
  __t1745t=__t1747t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1745t=z;
  goto __t_return;
  __t_return:
  *__t5541t=__t1745t;
}

void eq__t1748t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t5542t) {
  char __t1749t__=0;
  char __t1750t__=0;
  char __t1751t=0;
  char* __t1752t__unsafe_ptr=0;
  uint64_t __t1752t__dat__pos=0;
  uint64_t __t1752t__dat__length=0;
  char __t1752t__dat__first=0;
  char __t1753t__=0;
  char__t1638t(y,&__t1749t__);
  neq__t1640t(x__dat__first,__t1749t__,&__t1750t__);
  if(__t1750t__){
  __t1751t=0;
  goto __t_return;
  }
  str__t1626t(y,&__t1752t__unsafe_ptr,&__t1752t__dat__pos,&__t1752t__dat__length,&__t1752t__dat__first);
  eq__t1741t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1752t__unsafe_ptr,__t1752t__dat__pos,__t1752t__dat__length,__t1752t__dat__first,&__t1753t__);
  __t1751t=__t1753t__;
  goto __t_return;
  __t_return:
  *__t5542t=__t1751t;
}

int unsafe_temp__t1710t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5543t, char** __t5544t, uint64_t* __t5545t, uint64_t* __t5546t, char* __t5547t) {
  int __t1711t=0;
  char* __t1712t__unsafe_ptr=0;
  uint64_t __t1712t__unsafe_size=0;
  uint32_t __t1712t__unsafe_offset=0;
  uint32_t __t1712t__unsafe_align=0;
  uint64_t __t1713t=0;
  uint64_t __t1714t__=0;
  uint64_t __t1715t__=0;
  char* __t1716t__unsafe_ptr=0;
  uint64_t __t1716t__unsafe_size=0;
  uint32_t __t1716t__unsafe_offset=0;
  uint32_t __t1716t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1718t=0;
  char __t1719t__=0;
  char first_character=0;
  uint64_t __t1720t=0;
  char* __t1721t__unsafe_ptr=0;
  uint64_t __t1721t__dat__pos=0;
  uint64_t __t1721t__dat__length=0;
  char __t1721t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1722t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1642t(&__t1712t__unsafe_ptr,&__t1712t__unsafe_size,&__t1712t__unsafe_offset,&__t1712t__unsafe_align);
  __t1713t=1;
  add__t188t(__t1713t,other__dat__length,&__t1714t__);
  add__t188t(__t1714t__,prefix__dat__length,&__t1715t__);
  __t_errcode=alloc__t888t(&__t1712t__unsafe_ptr,&__t1712t__unsafe_size,&__t1712t__unsafe_offset,&__t1712t__unsafe_align,__t1715t__,&__t1716t__unsafe_ptr,&__t1716t__unsafe_size,&__t1716t__unsafe_offset,&__t1716t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1716t__unsafe_ptr;
  buf__unsafe_size=__t1716t__unsafe_size;
  buf__unsafe_offset=__t1716t__unsafe_offset;
  buf__unsafe_align=__t1716t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1718t=0;
  eq__t134t(prefix__dat__length,__t1718t,&__t1719t__);
  if(__t1719t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1720t=0;
  __t_errcode=str__t1570t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1720t,other__dat__length,first_character,&__t1721t__unsafe_ptr,&__t1721t__dat__pos,&__t1721t__dat__length,&__t1721t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1721t__unsafe_ptr;
  str__dat__pos=__t1721t__dat__pos;
  str__dat__length=__t1721t__dat__length;
  str__dat__first=__t1721t__dat__first;
  add__t767t(str__unsafe_ptr,str__dat__pos,&__t1722t__);
  _ret=__t1722t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t765t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5543t=cstr;
  *__t5544t=str__unsafe_ptr;
  *__t5545t=str__dat__pos;
  *__t5546t=str__dat__length;
  *__t5547t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1733t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5548t) {
  goto __t_return;
  __t_return:
  *__t5548t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t4947t(const char* path, char* __t5549t) {
  int __t4949t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t5549t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t4957t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t5550t) {
  int __t4959t=0;
  const char* __t4960t__cstr=0;
  char* __t4960t__str__unsafe_ptr=0;
  uint64_t __t4960t__str__dat__pos=0;
  uint64_t __t4960t__str__dat__length=0;
  char __t4960t__str__dat__first=0;
  const char* __t4962t__=0;
  char __t4963t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1710t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t4960t__cstr,&__t4960t__str__unsafe_ptr,&__t4960t__str__dat__pos,&__t4960t__str__dat__length,&__t4960t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1733t(__t4960t__cstr,__t4960t__str__unsafe_ptr,__t4960t__str__dat__pos,__t4960t__str__dat__length,__t4960t__str__dat__first,&__t4962t__);
  is_dir__t4947t(__t4962t__,&__t4963t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5550t=__t4963t__;
  
  __t_skip_returns:free__t765t(&__t4960t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t409t(uint64_t x, uint64_t y, uint64_t* __t5551t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5551t=z;
}

static inline __attribute__((always_inline)) void reuse__t5308t(char** __t5552t, uint64_t* __t5553t, uint32_t* __t5554t, uint32_t* __t5555t, uint64_t* __t5556t, uint64_t* __t5557t) {
  char* arn__buf__unsafe_ptr=*__t5552t;
  uint64_t arn__buf__unsafe_size=*__t5553t;
  uint32_t arn__buf__unsafe_offset=*__t5554t;
  uint32_t arn__buf__unsafe_align=*__t5555t;
  uint64_t arn__pos=*__t5556t;
  uint64_t __t5309t=0;
  uint64_t __t5310t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5311t=0;
  uint64_t __t5313t__=0;
  __t5309t=0;
  add__t188t(__t5309t,arn__pos,&__t5310t__);
  tracked_position=__t5310t__;
  goto __t_return;
  __t_return:
  *__t5552t=arn__buf__unsafe_ptr;
  *__t5553t=arn__buf__unsafe_size;
  *__t5554t=arn__buf__unsafe_offset;
  *__t5555t=arn__buf__unsafe_align;
  *__t5556t=arn__pos;
  *__t5557t=tracked_position;
}

static inline __attribute__((always_inline)) void str__t1603t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5558t, uint64_t* __t5559t, uint64_t* __t5560t, char* __t5561t) {
  goto __t_return;
  __t_return:
  *__t5558t=other__unsafe_ptr;
  *__t5559t=other__dat__pos;
  *__t5560t=other__dat__length;
  *__t5561t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5562t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5562t=z;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t5563t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5563t=z;
}

static inline __attribute__((always_inline)) void status__t1171t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5564t, uint64_t* __t5565t, uint32_t* __t5566t, uint32_t* __t5567t, uint64_t* __t5568t) {
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
  *__t5564t=__t1172t__unsafe_ptr;
  *__t5565t=__t1172t__unsafe_size;
  *__t5566t=__t1172t__unsafe_offset;
  *__t5567t=__t1172t__unsafe_align;
  *__t5568t=__t1173t;
}

static inline __attribute__((always_inline)) int copy__t1670t(char** __t5569t, uint64_t* __t5570t, uint32_t* __t5571t, uint32_t* __t5572t, uint64_t* __t5573t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5574t, uint64_t* __t5575t, uint64_t* __t5576t, char* __t5577t) {
  char* CHARS__buf__unsafe_ptr=*__t5569t;
  uint64_t CHARS__buf__unsafe_size=*__t5570t;
  uint32_t CHARS__buf__unsafe_offset=*__t5571t;
  uint32_t CHARS__buf__unsafe_align=*__t5572t;
  uint64_t CHARS__pos=*__t5573t;
  char* __t1671t__unsafe_ptr=0;
  uint64_t __t1671t__dat__pos=0;
  uint64_t __t1671t__dat__length=0;
  char __t1671t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1672t__buf__unsafe_ptr=0;
  uint64_t __t1672t__buf__unsafe_size=0;
  uint32_t __t1672t__buf__unsafe_offset=0;
  uint32_t __t1672t__buf__unsafe_align=0;
  uint64_t __t1672t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1673t=0;
  char* __t1674t__unsafe_ptr=0;
  uint64_t __t1674t__dat__pos=0;
  uint64_t __t1674t__dat__length=0;
  char __t1674t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1603t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1671t__unsafe_ptr,&__t1671t__dat__pos,&__t1671t__dat__length,&__t1671t__dat__first);
  other__unsafe_ptr=__t1671t__unsafe_ptr;
  other__dat__pos=__t1671t__dat__pos;
  other__dat__length=__t1671t__dat__length;
  other__dat__first=__t1671t__dat__first;
  __t_errcode=alloc__t1241t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1672t__buf__unsafe_ptr,&__t1672t__buf__unsafe_size,&__t1672t__buf__unsafe_offset,&__t1672t__buf__unsafe_align,&__t1672t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1672t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1672t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1672t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1672t__buf__unsafe_align;
  surface__pos=__t1672t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1570t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1674t__unsafe_ptr,&__t1674t__dat__pos,&__t1674t__dat__length,&__t1674t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5569t=CHARS__buf__unsafe_ptr;
  *__t5570t=CHARS__buf__unsafe_size;
  *__t5571t=CHARS__buf__unsafe_offset;
  *__t5572t=CHARS__buf__unsafe_align;
  *__t5573t=CHARS__pos;
  *__t5574t=__t1674t__unsafe_ptr;
  *__t5575t=__t1674t__dat__pos;
  *__t5576t=__t1674t__dat__length;
  *__t5577t=__t1674t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1168t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5578t, uint64_t* __t5579t, uint32_t* __t5580t, uint32_t* __t5581t, uint64_t* __t5582t) {
  char* __t1169t__unsafe_ptr=0;
  uint64_t __t1169t__unsafe_size=0;
  uint32_t __t1169t__unsafe_offset=0;
  uint32_t __t1169t__unsafe_align=0;
  uint64_t __t1170t=0;
  __t1169t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1169t__unsafe_size=self__buf__unsafe_size;
  __t1169t__unsafe_offset=self__buf__unsafe_offset;
  __t1169t__unsafe_align=self__buf__unsafe_align;
  __t1170t=self__pos;
  goto __t_return;
  __t_return:
  *__t5578t=__t1169t__unsafe_ptr;
  *__t5579t=__t1169t__unsafe_size;
  *__t5580t=__t1169t__unsafe_offset;
  *__t5581t=__t1169t__unsafe_align;
  *__t5582t=__t1170t;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t5583t) {
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
  *__t5583t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1622t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5584t, uint64_t* __t5585t, uint64_t* __t5586t, char* __t5587t) {
  uint64_t __t1624t__=0;
  char* __t1625t__unsafe_ptr=0;
  uint64_t __t1625t__dat__pos=0;
  uint64_t __t1625t__dat__length=0;
  char __t1625t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t401t(endpos,pos,&__t1624t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1624t__,&__t1625t__unsafe_ptr,&__t1625t__dat__pos,&__t1625t__dat__length,&__t1625t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5584t=__t1625t__unsafe_ptr;
  *__t5585t=__t1625t__dat__pos;
  *__t5586t=__t1625t__dat__length;
  *__t5587t=__t1625t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2822t(char** __t5588t, uint64_t* __t5589t, uint32_t* __t5590t, uint32_t* __t5591t, uint64_t* __t5592t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5593t, uint64_t* __t5594t, uint64_t* __t5595t, char* __t5596t) {
  char* CHARS__buf__unsafe_ptr=*__t5588t;
  uint64_t CHARS__buf__unsafe_size=*__t5589t;
  uint32_t CHARS__buf__unsafe_offset=*__t5590t;
  uint32_t CHARS__buf__unsafe_align=*__t5591t;
  uint64_t CHARS__pos=*__t5592t;
  char* __t2823t__unsafe_ptr=0;
  uint64_t __t2823t__dat__pos=0;
  uint64_t __t2823t__dat__length=0;
  char __t2823t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2824t__unsafe_ptr=0;
  uint64_t __t2824t__dat__pos=0;
  uint64_t __t2824t__dat__length=0;
  char __t2824t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2825t__=0;
  uint64_t __t2826t__=0;
  char __t2827t__=0;
  char __t2828t=0;
  uint64_t __t2829t__=0;
  char __t2830t__=0;
  char __t2831t=0;
  uint64_t __t2832t__=0;
  char* __t2833t__buf__unsafe_ptr=0;
  uint64_t __t2833t__buf__unsafe_size=0;
  uint32_t __t2833t__buf__unsafe_offset=0;
  uint32_t __t2833t__buf__unsafe_align=0;
  uint64_t __t2833t__pos=0;
  char* __t2834t____t1172t__unsafe_ptr=0;
  uint64_t __t2834t____t1172t__unsafe_size=0;
  uint32_t __t2834t____t1172t__unsafe_offset=0;
  uint32_t __t2834t____t1172t__unsafe_align=0;
  uint64_t __t2834t____t1173t=0;
  char* __t2835t__buf__unsafe_ptr=0;
  uint64_t __t2835t__buf__unsafe_size=0;
  uint32_t __t2835t__buf__unsafe_offset=0;
  uint32_t __t2835t__buf__unsafe_align=0;
  uint64_t __t2835t__pos=0;
  char* __t2836t__buf__unsafe_ptr=0;
  uint64_t __t2836t__buf__unsafe_size=0;
  uint32_t __t2836t__buf__unsafe_offset=0;
  uint32_t __t2836t__buf__unsafe_align=0;
  uint64_t __t2836t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2837t__unsafe_ptr=0;
  uint64_t __t2837t__dat__pos=0;
  uint64_t __t2837t__dat__length=0;
  char __t2837t__dat__first=0;
  char* __t2838t____t1169t__unsafe_ptr=0;
  uint64_t __t2838t____t1169t__unsafe_size=0;
  uint32_t __t2838t____t1169t__unsafe_offset=0;
  uint32_t __t2838t____t1169t__unsafe_align=0;
  uint64_t __t2838t____t1170t=0;
  uint64_t __t2840t=0;
  uint64_t __t2841t__=0;
  char* __t2842t__unsafe_ptr=0;
  uint64_t __t2842t__dat__pos=0;
  uint64_t __t2842t__dat__length=0;
  char __t2842t__dat__first=0;
  char __t2843t__=0;
  char __t2844t__=0;
  char __t2845t=0;
  uint64_t __t2846t__=0;
  char __t2847t__=0;
  char __t2848t=0;
  uint64_t __t2849t__=0;
  char* __t2851t__unsafe_ptr=0;
  uint64_t __t2851t__dat__pos=0;
  uint64_t __t2851t__dat__length=0;
  char __t2851t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2852t__=0;
  uint64_t __t2853t__=0;
  uint64_t __t2854t__=0;
  char* __t2855t__buf__unsafe_ptr=0;
  uint64_t __t2855t__buf__unsafe_size=0;
  uint32_t __t2855t__buf__unsafe_offset=0;
  uint32_t __t2855t__buf__unsafe_align=0;
  uint64_t __t2855t__pos=0;
  char* __t2856t____t1172t__unsafe_ptr=0;
  uint64_t __t2856t____t1172t__unsafe_size=0;
  uint32_t __t2856t____t1172t__unsafe_offset=0;
  uint32_t __t2856t____t1172t__unsafe_align=0;
  uint64_t __t2856t____t1173t=0;
  char* __t2857t__buf__unsafe_ptr=0;
  uint64_t __t2857t__buf__unsafe_size=0;
  uint32_t __t2857t__buf__unsafe_offset=0;
  uint32_t __t2857t__buf__unsafe_align=0;
  uint64_t __t2857t__pos=0;
  char* __t2858t__buf__unsafe_ptr=0;
  uint64_t __t2858t__buf__unsafe_size=0;
  uint32_t __t2858t__buf__unsafe_offset=0;
  uint32_t __t2858t__buf__unsafe_align=0;
  uint64_t __t2858t__pos=0;
  char* __t2859t__unsafe_ptr=0;
  uint64_t __t2859t__dat__pos=0;
  uint64_t __t2859t__dat__length=0;
  char __t2859t__dat__first=0;
  char* __t2860t__unsafe_ptr=0;
  uint64_t __t2860t__dat__pos=0;
  uint64_t __t2860t__dat__length=0;
  char __t2860t__dat__first=0;
  char __t2861t=0;
  char* __t2862t____t1169t__unsafe_ptr=0;
  uint64_t __t2862t____t1169t__unsafe_size=0;
  uint32_t __t2862t____t1169t__unsafe_offset=0;
  uint32_t __t2862t____t1169t__unsafe_align=0;
  uint64_t __t2862t____t1170t=0;
  uint64_t __t2864t=0;
  uint64_t __t2865t__=0;
  char* __t2866t__unsafe_ptr=0;
  uint64_t __t2866t__dat__pos=0;
  uint64_t __t2866t__dat__length=0;
  char __t2866t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1603t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2823t__unsafe_ptr,&__t2823t__dat__pos,&__t2823t__dat__length,&__t2823t__dat__first);
  s1__unsafe_ptr=__t2823t__unsafe_ptr;
  s1__dat__pos=__t2823t__dat__pos;
  s1__dat__length=__t2823t__dat__length;
  s1__dat__first=__t2823t__dat__first;
  str__t1603t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2824t__unsafe_ptr,&__t2824t__dat__pos,&__t2824t__dat__length,&__t2824t__dat__first);
  s2__unsafe_ptr=__t2824t__unsafe_ptr;
  s2__dat__pos=__t2824t__dat__pos;
  s2__dat__length=__t2824t__dat__length;
  s2__dat__first=__t2824t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2825t__);
  if(__t2825t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2826t__);
  eq__t134t(CHARS__pos,__t2826t__,&__t2827t__);
  __t2828t=__t2827t__;
  }
  if(__t2828t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2829t__);
  lt__t301t(__t2829t__,CHARS__buf__unsafe_size,&__t2830t__);
  __t2831t=__t2830t__;
  }
  if(__t2831t){
  len__t1636t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2832t__);
  __t_errcode=alloc__t1241t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2832t__,&__t2833t__buf__unsafe_ptr,&__t2833t__buf__unsafe_size,&__t2833t__buf__unsafe_offset,&__t2833t__buf__unsafe_align,&__t2833t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1171t(__t2833t__buf__unsafe_ptr,__t2833t__buf__unsafe_size,__t2833t__buf__unsafe_offset,__t2833t__buf__unsafe_align,__t2833t__pos,&__t2834t____t1172t__unsafe_ptr,&__t2834t____t1172t__unsafe_size,&__t2834t____t1172t__unsafe_offset,&__t2834t____t1172t__unsafe_align,&__t2834t____t1173t);
  arena__t1159t(&__t2834t____t1172t__unsafe_ptr,&__t2834t____t1172t__unsafe_size,&__t2834t____t1172t__unsafe_offset,&__t2834t____t1172t__unsafe_align,__t2834t____t1173t,&__t2835t__buf__unsafe_ptr,&__t2835t__buf__unsafe_size,&__t2835t__buf__unsafe_offset,&__t2835t__buf__unsafe_align,&__t2835t__pos);
  __t2836t__buf__unsafe_ptr=__t2835t__buf__unsafe_ptr;
  __t2836t__buf__unsafe_size=__t2835t__buf__unsafe_size;
  __t2836t__buf__unsafe_offset=__t2835t__buf__unsafe_offset;
  __t2836t__buf__unsafe_align=__t2835t__buf__unsafe_align;
  __t2836t__pos=__t2835t__pos;
  surface__buf__unsafe_ptr=__t2836t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2836t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2836t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2836t__buf__unsafe_align;
  surface__pos=__t2836t__pos;
  __t_errcode=copy__t1670t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2837t__unsafe_ptr,&__t2837t__dat__pos,&__t2837t__dat__length,&__t2837t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1168t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2838t____t1169t__unsafe_ptr,&__t2838t____t1169t__unsafe_size,&__t2838t____t1169t__unsafe_offset,&__t2838t____t1169t__unsafe_align,&__t2838t____t1170t);
  __t2840t=0;
  add__t188t(s1__dat__pos,__t2840t,&__t2841t__);
  __t_errcode=str__t1622t(__t2838t____t1169t__unsafe_ptr,__t2838t____t1169t__unsafe_size,__t2838t____t1169t__unsafe_offset,__t2838t____t1169t__unsafe_align,__t2838t____t1170t,__t2841t__,&__t2842t__unsafe_ptr,&__t2842t__dat__pos,&__t2842t__dat__length,&__t2842t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2843t__);
  if(__t2843t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2844t__);
  __t2845t=__t2844t__;
  }
  if(__t2845t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2846t__);
  eq__t134t(s2__dat__pos,__t2846t__,&__t2847t__);
  __t2848t=__t2847t__;
  }
  if(__t2848t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2849t__);
  __t_errcode=str__t1622t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2849t__,s1__dat__pos,&__t2851t__unsafe_ptr,&__t2851t__dat__pos,&__t2851t__dat__length,&__t2851t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2842t__unsafe_ptr=__t2851t__unsafe_ptr;
  __t2842t__dat__pos=__t2851t__dat__pos;
  __t2842t__dat__length=__t2851t__dat__length;
  __t2842t__dat__first=__t2851t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1636t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2852t__);
  len__t1636t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2853t__);
  add__t188t(__t2852t__,__t2853t__,&__t2854t__);
  __t_errcode=alloc__t1241t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2854t__,&__t2855t__buf__unsafe_ptr,&__t2855t__buf__unsafe_size,&__t2855t__buf__unsafe_offset,&__t2855t__buf__unsafe_align,&__t2855t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1171t(__t2855t__buf__unsafe_ptr,__t2855t__buf__unsafe_size,__t2855t__buf__unsafe_offset,__t2855t__buf__unsafe_align,__t2855t__pos,&__t2856t____t1172t__unsafe_ptr,&__t2856t____t1172t__unsafe_size,&__t2856t____t1172t__unsafe_offset,&__t2856t____t1172t__unsafe_align,&__t2856t____t1173t);
  arena__t1159t(&__t2856t____t1172t__unsafe_ptr,&__t2856t____t1172t__unsafe_size,&__t2856t____t1172t__unsafe_offset,&__t2856t____t1172t__unsafe_align,__t2856t____t1173t,&__t2857t__buf__unsafe_ptr,&__t2857t__buf__unsafe_size,&__t2857t__buf__unsafe_offset,&__t2857t__buf__unsafe_align,&__t2857t__pos);
  __t2858t__buf__unsafe_ptr=__t2857t__buf__unsafe_ptr;
  __t2858t__buf__unsafe_size=__t2857t__buf__unsafe_size;
  __t2858t__buf__unsafe_offset=__t2857t__buf__unsafe_offset;
  __t2858t__buf__unsafe_align=__t2857t__buf__unsafe_align;
  __t2858t__pos=__t2857t__pos;
  surface__buf__unsafe_ptr=__t2858t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2858t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2858t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2858t__buf__unsafe_align;
  surface__pos=__t2858t__pos;
  __t_errcode=copy__t1670t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2859t__unsafe_ptr,&__t2859t__dat__pos,&__t2859t__dat__length,&__t2859t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1670t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2860t__unsafe_ptr,&__t2860t__dat__pos,&__t2860t__dat__length,&__t2860t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1168t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2862t____t1169t__unsafe_ptr,&__t2862t____t1169t__unsafe_size,&__t2862t____t1169t__unsafe_offset,&__t2862t____t1169t__unsafe_align,&__t2862t____t1170t);
  __t2864t=0;
  add__t188t(prev_pos,__t2864t,&__t2865t__);
  __t_complain=str__t1622t(__t2862t____t1169t__unsafe_ptr,__t2862t____t1169t__unsafe_size,__t2862t____t1169t__unsafe_offset,__t2862t____t1169t__unsafe_align,__t2862t____t1170t,__t2865t__,&__t2866t__unsafe_ptr,&__t2866t__dat__pos,&__t2866t__dat__length,&__t2866t__dat__first);
  __t2861t=__t_complain;
  if(__t_complain){
  goto __t2861t__label;
  }
  ret__unsafe_ptr=__t2866t__unsafe_ptr;
  ret__dat__pos=__t2866t__dat__pos;
  ret__dat__length=__t2866t__dat__length;
  ret__dat__first=__t2866t__dat__first;
  __t2861t__label:__t2861t=__t2861t==0;
  __t2842t__unsafe_ptr=ret__unsafe_ptr;
  __t2842t__dat__pos=ret__dat__pos;
  __t2842t__dat__length=ret__dat__length;
  __t2842t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5588t=CHARS__buf__unsafe_ptr;
  *__t5589t=CHARS__buf__unsafe_size;
  *__t5590t=CHARS__buf__unsafe_offset;
  *__t5591t=CHARS__buf__unsafe_align;
  *__t5592t=CHARS__pos;
  *__t5593t=__t2842t__unsafe_ptr;
  *__t5594t=__t2842t__dat__pos;
  *__t5595t=__t2842t__dat__length;
  *__t5596t=__t2842t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2867t(char** __t5597t, uint64_t* __t5598t, uint32_t* __t5599t, uint32_t* __t5600t, uint64_t* __t5601t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5602t, uint64_t* __t5603t, uint64_t* __t5604t, char* __t5605t) {
  char* CHARS__buf__unsafe_ptr=*__t5597t;
  uint64_t CHARS__buf__unsafe_size=*__t5598t;
  uint32_t CHARS__buf__unsafe_offset=*__t5599t;
  uint32_t CHARS__buf__unsafe_align=*__t5600t;
  uint64_t CHARS__pos=*__t5601t;
  char* __t2868t__unsafe_ptr=0;
  uint64_t __t2868t__dat__pos=0;
  uint64_t __t2868t__dat__length=0;
  char __t2868t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2869t__unsafe_ptr=0;
  uint64_t __t2869t__dat__pos=0;
  uint64_t __t2869t__dat__length=0;
  char __t2869t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2870t__=0;
  uint64_t __t2871t__=0;
  char __t2872t__=0;
  char __t2873t=0;
  uint64_t __t2874t__=0;
  char __t2875t__=0;
  char __t2876t=0;
  uint64_t __t2877t__=0;
  char* __t2878t__buf__unsafe_ptr=0;
  uint64_t __t2878t__buf__unsafe_size=0;
  uint32_t __t2878t__buf__unsafe_offset=0;
  uint32_t __t2878t__buf__unsafe_align=0;
  uint64_t __t2878t__pos=0;
  char* __t2879t____t1172t__unsafe_ptr=0;
  uint64_t __t2879t____t1172t__unsafe_size=0;
  uint32_t __t2879t____t1172t__unsafe_offset=0;
  uint32_t __t2879t____t1172t__unsafe_align=0;
  uint64_t __t2879t____t1173t=0;
  char* __t2880t__buf__unsafe_ptr=0;
  uint64_t __t2880t__buf__unsafe_size=0;
  uint32_t __t2880t__buf__unsafe_offset=0;
  uint32_t __t2880t__buf__unsafe_align=0;
  uint64_t __t2880t__pos=0;
  char* __t2881t__buf__unsafe_ptr=0;
  uint64_t __t2881t__buf__unsafe_size=0;
  uint32_t __t2881t__buf__unsafe_offset=0;
  uint32_t __t2881t__buf__unsafe_align=0;
  uint64_t __t2881t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2882t__unsafe_ptr=0;
  uint64_t __t2882t__dat__pos=0;
  uint64_t __t2882t__dat__length=0;
  char __t2882t__dat__first=0;
  char* __t2883t____t1169t__unsafe_ptr=0;
  uint64_t __t2883t____t1169t__unsafe_size=0;
  uint32_t __t2883t____t1169t__unsafe_offset=0;
  uint32_t __t2883t____t1169t__unsafe_align=0;
  uint64_t __t2883t____t1170t=0;
  uint64_t __t2885t=0;
  uint64_t __t2886t__=0;
  char* __t2887t__unsafe_ptr=0;
  uint64_t __t2887t__dat__pos=0;
  uint64_t __t2887t__dat__length=0;
  char __t2887t__dat__first=0;
  char __t2888t__=0;
  char __t2889t__=0;
  char __t2890t=0;
  uint64_t __t2891t__=0;
  char __t2892t__=0;
  char __t2893t=0;
  uint64_t __t2894t__=0;
  char* __t2896t__unsafe_ptr=0;
  uint64_t __t2896t__dat__pos=0;
  uint64_t __t2896t__dat__length=0;
  char __t2896t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2897t__=0;
  uint64_t __t2898t__=0;
  uint64_t __t2899t__=0;
  char* __t2900t__buf__unsafe_ptr=0;
  uint64_t __t2900t__buf__unsafe_size=0;
  uint32_t __t2900t__buf__unsafe_offset=0;
  uint32_t __t2900t__buf__unsafe_align=0;
  uint64_t __t2900t__pos=0;
  char* __t2901t____t1172t__unsafe_ptr=0;
  uint64_t __t2901t____t1172t__unsafe_size=0;
  uint32_t __t2901t____t1172t__unsafe_offset=0;
  uint32_t __t2901t____t1172t__unsafe_align=0;
  uint64_t __t2901t____t1173t=0;
  char* __t2902t__buf__unsafe_ptr=0;
  uint64_t __t2902t__buf__unsafe_size=0;
  uint32_t __t2902t__buf__unsafe_offset=0;
  uint32_t __t2902t__buf__unsafe_align=0;
  uint64_t __t2902t__pos=0;
  char* __t2903t__buf__unsafe_ptr=0;
  uint64_t __t2903t__buf__unsafe_size=0;
  uint32_t __t2903t__buf__unsafe_offset=0;
  uint32_t __t2903t__buf__unsafe_align=0;
  uint64_t __t2903t__pos=0;
  char* __t2904t__unsafe_ptr=0;
  uint64_t __t2904t__dat__pos=0;
  uint64_t __t2904t__dat__length=0;
  char __t2904t__dat__first=0;
  char* __t2905t__unsafe_ptr=0;
  uint64_t __t2905t__dat__pos=0;
  uint64_t __t2905t__dat__length=0;
  char __t2905t__dat__first=0;
  char __t2906t=0;
  char* __t2907t____t1169t__unsafe_ptr=0;
  uint64_t __t2907t____t1169t__unsafe_size=0;
  uint32_t __t2907t____t1169t__unsafe_offset=0;
  uint32_t __t2907t____t1169t__unsafe_align=0;
  uint64_t __t2907t____t1170t=0;
  uint64_t __t2909t=0;
  uint64_t __t2910t__=0;
  char* __t2911t__unsafe_ptr=0;
  uint64_t __t2911t__dat__pos=0;
  uint64_t __t2911t__dat__length=0;
  char __t2911t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1603t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2868t__unsafe_ptr,&__t2868t__dat__pos,&__t2868t__dat__length,&__t2868t__dat__first);
  s1__unsafe_ptr=__t2868t__unsafe_ptr;
  s1__dat__pos=__t2868t__dat__pos;
  s1__dat__length=__t2868t__dat__length;
  s1__dat__first=__t2868t__dat__first;
  str__t1626t(_s2,&__t2869t__unsafe_ptr,&__t2869t__dat__pos,&__t2869t__dat__length,&__t2869t__dat__first);
  s2__unsafe_ptr=__t2869t__unsafe_ptr;
  s2__dat__pos=__t2869t__dat__pos;
  s2__dat__length=__t2869t__dat__length;
  s2__dat__first=__t2869t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2870t__);
  if(__t2870t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2871t__);
  eq__t134t(CHARS__pos,__t2871t__,&__t2872t__);
  __t2873t=__t2872t__;
  }
  if(__t2873t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2874t__);
  lt__t301t(__t2874t__,CHARS__buf__unsafe_size,&__t2875t__);
  __t2876t=__t2875t__;
  }
  if(__t2876t){
  len__t1636t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2877t__);
  __t_errcode=alloc__t1241t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2877t__,&__t2878t__buf__unsafe_ptr,&__t2878t__buf__unsafe_size,&__t2878t__buf__unsafe_offset,&__t2878t__buf__unsafe_align,&__t2878t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1171t(__t2878t__buf__unsafe_ptr,__t2878t__buf__unsafe_size,__t2878t__buf__unsafe_offset,__t2878t__buf__unsafe_align,__t2878t__pos,&__t2879t____t1172t__unsafe_ptr,&__t2879t____t1172t__unsafe_size,&__t2879t____t1172t__unsafe_offset,&__t2879t____t1172t__unsafe_align,&__t2879t____t1173t);
  arena__t1159t(&__t2879t____t1172t__unsafe_ptr,&__t2879t____t1172t__unsafe_size,&__t2879t____t1172t__unsafe_offset,&__t2879t____t1172t__unsafe_align,__t2879t____t1173t,&__t2880t__buf__unsafe_ptr,&__t2880t__buf__unsafe_size,&__t2880t__buf__unsafe_offset,&__t2880t__buf__unsafe_align,&__t2880t__pos);
  __t2881t__buf__unsafe_ptr=__t2880t__buf__unsafe_ptr;
  __t2881t__buf__unsafe_size=__t2880t__buf__unsafe_size;
  __t2881t__buf__unsafe_offset=__t2880t__buf__unsafe_offset;
  __t2881t__buf__unsafe_align=__t2880t__buf__unsafe_align;
  __t2881t__pos=__t2880t__pos;
  surface__buf__unsafe_ptr=__t2881t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2881t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2881t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2881t__buf__unsafe_align;
  surface__pos=__t2881t__pos;
  __t_errcode=copy__t1670t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2882t__unsafe_ptr,&__t2882t__dat__pos,&__t2882t__dat__length,&__t2882t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1168t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2883t____t1169t__unsafe_ptr,&__t2883t____t1169t__unsafe_size,&__t2883t____t1169t__unsafe_offset,&__t2883t____t1169t__unsafe_align,&__t2883t____t1170t);
  __t2885t=0;
  add__t188t(s1__dat__pos,__t2885t,&__t2886t__);
  __t_errcode=str__t1622t(__t2883t____t1169t__unsafe_ptr,__t2883t____t1169t__unsafe_size,__t2883t____t1169t__unsafe_offset,__t2883t____t1169t__unsafe_align,__t2883t____t1170t,__t2886t__,&__t2887t__unsafe_ptr,&__t2887t__dat__pos,&__t2887t__dat__length,&__t2887t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2888t__);
  if(__t2888t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2889t__);
  __t2890t=__t2889t__;
  }
  if(__t2890t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2891t__);
  eq__t134t(s2__dat__pos,__t2891t__,&__t2892t__);
  __t2893t=__t2892t__;
  }
  if(__t2893t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2894t__);
  __t_errcode=str__t1622t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2894t__,s1__dat__pos,&__t2896t__unsafe_ptr,&__t2896t__dat__pos,&__t2896t__dat__length,&__t2896t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2887t__unsafe_ptr=__t2896t__unsafe_ptr;
  __t2887t__dat__pos=__t2896t__dat__pos;
  __t2887t__dat__length=__t2896t__dat__length;
  __t2887t__dat__first=__t2896t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1636t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2897t__);
  len__t1636t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2898t__);
  add__t188t(__t2897t__,__t2898t__,&__t2899t__);
  __t_errcode=alloc__t1241t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2899t__,&__t2900t__buf__unsafe_ptr,&__t2900t__buf__unsafe_size,&__t2900t__buf__unsafe_offset,&__t2900t__buf__unsafe_align,&__t2900t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1171t(__t2900t__buf__unsafe_ptr,__t2900t__buf__unsafe_size,__t2900t__buf__unsafe_offset,__t2900t__buf__unsafe_align,__t2900t__pos,&__t2901t____t1172t__unsafe_ptr,&__t2901t____t1172t__unsafe_size,&__t2901t____t1172t__unsafe_offset,&__t2901t____t1172t__unsafe_align,&__t2901t____t1173t);
  arena__t1159t(&__t2901t____t1172t__unsafe_ptr,&__t2901t____t1172t__unsafe_size,&__t2901t____t1172t__unsafe_offset,&__t2901t____t1172t__unsafe_align,__t2901t____t1173t,&__t2902t__buf__unsafe_ptr,&__t2902t__buf__unsafe_size,&__t2902t__buf__unsafe_offset,&__t2902t__buf__unsafe_align,&__t2902t__pos);
  __t2903t__buf__unsafe_ptr=__t2902t__buf__unsafe_ptr;
  __t2903t__buf__unsafe_size=__t2902t__buf__unsafe_size;
  __t2903t__buf__unsafe_offset=__t2902t__buf__unsafe_offset;
  __t2903t__buf__unsafe_align=__t2902t__buf__unsafe_align;
  __t2903t__pos=__t2902t__pos;
  surface__buf__unsafe_ptr=__t2903t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2903t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2903t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2903t__buf__unsafe_align;
  surface__pos=__t2903t__pos;
  __t_errcode=copy__t1670t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2904t__unsafe_ptr,&__t2904t__dat__pos,&__t2904t__dat__length,&__t2904t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1670t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2905t__unsafe_ptr,&__t2905t__dat__pos,&__t2905t__dat__length,&__t2905t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1168t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2907t____t1169t__unsafe_ptr,&__t2907t____t1169t__unsafe_size,&__t2907t____t1169t__unsafe_offset,&__t2907t____t1169t__unsafe_align,&__t2907t____t1170t);
  __t2909t=0;
  add__t188t(prev_pos,__t2909t,&__t2910t__);
  __t_complain=str__t1622t(__t2907t____t1169t__unsafe_ptr,__t2907t____t1169t__unsafe_size,__t2907t____t1169t__unsafe_offset,__t2907t____t1169t__unsafe_align,__t2907t____t1170t,__t2910t__,&__t2911t__unsafe_ptr,&__t2911t__dat__pos,&__t2911t__dat__length,&__t2911t__dat__first);
  __t2906t=__t_complain;
  if(__t_complain){
  goto __t2906t__label;
  }
  ret__unsafe_ptr=__t2911t__unsafe_ptr;
  ret__dat__pos=__t2911t__dat__pos;
  ret__dat__length=__t2911t__dat__length;
  ret__dat__first=__t2911t__dat__first;
  __t2906t__label:__t2906t=__t2906t==0;
  __t2887t__unsafe_ptr=ret__unsafe_ptr;
  __t2887t__dat__pos=ret__dat__pos;
  __t2887t__dat__length=ret__dat__length;
  __t2887t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5597t=CHARS__buf__unsafe_ptr;
  *__t5598t=CHARS__buf__unsafe_size;
  *__t5599t=CHARS__buf__unsafe_offset;
  *__t5600t=CHARS__buf__unsafe_align;
  *__t5601t=CHARS__pos;
  *__t5602t=__t2887t__unsafe_ptr;
  *__t5603t=__t2887t__dat__pos;
  *__t5604t=__t2887t__dat__length;
  *__t5605t=__t2887t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1811t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t5606t) {
  int __t1812t=0;
  char __t1813t__=0;
  uint64_t __t1814t__=0;
  char* __t1815t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,s__dat__length,&__t1813t__);
  if(__t1813t__){
  __t_errcode=18;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t1814t__);
  add__t767t(s__unsafe_ptr,__t1814t__,&__t1815t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5606t=__t1815t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1837t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t5607t, uint64_t* __t5608t, uint64_t* __t5609t, char* __t5610t) {
  char* __t1838t__unsafe_ptr=0;
  uint64_t __t1838t__dat__pos=0;
  uint64_t __t1838t__dat__length=0;
  char __t1838t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1839t__=0;
  char* __t1840t__unsafe_ptr=0;
  uint64_t __t1840t__dat__pos=0;
  uint64_t __t1840t__dat__length=0;
  char __t1840t__dat__first=0;
  char __t1841t__=0;
  char __t1842t__=0;
  char __t1843t=0;
  char __t1844t__=0;
  uint64_t __t1846t__=0;
  uint64_t new_length=0;
  uint64_t __t1847t=0;
  char __t1848t__=0;
  char new_first=0;
  char* __t1850t__=0;
  char __t1851t__value=0;
  uint64_t __t1852t__=0;
  char* __t1853t__unsafe_ptr=0;
  uint64_t __t1853t__dat__pos=0;
  uint64_t __t1853t__dat__length=0;
  char __t1853t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1603t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1838t__unsafe_ptr,&__t1838t__dat__pos,&__t1838t__dat__length,&__t1838t__dat__first);
  s__unsafe_ptr=__t1838t__unsafe_ptr;
  s__dat__pos=__t1838t__dat__pos;
  s__dat__length=__t1838t__dat__length;
  s__dat__first=__t1838t__dat__first;
  eq__t134t(from,to,&__t1839t__);
  if(__t1839t__){
  str__t1626t(__t431t,&__t1840t__unsafe_ptr,&__t1840t__dat__pos,&__t1840t__dat__length,&__t1840t__dat__first);
  goto __t_return;
  }
  gt__t325t(from,to,&__t1841t__);
  if(!__t1841t__){
  gt__t325t(to,s__dat__length,&__t1842t__);
  __t1843t=__t1842t__;
  }
  else{
  __t1843t=0;
  not__t42t(__t1843t,&__t1844t__);
  __t1843t=__t1844t__;
  }
  if(__t1843t){
  __t_errcode=25;
  goto __t_failure;
  }
  sub__t409t(to,from,&__t1846t__);
  new_length=__t1846t__;
  __t1847t=0;
  neq__t158t(from,__t1847t,&__t1848t__);
  if(__t1848t__){
  __t_errcode=get__t1811t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1850t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1850t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1851t__value,__t1850t__,1);
  new_first=__t1851t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1852t__);
  str__t1566t(s__unsafe_ptr,__t1852t__,new_length,new_first,&__t1853t__unsafe_ptr,&__t1853t__dat__pos,&__t1853t__dat__length,&__t1853t__dat__first);
  __t1840t__unsafe_ptr=__t1853t__unsafe_ptr;
  __t1840t__dat__pos=__t1853t__dat__pos;
  __t1840t__dat__length=__t1853t__dat__length;
  __t1840t__dat__first=__t1853t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5607t=__t1840t__unsafe_ptr;
  *__t5608t=__t1840t__dat__pos;
  *__t5609t=__t1840t__dat__length;
  *__t5610t=__t1840t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1916t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5611t) {
  char* __t1917t__unsafe_ptr=0;
  uint64_t __t1917t__dat__pos=0;
  uint64_t __t1917t__dat__length=0;
  char __t1917t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1918t__unsafe_ptr=0;
  uint64_t __t1918t__dat__pos=0;
  uint64_t __t1918t__dat__length=0;
  char __t1918t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t1919t=0;
  uint64_t __t1920t__=0;
  uint64_t d=0;
  char __t1921t__=0;
  char __t1922t=0;
  char* __t1923t__unsafe_ptr=0;
  uint64_t __t1923t__dat__pos=0;
  uint64_t __t1923t__dat__length=0;
  char __t1923t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1924t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1603t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1917t__unsafe_ptr,&__t1917t__dat__pos,&__t1917t__dat__length,&__t1917t__dat__first);
  stack__unsafe_ptr=__t1917t__unsafe_ptr;
  stack__dat__pos=__t1917t__dat__pos;
  stack__dat__length=__t1917t__dat__length;
  stack__dat__first=__t1917t__dat__first;
  str__t1626t(_needle,&__t1918t__unsafe_ptr,&__t1918t__dat__pos,&__t1918t__dat__length,&__t1918t__dat__first);
  needle__unsafe_ptr=__t1918t__unsafe_ptr;
  needle__dat__pos=__t1918t__dat__pos;
  needle__dat__length=__t1918t__dat__length;
  needle__dat__first=__t1918t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t401t(n,needle__dat__length,&__t1920t__);
  __t1919t=__t_complain;
  if(__t_complain){
  goto __t1919t__label;
  }
  d=__t1920t__;
  __t1919t__label:__t1919t=__t1919t==0;
  not__t42t(__t1919t,&__t1921t__);
  if(__t1921t__){
  __t1922t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1837t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t1923t__unsafe_ptr,&__t1923t__dat__pos,&__t1923t__dat__length,&__t1923t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1923t__unsafe_ptr;
  ret__dat__pos=__t1923t__dat__pos;
  ret__dat__length=__t1923t__dat__length;
  ret__dat__first=__t1923t__dat__first;
  eq__t1741t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1924t__);
  __t1922t=__t1924t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5611t=__t1922t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t700t(uint64_t to, uint64_t* __t5612t, uint64_t* __t5613t) {
  uint64_t __t701t=0;
  __t701t=0;
  goto __t_return;
  __t_return:
  *__t5612t=__t701t;
  *__t5613t=to;
}

static inline __attribute__((always_inline)) void range__t717t(uint64_t _from, uint64_t to, uint64_t* __t5614t, uint64_t* __t5615t) {
  uint64_t __t718t=0;
  uint64_t __t719t__=0;
  uint64_t __t720t=0;
  uint64_t from=0;
  __t718t=0;
  add__t188t(__t718t,_from,&__t719t__);
  __t720t=__t719t__;
  from=__t720t;
  goto __t_return;
  __t_return:
  *__t5614t=from;
  *__t5615t=to;
}

static inline __attribute__((always_inline)) int mutget__t722t(uint64_t* __t5616t, uint64_t r__to, uint64_t skipped, uint64_t* __t5617t) {
  uint64_t r__from=*__t5616t;
  char __t723t__=0;
  uint64_t ret=0;
  uint64_t __t724t=0;
  uint64_t __t725t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(r__from,r__to,&__t723t__);
  if(__t723t__){
  __t_errcode=12;
  goto __t_failure;
  }
  ret=r__from;
  __t724t=1;
  add__t188t(ret,__t724t,&__t725t__);
  r__from=__t725t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5616t=r__from;
  *__t5617t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2002t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5618t) {
  char* __t2003t__unsafe_ptr=0;
  uint64_t __t2003t__dat__pos=0;
  uint64_t __t2003t__dat__length=0;
  char __t2003t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2004t__unsafe_ptr=0;
  uint64_t __t2004t__dat__pos=0;
  uint64_t __t2004t__dat__length=0;
  char __t2004t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t2005t=0;
  uint64_t __t2006t__=0;
  uint64_t n=0;
  char __t2007t__=0;
  char __t2008t=0;
  uint64_t __t2009t=0;
  uint64_t __t2010t____t701t=0;
  uint64_t __t2010t__to=0;
  uint64_t __t2011t__from=0;
  uint64_t __t2011t__to=0;
  char __t2012t=0;
  uint64_t __t2013t__=0;
  uint64_t i=0;
  char __t2014t=0;
  uint64_t __t2015t__=0;
  char* __t2016t__unsafe_ptr=0;
  uint64_t __t2016t__dat__pos=0;
  uint64_t __t2016t__dat__length=0;
  char __t2016t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t2017t__=0;
  char __t2018t=0;
  char __t2019t=0;
  int __t_complain=0;
  str__t1603t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2003t__unsafe_ptr,&__t2003t__dat__pos,&__t2003t__dat__length,&__t2003t__dat__first);
  stack__unsafe_ptr=__t2003t__unsafe_ptr;
  stack__dat__pos=__t2003t__dat__pos;
  stack__dat__length=__t2003t__dat__length;
  stack__dat__first=__t2003t__dat__first;
  str__t1626t(_needle,&__t2004t__unsafe_ptr,&__t2004t__dat__pos,&__t2004t__dat__length,&__t2004t__dat__first);
  needle__unsafe_ptr=__t2004t__unsafe_ptr;
  needle__dat__pos=__t2004t__dat__pos;
  needle__dat__length=__t2004t__dat__length;
  needle__dat__first=__t2004t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t401t(stack__dat__length,d,&__t2006t__);
  __t2005t=__t_complain;
  if(__t_complain){
  goto __t2005t__label;
  }
  n=__t2006t__;
  __t2005t__label:__t2005t=__t2005t==0;
  not__t42t(__t2005t,&__t2007t__);
  if(__t2007t__){
  __t2008t=0;
  goto __t_return;
  }
  of__t700t(n,&__t2010t____t701t,&__t2010t__to);
  range__t717t(__t2010t____t701t,__t2010t__to,&__t2011t__from,&__t2011t__to);
  __t2009t=0-1;
  while(1){
  __t2009t=__t2009t+1;
  __t_complain=mutget__t722t(&__t2011t__from,__t2011t__to,__t2009t,&__t2013t__);
  __t2012t=__t_complain;
  if(__t_complain){
  goto __t2012t__label;
  }
  i=__t2013t__;
  __t2012t__label:__t2012t=__t2012t==0;
  if(!__t2012t){
  break;
  }
  add__t188t(i,d,&__t2015t__);
  __t_complain=slice__t1837t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t2015t__,&__t2016t__unsafe_ptr,&__t2016t__dat__pos,&__t2016t__dat__length,&__t2016t__dat__first);
  __t2014t=__t_complain;
  if(__t_complain){
  goto __t2014t__label;
  }
  sliced__unsafe_ptr=__t2016t__unsafe_ptr;
  sliced__dat__pos=__t2016t__dat__pos;
  sliced__dat__length=__t2016t__dat__length;
  sliced__dat__first=__t2016t__dat__first;
  __t2014t__label:__t2014t=__t2014t==0;
  eq__t1741t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2017t__);
  if(__t2017t__){
  __t2018t=1;
  __t2008t=__t2018t;
  goto __t_return;
  }
  }
  __t2019t=0;
  __t2008t=__t2019t;
  goto __t_return;
  __t_return:
  *__t5618t=__t2008t;
}

static inline __attribute__((always_inline)) void restore_stdout__t5227t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
}

static inline __attribute__((always_inline)) void stdout_to_err__t5228t(int64_t* __t5619t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5619t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t1805t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1806t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void popen__t4191t(const char* cmd, char** __t5620t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t5620t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4190t(char* unsafe_ptr, int64_t* __t5621t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t5621t=status;
}

static inline __attribute__((always_inline)) void int__t626t(uint64_t x, int64_t* __t5622t) {
  int __t627t=0;
  int __t628t=0;
  int __t629t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5622t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t5623t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t5623t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t5624t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5624t=z;
}

static inline __attribute__((always_inline)) int open__t4192t(const char* cmd, char** __t5625t) {
  char* __t4193t__=0;
  char* unsafe_ptr=0;
  char __t4194t__=0;
  char __t4195t__=0;
  char __t4196t__=0;
  int64_t __t4197t__=0;
  int64_t status=0;
  uint64_t __t4198t=0;
  int64_t __t4199t__=0;
  char __t4200t__=0;
  char __t4201t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4191t(cmd,&__t4193t__);
  unsafe_ptr=__t4193t__;
  exists__t645t(unsafe_ptr,&__t4194t__);
  not__t42t(__t4194t__,&__t4195t__);
  if(__t4195t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t645t(unsafe_ptr,&__t4196t__);
  if(__t4196t__){
  pclose__t4190t(unsafe_ptr,&__t4197t__);
  status=__t4197t__;
  unsafe_ptr=0;
  __t4198t=0;
  int__t626t(__t4198t,&__t4199t__);
  neq__t147t(status,__t4199t__,&__t4200t__);
  if(__t4200t__){
  __t_complain=41;
  goto __t4201t__label;
  __t4201t__label:__t4201t=__t4201t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5625t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4203t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t5626t) {
  const char* __t4204t__cstr=0;
  char* __t4204t__str__unsafe_ptr=0;
  uint64_t __t4204t__str__dat__pos=0;
  uint64_t __t4204t__str__dat__length=0;
  char __t4204t__str__dat__first=0;
  const char* __t4206t__=0;
  char* __t4207t__unsafe_ptr=0;
  char __t4208t____t4196t__=0;
  int64_t __t4208t____t4197t__=0;
  int64_t __t4208t__status=0;
  uint64_t __t4208t____t4198t=0;
  int64_t __t4208t____t4199t__=0;
  char __t4208t____t4200t__=0;
  char __t4208t____t4201t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1724t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4204t__cstr,&__t4204t__str__unsafe_ptr,&__t4204t__str__dat__pos,&__t4204t__str__dat__length,&__t4204t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1734t(__t4204t__cstr,__t4204t__str__unsafe_ptr,__t4204t__str__dat__pos,__t4204t__str__dat__length,__t4204t__str__dat__first,&__t4206t__);
  __t_errcode=open__t4192t(__t4206t__,&__t4207t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t645t(__t4207t__unsafe_ptr,&__t4208t____t4196t__);
  if(__t4208t____t4196t__){
  pclose__t4190t(__t4207t__unsafe_ptr,&__t4208t____t4197t__);
  __t4208t__status=__t4208t____t4197t__;
  __t4207t__unsafe_ptr=0;
  __t4208t____t4198t=0;
  int__t626t(__t4208t____t4198t,&__t4208t____t4199t__);
  neq__t147t(__t4208t__status,__t4208t____t4199t__,&__t4208t____t4200t__);
  if(__t4208t____t4200t__){
  __t_complain=41;
  goto __t4201t__label;
  __t4201t__label:__t4208t____t4201t=__t4208t____t4201t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5626t=__t4207t__unsafe_ptr;
  
  __t_skip_returns:free__t765t(&__t4204t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4165t(int64_t value, char* __t5627t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t5627t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4164t(int64_t value, const char** __t5628t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5628t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t5629t) {
  const char* value=0;
  *__t5629t=value;
}

int run__t5155t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t5630t) {
  char* __t5156t__unsafe_ptr=0;
  char __t5157t____t4208t____t4196t__=0;
  int64_t __t5157t____t4208t____t4197t__=0;
  int64_t __t5157t____t4208t__status=0;
  uint64_t __t5157t____t4208t____t4198t=0;
  int64_t __t5157t____t4208t____t4199t__=0;
  char __t5157t____t4208t____t4200t__=0;
  char __t5157t____t4208t____t4201t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t5158t=0;
  int64_t error=0;
  char __t5159t__=0;
  char __t5160t__=0;
  const char* __t5161t__=0;
  const char* __t5162t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4203t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5156t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t5156t__unsafe_ptr;
  exists__t645t(__t5156t__unsafe_ptr,&__t5157t____t4208t____t4196t__);
  if(__t5157t____t4208t____t4196t__){
  pclose__t4190t(__t5156t__unsafe_ptr,&__t5157t____t4208t____t4197t__);
  __t5157t____t4208t__status=__t5157t____t4208t____t4197t__;
  __t5156t__unsafe_ptr=0;
  __t5157t____t4208t____t4198t=0;
  int__t626t(__t5157t____t4208t____t4198t,&__t5157t____t4208t____t4199t__);
  neq__t147t(__t5157t____t4208t__status,__t5157t____t4208t____t4199t__,&__t5157t____t4208t____t4200t__);
  if(__t5157t____t4208t____t4200t__){
  __t_complain=41;
  goto __t4201t__label;
  __t4201t__label:__t5157t____t4208t____t4201t=__t5157t____t4208t____t4201t==0;
  }
  }
  __t5158t=__t_complain;
  error=__t5158t;
  ok__t4165t(error,&__t5159t__);
  not__t42t(__t5159t__,&__t5160t__);
  if(__t5160t__){
  cstr__t4164t(error,&__t5161t__);
  goto __t_return;
  }
  cstr__t1t(&__t5162t__);
  __t5161t__=__t5162t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5630t=__t5161t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5631t) {
  int value=0;
  *__t5631t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5632t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5632t=__t54t__;
}

static inline __attribute__((always_inline)) void exists__t1564t(const char* c, char* __t5633t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5633t=z;
}

static inline __attribute__((always_inline)) void nn__t430t(const char* value, const char** __t5634t, const char** __t5635t) {
  const char* __t432t=0;
  __t432t=__t431t;
  goto __t_return;
  __t_return:
  *__t5634t=value;
  *__t5635t=__t432t;
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

static inline __attribute__((always_inline)) void print_marker__t5192t(char colors__initialized) {
  const char* __t5194t__value=0;
  const char* __t5194t____t432t=0;
  int __t5196t=0;
  char __t5197t=0;
  char __t5198t=0;
  const char* __t5203t__value=0;
  const char* __t5203t____t432t=0;
  int __t5205t=0;
  const char* __t5208t__value=0;
  const char* __t5208t____t432t=0;
  nn__t430t(__t5174t,&__t5194t__value,&__t5194t____t432t);
  print__t439t(__t5194t__value,__t5194t____t432t);
  __t5198t=1;
  if(__t5199t!=__t5199t){
  __t5198t=0;
  }
  if(__t5198t){
  __t5197t=1;
  }
  if(__t5197t){
  set__t475t(colors__initialized);
  nn__t430t(__t5202t,&__t5203t__value,&__t5203t____t432t);
  print__t439t(__t5203t__value,__t5203t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5189t,&__t5208t__value,&__t5208t____t432t);
  print__t439t(__t5208t__value,__t5208t____t432t);
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

static inline __attribute__((always_inline)) void print_marker__t5172t(char colors__initialized) {
  const char* __t5175t__value=0;
  const char* __t5175t____t432t=0;
  char __t5177t=0;
  char __t5178t=0;
  const char* __t5183t__value=0;
  const char* __t5183t____t432t=0;
  int __t5185t=0;
  int __t5186t=0;
  const char* __t5190t__value=0;
  const char* __t5190t____t432t=0;
  nn__t430t(__t5174t,&__t5175t__value,&__t5175t____t432t);
  print__t439t(__t5175t__value,__t5175t____t432t);
  __t5178t=1;
  if(__t5179t!=__t5179t){
  __t5178t=0;
  }
  if(__t5178t){
  __t5177t=1;
  }
  if(__t5177t){
  set__t479t(colors__initialized);
  nn__t430t(__t5182t,&__t5183t__value,&__t5183t____t432t);
  print__t439t(__t5183t__value,__t5183t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5189t,&__t5190t__value,&__t5190t____t432t);
  print__t439t(__t5190t__value,__t5190t____t432t);
}

static inline __attribute__((always_inline)) int test__t5252t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t5636t) {
  int64_t __t5254t__=0;
  const char* __t5257t__=0;
  const char* __t5258t=0;
  const char* error=0;
  int __t5259t=0;
  int __t5260t__=0;
  char __t5261t__=0;
  const char* __t5262t__=0;
  const char* __t5264t__value=0;
  const char* __t5264t____t432t=0;
  char __t5266t__=0;
  char __t5270t=0;
  char __t5275t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5228t(&__t5254t__);
  print__t1805t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t5155t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5257t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5258t=__t5257t__;
  error=__t5258t;
  not__t53t(__t5259t,&__t5260t__);
  if(should_fail){
  exists__t1564t(error,&__t5261t__);
  if(__t5261t__){
  cstr__t1t(&__t5262t__);
  error=__t5262t__;
  }
  else{
  error=__t5263t;
  }
  }
  nn__t430t(__t5236t,&__t5264t__value,&__t5264t____t432t);
  print__t439t(__t5264t__value,__t5264t____t432t);
  exists__t1564t(error,&__t5266t__);
  if(__t5266t__){
  print_marker__t5192t(colors__initialized);
  print__t441t(error);
  __t5270t=0;
  goto __t_return;
  }
  print_marker__t5172t(colors__initialized);
  print__t441t(__t5273t);
  __t5275t=1;
  __t5270t=__t5275t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5636t=__t5270t;
  
  __t_skip_returns:restore_stdout__t5227t(__t5254t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t452t(uint64_t value, const char* endl) {
  int __t453t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t437t(uint64_t value, uint64_t* __t5637t, const char** __t5638t) {
  const char* __t438t=0;
  __t438t=__t431t;
  goto __t_return;
  __t_return:
  *__t5637t=value;
  *__t5638t=__t438t;
}

static inline __attribute__((always_inline)) int _main__t5314t() {
  char* __t5316t__unsafe_ptr=0;
  uint64_t __t5316t__dat__pos=0;
  uint64_t __t5316t__dat__length=0;
  char __t5316t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5317t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5319t=0;
  char* __t5320t__unsafe_ptr=0;
  uint64_t __t5320t__unsafe_size=0;
  uint32_t __t5320t__unsafe_offset=0;
  uint32_t __t5320t__unsafe_align=0;
  char* __t5322t__buf__unsafe_ptr=0;
  uint64_t __t5322t__buf__unsafe_size=0;
  uint32_t __t5322t__buf__unsafe_offset=0;
  uint32_t __t5322t__buf__unsafe_align=0;
  uint64_t __t5322t__pos=0;
  char* __t5323t__buf__unsafe_ptr=0;
  uint64_t __t5323t__buf__unsafe_size=0;
  uint32_t __t5323t__buf__unsafe_offset=0;
  uint32_t __t5323t__buf__unsafe_align=0;
  uint64_t __t5323t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  int __t5328t=0;
  char* __t5330t__unsafe_ptr=0;
  uint64_t __t5330t__dat__pos=0;
  uint64_t __t5330t__dat__length=0;
  char __t5330t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  uint64_t __t5331t=0;
  uint64_t __t5332t=0;
  uint64_t counter=0;
  uint64_t __t5333t=0;
  uint64_t __t5334t=0;
  uint64_t failures=0;
  uint64_t __t5335t=0;
  char* __t5336t__unsafe_ptr=0;
  char __t5338t=0;
  char* __t5339t__unsafe_ptr=0;
  uint64_t __t5339t__dat__pos=0;
  uint64_t __t5339t__dat__length=0;
  char __t5339t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5341t__=0;
  char __t5342t__=0;
  char __t5343t__=0;
  char __t5344t=0;
  char __t5345t__=0;
  uint64_t __t5346t__=0;
  uint64_t __t5347t____t5311t=0;
  uint64_t __t5347t____t5313t__=0;
  char* __t5348t__unsafe_ptr=0;
  uint64_t __t5348t__dat__pos=0;
  uint64_t __t5348t__dat__length=0;
  char __t5348t__dat__first=0;
  char* __t5350t__unsafe_ptr=0;
  uint64_t __t5350t__dat__pos=0;
  uint64_t __t5350t__dat__length=0;
  char __t5350t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5351t=0;
  char* __t5352t__unsafe_ptr=0;
  char __t5354t=0;
  char* __t5355t__unsafe_ptr=0;
  uint64_t __t5355t__dat__pos=0;
  uint64_t __t5355t__dat__length=0;
  char __t5355t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5357t__=0;
  char __t5358t__=0;
  uint64_t __t5359t__=0;
  uint64_t __t5360t____t5311t=0;
  uint64_t __t5360t____t5313t__=0;
  uint64_t __t5361t=0;
  uint64_t __t5362t__=0;
  char __t5364t__=0;
  char should_fail=0;
  char* __t5365t__unsafe_ptr=0;
  uint64_t __t5365t__dat__pos=0;
  uint64_t __t5365t__dat__length=0;
  char __t5365t__dat__first=0;
  char* __t5366t__unsafe_ptr=0;
  uint64_t __t5366t__dat__pos=0;
  uint64_t __t5366t__dat__length=0;
  char __t5366t__dat__first=0;
  char __t5367t__=0;
  char __t5368t__=0;
  uint64_t __t5369t=0;
  uint64_t __t5370t__=0;
  int64_t __t5371t__=0;
  uint64_t __t5373t=0;
  char __t5374t__=0;
  const char* __t5388t__value=0;
  const char* __t5388t____t432t=0;
  const char* __t5378t__value=0;
  const char* __t5378t____t432t=0;
  const char* __t5383t__value=0;
  const char* __t5383t____t432t=0;
  uint64_t __t5394t__value=0;
  const char* __t5394t____t438t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1626t(__t5315t,&__t5316t__unsafe_ptr,&__t5316t__dat__pos,&__t5316t__dat__length,&__t5316t__dat__first);
  test_root__unsafe_ptr=__t5316t__unsafe_ptr;
  test_root__dat__pos=__t5316t__dat__pos;
  test_root__dat__length=__t5316t__dat__length;
  test_root__dat__first=__t5316t__dat__first;
  colors__t469t(&__t5317t__initialized);
  colors__initialized=__t5317t__initialized;
  __t5319t=128;
  __t_errcode=alloc__t1043t(__t5319t,&__t5320t__unsafe_ptr,&__t5320t__unsafe_size,&__t5320t__unsafe_offset,&__t5320t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1162t(&__t5320t__unsafe_ptr,&__t5320t__unsafe_size,&__t5320t__unsafe_offset,&__t5320t__unsafe_align,&__t5322t__buf__unsafe_ptr,&__t5322t__buf__unsafe_size,&__t5322t__buf__unsafe_offset,&__t5322t__buf__unsafe_align,&__t5322t__pos);
  __t5323t__buf__unsafe_ptr=__t5322t__buf__unsafe_ptr;
  __t5323t__buf__unsafe_size=__t5322t__buf__unsafe_size;
  __t5323t__buf__unsafe_offset=__t5322t__buf__unsafe_offset;
  __t5323t__buf__unsafe_align=__t5322t__buf__unsafe_align;
  __t5323t__pos=__t5322t__pos;
  CHARS__buf__unsafe_ptr=__t5323t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5323t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5323t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5323t__buf__unsafe_align;
  CHARS__pos=__t5323t__pos;
  __t_errcode=copy__t1675t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5329t,&__t5330t__unsafe_ptr,&__t5330t__dat__pos,&__t5330t__dat__length,&__t5330t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5330t__unsafe_ptr;
  command_base__dat__pos=__t5330t__dat__pos;
  command_base__dat__length=__t5330t__dat__length;
  command_base__dat__first=__t5330t__dat__first;
  __t5331t=0;
  __t5332t=__t5331t;
  counter=__t5332t;
  __t5333t=0;
  __t5334t=__t5333t;
  failures=__t5334t;
  __t_errcode=open__t5030t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5336t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5335t=0-1;
  while(1){
  __t5335t=__t5335t+1;
  __t_complain=mutget__t5113t(&__t5336t__unsafe_ptr,__t5335t,&__t5339t__unsafe_ptr,&__t5339t__dat__pos,&__t5339t__dat__length,&__t5339t__dat__first);
  __t5338t=__t_complain;
  if(__t_complain){
  goto __t5338t__label;
  }
  path__unsafe_ptr=__t5339t__unsafe_ptr;
  path__dat__pos=__t5339t__dat__pos;
  path__dat__length=__t5339t__dat__length;
  path__dat__first=__t5339t__dat__first;
  __t5338t__label:__t5338t=__t5338t==0;
  if(!__t5338t){
  break;
  }
  eq__t1748t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5340t,&__t5341t__);
  if(!__t5341t__){
  __t_errcode=is_dir__t4957t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5342t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5342t__,&__t5343t__);
  __t5344t=__t5343t__;
  }
  else{
  __t5344t=0;
  not__t42t(__t5344t,&__t5345t__);
  __t5344t=__t5345t__;
  }
  if(__t5344t){
  continue;
  }
  reuse__t5308t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5346t__);
  __t_errcode=add__t2822t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5348t__unsafe_ptr,&__t5348t__dat__pos,&__t5348t__dat__length,&__t5348t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2867t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5348t__unsafe_ptr,__t5348t__dat__pos,__t5348t__dat__length,__t5348t__dat__first,__t5349t,&__t5350t__unsafe_ptr,&__t5350t__dat__pos,&__t5350t__dat__length,&__t5350t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5350t__unsafe_ptr;
  dir_path__dat__pos=__t5350t__dat__pos;
  dir_path__dat__length=__t5350t__dat__length;
  dir_path__dat__first=__t5350t__dat__first;
  __t_errcode=open__t5030t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5352t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5351t=0-1;
  while(1){
  __t5351t=__t5351t+1;
  __t_complain=mutget__t5113t(&__t5352t__unsafe_ptr,__t5351t,&__t5355t__unsafe_ptr,&__t5355t__dat__pos,&__t5355t__dat__length,&__t5355t__dat__first);
  __t5354t=__t_complain;
  if(__t_complain){
  goto __t5354t__label;
  }
  entry__unsafe_ptr=__t5355t__unsafe_ptr;
  entry__dat__pos=__t5355t__dat__pos;
  entry__dat__length=__t5355t__dat__length;
  entry__dat__first=__t5355t__dat__first;
  __t5354t__label:__t5354t=__t5354t==0;
  if(!__t5354t){
  break;
  }
  __t_errcode=ends_with__t1916t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5356t,&__t5357t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5357t__,&__t5358t__);
  if(__t5358t__){
  continue;
  }
  reuse__t5308t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5359t__);
  __t5361t=1;
  add__t188t(counter,__t5361t,&__t5362t__);
  counter=__t5362t__;
  contains__t2002t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5363t,&__t5364t__);
  should_fail=__t5364t__;
  __t_errcode=add__t2822t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5365t__unsafe_ptr,&__t5365t__dat__pos,&__t5365t__dat__length,&__t5365t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2822t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5365t__unsafe_ptr,__t5365t__dat__pos,__t5365t__dat__length,__t5365t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5366t__unsafe_ptr,&__t5366t__dat__pos,&__t5366t__dat__length,&__t5366t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5252t(colors__initialized,__t5366t__unsafe_ptr,__t5366t__dat__pos,__t5366t__dat__length,__t5366t__dat__first,should_fail,&__t5367t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5367t__,&__t5368t__);
  if(__t5368t__){
  __t5369t=1;
  add__t188t(failures,__t5369t,&__t5370t__);
  failures=__t5370t__;
  }
  __t5360t____t5311t=0;
  sub__t409t(__t5359t__,__t5360t____t5311t,&__t5360t____t5313t__);
  CHARS__pos=__t5360t____t5313t__;
  }
  __t5347t____t5311t=0;
  sub__t409t(__t5346t__,__t5347t____t5311t,&__t5347t____t5313t__);
  CHARS__pos=__t5347t____t5313t__;
  closedir__t5020t(__t5352t__unsafe_ptr);
  }
  stdout_to_err__t5228t(&__t5371t__);
  __t5373t=0;
  eq__t134t(failures,__t5373t,&__t5374t__);
  if(__t5374t__){
  set__t479t(colors__initialized);
  nn__t430t(__t5377t,&__t5378t__value,&__t5378t____t432t);
  print__t439t(__t5378t__value,__t5378t____t432t);
  set__t595t(colors__initialized);
  nn__t430t(__t5382t,&__t5383t__value,&__t5383t____t432t);
  print__t439t(__t5383t__value,__t5383t____t432t);
  }
  else{
  set__t475t(colors__initialized);
  nn__t430t(__t5387t,&__t5388t__value,&__t5388t____t432t);
  print__t439t(__t5388t__value,__t5388t____t432t);
  set__t595t(colors__initialized);
  print__t452t(failures,__t5392t);
  }
  nn__t437t(counter,&__t5394t__value,&__t5394t____t438t);
  print__t452t(__t5394t__value,__t5394t____t438t);
  print__t441t(__t5396t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:restore_stdout__t5227t(__t5371t__);
  closedir__t5020t(__t5336t__unsafe_ptr);
  free__t765t(&__t5320t__unsafe_ptr);
  if(__t5317t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5398t() {
  char __t5401t=0;
  char __t5403t__=0;
  int64_t __t5404t=0;
  const char* __t5405t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t_complain=_main__t5314t();
  __t5401t=__t_complain;
  if(__t_complain){
  goto __t5401t__label;
  }
  __t5401t__label:__t5401t=__t5401t==0;
  not__t42t(__t5401t,&__t5403t__);
  if(__t5403t__){
  __t5404t=__t_complain;
  cstr__t4164t(__t5404t,&__t5405t__);
  print__t441t(__t5405t__);
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
                    return main__t5398t();
                }