#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t431t="";
const char* const __t5077t="success";
const char* const __t5275t="PASSING ";
const char* const __t5285t="FAILED ";
const char* const __t5087t="] ";
const char* const __t5161t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t5213t="./tests/passing/";
const char* const __t5134t=" |- ";
const char* const __t5247t="/";
const char* const __t5261t="_fail_";
const char* const __t5227t="./smoll --cleanup ";
const char* const __t443t="\n";
const char* const __t5280t="no errors across ";
const char* const __t5080t="V";
const char* const __t5100t="X";
const char* const __t5097t="failure";
const char* const __t5294t=" tests";
const char* const __t5072t="[";
const char* const __t5290t=" out of ";
const char* const __t5254t=".s";
const char* const __t5171t="completed";
const char* const __t5238t="..";
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
"failed to move to a position to closed file",
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1540t(char** __t5305t, uint64_t* __t5306t, uint32_t* __t5307t, uint32_t* __t5308t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5305t=unsafe_ptr;
  *__t5306t=unsafe_size;
  *__t5307t=unsafe_offset;
  *__t5308t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5309t) {
  *__t5309t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5310t) {
  int value=0;
  *__t5310t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5311t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5311t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5312t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5312t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5313t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5313t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5314t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5314t=z;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t5315t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5315t=z;
}

static inline __attribute__((always_inline)) void nat__t684t(uint32_t x, uint64_t* __t5316t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5316t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5317t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5317t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5318t) {
  *__t5318t=to;
}

static inline __attribute__((always_inline)) void add__t766t(char* allocated, uint64_t offset, char** __t5319t) {
  char* element=0;
  char* __t767t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t767t__);
  goto __t_return;
  __t_return:
  *__t5319t=__t767t__;
}

static inline __attribute__((always_inline)) int get__t1107t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5320t) {
  int __t1108t=0;
  char __t1109t__=0;
  uint64_t __t1110t__=0;
  uint64_t __t1111t__=0;
  uint64_t __t1112t__=0;
  uint64_t __t1113t__=0;
  char* __t1114t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1109t__);
  if(__t1109t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t1110t__);
  mul__t212t(i,__t1110t__,&__t1111t__);
  nat__t684t(buffer__unsafe_offset,&__t1112t__);
  add__t188t(__t1111t__,__t1112t__,&__t1113t__);
  add__t766t(buffer__unsafe_ptr,__t1113t__,&__t1114t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5320t=__t1114t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1565t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5321t, uint64_t* __t5322t, uint64_t* __t5323t, char* __t5324t) {
  goto __t_return;
  __t_return:
  *__t5321t=unsafe_ptr;
  *__t5322t=dat__pos;
  *__t5323t=dat__length;
  *__t5324t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1569t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5325t, uint64_t* __t5326t, uint64_t* __t5327t, char* __t5328t) {
  char* unsafe_ptr=0;
  uint64_t __t1570t__=0;
  uint64_t __t1571t=0;
  char __t1572t__=0;
  uint64_t __t1573t__=0;
  uint64_t __t1574t=0;
  char __t1575t__=0;
  char* __t1576t__unsafe_ptr=0;
  uint64_t __t1576t__dat__pos=0;
  uint64_t __t1576t__dat__length=0;
  char __t1576t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t684t(buf__unsafe_align,&__t1570t__);
  __t1571t=1;
  neq__t158t(__t1570t__,__t1571t,&__t1572t__);
  if(__t1572t__){
  __t_errcode=21;
  goto __t_failure;
  }
  nat__t684t(buf__unsafe_offset,&__t1573t__);
  __t1574t=0;
  neq__t158t(__t1573t__,__t1574t,&__t1575t__);
  if(__t1575t__){
  __t_errcode=22;
  goto __t_failure;
  }
  str__t1565t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1576t__unsafe_ptr,&__t1576t__dat__pos,&__t1576t__dat__length,&__t1576t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5325t=__t1576t__unsafe_ptr;
  *__t5326t=__t1576t__dat__pos;
  *__t5327t=__t1576t__dat__length;
  *__t5328t=__t1576t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1603t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5329t, uint64_t* __t5330t, uint64_t* __t5331t, char* __t5332t) {
  uint64_t __t1604t=0;
  char __t1605t__=0;
  char* __t1607t__=0;
  char __t1608t__value=0;
  char first=0;
  char* __t1609t__unsafe_ptr=0;
  uint64_t __t1609t__dat__pos=0;
  uint64_t __t1609t__dat__length=0;
  char __t1609t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1604t=0;
  neq__t158t(length,__t1604t,&__t1605t__);
  if(__t1605t__){
  __t_errcode=get__t1107t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1607t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1607t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1608t__value,__t1607t__,1);
  first=__t1608t__value;
  }
  __t_errcode=str__t1569t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1609t__unsafe_ptr,&__t1609t__dat__pos,&__t1609t__dat__length,&__t1609t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5329t=__t1609t__unsafe_ptr;
  *__t5330t=__t1609t__dat__pos;
  *__t5331t=__t1609t__dat__length;
  *__t5332t=__t1609t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1625t(const char* c, char** __t5333t, uint64_t* __t5334t, uint64_t* __t5335t, char* __t5336t) {
  char* __t1626t__unsafe_ptr=0;
  uint64_t __t1626t__unsafe_size=0;
  uint32_t __t1626t__unsafe_offset=0;
  uint32_t __t1626t__unsafe_align=0;
  char* __t1627t__unsafe_ptr=0;
  uint64_t __t1627t__unsafe_size=0;
  uint32_t __t1627t__unsafe_offset=0;
  uint32_t __t1627t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1628t__=0;
  uint64_t length=0;
  uint64_t __t1629t=0;
  uint64_t __t1630t__=0;
  char __t1631t=0;
  uint64_t __t1632t=0;
  char* __t1634t__unsafe_ptr=0;
  uint64_t __t1634t__dat__pos=0;
  uint64_t __t1634t__dat__length=0;
  char __t1634t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1540t(&__t1626t__unsafe_ptr,&__t1626t__unsafe_size,&__t1626t__unsafe_offset,&__t1626t__unsafe_align);
  __t1627t__unsafe_ptr=__t1626t__unsafe_ptr;
  __t1627t__unsafe_size=__t1626t__unsafe_size;
  __t1627t__unsafe_offset=__t1626t__unsafe_offset;
  __t1627t__unsafe_align=__t1626t__unsafe_align;
  buf__unsafe_ptr=__t1627t__unsafe_ptr;
  buf__unsafe_size=__t1627t__unsafe_size;
  buf__unsafe_offset=__t1627t__unsafe_offset;
  buf__unsafe_align=__t1627t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1628t__);
  buf__unsafe_ptr=__t1628t__;
  if(c){
  length=strlen(c);
  }
  __t1629t=1;
  add__t188t(length,__t1629t,&__t1630t__);
  buf__unsafe_size=__t1630t__;
  __t1632t=0;
  __t_complain=str__t1603t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1632t,length,&__t1634t__unsafe_ptr,&__t1634t__dat__pos,&__t1634t__dat__length,&__t1634t__dat__first);
  __t1631t=__t_complain;
  if(__t_complain){
  goto __t1631t__label;
  }
  ret__unsafe_ptr=__t1634t__unsafe_ptr;
  ret__dat__pos=__t1634t__dat__pos;
  ret__dat__length=__t1634t__dat__length;
  ret__dat__first=__t1634t__dat__first;
  __t1631t__label:__t1631t=__t1631t==0;
  goto __t_return;
  __t_return:
  *__t5333t=ret__unsafe_ptr;
  *__t5334t=ret__dat__pos;
  *__t5335t=ret__dat__length;
  *__t5336t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t468t(char* __t5337t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5337t=supports;
}

static inline __attribute__((always_inline)) void colors__t469t(char* __t5338t) {
  char __t470t__=0;
  char initialized=0;
  supports_ansi__t468t(&__t470t__);
  initialized=__t470t__;
  goto __t_return;
  __t_return:
  *__t5338t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1043t(char** __t5339t, uint64_t* __t5340t, uint32_t* __t5341t, uint32_t* __t5342t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5339t=unsafe_ptr;
  *__t5340t=unsafe_size;
  *__t5341t=unsafe_offset;
  *__t5342t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t764t(char** __t5343t) {
  char* allocated=*__t5343t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5343t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5344t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5344t=z;
}

static inline __attribute__((always_inline)) void zero__t765t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t652t(char* x, char* __t5345t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5345t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5346t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5346t=z;
}

static inline __attribute__((always_inline)) int alloc__t748t(uint64_t bytes, char** __t5347t) {
  char* allocated=0;
  char __t749t__=0;
  char __t750t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t652t(allocated,&__t749t__);
  not__t42t(__t749t__,&__t750t__);
  if(__t750t__){
  __t_errcode=13;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5347t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t887t(char** __t5348t, uint64_t* __t5349t, uint32_t* __t5350t, uint32_t* __t5351t, uint64_t size, char** __t5352t, uint64_t* __t5353t, uint32_t* __t5354t, uint32_t* __t5355t) {
  char* buffer__unsafe_ptr=*__t5348t;
  uint64_t buffer__unsafe_size=*__t5349t;
  uint32_t buffer__unsafe_offset=*__t5350t;
  uint32_t buffer__unsafe_align=*__t5351t;
  int __t888t=0;
  int __t889t=0;
  char __t891t__=0;
  uint64_t __t892t=0;
  char __t893t__=0;
  char __t894t=0;
  uint64_t __t895t=0;
  uint64_t __t896t__=0;
  uint64_t __t897t__=0;
  int __t899t=0;
  uint64_t __t900t=0;
  char __t901t__=0;
  uint64_t __t902t__=0;
  uint64_t __t903t__=0;
  uint64_t bytes=0;
  int __t904t=0;
  uint64_t __t905t=0;
  char __t906t__=0;
  char* __t907t__=0;
  int __t908t=0;
  uint64_t __t909t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t891t__);
  if(__t891t__){
  __t892t=0;
  neq__t158t(size,__t892t,&__t893t__);
  __t894t=__t893t__;
  }
  if(__t894t){
  __t895t=0;
  nat__t684t(buffer__unsafe_align,&__t896t__);
  mul__t212t(__t896t__,size,&__t897t__);
  zero__t765t(buffer__unsafe_ptr,__t895t,__t897t__);
  goto __t_return;
  }
  __t900t=0;
  neq__t158t(buffer__unsafe_size,__t900t,&__t901t__);
  if(__t901t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t902t__);
  mul__t212t(__t902t__,size,&__t903t__);
  bytes=__t903t__;
  __t905t=0;
  eq__t134t(bytes,__t905t,&__t906t__);
  if(__t906t__){
  __t_errcode=15;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t748t(bytes,&__t907t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t909t=0;
  zero__t765t(__t907t__,__t909t,bytes);
  buffer__unsafe_ptr=__t907t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t764t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5348t=buffer__unsafe_ptr;
  *__t5349t=buffer__unsafe_size;
  *__t5350t=buffer__unsafe_offset;
  *__t5351t=buffer__unsafe_align;
  *__t5352t=buffer__unsafe_ptr;
  *__t5353t=buffer__unsafe_size;
  *__t5354t=buffer__unsafe_offset;
  *__t5355t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1042t(uint64_t size, char** __t5356t, uint64_t* __t5357t, uint32_t* __t5358t, uint32_t* __t5359t) {
  char* __t1045t__unsafe_ptr=0;
  uint64_t __t1045t__unsafe_size=0;
  uint32_t __t1045t__unsafe_offset=0;
  uint32_t __t1045t__unsafe_align=0;
  char* __t1046t__unsafe_ptr=0;
  uint64_t __t1046t__unsafe_size=0;
  uint32_t __t1046t__unsafe_offset=0;
  uint32_t __t1046t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1043t(&__t1045t__unsafe_ptr,&__t1045t__unsafe_size,&__t1045t__unsafe_offset,&__t1045t__unsafe_align);
  __t_errcode=alloc__t887t(&__t1045t__unsafe_ptr,&__t1045t__unsafe_size,&__t1045t__unsafe_offset,&__t1045t__unsafe_align,size,&__t1046t__unsafe_ptr,&__t1046t__unsafe_size,&__t1046t__unsafe_offset,&__t1046t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t764t(&__t1046t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5356t=__t1046t__unsafe_ptr;
  *__t5357t=__t1046t__unsafe_size;
  *__t5358t=__t1046t__unsafe_offset;
  *__t5359t=__t1046t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1158t(char** __t5360t, uint64_t* __t5361t, uint32_t* __t5362t, uint32_t* __t5363t, uint64_t _pos, char** __t5364t, uint64_t* __t5365t, uint32_t* __t5366t, uint32_t* __t5367t, uint64_t* __t5368t) {
  char* buf__unsafe_ptr=*__t5360t;
  uint64_t buf__unsafe_size=*__t5361t;
  uint32_t buf__unsafe_offset=*__t5362t;
  uint32_t buf__unsafe_align=*__t5363t;
  uint64_t __t1159t=0;
  uint64_t pos=0;
  __t1159t=_pos;
  pos=__t1159t;
  goto __t_return;
  __t_return:
  *__t5360t=buf__unsafe_ptr;
  *__t5361t=buf__unsafe_size;
  *__t5362t=buf__unsafe_offset;
  *__t5363t=buf__unsafe_align;
  *__t5364t=buf__unsafe_ptr;
  *__t5365t=buf__unsafe_size;
  *__t5366t=buf__unsafe_offset;
  *__t5367t=buf__unsafe_align;
  *__t5368t=pos;
}

static inline __attribute__((always_inline)) void arena__t1161t(char** __t5369t, uint64_t* __t5370t, uint32_t* __t5371t, uint32_t* __t5372t, char** __t5373t, uint64_t* __t5374t, uint32_t* __t5375t, uint32_t* __t5376t, uint64_t* __t5377t) {
  char* buf__unsafe_ptr=*__t5369t;
  uint64_t buf__unsafe_size=*__t5370t;
  uint32_t buf__unsafe_offset=*__t5371t;
  uint32_t buf__unsafe_align=*__t5372t;
  uint64_t __t1162t=0;
  char* __t1163t__buf__unsafe_ptr=0;
  uint64_t __t1163t__buf__unsafe_size=0;
  uint32_t __t1163t__buf__unsafe_offset=0;
  uint32_t __t1163t__buf__unsafe_align=0;
  uint64_t __t1163t__pos=0;
  __t1162t=0;
  arena__t1158t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1162t,&__t1163t__buf__unsafe_ptr,&__t1163t__buf__unsafe_size,&__t1163t__buf__unsafe_offset,&__t1163t__buf__unsafe_align,&__t1163t__pos);
  goto __t_return;
  __t_return:
  *__t5369t=buf__unsafe_ptr;
  *__t5370t=buf__unsafe_size;
  *__t5371t=buf__unsafe_offset;
  *__t5372t=buf__unsafe_align;
  *__t5373t=__t1163t__buf__unsafe_ptr;
  *__t5374t=__t1163t__buf__unsafe_size;
  *__t5375t=__t1163t__buf__unsafe_offset;
  *__t5376t=__t1163t__buf__unsafe_align;
  *__t5377t=__t1163t__pos;
}

static inline __attribute__((always_inline)) void len__t1115t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5378t) {
  goto __t_return;
  __t_return:
  *__t5378t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t5379t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5379t=z;
}

static inline __attribute__((always_inline)) void allocated__t1165t(char** __t5380t, uint64_t* __t5381t, uint32_t* __t5382t, uint32_t* __t5383t, uint64_t pos, char** __t5384t, uint64_t* __t5385t, uint32_t* __t5386t, uint32_t* __t5387t, uint64_t* __t5388t) {
  char* buf__unsafe_ptr=*__t5380t;
  uint64_t buf__unsafe_size=*__t5381t;
  uint32_t buf__unsafe_offset=*__t5382t;
  uint32_t buf__unsafe_align=*__t5383t;
  goto __t_return;
  __t_return:
  *__t5380t=buf__unsafe_ptr;
  *__t5381t=buf__unsafe_size;
  *__t5382t=buf__unsafe_offset;
  *__t5383t=buf__unsafe_align;
  *__t5384t=buf__unsafe_ptr;
  *__t5385t=buf__unsafe_size;
  *__t5386t=buf__unsafe_offset;
  *__t5387t=buf__unsafe_align;
  *__t5388t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1240t(char** __t5389t, uint64_t* __t5390t, uint32_t* __t5391t, uint32_t* __t5392t, uint64_t* __t5393t, uint64_t length, char** __t5394t, uint64_t* __t5395t, uint32_t* __t5396t, uint32_t* __t5397t, uint64_t* __t5398t) {
  char* allocator__buf__unsafe_ptr=*__t5389t;
  uint64_t allocator__buf__unsafe_size=*__t5390t;
  uint32_t allocator__buf__unsafe_offset=*__t5391t;
  uint32_t allocator__buf__unsafe_align=*__t5392t;
  uint64_t allocator__pos=*__t5393t;
  int __t1241t=0;
  uint64_t __t1242t__=0;
  uint64_t next_pos=0;
  uint64_t __t1243t__=0;
  char __t1244t__=0;
  uint64_t __t1245t=0;
  uint64_t __t1246t__=0;
  uint64_t pos=0;
  char* __t1247t__buf__unsafe_ptr=0;
  uint64_t __t1247t__buf__unsafe_size=0;
  uint32_t __t1247t__buf__unsafe_offset=0;
  uint32_t __t1247t__buf__unsafe_align=0;
  uint64_t __t1247t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1242t__);
  next_pos=__t1242t__;
  len__t1115t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1243t__);
  gt__t325t(next_pos,__t1243t__,&__t1244t__);
  if(__t1244t__){
  __t_errcode=19;
  goto __t_failure;
  }
  __t1245t=0;
  add__t188t(allocator__pos,__t1245t,&__t1246t__);
  pos=__t1246t__;
  allocator__pos=next_pos;
  allocated__t1165t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1247t__buf__unsafe_ptr,&__t1247t__buf__unsafe_size,&__t1247t__buf__unsafe_offset,&__t1247t__buf__unsafe_align,&__t1247t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5389t=allocator__buf__unsafe_ptr;
  *__t5390t=allocator__buf__unsafe_size;
  *__t5391t=allocator__buf__unsafe_offset;
  *__t5392t=allocator__buf__unsafe_align;
  *__t5393t=allocator__pos;
  *__t5394t=__t1247t__buf__unsafe_ptr;
  *__t5395t=__t1247t__buf__unsafe_size;
  *__t5396t=__t1247t__buf__unsafe_offset;
  *__t5397t=__t1247t__buf__unsafe_align;
  *__t5398t=__t1247t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1674t(char** __t5399t, uint64_t* __t5400t, uint32_t* __t5401t, uint32_t* __t5402t, uint64_t* __t5403t, const char* _other, char** __t5404t, uint64_t* __t5405t, uint64_t* __t5406t, char* __t5407t) {
  char* CHARS__buf__unsafe_ptr=*__t5399t;
  uint64_t CHARS__buf__unsafe_size=*__t5400t;
  uint32_t CHARS__buf__unsafe_offset=*__t5401t;
  uint32_t CHARS__buf__unsafe_align=*__t5402t;
  uint64_t CHARS__pos=*__t5403t;
  char* __t1675t__unsafe_ptr=0;
  uint64_t __t1675t__dat__pos=0;
  uint64_t __t1675t__dat__length=0;
  char __t1675t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1676t__buf__unsafe_ptr=0;
  uint64_t __t1676t__buf__unsafe_size=0;
  uint32_t __t1676t__buf__unsafe_offset=0;
  uint32_t __t1676t__buf__unsafe_align=0;
  uint64_t __t1676t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1677t=0;
  char* __t1678t__unsafe_ptr=0;
  uint64_t __t1678t__dat__pos=0;
  uint64_t __t1678t__dat__length=0;
  char __t1678t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1625t(_other,&__t1675t__unsafe_ptr,&__t1675t__dat__pos,&__t1675t__dat__length,&__t1675t__dat__first);
  other__unsafe_ptr=__t1675t__unsafe_ptr;
  other__dat__pos=__t1675t__dat__pos;
  other__dat__length=__t1675t__dat__length;
  other__dat__first=__t1675t__dat__first;
  __t_errcode=alloc__t1240t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1676t__buf__unsafe_ptr,&__t1676t__buf__unsafe_size,&__t1676t__buf__unsafe_offset,&__t1676t__buf__unsafe_align,&__t1676t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1676t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1676t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1676t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1676t__buf__unsafe_align;
  surface__pos=__t1676t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1569t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1678t__unsafe_ptr,&__t1678t__dat__pos,&__t1678t__dat__length,&__t1678t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5399t=CHARS__buf__unsafe_ptr;
  *__t5400t=CHARS__buf__unsafe_size;
  *__t5401t=CHARS__buf__unsafe_offset;
  *__t5402t=CHARS__buf__unsafe_align;
  *__t5403t=CHARS__pos;
  *__t5404t=__t1678t__unsafe_ptr;
  *__t5405t=__t1678t__dat__pos;
  *__t5406t=__t1678t__dat__length;
  *__t5407t=__t1678t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1116t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1641t(char** __t5408t, uint64_t* __t5409t, uint32_t* __t5410t, uint32_t* __t5411t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5408t=unsafe_ptr;
  *__t5409t=unsafe_size;
  *__t5410t=unsafe_offset;
  *__t5411t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t1635t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5412t) {
  goto __t_return;
  __t_return:
  *__t5412t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1699t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5413t, uint64_t* __t5414t, uint64_t* __t5415t, char* __t5416t) {
  char* __t1700t__unsafe_ptr=0;
  uint64_t __t1700t__unsafe_size=0;
  uint32_t __t1700t__unsafe_offset=0;
  uint32_t __t1700t__unsafe_align=0;
  uint64_t __t1701t=0;
  uint64_t __t1702t__=0;
  uint64_t __t1703t__=0;
  char* __t1704t__unsafe_ptr=0;
  uint64_t __t1704t__unsafe_size=0;
  uint32_t __t1704t__unsafe_offset=0;
  uint32_t __t1704t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t1706t=0;
  uint64_t __t1707t=0;
  char* __t1708t__unsafe_ptr=0;
  uint64_t __t1708t__dat__pos=0;
  uint64_t __t1708t__dat__length=0;
  char __t1708t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1641t(&__t1700t__unsafe_ptr,&__t1700t__unsafe_size,&__t1700t__unsafe_offset,&__t1700t__unsafe_align);
  __t1701t=1;
  len__t1635t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1702t__);
  add__t188t(__t1701t,__t1702t__,&__t1703t__);
  __t_errcode=alloc__t887t(&__t1700t__unsafe_ptr,&__t1700t__unsafe_size,&__t1700t__unsafe_offset,&__t1700t__unsafe_align,__t1703t__,&__t1704t__unsafe_ptr,&__t1704t__unsafe_size,&__t1704t__unsafe_offset,&__t1704t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1704t__unsafe_ptr;
  buf__unsafe_size=__t1704t__unsafe_size;
  buf__unsafe_offset=__t1704t__unsafe_offset;
  buf__unsafe_align=__t1704t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1707t=0;
  __t_errcode=str__t1569t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1707t,other__dat__length,other__dat__first,&__t1708t__unsafe_ptr,&__t1708t__dat__pos,&__t1708t__dat__length,&__t1708t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t764t(&__t1708t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5413t=__t1708t__unsafe_ptr;
  *__t5414t=__t1708t__dat__pos;
  *__t5415t=__t1708t__dat__length;
  *__t5416t=__t1708t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1723t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5417t, char** __t5418t, uint64_t* __t5419t, uint64_t* __t5420t, char* __t5421t) {
  int __t1724t=0;
  char* __t1726t__unsafe_ptr=0;
  uint64_t __t1726t__dat__pos=0;
  uint64_t __t1726t__dat__length=0;
  char __t1726t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1728t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1116t();
  __t_errcode=copy_null_terminated__t1699t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1726t__unsafe_ptr,&__t1726t__dat__pos,&__t1726t__dat__length,&__t1726t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1726t__unsafe_ptr;
  str__dat__pos=__t1726t__dat__pos;
  str__dat__length=__t1726t__dat__length;
  str__dat__first=__t1726t__dat__first;
  add__t766t(str__unsafe_ptr,str__dat__pos,&__t1728t__);
  _ret=__t1728t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t764t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5417t=cstr;
  *__t5418t=str__unsafe_ptr;
  *__t5419t=str__dat__pos;
  *__t5420t=str__dat__length;
  *__t5421t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1733t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5422t) {
  goto __t_return;
  __t_return:
  *__t5422t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t4918t(char* unsafe_ptr) {
  int __t4920t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t4921t(const char* path, char** __t5423t) {
  int __t4923t=0;
  char* unsafe_ptr=0;
  char __t4925t__=0;
  char __t4926t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t652t(unsafe_ptr,&__t4925t__);
  not__t42t(__t4925t__,&__t4926t__);
  if(__t4926t__){
  __t_errcode=45;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t4918t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5423t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t4928t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t5424t) {
  const char* __t4929t__cstr=0;
  char* __t4929t__str__unsafe_ptr=0;
  uint64_t __t4929t__str__dat__pos=0;
  uint64_t __t4929t__str__dat__length=0;
  char __t4929t__str__dat__first=0;
  const char* __t4931t__=0;
  char* __t4932t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1723t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t4929t__cstr,&__t4929t__str__unsafe_ptr,&__t4929t__str__dat__pos,&__t4929t__str__dat__length,&__t4929t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1733t(__t4929t__cstr,__t4929t__str__unsafe_ptr,__t4929t__str__dat__pos,__t4929t__str__dat__length,__t4929t__str__dat__first,&__t4931t__);
  __t_errcode=open__t4921t(__t4931t__,&__t4932t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t4918t(__t4932t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5424t=__t4932t__unsafe_ptr;
  
  __t_skip_returns:free__t764t(&__t4929t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t4940t(char** __t5425t, const char** __t5426t) {
  char* f__unsafe_ptr=*__t5425t;
  char __t4941t__=0;
  char __t4942t__=0;
  char* de=0;
  char __t4943t__=0;
  char __t4944t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t652t(f__unsafe_ptr,&__t4941t__);
  not__t42t(__t4941t__,&__t4942t__);
  if(__t4942t__){
  __t_errcode=58;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t652t(de,&__t4943t__);
  not__t42t(__t4943t__,&__t4944t__);
  if(__t4944t__){
  __t_errcode=59;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5425t=f__unsafe_ptr;
  *__t5426t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t4945t(char** __t5427t, char** __t5428t, uint64_t* __t5429t, uint64_t* __t5430t, char* __t5431t) {
  char* f__unsafe_ptr=*__t5427t;
  const char* __t4946t__=0;
  char* __t4947t__unsafe_ptr=0;
  uint64_t __t4947t__dat__pos=0;
  uint64_t __t4947t__dat__length=0;
  char __t4947t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t4940t(&f__unsafe_ptr,&__t4946t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1625t(__t4946t__,&__t4947t__unsafe_ptr,&__t4947t__dat__pos,&__t4947t__dat__length,&__t4947t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5427t=f__unsafe_ptr;
  *__t5428t=__t4947t__unsafe_ptr;
  *__t5429t=__t4947t__dat__pos;
  *__t5430t=__t4947t__dat__length;
  *__t5431t=__t4947t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t5011t(char** __t5432t, uint64_t __t_anon1, char** __t5433t, uint64_t* __t5434t, uint64_t* __t5435t, char* __t5436t) {
  char* data__unsafe_ptr=*__t5432t;
  char* __t5012t__unsafe_ptr=0;
  uint64_t __t5012t__dat__pos=0;
  uint64_t __t5012t__dat__length=0;
  char __t5012t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t4945t(&data__unsafe_ptr,&__t5012t__unsafe_ptr,&__t5012t__dat__pos,&__t5012t__dat__length,&__t5012t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5432t=data__unsafe_ptr;
  *__t5433t=__t5012t__unsafe_ptr;
  *__t5434t=__t5012t__dat__pos;
  *__t5435t=__t5012t__dat__length;
  *__t5436t=__t5012t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1637t(const char* s, char* __t5437t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t5437t=c;
}

static inline __attribute__((always_inline)) void neq__t1639t(char x, char y, char* __t5438t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5438t=z;
}

static inline __attribute__((always_inline)) void eq__t1740t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5439t) {
  uint64_t __t1741t__=0;
  uint64_t n=0;
  uint64_t __t1742t__=0;
  char __t1743t__=0;
  char __t1744t=0;
  char __t1745t__=0;
  char __t1746t=0;
  char z=0;
  len__t1635t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1741t__);
  n=__t1741t__;
  len__t1635t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1742t__);
  neq__t158t(n,__t1742t__,&__t1743t__);
  if(__t1743t__){
  __t1744t=0;
  goto __t_return;
  }
  neq__t1639t(x__dat__first,y__dat__first,&__t1745t__);
  if(__t1745t__){
  __t1746t=0;
  __t1744t=__t1746t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1744t=z;
  goto __t_return;
  __t_return:
  *__t5439t=__t1744t;
}

void eq__t1747t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t5440t) {
  char __t1748t__=0;
  char __t1749t__=0;
  char __t1750t=0;
  char* __t1751t__unsafe_ptr=0;
  uint64_t __t1751t__dat__pos=0;
  uint64_t __t1751t__dat__length=0;
  char __t1751t__dat__first=0;
  char __t1752t__=0;
  char__t1637t(y,&__t1748t__);
  neq__t1639t(x__dat__first,__t1748t__,&__t1749t__);
  if(__t1749t__){
  __t1750t=0;
  goto __t_return;
  }
  str__t1625t(y,&__t1751t__unsafe_ptr,&__t1751t__dat__pos,&__t1751t__dat__length,&__t1751t__dat__first);
  eq__t1740t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1751t__unsafe_ptr,__t1751t__dat__pos,__t1751t__dat__length,__t1751t__dat__first,&__t1752t__);
  __t1750t=__t1752t__;
  goto __t_return;
  __t_return:
  *__t5440t=__t1750t;
}

int unsafe_temp__t1709t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5441t, char** __t5442t, uint64_t* __t5443t, uint64_t* __t5444t, char* __t5445t) {
  int __t1710t=0;
  char* __t1711t__unsafe_ptr=0;
  uint64_t __t1711t__unsafe_size=0;
  uint32_t __t1711t__unsafe_offset=0;
  uint32_t __t1711t__unsafe_align=0;
  uint64_t __t1712t=0;
  uint64_t __t1713t__=0;
  uint64_t __t1714t__=0;
  char* __t1715t__unsafe_ptr=0;
  uint64_t __t1715t__unsafe_size=0;
  uint32_t __t1715t__unsafe_offset=0;
  uint32_t __t1715t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1717t=0;
  char __t1718t__=0;
  char first_character=0;
  uint64_t __t1719t=0;
  char* __t1720t__unsafe_ptr=0;
  uint64_t __t1720t__dat__pos=0;
  uint64_t __t1720t__dat__length=0;
  char __t1720t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1721t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1641t(&__t1711t__unsafe_ptr,&__t1711t__unsafe_size,&__t1711t__unsafe_offset,&__t1711t__unsafe_align);
  __t1712t=1;
  add__t188t(__t1712t,other__dat__length,&__t1713t__);
  add__t188t(__t1713t__,prefix__dat__length,&__t1714t__);
  __t_errcode=alloc__t887t(&__t1711t__unsafe_ptr,&__t1711t__unsafe_size,&__t1711t__unsafe_offset,&__t1711t__unsafe_align,__t1714t__,&__t1715t__unsafe_ptr,&__t1715t__unsafe_size,&__t1715t__unsafe_offset,&__t1715t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1715t__unsafe_ptr;
  buf__unsafe_size=__t1715t__unsafe_size;
  buf__unsafe_offset=__t1715t__unsafe_offset;
  buf__unsafe_align=__t1715t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1717t=0;
  eq__t134t(prefix__dat__length,__t1717t,&__t1718t__);
  if(__t1718t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1719t=0;
  __t_errcode=str__t1569t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1719t,other__dat__length,first_character,&__t1720t__unsafe_ptr,&__t1720t__dat__pos,&__t1720t__dat__length,&__t1720t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1720t__unsafe_ptr;
  str__dat__pos=__t1720t__dat__pos;
  str__dat__length=__t1720t__dat__length;
  str__dat__first=__t1720t__dat__first;
  add__t766t(str__unsafe_ptr,str__dat__pos,&__t1721t__);
  _ret=__t1721t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t764t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5441t=cstr;
  *__t5442t=str__unsafe_ptr;
  *__t5443t=str__dat__pos;
  *__t5444t=str__dat__length;
  *__t5445t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1732t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5446t) {
  goto __t_return;
  __t_return:
  *__t5446t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t4845t(const char* path, char* __t5447t) {
  int __t4847t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t5447t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t4855t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t5448t) {
  int __t4857t=0;
  const char* __t4858t__cstr=0;
  char* __t4858t__str__unsafe_ptr=0;
  uint64_t __t4858t__str__dat__pos=0;
  uint64_t __t4858t__str__dat__length=0;
  char __t4858t__str__dat__first=0;
  const char* __t4860t__=0;
  char __t4861t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1709t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t4858t__cstr,&__t4858t__str__unsafe_ptr,&__t4858t__str__dat__pos,&__t4858t__str__dat__length,&__t4858t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1732t(__t4858t__cstr,__t4858t__str__unsafe_ptr,__t4858t__str__dat__pos,__t4858t__str__dat__length,__t4858t__str__dat__first,&__t4860t__);
  is_dir__t4845t(__t4860t__,&__t4861t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5448t=__t4861t__;
  
  __t_skip_returns:free__t764t(&__t4858t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t409t(uint64_t x, uint64_t y, uint64_t* __t5449t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5449t=z;
}

static inline __attribute__((always_inline)) void reuse__t5206t(char** __t5450t, uint64_t* __t5451t, uint32_t* __t5452t, uint32_t* __t5453t, uint64_t* __t5454t, uint64_t* __t5455t) {
  char* arn__buf__unsafe_ptr=*__t5450t;
  uint64_t arn__buf__unsafe_size=*__t5451t;
  uint32_t arn__buf__unsafe_offset=*__t5452t;
  uint32_t arn__buf__unsafe_align=*__t5453t;
  uint64_t arn__pos=*__t5454t;
  uint64_t __t5207t=0;
  uint64_t __t5208t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5209t=0;
  uint64_t __t5211t__=0;
  __t5207t=0;
  add__t188t(__t5207t,arn__pos,&__t5208t__);
  tracked_position=__t5208t__;
  goto __t_return;
  __t_return:
  *__t5450t=arn__buf__unsafe_ptr;
  *__t5451t=arn__buf__unsafe_size;
  *__t5452t=arn__buf__unsafe_offset;
  *__t5453t=arn__buf__unsafe_align;
  *__t5454t=arn__pos;
  *__t5455t=tracked_position;
}

static inline __attribute__((always_inline)) void str__t1602t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5456t, uint64_t* __t5457t, uint64_t* __t5458t, char* __t5459t) {
  goto __t_return;
  __t_return:
  *__t5456t=other__unsafe_ptr;
  *__t5457t=other__dat__pos;
  *__t5458t=other__dat__length;
  *__t5459t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5460t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5460t=z;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t5461t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5461t=z;
}

static inline __attribute__((always_inline)) void status__t1170t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5462t, uint64_t* __t5463t, uint32_t* __t5464t, uint32_t* __t5465t, uint64_t* __t5466t) {
  char* __t1171t__unsafe_ptr=0;
  uint64_t __t1171t__unsafe_size=0;
  uint32_t __t1171t__unsafe_offset=0;
  uint32_t __t1171t__unsafe_align=0;
  uint64_t __t1172t=0;
  __t1171t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1171t__unsafe_size=self__buf__unsafe_size;
  __t1171t__unsafe_offset=self__buf__unsafe_offset;
  __t1171t__unsafe_align=self__buf__unsafe_align;
  __t1172t=self__pos;
  goto __t_return;
  __t_return:
  *__t5462t=__t1171t__unsafe_ptr;
  *__t5463t=__t1171t__unsafe_size;
  *__t5464t=__t1171t__unsafe_offset;
  *__t5465t=__t1171t__unsafe_align;
  *__t5466t=__t1172t;
}

static inline __attribute__((always_inline)) int copy__t1669t(char** __t5467t, uint64_t* __t5468t, uint32_t* __t5469t, uint32_t* __t5470t, uint64_t* __t5471t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5472t, uint64_t* __t5473t, uint64_t* __t5474t, char* __t5475t) {
  char* CHARS__buf__unsafe_ptr=*__t5467t;
  uint64_t CHARS__buf__unsafe_size=*__t5468t;
  uint32_t CHARS__buf__unsafe_offset=*__t5469t;
  uint32_t CHARS__buf__unsafe_align=*__t5470t;
  uint64_t CHARS__pos=*__t5471t;
  char* __t1670t__unsafe_ptr=0;
  uint64_t __t1670t__dat__pos=0;
  uint64_t __t1670t__dat__length=0;
  char __t1670t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1671t__buf__unsafe_ptr=0;
  uint64_t __t1671t__buf__unsafe_size=0;
  uint32_t __t1671t__buf__unsafe_offset=0;
  uint32_t __t1671t__buf__unsafe_align=0;
  uint64_t __t1671t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1672t=0;
  char* __t1673t__unsafe_ptr=0;
  uint64_t __t1673t__dat__pos=0;
  uint64_t __t1673t__dat__length=0;
  char __t1673t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1602t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1670t__unsafe_ptr,&__t1670t__dat__pos,&__t1670t__dat__length,&__t1670t__dat__first);
  other__unsafe_ptr=__t1670t__unsafe_ptr;
  other__dat__pos=__t1670t__dat__pos;
  other__dat__length=__t1670t__dat__length;
  other__dat__first=__t1670t__dat__first;
  __t_errcode=alloc__t1240t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1671t__buf__unsafe_ptr,&__t1671t__buf__unsafe_size,&__t1671t__buf__unsafe_offset,&__t1671t__buf__unsafe_align,&__t1671t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1671t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1671t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1671t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1671t__buf__unsafe_align;
  surface__pos=__t1671t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1569t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1673t__unsafe_ptr,&__t1673t__dat__pos,&__t1673t__dat__length,&__t1673t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5467t=CHARS__buf__unsafe_ptr;
  *__t5468t=CHARS__buf__unsafe_size;
  *__t5469t=CHARS__buf__unsafe_offset;
  *__t5470t=CHARS__buf__unsafe_align;
  *__t5471t=CHARS__pos;
  *__t5472t=__t1673t__unsafe_ptr;
  *__t5473t=__t1673t__dat__pos;
  *__t5474t=__t1673t__dat__length;
  *__t5475t=__t1673t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1167t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5476t, uint64_t* __t5477t, uint32_t* __t5478t, uint32_t* __t5479t, uint64_t* __t5480t) {
  char* __t1168t__unsafe_ptr=0;
  uint64_t __t1168t__unsafe_size=0;
  uint32_t __t1168t__unsafe_offset=0;
  uint32_t __t1168t__unsafe_align=0;
  uint64_t __t1169t=0;
  __t1168t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1168t__unsafe_size=self__buf__unsafe_size;
  __t1168t__unsafe_offset=self__buf__unsafe_offset;
  __t1168t__unsafe_align=self__buf__unsafe_align;
  __t1169t=self__pos;
  goto __t_return;
  __t_return:
  *__t5476t=__t1168t__unsafe_ptr;
  *__t5477t=__t1168t__unsafe_size;
  *__t5478t=__t1168t__unsafe_offset;
  *__t5479t=__t1168t__unsafe_align;
  *__t5480t=__t1169t;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t5481t) {
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
  *__t5481t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1621t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5482t, uint64_t* __t5483t, uint64_t* __t5484t, char* __t5485t) {
  uint64_t __t1623t__=0;
  char* __t1624t__unsafe_ptr=0;
  uint64_t __t1624t__dat__pos=0;
  uint64_t __t1624t__dat__length=0;
  char __t1624t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t401t(endpos,pos,&__t1623t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1603t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1623t__,&__t1624t__unsafe_ptr,&__t1624t__dat__pos,&__t1624t__dat__length,&__t1624t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5482t=__t1624t__unsafe_ptr;
  *__t5483t=__t1624t__dat__pos;
  *__t5484t=__t1624t__dat__length;
  *__t5485t=__t1624t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2821t(char** __t5486t, uint64_t* __t5487t, uint32_t* __t5488t, uint32_t* __t5489t, uint64_t* __t5490t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5491t, uint64_t* __t5492t, uint64_t* __t5493t, char* __t5494t) {
  char* CHARS__buf__unsafe_ptr=*__t5486t;
  uint64_t CHARS__buf__unsafe_size=*__t5487t;
  uint32_t CHARS__buf__unsafe_offset=*__t5488t;
  uint32_t CHARS__buf__unsafe_align=*__t5489t;
  uint64_t CHARS__pos=*__t5490t;
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
  char* __t2833t____t1171t__unsafe_ptr=0;
  uint64_t __t2833t____t1171t__unsafe_size=0;
  uint32_t __t2833t____t1171t__unsafe_offset=0;
  uint32_t __t2833t____t1171t__unsafe_align=0;
  uint64_t __t2833t____t1172t=0;
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
  char* __t2837t____t1168t__unsafe_ptr=0;
  uint64_t __t2837t____t1168t__unsafe_size=0;
  uint32_t __t2837t____t1168t__unsafe_offset=0;
  uint32_t __t2837t____t1168t__unsafe_align=0;
  uint64_t __t2837t____t1169t=0;
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
  char* __t2855t____t1171t__unsafe_ptr=0;
  uint64_t __t2855t____t1171t__unsafe_size=0;
  uint32_t __t2855t____t1171t__unsafe_offset=0;
  uint32_t __t2855t____t1171t__unsafe_align=0;
  uint64_t __t2855t____t1172t=0;
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
  char* __t2861t____t1168t__unsafe_ptr=0;
  uint64_t __t2861t____t1168t__unsafe_size=0;
  uint32_t __t2861t____t1168t__unsafe_offset=0;
  uint32_t __t2861t____t1168t__unsafe_align=0;
  uint64_t __t2861t____t1169t=0;
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
  str__t1602t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2822t__unsafe_ptr,&__t2822t__dat__pos,&__t2822t__dat__length,&__t2822t__dat__first);
  s1__unsafe_ptr=__t2822t__unsafe_ptr;
  s1__dat__pos=__t2822t__dat__pos;
  s1__dat__length=__t2822t__dat__length;
  s1__dat__first=__t2822t__dat__first;
  str__t1602t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2823t__unsafe_ptr,&__t2823t__dat__pos,&__t2823t__dat__length,&__t2823t__dat__first);
  s2__unsafe_ptr=__t2823t__unsafe_ptr;
  s2__dat__pos=__t2823t__dat__pos;
  s2__dat__length=__t2823t__dat__length;
  s2__dat__first=__t2823t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2824t__);
  if(__t2824t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2825t__);
  eq__t134t(CHARS__pos,__t2825t__,&__t2826t__);
  __t2827t=__t2826t__;
  }
  if(__t2827t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2828t__);
  lt__t301t(__t2828t__,CHARS__buf__unsafe_size,&__t2829t__);
  __t2830t=__t2829t__;
  }
  if(__t2830t){
  len__t1635t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2831t__);
  __t_errcode=alloc__t1240t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2831t__,&__t2832t__buf__unsafe_ptr,&__t2832t__buf__unsafe_size,&__t2832t__buf__unsafe_offset,&__t2832t__buf__unsafe_align,&__t2832t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1170t(__t2832t__buf__unsafe_ptr,__t2832t__buf__unsafe_size,__t2832t__buf__unsafe_offset,__t2832t__buf__unsafe_align,__t2832t__pos,&__t2833t____t1171t__unsafe_ptr,&__t2833t____t1171t__unsafe_size,&__t2833t____t1171t__unsafe_offset,&__t2833t____t1171t__unsafe_align,&__t2833t____t1172t);
  arena__t1158t(&__t2833t____t1171t__unsafe_ptr,&__t2833t____t1171t__unsafe_size,&__t2833t____t1171t__unsafe_offset,&__t2833t____t1171t__unsafe_align,__t2833t____t1172t,&__t2834t__buf__unsafe_ptr,&__t2834t__buf__unsafe_size,&__t2834t__buf__unsafe_offset,&__t2834t__buf__unsafe_align,&__t2834t__pos);
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
  __t_errcode=copy__t1669t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2836t__unsafe_ptr,&__t2836t__dat__pos,&__t2836t__dat__length,&__t2836t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1167t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2837t____t1168t__unsafe_ptr,&__t2837t____t1168t__unsafe_size,&__t2837t____t1168t__unsafe_offset,&__t2837t____t1168t__unsafe_align,&__t2837t____t1169t);
  __t2839t=0;
  add__t188t(s1__dat__pos,__t2839t,&__t2840t__);
  __t_errcode=str__t1621t(__t2837t____t1168t__unsafe_ptr,__t2837t____t1168t__unsafe_size,__t2837t____t1168t__unsafe_offset,__t2837t____t1168t__unsafe_align,__t2837t____t1169t,__t2840t__,&__t2841t__unsafe_ptr,&__t2841t__dat__pos,&__t2841t__dat__length,&__t2841t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2842t__);
  if(__t2842t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2843t__);
  __t2844t=__t2843t__;
  }
  if(__t2844t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2845t__);
  eq__t134t(s2__dat__pos,__t2845t__,&__t2846t__);
  __t2847t=__t2846t__;
  }
  if(__t2847t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2848t__);
  __t_errcode=str__t1621t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2848t__,s1__dat__pos,&__t2850t__unsafe_ptr,&__t2850t__dat__pos,&__t2850t__dat__length,&__t2850t__dat__first);
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
  len__t1635t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2851t__);
  len__t1635t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2852t__);
  add__t188t(__t2851t__,__t2852t__,&__t2853t__);
  __t_errcode=alloc__t1240t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2853t__,&__t2854t__buf__unsafe_ptr,&__t2854t__buf__unsafe_size,&__t2854t__buf__unsafe_offset,&__t2854t__buf__unsafe_align,&__t2854t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1170t(__t2854t__buf__unsafe_ptr,__t2854t__buf__unsafe_size,__t2854t__buf__unsafe_offset,__t2854t__buf__unsafe_align,__t2854t__pos,&__t2855t____t1171t__unsafe_ptr,&__t2855t____t1171t__unsafe_size,&__t2855t____t1171t__unsafe_offset,&__t2855t____t1171t__unsafe_align,&__t2855t____t1172t);
  arena__t1158t(&__t2855t____t1171t__unsafe_ptr,&__t2855t____t1171t__unsafe_size,&__t2855t____t1171t__unsafe_offset,&__t2855t____t1171t__unsafe_align,__t2855t____t1172t,&__t2856t__buf__unsafe_ptr,&__t2856t__buf__unsafe_size,&__t2856t__buf__unsafe_offset,&__t2856t__buf__unsafe_align,&__t2856t__pos);
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
  __t_errcode=copy__t1669t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2858t__unsafe_ptr,&__t2858t__dat__pos,&__t2858t__dat__length,&__t2858t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1669t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2859t__unsafe_ptr,&__t2859t__dat__pos,&__t2859t__dat__length,&__t2859t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1167t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2861t____t1168t__unsafe_ptr,&__t2861t____t1168t__unsafe_size,&__t2861t____t1168t__unsafe_offset,&__t2861t____t1168t__unsafe_align,&__t2861t____t1169t);
  __t2863t=0;
  add__t188t(prev_pos,__t2863t,&__t2864t__);
  __t_complain=str__t1621t(__t2861t____t1168t__unsafe_ptr,__t2861t____t1168t__unsafe_size,__t2861t____t1168t__unsafe_offset,__t2861t____t1168t__unsafe_align,__t2861t____t1169t,__t2864t__,&__t2865t__unsafe_ptr,&__t2865t__dat__pos,&__t2865t__dat__length,&__t2865t__dat__first);
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
  *__t5486t=CHARS__buf__unsafe_ptr;
  *__t5487t=CHARS__buf__unsafe_size;
  *__t5488t=CHARS__buf__unsafe_offset;
  *__t5489t=CHARS__buf__unsafe_align;
  *__t5490t=CHARS__pos;
  *__t5491t=__t2841t__unsafe_ptr;
  *__t5492t=__t2841t__dat__pos;
  *__t5493t=__t2841t__dat__length;
  *__t5494t=__t2841t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2866t(char** __t5495t, uint64_t* __t5496t, uint32_t* __t5497t, uint32_t* __t5498t, uint64_t* __t5499t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5500t, uint64_t* __t5501t, uint64_t* __t5502t, char* __t5503t) {
  char* CHARS__buf__unsafe_ptr=*__t5495t;
  uint64_t CHARS__buf__unsafe_size=*__t5496t;
  uint32_t CHARS__buf__unsafe_offset=*__t5497t;
  uint32_t CHARS__buf__unsafe_align=*__t5498t;
  uint64_t CHARS__pos=*__t5499t;
  char* __t2867t__unsafe_ptr=0;
  uint64_t __t2867t__dat__pos=0;
  uint64_t __t2867t__dat__length=0;
  char __t2867t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2868t__unsafe_ptr=0;
  uint64_t __t2868t__dat__pos=0;
  uint64_t __t2868t__dat__length=0;
  char __t2868t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2869t__=0;
  uint64_t __t2870t__=0;
  char __t2871t__=0;
  char __t2872t=0;
  uint64_t __t2873t__=0;
  char __t2874t__=0;
  char __t2875t=0;
  uint64_t __t2876t__=0;
  char* __t2877t__buf__unsafe_ptr=0;
  uint64_t __t2877t__buf__unsafe_size=0;
  uint32_t __t2877t__buf__unsafe_offset=0;
  uint32_t __t2877t__buf__unsafe_align=0;
  uint64_t __t2877t__pos=0;
  char* __t2878t____t1171t__unsafe_ptr=0;
  uint64_t __t2878t____t1171t__unsafe_size=0;
  uint32_t __t2878t____t1171t__unsafe_offset=0;
  uint32_t __t2878t____t1171t__unsafe_align=0;
  uint64_t __t2878t____t1172t=0;
  char* __t2879t__buf__unsafe_ptr=0;
  uint64_t __t2879t__buf__unsafe_size=0;
  uint32_t __t2879t__buf__unsafe_offset=0;
  uint32_t __t2879t__buf__unsafe_align=0;
  uint64_t __t2879t__pos=0;
  char* __t2880t__buf__unsafe_ptr=0;
  uint64_t __t2880t__buf__unsafe_size=0;
  uint32_t __t2880t__buf__unsafe_offset=0;
  uint32_t __t2880t__buf__unsafe_align=0;
  uint64_t __t2880t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2881t__unsafe_ptr=0;
  uint64_t __t2881t__dat__pos=0;
  uint64_t __t2881t__dat__length=0;
  char __t2881t__dat__first=0;
  char* __t2882t____t1168t__unsafe_ptr=0;
  uint64_t __t2882t____t1168t__unsafe_size=0;
  uint32_t __t2882t____t1168t__unsafe_offset=0;
  uint32_t __t2882t____t1168t__unsafe_align=0;
  uint64_t __t2882t____t1169t=0;
  uint64_t __t2884t=0;
  uint64_t __t2885t__=0;
  char* __t2886t__unsafe_ptr=0;
  uint64_t __t2886t__dat__pos=0;
  uint64_t __t2886t__dat__length=0;
  char __t2886t__dat__first=0;
  char __t2887t__=0;
  char __t2888t__=0;
  char __t2889t=0;
  uint64_t __t2890t__=0;
  char __t2891t__=0;
  char __t2892t=0;
  uint64_t __t2893t__=0;
  char* __t2895t__unsafe_ptr=0;
  uint64_t __t2895t__dat__pos=0;
  uint64_t __t2895t__dat__length=0;
  char __t2895t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2896t__=0;
  uint64_t __t2897t__=0;
  uint64_t __t2898t__=0;
  char* __t2899t__buf__unsafe_ptr=0;
  uint64_t __t2899t__buf__unsafe_size=0;
  uint32_t __t2899t__buf__unsafe_offset=0;
  uint32_t __t2899t__buf__unsafe_align=0;
  uint64_t __t2899t__pos=0;
  char* __t2900t____t1171t__unsafe_ptr=0;
  uint64_t __t2900t____t1171t__unsafe_size=0;
  uint32_t __t2900t____t1171t__unsafe_offset=0;
  uint32_t __t2900t____t1171t__unsafe_align=0;
  uint64_t __t2900t____t1172t=0;
  char* __t2901t__buf__unsafe_ptr=0;
  uint64_t __t2901t__buf__unsafe_size=0;
  uint32_t __t2901t__buf__unsafe_offset=0;
  uint32_t __t2901t__buf__unsafe_align=0;
  uint64_t __t2901t__pos=0;
  char* __t2902t__buf__unsafe_ptr=0;
  uint64_t __t2902t__buf__unsafe_size=0;
  uint32_t __t2902t__buf__unsafe_offset=0;
  uint32_t __t2902t__buf__unsafe_align=0;
  uint64_t __t2902t__pos=0;
  char* __t2903t__unsafe_ptr=0;
  uint64_t __t2903t__dat__pos=0;
  uint64_t __t2903t__dat__length=0;
  char __t2903t__dat__first=0;
  char* __t2904t__unsafe_ptr=0;
  uint64_t __t2904t__dat__pos=0;
  uint64_t __t2904t__dat__length=0;
  char __t2904t__dat__first=0;
  char __t2905t=0;
  char* __t2906t____t1168t__unsafe_ptr=0;
  uint64_t __t2906t____t1168t__unsafe_size=0;
  uint32_t __t2906t____t1168t__unsafe_offset=0;
  uint32_t __t2906t____t1168t__unsafe_align=0;
  uint64_t __t2906t____t1169t=0;
  uint64_t __t2908t=0;
  uint64_t __t2909t__=0;
  char* __t2910t__unsafe_ptr=0;
  uint64_t __t2910t__dat__pos=0;
  uint64_t __t2910t__dat__length=0;
  char __t2910t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1602t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2867t__unsafe_ptr,&__t2867t__dat__pos,&__t2867t__dat__length,&__t2867t__dat__first);
  s1__unsafe_ptr=__t2867t__unsafe_ptr;
  s1__dat__pos=__t2867t__dat__pos;
  s1__dat__length=__t2867t__dat__length;
  s1__dat__first=__t2867t__dat__first;
  str__t1625t(_s2,&__t2868t__unsafe_ptr,&__t2868t__dat__pos,&__t2868t__dat__length,&__t2868t__dat__first);
  s2__unsafe_ptr=__t2868t__unsafe_ptr;
  s2__dat__pos=__t2868t__dat__pos;
  s2__dat__length=__t2868t__dat__length;
  s2__dat__first=__t2868t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2869t__);
  if(__t2869t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2870t__);
  eq__t134t(CHARS__pos,__t2870t__,&__t2871t__);
  __t2872t=__t2871t__;
  }
  if(__t2872t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2873t__);
  lt__t301t(__t2873t__,CHARS__buf__unsafe_size,&__t2874t__);
  __t2875t=__t2874t__;
  }
  if(__t2875t){
  len__t1635t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2876t__);
  __t_errcode=alloc__t1240t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2876t__,&__t2877t__buf__unsafe_ptr,&__t2877t__buf__unsafe_size,&__t2877t__buf__unsafe_offset,&__t2877t__buf__unsafe_align,&__t2877t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1170t(__t2877t__buf__unsafe_ptr,__t2877t__buf__unsafe_size,__t2877t__buf__unsafe_offset,__t2877t__buf__unsafe_align,__t2877t__pos,&__t2878t____t1171t__unsafe_ptr,&__t2878t____t1171t__unsafe_size,&__t2878t____t1171t__unsafe_offset,&__t2878t____t1171t__unsafe_align,&__t2878t____t1172t);
  arena__t1158t(&__t2878t____t1171t__unsafe_ptr,&__t2878t____t1171t__unsafe_size,&__t2878t____t1171t__unsafe_offset,&__t2878t____t1171t__unsafe_align,__t2878t____t1172t,&__t2879t__buf__unsafe_ptr,&__t2879t__buf__unsafe_size,&__t2879t__buf__unsafe_offset,&__t2879t__buf__unsafe_align,&__t2879t__pos);
  __t2880t__buf__unsafe_ptr=__t2879t__buf__unsafe_ptr;
  __t2880t__buf__unsafe_size=__t2879t__buf__unsafe_size;
  __t2880t__buf__unsafe_offset=__t2879t__buf__unsafe_offset;
  __t2880t__buf__unsafe_align=__t2879t__buf__unsafe_align;
  __t2880t__pos=__t2879t__pos;
  surface__buf__unsafe_ptr=__t2880t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2880t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2880t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2880t__buf__unsafe_align;
  surface__pos=__t2880t__pos;
  __t_errcode=copy__t1669t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2881t__unsafe_ptr,&__t2881t__dat__pos,&__t2881t__dat__length,&__t2881t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1167t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2882t____t1168t__unsafe_ptr,&__t2882t____t1168t__unsafe_size,&__t2882t____t1168t__unsafe_offset,&__t2882t____t1168t__unsafe_align,&__t2882t____t1169t);
  __t2884t=0;
  add__t188t(s1__dat__pos,__t2884t,&__t2885t__);
  __t_errcode=str__t1621t(__t2882t____t1168t__unsafe_ptr,__t2882t____t1168t__unsafe_size,__t2882t____t1168t__unsafe_offset,__t2882t____t1168t__unsafe_align,__t2882t____t1169t,__t2885t__,&__t2886t__unsafe_ptr,&__t2886t__dat__pos,&__t2886t__dat__length,&__t2886t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2887t__);
  if(__t2887t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2888t__);
  __t2889t=__t2888t__;
  }
  if(__t2889t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2890t__);
  eq__t134t(s2__dat__pos,__t2890t__,&__t2891t__);
  __t2892t=__t2891t__;
  }
  if(__t2892t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2893t__);
  __t_errcode=str__t1621t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2893t__,s1__dat__pos,&__t2895t__unsafe_ptr,&__t2895t__dat__pos,&__t2895t__dat__length,&__t2895t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2886t__unsafe_ptr=__t2895t__unsafe_ptr;
  __t2886t__dat__pos=__t2895t__dat__pos;
  __t2886t__dat__length=__t2895t__dat__length;
  __t2886t__dat__first=__t2895t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1635t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2896t__);
  len__t1635t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2897t__);
  add__t188t(__t2896t__,__t2897t__,&__t2898t__);
  __t_errcode=alloc__t1240t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2898t__,&__t2899t__buf__unsafe_ptr,&__t2899t__buf__unsafe_size,&__t2899t__buf__unsafe_offset,&__t2899t__buf__unsafe_align,&__t2899t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1170t(__t2899t__buf__unsafe_ptr,__t2899t__buf__unsafe_size,__t2899t__buf__unsafe_offset,__t2899t__buf__unsafe_align,__t2899t__pos,&__t2900t____t1171t__unsafe_ptr,&__t2900t____t1171t__unsafe_size,&__t2900t____t1171t__unsafe_offset,&__t2900t____t1171t__unsafe_align,&__t2900t____t1172t);
  arena__t1158t(&__t2900t____t1171t__unsafe_ptr,&__t2900t____t1171t__unsafe_size,&__t2900t____t1171t__unsafe_offset,&__t2900t____t1171t__unsafe_align,__t2900t____t1172t,&__t2901t__buf__unsafe_ptr,&__t2901t__buf__unsafe_size,&__t2901t__buf__unsafe_offset,&__t2901t__buf__unsafe_align,&__t2901t__pos);
  __t2902t__buf__unsafe_ptr=__t2901t__buf__unsafe_ptr;
  __t2902t__buf__unsafe_size=__t2901t__buf__unsafe_size;
  __t2902t__buf__unsafe_offset=__t2901t__buf__unsafe_offset;
  __t2902t__buf__unsafe_align=__t2901t__buf__unsafe_align;
  __t2902t__pos=__t2901t__pos;
  surface__buf__unsafe_ptr=__t2902t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2902t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2902t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2902t__buf__unsafe_align;
  surface__pos=__t2902t__pos;
  __t_errcode=copy__t1669t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2903t__unsafe_ptr,&__t2903t__dat__pos,&__t2903t__dat__length,&__t2903t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1669t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2904t__unsafe_ptr,&__t2904t__dat__pos,&__t2904t__dat__length,&__t2904t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1167t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2906t____t1168t__unsafe_ptr,&__t2906t____t1168t__unsafe_size,&__t2906t____t1168t__unsafe_offset,&__t2906t____t1168t__unsafe_align,&__t2906t____t1169t);
  __t2908t=0;
  add__t188t(prev_pos,__t2908t,&__t2909t__);
  __t_complain=str__t1621t(__t2906t____t1168t__unsafe_ptr,__t2906t____t1168t__unsafe_size,__t2906t____t1168t__unsafe_offset,__t2906t____t1168t__unsafe_align,__t2906t____t1169t,__t2909t__,&__t2910t__unsafe_ptr,&__t2910t__dat__pos,&__t2910t__dat__length,&__t2910t__dat__first);
  __t2905t=__t_complain;
  if(__t_complain){
  goto __t2905t__label;
  }
  ret__unsafe_ptr=__t2910t__unsafe_ptr;
  ret__dat__pos=__t2910t__dat__pos;
  ret__dat__length=__t2910t__dat__length;
  ret__dat__first=__t2910t__dat__first;
  __t2905t__label:__t2905t=__t2905t==0;
  __t2886t__unsafe_ptr=ret__unsafe_ptr;
  __t2886t__dat__pos=ret__dat__pos;
  __t2886t__dat__length=ret__dat__length;
  __t2886t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5495t=CHARS__buf__unsafe_ptr;
  *__t5496t=CHARS__buf__unsafe_size;
  *__t5497t=CHARS__buf__unsafe_offset;
  *__t5498t=CHARS__buf__unsafe_align;
  *__t5499t=CHARS__pos;
  *__t5500t=__t2886t__unsafe_ptr;
  *__t5501t=__t2886t__dat__pos;
  *__t5502t=__t2886t__dat__length;
  *__t5503t=__t2886t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1810t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t5504t) {
  int __t1811t=0;
  char __t1812t__=0;
  uint64_t __t1813t__=0;
  char* __t1814t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,s__dat__length,&__t1812t__);
  if(__t1812t__){
  __t_errcode=18;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t1813t__);
  add__t766t(s__unsafe_ptr,__t1813t__,&__t1814t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5504t=__t1814t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1836t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t5505t, uint64_t* __t5506t, uint64_t* __t5507t, char* __t5508t) {
  char* __t1837t__unsafe_ptr=0;
  uint64_t __t1837t__dat__pos=0;
  uint64_t __t1837t__dat__length=0;
  char __t1837t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1838t__=0;
  char* __t1839t__unsafe_ptr=0;
  uint64_t __t1839t__dat__pos=0;
  uint64_t __t1839t__dat__length=0;
  char __t1839t__dat__first=0;
  char __t1840t__=0;
  char __t1841t__=0;
  char __t1842t=0;
  char __t1843t__=0;
  uint64_t __t1845t__=0;
  uint64_t new_length=0;
  uint64_t __t1846t=0;
  char __t1847t__=0;
  char new_first=0;
  char* __t1849t__=0;
  char __t1850t__value=0;
  uint64_t __t1851t__=0;
  char* __t1852t__unsafe_ptr=0;
  uint64_t __t1852t__dat__pos=0;
  uint64_t __t1852t__dat__length=0;
  char __t1852t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1602t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1837t__unsafe_ptr,&__t1837t__dat__pos,&__t1837t__dat__length,&__t1837t__dat__first);
  s__unsafe_ptr=__t1837t__unsafe_ptr;
  s__dat__pos=__t1837t__dat__pos;
  s__dat__length=__t1837t__dat__length;
  s__dat__first=__t1837t__dat__first;
  eq__t134t(from,to,&__t1838t__);
  if(__t1838t__){
  str__t1625t(__t431t,&__t1839t__unsafe_ptr,&__t1839t__dat__pos,&__t1839t__dat__length,&__t1839t__dat__first);
  goto __t_return;
  }
  gt__t325t(from,to,&__t1840t__);
  if(!__t1840t__){
  gt__t325t(to,s__dat__length,&__t1841t__);
  __t1842t=__t1841t__;
  }
  else{
  __t1842t=0;
  not__t42t(__t1842t,&__t1843t__);
  __t1842t=__t1843t__;
  }
  if(__t1842t){
  __t_errcode=25;
  goto __t_failure;
  }
  sub__t409t(to,from,&__t1845t__);
  new_length=__t1845t__;
  __t1846t=0;
  neq__t158t(from,__t1846t,&__t1847t__);
  if(__t1847t__){
  __t_errcode=get__t1810t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1849t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1849t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1850t__value,__t1849t__,1);
  new_first=__t1850t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1851t__);
  str__t1565t(s__unsafe_ptr,__t1851t__,new_length,new_first,&__t1852t__unsafe_ptr,&__t1852t__dat__pos,&__t1852t__dat__length,&__t1852t__dat__first);
  __t1839t__unsafe_ptr=__t1852t__unsafe_ptr;
  __t1839t__dat__pos=__t1852t__dat__pos;
  __t1839t__dat__length=__t1852t__dat__length;
  __t1839t__dat__first=__t1852t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5505t=__t1839t__unsafe_ptr;
  *__t5506t=__t1839t__dat__pos;
  *__t5507t=__t1839t__dat__length;
  *__t5508t=__t1839t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1915t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5509t) {
  char* __t1916t__unsafe_ptr=0;
  uint64_t __t1916t__dat__pos=0;
  uint64_t __t1916t__dat__length=0;
  char __t1916t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1917t__unsafe_ptr=0;
  uint64_t __t1917t__dat__pos=0;
  uint64_t __t1917t__dat__length=0;
  char __t1917t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t1918t=0;
  uint64_t __t1919t__=0;
  uint64_t d=0;
  char __t1920t__=0;
  char __t1921t=0;
  char* __t1922t__unsafe_ptr=0;
  uint64_t __t1922t__dat__pos=0;
  uint64_t __t1922t__dat__length=0;
  char __t1922t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1923t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1602t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1916t__unsafe_ptr,&__t1916t__dat__pos,&__t1916t__dat__length,&__t1916t__dat__first);
  stack__unsafe_ptr=__t1916t__unsafe_ptr;
  stack__dat__pos=__t1916t__dat__pos;
  stack__dat__length=__t1916t__dat__length;
  stack__dat__first=__t1916t__dat__first;
  str__t1625t(_needle,&__t1917t__unsafe_ptr,&__t1917t__dat__pos,&__t1917t__dat__length,&__t1917t__dat__first);
  needle__unsafe_ptr=__t1917t__unsafe_ptr;
  needle__dat__pos=__t1917t__dat__pos;
  needle__dat__length=__t1917t__dat__length;
  needle__dat__first=__t1917t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t401t(n,needle__dat__length,&__t1919t__);
  __t1918t=__t_complain;
  if(__t_complain){
  goto __t1918t__label;
  }
  d=__t1919t__;
  __t1918t__label:__t1918t=__t1918t==0;
  not__t42t(__t1918t,&__t1920t__);
  if(__t1920t__){
  __t1921t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1836t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t1922t__unsafe_ptr,&__t1922t__dat__pos,&__t1922t__dat__length,&__t1922t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1922t__unsafe_ptr;
  ret__dat__pos=__t1922t__dat__pos;
  ret__dat__length=__t1922t__dat__length;
  ret__dat__first=__t1922t__dat__first;
  eq__t1740t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1923t__);
  __t1921t=__t1923t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5509t=__t1921t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t699t(uint64_t to, uint64_t* __t5510t, uint64_t* __t5511t) {
  uint64_t __t700t=0;
  __t700t=0;
  goto __t_return;
  __t_return:
  *__t5510t=__t700t;
  *__t5511t=to;
}

static inline __attribute__((always_inline)) void range__t716t(uint64_t _from, uint64_t to, uint64_t* __t5512t, uint64_t* __t5513t) {
  uint64_t __t717t=0;
  uint64_t __t718t__=0;
  uint64_t __t719t=0;
  uint64_t from=0;
  __t717t=0;
  add__t188t(__t717t,_from,&__t718t__);
  __t719t=__t718t__;
  from=__t719t;
  goto __t_return;
  __t_return:
  *__t5512t=from;
  *__t5513t=to;
}

static inline __attribute__((always_inline)) int mutget__t721t(uint64_t* __t5514t, uint64_t r__to, uint64_t skipped, uint64_t* __t5515t) {
  uint64_t r__from=*__t5514t;
  char __t722t__=0;
  uint64_t ret=0;
  uint64_t __t723t=0;
  uint64_t __t724t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(r__from,r__to,&__t722t__);
  if(__t722t__){
  __t_errcode=12;
  goto __t_failure;
  }
  ret=r__from;
  __t723t=1;
  add__t188t(ret,__t723t,&__t724t__);
  r__from=__t724t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5514t=r__from;
  *__t5515t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2001t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5516t) {
  char* __t2002t__unsafe_ptr=0;
  uint64_t __t2002t__dat__pos=0;
  uint64_t __t2002t__dat__length=0;
  char __t2002t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2003t__unsafe_ptr=0;
  uint64_t __t2003t__dat__pos=0;
  uint64_t __t2003t__dat__length=0;
  char __t2003t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t2004t=0;
  uint64_t __t2005t__=0;
  uint64_t n=0;
  char __t2006t__=0;
  char __t2007t=0;
  uint64_t __t2008t=0;
  uint64_t __t2009t____t700t=0;
  uint64_t __t2009t__to=0;
  uint64_t __t2010t__from=0;
  uint64_t __t2010t__to=0;
  char __t2011t=0;
  uint64_t __t2012t__=0;
  uint64_t i=0;
  char __t2013t=0;
  uint64_t __t2014t__=0;
  char* __t2015t__unsafe_ptr=0;
  uint64_t __t2015t__dat__pos=0;
  uint64_t __t2015t__dat__length=0;
  char __t2015t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t2016t__=0;
  char __t2017t=0;
  char __t2018t=0;
  int __t_complain=0;
  str__t1602t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2002t__unsafe_ptr,&__t2002t__dat__pos,&__t2002t__dat__length,&__t2002t__dat__first);
  stack__unsafe_ptr=__t2002t__unsafe_ptr;
  stack__dat__pos=__t2002t__dat__pos;
  stack__dat__length=__t2002t__dat__length;
  stack__dat__first=__t2002t__dat__first;
  str__t1625t(_needle,&__t2003t__unsafe_ptr,&__t2003t__dat__pos,&__t2003t__dat__length,&__t2003t__dat__first);
  needle__unsafe_ptr=__t2003t__unsafe_ptr;
  needle__dat__pos=__t2003t__dat__pos;
  needle__dat__length=__t2003t__dat__length;
  needle__dat__first=__t2003t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t401t(stack__dat__length,d,&__t2005t__);
  __t2004t=__t_complain;
  if(__t_complain){
  goto __t2004t__label;
  }
  n=__t2005t__;
  __t2004t__label:__t2004t=__t2004t==0;
  not__t42t(__t2004t,&__t2006t__);
  if(__t2006t__){
  __t2007t=0;
  goto __t_return;
  }
  of__t699t(n,&__t2009t____t700t,&__t2009t__to);
  range__t716t(__t2009t____t700t,__t2009t__to,&__t2010t__from,&__t2010t__to);
  __t2008t=0-1;
  while(1){
  __t2008t=__t2008t+1;
  __t_complain=mutget__t721t(&__t2010t__from,__t2010t__to,__t2008t,&__t2012t__);
  __t2011t=__t_complain;
  if(__t_complain){
  goto __t2011t__label;
  }
  i=__t2012t__;
  __t2011t__label:__t2011t=__t2011t==0;
  if(!__t2011t){
  break;
  }
  add__t188t(i,d,&__t2014t__);
  __t_complain=slice__t1836t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t2014t__,&__t2015t__unsafe_ptr,&__t2015t__dat__pos,&__t2015t__dat__length,&__t2015t__dat__first);
  __t2013t=__t_complain;
  if(__t_complain){
  goto __t2013t__label;
  }
  sliced__unsafe_ptr=__t2015t__unsafe_ptr;
  sliced__dat__pos=__t2015t__dat__pos;
  sliced__dat__length=__t2015t__dat__length;
  sliced__dat__first=__t2015t__dat__first;
  __t2013t__label:__t2013t=__t2013t==0;
  eq__t1740t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2016t__);
  if(__t2016t__){
  __t2017t=1;
  __t2007t=__t2017t;
  goto __t_return;
  }
  }
  __t2018t=0;
  __t2007t=__t2018t;
  goto __t_return;
  __t_return:
  *__t5516t=__t2007t;
}

static inline __attribute__((always_inline)) void restore_stdout__t5125t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
}

static inline __attribute__((always_inline)) void stdout_to_err__t5126t(int64_t* __t5517t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5517t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t1804t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1805t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void popen__t4190t(const char* cmd, char** __t5518t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t5518t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4189t(char* unsafe_ptr, int64_t* __t5519t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t5519t=status;
}

static inline __attribute__((always_inline)) void int__t632t(uint64_t x, int64_t* __t5520t) {
  int __t633t=0;
  int __t634t=0;
  int __t635t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5520t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t5521t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t5521t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t5522t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5522t=z;
}

static inline __attribute__((always_inline)) int open__t4191t(const char* cmd, char** __t5523t) {
  char* __t4192t__=0;
  char* unsafe_ptr=0;
  char __t4193t__=0;
  char __t4194t__=0;
  char __t4195t__=0;
  int64_t __t4196t__=0;
  int64_t status=0;
  uint64_t __t4197t=0;
  int64_t __t4198t__=0;
  char __t4199t__=0;
  char __t4200t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4190t(cmd,&__t4192t__);
  unsafe_ptr=__t4192t__;
  exists__t652t(unsafe_ptr,&__t4193t__);
  not__t42t(__t4193t__,&__t4194t__);
  if(__t4194t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t652t(unsafe_ptr,&__t4195t__);
  if(__t4195t__){
  pclose__t4189t(unsafe_ptr,&__t4196t__);
  status=__t4196t__;
  unsafe_ptr=0;
  __t4197t=0;
  int__t632t(__t4197t,&__t4198t__);
  neq__t147t(status,__t4198t__,&__t4199t__);
  if(__t4199t__){
  __t_complain=41;
  goto __t4200t__label;
  __t4200t__label:__t4200t=__t4200t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5523t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4202t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t5524t) {
  const char* __t4203t__cstr=0;
  char* __t4203t__str__unsafe_ptr=0;
  uint64_t __t4203t__str__dat__pos=0;
  uint64_t __t4203t__str__dat__length=0;
  char __t4203t__str__dat__first=0;
  const char* __t4205t__=0;
  char* __t4206t__unsafe_ptr=0;
  char __t4207t____t4195t__=0;
  int64_t __t4207t____t4196t__=0;
  int64_t __t4207t__status=0;
  uint64_t __t4207t____t4197t=0;
  int64_t __t4207t____t4198t__=0;
  char __t4207t____t4199t__=0;
  char __t4207t____t4200t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1723t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4203t__cstr,&__t4203t__str__unsafe_ptr,&__t4203t__str__dat__pos,&__t4203t__str__dat__length,&__t4203t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1733t(__t4203t__cstr,__t4203t__str__unsafe_ptr,__t4203t__str__dat__pos,__t4203t__str__dat__length,__t4203t__str__dat__first,&__t4205t__);
  __t_errcode=open__t4191t(__t4205t__,&__t4206t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t652t(__t4206t__unsafe_ptr,&__t4207t____t4195t__);
  if(__t4207t____t4195t__){
  pclose__t4189t(__t4206t__unsafe_ptr,&__t4207t____t4196t__);
  __t4207t__status=__t4207t____t4196t__;
  __t4206t__unsafe_ptr=0;
  __t4207t____t4197t=0;
  int__t632t(__t4207t____t4197t,&__t4207t____t4198t__);
  neq__t147t(__t4207t__status,__t4207t____t4198t__,&__t4207t____t4199t__);
  if(__t4207t____t4199t__){
  __t_complain=41;
  goto __t4200t__label;
  __t4200t__label:__t4207t____t4200t=__t4207t____t4200t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5524t=__t4206t__unsafe_ptr;
  
  __t_skip_returns:free__t764t(&__t4203t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4164t(int64_t value, char* __t5525t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t5525t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4163t(int64_t value, const char** __t5526t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5526t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t5527t) {
  const char* value=0;
  *__t5527t=value;
}

int run__t5053t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t5528t) {
  char* __t5054t__unsafe_ptr=0;
  char __t5055t____t4207t____t4195t__=0;
  int64_t __t5055t____t4207t____t4196t__=0;
  int64_t __t5055t____t4207t__status=0;
  uint64_t __t5055t____t4207t____t4197t=0;
  int64_t __t5055t____t4207t____t4198t__=0;
  char __t5055t____t4207t____t4199t__=0;
  char __t5055t____t4207t____t4200t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t5056t=0;
  int64_t error=0;
  char __t5057t__=0;
  char __t5058t__=0;
  const char* __t5059t__=0;
  const char* __t5060t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4202t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5054t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t5054t__unsafe_ptr;
  exists__t652t(__t5054t__unsafe_ptr,&__t5055t____t4207t____t4195t__);
  if(__t5055t____t4207t____t4195t__){
  pclose__t4189t(__t5054t__unsafe_ptr,&__t5055t____t4207t____t4196t__);
  __t5055t____t4207t__status=__t5055t____t4207t____t4196t__;
  __t5054t__unsafe_ptr=0;
  __t5055t____t4207t____t4197t=0;
  int__t632t(__t5055t____t4207t____t4197t,&__t5055t____t4207t____t4198t__);
  neq__t147t(__t5055t____t4207t__status,__t5055t____t4207t____t4198t__,&__t5055t____t4207t____t4199t__);
  if(__t5055t____t4207t____t4199t__){
  __t_complain=41;
  goto __t4200t__label;
  __t4200t__label:__t5055t____t4207t____t4200t=__t5055t____t4207t____t4200t==0;
  }
  }
  __t5056t=__t_complain;
  error=__t5056t;
  ok__t4164t(error,&__t5057t__);
  not__t42t(__t5057t__,&__t5058t__);
  if(__t5058t__){
  cstr__t4163t(error,&__t5059t__);
  goto __t_return;
  }
  cstr__t1t(&__t5060t__);
  __t5059t__=__t5060t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5528t=__t5059t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5529t) {
  int value=0;
  *__t5529t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5530t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5530t=__t54t__;
}

static inline __attribute__((always_inline)) void exists__t1563t(const char* c, char* __t5531t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5531t=z;
}

static inline __attribute__((always_inline)) void nn__t430t(const char* value, const char** __t5532t, const char** __t5533t) {
  const char* __t432t=0;
  __t432t=__t431t;
  goto __t_return;
  __t_return:
  *__t5532t=value;
  *__t5533t=__t432t;
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

static inline __attribute__((always_inline)) void print_marker__t5090t(char colors__initialized) {
  const char* __t5092t__value=0;
  const char* __t5092t____t432t=0;
  int __t5094t=0;
  char __t5095t=0;
  char __t5096t=0;
  const char* __t5101t__value=0;
  const char* __t5101t____t432t=0;
  int __t5103t=0;
  const char* __t5106t__value=0;
  const char* __t5106t____t432t=0;
  nn__t430t(__t5072t,&__t5092t__value,&__t5092t____t432t);
  print__t439t(__t5092t__value,__t5092t____t432t);
  __t5096t=1;
  if(__t5097t!=__t5097t){
  __t5096t=0;
  }
  if(__t5096t){
  __t5095t=1;
  }
  if(__t5095t){
  set__t475t(colors__initialized);
  nn__t430t(__t5100t,&__t5101t__value,&__t5101t____t432t);
  print__t439t(__t5101t__value,__t5101t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5087t,&__t5106t__value,&__t5106t____t432t);
  print__t439t(__t5106t__value,__t5106t____t432t);
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

static inline __attribute__((always_inline)) void print_marker__t5070t(char colors__initialized) {
  const char* __t5073t__value=0;
  const char* __t5073t____t432t=0;
  char __t5075t=0;
  char __t5076t=0;
  const char* __t5081t__value=0;
  const char* __t5081t____t432t=0;
  int __t5083t=0;
  int __t5084t=0;
  const char* __t5088t__value=0;
  const char* __t5088t____t432t=0;
  nn__t430t(__t5072t,&__t5073t__value,&__t5073t____t432t);
  print__t439t(__t5073t__value,__t5073t____t432t);
  __t5076t=1;
  if(__t5077t!=__t5077t){
  __t5076t=0;
  }
  if(__t5076t){
  __t5075t=1;
  }
  if(__t5075t){
  set__t479t(colors__initialized);
  nn__t430t(__t5080t,&__t5081t__value,&__t5081t____t432t);
  print__t439t(__t5081t__value,__t5081t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5087t,&__t5088t__value,&__t5088t____t432t);
  print__t439t(__t5088t__value,__t5088t____t432t);
}

static inline __attribute__((always_inline)) int test__t5150t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t5534t) {
  int64_t __t5152t__=0;
  const char* __t5155t__=0;
  const char* __t5156t=0;
  const char* error=0;
  int __t5157t=0;
  int __t5158t__=0;
  char __t5159t__=0;
  const char* __t5160t__=0;
  const char* __t5162t__value=0;
  const char* __t5162t____t432t=0;
  char __t5164t__=0;
  char __t5168t=0;
  char __t5173t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5126t(&__t5152t__);
  print__t1804t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t5053t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5155t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5156t=__t5155t__;
  error=__t5156t;
  not__t53t(__t5157t,&__t5158t__);
  if(should_fail){
  exists__t1563t(error,&__t5159t__);
  if(__t5159t__){
  cstr__t1t(&__t5160t__);
  error=__t5160t__;
  }
  else{
  error=__t5161t;
  }
  }
  nn__t430t(__t5134t,&__t5162t__value,&__t5162t____t432t);
  print__t439t(__t5162t__value,__t5162t____t432t);
  exists__t1563t(error,&__t5164t__);
  if(__t5164t__){
  print_marker__t5090t(colors__initialized);
  print__t441t(error);
  __t5168t=0;
  goto __t_return;
  }
  print_marker__t5070t(colors__initialized);
  print__t441t(__t5171t);
  __t5173t=1;
  __t5168t=__t5173t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5534t=__t5168t;
  
  __t_skip_returns:restore_stdout__t5125t(__t5152t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t452t(uint64_t value, const char* endl) {
  int __t453t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t437t(uint64_t value, uint64_t* __t5535t, const char** __t5536t) {
  const char* __t438t=0;
  __t438t=__t431t;
  goto __t_return;
  __t_return:
  *__t5535t=value;
  *__t5536t=__t438t;
}

static inline __attribute__((always_inline)) int _main__t5212t() {
  char* __t5214t__unsafe_ptr=0;
  uint64_t __t5214t__dat__pos=0;
  uint64_t __t5214t__dat__length=0;
  char __t5214t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5215t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5217t=0;
  char* __t5218t__unsafe_ptr=0;
  uint64_t __t5218t__unsafe_size=0;
  uint32_t __t5218t__unsafe_offset=0;
  uint32_t __t5218t__unsafe_align=0;
  char* __t5220t__buf__unsafe_ptr=0;
  uint64_t __t5220t__buf__unsafe_size=0;
  uint32_t __t5220t__buf__unsafe_offset=0;
  uint32_t __t5220t__buf__unsafe_align=0;
  uint64_t __t5220t__pos=0;
  char* __t5221t__buf__unsafe_ptr=0;
  uint64_t __t5221t__buf__unsafe_size=0;
  uint32_t __t5221t__buf__unsafe_offset=0;
  uint32_t __t5221t__buf__unsafe_align=0;
  uint64_t __t5221t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  int __t5226t=0;
  char* __t5228t__unsafe_ptr=0;
  uint64_t __t5228t__dat__pos=0;
  uint64_t __t5228t__dat__length=0;
  char __t5228t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  uint64_t __t5229t=0;
  uint64_t __t5230t=0;
  uint64_t counter=0;
  uint64_t __t5231t=0;
  uint64_t __t5232t=0;
  uint64_t failures=0;
  uint64_t __t5233t=0;
  char* __t5234t__unsafe_ptr=0;
  char __t5236t=0;
  char* __t5237t__unsafe_ptr=0;
  uint64_t __t5237t__dat__pos=0;
  uint64_t __t5237t__dat__length=0;
  char __t5237t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5239t__=0;
  char __t5240t__=0;
  char __t5241t__=0;
  char __t5242t=0;
  char __t5243t__=0;
  uint64_t __t5244t__=0;
  uint64_t __t5245t____t5209t=0;
  uint64_t __t5245t____t5211t__=0;
  char* __t5246t__unsafe_ptr=0;
  uint64_t __t5246t__dat__pos=0;
  uint64_t __t5246t__dat__length=0;
  char __t5246t__dat__first=0;
  char* __t5248t__unsafe_ptr=0;
  uint64_t __t5248t__dat__pos=0;
  uint64_t __t5248t__dat__length=0;
  char __t5248t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5249t=0;
  char* __t5250t__unsafe_ptr=0;
  char __t5252t=0;
  char* __t5253t__unsafe_ptr=0;
  uint64_t __t5253t__dat__pos=0;
  uint64_t __t5253t__dat__length=0;
  char __t5253t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5255t__=0;
  char __t5256t__=0;
  uint64_t __t5257t__=0;
  uint64_t __t5258t____t5209t=0;
  uint64_t __t5258t____t5211t__=0;
  uint64_t __t5259t=0;
  uint64_t __t5260t__=0;
  char __t5262t__=0;
  char should_fail=0;
  char* __t5263t__unsafe_ptr=0;
  uint64_t __t5263t__dat__pos=0;
  uint64_t __t5263t__dat__length=0;
  char __t5263t__dat__first=0;
  char* __t5264t__unsafe_ptr=0;
  uint64_t __t5264t__dat__pos=0;
  uint64_t __t5264t__dat__length=0;
  char __t5264t__dat__first=0;
  char __t5265t__=0;
  char __t5266t__=0;
  uint64_t __t5267t=0;
  uint64_t __t5268t__=0;
  int64_t __t5269t__=0;
  uint64_t __t5271t=0;
  char __t5272t__=0;
  const char* __t5286t__value=0;
  const char* __t5286t____t432t=0;
  const char* __t5276t__value=0;
  const char* __t5276t____t432t=0;
  const char* __t5281t__value=0;
  const char* __t5281t____t432t=0;
  uint64_t __t5292t__value=0;
  const char* __t5292t____t438t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1625t(__t5213t,&__t5214t__unsafe_ptr,&__t5214t__dat__pos,&__t5214t__dat__length,&__t5214t__dat__first);
  test_root__unsafe_ptr=__t5214t__unsafe_ptr;
  test_root__dat__pos=__t5214t__dat__pos;
  test_root__dat__length=__t5214t__dat__length;
  test_root__dat__first=__t5214t__dat__first;
  colors__t469t(&__t5215t__initialized);
  colors__initialized=__t5215t__initialized;
  __t5217t=128;
  __t_errcode=alloc__t1042t(__t5217t,&__t5218t__unsafe_ptr,&__t5218t__unsafe_size,&__t5218t__unsafe_offset,&__t5218t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1161t(&__t5218t__unsafe_ptr,&__t5218t__unsafe_size,&__t5218t__unsafe_offset,&__t5218t__unsafe_align,&__t5220t__buf__unsafe_ptr,&__t5220t__buf__unsafe_size,&__t5220t__buf__unsafe_offset,&__t5220t__buf__unsafe_align,&__t5220t__pos);
  __t5221t__buf__unsafe_ptr=__t5220t__buf__unsafe_ptr;
  __t5221t__buf__unsafe_size=__t5220t__buf__unsafe_size;
  __t5221t__buf__unsafe_offset=__t5220t__buf__unsafe_offset;
  __t5221t__buf__unsafe_align=__t5220t__buf__unsafe_align;
  __t5221t__pos=__t5220t__pos;
  CHARS__buf__unsafe_ptr=__t5221t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5221t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5221t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5221t__buf__unsafe_align;
  CHARS__pos=__t5221t__pos;
  __t_errcode=copy__t1674t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5227t,&__t5228t__unsafe_ptr,&__t5228t__dat__pos,&__t5228t__dat__length,&__t5228t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5228t__unsafe_ptr;
  command_base__dat__pos=__t5228t__dat__pos;
  command_base__dat__length=__t5228t__dat__length;
  command_base__dat__first=__t5228t__dat__first;
  __t5229t=0;
  __t5230t=__t5229t;
  counter=__t5230t;
  __t5231t=0;
  __t5232t=__t5231t;
  failures=__t5232t;
  __t_errcode=open__t4928t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5234t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5233t=0-1;
  while(1){
  __t5233t=__t5233t+1;
  __t_complain=mutget__t5011t(&__t5234t__unsafe_ptr,__t5233t,&__t5237t__unsafe_ptr,&__t5237t__dat__pos,&__t5237t__dat__length,&__t5237t__dat__first);
  __t5236t=__t_complain;
  if(__t_complain){
  goto __t5236t__label;
  }
  path__unsafe_ptr=__t5237t__unsafe_ptr;
  path__dat__pos=__t5237t__dat__pos;
  path__dat__length=__t5237t__dat__length;
  path__dat__first=__t5237t__dat__first;
  __t5236t__label:__t5236t=__t5236t==0;
  if(!__t5236t){
  break;
  }
  eq__t1747t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5238t,&__t5239t__);
  if(!__t5239t__){
  __t_errcode=is_dir__t4855t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5240t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5240t__,&__t5241t__);
  __t5242t=__t5241t__;
  }
  else{
  __t5242t=0;
  not__t42t(__t5242t,&__t5243t__);
  __t5242t=__t5243t__;
  }
  if(__t5242t){
  continue;
  }
  reuse__t5206t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5244t__);
  __t_errcode=add__t2821t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5246t__unsafe_ptr,&__t5246t__dat__pos,&__t5246t__dat__length,&__t5246t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2866t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5246t__unsafe_ptr,__t5246t__dat__pos,__t5246t__dat__length,__t5246t__dat__first,__t5247t,&__t5248t__unsafe_ptr,&__t5248t__dat__pos,&__t5248t__dat__length,&__t5248t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5248t__unsafe_ptr;
  dir_path__dat__pos=__t5248t__dat__pos;
  dir_path__dat__length=__t5248t__dat__length;
  dir_path__dat__first=__t5248t__dat__first;
  __t_errcode=open__t4928t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5250t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5249t=0-1;
  while(1){
  __t5249t=__t5249t+1;
  __t_complain=mutget__t5011t(&__t5250t__unsafe_ptr,__t5249t,&__t5253t__unsafe_ptr,&__t5253t__dat__pos,&__t5253t__dat__length,&__t5253t__dat__first);
  __t5252t=__t_complain;
  if(__t_complain){
  goto __t5252t__label;
  }
  entry__unsafe_ptr=__t5253t__unsafe_ptr;
  entry__dat__pos=__t5253t__dat__pos;
  entry__dat__length=__t5253t__dat__length;
  entry__dat__first=__t5253t__dat__first;
  __t5252t__label:__t5252t=__t5252t==0;
  if(!__t5252t){
  break;
  }
  __t_errcode=ends_with__t1915t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5254t,&__t5255t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5255t__,&__t5256t__);
  if(__t5256t__){
  continue;
  }
  reuse__t5206t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5257t__);
  __t5259t=1;
  add__t188t(counter,__t5259t,&__t5260t__);
  counter=__t5260t__;
  contains__t2001t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5261t,&__t5262t__);
  should_fail=__t5262t__;
  __t_errcode=add__t2821t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5263t__unsafe_ptr,&__t5263t__dat__pos,&__t5263t__dat__length,&__t5263t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2821t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5263t__unsafe_ptr,__t5263t__dat__pos,__t5263t__dat__length,__t5263t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5264t__unsafe_ptr,&__t5264t__dat__pos,&__t5264t__dat__length,&__t5264t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5150t(colors__initialized,__t5264t__unsafe_ptr,__t5264t__dat__pos,__t5264t__dat__length,__t5264t__dat__first,should_fail,&__t5265t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5265t__,&__t5266t__);
  if(__t5266t__){
  __t5267t=1;
  add__t188t(failures,__t5267t,&__t5268t__);
  failures=__t5268t__;
  }
  __t5258t____t5209t=0;
  sub__t409t(__t5257t__,__t5258t____t5209t,&__t5258t____t5211t__);
  CHARS__pos=__t5258t____t5211t__;
  }
  __t5245t____t5209t=0;
  sub__t409t(__t5244t__,__t5245t____t5209t,&__t5245t____t5211t__);
  CHARS__pos=__t5245t____t5211t__;
  closedir__t4918t(__t5250t__unsafe_ptr);
  }
  stdout_to_err__t5126t(&__t5269t__);
  __t5271t=0;
  eq__t134t(failures,__t5271t,&__t5272t__);
  if(__t5272t__){
  set__t479t(colors__initialized);
  nn__t430t(__t5275t,&__t5276t__value,&__t5276t____t432t);
  print__t439t(__t5276t__value,__t5276t____t432t);
  set__t595t(colors__initialized);
  nn__t430t(__t5280t,&__t5281t__value,&__t5281t____t432t);
  print__t439t(__t5281t__value,__t5281t____t432t);
  }
  else{
  set__t475t(colors__initialized);
  nn__t430t(__t5285t,&__t5286t__value,&__t5286t____t432t);
  print__t439t(__t5286t__value,__t5286t____t432t);
  set__t595t(colors__initialized);
  print__t452t(failures,__t5290t);
  }
  nn__t437t(counter,&__t5292t__value,&__t5292t____t438t);
  print__t452t(__t5292t__value,__t5292t____t438t);
  print__t441t(__t5294t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:restore_stdout__t5125t(__t5269t__);
  closedir__t4918t(__t5234t__unsafe_ptr);
  free__t764t(&__t5218t__unsafe_ptr);
  if(__t5215t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5296t() {
  char __t5299t=0;
  char __t5301t__=0;
  int64_t __t5302t=0;
  const char* __t5303t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t_complain=_main__t5212t();
  __t5299t=__t_complain;
  if(__t_complain){
  goto __t5299t__label;
  }
  __t5299t__label:__t5299t=__t5299t==0;
  not__t42t(__t5299t,&__t5301t__);
  if(__t5301t__){
  __t5302t=__t_complain;
  cstr__t4163t(__t5302t,&__t5303t__);
  print__t441t(__t5303t__);
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
                    return main__t5296t();
                }