#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t452t="\n";
const char* const __t4393t="what's your name";
const char* const __t4398t="hello {name}!\n";
const char* const __t4408t="!\n";
const char* const __t440t="";
const char* const __t4399t="hello ";
static const char* __t_all_errcodes[46] = {"noerr",
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
"user input was not a natural number",
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
"imbalanced brackets",
"why no name?"
};

static inline __attribute__((always_inline)) void console__t425t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void new__t1169t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void ok__t4253t(int64_t value, char* __t4412t) {
  char ret=0;
  ret=(value==0);
  goto __t_return;
  __t_return:
  *__t4412t=ret;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t4413t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t4413t=z;
}

static inline __attribute__((always_inline)) void unsafe_singletons__t18t() {
}

static inline __attribute__((always_inline)) void console__t431t() {
  console__t425t();
  unsafe_singletons__t18t();
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void cstr__t4252t(int64_t value, const char** __t4414t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t4414t=ret;
}

static inline __attribute__((always_inline)) void print__t450t(const char* value) {
  int __t451t=0;
  const char* endl=0;
  endl=__t452t;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void WHICHERR__t4254t(char* __t4415t) {
  char __t4255t=0;
  char init=0;
  int64_t __t4256t=0;
  int64_t err=0;
  char __t4257t__=0;
  char __t4258t__=0;
  const char* __t4261t__=0;
  __t4255t=1;
  init=__t4255t;
  goto __t_return;
  __t_return:
  *__t4415t=init;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t3894t(char** __t4416t, uint64_t* __t4417t, uint32_t* __t4418t, uint32_t* __t4419t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t4416t=unsafe_ptr;
  *__t4417t=unsafe_size;
  *__t4418t=unsafe_offset;
  *__t4419t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t815t(char** __t4420t) {
  char* allocated=*__t4420t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  goto __t_return;
  __t_return:
  *__t4420t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t4421t) {
  int value=0;
  *__t4421t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t4422t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t4422t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t4423t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t4423t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t4424t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t4424t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t4425t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t4425t=z;
}

static inline __attribute__((always_inline)) void nat__t695t(uint32_t x, uint64_t* __t4426t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t4426t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t4427t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t4427t=z;
}

static inline __attribute__((always_inline)) void zero__t816t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void exists__t654t(char* x, char* __t4428t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t4428t=z;
}

static inline __attribute__((always_inline)) int alloc__t799t(uint64_t bytes, char** __t4429t) {
  char* allocated=0;
  char __t800t__=0;
  char __t801t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t654t(allocated,&__t800t__);
  not__t42t(__t800t__,&__t801t__);
  if(__t801t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4429t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t940t(char** __t4430t, uint64_t* __t4431t, uint32_t* __t4432t, uint32_t* __t4433t, uint64_t size, char** __t4434t, uint64_t* __t4435t, uint32_t* __t4436t, uint32_t* __t4437t) {
  char* buffer__unsafe_ptr=*__t4430t;
  uint64_t buffer__unsafe_size=*__t4431t;
  uint32_t buffer__unsafe_offset=*__t4432t;
  uint32_t buffer__unsafe_align=*__t4433t;
  int __t941t=0;
  int __t942t=0;
  char __t944t__=0;
  uint64_t __t945t=0;
  char __t946t__=0;
  char __t947t=0;
  uint64_t __t948t=0;
  uint64_t __t949t__=0;
  uint64_t __t950t__=0;
  int __t952t=0;
  uint64_t __t953t=0;
  char __t954t__=0;
  uint64_t __t955t__=0;
  uint64_t __t956t__=0;
  uint64_t bytes=0;
  int __t957t=0;
  uint64_t __t958t=0;
  char __t959t__=0;
  char* __t960t__=0;
  int __t961t=0;
  uint64_t __t962t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t944t__);
  if(__t944t__){
  __t945t=0;
  neq__t158t(size,__t945t,&__t946t__);
  __t947t=__t946t__;
  }
  if(__t947t){
  __t948t=0;
  nat__t695t(buffer__unsafe_align,&__t949t__);
  mul__t212t(__t949t__,size,&__t950t__);
  zero__t816t(buffer__unsafe_ptr,__t948t,__t950t__);
  goto __t_return;
  }
  __t953t=0;
  neq__t158t(buffer__unsafe_size,__t953t,&__t954t__);
  if(__t954t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t695t(buffer__unsafe_align,&__t955t__);
  mul__t212t(__t955t__,size,&__t956t__);
  bytes=__t956t__;
  __t958t=0;
  eq__t134t(bytes,__t958t,&__t959t__);
  if(__t959t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t799t(bytes,&__t960t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t962t=0;
  zero__t816t(__t960t__,__t962t,bytes);
  buffer__unsafe_ptr=__t960t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t815t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4430t=buffer__unsafe_ptr;
  *__t4431t=buffer__unsafe_size;
  *__t4432t=buffer__unsafe_offset;
  *__t4433t=buffer__unsafe_align;
  *__t4434t=buffer__unsafe_ptr;
  *__t4435t=buffer__unsafe_size;
  *__t4436t=buffer__unsafe_offset;
  *__t4437t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1211t(char** __t4438t, uint64_t* __t4439t, uint32_t* __t4440t, uint32_t* __t4441t, uint64_t _pos, char** __t4442t, uint64_t* __t4443t, uint32_t* __t4444t, uint32_t* __t4445t, uint64_t* __t4446t) {
  char* buf__unsafe_ptr=*__t4438t;
  uint64_t buf__unsafe_size=*__t4439t;
  uint32_t buf__unsafe_offset=*__t4440t;
  uint32_t buf__unsafe_align=*__t4441t;
  uint64_t __t1212t=0;
  uint64_t pos=0;
  __t1212t=_pos;
  pos=__t1212t;
  goto __t_return;
  __t_return:
  *__t4438t=buf__unsafe_ptr;
  *__t4439t=buf__unsafe_size;
  *__t4440t=buf__unsafe_offset;
  *__t4441t=buf__unsafe_align;
  *__t4442t=buf__unsafe_ptr;
  *__t4443t=buf__unsafe_size;
  *__t4444t=buf__unsafe_offset;
  *__t4445t=buf__unsafe_align;
  *__t4446t=pos;
}

static inline __attribute__((always_inline)) void arena__t1214t(char** __t4447t, uint64_t* __t4448t, uint32_t* __t4449t, uint32_t* __t4450t, char** __t4451t, uint64_t* __t4452t, uint32_t* __t4453t, uint32_t* __t4454t, uint64_t* __t4455t) {
  char* buf__unsafe_ptr=*__t4447t;
  uint64_t buf__unsafe_size=*__t4448t;
  uint32_t buf__unsafe_offset=*__t4449t;
  uint32_t buf__unsafe_align=*__t4450t;
  uint64_t __t1215t=0;
  char* __t1216t__buf__unsafe_ptr=0;
  uint64_t __t1216t__buf__unsafe_size=0;
  uint32_t __t1216t__buf__unsafe_offset=0;
  uint32_t __t1216t__buf__unsafe_align=0;
  uint64_t __t1216t__pos=0;
  __t1215t=0;
  arena__t1211t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1215t,&__t1216t__buf__unsafe_ptr,&__t1216t__buf__unsafe_size,&__t1216t__buf__unsafe_offset,&__t1216t__buf__unsafe_align,&__t1216t__pos);
  goto __t_return;
  __t_return:
  *__t4447t=buf__unsafe_ptr;
  *__t4448t=buf__unsafe_size;
  *__t4449t=buf__unsafe_offset;
  *__t4450t=buf__unsafe_align;
  *__t4451t=__t1216t__buf__unsafe_ptr;
  *__t4452t=__t1216t__buf__unsafe_size;
  *__t4453t=__t1216t__buf__unsafe_offset;
  *__t4454t=__t1216t__buf__unsafe_align;
  *__t4455t=__t1216t__pos;
}

static inline __attribute__((always_inline)) int char__t3753t(char* __t4456t) {
  int64_t _c=0;
  char iseof=0;
  char c=0;
  int __t_errcode=0;
  int __t_complain=0;
  _c=getchar();
  iseof=(_c==EOF);
  if(iseof){
  __t_errcode=31;
  goto __t_failure;
  }
  c=_c;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4456t=c;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t374t(uint64_t x, uint64_t y, char* __t4457t) {
  int __t375t__=0;
  char z=0;
  is_different__t109t(x,y,&__t375t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t4457t=z;
}

static inline __attribute__((always_inline)) int div__t270t(uint64_t x, uint64_t y, uint64_t* __t4458t) {
  int __t271t__=0;
  int __t272t=0;
  uint64_t zero=0;
  char __t273t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t109t(x,y,&__t271t__);
  zero=0;
  eq__t134t(y,zero,&__t273t__);
  if(__t273t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4458t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t4459t) {
  *__t4459t=to;
}

static inline __attribute__((always_inline)) int realloc__t810t(char* allocated, uint64_t bytes, char** __t4460t) {
  char* new_allocated=0;
  char __t811t__=0;
  char __t812t__=0;
  int __t813t=0;
  char* __t814t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t654t(new_allocated,&__t811t__);
  not__t42t(__t811t__,&__t812t__);
  if(__t812t__){
  __t_errcode=18;
  goto __t_failure;
  }
  allocated=new_allocated;
  unsafe_attach_type__t28t(new_allocated,allocated,&__t814t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4460t=__t814t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t302t(uint64_t x, uint64_t y, char* __t4461t) {
  int __t303t__=0;
  char z=0;
  is_different__t109t(x,y,&__t303t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t4461t=z;
}

static inline __attribute__((always_inline)) int resize__t1113t(char** __t4462t, uint64_t* __t4463t, uint32_t* __t4464t, uint32_t* __t4465t, uint64_t size, char** __t4466t, uint64_t* __t4467t, uint32_t* __t4468t, uint32_t* __t4469t) {
  char* buffer__unsafe_ptr=*__t4462t;
  uint64_t buffer__unsafe_size=*__t4463t;
  uint32_t buffer__unsafe_offset=*__t4464t;
  uint32_t buffer__unsafe_align=*__t4465t;
  int __t1114t=0;
  char __t1115t__=0;
  uint64_t __t1116t=0;
  char __t1117t__=0;
  uint64_t __t1118t__=0;
  uint64_t __t1119t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t1120t__=0;
  uint64_t __t1121t__=0;
  uint64_t bytes=0;
  char* __t1122t__=0;
  char __t1123t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(buffer__unsafe_size,size,&__t1115t__);
  if(__t1115t__){
  goto __t_return;
  }
  __t1116t=0;
  eq__t134t(buffer__unsafe_size,__t1116t,&__t1117t__);
  if(__t1117t__){
  __t_errcode=21;
  goto __t_failure;
  }
  nat__t695t(buffer__unsafe_align,&__t1118t__);
  mul__t212t(buffer__unsafe_size,__t1118t__,&__t1119t__);
  prev_bytes=__t1119t__;
  buffer__unsafe_size=size;
  nat__t695t(buffer__unsafe_align,&__t1120t__);
  mul__t212t(__t1120t__,size,&__t1121t__);
  bytes=__t1121t__;
  __t_errcode=realloc__t810t(buffer__unsafe_ptr,bytes,&__t1122t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t1122t__;
  lt__t302t(prev_bytes,bytes,&__t1123t__);
  if(__t1123t__){
  zero__t816t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4462t=buffer__unsafe_ptr;
  *__t4463t=buffer__unsafe_size;
  *__t4464t=buffer__unsafe_offset;
  *__t4465t=buffer__unsafe_align;
  *__t4466t=buffer__unsafe_ptr;
  *__t4467t=buffer__unsafe_size;
  *__t4468t=buffer__unsafe_offset;
  *__t4469t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t817t(char* allocated, uint64_t offset, char** __t4470t) {
  char* element=0;
  char* __t818t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t818t__);
  goto __t_return;
  __t_return:
  *__t4470t=__t818t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t4471t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t4471t=z;
}

static inline __attribute__((always_inline)) int resize__t1104t(char** __t4472t, uint64_t* __t4473t, uint32_t* __t4474t, uint32_t* __t4475t, uint64_t size, char** __t4476t, uint64_t* __t4477t, uint32_t* __t4478t, uint32_t* __t4479t) {
  char* buffer__unsafe_ptr=*__t4472t;
  uint64_t buffer__unsafe_size=*__t4473t;
  uint32_t buffer__unsafe_offset=*__t4474t;
  uint32_t buffer__unsafe_align=*__t4475t;
  int __t1105t=0;
  uint64_t __t1106t__=0;
  uint64_t __t1107t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t1108t__=0;
  uint64_t __t1109t__=0;
  uint64_t bytes=0;
  char* __t1110t__=0;
  char __t1111t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t695t(buffer__unsafe_align,&__t1106t__);
  mul__t212t(buffer__unsafe_size,__t1106t__,&__t1107t__);
  prev_bytes=__t1107t__;
  buffer__unsafe_size=size;
  nat__t695t(buffer__unsafe_align,&__t1108t__);
  mul__t212t(__t1108t__,size,&__t1109t__);
  bytes=__t1109t__;
  __t_errcode=realloc__t810t(buffer__unsafe_ptr,bytes,&__t1110t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t1110t__;
  lt__t302t(prev_bytes,bytes,&__t1111t__);
  if(__t1111t__){
  zero__t816t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4472t=buffer__unsafe_ptr;
  *__t4473t=buffer__unsafe_size;
  *__t4474t=buffer__unsafe_offset;
  *__t4475t=buffer__unsafe_align;
  *__t4476t=buffer__unsafe_ptr;
  *__t4477t=buffer__unsafe_size;
  *__t4478t=buffer__unsafe_offset;
  *__t4479t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t402t(uint64_t x, uint64_t y, uint64_t* __t4480t) {
  int __t403t__=0;
  int __t404t=0;
  int __t405t=0;
  char __t406t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t109t(x,y,&__t403t__);
  lt__t302t(x,y,&__t406t__);
  if(__t406t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4480t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1160t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t4481t) {
  int __t1161t=0;
  char __t1162t__=0;
  uint64_t __t1163t__=0;
  uint64_t __t1164t__=0;
  uint64_t __t1165t__=0;
  uint64_t __t1166t__=0;
  char* __t1167t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t374t(i,buffer__unsafe_size,&__t1162t__);
  if(__t1162t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t695t(buffer__unsafe_align,&__t1163t__);
  mul__t212t(i,__t1163t__,&__t1164t__);
  nat__t695t(buffer__unsafe_offset,&__t1165t__);
  add__t188t(__t1164t__,__t1165t__,&__t1166t__);
  add__t817t(buffer__unsafe_ptr,__t1166t__,&__t1167t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4481t=__t1167t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1618t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4482t, uint64_t* __t4483t, uint64_t* __t4484t, char* __t4485t) {
  goto __t_return;
  __t_return:
  *__t4482t=unsafe_ptr;
  *__t4483t=dat__pos;
  *__t4484t=dat__length;
  *__t4485t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1622t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t4486t, uint64_t* __t4487t, uint64_t* __t4488t, char* __t4489t) {
  char* unsafe_ptr=0;
  uint64_t __t1623t__=0;
  uint64_t __t1624t=0;
  char __t1625t__=0;
  uint64_t __t1626t__=0;
  uint64_t __t1627t=0;
  char __t1628t__=0;
  char* __t1629t__unsafe_ptr=0;
  uint64_t __t1629t__dat__pos=0;
  uint64_t __t1629t__dat__length=0;
  char __t1629t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t695t(buf__unsafe_align,&__t1623t__);
  __t1624t=1;
  neq__t158t(__t1623t__,__t1624t,&__t1625t__);
  if(__t1625t__){
  __t_errcode=25;
  goto __t_failure;
  }
  nat__t695t(buf__unsafe_offset,&__t1626t__);
  __t1627t=0;
  neq__t158t(__t1626t__,__t1627t,&__t1628t__);
  if(__t1628t__){
  __t_errcode=26;
  goto __t_failure;
  }
  str__t1618t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1629t__unsafe_ptr,&__t1629t__dat__pos,&__t1629t__dat__length,&__t1629t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4486t=__t1629t__unsafe_ptr;
  *__t4487t=__t1629t__dat__pos;
  *__t4488t=__t1629t__dat__length;
  *__t4489t=__t1629t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1663t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t4490t, uint64_t* __t4491t, uint64_t* __t4492t, char* __t4493t) {
  uint64_t __t1664t__=0;
  uint64_t length=0;
  uint64_t __t1665t=0;
  char __t1666t__=0;
  char* __t1668t__=0;
  char __t1669t__value=0;
  char first=0;
  char* __t1670t__unsafe_ptr=0;
  uint64_t __t1670t__dat__pos=0;
  uint64_t __t1670t__dat__length=0;
  char __t1670t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t402t(endpos,pos,&__t1664t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1664t__;
  __t1665t=0;
  neq__t158t(length,__t1665t,&__t1666t__);
  if(__t1666t__){
  __t_errcode=get__t1160t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1668t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1668t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1669t__value,__t1668t__,1);
  first=__t1669t__value;
  }
  __t_errcode=str__t1622t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1670t__unsafe_ptr,&__t1670t__dat__pos,&__t1670t__dat__length,&__t1670t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t4490t=__t1670t__unsafe_ptr;
  *__t4491t=__t1670t__dat__pos;
  *__t4492t=__t1670t__dat__length;
  *__t4493t=__t1670t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t3884t(char** __t4494t, uint64_t* __t4495t, uint64_t* __t4496t, char* __t4497t) {
  int __t3892t=0;
  int __t3893t=0;
  char* __t3896t__unsafe_ptr=0;
  uint64_t __t3896t__unsafe_size=0;
  uint32_t __t3896t__unsafe_offset=0;
  uint32_t __t3896t__unsafe_align=0;
  uint64_t __t3897t=0;
  char* __t3898t__unsafe_ptr=0;
  uint64_t __t3898t__unsafe_size=0;
  uint32_t __t3898t__unsafe_offset=0;
  uint32_t __t3898t__unsafe_align=0;
  char* __t3900t__buf__unsafe_ptr=0;
  uint64_t __t3900t__buf__unsafe_size=0;
  uint32_t __t3900t__buf__unsafe_offset=0;
  uint32_t __t3900t__buf__unsafe_align=0;
  uint64_t __t3900t__pos=0;
  char* __t3901t__buf__unsafe_ptr=0;
  uint64_t __t3901t__buf__unsafe_size=0;
  uint32_t __t3901t__buf__unsafe_offset=0;
  uint32_t __t3901t__buf__unsafe_align=0;
  uint64_t __t3901t__pos=0;
  char* ch__buf__unsafe_ptr=0;
  uint64_t ch__buf__unsafe_size=0;
  uint32_t ch__buf__unsafe_offset=0;
  uint32_t ch__buf__unsafe_align=0;
  uint64_t ch__pos=0;
  uint64_t __t3902t__=0;
  uint64_t __t3903t=0;
  char __t3904t__=0;
  uint64_t __t3905t__=0;
  uint64_t __t3906t=0;
  char __t3907t__=0;
  uint64_t start=0;
  char __t3908t=0;
  char __t3909t__=0;
  char _c=0;
  char __t3910t__=0;
  int __t3911t=0;
  uint64_t __t3912t=0;
  uint64_t __t3913t__=0;
  uint64_t __t3914t=0;
  uint64_t __t3915t__=0;
  char* __t3916t__unsafe_ptr=0;
  uint64_t __t3916t__unsafe_size=0;
  uint32_t __t3916t__unsafe_offset=0;
  uint32_t __t3916t__unsafe_align=0;
  char* __t3917t__=0;
  char* ptr_pos=0;
  uint64_t __t3918t=0;
  uint64_t __t3919t__=0;
  int __t3924t=0;
  int __t3925t=0;
  uint64_t __t3926t=0;
  char __t3927t__=0;
  uint64_t __t3932t=0;
  uint64_t __t3933t__=0;
  char* __t3935t__unsafe_ptr=0;
  uint64_t __t3935t__unsafe_size=0;
  uint32_t __t3935t__unsafe_offset=0;
  uint32_t __t3935t__unsafe_align=0;
  uint64_t __t3928t=0;
  uint64_t __t3929t__=0;
  char* __t3931t__unsafe_ptr=0;
  uint64_t __t3931t__unsafe_size=0;
  uint32_t __t3931t__unsafe_offset=0;
  uint32_t __t3931t__unsafe_align=0;
  char* __t3937t__unsafe_ptr=0;
  uint64_t __t3937t__dat__pos=0;
  uint64_t __t3937t__dat__length=0;
  char __t3937t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t3894t(&__t3896t__unsafe_ptr,&__t3896t__unsafe_size,&__t3896t__unsafe_offset,&__t3896t__unsafe_align);
  __t3897t=8;
  __t_errcode=alloc__t940t(&__t3896t__unsafe_ptr,&__t3896t__unsafe_size,&__t3896t__unsafe_offset,&__t3896t__unsafe_align,__t3897t,&__t3898t__unsafe_ptr,&__t3898t__unsafe_size,&__t3898t__unsafe_offset,&__t3898t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1214t(&__t3898t__unsafe_ptr,&__t3898t__unsafe_size,&__t3898t__unsafe_offset,&__t3898t__unsafe_align,&__t3900t__buf__unsafe_ptr,&__t3900t__buf__unsafe_size,&__t3900t__buf__unsafe_offset,&__t3900t__buf__unsafe_align,&__t3900t__pos);
  __t3901t__pos=__t3900t__pos;
  ch__pos=__t3901t__pos;
  nat__t695t(__t3898t__unsafe_align,&__t3902t__);
  __t3903t=1;
  neq__t158t(__t3902t__,__t3903t,&__t3904t__);
  if(__t3904t__){
  __t_errcode=25;
  goto __t_failure;
  }
  nat__t695t(__t3898t__unsafe_offset,&__t3905t__);
  __t3906t=0;
  neq__t158t(__t3905t__,__t3906t,&__t3907t__);
  if(__t3907t__){
  __t_errcode=26;
  goto __t_failure;
  }
  start=ch__pos;
  while(1){
  __t3908t=1;
  if(!__t3908t){
  break;
  }
  __t_errcode=char__t3753t(&__t3909t__);
  if(__t_errcode){
  goto __t_failure;
  }
  _c=__t3909t__;
  if(_c=='\n'){
  break;
  }
  if(_c=='\r'){
  break;
  }
  ge__t374t(ch__pos,__t3898t__unsafe_size,&__t3910t__);
  if(__t3910t__){
  __t3912t=3;
  mul__t212t(__t3898t__unsafe_size,__t3912t,&__t3913t__);
  __t3914t=2;
  __t_errcode=div__t270t(__t3913t__,__t3914t,&__t3915t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=resize__t1113t(&__t3898t__unsafe_ptr,&__t3898t__unsafe_size,&__t3898t__unsafe_offset,&__t3898t__unsafe_align,__t3915t__,&__t3916t__unsafe_ptr,&__t3916t__unsafe_size,&__t3916t__unsafe_offset,&__t3916t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  add__t817t(__t3898t__unsafe_ptr,ch__pos,&__t3917t__);
  ptr_pos=__t3917t__;
  *ptr_pos=_c;
  __t3918t=1;
  add__t188t(ch__pos,__t3918t,&__t3919t__);
  ch__pos=__t3919t__;
  }
  __t3926t=0;
  eq__t134t(ch__pos,__t3926t,&__t3927t__);
  if(__t3927t__){
  __t3928t=1;
  add__t188t(ch__pos,__t3928t,&__t3929t__);
  __t_errcode=resize__t1104t(&__t3898t__unsafe_ptr,&__t3898t__unsafe_size,&__t3898t__unsafe_offset,&__t3898t__unsafe_align,__t3929t__,&__t3931t__unsafe_ptr,&__t3931t__unsafe_size,&__t3931t__unsafe_offset,&__t3931t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  else{
  __t3932t=1;
  add__t188t(ch__pos,__t3932t,&__t3933t__);
  ch__pos=__t3933t__;
  __t_errcode=resize__t1104t(&__t3898t__unsafe_ptr,&__t3898t__unsafe_size,&__t3898t__unsafe_offset,&__t3898t__unsafe_align,ch__pos,&__t3935t__unsafe_ptr,&__t3935t__unsafe_size,&__t3935t__unsafe_offset,&__t3935t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=str__t1663t(__t3898t__unsafe_ptr,__t3898t__unsafe_size,__t3898t__unsafe_offset,__t3898t__unsafe_align,start,ch__pos,&__t3937t__unsafe_ptr,&__t3937t__dat__pos,&__t3937t__dat__length,&__t3937t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3937t__unsafe_ptr=__t3898t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:free__t815t(&__t3937t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t4494t=__t3937t__unsafe_ptr;
  *__t4495t=__t3937t__dat__pos;
  *__t4496t=__t3937t__dat__length;
  *__t4497t=__t3937t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1688t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t4498t) {
  goto __t_return;
  __t_return:
  *__t4498t=s__dat__length;
}

static inline __attribute__((always_inline)) void empty__t3096t(char* c__unsafe_ptr, uint64_t c__dat__pos, uint64_t c__dat__length, char c__dat__first, char* __t4499t) {
  uint64_t __t3097t=0;
  uint64_t __t3098t__=0;
  char __t3099t__=0;
  __t3097t=0;
  len__t1688t(c__unsafe_ptr,c__dat__pos,c__dat__length,c__dat__first,&__t3098t__);
  eq__t134t(__t3097t,__t3098t__,&__t3099t__);
  goto __t_return;
  __t_return:
  *__t4499t=__t3099t__;
}

static inline __attribute__((always_inline)) void nn__t439t(const char* value, const char** __t4500t, const char** __t4501t) {
  const char* __t441t=0;
  __t441t=__t440t;
  goto __t_return;
  __t_return:
  *__t4500t=value;
  *__t4501t=__t441t;
}

static inline __attribute__((always_inline)) void print__t448t(const char* value, const char* endl) {
  int __t449t=0;
  printf("%s%s",value,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void nn__t2582t(char* value__unsafe_ptr, uint64_t value__dat__pos, uint64_t value__dat__length, char value__dat__first, char** __t4502t, uint64_t* __t4503t, uint64_t* __t4504t, char* __t4505t, const char** __t4506t) {
  const char* __t2583t=0;
  __t2583t=__t440t;
  goto __t_return;
  __t_return:
  *__t4502t=value__unsafe_ptr;
  *__t4503t=value__dat__pos;
  *__t4504t=value__dat__length;
  *__t4505t=value__dat__first;
  *__t4506t=__t2583t;
}

static inline __attribute__((always_inline)) void print__t1887t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, const char* endl) {
  int __t1888t=0;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void ____buffer__t4404t(char** __t4507t, uint64_t* __t4508t, uint32_t* __t4509t, uint32_t* __t4510t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=0;
  *__t4507t=unsafe_ptr;
  *__t4508t=unsafe_size;
  *__t4509t=unsafe_offset;
  *__t4510t=unsafe_align;
}

static inline __attribute__((always_inline)) int main__t4392t(char WHICHERR__init) {
  char* __t4395t__unsafe_ptr=0;
  uint64_t __t4395t__dat__pos=0;
  uint64_t __t4395t__dat__length=0;
  char __t4395t__dat__first=0;
  char* name__unsafe_ptr=0;
  uint64_t name__dat__pos=0;
  uint64_t name__dat__length=0;
  char name__dat__first=0;
  char __t4397t__=0;
  const char* __t4400t__value=0;
  const char* __t4400t____t441t=0;
  char* __t4406t__value__unsafe_ptr=0;
  uint64_t __t4406t__value__dat__pos=0;
  uint64_t __t4406t__value__dat__length=0;
  char __t4406t__value__dat__first=0;
  const char* __t4406t____t2583t=0;
  const char* __t4409t__value=0;
  const char* __t4409t____t441t=0;
  char* __t4411t__unsafe_ptr=0;
  uint64_t __t4411t__unsafe_size=0;
  uint32_t __t4411t__unsafe_offset=0;
  uint32_t __t4411t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  print__t450t(__t4393t);
  __t_errcode=str__t3884t(&__t4395t__unsafe_ptr,&__t4395t__dat__pos,&__t4395t__dat__length,&__t4395t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  name__unsafe_ptr=__t4395t__unsafe_ptr;
  name__dat__pos=__t4395t__dat__pos;
  name__dat__length=__t4395t__dat__length;
  name__dat__first=__t4395t__dat__first;
  empty__t3096t(name__unsafe_ptr,name__dat__pos,name__dat__length,name__dat__first,&__t4397t__);
  if(__t4397t__){
  __t_errcode=45;
  goto __t_failure;
  }
  nn__t439t(__t4399t,&__t4400t__value,&__t4400t____t441t);
  print__t448t(__t4400t__value,__t4400t____t441t);
  nn__t2582t(name__unsafe_ptr,name__dat__pos,name__dat__length,name__dat__first,&__t4406t__value__unsafe_ptr,&__t4406t__value__dat__pos,&__t4406t__value__dat__length,&__t4406t__value__dat__first,&__t4406t____t2583t);
  print__t1887t(__t4406t__value__unsafe_ptr,__t4406t__value__dat__pos,__t4406t__value__dat__length,__t4406t__value__dat__first,__t4406t____t2583t);
  nn__t439t(__t4408t,&__t4409t__value,&__t4409t____t441t);
  print__t448t(__t4409t__value,__t4409t____t441t);
  ____buffer__t4404t(&__t4411t__unsafe_ptr,&__t4411t__unsafe_size,&__t4411t__unsafe_offset,&__t4411t__unsafe_align);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:free__t815t(&__t4395t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
  char __t4514t__init=0;
  int64_t __t4515t____t4256t=0;
  int64_t __t4515t__err=0;
  char __t4515t____t4257t__=0;
  char __t4515t____t4258t__=0;
  const char* __t4515t____t4261t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_argc=argc;
  __t_argv=argv;
  DECLARE_HANDLERS;
  console__t425t();
  new__t1169t();
  WHICHERR__t4254t(&__t4514t__init);
  __t_errcode=main__t4392t(__t4514t__init);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:if(__t4514t__init){
  if(__t_complain){
  __t4515t____t4256t=__t_complain;
  }
  else{
  __t4515t____t4256t=__t_errcode;
  }
  __t4515t__err=__t4515t____t4256t;
  ok__t4253t(__t4515t__err,&__t4515t____t4257t__);
  not__t42t(__t4515t____t4257t__,&__t4515t____t4258t__);
  if(__t4515t____t4258t__){
  console__t431t();
  cstr__t4252t(__t4515t__err,&__t4515t____t4261t__);
  print__t450t(__t4515t____t4261t__);
  }
  }
  
  return __t_errcode;
}