#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t443t="\n";
static const char* __t_all_errcodes[40] = {"noerr",
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
"cannot cast a blob onto an already allocated array"
};

#line 20 "std/core/print.s"
static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void nat__nat____buffer__t4347t(char** __t4377t, uint64_t* __t4378t, uint32_t* __t4379t, uint32_t* __t4380t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=16;
  *__t4377t=unsafe_ptr;
  *__t4378t=unsafe_size;
  *__t4379t=unsafe_offset;
  *__t4380t=unsafe_align;
}

#line 52 "std/unsafe.s"
static inline __attribute__((always_inline)) void free__t743t(char** __t4381t) {
  char* allocated=*__t4381t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t4381t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t4382t) {
  int value=0;
  *__t4382t=value;
}

#line 56 "std/core/bool.s"
static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t4383t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t4383t=__t52t__;
}

#line 23 "std/core/numbers.s"
static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t4384t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t4384t=__t111t__;
}

#line 26 "std/core/numbers.s"
static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t4385t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t4385t=z;
}

#line 33 "std/core/numbers.s"
static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t4386t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t4386t=z;
}

#line 151 "std/core/convert.s"
static inline __attribute__((always_inline)) void nat__t682t(uint32_t x, uint64_t* __t4387t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4387t=value;
}

#line 75 "std/core/numbers.s"
static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t4388t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t4388t=z;
}

#line 59 "std/unsafe.s"
static inline __attribute__((always_inline)) void zero__t744t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

#line 58 "std/core/convert.s"
static inline __attribute__((always_inline)) void exists__t652t(char* x, char* __t4389t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t4389t=z;
}

#line 30 "std/core/bool.s"
static inline __attribute__((always_inline)) void not__t42t(char value, char* __t4390t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t4390t=z;
}

#line 25 "std/unsafe.s"
static inline __attribute__((always_inline)) int alloc__t727t(uint64_t bytes, char** __t4391t) {
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
  *__t4391t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

#line 23 "std/core/array.s"
static inline __attribute__((always_inline)) int alloc__t866t(char** __t4392t, uint64_t* __t4393t, uint32_t* __t4394t, uint32_t* __t4395t, uint64_t size, char** __t4396t, uint64_t* __t4397t, uint32_t* __t4398t, uint32_t* __t4399t) {
  char* buffer__unsafe_ptr=*__t4392t;
  uint64_t buffer__unsafe_size=*__t4393t;
  uint32_t buffer__unsafe_offset=*__t4394t;
  uint32_t buffer__unsafe_align=*__t4395t;
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
  *__t4392t=buffer__unsafe_ptr;
  *__t4393t=buffer__unsafe_size;
  *__t4394t=buffer__unsafe_offset;
  *__t4395t=buffer__unsafe_align;
  *__t4396t=buffer__unsafe_ptr;
  *__t4397t=buffer__unsafe_size;
  *__t4398t=buffer__unsafe_offset;
  *__t4399t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

#line 130 "std/core/numbers.s"
static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t4400t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t4400t=z;
}

#line 67 "std/core/numbers.s"
static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t4401t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t4401t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t4402t) {
  *__t4402t=to;
}

#line 66 "std/unsafe.s"
static inline __attribute__((always_inline)) void add__t745t(char* allocated, uint64_t offset, char** __t4403t) {
  char* element=0;
  char* __t746t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t746t__);
  goto __t_return;
  __t_return:
  *__t4403t=__t746t__;
}

#line 96 "std/core/array.s"
static inline __attribute__((always_inline)) int get__t1086t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t4404t) {
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
  *__t4404t=__t1093t__;
  
  __t_skip_returns:
  return __t_errcode;
}

#line 3 "std/blob.s"
static inline __attribute__((always_inline)) void unsafe_blob__t4170t(char* unsafe_ptr, char** __t4405t) {
  goto __t_return;
  __t_return:
  *__t4405t=unsafe_ptr;
}

#line 1 "compiler"
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

#line 5 "tests/test.s"
static inline __attribute__((always_inline)) int create_blob__t4342t(char** __t4406t) {
  uint64_t __t4343t=0;
  uint64_t __t4344t=0;
  char* __t4349t__unsafe_ptr=0;
  uint64_t __t4349t__unsafe_size=0;
  uint32_t __t4349t__unsafe_offset=0;
  uint32_t __t4349t__unsafe_align=0;
  uint64_t __t4350t=0;
  char* __t4351t__unsafe_ptr=0;
  uint64_t __t4351t__unsafe_size=0;
  uint32_t __t4351t__unsafe_offset=0;
  uint32_t __t4351t__unsafe_align=0;
  char* temp__unsafe_ptr=0;
  uint64_t temp__unsafe_size=0;
  uint32_t temp__unsafe_offset=0;
  uint32_t temp__unsafe_align=0;
  uint64_t __t4353t=0;
  char* __t4355t__=0;
  uint64_t __t4357t____t4343t=0;
  uint64_t __t4357t____t4344t=0;
  char* __t4361t__unsafe_ptr=0;
  char* blobbed__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4343t=72;
  __t4344t=73;
  nat__nat____buffer__t4347t(&__t4349t__unsafe_ptr,&__t4349t__unsafe_size,&__t4349t__unsafe_offset,&__t4349t__unsafe_align);
  __t4350t=1;
  __t_errcode=alloc__t866t(&__t4349t__unsafe_ptr,&__t4349t__unsafe_size,&__t4349t__unsafe_offset,&__t4349t__unsafe_align,__t4350t,&__t4351t__unsafe_ptr,&__t4351t__unsafe_size,&__t4351t__unsafe_offset,&__t4351t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t4349t__unsafe_ptr,&__t4343t,8);
  memcpy(__t4349t__unsafe_ptr+8,&__t4344t,8);
  temp__unsafe_ptr=__t4349t__unsafe_ptr;
  temp__unsafe_size=__t4349t__unsafe_size;
  temp__unsafe_offset=__t4349t__unsafe_offset;
  temp__unsafe_align=__t4349t__unsafe_align;
  __t4353t=0;
  __t_errcode=get__t1086t(temp__unsafe_ptr,temp__unsafe_size,temp__unsafe_offset,temp__unsafe_align,__t4353t,&__t4355t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4355t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4357t____t4343t,__t4355t__,8);
  memcpy(&__t4357t____t4344t,__t4355t__+8,8);
  unsafe_blob__t4170t(__t4355t__,&__t4361t__unsafe_ptr);
  blobbed__unsafe_ptr=__t4361t__unsafe_ptr;
  __t_errcode=assert_eq__t38t(blobbed__unsafe_ptr,temp__unsafe_ptr);
  blobbed__unsafe_ptr=temp__unsafe_ptr;
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t743t(&blobbed__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4406t=blobbed__unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

#line 1 "builtins"
static inline __attribute__((always_inline)) void char____t_buffer____buffer__t4366t(char** __t4407t, uint64_t* __t4408t, uint32_t* __t4409t, uint32_t* __t4410t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4407t=unsafe_ptr;
  *__t4408t=unsafe_size;
  *__t4409t=unsafe_offset;
  *__t4410t=unsafe_align;
}

#line 114 "std/core/numbers.s"
static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t4411t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t4411t=z;
}

#line 143 "std/core/convert.s"
static inline __attribute__((always_inline)) int nat32__t679t(uint64_t x, uint32_t* __t4412t) {
  uint64_t __t680t=0;
  char __t681t__=0;
  uint32_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t680t=4294967295;
  gt__t325t(x,__t680t,&__t681t__);
  if(__t681t__){
  __t_errcode=11;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4412t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

#line 10 "std/blob.s"
static inline __attribute__((always_inline)) int as__t4251t(char* b__unsafe_ptr, char* _ret__unsafe_ptr, uint64_t _ret__unsafe_size, uint32_t _ret__unsafe_offset, uint32_t _ret__unsafe_align, char** __t4413t, uint64_t* __t4414t, uint32_t* __t4415t, uint32_t* __t4416t) {
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  uint64_t __t4252t=0;
  char __t4253t__=0;
  char __t4254t__=0;
  char __t4255t=0;
  char __t4256t__=0;
  uint64_t __t4257t=0;
  uint32_t __t4258t__=0;
  uint64_t __t4259t=0;
  uint32_t __t4260t__=0;
  uint64_t __t4262t=0;
  char* __t4263t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ret__unsafe_ptr=_ret__unsafe_ptr;
  ret__unsafe_size=_ret__unsafe_size;
  ret__unsafe_offset=_ret__unsafe_offset;
  ret__unsafe_align=_ret__unsafe_align;
  __t4252t=0;
  neq__t158t(ret__unsafe_size,__t4252t,&__t4253t__);
  if(!__t4253t__){
  exists__t652t(ret__unsafe_ptr,&__t4254t__);
  __t4255t=__t4254t__;
  }
  else{
  __t4255t=0;
  not__t42t(__t4255t,&__t4256t__);
  __t4255t=__t4256t__;
  }
  if(__t4255t){
  __t_errcode=39;
  goto __t_failure;
  }
  __t4257t=1;
  __t_errcode=nat32__t679t(__t4257t,&__t4258t__);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_align=__t4258t__;
  __t4259t=0;
  __t_errcode=nat32__t679t(__t4259t,&__t4260t__);
  if(__t_errcode){
  goto __t_failure;
  }
  ret__unsafe_offset=__t4260t__;
  __t4262t=16;
  ret__unsafe_size=__t4262t;
  unsafe_attach_type__t28t(b__unsafe_ptr,ret__unsafe_ptr,&__t4263t__);
  ret__unsafe_ptr=__t4263t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4413t=ret__unsafe_ptr;
  *__t4414t=ret__unsafe_size;
  *__t4415t=ret__unsafe_offset;
  *__t4416t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

#line 109 "std/core/array.s"
static inline __attribute__((always_inline)) void len__t1094t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t4417t) {
  goto __t_return;
  __t_return:
  *__t4417t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t4418t) {
  int value=0;
  *__t4418t=value;
}

#line 61 "std/core/bool.s"
static inline __attribute__((always_inline)) void not__t53t(int __t_anon0, int* __t4419t) {
  int __t54t__=0;
  true__t15t(&__t54t__);
  goto __t_return;
  __t_return:
  *__t4419t=__t54t__;
}

#line 41 "std/core/string.s"
static inline __attribute__((always_inline)) void str__t1544t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4420t, uint64_t* __t4421t, uint64_t* __t4422t, char* __t4423t) {
  goto __t_return;
  __t_return:
  *__t4420t=unsafe_ptr;
  *__t4421t=dat__pos;
  *__t4422t=dat__length;
  *__t4423t=dat__first;
}

#line 50 "std/core/string.s"
static inline __attribute__((always_inline)) int str__t1548t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4424t, uint64_t* __t4425t, uint64_t* __t4426t, char* __t4427t) {
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
  *__t4424t=__t1555t__unsafe_ptr;
  *__t4425t=__t1555t__dat__pos;
  *__t4426t=__t1555t__dat__length;
  *__t4427t=__t1555t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

#line 57 "std/core/string.s"
static inline __attribute__((always_inline)) int str__t1568t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, char** __t4428t, uint64_t* __t4429t, uint64_t* __t4430t, char* __t4431t) {
  int __t1569t=0;
  uint64_t __t1570t__=0;
  uint64_t length=0;
  int __t1571t=0;
  int __t1572t__=0;
  uint64_t __t1573t__=0;
  char __t1574t__=0;
  uint64_t __t1575t=0;
  uint64_t __t1576t=0;
  char* __t1578t__=0;
  char __t1579t__value=0;
  char* __t1580t__unsafe_ptr=0;
  uint64_t __t1580t__dat__pos=0;
  uint64_t __t1580t__dat__length=0;
  char __t1580t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t1094t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1570t__);
  length=__t1570t__;
  not__t53t(__t1571t,&__t1572t__);
  len__t1094t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1573t__);
  gt__t325t(length,__t1573t__,&__t1574t__);
  if(__t1574t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1575t=0;
  __t1576t=0;
  __t_errcode=get__t1086t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1576t,&__t1578t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1578t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1579t__value,__t1578t__,1);
  __t_errcode=str__t1548t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1575t,length,__t1579t__value,&__t1580t__unsafe_ptr,&__t1580t__dat__pos,&__t1580t__dat__length,&__t1580t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4428t=__t1580t__unsafe_ptr;
  *__t4429t=__t1580t__dat__pos;
  *__t4430t=__t1580t__dat__length;
  *__t4431t=__t1580t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

#line 13 "tests/test.s"
static inline __attribute__((always_inline)) int create_str_from_blob__t4363t(char** __t4432t, uint64_t* __t4433t, uint64_t* __t4434t, char* __t4435t) {
  char* __t4364t__unsafe_ptr=0;
  char* blobbed__unsafe_ptr=0;
  char* __t4368t__unsafe_ptr=0;
  uint64_t __t4368t__unsafe_size=0;
  uint32_t __t4368t__unsafe_offset=0;
  uint32_t __t4368t__unsafe_align=0;
  char* __t4369t__unsafe_ptr=0;
  uint64_t __t4369t__unsafe_size=0;
  uint32_t __t4369t__unsafe_offset=0;
  uint32_t __t4369t__unsafe_align=0;
  char* __t4370t__unsafe_ptr=0;
  uint64_t __t4370t__dat__pos=0;
  uint64_t __t4370t__dat__length=0;
  char __t4370t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=create_blob__t4342t(&__t4364t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  blobbed__unsafe_ptr=__t4364t__unsafe_ptr;
  char____t_buffer____buffer__t4366t(&__t4368t__unsafe_ptr,&__t4368t__unsafe_size,&__t4368t__unsafe_offset,&__t4368t__unsafe_align);
  __t_errcode=as__t4251t(blobbed__unsafe_ptr,__t4368t__unsafe_ptr,__t4368t__unsafe_size,__t4368t__unsafe_offset,__t4368t__unsafe_align,&__t4369t__unsafe_ptr,&__t4369t__unsafe_size,&__t4369t__unsafe_offset,&__t4369t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1568t(__t4369t__unsafe_ptr,__t4369t__unsafe_size,__t4369t__unsafe_offset,__t4369t__unsafe_align,&__t4370t__unsafe_ptr,&__t4370t__dat__pos,&__t4370t__dat__length,&__t4370t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t743t(&__t4370t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4432t=__t4370t__unsafe_ptr;
  *__t4433t=__t4370t__dat__pos;
  *__t4434t=__t4370t__dat__length;
  *__t4435t=__t4370t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

#line 315 "std/core/string.s"
static inline __attribute__((always_inline)) void print__t1783t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1784t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

#line 17 "tests/test.s"
static inline __attribute__((always_inline)) int main__t4371t() {
  char* __t4374t__unsafe_ptr=0;
  uint64_t __t4374t__dat__pos=0;
  uint64_t __t4374t__dat__length=0;
  char __t4374t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t_errcode=create_str_from_blob__t4363t(&__t4374t__unsafe_ptr,&__t4374t__dat__pos,&__t4374t__dat__length,&__t4374t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t1783t(__t4374t__unsafe_ptr,__t4374t__dat__pos,__t4374t__dat__length,__t4374t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t743t(&__t4374t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t4371t();
                }