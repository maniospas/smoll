#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5052t="README.md";
const char* const __t443t="\n";
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
"failed to move to a position to closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to flush file contents",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir"
};

static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1043t(char** __t5098t, uint64_t* __t5099t, uint32_t* __t5100t, uint32_t* __t5101t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5098t=unsafe_ptr;
  *__t5099t=unsafe_size;
  *__t5100t=unsafe_offset;
  *__t5101t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t764t(char** __t5102t) {
  char* allocated=*__t5102t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5102t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5103t) {
  int value=0;
  *__t5103t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5104t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5104t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5105t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5105t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5106t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5106t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5107t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5107t=z;
}

static inline __attribute__((always_inline)) void nat__t684t(uint32_t x, uint64_t* __t5108t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5108t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5109t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5109t=z;
}

static inline __attribute__((always_inline)) void zero__t765t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t652t(char* x, char* __t5110t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5110t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5111t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5111t=z;
}

static inline __attribute__((always_inline)) int alloc__t748t(uint64_t bytes, char** __t5112t) {
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
  *__t5112t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t887t(char** __t5113t, uint64_t* __t5114t, uint32_t* __t5115t, uint32_t* __t5116t, uint64_t size, char** __t5117t, uint64_t* __t5118t, uint32_t* __t5119t, uint32_t* __t5120t) {
  char* buffer__unsafe_ptr=*__t5113t;
  uint64_t buffer__unsafe_size=*__t5114t;
  uint32_t buffer__unsafe_offset=*__t5115t;
  uint32_t buffer__unsafe_align=*__t5116t;
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
  *__t5113t=buffer__unsafe_ptr;
  *__t5114t=buffer__unsafe_size;
  *__t5115t=buffer__unsafe_offset;
  *__t5116t=buffer__unsafe_align;
  *__t5117t=buffer__unsafe_ptr;
  *__t5118t=buffer__unsafe_size;
  *__t5119t=buffer__unsafe_offset;
  *__t5120t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1042t(uint64_t size, char** __t5121t, uint64_t* __t5122t, uint32_t* __t5123t, uint32_t* __t5124t) {
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
  *__t5121t=__t1046t__unsafe_ptr;
  *__t5122t=__t1046t__unsafe_size;
  *__t5123t=__t1046t__unsafe_offset;
  *__t5124t=__t1046t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1540t(char** __t5125t, uint64_t* __t5126t, uint32_t* __t5127t, uint32_t* __t5128t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5125t=unsafe_ptr;
  *__t5126t=unsafe_size;
  *__t5127t=unsafe_offset;
  *__t5128t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t5129t) {
  *__t5129t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5130t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5130t=z;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t5131t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5131t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5132t) {
  *__t5132t=to;
}

static inline __attribute__((always_inline)) void add__t766t(char* allocated, uint64_t offset, char** __t5133t) {
  char* element=0;
  char* __t767t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t767t__);
  goto __t_return;
  __t_return:
  *__t5133t=__t767t__;
}

static inline __attribute__((always_inline)) int get__t1107t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5134t) {
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
  *__t5134t=__t1114t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1565t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5135t, uint64_t* __t5136t, uint64_t* __t5137t, char* __t5138t) {
  goto __t_return;
  __t_return:
  *__t5135t=unsafe_ptr;
  *__t5136t=dat__pos;
  *__t5137t=dat__length;
  *__t5138t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1569t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t5139t, uint64_t* __t5140t, uint64_t* __t5141t, char* __t5142t) {
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
  *__t5139t=__t1576t__unsafe_ptr;
  *__t5140t=__t1576t__dat__pos;
  *__t5141t=__t1576t__dat__length;
  *__t5142t=__t1576t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1603t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t5143t, uint64_t* __t5144t, uint64_t* __t5145t, char* __t5146t) {
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
  *__t5143t=__t1609t__unsafe_ptr;
  *__t5144t=__t1609t__dat__pos;
  *__t5145t=__t1609t__dat__length;
  *__t5146t=__t1609t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1625t(const char* c, char** __t5147t, uint64_t* __t5148t, uint64_t* __t5149t, char* __t5150t) {
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
  *__t5147t=ret__unsafe_ptr;
  *__t5148t=ret__dat__pos;
  *__t5149t=ret__dat__length;
  *__t5150t=ret__dat__first;
}

void unsafe_temp__t1730t(const char* cstr, const char** __t5151t, char** __t5152t, uint64_t* __t5153t, uint64_t* __t5154t, char* __t5155t) {
  char* __t1731t__unsafe_ptr=0;
  uint64_t __t1731t__dat__pos=0;
  uint64_t __t1731t__dat__length=0;
  char __t1731t__dat__first=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  str__t1625t(cstr,&__t1731t__unsafe_ptr,&__t1731t__dat__pos,&__t1731t__dat__length,&__t1731t__dat__first);
  str__unsafe_ptr=__t1731t__unsafe_ptr;
  str__dat__pos=__t1731t__dat__pos;
  str__dat__length=__t1731t__dat__length;
  str__dat__first=__t1731t__dat__first;
  goto __t_return;
  __t_return:
  *__t5151t=cstr;
  *__t5152t=str__unsafe_ptr;
  *__t5153t=str__dat__pos;
  *__t5154t=str__dat__length;
  *__t5155t=str__dat__first;
}

static inline __attribute__((always_inline)) void cstr__t1734t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t5156t) {
  goto __t_return;
  __t_return:
  *__t5156t=value__cstr;
}

static inline __attribute__((always_inline)) int open__t4307t(const char* _path, char** __t5157t) {
  int __t4309t=0;
  const char* __t4310t__cstr=0;
  char* __t4310t__str__unsafe_ptr=0;
  uint64_t __t4310t__str__dat__pos=0;
  uint64_t __t4310t__str__dat__length=0;
  char __t4310t__str__dat__first=0;
  const char* __t4311t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t4312t__=0;
  char __t4313t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_temp__t1730t(_path,&__t4310t__cstr,&__t4310t__str__unsafe_ptr,&__t4310t__str__dat__pos,&__t4310t__str__dat__length,&__t4310t__str__dat__first);
  cstr__t1734t(__t4310t__cstr,__t4310t__str__unsafe_ptr,__t4310t__str__dat__pos,__t4310t__str__dat__length,__t4310t__str__dat__first,&__t4311t__);
  path=__t4311t__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__t652t(unsafe_ptr,&__t4312t__);
  not__t42t(__t4312t__,&__t4313t__);
  if(__t4313t__){
  __t_errcode=45;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  
  goto __t_skip_returns;__t_return:
  *__t5157t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int seek__t4370t(char** __t5158t, uint64_t idx) {
  char* f__unsafe_ptr=*__t5158t;
  char __t4371t__=0;
  char __t4372t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t652t(f__unsafe_ptr,&__t4371t__);
  not__t42t(__t4371t__,&__t4372t__);
  if(__t4372t__){
  __t_errcode=51;
  goto __t_failure;
  }
  fseek((FILE*)f__unsafe_ptr,idx,SEEK_SET);
  
  __t_failure:
  goto __t_skip_returns;*__t5158t=f__unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t5159t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5159t=z;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t5160t) {
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
  *__t5160t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int chunk__t4462t(char** __t5161t, uint64_t* __t5162t, uint32_t* __t5163t, uint32_t* __t5164t, char** __t5165t, char** __t5166t, uint64_t* __t5167t, uint64_t* __t5168t, char* __t5169t) {
  char* buf__unsafe_ptr=*__t5161t;
  uint64_t buf__unsafe_size=*__t5162t;
  uint32_t buf__unsafe_offset=*__t5163t;
  uint32_t buf__unsafe_align=*__t5164t;
  char* f__unsafe_ptr=*__t5165t;
  int __t4463t=0;
  uint64_t __t4464t=0;
  uint64_t __t4465t=0;
  uint64_t pos=0;
  char __t4466t__=0;
  char __t4467t__=0;
  char* __t4468t__=0;
  char* contents=0;
  uint64_t __t4469t__=0;
  uint64_t size=0;
  uint64_t __t4470t=0;
  uint64_t bytes_open=0;
  char __t4471t__=0;
  uint64_t __t4472t=0;
  char __t4473t__=0;
  uint64_t prev_pos=0;
  uint64_t __t4474t__=0;
  char* __t4476t__unsafe_ptr=0;
  uint64_t __t4476t__dat__pos=0;
  uint64_t __t4476t__dat__length=0;
  char __t4476t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4464t=0;
  __t4465t=__t4464t;
  pos=__t4465t;
  exists__t652t(buf__unsafe_ptr,&__t4466t__);
  not__t42t(__t4466t__,&__t4467t__);
  if(__t4467t__){
  __t_errcode=52;
  goto __t_failure;
  }
  add__t766t(buf__unsafe_ptr,pos,&__t4468t__);
  contents=__t4468t__;
  __t_errcode=sub__t401t(buf__unsafe_size,pos,&__t4469t__);
  if(__t_errcode){
  goto __t_failure;
  }
  size=__t4469t__;
  __t4470t=0;
  bytes_open=__t4470t;
  exists__t652t(f__unsafe_ptr,&__t4471t__);
  if(__t4471t__){
  bytes_open=fread((char*)contents,1,size,(FILE*)f__unsafe_ptr);
  }
  __t4472t=0;
  eq__t134t(bytes_open,__t4472t,&__t4473t__);
  if(__t4473t__){
  __t_errcode=42;
  goto __t_failure;
  }
  prev_pos=pos;
  add__t188t(pos,bytes_open,&__t4474t__);
  pos=__t4474t__;
  __t_errcode=str__t1603t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_open,&__t4476t__unsafe_ptr,&__t4476t__dat__pos,&__t4476t__dat__length,&__t4476t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5161t=buf__unsafe_ptr;
  *__t5162t=buf__unsafe_size;
  *__t5163t=buf__unsafe_offset;
  *__t5164t=buf__unsafe_align;
  *__t5165t=f__unsafe_ptr;
  *__t5166t=__t4476t__unsafe_ptr;
  *__t5167t=__t4476t__dat__pos;
  *__t5168t=__t4476t__dat__length;
  *__t5169t=__t4476t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t1092t(char** __t5170t, uint64_t* __t5171t, uint32_t* __t5172t, uint32_t* __t5173t, uint64_t i, char** __t5174t) {
  char* buffer__unsafe_ptr=*__t5170t;
  uint64_t buffer__unsafe_size=*__t5171t;
  uint32_t buffer__unsafe_offset=*__t5172t;
  uint32_t buffer__unsafe_align=*__t5173t;
  int __t1093t=0;
  char __t1094t__=0;
  uint64_t __t1095t__=0;
  uint64_t __t1096t__=0;
  uint64_t __t1097t__=0;
  uint64_t __t1098t__=0;
  char* __t1099t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1094t__);
  if(__t1094t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t1095t__);
  mul__t212t(i,__t1095t__,&__t1096t__);
  nat__t684t(buffer__unsafe_offset,&__t1097t__);
  add__t188t(__t1096t__,__t1097t__,&__t1098t__);
  add__t766t(buffer__unsafe_ptr,__t1098t__,&__t1099t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5170t=buffer__unsafe_ptr;
  *__t5171t=buffer__unsafe_size;
  *__t5172t=buffer__unsafe_offset;
  *__t5173t=buffer__unsafe_align;
  *__t5174t=__t1099t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat__t651t(char x, uint64_t* __t5175t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5175t=value;
}

static inline __attribute__((always_inline)) void bits__t653t(uint64_t value, uint64_t* __t5176t) {
  goto __t_return;
  __t_return:
  *__t5176t=value;
}

static inline __attribute__((always_inline)) void print__t1817t(char c) {
  int __t1818t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%c%s",c,endl);
}

static inline __attribute__((always_inline)) void print__t454t(uint64_t value) {
  int __t455t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nat__t648t(uint64_t x, uint64_t* __t5177t) {
  int __t649t=0;
  int __t650t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5177t=value;
}

static inline __attribute__((always_inline)) void nat__t659t(uint64_t x__value, uint64_t* __t5178t) {
  uint64_t __t660t__=0;
  nat__t648t(x__value,&__t660t__);
  goto __t_return;
  __t_return:
  *__t5178t=__t660t__;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t5179t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5179t=z;
}

static inline __attribute__((always_inline)) int nat8__t673t(uint64_t x, uint8_t* __t5180t) {
  uint64_t __t674t=0;
  char __t675t__=0;
  uint8_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t674t=255;
  gt__t325t(x,__t674t,&__t675t__);
  if(__t675t__){
  __t_errcode=9;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5180t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void tochar__t676t(uint8_t x, char* __t5181t) {
  char value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5181t=value;
}

static inline __attribute__((always_inline)) void bits__t687t(char value, uint64_t* __t5182t) {
  uint64_t __t688t__=0;
  uint64_t __t689t__value=0;
  nat__t651t(value,&__t688t__);
  bits__t653t(__t688t__,&__t689t__value);
  goto __t_return;
  __t_return:
  *__t5182t=__t689t__value;
}

static inline __attribute__((always_inline)) void lshift__t663t(uint64_t x__value, uint64_t y, uint64_t* __t5183t) {
  uint64_t z=0;
  uint64_t __t664t__value=0;
  z=(x__value<<y);
  bits__t653t(z,&__t664t__value);
  goto __t_return;
  __t_return:
  *__t5183t=__t664t__value;
}

static inline __attribute__((always_inline)) int main__t5045t() {
  uint64_t __t5048t=0;
  char* __t5049t__unsafe_ptr=0;
  uint64_t __t5049t__unsafe_size=0;
  uint32_t __t5049t__unsafe_offset=0;
  uint32_t __t5049t__unsafe_align=0;
  char* __t5051t__unsafe_ptr=0;
  uint64_t __t5051t__unsafe_size=0;
  uint32_t __t5051t__unsafe_offset=0;
  uint32_t __t5051t__unsafe_align=0;
  char* chunk_buffer__unsafe_ptr=0;
  uint64_t chunk_buffer__unsafe_size=0;
  uint32_t chunk_buffer__unsafe_offset=0;
  uint32_t chunk_buffer__unsafe_align=0;
  char* __t5053t__unsafe_ptr=0;
  char* __t5055t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __t5056t=0;
  char __t5058t=0;
  char* __t5059t__unsafe_ptr=0;
  uint64_t __t5059t__dat__pos=0;
  uint64_t __t5059t__dat__length=0;
  char __t5059t__dat__first=0;
  uint64_t __t5060t=0;
  char* __t5062t__=0;
  char __t5063t__value=0;
  uint64_t __t5064t__=0;
  uint64_t __t5065t__value=0;
  uint64_t first_byte__value=0;
  uint64_t __t5066t=0;
  char* __t5068t__=0;
  char __t5069t__value=0;
  uint64_t __t5071t=0;
  char* __t5073t__=0;
  char __t5074t__value=0;
  uint64_t __t5075t__=0;
  uint64_t __t5077t__=0;
  uint64_t __t5079t__=0;
  uint8_t __t5080t__=0;
  char __t5081t__=0;
  uint64_t __t5083t=0;
  char* __t5085t__=0;
  char __t5086t__value=0;
  uint64_t __t5087t__value=0;
  uint64_t __t5088t=0;
  uint64_t __t5089t__value=0;
  uint64_t __t5090t__=0;
  uint64_t __t5091t=0;
  char* __t5093t__=0;
  char __t5094t__value=0;
  uint64_t __t5095t__=0;
  uint64_t __t5096t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t5048t=2;
  __t_errcode=alloc__t1042t(__t5048t,&__t5049t__unsafe_ptr,&__t5049t__unsafe_size,&__t5049t__unsafe_offset,&__t5049t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5051t__unsafe_ptr=__t5049t__unsafe_ptr;
  __t5051t__unsafe_size=__t5049t__unsafe_size;
  __t5051t__unsafe_offset=__t5049t__unsafe_offset;
  __t5051t__unsafe_align=__t5049t__unsafe_align;
  chunk_buffer__unsafe_ptr=__t5051t__unsafe_ptr;
  chunk_buffer__unsafe_size=__t5051t__unsafe_size;
  chunk_buffer__unsafe_offset=__t5051t__unsafe_offset;
  chunk_buffer__unsafe_align=__t5051t__unsafe_align;
  __t_errcode=open__t4307t(__t5052t,&__t5053t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5055t__unsafe_ptr=__t5053t__unsafe_ptr;
  f__unsafe_ptr=__t5055t__unsafe_ptr;
  __t5056t=1;
  __t_errcode=seek__t4370t(&f__unsafe_ptr,__t5056t);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_complain=chunk__t4462t(&chunk_buffer__unsafe_ptr,&chunk_buffer__unsafe_size,&chunk_buffer__unsafe_offset,&chunk_buffer__unsafe_align,&f__unsafe_ptr,&__t5059t__unsafe_ptr,&__t5059t__dat__pos,&__t5059t__dat__length,&__t5059t__dat__first);
  __t5058t=__t_complain;
  if(__t_complain){
  goto __t5058t__label;
  }
  __t5058t__label:__t5058t=__t5058t==0;
  if(__t5058t){
  __t5060t=0;
  __t_errcode=mutget__t1092t(&chunk_buffer__unsafe_ptr,&chunk_buffer__unsafe_size,&chunk_buffer__unsafe_offset,&chunk_buffer__unsafe_align,__t5060t,&__t5062t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5062t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5063t__value,__t5062t__,1);
  nat__t651t(__t5063t__value,&__t5064t__);
  bits__t653t(__t5064t__,&__t5065t__value);
  first_byte__value=__t5065t__value;
  __t5066t=0;
  __t_errcode=mutget__t1092t(&chunk_buffer__unsafe_ptr,&chunk_buffer__unsafe_size,&chunk_buffer__unsafe_offset,&chunk_buffer__unsafe_align,__t5066t,&__t5068t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5068t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5069t__value,__t5068t__,1);
  print__t1817t(__t5069t__value);
  __t5071t=0;
  __t_errcode=mutget__t1092t(&chunk_buffer__unsafe_ptr,&chunk_buffer__unsafe_size,&chunk_buffer__unsafe_offset,&chunk_buffer__unsafe_align,__t5071t,&__t5073t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5073t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5074t__value,__t5073t__,1);
  nat__t651t(__t5074t__value,&__t5075t__);
  print__t454t(__t5075t__);
  nat__t659t(first_byte__value,&__t5077t__);
  print__t454t(__t5077t__);
  nat__t659t(first_byte__value,&__t5079t__);
  __t_errcode=nat8__t673t(__t5079t__,&__t5080t__);
  if(__t_errcode){
  goto __t_failure;
  }
  tochar__t676t(__t5080t__,&__t5081t__);
  print__t1817t(__t5081t__);
  __t5083t=0;
  __t_errcode=mutget__t1092t(&chunk_buffer__unsafe_ptr,&chunk_buffer__unsafe_size,&chunk_buffer__unsafe_offset,&chunk_buffer__unsafe_align,__t5083t,&__t5085t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5085t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5086t__value,__t5085t__,1);
  bits__t687t(__t5086t__value,&__t5087t__value);
  __t5088t=8;
  lshift__t663t(__t5087t__value,__t5088t,&__t5089t__value);
  nat__t659t(__t5089t__value,&__t5090t__);
  __t5091t=1;
  __t_errcode=mutget__t1092t(&chunk_buffer__unsafe_ptr,&chunk_buffer__unsafe_size,&chunk_buffer__unsafe_offset,&chunk_buffer__unsafe_align,__t5091t,&__t5093t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5093t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5094t__value,__t5093t__,1);
  nat__t651t(__t5094t__value,&__t5095t__);
  add__t188t(__t5090t__,__t5095t__,&__t5096t__);
  print__t454t(__t5096t__);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:if(__t5053t__unsafe_ptr){
  fclose((FILE*)__t5053t__unsafe_ptr);
  __t5053t__unsafe_ptr=0;
  }
  free__t764t(&__t5049t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t5045t();
                }