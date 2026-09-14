#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5287t="done";
const char* const __t443t="\n";
const char* const __t5284t="1";
const char* const __t5285t="2";
static const char* __t_all_errcodes[63] = {"noerr",
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
"assert failed"
};

static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1085t(char** __t5289t, uint64_t* __t5290t, uint32_t* __t5291t, uint32_t* __t5292t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5289t=unsafe_ptr;
  *__t5290t=unsafe_size;
  *__t5291t=unsafe_offset;
  *__t5292t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t806t(char** __t5293t) {
  char* allocated=*__t5293t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5293t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5294t) {
  int value=0;
  *__t5294t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5295t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5295t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5296t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5296t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5297t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5297t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5298t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5298t=z;
}

static inline __attribute__((always_inline)) void nat__t686t(uint32_t x, uint64_t* __t5299t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5299t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5300t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5300t=z;
}

static inline __attribute__((always_inline)) void zero__t807t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t645t(char* x, char* __t5301t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5301t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5302t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5302t=z;
}

static inline __attribute__((always_inline)) int alloc__t790t(uint64_t bytes, char** __t5303t) {
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
  *__t5303t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t929t(char** __t5304t, uint64_t* __t5305t, uint32_t* __t5306t, uint32_t* __t5307t, uint64_t size, char** __t5308t, uint64_t* __t5309t, uint32_t* __t5310t, uint32_t* __t5311t) {
  char* buffer__unsafe_ptr=*__t5304t;
  uint64_t buffer__unsafe_size=*__t5305t;
  uint32_t buffer__unsafe_offset=*__t5306t;
  uint32_t buffer__unsafe_align=*__t5307t;
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
  *__t5304t=buffer__unsafe_ptr;
  *__t5305t=buffer__unsafe_size;
  *__t5306t=buffer__unsafe_offset;
  *__t5307t=buffer__unsafe_align;
  *__t5308t=buffer__unsafe_ptr;
  *__t5309t=buffer__unsafe_size;
  *__t5310t=buffer__unsafe_offset;
  *__t5311t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1084t(uint64_t size, char** __t5312t, uint64_t* __t5313t, uint32_t* __t5314t, uint32_t* __t5315t) {
  char* __t1087t__unsafe_ptr=0;
  uint64_t __t1087t__unsafe_size=0;
  uint32_t __t1087t__unsafe_offset=0;
  uint32_t __t1087t__unsafe_align=0;
  char* __t1088t__unsafe_ptr=0;
  uint64_t __t1088t__unsafe_size=0;
  uint32_t __t1088t__unsafe_offset=0;
  uint32_t __t1088t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1085t(&__t1087t__unsafe_ptr,&__t1087t__unsafe_size,&__t1087t__unsafe_offset,&__t1087t__unsafe_align);
  __t_errcode=alloc__t929t(&__t1087t__unsafe_ptr,&__t1087t__unsafe_size,&__t1087t__unsafe_offset,&__t1087t__unsafe_align,size,&__t1088t__unsafe_ptr,&__t1088t__unsafe_size,&__t1088t__unsafe_offset,&__t1088t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t806t(&__t1088t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5312t=__t1088t__unsafe_ptr;
  *__t5313t=__t1088t__unsafe_size;
  *__t5314t=__t1088t__unsafe_offset;
  *__t5315t=__t1088t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1200t(char** __t5316t, uint64_t* __t5317t, uint32_t* __t5318t, uint32_t* __t5319t, uint64_t _pos, char** __t5320t, uint64_t* __t5321t, uint32_t* __t5322t, uint32_t* __t5323t, uint64_t* __t5324t) {
  char* buf__unsafe_ptr=*__t5316t;
  uint64_t buf__unsafe_size=*__t5317t;
  uint32_t buf__unsafe_offset=*__t5318t;
  uint32_t buf__unsafe_align=*__t5319t;
  uint64_t __t1201t=0;
  uint64_t pos=0;
  __t1201t=_pos;
  pos=__t1201t;
  goto __t_return;
  __t_return:
  *__t5316t=buf__unsafe_ptr;
  *__t5317t=buf__unsafe_size;
  *__t5318t=buf__unsafe_offset;
  *__t5319t=buf__unsafe_align;
  *__t5320t=buf__unsafe_ptr;
  *__t5321t=buf__unsafe_size;
  *__t5322t=buf__unsafe_offset;
  *__t5323t=buf__unsafe_align;
  *__t5324t=pos;
}

static inline __attribute__((always_inline)) void arena__t1203t(char** __t5325t, uint64_t* __t5326t, uint32_t* __t5327t, uint32_t* __t5328t, char** __t5329t, uint64_t* __t5330t, uint32_t* __t5331t, uint32_t* __t5332t, uint64_t* __t5333t) {
  char* buf__unsafe_ptr=*__t5325t;
  uint64_t buf__unsafe_size=*__t5326t;
  uint32_t buf__unsafe_offset=*__t5327t;
  uint32_t buf__unsafe_align=*__t5328t;
  uint64_t __t1204t=0;
  char* __t1205t__buf__unsafe_ptr=0;
  uint64_t __t1205t__buf__unsafe_size=0;
  uint32_t __t1205t__buf__unsafe_offset=0;
  uint32_t __t1205t__buf__unsafe_align=0;
  uint64_t __t1205t__pos=0;
  __t1204t=0;
  arena__t1200t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1204t,&__t1205t__buf__unsafe_ptr,&__t1205t__buf__unsafe_size,&__t1205t__buf__unsafe_offset,&__t1205t__buf__unsafe_align,&__t1205t__pos);
  goto __t_return;
  __t_return:
  *__t5325t=buf__unsafe_ptr;
  *__t5326t=buf__unsafe_size;
  *__t5327t=buf__unsafe_offset;
  *__t5328t=buf__unsafe_align;
  *__t5329t=__t1205t__buf__unsafe_ptr;
  *__t5330t=__t1205t__buf__unsafe_size;
  *__t5331t=__t1205t__buf__unsafe_offset;
  *__t5332t=__t1205t__buf__unsafe_align;
  *__t5333t=__t1205t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1582t(char** __t5334t, uint64_t* __t5335t, uint32_t* __t5336t, uint32_t* __t5337t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5334t=unsafe_ptr;
  *__t5335t=unsafe_size;
  *__t5336t=unsafe_offset;
  *__t5337t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5338t) {
  *__t5338t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5339t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5339t=z;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t5340t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5340t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5341t) {
  *__t5341t=to;
}

static inline __attribute__((always_inline)) void add__t808t(char* allocated, uint64_t offset, char** __t5342t) {
  char* element=0;
  char* __t809t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t809t__);
  goto __t_return;
  __t_return:
  *__t5342t=__t809t__;
}

static inline __attribute__((always_inline)) int get__t1149t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5343t) {
  int __t1150t=0;
  char __t1151t__=0;
  uint64_t __t1152t__=0;
  uint64_t __t1153t__=0;
  uint64_t __t1154t__=0;
  uint64_t __t1155t__=0;
  char* __t1156t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1151t__);
  if(__t1151t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t686t(buffer__unsafe_align,&__t1152t__);
  mul__t212t(i,__t1152t__,&__t1153t__);
  nat__t686t(buffer__unsafe_offset,&__t1154t__);
  add__t188t(__t1153t__,__t1154t__,&__t1155t__);
  add__t808t(buffer__unsafe_ptr,__t1155t__,&__t1156t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5343t=__t1156t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1607t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5344t, uint64_t* __t5345t, uint64_t* __t5346t, char* __t5347t) {
  goto __t_return;
  __t_return:
  *__t5344t=unsafe_ptr;
  *__t5345t=dat__pos;
  *__t5346t=dat__length;
  *__t5347t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1611t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5348t, uint64_t* __t5349t, uint64_t* __t5350t, char* __t5351t) {
  char* unsafe_ptr=0;
  uint64_t __t1612t__=0;
  uint64_t __t1613t=0;
  char __t1614t__=0;
  uint64_t __t1615t__=0;
  uint64_t __t1616t=0;
  char __t1617t__=0;
  char* __t1618t__unsafe_ptr=0;
  uint64_t __t1618t__dat__pos=0;
  uint64_t __t1618t__dat__length=0;
  char __t1618t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t686t(buf__unsafe_align,&__t1612t__);
  __t1613t=1;
  neq__t158t(__t1612t__,__t1613t,&__t1614t__);
  if(__t1614t__){
  __t_errcode=25;
  goto __t_failure;
  }
  nat__t686t(buf__unsafe_offset,&__t1615t__);
  __t1616t=0;
  neq__t158t(__t1615t__,__t1616t,&__t1617t__);
  if(__t1617t__){
  __t_errcode=26;
  goto __t_failure;
  }
  str__t1607t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1618t__unsafe_ptr,&__t1618t__dat__pos,&__t1618t__dat__length,&__t1618t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5348t=__t1618t__unsafe_ptr;
  *__t5349t=__t1618t__dat__pos;
  *__t5350t=__t1618t__dat__length;
  *__t5351t=__t1618t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1645t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5352t, uint64_t* __t5353t, uint64_t* __t5354t, char* __t5355t) {
  uint64_t __t1646t=0;
  char __t1647t__=0;
  char* __t1649t__=0;
  char __t1650t__value=0;
  char first=0;
  char* __t1651t__unsafe_ptr=0;
  uint64_t __t1651t__dat__pos=0;
  uint64_t __t1651t__dat__length=0;
  char __t1651t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1646t=0;
  neq__t158t(length,__t1646t,&__t1647t__);
  if(__t1647t__){
  __t_errcode=get__t1149t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1649t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1649t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1650t__value,__t1649t__,1);
  first=__t1650t__value;
  }
  __t_errcode=str__t1611t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1651t__unsafe_ptr,&__t1651t__dat__pos,&__t1651t__dat__length,&__t1651t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5352t=__t1651t__unsafe_ptr;
  *__t5353t=__t1651t__dat__pos;
  *__t5354t=__t1651t__dat__length;
  *__t5355t=__t1651t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1667t(const char* c, char** __t5356t, uint64_t* __t5357t, uint64_t* __t5358t, char* __t5359t) {
  char* __t1668t__unsafe_ptr=0;
  uint64_t __t1668t__unsafe_size=0;
  uint32_t __t1668t__unsafe_offset=0;
  uint32_t __t1668t__unsafe_align=0;
  char* __t1669t__unsafe_ptr=0;
  uint64_t __t1669t__unsafe_size=0;
  uint32_t __t1669t__unsafe_offset=0;
  uint32_t __t1669t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1670t__=0;
  uint64_t length=0;
  uint64_t __t1671t=0;
  uint64_t __t1672t__=0;
  char __t1673t=0;
  uint64_t __t1674t=0;
  char* __t1676t__unsafe_ptr=0;
  uint64_t __t1676t__dat__pos=0;
  uint64_t __t1676t__dat__length=0;
  char __t1676t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1582t(&__t1668t__unsafe_ptr,&__t1668t__unsafe_size,&__t1668t__unsafe_offset,&__t1668t__unsafe_align);
  __t1669t__unsafe_ptr=__t1668t__unsafe_ptr;
  __t1669t__unsafe_size=__t1668t__unsafe_size;
  __t1669t__unsafe_offset=__t1668t__unsafe_offset;
  __t1669t__unsafe_align=__t1668t__unsafe_align;
  buf__unsafe_ptr=__t1669t__unsafe_ptr;
  buf__unsafe_size=__t1669t__unsafe_size;
  buf__unsafe_offset=__t1669t__unsafe_offset;
  buf__unsafe_align=__t1669t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1670t__);
  buf__unsafe_ptr=__t1670t__;
  if(c){
  length=strlen(c);
  }
  __t1671t=1;
  add__t188t(length,__t1671t,&__t1672t__);
  buf__unsafe_size=__t1672t__;
  __t1674t=0;
  __t_complain=str__t1645t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1674t,length,&__t1676t__unsafe_ptr,&__t1676t__dat__pos,&__t1676t__dat__length,&__t1676t__dat__first);
  __t1673t=__t_complain;
  if(__t_complain){
  goto __t1673t__label;
  }
  ret__unsafe_ptr=__t1676t__unsafe_ptr;
  ret__dat__pos=__t1676t__dat__pos;
  ret__dat__length=__t1676t__dat__length;
  ret__dat__first=__t1676t__dat__first;
  __t1673t__label:__t1673t=__t1673t==0;
  goto __t_return;
  __t_return:
  *__t5356t=ret__unsafe_ptr;
  *__t5357t=ret__dat__pos;
  *__t5358t=ret__dat__length;
  *__t5359t=ret__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5360t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5360t=z;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t5361t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5361t=z;
}

static inline __attribute__((always_inline)) void len__t1677t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5362t) {
  goto __t_return;
  __t_return:
  *__t5362t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t1157t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5363t) {
  goto __t_return;
  __t_return:
  *__t5363t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t5364t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5364t=z;
}

static inline __attribute__((always_inline)) void allocated__t1207t(char** __t5365t, uint64_t* __t5366t, uint32_t* __t5367t, uint32_t* __t5368t, uint64_t pos, char** __t5369t, uint64_t* __t5370t, uint32_t* __t5371t, uint32_t* __t5372t, uint64_t* __t5373t) {
  char* buf__unsafe_ptr=*__t5365t;
  uint64_t buf__unsafe_size=*__t5366t;
  uint32_t buf__unsafe_offset=*__t5367t;
  uint32_t buf__unsafe_align=*__t5368t;
  goto __t_return;
  __t_return:
  *__t5365t=buf__unsafe_ptr;
  *__t5366t=buf__unsafe_size;
  *__t5367t=buf__unsafe_offset;
  *__t5368t=buf__unsafe_align;
  *__t5369t=buf__unsafe_ptr;
  *__t5370t=buf__unsafe_size;
  *__t5371t=buf__unsafe_offset;
  *__t5372t=buf__unsafe_align;
  *__t5373t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1282t(char** __t5374t, uint64_t* __t5375t, uint32_t* __t5376t, uint32_t* __t5377t, uint64_t* __t5378t, uint64_t length, char** __t5379t, uint64_t* __t5380t, uint32_t* __t5381t, uint32_t* __t5382t, uint64_t* __t5383t) {
  char* allocator__buf__unsafe_ptr=*__t5374t;
  uint64_t allocator__buf__unsafe_size=*__t5375t;
  uint32_t allocator__buf__unsafe_offset=*__t5376t;
  uint32_t allocator__buf__unsafe_align=*__t5377t;
  uint64_t allocator__pos=*__t5378t;
  int __t1283t=0;
  uint64_t __t1284t__=0;
  uint64_t next_pos=0;
  uint64_t __t1285t__=0;
  char __t1286t__=0;
  uint64_t __t1287t=0;
  uint64_t __t1288t__=0;
  uint64_t pos=0;
  char* __t1289t__buf__unsafe_ptr=0;
  uint64_t __t1289t__buf__unsafe_size=0;
  uint32_t __t1289t__buf__unsafe_offset=0;
  uint32_t __t1289t__buf__unsafe_align=0;
  uint64_t __t1289t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1284t__);
  next_pos=__t1284t__;
  len__t1157t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1285t__);
  gt__t325t(next_pos,__t1285t__,&__t1286t__);
  if(__t1286t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1287t=0;
  add__t188t(allocator__pos,__t1287t,&__t1288t__);
  pos=__t1288t__;
  allocator__pos=next_pos;
  allocated__t1207t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1289t__buf__unsafe_ptr,&__t1289t__buf__unsafe_size,&__t1289t__buf__unsafe_offset,&__t1289t__buf__unsafe_align,&__t1289t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5374t=allocator__buf__unsafe_ptr;
  *__t5375t=allocator__buf__unsafe_size;
  *__t5376t=allocator__buf__unsafe_offset;
  *__t5377t=allocator__buf__unsafe_align;
  *__t5378t=allocator__pos;
  *__t5379t=__t1289t__buf__unsafe_ptr;
  *__t5380t=__t1289t__buf__unsafe_size;
  *__t5381t=__t1289t__buf__unsafe_offset;
  *__t5382t=__t1289t__buf__unsafe_align;
  *__t5383t=__t1289t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1212t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5384t, uint64_t* __t5385t, uint32_t* __t5386t, uint32_t* __t5387t, uint64_t* __t5388t) {
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
  *__t5384t=__t1213t__unsafe_ptr;
  *__t5385t=__t1213t__unsafe_size;
  *__t5386t=__t1213t__unsafe_offset;
  *__t5387t=__t1213t__unsafe_align;
  *__t5388t=__t1214t;
}

static inline __attribute__((always_inline)) void str__t1644t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5389t, uint64_t* __t5390t, uint64_t* __t5391t, char* __t5392t) {
  goto __t_return;
  __t_return:
  *__t5389t=other__unsafe_ptr;
  *__t5390t=other__dat__pos;
  *__t5391t=other__dat__length;
  *__t5392t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t1711t(char** __t5393t, uint64_t* __t5394t, uint32_t* __t5395t, uint32_t* __t5396t, uint64_t* __t5397t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5398t, uint64_t* __t5399t, uint64_t* __t5400t, char* __t5401t) {
  char* CHARS__buf__unsafe_ptr=*__t5393t;
  uint64_t CHARS__buf__unsafe_size=*__t5394t;
  uint32_t CHARS__buf__unsafe_offset=*__t5395t;
  uint32_t CHARS__buf__unsafe_align=*__t5396t;
  uint64_t CHARS__pos=*__t5397t;
  char* __t1712t__unsafe_ptr=0;
  uint64_t __t1712t__dat__pos=0;
  uint64_t __t1712t__dat__length=0;
  char __t1712t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1713t__buf__unsafe_ptr=0;
  uint64_t __t1713t__buf__unsafe_size=0;
  uint32_t __t1713t__buf__unsafe_offset=0;
  uint32_t __t1713t__buf__unsafe_align=0;
  uint64_t __t1713t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1714t=0;
  char* __t1715t__unsafe_ptr=0;
  uint64_t __t1715t__dat__pos=0;
  uint64_t __t1715t__dat__length=0;
  char __t1715t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1644t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1712t__unsafe_ptr,&__t1712t__dat__pos,&__t1712t__dat__length,&__t1712t__dat__first);
  other__unsafe_ptr=__t1712t__unsafe_ptr;
  other__dat__pos=__t1712t__dat__pos;
  other__dat__length=__t1712t__dat__length;
  other__dat__first=__t1712t__dat__first;
  __t_errcode=alloc__t1282t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1713t__buf__unsafe_ptr,&__t1713t__buf__unsafe_size,&__t1713t__buf__unsafe_offset,&__t1713t__buf__unsafe_align,&__t1713t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1713t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1713t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1713t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1713t__buf__unsafe_align;
  surface__pos=__t1713t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1611t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1715t__unsafe_ptr,&__t1715t__dat__pos,&__t1715t__dat__length,&__t1715t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5393t=CHARS__buf__unsafe_ptr;
  *__t5394t=CHARS__buf__unsafe_size;
  *__t5395t=CHARS__buf__unsafe_offset;
  *__t5396t=CHARS__buf__unsafe_align;
  *__t5397t=CHARS__pos;
  *__t5398t=__t1715t__unsafe_ptr;
  *__t5399t=__t1715t__dat__pos;
  *__t5400t=__t1715t__dat__length;
  *__t5401t=__t1715t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1209t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5402t, uint64_t* __t5403t, uint32_t* __t5404t, uint32_t* __t5405t, uint64_t* __t5406t) {
  char* __t1210t__unsafe_ptr=0;
  uint64_t __t1210t__unsafe_size=0;
  uint32_t __t1210t__unsafe_offset=0;
  uint32_t __t1210t__unsafe_align=0;
  uint64_t __t1211t=0;
  __t1210t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1210t__unsafe_size=self__buf__unsafe_size;
  __t1210t__unsafe_offset=self__buf__unsafe_offset;
  __t1210t__unsafe_align=self__buf__unsafe_align;
  __t1211t=self__pos;
  goto __t_return;
  __t_return:
  *__t5402t=__t1210t__unsafe_ptr;
  *__t5403t=__t1210t__unsafe_size;
  *__t5404t=__t1210t__unsafe_offset;
  *__t5405t=__t1210t__unsafe_align;
  *__t5406t=__t1211t;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t5407t) {
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
  *__t5407t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1663t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5408t, uint64_t* __t5409t, uint64_t* __t5410t, char* __t5411t) {
  uint64_t __t1665t__=0;
  char* __t1666t__unsafe_ptr=0;
  uint64_t __t1666t__dat__pos=0;
  uint64_t __t1666t__dat__length=0;
  char __t1666t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t401t(endpos,pos,&__t1665t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1645t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1665t__,&__t1666t__unsafe_ptr,&__t1666t__dat__pos,&__t1666t__dat__length,&__t1666t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5408t=__t1666t__unsafe_ptr;
  *__t5409t=__t1666t__dat__pos;
  *__t5410t=__t1666t__dat__length;
  *__t5411t=__t1666t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2998t(char** __t5412t, uint64_t* __t5413t, uint32_t* __t5414t, uint32_t* __t5415t, uint64_t* __t5416t, const char* _s1, const char* _s2, char** __t5417t, uint64_t* __t5418t, uint64_t* __t5419t, char* __t5420t) {
  char* CHARS__buf__unsafe_ptr=*__t5412t;
  uint64_t CHARS__buf__unsafe_size=*__t5413t;
  uint32_t CHARS__buf__unsafe_offset=*__t5414t;
  uint32_t CHARS__buf__unsafe_align=*__t5415t;
  uint64_t CHARS__pos=*__t5416t;
  char* __t2999t__unsafe_ptr=0;
  uint64_t __t2999t__dat__pos=0;
  uint64_t __t2999t__dat__length=0;
  char __t2999t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t3000t__unsafe_ptr=0;
  uint64_t __t3000t__dat__pos=0;
  uint64_t __t3000t__dat__length=0;
  char __t3000t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t3001t__=0;
  uint64_t __t3002t__=0;
  char __t3003t__=0;
  char __t3004t=0;
  uint64_t __t3005t__=0;
  char __t3006t__=0;
  char __t3007t=0;
  uint64_t __t3008t__=0;
  char* __t3009t__buf__unsafe_ptr=0;
  uint64_t __t3009t__buf__unsafe_size=0;
  uint32_t __t3009t__buf__unsafe_offset=0;
  uint32_t __t3009t__buf__unsafe_align=0;
  uint64_t __t3009t__pos=0;
  char* __t3010t____t1213t__unsafe_ptr=0;
  uint64_t __t3010t____t1213t__unsafe_size=0;
  uint32_t __t3010t____t1213t__unsafe_offset=0;
  uint32_t __t3010t____t1213t__unsafe_align=0;
  uint64_t __t3010t____t1214t=0;
  char* __t3011t__buf__unsafe_ptr=0;
  uint64_t __t3011t__buf__unsafe_size=0;
  uint32_t __t3011t__buf__unsafe_offset=0;
  uint32_t __t3011t__buf__unsafe_align=0;
  uint64_t __t3011t__pos=0;
  char* __t3012t__buf__unsafe_ptr=0;
  uint64_t __t3012t__buf__unsafe_size=0;
  uint32_t __t3012t__buf__unsafe_offset=0;
  uint32_t __t3012t__buf__unsafe_align=0;
  uint64_t __t3012t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t3013t__unsafe_ptr=0;
  uint64_t __t3013t__dat__pos=0;
  uint64_t __t3013t__dat__length=0;
  char __t3013t__dat__first=0;
  char* __t3014t____t1210t__unsafe_ptr=0;
  uint64_t __t3014t____t1210t__unsafe_size=0;
  uint32_t __t3014t____t1210t__unsafe_offset=0;
  uint32_t __t3014t____t1210t__unsafe_align=0;
  uint64_t __t3014t____t1211t=0;
  uint64_t __t3016t=0;
  uint64_t __t3017t__=0;
  char* __t3018t__unsafe_ptr=0;
  uint64_t __t3018t__dat__pos=0;
  uint64_t __t3018t__dat__length=0;
  char __t3018t__dat__first=0;
  char __t3019t__=0;
  char __t3020t__=0;
  char __t3021t=0;
  uint64_t __t3022t__=0;
  char __t3023t__=0;
  char __t3024t=0;
  uint64_t __t3025t__=0;
  char* __t3027t__unsafe_ptr=0;
  uint64_t __t3027t__dat__pos=0;
  uint64_t __t3027t__dat__length=0;
  char __t3027t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t3028t__=0;
  uint64_t __t3029t__=0;
  uint64_t __t3030t__=0;
  char* __t3031t__buf__unsafe_ptr=0;
  uint64_t __t3031t__buf__unsafe_size=0;
  uint32_t __t3031t__buf__unsafe_offset=0;
  uint32_t __t3031t__buf__unsafe_align=0;
  uint64_t __t3031t__pos=0;
  char* __t3032t____t1213t__unsafe_ptr=0;
  uint64_t __t3032t____t1213t__unsafe_size=0;
  uint32_t __t3032t____t1213t__unsafe_offset=0;
  uint32_t __t3032t____t1213t__unsafe_align=0;
  uint64_t __t3032t____t1214t=0;
  char* __t3033t__buf__unsafe_ptr=0;
  uint64_t __t3033t__buf__unsafe_size=0;
  uint32_t __t3033t__buf__unsafe_offset=0;
  uint32_t __t3033t__buf__unsafe_align=0;
  uint64_t __t3033t__pos=0;
  char* __t3034t__buf__unsafe_ptr=0;
  uint64_t __t3034t__buf__unsafe_size=0;
  uint32_t __t3034t__buf__unsafe_offset=0;
  uint32_t __t3034t__buf__unsafe_align=0;
  uint64_t __t3034t__pos=0;
  char* __t3035t__unsafe_ptr=0;
  uint64_t __t3035t__dat__pos=0;
  uint64_t __t3035t__dat__length=0;
  char __t3035t__dat__first=0;
  char* __t3036t__unsafe_ptr=0;
  uint64_t __t3036t__dat__pos=0;
  uint64_t __t3036t__dat__length=0;
  char __t3036t__dat__first=0;
  char __t3037t=0;
  char* __t3038t____t1210t__unsafe_ptr=0;
  uint64_t __t3038t____t1210t__unsafe_size=0;
  uint32_t __t3038t____t1210t__unsafe_offset=0;
  uint32_t __t3038t____t1210t__unsafe_align=0;
  uint64_t __t3038t____t1211t=0;
  uint64_t __t3040t=0;
  uint64_t __t3041t__=0;
  char* __t3042t__unsafe_ptr=0;
  uint64_t __t3042t__dat__pos=0;
  uint64_t __t3042t__dat__length=0;
  char __t3042t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1667t(_s1,&__t2999t__unsafe_ptr,&__t2999t__dat__pos,&__t2999t__dat__length,&__t2999t__dat__first);
  s1__unsafe_ptr=__t2999t__unsafe_ptr;
  s1__dat__pos=__t2999t__dat__pos;
  s1__dat__length=__t2999t__dat__length;
  s1__dat__first=__t2999t__dat__first;
  str__t1667t(_s2,&__t3000t__unsafe_ptr,&__t3000t__dat__pos,&__t3000t__dat__length,&__t3000t__dat__first);
  s2__unsafe_ptr=__t3000t__unsafe_ptr;
  s2__dat__pos=__t3000t__dat__pos;
  s2__dat__length=__t3000t__dat__length;
  s2__dat__first=__t3000t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3001t__);
  if(__t3001t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3002t__);
  eq__t134t(CHARS__pos,__t3002t__,&__t3003t__);
  __t3004t=__t3003t__;
  }
  if(__t3004t){
  add__t188t(CHARS__pos,s2__dat__length,&__t3005t__);
  lt__t301t(__t3005t__,CHARS__buf__unsafe_size,&__t3006t__);
  __t3007t=__t3006t__;
  }
  if(__t3007t){
  len__t1677t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3008t__);
  __t_errcode=alloc__t1282t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3008t__,&__t3009t__buf__unsafe_ptr,&__t3009t__buf__unsafe_size,&__t3009t__buf__unsafe_offset,&__t3009t__buf__unsafe_align,&__t3009t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1212t(__t3009t__buf__unsafe_ptr,__t3009t__buf__unsafe_size,__t3009t__buf__unsafe_offset,__t3009t__buf__unsafe_align,__t3009t__pos,&__t3010t____t1213t__unsafe_ptr,&__t3010t____t1213t__unsafe_size,&__t3010t____t1213t__unsafe_offset,&__t3010t____t1213t__unsafe_align,&__t3010t____t1214t);
  arena__t1200t(&__t3010t____t1213t__unsafe_ptr,&__t3010t____t1213t__unsafe_size,&__t3010t____t1213t__unsafe_offset,&__t3010t____t1213t__unsafe_align,__t3010t____t1214t,&__t3011t__buf__unsafe_ptr,&__t3011t__buf__unsafe_size,&__t3011t__buf__unsafe_offset,&__t3011t__buf__unsafe_align,&__t3011t__pos);
  __t3012t__buf__unsafe_ptr=__t3011t__buf__unsafe_ptr;
  __t3012t__buf__unsafe_size=__t3011t__buf__unsafe_size;
  __t3012t__buf__unsafe_offset=__t3011t__buf__unsafe_offset;
  __t3012t__buf__unsafe_align=__t3011t__buf__unsafe_align;
  __t3012t__pos=__t3011t__pos;
  surface__buf__unsafe_ptr=__t3012t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3012t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3012t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3012t__buf__unsafe_align;
  surface__pos=__t3012t__pos;
  __t_errcode=copy__t1711t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3013t__unsafe_ptr,&__t3013t__dat__pos,&__t3013t__dat__length,&__t3013t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1209t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3014t____t1210t__unsafe_ptr,&__t3014t____t1210t__unsafe_size,&__t3014t____t1210t__unsafe_offset,&__t3014t____t1210t__unsafe_align,&__t3014t____t1211t);
  __t3016t=0;
  add__t188t(s1__dat__pos,__t3016t,&__t3017t__);
  __t_errcode=str__t1663t(__t3014t____t1210t__unsafe_ptr,__t3014t____t1210t__unsafe_size,__t3014t____t1210t__unsafe_offset,__t3014t____t1210t__unsafe_align,__t3014t____t1211t,__t3017t__,&__t3018t__unsafe_ptr,&__t3018t__dat__pos,&__t3018t__dat__length,&__t3018t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3019t__);
  if(__t3019t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t3020t__);
  __t3021t=__t3020t__;
  }
  if(__t3021t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t3022t__);
  eq__t134t(s2__dat__pos,__t3022t__,&__t3023t__);
  __t3024t=__t3023t__;
  }
  if(__t3024t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t3025t__);
  __t_errcode=str__t1663t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t3025t__,s1__dat__pos,&__t3027t__unsafe_ptr,&__t3027t__dat__pos,&__t3027t__dat__length,&__t3027t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3018t__unsafe_ptr=__t3027t__unsafe_ptr;
  __t3018t__dat__pos=__t3027t__dat__pos;
  __t3018t__dat__length=__t3027t__dat__length;
  __t3018t__dat__first=__t3027t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1677t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3028t__);
  len__t1677t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3029t__);
  add__t188t(__t3028t__,__t3029t__,&__t3030t__);
  __t_errcode=alloc__t1282t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t3030t__,&__t3031t__buf__unsafe_ptr,&__t3031t__buf__unsafe_size,&__t3031t__buf__unsafe_offset,&__t3031t__buf__unsafe_align,&__t3031t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1212t(__t3031t__buf__unsafe_ptr,__t3031t__buf__unsafe_size,__t3031t__buf__unsafe_offset,__t3031t__buf__unsafe_align,__t3031t__pos,&__t3032t____t1213t__unsafe_ptr,&__t3032t____t1213t__unsafe_size,&__t3032t____t1213t__unsafe_offset,&__t3032t____t1213t__unsafe_align,&__t3032t____t1214t);
  arena__t1200t(&__t3032t____t1213t__unsafe_ptr,&__t3032t____t1213t__unsafe_size,&__t3032t____t1213t__unsafe_offset,&__t3032t____t1213t__unsafe_align,__t3032t____t1214t,&__t3033t__buf__unsafe_ptr,&__t3033t__buf__unsafe_size,&__t3033t__buf__unsafe_offset,&__t3033t__buf__unsafe_align,&__t3033t__pos);
  __t3034t__buf__unsafe_ptr=__t3033t__buf__unsafe_ptr;
  __t3034t__buf__unsafe_size=__t3033t__buf__unsafe_size;
  __t3034t__buf__unsafe_offset=__t3033t__buf__unsafe_offset;
  __t3034t__buf__unsafe_align=__t3033t__buf__unsafe_align;
  __t3034t__pos=__t3033t__pos;
  surface__buf__unsafe_ptr=__t3034t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t3034t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t3034t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t3034t__buf__unsafe_align;
  surface__pos=__t3034t__pos;
  __t_errcode=copy__t1711t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t3035t__unsafe_ptr,&__t3035t__dat__pos,&__t3035t__dat__length,&__t3035t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1711t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t3036t__unsafe_ptr,&__t3036t__dat__pos,&__t3036t__dat__length,&__t3036t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1209t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t3038t____t1210t__unsafe_ptr,&__t3038t____t1210t__unsafe_size,&__t3038t____t1210t__unsafe_offset,&__t3038t____t1210t__unsafe_align,&__t3038t____t1211t);
  __t3040t=0;
  add__t188t(prev_pos,__t3040t,&__t3041t__);
  __t_complain=str__t1663t(__t3038t____t1210t__unsafe_ptr,__t3038t____t1210t__unsafe_size,__t3038t____t1210t__unsafe_offset,__t3038t____t1210t__unsafe_align,__t3038t____t1211t,__t3041t__,&__t3042t__unsafe_ptr,&__t3042t__dat__pos,&__t3042t__dat__length,&__t3042t__dat__first);
  __t3037t=__t_complain;
  if(__t_complain){
  goto __t3037t__label;
  }
  ret__unsafe_ptr=__t3042t__unsafe_ptr;
  ret__dat__pos=__t3042t__dat__pos;
  ret__dat__length=__t3042t__dat__length;
  ret__dat__first=__t3042t__dat__first;
  __t3037t__label:__t3037t=__t3037t==0;
  __t3018t__unsafe_ptr=ret__unsafe_ptr;
  __t3018t__dat__pos=ret__dat__pos;
  __t3018t__dat__length=ret__dat__length;
  __t3018t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5412t=CHARS__buf__unsafe_ptr;
  *__t5413t=CHARS__buf__unsafe_size;
  *__t5414t=CHARS__buf__unsafe_offset;
  *__t5415t=CHARS__buf__unsafe_align;
  *__t5416t=CHARS__pos;
  *__t5417t=__t3018t__unsafe_ptr;
  *__t5418t=__t3018t__dat__pos;
  *__t5419t=__t3018t__dat__length;
  *__t5420t=__t3018t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t441t(const char* value) {
  int __t442t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t5275t() {
  uint64_t __t5278t=0;
  char* __t5279t__unsafe_ptr=0;
  uint64_t __t5279t__unsafe_size=0;
  uint32_t __t5279t__unsafe_offset=0;
  uint32_t __t5279t__unsafe_align=0;
  char* __t5281t__buf__unsafe_ptr=0;
  uint64_t __t5281t__buf__unsafe_size=0;
  uint32_t __t5281t__buf__unsafe_offset=0;
  uint32_t __t5281t__buf__unsafe_align=0;
  uint64_t __t5281t__pos=0;
  char* __t5282t__buf__unsafe_ptr=0;
  uint64_t __t5282t__buf__unsafe_size=0;
  uint32_t __t5282t__buf__unsafe_offset=0;
  uint32_t __t5282t__buf__unsafe_align=0;
  uint64_t __t5282t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char __t5283t=0;
  char* __t5286t__unsafe_ptr=0;
  uint64_t __t5286t__dat__pos=0;
  uint64_t __t5286t__dat__length=0;
  char __t5286t__dat__first=0;
  char* x__unsafe_ptr=0;
  uint64_t x__dat__pos=0;
  uint64_t x__dat__length=0;
  char x__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t5278t=120;
  __t_errcode=alloc__t1084t(__t5278t,&__t5279t__unsafe_ptr,&__t5279t__unsafe_size,&__t5279t__unsafe_offset,&__t5279t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1203t(&__t5279t__unsafe_ptr,&__t5279t__unsafe_size,&__t5279t__unsafe_offset,&__t5279t__unsafe_align,&__t5281t__buf__unsafe_ptr,&__t5281t__buf__unsafe_size,&__t5281t__buf__unsafe_offset,&__t5281t__buf__unsafe_align,&__t5281t__pos);
  __t5282t__buf__unsafe_ptr=__t5281t__buf__unsafe_ptr;
  __t5282t__buf__unsafe_size=__t5281t__buf__unsafe_size;
  __t5282t__buf__unsafe_offset=__t5281t__buf__unsafe_offset;
  __t5282t__buf__unsafe_align=__t5281t__buf__unsafe_align;
  __t5282t__pos=__t5281t__pos;
  CHARS__buf__unsafe_ptr=__t5282t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5282t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5282t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5282t__buf__unsafe_align;
  CHARS__pos=__t5282t__pos;
  __t5283t=1;
  if(__t5283t){
  __t_errcode=add__t2998t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5284t,__t5285t,&__t5286t__unsafe_ptr,&__t5286t__dat__pos,&__t5286t__dat__length,&__t5286t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t5286t__unsafe_ptr;
  x__dat__pos=__t5286t__dat__pos;
  x__dat__length=__t5286t__dat__length;
  x__dat__first=__t5286t__dat__first;
  }
  print__t441t(__t5287t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t806t(&__t5279t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t5275t();
                }