#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t431t="";
const char* const __t5310t="/";
const char* const __t5343t="no errors across ";
const char* const __t5301t="..";
const char* const __t5135t="[";
const char* const __t5276t="./tests/passing/";
const char* const __t5160t="failure";
const char* const __t5338t="PASSING ";
const char* const __t5324t="_fail_";
const char* const __t5317t=".s";
const char* const __t443t="\n";
const char* const __t5348t="FAILED ";
const char* const __t5140t="success";
const char* const __t5353t=" out of ";
const char* const __t5197t=" |- ";
const char* const __t5234t="completed";
const char* const __t5163t="X";
const char* const __t5224t="no errors found, but the run should be failing (contains _fail_ in its name)";
const char* const __t5290t="./smoll --cleanup ";
const char* const __t5357t=" tests";
const char* const __t5143t="V";
const char* const __t5150t="] ";
static const char* __t_all_errcodes[64] = {"noerr",
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
"assert failed",
"tests failed"
};

static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1582t(char** __t5368t, uint64_t* __t5369t, uint32_t* __t5370t, uint32_t* __t5371t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5368t=unsafe_ptr;
  *__t5369t=unsafe_size;
  *__t5370t=unsafe_offset;
  *__t5371t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5372t) {
  *__t5372t=to;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5373t) {
  int value=0;
  *__t5373t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5374t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5374t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5375t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5375t=__t111t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5376t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5376t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5377t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5377t=z;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t5378t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5378t=z;
}

static inline __attribute__((always_inline)) void nat__t686t(uint32_t x, uint64_t* __t5379t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5379t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5380t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5380t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5381t) {
  *__t5381t=to;
}

static inline __attribute__((always_inline)) void add__t808t(char* allocated, uint64_t offset, char** __t5382t) {
  char* element=0;
  char* __t809t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t809t__);
  goto __t_return;
  __t_return:
  *__t5382t=__t809t__;
}

static inline __attribute__((always_inline)) int get__t1149t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5383t) {
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
  *__t5383t=__t1156t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1607t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5384t, uint64_t* __t5385t, uint64_t* __t5386t, char* __t5387t) {
  goto __t_return;
  __t_return:
  *__t5384t=unsafe_ptr;
  *__t5385t=dat__pos;
  *__t5386t=dat__length;
  *__t5387t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1611t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5388t, uint64_t* __t5389t, uint64_t* __t5390t, char* __t5391t) {
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
  *__t5388t=__t1618t__unsafe_ptr;
  *__t5389t=__t1618t__dat__pos;
  *__t5390t=__t1618t__dat__length;
  *__t5391t=__t1618t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1645t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5392t, uint64_t* __t5393t, uint64_t* __t5394t, char* __t5395t) {
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
  *__t5392t=__t1651t__unsafe_ptr;
  *__t5393t=__t1651t__dat__pos;
  *__t5394t=__t1651t__dat__length;
  *__t5395t=__t1651t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1667t(const char* c, char** __t5396t, uint64_t* __t5397t, uint64_t* __t5398t, char* __t5399t) {
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
  *__t5396t=ret__unsafe_ptr;
  *__t5397t=ret__dat__pos;
  *__t5398t=ret__dat__length;
  *__t5399t=ret__dat__first;
}

static inline __attribute__((always_inline)) void supports_ansi__t468t(char* __t5400t) {
  char supports=0;
  supports=__smo_ansi_supported();
  goto __t_return;
  __t_return:
  *__t5400t=supports;
}

static inline __attribute__((always_inline)) void colors__t469t(char* __t5401t) {
  char __t470t__=0;
  char initialized=0;
  supports_ansi__t468t(&__t470t__);
  initialized=__t470t__;
  goto __t_return;
  __t_return:
  *__t5401t=initialized;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1085t(char** __t5402t, uint64_t* __t5403t, uint32_t* __t5404t, uint32_t* __t5405t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5402t=unsafe_ptr;
  *__t5403t=unsafe_size;
  *__t5404t=unsafe_offset;
  *__t5405t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t806t(char** __t5406t) {
  char* allocated=*__t5406t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5406t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5407t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5407t=z;
}

static inline __attribute__((always_inline)) void zero__t807t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t645t(char* x, char* __t5408t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5408t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5409t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5409t=z;
}

static inline __attribute__((always_inline)) int alloc__t790t(uint64_t bytes, char** __t5410t) {
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
  *__t5410t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t929t(char** __t5411t, uint64_t* __t5412t, uint32_t* __t5413t, uint32_t* __t5414t, uint64_t size, char** __t5415t, uint64_t* __t5416t, uint32_t* __t5417t, uint32_t* __t5418t) {
  char* buffer__unsafe_ptr=*__t5411t;
  uint64_t buffer__unsafe_size=*__t5412t;
  uint32_t buffer__unsafe_offset=*__t5413t;
  uint32_t buffer__unsafe_align=*__t5414t;
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
  *__t5411t=buffer__unsafe_ptr;
  *__t5412t=buffer__unsafe_size;
  *__t5413t=buffer__unsafe_offset;
  *__t5414t=buffer__unsafe_align;
  *__t5415t=buffer__unsafe_ptr;
  *__t5416t=buffer__unsafe_size;
  *__t5417t=buffer__unsafe_offset;
  *__t5418t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1084t(uint64_t size, char** __t5419t, uint64_t* __t5420t, uint32_t* __t5421t, uint32_t* __t5422t) {
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
  *__t5419t=__t1088t__unsafe_ptr;
  *__t5420t=__t1088t__unsafe_size;
  *__t5421t=__t1088t__unsafe_offset;
  *__t5422t=__t1088t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1200t(char** __t5423t, uint64_t* __t5424t, uint32_t* __t5425t, uint32_t* __t5426t, uint64_t _pos, char** __t5427t, uint64_t* __t5428t, uint32_t* __t5429t, uint32_t* __t5430t, uint64_t* __t5431t) {
  char* buf__unsafe_ptr=*__t5423t;
  uint64_t buf__unsafe_size=*__t5424t;
  uint32_t buf__unsafe_offset=*__t5425t;
  uint32_t buf__unsafe_align=*__t5426t;
  uint64_t __t1201t=0;
  uint64_t pos=0;
  __t1201t=_pos;
  pos=__t1201t;
  goto __t_return;
  __t_return:
  *__t5423t=buf__unsafe_ptr;
  *__t5424t=buf__unsafe_size;
  *__t5425t=buf__unsafe_offset;
  *__t5426t=buf__unsafe_align;
  *__t5427t=buf__unsafe_ptr;
  *__t5428t=buf__unsafe_size;
  *__t5429t=buf__unsafe_offset;
  *__t5430t=buf__unsafe_align;
  *__t5431t=pos;
}

static inline __attribute__((always_inline)) void arena__t1203t(char** __t5432t, uint64_t* __t5433t, uint32_t* __t5434t, uint32_t* __t5435t, char** __t5436t, uint64_t* __t5437t, uint32_t* __t5438t, uint32_t* __t5439t, uint64_t* __t5440t) {
  char* buf__unsafe_ptr=*__t5432t;
  uint64_t buf__unsafe_size=*__t5433t;
  uint32_t buf__unsafe_offset=*__t5434t;
  uint32_t buf__unsafe_align=*__t5435t;
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
  *__t5432t=buf__unsafe_ptr;
  *__t5433t=buf__unsafe_size;
  *__t5434t=buf__unsafe_offset;
  *__t5435t=buf__unsafe_align;
  *__t5436t=__t1205t__buf__unsafe_ptr;
  *__t5437t=__t1205t__buf__unsafe_size;
  *__t5438t=__t1205t__buf__unsafe_offset;
  *__t5439t=__t1205t__buf__unsafe_align;
  *__t5440t=__t1205t__pos;
}

static inline __attribute__((always_inline)) void len__t1157t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t5441t) {
  goto __t_return;
  __t_return:
  *__t5441t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t5442t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5442t=z;
}

static inline __attribute__((always_inline)) void allocated__t1207t(char** __t5443t, uint64_t* __t5444t, uint32_t* __t5445t, uint32_t* __t5446t, uint64_t pos, char** __t5447t, uint64_t* __t5448t, uint32_t* __t5449t, uint32_t* __t5450t, uint64_t* __t5451t) {
  char* buf__unsafe_ptr=*__t5443t;
  uint64_t buf__unsafe_size=*__t5444t;
  uint32_t buf__unsafe_offset=*__t5445t;
  uint32_t buf__unsafe_align=*__t5446t;
  goto __t_return;
  __t_return:
  *__t5443t=buf__unsafe_ptr;
  *__t5444t=buf__unsafe_size;
  *__t5445t=buf__unsafe_offset;
  *__t5446t=buf__unsafe_align;
  *__t5447t=buf__unsafe_ptr;
  *__t5448t=buf__unsafe_size;
  *__t5449t=buf__unsafe_offset;
  *__t5450t=buf__unsafe_align;
  *__t5451t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1282t(char** __t5452t, uint64_t* __t5453t, uint32_t* __t5454t, uint32_t* __t5455t, uint64_t* __t5456t, uint64_t length, char** __t5457t, uint64_t* __t5458t, uint32_t* __t5459t, uint32_t* __t5460t, uint64_t* __t5461t) {
  char* allocator__buf__unsafe_ptr=*__t5452t;
  uint64_t allocator__buf__unsafe_size=*__t5453t;
  uint32_t allocator__buf__unsafe_offset=*__t5454t;
  uint32_t allocator__buf__unsafe_align=*__t5455t;
  uint64_t allocator__pos=*__t5456t;
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
  *__t5452t=allocator__buf__unsafe_ptr;
  *__t5453t=allocator__buf__unsafe_size;
  *__t5454t=allocator__buf__unsafe_offset;
  *__t5455t=allocator__buf__unsafe_align;
  *__t5456t=allocator__pos;
  *__t5457t=__t1289t__buf__unsafe_ptr;
  *__t5458t=__t1289t__buf__unsafe_size;
  *__t5459t=__t1289t__buf__unsafe_offset;
  *__t5460t=__t1289t__buf__unsafe_align;
  *__t5461t=__t1289t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1716t(char** __t5462t, uint64_t* __t5463t, uint32_t* __t5464t, uint32_t* __t5465t, uint64_t* __t5466t, const char* _other, char** __t5467t, uint64_t* __t5468t, uint64_t* __t5469t, char* __t5470t) {
  char* CHARS__buf__unsafe_ptr=*__t5462t;
  uint64_t CHARS__buf__unsafe_size=*__t5463t;
  uint32_t CHARS__buf__unsafe_offset=*__t5464t;
  uint32_t CHARS__buf__unsafe_align=*__t5465t;
  uint64_t CHARS__pos=*__t5466t;
  char* __t1717t__unsafe_ptr=0;
  uint64_t __t1717t__dat__pos=0;
  uint64_t __t1717t__dat__length=0;
  char __t1717t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  char* __t1718t__buf__unsafe_ptr=0;
  uint64_t __t1718t__buf__unsafe_size=0;
  uint32_t __t1718t__buf__unsafe_offset=0;
  uint32_t __t1718t__buf__unsafe_align=0;
  uint64_t __t1718t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t1719t=0;
  char* __t1720t__unsafe_ptr=0;
  uint64_t __t1720t__dat__pos=0;
  uint64_t __t1720t__dat__length=0;
  char __t1720t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1667t(_other,&__t1717t__unsafe_ptr,&__t1717t__dat__pos,&__t1717t__dat__length,&__t1717t__dat__first);
  other__unsafe_ptr=__t1717t__unsafe_ptr;
  other__dat__pos=__t1717t__dat__pos;
  other__dat__length=__t1717t__dat__length;
  other__dat__first=__t1717t__dat__first;
  __t_errcode=alloc__t1282t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,other__dat__length,&__t1718t__buf__unsafe_ptr,&__t1718t__buf__unsafe_size,&__t1718t__buf__unsafe_offset,&__t1718t__buf__unsafe_align,&__t1718t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1718t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1718t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1718t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1718t__buf__unsafe_align;
  surface__pos=__t1718t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1611t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1720t__unsafe_ptr,&__t1720t__dat__pos,&__t1720t__dat__length,&__t1720t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5462t=CHARS__buf__unsafe_ptr;
  *__t5463t=CHARS__buf__unsafe_size;
  *__t5464t=CHARS__buf__unsafe_offset;
  *__t5465t=CHARS__buf__unsafe_align;
  *__t5466t=CHARS__pos;
  *__t5467t=__t1720t__unsafe_ptr;
  *__t5468t=__t1720t__dat__pos;
  *__t5469t=__t1720t__dat__length;
  *__t5470t=__t1720t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t1158t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1683t(char** __t5471t, uint64_t* __t5472t, uint32_t* __t5473t, uint32_t* __t5474t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5471t=unsafe_ptr;
  *__t5472t=unsafe_size;
  *__t5473t=unsafe_offset;
  *__t5474t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t1677t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t5475t) {
  goto __t_return;
  __t_return:
  *__t5475t=s__dat__length;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1741t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5476t, uint64_t* __t5477t, uint64_t* __t5478t, char* __t5479t) {
  char* __t1742t__unsafe_ptr=0;
  uint64_t __t1742t__unsafe_size=0;
  uint32_t __t1742t__unsafe_offset=0;
  uint32_t __t1742t__unsafe_align=0;
  uint64_t __t1743t=0;
  uint64_t __t1744t__=0;
  uint64_t __t1745t__=0;
  char* __t1746t__unsafe_ptr=0;
  uint64_t __t1746t__unsafe_size=0;
  uint32_t __t1746t__unsafe_offset=0;
  uint32_t __t1746t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  int __t1748t=0;
  uint64_t __t1749t=0;
  char* __t1750t__unsafe_ptr=0;
  uint64_t __t1750t__dat__pos=0;
  uint64_t __t1750t__dat__length=0;
  char __t1750t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1683t(&__t1742t__unsafe_ptr,&__t1742t__unsafe_size,&__t1742t__unsafe_offset,&__t1742t__unsafe_align);
  __t1743t=1;
  len__t1677t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1744t__);
  add__t188t(__t1743t,__t1744t__,&__t1745t__);
  __t_errcode=alloc__t929t(&__t1742t__unsafe_ptr,&__t1742t__unsafe_size,&__t1742t__unsafe_offset,&__t1742t__unsafe_align,__t1745t__,&__t1746t__unsafe_ptr,&__t1746t__unsafe_size,&__t1746t__unsafe_offset,&__t1746t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1746t__unsafe_ptr;
  buf__unsafe_size=__t1746t__unsafe_size;
  buf__unsafe_offset=__t1746t__unsafe_offset;
  buf__unsafe_align=__t1746t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1749t=0;
  __t_errcode=str__t1611t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1749t,other__dat__length,other__dat__first,&__t1750t__unsafe_ptr,&__t1750t__dat__pos,&__t1750t__dat__length,&__t1750t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t806t(&__t1750t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5476t=__t1750t__unsafe_ptr;
  *__t5477t=__t1750t__dat__pos;
  *__t5478t=__t1750t__dat__length;
  *__t5479t=__t1750t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1765t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5480t, char** __t5481t, uint64_t* __t5482t, uint64_t* __t5483t, char* __t5484t) {
  int __t1766t=0;
  char* __t1768t__unsafe_ptr=0;
  uint64_t __t1768t__dat__pos=0;
  uint64_t __t1768t__dat__length=0;
  char __t1768t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1770t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t1158t();
  __t_errcode=copy_null_terminated__t1741t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1768t__unsafe_ptr,&__t1768t__dat__pos,&__t1768t__dat__length,&__t1768t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1768t__unsafe_ptr;
  str__dat__pos=__t1768t__dat__pos;
  str__dat__length=__t1768t__dat__length;
  str__dat__first=__t1768t__dat__first;
  add__t808t(str__unsafe_ptr,str__dat__pos,&__t1770t__);
  _ret=__t1770t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t806t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5480t=cstr;
  *__t5481t=str__unsafe_ptr;
  *__t5482t=str__dat__pos;
  *__t5483t=str__dat__length;
  *__t5484t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1775t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5485t) {
  goto __t_return;
  __t_return:
  *__t5485t=value__cstr;
}

static inline __attribute__((always_inline)) void closedir__t4981t(char* unsafe_ptr) {
  int __t4983t=0;
  if(unsafe_ptr){
  closedir((DIR*)unsafe_ptr);
  unsafe_ptr=0;
  }
}

static inline __attribute__((always_inline)) int open__t4984t(const char* path, char** __t5486t) {
  int __t4986t=0;
  char* unsafe_ptr=0;
  char __t4988t__=0;
  char __t4989t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)opendir(path);
  exists__t645t(unsafe_ptr,&__t4988t__);
  not__t42t(__t4988t__,&__t4989t__);
  if(__t4989t__){
  __t_errcode=49;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t4981t(unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5486t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

int open__t4991t(char* path__unsafe_ptr, uint64_t path__dat__pos, uint64_t path__dat__length, char path__dat__first, char** __t5487t) {
  const char* __t4992t__cstr=0;
  char* __t4992t__str__unsafe_ptr=0;
  uint64_t __t4992t__str__dat__pos=0;
  uint64_t __t4992t__str__dat__length=0;
  char __t4992t__str__dat__first=0;
  const char* __t4994t__=0;
  char* __t4995t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1765t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t4992t__cstr,&__t4992t__str__unsafe_ptr,&__t4992t__str__dat__pos,&__t4992t__str__dat__length,&__t4992t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1775t(__t4992t__cstr,__t4992t__str__unsafe_ptr,__t4992t__str__dat__pos,__t4992t__str__dat__length,__t4992t__str__dat__first,&__t4994t__);
  __t_errcode=open__t4984t(__t4994t__,&__t4995t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:closedir__t4981t(__t4995t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5487t=__t4995t__unsafe_ptr;
  
  __t_skip_returns:free__t806t(&__t4992t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int raw_entry__t5003t(char** __t5488t, const char** __t5489t) {
  char* f__unsafe_ptr=*__t5488t;
  char __t5004t__=0;
  char __t5005t__=0;
  char* de=0;
  char __t5006t__=0;
  char __t5007t__=0;
  const char* dirname=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t645t(f__unsafe_ptr,&__t5004t__);
  not__t42t(__t5004t__,&__t5005t__);
  if(__t5005t__){
  __t_errcode=60;
  goto __t_failure;
  }
  de=(char*)readdir((DIR*)f__unsafe_ptr);
  exists__t645t(de,&__t5006t__);
  not__t42t(__t5006t__,&__t5007t__);
  if(__t5007t__){
  __t_errcode=61;
  goto __t_failure;
  }
  dirname=((struct dirent*)de)->d_name;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5488t=f__unsafe_ptr;
  *__t5489t=dirname;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int entry__t5008t(char** __t5490t, char** __t5491t, uint64_t* __t5492t, uint64_t* __t5493t, char* __t5494t) {
  char* f__unsafe_ptr=*__t5490t;
  const char* __t5009t__=0;
  char* __t5010t__unsafe_ptr=0;
  uint64_t __t5010t__dat__pos=0;
  uint64_t __t5010t__dat__length=0;
  char __t5010t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=raw_entry__t5003t(&f__unsafe_ptr,&__t5009t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1667t(__t5009t__,&__t5010t__unsafe_ptr,&__t5010t__dat__pos,&__t5010t__dat__length,&__t5010t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5490t=f__unsafe_ptr;
  *__t5491t=__t5010t__unsafe_ptr;
  *__t5492t=__t5010t__dat__pos;
  *__t5493t=__t5010t__dat__length;
  *__t5494t=__t5010t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int mutget__t5074t(char** __t5495t, uint64_t __t_anon1, char** __t5496t, uint64_t* __t5497t, uint64_t* __t5498t, char* __t5499t) {
  char* data__unsafe_ptr=*__t5495t;
  char* __t5075t__unsafe_ptr=0;
  uint64_t __t5075t__dat__pos=0;
  uint64_t __t5075t__dat__length=0;
  char __t5075t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=entry__t5008t(&data__unsafe_ptr,&__t5075t__unsafe_ptr,&__t5075t__dat__pos,&__t5075t__dat__length,&__t5075t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5495t=data__unsafe_ptr;
  *__t5496t=__t5075t__unsafe_ptr;
  *__t5497t=__t5075t__dat__pos;
  *__t5498t=__t5075t__dat__length;
  *__t5499t=__t5075t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char__t1679t(const char* s, char* __t5500t) {
  char c=0;
  if(s){
  c=*s;
  }
  goto __t_return;
  __t_return:
  *__t5500t=c;
}

static inline __attribute__((always_inline)) void neq__t1681t(char x, char y, char* __t5501t) {
  char z=0;
  z=(x!=y);
  goto __t_return;
  __t_return:
  *__t5501t=z;
}

static inline __attribute__((always_inline)) void eq__t1782t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __t5502t) {
  uint64_t __t1783t__=0;
  uint64_t n=0;
  uint64_t __t1784t__=0;
  char __t1785t__=0;
  char __t1786t=0;
  char __t1787t__=0;
  char __t1788t=0;
  char z=0;
  len__t1677t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__t1783t__);
  n=__t1783t__;
  len__t1677t(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__t1784t__);
  neq__t158t(n,__t1784t__,&__t1785t__);
  if(__t1785t__){
  __t1786t=0;
  goto __t_return;
  }
  neq__t1681t(x__dat__first,y__dat__first,&__t1787t__);
  if(__t1787t__){
  __t1788t=0;
  __t1786t=__t1788t;
  goto __t_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __t1786t=z;
  goto __t_return;
  __t_return:
  *__t5502t=__t1786t;
}

void eq__t1789t(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, const char* y, char* __t5503t) {
  char __t1790t__=0;
  char __t1791t__=0;
  char __t1792t=0;
  char* __t1793t__unsafe_ptr=0;
  uint64_t __t1793t__dat__pos=0;
  uint64_t __t1793t__dat__length=0;
  char __t1793t__dat__first=0;
  char __t1794t__=0;
  char__t1679t(y,&__t1790t__);
  neq__t1681t(x__dat__first,__t1790t__,&__t1791t__);
  if(__t1791t__){
  __t1792t=0;
  goto __t_return;
  }
  str__t1667t(y,&__t1793t__unsafe_ptr,&__t1793t__dat__pos,&__t1793t__dat__length,&__t1793t__dat__first);
  eq__t1782t(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,__t1793t__unsafe_ptr,__t1793t__dat__pos,__t1793t__dat__length,__t1793t__dat__first,&__t1794t__);
  __t1792t=__t1794t__;
  goto __t_return;
  __t_return:
  *__t5503t=__t1792t;
}

int unsafe_temp__t1751t(char* prefix__unsafe_ptr, uint64_t prefix__dat__pos, uint64_t prefix__dat__length, char prefix__dat__first, char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t5504t, char** __t5505t, uint64_t* __t5506t, uint64_t* __t5507t, char* __t5508t) {
  int __t1752t=0;
  char* __t1753t__unsafe_ptr=0;
  uint64_t __t1753t__unsafe_size=0;
  uint32_t __t1753t__unsafe_offset=0;
  uint32_t __t1753t__unsafe_align=0;
  uint64_t __t1754t=0;
  uint64_t __t1755t__=0;
  uint64_t __t1756t__=0;
  char* __t1757t__unsafe_ptr=0;
  uint64_t __t1757t__unsafe_size=0;
  uint32_t __t1757t__unsafe_offset=0;
  uint32_t __t1757t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1759t=0;
  char __t1760t__=0;
  char first_character=0;
  uint64_t __t1761t=0;
  char* __t1762t__unsafe_ptr=0;
  uint64_t __t1762t__dat__pos=0;
  uint64_t __t1762t__dat__length=0;
  char __t1762t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1763t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1683t(&__t1753t__unsafe_ptr,&__t1753t__unsafe_size,&__t1753t__unsafe_offset,&__t1753t__unsafe_align);
  __t1754t=1;
  add__t188t(__t1754t,other__dat__length,&__t1755t__);
  add__t188t(__t1755t__,prefix__dat__length,&__t1756t__);
  __t_errcode=alloc__t929t(&__t1753t__unsafe_ptr,&__t1753t__unsafe_size,&__t1753t__unsafe_offset,&__t1753t__unsafe_align,__t1756t__,&__t1757t__unsafe_ptr,&__t1757t__unsafe_size,&__t1757t__unsafe_offset,&__t1757t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1757t__unsafe_ptr;
  buf__unsafe_size=__t1757t__unsafe_size;
  buf__unsafe_offset=__t1757t__unsafe_offset;
  buf__unsafe_align=__t1757t__unsafe_align;
  memcpy(buf__unsafe_ptr,prefix__unsafe_ptr+prefix__dat__pos,prefix__dat__length);
  memcpy(buf__unsafe_ptr+prefix__dat__length,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length+prefix__dat__length;
  *endpos=0;
  __t1759t=0;
  eq__t134t(prefix__dat__length,__t1759t,&__t1760t__);
  if(__t1760t__){
  first_character=prefix__dat__first;
  }
  else{
  first_character=other__dat__first;
  }
  __t1761t=0;
  __t_errcode=str__t1611t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1761t,other__dat__length,first_character,&__t1762t__unsafe_ptr,&__t1762t__dat__pos,&__t1762t__dat__length,&__t1762t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1762t__unsafe_ptr;
  str__dat__pos=__t1762t__dat__pos;
  str__dat__length=__t1762t__dat__length;
  str__dat__first=__t1762t__dat__first;
  add__t808t(str__unsafe_ptr,str__dat__pos,&__t1763t__);
  _ret=__t1763t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:free__t806t(&str__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5504t=cstr;
  *__t5505t=str__unsafe_ptr;
  *__t5506t=str__dat__pos;
  *__t5507t=str__dat__length;
  *__t5508t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1774t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5509t) {
  goto __t_return;
  __t_return:
  *__t5509t=value__cstr;
}

static inline __attribute__((always_inline)) void is_dir__t4908t(const char* path, char* __t5510t) {
  int __t4910t=0;
  char exists=0;
  exists=__smo_is_dir(path);
  goto __t_return;
  __t_return:
  *__t5510t=exists;
}

static inline __attribute__((always_inline)) int is_dir__t4918t(char* path__head__unsafe_ptr, uint64_t path__head__dat__pos, uint64_t path__head__dat__length, char path__head__dat__first, char* path__body__unsafe_ptr, uint64_t path__body__dat__pos, uint64_t path__body__dat__length, char path__body__dat__first, char* __t5511t) {
  int __t4920t=0;
  const char* __t4921t__cstr=0;
  char* __t4921t__str__unsafe_ptr=0;
  uint64_t __t4921t__str__dat__pos=0;
  uint64_t __t4921t__str__dat__length=0;
  char __t4921t__str__dat__first=0;
  const char* __t4923t__=0;
  char __t4924t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1751t(path__head__unsafe_ptr,path__head__dat__pos,path__head__dat__length,path__head__dat__first,path__body__unsafe_ptr,path__body__dat__pos,path__body__dat__length,path__body__dat__first,&__t4921t__cstr,&__t4921t__str__unsafe_ptr,&__t4921t__str__dat__pos,&__t4921t__str__dat__length,&__t4921t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1774t(__t4921t__cstr,__t4921t__str__unsafe_ptr,__t4921t__str__dat__pos,__t4921t__str__dat__length,__t4921t__str__dat__first,&__t4923t__);
  is_dir__t4908t(__t4923t__,&__t4924t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5511t=__t4924t__;
  
  __t_skip_returns:free__t806t(&__t4921t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sub__t409t(uint64_t x, uint64_t y, uint64_t* __t5512t) {
  uint64_t z=0;
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5512t=z;
}

static inline __attribute__((always_inline)) void reuse__t5269t(char** __t5513t, uint64_t* __t5514t, uint32_t* __t5515t, uint32_t* __t5516t, uint64_t* __t5517t, uint64_t* __t5518t) {
  char* arn__buf__unsafe_ptr=*__t5513t;
  uint64_t arn__buf__unsafe_size=*__t5514t;
  uint32_t arn__buf__unsafe_offset=*__t5515t;
  uint32_t arn__buf__unsafe_align=*__t5516t;
  uint64_t arn__pos=*__t5517t;
  uint64_t __t5270t=0;
  uint64_t __t5271t__=0;
  uint64_t tracked_position=0;
  uint64_t __t5272t=0;
  uint64_t __t5274t__=0;
  __t5270t=0;
  add__t188t(__t5270t,arn__pos,&__t5271t__);
  tracked_position=__t5271t__;
  goto __t_return;
  __t_return:
  *__t5513t=arn__buf__unsafe_ptr;
  *__t5514t=arn__buf__unsafe_size;
  *__t5515t=arn__buf__unsafe_offset;
  *__t5516t=arn__buf__unsafe_align;
  *__t5517t=arn__pos;
  *__t5518t=tracked_position;
}

static inline __attribute__((always_inline)) void str__t1644t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t5519t, uint64_t* __t5520t, uint64_t* __t5521t, char* __t5522t) {
  goto __t_return;
  __t_return:
  *__t5519t=other__unsafe_ptr;
  *__t5520t=other__dat__pos;
  *__t5521t=other__dat__length;
  *__t5522t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t162t(char* x, char* y, char* __t5523t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t5523t=z;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t5524t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5524t=z;
}

static inline __attribute__((always_inline)) void status__t1212t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5525t, uint64_t* __t5526t, uint32_t* __t5527t, uint32_t* __t5528t, uint64_t* __t5529t) {
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
  *__t5525t=__t1213t__unsafe_ptr;
  *__t5526t=__t1213t__unsafe_size;
  *__t5527t=__t1213t__unsafe_offset;
  *__t5528t=__t1213t__unsafe_align;
  *__t5529t=__t1214t;
}

static inline __attribute__((always_inline)) int copy__t1711t(char** __t5530t, uint64_t* __t5531t, uint32_t* __t5532t, uint32_t* __t5533t, uint64_t* __t5534t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t5535t, uint64_t* __t5536t, uint64_t* __t5537t, char* __t5538t) {
  char* CHARS__buf__unsafe_ptr=*__t5530t;
  uint64_t CHARS__buf__unsafe_size=*__t5531t;
  uint32_t CHARS__buf__unsafe_offset=*__t5532t;
  uint32_t CHARS__buf__unsafe_align=*__t5533t;
  uint64_t CHARS__pos=*__t5534t;
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
  *__t5530t=CHARS__buf__unsafe_ptr;
  *__t5531t=CHARS__buf__unsafe_size;
  *__t5532t=CHARS__buf__unsafe_offset;
  *__t5533t=CHARS__buf__unsafe_align;
  *__t5534t=CHARS__pos;
  *__t5535t=__t1715t__unsafe_ptr;
  *__t5536t=__t1715t__dat__pos;
  *__t5537t=__t1715t__dat__length;
  *__t5538t=__t1715t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1209t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t5539t, uint64_t* __t5540t, uint32_t* __t5541t, uint32_t* __t5542t, uint64_t* __t5543t) {
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
  *__t5539t=__t1210t__unsafe_ptr;
  *__t5540t=__t1210t__unsafe_size;
  *__t5541t=__t1210t__unsafe_offset;
  *__t5542t=__t1210t__unsafe_align;
  *__t5543t=__t1211t;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t5544t) {
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
  *__t5544t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1663t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t5545t, uint64_t* __t5546t, uint64_t* __t5547t, char* __t5548t) {
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
  *__t5545t=__t1666t__unsafe_ptr;
  *__t5546t=__t1666t__dat__pos;
  *__t5547t=__t1666t__dat__length;
  *__t5548t=__t1666t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2863t(char** __t5549t, uint64_t* __t5550t, uint32_t* __t5551t, uint32_t* __t5552t, uint64_t* __t5553t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t5554t, uint64_t* __t5555t, uint64_t* __t5556t, char* __t5557t) {
  char* CHARS__buf__unsafe_ptr=*__t5549t;
  uint64_t CHARS__buf__unsafe_size=*__t5550t;
  uint32_t CHARS__buf__unsafe_offset=*__t5551t;
  uint32_t CHARS__buf__unsafe_align=*__t5552t;
  uint64_t CHARS__pos=*__t5553t;
  char* __t2864t__unsafe_ptr=0;
  uint64_t __t2864t__dat__pos=0;
  uint64_t __t2864t__dat__length=0;
  char __t2864t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2865t__unsafe_ptr=0;
  uint64_t __t2865t__dat__pos=0;
  uint64_t __t2865t__dat__length=0;
  char __t2865t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2866t__=0;
  uint64_t __t2867t__=0;
  char __t2868t__=0;
  char __t2869t=0;
  uint64_t __t2870t__=0;
  char __t2871t__=0;
  char __t2872t=0;
  uint64_t __t2873t__=0;
  char* __t2874t__buf__unsafe_ptr=0;
  uint64_t __t2874t__buf__unsafe_size=0;
  uint32_t __t2874t__buf__unsafe_offset=0;
  uint32_t __t2874t__buf__unsafe_align=0;
  uint64_t __t2874t__pos=0;
  char* __t2875t____t1213t__unsafe_ptr=0;
  uint64_t __t2875t____t1213t__unsafe_size=0;
  uint32_t __t2875t____t1213t__unsafe_offset=0;
  uint32_t __t2875t____t1213t__unsafe_align=0;
  uint64_t __t2875t____t1214t=0;
  char* __t2876t__buf__unsafe_ptr=0;
  uint64_t __t2876t__buf__unsafe_size=0;
  uint32_t __t2876t__buf__unsafe_offset=0;
  uint32_t __t2876t__buf__unsafe_align=0;
  uint64_t __t2876t__pos=0;
  char* __t2877t__buf__unsafe_ptr=0;
  uint64_t __t2877t__buf__unsafe_size=0;
  uint32_t __t2877t__buf__unsafe_offset=0;
  uint32_t __t2877t__buf__unsafe_align=0;
  uint64_t __t2877t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2878t__unsafe_ptr=0;
  uint64_t __t2878t__dat__pos=0;
  uint64_t __t2878t__dat__length=0;
  char __t2878t__dat__first=0;
  char* __t2879t____t1210t__unsafe_ptr=0;
  uint64_t __t2879t____t1210t__unsafe_size=0;
  uint32_t __t2879t____t1210t__unsafe_offset=0;
  uint32_t __t2879t____t1210t__unsafe_align=0;
  uint64_t __t2879t____t1211t=0;
  uint64_t __t2881t=0;
  uint64_t __t2882t__=0;
  char* __t2883t__unsafe_ptr=0;
  uint64_t __t2883t__dat__pos=0;
  uint64_t __t2883t__dat__length=0;
  char __t2883t__dat__first=0;
  char __t2884t__=0;
  char __t2885t__=0;
  char __t2886t=0;
  uint64_t __t2887t__=0;
  char __t2888t__=0;
  char __t2889t=0;
  uint64_t __t2890t__=0;
  char* __t2892t__unsafe_ptr=0;
  uint64_t __t2892t__dat__pos=0;
  uint64_t __t2892t__dat__length=0;
  char __t2892t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2893t__=0;
  uint64_t __t2894t__=0;
  uint64_t __t2895t__=0;
  char* __t2896t__buf__unsafe_ptr=0;
  uint64_t __t2896t__buf__unsafe_size=0;
  uint32_t __t2896t__buf__unsafe_offset=0;
  uint32_t __t2896t__buf__unsafe_align=0;
  uint64_t __t2896t__pos=0;
  char* __t2897t____t1213t__unsafe_ptr=0;
  uint64_t __t2897t____t1213t__unsafe_size=0;
  uint32_t __t2897t____t1213t__unsafe_offset=0;
  uint32_t __t2897t____t1213t__unsafe_align=0;
  uint64_t __t2897t____t1214t=0;
  char* __t2898t__buf__unsafe_ptr=0;
  uint64_t __t2898t__buf__unsafe_size=0;
  uint32_t __t2898t__buf__unsafe_offset=0;
  uint32_t __t2898t__buf__unsafe_align=0;
  uint64_t __t2898t__pos=0;
  char* __t2899t__buf__unsafe_ptr=0;
  uint64_t __t2899t__buf__unsafe_size=0;
  uint32_t __t2899t__buf__unsafe_offset=0;
  uint32_t __t2899t__buf__unsafe_align=0;
  uint64_t __t2899t__pos=0;
  char* __t2900t__unsafe_ptr=0;
  uint64_t __t2900t__dat__pos=0;
  uint64_t __t2900t__dat__length=0;
  char __t2900t__dat__first=0;
  char* __t2901t__unsafe_ptr=0;
  uint64_t __t2901t__dat__pos=0;
  uint64_t __t2901t__dat__length=0;
  char __t2901t__dat__first=0;
  char __t2902t=0;
  char* __t2903t____t1210t__unsafe_ptr=0;
  uint64_t __t2903t____t1210t__unsafe_size=0;
  uint32_t __t2903t____t1210t__unsafe_offset=0;
  uint32_t __t2903t____t1210t__unsafe_align=0;
  uint64_t __t2903t____t1211t=0;
  uint64_t __t2905t=0;
  uint64_t __t2906t__=0;
  char* __t2907t__unsafe_ptr=0;
  uint64_t __t2907t__dat__pos=0;
  uint64_t __t2907t__dat__length=0;
  char __t2907t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1644t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2864t__unsafe_ptr,&__t2864t__dat__pos,&__t2864t__dat__length,&__t2864t__dat__first);
  s1__unsafe_ptr=__t2864t__unsafe_ptr;
  s1__dat__pos=__t2864t__dat__pos;
  s1__dat__length=__t2864t__dat__length;
  s1__dat__first=__t2864t__dat__first;
  str__t1644t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t2865t__unsafe_ptr,&__t2865t__dat__pos,&__t2865t__dat__length,&__t2865t__dat__first);
  s2__unsafe_ptr=__t2865t__unsafe_ptr;
  s2__dat__pos=__t2865t__dat__pos;
  s2__dat__length=__t2865t__dat__length;
  s2__dat__first=__t2865t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2866t__);
  if(__t2866t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2867t__);
  eq__t134t(CHARS__pos,__t2867t__,&__t2868t__);
  __t2869t=__t2868t__;
  }
  if(__t2869t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2870t__);
  lt__t301t(__t2870t__,CHARS__buf__unsafe_size,&__t2871t__);
  __t2872t=__t2871t__;
  }
  if(__t2872t){
  len__t1677t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2873t__);
  __t_errcode=alloc__t1282t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2873t__,&__t2874t__buf__unsafe_ptr,&__t2874t__buf__unsafe_size,&__t2874t__buf__unsafe_offset,&__t2874t__buf__unsafe_align,&__t2874t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1212t(__t2874t__buf__unsafe_ptr,__t2874t__buf__unsafe_size,__t2874t__buf__unsafe_offset,__t2874t__buf__unsafe_align,__t2874t__pos,&__t2875t____t1213t__unsafe_ptr,&__t2875t____t1213t__unsafe_size,&__t2875t____t1213t__unsafe_offset,&__t2875t____t1213t__unsafe_align,&__t2875t____t1214t);
  arena__t1200t(&__t2875t____t1213t__unsafe_ptr,&__t2875t____t1213t__unsafe_size,&__t2875t____t1213t__unsafe_offset,&__t2875t____t1213t__unsafe_align,__t2875t____t1214t,&__t2876t__buf__unsafe_ptr,&__t2876t__buf__unsafe_size,&__t2876t__buf__unsafe_offset,&__t2876t__buf__unsafe_align,&__t2876t__pos);
  __t2877t__buf__unsafe_ptr=__t2876t__buf__unsafe_ptr;
  __t2877t__buf__unsafe_size=__t2876t__buf__unsafe_size;
  __t2877t__buf__unsafe_offset=__t2876t__buf__unsafe_offset;
  __t2877t__buf__unsafe_align=__t2876t__buf__unsafe_align;
  __t2877t__pos=__t2876t__pos;
  surface__buf__unsafe_ptr=__t2877t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2877t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2877t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2877t__buf__unsafe_align;
  surface__pos=__t2877t__pos;
  __t_errcode=copy__t1711t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2878t__unsafe_ptr,&__t2878t__dat__pos,&__t2878t__dat__length,&__t2878t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1209t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2879t____t1210t__unsafe_ptr,&__t2879t____t1210t__unsafe_size,&__t2879t____t1210t__unsafe_offset,&__t2879t____t1210t__unsafe_align,&__t2879t____t1211t);
  __t2881t=0;
  add__t188t(s1__dat__pos,__t2881t,&__t2882t__);
  __t_errcode=str__t1663t(__t2879t____t1210t__unsafe_ptr,__t2879t____t1210t__unsafe_size,__t2879t____t1210t__unsafe_offset,__t2879t____t1210t__unsafe_align,__t2879t____t1211t,__t2882t__,&__t2883t__unsafe_ptr,&__t2883t__dat__pos,&__t2883t__dat__length,&__t2883t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2884t__);
  if(__t2884t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2885t__);
  __t2886t=__t2885t__;
  }
  if(__t2886t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2887t__);
  eq__t134t(s2__dat__pos,__t2887t__,&__t2888t__);
  __t2889t=__t2888t__;
  }
  if(__t2889t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2890t__);
  __t_errcode=str__t1663t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2890t__,s1__dat__pos,&__t2892t__unsafe_ptr,&__t2892t__dat__pos,&__t2892t__dat__length,&__t2892t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2883t__unsafe_ptr=__t2892t__unsafe_ptr;
  __t2883t__dat__pos=__t2892t__dat__pos;
  __t2883t__dat__length=__t2892t__dat__length;
  __t2883t__dat__first=__t2892t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1677t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2893t__);
  len__t1677t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2894t__);
  add__t188t(__t2893t__,__t2894t__,&__t2895t__);
  __t_errcode=alloc__t1282t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2895t__,&__t2896t__buf__unsafe_ptr,&__t2896t__buf__unsafe_size,&__t2896t__buf__unsafe_offset,&__t2896t__buf__unsafe_align,&__t2896t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1212t(__t2896t__buf__unsafe_ptr,__t2896t__buf__unsafe_size,__t2896t__buf__unsafe_offset,__t2896t__buf__unsafe_align,__t2896t__pos,&__t2897t____t1213t__unsafe_ptr,&__t2897t____t1213t__unsafe_size,&__t2897t____t1213t__unsafe_offset,&__t2897t____t1213t__unsafe_align,&__t2897t____t1214t);
  arena__t1200t(&__t2897t____t1213t__unsafe_ptr,&__t2897t____t1213t__unsafe_size,&__t2897t____t1213t__unsafe_offset,&__t2897t____t1213t__unsafe_align,__t2897t____t1214t,&__t2898t__buf__unsafe_ptr,&__t2898t__buf__unsafe_size,&__t2898t__buf__unsafe_offset,&__t2898t__buf__unsafe_align,&__t2898t__pos);
  __t2899t__buf__unsafe_ptr=__t2898t__buf__unsafe_ptr;
  __t2899t__buf__unsafe_size=__t2898t__buf__unsafe_size;
  __t2899t__buf__unsafe_offset=__t2898t__buf__unsafe_offset;
  __t2899t__buf__unsafe_align=__t2898t__buf__unsafe_align;
  __t2899t__pos=__t2898t__pos;
  surface__buf__unsafe_ptr=__t2899t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2899t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2899t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2899t__buf__unsafe_align;
  surface__pos=__t2899t__pos;
  __t_errcode=copy__t1711t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2900t__unsafe_ptr,&__t2900t__dat__pos,&__t2900t__dat__length,&__t2900t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1711t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2901t__unsafe_ptr,&__t2901t__dat__pos,&__t2901t__dat__length,&__t2901t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1209t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2903t____t1210t__unsafe_ptr,&__t2903t____t1210t__unsafe_size,&__t2903t____t1210t__unsafe_offset,&__t2903t____t1210t__unsafe_align,&__t2903t____t1211t);
  __t2905t=0;
  add__t188t(prev_pos,__t2905t,&__t2906t__);
  __t_complain=str__t1663t(__t2903t____t1210t__unsafe_ptr,__t2903t____t1210t__unsafe_size,__t2903t____t1210t__unsafe_offset,__t2903t____t1210t__unsafe_align,__t2903t____t1211t,__t2906t__,&__t2907t__unsafe_ptr,&__t2907t__dat__pos,&__t2907t__dat__length,&__t2907t__dat__first);
  __t2902t=__t_complain;
  if(__t_complain){
  goto __t2902t__label;
  }
  ret__unsafe_ptr=__t2907t__unsafe_ptr;
  ret__dat__pos=__t2907t__dat__pos;
  ret__dat__length=__t2907t__dat__length;
  ret__dat__first=__t2907t__dat__first;
  __t2902t__label:__t2902t=__t2902t==0;
  __t2883t__unsafe_ptr=ret__unsafe_ptr;
  __t2883t__dat__pos=ret__dat__pos;
  __t2883t__dat__length=ret__dat__length;
  __t2883t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5549t=CHARS__buf__unsafe_ptr;
  *__t5550t=CHARS__buf__unsafe_size;
  *__t5551t=CHARS__buf__unsafe_offset;
  *__t5552t=CHARS__buf__unsafe_align;
  *__t5553t=CHARS__pos;
  *__t5554t=__t2883t__unsafe_ptr;
  *__t5555t=__t2883t__dat__pos;
  *__t5556t=__t2883t__dat__length;
  *__t5557t=__t2883t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2908t(char** __t5558t, uint64_t* __t5559t, uint32_t* __t5560t, uint32_t* __t5561t, uint64_t* __t5562t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, const char* _s2, char** __t5563t, uint64_t* __t5564t, uint64_t* __t5565t, char* __t5566t) {
  char* CHARS__buf__unsafe_ptr=*__t5558t;
  uint64_t CHARS__buf__unsafe_size=*__t5559t;
  uint32_t CHARS__buf__unsafe_offset=*__t5560t;
  uint32_t CHARS__buf__unsafe_align=*__t5561t;
  uint64_t CHARS__pos=*__t5562t;
  char* __t2909t__unsafe_ptr=0;
  uint64_t __t2909t__dat__pos=0;
  uint64_t __t2909t__dat__length=0;
  char __t2909t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2910t__unsafe_ptr=0;
  uint64_t __t2910t__dat__pos=0;
  uint64_t __t2910t__dat__length=0;
  char __t2910t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2911t__=0;
  uint64_t __t2912t__=0;
  char __t2913t__=0;
  char __t2914t=0;
  uint64_t __t2915t__=0;
  char __t2916t__=0;
  char __t2917t=0;
  uint64_t __t2918t__=0;
  char* __t2919t__buf__unsafe_ptr=0;
  uint64_t __t2919t__buf__unsafe_size=0;
  uint32_t __t2919t__buf__unsafe_offset=0;
  uint32_t __t2919t__buf__unsafe_align=0;
  uint64_t __t2919t__pos=0;
  char* __t2920t____t1213t__unsafe_ptr=0;
  uint64_t __t2920t____t1213t__unsafe_size=0;
  uint32_t __t2920t____t1213t__unsafe_offset=0;
  uint32_t __t2920t____t1213t__unsafe_align=0;
  uint64_t __t2920t____t1214t=0;
  char* __t2921t__buf__unsafe_ptr=0;
  uint64_t __t2921t__buf__unsafe_size=0;
  uint32_t __t2921t__buf__unsafe_offset=0;
  uint32_t __t2921t__buf__unsafe_align=0;
  uint64_t __t2921t__pos=0;
  char* __t2922t__buf__unsafe_ptr=0;
  uint64_t __t2922t__buf__unsafe_size=0;
  uint32_t __t2922t__buf__unsafe_offset=0;
  uint32_t __t2922t__buf__unsafe_align=0;
  uint64_t __t2922t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2923t__unsafe_ptr=0;
  uint64_t __t2923t__dat__pos=0;
  uint64_t __t2923t__dat__length=0;
  char __t2923t__dat__first=0;
  char* __t2924t____t1210t__unsafe_ptr=0;
  uint64_t __t2924t____t1210t__unsafe_size=0;
  uint32_t __t2924t____t1210t__unsafe_offset=0;
  uint32_t __t2924t____t1210t__unsafe_align=0;
  uint64_t __t2924t____t1211t=0;
  uint64_t __t2926t=0;
  uint64_t __t2927t__=0;
  char* __t2928t__unsafe_ptr=0;
  uint64_t __t2928t__dat__pos=0;
  uint64_t __t2928t__dat__length=0;
  char __t2928t__dat__first=0;
  char __t2929t__=0;
  char __t2930t__=0;
  char __t2931t=0;
  uint64_t __t2932t__=0;
  char __t2933t__=0;
  char __t2934t=0;
  uint64_t __t2935t__=0;
  char* __t2937t__unsafe_ptr=0;
  uint64_t __t2937t__dat__pos=0;
  uint64_t __t2937t__dat__length=0;
  char __t2937t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2938t__=0;
  uint64_t __t2939t__=0;
  uint64_t __t2940t__=0;
  char* __t2941t__buf__unsafe_ptr=0;
  uint64_t __t2941t__buf__unsafe_size=0;
  uint32_t __t2941t__buf__unsafe_offset=0;
  uint32_t __t2941t__buf__unsafe_align=0;
  uint64_t __t2941t__pos=0;
  char* __t2942t____t1213t__unsafe_ptr=0;
  uint64_t __t2942t____t1213t__unsafe_size=0;
  uint32_t __t2942t____t1213t__unsafe_offset=0;
  uint32_t __t2942t____t1213t__unsafe_align=0;
  uint64_t __t2942t____t1214t=0;
  char* __t2943t__buf__unsafe_ptr=0;
  uint64_t __t2943t__buf__unsafe_size=0;
  uint32_t __t2943t__buf__unsafe_offset=0;
  uint32_t __t2943t__buf__unsafe_align=0;
  uint64_t __t2943t__pos=0;
  char* __t2944t__buf__unsafe_ptr=0;
  uint64_t __t2944t__buf__unsafe_size=0;
  uint32_t __t2944t__buf__unsafe_offset=0;
  uint32_t __t2944t__buf__unsafe_align=0;
  uint64_t __t2944t__pos=0;
  char* __t2945t__unsafe_ptr=0;
  uint64_t __t2945t__dat__pos=0;
  uint64_t __t2945t__dat__length=0;
  char __t2945t__dat__first=0;
  char* __t2946t__unsafe_ptr=0;
  uint64_t __t2946t__dat__pos=0;
  uint64_t __t2946t__dat__length=0;
  char __t2946t__dat__first=0;
  char __t2947t=0;
  char* __t2948t____t1210t__unsafe_ptr=0;
  uint64_t __t2948t____t1210t__unsafe_size=0;
  uint32_t __t2948t____t1210t__unsafe_offset=0;
  uint32_t __t2948t____t1210t__unsafe_align=0;
  uint64_t __t2948t____t1211t=0;
  uint64_t __t2950t=0;
  uint64_t __t2951t__=0;
  char* __t2952t__unsafe_ptr=0;
  uint64_t __t2952t__dat__pos=0;
  uint64_t __t2952t__dat__length=0;
  char __t2952t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1644t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t2909t__unsafe_ptr,&__t2909t__dat__pos,&__t2909t__dat__length,&__t2909t__dat__first);
  s1__unsafe_ptr=__t2909t__unsafe_ptr;
  s1__dat__pos=__t2909t__dat__pos;
  s1__dat__length=__t2909t__dat__length;
  s1__dat__first=__t2909t__dat__first;
  str__t1667t(_s2,&__t2910t__unsafe_ptr,&__t2910t__dat__pos,&__t2910t__dat__length,&__t2910t__dat__first);
  s2__unsafe_ptr=__t2910t__unsafe_ptr;
  s2__dat__pos=__t2910t__dat__pos;
  s2__dat__length=__t2910t__dat__length;
  s2__dat__first=__t2910t__dat__first;
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2911t__);
  if(__t2911t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2912t__);
  eq__t134t(CHARS__pos,__t2912t__,&__t2913t__);
  __t2914t=__t2913t__;
  }
  if(__t2914t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2915t__);
  lt__t301t(__t2915t__,CHARS__buf__unsafe_size,&__t2916t__);
  __t2917t=__t2916t__;
  }
  if(__t2917t){
  len__t1677t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2918t__);
  __t_errcode=alloc__t1282t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2918t__,&__t2919t__buf__unsafe_ptr,&__t2919t__buf__unsafe_size,&__t2919t__buf__unsafe_offset,&__t2919t__buf__unsafe_align,&__t2919t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1212t(__t2919t__buf__unsafe_ptr,__t2919t__buf__unsafe_size,__t2919t__buf__unsafe_offset,__t2919t__buf__unsafe_align,__t2919t__pos,&__t2920t____t1213t__unsafe_ptr,&__t2920t____t1213t__unsafe_size,&__t2920t____t1213t__unsafe_offset,&__t2920t____t1213t__unsafe_align,&__t2920t____t1214t);
  arena__t1200t(&__t2920t____t1213t__unsafe_ptr,&__t2920t____t1213t__unsafe_size,&__t2920t____t1213t__unsafe_offset,&__t2920t____t1213t__unsafe_align,__t2920t____t1214t,&__t2921t__buf__unsafe_ptr,&__t2921t__buf__unsafe_size,&__t2921t__buf__unsafe_offset,&__t2921t__buf__unsafe_align,&__t2921t__pos);
  __t2922t__buf__unsafe_ptr=__t2921t__buf__unsafe_ptr;
  __t2922t__buf__unsafe_size=__t2921t__buf__unsafe_size;
  __t2922t__buf__unsafe_offset=__t2921t__buf__unsafe_offset;
  __t2922t__buf__unsafe_align=__t2921t__buf__unsafe_align;
  __t2922t__pos=__t2921t__pos;
  surface__buf__unsafe_ptr=__t2922t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2922t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2922t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2922t__buf__unsafe_align;
  surface__pos=__t2922t__pos;
  __t_errcode=copy__t1711t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2923t__unsafe_ptr,&__t2923t__dat__pos,&__t2923t__dat__length,&__t2923t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1209t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2924t____t1210t__unsafe_ptr,&__t2924t____t1210t__unsafe_size,&__t2924t____t1210t__unsafe_offset,&__t2924t____t1210t__unsafe_align,&__t2924t____t1211t);
  __t2926t=0;
  add__t188t(s1__dat__pos,__t2926t,&__t2927t__);
  __t_errcode=str__t1663t(__t2924t____t1210t__unsafe_ptr,__t2924t____t1210t__unsafe_size,__t2924t____t1210t__unsafe_offset,__t2924t____t1210t__unsafe_align,__t2924t____t1211t,__t2927t__,&__t2928t__unsafe_ptr,&__t2928t__dat__pos,&__t2928t__dat__length,&__t2928t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t162t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2929t__);
  if(__t2929t__){
  eq__t162t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2930t__);
  __t2931t=__t2930t__;
  }
  if(__t2931t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2932t__);
  eq__t134t(s2__dat__pos,__t2932t__,&__t2933t__);
  __t2934t=__t2933t__;
  }
  if(__t2934t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2935t__);
  __t_errcode=str__t1663t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2935t__,s1__dat__pos,&__t2937t__unsafe_ptr,&__t2937t__dat__pos,&__t2937t__dat__length,&__t2937t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2928t__unsafe_ptr=__t2937t__unsafe_ptr;
  __t2928t__dat__pos=__t2937t__dat__pos;
  __t2928t__dat__length=__t2937t__dat__length;
  __t2928t__dat__first=__t2937t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1677t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2938t__);
  len__t1677t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2939t__);
  add__t188t(__t2938t__,__t2939t__,&__t2940t__);
  __t_errcode=alloc__t1282t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2940t__,&__t2941t__buf__unsafe_ptr,&__t2941t__buf__unsafe_size,&__t2941t__buf__unsafe_offset,&__t2941t__buf__unsafe_align,&__t2941t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1212t(__t2941t__buf__unsafe_ptr,__t2941t__buf__unsafe_size,__t2941t__buf__unsafe_offset,__t2941t__buf__unsafe_align,__t2941t__pos,&__t2942t____t1213t__unsafe_ptr,&__t2942t____t1213t__unsafe_size,&__t2942t____t1213t__unsafe_offset,&__t2942t____t1213t__unsafe_align,&__t2942t____t1214t);
  arena__t1200t(&__t2942t____t1213t__unsafe_ptr,&__t2942t____t1213t__unsafe_size,&__t2942t____t1213t__unsafe_offset,&__t2942t____t1213t__unsafe_align,__t2942t____t1214t,&__t2943t__buf__unsafe_ptr,&__t2943t__buf__unsafe_size,&__t2943t__buf__unsafe_offset,&__t2943t__buf__unsafe_align,&__t2943t__pos);
  __t2944t__buf__unsafe_ptr=__t2943t__buf__unsafe_ptr;
  __t2944t__buf__unsafe_size=__t2943t__buf__unsafe_size;
  __t2944t__buf__unsafe_offset=__t2943t__buf__unsafe_offset;
  __t2944t__buf__unsafe_align=__t2943t__buf__unsafe_align;
  __t2944t__pos=__t2943t__pos;
  surface__buf__unsafe_ptr=__t2944t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2944t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2944t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2944t__buf__unsafe_align;
  surface__pos=__t2944t__pos;
  __t_errcode=copy__t1711t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2945t__unsafe_ptr,&__t2945t__dat__pos,&__t2945t__dat__length,&__t2945t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1711t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2946t__unsafe_ptr,&__t2946t__dat__pos,&__t2946t__dat__length,&__t2946t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1209t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2948t____t1210t__unsafe_ptr,&__t2948t____t1210t__unsafe_size,&__t2948t____t1210t__unsafe_offset,&__t2948t____t1210t__unsafe_align,&__t2948t____t1211t);
  __t2950t=0;
  add__t188t(prev_pos,__t2950t,&__t2951t__);
  __t_complain=str__t1663t(__t2948t____t1210t__unsafe_ptr,__t2948t____t1210t__unsafe_size,__t2948t____t1210t__unsafe_offset,__t2948t____t1210t__unsafe_align,__t2948t____t1211t,__t2951t__,&__t2952t__unsafe_ptr,&__t2952t__dat__pos,&__t2952t__dat__length,&__t2952t__dat__first);
  __t2947t=__t_complain;
  if(__t_complain){
  goto __t2947t__label;
  }
  ret__unsafe_ptr=__t2952t__unsafe_ptr;
  ret__dat__pos=__t2952t__dat__pos;
  ret__dat__length=__t2952t__dat__length;
  ret__dat__first=__t2952t__dat__first;
  __t2947t__label:__t2947t=__t2947t==0;
  __t2928t__unsafe_ptr=ret__unsafe_ptr;
  __t2928t__dat__pos=ret__dat__pos;
  __t2928t__dat__length=ret__dat__length;
  __t2928t__dat__first=ret__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5558t=CHARS__buf__unsafe_ptr;
  *__t5559t=CHARS__buf__unsafe_size;
  *__t5560t=CHARS__buf__unsafe_offset;
  *__t5561t=CHARS__buf__unsafe_align;
  *__t5562t=CHARS__pos;
  *__t5563t=__t2928t__unsafe_ptr;
  *__t5564t=__t2928t__dat__pos;
  *__t5565t=__t2928t__dat__length;
  *__t5566t=__t2928t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1852t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __t5567t) {
  int __t1853t=0;
  char __t1854t__=0;
  uint64_t __t1855t__=0;
  char* __t1856t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,s__dat__length,&__t1854t__);
  if(__t1854t__){
  __t_errcode=22;
  goto __t_failure;
  }
  add__t188t(s__dat__pos,i,&__t1855t__);
  add__t808t(s__unsafe_ptr,__t1855t__,&__t1856t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5567t=__t1856t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int slice__t1878t(char* _s__unsafe_ptr, uint64_t _s__dat__pos, uint64_t _s__dat__length, char _s__dat__first, uint64_t from, uint64_t to, char** __t5568t, uint64_t* __t5569t, uint64_t* __t5570t, char* __t5571t) {
  char* __t1879t__unsafe_ptr=0;
  uint64_t __t1879t__dat__pos=0;
  uint64_t __t1879t__dat__length=0;
  char __t1879t__dat__first=0;
  char* s__unsafe_ptr=0;
  uint64_t s__dat__pos=0;
  uint64_t s__dat__length=0;
  char s__dat__first=0;
  char __t1880t__=0;
  char* __t1881t__unsafe_ptr=0;
  uint64_t __t1881t__dat__pos=0;
  uint64_t __t1881t__dat__length=0;
  char __t1881t__dat__first=0;
  char __t1882t__=0;
  char __t1883t__=0;
  char __t1884t=0;
  char __t1885t__=0;
  uint64_t __t1887t__=0;
  uint64_t new_length=0;
  uint64_t __t1888t=0;
  char __t1889t__=0;
  char new_first=0;
  char* __t1891t__=0;
  char __t1892t__value=0;
  uint64_t __t1893t__=0;
  char* __t1894t__unsafe_ptr=0;
  uint64_t __t1894t__dat__pos=0;
  uint64_t __t1894t__dat__length=0;
  char __t1894t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1644t(_s__unsafe_ptr,_s__dat__pos,_s__dat__length,_s__dat__first,&__t1879t__unsafe_ptr,&__t1879t__dat__pos,&__t1879t__dat__length,&__t1879t__dat__first);
  s__unsafe_ptr=__t1879t__unsafe_ptr;
  s__dat__pos=__t1879t__dat__pos;
  s__dat__length=__t1879t__dat__length;
  s__dat__first=__t1879t__dat__first;
  eq__t134t(from,to,&__t1880t__);
  if(__t1880t__){
  str__t1667t(__t431t,&__t1881t__unsafe_ptr,&__t1881t__dat__pos,&__t1881t__dat__length,&__t1881t__dat__first);
  goto __t_return;
  }
  gt__t325t(from,to,&__t1882t__);
  if(!__t1882t__){
  gt__t325t(to,s__dat__length,&__t1883t__);
  __t1884t=__t1883t__;
  }
  else{
  __t1884t=0;
  not__t42t(__t1884t,&__t1885t__);
  __t1884t=__t1885t__;
  }
  if(__t1884t){
  __t_errcode=29;
  goto __t_failure;
  }
  sub__t409t(to,from,&__t1887t__);
  new_length=__t1887t__;
  __t1888t=0;
  neq__t158t(from,__t1888t,&__t1889t__);
  if(__t1889t__){
  __t_errcode=get__t1852t(s__unsafe_ptr,s__dat__pos,s__dat__length,s__dat__first,from,&__t1891t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1891t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1892t__value,__t1891t__,1);
  new_first=__t1892t__value;
  }
  else{
  new_first=s__dat__first;
  }
  add__t188t(s__dat__pos,from,&__t1893t__);
  str__t1607t(s__unsafe_ptr,__t1893t__,new_length,new_first,&__t1894t__unsafe_ptr,&__t1894t__dat__pos,&__t1894t__dat__length,&__t1894t__dat__first);
  __t1881t__unsafe_ptr=__t1894t__unsafe_ptr;
  __t1881t__dat__pos=__t1894t__dat__pos;
  __t1881t__dat__length=__t1894t__dat__length;
  __t1881t__dat__first=__t1894t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5568t=__t1881t__unsafe_ptr;
  *__t5569t=__t1881t__dat__pos;
  *__t5570t=__t1881t__dat__length;
  *__t5571t=__t1881t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int ends_with__t1957t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5572t) {
  char* __t1958t__unsafe_ptr=0;
  uint64_t __t1958t__dat__pos=0;
  uint64_t __t1958t__dat__length=0;
  char __t1958t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t1959t__unsafe_ptr=0;
  uint64_t __t1959t__dat__pos=0;
  uint64_t __t1959t__dat__length=0;
  char __t1959t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t n=0;
  char __t1960t=0;
  uint64_t __t1961t__=0;
  uint64_t d=0;
  char __t1962t__=0;
  char __t1963t=0;
  char* __t1964t__unsafe_ptr=0;
  uint64_t __t1964t__dat__pos=0;
  uint64_t __t1964t__dat__length=0;
  char __t1964t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  char __t1965t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1644t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t1958t__unsafe_ptr,&__t1958t__dat__pos,&__t1958t__dat__length,&__t1958t__dat__first);
  stack__unsafe_ptr=__t1958t__unsafe_ptr;
  stack__dat__pos=__t1958t__dat__pos;
  stack__dat__length=__t1958t__dat__length;
  stack__dat__first=__t1958t__dat__first;
  str__t1667t(_needle,&__t1959t__unsafe_ptr,&__t1959t__dat__pos,&__t1959t__dat__length,&__t1959t__dat__first);
  needle__unsafe_ptr=__t1959t__unsafe_ptr;
  needle__dat__pos=__t1959t__dat__pos;
  needle__dat__length=__t1959t__dat__length;
  needle__dat__first=__t1959t__dat__first;
  n=stack__dat__length;
  __t_complain=sub__t401t(n,needle__dat__length,&__t1961t__);
  __t1960t=__t_complain;
  if(__t_complain){
  goto __t1960t__label;
  }
  d=__t1961t__;
  __t1960t__label:__t1960t=__t1960t==0;
  not__t42t(__t1960t,&__t1962t__);
  if(__t1962t__){
  __t1963t=0;
  goto __t_return;
  }
  __t_errcode=slice__t1878t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,d,n,&__t1964t__unsafe_ptr,&__t1964t__dat__pos,&__t1964t__dat__length,&__t1964t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_ptr=__t1964t__unsafe_ptr;
  ret__dat__pos=__t1964t__dat__pos;
  ret__dat__length=__t1964t__dat__length;
  ret__dat__first=__t1964t__dat__first;
  eq__t1782t(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t1965t__);
  __t1963t=__t1965t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5572t=__t1963t;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t741t(uint64_t to, uint64_t* __t5573t, uint64_t* __t5574t) {
  uint64_t __t742t=0;
  uint64_t from=0;
  __t742t=0;
  from=__t742t;
  goto __t_return;
  __t_return:
  *__t5573t=from;
  *__t5574t=to;
}

static inline __attribute__((always_inline)) void range__t758t(uint64_t _from, uint64_t to, uint64_t* __t5575t, uint64_t* __t5576t) {
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
  *__t5575t=from;
  *__t5576t=to;
}

static inline __attribute__((always_inline)) int mutget__t763t(uint64_t* __t5577t, uint64_t r__to, uint64_t skipped, uint64_t* __t5578t) {
  uint64_t r__from=*__t5577t;
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
  *__t5577t=r__from;
  *__t5578t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void contains__t2043t(char* _stack__unsafe_ptr, uint64_t _stack__dat__pos, uint64_t _stack__dat__length, char _stack__dat__first, const char* _needle, char* __t5579t) {
  char* __t2044t__unsafe_ptr=0;
  uint64_t __t2044t__dat__pos=0;
  uint64_t __t2044t__dat__length=0;
  char __t2044t__dat__first=0;
  char* stack__unsafe_ptr=0;
  uint64_t stack__dat__pos=0;
  uint64_t stack__dat__length=0;
  char stack__dat__first=0;
  char* __t2045t__unsafe_ptr=0;
  uint64_t __t2045t__dat__pos=0;
  uint64_t __t2045t__dat__length=0;
  char __t2045t__dat__first=0;
  char* needle__unsafe_ptr=0;
  uint64_t needle__dat__pos=0;
  uint64_t needle__dat__length=0;
  char needle__dat__first=0;
  uint64_t d=0;
  char __t2046t=0;
  uint64_t __t2047t__=0;
  uint64_t n=0;
  char __t2048t__=0;
  char __t2049t=0;
  uint64_t __t2050t=0;
  uint64_t __t2051t__from=0;
  uint64_t __t2051t__to=0;
  uint64_t __t2052t__from=0;
  uint64_t __t2052t__to=0;
  char __t2053t=0;
  uint64_t __t2054t__=0;
  uint64_t i=0;
  char __t2055t=0;
  uint64_t __t2056t__=0;
  char* __t2057t__unsafe_ptr=0;
  uint64_t __t2057t__dat__pos=0;
  uint64_t __t2057t__dat__length=0;
  char __t2057t__dat__first=0;
  char* sliced__unsafe_ptr=0;
  uint64_t sliced__dat__pos=0;
  uint64_t sliced__dat__length=0;
  char sliced__dat__first=0;
  char __t2058t__=0;
  char __t2059t=0;
  char __t2060t=0;
  int __t_complain=0;
  str__t1644t(_stack__unsafe_ptr,_stack__dat__pos,_stack__dat__length,_stack__dat__first,&__t2044t__unsafe_ptr,&__t2044t__dat__pos,&__t2044t__dat__length,&__t2044t__dat__first);
  stack__unsafe_ptr=__t2044t__unsafe_ptr;
  stack__dat__pos=__t2044t__dat__pos;
  stack__dat__length=__t2044t__dat__length;
  stack__dat__first=__t2044t__dat__first;
  str__t1667t(_needle,&__t2045t__unsafe_ptr,&__t2045t__dat__pos,&__t2045t__dat__length,&__t2045t__dat__first);
  needle__unsafe_ptr=__t2045t__unsafe_ptr;
  needle__dat__pos=__t2045t__dat__pos;
  needle__dat__length=__t2045t__dat__length;
  needle__dat__first=__t2045t__dat__first;
  d=needle__dat__length;
  __t_complain=sub__t401t(stack__dat__length,d,&__t2047t__);
  __t2046t=__t_complain;
  if(__t_complain){
  goto __t2046t__label;
  }
  n=__t2047t__;
  __t2046t__label:__t2046t=__t2046t==0;
  not__t42t(__t2046t,&__t2048t__);
  if(__t2048t__){
  __t2049t=0;
  goto __t_return;
  }
  of__t741t(n,&__t2051t__from,&__t2051t__to);
  range__t758t(__t2051t__from,__t2051t__to,&__t2052t__from,&__t2052t__to);
  __t2050t=0-1;
  while(1){
  __t2050t=__t2050t+1;
  __t_complain=mutget__t763t(&__t2052t__from,__t2052t__to,__t2050t,&__t2054t__);
  __t2053t=__t_complain;
  if(__t_complain){
  goto __t2053t__label;
  }
  i=__t2054t__;
  __t2053t__label:__t2053t=__t2053t==0;
  if(!__t2053t){
  break;
  }
  add__t188t(i,d,&__t2056t__);
  __t_complain=slice__t1878t(stack__unsafe_ptr,stack__dat__pos,stack__dat__length,stack__dat__first,i,__t2056t__,&__t2057t__unsafe_ptr,&__t2057t__dat__pos,&__t2057t__dat__length,&__t2057t__dat__first);
  __t2055t=__t_complain;
  if(__t_complain){
  goto __t2055t__label;
  }
  sliced__unsafe_ptr=__t2057t__unsafe_ptr;
  sliced__dat__pos=__t2057t__dat__pos;
  sliced__dat__length=__t2057t__dat__length;
  sliced__dat__first=__t2057t__dat__first;
  __t2055t__label:__t2055t=__t2055t==0;
  eq__t1782t(sliced__unsafe_ptr,sliced__dat__pos,sliced__dat__length,sliced__dat__first,needle__unsafe_ptr,needle__dat__pos,needle__dat__length,needle__dat__first,&__t2058t__);
  if(__t2058t__){
  __t2059t=1;
  __t2049t=__t2059t;
  goto __t_return;
  }
  }
  __t2060t=0;
  __t2049t=__t2060t;
  goto __t_return;
  __t_return:
  *__t5579t=__t2049t;
}

static inline __attribute__((always_inline)) void restore_stdout__t5188t(int64_t saved_stdout) {
  fflush(stdout);
  dup2(saved_stdout,STDOUT_FILENO);
  close(saved_stdout);
}

static inline __attribute__((always_inline)) void stdout_to_err__t5189t(int64_t* __t5580t) {
  int64_t saved_stdout=0;
  saved_stdout=dup(STDOUT_FILENO);
  fflush(stdout);
  dup2(STDERR_FILENO,STDOUT_FILENO);
  goto __t_return;
  __t_return:
  *__t5580t=saved_stdout;
}

static inline __attribute__((always_inline)) void print__t1846t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1847t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void popen__t4232t(const char* cmd, char** __t5581t) {
  char* unsafe_ptr=0;
  unsafe_ptr=(void*)popen((const char*)cmd,"r");
  goto __t_return;
  __t_return:
  *__t5581t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void pclose__t4231t(char* unsafe_ptr, int64_t* __t5582t) {
  int64_t status=0;
  char buf[1024];
  while(fread(buf,1,sizeof(buf),(FILE*)unsafe_ptr)){
  }
  status=pclose((FILE*)unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t5582t=status;
}

static inline __attribute__((always_inline)) void int__t626t(uint64_t x, int64_t* __t5583t) {
  int __t627t=0;
  int __t628t=0;
  int __t629t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t5583t=z;
}

static inline __attribute__((always_inline)) void is_different__t97t(int64_t x, int64_t y, int* __t5584t) {
  int __t98t=0;
  int __t99t__=0;
  not__t51t(__t98t,&__t99t__);
  goto __t_return;
  __t_return:
  *__t5584t=__t99t__;
}

static inline __attribute__((always_inline)) void neq__t147t(int64_t x, int64_t y, char* __t5585t) {
  int __t148t__=0;
  char z=0;
  is_different__t97t(x,y,&__t148t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5585t=z;
}

static inline __attribute__((always_inline)) int open__t4233t(const char* cmd, char** __t5586t) {
  char* __t4234t__=0;
  char* unsafe_ptr=0;
  char __t4235t__=0;
  char __t4236t__=0;
  char __t4237t__=0;
  int64_t __t4238t__=0;
  int64_t status=0;
  uint64_t __t4239t=0;
  int64_t __t4240t__=0;
  char __t4241t__=0;
  char __t4242t=0;
  int __t_errcode=0;
  int __t_complain=0;
  popen__t4232t(cmd,&__t4234t__);
  unsafe_ptr=__t4234t__;
  exists__t645t(unsafe_ptr,&__t4235t__);
  not__t42t(__t4235t__,&__t4236t__);
  if(__t4236t__){
  __t_errcode=44;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t645t(unsafe_ptr,&__t4237t__);
  if(__t4237t__){
  pclose__t4231t(unsafe_ptr,&__t4238t__);
  status=__t4238t__;
  unsafe_ptr=0;
  __t4239t=0;
  int__t626t(__t4239t,&__t4240t__);
  neq__t147t(status,__t4240t__,&__t4241t__);
  if(__t4241t__){
  __t_complain=45;
  goto __t4242t__label;
  __t4242t__label:__t4242t=__t4242t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5586t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4244t(char* cmd__unsafe_ptr, uint64_t cmd__dat__pos, uint64_t cmd__dat__length, char cmd__dat__first, char** __t5587t) {
  const char* __t4245t__cstr=0;
  char* __t4245t__str__unsafe_ptr=0;
  uint64_t __t4245t__str__dat__pos=0;
  uint64_t __t4245t__str__dat__length=0;
  char __t4245t__str__dat__first=0;
  const char* __t4247t__=0;
  char* __t4248t__unsafe_ptr=0;
  char __t4249t____t4237t__=0;
  int64_t __t4249t____t4238t__=0;
  int64_t __t4249t__status=0;
  uint64_t __t4249t____t4239t=0;
  int64_t __t4249t____t4240t__=0;
  char __t4249t____t4241t__=0;
  char __t4249t____t4242t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1765t(cmd__unsafe_ptr,cmd__dat__pos,cmd__dat__length,cmd__dat__first,&__t4245t__cstr,&__t4245t__str__unsafe_ptr,&__t4245t__str__dat__pos,&__t4245t__str__dat__length,&__t4245t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1775t(__t4245t__cstr,__t4245t__str__unsafe_ptr,__t4245t__str__dat__pos,__t4245t__str__dat__length,__t4245t__str__dat__first,&__t4247t__);
  __t_errcode=open__t4233t(__t4247t__,&__t4248t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t645t(__t4248t__unsafe_ptr,&__t4249t____t4237t__);
  if(__t4249t____t4237t__){
  pclose__t4231t(__t4248t__unsafe_ptr,&__t4249t____t4238t__);
  __t4249t__status=__t4249t____t4238t__;
  __t4248t__unsafe_ptr=0;
  __t4249t____t4239t=0;
  int__t626t(__t4249t____t4239t,&__t4249t____t4240t__);
  neq__t147t(__t4249t__status,__t4249t____t4240t__,&__t4249t____t4241t__);
  if(__t4249t____t4241t__){
  __t_complain=45;
  goto __t4242t__label;
  __t4242t__label:__t4249t____t4242t=__t4249t____t4242t==0;
  }
  }
  
  goto __t_skip_returns;__t_return:
  *__t5587t=__t4248t__unsafe_ptr;
  
  __t_skip_returns:free__t806t(&__t4245t__str__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4206t(int64_t value, char* __t5588t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t5588t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4205t(int64_t value, const char** __t5589t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t5589t=ret;
}

static inline __attribute__((always_inline)) void cstr__t1t(const char** __t5590t) {
  const char* value=0;
  *__t5590t=value;
}

int run__t5116t(char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, const char** __t5591t) {
  char* __t5117t__unsafe_ptr=0;
  char __t5118t____t4249t____t4237t__=0;
  int64_t __t5118t____t4249t____t4238t__=0;
  int64_t __t5118t____t4249t__status=0;
  uint64_t __t5118t____t4249t____t4239t=0;
  int64_t __t5118t____t4249t____t4240t__=0;
  char __t5118t____t4249t____t4241t__=0;
  char __t5118t____t4249t____t4242t=0;
  char* proc__unsafe_ptr=0;
  int64_t __t5119t=0;
  int64_t error=0;
  char __t5120t__=0;
  char __t5121t__=0;
  const char* __t5122t__=0;
  const char* __t5123t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4244t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5117t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  proc__unsafe_ptr=__t5117t__unsafe_ptr;
  exists__t645t(__t5117t__unsafe_ptr,&__t5118t____t4249t____t4237t__);
  if(__t5118t____t4249t____t4237t__){
  pclose__t4231t(__t5117t__unsafe_ptr,&__t5118t____t4249t____t4238t__);
  __t5118t____t4249t__status=__t5118t____t4249t____t4238t__;
  __t5117t__unsafe_ptr=0;
  __t5118t____t4249t____t4239t=0;
  int__t626t(__t5118t____t4249t____t4239t,&__t5118t____t4249t____t4240t__);
  neq__t147t(__t5118t____t4249t__status,__t5118t____t4249t____t4240t__,&__t5118t____t4249t____t4241t__);
  if(__t5118t____t4249t____t4241t__){
  __t_complain=45;
  goto __t4242t__label;
  __t4242t__label:__t5118t____t4249t____t4242t=__t5118t____t4249t____t4242t==0;
  }
  }
  __t5119t=__t_complain;
  error=__t5119t;
  ok__t4206t(error,&__t5120t__);
  not__t42t(__t5120t__,&__t5121t__);
  if(__t5121t__){
  cstr__t4205t(error,&__t5122t__);
  goto __t_return;
  }
  cstr__t1t(&__t5123t__);
  __t5122t__=__t5123t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5591t=__t5122t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t5592t) {
  int value=0;
  *__t5592t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t5593t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t5593t=__t54t__;
}

static inline __attribute__((always_inline)) void exists__t1605t(const char* c, char* __t5594t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t5594t=z;
}

static inline __attribute__((always_inline)) void nn__t430t(const char* value, const char** __t5595t, const char** __t5596t) {
  const char* __t432t=0;
  __t432t=__t431t;
  goto __t_return;
  __t_return:
  *__t5595t=value;
  *__t5596t=__t432t;
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

static inline __attribute__((always_inline)) void print_marker__t5153t(char colors__initialized) {
  const char* __t5155t__value=0;
  const char* __t5155t____t432t=0;
  int __t5157t=0;
  char __t5158t=0;
  char __t5159t=0;
  const char* __t5164t__value=0;
  const char* __t5164t____t432t=0;
  int __t5166t=0;
  const char* __t5169t__value=0;
  const char* __t5169t____t432t=0;
  nn__t430t(__t5135t,&__t5155t__value,&__t5155t____t432t);
  print__t439t(__t5155t__value,__t5155t____t432t);
  __t5159t=1;
  if(__t5160t!=__t5160t){
  __t5159t=0;
  }
  if(__t5159t){
  __t5158t=1;
  }
  if(__t5158t){
  set__t475t(colors__initialized);
  nn__t430t(__t5163t,&__t5164t__value,&__t5164t____t432t);
  print__t439t(__t5164t__value,__t5164t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5150t,&__t5169t__value,&__t5169t____t432t);
  print__t439t(__t5169t__value,__t5169t____t432t);
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

static inline __attribute__((always_inline)) void print_marker__t5133t(char colors__initialized) {
  const char* __t5136t__value=0;
  const char* __t5136t____t432t=0;
  char __t5138t=0;
  char __t5139t=0;
  const char* __t5144t__value=0;
  const char* __t5144t____t432t=0;
  int __t5146t=0;
  int __t5147t=0;
  const char* __t5151t__value=0;
  const char* __t5151t____t432t=0;
  nn__t430t(__t5135t,&__t5136t__value,&__t5136t____t432t);
  print__t439t(__t5136t__value,__t5136t____t432t);
  __t5139t=1;
  if(__t5140t!=__t5140t){
  __t5139t=0;
  }
  if(__t5139t){
  __t5138t=1;
  }
  if(__t5138t){
  set__t479t(colors__initialized);
  nn__t430t(__t5143t,&__t5144t__value,&__t5144t____t432t);
  print__t439t(__t5144t__value,__t5144t____t432t);
  }
  set__t595t(colors__initialized);
  nn__t430t(__t5150t,&__t5151t__value,&__t5151t____t432t);
  print__t439t(__t5151t__value,__t5151t____t432t);
}

static inline __attribute__((always_inline)) int test__t5213t(char colors__initialized, char* command__unsafe_ptr, uint64_t command__dat__pos, uint64_t command__dat__length, char command__dat__first, char should_fail, char* __t5597t) {
  int64_t __t5215t__=0;
  const char* __t5218t__=0;
  const char* __t5219t=0;
  const char* error=0;
  int __t5220t=0;
  int __t5221t__=0;
  char __t5222t__=0;
  const char* __t5223t__=0;
  const char* __t5225t__value=0;
  const char* __t5225t____t432t=0;
  char __t5227t__=0;
  char __t5231t=0;
  char __t5236t=0;
  int __t_errcode=0;
  int __t_complain=0;
  stdout_to_err__t5189t(&__t5215t__);
  print__t1846t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first);
  __t_errcode=run__t5116t(command__unsafe_ptr,command__dat__pos,command__dat__length,command__dat__first,&__t5218t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5219t=__t5218t__;
  error=__t5219t;
  not__t53t(__t5220t,&__t5221t__);
  if(should_fail){
  exists__t1605t(error,&__t5222t__);
  if(__t5222t__){
  cstr__t1t(&__t5223t__);
  error=__t5223t__;
  }
  else{
  error=__t5224t;
  }
  }
  nn__t430t(__t5197t,&__t5225t__value,&__t5225t____t432t);
  print__t439t(__t5225t__value,__t5225t____t432t);
  exists__t1605t(error,&__t5227t__);
  if(__t5227t__){
  print_marker__t5153t(colors__initialized);
  print__t441t(error);
  __t5231t=0;
  goto __t_return;
  }
  print_marker__t5133t(colors__initialized);
  print__t441t(__t5234t);
  __t5236t=1;
  __t5231t=__t5236t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5597t=__t5231t;
  
  __t_skip_returns:restore_stdout__t5188t(__t5215t__);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t452t(uint64_t value, const char* endl) {
  int __t453t=0;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t437t(uint64_t value, uint64_t* __t5598t, const char** __t5599t) {
  const char* __t438t=0;
  __t438t=__t431t;
  goto __t_return;
  __t_return:
  *__t5598t=value;
  *__t5599t=__t438t;
}

static inline __attribute__((always_inline)) int _main__t5275t() {
  char* __t5277t__unsafe_ptr=0;
  uint64_t __t5277t__dat__pos=0;
  uint64_t __t5277t__dat__length=0;
  char __t5277t__dat__first=0;
  char* test_root__unsafe_ptr=0;
  uint64_t test_root__dat__pos=0;
  uint64_t test_root__dat__length=0;
  char test_root__dat__first=0;
  char __t5278t__initialized=0;
  char colors__initialized=0;
  uint64_t __t5280t=0;
  char* __t5281t__unsafe_ptr=0;
  uint64_t __t5281t__unsafe_size=0;
  uint32_t __t5281t__unsafe_offset=0;
  uint32_t __t5281t__unsafe_align=0;
  char* __t5283t__buf__unsafe_ptr=0;
  uint64_t __t5283t__buf__unsafe_size=0;
  uint32_t __t5283t__buf__unsafe_offset=0;
  uint32_t __t5283t__buf__unsafe_align=0;
  uint64_t __t5283t__pos=0;
  char* __t5284t__buf__unsafe_ptr=0;
  uint64_t __t5284t__buf__unsafe_size=0;
  uint32_t __t5284t__buf__unsafe_offset=0;
  uint32_t __t5284t__buf__unsafe_align=0;
  uint64_t __t5284t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  int __t5289t=0;
  char* __t5291t__unsafe_ptr=0;
  uint64_t __t5291t__dat__pos=0;
  uint64_t __t5291t__dat__length=0;
  char __t5291t__dat__first=0;
  char* command_base__unsafe_ptr=0;
  uint64_t command_base__dat__pos=0;
  uint64_t command_base__dat__length=0;
  char command_base__dat__first=0;
  uint64_t __t5292t=0;
  uint64_t __t5293t=0;
  uint64_t counter=0;
  uint64_t __t5294t=0;
  uint64_t __t5295t=0;
  uint64_t failures=0;
  uint64_t __t5296t=0;
  char* __t5297t__unsafe_ptr=0;
  char __t5299t=0;
  char* __t5300t__unsafe_ptr=0;
  uint64_t __t5300t__dat__pos=0;
  uint64_t __t5300t__dat__length=0;
  char __t5300t__dat__first=0;
  char* path__unsafe_ptr=0;
  uint64_t path__dat__pos=0;
  uint64_t path__dat__length=0;
  char path__dat__first=0;
  char __t5302t__=0;
  char __t5303t__=0;
  char __t5304t__=0;
  char __t5305t=0;
  char __t5306t__=0;
  uint64_t __t5307t__=0;
  uint64_t __t5308t____t5272t=0;
  uint64_t __t5308t____t5274t__=0;
  char* __t5309t__unsafe_ptr=0;
  uint64_t __t5309t__dat__pos=0;
  uint64_t __t5309t__dat__length=0;
  char __t5309t__dat__first=0;
  char* __t5311t__unsafe_ptr=0;
  uint64_t __t5311t__dat__pos=0;
  uint64_t __t5311t__dat__length=0;
  char __t5311t__dat__first=0;
  char* dir_path__unsafe_ptr=0;
  uint64_t dir_path__dat__pos=0;
  uint64_t dir_path__dat__length=0;
  char dir_path__dat__first=0;
  uint64_t __t5312t=0;
  char* __t5313t__unsafe_ptr=0;
  char __t5315t=0;
  char* __t5316t__unsafe_ptr=0;
  uint64_t __t5316t__dat__pos=0;
  uint64_t __t5316t__dat__length=0;
  char __t5316t__dat__first=0;
  char* entry__unsafe_ptr=0;
  uint64_t entry__dat__pos=0;
  uint64_t entry__dat__length=0;
  char entry__dat__first=0;
  char __t5318t__=0;
  char __t5319t__=0;
  uint64_t __t5320t__=0;
  uint64_t __t5321t____t5272t=0;
  uint64_t __t5321t____t5274t__=0;
  uint64_t __t5322t=0;
  uint64_t __t5323t__=0;
  char __t5325t__=0;
  char should_fail=0;
  char* __t5326t__unsafe_ptr=0;
  uint64_t __t5326t__dat__pos=0;
  uint64_t __t5326t__dat__length=0;
  char __t5326t__dat__first=0;
  char* __t5327t__unsafe_ptr=0;
  uint64_t __t5327t__dat__pos=0;
  uint64_t __t5327t__dat__length=0;
  char __t5327t__dat__first=0;
  char __t5328t__=0;
  char __t5329t__=0;
  uint64_t __t5330t=0;
  uint64_t __t5331t__=0;
  int64_t __t5332t__=0;
  uint64_t __t5334t=0;
  char __t5335t__=0;
  const char* __t5349t__value=0;
  const char* __t5349t____t432t=0;
  const char* __t5339t__value=0;
  const char* __t5339t____t432t=0;
  const char* __t5344t__value=0;
  const char* __t5344t____t432t=0;
  uint64_t __t5355t__value=0;
  const char* __t5355t____t438t=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1667t(__t5276t,&__t5277t__unsafe_ptr,&__t5277t__dat__pos,&__t5277t__dat__length,&__t5277t__dat__first);
  test_root__unsafe_ptr=__t5277t__unsafe_ptr;
  test_root__dat__pos=__t5277t__dat__pos;
  test_root__dat__length=__t5277t__dat__length;
  test_root__dat__first=__t5277t__dat__first;
  colors__t469t(&__t5278t__initialized);
  colors__initialized=__t5278t__initialized;
  __t5280t=128;
  __t_errcode=alloc__t1084t(__t5280t,&__t5281t__unsafe_ptr,&__t5281t__unsafe_size,&__t5281t__unsafe_offset,&__t5281t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1203t(&__t5281t__unsafe_ptr,&__t5281t__unsafe_size,&__t5281t__unsafe_offset,&__t5281t__unsafe_align,&__t5283t__buf__unsafe_ptr,&__t5283t__buf__unsafe_size,&__t5283t__buf__unsafe_offset,&__t5283t__buf__unsafe_align,&__t5283t__pos);
  __t5284t__buf__unsafe_ptr=__t5283t__buf__unsafe_ptr;
  __t5284t__buf__unsafe_size=__t5283t__buf__unsafe_size;
  __t5284t__buf__unsafe_offset=__t5283t__buf__unsafe_offset;
  __t5284t__buf__unsafe_align=__t5283t__buf__unsafe_align;
  __t5284t__pos=__t5283t__pos;
  CHARS__buf__unsafe_ptr=__t5284t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5284t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5284t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5284t__buf__unsafe_align;
  CHARS__pos=__t5284t__pos;
  __t_errcode=copy__t1716t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5290t,&__t5291t__unsafe_ptr,&__t5291t__dat__pos,&__t5291t__dat__length,&__t5291t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  command_base__unsafe_ptr=__t5291t__unsafe_ptr;
  command_base__dat__pos=__t5291t__dat__pos;
  command_base__dat__length=__t5291t__dat__length;
  command_base__dat__first=__t5291t__dat__first;
  __t5292t=0;
  __t5293t=__t5292t;
  counter=__t5293t;
  __t5294t=0;
  __t5295t=__t5294t;
  failures=__t5295t;
  __t_errcode=open__t4991t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,&__t5297t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5296t=0-1;
  while(1){
  __t5296t=__t5296t+1;
  __t_complain=mutget__t5074t(&__t5297t__unsafe_ptr,__t5296t,&__t5300t__unsafe_ptr,&__t5300t__dat__pos,&__t5300t__dat__length,&__t5300t__dat__first);
  __t5299t=__t_complain;
  if(__t_complain){
  goto __t5299t__label;
  }
  path__unsafe_ptr=__t5300t__unsafe_ptr;
  path__dat__pos=__t5300t__dat__pos;
  path__dat__length=__t5300t__dat__length;
  path__dat__first=__t5300t__dat__first;
  __t5299t__label:__t5299t=__t5299t==0;
  if(!__t5299t){
  break;
  }
  eq__t1789t(path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,__t5301t,&__t5302t__);
  if(!__t5302t__){
  __t_errcode=is_dir__t4918t(test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5303t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5303t__,&__t5304t__);
  __t5305t=__t5304t__;
  }
  else{
  __t5305t=0;
  not__t42t(__t5305t,&__t5306t__);
  __t5305t=__t5306t__;
  }
  if(__t5305t){
  continue;
  }
  reuse__t5269t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5307t__);
  __t_errcode=add__t2863t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,test_root__unsafe_ptr,test_root__dat__pos,test_root__dat__length,test_root__dat__first,path__unsafe_ptr,path__dat__pos,path__dat__length,path__dat__first,&__t5309t__unsafe_ptr,&__t5309t__dat__pos,&__t5309t__dat__length,&__t5309t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2908t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5309t__unsafe_ptr,__t5309t__dat__pos,__t5309t__dat__length,__t5309t__dat__first,__t5310t,&__t5311t__unsafe_ptr,&__t5311t__dat__pos,&__t5311t__dat__length,&__t5311t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  dir_path__unsafe_ptr=__t5311t__unsafe_ptr;
  dir_path__dat__pos=__t5311t__dat__pos;
  dir_path__dat__length=__t5311t__dat__length;
  dir_path__dat__first=__t5311t__dat__first;
  __t_errcode=open__t4991t(dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5313t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5312t=0-1;
  while(1){
  __t5312t=__t5312t+1;
  __t_complain=mutget__t5074t(&__t5313t__unsafe_ptr,__t5312t,&__t5316t__unsafe_ptr,&__t5316t__dat__pos,&__t5316t__dat__length,&__t5316t__dat__first);
  __t5315t=__t_complain;
  if(__t_complain){
  goto __t5315t__label;
  }
  entry__unsafe_ptr=__t5316t__unsafe_ptr;
  entry__dat__pos=__t5316t__dat__pos;
  entry__dat__length=__t5316t__dat__length;
  entry__dat__first=__t5316t__dat__first;
  __t5315t__label:__t5315t=__t5315t==0;
  if(!__t5315t){
  break;
  }
  __t_errcode=ends_with__t1957t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5317t,&__t5318t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5318t__,&__t5319t__);
  if(__t5319t__){
  continue;
  }
  reuse__t5269t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,&__t5320t__);
  __t5322t=1;
  add__t188t(counter,__t5322t,&__t5323t__);
  counter=__t5323t__;
  contains__t2043t(entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,__t5324t,&__t5325t__);
  should_fail=__t5325t__;
  __t_errcode=add__t2863t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,command_base__unsafe_ptr,command_base__dat__pos,command_base__dat__length,command_base__dat__first,dir_path__unsafe_ptr,dir_path__dat__pos,dir_path__dat__length,dir_path__dat__first,&__t5326t__unsafe_ptr,&__t5326t__dat__pos,&__t5326t__dat__length,&__t5326t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t2863t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t5326t__unsafe_ptr,__t5326t__dat__pos,__t5326t__dat__length,__t5326t__dat__first,entry__unsafe_ptr,entry__dat__pos,entry__dat__length,entry__dat__first,&__t5327t__unsafe_ptr,&__t5327t__dat__pos,&__t5327t__dat__length,&__t5327t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=test__t5213t(colors__initialized,__t5327t__unsafe_ptr,__t5327t__dat__pos,__t5327t__dat__length,__t5327t__dat__first,should_fail,&__t5328t__);
  if(__t_errcode){
  goto __t_failure;
  }
  not__t42t(__t5328t__,&__t5329t__);
  if(__t5329t__){
  __t5330t=1;
  add__t188t(failures,__t5330t,&__t5331t__);
  failures=__t5331t__;
  }
  __t5321t____t5272t=0;
  sub__t409t(__t5320t__,__t5321t____t5272t,&__t5321t____t5274t__);
  CHARS__pos=__t5321t____t5274t__;
  }
  __t5308t____t5272t=0;
  sub__t409t(__t5307t__,__t5308t____t5272t,&__t5308t____t5274t__);
  CHARS__pos=__t5308t____t5274t__;
  closedir__t4981t(__t5313t__unsafe_ptr);
  }
  stdout_to_err__t5189t(&__t5332t__);
  __t5334t=0;
  eq__t134t(failures,__t5334t,&__t5335t__);
  if(__t5335t__){
  set__t479t(colors__initialized);
  nn__t430t(__t5338t,&__t5339t__value,&__t5339t____t432t);
  print__t439t(__t5339t__value,__t5339t____t432t);
  set__t595t(colors__initialized);
  nn__t430t(__t5343t,&__t5344t__value,&__t5344t____t432t);
  print__t439t(__t5344t__value,__t5344t____t432t);
  }
  else{
  set__t475t(colors__initialized);
  nn__t430t(__t5348t,&__t5349t__value,&__t5349t____t432t);
  print__t439t(__t5349t__value,__t5349t____t432t);
  set__t595t(colors__initialized);
  print__t452t(failures,__t5353t);
  }
  nn__t437t(counter,&__t5355t__value,&__t5355t____t438t);
  print__t452t(__t5355t__value,__t5355t____t438t);
  print__t441t(__t5357t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:restore_stdout__t5188t(__t5332t__);
  closedir__t4981t(__t5297t__unsafe_ptr);
  free__t806t(&__t5281t__unsafe_ptr);
  if(__t5278t__initialized){
  printf("\033[0m");
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5359t() {
  char __t5362t=0;
  char __t5364t__=0;
  int64_t __t5365t=0;
  const char* __t5366t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t_complain=_main__t5275t();
  __t5362t=__t_complain;
  if(__t_complain){
  goto __t5362t__label;
  }
  __t5362t__label:__t5362t=__t5362t==0;
  not__t42t(__t5362t,&__t5364t__);
  if(__t5364t__){
  __t5365t=__t_complain;
  cstr__t4205t(__t5365t,&__t5366t__);
  print__t441t(__t5366t__);
  __t_errcode=63;
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
                    return main__t5359t();
                }