#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t431t="";
const char* const __t5037t="X";
const char* const __t5222t=" tests";
const char* const __t5208t="no errors across ";
const char* const __t5009t="[";
const char* const __t5014t="success";
const char* const __t5096t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t5024t="] ";
const char* const __t5177t="/";
const char* const __t5213t="FAILED ";
const char* const __t5184t=".s";
const char* const __t5146t="./tests/passing/";
const char* const __t5203t="PASSING ";
const char* const __t443t="\n";
const char* const __t5218t=" out of ";
const char* const __t5168t="..";
const char* const __t5157t="./smoll --cleanup ";
const char* const __t5071t=" |- ";
const char* const __t5017t="V";
const char* const __t5191t="_fail_";
const char* const __t5034t="failure";
const char* const __t5106t="completed";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1519t(char** __t5224t, uint64_t* __t5225t, uint32_t* __t5226t, uint32_t* __t5227t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5224t=unsafe_ptr;
  *__t5225t=unsafe_size;
  *__t5226t=unsafe_offset;
  *__t5227t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5228t) {
  *__t5228t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5229t) {
  int value=0;
  *__t5229t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5230t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5230t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5231t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5231t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5232t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5232t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5233t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5233t=z;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t5234t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5234t=z;
}

static inline __attribute__((always_inline)) void nat__t682t(uint32_t x, uint64_t* __t5235t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5235t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5236t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5236t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5237t) {
  *__t5237t=to;
}

static inline __attribute__((always_inline)) void add__t745t(char* allocated, uint64_t offset, char** __t5238t) {
  char* element=0;
  char* __t746t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t746t__);
  goto __t_return;
  __t_return:
  *__t5238t=__t746t__;
}

static inline __attribute__((always_inline)) int get__t1086t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5239t) {
  int __t1087t=0;
  char __t1088t__=0;
  uint64_t __t1089t__=0;
  uint64_t __t1090t__=0;
  uint64_t __t1091t__=0;
  uint64_t __t1092t__=0;
  char* __t1093t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1088t__);
  if(__t1088t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t682t(buffer__unsafe_align,&__t1089t__);
  mul__t212t(i,__t1089t__,&__t1090t__);
  nat__t682t(buffer__unsafe_offset,&__t1091t__);
  add__t188t(__t1090t__,__t1091t__,&__t1092t__);
  add__t745t(buffer__unsafe_ptr,__t1092t__,&__t1093t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5239t=__t1093t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1544t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5240t, uint64_t* __t5241t, uint64_t* __t5242t, char* __t5243t) {
  goto __t_return;
  __t_return:
  *__t5240t=unsafe_ptr;
  *__t5241t=dat__pos;
  *__t5242t=dat__length;
  *__t5243t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1548t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5244t, uint64_t* __t5245t, uint64_t* __t5246t, char* __t5247t) {
  char* unsafe_ptr=0;
  uint64_t __t1549t__=0;
  uint64_t __t1550t=0;
  char __t1551t__=0;
  uint64_t __t1552t__=0;
  uint64_t __t1553t=0;
  char __t1554t__=0;
  char* __t1555t__unsafe_ptr=0;
  uint64_t __t1555t__dat__pos=0;
  uint64_t __t1555t__dat__length=0;
  char __t1555t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t682t(buf__unsafe_align,&__t1549t__);
  __t1550t=1;
  neq__t158t(__t1549t__,__t1550t,&__t1551t__);
  if(__t1551t__){
  __t_errcode=21;
  goto __t_failure;
  }
  nat__t682t(buf__unsafe_offset,&__t1552t__);
  __t1553t=0;
  neq__t158t(__t1552t__,__t1553t,&__t1554t__);
  if(__t1554t__){
  __t_errcode=22;
  goto __t_failure;
  }
  str__t1544t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1555t__unsafe_ptr,&__t1555t__dat__pos,&__t1555t__dat__length,&__t1555t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5244t=__t1555t__unsafe_ptr;
  *__t5245t=__t1555t__dat__pos;
  *__t5246t=__t1555t__dat__length;
  *__t5247t=__t1555t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1582t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5248t, uint64_t* __t5249t, uint64_t* __t5250t, char* __t5251t) {
  uint64_t __t1583t=0;
  char __t1584t__=0;
  char* __t1586t__=0;
  char __t1587t__value=0;
  char first=0;
  char* __t1588t__unsafe_ptr=0;
  uint64_t __t1588t__dat__pos=0;
  uint64_t __t1588t__dat__length=0;
  char __t1588t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1583t=0;
  neq__t158t(length,__t1583t,&__t1584t__);
  if(__t1584t__){
  __t_errcode=get__t1086t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1586t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1586t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1587t__value,__t1586t__,1);
  first=__t1587t__value;
  }
  __t_errcode=str__t1548t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1588t__unsafe_ptr,&__t1588t__dat__pos,&__t1588t__dat__length,&__t1588t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5248t=__t1588t__unsafe_ptr;
  *__t5249t=__t1588t__dat__pos;
  *__t5250t=__t1588t__dat__length;
  *__t5251t=__t1588t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1604t(const char* c, char** __t5252t, uint64_t* __t5253t, uint64_t* __t5254t, char* __t5255t) {
  char* __t1605t__unsafe_ptr=0;
  uint64_t __t1605t__unsafe_size=0;
  uint32_t __t1605t__unsafe_offset=0;
  uint32_t __t1605t__unsafe_align=0;
  char* __t1606t__unsafe_ptr=0;
  uint64_t __t1606t__unsafe_size=0;
  uint32_t __t1606t__unsafe_offset=0;
  uint32_t __t1606t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1607t__=0;
  uint64_t length=0;
  uint64_t __t1608t=0;
  uint64_t __t1609t__=0;
  char __t1610t=0;
  uint64_t __t1611t=0;
  char* __t1613t__unsafe_ptr=0;
  uint64_t __t1613t__dat__pos=0;
  uint64_t __t1613t__dat__length=0;
  char __t1613t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1519t(&__t1605t__unsafe_ptr,&__t1605t__unsafe_size,&__t1605t__unsafe_offset,&__t1605t__unsafe_align);
  __t1606t__unsafe_ptr=__t1605t__unsafe_ptr;
  __t1606t__unsafe_size=__t1605t__unsafe_size;
  __t1606t__unsafe_offset=__t1605t__unsafe_offset;
  __t1606t__unsafe_align=__t1605t__unsafe_align;
  buf__unsafe_ptr=__t1606t__unsafe_ptr;
  buf__unsafe_size=__t1606t__unsafe_size;
  buf__unsafe_offset=__t1606t__unsafe_offset;
  buf__unsafe_align=__t1606t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1607t__);
  buf__unsafe_ptr=__t1607t__;
  if(c){
  length=strlen(c);
  }
  __t1608t=1;
  add__t188t(length,__t1608t,&__t1609t__);
  buf__unsafe_size=__t1609t__;
  __t1611t=0;
  __t_complain=str__t1582t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1611t,length,&__t1613t__unsafe_ptr,&__t1613t__dat__pos,&__t1613t__dat__length,&__t1613t__dat__first);
  __t1610t=__t_complain;
  if(__t_complain){
  goto __t1610t__label;
  }
  ret__unsafe_ptr=__t1613t__unsafe_ptr;
  ret__dat__pos=__t1613t__dat__pos;
  ret__dat__length=__t1613t__dat__length;
  ret__dat__first=__t1613t__dat__first;
  __t1610t__label:__t1610t=__t1610t==0;
  goto __t_return;
  __t_return:
  *__t5252t=ret__unsafe_ptr;
  *__t5253t=ret__dat__pos;
  *__t5254t=ret__dat__length;
  *__t5255t=ret__dat__first;
}

static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void supports_ansi__t468t(char* __t5256t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5256t=supports;
}

static inline __attribute__((always_inline)) void colors__t469t(char* __t5257t) {
  char __t470t__=0;
  char initialized=0;
  supports_ansi__t468t(&__t470t__);
  initialized=__t470t__;
  goto __t_return;
  __t_return:
  *__t5257t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1022t(char** __t5258t, uint64_t* __t5259t, uint32_t* __t5260t, uint32_t* __t5261t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5258t=unsafe_ptr;
  *__t5259t=unsafe_size;
  *__t5260t=unsafe_offset;
  *__t5261t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t743t(char** __t5262t) {
  char* allocated=*__t5262t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5262t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5263t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5263t=z;
}

static inline __attribute__((always_inline)) void zero__t744t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t652t(char* x, char* __t5264t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5264t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5265t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5265t=z;
}

static inline __attribute__((always_inline)) int alloc__t727t(uint64_t bytes, char** __t5266t) {
  char* allocated=0;
  char __t728t__=0;
  char __t729t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t652t(allocated,&__t728t__);
  not__t42t(__t728t__,&__t729t__);
  if(__t729t__){
  __t_errcode=13;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5266t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t866t(char** __t5267t, uint64_t* __t5268t, uint32_t* __t5269t, uint32_t* __t5270t, uint64_t size, char** __t5271t, uint64_t* __t5272t, uint32_t* __t5273t, uint32_t* __t5274t) {
  char* buffer__unsafe_ptr=*__t5267t;
  uint64_t buffer__unsafe_size=*__t5268t;
  uint32_t buffer__unsafe_offset=*__t5269t;
  uint32_t buffer__unsafe_align=*__t5270t;
  int __t867t=0;
  int __t868t=0;
  char __t870t__=0;
  uint64_t __t871t=0;
  char __t872t__=0;
  char __t873t=0;
  uint64_t __t874t=0;
  uint64_t __t875t__=0;
  uint64_t __t876t__=0;
  int __t878t=0;
  uint64_t __t879t=0;
  char __t880t__=0;
  uint64_t __t881t__=0;
  uint64_t __t882t__=0;
  uint64_t bytes=0;
  int __t883t=0;
  uint64_t __t884t=0;
  char __t885t__=0;
  char* __t886t__=0;
  int __t887t=0;
  uint64_t __t888t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t870t__);
  if(__t870t__){
  __t871t=0;
  neq__t158t(size,__t871t,&__t872t__);
  __t873t=__t872t__;
  }
  if(__t873t){
  __t874t=0;
  nat__t682t(buffer__unsafe_align,&__t875t__);
  mul__t212t(__t875t__,size,&__t876t__);
  zero__t744t(buffer__unsafe_ptr,__t874t,__t876t__);
  goto __t_return;
  }
  __t879t=0;
  neq__t158t(buffer__unsafe_size,__t879t,&__t880t__);
  if(__t880t__){
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t682t(buffer__unsafe_align,&__t881t__);
  mul__t212t(__t881t__,size,&__t882t__);
  bytes=__t882t__;
  __t884t=0;
  eq__t134t(bytes,__t884t,&__t885t__);
  if(__t885t__){
  __t_errcode=15;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t727t(bytes,&__t886t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t888t=0;
  zero__t744t(__t886t__,__t888t,bytes);
  buffer__unsafe_ptr=__t886t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t743t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5267t=buffer__unsafe_ptr;
  *__t5268t=buffer__unsafe_size;
  *__t5269t=buffer__unsafe_offset;
  *__t5270t=buffer__unsafe_align;
  *__t5271t=buffer__unsafe_ptr;
  *__t5272t=buffer__unsafe_size;
  *__t5273t=buffer__unsafe_offset;
  *__t5274t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1021t(uint64_t size, char** __t5275t, uint64_t* __t5276t, uint32_t* __t5277t, uint32_t* __t5278t) {
  char* __t1024t__unsafe_ptr=0;
  uint64_t __t1024t__unsafe_size=0;
  uint32_t __t1024t__unsafe_offset=0;
  uint32_t __t1024t__unsafe_align=0;
  char* __t1025t__unsafe_ptr=0;
  uint64_t __t1025t__unsafe_size=0;
  uint32_t __t1025t__unsafe_offset=0;
  uint32_t __t1025t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1022t(&__t1024t__unsafe_ptr,&__t1024t__unsafe_size,&__t1024t__unsafe_offset,&__t1024t__unsafe_align);
  __t_errcode=alloc__t866t(&__t1024t__unsafe_ptr,&__t1024t__unsafe_size,&__t1024t__unsafe_offset,&__t1024t__unsafe_align,size,&__t1025t__unsafe_ptr,&__t1025t__unsafe_size,&__t1025t__unsafe_offset,&__t1025t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t743t(&__t1025t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5275t=__t1025t__unsafe_ptr;
  *__t5276t=__t1025t__unsafe_size;
  *__t5277t=__t1025t__unsafe_offset;
  *__t5278t=__t1025t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1137t(char** __t5279t, uint64_t* __t5280t, uint32_t* __t5281t, uint32_t* __t5282t, uint64_t _pos, char** __t5283t, uint64_t* __t5284t, uint32_t* __t5285t, uint32_t* __t5286t, uint64_t* __t5287t) {
  char* buf__unsafe_ptr=*__t5279t;
  uint64_t buf__unsafe_size=*__t5280t;
  uint32_t buf__unsafe_offset=*__t5281t;
  uint32_t buf__unsafe_align=*__t5282t;
  uint64_t __t1138t=0;
  uint64_t pos=0;
  __t1138t=_pos;
  pos=__t1138t;
  goto __t_return;
  __t_return:
  *__t5279t=buf__unsafe_ptr;
  *__t5280t=buf__unsafe_size;
  *__t5281t=buf__unsafe_offset;
  *__t5282t=buf__unsafe_align;
  *__t5283t=buf__unsafe_ptr;
  *__t5284t=buf__unsafe_size;
  *__t5285t=buf__unsafe_offset;
  *__t5286t=buf__unsafe_align;
  *__t5287t=pos;
}

static inline __attribute__((always_inline)) void arena__t1140t(char** __t5288t, uint64_t* __t5289t, uint32_t* __t5290t, uint32_t* __t5291t, char** __t5292t, uint64_t* __t5293t, uint32_t* __t5294t, uint32_t* __t5295t, uint64_t* __t5296t) {
  char* buf__unsafe_ptr=*__t5288t;
  uint64_t buf__unsafe_size=*__t5289t;
  uint32_t buf__unsafe_offset=*__t5290t;
  uint32_t buf__unsafe_align=*__t5291t;
  uint64_t __t1141t=0;
  char* __t1142t__buf__unsafe_ptr=0;
  uint64_t __t1142t__buf__unsafe_size=0;
  uint32_t __t1142t__buf__unsafe_offset=0;
  uint32_t __t1142t__buf__unsafe_align=0;
  uint64_t __t1142t__pos=0;
  __t1141t=0;
  arena__t1137t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1141t,&__t1142t__buf__unsafe_ptr,&__t1142t__buf__unsafe_size,&__t1142t__buf__unsafe_offset,&__t1142t__buf__unsafe_align,&__t1142t__pos);
  goto __t_return;
  __t_return:
  *__t5288t=buf__unsafe_ptr;
  *__t5289t=buf__unsafe_size;
  *__t5290t=buf__unsafe_offset;
  *__t5291t=buf__unsafe_align;
  *__t5292t=__t1142t__buf__unsafe_ptr;
  *__t5293t=__t1142t__buf__unsafe_size;
  *__t5294t=__t1142t__buf__unsafe_offset;
  *__t5295t=__t1142t__buf__unsafe_align;
  *__t5296t=__t1142t__pos;
}

static inline __attribute__((always_inline)) void len__t1094t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5297t) {
  goto __t_return;
  __t_return:
  *__t5297t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t5298t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5298t=z;
}

static inline __attribute__((always_inline)) void allocated__t1144t(char** __t5299t, uint64_t* __t5300t, uint32_t* __t5301t, uint32_t* __t5302t, uint64_t pos, char** __t5303t, uint64_t* __t5304t, uint32_t* __t5305t, uint32_t* __t5306t, uint64_t* __t5307t) {
  char* buf__unsafe_ptr=*__t5299t;
  uint64_t buf__unsafe_size=*__t5300t;
  uint32_t buf__unsafe_offset=*__t5301t;
  uint32_t buf__unsafe_align=*__t5302t;
  goto __t_return;
  __t_return:
  *__t5299t=buf__unsafe_ptr;
  *__t5300t=buf__unsafe_size;
  *__t5301t=buf__unsafe_offset;
  *__t5302t=buf__unsafe_align;
  *__t5303t=buf__unsafe_ptr;
  *__t5304t=buf__unsafe_size;
  *__t5305t=buf__unsafe_offset;
  *__t5306t=buf__unsafe_align;
  *__t5307t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1219t(char** __t5308t, uint64_t* __t5309t, uint32_t* __t5310t, uint32_t* __t5311t, uint64_t* __t5312t, uint64_t length, char** __t5313t, uint64_t* __t5314t, uint32_t* __t5315t, uint32_t* __t5316t, uint64_t* __t5317t) {
  char* allocator__buf__unsafe_ptr=*__t5308t;
  uint64_t allocator__buf__unsafe_size=*__t5309t;
  uint32_t allocator__buf__unsafe_offset=*__t5310t;
  uint32_t allocator__buf__unsafe_align=*__t5311t;
  uint64_t allocator__pos=*__t5312t;
  int __t1220t=0;
  uint64_t __t1221t__=0;
  uint64_t next_pos=0;
  uint64_t __t1222t__=0;
  char __t1223t__=0;
  uint64_t __t1224t=0;
  uint64_t __t1225t__=0;
  uint64_t pos=0;
  char* __t1226t__buf__unsafe_ptr=0;
  uint64_t __t1226t__buf__unsafe_size=0;
  uint32_t __t1226t__buf__unsafe_offset=0;
  uint32_t __t1226t__buf__unsafe_align=0;
  uint64_t __t1226t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1221t__);
  next_pos=__t1221t__;
  len__t1094t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1222t__);
  gt__t325t(next_pos,__t1222t__,&__t1223t__);
  if(__t1223t__){
  __t_errcode=19;
  goto __t_failure;
  }
  __t1224t=0;
  add__t188t(allocator__pos,__t1224t,&__t1225t__);
  pos=__t1225t__;
  allocator__pos=next_pos;
  allocated__t1144t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1226t__buf__unsafe_ptr,&__t1226t__buf__unsafe_size,&__t1226t__buf__unsafe_offset,&__t1226t__buf__unsafe_align,&__t1226t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5308t=allocator__buf__unsafe_ptr;
  *__t5309t=allocator__buf__unsafe_size;
  *__t5310t=allocator__buf__unsafe_offset;
  *__t5311t=allocator__buf__unsafe_align;
  *__t5312t=allocator__pos;
  *__t5313t=__t1226t__buf__unsafe_ptr;
  *__t5314t=__t1226t__buf__unsafe_size;
  *__t5315t=__t1226t__buf__unsafe_offset;
  *__t5316t=__t1226t__buf__unsafe_align;
  *__t5317t=__t1226t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1653t(char** __t5318t, uint64_t* __t5319t, uint32_t* __t5320t, uint32_t* __t5321t, uint64_t* __t5322t, const char* _other, char** __t5323t, uint64_t* __t5324t, uint64_t* __t5325t, char* __t5326t) {
  char* CHARS__buf__unsafe_ptr=*__t5318t;
  uint64_t CHARS__buf__unsafe_size=*__t5319t;
  uint32_t CHARS__buf__unsafe_offset=*__t5320t;
  uint32_t CHARS__buf__unsafe_align=*__t5321t;
  uint64_t CHARS__pos=*__t5322t;
  char* __t1654t__unsafe_ptr=0;
  uint64_t __t1654t__dat__pos=0;
  uint64_t __t1654t__dat__length=0;
  char __t1654t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1655t__buf__unsafe_ptr=0;
  uint64_t __t1655t__buf__unsafe_size=0;
  uint32_t __t1655t__buf__unsafe_offset=0;
  uint32_t __t1655t__buf__unsafe_align=0;
  uint64_t __t1655t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1656t=0;
  char* __t1657t__unsafe_ptr=0;
  uint64_t __t1657t__dat__pos=0;
  uint64_t __t1657t__dat__length=0;
  char __t1657t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1604t(_other,&__t1654t__unsafe_ptr,&__t1654t__dat__pos,&__t1654t__dat__length,&__t1654t__dat__first);
  other__unsafe_ptr=__t1654t__unsafe_ptr;
  other__dat__pos=__t1654t__dat__pos;
  other__dat__length=__t1654t__dat__length;
  other__dat__first=__t1654t__dat__first;
  __t_errcode=alloc__t1219t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1655t__buf__unsafe_ptr,&__t1655t__buf__unsafe_size,&__t1655t__buf__unsafe_offset,&__t1655t__buf__unsafe_align,&__t1655t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1655t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1655t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1655t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1655t__buf__unsafe_align;
  surface__pos=__t1655t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1548t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1657t__unsafe_ptr,&__t1657t__dat__pos,&__t1657t__dat__length,&__t1657t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5318t=CHARS__buf__unsafe_ptr;
  *__t5319t=CHARS__buf__unsafe_size;
  *__t5320t=CHARS__buf__unsafe_offset;
  *__t5321t=CHARS__buf__unsafe_align;
  *__t5322t=CHARS__pos;
  *__t5323t=__t1657t__unsafe_ptr;
  *__t5324t=__t1657t__dat__pos;
  *__t5325t=__t1657t__dat__length;
  *__t5326t=__t1657t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1095t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1620t(char** __t5327t, uint64_t* __t5328t, uint32_t* __t5329t, uint32_t* __t5330t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5327t=unsafe_ptr;
  *__t5328t=unsafe_size;
  *__t5329t=unsafe_offset;
  *__t5330t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t1614t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5331t) {
  goto __t_return;
  __t_return:
  *__t5331t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1678t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5332t, uint64_t* __t5333t, uint64_t* __t5334t, char* __t5335t) {
  char* __t1679t__unsafe_ptr=0;
  uint64_t __t1679t__unsafe_size=0;
  uint32_t __t1679t__unsafe_offset=0;
  uint32_t __t1679t__unsafe_align=0;
  uint64_t __t1680t=0;
  uint64_t __t1681t__=0;
  uint64_t __t1682t__=0;
  char* __t1683t__unsafe_ptr=0;
  uint64_t __t1683t__unsafe_size=0;
  uint32_t __t1683t__unsafe_offset=0;
  uint32_t __t1683t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t1685t=0;
  uint64_t __t1686t=0;
  char* __t1687t__unsafe_ptr=0;
  uint64_t __t1687t__dat__pos=0;
  uint64_t __t1687t__dat__length=0;
  char __t1687t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1620t(&__t1679t__unsafe_ptr,&__t1679t__unsafe_size,&__t1679t__unsafe_offset,&__t1679t__unsafe_align);
  __t1680t=1;
  len__t1614t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1681t__);
  add__t188t(__t1680t,__t1681t__,&__t1682t__);
  __t_errcode=alloc__t866t(&__t1679t__unsafe_ptr,&__t1679t__unsafe_size,&__t1679t__unsafe_offset,&__t1679t__unsafe_align,__t1682t__,&__t1683t__unsafe_ptr,&__t1683t__unsafe_size,&__t1683t__unsafe_offset,&__t1683t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1683t__unsafe_ptr;
  buf__unsafe_size=__t1683t__unsafe_size;
  buf__unsafe_offset=__t1683t__unsafe_offset;
  buf__unsafe_align=__t1683t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1686t=0;
  __t_errcode=str__t1548t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1686t,other__dat__length,other__dat__first,&__t1687t__unsafe_ptr,&__t1687t__dat__pos,&__t1687t__dat__length,&__t1687t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t743t(&__t1687t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5332t=__t1687t__unsafe_ptr;
  *__t5333t=__t1687t__dat__pos;
  *__t5334t=__t1687t__dat__length;
  *__t5335t=__t1687t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1702t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5336t, char** __t5337t, uint64_t* __t5338t, uint64_t* __t5339t, char* __t5340t) {
  int __t1703t=0;
  char* __t1705t__unsafe_ptr=0;
  uint64_t __t1705t__dat__pos=0;
  uint64_t __t1705t__dat__length=0;
  char __t1705t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1707t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1095t();
  __t_errcode=copy_null_terminated__t1678t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1705t__unsafe_ptr,&__t1705t__dat__pos,&__t1705t__dat__length,&__t1705t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1705t__unsafe_ptr;
  str__dat__pos=__t1705t__dat__pos;
  str__dat__length=__t1705t__dat__length;
  str__dat__first=__t1705t__dat__first;
  add__t745t(str__unsafe_ptr,str__dat__pos,&__t1707t__);
  _ret=__t1707t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t743t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5336t=cstr;
  *__t5337t=str__unsafe_ptr;
  *__t5338t=str__dat__pos;
  *__t5339t=str__dat__length;
  *__t5340t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1712t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5341t) {
  goto __t_return;
  __t_return:
  *__t5341t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t4857t(char* unsafe_ptr) {
  int __t4859t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t4860t(const char* path, char** __t5342t) {
  int __t4862t=0;
  char* unsafe_ptr=0;
  char __t4864t__=0;
  char __t4865t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t652t(unsafe_ptr,&__t4864t__);
  not__t42t(__t4864t__,&__t4865t__);
  if(__t4865t__){
  __t_errcode=45;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t4857t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5342t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t4867t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t5343t) {
  const char* __t4868t__cstr=0;
  char* __t4868t__str__unsafe_ptr=0;
  uint64_t __t4868t__str__dat__pos=0;
  uint64_t __t4868t__str__dat__length=0;
  char __t4868t__str__dat__first=0;
  const char* __t4870t__=0;
  char* __t4871t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1702t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t4868t__cstr,&__t4868t__str__unsafe_ptr,&__t4868t__str__dat__pos,&__t4868t__str__dat__length,&__t4868t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1712t(__t4868t__cstr,__t4868t__str__unsafe_ptr,__t4868t__str__dat__pos,__t4868t__str__dat__length,__t4868t__str__dat__first,&__t4870t__);
  __t_errcode=open__t4860t(__t4870t__,&__t4871t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t4857t(__t4871t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5343t=__t4871t__unsafe_ptr;
  
  __t_skip_returns:free__t743t(&__t4868t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t4879t(char** __t5344t, const char** __t5345t) {
  char* f__unsafe_ptr=*__t5344t;
  char __t4880t__=0;
  char __t4881t__=0;
  char* de=0;
  char __t4882t__=0;
  char __t4883t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t652t(f__unsafe_ptr,&__t4880t__);
  not__t42t(__t4880t__,&__t4881t__);
  if(__t4881t__){
  __t_errcode=57;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t652t(de,&__t4882t__);
  not__t42t(__t4882t__,&__t4883t__);
  if(__t4883t__){
  __t_errcode=58;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5344t=f__unsafe_ptr;
  *__t5345t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t4884t(char** __t5346t, char** __t5347t, uint64_t* __t5348t, uint64_t* __t5349t, char* __t5350t) {
  char* f__unsafe_ptr=*__t5346t;
  const char* __t4885t__=0;
  char* __t4886t__unsafe_ptr=0;
  uint64_t __t4886t__dat__pos=0;
  uint64_t __t4886t__dat__length=0;
  char __t4886t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t4879t(&f__unsafe_ptr,&__t4885t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1604t(__t4885t__,&__t4886t__unsafe_ptr,&__t4886t__dat__pos,&__t4886t__dat__length,&__t4886t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5346t=f__unsafe_ptr;
  *__t5347t=__t4886t__unsafe_ptr;
  *__t5348t=__t4886t__dat__pos;
  *__t5349t=__t4886t__dat__length;
  *__t5350t=__t4886t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int get__t4950t(char** __t5351t, uint64_t __t_anon1, char** __t5352t, uint64_t* __t5353t, uint64_t* __t5354t, char* __t5355t) {
  char* data__unsafe_ptr=*__t5351t;
  char* __t4951t__unsafe_ptr=0;
  uint64_t __t4951t__dat__pos=0;
  uint64_t __t4951t__dat__length=0;
  char __t4951t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t4884t(&data__unsafe_ptr,&__t4951t__unsafe_ptr,&__t4951t__dat__pos,&__t4951t__dat__length,&__t4951t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5351t=data__unsafe_ptr;
  *__t5352t=__t4951t__unsafe_ptr;
  *__t5353t=__t4951t__dat__pos;
  *__t5354t=__t4951t__dat__length;
  *__t5355t=__t4951t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1616t(const char* s, char* __t5356t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t5356t=c;
}

static inline __attribute__((always_inline)) void neq__t1618t(char x, char y, char* __t5357t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5357t=z;
}

static inline __attribute__((always_inline)) void eq__t1719t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5358t) {
  uint64_t __t1720t__=0;
  uint64_t n=0;
  uint64_t __t1721t__=0;
  char __t1722t__=0;
  char __t1723t=0;
  char __t1724t__=0;
  char __t1725t=0;
  char z=0;
  len__t1614t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1720t__);
  n=__t1720t__;
  len__t1614t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1721t__);
  neq__t158t(n,__t1721t__,&__t1722t__);
  if(__t1722t__){
  __t1723t=0;
  goto __t_return;
  }
  neq__t1618t(x__dat__first,y__dat__first,&__t1724t__);
  if(__t1724t__){
  __t1725t=0;
  __t1723t=__t1725t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1723t=z;
  goto __t_return;
  __t_return:
  *__t5358t=__t1723t;
}

void eq__t1726t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t5359t) {
  char __t1727t__=0;
  char __t1728t__=0;
  char __t1729t=0;
  char* __t1730t__unsafe_ptr=0;
  uint64_t __t1730t__dat__pos=0;
  uint64_t __t1730t__dat__length=0;
  char __t1730t__dat__first=0;
  char __t1731t__=0;
  char__t1616t(y,&__t1727t__);
  neq__t1618t(x__dat__first,__t1727t__,&__t1728t__);
  if(__t1728t__){
  __t1729t=0;
  goto __t_return;
  }
  str__t1604t(y,&__t1730t__unsafe_ptr,&__t1730t__dat__pos,&__t1730t__dat__length,&__t1730t__dat__first);
  eq__t1719t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1730t__unsafe_ptr,__t1730t__dat__pos,__t1730t__dat__length,__t1730t__dat__first,&__t1731t__);
  __t1729t=__t1731t__;
  goto __t_return;
  __t_return:
  *__t5359t=__t1729t;
}

int unsafe_temp__t1688t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5360t, char** __t5361t, uint64_t* __t5362t, uint64_t* __t5363t, char* __t5364t) {
  int __t1689t=0;
  char* __t1690t__unsafe_ptr=0;
  uint64_t __t1690t__unsafe_size=0;
  uint32_t __t1690t__unsafe_offset=0;
  uint32_t __t1690t__unsafe_align=0;
  uint64_t __t1691t=0;
  uint64_t __t1692t__=0;
  uint64_t __t1693t__=0;
  char* __t1694t__unsafe_ptr=0;
  uint64_t __t1694t__unsafe_size=0;
  uint32_t __t1694t__unsafe_offset=0;
  uint32_t __t1694t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1696t=0;
  char __t1697t__=0;
  char first_character=0;
  uint64_t __t1698t=0;
  char* __t1699t__unsafe_ptr=0;
  uint64_t __t1699t__dat__pos=0;
  uint64_t __t1699t__dat__length=0;
  char __t1699t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1700t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1620t(&__t1690t__unsafe_ptr,&__t1690t__unsafe_size,&__t1690t__unsafe_offset,&__t1690t__unsafe_align);
  __t1691t=1;
  add__t188t(__t1691t,other__dat__length,&__t1692t__);
  add__t188t(__t1692t__,prefix__dat__length,&__t1693t__);
  __t_errcode=alloc__t866t(&__t1690t__unsafe_ptr,&__t1690t__unsafe_size,&__t1690t__unsafe_offset,&__t1690t__unsafe_align,__t1693t__,&__t1694t__unsafe_ptr,&__t1694t__unsafe_size,&__t1694t__unsafe_offset,&__t1694t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1694t__unsafe_ptr;
  buf__unsafe_size=__t1694t__unsafe_size;
  buf__unsafe_offset=__t1694t__unsafe_offset;
  buf__unsafe_align=__t1694t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1696t=0;
  eq__t134t(prefix__dat__length,__t1696t,&__t1697t__);
  if(__t1697t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1698t=0;
  __t_errcode=str__t1548t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1698t,other__dat__length,first_character,&__t1699t__unsafe_ptr,&__t1699t__dat__pos,&__t1699t__dat__length,&__t1699t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1699t__unsafe_ptr;
  str__dat__pos=__t1699t__dat__pos;
  str__dat__length=__t1699t__dat__length;
  str__dat__first=__t1699t__dat__first;
  add__t745t(str__unsafe_ptr,str__dat__pos,&__t1700t__);
  _ret=__t1700t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t743t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5360t=cstr;
  *__t5361t=str__unsafe_ptr;
  *__t5362t=str__dat__pos;
  *__t5363t=str__dat__length;
  *__t5364t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1711t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5365t) {
  goto __t_return;
  __t_return:
  *__t5365t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t4784t(const char* path, char* __t5366t) {
  int __t4786t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t5366t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t4794t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t5367t) {
  int __t4796t=0;
  const char* __t4797t__cstr=0;
  char* __t4797t__str__unsafe_ptr=0;
  uint64_t __t4797t__str__dat__pos=0;
  uint64_t __t4797t__str__dat__length=0;
  char __t4797t__str__dat__first=0;
  const char* __t4799t__=0;
  char __t4800t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1688t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t4797t__cstr,&__t4797t__str__unsafe_ptr,&__t4797t__str__dat__pos,&__t4797t__str__dat__length,&__t4797t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1711t(__t4797t__cstr,__t4797t__str__unsafe_ptr,__t4797t__str__dat__pos,__t4797t__str__dat__length,__t4797t__str__dat__first,&__t4799t__);
  is_dir__t4784t(__t4799t__,&__t4800t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5367t=__t4800t__;
  
  __t_skip_returns:free__t743t(&__t4797t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t409t(uint64_t x, uint64_t y, uint64_t* __t5368t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5368t=z;
}

static inline __attribute__((always_inline)) void reuse__t5139t(char** __t5369t, uint64_t* __t5370t, uint32_t* __t5371t, uint32_t* __t5372t, uint64_t* __t5373t, uint64_t* __t5374t) {
  char* arn__buf__unsafe_ptr=*__t5369t;
  uint64_t arn__buf__unsafe_size=*__t5370t;
  uint32_t arn__buf__unsafe_offset=*__t5371t;
  uint32_t arn__buf__unsafe_align=*__t5372t;
  uint64_t arn__pos=*__t5373t;
  uint64_t __t5140t=0;
  uint64_t __t5141t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5142t=0;
  uint64_t __t5144t__=0;
  __t5140t=0;
  add__t188t(__t5140t,arn__pos,&__t5141t__);
  tracked_position=__t5141t__;
  goto __t_return;
  __t_return:
  *__t5369t=arn__buf__unsafe_ptr;
  *__t5370t=arn__buf__unsafe_size;
  *__t5371t=arn__buf__unsafe_offset;
  *__t5372t=arn__buf__unsafe_align;
  *__t5373t=arn__pos;
  *__t5374t=tracked_position;
}

static inline __attribute__((always_inline)) void str__t1581t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5375t, uint64_t* __t5376t, uint64_t* __t5377t, char* __t5378t) {
  goto __t_return;
  __t_return:
  *__t5375t=other__unsafe_ptr;
  *__t5376t=other__dat__pos;
  *__t5377t=other__dat__length;
  *__t5378t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5379t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5379t=z;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t5380t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5380t=z;
}

static inline __attribute__((always_inline)) void status__t1149t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5381t, uint64_t* __t5382t, uint32_t* __t5383t, uint32_t* __t5384t, uint64_t* __t5385t) {
  char* __t1150t__unsafe_ptr=0;
  uint64_t __t1150t__unsafe_size=0;
  uint32_t __t1150t__unsafe_offset=0;
  uint32_t __t1150t__unsafe_align=0;
  uint64_t __t1151t=0;
  __t1150t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1150t__unsafe_size=self__buf__unsafe_size;
  __t1150t__unsafe_offset=self__buf__unsafe_offset;
  __t1150t__unsafe_align=self__buf__unsafe_align;
  __t1151t=self__pos;
  goto __t_return;
  __t_return:
  *__t5381t=__t1150t__unsafe_ptr;
  *__t5382t=__t1150t__unsafe_size;
  *__t5383t=__t1150t__unsafe_offset;
  *__t5384t=__t1150t__unsafe_align;
  *__t5385t=__t1151t;
}

static inline __attribute__((always_inline)) int copy__t1648t(char** __t5386t, uint64_t* __t5387t, uint32_t* __t5388t, uint32_t* __t5389t, uint64_t* __t5390t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5391t, uint64_t* __t5392t, uint64_t* __t5393t, char* __t5394t) {
  char* CHARS__buf__unsafe_ptr=*__t5386t;
  uint64_t CHARS__buf__unsafe_size=*__t5387t;
  uint32_t CHARS__buf__unsafe_offset=*__t5388t;
  uint32_t CHARS__buf__unsafe_align=*__t5389t;
  uint64_t CHARS__pos=*__t5390t;
  char* __t1649t__unsafe_ptr=0;
  uint64_t __t1649t__dat__pos=0;
  uint64_t __t1649t__dat__length=0;
  char __t1649t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1650t__buf__unsafe_ptr=0;
  uint64_t __t1650t__buf__unsafe_size=0;
  uint32_t __t1650t__buf__unsafe_offset=0;
  uint32_t __t1650t__buf__unsafe_align=0;
  uint64_t __t1650t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1651t=0;
  char* __t1652t__unsafe_ptr=0;
  uint64_t __t1652t__dat__pos=0;
  uint64_t __t1652t__dat__length=0;
  char __t1652t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1581t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1649t__unsafe_ptr,&__t1649t__dat__pos,&__t1649t__dat__length,&__t1649t__dat__first);
  other__unsafe_ptr=__t1649t__unsafe_ptr;
  other__dat__pos=__t1649t__dat__pos;
  other__dat__length=__t1649t__dat__length;
  other__dat__first=__t1649t__dat__first;
  __t_errcode=alloc__t1219t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1650t__buf__unsafe_ptr,&__t1650t__buf__unsafe_size,&__t1650t__buf__unsafe_offset,&__t1650t__buf__unsafe_align,&__t1650t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1650t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1650t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1650t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1650t__buf__unsafe_align;
  surface__pos=__t1650t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1548t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1652t__unsafe_ptr,&__t1652t__dat__pos,&__t1652t__dat__length,&__t1652t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5386t=CHARS__buf__unsafe_ptr;
  *__t5387t=CHARS__buf__unsafe_size;
  *__t5388t=CHARS__buf__unsafe_offset;
  *__t5389t=CHARS__buf__unsafe_align;
  *__t5390t=CHARS__pos;
  *__t5391t=__t1652t__unsafe_ptr;
  *__t5392t=__t1652t__dat__pos;
  *__t5393t=__t1652t__dat__length;
  *__t5394t=__t1652t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1146t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5395t, uint64_t* __t5396t, uint32_t* __t5397t, uint32_t* __t5398t, uint64_t* __t5399t) {
  char* __t1147t__unsafe_ptr=0;
  uint64_t __t1147t__unsafe_size=0;
  uint32_t __t1147t__unsafe_offset=0;
  uint32_t __t1147t__unsafe_align=0;
  uint64_t __t1148t=0;
  __t1147t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1147t__unsafe_size=self__buf__unsafe_size;
  __t1147t__unsafe_offset=self__buf__unsafe_offset;
  __t1147t__unsafe_align=self__buf__unsafe_align;
  __t1148t=self__pos;
  goto __t_return;
  __t_return:
  *__t5395t=__t1147t__unsafe_ptr;
  *__t5396t=__t1147t__unsafe_size;
  *__t5397t=__t1147t__unsafe_offset;
  *__t5398t=__t1147t__unsafe_align;
  *__t5399t=__t1148t;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t5400t) {
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
  *__t5400t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1600t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5401t, uint64_t* __t5402t, uint64_t* __t5403t, char* __t5404t) {
  uint64_t __t1602t__=0;
  char* __t1603t__unsafe_ptr=0;
  uint64_t __t1603t__dat__pos=0;
  uint64_t __t1603t__dat__length=0;
  char __t1603t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t401t(endpos,pos,&__t1602t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1582t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1602t__,&__t1603t__unsafe_ptr,&__t1603t__dat__pos,&__t1603t__dat__length,&__t1603t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5401t=__t1603t__unsafe_ptr;
  *__t5402t=__t1603t__dat__pos;
  *__t5403t=__t1603t__dat__length;
  *__t5404t=__t1603t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2800t(char** __t5405t, uint64_t* __t5406t, uint32_t* __t5407t, uint32_t* __t5408t, uint64_t* __t5409t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5410t, uint64_t* __t5411t, uint64_t* __t5412t, char* __t5413t) {
  char* CHARS__buf__unsafe_ptr=*__t5405t;
  uint64_t CHARS__buf__unsafe_size=*__t5406t;
  uint32_t CHARS__buf__unsafe_offset=*__t5407t;
  uint32_t CHARS__buf__unsafe_align=*__t5408t;
  uint64_t CHARS__pos=*__t5409t;
  char* __t2801t__unsafe_ptr=0;
  uint64_t __t2801t__dat__pos=0;
  uint64_t __t2801t__dat__length=0;
  char __t2801t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2802t__unsafe_ptr=0;
  uint64_t __t2802t__dat__pos=0;
  uint64_t __t2802t__dat__length=0;
  char __t2802t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2803t__=0;
  uint64_t __t2804t__=0;
  char __t2805t__=0;
  char __t2806t=0;
  uint64_t __t2807t__=0;
  char __t2808t__=0;
  char __t2809t=0;
  uint64_t __t2810t__=0;
  char* __t2811t__buf__unsafe_ptr=0;
  uint64_t __t2811t__buf__unsafe_size=0;
  uint32_t __t2811t__buf__unsafe_offset=0;
  uint32_t __t2811t__buf__unsafe_align=0;
  uint64_t __t2811t__pos=0;
  char* __t2812t____t1150t__unsafe_ptr=0;
  uint64_t __t2812t____t1150t__unsafe_size=0;
  uint32_t __t2812t____t1150t__unsafe_offset=0;
  uint32_t __t2812t____t1150t__unsafe_align=0;
  uint64_t __t2812t____t1151t=0;
  char* __t2813t__buf__unsafe_ptr=0;
  uint64_t __t2813t__buf__unsafe_size=0;
  uint32_t __t2813t__buf__unsafe_offset=0;
  uint32_t __t2813t__buf__unsafe_align=0;
  uint64_t __t2813t__pos=0;
  char* __t2814t__buf__unsafe_ptr=0;
  uint64_t __t2814t__buf__unsafe_size=0;
  uint32_t __t2814t__buf__unsafe_offset=0;
  uint32_t __t2814t__buf__unsafe_align=0;
  uint64_t __t2814t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2815t__unsafe_ptr=0;
  uint64_t __t2815t__dat__pos=0;
  uint64_t __t2815t__dat__length=0;
  char __t2815t__dat__first=0;
  char* __t2816t____t1147t__unsafe_ptr=0;
  uint64_t __t2816t____t1147t__unsafe_size=0;
  uint32_t __t2816t____t1147t__unsafe_offset=0;
  uint32_t __t2816t____t1147t__unsafe_align=0;
  uint64_t __t2816t____t1148t=0;
  uint64_t __t2818t=0;
  uint64_t __t2819t__=0;
  char* __t2820t__unsafe_ptr=0;
  uint64_t __t2820t__dat__pos=0;
  uint64_t __t2820t__dat__length=0;
  char __t2820t__dat__first=0;
  char __t2821t__=0;
  char __t2822t__=0;
  char __t2823t=0;
  uint64_t __t2824t__=0;
  char __t2825t__=0;
  char __t2826t=0;
  uint64_t __t2827t__=0;
  char* __t2829t__unsafe_ptr=0;
  uint64_t __t2829t__dat__pos=0;
  uint64_t __t2829t__dat__length=0;
  char __t2829t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2830t__=0;
  uint64_t __t2831t__=0;
  uint64_t __t2832t__=0;
  char* __t2833t__buf__unsafe_ptr=0;
  uint64_t __t2833t__buf__unsafe_size=0;
  uint32_t __t2833t__buf__unsafe_offset=0;
  uint32_t __t2833t__buf__unsafe_align=0;
  uint64_t __t2833t__pos=0;
  char* __t2834t____t1150t__unsafe_ptr=0;
  uint64_t __t2834t____t1150t__unsafe_size=0;
  uint32_t __t2834t____t1150t__unsafe_offset=0;
  uint32_t __t2834t____t1150t__unsafe_align=0;
  uint64_t __t2834t____t1151t=0;
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
  char* __t2837t__unsafe_ptr=0;
  uint64_t __t2837t__dat__pos=0;
  uint64_t __t2837t__dat__length=0;
  char __t2837t__dat__first=0;
  char* __t2838t__unsafe_ptr=0;
  uint64_t __t2838t__dat__pos=0;
  uint64_t __t2838t__dat__length=0;
  char __t2838t__dat__first=0;
  char __t2839t=0;
  char* __t2840t____t1147t__unsafe_ptr=0;
  uint64_t __t2840t____t1147t__unsafe_size=0;
  uint32_t __t2840t____t1147t__unsafe_offset=0;
  uint32_t __t2840t____t1147t__unsafe_align=0;
  uint64_t __t2840t____t1148t=0;
  uint64_t __t2842t=0;
  uint64_t __t2843t__=0;
  char* __t2844t__unsafe_ptr=0;
  uint64_t __t2844t__dat__pos=0;
  uint64_t __t2844t__dat__length=0;
  char __t2844t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1581t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2801t__unsafe_ptr,&__t2801t__dat__pos,&__t2801t__dat__length,&__t2801t__dat__first);
  s1__unsafe_ptr=__t2801t__unsafe_ptr;
  s1__dat__pos=__t2801t__dat__pos;
  s1__dat__length=__t2801t__dat__length;
  s1__dat__first=__t2801t__dat__first;
  str__t1581t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2802t__unsafe_ptr,&__t2802t__dat__pos,&__t2802t__dat__length,&__t2802t__dat__first);
  s2__unsafe_ptr=__t2802t__unsafe_ptr;
  s2__dat__pos=__t2802t__dat__pos;
  s2__dat__length=__t2802t__dat__length;
  s2__dat__first=__t2802t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2803t__);
  if(__t2803t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2804t__);
  eq__t134t(CHARS__pos,__t2804t__,&__t2805t__);
  __t2806t=__t2805t__;
  }
  if(__t2806t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2807t__);
  lt__t301t(__t2807t__,CHARS__buf__unsafe_size,&__t2808t__);
  __t2809t=__t2808t__;
  }
  if(__t2809t){
  len__t1614t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2810t__);
  __t_errcode=alloc__t1219t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2810t__,&__t2811t__buf__unsafe_ptr,&__t2811t__buf__unsafe_size,&__t2811t__buf__unsafe_offset,&__t2811t__buf__unsafe_align,&__t2811t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1149t(__t2811t__buf__unsafe_ptr,__t2811t__buf__unsafe_size,__t2811t__buf__unsafe_offset,__t2811t__buf__unsafe_align,__t2811t__pos,&__t2812t____t1150t__unsafe_ptr,&__t2812t____t1150t__unsafe_size,&__t2812t____t1150t__unsafe_offset,&__t2812t____t1150t__unsafe_align,&__t2812t____t1151t);
  arena__t1137t(&__t2812t____t1150t__unsafe_ptr,&__t2812t____t1150t__unsafe_size,&__t2812t____t1150t__unsafe_offset,&__t2812t____t1150t__unsafe_align,__t2812t____t1151t,&__t2813t__buf__unsafe_ptr,&__t2813t__buf__unsafe_size,&__t2813t__buf__unsafe_offset,&__t2813t__buf__unsafe_align,&__t2813t__pos);
  __t2814t__buf__unsafe_ptr=__t2813t__buf__unsafe_ptr;
  __t2814t__buf__unsafe_size=__t2813t__buf__unsafe_size;
  __t2814t__buf__unsafe_offset=__t2813t__buf__unsafe_offset;
  __t2814t__buf__unsafe_align=__t2813t__buf__unsafe_align;
  __t2814t__pos=__t2813t__pos;
  surface__buf__unsafe_ptr=__t2814t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2814t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2814t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2814t__buf__unsafe_align;
  surface__pos=__t2814t__pos;
  __t_errcode=copy__t1648t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2815t__unsafe_ptr,&__t2815t__dat__pos,&__t2815t__dat__length,&__t2815t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1146t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2816t____t1147t__unsafe_ptr,&__t2816t____t1147t__unsafe_size,&__t2816t____t1147t__unsafe_offset,&__t2816t____t1147t__unsafe_align,&__t2816t____t1148t);
  __t2818t=0;
  add__t188t(s1__dat__pos,__t2818t,&__t2819t__);
  __t_errcode=str__t1600t(__t2816t____t1147t__unsafe_ptr,__t2816t____t1147t__unsafe_size,__t2816t____t1147t__unsafe_offset,__t2816t____t1147t__unsafe_align,__t2816t____t1148t,__t2819t__,&__t2820t__unsafe_ptr,&__t2820t__dat__pos,&__t2820t__dat__length,&__t2820t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2821t__);
  if(__t2821t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2822t__);
  __t2823t=__t2822t__;
  }
  if(__t2823t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2824t__);
  eq__t134t(s2__dat__pos,__t2824t__,&__t2825t__);
  __t2826t=__t2825t__;
  }
  if(__t2826t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2827t__);
  __t_errcode=str__t1600t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2827t__,s1__dat__pos,&__t2829t__unsafe_ptr,&__t2829t__dat__pos,&__t2829t__dat__length,&__t2829t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2820t__unsafe_ptr=__t2829t__unsafe_ptr;
  __t2820t__dat__pos=__t2829t__dat__pos;
  __t2820t__dat__length=__t2829t__dat__length;
  __t2820t__dat__first=__t2829t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1614t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2830t__);
  len__t1614t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2831t__);
  add__t188t(__t2830t__,__t2831t__,&__t2832t__);
  __t_errcode=alloc__t1219t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2832t__,&__t2833t__buf__unsafe_ptr,&__t2833t__buf__unsafe_size,&__t2833t__buf__unsafe_offset,&__t2833t__buf__unsafe_align,&__t2833t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1149t(__t2833t__buf__unsafe_ptr,__t2833t__buf__unsafe_size,__t2833t__buf__unsafe_offset,__t2833t__buf__unsafe_align,__t2833t__pos,&__t2834t____t1150t__unsafe_ptr,&__t2834t____t1150t__unsafe_size,&__t2834t____t1150t__unsafe_offset,&__t2834t____t1150t__unsafe_align,&__t2834t____t1151t);
  arena__t1137t(&__t2834t____t1150t__unsafe_ptr,&__t2834t____t1150t__unsafe_size,&__t2834t____t1150t__unsafe_offset,&__t2834t____t1150t__unsafe_align,__t2834t____t1151t,&__t2835t__buf__unsafe_ptr,&__t2835t__buf__unsafe_size,&__t2835t__buf__unsafe_offset,&__t2835t__buf__unsafe_align,&__t2835t__pos);
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
  __t_errcode=copy__t1648t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2837t__unsafe_ptr,&__t2837t__dat__pos,&__t2837t__dat__length,&__t2837t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1648t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2838t__unsafe_ptr,&__t2838t__dat__pos,&__t2838t__dat__length,&__t2838t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1146t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2840t____t1147t__unsafe_ptr,&__t2840t____t1147t__unsafe_size,&__t2840t____t1147t__unsafe_offset,&__t2840t____t1147t__unsafe_align,&__t2840t____t1148t);
  __t2842t=0;
  add__t188t(prev_pos,__t2842t,&__t2843t__);
  __t_complain=str__t1600t(__t2840t____t1147t__unsafe_ptr,__t2840t____t1147t__unsafe_size,__t2840t____t1147t__unsafe_offset,__t2840t____t1147t__unsafe_align,__t2840t____t1148t,__t2843t__,&__t2844t__unsafe_ptr,&__t2844t__dat__pos,&__t2844t__dat__length,&__t2844t__dat__first);
  __t2839t=__t_complain;
  if(__t_complain){
  goto __t2839t__label;
  }
  ret__unsafe_ptr=__t2844t__unsafe_ptr;
  ret__dat__pos=__t2844t__dat__pos;
  ret__dat__length=__t2844t__dat__length;
  ret__dat__first=__t2844t__dat__first;
  __t2839t__label:__t2839t=__t2839t==0;
  __t2820t__unsafe_ptr=ret__unsafe_ptr;
  __t2820t__dat__pos=ret__dat__pos;
  __t2820t__dat__length=ret__dat__length;
  __t2820t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5405t=CHARS__buf__unsafe_ptr;
  *__t5406t=CHARS__buf__unsafe_size;
  *__t5407t=CHARS__buf__unsafe_offset;
  *__t5408t=CHARS__buf__unsafe_align;
  *__t5409t=CHARS__pos;
  *__t5410t=__t2820t__unsafe_ptr;
  *__t5411t=__t2820t__dat__pos;
  *__t5412t=__t2820t__dat__length;
  *__t5413t=__t2820t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2845t(char** __t5414t, uint64_t* __t5415t, uint32_t* __t5416t, uint32_t* __t5417t, uint64_t* __t5418t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5419t, uint64_t* __t5420t, uint64_t* __t5421t, char* __t5422t) {
  char* CHARS__buf__unsafe_ptr=*__t5414t;
  uint64_t CHARS__buf__unsafe_size=*__t5415t;
  uint32_t CHARS__buf__unsafe_offset=*__t5416t;
  uint32_t CHARS__buf__unsafe_align=*__t5417t;
  uint64_t CHARS__pos=*__t5418t;
  char* __t2846t__unsafe_ptr=0;
  uint64_t __t2846t__dat__pos=0;
  uint64_t __t2846t__dat__length=0;
  char __t2846t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2847t__unsafe_ptr=0;
  uint64_t __t2847t__dat__pos=0;
  uint64_t __t2847t__dat__length=0;
  char __t2847t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2848t__=0;
  uint64_t __t2849t__=0;
  char __t2850t__=0;
  char __t2851t=0;
  uint64_t __t2852t__=0;
  char __t2853t__=0;
  char __t2854t=0;
  uint64_t __t2855t__=0;
  char* __t2856t__buf__unsafe_ptr=0;
  uint64_t __t2856t__buf__unsafe_size=0;
  uint32_t __t2856t__buf__unsafe_offset=0;
  uint32_t __t2856t__buf__unsafe_align=0;
  uint64_t __t2856t__pos=0;
  char* __t2857t____t1150t__unsafe_ptr=0;
  uint64_t __t2857t____t1150t__unsafe_size=0;
  uint32_t __t2857t____t1150t__unsafe_offset=0;
  uint32_t __t2857t____t1150t__unsafe_align=0;
  uint64_t __t2857t____t1151t=0;
  char* __t2858t__buf__unsafe_ptr=0;
  uint64_t __t2858t__buf__unsafe_size=0;
  uint32_t __t2858t__buf__unsafe_offset=0;
  uint32_t __t2858t__buf__unsafe_align=0;
  uint64_t __t2858t__pos=0;
  char* __t2859t__buf__unsafe_ptr=0;
  uint64_t __t2859t__buf__unsafe_size=0;
  uint32_t __t2859t__buf__unsafe_offset=0;
  uint32_t __t2859t__buf__unsafe_align=0;
  uint64_t __t2859t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2860t__unsafe_ptr=0;
  uint64_t __t2860t__dat__pos=0;
  uint64_t __t2860t__dat__length=0;
  char __t2860t__dat__first=0;
  char* __t2861t____t1147t__unsafe_ptr=0;
  uint64_t __t2861t____t1147t__unsafe_size=0;
  uint32_t __t2861t____t1147t__unsafe_offset=0;
  uint32_t __t2861t____t1147t__unsafe_align=0;
  uint64_t __t2861t____t1148t=0;
  uint64_t __t2863t=0;
  uint64_t __t2864t__=0;
  char* __t2865t__unsafe_ptr=0;
  uint64_t __t2865t__dat__pos=0;
  uint64_t __t2865t__dat__length=0;
  char __t2865t__dat__first=0;
  char __t2866t__=0;
  char __t2867t__=0;
  char __t2868t=0;
  uint64_t __t2869t__=0;
  char __t2870t__=0;
  char __t2871t=0;
  uint64_t __t2872t__=0;
  char* __t2874t__unsafe_ptr=0;
  uint64_t __t2874t__dat__pos=0;
  uint64_t __t2874t__dat__length=0;
  char __t2874t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2875t__=0;
  uint64_t __t2876t__=0;
  uint64_t __t2877t__=0;
  char* __t2878t__buf__unsafe_ptr=0;
  uint64_t __t2878t__buf__unsafe_size=0;
  uint32_t __t2878t__buf__unsafe_offset=0;
  uint32_t __t2878t__buf__unsafe_align=0;
  uint64_t __t2878t__pos=0;
  char* __t2879t____t1150t__unsafe_ptr=0;
  uint64_t __t2879t____t1150t__unsafe_size=0;
  uint32_t __t2879t____t1150t__unsafe_offset=0;
  uint32_t __t2879t____t1150t__unsafe_align=0;
  uint64_t __t2879t____t1151t=0;
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
  char* __t2882t__unsafe_ptr=0;
  uint64_t __t2882t__dat__pos=0;
  uint64_t __t2882t__dat__length=0;
  char __t2882t__dat__first=0;
  char* __t2883t__unsafe_ptr=0;
  uint64_t __t2883t__dat__pos=0;
  uint64_t __t2883t__dat__length=0;
  char __t2883t__dat__first=0;
  char __t2884t=0;
  char* __t2885t____t1147t__unsafe_ptr=0;
  uint64_t __t2885t____t1147t__unsafe_size=0;
  uint32_t __t2885t____t1147t__unsafe_offset=0;
  uint32_t __t2885t____t1147t__unsafe_align=0;
  uint64_t __t2885t____t1148t=0;
  uint64_t __t2887t=0;
  uint64_t __t2888t__=0;
  char* __t2889t__unsafe_ptr=0;
  uint64_t __t2889t__dat__pos=0;
  uint64_t __t2889t__dat__length=0;
  char __t2889t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1581t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2846t__unsafe_ptr,&__t2846t__dat__pos,&__t2846t__dat__length,&__t2846t__dat__first);
  s1__unsafe_ptr=__t2846t__unsafe_ptr;
  s1__dat__pos=__t2846t__dat__pos;
  s1__dat__length=__t2846t__dat__length;
  s1__dat__first=__t2846t__dat__first;
  str__t1604t(_s2,&__t2847t__unsafe_ptr,&__t2847t__dat__pos,&__t2847t__dat__length,&__t2847t__dat__first);
  s2__unsafe_ptr=__t2847t__unsafe_ptr;
  s2__dat__pos=__t2847t__dat__pos;
  s2__dat__length=__t2847t__dat__length;
  s2__dat__first=__t2847t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2848t__);
  if(__t2848t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2849t__);
  eq__t134t(CHARS__pos,__t2849t__,&__t2850t__);
  __t2851t=__t2850t__;
  }
  if(__t2851t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2852t__);
  lt__t301t(__t2852t__,CHARS__buf__unsafe_size,&__t2853t__);
  __t2854t=__t2853t__;
  }
  if(__t2854t){
  len__t1614t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2855t__);
  __t_errcode=alloc__t1219t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2855t__,&__t2856t__buf__unsafe_ptr,&__t2856t__buf__unsafe_size,&__t2856t__buf__unsafe_offset,&__t2856t__buf__unsafe_align,&__t2856t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1149t(__t2856t__buf__unsafe_ptr,__t2856t__buf__unsafe_size,__t2856t__buf__unsafe_offset,__t2856t__buf__unsafe_align,__t2856t__pos,&__t2857t____t1150t__unsafe_ptr,&__t2857t____t1150t__unsafe_size,&__t2857t____t1150t__unsafe_offset,&__t2857t____t1150t__unsafe_align,&__t2857t____t1151t);
  arena__t1137t(&__t2857t____t1150t__unsafe_ptr,&__t2857t____t1150t__unsafe_size,&__t2857t____t1150t__unsafe_offset,&__t2857t____t1150t__unsafe_align,__t2857t____t1151t,&__t2858t__buf__unsafe_ptr,&__t2858t__buf__unsafe_size,&__t2858t__buf__unsafe_offset,&__t2858t__buf__unsafe_align,&__t2858t__pos);
  __t2859t__buf__unsafe_ptr=__t2858t__buf__unsafe_ptr;
  __t2859t__buf__unsafe_size=__t2858t__buf__unsafe_size;
  __t2859t__buf__unsafe_offset=__t2858t__buf__unsafe_offset;
  __t2859t__buf__unsafe_align=__t2858t__buf__unsafe_align;
  __t2859t__pos=__t2858t__pos;
  surface__buf__unsafe_ptr=__t2859t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2859t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2859t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2859t__buf__unsafe_align;
  surface__pos=__t2859t__pos;
  __t_errcode=copy__t1648t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2860t__unsafe_ptr,&__t2860t__dat__pos,&__t2860t__dat__length,&__t2860t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1146t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2861t____t1147t__unsafe_ptr,&__t2861t____t1147t__unsafe_size,&__t2861t____t1147t__unsafe_offset,&__t2861t____t1147t__unsafe_align,&__t2861t____t1148t);
  __t2863t=0;
  add__t188t(s1__dat__pos,__t2863t,&__t2864t__);
  __t_errcode=str__t1600t(__t2861t____t1147t__unsafe_ptr,__t2861t____t1147t__unsafe_size,__t2861t____t1147t__unsafe_offset,__t2861t____t1147t__unsafe_align,__t2861t____t1148t,__t2864t__,&__t2865t__unsafe_ptr,&__t2865t__dat__pos,&__t2865t__dat__length,&__t2865t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2866t__);
  if(__t2866t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2867t__);
  __t2868t=__t2867t__;
  }
  if(__t2868t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2869t__);
  eq__t134t(s2__dat__pos,__t2869t__,&__t2870t__);
  __t2871t=__t2870t__;
  }
  if(__t2871t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2872t__);
  __t_errcode=str__t1600t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2872t__,s1__dat__pos,&__t2874t__unsafe_ptr,&__t2874t__dat__pos,&__t2874t__dat__length,&__t2874t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2865t__unsafe_ptr=__t2874t__unsafe_ptr;
  __t2865t__dat__pos=__t2874t__dat__pos;
  __t2865t__dat__length=__t2874t__dat__length;
  __t2865t__dat__first=__t2874t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1614t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2875t__);
  len__t1614t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2876t__);
  add__t188t(__t2875t__,__t2876t__,&__t2877t__);
  __t_errcode=alloc__t1219t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2877t__,&__t2878t__buf__unsafe_ptr,&__t2878t__buf__unsafe_size,&__t2878t__buf__unsafe_offset,&__t2878t__buf__unsafe_align,&__t2878t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1149t(__t2878t__buf__unsafe_ptr,__t2878t__buf__unsafe_size,__t2878t__buf__unsafe_offset,__t2878t__buf__unsafe_align,__t2878t__pos,&__t2879t____t1150t__unsafe_ptr,&__t2879t____t1150t__unsafe_size,&__t2879t____t1150t__unsafe_offset,&__t2879t____t1150t__unsafe_align,&__t2879t____t1151t);
  arena__t1137t(&__t2879t____t1150t__unsafe_ptr,&__t2879t____t1150t__unsafe_size,&__t2879t____t1150t__unsafe_offset,&__t2879t____t1150t__unsafe_align,__t2879t____t1151t,&__t2880t__buf__unsafe_ptr,&__t2880t__buf__unsafe_size,&__t2880t__buf__unsafe_offset,&__t2880t__buf__unsafe_align,&__t2880t__pos);
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
  __t_errcode=copy__t1648t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2882t__unsafe_ptr,&__t2882t__dat__pos,&__t2882t__dat__length,&__t2882t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1648t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2883t__unsafe_ptr,&__t2883t__dat__pos,&__t2883t__dat__length,&__t2883t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1146t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2885t____t1147t__unsafe_ptr,&__t2885t____t1147t__unsafe_size,&__t2885t____t1147t__unsafe_offset,&__t2885t____t1147t__unsafe_align,&__t2885t____t1148t);
  __t2887t=0;
  add__t188t(prev_pos,__t2887t,&__t2888t__);
  __t_complain=str__t1600t(__t2885t____t1147t__unsafe_ptr,__t2885t____t1147t__unsafe_size,__t2885t____t1147t__unsafe_offset,__t2885t____t1147t__unsafe_align,__t2885t____t1148t,__t2888t__,&__t2889t__unsafe_ptr,&__t2889t__dat__pos,&__t2889t__dat__length,&__t2889t__dat__first);
  __t2884t=__t_complain;
  if(__t_complain){
  goto __t2884t__label;
  }
  ret__unsafe_ptr=__t2889t__unsafe_ptr;
  ret__dat__pos=__t2889t__dat__pos;
  ret__dat__length=__t2889t__dat__length;
  ret__dat__first=__t2889t__dat__first;
  __t2884t__label:__t2884t=__t2884t==0;
  __t2865t__unsafe_ptr=ret__unsafe_ptr;
  __t2865t__dat__pos=ret__dat__pos;
  __t2865t__dat__length=ret__dat__length;
  __t2865t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5414t=CHARS__buf__unsafe_ptr;
  *__t5415t=CHARS__buf__unsafe_size;
  *__t5416t=CHARS__buf__unsafe_offset;
  *__t5417t=CHARS__buf__unsafe_align;
  *__t5418t=CHARS__pos;
  *__t5419t=__t2865t__unsafe_ptr;
  *__t5420t=__t2865t__dat__pos;
  *__t5421t=__t2865t__dat__length;
  *__t5422t=__t2865t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1789t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t5423t) {
  int __t1790t=0;
  char __t1791t__=0;
  uint64_t __t1792t__=0;
  char* __t1793t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,s__dat__length,&__t1791t__);
  if(__t1791t__){
  __t_errcode=18;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t1792t__);
  add__t745t(s__unsafe_ptr,__t1792t__,&__t1793t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5423t=__t1793t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1815t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t5424t, uint64_t* __t5425t, uint64_t* __t5426t, char* __t5427t) {
  char* __t1816t__unsafe_ptr=0;
  uint64_t __t1816t__dat__pos=0;
  uint64_t __t1816t__dat__length=0;
  char __t1816t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1817t__=0;
  char* __t1818t__unsafe_ptr=0;
  uint64_t __t1818t__dat__pos=0;
  uint64_t __t1818t__dat__length=0;
  char __t1818t__dat__first=0;
  char __t1819t__=0;
  char __t1820t__=0;
  char __t1821t=0;
  char __t1822t__=0;
  uint64_t __t1824t__=0;
  uint64_t new_length=0;
  uint64_t __t1825t=0;
  char __t1826t__=0;
  char new_first=0;
  char* __t1828t__=0;
  char __t1829t__value=0;
  uint64_t __t1830t__=0;
  char* __t1831t__unsafe_ptr=0;
  uint64_t __t1831t__dat__pos=0;
  uint64_t __t1831t__dat__length=0;
  char __t1831t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1581t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1816t__unsafe_ptr,&__t1816t__dat__pos,&__t1816t__dat__length,&__t1816t__dat__first);
  s__unsafe_ptr=__t1816t__unsafe_ptr;
  s__dat__pos=__t1816t__dat__pos;
  s__dat__length=__t1816t__dat__length;
  s__dat__first=__t1816t__dat__first;
  eq__t134t(from,to,&__t1817t__);
  if(__t1817t__){
  str__t1604t(__t431t,&__t1818t__unsafe_ptr,&__t1818t__dat__pos,&__t1818t__dat__length,&__t1818t__dat__first);
  goto __t_return;
  }
  gt__t325t(from,to,&__t1819t__);
  if(!__t1819t__){
  gt__t325t(to,s__dat__length,&__t1820t__);
  __t1821t=__t1820t__;
  }
  else{
  __t1821t=0;
  not__t42t(__t1821t,&__t1822t__);
  __t1821t=__t1822t__;
  }
  if(__t1821t){
  __t_errcode=25;
  goto __t_failure;
  }
  sub__t409t(to,from,&__t1824t__);
  new_length=__t1824t__;
  __t1825t=0;
  neq__t158t(from,__t1825t,&__t1826t__);
  if(__t1826t__){
  __t_errcode=get__t1789t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1828t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1828t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1829t__value,__t1828t__,1);
  new_first=__t1829t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1830t__);
  str__t1544t(s__unsafe_ptr,__t1830t__,new_length,new_first,&__t1831t__unsafe_ptr,&__t1831t__dat__pos,&__t1831t__dat__length,&__t1831t__dat__first);
  __t1818t__unsafe_ptr=__t1831t__unsafe_ptr;
  __t1818t__dat__pos=__t1831t__dat__pos;
  __t1818t__dat__length=__t1831t__dat__length;
  __t1818t__dat__first=__t1831t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5424t=__t1818t__unsafe_ptr;
  *__t5425t=__t1818t__dat__pos;
  *__t5426t=__t1818t__dat__length;
  *__t5427t=__t1818t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1894t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5428t) {
  char* __t1895t__unsafe_ptr=0;
  uint64_t __t1895t__dat__pos=0;
  uint64_t __t1895t__dat__length=0;
  char __t1895t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1896t__unsafe_ptr=0;
  uint64_t __t1896t__dat__pos=0;
  uint64_t __t1896t__dat__length=0;
  char __t1896t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t1897t=0;
  uint64_t __t1898t__=0;
  uint64_t d=0;
  char __t1899t__=0;
  char __t1900t=0;
  char* __t1901t__unsafe_ptr=0;
  uint64_t __t1901t__dat__pos=0;
  uint64_t __t1901t__dat__length=0;
  char __t1901t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1902t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1581t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1895t__unsafe_ptr,&__t1895t__dat__pos,&__t1895t__dat__length,&__t1895t__dat__first);
  stack__unsafe_ptr=__t1895t__unsafe_ptr;
  stack__dat__pos=__t1895t__dat__pos;
  stack__dat__length=__t1895t__dat__length;
  stack__dat__first=__t1895t__dat__first;
  str__t1604t(_needle,&__t1896t__unsafe_ptr,&__t1896t__dat__pos,&__t1896t__dat__length,&__t1896t__dat__first);
  needle__unsafe_ptr=__t1896t__unsafe_ptr;
  needle__dat__pos=__t1896t__dat__pos;
  needle__dat__length=__t1896t__dat__length;
  needle__dat__first=__t1896t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t401t(n,needle__dat__length,&__t1898t__);
  __t1897t=__t_complain;
  if(__t_complain){
  goto __t1897t__label;
  }
  d=__t1898t__;
  __t1897t__label:__t1897t=__t1897t==0;
  not__t42t(__t1897t,&__t1899t__);
  if(__t1899t__){
  __t1900t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1815t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t1901t__unsafe_ptr,&__t1901t__dat__pos,&__t1901t__dat__length,&__t1901t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1901t__unsafe_ptr;
  ret__dat__pos=__t1901t__dat__pos;
  ret__dat__length=__t1901t__dat__length;
  ret__dat__first=__t1901t__dat__first;
  eq__t1719t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1902t__);
  __t1900t=__t1902t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5428t=__t1900t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t684t(uint64_t to, uint64_t* __t5429t, uint64_t* __t5430t) {
  uint64_t __t685t=0;
  __t685t=0;
  goto __t_return;
  __t_return:
  *__t5429t=__t685t;
  *__t5430t=to;
}

static inline __attribute__((always_inline)) void range__t701t(uint64_t _from, uint64_t to, uint64_t* __t5431t, uint64_t* __t5432t) {
  uint64_t __t702t=0;
  uint64_t from=0;
  __t702t=_from;
  from=__t702t;
  goto __t_return;
  __t_return:
  *__t5431t=from;
  *__t5432t=to;
}

static inline __attribute__((always_inline)) int get__t708t(uint64_t r__from, uint64_t r__to, uint64_t _pos, uint64_t* __t5433t) {
  uint64_t __t709t__=0;
  uint64_t pos=0;
  char __t710t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(_pos,r__from,&__t709t__);
  pos=__t709t__;
  ge__t373t(pos,r__to,&__t710t__);
  if(__t710t__){
  __t_errcode=12;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5433t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t1980t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5434t) {
  char* __t1981t__unsafe_ptr=0;
  uint64_t __t1981t__dat__pos=0;
  uint64_t __t1981t__dat__length=0;
  char __t1981t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1982t__unsafe_ptr=0;
  uint64_t __t1982t__dat__pos=0;
  uint64_t __t1982t__dat__length=0;
  char __t1982t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t1983t=0;
  uint64_t __t1984t__=0;
  uint64_t n=0;
  char __t1985t__=0;
  char __t1986t=0;
  uint64_t __t1987t=0;
  uint64_t __t1988t____t685t=0;
  uint64_t __t1988t__to=0;
  uint64_t __t1989t__from=0;
  uint64_t __t1989t__to=0;
  char __t1990t=0;
  uint64_t __t1991t__=0;
  uint64_t i=0;
  char __t1992t=0;
  uint64_t __t1993t__=0;
  char* __t1994t__unsafe_ptr=0;
  uint64_t __t1994t__dat__pos=0;
  uint64_t __t1994t__dat__length=0;
  char __t1994t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t1995t__=0;
  char __t1996t=0;
  char __t1997t=0;
  int __t_complain=0;
  str__t1581t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1981t__unsafe_ptr,&__t1981t__dat__pos,&__t1981t__dat__length,&__t1981t__dat__first);
  stack__unsafe_ptr=__t1981t__unsafe_ptr;
  stack__dat__pos=__t1981t__dat__pos;
  stack__dat__length=__t1981t__dat__length;
  stack__dat__first=__t1981t__dat__first;
  str__t1604t(_needle,&__t1982t__unsafe_ptr,&__t1982t__dat__pos,&__t1982t__dat__length,&__t1982t__dat__first);
  needle__unsafe_ptr=__t1982t__unsafe_ptr;
  needle__dat__pos=__t1982t__dat__pos;
  needle__dat__length=__t1982t__dat__length;
  needle__dat__first=__t1982t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t401t(stack__dat__length,d,&__t1984t__);
  __t1983t=__t_complain;
  if(__t_complain){
  goto __t1983t__label;
  }
  n=__t1984t__;
  __t1983t__label:__t1983t=__t1983t==0;
  not__t42t(__t1983t,&__t1985t__);
  if(__t1985t__){
  __t1986t=0;
  goto __t_return;
  }
  of__t684t(n,&__t1988t____t685t,&__t1988t__to);
  range__t701t(__t1988t____t685t,__t1988t__to,&__t1989t__from,&__t1989t__to);
  __t1987t=0-1;
  while(1){
  __t1987t=__t1987t+1;
  __t_complain=get__t708t(__t1989t__from,__t1989t__to,__t1987t,&__t1991t__);
  __t1990t=__t_complain;
  if(__t_complain){
  goto __t1990t__label;
  }
  i=__t1991t__;
  __t1990t__label:__t1990t=__t1990t==0;
  if(!__t1990t){
  break;
  }
  add__t188t(i,d,&__t1993t__);
  __t_complain=slice__t1815t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t1993t__,&__t1994t__unsafe_ptr,&__t1994t__dat__pos,&__t1994t__dat__length,&__t1994t__dat__first);
  __t1992t=__t_complain;
  if(__t_complain){
  goto __t1992t__label;
  }
  sliced__unsafe_ptr=__t1994t__unsafe_ptr;
  sliced__dat__pos=__t1994t__dat__pos;
  sliced__dat__length=__t1994t__dat__length;
  sliced__dat__first=__t1994t__dat__first;
  __t1992t__label:__t1992t=__t1992t==0;
  eq__t1719t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1995t__);
  if(__t1995t__){
  __t1996t=1;
  __t1986t=__t1996t;
  goto __t_return;
  }
  }
  __t1997t=0;
  __t1986t=__t1997t;
  goto __t_return;
  __t_return:
  *__t5434t=__t1986t;
}

static inline __attribute__((always_inline)) void print__t1783t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1784t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void popen__t4168t(const char* cmd, char** __t5435t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t5435t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4167t(char* unsafe_ptr, int64_t* __t5436t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t5436t=status;
}

static inline __attribute__((always_inline)) void int__t632t(uint64_t x, int64_t* __t5437t) {
  int __t633t=0;
  int __t634t=0;
  int __t635t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5437t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t5438t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t5438t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t5439t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5439t=z;
}

static inline __attribute__((always_inline)) int open__t4169t(const char* cmd, char** __t5440t) {
  char* __t4170t__=0;
  char* unsafe_ptr=0;
  char __t4171t__=0;
  char __t4172t__=0;
  char __t4173t__=0;
  int64_t __t4174t__=0;
  int64_t status=0;
  uint64_t __t4175t=0;
  int64_t __t4176t__=0;
  char __t4177t__=0;
  char __t4178t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4168t(cmd,&__t4170t__);
  unsafe_ptr=__t4170t__;
  exists__t652t(unsafe_ptr,&__t4171t__);
  not__t42t(__t4171t__,&__t4172t__);
  if(__t4172t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t652t(unsafe_ptr,&__t4173t__);
  if(__t4173t__){
  pclose__t4167t(unsafe_ptr,&__t4174t__);
  status=__t4174t__;
  unsafe_ptr=0;
  __t4175t=0;
  int__t632t(__t4175t,&__t4176t__);
  neq__t147t(status,__t4176t__,&__t4177t__);
  if(__t4177t__){
  __t_complain=41;
  goto __t4178t__label;
  __t4178t__label:__t4178t=__t4178t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5440t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4180t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t5441t) {
  const char* __t4181t__cstr=0;
  char* __t4181t__str__unsafe_ptr=0;
  uint64_t __t4181t__str__dat__pos=0;
  uint64_t __t4181t__str__dat__length=0;
  char __t4181t__str__dat__first=0;
  const char* __t4183t__=0;
  char* __t4184t__unsafe_ptr=0;
  char __t4185t____t4173t__=0;
  int64_t __t4185t____t4174t__=0;
  int64_t __t4185t__status=0;
  uint64_t __t4185t____t4175t=0;
  int64_t __t4185t____t4176t__=0;
  char __t4185t____t4177t__=0;
  char __t4185t____t4178t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1702t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4181t__cstr,&__t4181t__str__unsafe_ptr,&__t4181t__str__dat__pos,&__t4181t__str__dat__length,&__t4181t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1712t(__t4181t__cstr,__t4181t__str__unsafe_ptr,__t4181t__str__dat__pos,__t4181t__str__dat__length,__t4181t__str__dat__first,&__t4183t__);
  __t_errcode=open__t4169t(__t4183t__,&__t4184t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t652t(__t4184t__unsafe_ptr,&__t4185t____t4173t__);
  if(__t4185t____t4173t__){
  pclose__t4167t(__t4184t__unsafe_ptr,&__t4185t____t4174t__);
  __t4185t__status=__t4185t____t4174t__;
  __t4184t__unsafe_ptr=0;
  __t4185t____t4175t=0;
  int__t632t(__t4185t____t4175t,&__t4185t____t4176t__);
  neq__t147t(__t4185t__status,__t4185t____t4176t__,&__t4185t____t4177t__);
  if(__t4185t____t4177t__){
  __t_complain=41;
  goto __t4178t__label;
  __t4178t__label:__t4185t____t4178t=__t4185t____t4178t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5441t=__t4184t__unsafe_ptr;
  
  __t_skip_returns:free__t743t(&__t4181t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t4142t(int64_t value, const char** __t5442t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5442t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t5443t) {
  const char* value=0;
  *__t5443t=value;
}

int run__t4991t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t5444t) {
  char* __t4992t__unsafe_ptr=0;
  char __t4993t____t4185t____t4173t__=0;
  int64_t __t4993t____t4185t____t4174t__=0;
  int64_t __t4993t____t4185t__status=0;
  uint64_t __t4993t____t4185t____t4175t=0;
  int64_t __t4993t____t4185t____t4176t__=0;
  char __t4993t____t4185t____t4177t__=0;
  char __t4993t____t4185t____t4178t=0;
  char* proc__unsafe_ptr=0;
  char __t4994t=0;
  int64_t __t4995t=0;
  int64_t error=0;
  const char* __t4996t__=0;
  const char* __t4997t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4180t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t4992t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t4992t__unsafe_ptr;
  exists__t652t(__t4992t__unsafe_ptr,&__t4993t____t4185t____t4173t__);
  if(__t4993t____t4185t____t4173t__){
  pclose__t4167t(__t4992t__unsafe_ptr,&__t4993t____t4185t____t4174t__);
  __t4993t____t4185t__status=__t4993t____t4185t____t4174t__;
  __t4992t__unsafe_ptr=0;
  __t4993t____t4185t____t4175t=0;
  int__t632t(__t4993t____t4185t____t4175t,&__t4993t____t4185t____t4176t__);
  neq__t147t(__t4993t____t4185t__status,__t4993t____t4185t____t4176t__,&__t4993t____t4185t____t4177t__);
  if(__t4993t____t4185t____t4177t__){
  __t_complain=41;
  goto __t4178t__label;
  __t4178t__label:__t4993t____t4185t____t4178t=__t4993t____t4185t____t4178t==0;
  }
  }
  __t4995t=__t_complain;
  __t4994t=(__t_complain==0);
  __t_complain=0;
  error=__t4995t;
  __t4994t__label:__t4994t=__t4994t==0;
  if(__t4994t){
  cstr__t4142t(error,&__t4996t__);
  goto __t_return;
  }
  cstr__t1t(&__t4997t__);
  __t4996t__=__t4997t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5444t=__t4996t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5445t) {
  int value=0;
  *__t5445t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5446t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5446t=__t54t__;
}

static inline __attribute__((always_inline)) void exists__t1542t(const char* c, char* __t5447t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5447t=z;
}

static inline __attribute__((always_inline)) void nn__t430t(const char* value, const char** __t5448t, const char** __t5449t) {
  const char* __t432t=0;
  __t432t=__t431t;
  goto __t_return;
  __t_return:
  *__t5448t=value;
  *__t5449t=__t432t;
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

static inline __attribute__((always_inline)) void print_marker__t5027t(char colors__initialized) {
  const char* __t5029t__value=0;
  const char* __t5029t____t432t=0;
  int __t5031t=0;
  char __t5032t=0;
  char __t5033t=0;
  const char* __t5038t__value=0;
  const char* __t5038t____t432t=0;
  int __t5040t=0;
  const char* __t5043t__value=0;
  const char* __t5043t____t432t=0;
  nn__t430t(__t5009t,&__t5029t__value,&__t5029t____t432t);
  print__t439t(__t5029t__value,__t5029t____t432t);
  __t5033t=1;
  if(__t5034t!=__t5034t){
  __t5033t=0;
  }
  if(__t5033t){
  __t5032t=1;
  }
  if(__t5032t){
  set__t475t(colors__initialized);
  nn__t430t(__t5037t,&__t5038t__value,&__t5038t____t432t);
  print__t439t(__t5038t__value,__t5038t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5024t,&__t5043t__value,&__t5043t____t432t);
  print__t439t(__t5043t__value,__t5043t____t432t);
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

static inline __attribute__((always_inline)) void print_marker__t5007t(char colors__initialized) {
  const char* __t5010t__value=0;
  const char* __t5010t____t432t=0;
  char __t5012t=0;
  char __t5013t=0;
  const char* __t5018t__value=0;
  const char* __t5018t____t432t=0;
  int __t5020t=0;
  int __t5021t=0;
  const char* __t5025t__value=0;
  const char* __t5025t____t432t=0;
  nn__t430t(__t5009t,&__t5010t__value,&__t5010t____t432t);
  print__t439t(__t5010t__value,__t5010t____t432t);
  __t5013t=1;
  if(__t5014t!=__t5014t){
  __t5013t=0;
  }
  if(__t5013t){
  __t5012t=1;
  }
  if(__t5012t){
  set__t479t(colors__initialized);
  nn__t430t(__t5017t,&__t5018t__value,&__t5018t____t432t);
  print__t439t(__t5018t__value,__t5018t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5024t,&__t5025t__value,&__t5025t____t432t);
  print__t439t(__t5025t__value,__t5025t____t432t);
}

static inline __attribute__((always_inline)) int test__t5087t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t5450t) {
  const char* __t5090t__=0;
  const char* __t5091t=0;
  const char* error=0;
  int __t5092t=0;
  int __t5093t__=0;
  char __t5094t__=0;
  const char* __t5095t__=0;
  const char* __t5097t__value=0;
  const char* __t5097t____t432t=0;
  char __t5099t__=0;
  char __t5103t=0;
  char __t5108t=0;
  int __t_errcode=0;
  int __t_complain=0;
  print__t1783t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t4991t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5090t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5091t=__t5090t__;
  error=__t5091t;
  not__t53t(__t5092t,&__t5093t__);
  if(should_fail){
  exists__t1542t(error,&__t5094t__);
  if(__t5094t__){
  cstr__t1t(&__t5095t__);
  error=__t5095t__;
  }
  else{
  error=__t5096t;
  }
  }
  nn__t430t(__t5071t,&__t5097t__value,&__t5097t____t432t);
  print__t439t(__t5097t__value,__t5097t____t432t);
  exists__t1542t(error,&__t5099t__);
  if(__t5099t__){
  print_marker__t5027t(colors__initialized);
  print__t441t(error);
  __t5103t=0;
  goto __t_return;
  }
  print_marker__t5007t(colors__initialized);
  print__t441t(__t5106t);
  __t5108t=1;
  __t5103t=__t5108t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5450t=__t5103t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t452t(uint64_t value, const char* endl) {
  int __t453t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t437t(uint64_t value, uint64_t* __t5451t, const char** __t5452t) {
  const char* __t438t=0;
  __t438t=__t431t;
  goto __t_return;
  __t_return:
  *__t5451t=value;
  *__t5452t=__t438t;
}

static inline __attribute__((always_inline)) int main__t5145t() {
  char* __t5147t__unsafe_ptr=0;
  uint64_t __t5147t__dat__pos=0;
  uint64_t __t5147t__dat__length=0;
  char __t5147t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5150t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5152t=0;
  char* __t5153t__unsafe_ptr=0;
  uint64_t __t5153t__unsafe_size=0;
  uint32_t __t5153t__unsafe_offset=0;
  uint32_t __t5153t__unsafe_align=0;
  char* __t5155t__buf__unsafe_ptr=0;
  uint64_t __t5155t__buf__unsafe_size=0;
  uint32_t __t5155t__buf__unsafe_offset=0;
  uint32_t __t5155t__buf__unsafe_align=0;
  uint64_t __t5155t__pos=0;
  char* __t5156t__buf__unsafe_ptr=0;
  uint64_t __t5156t__buf__unsafe_size=0;
  uint32_t __t5156t__buf__unsafe_offset=0;
  uint32_t __t5156t__buf__unsafe_align=0;
  uint64_t __t5156t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t5158t__unsafe_ptr=0;
  uint64_t __t5158t__dat__pos=0;
  uint64_t __t5158t__dat__length=0;
  char __t5158t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  uint64_t __t5159t=0;
  uint64_t __t5160t=0;
  uint64_t counter=0;
  uint64_t __t5161t=0;
  uint64_t __t5162t=0;
  uint64_t failures=0;
  uint64_t __t5163t=0;
  char* __t5164t__unsafe_ptr=0;
  char __t5166t=0;
  char* __t5167t__unsafe_ptr=0;
  uint64_t __t5167t__dat__pos=0;
  uint64_t __t5167t__dat__length=0;
  char __t5167t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5169t__=0;
  char __t5170t__=0;
  char __t5171t__=0;
  char __t5172t=0;
  char __t5173t__=0;
  uint64_t __t5174t__=0;
  uint64_t __t5175t____t5142t=0;
  uint64_t __t5175t____t5144t__=0;
  char* __t5176t__unsafe_ptr=0;
  uint64_t __t5176t__dat__pos=0;
  uint64_t __t5176t__dat__length=0;
  char __t5176t__dat__first=0;
  char* __t5178t__unsafe_ptr=0;
  uint64_t __t5178t__dat__pos=0;
  uint64_t __t5178t__dat__length=0;
  char __t5178t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5179t=0;
  char* __t5180t__unsafe_ptr=0;
  char __t5182t=0;
  char* __t5183t__unsafe_ptr=0;
  uint64_t __t5183t__dat__pos=0;
  uint64_t __t5183t__dat__length=0;
  char __t5183t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5185t__=0;
  char __t5186t__=0;
  uint64_t __t5187t__=0;
  uint64_t __t5188t____t5142t=0;
  uint64_t __t5188t____t5144t__=0;
  uint64_t __t5189t=0;
  uint64_t __t5190t__=0;
  char __t5192t__=0;
  char should_fail=0;
  char* __t5193t__unsafe_ptr=0;
  uint64_t __t5193t__dat__pos=0;
  uint64_t __t5193t__dat__length=0;
  char __t5193t__dat__first=0;
  char* __t5194t__unsafe_ptr=0;
  uint64_t __t5194t__dat__pos=0;
  uint64_t __t5194t__dat__length=0;
  char __t5194t__dat__first=0;
  char __t5195t__=0;
  char __t5196t__=0;
  uint64_t __t5197t=0;
  uint64_t __t5198t__=0;
  uint64_t __t5199t=0;
  char __t5200t__=0;
  const char* __t5214t__value=0;
  const char* __t5214t____t432t=0;
  const char* __t5204t__value=0;
  const char* __t5204t____t432t=0;
  const char* __t5209t__value=0;
  const char* __t5209t____t432t=0;
  uint64_t __t5220t__value=0;
  const char* __t5220t____t438t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1604t(__t5146t,&__t5147t__unsafe_ptr,&__t5147t__dat__pos,&__t5147t__dat__length,&__t5147t__dat__first);
  test_root__unsafe_ptr=__t5147t__unsafe_ptr;
  test_root__dat__pos=__t5147t__dat__pos;
  test_root__dat__length=__t5147t__dat__length;
  test_root__dat__first=__t5147t__dat__first;
  console__t419t();
  colors__t469t(&__t5150t__initialized);
  colors__initialized=__t5150t__initialized;
  __t5152t=128;
  __t_errcode=alloc__t1021t(__t5152t,&__t5153t__unsafe_ptr,&__t5153t__unsafe_size,&__t5153t__unsafe_offset,&__t5153t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1140t(&__t5153t__unsafe_ptr,&__t5153t__unsafe_size,&__t5153t__unsafe_offset,&__t5153t__unsafe_align,&__t5155t__buf__unsafe_ptr,&__t5155t__buf__unsafe_size,&__t5155t__buf__unsafe_offset,&__t5155t__buf__unsafe_align,&__t5155t__pos);
  __t5156t__buf__unsafe_ptr=__t5155t__buf__unsafe_ptr;
  __t5156t__buf__unsafe_size=__t5155t__buf__unsafe_size;
  __t5156t__buf__unsafe_offset=__t5155t__buf__unsafe_offset;
  __t5156t__buf__unsafe_align=__t5155t__buf__unsafe_align;
  __t5156t__pos=__t5155t__pos;
  CHARS__buf__unsafe_ptr=__t5156t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5156t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5156t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5156t__buf__unsafe_align;
  CHARS__pos=__t5156t__pos;
  __t_errcode=copy__t1653t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5157t,&__t5158t__unsafe_ptr,&__t5158t__dat__pos,&__t5158t__dat__length,&__t5158t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5158t__unsafe_ptr;
  command_base__dat__pos=__t5158t__dat__pos;
  command_base__dat__length=__t5158t__dat__length;
  command_base__dat__first=__t5158t__dat__first;
  __t5159t=0;
  __t5160t=__t5159t;
  counter=__t5160t;
  __t5161t=0;
  __t5162t=__t5161t;
  failures=__t5162t;
  __t_errcode=open__t4867t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5164t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5163t=0-1;
  while(1){
  __t5163t=__t5163t+1;
  __t_complain=get__t4950t(&__t5164t__unsafe_ptr,__t5163t,&__t5167t__unsafe_ptr,&__t5167t__dat__pos,&__t5167t__dat__length,&__t5167t__dat__first);
  __t5166t=__t_complain;
  if(__t_complain){
  goto __t5166t__label;
  }
  path__unsafe_ptr=__t5167t__unsafe_ptr;
  path__dat__pos=__t5167t__dat__pos;
  path__dat__length=__t5167t__dat__length;
  path__dat__first=__t5167t__dat__first;
  __t5166t__label:__t5166t=__t5166t==0;
  if(!__t5166t){
  break;
  }
  eq__t1726t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5168t,&__t5169t__);
  if(!__t5169t__){
  __t_errcode=is_dir__t4794t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5170t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5170t__,&__t5171t__);
  __t5172t=__t5171t__;
  }
  else{
  __t5172t=0;
  not__t42t(__t5172t,&__t5173t__);
  __t5172t=__t5173t__;
  }
  if(__t5172t){
  continue;
  }
  reuse__t5139t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5174t__);
  __t_errcode=add__t2800t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5176t__unsafe_ptr,&__t5176t__dat__pos,&__t5176t__dat__length,&__t5176t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2845t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5176t__unsafe_ptr,__t5176t__dat__pos,__t5176t__dat__length,__t5176t__dat__first,__t5177t,&__t5178t__unsafe_ptr,&__t5178t__dat__pos,&__t5178t__dat__length,&__t5178t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5178t__unsafe_ptr;
  dir_path__dat__pos=__t5178t__dat__pos;
  dir_path__dat__length=__t5178t__dat__length;
  dir_path__dat__first=__t5178t__dat__first;
  __t_errcode=open__t4867t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5180t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5179t=0-1;
  while(1){
  __t5179t=__t5179t+1;
  __t_complain=get__t4950t(&__t5180t__unsafe_ptr,__t5179t,&__t5183t__unsafe_ptr,&__t5183t__dat__pos,&__t5183t__dat__length,&__t5183t__dat__first);
  __t5182t=__t_complain;
  if(__t_complain){
  goto __t5182t__label;
  }
  entry__unsafe_ptr=__t5183t__unsafe_ptr;
  entry__dat__pos=__t5183t__dat__pos;
  entry__dat__length=__t5183t__dat__length;
  entry__dat__first=__t5183t__dat__first;
  __t5182t__label:__t5182t=__t5182t==0;
  if(!__t5182t){
  break;
  }
  __t_errcode=ends_with__t1894t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5184t,&__t5185t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5185t__,&__t5186t__);
  if(__t5186t__){
  continue;
  }
  reuse__t5139t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5187t__);
  __t5189t=1;
  add__t188t(counter,__t5189t,&__t5190t__);
  counter=__t5190t__;
  contains__t1980t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5191t,&__t5192t__);
  should_fail=__t5192t__;
  __t_errcode=add__t2800t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5193t__unsafe_ptr,&__t5193t__dat__pos,&__t5193t__dat__length,&__t5193t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2800t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5193t__unsafe_ptr,__t5193t__dat__pos,__t5193t__dat__length,__t5193t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5194t__unsafe_ptr,&__t5194t__dat__pos,&__t5194t__dat__length,&__t5194t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5087t(colors__initialized,__t5194t__unsafe_ptr,__t5194t__dat__pos,__t5194t__dat__length,__t5194t__dat__first,should_fail,&__t5195t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5195t__,&__t5196t__);
  if(__t5196t__){
  __t5197t=1;
  add__t188t(failures,__t5197t,&__t5198t__);
  failures=__t5198t__;
  }
  __t5188t____t5142t=0;
  sub__t409t(__t5187t__,__t5188t____t5142t,&__t5188t____t5144t__);
  CHARS__pos=__t5188t____t5144t__;
  }
  __t5175t____t5142t=0;
  sub__t409t(__t5174t__,__t5175t____t5142t,&__t5175t____t5144t__);
  CHARS__pos=__t5175t____t5144t__;
  closedir__t4857t(__t5180t__unsafe_ptr);
  }
  __t5199t=0;
  eq__t134t(failures,__t5199t,&__t5200t__);
  if(__t5200t__){
  set__t479t(colors__initialized);
  nn__t430t(__t5203t,&__t5204t__value,&__t5204t____t432t);
  print__t439t(__t5204t__value,__t5204t____t432t);
  set__t595t(colors__initialized);
  nn__t430t(__t5208t,&__t5209t__value,&__t5209t____t432t);
  print__t439t(__t5209t__value,__t5209t____t432t);
  }
  else{
  set__t475t(colors__initialized);
  nn__t430t(__t5213t,&__t5214t__value,&__t5214t____t432t);
  print__t439t(__t5214t__value,__t5214t____t432t);
  set__t595t(colors__initialized);
  print__t452t(failures,__t5218t);
  }
  nn__t437t(counter,&__t5220t__value,&__t5220t____t438t);
  print__t452t(__t5220t__value,__t5220t____t438t);
  print__t441t(__t5222t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:closedir__t4857t(__t5164t__unsafe_ptr);
  free__t743t(&__t5153t__unsafe_ptr);
  if(__t5150t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t5145t();
                }