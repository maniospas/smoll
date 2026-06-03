#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
#include "std/extern/raysupport.h"
int __t_argc;
char** __t_argv;
const char* const __t5760t="Moving Circle";
static const char* __t_all_errcodes[52] = {"noerr",
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
"inner dimensions must agree",
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32",
"already drawing on window"
};

static inline __attribute__((always_inline)) void Size__t5643t(double width, double height, double* __t5798t, double* __t5799t) {
  *__t5798t=width;
  *__t5799t=height;
}

static inline __attribute__((always_inline)) void Window__t5644t(double size__width, double size__height, const char* title, double* __t5800t, double* __t5801t, const char** __t5802t, char* __t5803t) {
  char __t5645t=0;
  char __t5646t=0;
  char ready=0;
  SetTraceLogLevel(LOG_WARNING);
  InitWindow(size__width,size__height,title);
  __t5645t=0;
  __t5646t=__t5645t;
  ready=__t5646t;
  goto __t_return;
  __t_return:
  *__t5800t=size__width;
  *__t5801t=size__height;
  *__t5802t=title;
  *__t5803t=ready;
}

static inline __attribute__((always_inline)) void Circle____t_buffer____buffer__t5763t(char** __t5804t, uint64_t* __t5805t, uint16_t* __t5806t, uint16_t* __t5807t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=40;
  *__t5804t=unsafe_ptr;
  *__t5805t=unsafe_size;
  *__t5806t=unsafe_offset;
  *__t5807t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5808t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5808t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5809t) {
  char* allocated=*__t5809t;
  if(allocated){
  free(allocated);
  }
  *__t5809t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5810t) {
  int value=0;
  *__t5810t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5811t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5811t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5812t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5812t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5813t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5813t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5814t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5814t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5815t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5815t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5816t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5816t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5817t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5817t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5818t) {
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
  *__t5818t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5819t, uint64_t* __t5820t, uint16_t* __t5821t, uint16_t* __t5822t, uint64_t size, char** __t5823t, uint64_t* __t5824t, uint16_t* __t5825t, uint16_t* __t5826t) {
  char* buffer__unsafe_ptr=*__t5819t;
  uint64_t buffer__unsafe_size=*__t5820t;
  uint16_t buffer__unsafe_offset=*__t5821t;
  uint16_t buffer__unsafe_align=*__t5822t;
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
  *__t5819t=buffer__unsafe_ptr;
  *__t5820t=buffer__unsafe_size;
  *__t5821t=buffer__unsafe_offset;
  *__t5822t=buffer__unsafe_align;
  *__t5823t=buffer__unsafe_ptr;
  *__t5824t=buffer__unsafe_size;
  *__t5825t=buffer__unsafe_offset;
  *__t5826t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5827t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5827t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5828t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5828t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5829t) {
  *__t5829t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5830t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5830t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t629t(char** __t5831t, uint64_t* __t5832t, uint16_t* __t5833t, uint16_t* __t5834t, uint64_t i, char** __t5835t) {
  char* buffer__unsafe_ptr=*__t5831t;
  uint64_t buffer__unsafe_size=*__t5832t;
  uint16_t buffer__unsafe_offset=*__t5833t;
  uint16_t buffer__unsafe_align=*__t5834t;
  char __t630t__=0;
  uint64_t __t631t__=0;
  uint64_t __t632t__=0;
  uint64_t __t633t__=0;
  uint64_t __t634t__=0;
  char* __t635t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t630t__);
  if(__t630t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t631t__);
  mul__t199t(i,__t631t__,&__t632t__);
  nat__t507t(buffer__unsafe_offset,&__t633t__);
  add__t175t(__t632t__,__t633t__,&__t634t__);
  add__t505t(buffer__unsafe_ptr,__t634t__,&__t635t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5831t=buffer__unsafe_ptr;
  *__t5832t=buffer__unsafe_size;
  *__t5833t=buffer__unsafe_offset;
  *__t5834t=buffer__unsafe_align;
  *__t5835t=__t635t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t5836t) {
  int value=0;
  *__t5836t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t5837t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t5837t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t415t(uint64_t x, double* __t5838t) {
  int __t416t=0;
  int __t417t__=0;
  int __t418t=0;
  double z=0;
  not__t39t(__t416t,&__t417t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t5838t=z;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5839t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5839t=__t73t__;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t5840t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5840t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5841t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5841t=z;
}

static inline __attribute__((always_inline)) void Circle__t5697t(double _cx, double _cy, double _vx, double _vy, double _radius, double* __t5842t, double* __t5843t, double* __t5844t, double* __t5845t, double* __t5846t) {
  double __t5698t=0;
  double cx=0;
  double __t5699t=0;
  double cy=0;
  double __t5700t=0;
  double vx=0;
  double __t5701t=0;
  double vy=0;
  double __t5702t=0;
  double radius=0;
  __t5698t=_cx;
  cx=__t5698t;
  __t5699t=_cy;
  cy=__t5699t;
  __t5700t=_vx;
  vx=__t5700t;
  __t5701t=_vy;
  vy=__t5701t;
  __t5702t=_radius;
  radius=__t5702t;
  goto __t_return;
  __t_return:
  *__t5842t=cx;
  *__t5843t=cy;
  *__t5844t=vx;
  *__t5845t=vy;
  *__t5846t=radius;
}

static inline __attribute__((always_inline)) void is_open__t5648t(double __t_anon0__size__width, double __t_anon0__size__height, const char* __t_anon0__title, char __t_anon0__ready, char* __t5847t) {
  char ret=0;
  char __t5649t__=0;
  ret=WindowShouldClose();
  not__t28t(ret,&__t5649t__);
  goto __t_return;
  __t_return:
  *__t5847t=__t5649t__;
}

static inline __attribute__((always_inline)) void dt__t5696t(double* __t5848t) {
  double dt=0;
  dt=GetFrameTime();
  goto __t_return;
  __t_return:
  *__t5848t=dt;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5849t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5849t=z;
}

static inline __attribute__((always_inline)) void lt__t230t(double x, double y, char* __t5850t) {
  int __t231t__=0;
  char z=0;
  is_different__t71t(x,y,&__t231t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5850t=z;
}

static inline __attribute__((always_inline)) void bits__t448t(uint64_t value, uint64_t* __t5851t) {
  goto __t_return;
  __t_return:
  *__t5851t=value;
}

static inline __attribute__((always_inline)) void bits__t452t(double x, uint64_t* __t5852t) {
  uint64_t z=0;
  uint64_t __t453t__value=0;
  z=0;
  memcpy(&z,&x,8);
  bits__t448t(z,&__t453t__value);
  goto __t_return;
  __t_return:
  *__t5852t=__t453t__value;
}

static inline __attribute__((always_inline)) void bits__t450t(int64_t x, uint64_t* __t5853t) {
  uint64_t z=0;
  uint64_t __t451t__value=0;
  z=x;
  bits__t448t(z,&__t451t__value);
  goto __t_return;
  __t_return:
  *__t5853t=__t451t__value;
}

static inline __attribute__((always_inline)) void band__t464t(uint64_t x__value, uint64_t y__value, uint64_t* __t5854t) {
  uint64_t z=0;
  uint64_t __t465t__value=0;
  z=(x__value&y__value);
  bits__t448t(z,&__t465t__value);
  goto __t_return;
  __t_return:
  *__t5854t=__t465t__value;
}

static inline __attribute__((always_inline)) void float__t457t(uint64_t x__value, double* __t5855t) {
  double z=0;
  z=0;
  memcpy(&z,&x__value,8);
  goto __t_return;
  __t_return:
  *__t5855t=z;
}

static inline __attribute__((always_inline)) void abs__t1551t(double x, double* __t5856t) {
  int64_t c=0;
  uint64_t __t1552t__value=0;
  uint64_t __t1553t__value=0;
  uint64_t __t1554t__value=0;
  double __t1555t__=0;
  c=0x7FFFFFFFFFFFFFFF;
  bits__t452t(x,&__t1552t__value);
  bits__t450t(c,&__t1553t__value);
  band__t464t(__t1552t__value,__t1553t__value,&__t1554t__value);
  float__t457t(__t1554t__value,&__t1555t__);
  goto __t_return;
  __t_return:
  *__t5856t=__t1555t__;
}

static inline __attribute__((always_inline)) void gt__t254t(double x, double y, char* __t5857t) {
  int __t255t__=0;
  char z=0;
  is_different__t71t(x,y,&__t255t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5857t=z;
}

static inline __attribute__((always_inline)) int process__t5703t(char** __t5858t, double dt) {
  char* _self=*__t5858t;
  double __t5704t__cx=0;
  double __t5704t__cy=0;
  double __t5704t__vx=0;
  double __t5704t__vy=0;
  double __t5704t__radius=0;
  double self__cx=0;
  double self__cy=0;
  double self__vx=0;
  double self__vy=0;
  double self__radius=0;
  double __t5705t__=0;
  double __t5706t__=0;
  double __t5707t__=0;
  double __t5708t__=0;
  double __t5709t__=0;
  double __t5710t=0;
  char __t5711t__=0;
  double __t5712t__=0;
  double __t5713t__=0;
  double __t5714t=0;
  char __t5715t__=0;
  double __t5716t=0;
  double __t5717t__=0;
  double __t5718t=0;
  double __t5719t__=0;
  double __t5720t__=0;
  double __t5721t__=0;
  double __t5722t=0;
  char __t5723t__=0;
  double __t5724t__=0;
  double __t5725t__=0;
  double __t5726t=0;
  char __t5727t__=0;
  double __t5728t=0;
  double __t5729t__=0;
  double __t5730t=0;
  double __t5731t__=0;
  double __t5732t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!_self){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5704t__cx,_self,8);
  memcpy(&__t5704t__cy,_self+8,8);
  memcpy(&__t5704t__vx,_self+16,8);
  memcpy(&__t5704t__vy,_self+24,8);
  memcpy(&__t5704t__radius,_self+32,8);
  self__cx=__t5704t__cx;
  self__cy=__t5704t__cy;
  self__vx=__t5704t__vx;
  self__vy=__t5704t__vy;
  self__radius=__t5704t__radius;
  mul__t177t(self__vx,dt,&__t5705t__);
  add__t153t(self__cx,__t5705t__,&__t5706t__);
  self__cx=__t5706t__;
  mul__t177t(self__vy,dt,&__t5707t__);
  add__t153t(self__cy,__t5707t__,&__t5708t__);
  self__cy=__t5708t__;
  sub__t326t(self__cx,self__radius,&__t5709t__);
  __t5710t=0.0;
  lt__t230t(__t5709t__,__t5710t,&__t5711t__);
  if(__t5711t__){
  self__cx=self__radius;
  abs__t1551t(self__vx,&__t5712t__);
  self__vx=__t5712t__;
  }
  add__t153t(self__cx,self__radius,&__t5713t__);
  __t5714t=800.0;
  gt__t254t(__t5713t__,__t5714t,&__t5715t__);
  if(__t5715t__){
  __t5716t=800.0;
  sub__t326t(__t5716t,self__radius,&__t5717t__);
  self__cx=__t5717t__;
  __t5718t=0.0;
  abs__t1551t(self__vx,&__t5719t__);
  sub__t326t(__t5718t,__t5719t__,&__t5720t__);
  self__vx=__t5720t__;
  }
  sub__t326t(self__cy,self__radius,&__t5721t__);
  __t5722t=0.0;
  lt__t230t(__t5721t__,__t5722t,&__t5723t__);
  if(__t5723t__){
  self__cy=self__radius;
  abs__t1551t(self__vy,&__t5724t__);
  self__vy=__t5724t__;
  }
  add__t153t(self__cy,self__radius,&__t5725t__);
  __t5726t=600.0;
  gt__t254t(__t5725t__,__t5726t,&__t5727t__);
  if(__t5727t__){
  __t5728t=600.0;
  sub__t326t(__t5728t,self__radius,&__t5729t__);
  self__cy=__t5729t__;
  __t5730t=0.0;
  abs__t1551t(self__vy,&__t5731t__);
  sub__t326t(__t5730t,__t5731t__,&__t5732t__);
  self__vy=__t5732t__;
  }
  if(!_self){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(_self,&self__cx,8);
  memcpy(_self+8,&self__cy,8);
  memcpy(_self+16,&self__vx,8);
  memcpy(_self+24,&self__vy,8);
  memcpy(_self+32,&self__radius,8);
  
  __t_failure:
  goto __t_skip_returns;*__t5858t=_self;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int draw__t5650t(double window__size__width, double window__size__height, const char* window__title, char* __t5859t, char* __t5860t) {
  char window__ready=*__t5859t;
  char __t5651t=0;
  char is_drawing=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(window__ready){
  __t_errcode=51;
  goto __t_failure;
  }
  __t5651t=1;
  is_drawing=__t5651t;
  BeginDrawing();
  goto __t_return;
  
  __t_failure:if(is_drawing){
  EndDrawing();
  }
  
  goto __t_skip_returns;__t_return:
  *__t5859t=window__ready;
  *__t5860t=is_drawing;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5861t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5861t=z;
}

static inline __attribute__((always_inline)) int nat8__t5597t(uint64_t x, uint8_t* __t5862t) {
  uint64_t __t5598t=0;
  char __t5599t__=0;
  uint8_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t5598t=255;
  gt__t276t(x,__t5598t,&__t5599t__);
  if(__t5599t__){
  __t_errcode=48;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5862t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int Color__t5635t(uint64_t _r, uint64_t _g, uint64_t _b, uint8_t* __t5863t, uint8_t* __t5864t, uint8_t* __t5865t, uint8_t* __t5866t) {
  int __t5636t=0;
  uint64_t __t5637t=0;
  uint64_t _a=0;
  uint8_t __t5638t__=0;
  uint8_t r=0;
  uint8_t __t5639t__=0;
  uint8_t g=0;
  uint8_t __t5640t__=0;
  uint8_t b=0;
  uint8_t __t5641t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t5637t=255;
  _a=__t5637t;
  __t_errcode=nat8__t5597t(_r,&__t5638t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t5638t__;
  __t_errcode=nat8__t5597t(_g,&__t5639t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t5639t__;
  __t_errcode=nat8__t5597t(_b,&__t5640t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t5640t__;
  __t_errcode=nat8__t5597t(_a,&__t5641t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t5641t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5863t=r;
  *__t5864t=g;
  *__t5865t=b;
  *__t5866t=a;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void clear__t5652t(double window__size__width, double window__size__height, const char* window__title, char* __t5867t, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a, double* __t5868t, double* __t5869t, const char** __t5870t, char* __t5871t) {
  char window__ready=*__t5867t;
  ClearBackground((Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t5867t=window__ready;
  *__t5868t=window__size__width;
  *__t5869t=window__size__height;
  *__t5870t=window__title;
  *__t5871t=window__ready;
}

static inline __attribute__((always_inline)) int get__t636t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t5872t) {
  char __t637t__=0;
  uint64_t __t638t__=0;
  uint64_t __t639t__=0;
  uint64_t __t640t__=0;
  uint64_t __t641t__=0;
  char* __t642t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t637t__);
  if(__t637t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t638t__);
  mul__t199t(i,__t638t__,&__t639t__);
  nat__t507t(buffer__unsafe_offset,&__t640t__);
  add__t175t(__t639t__,__t640t__,&__t641t__);
  add__t505t(buffer__unsafe_ptr,__t641t__,&__t642t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5872t=__t642t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int Color__t5629t(uint64_t _r, uint64_t _g, uint64_t _b, uint64_t _a, uint8_t* __t5873t, uint8_t* __t5874t, uint8_t* __t5875t, uint8_t* __t5876t) {
  int __t5630t=0;
  uint8_t __t5631t__=0;
  uint8_t r=0;
  uint8_t __t5632t__=0;
  uint8_t g=0;
  uint8_t __t5633t__=0;
  uint8_t b=0;
  uint8_t __t5634t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat8__t5597t(_r,&__t5631t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t5631t__;
  __t_errcode=nat8__t5597t(_g,&__t5632t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t5632t__;
  __t_errcode=nat8__t5597t(_b,&__t5633t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t5633t__;
  __t_errcode=nat8__t5597t(_a,&__t5634t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t5634t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5873t=r;
  *__t5874t=g;
  *__t5875t=b;
  *__t5876t=a;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void circ__t5692t(double window__size__width, double window__size__height, const char* window__title, char* __t5877t, double pos__x, double pos__y, double radius, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a, double* __t5878t, double* __t5879t, const char** __t5880t, char* __t5881t) {
  char window__ready=*__t5877t;
  DrawCircleV((Vector2){
  (float)pos__x,(float)pos__y}
  ,(float)radius,(Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t5877t=window__ready;
  *__t5878t=window__size__width;
  *__t5879t=window__size__height;
  *__t5880t=window__title;
  *__t5881t=window__ready;
}

static inline __attribute__((always_inline)) int nat__t431t(double x, uint64_t* __t5882t) {
  int __t432t=0;
  int __t433t=0;
  uint64_t __t434t=0;
  double __t435t__=0;
  char __t436t__=0;
  uint64_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t434t=0;
  float__t415t(__t434t,&__t435t__);
  lt__t230t(x,__t435t__,&__t436t__);
  if(__t436t__){
  __t_errcode=6;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5882t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void circ_line__t5695t(double window__size__width, double window__size__height, const char* window__title, char* __t5883t, double pos__x, double pos__y, uint64_t radius, uint64_t thickness, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a, double* __t5884t, double* __t5885t, const char** __t5886t, char* __t5887t) {
  char window__ready=*__t5883t;
  double inner=0;
  double outer=0;
  inner=(radius>thickness)?(float)(radius-thickness):0.0f;
  outer=(float)radius;
  DrawRing((Vector2){
  (float)pos__x,(float)pos__y}
  ,inner,outer,0,360,64,(Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t5883t=window__ready;
  *__t5884t=window__size__width;
  *__t5885t=window__size__height;
  *__t5886t=window__title;
  *__t5887t=window__ready;
}

static inline __attribute__((always_inline)) int draw__t5733t(double self__cx, double self__cy, double self__vx, double self__vy, double self__radius, double win__size__width, double win__size__height, const char* win__title, char* __t5888t) {
  char win__ready=*__t5888t;
  uint64_t __t5734t=0;
  uint64_t __t5735t=0;
  uint64_t __t5736t=0;
  uint8_t __t5737t__r=0;
  uint8_t __t5737t__g=0;
  uint8_t __t5737t__b=0;
  uint8_t __t5737t__a=0;
  uint8_t white__r=0;
  uint8_t white__g=0;
  uint8_t white__b=0;
  uint8_t white__a=0;
  uint64_t __t5738t=0;
  uint64_t __t5739t=0;
  uint64_t __t5740t=0;
  uint8_t __t5741t__r=0;
  uint8_t __t5741t__g=0;
  uint8_t __t5741t__b=0;
  uint8_t __t5741t__a=0;
  uint8_t teal__r=0;
  uint8_t teal__g=0;
  uint8_t teal__b=0;
  uint8_t teal__a=0;
  uint64_t __t5742t=0;
  uint64_t __t5743t=0;
  uint64_t __t5744t=0;
  uint64_t __t5745t=0;
  uint8_t __t5746t__r=0;
  uint8_t __t5746t__g=0;
  uint8_t __t5746t__b=0;
  uint8_t __t5746t__a=0;
  uint8_t shadow__r=0;
  uint8_t shadow__g=0;
  uint8_t shadow__b=0;
  uint8_t shadow__a=0;
  double pos__cx=0;
  double pos__cy=0;
  double __t5747t=0;
  double __t5748t__=0;
  double __t5749t=0;
  double __t5750t__=0;
  double __t5751t__size__width=0;
  double __t5751t__size__height=0;
  const char* __t5751t__title=0;
  char __t5751t__ready=0;
  double __t5752t__size__width=0;
  double __t5752t__size__height=0;
  const char* __t5752t__title=0;
  char __t5752t__ready=0;
  uint64_t __t5753t__=0;
  uint64_t __t5754t=0;
  double __t5755t__size__width=0;
  double __t5755t__size__height=0;
  const char* __t5755t__title=0;
  char __t5755t__ready=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t5734t=255;
  __t5735t=255;
  __t5736t=255;
  __t_errcode=Color__t5635t(__t5734t,__t5735t,__t5736t,&__t5737t__r,&__t5737t__g,&__t5737t__b,&__t5737t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  white__r=__t5737t__r;
  white__g=__t5737t__g;
  white__b=__t5737t__b;
  white__a=__t5737t__a;
  __t5738t=0;
  __t5739t=200;
  __t5740t=180;
  __t_errcode=Color__t5635t(__t5738t,__t5739t,__t5740t,&__t5741t__r,&__t5741t__g,&__t5741t__b,&__t5741t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  teal__r=__t5741t__r;
  teal__g=__t5741t__g;
  teal__b=__t5741t__b;
  teal__a=__t5741t__a;
  __t5742t=0;
  __t5743t=200;
  __t5744t=180;
  __t5745t=60;
  __t_errcode=Color__t5629t(__t5742t,__t5743t,__t5744t,__t5745t,&__t5746t__r,&__t5746t__g,&__t5746t__b,&__t5746t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  shadow__r=__t5746t__r;
  shadow__g=__t5746t__g;
  shadow__b=__t5746t__b;
  shadow__a=__t5746t__a;
  pos__cx=self__cx;
  pos__cy=self__cy;
  __t5747t=4.0;
  add__t153t(self__cx,__t5747t,&__t5748t__);
  __t5749t=4.0;
  add__t153t(self__cy,__t5749t,&__t5750t__);
  circ__t5692t(win__size__width,win__size__height,win__title,&win__ready,__t5748t__,__t5750t__,self__radius,shadow__r,shadow__g,shadow__b,shadow__a,&__t5751t__size__width,&__t5751t__size__height,&__t5751t__title,&__t5751t__ready);
  circ__t5692t(__t5751t__size__width,__t5751t__size__height,__t5751t__title,&__t5751t__ready,pos__cx,pos__cy,self__radius,teal__r,teal__g,teal__b,teal__a,&__t5752t__size__width,&__t5752t__size__height,&__t5752t__title,&__t5752t__ready);
  __t_errcode=nat__t431t(self__radius,&__t5753t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5754t=2;
  circ_line__t5695t(__t5752t__size__width,__t5752t__size__height,__t5752t__title,&__t5752t__ready,pos__cx,pos__cy,__t5753t__,__t5754t,white__r,white__g,white__b,white__a,&__t5755t__size__width,&__t5755t__size__height,&__t5755t__title,&__t5755t__ready);
  
  __t_failure:
  goto __t_skip_returns;*__t5888t=win__ready;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5756t() {
  double __t5757t=0;
  double __t5758t=0;
  double __t5759t__width=0;
  double __t5759t__height=0;
  double __t5761t__size__width=0;
  double __t5761t__size__height=0;
  const char* __t5761t__title=0;
  char __t5761t__ready=0;
  double win__size__width=0;
  double win__size__height=0;
  const char* win__title=0;
  char win__ready=0;
  uint64_t __t5762t=0;
  uint64_t N=0;
  char* __t5765t__unsafe_ptr=0;
  uint64_t __t5765t__unsafe_size=0;
  uint16_t __t5765t__unsafe_offset=0;
  uint16_t __t5765t__unsafe_align=0;
  char* __t5766t__unsafe_ptr=0;
  uint64_t __t5766t__unsafe_size=0;
  uint16_t __t5766t__unsafe_offset=0;
  uint16_t __t5766t__unsafe_align=0;
  char __t5767t____t534t__=0;
  char* circles__unsafe_ptr=0;
  uint64_t circles__unsafe_size=0;
  uint16_t circles__unsafe_offset=0;
  uint16_t circles__unsafe_align=0;
  uint64_t __t5768t=0;
  char __t5769t=0;
  char* __t5770t__=0;
  char* create_circle=0;
  double __t5771t__=0;
  double i=0;
  double __t5772t=0;
  double __t5773t=0;
  double __t5774t=0;
  double __t5775t__=0;
  double __t5776t=0;
  double __t5777t__=0;
  double __t5778t=0;
  double __t5779t__cx=0;
  double __t5779t__cy=0;
  double __t5779t__vx=0;
  double __t5779t__vy=0;
  double __t5779t__radius=0;
  char __t5780t__=0;
  double __t5781t__=0;
  double dt=0;
  uint64_t __t5782t=0;
  char __t5783t=0;
  char* __t5784t__=0;
  char* proc_circle=0;
  char __t5786t__=0;
  char frame=0;
  uint64_t __t5788t=0;
  uint64_t __t5789t=0;
  uint64_t __t5790t=0;
  uint8_t __t5791t__r=0;
  uint8_t __t5791t__g=0;
  uint8_t __t5791t__b=0;
  uint8_t __t5791t__a=0;
  double __t5792t__size__width=0;
  double __t5792t__size__height=0;
  const char* __t5792t__title=0;
  char __t5792t__ready=0;
  uint64_t __t5793t=0;
  char __t5794t=0;
  char* __t5795t__=0;
  double __t5796t__cx=0;
  double __t5796t__cy=0;
  double __t5796t__vx=0;
  double __t5796t__vy=0;
  double __t5796t__radius=0;
  double draw_circle__cx=0;
  double draw_circle__cy=0;
  double draw_circle__vx=0;
  double draw_circle__vy=0;
  double draw_circle__radius=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t5757t=800.0;
  __t5758t=600.0;
  Size__t5643t(__t5757t,__t5758t,&__t5759t__width,&__t5759t__height);
  Window__t5644t(__t5759t__width,__t5759t__height,__t5760t,&__t5761t__size__width,&__t5761t__size__height,&__t5761t__title,&__t5761t__ready);
  win__size__width=__t5761t__size__width;
  win__size__height=__t5761t__size__height;
  win__title=__t5761t__title;
  win__ready=__t5761t__ready;
  __t5762t=1000;
  N=__t5762t;
  Circle____t_buffer____buffer__t5763t(&__t5765t__unsafe_ptr,&__t5765t__unsafe_size,&__t5765t__unsafe_offset,&__t5765t__unsafe_align);
  __t_errcode=alloc__t532t(&__t5765t__unsafe_ptr,&__t5765t__unsafe_size,&__t5765t__unsafe_offset,&__t5765t__unsafe_align,N,&__t5766t__unsafe_ptr,&__t5766t__unsafe_size,&__t5766t__unsafe_offset,&__t5766t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  circles__unsafe_ptr=__t5766t__unsafe_ptr;
  circles__unsafe_size=__t5766t__unsafe_size;
  circles__unsafe_offset=__t5766t__unsafe_offset;
  circles__unsafe_align=__t5766t__unsafe_align;
  __t5768t=0;
  while(1){
  __t_complain=mutget__t629t(&circles__unsafe_ptr,&circles__unsafe_size,&circles__unsafe_offset,&circles__unsafe_align,__t5768t,&__t5770t__);
  __t5769t=__t_complain;
  create_circle=__t5770t__;
  __t5769t=__t5769t==0;
  __t5768t=__t5768t+1;
  if(!__t5769t){
  break;
  }
  float__t415t(__t5768t,&__t5771t__);
  i=__t5771t__;
  __t5772t=400.0;
  __t5773t=300.0;
  __t5774t=200.0;
  sub__t326t(__t5774t,i,&__t5775t__);
  __t5776t=160.0;
  add__t153t(__t5776t,i,&__t5777t__);
  __t5778t=30.0;
  Circle__t5697t(__t5772t,__t5773t,__t5775t__,__t5777t__,__t5778t,&__t5779t__cx,&__t5779t__cy,&__t5779t__vx,&__t5779t__vy,&__t5779t__radius);
  if(!create_circle){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(create_circle,&__t5779t__cx,8);
  memcpy(create_circle+8,&__t5779t__cy,8);
  memcpy(create_circle+16,&__t5779t__vx,8);
  memcpy(create_circle+24,&__t5779t__vy,8);
  memcpy(create_circle+32,&__t5779t__radius,8);
  }
  while(1){
  is_open__t5648t(win__size__width,win__size__height,win__title,win__ready,&__t5780t__);
  if(!__t5780t__){
  break;
  }
  dt__t5696t(&__t5781t__);
  dt=__t5781t__;
  __t5782t=0;
  while(1){
  __t_complain=mutget__t629t(&circles__unsafe_ptr,&circles__unsafe_size,&circles__unsafe_offset,&circles__unsafe_align,__t5782t,&__t5784t__);
  __t5783t=__t_complain;
  proc_circle=__t5784t__;
  __t5783t=__t5783t==0;
  __t5782t=__t5782t+1;
  if(!__t5783t){
  break;
  }
  __t_errcode=process__t5703t(&proc_circle,dt);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=draw__t5650t(win__size__width,win__size__height,win__title,&win__ready,&__t5786t__);
  if(__t_errcode){
  goto __t_failure;
  }
  frame=__t5786t__;
  __t5788t=20;
  __t5789t=20;
  __t5790t=60;
  __t_errcode=Color__t5635t(__t5788t,__t5789t,__t5790t,&__t5791t__r,&__t5791t__g,&__t5791t__b,&__t5791t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  clear__t5652t(win__size__width,win__size__height,win__title,&win__ready,__t5791t__r,__t5791t__g,__t5791t__b,__t5791t__a,&__t5792t__size__width,&__t5792t__size__height,&__t5792t__title,&__t5792t__ready);
  __t5793t=0;
  while(1){
  __t_complain=get__t636t(circles__unsafe_ptr,circles__unsafe_size,circles__unsafe_offset,circles__unsafe_align,__t5793t,&__t5795t__);
  __t5794t=__t_complain;
  if(!__t5795t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t5796t__cx,__t5795t__,8);
  memcpy(&__t5796t__cy,__t5795t__+8,8);
  memcpy(&__t5796t__vx,__t5795t__+16,8);
  memcpy(&__t5796t__vy,__t5795t__+24,8);
  memcpy(&__t5796t__radius,__t5795t__+32,8);
  }
  draw_circle__cx=__t5796t__cx;
  draw_circle__cy=__t5796t__cy;
  draw_circle__vx=__t5796t__vx;
  draw_circle__vy=__t5796t__vy;
  draw_circle__radius=__t5796t__radius;
  __t5794t=__t5794t==0;
  __t5793t=__t5793t+1;
  if(!__t5794t){
  break;
  }
  __t_errcode=draw__t5733t(draw_circle__cx,draw_circle__cy,draw_circle__vx,draw_circle__vy,draw_circle__radius,win__size__width,win__size__height,win__title,&win__ready);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  if(__t5786t__){
  EndDrawing();
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5766t__unsafe_ptr,&__t5767t____t534t__);
  if(__t5767t____t534t__){
  free__t503t(&__t5766t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5756t();return 0;}