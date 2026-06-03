#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t5051t=" ⎤";
const char* const __t5070t=" ⎦";
const char* const __t382t="\n";
const char* const __t374t="";
const char* const __t5031t="⎣ ";
const char* const __t5632t="a*x";
const char* const __t5062t=" ⎥";
const char* const __t5012t="⎡ ";
const char* const __t5671t="a*b";
const char* const __t4548t="  ";
const char* const __t4551t=" ]";
const char* const __t5649t="u*a";
const char* const __t5023t="⎢ ";
const char* const __t4534t="[ ";
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

static inline __attribute__((always_inline)) void float____buffer__t5603t(char** __t5676t, uint64_t* __t5677t, uint16_t* __t5678t, uint16_t* __t5679t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5676t=unsafe_ptr;
  *__t5677t=unsafe_size;
  *__t5678t=unsafe_offset;
  *__t5679t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5680t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5680t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5681t) {
  char* allocated=*__t5681t;
  if(allocated){
  free(allocated);
  }
  *__t5681t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5682t) {
  int value=0;
  *__t5682t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5683t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5683t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5684t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5684t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5685t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5685t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5686t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5686t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5687t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5687t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5688t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5688t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5689t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5689t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5690t) {
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
  *__t5690t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5691t, uint64_t* __t5692t, uint16_t* __t5693t, uint16_t* __t5694t, uint64_t size, char** __t5695t, uint64_t* __t5696t, uint16_t* __t5697t, uint16_t* __t5698t) {
  char* buffer__unsafe_ptr=*__t5691t;
  uint64_t buffer__unsafe_size=*__t5692t;
  uint16_t buffer__unsafe_offset=*__t5693t;
  uint16_t buffer__unsafe_align=*__t5694t;
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
  *__t5691t=buffer__unsafe_ptr;
  *__t5692t=buffer__unsafe_size;
  *__t5693t=buffer__unsafe_offset;
  *__t5694t=buffer__unsafe_align;
  *__t5695t=buffer__unsafe_ptr;
  *__t5696t=buffer__unsafe_size;
  *__t5697t=buffer__unsafe_offset;
  *__t5698t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5699t) {
  goto __t_return;
  __t_return:
  *__t5699t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t5700t) {
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
  *__t5700t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5701t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5701t=z;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5702t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5702t=z;
}

static inline __attribute__((always_inline)) void mat__t1582t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t5703t, uint64_t* __t5704t, uint64_t* __t5705t, uint64_t* __t5706t, uint64_t* __t5707t) {
  char* __t1584t__unsafe_ptr=0;
  uint64_t __t1584t__pos=0;
  uint64_t __t1584t__rows=0;
  uint64_t __t1584t__cols=0;
  uint64_t __t1584t__stride=0;
  __t1584t__unsafe_ptr=unsafe_ptr;
  __t1584t__pos=pos;
  __t1584t__rows=rows;
  __t1584t__cols=cols;
  __t1584t__stride=stride;
  goto __t_return;
  __t_return:
  *__t5703t=__t1584t__unsafe_ptr;
  *__t5704t=__t1584t__pos;
  *__t5705t=__t1584t__rows;
  *__t5706t=__t1584t__cols;
  *__t5707t=__t1584t__stride;
}

static inline __attribute__((always_inline)) int mat__t4649t(char** __t5708t, uint64_t* __t5709t, uint16_t* __t5710t, uint16_t* __t5711t, uint64_t* __t5712t, uint64_t rows, uint64_t cols, char** __t5713t, uint64_t* __t5714t, uint64_t* __t5715t, uint64_t* __t5716t, uint64_t* __t5717t) {
  char* FLOATS__buf__unsafe_ptr=*__t5708t;
  uint64_t FLOATS__buf__unsafe_size=*__t5709t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5710t;
  uint16_t FLOATS__buf__unsafe_align=*__t5711t;
  uint64_t FLOATS__pos=*__t5712t;
  uint64_t __t4650t__=0;
  uint64_t __t4651t=0;
  char __t4652t__=0;
  uint64_t __t4653t__=0;
  uint64_t __t4654t=0;
  char __t4655t__=0;
  uint64_t __t4656t__=0;
  uint64_t __t4657t__=0;
  uint64_t __t4658t__=0;
  char __t4659t__=0;
  uint64_t start=0;
  uint64_t __t4660t__=0;
  uint64_t __t4661t__=0;
  int __t4662t=0;
  uint64_t __t4663t=0;
  uint64_t __t4664t__=0;
  uint64_t __t4665t=0;
  uint64_t __t4666t__=0;
  char* __t4668t__unsafe_ptr=0;
  uint64_t __t4668t__pos=0;
  uint64_t __t4668t__rows=0;
  uint64_t __t4668t__cols=0;
  uint64_t __t4668t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t4650t__);
  __t4651t=8;
  neq__t144t(__t4650t__,__t4651t,&__t4652t__);
  if(__t4652t__){
  __t_errcode=39;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t4653t__);
  __t4654t=0;
  neq__t144t(__t4653t__,__t4654t,&__t4655t__);
  if(__t4655t__){
  __t_errcode=40;
  goto __t_failure;
  }
  mul__t199t(rows,cols,&__t4656t__);
  add__t175t(FLOATS__pos,__t4656t__,&__t4657t__);
  len__t643t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t4658t__);
  gt__t276t(__t4657t__,__t4658t__,&__t4659t__);
  if(__t4659t__){
  __t_errcode=41;
  goto __t_failure;
  }
  start=FLOATS__pos;
  mul__t199t(rows,cols,&__t4660t__);
  add__t175t(FLOATS__pos,__t4660t__,&__t4661t__);
  FLOATS__pos=__t4661t__;
  __t4663t=8;
  mul__t199t(__t4663t,start,&__t4664t__);
  __t4665t=8;
  mul__t199t(__t4665t,FLOATS__pos,&__t4666t__);
  zero__t504t(FLOATS__buf__unsafe_ptr,__t4664t__,__t4666t__);
  mat__t1582t(FLOATS__buf__unsafe_ptr,start,rows,cols,cols,&__t4668t__unsafe_ptr,&__t4668t__pos,&__t4668t__rows,&__t4668t__cols,&__t4668t__stride);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5708t=FLOATS__buf__unsafe_ptr;
  *__t5709t=FLOATS__buf__unsafe_size;
  *__t5710t=FLOATS__buf__unsafe_offset;
  *__t5711t=FLOATS__buf__unsafe_align;
  *__t5712t=FLOATS__pos;
  *__t5713t=__t4668t__unsafe_ptr;
  *__t5714t=__t4668t__pos;
  *__t5715t=__t4668t__rows;
  *__t5716t=__t4668t__cols;
  *__t5717t=__t4668t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

int mat__t4678t(char** __t5718t, uint64_t* __t5719t, uint16_t* __t5720t, uint16_t* __t5721t, uint64_t rows, char** __t5722t, uint64_t* __t5723t, uint64_t* __t5724t, uint64_t* __t5725t, uint64_t* __t5726t) {
  char* buf__unsafe_ptr=*__t5718t;
  uint64_t buf__unsafe_size=*__t5719t;
  uint16_t buf__unsafe_offset=*__t5720t;
  uint16_t buf__unsafe_align=*__t5721t;
  uint64_t __t4679t__=0;
  uint64_t __t4680t__=0;
  uint64_t cols=0;
  uint64_t __t4681t__=0;
  uint64_t __t4682t__=0;
  char __t4683t__=0;
  uint64_t __t4684t=0;
  uint64_t __t4685t=0;
  char* __t4686t__unsafe_ptr=0;
  uint64_t __t4686t__pos=0;
  uint64_t __t4686t__rows=0;
  uint64_t __t4686t__cols=0;
  uint64_t __t4686t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t643t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4679t__);
  __t_errcode=div__t225t(__t4679t__,rows,&__t4680t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t4680t__;
  mul__t199t(cols,rows,&__t4681t__);
  len__t643t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4682t__);
  neq__t144t(__t4681t__,__t4682t__,&__t4683t__);
  if(__t4683t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t4684t=0;
  __t4685t=__t4684t;
  __t_errcode=mat__t4649t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t4685t,rows,cols,&__t4686t__unsafe_ptr,&__t4686t__pos,&__t4686t__rows,&__t4686t__cols,&__t4686t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5718t=buf__unsafe_ptr;
  *__t5719t=buf__unsafe_size;
  *__t5720t=buf__unsafe_offset;
  *__t5721t=buf__unsafe_align;
  *__t5722t=__t4686t__unsafe_ptr;
  *__t5723t=__t4686t__pos;
  *__t5724t=__t4686t__rows;
  *__t5725t=__t4686t__cols;
  *__t5726t=__t4686t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5727t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5727t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5728t) {
  *__t5728t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5729t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5729t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t4777t(char** __t5730t, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t5731t) {
  char* m__unsafe_ptr=*__t5730t;
  char __t4778t__=0;
  char __t4779t__=0;
  uint64_t __t4780t=0;
  uint64_t __t4781t__=0;
  uint64_t __t4782t__=0;
  uint64_t __t4783t__=0;
  uint64_t __t4784t__=0;
  char* __t4785t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t4778t__);
  if(__t4778t__){
  __t_errcode=43;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t4779t__);
  if(__t4779t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t4780t=8;
  mul__t199t(i,m__stride,&__t4781t__);
  add__t175t(__t4781t__,j,&__t4782t__);
  add__t175t(m__pos,__t4782t__,&__t4783t__);
  mul__t199t(__t4780t,__t4783t__,&__t4784t__);
  add__t505t(m__unsafe_ptr,__t4784t__,&__t4785t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5730t=m__unsafe_ptr;
  *__t5731t=__t4785t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5623t(char** __t5732t, uint64_t* __t5733t, uint16_t* __t5734t, uint16_t* __t5735t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5732t=unsafe_ptr;
  *__t5733t=unsafe_size;
  *__t5734t=unsafe_offset;
  *__t5735t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t1579t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5736t, uint64_t* __t5737t, uint64_t* __t5738t) {
  char* __t1581t__unsafe_ptr=0;
  uint64_t __t1581t__pos=0;
  uint64_t __t1581t__length=0;
  __t1581t__unsafe_ptr=unsafe_ptr;
  __t1581t__pos=pos;
  __t1581t__length=length;
  goto __t_return;
  __t_return:
  *__t5736t=__t1581t__unsafe_ptr;
  *__t5737t=__t1581t__pos;
  *__t5738t=__t1581t__length;
}

static inline __attribute__((always_inline)) int vec__t1631t(char** __t5739t, uint64_t* __t5740t, uint16_t* __t5741t, uint16_t* __t5742t, char** __t5743t, uint64_t* __t5744t, uint64_t* __t5745t) {
  char* buf__unsafe_ptr=*__t5739t;
  uint64_t buf__unsafe_size=*__t5740t;
  uint16_t buf__unsafe_offset=*__t5741t;
  uint16_t buf__unsafe_align=*__t5742t;
  uint64_t __t1632t__=0;
  uint64_t __t1633t=0;
  char __t1634t__=0;
  uint64_t __t1635t__=0;
  uint64_t __t1636t=0;
  char __t1637t__=0;
  uint64_t __t1638t=0;
  uint64_t __t1639t__=0;
  char* __t1640t__unsafe_ptr=0;
  uint64_t __t1640t__pos=0;
  uint64_t __t1640t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(buf__unsafe_align,&__t1632t__);
  __t1633t=8;
  neq__t144t(__t1632t__,__t1633t,&__t1634t__);
  if(__t1634t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t1635t__);
  __t1636t=0;
  neq__t144t(__t1635t__,__t1636t,&__t1637t__);
  if(__t1637t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1638t=0;
  len__t643t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1639t__);
  vec__t1579t(buf__unsafe_ptr,__t1638t,__t1639t__,&__t1640t__unsafe_ptr,&__t1640t__pos,&__t1640t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5739t=buf__unsafe_ptr;
  *__t5740t=buf__unsafe_size;
  *__t5741t=buf__unsafe_offset;
  *__t5742t=buf__unsafe_align;
  *__t5743t=__t1640t__unsafe_ptr;
  *__t5744t=__t1640t__pos;
  *__t5745t=__t1640t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t5746t, const char** __t5747t) {
  goto __t_return;
  __t_return:
  *__t5746t=value;
  *__t5747t=__t374t;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1589t(char** __t5748t, uint64_t* __t5749t, uint16_t* __t5750t, uint16_t* __t5751t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5748t=unsafe_ptr;
  *__t5749t=unsafe_size;
  *__t5750t=unsafe_offset;
  *__t5751t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t513t(char** __t5752t, uint64_t* __t5753t, uint16_t* __t5754t, uint16_t* __t5755t, uint64_t size, char** __t5756t, uint64_t* __t5757t, uint16_t* __t5758t, uint16_t* __t5759t) {
  char* buffer__unsafe_ptr=*__t5752t;
  uint64_t buffer__unsafe_size=*__t5753t;
  uint16_t buffer__unsafe_offset=*__t5754t;
  uint16_t buffer__unsafe_align=*__t5755t;
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
  *__t5752t=buffer__unsafe_ptr;
  *__t5753t=buffer__unsafe_size;
  *__t5754t=buffer__unsafe_offset;
  *__t5755t=buffer__unsafe_align;
  *__t5756t=buffer__unsafe_ptr;
  *__t5757t=buffer__unsafe_size;
  *__t5758t=buffer__unsafe_offset;
  *__t5759t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t1619t(uint64_t length, char** __t5760t, uint64_t* __t5761t, uint64_t* __t5762t) {
  char* __t1620t__unsafe_ptr=0;
  uint64_t __t1620t__unsafe_size=0;
  uint16_t __t1620t__unsafe_offset=0;
  uint16_t __t1620t__unsafe_align=0;
  char* __t1622t__unsafe_ptr=0;
  uint64_t __t1622t__unsafe_size=0;
  uint16_t __t1622t__unsafe_offset=0;
  uint16_t __t1622t__unsafe_align=0;
  char __t1623t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t1624t=0;
  uint64_t __t1625t=0;
  uint64_t __t1626t=0;
  uint64_t __t1627t__=0;
  uint64_t __t1629t=0;
  char* __t1630t__unsafe_ptr=0;
  uint64_t __t1630t__pos=0;
  uint64_t __t1630t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1589t(&__t1620t__unsafe_ptr,&__t1620t__unsafe_size,&__t1620t__unsafe_offset,&__t1620t__unsafe_align);
  __t_errcode=alloc__t513t(&__t1620t__unsafe_ptr,&__t1620t__unsafe_size,&__t1620t__unsafe_offset,&__t1620t__unsafe_align,length,&__t1622t__unsafe_ptr,&__t1622t__unsafe_size,&__t1622t__unsafe_offset,&__t1622t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1625t=0;
  __t1626t=8;
  mul__t199t(__t1626t,length,&__t1627t__);
  zero__t504t(__t1622t__unsafe_ptr,__t1625t,__t1627t__);
  __t1629t=0;
  vec__t1579t(__t1622t__unsafe_ptr,__t1629t,length,&__t1630t__unsafe_ptr,&__t1630t__pos,&__t1630t__length);
  __t1630t__unsafe_ptr=__t1622t__unsafe_ptr;
  goto __t_return;
  
  __t_failure:exists__t447t(__t1630t__unsafe_ptr,&__t1623t____t515t__);
  if(__t1623t____t515t__){
  free__t503t(&__t1630t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5760t=__t1630t__unsafe_ptr;
  *__t5761t=__t1630t__pos;
  *__t5762t=__t1630t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5763t, uint64_t* __t5764t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5763t=from;
  *__t5764t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5765t, uint64_t* __t5766t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5765t=__t473t__from;
  *__t5766t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t5767t, uint64_t r__to, uint64_t* __t5768t) {
  uint64_t r__from=*__t5767t;
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
  *__t5767t=r__from;
  *__t5768t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t4786t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t5769t) {
  char __t4787t__=0;
  char __t4788t__=0;
  uint64_t __t4789t=0;
  uint64_t __t4790t__=0;
  uint64_t __t4791t__=0;
  uint64_t __t4792t__=0;
  uint64_t __t4793t__=0;
  char* __t4794t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t4787t__);
  if(__t4787t__){
  __t_errcode=43;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t4788t__);
  if(__t4788t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t4789t=8;
  mul__t199t(i,m__stride,&__t4790t__);
  add__t175t(__t4790t__,j,&__t4791t__);
  add__t175t(m__pos,__t4791t__,&__t4792t__);
  mul__t199t(__t4789t,__t4792t__,&__t4793t__);
  add__t505t(m__unsafe_ptr,__t4793t__,&__t4794t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5769t=__t4794t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1730t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5770t) {
  char __t1731t__=0;
  uint64_t __t1732t=0;
  uint64_t __t1733t__=0;
  uint64_t __t1734t__=0;
  char* __t1735t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1731t__);
  if(__t1731t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1732t=8;
  add__t175t(i,v__pos,&__t1733t__);
  mul__t199t(__t1732t,__t1733t__,&__t1734t__);
  add__t505t(v__unsafe_ptr,__t1734t__,&__t1735t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5770t=__t1735t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5771t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5771t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5772t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5772t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5773t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5773t=z;
}

static inline __attribute__((always_inline)) int mutget__t1724t(char** __t5774t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5775t) {
  char* v__unsafe_ptr=*__t5774t;
  char __t1725t__=0;
  uint64_t __t1726t=0;
  uint64_t __t1727t__=0;
  uint64_t __t1728t__=0;
  char* __t1729t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1725t__);
  if(__t1725t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1726t=8;
  add__t175t(i,v__pos,&__t1727t__);
  mul__t199t(__t1726t,__t1727t__,&__t1728t__);
  add__t505t(v__unsafe_ptr,__t1728t__,&__t1729t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5774t=v__unsafe_ptr;
  *__t5775t=__t1729t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t4825t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5776t, uint64_t* __t5777t, uint64_t* __t5778t) {
  char __t4826t__=0;
  char* __t4827t__unsafe_ptr=0;
  uint64_t __t4827t__pos=0;
  uint64_t __t4827t__length=0;
  char __t4828t____t1623t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4829t__from=0;
  uint64_t __t4829t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t4830t=0;
  uint64_t __t4831t__=0;
  uint64_t i=0;
  double __t4832t=0;
  double __t4833t=0;
  double acc=0;
  uint64_t __t4834t__from=0;
  uint64_t __t4834t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t4835t=0;
  uint64_t __t4836t__=0;
  uint64_t j=0;
  char* __t4837t__=0;
  double __t4838t__value=0;
  char* __t4839t__=0;
  double __t4840t__value=0;
  double __t4841t__=0;
  double __t4842t__=0;
  char* __t4843t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t4826t__);
  if(__t4826t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=vec__t1619t(m__rows,&__t4827t__unsafe_ptr,&__t4827t__pos,&__t4827t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4827t__unsafe_ptr;
  result__pos=__t4827t__pos;
  result__length=__t4827t__length;
  range__t471t(m__rows,&__t4829t__from,&__t4829t__to);
  it_i__from=__t4829t__from;
  it_i__to=__t4829t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t4831t__);
  __t4830t=__t_complain;
  i=__t4831t__;
  __t4830t=__t4830t==0;
  if(!__t4830t){
  break;
  }
  __t4832t=0.0;
  __t4833t=__t4832t;
  acc=__t4833t;
  range__t471t(m__cols,&__t4834t__from,&__t4834t__to);
  it_j__from=__t4834t__from;
  it_j__to=__t4834t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t4836t__);
  __t4835t=__t_complain;
  j=__t4836t__;
  __t4835t=__t4835t==0;
  if(!__t4835t){
  break;
  }
  __t_errcode=get__t4786t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t4837t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4837t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4838t__value,__t4837t__,8);
  __t_errcode=get__t1730t(v__unsafe_ptr,v__pos,v__length,j,&__t4839t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4839t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4840t__value,__t4839t__,8);
  mul__t177t(__t4838t__value,__t4840t__value,&__t4841t__);
  add__t153t(acc,__t4841t__,&__t4842t__);
  acc=__t4842t__;
  }
  __t_errcode=mutget__t1724t(&result__unsafe_ptr,result__pos,result__length,i,&__t4843t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4843t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4843t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t4828t____t1623t____t515t__);
  if(__t4828t____t1623t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5776t=result__unsafe_ptr;
  *__t5777t=result__pos;
  *__t5778t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5779t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5779t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5780t) {
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
  *__t5780t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t375t(double value, double* __t5781t, const char** __t5782t) {
  goto __t_return;
  __t_return:
  *__t5781t=value;
  *__t5782t=__t374t;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t5783t) {
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
  *__t5783t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int print__t4553t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t4554t=0;
  const char* endl=0;
  const char* __t4555t__value=0;
  const char* __t4555t____t374t=0;
  uint64_t __t4557t=0;
  uint64_t __t4558t__from=0;
  uint64_t __t4558t__to=0;
  char __t4559t=0;
  uint64_t __t4560t__=0;
  uint64_t i=0;
  char* __t4561t__=0;
  double __t4562t__value=0;
  double __t4563t__value=0;
  const char* __t4563t____t374t=0;
  uint64_t __t4565t=0;
  uint64_t __t4566t__=0;
  char __t4567t__=0;
  const char* __t4568t__value=0;
  const char* __t4568t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  nn__t373t(__t4534t,&__t4555t__value,&__t4555t____t374t);
  print__t378t(__t4555t__value,__t4555t____t374t);
  range__t471t(v__length,&__t4558t__from,&__t4558t__to);
  __t4557t=0;
  while(1){
  __t_complain=get__t478t(__t4558t__from,__t4558t__to,__t4557t,&__t4560t__);
  __t4559t=__t_complain;
  i=__t4560t__;
  __t4559t=__t4559t==0;
  __t4557t=__t4557t+1;
  if(!__t4559t){
  break;
  }
  __t_errcode=get__t1730t(v__unsafe_ptr,v__pos,v__length,i,&__t4561t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4561t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4562t__value,__t4561t__,8);
  nn__t375t(__t4562t__value,&__t4563t__value,&__t4563t____t374t);
  print__t383t(__t4563t__value,__t4563t____t374t);
  __t4565t=1;
  __t_errcode=sub__t352t(v__length,__t4565t,&__t4566t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t4566t__,&__t4567t__);
  if(__t4567t__){
  nn__t373t(__t4548t,&__t4568t__value,&__t4568t____t374t);
  print__t378t(__t4568t__value,__t4568t____t374t);
  }
  }
  print__t378t(__t4551t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5641t(char** __t5784t, uint64_t* __t5785t, uint16_t* __t5786t, uint16_t* __t5787t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5784t=unsafe_ptr;
  *__t5785t=unsafe_size;
  *__t5786t=unsafe_offset;
  *__t5787t=unsafe_align;
}

static inline __attribute__((always_inline)) int mul__t4880t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t5788t, uint64_t* __t5789t, uint64_t* __t5790t) {
  char __t4881t__=0;
  char* __t4882t__unsafe_ptr=0;
  uint64_t __t4882t__pos=0;
  uint64_t __t4882t__length=0;
  char __t4883t____t1623t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4884t__from=0;
  uint64_t __t4884t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t4885t=0;
  uint64_t __t4886t__=0;
  uint64_t j=0;
  double __t4887t=0;
  double __t4888t=0;
  double acc=0;
  uint64_t __t4889t__from=0;
  uint64_t __t4889t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t4890t=0;
  uint64_t __t4891t__=0;
  uint64_t i=0;
  char* __t4892t__=0;
  double __t4893t__value=0;
  char* __t4894t__=0;
  double __t4895t__value=0;
  double __t4896t__=0;
  double __t4897t__=0;
  char* __t4898t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v__length,m__rows,&__t4881t__);
  if(__t4881t__){
  __t_errcode=46;
  goto __t_failure;
  }
  __t_errcode=vec__t1619t(m__cols,&__t4882t__unsafe_ptr,&__t4882t__pos,&__t4882t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4882t__unsafe_ptr;
  result__pos=__t4882t__pos;
  result__length=__t4882t__length;
  range__t471t(m__cols,&__t4884t__from,&__t4884t__to);
  it_j__from=__t4884t__from;
  it_j__to=__t4884t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t4886t__);
  __t4885t=__t_complain;
  j=__t4886t__;
  __t4885t=__t4885t==0;
  if(!__t4885t){
  break;
  }
  __t4887t=0.0;
  __t4888t=__t4887t;
  acc=__t4888t;
  range__t471t(m__rows,&__t4889t__from,&__t4889t__to);
  it_i__from=__t4889t__from;
  it_i__to=__t4889t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t4891t__);
  __t4890t=__t_complain;
  i=__t4891t__;
  __t4890t=__t4890t==0;
  if(!__t4890t){
  break;
  }
  __t_errcode=get__t1730t(v__unsafe_ptr,v__pos,v__length,i,&__t4892t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4892t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4893t__value,__t4892t__,8);
  __t_errcode=get__t4786t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t4894t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4894t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4895t__value,__t4894t__,8);
  mul__t177t(__t4893t__value,__t4895t__value,&__t4896t__);
  add__t153t(acc,__t4896t__,&__t4897t__);
  acc=__t4897t__;
  }
  __t_errcode=mutget__t1724t(&result__unsafe_ptr,result__pos,result__length,j,&__t4898t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4898t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4898t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t4883t____t1623t____t515t__);
  if(__t4883t____t1623t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5788t=result__unsafe_ptr;
  *__t5789t=result__pos;
  *__t5790t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5658t(char** __t5791t, uint64_t* __t5792t, uint16_t* __t5793t, uint16_t* __t5794t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5791t=unsafe_ptr;
  *__t5792t=unsafe_size;
  *__t5793t=unsafe_offset;
  *__t5794t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t4610t(char** __t5795t, uint64_t* __t5796t, uint16_t* __t5797t, uint16_t* __t5798t) {
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

int mat__t4620t(uint64_t rows, uint64_t cols, char** __t5799t, uint64_t* __t5800t, uint64_t* __t5801t, uint64_t* __t5802t, uint64_t* __t5803t) {
  char* __t4621t__unsafe_ptr=0;
  uint64_t __t4621t__unsafe_size=0;
  uint16_t __t4621t__unsafe_offset=0;
  uint16_t __t4621t__unsafe_align=0;
  uint64_t __t4622t__=0;
  char* __t4624t__unsafe_ptr=0;
  uint64_t __t4624t__unsafe_size=0;
  uint16_t __t4624t__unsafe_offset=0;
  uint16_t __t4624t__unsafe_align=0;
  char __t4625t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t4626t=0;
  uint64_t __t4627t=0;
  uint64_t __t4628t=0;
  uint64_t __t4629t__=0;
  uint64_t __t4630t__=0;
  uint64_t __t4632t=0;
  char* __t4633t__unsafe_ptr=0;
  uint64_t __t4633t__pos=0;
  uint64_t __t4633t__rows=0;
  uint64_t __t4633t__cols=0;
  uint64_t __t4633t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t4610t(&__t4621t__unsafe_ptr,&__t4621t__unsafe_size,&__t4621t__unsafe_offset,&__t4621t__unsafe_align);
  mul__t199t(rows,cols,&__t4622t__);
  __t_errcode=alloc__t513t(&__t4621t__unsafe_ptr,&__t4621t__unsafe_size,&__t4621t__unsafe_offset,&__t4621t__unsafe_align,__t4622t__,&__t4624t__unsafe_ptr,&__t4624t__unsafe_size,&__t4624t__unsafe_offset,&__t4624t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t4624t__unsafe_ptr;
  buf__unsafe_size=__t4624t__unsafe_size;
  buf__unsafe_offset=__t4624t__unsafe_offset;
  buf__unsafe_align=__t4624t__unsafe_align;
  __t4627t=0;
  __t4628t=8;
  len__t643t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4629t__);
  mul__t199t(__t4628t,__t4629t__,&__t4630t__);
  zero__t504t(buf__unsafe_ptr,__t4627t,__t4630t__);
  __t4632t=0;
  mat__t1582t(buf__unsafe_ptr,__t4632t,rows,cols,cols,&__t4633t__unsafe_ptr,&__t4633t__pos,&__t4633t__rows,&__t4633t__cols,&__t4633t__stride);
  goto __t_return;
  
  __t_failure:exists__t447t(__t4633t__unsafe_ptr,&__t4625t____t515t__);
  if(__t4625t____t515t__){
  free__t503t(&__t4633t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5799t=__t4633t__unsafe_ptr;
  *__t5800t=__t4633t__pos;
  *__t5801t=__t4633t__rows;
  *__t5802t=__t4633t__cols;
  *__t5803t=__t4633t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t4935t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t5804t, uint64_t* __t5805t, uint64_t* __t5806t, uint64_t* __t5807t, uint64_t* __t5808t) {
  char __t4936t__=0;
  char* __t4937t__unsafe_ptr=0;
  uint64_t __t4937t__pos=0;
  uint64_t __t4937t__rows=0;
  uint64_t __t4937t__cols=0;
  uint64_t __t4937t__stride=0;
  char __t4938t____t4625t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t4939t__from=0;
  uint64_t __t4939t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t4940t=0;
  uint64_t __t4941t__=0;
  uint64_t i=0;
  uint64_t __t4942t__from=0;
  uint64_t __t4942t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t4943t=0;
  uint64_t __t4944t__=0;
  uint64_t j=0;
  double __t4945t=0;
  double __t4946t=0;
  double acc=0;
  uint64_t __t4947t__from=0;
  uint64_t __t4947t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t4948t=0;
  uint64_t __t4949t__=0;
  uint64_t k=0;
  char* __t4950t__=0;
  double __t4951t__value=0;
  char* __t4952t__=0;
  double __t4953t__value=0;
  double __t4954t__=0;
  double __t4955t__=0;
  char* __t4956t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m1__cols,m2__rows,&__t4936t__);
  if(__t4936t__){
  __t_errcode=47;
  goto __t_failure;
  }
  __t_errcode=mat__t4620t(m1__rows,m2__cols,&__t4937t__unsafe_ptr,&__t4937t__pos,&__t4937t__rows,&__t4937t__cols,&__t4937t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4937t__unsafe_ptr;
  result__pos=__t4937t__pos;
  result__rows=__t4937t__rows;
  result__cols=__t4937t__cols;
  result__stride=__t4937t__stride;
  range__t471t(m1__rows,&__t4939t__from,&__t4939t__to);
  it_i__from=__t4939t__from;
  it_i__to=__t4939t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t4941t__);
  __t4940t=__t_complain;
  i=__t4941t__;
  __t4940t=__t4940t==0;
  if(!__t4940t){
  break;
  }
  range__t471t(m2__cols,&__t4942t__from,&__t4942t__to);
  it_j__from=__t4942t__from;
  it_j__to=__t4942t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t4944t__);
  __t4943t=__t_complain;
  j=__t4944t__;
  __t4943t=__t4943t==0;
  if(!__t4943t){
  break;
  }
  __t4945t=0.0;
  __t4946t=__t4945t;
  acc=__t4946t;
  range__t471t(m1__cols,&__t4947t__from,&__t4947t__to);
  it_k__from=__t4947t__from;
  it_k__to=__t4947t__to;
  while(1){
  __t_complain=next__t474t(&it_k__from,it_k__to,&__t4949t__);
  __t4948t=__t_complain;
  k=__t4949t__;
  __t4948t=__t4948t==0;
  if(!__t4948t){
  break;
  }
  __t_errcode=get__t4786t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t4950t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4950t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4951t__value,__t4950t__,8);
  __t_errcode=get__t4786t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t4952t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4952t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4953t__value,__t4952t__,8);
  mul__t177t(__t4951t__value,__t4953t__value,&__t4954t__);
  add__t153t(acc,__t4954t__,&__t4955t__);
  acc=__t4955t__;
  }
  __t_errcode=mutget__t4777t(&result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t4956t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4956t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4956t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t4938t____t4625t____t515t__);
  if(__t4938t____t4625t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5804t=result__unsafe_ptr;
  *__t5805t=result__pos;
  *__t5806t=result__rows;
  *__t5807t=result__cols;
  *__t5808t=result__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t5073t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride) {
  int __t5074t=0;
  const char* endl=0;
  uint64_t __t5075t__from=0;
  uint64_t __t5075t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t5076t=0;
  uint64_t __t5077t__=0;
  uint64_t i=0;
  uint64_t __t5078t=0;
  char __t5079t__=0;
  uint64_t __t5081t=0;
  char __t5082t__=0;
  uint64_t __t5083t=0;
  char __t5084t__=0;
  char __t5085t=0;
  uint64_t __t5087t=0;
  char __t5088t__=0;
  uint64_t __t5089t=0;
  char __t5090t__=0;
  uint64_t __t5091t=0;
  uint64_t __t5092t__=0;
  char __t5093t__=0;
  char __t5094t=0;
  char __t5095t=0;
  uint64_t __t5097t=0;
  char __t5098t__=0;
  uint64_t __t5099t=0;
  uint64_t __t5100t__=0;
  char __t5101t__=0;
  char __t5102t=0;
  uint64_t __t5104t__from=0;
  uint64_t __t5104t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t5105t=0;
  uint64_t __t5106t__=0;
  uint64_t j=0;
  char* __t5107t__=0;
  double __t5108t__value=0;
  uint64_t __t5110t=0;
  uint64_t __t5111t__=0;
  char __t5112t__=0;
  uint64_t __t5114t=0;
  char __t5115t__=0;
  uint64_t __t5117t=0;
  char __t5118t__=0;
  uint64_t __t5119t=0;
  char __t5120t__=0;
  char __t5121t=0;
  uint64_t __t5123t=0;
  char __t5124t__=0;
  uint64_t __t5125t=0;
  char __t5126t__=0;
  uint64_t __t5127t=0;
  uint64_t __t5128t__=0;
  char __t5129t__=0;
  char __t5130t=0;
  char __t5131t=0;
  uint64_t __t5133t=0;
  char __t5134t__=0;
  uint64_t __t5135t=0;
  uint64_t __t5136t__=0;
  char __t5137t__=0;
  char __t5138t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  range__t471t(m__rows,&__t5075t__from,&__t5075t__to);
  it_i__from=__t5075t__from;
  it_i__to=__t5075t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t5077t__);
  __t5076t=__t_complain;
  i=__t5077t__;
  __t5076t=__t5076t==0;
  if(!__t5076t){
  break;
  }
  __t5078t=1;
  eq__t120t(m__rows,__t5078t,&__t5079t__);
  if(__t5079t__){
  print__t378t(__t4534t,__t374t);
  }
  __t5081t=1;
  gt__t276t(m__rows,__t5081t,&__t5082t__);
  if(__t5082t__){
  __t5083t=0;
  eq__t120t(i,__t5083t,&__t5084t__);
  __t5085t=__t5084t__;
  }
  {
  __t5085t=0;
  }
  if(__t5085t){
  print__t378t(__t5012t,__t374t);
  }
  __t5087t=1;
  gt__t276t(m__rows,__t5087t,&__t5088t__);
  if(__t5088t__){
  __t5089t=0;
  gt__t276t(i,__t5089t,&__t5090t__);
  if(__t5090t__){
  __t5091t=1;
  __t_errcode=sub__t352t(m__rows,__t5091t,&__t5092t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5092t__,&__t5093t__);
  __t5094t=__t5093t__;
  }
  {
  __t5094t=0;
  }
  __t5095t=__t5094t;
  }
  {
  __t5095t=0;
  }
  if(__t5095t){
  print__t378t(__t5023t,__t374t);
  }
  __t5097t=1;
  gt__t276t(m__rows,__t5097t,&__t5098t__);
  if(__t5098t__){
  __t5099t=1;
  __t_errcode=sub__t352t(m__rows,__t5099t,&__t5100t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t5100t__,&__t5101t__);
  __t5102t=__t5101t__;
  }
  {
  __t5102t=0;
  }
  if(__t5102t){
  print__t378t(__t5031t,__t374t);
  }
  range__t471t(m__cols,&__t5104t__from,&__t5104t__to);
  it_j__from=__t5104t__from;
  it_j__to=__t5104t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t5106t__);
  __t5105t=__t_complain;
  j=__t5106t__;
  __t5105t=__t5105t==0;
  if(!__t5105t){
  break;
  }
  __t_errcode=get__t4786t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t5107t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5107t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5108t__value,__t5107t__,8);
  print__t383t(__t5108t__value,__t374t);
  __t5110t=1;
  __t_errcode=sub__t352t(m__cols,__t5110t,&__t5111t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(j,__t5111t__,&__t5112t__);
  if(__t5112t__){
  print__t378t(__t4548t,__t374t);
  }
  }
  __t5114t=1;
  eq__t120t(m__rows,__t5114t,&__t5115t__);
  if(__t5115t__){
  print__t378t(__t4551t,__t374t);
  }
  __t5117t=1;
  gt__t276t(m__rows,__t5117t,&__t5118t__);
  if(__t5118t__){
  __t5119t=0;
  eq__t120t(i,__t5119t,&__t5120t__);
  __t5121t=__t5120t__;
  }
  {
  __t5121t=0;
  }
  if(__t5121t){
  print__t378t(__t5051t,__t374t);
  }
  __t5123t=1;
  gt__t276t(m__rows,__t5123t,&__t5124t__);
  if(__t5124t__){
  __t5125t=0;
  gt__t276t(i,__t5125t,&__t5126t__);
  if(__t5126t__){
  __t5127t=1;
  __t_errcode=sub__t352t(m__rows,__t5127t,&__t5128t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5128t__,&__t5129t__);
  __t5130t=__t5129t__;
  }
  {
  __t5130t=0;
  }
  __t5131t=__t5130t;
  }
  {
  __t5131t=0;
  }
  if(__t5131t){
  print__t378t(__t5062t,__t374t);
  }
  __t5133t=1;
  gt__t276t(m__rows,__t5133t,&__t5134t__);
  if(__t5134t__){
  __t5135t=1;
  __t_errcode=sub__t352t(m__rows,__t5135t,&__t5136t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t5136t__,&__t5137t__);
  __t5138t=__t5137t__;
  }
  {
  __t5138t=0;
  }
  if(__t5138t){
  print__t378t(__t5070t,__t374t);
  }
  print__t378t(__t374t,endl);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5597t() {
  double __t5600t=0;
  double __t5605t=0;
  double __t5606t=0;
  double __t5607t=0;
  double __t5608t=0;
  double __t5609t=0;
  char* __t5610t__unsafe_ptr=0;
  uint64_t __t5610t__unsafe_size=0;
  uint16_t __t5610t__unsafe_offset=0;
  uint16_t __t5610t__unsafe_align=0;
  uint64_t __t5611t=0;
  char* __t5612t__unsafe_ptr=0;
  uint64_t __t5612t__unsafe_size=0;
  uint16_t __t5612t__unsafe_offset=0;
  uint16_t __t5612t__unsafe_align=0;
  char __t5613t____t534t__=0;
  uint64_t __t5614t=0;
  char* __t5615t__unsafe_ptr=0;
  uint64_t __t5615t__pos=0;
  uint64_t __t5615t__rows=0;
  uint64_t __t5615t__cols=0;
  uint64_t __t5615t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  uint64_t __t5616t=0;
  uint64_t __t5617t=0;
  char* __t5618t__=0;
  double __t5619t=0;
  double __t5620t=0;
  double __t5625t=0;
  double __t5626t=0;
  char* __t5627t__unsafe_ptr=0;
  uint64_t __t5627t__unsafe_size=0;
  uint16_t __t5627t__unsafe_offset=0;
  uint16_t __t5627t__unsafe_align=0;
  uint64_t __t5628t=0;
  char* __t5629t__unsafe_ptr=0;
  uint64_t __t5629t__unsafe_size=0;
  uint16_t __t5629t__unsafe_offset=0;
  uint16_t __t5629t__unsafe_align=0;
  char __t5630t____t534t__=0;
  char* __t5631t__unsafe_ptr=0;
  uint64_t __t5631t__pos=0;
  uint64_t __t5631t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t5633t__value=0;
  const char* __t5633t____t374t=0;
  char* __t5635t__unsafe_ptr=0;
  uint64_t __t5635t__pos=0;
  uint64_t __t5635t__length=0;
  char __t5636t____t4828t____t1623t____t515t__=0;
  double __t5638t=0;
  double __t5643t=0;
  char* __t5644t__unsafe_ptr=0;
  uint64_t __t5644t__unsafe_size=0;
  uint16_t __t5644t__unsafe_offset=0;
  uint16_t __t5644t__unsafe_align=0;
  uint64_t __t5645t=0;
  char* __t5646t__unsafe_ptr=0;
  uint64_t __t5646t__unsafe_size=0;
  uint16_t __t5646t__unsafe_offset=0;
  uint16_t __t5646t__unsafe_align=0;
  char __t5647t____t534t__=0;
  char* __t5648t__unsafe_ptr=0;
  uint64_t __t5648t__pos=0;
  uint64_t __t5648t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t5650t__value=0;
  const char* __t5650t____t374t=0;
  char* __t5652t__unsafe_ptr=0;
  uint64_t __t5652t__pos=0;
  uint64_t __t5652t__length=0;
  char __t5653t____t4883t____t1623t____t515t__=0;
  double __t5655t=0;
  double __t5660t=0;
  double __t5661t=0;
  double __t5662t=0;
  double __t5663t=0;
  double __t5664t=0;
  char* __t5665t__unsafe_ptr=0;
  uint64_t __t5665t__unsafe_size=0;
  uint16_t __t5665t__unsafe_offset=0;
  uint16_t __t5665t__unsafe_align=0;
  uint64_t __t5666t=0;
  char* __t5667t__unsafe_ptr=0;
  uint64_t __t5667t__unsafe_size=0;
  uint16_t __t5667t__unsafe_offset=0;
  uint16_t __t5667t__unsafe_align=0;
  char __t5668t____t534t__=0;
  uint64_t __t5669t=0;
  char* __t5670t__unsafe_ptr=0;
  uint64_t __t5670t__pos=0;
  uint64_t __t5670t__rows=0;
  uint64_t __t5670t__cols=0;
  uint64_t __t5670t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t5673t__unsafe_ptr=0;
  uint64_t __t5673t__pos=0;
  uint64_t __t5673t__rows=0;
  uint64_t __t5673t__cols=0;
  uint64_t __t5673t__stride=0;
  char __t5674t____t4938t____t4625t____t515t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  new__t669t();
  __t5600t=1.0;
  __t5605t=0.0;
  __t5606t=2.0;
  __t5607t=0.0;
  __t5608t=3.0;
  __t5609t=1.0;
  float____buffer__t5603t(&__t5610t__unsafe_ptr,&__t5610t__unsafe_size,&__t5610t__unsafe_offset,&__t5610t__unsafe_align);
  __t5611t=6;
  __t_errcode=alloc__t532t(&__t5610t__unsafe_ptr,&__t5610t__unsafe_size,&__t5610t__unsafe_offset,&__t5610t__unsafe_align,__t5611t,&__t5612t__unsafe_ptr,&__t5612t__unsafe_size,&__t5612t__unsafe_offset,&__t5612t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5610t__unsafe_ptr,&__t5600t,8);
  memcpy(__t5610t__unsafe_ptr+8,&__t5605t,8);
  memcpy(__t5610t__unsafe_ptr+16,&__t5606t,8);
  memcpy(__t5610t__unsafe_ptr+24,&__t5607t,8);
  memcpy(__t5610t__unsafe_ptr+32,&__t5608t,8);
  memcpy(__t5610t__unsafe_ptr+40,&__t5609t,8);
  __t5614t=2;
  __t_errcode=mat__t4678t(&__t5610t__unsafe_ptr,&__t5610t__unsafe_size,&__t5610t__unsafe_offset,&__t5610t__unsafe_align,__t5614t,&__t5615t__unsafe_ptr,&__t5615t__pos,&__t5615t__rows,&__t5615t__cols,&__t5615t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t5615t__unsafe_ptr;
  a__pos=__t5615t__pos;
  a__rows=__t5615t__rows;
  a__cols=__t5615t__cols;
  a__stride=__t5615t__stride;
  __t5616t=0;
  __t5617t=0;
  __t_errcode=mutget__t4777t(&a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t5616t,__t5617t,&__t5618t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5619t=1.0;
  if(!__t5618t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5618t__,&__t5619t,8);
  __t5620t=1.0;
  __t5625t=2.0;
  __t5626t=3.0;
  float____buffer__t5623t(&__t5627t__unsafe_ptr,&__t5627t__unsafe_size,&__t5627t__unsafe_offset,&__t5627t__unsafe_align);
  __t5628t=3;
  __t_errcode=alloc__t532t(&__t5627t__unsafe_ptr,&__t5627t__unsafe_size,&__t5627t__unsafe_offset,&__t5627t__unsafe_align,__t5628t,&__t5629t__unsafe_ptr,&__t5629t__unsafe_size,&__t5629t__unsafe_offset,&__t5629t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5627t__unsafe_ptr,&__t5620t,8);
  memcpy(__t5627t__unsafe_ptr+8,&__t5625t,8);
  memcpy(__t5627t__unsafe_ptr+16,&__t5626t,8);
  __t_errcode=vec__t1631t(&__t5627t__unsafe_ptr,&__t5627t__unsafe_size,&__t5627t__unsafe_offset,&__t5627t__unsafe_align,&__t5631t__unsafe_ptr,&__t5631t__pos,&__t5631t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t5631t__unsafe_ptr;
  x__pos=__t5631t__pos;
  x__length=__t5631t__length;
  nn__t373t(__t5632t,&__t5633t__value,&__t5633t____t374t);
  print__t378t(__t5633t__value,__t5633t____t374t);
  __t_errcode=mul__t4825t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t5635t__unsafe_ptr,&__t5635t__pos,&__t5635t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t4553t(__t5635t__unsafe_ptr,__t5635t__pos,__t5635t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5638t=1.0;
  __t5643t=2.0;
  float____buffer__t5641t(&__t5644t__unsafe_ptr,&__t5644t__unsafe_size,&__t5644t__unsafe_offset,&__t5644t__unsafe_align);
  __t5645t=2;
  __t_errcode=alloc__t532t(&__t5644t__unsafe_ptr,&__t5644t__unsafe_size,&__t5644t__unsafe_offset,&__t5644t__unsafe_align,__t5645t,&__t5646t__unsafe_ptr,&__t5646t__unsafe_size,&__t5646t__unsafe_offset,&__t5646t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5644t__unsafe_ptr,&__t5638t,8);
  memcpy(__t5644t__unsafe_ptr+8,&__t5643t,8);
  __t_errcode=vec__t1631t(&__t5644t__unsafe_ptr,&__t5644t__unsafe_size,&__t5644t__unsafe_offset,&__t5644t__unsafe_align,&__t5648t__unsafe_ptr,&__t5648t__pos,&__t5648t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t5648t__unsafe_ptr;
  u__pos=__t5648t__pos;
  u__length=__t5648t__length;
  nn__t373t(__t5649t,&__t5650t__value,&__t5650t____t374t);
  print__t378t(__t5650t__value,__t5650t____t374t);
  __t_errcode=mul__t4880t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t5652t__unsafe_ptr,&__t5652t__pos,&__t5652t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t4553t(__t5652t__unsafe_ptr,__t5652t__pos,__t5652t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5655t=1.0;
  __t5660t=2.0;
  __t5661t=3.0;
  __t5662t=4.0;
  __t5663t=5.0;
  __t5664t=6.0;
  float____buffer__t5658t(&__t5665t__unsafe_ptr,&__t5665t__unsafe_size,&__t5665t__unsafe_offset,&__t5665t__unsafe_align);
  __t5666t=6;
  __t_errcode=alloc__t532t(&__t5665t__unsafe_ptr,&__t5665t__unsafe_size,&__t5665t__unsafe_offset,&__t5665t__unsafe_align,__t5666t,&__t5667t__unsafe_ptr,&__t5667t__unsafe_size,&__t5667t__unsafe_offset,&__t5667t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5665t__unsafe_ptr,&__t5655t,8);
  memcpy(__t5665t__unsafe_ptr+8,&__t5660t,8);
  memcpy(__t5665t__unsafe_ptr+16,&__t5661t,8);
  memcpy(__t5665t__unsafe_ptr+24,&__t5662t,8);
  memcpy(__t5665t__unsafe_ptr+32,&__t5663t,8);
  memcpy(__t5665t__unsafe_ptr+40,&__t5664t,8);
  __t5669t=3;
  __t_errcode=mat__t4678t(&__t5665t__unsafe_ptr,&__t5665t__unsafe_size,&__t5665t__unsafe_offset,&__t5665t__unsafe_align,__t5669t,&__t5670t__unsafe_ptr,&__t5670t__pos,&__t5670t__rows,&__t5670t__cols,&__t5670t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t5670t__unsafe_ptr;
  b__pos=__t5670t__pos;
  b__rows=__t5670t__rows;
  b__cols=__t5670t__cols;
  b__stride=__t5670t__stride;
  print__t380t(__t5671t);
  __t_errcode=mul__t4935t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t5673t__unsafe_ptr,&__t5673t__pos,&__t5673t__rows,&__t5673t__cols,&__t5673t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t5073t(__t5673t__unsafe_ptr,__t5673t__pos,__t5673t__rows,__t5673t__cols,__t5673t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5673t__unsafe_ptr,&__t5674t____t4938t____t4625t____t515t__);
  if(__t5674t____t4938t____t4625t____t515t__){
  free__t503t(&__t5673t__unsafe_ptr);
  }
  exists__t447t(__t5667t__unsafe_ptr,&__t5668t____t534t__);
  if(__t5668t____t534t__){
  free__t503t(&__t5667t__unsafe_ptr);
  }
  exists__t447t(__t5652t__unsafe_ptr,&__t5653t____t4883t____t1623t____t515t__);
  if(__t5653t____t4883t____t1623t____t515t__){
  free__t503t(&__t5652t__unsafe_ptr);
  }
  exists__t447t(__t5646t__unsafe_ptr,&__t5647t____t534t__);
  if(__t5647t____t534t__){
  free__t503t(&__t5646t__unsafe_ptr);
  }
  exists__t447t(__t5635t__unsafe_ptr,&__t5636t____t4828t____t1623t____t515t__);
  if(__t5636t____t4828t____t1623t____t515t__){
  free__t503t(&__t5635t__unsafe_ptr);
  }
  exists__t447t(__t5629t__unsafe_ptr,&__t5630t____t534t__);
  if(__t5630t____t534t__){
  free__t503t(&__t5629t__unsafe_ptr);
  }
  exists__t447t(__t5612t__unsafe_ptr,&__t5613t____t534t__);
  if(__t5613t____t534t__){
  free__t503t(&__t5612t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5597t();return 0;}