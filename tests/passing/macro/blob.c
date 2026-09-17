#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t443t="\n";
static const char* __t_all_errcodes[44] = {"noerr",
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
"cannot cast a blob onto an already allocated array"
};

static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void nat__nat____buffer__t4411t(char** __t4441t, uint64_t* __t4442t, uint32_t* __t4443t, uint32_t* __t4444t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=16;
  *__t4441t=unsafe_ptr;
  *__t4442t=unsafe_size;
  *__t4443t=unsafe_offset;
  *__t4444t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t806t(char** __t4445t) {
  char* allocated=*__t4445t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t4445t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t4446t) {
  int value=0;
  *__t4446t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t4447t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t4447t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t4448t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t4448t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t4449t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t4449t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t4450t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t4450t=z;
}

static inline __attribute__((always_inline)) void nat__t686t(uint32_t x, uint64_t* __t4451t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4451t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t4452t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t4452t=z;
}

static inline __attribute__((always_inline)) void zero__t807t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t645t(char* x, char* __t4453t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t4453t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t4454t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t4454t=z;
}

static inline __attribute__((always_inline)) int alloc__t790t(uint64_t bytes, char** __t4455t) {
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
  *__t4455t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t929t(char** __t4456t, uint64_t* __t4457t, uint32_t* __t4458t, uint32_t* __t4459t, uint64_t size, char** __t4460t, uint64_t* __t4461t, uint32_t* __t4462t, uint32_t* __t4463t) {
  char* buffer__unsafe_ptr=*__t4456t;
  uint64_t buffer__unsafe_size=*__t4457t;
  uint32_t buffer__unsafe_offset=*__t4458t;
  uint32_t buffer__unsafe_align=*__t4459t;
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
  *__t4456t=buffer__unsafe_ptr;
  *__t4457t=buffer__unsafe_size;
  *__t4458t=buffer__unsafe_offset;
  *__t4459t=buffer__unsafe_align;
  *__t4460t=buffer__unsafe_ptr;
  *__t4461t=buffer__unsafe_size;
  *__t4462t=buffer__unsafe_offset;
  *__t4463t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t4464t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t4464t=z;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t4465t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t4465t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t4466t) {
  *__t4466t=to;
}

static inline __attribute__((always_inline)) void add__t808t(char* allocated, uint64_t offset, char** __t4467t) {
  char* element=0;
  char* __t809t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t809t__);
  goto __t_return;
  __t_return:
  *__t4467t=__t809t__;
}

static inline __attribute__((always_inline)) int get__t1149t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t4468t) {
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
  *__t4468t=__t1156t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_blob__t4234t(char* unsafe_ptr, char** __t4469t) {
  goto __t_return;
  __t_return:
  *__t4469t=unsafe_ptr;
}

static inline __attribute__((always_inline)) int assert_eq__t38t(char* to, char* from) {
  int __t_errcode=0;
  int __t_complain=0;
  if(to!=from){
  __t_errcode==3;
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int create_blob__t4406t(char** __t4470t) {
  uint64_t __t4407t=0;
  uint64_t __t4408t=0;
  char* __t4413t__unsafe_ptr=0;
  uint64_t __t4413t__unsafe_size=0;
  uint32_t __t4413t__unsafe_offset=0;
  uint32_t __t4413t__unsafe_align=0;
  uint64_t __t4414t=0;
  char* __t4415t__unsafe_ptr=0;
  uint64_t __t4415t__unsafe_size=0;
  uint32_t __t4415t__unsafe_offset=0;
  uint32_t __t4415t__unsafe_align=0;
  char* temp__unsafe_ptr=0;
  uint64_t temp__unsafe_size=0;
  uint32_t temp__unsafe_offset=0;
  uint32_t temp__unsafe_align=0;
  uint64_t __t4417t=0;
  char* __t4419t__=0;
  uint64_t __t4421t____t4407t=0;
  uint64_t __t4421t____t4408t=0;
  char* __t4425t__unsafe_ptr=0;
  char* blobbed__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4407t=72;
  __t4408t=73;
  nat__nat____buffer__t4411t(&__t4413t__unsafe_ptr,&__t4413t__unsafe_size,&__t4413t__unsafe_offset,&__t4413t__unsafe_align);
  __t4414t=1;
  __t_errcode=alloc__t929t(&__t4413t__unsafe_ptr,&__t4413t__unsafe_size,&__t4413t__unsafe_offset,&__t4413t__unsafe_align,__t4414t,&__t4415t__unsafe_ptr,&__t4415t__unsafe_size,&__t4415t__unsafe_offset,&__t4415t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t4413t__unsafe_ptr,&__t4407t,8);
  memcpy(__t4413t__unsafe_ptr+8,&__t4408t,8);
  temp__unsafe_ptr=__t4413t__unsafe_ptr;
  temp__unsafe_size=__t4413t__unsafe_size;
  temp__unsafe_offset=__t4413t__unsafe_offset;
  temp__unsafe_align=__t4413t__unsafe_align;
  __t4417t=0;
  __t_errcode=get__t1149t(temp__unsafe_ptr,temp__unsafe_size,temp__unsafe_offset,temp__unsafe_align,__t4417t,&__t4419t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4419t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4421t____t4407t,__t4419t__,8);
  memcpy(&__t4421t____t4408t,__t4419t__+8,8);
  unsafe_blob__t4234t(__t4419t__,&__t4425t__unsafe_ptr);
  blobbed__unsafe_ptr=__t4425t__unsafe_ptr;
  __t_errcode=assert_eq__t38t(blobbed__unsafe_ptr,temp__unsafe_ptr);
  blobbed__unsafe_ptr=temp__unsafe_ptr;
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t806t(&blobbed__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4470t=blobbed__unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t4430t(char** __t4471t, uint64_t* __t4472t, uint32_t* __t4473t, uint32_t* __t4474t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4471t=unsafe_ptr;
  *__t4472t=unsafe_size;
  *__t4473t=unsafe_offset;
  *__t4474t=unsafe_align;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t4475t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t4475t=z;
}

static inline __attribute__((always_inline)) int nat32__t680t(uint64_t x, uint32_t* __t4476t) {
  uint64_t __t681t=0;
  char __t682t__=0;
  uint32_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t681t=4294967295;
  gt__t325t(x,__t681t,&__t682t__);
  if(__t682t__){
  __t_errcode=11;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4476t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int as__t4315t(char* b__unsafe_ptr, char* _ret__unsafe_ptr, uint64_t _ret__unsafe_size, uint32_t _ret__unsafe_offset, uint32_t _ret__unsafe_align, char** __t4477t, uint64_t* __t4478t, uint32_t* __t4479t, uint32_t* __t4480t) {
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  uint64_t __t4316t=0;
  char __t4317t__=0;
  char __t4318t__=0;
  char __t4319t=0;
  char __t4320t__=0;
  uint64_t __t4321t=0;
  uint32_t __t4322t__=0;
  uint64_t __t4323t=0;
  uint32_t __t4324t__=0;
  uint64_t __t4326t=0;
  char* __t4327t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ret__unsafe_ptr=_ret__unsafe_ptr;
  ret__unsafe_size=_ret__unsafe_size;
  ret__unsafe_offset=_ret__unsafe_offset;
  ret__unsafe_align=_ret__unsafe_align;
  __t4316t=0;
  neq__t158t(ret__unsafe_size,__t4316t,&__t4317t__);
  if(!__t4317t__){
  exists__t645t(ret__unsafe_ptr,&__t4318t__);
  __t4319t=__t4318t__;
  }
  else{
  __t4319t=0;
  not__t42t(__t4319t,&__t4320t__);
  __t4319t=__t4320t__;
  }
  if(__t4319t){
  __t_errcode=43;
  goto __t_failure;
  }
  __t4321t=1;
  __t_errcode=nat32__t680t(__t4321t,&__t4322t__);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_align=__t4322t__;
  __t4323t=0;
  __t_errcode=nat32__t680t(__t4323t,&__t4324t__);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_offset=__t4324t__;
  __t4326t=16;
  ret__unsafe_size=__t4326t;
  unsafe_attach_type__t28t(b__unsafe_ptr,ret__unsafe_ptr,&__t4327t__);
  ret__unsafe_ptr=__t4327t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4477t=ret__unsafe_ptr;
  *__t4478t=ret__unsafe_size;
  *__t4479t=ret__unsafe_offset;
  *__t4480t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1157t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t4481t) {
  goto __t_return;
  __t_return:
  *__t4481t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t4482t) {
  int value=0;
  *__t4482t=value;
}

static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t4483t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t4483t=__t54t__;
}

static inline __attribute__((always_inline)) void str__t1607t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4484t, uint64_t* __t4485t, uint64_t* __t4486t, char* __t4487t) {
  goto __t_return;
  __t_return:
  *__t4484t=unsafe_ptr;
  *__t4485t=dat__pos;
  *__t4486t=dat__length;
  *__t4487t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1611t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4488t, uint64_t* __t4489t, uint64_t* __t4490t, char* __t4491t) {
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
  *__t4488t=__t1618t__unsafe_ptr;
  *__t4489t=__t1618t__dat__pos;
  *__t4490t=__t1618t__dat__length;
  *__t4491t=__t1618t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1631t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, char** __t4492t, uint64_t* __t4493t, uint64_t* __t4494t, char* __t4495t) {
  int __t1632t=0;
  uint64_t __t1633t__=0;
  uint64_t length=0;
  int __t1634t=0;
  int __t1635t__=0;
  uint64_t __t1636t__=0;
  char __t1637t__=0;
  uint64_t __t1638t=0;
  uint64_t __t1639t=0;
  char* __t1641t__=0;
  char __t1642t__value=0;
  char* __t1643t__unsafe_ptr=0;
  uint64_t __t1643t__dat__pos=0;
  uint64_t __t1643t__dat__length=0;
  char __t1643t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t1157t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1633t__);
  length=__t1633t__;
  not__t53t(__t1634t,&__t1635t__);
  len__t1157t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1636t__);
  gt__t325t(length,__t1636t__,&__t1637t__);
  if(__t1637t__){
  __t_errcode=27;
  goto __t_failure;
  }
  __t1638t=0;
  __t1639t=0;
  __t_errcode=get__t1149t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1639t,&__t1641t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1641t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1642t__value,__t1641t__,1);
  __t_errcode=str__t1611t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1638t,length,__t1642t__value,&__t1643t__unsafe_ptr,&__t1643t__dat__pos,&__t1643t__dat__length,&__t1643t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4492t=__t1643t__unsafe_ptr;
  *__t4493t=__t1643t__dat__pos;
  *__t4494t=__t1643t__dat__length;
  *__t4495t=__t1643t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int create_str_from_blob__t4427t(char** __t4496t, uint64_t* __t4497t, uint64_t* __t4498t, char* __t4499t) {
  char* __t4428t__unsafe_ptr=0;
  char* blobbed__unsafe_ptr=0;
  char* __t4432t__unsafe_ptr=0;
  uint64_t __t4432t__unsafe_size=0;
  uint32_t __t4432t__unsafe_offset=0;
  uint32_t __t4432t__unsafe_align=0;
  char* __t4433t__unsafe_ptr=0;
  uint64_t __t4433t__unsafe_size=0;
  uint32_t __t4433t__unsafe_offset=0;
  uint32_t __t4433t__unsafe_align=0;
  char* __t4434t__unsafe_ptr=0;
  uint64_t __t4434t__dat__pos=0;
  uint64_t __t4434t__dat__length=0;
  char __t4434t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=create_blob__t4406t(&__t4428t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  blobbed__unsafe_ptr=__t4428t__unsafe_ptr;
  char____t_buffer____buffer__t4430t(&__t4432t__unsafe_ptr,&__t4432t__unsafe_size,&__t4432t__unsafe_offset,&__t4432t__unsafe_align);
  __t_errcode=as__t4315t(blobbed__unsafe_ptr,__t4432t__unsafe_ptr,__t4432t__unsafe_size,__t4432t__unsafe_offset,__t4432t__unsafe_align,&__t4433t__unsafe_ptr,&__t4433t__unsafe_size,&__t4433t__unsafe_offset,&__t4433t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1631t(__t4433t__unsafe_ptr,__t4433t__unsafe_size,__t4433t__unsafe_offset,__t4433t__unsafe_align,&__t4434t__unsafe_ptr,&__t4434t__dat__pos,&__t4434t__dat__length,&__t4434t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t806t(&__t4434t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4496t=__t4434t__unsafe_ptr;
  *__t4497t=__t4434t__dat__pos;
  *__t4498t=__t4434t__dat__length;
  *__t4499t=__t4434t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1846t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1847t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t4435t() {
  char* __t4438t__unsafe_ptr=0;
  uint64_t __t4438t__dat__pos=0;
  uint64_t __t4438t__dat__length=0;
  char __t4438t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t_errcode=create_str_from_blob__t4427t(&__t4438t__unsafe_ptr,&__t4438t__dat__pos,&__t4438t__dat__length,&__t4438t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t1846t(__t4438t__unsafe_ptr,__t4438t__dat__pos,__t4438t__dat__length,__t4438t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t806t(&__t4438t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t4435t();
                }