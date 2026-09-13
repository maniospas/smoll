#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t4823t="test_file.bin";
const char* const __t443t="\n";
const char* const __t4184t="binary";
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

static inline __attribute__((always_inline)) void false__t14t(int* __t4860t) {
  int value=0;
  *__t4860t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t4861t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t4861t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t4862t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t4862t=__t111t__;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t4863t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t4863t=z;
}

static inline __attribute__((always_inline)) int nat16__t671t(uint64_t x, uint16_t* __t4864t) {
  uint64_t __t672t=0;
  char __t673t__=0;
  uint16_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t672t=65535;
  gt__t325t(x,__t672t,&__t673t__);
  if(__t673t__){
  __t_errcode=10;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4864t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1044t(char** __t4865t, uint64_t* __t4866t, uint32_t* __t4867t, uint32_t* __t4868t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4865t=unsafe_ptr;
  *__t4866t=unsafe_size;
  *__t4867t=unsafe_offset;
  *__t4868t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t765t(char** __t4869t) {
  char* allocated=*__t4869t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t4869t=allocated;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t4870t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t4870t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t4871t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t4871t=z;
}

static inline __attribute__((always_inline)) void nat__t684t(uint32_t x, uint64_t* __t4872t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4872t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t4873t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t4873t=z;
}

static inline __attribute__((always_inline)) void zero__t766t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t645t(char* x, char* __t4874t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t4874t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t4875t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t4875t=z;
}

static inline __attribute__((always_inline)) int alloc__t749t(uint64_t bytes, char** __t4876t) {
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
  *__t4876t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t888t(char** __t4877t, uint64_t* __t4878t, uint32_t* __t4879t, uint32_t* __t4880t, uint64_t size, char** __t4881t, uint64_t* __t4882t, uint32_t* __t4883t, uint32_t* __t4884t) {
  char* buffer__unsafe_ptr=*__t4877t;
  uint64_t buffer__unsafe_size=*__t4878t;
  uint32_t buffer__unsafe_offset=*__t4879t;
  uint32_t buffer__unsafe_align=*__t4880t;
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
  *__t4877t=buffer__unsafe_ptr;
  *__t4878t=buffer__unsafe_size;
  *__t4879t=buffer__unsafe_offset;
  *__t4880t=buffer__unsafe_align;
  *__t4881t=buffer__unsafe_ptr;
  *__t4882t=buffer__unsafe_size;
  *__t4883t=buffer__unsafe_offset;
  *__t4884t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1043t(uint64_t size, char** __t4885t, uint64_t* __t4886t, uint32_t* __t4887t, uint32_t* __t4888t) {
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
  *__t4885t=__t1047t__unsafe_ptr;
  *__t4886t=__t1047t__unsafe_size;
  *__t4887t=__t1047t__unsafe_offset;
  *__t4888t=__t1047t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4179t(const char* path, char** __t4889t) {
  int __t4181t=0;
  char __t4182t=0;
  char __t4183t=0;
  char* unsafe_ptr=0;
  char __t4185t__=0;
  char __t4186t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4183t=1;
  if(__t4184t!=__t4184t){
  __t4183t=0;
  }
  if(__t4183t){
  __t4182t=1;
  }
  if(__t4182t){
  unsafe_ptr=(char*)fopen(path,"rb");
  }
  else{
  unsafe_ptr=(char*)fopen(path,"r");
  }
  exists__t645t(unsafe_ptr,&__t4185t__);
  not__t42t(__t4185t__,&__t4186t__);
  if(__t4186t__){
  __t_errcode=39;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  
  goto __t_skip_returns;__t_return:
  *__t4889t=unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat__t683t(uint16_t x, uint64_t* __t4890t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4890t=value;
}

static inline __attribute__((always_inline)) int seek__t4282t(char** __t4891t, uint64_t idx) {
  char* f__unsafe_ptr=*__t4891t;
  char __t4283t__=0;
  char __t4284t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t645t(f__unsafe_ptr,&__t4283t__);
  not__t42t(__t4283t__,&__t4284t__);
  if(__t4284t__){
  __t_errcode=44;
  goto __t_failure;
  }
  fseek((FILE*)f__unsafe_ptr,idx,SEEK_SET);
  
  __t_failure:
  goto __t_skip_returns;*__t4891t=f__unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t4892t) {
  *__t4892t=to;
}

static inline __attribute__((always_inline)) void add__t767t(char* allocated, uint64_t offset, char** __t4893t) {
  char* element=0;
  char* __t768t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t768t__);
  goto __t_return;
  __t_return:
  *__t4893t=__t768t__;
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

static inline __attribute__((always_inline)) int get__t1108t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t4898t) {
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
  *__t4898t=__t1115t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1566t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4899t, uint64_t* __t4900t, uint64_t* __t4901t, char* __t4902t) {
  goto __t_return;
  __t_return:
  *__t4899t=unsafe_ptr;
  *__t4900t=dat__pos;
  *__t4901t=dat__length;
  *__t4902t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1570t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4903t, uint64_t* __t4904t, uint64_t* __t4905t, char* __t4906t) {
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
  *__t4903t=__t1577t__unsafe_ptr;
  *__t4904t=__t1577t__dat__pos;
  *__t4905t=__t1577t__dat__length;
  *__t4906t=__t1577t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1604t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t4907t, uint64_t* __t4908t, uint64_t* __t4909t, char* __t4910t) {
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
  *__t4907t=__t1610t__unsafe_ptr;
  *__t4908t=__t1610t__dat__pos;
  *__t4909t=__t1610t__dat__length;
  *__t4910t=__t1610t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int chunk__t4436t(char** __t4911t, uint64_t* __t4912t, uint32_t* __t4913t, uint32_t* __t4914t, char** __t4915t, char** __t4916t, uint64_t* __t4917t, uint64_t* __t4918t, char* __t4919t) {
  char* buf__unsafe_ptr=*__t4911t;
  uint64_t buf__unsafe_size=*__t4912t;
  uint32_t buf__unsafe_offset=*__t4913t;
  uint32_t buf__unsafe_align=*__t4914t;
  char* f__unsafe_ptr=*__t4915t;
  int __t4437t=0;
  uint64_t __t4438t=0;
  uint64_t __t4439t=0;
  uint64_t pos=0;
  char __t4440t__=0;
  char __t4441t__=0;
  char* __t4442t__=0;
  char* contents=0;
  uint64_t __t4443t__=0;
  uint64_t size=0;
  uint64_t __t4444t=0;
  uint64_t bytes_open=0;
  char __t4445t__=0;
  uint64_t __t4446t=0;
  char __t4447t__=0;
  uint64_t prev_pos=0;
  uint64_t __t4448t__=0;
  char* __t4450t__unsafe_ptr=0;
  uint64_t __t4450t__dat__pos=0;
  uint64_t __t4450t__dat__length=0;
  char __t4450t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4438t=0;
  __t4439t=__t4438t;
  pos=__t4439t;
  exists__t645t(buf__unsafe_ptr,&__t4440t__);
  not__t42t(__t4440t__,&__t4441t__);
  if(__t4441t__){
  __t_errcode=44;
  goto __t_failure;
  }
  add__t767t(buf__unsafe_ptr,pos,&__t4442t__);
  contents=__t4442t__;
  __t_errcode=sub__t401t(buf__unsafe_size,pos,&__t4443t__);
  if(__t_errcode){
  goto __t_failure;
  }
  size=__t4443t__;
  __t4444t=0;
  bytes_open=__t4444t;
  exists__t645t(f__unsafe_ptr,&__t4445t__);
  if(__t4445t__){
  bytes_open=fread((char*)contents,1,size,(FILE*)f__unsafe_ptr);
  }
  __t4446t=0;
  eq__t134t(bytes_open,__t4446t,&__t4447t__);
  if(__t4447t__){
  __t_errcode=45;
  goto __t_failure;
  }
  prev_pos=pos;
  add__t188t(pos,bytes_open,&__t4448t__);
  pos=__t4448t__;
  __t_errcode=str__t1604t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_open,&__t4450t__unsafe_ptr,&__t4450t__dat__pos,&__t4450t__dat__length,&__t4450t__dat__first);
  if(__t_errcode){
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
  *__t4916t=__t4450t__unsafe_ptr;
  *__t4917t=__t4450t__dat__pos;
  *__t4918t=__t4450t__dat__length;
  *__t4919t=__t4450t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t1093t(char** __t4920t, uint64_t* __t4921t, uint32_t* __t4922t, uint32_t* __t4923t, uint64_t i, char** __t4924t) {
  char* buffer__unsafe_ptr=*__t4920t;
  uint64_t buffer__unsafe_size=*__t4921t;
  uint32_t buffer__unsafe_offset=*__t4922t;
  uint32_t buffer__unsafe_align=*__t4923t;
  int __t1094t=0;
  char __t1095t__=0;
  uint64_t __t1096t__=0;
  uint64_t __t1097t__=0;
  uint64_t __t1098t__=0;
  uint64_t __t1099t__=0;
  char* __t1100t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1095t__);
  if(__t1095t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t1096t__);
  mul__t212t(i,__t1096t__,&__t1097t__);
  nat__t684t(buffer__unsafe_offset,&__t1098t__);
  add__t188t(__t1097t__,__t1098t__,&__t1099t__);
  add__t767t(buffer__unsafe_ptr,__t1099t__,&__t1100t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4920t=buffer__unsafe_ptr;
  *__t4921t=buffer__unsafe_size;
  *__t4922t=buffer__unsafe_offset;
  *__t4923t=buffer__unsafe_align;
  *__t4924t=__t1100t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat8__t670t(char x, uint8_t* __t4925t) {
  uint8_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4925t=value;
}

static inline __attribute__((always_inline)) void nat__t682t(uint8_t x, uint64_t* __t4926t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4926t=value;
}

static inline __attribute__((always_inline)) void bits__t646t(uint64_t value, uint64_t* __t4927t) {
  goto __t_return;
  __t_return:
  *__t4927t=value;
}

static inline __attribute__((always_inline)) void bits__t688t(uint8_t value, uint64_t* __t4928t) {
  uint64_t __t689t__=0;
  uint64_t __t690t__value=0;
  nat__t682t(value,&__t689t__);
  bits__t646t(__t689t__,&__t690t__value);
  goto __t_return;
  __t_return:
  *__t4928t=__t690t__value;
}

static inline __attribute__((always_inline)) void bits__t697t(char value, uint64_t* __t4929t) {
  uint8_t __t698t__=0;
  uint64_t __t699t__value=0;
  nat8__t670t(value,&__t698t__);
  bits__t688t(__t698t__,&__t699t__value);
  goto __t_return;
  __t_return:
  *__t4929t=__t699t__value;
}

static inline __attribute__((always_inline)) void lshift__t656t(uint64_t x__value, uint64_t y, uint64_t* __t4930t) {
  uint64_t z=0;
  uint64_t __t657t__value=0;
  z=(x__value<<y);
  bits__t646t(z,&__t657t__value);
  goto __t_return;
  __t_return:
  *__t4930t=__t657t__value;
}

static inline __attribute__((always_inline)) void bor__t664t(uint64_t x__value, uint64_t y__value, uint64_t* __t4931t) {
  uint64_t z=0;
  uint64_t __t665t__value=0;
  z=(x__value|y__value);
  bits__t646t(z,&__t665t__value);
  goto __t_return;
  __t_return:
  *__t4931t=__t665t__value;
}

static inline __attribute__((always_inline)) void nat__t642t(uint64_t x, uint64_t* __t4932t) {
  int __t643t=0;
  int __t644t=0;
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4932t=value;
}

static inline __attribute__((always_inline)) void nat__t652t(uint64_t x__value, uint64_t* __t4933t) {
  uint64_t __t653t__=0;
  nat__t642t(x__value,&__t653t__);
  goto __t_return;
  __t_return:
  *__t4933t=__t653t__;
}

static inline __attribute__((always_inline)) int load__t4818t(uint16_t address, uint16_t* __t4934t) {
  uint64_t __t4819t=0;
  char* __t4820t__unsafe_ptr=0;
  uint64_t __t4820t__unsafe_size=0;
  uint32_t __t4820t__unsafe_offset=0;
  uint32_t __t4820t__unsafe_align=0;
  char* __t4822t__unsafe_ptr=0;
  uint64_t __t4822t__unsafe_size=0;
  uint32_t __t4822t__unsafe_offset=0;
  uint32_t __t4822t__unsafe_align=0;
  char* chunk_buffer__unsafe_ptr=0;
  uint64_t chunk_buffer__unsafe_size=0;
  uint32_t chunk_buffer__unsafe_offset=0;
  uint32_t chunk_buffer__unsafe_align=0;
  char* __t4825t__unsafe_ptr=0;
  char* __t4827t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __t4828t__=0;
  char* __t4830t__unsafe_ptr=0;
  uint64_t __t4830t__dat__pos=0;
  uint64_t __t4830t__dat__length=0;
  char __t4830t__dat__first=0;
  uint64_t __t4831t=0;
  char* __t4833t__=0;
  char __t4834t__value=0;
  uint64_t __t4835t__value=0;
  uint64_t r_value_h__value=0;
  uint64_t __t4836t=0;
  char* __t4838t__=0;
  char __t4839t__value=0;
  uint64_t __t4840t__value=0;
  uint64_t r_value_l__value=0;
  uint64_t __t4841t=0;
  uint64_t __t4842t__value=0;
  uint64_t __t4843t__value=0;
  uint64_t r_value__value=0;
  uint64_t __t4844t__=0;
  uint16_t __t4845t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4819t=2;
  __t_errcode=alloc__t1043t(__t4819t,&__t4820t__unsafe_ptr,&__t4820t__unsafe_size,&__t4820t__unsafe_offset,&__t4820t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4822t__unsafe_ptr=__t4820t__unsafe_ptr;
  __t4822t__unsafe_size=__t4820t__unsafe_size;
  __t4822t__unsafe_offset=__t4820t__unsafe_offset;
  __t4822t__unsafe_align=__t4820t__unsafe_align;
  chunk_buffer__unsafe_ptr=__t4822t__unsafe_ptr;
  chunk_buffer__unsafe_size=__t4822t__unsafe_size;
  chunk_buffer__unsafe_offset=__t4822t__unsafe_offset;
  chunk_buffer__unsafe_align=__t4822t__unsafe_align;
  __t_errcode=open__t4179t(__t4823t,&__t4825t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4827t__unsafe_ptr=__t4825t__unsafe_ptr;
  f__unsafe_ptr=__t4827t__unsafe_ptr;
  nat__t683t(address,&__t4828t__);
  __t_errcode=seek__t4282t(&f__unsafe_ptr,__t4828t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=chunk__t4436t(&chunk_buffer__unsafe_ptr,&chunk_buffer__unsafe_size,&chunk_buffer__unsafe_offset,&chunk_buffer__unsafe_align,&f__unsafe_ptr,&__t4830t__unsafe_ptr,&__t4830t__dat__pos,&__t4830t__dat__length,&__t4830t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4831t=0;
  __t_errcode=mutget__t1093t(&chunk_buffer__unsafe_ptr,&chunk_buffer__unsafe_size,&chunk_buffer__unsafe_offset,&chunk_buffer__unsafe_align,__t4831t,&__t4833t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4833t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4834t__value,__t4833t__,1);
  bits__t697t(__t4834t__value,&__t4835t__value);
  r_value_h__value=__t4835t__value;
  __t4836t=1;
  __t_errcode=mutget__t1093t(&chunk_buffer__unsafe_ptr,&chunk_buffer__unsafe_size,&chunk_buffer__unsafe_offset,&chunk_buffer__unsafe_align,__t4836t,&__t4838t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4838t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4839t__value,__t4838t__,1);
  bits__t697t(__t4839t__value,&__t4840t__value);
  r_value_l__value=__t4840t__value;
  __t4841t=8;
  lshift__t656t(r_value_h__value,__t4841t,&__t4842t__value);
  bor__t664t(__t4842t__value,r_value_l__value,&__t4843t__value);
  r_value__value=__t4843t__value;
  nat__t652t(r_value__value,&__t4844t__);
  __t_errcode=nat16__t671t(__t4844t__,&__t4845t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4934t=__t4845t__;
  
  __t_skip_returns:if(__t4825t__unsafe_ptr){
  fclose((FILE*)__t4825t__unsafe_ptr);
  __t4825t__unsafe_ptr=0;
  }
  free__t765t(&__t4820t__unsafe_ptr);
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ok__t4165t(int64_t value, char* __t4935t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t4935t=ret;
}

static inline __attribute__((always_inline)) void cstr__t4164t(int64_t value, const char** __t4936t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t4936t=ret;
}

static inline __attribute__((always_inline)) void print__t441t(const char* value) {
  int __t442t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t454t(uint64_t value) {
  int __t455t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t4846t() {
  char __t4849t=0;
  uint64_t __t4850t=0;
  uint16_t __t4851t__=0;
  uint16_t __t4852t__=0;
  uint16_t ret=0;
  int64_t __t4853t=0;
  int64_t error=0;
  char __t4854t__=0;
  char __t4855t__=0;
  const char* __t4856t__=0;
  uint64_t __t4858t__=0;
  int __t_complain=0;
  console__t419t();
  __t4850t=0;
  __t_complain=nat16__t671t(__t4850t,&__t4851t__);
  __t4849t=__t_complain;
  if(__t_complain){
  goto __t4849t__label;
  }
  __t_complain=load__t4818t(__t4851t__,&__t4852t__);
  __t4849t=__t_complain;
  if(__t_complain){
  goto __t4849t__label;
  }
  ret=__t4852t__;
  __t4849t__label:__t4849t=__t4849t==0;
  __t4853t=__t_complain;
  error=__t4853t;
  ok__t4165t(error,&__t4854t__);
  not__t42t(__t4854t__,&__t4855t__);
  if(__t4855t__){
  cstr__t4164t(error,&__t4856t__);
  print__t441t(__t4856t__);
  goto __t_return;
  }
  nat__t683t(ret,&__t4858t__);
  print__t454t(__t4858t__);
  __t_return:
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    main__t4846t();
                    return 0;
                }