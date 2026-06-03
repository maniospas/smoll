#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t4538t="[ ";
const char* const __t5636t="a*x";
const char* const __t5653t="u*a";
const char* const __t374t="";
const char* const __t5055t=" ⎤";
const char* const __t5016t="⎡ ";
const char* const __t5074t=" ⎦";
const char* const __t5027t="⎢ ";
const char* const __t5066t=" ⎥";
const char* const __t4552t="  ";
const char* const __t4555t=" ]";
const char* const __t5675t="a*b";
const char* const __t5035t="⎣ ";
const char* const __t382t="\n";
static const char* __t_all_errcodes[48] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"iterator range",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot allocate a buffer of unsized type",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
"slice out of string bounds",
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
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"vector exceeeds buffer limits",
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"matrix exceeds buffer limits",
"buffer size not divisible by vector rows",
"row out of bounds",
"column out of bounds",
"matrix columns must match vector length",
"vector length must match matrix rows",
"inner dimensions must agree"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void new__t673t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t5607t(char** __t5680t, uint64_t* __t5681t, uint16_t* __t5682t, uint16_t* __t5683t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5680t=unsafe_ptr;
  *__t5681t=unsafe_size;
  *__t5682t=unsafe_offset;
  *__t5683t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5684t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5684t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5685t) {
  char* allocated=*__t5685t;
  if(allocated){
  free(allocated);
  }
  *__t5685t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5686t) {
  int value=0;
  *__t5686t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5687t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5687t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5688t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5688t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5689t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5689t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5690t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5690t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5691t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5691t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5692t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5692t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5693t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5693t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5694t) {
  char* allocated=0;
  char __t497t__=0;
  char __t498t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t447t(allocated,&__t497t__);
  not__t28t(__t497t__,&__t498t__);
  if(__t498t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5694t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5695t, uint64_t* __t5696t, uint16_t* __t5697t, uint16_t* __t5698t, uint64_t size, char** __t5699t, uint64_t* __t5700t, uint16_t* __t5701t, uint16_t* __t5702t) {
  char* buffer__unsafe_ptr=*__t5695t;
  uint64_t buffer__unsafe_size=*__t5696t;
  uint16_t buffer__unsafe_offset=*__t5697t;
  uint16_t buffer__unsafe_align=*__t5698t;
  int __t533t=0;
  char __t534t__=0;
  char __t536t__=0;
  uint64_t __t537t=0;
  char __t538t__=0;
  uint64_t __t539t=0;
  uint64_t __t540t__=0;
  uint64_t __t541t__=0;
  uint64_t __t543t=0;
  char __t544t__=0;
  uint64_t __t545t__=0;
  uint64_t __t546t__=0;
  uint64_t bytes=0;
  uint64_t __t547t=0;
  char __t548t__=0;
  char* __t549t__=0;
  int __t550t=0;
  uint64_t __t551t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t536t__);
  if(__t536t__){
  __t537t=0;
  neq__t144t(size,__t537t,&__t538t__);
  if(__t538t__){
  __t539t=0;
  nat__t507t(buffer__unsafe_align,&__t540t__);
  mul__t199t(__t540t__,size,&__t541t__);
  zero__t504t(buffer__unsafe_ptr,__t539t,__t541t__);
  }
  goto __t_return;
  }
  __t543t=0;
  neq__t144t(buffer__unsafe_size,__t543t,&__t544t__);
  if(__t544t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t545t__);
  mul__t199t(__t545t__,size,&__t546t__);
  bytes=__t546t__;
  __t547t=0;
  eq__t120t(bytes,__t547t,&__t548t__);
  if(__t548t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t496t(bytes,&__t549t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t549t__;
  __t551t=0;
  zero__t504t(buffer__unsafe_ptr,__t551t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t534t__);
  if(__t534t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5695t=buffer__unsafe_ptr;
  *__t5696t=buffer__unsafe_size;
  *__t5697t=buffer__unsafe_offset;
  *__t5698t=buffer__unsafe_align;
  *__t5699t=buffer__unsafe_ptr;
  *__t5700t=buffer__unsafe_size;
  *__t5701t=buffer__unsafe_offset;
  *__t5702t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5703t) {
  goto __t_return;
  __t_return:
  *__t5703t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t5704t) {
  int __t226t__=0;
  uint64_t zero=0;
  char __t227t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t226t__);
  zero=0;
  eq__t120t(y,zero,&__t227t__);
  if(__t227t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5704t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5705t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5705t=z;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5706t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5706t=z;
}

static inline __attribute__((always_inline)) void mat__t1586t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t5707t, uint64_t* __t5708t, uint64_t* __t5709t, uint64_t* __t5710t, uint64_t* __t5711t) {
  char* __t1588t__unsafe_ptr=0;
  uint64_t __t1588t__pos=0;
  uint64_t __t1588t__rows=0;
  uint64_t __t1588t__cols=0;
  uint64_t __t1588t__stride=0;
  __t1588t__unsafe_ptr=unsafe_ptr;
  __t1588t__pos=pos;
  __t1588t__rows=rows;
  __t1588t__cols=cols;
  __t1588t__stride=stride;
  goto __t_return;
  __t_return:
  *__t5707t=__t1588t__unsafe_ptr;
  *__t5708t=__t1588t__pos;
  *__t5709t=__t1588t__rows;
  *__t5710t=__t1588t__cols;
  *__t5711t=__t1588t__stride;
}

static inline __attribute__((always_inline)) int mat__t4653t(char** __t5712t, uint64_t* __t5713t, uint16_t* __t5714t, uint16_t* __t5715t, uint64_t* __t5716t, uint64_t rows, uint64_t cols, char** __t5717t, uint64_t* __t5718t, uint64_t* __t5719t, uint64_t* __t5720t, uint64_t* __t5721t) {
  char* FLOATS__buf__unsafe_ptr=*__t5712t;
  uint64_t FLOATS__buf__unsafe_size=*__t5713t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5714t;
  uint16_t FLOATS__buf__unsafe_align=*__t5715t;
  uint64_t FLOATS__pos=*__t5716t;
  uint64_t __t4654t__=0;
  uint64_t __t4655t=0;
  char __t4656t__=0;
  uint64_t __t4657t__=0;
  uint64_t __t4658t=0;
  char __t4659t__=0;
  uint64_t __t4660t__=0;
  uint64_t __t4661t__=0;
  uint64_t __t4662t__=0;
  char __t4663t__=0;
  uint64_t start=0;
  uint64_t __t4664t__=0;
  uint64_t __t4665t__=0;
  int __t4666t=0;
  uint64_t __t4667t=0;
  uint64_t __t4668t__=0;
  uint64_t __t4669t=0;
  uint64_t __t4670t__=0;
  char* __t4672t__unsafe_ptr=0;
  uint64_t __t4672t__pos=0;
  uint64_t __t4672t__rows=0;
  uint64_t __t4672t__cols=0;
  uint64_t __t4672t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t4654t__);
  __t4655t=8;
  neq__t144t(__t4654t__,__t4655t,&__t4656t__);
  if(__t4656t__){
  __t_errcode=39;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t4657t__);
  __t4658t=0;
  neq__t144t(__t4657t__,__t4658t,&__t4659t__);
  if(__t4659t__){
  __t_errcode=40;
  goto __t_failure;
  }
  mul__t199t(rows,cols,&__t4660t__);
  add__t175t(FLOATS__pos,__t4660t__,&__t4661t__);
  len__t647t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t4662t__);
  gt__t276t(__t4661t__,__t4662t__,&__t4663t__);
  if(__t4663t__){
  __t_errcode=41;
  goto __t_failure;
  }
  start=FLOATS__pos;
  mul__t199t(rows,cols,&__t4664t__);
  add__t175t(FLOATS__pos,__t4664t__,&__t4665t__);
  FLOATS__pos=__t4665t__;
  __t4667t=8;
  mul__t199t(__t4667t,start,&__t4668t__);
  __t4669t=8;
  mul__t199t(__t4669t,FLOATS__pos,&__t4670t__);
  zero__t504t(FLOATS__buf__unsafe_ptr,__t4668t__,__t4670t__);
  mat__t1586t(FLOATS__buf__unsafe_ptr,start,rows,cols,cols,&__t4672t__unsafe_ptr,&__t4672t__pos,&__t4672t__rows,&__t4672t__cols,&__t4672t__stride);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5712t=FLOATS__buf__unsafe_ptr;
  *__t5713t=FLOATS__buf__unsafe_size;
  *__t5714t=FLOATS__buf__unsafe_offset;
  *__t5715t=FLOATS__buf__unsafe_align;
  *__t5716t=FLOATS__pos;
  *__t5717t=__t4672t__unsafe_ptr;
  *__t5718t=__t4672t__pos;
  *__t5719t=__t4672t__rows;
  *__t5720t=__t4672t__cols;
  *__t5721t=__t4672t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

int mat__t4682t(char** __t5722t, uint64_t* __t5723t, uint16_t* __t5724t, uint16_t* __t5725t, uint64_t rows, char** __t5726t, uint64_t* __t5727t, uint64_t* __t5728t, uint64_t* __t5729t, uint64_t* __t5730t) {
  char* buf__unsafe_ptr=*__t5722t;
  uint64_t buf__unsafe_size=*__t5723t;
  uint16_t buf__unsafe_offset=*__t5724t;
  uint16_t buf__unsafe_align=*__t5725t;
  uint64_t __t4683t__=0;
  uint64_t __t4684t__=0;
  uint64_t cols=0;
  uint64_t __t4685t__=0;
  uint64_t __t4686t__=0;
  char __t4687t__=0;
  uint64_t __t4688t=0;
  uint64_t __t4689t=0;
  char* __t4690t__unsafe_ptr=0;
  uint64_t __t4690t__pos=0;
  uint64_t __t4690t__rows=0;
  uint64_t __t4690t__cols=0;
  uint64_t __t4690t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4683t__);
  __t_errcode=div__t225t(__t4683t__,rows,&__t4684t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t4684t__;
  mul__t199t(cols,rows,&__t4685t__);
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4686t__);
  neq__t144t(__t4685t__,__t4686t__,&__t4687t__);
  if(__t4687t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t4688t=0;
  __t4689t=__t4688t;
  __t_errcode=mat__t4653t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t4689t,rows,cols,&__t4690t__unsafe_ptr,&__t4690t__pos,&__t4690t__rows,&__t4690t__cols,&__t4690t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5722t=buf__unsafe_ptr;
  *__t5723t=buf__unsafe_size;
  *__t5724t=buf__unsafe_offset;
  *__t5725t=buf__unsafe_align;
  *__t5726t=__t4690t__unsafe_ptr;
  *__t5727t=__t4690t__pos;
  *__t5728t=__t4690t__rows;
  *__t5729t=__t4690t__cols;
  *__t5730t=__t4690t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5731t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5731t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5732t) {
  *__t5732t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5733t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5733t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t4781t(char** __t5734t, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t5735t) {
  char* m__unsafe_ptr=*__t5734t;
  char __t4782t__=0;
  char __t4783t__=0;
  uint64_t __t4784t=0;
  uint64_t __t4785t__=0;
  uint64_t __t4786t__=0;
  uint64_t __t4787t__=0;
  uint64_t __t4788t__=0;
  char* __t4789t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t4782t__);
  if(__t4782t__){
  __t_errcode=43;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t4783t__);
  if(__t4783t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t4784t=8;
  mul__t199t(i,m__stride,&__t4785t__);
  add__t175t(__t4785t__,j,&__t4786t__);
  add__t175t(m__pos,__t4786t__,&__t4787t__);
  mul__t199t(__t4784t,__t4787t__,&__t4788t__);
  add__t505t(m__unsafe_ptr,__t4788t__,&__t4789t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5734t=m__unsafe_ptr;
  *__t5735t=__t4789t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5627t(char** __t5736t, uint64_t* __t5737t, uint16_t* __t5738t, uint16_t* __t5739t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5736t=unsafe_ptr;
  *__t5737t=unsafe_size;
  *__t5738t=unsafe_offset;
  *__t5739t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t1583t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5740t, uint64_t* __t5741t, uint64_t* __t5742t) {
  char* __t1585t__unsafe_ptr=0;
  uint64_t __t1585t__pos=0;
  uint64_t __t1585t__length=0;
  __t1585t__unsafe_ptr=unsafe_ptr;
  __t1585t__pos=pos;
  __t1585t__length=length;
  goto __t_return;
  __t_return:
  *__t5740t=__t1585t__unsafe_ptr;
  *__t5741t=__t1585t__pos;
  *__t5742t=__t1585t__length;
}

static inline __attribute__((always_inline)) int vec__t1635t(char** __t5743t, uint64_t* __t5744t, uint16_t* __t5745t, uint16_t* __t5746t, char** __t5747t, uint64_t* __t5748t, uint64_t* __t5749t) {
  char* buf__unsafe_ptr=*__t5743t;
  uint64_t buf__unsafe_size=*__t5744t;
  uint16_t buf__unsafe_offset=*__t5745t;
  uint16_t buf__unsafe_align=*__t5746t;
  uint64_t __t1636t__=0;
  uint64_t __t1637t=0;
  char __t1638t__=0;
  uint64_t __t1639t__=0;
  uint64_t __t1640t=0;
  char __t1641t__=0;
  uint64_t __t1642t=0;
  uint64_t __t1643t__=0;
  char* __t1644t__unsafe_ptr=0;
  uint64_t __t1644t__pos=0;
  uint64_t __t1644t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(buf__unsafe_align,&__t1636t__);
  __t1637t=8;
  neq__t144t(__t1636t__,__t1637t,&__t1638t__);
  if(__t1638t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t1639t__);
  __t1640t=0;
  neq__t144t(__t1639t__,__t1640t,&__t1641t__);
  if(__t1641t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1642t=0;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1643t__);
  vec__t1583t(buf__unsafe_ptr,__t1642t,__t1643t__,&__t1644t__unsafe_ptr,&__t1644t__pos,&__t1644t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5743t=buf__unsafe_ptr;
  *__t5744t=buf__unsafe_size;
  *__t5745t=buf__unsafe_offset;
  *__t5746t=buf__unsafe_align;
  *__t5747t=__t1644t__unsafe_ptr;
  *__t5748t=__t1644t__pos;
  *__t5749t=__t1644t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t5750t, const char** __t5751t) {
  goto __t_return;
  __t_return:
  *__t5750t=value;
  *__t5751t=__t374t;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1593t(char** __t5752t, uint64_t* __t5753t, uint16_t* __t5754t, uint16_t* __t5755t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5752t=unsafe_ptr;
  *__t5753t=unsafe_size;
  *__t5754t=unsafe_offset;
  *__t5755t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t513t(char** __t5756t, uint64_t* __t5757t, uint16_t* __t5758t, uint16_t* __t5759t, uint64_t size, char** __t5760t, uint64_t* __t5761t, uint16_t* __t5762t, uint16_t* __t5763t) {
  char* buffer__unsafe_ptr=*__t5756t;
  uint64_t buffer__unsafe_size=*__t5757t;
  uint16_t buffer__unsafe_offset=*__t5758t;
  uint16_t buffer__unsafe_align=*__t5759t;
  int __t514t=0;
  char __t515t__=0;
  char __t517t__=0;
  uint64_t __t518t=0;
  char __t519t__=0;
  uint64_t __t520t=0;
  uint64_t __t521t__=0;
  uint64_t __t522t__=0;
  uint64_t __t524t=0;
  char __t525t__=0;
  uint64_t __t526t__=0;
  uint64_t __t527t__=0;
  uint64_t bytes=0;
  uint64_t __t528t=0;
  char __t529t__=0;
  char* __t530t__=0;
  int __t531t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t517t__);
  if(__t517t__){
  __t518t=0;
  neq__t144t(size,__t518t,&__t519t__);
  if(__t519t__){
  __t520t=0;
  nat__t507t(buffer__unsafe_align,&__t521t__);
  mul__t199t(__t521t__,size,&__t522t__);
  zero__t504t(buffer__unsafe_ptr,__t520t,__t522t__);
  }
  goto __t_return;
  }
  __t524t=0;
  neq__t144t(buffer__unsafe_size,__t524t,&__t525t__);
  if(__t525t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t526t__);
  mul__t199t(__t526t__,size,&__t527t__);
  bytes=__t527t__;
  __t528t=0;
  eq__t120t(bytes,__t528t,&__t529t__);
  if(__t529t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t496t(bytes,&__t530t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t530t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t515t__);
  if(__t515t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5756t=buffer__unsafe_ptr;
  *__t5757t=buffer__unsafe_size;
  *__t5758t=buffer__unsafe_offset;
  *__t5759t=buffer__unsafe_align;
  *__t5760t=buffer__unsafe_ptr;
  *__t5761t=buffer__unsafe_size;
  *__t5762t=buffer__unsafe_offset;
  *__t5763t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t1623t(uint64_t length, char** __t5764t, uint64_t* __t5765t, uint64_t* __t5766t) {
  char* __t1624t__unsafe_ptr=0;
  uint64_t __t1624t__unsafe_size=0;
  uint16_t __t1624t__unsafe_offset=0;
  uint16_t __t1624t__unsafe_align=0;
  char* __t1626t__unsafe_ptr=0;
  uint64_t __t1626t__unsafe_size=0;
  uint16_t __t1626t__unsafe_offset=0;
  uint16_t __t1626t__unsafe_align=0;
  char __t1627t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t1628t=0;
  uint64_t __t1629t=0;
  uint64_t __t1630t=0;
  uint64_t __t1631t__=0;
  uint64_t __t1633t=0;
  char* __t1634t__unsafe_ptr=0;
  uint64_t __t1634t__pos=0;
  uint64_t __t1634t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1593t(&__t1624t__unsafe_ptr,&__t1624t__unsafe_size,&__t1624t__unsafe_offset,&__t1624t__unsafe_align);
  __t_errcode=alloc__t513t(&__t1624t__unsafe_ptr,&__t1624t__unsafe_size,&__t1624t__unsafe_offset,&__t1624t__unsafe_align,length,&__t1626t__unsafe_ptr,&__t1626t__unsafe_size,&__t1626t__unsafe_offset,&__t1626t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1629t=0;
  __t1630t=8;
  mul__t199t(__t1630t,length,&__t1631t__);
  zero__t504t(__t1626t__unsafe_ptr,__t1629t,__t1631t__);
  __t1633t=0;
  vec__t1583t(__t1626t__unsafe_ptr,__t1633t,length,&__t1634t__unsafe_ptr,&__t1634t__pos,&__t1634t__length);
  __t1634t__unsafe_ptr=__t1626t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t447t(__t1634t__unsafe_ptr,&__t1627t____t515t__);
  if(__t1627t____t515t__){
  free__t503t(&__t1634t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5764t=__t1634t__unsafe_ptr;
  *__t5765t=__t1634t__pos;
  *__t5766t=__t1634t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5767t, uint64_t* __t5768t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5767t=from;
  *__t5768t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5769t, uint64_t* __t5770t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5769t=__t473t__from;
  *__t5770t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t5771t, uint64_t r__to, uint64_t* __t5772t) {
  uint64_t r__from=*__t5771t;
  char __t475t__=0;
  uint64_t ret=0;
  uint64_t __t476t=0;
  uint64_t __t477t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t475t__);
  if(__t475t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t476t=1;
  add__t175t(ret,__t476t,&__t477t__);
  r__from=__t477t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5771t=r__from;
  *__t5772t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t4790t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t5773t) {
  char __t4791t__=0;
  char __t4792t__=0;
  uint64_t __t4793t=0;
  uint64_t __t4794t__=0;
  uint64_t __t4795t__=0;
  uint64_t __t4796t__=0;
  uint64_t __t4797t__=0;
  char* __t4798t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t4791t__);
  if(__t4791t__){
  __t_errcode=43;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t4792t__);
  if(__t4792t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t4793t=8;
  mul__t199t(i,m__stride,&__t4794t__);
  add__t175t(__t4794t__,j,&__t4795t__);
  add__t175t(m__pos,__t4795t__,&__t4796t__);
  mul__t199t(__t4793t,__t4796t__,&__t4797t__);
  add__t505t(m__unsafe_ptr,__t4797t__,&__t4798t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5773t=__t4798t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1734t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5774t) {
  char __t1735t__=0;
  uint64_t __t1736t=0;
  uint64_t __t1737t__=0;
  uint64_t __t1738t__=0;
  char* __t1739t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1735t__);
  if(__t1735t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1736t=8;
  add__t175t(i,v__pos,&__t1737t__);
  mul__t199t(__t1736t,__t1737t__,&__t1738t__);
  add__t505t(v__unsafe_ptr,__t1738t__,&__t1739t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5774t=__t1739t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5775t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5775t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5776t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5776t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5777t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5777t=z;
}

static inline __attribute__((always_inline)) int mutget__t1728t(char** __t5778t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5779t) {
  char* v__unsafe_ptr=*__t5778t;
  char __t1729t__=0;
  uint64_t __t1730t=0;
  uint64_t __t1731t__=0;
  uint64_t __t1732t__=0;
  char* __t1733t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1729t__);
  if(__t1729t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1730t=8;
  add__t175t(i,v__pos,&__t1731t__);
  mul__t199t(__t1730t,__t1731t__,&__t1732t__);
  add__t505t(v__unsafe_ptr,__t1732t__,&__t1733t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5778t=v__unsafe_ptr;
  *__t5779t=__t1733t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t4829t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5780t, uint64_t* __t5781t, uint64_t* __t5782t) {
  char __t4830t__=0;
  char* __t4831t__unsafe_ptr=0;
  uint64_t __t4831t__pos=0;
  uint64_t __t4831t__length=0;
  char __t4832t____t1627t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4833t__from=0;
  uint64_t __t4833t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t4834t=0;
  uint64_t __t4835t__=0;
  uint64_t i=0;
  double __t4836t=0;
  double __t4837t=0;
  double acc=0;
  uint64_t __t4838t__from=0;
  uint64_t __t4838t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t4839t=0;
  uint64_t __t4840t__=0;
  uint64_t j=0;
  char* __t4841t__=0;
  double __t4842t__value=0;
  char* __t4843t__=0;
  double __t4844t__value=0;
  double __t4845t__=0;
  double __t4846t__=0;
  char* __t4847t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t4830t__);
  if(__t4830t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=vec__t1623t(m__rows,&__t4831t__unsafe_ptr,&__t4831t__pos,&__t4831t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4831t__unsafe_ptr;
  result__pos=__t4831t__pos;
  result__length=__t4831t__length;
  range__t471t(m__rows,&__t4833t__from,&__t4833t__to);
  it_i__from=__t4833t__from;
  it_i__to=__t4833t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t4835t__);
  __t4834t=__t_complain;
  i=__t4835t__;
  __t4834t=__t4834t==0;
  if(!__t4834t){
  break;
  }
  __t4836t=0.0;
  __t4837t=__t4836t;
  acc=__t4837t;
  range__t471t(m__cols,&__t4838t__from,&__t4838t__to);
  it_j__from=__t4838t__from;
  it_j__to=__t4838t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t4840t__);
  __t4839t=__t_complain;
  j=__t4840t__;
  __t4839t=__t4839t==0;
  if(!__t4839t){
  break;
  }
  __t_errcode=get__t4790t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t4841t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4841t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4842t__value,__t4841t__,8);
  __t_errcode=get__t1734t(v__unsafe_ptr,v__pos,v__length,j,&__t4843t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4843t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4844t__value,__t4843t__,8);
  mul__t177t(__t4842t__value,__t4844t__value,&__t4845t__);
  add__t153t(acc,__t4845t__,&__t4846t__);
  acc=__t4846t__;
  }
  __t_errcode=mutget__t1728t(&result__unsafe_ptr,result__pos,result__length,i,&__t4847t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4847t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4847t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t4832t____t1627t____t515t__);
  if(__t4832t____t1627t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5780t=result__unsafe_ptr;
  *__t5781t=result__pos;
  *__t5782t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5783t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5783t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5784t) {
  char __t479t__=0;
  char __t480t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,r__to,&__t479t__);
  if(__t479t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t252t(pos,r__from,&__t480t__);
  if(__t480t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5784t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t375t(double value, double* __t5785t, const char** __t5786t) {
  goto __t_return;
  __t_return:
  *__t5785t=value;
  *__t5786t=__t374t;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t5787t) {
  int __t353t__=0;
  int __t354t=0;
  int __t355t=0;
  char __t356t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t353t__);
  lt__t252t(x,y,&__t356t__);
  if(__t356t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5787t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int print__t4557t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t4558t=0;
  const char* endl=0;
  const char* __t4559t__value=0;
  const char* __t4559t____t374t=0;
  uint64_t __t4561t=0;
  uint64_t __t4562t__from=0;
  uint64_t __t4562t__to=0;
  char __t4563t=0;
  uint64_t __t4564t__=0;
  uint64_t i=0;
  char* __t4565t__=0;
  double __t4566t__value=0;
  double __t4567t__value=0;
  const char* __t4567t____t374t=0;
  uint64_t __t4569t=0;
  uint64_t __t4570t__=0;
  char __t4571t__=0;
  const char* __t4572t__value=0;
  const char* __t4572t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  nn__t373t(__t4538t,&__t4559t__value,&__t4559t____t374t);
  print__t378t(__t4559t__value,__t4559t____t374t);
  range__t471t(v__length,&__t4562t__from,&__t4562t__to);
  __t4561t=0;
  while(1){
  __t_complain=get__t478t(__t4562t__from,__t4562t__to,__t4561t,&__t4564t__);
  __t4563t=__t_complain;
  i=__t4564t__;
  __t4563t=__t4563t==0;
  __t4561t=__t4561t+1;
  if(!__t4563t){
  break;
  }
  __t_errcode=get__t1734t(v__unsafe_ptr,v__pos,v__length,i,&__t4565t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4565t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4566t__value,__t4565t__,8);
  nn__t375t(__t4566t__value,&__t4567t__value,&__t4567t____t374t);
  print__t383t(__t4567t__value,__t4567t____t374t);
  __t4569t=1;
  __t_errcode=sub__t352t(v__length,__t4569t,&__t4570t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t4570t__,&__t4571t__);
  if(__t4571t__){
  nn__t373t(__t4552t,&__t4572t__value,&__t4572t____t374t);
  print__t378t(__t4572t__value,__t4572t____t374t);
  }
  }
  print__t378t(__t4555t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5645t(char** __t5788t, uint64_t* __t5789t, uint16_t* __t5790t, uint16_t* __t5791t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5788t=unsafe_ptr;
  *__t5789t=unsafe_size;
  *__t5790t=unsafe_offset;
  *__t5791t=unsafe_align;
}

static inline __attribute__((always_inline)) int mul__t4884t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t5792t, uint64_t* __t5793t, uint64_t* __t5794t) {
  char __t4885t__=0;
  char* __t4886t__unsafe_ptr=0;
  uint64_t __t4886t__pos=0;
  uint64_t __t4886t__length=0;
  char __t4887t____t1627t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4888t__from=0;
  uint64_t __t4888t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t4889t=0;
  uint64_t __t4890t__=0;
  uint64_t j=0;
  double __t4891t=0;
  double __t4892t=0;
  double acc=0;
  uint64_t __t4893t__from=0;
  uint64_t __t4893t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t4894t=0;
  uint64_t __t4895t__=0;
  uint64_t i=0;
  char* __t4896t__=0;
  double __t4897t__value=0;
  char* __t4898t__=0;
  double __t4899t__value=0;
  double __t4900t__=0;
  double __t4901t__=0;
  char* __t4902t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v__length,m__rows,&__t4885t__);
  if(__t4885t__){
  __t_errcode=46;
  goto __t_failure;
  }
  __t_errcode=vec__t1623t(m__cols,&__t4886t__unsafe_ptr,&__t4886t__pos,&__t4886t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4886t__unsafe_ptr;
  result__pos=__t4886t__pos;
  result__length=__t4886t__length;
  range__t471t(m__cols,&__t4888t__from,&__t4888t__to);
  it_j__from=__t4888t__from;
  it_j__to=__t4888t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t4890t__);
  __t4889t=__t_complain;
  j=__t4890t__;
  __t4889t=__t4889t==0;
  if(!__t4889t){
  break;
  }
  __t4891t=0.0;
  __t4892t=__t4891t;
  acc=__t4892t;
  range__t471t(m__rows,&__t4893t__from,&__t4893t__to);
  it_i__from=__t4893t__from;
  it_i__to=__t4893t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t4895t__);
  __t4894t=__t_complain;
  i=__t4895t__;
  __t4894t=__t4894t==0;
  if(!__t4894t){
  break;
  }
  __t_errcode=get__t1734t(v__unsafe_ptr,v__pos,v__length,i,&__t4896t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4896t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4897t__value,__t4896t__,8);
  __t_errcode=get__t4790t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t4898t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4898t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4899t__value,__t4898t__,8);
  mul__t177t(__t4897t__value,__t4899t__value,&__t4900t__);
  add__t153t(acc,__t4900t__,&__t4901t__);
  acc=__t4901t__;
  }
  __t_errcode=mutget__t1728t(&result__unsafe_ptr,result__pos,result__length,j,&__t4902t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4902t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4902t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t4887t____t1627t____t515t__);
  if(__t4887t____t1627t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5792t=result__unsafe_ptr;
  *__t5793t=result__pos;
  *__t5794t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5662t(char** __t5795t, uint64_t* __t5796t, uint16_t* __t5797t, uint16_t* __t5798t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5795t=unsafe_ptr;
  *__t5796t=unsafe_size;
  *__t5797t=unsafe_offset;
  *__t5798t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t4614t(char** __t5799t, uint64_t* __t5800t, uint16_t* __t5801t, uint16_t* __t5802t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5799t=unsafe_ptr;
  *__t5800t=unsafe_size;
  *__t5801t=unsafe_offset;
  *__t5802t=unsafe_align;
}

int mat__t4624t(uint64_t rows, uint64_t cols, char** __t5803t, uint64_t* __t5804t, uint64_t* __t5805t, uint64_t* __t5806t, uint64_t* __t5807t) {
  char* __t4625t__unsafe_ptr=0;
  uint64_t __t4625t__unsafe_size=0;
  uint16_t __t4625t__unsafe_offset=0;
  uint16_t __t4625t__unsafe_align=0;
  uint64_t __t4626t__=0;
  char* __t4628t__unsafe_ptr=0;
  uint64_t __t4628t__unsafe_size=0;
  uint16_t __t4628t__unsafe_offset=0;
  uint16_t __t4628t__unsafe_align=0;
  char __t4629t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t4630t=0;
  uint64_t __t4631t=0;
  uint64_t __t4632t=0;
  uint64_t __t4633t__=0;
  uint64_t __t4634t__=0;
  uint64_t __t4636t=0;
  char* __t4637t__unsafe_ptr=0;
  uint64_t __t4637t__pos=0;
  uint64_t __t4637t__rows=0;
  uint64_t __t4637t__cols=0;
  uint64_t __t4637t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t4614t(&__t4625t__unsafe_ptr,&__t4625t__unsafe_size,&__t4625t__unsafe_offset,&__t4625t__unsafe_align);
  mul__t199t(rows,cols,&__t4626t__);
  __t_errcode=alloc__t513t(&__t4625t__unsafe_ptr,&__t4625t__unsafe_size,&__t4625t__unsafe_offset,&__t4625t__unsafe_align,__t4626t__,&__t4628t__unsafe_ptr,&__t4628t__unsafe_size,&__t4628t__unsafe_offset,&__t4628t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t4628t__unsafe_ptr;
  buf__unsafe_size=__t4628t__unsafe_size;
  buf__unsafe_offset=__t4628t__unsafe_offset;
  buf__unsafe_align=__t4628t__unsafe_align;
  __t4631t=0;
  __t4632t=8;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4633t__);
  mul__t199t(__t4632t,__t4633t__,&__t4634t__);
  zero__t504t(buf__unsafe_ptr,__t4631t,__t4634t__);
  __t4636t=0;
  mat__t1586t(buf__unsafe_ptr,__t4636t,rows,cols,cols,&__t4637t__unsafe_ptr,&__t4637t__pos,&__t4637t__rows,&__t4637t__cols,&__t4637t__stride);
  goto __t_return;
  
  __t_failure:exists__t447t(__t4637t__unsafe_ptr,&__t4629t____t515t__);
  if(__t4629t____t515t__){
  free__t503t(&__t4637t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5803t=__t4637t__unsafe_ptr;
  *__t5804t=__t4637t__pos;
  *__t5805t=__t4637t__rows;
  *__t5806t=__t4637t__cols;
  *__t5807t=__t4637t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t4939t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t5808t, uint64_t* __t5809t, uint64_t* __t5810t, uint64_t* __t5811t, uint64_t* __t5812t) {
  char __t4940t__=0;
  char* __t4941t__unsafe_ptr=0;
  uint64_t __t4941t__pos=0;
  uint64_t __t4941t__rows=0;
  uint64_t __t4941t__cols=0;
  uint64_t __t4941t__stride=0;
  char __t4942t____t4629t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t4943t__from=0;
  uint64_t __t4943t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t4944t=0;
  uint64_t __t4945t__=0;
  uint64_t i=0;
  uint64_t __t4946t__from=0;
  uint64_t __t4946t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t4947t=0;
  uint64_t __t4948t__=0;
  uint64_t j=0;
  double __t4949t=0;
  double __t4950t=0;
  double acc=0;
  uint64_t __t4951t__from=0;
  uint64_t __t4951t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t4952t=0;
  uint64_t __t4953t__=0;
  uint64_t k=0;
  char* __t4954t__=0;
  double __t4955t__value=0;
  char* __t4956t__=0;
  double __t4957t__value=0;
  double __t4958t__=0;
  double __t4959t__=0;
  char* __t4960t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m1__cols,m2__rows,&__t4940t__);
  if(__t4940t__){
  __t_errcode=47;
  goto __t_failure;
  }
  __t_errcode=mat__t4624t(m1__rows,m2__cols,&__t4941t__unsafe_ptr,&__t4941t__pos,&__t4941t__rows,&__t4941t__cols,&__t4941t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4941t__unsafe_ptr;
  result__pos=__t4941t__pos;
  result__rows=__t4941t__rows;
  result__cols=__t4941t__cols;
  result__stride=__t4941t__stride;
  range__t471t(m1__rows,&__t4943t__from,&__t4943t__to);
  it_i__from=__t4943t__from;
  it_i__to=__t4943t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t4945t__);
  __t4944t=__t_complain;
  i=__t4945t__;
  __t4944t=__t4944t==0;
  if(!__t4944t){
  break;
  }
  range__t471t(m2__cols,&__t4946t__from,&__t4946t__to);
  it_j__from=__t4946t__from;
  it_j__to=__t4946t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t4948t__);
  __t4947t=__t_complain;
  j=__t4948t__;
  __t4947t=__t4947t==0;
  if(!__t4947t){
  break;
  }
  __t4949t=0.0;
  __t4950t=__t4949t;
  acc=__t4950t;
  range__t471t(m1__cols,&__t4951t__from,&__t4951t__to);
  it_k__from=__t4951t__from;
  it_k__to=__t4951t__to;
  while(1){
  __t_complain=next__t474t(&it_k__from,it_k__to,&__t4953t__);
  __t4952t=__t_complain;
  k=__t4953t__;
  __t4952t=__t4952t==0;
  if(!__t4952t){
  break;
  }
  __t_errcode=get__t4790t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t4954t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4954t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4955t__value,__t4954t__,8);
  __t_errcode=get__t4790t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t4956t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4956t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4957t__value,__t4956t__,8);
  mul__t177t(__t4955t__value,__t4957t__value,&__t4958t__);
  add__t153t(acc,__t4958t__,&__t4959t__);
  acc=__t4959t__;
  }
  __t_errcode=mutget__t4781t(&result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t4960t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4960t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4960t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t4942t____t4629t____t515t__);
  if(__t4942t____t4629t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5808t=result__unsafe_ptr;
  *__t5809t=result__pos;
  *__t5810t=result__rows;
  *__t5811t=result__cols;
  *__t5812t=result__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t5077t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride) {
  int __t5078t=0;
  const char* endl=0;
  uint64_t __t5079t__from=0;
  uint64_t __t5079t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t5080t=0;
  uint64_t __t5081t__=0;
  uint64_t i=0;
  uint64_t __t5082t=0;
  char __t5083t__=0;
  uint64_t __t5085t=0;
  char __t5086t__=0;
  uint64_t __t5087t=0;
  char __t5088t__=0;
  char __t5089t=0;
  uint64_t __t5091t=0;
  char __t5092t__=0;
  uint64_t __t5093t=0;
  char __t5094t__=0;
  uint64_t __t5095t=0;
  uint64_t __t5096t__=0;
  char __t5097t__=0;
  char __t5098t=0;
  char __t5099t=0;
  uint64_t __t5101t=0;
  char __t5102t__=0;
  uint64_t __t5103t=0;
  uint64_t __t5104t__=0;
  char __t5105t__=0;
  char __t5106t=0;
  uint64_t __t5108t__from=0;
  uint64_t __t5108t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t5109t=0;
  uint64_t __t5110t__=0;
  uint64_t j=0;
  char* __t5111t__=0;
  double __t5112t__value=0;
  uint64_t __t5114t=0;
  uint64_t __t5115t__=0;
  char __t5116t__=0;
  uint64_t __t5118t=0;
  char __t5119t__=0;
  uint64_t __t5121t=0;
  char __t5122t__=0;
  uint64_t __t5123t=0;
  char __t5124t__=0;
  char __t5125t=0;
  uint64_t __t5127t=0;
  char __t5128t__=0;
  uint64_t __t5129t=0;
  char __t5130t__=0;
  uint64_t __t5131t=0;
  uint64_t __t5132t__=0;
  char __t5133t__=0;
  char __t5134t=0;
  char __t5135t=0;
  uint64_t __t5137t=0;
  char __t5138t__=0;
  uint64_t __t5139t=0;
  uint64_t __t5140t__=0;
  char __t5141t__=0;
  char __t5142t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  range__t471t(m__rows,&__t5079t__from,&__t5079t__to);
  it_i__from=__t5079t__from;
  it_i__to=__t5079t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t5081t__);
  __t5080t=__t_complain;
  i=__t5081t__;
  __t5080t=__t5080t==0;
  if(!__t5080t){
  break;
  }
  __t5082t=1;
  eq__t120t(m__rows,__t5082t,&__t5083t__);
  if(__t5083t__){
  print__t378t(__t4538t,__t374t);
  }
  __t5085t=1;
  gt__t276t(m__rows,__t5085t,&__t5086t__);
  if(__t5086t__){
  __t5087t=0;
  eq__t120t(i,__t5087t,&__t5088t__);
  __t5089t=__t5088t__;
  }
  {
  __t5089t=0;
  }
  if(__t5089t){
  print__t378t(__t5016t,__t374t);
  }
  __t5091t=1;
  gt__t276t(m__rows,__t5091t,&__t5092t__);
  if(__t5092t__){
  __t5093t=0;
  gt__t276t(i,__t5093t,&__t5094t__);
  if(__t5094t__){
  __t5095t=1;
  __t_errcode=sub__t352t(m__rows,__t5095t,&__t5096t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5096t__,&__t5097t__);
  __t5098t=__t5097t__;
  }
  {
  __t5098t=0;
  }
  __t5099t=__t5098t;
  }
  {
  __t5099t=0;
  }
  if(__t5099t){
  print__t378t(__t5027t,__t374t);
  }
  __t5101t=1;
  gt__t276t(m__rows,__t5101t,&__t5102t__);
  if(__t5102t__){
  __t5103t=1;
  __t_errcode=sub__t352t(m__rows,__t5103t,&__t5104t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t5104t__,&__t5105t__);
  __t5106t=__t5105t__;
  }
  {
  __t5106t=0;
  }
  if(__t5106t){
  print__t378t(__t5035t,__t374t);
  }
  range__t471t(m__cols,&__t5108t__from,&__t5108t__to);
  it_j__from=__t5108t__from;
  it_j__to=__t5108t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t5110t__);
  __t5109t=__t_complain;
  j=__t5110t__;
  __t5109t=__t5109t==0;
  if(!__t5109t){
  break;
  }
  __t_errcode=get__t4790t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t5111t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5111t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5112t__value,__t5111t__,8);
  print__t383t(__t5112t__value,__t374t);
  __t5114t=1;
  __t_errcode=sub__t352t(m__cols,__t5114t,&__t5115t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(j,__t5115t__,&__t5116t__);
  if(__t5116t__){
  print__t378t(__t4552t,__t374t);
  }
  }
  __t5118t=1;
  eq__t120t(m__rows,__t5118t,&__t5119t__);
  if(__t5119t__){
  print__t378t(__t4555t,__t374t);
  }
  __t5121t=1;
  gt__t276t(m__rows,__t5121t,&__t5122t__);
  if(__t5122t__){
  __t5123t=0;
  eq__t120t(i,__t5123t,&__t5124t__);
  __t5125t=__t5124t__;
  }
  {
  __t5125t=0;
  }
  if(__t5125t){
  print__t378t(__t5055t,__t374t);
  }
  __t5127t=1;
  gt__t276t(m__rows,__t5127t,&__t5128t__);
  if(__t5128t__){
  __t5129t=0;
  gt__t276t(i,__t5129t,&__t5130t__);
  if(__t5130t__){
  __t5131t=1;
  __t_errcode=sub__t352t(m__rows,__t5131t,&__t5132t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5132t__,&__t5133t__);
  __t5134t=__t5133t__;
  }
  {
  __t5134t=0;
  }
  __t5135t=__t5134t;
  }
  {
  __t5135t=0;
  }
  if(__t5135t){
  print__t378t(__t5066t,__t374t);
  }
  __t5137t=1;
  gt__t276t(m__rows,__t5137t,&__t5138t__);
  if(__t5138t__){
  __t5139t=1;
  __t_errcode=sub__t352t(m__rows,__t5139t,&__t5140t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t5140t__,&__t5141t__);
  __t5142t=__t5141t__;
  }
  {
  __t5142t=0;
  }
  if(__t5142t){
  print__t378t(__t5074t,__t374t);
  }
  print__t378t(__t374t,endl);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5601t() {
  double __t5604t=0;
  double __t5609t=0;
  double __t5610t=0;
  double __t5611t=0;
  double __t5612t=0;
  double __t5613t=0;
  char* __t5614t__unsafe_ptr=0;
  uint64_t __t5614t__unsafe_size=0;
  uint16_t __t5614t__unsafe_offset=0;
  uint16_t __t5614t__unsafe_align=0;
  uint64_t __t5615t=0;
  char* __t5616t__unsafe_ptr=0;
  uint64_t __t5616t__unsafe_size=0;
  uint16_t __t5616t__unsafe_offset=0;
  uint16_t __t5616t__unsafe_align=0;
  char __t5617t____t534t__=0;
  uint64_t __t5618t=0;
  char* __t5619t__unsafe_ptr=0;
  uint64_t __t5619t__pos=0;
  uint64_t __t5619t__rows=0;
  uint64_t __t5619t__cols=0;
  uint64_t __t5619t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  uint64_t __t5620t=0;
  uint64_t __t5621t=0;
  char* __t5622t__=0;
  double __t5623t=0;
  double __t5624t=0;
  double __t5629t=0;
  double __t5630t=0;
  char* __t5631t__unsafe_ptr=0;
  uint64_t __t5631t__unsafe_size=0;
  uint16_t __t5631t__unsafe_offset=0;
  uint16_t __t5631t__unsafe_align=0;
  uint64_t __t5632t=0;
  char* __t5633t__unsafe_ptr=0;
  uint64_t __t5633t__unsafe_size=0;
  uint16_t __t5633t__unsafe_offset=0;
  uint16_t __t5633t__unsafe_align=0;
  char __t5634t____t534t__=0;
  char* __t5635t__unsafe_ptr=0;
  uint64_t __t5635t__pos=0;
  uint64_t __t5635t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t5637t__value=0;
  const char* __t5637t____t374t=0;
  char* __t5639t__unsafe_ptr=0;
  uint64_t __t5639t__pos=0;
  uint64_t __t5639t__length=0;
  char __t5640t____t4832t____t1627t____t515t__=0;
  double __t5642t=0;
  double __t5647t=0;
  char* __t5648t__unsafe_ptr=0;
  uint64_t __t5648t__unsafe_size=0;
  uint16_t __t5648t__unsafe_offset=0;
  uint16_t __t5648t__unsafe_align=0;
  uint64_t __t5649t=0;
  char* __t5650t__unsafe_ptr=0;
  uint64_t __t5650t__unsafe_size=0;
  uint16_t __t5650t__unsafe_offset=0;
  uint16_t __t5650t__unsafe_align=0;
  char __t5651t____t534t__=0;
  char* __t5652t__unsafe_ptr=0;
  uint64_t __t5652t__pos=0;
  uint64_t __t5652t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t5654t__value=0;
  const char* __t5654t____t374t=0;
  char* __t5656t__unsafe_ptr=0;
  uint64_t __t5656t__pos=0;
  uint64_t __t5656t__length=0;
  char __t5657t____t4887t____t1627t____t515t__=0;
  double __t5659t=0;
  double __t5664t=0;
  double __t5665t=0;
  double __t5666t=0;
  double __t5667t=0;
  double __t5668t=0;
  char* __t5669t__unsafe_ptr=0;
  uint64_t __t5669t__unsafe_size=0;
  uint16_t __t5669t__unsafe_offset=0;
  uint16_t __t5669t__unsafe_align=0;
  uint64_t __t5670t=0;
  char* __t5671t__unsafe_ptr=0;
  uint64_t __t5671t__unsafe_size=0;
  uint16_t __t5671t__unsafe_offset=0;
  uint16_t __t5671t__unsafe_align=0;
  char __t5672t____t534t__=0;
  uint64_t __t5673t=0;
  char* __t5674t__unsafe_ptr=0;
  uint64_t __t5674t__pos=0;
  uint64_t __t5674t__rows=0;
  uint64_t __t5674t__cols=0;
  uint64_t __t5674t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t5677t__unsafe_ptr=0;
  uint64_t __t5677t__pos=0;
  uint64_t __t5677t__rows=0;
  uint64_t __t5677t__cols=0;
  uint64_t __t5677t__stride=0;
  char __t5678t____t4942t____t4629t____t515t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  new__t673t();
  __t5604t=1.0;
  __t5609t=0.0;
  __t5610t=2.0;
  __t5611t=0.0;
  __t5612t=3.0;
  __t5613t=1.0;
  float____buffer__t5607t(&__t5614t__unsafe_ptr,&__t5614t__unsafe_size,&__t5614t__unsafe_offset,&__t5614t__unsafe_align);
  __t5615t=6;
  __t_errcode=alloc__t532t(&__t5614t__unsafe_ptr,&__t5614t__unsafe_size,&__t5614t__unsafe_offset,&__t5614t__unsafe_align,__t5615t,&__t5616t__unsafe_ptr,&__t5616t__unsafe_size,&__t5616t__unsafe_offset,&__t5616t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5614t__unsafe_ptr,&__t5604t,8);
  memcpy(__t5614t__unsafe_ptr+8,&__t5609t,8);
  memcpy(__t5614t__unsafe_ptr+16,&__t5610t,8);
  memcpy(__t5614t__unsafe_ptr+24,&__t5611t,8);
  memcpy(__t5614t__unsafe_ptr+32,&__t5612t,8);
  memcpy(__t5614t__unsafe_ptr+40,&__t5613t,8);
  __t5618t=2;
  __t_errcode=mat__t4682t(&__t5614t__unsafe_ptr,&__t5614t__unsafe_size,&__t5614t__unsafe_offset,&__t5614t__unsafe_align,__t5618t,&__t5619t__unsafe_ptr,&__t5619t__pos,&__t5619t__rows,&__t5619t__cols,&__t5619t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t5619t__unsafe_ptr;
  a__pos=__t5619t__pos;
  a__rows=__t5619t__rows;
  a__cols=__t5619t__cols;
  a__stride=__t5619t__stride;
  __t5620t=0;
  __t5621t=0;
  __t_errcode=mutget__t4781t(&a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t5620t,__t5621t,&__t5622t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5623t=1.0;
  if(!__t5622t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5622t__,&__t5623t,8);
  __t5624t=1.0;
  __t5629t=2.0;
  __t5630t=3.0;
  float____buffer__t5627t(&__t5631t__unsafe_ptr,&__t5631t__unsafe_size,&__t5631t__unsafe_offset,&__t5631t__unsafe_align);
  __t5632t=3;
  __t_errcode=alloc__t532t(&__t5631t__unsafe_ptr,&__t5631t__unsafe_size,&__t5631t__unsafe_offset,&__t5631t__unsafe_align,__t5632t,&__t5633t__unsafe_ptr,&__t5633t__unsafe_size,&__t5633t__unsafe_offset,&__t5633t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5631t__unsafe_ptr,&__t5624t,8);
  memcpy(__t5631t__unsafe_ptr+8,&__t5629t,8);
  memcpy(__t5631t__unsafe_ptr+16,&__t5630t,8);
  __t_errcode=vec__t1635t(&__t5631t__unsafe_ptr,&__t5631t__unsafe_size,&__t5631t__unsafe_offset,&__t5631t__unsafe_align,&__t5635t__unsafe_ptr,&__t5635t__pos,&__t5635t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t5635t__unsafe_ptr;
  x__pos=__t5635t__pos;
  x__length=__t5635t__length;
  nn__t373t(__t5636t,&__t5637t__value,&__t5637t____t374t);
  print__t378t(__t5637t__value,__t5637t____t374t);
  __t_errcode=mul__t4829t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t5639t__unsafe_ptr,&__t5639t__pos,&__t5639t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t4557t(__t5639t__unsafe_ptr,__t5639t__pos,__t5639t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5642t=1.0;
  __t5647t=2.0;
  float____buffer__t5645t(&__t5648t__unsafe_ptr,&__t5648t__unsafe_size,&__t5648t__unsafe_offset,&__t5648t__unsafe_align);
  __t5649t=2;
  __t_errcode=alloc__t532t(&__t5648t__unsafe_ptr,&__t5648t__unsafe_size,&__t5648t__unsafe_offset,&__t5648t__unsafe_align,__t5649t,&__t5650t__unsafe_ptr,&__t5650t__unsafe_size,&__t5650t__unsafe_offset,&__t5650t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5648t__unsafe_ptr,&__t5642t,8);
  memcpy(__t5648t__unsafe_ptr+8,&__t5647t,8);
  __t_errcode=vec__t1635t(&__t5648t__unsafe_ptr,&__t5648t__unsafe_size,&__t5648t__unsafe_offset,&__t5648t__unsafe_align,&__t5652t__unsafe_ptr,&__t5652t__pos,&__t5652t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t5652t__unsafe_ptr;
  u__pos=__t5652t__pos;
  u__length=__t5652t__length;
  nn__t373t(__t5653t,&__t5654t__value,&__t5654t____t374t);
  print__t378t(__t5654t__value,__t5654t____t374t);
  __t_errcode=mul__t4884t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t5656t__unsafe_ptr,&__t5656t__pos,&__t5656t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t4557t(__t5656t__unsafe_ptr,__t5656t__pos,__t5656t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5659t=1.0;
  __t5664t=2.0;
  __t5665t=3.0;
  __t5666t=4.0;
  __t5667t=5.0;
  __t5668t=6.0;
  float____buffer__t5662t(&__t5669t__unsafe_ptr,&__t5669t__unsafe_size,&__t5669t__unsafe_offset,&__t5669t__unsafe_align);
  __t5670t=6;
  __t_errcode=alloc__t532t(&__t5669t__unsafe_ptr,&__t5669t__unsafe_size,&__t5669t__unsafe_offset,&__t5669t__unsafe_align,__t5670t,&__t5671t__unsafe_ptr,&__t5671t__unsafe_size,&__t5671t__unsafe_offset,&__t5671t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5669t__unsafe_ptr,&__t5659t,8);
  memcpy(__t5669t__unsafe_ptr+8,&__t5664t,8);
  memcpy(__t5669t__unsafe_ptr+16,&__t5665t,8);
  memcpy(__t5669t__unsafe_ptr+24,&__t5666t,8);
  memcpy(__t5669t__unsafe_ptr+32,&__t5667t,8);
  memcpy(__t5669t__unsafe_ptr+40,&__t5668t,8);
  __t5673t=3;
  __t_errcode=mat__t4682t(&__t5669t__unsafe_ptr,&__t5669t__unsafe_size,&__t5669t__unsafe_offset,&__t5669t__unsafe_align,__t5673t,&__t5674t__unsafe_ptr,&__t5674t__pos,&__t5674t__rows,&__t5674t__cols,&__t5674t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t5674t__unsafe_ptr;
  b__pos=__t5674t__pos;
  b__rows=__t5674t__rows;
  b__cols=__t5674t__cols;
  b__stride=__t5674t__stride;
  print__t380t(__t5675t);
  __t_errcode=mul__t4939t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t5677t__unsafe_ptr,&__t5677t__pos,&__t5677t__rows,&__t5677t__cols,&__t5677t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t5077t(__t5677t__unsafe_ptr,__t5677t__pos,__t5677t__rows,__t5677t__cols,__t5677t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5677t__unsafe_ptr,&__t5678t____t4942t____t4629t____t515t__);
  if(__t5678t____t4942t____t4629t____t515t__){
  free__t503t(&__t5677t__unsafe_ptr);
  }
  exists__t447t(__t5671t__unsafe_ptr,&__t5672t____t534t__);
  if(__t5672t____t534t__){
  free__t503t(&__t5671t__unsafe_ptr);
  }
  exists__t447t(__t5656t__unsafe_ptr,&__t5657t____t4887t____t1627t____t515t__);
  if(__t5657t____t4887t____t1627t____t515t__){
  free__t503t(&__t5656t__unsafe_ptr);
  }
  exists__t447t(__t5650t__unsafe_ptr,&__t5651t____t534t__);
  if(__t5651t____t534t__){
  free__t503t(&__t5650t__unsafe_ptr);
  }
  exists__t447t(__t5639t__unsafe_ptr,&__t5640t____t4832t____t1627t____t515t__);
  if(__t5640t____t4832t____t1627t____t515t__){
  free__t503t(&__t5639t__unsafe_ptr);
  }
  exists__t447t(__t5633t__unsafe_ptr,&__t5634t____t534t__);
  if(__t5634t____t534t__){
  free__t503t(&__t5633t__unsafe_ptr);
  }
  exists__t447t(__t5616t__unsafe_ptr,&__t5617t____t534t__);
  if(__t5617t____t534t__){
  free__t503t(&__t5616t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5601t();return 0;}