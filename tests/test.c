#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t4826t="test_file.bin";
const char* const __t443t="\n";
const char* const __t4850t="There was some kind of error";
static const char* __t_all_errcodes[49] = {"noerr",
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
"failed to open file",
"failed to create file",
"cannot open a new terminal in the current environment",
"failed to open new terminal",
"failed to move to start of closed file",
"not open file",
"end of file",
"failed to write to closed file",
"failed to write to file",
"failed to flush file contents"
};

static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void false__t14t(int* __t4862t) {
  int value=0;
  *__t4862t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t4863t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t4863t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t4864t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t4864t=__t111t__;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t4865t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t4865t=z;
}

static inline __attribute__((always_inline)) int nat16__t678t(uint64_t x, uint16_t* __t4866t) {
  uint64_t __t679t=0;
  char __t680t__=0;
  uint16_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t679t=65535;
  gt__t325t(x,__t679t,&__t680t__);
  if(__t680t__){
  printf("%s","\033[31mfail\033[0m nat value too large to pack in nat16\n\033[31mat\033[0m std/core/convert.s line 150 column 22\n");
  __t_errcode=10;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4866t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1047t(char** __t4867t, uint64_t* __t4868t, uint32_t* __t4869t, uint32_t* __t4870t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4867t=unsafe_ptr;
  *__t4868t=unsafe_size;
  *__t4869t=unsafe_offset;
  *__t4870t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t768t(char** __t4871t) {
  char* allocated=*__t4871t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t4871t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t4872t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t4872t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t4873t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t4873t=z;
}

static inline __attribute__((always_inline)) void nat__t688t(uint32_t x, uint64_t* __t4874t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4874t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t4875t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t4875t=z;
}

static inline __attribute__((always_inline)) void zero__t769t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t652t(char* x, char* __t4876t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t4876t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t4877t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t4877t=z;
}

static inline __attribute__((always_inline)) int alloc__t752t(uint64_t bytes, char** __t4878t) {
  char* allocated=0;
  char __t753t__=0;
  char __t754t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t652t(allocated,&__t753t__);
  not__t42t(__t753t__,&__t754t__);
  if(__t754t__){
  printf("%s","\033[31mfail\033[0m allocation failed\n\033[31mat\033[0m std/unsafe.s line 31 column 35\n");
  __t_errcode=13;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4878t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t891t(char** __t4879t, uint64_t* __t4880t, uint32_t* __t4881t, uint32_t* __t4882t, uint64_t size, char** __t4883t, uint64_t* __t4884t, uint32_t* __t4885t, uint32_t* __t4886t) {
  char* buffer__unsafe_ptr=*__t4879t;
  uint64_t buffer__unsafe_size=*__t4880t;
  uint32_t buffer__unsafe_offset=*__t4881t;
  uint32_t buffer__unsafe_align=*__t4882t;
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
  printf("%s","\033[31mfail\033[0m cannot resize buffers with alloc; it promises no data reallocation\n\033[31mat\033[0m std/core/array.s line 43 column 18\n");
  __t_errcode=16;
  goto __t_failure;
  }
  nat__t688t(buffer__unsafe_align,&__t906t__);
  mul__t212t(__t906t__,size,&__t907t__);
  bytes=__t907t__;
  __t909t=0;
  eq__t134t(bytes,__t909t,&__t910t__);
  if(__t910t__){
  printf("%s","\033[31mfail\033[0m cannot allocate a buffer of unsized type\n\033[31mat\033[0m std/core/array.s line 47 column 18\n");
  __t_errcode=15;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t752t(bytes,&__t911t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/core/array.s line 49 column 29\n   unhandled error from alloc(nat) -> (mut any ptr)\n");
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
  *__t4879t=buffer__unsafe_ptr;
  *__t4880t=buffer__unsafe_size;
  *__t4881t=buffer__unsafe_offset;
  *__t4882t=buffer__unsafe_align;
  *__t4883t=buffer__unsafe_ptr;
  *__t4884t=buffer__unsafe_size;
  *__t4885t=buffer__unsafe_offset;
  *__t4886t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1046t(uint64_t size, char** __t4887t, uint64_t* __t4888t, uint32_t* __t4889t, uint32_t* __t4890t) {
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
  printf("%s","\033[31mat\033[0m std/core/array.s line 57 column 12\n   unhandled error from alloc(edit any[], nat size) -> (edit any[])\n");
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t768t(&__t1050t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4887t=__t1050t__unsafe_ptr;
  *__t4888t=__t1050t__unsafe_size;
  *__t4889t=__t1050t__unsafe_offset;
  *__t4890t=__t1050t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4172t(const char* path, char** __t4891t) {
  int __t4177t=0;
  int __t4178t=0;
  char* unsafe_ptr=0;
  char __t4179t__=0;
  char __t4180t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__t652t(unsafe_ptr,&__t4179t__);
  not__t42t(__t4179t__,&__t4180t__);
  if(__t4180t__){
  printf("%s","\033[31mfail\033[0m failed to open file\n\033[31mat\033[0m std/io/file.s line 33 column 36\n");
  __t_errcode=39;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  
  goto __t_skip_returns;__t_return:
  *__t4891t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t4892t) {
  *__t4892t=to;
}

static inline __attribute__((always_inline)) void add__t770t(char* allocated, uint64_t offset, char** __t4893t) {
  char* element=0;
  char* __t771t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t771t__);
  goto __t_return;
  __t_return:
  *__t4893t=__t771t__;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t4894t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t4894t=z;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t4895t) {
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
  printf("%s","\033[31mfail\033[0m nat subtraction would yield a negative\n\033[31mat\033[0m std/core/numbers.s line 146 column 14\n");
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4895t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t4896t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t4896t=z;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t4897t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t4897t=z;
}

static inline __attribute__((always_inline)) int get__t1111t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t4898t) {
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
  printf("%s","\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/core/array.s line 102 column 40\n");
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
  *__t4898t=__t1118t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1569t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4899t, uint64_t* __t4900t, uint64_t* __t4901t, char* __t4902t) {
  goto __t_return;
  __t_return:
  *__t4899t=unsafe_ptr;
  *__t4900t=dat__pos;
  *__t4901t=dat__length;
  *__t4902t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1573t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4903t, uint64_t* __t4904t, uint64_t* __t4905t, char* __t4906t) {
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
  printf("%s","\033[31mfail\033[0m can only define strings on contiguous buffers\n\033[31mat\033[0m std/core/string.s line 53 column 40\n");
  __t_errcode=21;
  goto __t_failure;
  }
  nat__t688t(buf__unsafe_offset,&__t1577t__);
  __t1578t=0;
  neq__t158t(__t1577t__,__t1578t,&__t1579t__);
  if(__t1579t__){
  printf("%s","\033[31mfail\033[0m can only define strings on non-offset buffers\n\033[31mat\033[0m std/core/string.s line 54 column 41\n");
  __t_errcode=22;
  goto __t_failure;
  }
  str__t1569t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1580t__unsafe_ptr,&__t1580t__dat__pos,&__t1580t__dat__length,&__t1580t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4903t=__t1580t__unsafe_ptr;
  *__t4904t=__t1580t__dat__pos;
  *__t4905t=__t1580t__dat__length;
  *__t4906t=__t1580t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1607t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t4907t, uint64_t* __t4908t, uint64_t* __t4909t, char* __t4910t) {
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
  printf("%s","\033[31mat\033[0m std/core/string.s line 74 column 30\n   unhandled error from get(any[], nat i) -> (any ptr {follows any ptr buffer.unsafe_ptr})\n");
  goto __t_failure;
  }
  if(!__t1611t__){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m std/core/string.s line 74 column 30\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1612t__value,__t1611t__,1);
  first=__t1612t__value;
  }
  __t_errcode=str__t1573t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1613t__unsafe_ptr,&__t1613t__dat__pos,&__t1613t__dat__length,&__t1613t__dat__first);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/core/string.s line 75 column 12\n   unhandled error from str(char[], nat dat.pos, nat dat.length, char dat.first) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})\n");
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4907t=__t1613t__unsafe_ptr;
  *__t4908t=__t1613t__dat__pos;
  *__t4909t=__t1613t__dat__length;
  *__t4910t=__t1613t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int chunk__t4424t(char** __t4911t, uint64_t* __t4912t, uint32_t* __t4913t, uint32_t* __t4914t, char** __t4915t, char** __t4916t, uint64_t* __t4917t, uint64_t* __t4918t, char* __t4919t) {
  char* buf__unsafe_ptr=*__t4911t;
  uint64_t buf__unsafe_size=*__t4912t;
  uint32_t buf__unsafe_offset=*__t4913t;
  uint32_t buf__unsafe_align=*__t4914t;
  char* f__unsafe_ptr=*__t4915t;
  int __t4425t=0;
  uint64_t __t4426t=0;
  uint64_t __t4427t=0;
  uint64_t pos=0;
  char __t4428t__=0;
  char __t4429t__=0;
  char* __t4430t__=0;
  char* contents=0;
  uint64_t __t4431t__=0;
  uint64_t size=0;
  uint64_t __t4432t=0;
  uint64_t bytes_open=0;
  char __t4433t__=0;
  uint64_t __t4434t=0;
  char __t4435t__=0;
  uint64_t prev_pos=0;
  uint64_t __t4436t__=0;
  char* __t4438t__unsafe_ptr=0;
  uint64_t __t4438t__dat__pos=0;
  uint64_t __t4438t__dat__length=0;
  char __t4438t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4426t=0;
  __t4427t=__t4426t;
  pos=__t4427t;
  exists__t652t(buf__unsafe_ptr,&__t4428t__);
  not__t42t(__t4428t__,&__t4429t__);
  if(__t4429t__){
  printf("%s","\033[31mfail\033[0m not open file\n\033[31mat\033[0m std/io/file.s line 120 column 40\n");
  __t_errcode=44;
  goto __t_failure;
  }
  add__t770t(buf__unsafe_ptr,pos,&__t4430t__);
  contents=__t4430t__;
  __t_errcode=sub__t401t(buf__unsafe_size,pos,&__t4431t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/io/file.s line 122 column 27\n   unhandled error from sub(nat x, nat y) -> (nat)\n");
  goto __t_failure;
  }
  size=__t4431t__;
  __t4432t=0;
  bytes_open=__t4432t;
  exists__t652t(f__unsafe_ptr,&__t4433t__);
  if(__t4433t__){
  bytes_open=fread((char*)contents,1,size,(FILE*)f__unsafe_ptr);
  }
  __t4434t=0;
  eq__t134t(bytes_open,__t4434t,&__t4435t__);
  if(__t4435t__){
  printf("%s","\033[31mfail\033[0m end of file\n\033[31mat\033[0m std/io/file.s line 125 column 28\n");
  __t_errcode=45;
  goto __t_failure;
  }
  prev_pos=pos;
  add__t188t(pos,bytes_open,&__t4436t__);
  pos=__t4436t__;
  __t_errcode=str__t1607t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_open,&__t4438t__unsafe_ptr,&__t4438t__dat__pos,&__t4438t__dat__length,&__t4438t__dat__first);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/io/file.s line 128 column 12\n   unhandled error from str(char[], nat pos, \"len\", nat length) -> (str {tag, char ptr unsafe_ptr, nat dat.pos, nat dat.length, char dat.first})\n");
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4911t=buf__unsafe_ptr;
  *__t4912t=buf__unsafe_size;
  *__t4913t=buf__unsafe_offset;
  *__t4914t=buf__unsafe_align;
  *__t4915t=f__unsafe_ptr;
  *__t4916t=__t4438t__unsafe_ptr;
  *__t4917t=__t4438t__dat__pos;
  *__t4918t=__t4438t__dat__length;
  *__t4919t=__t4438t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t1096t(char** __t4920t, uint64_t* __t4921t, uint32_t* __t4922t, uint32_t* __t4923t, uint64_t i, char** __t4924t) {
  char* buffer__unsafe_ptr=*__t4920t;
  uint64_t buffer__unsafe_size=*__t4921t;
  uint32_t buffer__unsafe_offset=*__t4922t;
  uint32_t buffer__unsafe_align=*__t4923t;
  int __t1097t=0;
  char __t1098t__=0;
  uint64_t __t1099t__=0;
  uint64_t __t1100t__=0;
  uint64_t __t1101t__=0;
  uint64_t __t1102t__=0;
  char* __t1103t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1098t__);
  if(__t1098t__){
  printf("%s","\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/core/array.s line 89 column 40\n");
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t688t(buffer__unsafe_align,&__t1099t__);
  mul__t212t(i,__t1099t__,&__t1100t__);
  nat__t688t(buffer__unsafe_offset,&__t1101t__);
  add__t188t(__t1100t__,__t1101t__,&__t1102t__);
  add__t770t(buffer__unsafe_ptr,__t1102t__,&__t1103t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4920t=buffer__unsafe_ptr;
  *__t4921t=buffer__unsafe_size;
  *__t4922t=buffer__unsafe_offset;
  *__t4923t=buffer__unsafe_align;
  *__t4924t=__t1103t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat__t651t(char x, uint64_t* __t4925t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4925t=value;
}

static inline __attribute__((always_inline)) void bits__t653t(uint64_t value, uint64_t* __t4926t) {
  goto __t_return;
  __t_return:
  *__t4926t=value;
}

static inline __attribute__((always_inline)) void lshift__t663t(uint64_t x__value, uint64_t y, uint64_t* __t4927t) {
  uint64_t z=0;
  uint64_t __t664t__value=0;
  z=(x__value<<y);
  bits__t653t(z,&__t664t__value);
  goto __t_return;
  __t_return:
  *__t4927t=__t664t__value;
}

static inline __attribute__((always_inline)) void band__t669t(uint64_t x__value, uint64_t y__value, uint64_t* __t4928t) {
  uint64_t z=0;
  uint64_t __t670t__value=0;
  z=(x__value&y__value);
  bits__t653t(z,&__t670t__value);
  goto __t_return;
  __t_return:
  *__t4928t=__t670t__value;
}

static inline __attribute__((always_inline)) void nat__t648t(uint64_t x, uint64_t* __t4929t) {
  int __t649t=0;
  int __t650t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4929t=value;
}

static inline __attribute__((always_inline)) void nat__t659t(uint64_t x__value, uint64_t* __t4930t) {
  uint64_t __t660t__=0;
  nat__t648t(x__value,&__t660t__);
  goto __t_return;
  __t_return:
  *__t4930t=__t660t__;
}

static inline __attribute__((always_inline)) void nat16__t684t(uint64_t x, uint16_t* __t4931t) {
  uint16_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4931t=value;
}

static inline __attribute__((always_inline)) void print__t441t(const char* value) {
  int __t442t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int load__t4821t(uint16_t address, uint16_t* __t4932t) {
  uint64_t __t4822t=0;
  char* __t4823t__unsafe_ptr=0;
  uint64_t __t4823t__unsafe_size=0;
  uint32_t __t4823t__unsafe_offset=0;
  uint32_t __t4823t__unsafe_align=0;
  char* __t4825t__unsafe_ptr=0;
  uint64_t __t4825t__unsafe_size=0;
  uint32_t __t4825t__unsafe_offset=0;
  uint32_t __t4825t__unsafe_align=0;
  char* chunk_buffer__unsafe_ptr=0;
  uint64_t chunk_buffer__unsafe_size=0;
  uint32_t chunk_buffer__unsafe_offset=0;
  uint32_t chunk_buffer__unsafe_align=0;
  char* __t4827t__unsafe_ptr=0;
  char* __t4829t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  char __t4830t=0;
  char* __t4831t__unsafe_ptr=0;
  uint64_t __t4831t__dat__pos=0;
  uint64_t __t4831t__dat__length=0;
  char __t4831t__dat__first=0;
  uint64_t __t4852t=0;
  uint16_t __t4853t__=0;
  uint16_t __t4849t__=0;
  uint64_t __t4832t=0;
  char* __t4834t__=0;
  char __t4835t__value=0;
  uint64_t __t4836t__=0;
  uint64_t __t4837t__value=0;
  uint64_t r_value_h__value=0;
  uint64_t __t4838t=0;
  char* __t4840t__=0;
  char __t4841t__value=0;
  uint64_t __t4842t__=0;
  uint64_t __t4843t__value=0;
  uint64_t r_value_l__value=0;
  uint64_t __t4844t=0;
  uint64_t __t4845t__value=0;
  uint64_t __t4846t__value=0;
  uint64_t r_value__value=0;
  uint64_t __t4847t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4822t=2;
  __t_errcode=alloc__t1046t(__t4822t,&__t4823t__unsafe_ptr,&__t4823t__unsafe_size,&__t4823t__unsafe_offset,&__t4823t__unsafe_align);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 5 column 25\n   unhandled error from alloc(nat) -> (edit char[])\n");
  goto __t_failure;
  }
  __t4825t__unsafe_ptr=__t4823t__unsafe_ptr;
  __t4825t__unsafe_size=__t4823t__unsafe_size;
  __t4825t__unsafe_offset=__t4823t__unsafe_offset;
  __t4825t__unsafe_align=__t4823t__unsafe_align;
  chunk_buffer__unsafe_ptr=__t4825t__unsafe_ptr;
  chunk_buffer__unsafe_size=__t4825t__unsafe_size;
  chunk_buffer__unsafe_offset=__t4825t__unsafe_offset;
  chunk_buffer__unsafe_align=__t4825t__unsafe_align;
  __t_errcode=open__t4172t(__t4826t,&__t4827t__unsafe_ptr);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 6 column 14\n   unhandled error from open(cstr) -> (edit open {tag, mut any ptr unsafe_ptr})\n");
  goto __t_failure;
  }
  __t4829t__unsafe_ptr=__t4827t__unsafe_ptr;
  f__unsafe_ptr=__t4829t__unsafe_ptr;
  __t_complain=chunk__t4424t(&chunk_buffer__unsafe_ptr,&chunk_buffer__unsafe_size,&chunk_buffer__unsafe_offset,&chunk_buffer__unsafe_align,&f__unsafe_ptr,&__t4831t__unsafe_ptr,&__t4831t__dat__pos,&__t4831t__dat__length,&__t4831t__dat__first);
  __t4830t=__t_complain;
  if(__t_complain){
  goto __t4830t__label;
  }
  __t4830t__label:__t4830t=__t4830t==0;
  if(__t4830t){
  __t4832t=0;
  __t_errcode=mutget__t1096t(&chunk_buffer__unsafe_ptr,&chunk_buffer__unsafe_size,&chunk_buffer__unsafe_offset,&chunk_buffer__unsafe_align,__t4832t,&__t4834t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 9 column 42\n   unhandled error from mutget(edit any[], nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})\n");
  goto __t_failure;
  }
  if(!__t4834t__){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m tests/test.s line 9 column 42\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4835t__value,__t4834t__,1);
  nat__t651t(__t4835t__value,&__t4836t__);
  bits__t653t(__t4836t__,&__t4837t__value);
  r_value_h__value=__t4837t__value;
  __t4838t=1;
  __t_errcode=mutget__t1096t(&chunk_buffer__unsafe_ptr,&chunk_buffer__unsafe_size,&chunk_buffer__unsafe_offset,&chunk_buffer__unsafe_align,__t4838t,&__t4840t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 10 column 42\n   unhandled error from mutget(edit any[], nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})\n");
  goto __t_failure;
  }
  if(!__t4840t__){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m tests/test.s line 10 column 42\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4841t__value,__t4840t__,1);
  nat__t651t(__t4841t__value,&__t4842t__);
  bits__t653t(__t4842t__,&__t4843t__value);
  r_value_l__value=__t4843t__value;
  __t4844t=8;
  lshift__t663t(r_value_h__value,__t4844t,&__t4845t__value);
  band__t669t(__t4845t__value,r_value_l__value,&__t4846t__value);
  r_value__value=__t4846t__value;
  nat__t659t(r_value__value,&__t4847t__);
  nat16__t684t(__t4847t__,&__t4849t__);
  goto __t_return;
  }
  else{
  print__t441t(__t4850t);
  __t4852t=0;
  __t_errcode=nat16__t678t(__t4852t,&__t4853t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 15 column 16\n   unhandled error from nat16(nat) -> (nat16)\n");
  goto __t_failure;
  }
  __t4849t__=__t4853t__;
  goto __t_return;
  }
  __t4849t__=__t4849t__;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4932t=__t4849t__;
  
  __t_skip_returns:if(__t4827t__unsafe_ptr){
  fclose((FILE*)__t4827t__unsafe_ptr);
  __t4827t__unsafe_ptr=0;
  }
  free__t768t(&__t4823t__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat__t689t(uint16_t x, uint64_t* __t4933t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4933t=value;
}

static inline __attribute__((always_inline)) void print__t454t(uint64_t value) {
  int __t455t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t4854t() {
  uint64_t __t4857t=0;
  uint16_t __t4858t__=0;
  uint16_t __t4859t__=0;
  uint16_t ret=0;
  uint64_t __t4860t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t4857t=0;
  __t_errcode=nat16__t678t(__t4857t,&__t4858t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 19 column 16\n   unhandled error from nat16(nat) -> (nat16)\n");
  goto __t_failure;
  }
  __t_errcode=load__t4821t(__t4858t__,&__t4859t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 19 column 11\n   unhandled error from load(mut console CLI, nat16 address) -> (nat16) with effects CLI\n");
  goto __t_failure;
  }
  ret=__t4859t__;
  nat__t689t(ret,&__t4860t__);
  print__t454t(__t4860t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t4854t();
                }