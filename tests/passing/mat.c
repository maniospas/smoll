#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t374t="";
const char* const __t4554t=" ]";
const char* const __t5054t=" ⎤";
const char* const __t5073t=" ⎦";
const char* const __t5065t=" ⎥";
const char* const __t4537t="[ ";
const char* const __t5652t="u*a";
const char* const __t5015t="⎡ ";
const char* const __t5034t="⎣ ";
const char* const __t5026t="⎢ ";
const char* const __t4551t="  ";
const char* const __t5635t="a*x";
const char* const __t382t="\n";
const char* const __t5674t="a*b";
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

static inline __attribute__((always_inline)) void new__t669t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t5606t(char** __t5679t, uint64_t* __t5680t, uint16_t* __t5681t, uint16_t* __t5682t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5679t=unsafe_ptr;
  *__t5680t=unsafe_size;
  *__t5681t=unsafe_offset;
  *__t5682t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5683t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5683t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5684t) {
  char* allocated=*__t5684t;
  if(allocated){
  free(allocated);
  }
  *__t5684t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5685t) {
  int value=0;
  *__t5685t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5686t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5686t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5687t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5687t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5688t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5688t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5689t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5689t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5690t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5690t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5691t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5691t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5692t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5692t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5693t) {
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
  *__t5693t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5694t, uint64_t* __t5695t, uint16_t* __t5696t, uint16_t* __t5697t, uint64_t size, char** __t5698t, uint64_t* __t5699t, uint16_t* __t5700t, uint16_t* __t5701t) {
  char* buffer__unsafe_ptr=*__t5694t;
  uint64_t buffer__unsafe_size=*__t5695t;
  uint16_t buffer__unsafe_offset=*__t5696t;
  uint16_t buffer__unsafe_align=*__t5697t;
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
  *__t5694t=buffer__unsafe_ptr;
  *__t5695t=buffer__unsafe_size;
  *__t5696t=buffer__unsafe_offset;
  *__t5697t=buffer__unsafe_align;
  *__t5698t=buffer__unsafe_ptr;
  *__t5699t=buffer__unsafe_size;
  *__t5700t=buffer__unsafe_offset;
  *__t5701t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5702t) {
  goto __t_return;
  __t_return:
  *__t5702t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t5703t) {
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
  *__t5703t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5704t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5704t=z;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5705t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5705t=z;
}

static inline __attribute__((always_inline)) void mat__t1585t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t5706t, uint64_t* __t5707t, uint64_t* __t5708t, uint64_t* __t5709t, uint64_t* __t5710t) {
  char* __t1587t__unsafe_ptr=0;
  uint64_t __t1587t__pos=0;
  uint64_t __t1587t__rows=0;
  uint64_t __t1587t__cols=0;
  uint64_t __t1587t__stride=0;
  __t1587t__unsafe_ptr=unsafe_ptr;
  __t1587t__pos=pos;
  __t1587t__rows=rows;
  __t1587t__cols=cols;
  __t1587t__stride=stride;
  goto __t_return;
  __t_return:
  *__t5706t=__t1587t__unsafe_ptr;
  *__t5707t=__t1587t__pos;
  *__t5708t=__t1587t__rows;
  *__t5709t=__t1587t__cols;
  *__t5710t=__t1587t__stride;
}

static inline __attribute__((always_inline)) int mat__t4652t(char** __t5711t, uint64_t* __t5712t, uint16_t* __t5713t, uint16_t* __t5714t, uint64_t* __t5715t, uint64_t rows, uint64_t cols, char** __t5716t, uint64_t* __t5717t, uint64_t* __t5718t, uint64_t* __t5719t, uint64_t* __t5720t) {
  char* FLOATS__buf__unsafe_ptr=*__t5711t;
  uint64_t FLOATS__buf__unsafe_size=*__t5712t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5713t;
  uint16_t FLOATS__buf__unsafe_align=*__t5714t;
  uint64_t FLOATS__pos=*__t5715t;
  uint64_t __t4653t__=0;
  uint64_t __t4654t=0;
  char __t4655t__=0;
  uint64_t __t4656t__=0;
  uint64_t __t4657t=0;
  char __t4658t__=0;
  uint64_t __t4659t__=0;
  uint64_t __t4660t__=0;
  uint64_t __t4661t__=0;
  char __t4662t__=0;
  uint64_t start=0;
  uint64_t __t4663t__=0;
  uint64_t __t4664t__=0;
  int __t4665t=0;
  uint64_t __t4666t=0;
  uint64_t __t4667t__=0;
  uint64_t __t4668t=0;
  uint64_t __t4669t__=0;
  char* __t4671t__unsafe_ptr=0;
  uint64_t __t4671t__pos=0;
  uint64_t __t4671t__rows=0;
  uint64_t __t4671t__cols=0;
  uint64_t __t4671t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t4653t__);
  __t4654t=8;
  neq__t144t(__t4653t__,__t4654t,&__t4655t__);
  if(__t4655t__){
  __t_errcode=39;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t4656t__);
  __t4657t=0;
  neq__t144t(__t4656t__,__t4657t,&__t4658t__);
  if(__t4658t__){
  __t_errcode=40;
  goto __t_failure;
  }
  mul__t199t(rows,cols,&__t4659t__);
  add__t175t(FLOATS__pos,__t4659t__,&__t4660t__);
  len__t643t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t4661t__);
  gt__t276t(__t4660t__,__t4661t__,&__t4662t__);
  if(__t4662t__){
  __t_errcode=41;
  goto __t_failure;
  }
  start=FLOATS__pos;
  mul__t199t(rows,cols,&__t4663t__);
  add__t175t(FLOATS__pos,__t4663t__,&__t4664t__);
  FLOATS__pos=__t4664t__;
  __t4666t=8;
  mul__t199t(__t4666t,start,&__t4667t__);
  __t4668t=8;
  mul__t199t(__t4668t,FLOATS__pos,&__t4669t__);
  zero__t504t(FLOATS__buf__unsafe_ptr,__t4667t__,__t4669t__);
  mat__t1585t(FLOATS__buf__unsafe_ptr,start,rows,cols,cols,&__t4671t__unsafe_ptr,&__t4671t__pos,&__t4671t__rows,&__t4671t__cols,&__t4671t__stride);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5711t=FLOATS__buf__unsafe_ptr;
  *__t5712t=FLOATS__buf__unsafe_size;
  *__t5713t=FLOATS__buf__unsafe_offset;
  *__t5714t=FLOATS__buf__unsafe_align;
  *__t5715t=FLOATS__pos;
  *__t5716t=__t4671t__unsafe_ptr;
  *__t5717t=__t4671t__pos;
  *__t5718t=__t4671t__rows;
  *__t5719t=__t4671t__cols;
  *__t5720t=__t4671t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

int mat__t4681t(char** __t5721t, uint64_t* __t5722t, uint16_t* __t5723t, uint16_t* __t5724t, uint64_t rows, char** __t5725t, uint64_t* __t5726t, uint64_t* __t5727t, uint64_t* __t5728t, uint64_t* __t5729t) {
  char* buf__unsafe_ptr=*__t5721t;
  uint64_t buf__unsafe_size=*__t5722t;
  uint16_t buf__unsafe_offset=*__t5723t;
  uint16_t buf__unsafe_align=*__t5724t;
  uint64_t __t4682t__=0;
  uint64_t __t4683t__=0;
  uint64_t cols=0;
  uint64_t __t4684t__=0;
  uint64_t __t4685t__=0;
  char __t4686t__=0;
  uint64_t __t4687t=0;
  uint64_t __t4688t=0;
  char* __t4689t__unsafe_ptr=0;
  uint64_t __t4689t__pos=0;
  uint64_t __t4689t__rows=0;
  uint64_t __t4689t__cols=0;
  uint64_t __t4689t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t643t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4682t__);
  __t_errcode=div__t225t(__t4682t__,rows,&__t4683t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t4683t__;
  mul__t199t(cols,rows,&__t4684t__);
  len__t643t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4685t__);
  neq__t144t(__t4684t__,__t4685t__,&__t4686t__);
  if(__t4686t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t4687t=0;
  __t4688t=__t4687t;
  __t_errcode=mat__t4652t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t4688t,rows,cols,&__t4689t__unsafe_ptr,&__t4689t__pos,&__t4689t__rows,&__t4689t__cols,&__t4689t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5721t=buf__unsafe_ptr;
  *__t5722t=buf__unsafe_size;
  *__t5723t=buf__unsafe_offset;
  *__t5724t=buf__unsafe_align;
  *__t5725t=__t4689t__unsafe_ptr;
  *__t5726t=__t4689t__pos;
  *__t5727t=__t4689t__rows;
  *__t5728t=__t4689t__cols;
  *__t5729t=__t4689t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5730t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5730t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5731t) {
  *__t5731t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5732t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5732t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t4780t(char** __t5733t, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t5734t) {
  char* m__unsafe_ptr=*__t5733t;
  char __t4781t__=0;
  char __t4782t__=0;
  uint64_t __t4783t=0;
  uint64_t __t4784t__=0;
  uint64_t __t4785t__=0;
  uint64_t __t4786t__=0;
  uint64_t __t4787t__=0;
  char* __t4788t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t4781t__);
  if(__t4781t__){
  __t_errcode=43;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t4782t__);
  if(__t4782t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t4783t=8;
  mul__t199t(i,m__stride,&__t4784t__);
  add__t175t(__t4784t__,j,&__t4785t__);
  add__t175t(m__pos,__t4785t__,&__t4786t__);
  mul__t199t(__t4783t,__t4786t__,&__t4787t__);
  add__t505t(m__unsafe_ptr,__t4787t__,&__t4788t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5733t=m__unsafe_ptr;
  *__t5734t=__t4788t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5626t(char** __t5735t, uint64_t* __t5736t, uint16_t* __t5737t, uint16_t* __t5738t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5735t=unsafe_ptr;
  *__t5736t=unsafe_size;
  *__t5737t=unsafe_offset;
  *__t5738t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t1582t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5739t, uint64_t* __t5740t, uint64_t* __t5741t) {
  char* __t1584t__unsafe_ptr=0;
  uint64_t __t1584t__pos=0;
  uint64_t __t1584t__length=0;
  __t1584t__unsafe_ptr=unsafe_ptr;
  __t1584t__pos=pos;
  __t1584t__length=length;
  goto __t_return;
  __t_return:
  *__t5739t=__t1584t__unsafe_ptr;
  *__t5740t=__t1584t__pos;
  *__t5741t=__t1584t__length;
}

static inline __attribute__((always_inline)) int vec__t1634t(char** __t5742t, uint64_t* __t5743t, uint16_t* __t5744t, uint16_t* __t5745t, char** __t5746t, uint64_t* __t5747t, uint64_t* __t5748t) {
  char* buf__unsafe_ptr=*__t5742t;
  uint64_t buf__unsafe_size=*__t5743t;
  uint16_t buf__unsafe_offset=*__t5744t;
  uint16_t buf__unsafe_align=*__t5745t;
  uint64_t __t1635t__=0;
  uint64_t __t1636t=0;
  char __t1637t__=0;
  uint64_t __t1638t__=0;
  uint64_t __t1639t=0;
  char __t1640t__=0;
  uint64_t __t1641t=0;
  uint64_t __t1642t__=0;
  char* __t1643t__unsafe_ptr=0;
  uint64_t __t1643t__pos=0;
  uint64_t __t1643t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(buf__unsafe_align,&__t1635t__);
  __t1636t=8;
  neq__t144t(__t1635t__,__t1636t,&__t1637t__);
  if(__t1637t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t1638t__);
  __t1639t=0;
  neq__t144t(__t1638t__,__t1639t,&__t1640t__);
  if(__t1640t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1641t=0;
  len__t643t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1642t__);
  vec__t1582t(buf__unsafe_ptr,__t1641t,__t1642t__,&__t1643t__unsafe_ptr,&__t1643t__pos,&__t1643t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5742t=buf__unsafe_ptr;
  *__t5743t=buf__unsafe_size;
  *__t5744t=buf__unsafe_offset;
  *__t5745t=buf__unsafe_align;
  *__t5746t=__t1643t__unsafe_ptr;
  *__t5747t=__t1643t__pos;
  *__t5748t=__t1643t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t5749t, const char** __t5750t) {
  goto __t_return;
  __t_return:
  *__t5749t=value;
  *__t5750t=__t374t;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1592t(char** __t5751t, uint64_t* __t5752t, uint16_t* __t5753t, uint16_t* __t5754t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5751t=unsafe_ptr;
  *__t5752t=unsafe_size;
  *__t5753t=unsafe_offset;
  *__t5754t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t513t(char** __t5755t, uint64_t* __t5756t, uint16_t* __t5757t, uint16_t* __t5758t, uint64_t size, char** __t5759t, uint64_t* __t5760t, uint16_t* __t5761t, uint16_t* __t5762t) {
  char* buffer__unsafe_ptr=*__t5755t;
  uint64_t buffer__unsafe_size=*__t5756t;
  uint16_t buffer__unsafe_offset=*__t5757t;
  uint16_t buffer__unsafe_align=*__t5758t;
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
  *__t5755t=buffer__unsafe_ptr;
  *__t5756t=buffer__unsafe_size;
  *__t5757t=buffer__unsafe_offset;
  *__t5758t=buffer__unsafe_align;
  *__t5759t=buffer__unsafe_ptr;
  *__t5760t=buffer__unsafe_size;
  *__t5761t=buffer__unsafe_offset;
  *__t5762t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t1622t(uint64_t length, char** __t5763t, uint64_t* __t5764t, uint64_t* __t5765t) {
  char* __t1623t__unsafe_ptr=0;
  uint64_t __t1623t__unsafe_size=0;
  uint16_t __t1623t__unsafe_offset=0;
  uint16_t __t1623t__unsafe_align=0;
  char* __t1625t__unsafe_ptr=0;
  uint64_t __t1625t__unsafe_size=0;
  uint16_t __t1625t__unsafe_offset=0;
  uint16_t __t1625t__unsafe_align=0;
  char __t1626t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t1627t=0;
  uint64_t __t1628t=0;
  uint64_t __t1629t=0;
  uint64_t __t1630t__=0;
  uint64_t __t1632t=0;
  char* __t1633t__unsafe_ptr=0;
  uint64_t __t1633t__pos=0;
  uint64_t __t1633t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1592t(&__t1623t__unsafe_ptr,&__t1623t__unsafe_size,&__t1623t__unsafe_offset,&__t1623t__unsafe_align);
  __t_errcode=alloc__t513t(&__t1623t__unsafe_ptr,&__t1623t__unsafe_size,&__t1623t__unsafe_offset,&__t1623t__unsafe_align,length,&__t1625t__unsafe_ptr,&__t1625t__unsafe_size,&__t1625t__unsafe_offset,&__t1625t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1628t=0;
  __t1629t=8;
  mul__t199t(__t1629t,length,&__t1630t__);
  zero__t504t(__t1625t__unsafe_ptr,__t1628t,__t1630t__);
  __t1632t=0;
  vec__t1582t(__t1625t__unsafe_ptr,__t1632t,length,&__t1633t__unsafe_ptr,&__t1633t__pos,&__t1633t__length);
  __t1633t__unsafe_ptr=__t1625t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t447t(__t1633t__unsafe_ptr,&__t1626t____t515t__);
  if(__t1626t____t515t__){
  free__t503t(&__t1633t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5763t=__t1633t__unsafe_ptr;
  *__t5764t=__t1633t__pos;
  *__t5765t=__t1633t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5766t, uint64_t* __t5767t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5766t=from;
  *__t5767t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5768t, uint64_t* __t5769t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5768t=__t473t__from;
  *__t5769t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t5770t, uint64_t r__to, uint64_t* __t5771t) {
  uint64_t r__from=*__t5770t;
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
  *__t5770t=r__from;
  *__t5771t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t4789t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t5772t) {
  char __t4790t__=0;
  char __t4791t__=0;
  uint64_t __t4792t=0;
  uint64_t __t4793t__=0;
  uint64_t __t4794t__=0;
  uint64_t __t4795t__=0;
  uint64_t __t4796t__=0;
  char* __t4797t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t4790t__);
  if(__t4790t__){
  __t_errcode=43;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t4791t__);
  if(__t4791t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t4792t=8;
  mul__t199t(i,m__stride,&__t4793t__);
  add__t175t(__t4793t__,j,&__t4794t__);
  add__t175t(m__pos,__t4794t__,&__t4795t__);
  mul__t199t(__t4792t,__t4795t__,&__t4796t__);
  add__t505t(m__unsafe_ptr,__t4796t__,&__t4797t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5772t=__t4797t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1733t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5773t) {
  char __t1734t__=0;
  uint64_t __t1735t=0;
  uint64_t __t1736t__=0;
  uint64_t __t1737t__=0;
  char* __t1738t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1734t__);
  if(__t1734t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1735t=8;
  add__t175t(i,v__pos,&__t1736t__);
  mul__t199t(__t1735t,__t1736t__,&__t1737t__);
  add__t505t(v__unsafe_ptr,__t1737t__,&__t1738t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5773t=__t1738t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5774t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5774t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5775t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5775t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5776t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5776t=z;
}

static inline __attribute__((always_inline)) int mutget__t1727t(char** __t5777t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5778t) {
  char* v__unsafe_ptr=*__t5777t;
  char __t1728t__=0;
  uint64_t __t1729t=0;
  uint64_t __t1730t__=0;
  uint64_t __t1731t__=0;
  char* __t1732t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1728t__);
  if(__t1728t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1729t=8;
  add__t175t(i,v__pos,&__t1730t__);
  mul__t199t(__t1729t,__t1730t__,&__t1731t__);
  add__t505t(v__unsafe_ptr,__t1731t__,&__t1732t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5777t=v__unsafe_ptr;
  *__t5778t=__t1732t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t4828t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5779t, uint64_t* __t5780t, uint64_t* __t5781t) {
  char __t4829t__=0;
  char* __t4830t__unsafe_ptr=0;
  uint64_t __t4830t__pos=0;
  uint64_t __t4830t__length=0;
  char __t4831t____t1626t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4832t__from=0;
  uint64_t __t4832t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t4833t=0;
  uint64_t __t4834t__=0;
  uint64_t i=0;
  double __t4835t=0;
  double __t4836t=0;
  double acc=0;
  uint64_t __t4837t__from=0;
  uint64_t __t4837t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t4838t=0;
  uint64_t __t4839t__=0;
  uint64_t j=0;
  char* __t4840t__=0;
  double __t4841t__value=0;
  char* __t4842t__=0;
  double __t4843t__value=0;
  double __t4844t__=0;
  double __t4845t__=0;
  char* __t4846t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t4829t__);
  if(__t4829t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=vec__t1622t(m__rows,&__t4830t__unsafe_ptr,&__t4830t__pos,&__t4830t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4830t__unsafe_ptr;
  result__pos=__t4830t__pos;
  result__length=__t4830t__length;
  range__t471t(m__rows,&__t4832t__from,&__t4832t__to);
  it_i__from=__t4832t__from;
  it_i__to=__t4832t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t4834t__);
  __t4833t=__t_complain;
  i=__t4834t__;
  __t4833t=__t4833t==0;
  if(!__t4833t){
  break;
  }
  __t4835t=0.0;
  __t4836t=__t4835t;
  acc=__t4836t;
  range__t471t(m__cols,&__t4837t__from,&__t4837t__to);
  it_j__from=__t4837t__from;
  it_j__to=__t4837t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t4839t__);
  __t4838t=__t_complain;
  j=__t4839t__;
  __t4838t=__t4838t==0;
  if(!__t4838t){
  break;
  }
  __t_errcode=get__t4789t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t4840t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4840t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4841t__value,__t4840t__,8);
  __t_errcode=get__t1733t(v__unsafe_ptr,v__pos,v__length,j,&__t4842t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4842t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4843t__value,__t4842t__,8);
  mul__t177t(__t4841t__value,__t4843t__value,&__t4844t__);
  add__t153t(acc,__t4844t__,&__t4845t__);
  acc=__t4845t__;
  }
  __t_errcode=mutget__t1727t(&result__unsafe_ptr,result__pos,result__length,i,&__t4846t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4846t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4846t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t4831t____t1626t____t515t__);
  if(__t4831t____t1626t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5779t=result__unsafe_ptr;
  *__t5780t=result__pos;
  *__t5781t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5782t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5782t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5783t) {
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
  *__t5783t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t375t(double value, double* __t5784t, const char** __t5785t) {
  goto __t_return;
  __t_return:
  *__t5784t=value;
  *__t5785t=__t374t;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t5786t) {
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
  *__t5786t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int print__t4556t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t4557t=0;
  const char* endl=0;
  const char* __t4558t__value=0;
  const char* __t4558t____t374t=0;
  uint64_t __t4560t=0;
  uint64_t __t4561t__from=0;
  uint64_t __t4561t__to=0;
  char __t4562t=0;
  uint64_t __t4563t__=0;
  uint64_t i=0;
  char* __t4564t__=0;
  double __t4565t__value=0;
  double __t4566t__value=0;
  const char* __t4566t____t374t=0;
  uint64_t __t4568t=0;
  uint64_t __t4569t__=0;
  char __t4570t__=0;
  const char* __t4571t__value=0;
  const char* __t4571t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  nn__t373t(__t4537t,&__t4558t__value,&__t4558t____t374t);
  print__t378t(__t4558t__value,__t4558t____t374t);
  range__t471t(v__length,&__t4561t__from,&__t4561t__to);
  __t4560t=0;
  while(1){
  __t_complain=get__t478t(__t4561t__from,__t4561t__to,__t4560t,&__t4563t__);
  __t4562t=__t_complain;
  i=__t4563t__;
  __t4562t=__t4562t==0;
  __t4560t=__t4560t+1;
  if(!__t4562t){
  break;
  }
  __t_errcode=get__t1733t(v__unsafe_ptr,v__pos,v__length,i,&__t4564t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4564t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4565t__value,__t4564t__,8);
  nn__t375t(__t4565t__value,&__t4566t__value,&__t4566t____t374t);
  print__t383t(__t4566t__value,__t4566t____t374t);
  __t4568t=1;
  __t_errcode=sub__t352t(v__length,__t4568t,&__t4569t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t4569t__,&__t4570t__);
  if(__t4570t__){
  nn__t373t(__t4551t,&__t4571t__value,&__t4571t____t374t);
  print__t378t(__t4571t__value,__t4571t____t374t);
  }
  }
  print__t378t(__t4554t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5644t(char** __t5787t, uint64_t* __t5788t, uint16_t* __t5789t, uint16_t* __t5790t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5787t=unsafe_ptr;
  *__t5788t=unsafe_size;
  *__t5789t=unsafe_offset;
  *__t5790t=unsafe_align;
}

static inline __attribute__((always_inline)) int mul__t4883t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t5791t, uint64_t* __t5792t, uint64_t* __t5793t) {
  char __t4884t__=0;
  char* __t4885t__unsafe_ptr=0;
  uint64_t __t4885t__pos=0;
  uint64_t __t4885t__length=0;
  char __t4886t____t1626t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4887t__from=0;
  uint64_t __t4887t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t4888t=0;
  uint64_t __t4889t__=0;
  uint64_t j=0;
  double __t4890t=0;
  double __t4891t=0;
  double acc=0;
  uint64_t __t4892t__from=0;
  uint64_t __t4892t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t4893t=0;
  uint64_t __t4894t__=0;
  uint64_t i=0;
  char* __t4895t__=0;
  double __t4896t__value=0;
  char* __t4897t__=0;
  double __t4898t__value=0;
  double __t4899t__=0;
  double __t4900t__=0;
  char* __t4901t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v__length,m__rows,&__t4884t__);
  if(__t4884t__){
  __t_errcode=46;
  goto __t_failure;
  }
  __t_errcode=vec__t1622t(m__cols,&__t4885t__unsafe_ptr,&__t4885t__pos,&__t4885t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4885t__unsafe_ptr;
  result__pos=__t4885t__pos;
  result__length=__t4885t__length;
  range__t471t(m__cols,&__t4887t__from,&__t4887t__to);
  it_j__from=__t4887t__from;
  it_j__to=__t4887t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t4889t__);
  __t4888t=__t_complain;
  j=__t4889t__;
  __t4888t=__t4888t==0;
  if(!__t4888t){
  break;
  }
  __t4890t=0.0;
  __t4891t=__t4890t;
  acc=__t4891t;
  range__t471t(m__rows,&__t4892t__from,&__t4892t__to);
  it_i__from=__t4892t__from;
  it_i__to=__t4892t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t4894t__);
  __t4893t=__t_complain;
  i=__t4894t__;
  __t4893t=__t4893t==0;
  if(!__t4893t){
  break;
  }
  __t_errcode=get__t1733t(v__unsafe_ptr,v__pos,v__length,i,&__t4895t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4895t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4896t__value,__t4895t__,8);
  __t_errcode=get__t4789t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t4897t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4897t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4898t__value,__t4897t__,8);
  mul__t177t(__t4896t__value,__t4898t__value,&__t4899t__);
  add__t153t(acc,__t4899t__,&__t4900t__);
  acc=__t4900t__;
  }
  __t_errcode=mutget__t1727t(&result__unsafe_ptr,result__pos,result__length,j,&__t4901t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4901t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4901t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t4886t____t1626t____t515t__);
  if(__t4886t____t1626t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5791t=result__unsafe_ptr;
  *__t5792t=result__pos;
  *__t5793t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5661t(char** __t5794t, uint64_t* __t5795t, uint16_t* __t5796t, uint16_t* __t5797t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5794t=unsafe_ptr;
  *__t5795t=unsafe_size;
  *__t5796t=unsafe_offset;
  *__t5797t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t4613t(char** __t5798t, uint64_t* __t5799t, uint16_t* __t5800t, uint16_t* __t5801t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5798t=unsafe_ptr;
  *__t5799t=unsafe_size;
  *__t5800t=unsafe_offset;
  *__t5801t=unsafe_align;
}

int mat__t4623t(uint64_t rows, uint64_t cols, char** __t5802t, uint64_t* __t5803t, uint64_t* __t5804t, uint64_t* __t5805t, uint64_t* __t5806t) {
  char* __t4624t__unsafe_ptr=0;
  uint64_t __t4624t__unsafe_size=0;
  uint16_t __t4624t__unsafe_offset=0;
  uint16_t __t4624t__unsafe_align=0;
  uint64_t __t4625t__=0;
  char* __t4627t__unsafe_ptr=0;
  uint64_t __t4627t__unsafe_size=0;
  uint16_t __t4627t__unsafe_offset=0;
  uint16_t __t4627t__unsafe_align=0;
  char __t4628t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t4629t=0;
  uint64_t __t4630t=0;
  uint64_t __t4631t=0;
  uint64_t __t4632t__=0;
  uint64_t __t4633t__=0;
  uint64_t __t4635t=0;
  char* __t4636t__unsafe_ptr=0;
  uint64_t __t4636t__pos=0;
  uint64_t __t4636t__rows=0;
  uint64_t __t4636t__cols=0;
  uint64_t __t4636t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t4613t(&__t4624t__unsafe_ptr,&__t4624t__unsafe_size,&__t4624t__unsafe_offset,&__t4624t__unsafe_align);
  mul__t199t(rows,cols,&__t4625t__);
  __t_errcode=alloc__t513t(&__t4624t__unsafe_ptr,&__t4624t__unsafe_size,&__t4624t__unsafe_offset,&__t4624t__unsafe_align,__t4625t__,&__t4627t__unsafe_ptr,&__t4627t__unsafe_size,&__t4627t__unsafe_offset,&__t4627t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t4627t__unsafe_ptr;
  buf__unsafe_size=__t4627t__unsafe_size;
  buf__unsafe_offset=__t4627t__unsafe_offset;
  buf__unsafe_align=__t4627t__unsafe_align;
  __t4630t=0;
  __t4631t=8;
  len__t643t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4632t__);
  mul__t199t(__t4631t,__t4632t__,&__t4633t__);
  zero__t504t(buf__unsafe_ptr,__t4630t,__t4633t__);
  __t4635t=0;
  mat__t1585t(buf__unsafe_ptr,__t4635t,rows,cols,cols,&__t4636t__unsafe_ptr,&__t4636t__pos,&__t4636t__rows,&__t4636t__cols,&__t4636t__stride);
  goto __t_return;
  
  __t_failure:exists__t447t(__t4636t__unsafe_ptr,&__t4628t____t515t__);
  if(__t4628t____t515t__){
  free__t503t(&__t4636t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5802t=__t4636t__unsafe_ptr;
  *__t5803t=__t4636t__pos;
  *__t5804t=__t4636t__rows;
  *__t5805t=__t4636t__cols;
  *__t5806t=__t4636t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t4938t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t5807t, uint64_t* __t5808t, uint64_t* __t5809t, uint64_t* __t5810t, uint64_t* __t5811t) {
  char __t4939t__=0;
  char* __t4940t__unsafe_ptr=0;
  uint64_t __t4940t__pos=0;
  uint64_t __t4940t__rows=0;
  uint64_t __t4940t__cols=0;
  uint64_t __t4940t__stride=0;
  char __t4941t____t4628t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t4942t__from=0;
  uint64_t __t4942t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t4943t=0;
  uint64_t __t4944t__=0;
  uint64_t i=0;
  uint64_t __t4945t__from=0;
  uint64_t __t4945t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t4946t=0;
  uint64_t __t4947t__=0;
  uint64_t j=0;
  double __t4948t=0;
  double __t4949t=0;
  double acc=0;
  uint64_t __t4950t__from=0;
  uint64_t __t4950t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t4951t=0;
  uint64_t __t4952t__=0;
  uint64_t k=0;
  char* __t4953t__=0;
  double __t4954t__value=0;
  char* __t4955t__=0;
  double __t4956t__value=0;
  double __t4957t__=0;
  double __t4958t__=0;
  char* __t4959t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m1__cols,m2__rows,&__t4939t__);
  if(__t4939t__){
  __t_errcode=47;
  goto __t_failure;
  }
  __t_errcode=mat__t4623t(m1__rows,m2__cols,&__t4940t__unsafe_ptr,&__t4940t__pos,&__t4940t__rows,&__t4940t__cols,&__t4940t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4940t__unsafe_ptr;
  result__pos=__t4940t__pos;
  result__rows=__t4940t__rows;
  result__cols=__t4940t__cols;
  result__stride=__t4940t__stride;
  range__t471t(m1__rows,&__t4942t__from,&__t4942t__to);
  it_i__from=__t4942t__from;
  it_i__to=__t4942t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t4944t__);
  __t4943t=__t_complain;
  i=__t4944t__;
  __t4943t=__t4943t==0;
  if(!__t4943t){
  break;
  }
  range__t471t(m2__cols,&__t4945t__from,&__t4945t__to);
  it_j__from=__t4945t__from;
  it_j__to=__t4945t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t4947t__);
  __t4946t=__t_complain;
  j=__t4947t__;
  __t4946t=__t4946t==0;
  if(!__t4946t){
  break;
  }
  __t4948t=0.0;
  __t4949t=__t4948t;
  acc=__t4949t;
  range__t471t(m1__cols,&__t4950t__from,&__t4950t__to);
  it_k__from=__t4950t__from;
  it_k__to=__t4950t__to;
  while(1){
  __t_complain=next__t474t(&it_k__from,it_k__to,&__t4952t__);
  __t4951t=__t_complain;
  k=__t4952t__;
  __t4951t=__t4951t==0;
  if(!__t4951t){
  break;
  }
  __t_errcode=get__t4789t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t4953t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4953t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4954t__value,__t4953t__,8);
  __t_errcode=get__t4789t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t4955t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4955t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4956t__value,__t4955t__,8);
  mul__t177t(__t4954t__value,__t4956t__value,&__t4957t__);
  add__t153t(acc,__t4957t__,&__t4958t__);
  acc=__t4958t__;
  }
  __t_errcode=mutget__t4780t(&result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t4959t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4959t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4959t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t4941t____t4628t____t515t__);
  if(__t4941t____t4628t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5807t=result__unsafe_ptr;
  *__t5808t=result__pos;
  *__t5809t=result__rows;
  *__t5810t=result__cols;
  *__t5811t=result__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t5076t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride) {
  int __t5077t=0;
  const char* endl=0;
  uint64_t __t5078t__from=0;
  uint64_t __t5078t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t5079t=0;
  uint64_t __t5080t__=0;
  uint64_t i=0;
  uint64_t __t5081t=0;
  char __t5082t__=0;
  uint64_t __t5084t=0;
  char __t5085t__=0;
  uint64_t __t5086t=0;
  char __t5087t__=0;
  char __t5088t=0;
  uint64_t __t5090t=0;
  char __t5091t__=0;
  uint64_t __t5092t=0;
  char __t5093t__=0;
  uint64_t __t5094t=0;
  uint64_t __t5095t__=0;
  char __t5096t__=0;
  char __t5097t=0;
  char __t5098t=0;
  uint64_t __t5100t=0;
  char __t5101t__=0;
  uint64_t __t5102t=0;
  uint64_t __t5103t__=0;
  char __t5104t__=0;
  char __t5105t=0;
  uint64_t __t5107t__from=0;
  uint64_t __t5107t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t5108t=0;
  uint64_t __t5109t__=0;
  uint64_t j=0;
  char* __t5110t__=0;
  double __t5111t__value=0;
  uint64_t __t5113t=0;
  uint64_t __t5114t__=0;
  char __t5115t__=0;
  uint64_t __t5117t=0;
  char __t5118t__=0;
  uint64_t __t5120t=0;
  char __t5121t__=0;
  uint64_t __t5122t=0;
  char __t5123t__=0;
  char __t5124t=0;
  uint64_t __t5126t=0;
  char __t5127t__=0;
  uint64_t __t5128t=0;
  char __t5129t__=0;
  uint64_t __t5130t=0;
  uint64_t __t5131t__=0;
  char __t5132t__=0;
  char __t5133t=0;
  char __t5134t=0;
  uint64_t __t5136t=0;
  char __t5137t__=0;
  uint64_t __t5138t=0;
  uint64_t __t5139t__=0;
  char __t5140t__=0;
  char __t5141t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  range__t471t(m__rows,&__t5078t__from,&__t5078t__to);
  it_i__from=__t5078t__from;
  it_i__to=__t5078t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t5080t__);
  __t5079t=__t_complain;
  i=__t5080t__;
  __t5079t=__t5079t==0;
  if(!__t5079t){
  break;
  }
  __t5081t=1;
  eq__t120t(m__rows,__t5081t,&__t5082t__);
  if(__t5082t__){
  print__t378t(__t4537t,__t374t);
  }
  __t5084t=1;
  gt__t276t(m__rows,__t5084t,&__t5085t__);
  if(__t5085t__){
  __t5086t=0;
  eq__t120t(i,__t5086t,&__t5087t__);
  __t5088t=__t5087t__;
  }
  {
  __t5088t=0;
  }
  if(__t5088t){
  print__t378t(__t5015t,__t374t);
  }
  __t5090t=1;
  gt__t276t(m__rows,__t5090t,&__t5091t__);
  if(__t5091t__){
  __t5092t=0;
  gt__t276t(i,__t5092t,&__t5093t__);
  if(__t5093t__){
  __t5094t=1;
  __t_errcode=sub__t352t(m__rows,__t5094t,&__t5095t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5095t__,&__t5096t__);
  __t5097t=__t5096t__;
  }
  {
  __t5097t=0;
  }
  __t5098t=__t5097t;
  }
  {
  __t5098t=0;
  }
  if(__t5098t){
  print__t378t(__t5026t,__t374t);
  }
  __t5100t=1;
  gt__t276t(m__rows,__t5100t,&__t5101t__);
  if(__t5101t__){
  __t5102t=1;
  __t_errcode=sub__t352t(m__rows,__t5102t,&__t5103t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t5103t__,&__t5104t__);
  __t5105t=__t5104t__;
  }
  {
  __t5105t=0;
  }
  if(__t5105t){
  print__t378t(__t5034t,__t374t);
  }
  range__t471t(m__cols,&__t5107t__from,&__t5107t__to);
  it_j__from=__t5107t__from;
  it_j__to=__t5107t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t5109t__);
  __t5108t=__t_complain;
  j=__t5109t__;
  __t5108t=__t5108t==0;
  if(!__t5108t){
  break;
  }
  __t_errcode=get__t4789t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t5110t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5110t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5111t__value,__t5110t__,8);
  print__t383t(__t5111t__value,__t374t);
  __t5113t=1;
  __t_errcode=sub__t352t(m__cols,__t5113t,&__t5114t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(j,__t5114t__,&__t5115t__);
  if(__t5115t__){
  print__t378t(__t4551t,__t374t);
  }
  }
  __t5117t=1;
  eq__t120t(m__rows,__t5117t,&__t5118t__);
  if(__t5118t__){
  print__t378t(__t4554t,__t374t);
  }
  __t5120t=1;
  gt__t276t(m__rows,__t5120t,&__t5121t__);
  if(__t5121t__){
  __t5122t=0;
  eq__t120t(i,__t5122t,&__t5123t__);
  __t5124t=__t5123t__;
  }
  {
  __t5124t=0;
  }
  if(__t5124t){
  print__t378t(__t5054t,__t374t);
  }
  __t5126t=1;
  gt__t276t(m__rows,__t5126t,&__t5127t__);
  if(__t5127t__){
  __t5128t=0;
  gt__t276t(i,__t5128t,&__t5129t__);
  if(__t5129t__){
  __t5130t=1;
  __t_errcode=sub__t352t(m__rows,__t5130t,&__t5131t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5131t__,&__t5132t__);
  __t5133t=__t5132t__;
  }
  {
  __t5133t=0;
  }
  __t5134t=__t5133t;
  }
  {
  __t5134t=0;
  }
  if(__t5134t){
  print__t378t(__t5065t,__t374t);
  }
  __t5136t=1;
  gt__t276t(m__rows,__t5136t,&__t5137t__);
  if(__t5137t__){
  __t5138t=1;
  __t_errcode=sub__t352t(m__rows,__t5138t,&__t5139t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t5139t__,&__t5140t__);
  __t5141t=__t5140t__;
  }
  {
  __t5141t=0;
  }
  if(__t5141t){
  print__t378t(__t5073t,__t374t);
  }
  print__t378t(__t374t,endl);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5600t() {
  double __t5603t=0;
  double __t5608t=0;
  double __t5609t=0;
  double __t5610t=0;
  double __t5611t=0;
  double __t5612t=0;
  char* __t5613t__unsafe_ptr=0;
  uint64_t __t5613t__unsafe_size=0;
  uint16_t __t5613t__unsafe_offset=0;
  uint16_t __t5613t__unsafe_align=0;
  uint64_t __t5614t=0;
  char* __t5615t__unsafe_ptr=0;
  uint64_t __t5615t__unsafe_size=0;
  uint16_t __t5615t__unsafe_offset=0;
  uint16_t __t5615t__unsafe_align=0;
  char __t5616t____t534t__=0;
  uint64_t __t5617t=0;
  char* __t5618t__unsafe_ptr=0;
  uint64_t __t5618t__pos=0;
  uint64_t __t5618t__rows=0;
  uint64_t __t5618t__cols=0;
  uint64_t __t5618t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  uint64_t __t5619t=0;
  uint64_t __t5620t=0;
  char* __t5621t__=0;
  double __t5622t=0;
  double __t5623t=0;
  double __t5628t=0;
  double __t5629t=0;
  char* __t5630t__unsafe_ptr=0;
  uint64_t __t5630t__unsafe_size=0;
  uint16_t __t5630t__unsafe_offset=0;
  uint16_t __t5630t__unsafe_align=0;
  uint64_t __t5631t=0;
  char* __t5632t__unsafe_ptr=0;
  uint64_t __t5632t__unsafe_size=0;
  uint16_t __t5632t__unsafe_offset=0;
  uint16_t __t5632t__unsafe_align=0;
  char __t5633t____t534t__=0;
  char* __t5634t__unsafe_ptr=0;
  uint64_t __t5634t__pos=0;
  uint64_t __t5634t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t5636t__value=0;
  const char* __t5636t____t374t=0;
  char* __t5638t__unsafe_ptr=0;
  uint64_t __t5638t__pos=0;
  uint64_t __t5638t__length=0;
  char __t5639t____t4831t____t1626t____t515t__=0;
  double __t5641t=0;
  double __t5646t=0;
  char* __t5647t__unsafe_ptr=0;
  uint64_t __t5647t__unsafe_size=0;
  uint16_t __t5647t__unsafe_offset=0;
  uint16_t __t5647t__unsafe_align=0;
  uint64_t __t5648t=0;
  char* __t5649t__unsafe_ptr=0;
  uint64_t __t5649t__unsafe_size=0;
  uint16_t __t5649t__unsafe_offset=0;
  uint16_t __t5649t__unsafe_align=0;
  char __t5650t____t534t__=0;
  char* __t5651t__unsafe_ptr=0;
  uint64_t __t5651t__pos=0;
  uint64_t __t5651t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t5653t__value=0;
  const char* __t5653t____t374t=0;
  char* __t5655t__unsafe_ptr=0;
  uint64_t __t5655t__pos=0;
  uint64_t __t5655t__length=0;
  char __t5656t____t4886t____t1626t____t515t__=0;
  double __t5658t=0;
  double __t5663t=0;
  double __t5664t=0;
  double __t5665t=0;
  double __t5666t=0;
  double __t5667t=0;
  char* __t5668t__unsafe_ptr=0;
  uint64_t __t5668t__unsafe_size=0;
  uint16_t __t5668t__unsafe_offset=0;
  uint16_t __t5668t__unsafe_align=0;
  uint64_t __t5669t=0;
  char* __t5670t__unsafe_ptr=0;
  uint64_t __t5670t__unsafe_size=0;
  uint16_t __t5670t__unsafe_offset=0;
  uint16_t __t5670t__unsafe_align=0;
  char __t5671t____t534t__=0;
  uint64_t __t5672t=0;
  char* __t5673t__unsafe_ptr=0;
  uint64_t __t5673t__pos=0;
  uint64_t __t5673t__rows=0;
  uint64_t __t5673t__cols=0;
  uint64_t __t5673t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t5676t__unsafe_ptr=0;
  uint64_t __t5676t__pos=0;
  uint64_t __t5676t__rows=0;
  uint64_t __t5676t__cols=0;
  uint64_t __t5676t__stride=0;
  char __t5677t____t4941t____t4628t____t515t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  new__t669t();
  __t5603t=1.0;
  __t5608t=0.0;
  __t5609t=2.0;
  __t5610t=0.0;
  __t5611t=3.0;
  __t5612t=1.0;
  float____buffer__t5606t(&__t5613t__unsafe_ptr,&__t5613t__unsafe_size,&__t5613t__unsafe_offset,&__t5613t__unsafe_align);
  __t5614t=6;
  __t_errcode=alloc__t532t(&__t5613t__unsafe_ptr,&__t5613t__unsafe_size,&__t5613t__unsafe_offset,&__t5613t__unsafe_align,__t5614t,&__t5615t__unsafe_ptr,&__t5615t__unsafe_size,&__t5615t__unsafe_offset,&__t5615t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5613t__unsafe_ptr,&__t5603t,8);
  memcpy(__t5613t__unsafe_ptr+8,&__t5608t,8);
  memcpy(__t5613t__unsafe_ptr+16,&__t5609t,8);
  memcpy(__t5613t__unsafe_ptr+24,&__t5610t,8);
  memcpy(__t5613t__unsafe_ptr+32,&__t5611t,8);
  memcpy(__t5613t__unsafe_ptr+40,&__t5612t,8);
  __t5617t=2;
  __t_errcode=mat__t4681t(&__t5613t__unsafe_ptr,&__t5613t__unsafe_size,&__t5613t__unsafe_offset,&__t5613t__unsafe_align,__t5617t,&__t5618t__unsafe_ptr,&__t5618t__pos,&__t5618t__rows,&__t5618t__cols,&__t5618t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t5618t__unsafe_ptr;
  a__pos=__t5618t__pos;
  a__rows=__t5618t__rows;
  a__cols=__t5618t__cols;
  a__stride=__t5618t__stride;
  __t5619t=0;
  __t5620t=0;
  __t_errcode=mutget__t4780t(&a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t5619t,__t5620t,&__t5621t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5622t=1.0;
  if(!__t5621t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5621t__,&__t5622t,8);
  __t5623t=1.0;
  __t5628t=2.0;
  __t5629t=3.0;
  float____buffer__t5626t(&__t5630t__unsafe_ptr,&__t5630t__unsafe_size,&__t5630t__unsafe_offset,&__t5630t__unsafe_align);
  __t5631t=3;
  __t_errcode=alloc__t532t(&__t5630t__unsafe_ptr,&__t5630t__unsafe_size,&__t5630t__unsafe_offset,&__t5630t__unsafe_align,__t5631t,&__t5632t__unsafe_ptr,&__t5632t__unsafe_size,&__t5632t__unsafe_offset,&__t5632t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5630t__unsafe_ptr,&__t5623t,8);
  memcpy(__t5630t__unsafe_ptr+8,&__t5628t,8);
  memcpy(__t5630t__unsafe_ptr+16,&__t5629t,8);
  __t_errcode=vec__t1634t(&__t5630t__unsafe_ptr,&__t5630t__unsafe_size,&__t5630t__unsafe_offset,&__t5630t__unsafe_align,&__t5634t__unsafe_ptr,&__t5634t__pos,&__t5634t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t5634t__unsafe_ptr;
  x__pos=__t5634t__pos;
  x__length=__t5634t__length;
  nn__t373t(__t5635t,&__t5636t__value,&__t5636t____t374t);
  print__t378t(__t5636t__value,__t5636t____t374t);
  __t_errcode=mul__t4828t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t5638t__unsafe_ptr,&__t5638t__pos,&__t5638t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t4556t(__t5638t__unsafe_ptr,__t5638t__pos,__t5638t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5641t=1.0;
  __t5646t=2.0;
  float____buffer__t5644t(&__t5647t__unsafe_ptr,&__t5647t__unsafe_size,&__t5647t__unsafe_offset,&__t5647t__unsafe_align);
  __t5648t=2;
  __t_errcode=alloc__t532t(&__t5647t__unsafe_ptr,&__t5647t__unsafe_size,&__t5647t__unsafe_offset,&__t5647t__unsafe_align,__t5648t,&__t5649t__unsafe_ptr,&__t5649t__unsafe_size,&__t5649t__unsafe_offset,&__t5649t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5647t__unsafe_ptr,&__t5641t,8);
  memcpy(__t5647t__unsafe_ptr+8,&__t5646t,8);
  __t_errcode=vec__t1634t(&__t5647t__unsafe_ptr,&__t5647t__unsafe_size,&__t5647t__unsafe_offset,&__t5647t__unsafe_align,&__t5651t__unsafe_ptr,&__t5651t__pos,&__t5651t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t5651t__unsafe_ptr;
  u__pos=__t5651t__pos;
  u__length=__t5651t__length;
  nn__t373t(__t5652t,&__t5653t__value,&__t5653t____t374t);
  print__t378t(__t5653t__value,__t5653t____t374t);
  __t_errcode=mul__t4883t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t5655t__unsafe_ptr,&__t5655t__pos,&__t5655t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t4556t(__t5655t__unsafe_ptr,__t5655t__pos,__t5655t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5658t=1.0;
  __t5663t=2.0;
  __t5664t=3.0;
  __t5665t=4.0;
  __t5666t=5.0;
  __t5667t=6.0;
  float____buffer__t5661t(&__t5668t__unsafe_ptr,&__t5668t__unsafe_size,&__t5668t__unsafe_offset,&__t5668t__unsafe_align);
  __t5669t=6;
  __t_errcode=alloc__t532t(&__t5668t__unsafe_ptr,&__t5668t__unsafe_size,&__t5668t__unsafe_offset,&__t5668t__unsafe_align,__t5669t,&__t5670t__unsafe_ptr,&__t5670t__unsafe_size,&__t5670t__unsafe_offset,&__t5670t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5668t__unsafe_ptr,&__t5658t,8);
  memcpy(__t5668t__unsafe_ptr+8,&__t5663t,8);
  memcpy(__t5668t__unsafe_ptr+16,&__t5664t,8);
  memcpy(__t5668t__unsafe_ptr+24,&__t5665t,8);
  memcpy(__t5668t__unsafe_ptr+32,&__t5666t,8);
  memcpy(__t5668t__unsafe_ptr+40,&__t5667t,8);
  __t5672t=3;
  __t_errcode=mat__t4681t(&__t5668t__unsafe_ptr,&__t5668t__unsafe_size,&__t5668t__unsafe_offset,&__t5668t__unsafe_align,__t5672t,&__t5673t__unsafe_ptr,&__t5673t__pos,&__t5673t__rows,&__t5673t__cols,&__t5673t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t5673t__unsafe_ptr;
  b__pos=__t5673t__pos;
  b__rows=__t5673t__rows;
  b__cols=__t5673t__cols;
  b__stride=__t5673t__stride;
  print__t380t(__t5674t);
  __t_errcode=mul__t4938t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t5676t__unsafe_ptr,&__t5676t__pos,&__t5676t__rows,&__t5676t__cols,&__t5676t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t5076t(__t5676t__unsafe_ptr,__t5676t__pos,__t5676t__rows,__t5676t__cols,__t5676t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5676t__unsafe_ptr,&__t5677t____t4941t____t4628t____t515t__);
  if(__t5677t____t4941t____t4628t____t515t__){
  free__t503t(&__t5676t__unsafe_ptr);
  }
  exists__t447t(__t5670t__unsafe_ptr,&__t5671t____t534t__);
  if(__t5671t____t534t__){
  free__t503t(&__t5670t__unsafe_ptr);
  }
  exists__t447t(__t5655t__unsafe_ptr,&__t5656t____t4886t____t1626t____t515t__);
  if(__t5656t____t4886t____t1626t____t515t__){
  free__t503t(&__t5655t__unsafe_ptr);
  }
  exists__t447t(__t5649t__unsafe_ptr,&__t5650t____t534t__);
  if(__t5650t____t534t__){
  free__t503t(&__t5649t__unsafe_ptr);
  }
  exists__t447t(__t5638t__unsafe_ptr,&__t5639t____t4831t____t1626t____t515t__);
  if(__t5639t____t4831t____t1626t____t515t__){
  free__t503t(&__t5638t__unsafe_ptr);
  }
  exists__t447t(__t5632t__unsafe_ptr,&__t5633t____t534t__);
  if(__t5633t____t534t__){
  free__t503t(&__t5632t__unsafe_ptr);
  }
  exists__t447t(__t5615t__unsafe_ptr,&__t5616t____t534t__);
  if(__t5616t____t534t__){
  free__t503t(&__t5615t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5600t();return 0;}