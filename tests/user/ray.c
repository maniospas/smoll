#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
#include "std/extern/raysupport.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t6672t="Moving circle";
const char* const __t6673t="std/ArianaVioleta-dz2K.ttf";
const char* const __t6715t="demo";
static const char* __t_all_errcodes[50] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot allocate a buffer of unsized type",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
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
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"buffer size not divisible by vector rows",
"row out of bounds",
"column out of bounds",
"matrix columns must match vector length",
"vector length must match matrix rows",
"inner dimensions must agree",
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32",
"alopeny drawing on window"
};

static inline __attribute__((always_inline)) void exists__t982t(const char* c, char* __t6724t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t6724t=z;
}

static inline __attribute__((always_inline)) void unsafe_open_window__t6204t(double size__width, double size__height, const char* title, const char* font_path) {
  char __t6205t__=0;
  int64_t __smolambda_n=0;
  int64_t c=0;
  SetTraceLogLevel(LOG_NONE);
  InitWindow(size__width,size__height,title);
  exists__t982t(font_path,&__t6205t__);
  if(__t6205t__){
  __smolambda_n=0;
  for(c=32;
  c<=126;
  c++)__smolambda_codepoints[__smolambda_n++]=c;
  __smolambda_codepoints[__smolambda_n++]=0x2018;
  __smolambda_codepoints[__smolambda_n++]=0x2019;
  for(int c=0x2500;
  c<=0x257F;
  c++)__smolambda_codepoints[__smolambda_n++]=c;
  __smolambda_font=LoadFontEx(font_path,128,__smolambda_codepoints,__smolambda_n);
  }
}

static inline __attribute__((always_inline)) void window__t6206t(double size__width, double size__height, const char* title, const char* font_path, double* __t6725t, double* __t6726t, const char** __t6727t, char* __t6728t) {
  char __t6207t=0;
  char __t6208t=0;
  char openy=0;
  __t6207t=0;
  __t6208t=__t6207t;
  openy=__t6208t;
  unsafe_open_window__t6204t(size__width,size__height,title,font_path);
  goto __t_return;
  __t_return:
  *__t6725t=size__width;
  *__t6726t=size__height;
  *__t6727t=title;
  *__t6728t=openy;
}

static inline __attribute__((always_inline)) void circle____t_buffer____buffer__t6677t(char** __t6729t, uint64_t* __t6730t, uint16_t* __t6731t, uint16_t* __t6732t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=40;
  *__t6729t=unsafe_ptr;
  *__t6730t=unsafe_size;
  *__t6731t=unsafe_offset;
  *__t6732t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t605t(char* x, char* __t6733t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6733t=z;
}

static inline __attribute__((always_inline)) void free__t675t(char** __t6734t) {
  char* allocated=*__t6734t;
  if(allocated){
  free(allocated);
  }
  *__t6734t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t6735t) {
  int value=0;
  *__t6735t=value;
}

static inline __attribute__((always_inline)) void not__t46t(int __t_anon0, int* __t6736t) {
  int __t47t__=0;
  false__t14t(&__t47t__);
  goto __t_return;
  __t_return:
  *__t6736t=__t47t__;
}

static inline __attribute__((always_inline)) void is_different__t104t(uint64_t x, uint64_t y, int* __t6737t) {
  int __t105t=0;
  int __t106t__=0;
  not__t46t(__t105t,&__t106t__);
  goto __t_return;
  __t_return:
  *__t6737t=__t106t__;
}

static inline __attribute__((always_inline)) void eq__t129t(uint64_t x, uint64_t y, char* __t6738t) {
  int __t130t__=0;
  char z=0;
  is_different__t104t(x,y,&__t130t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6738t=z;
}

static inline __attribute__((always_inline)) void neq__t153t(uint64_t x, uint64_t y, char* __t6739t) {
  int __t154t__=0;
  char z=0;
  is_different__t104t(x,y,&__t154t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6739t=z;
}

static inline __attribute__((always_inline)) void nat__t679t(uint16_t x, uint64_t* __t6740t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6740t=value;
}

static inline __attribute__((always_inline)) void mul__t208t(uint64_t x, uint64_t y, uint64_t* __t6741t) {
  int __t209t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t209t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6741t=z;
}

static inline __attribute__((always_inline)) void zero__t676t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t37t(char value, char* __t6742t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6742t=z;
}

static inline __attribute__((always_inline)) int alloc__t668t(uint64_t bytes, char** __t6743t) {
  char* allocated=0;
  char __t669t__=0;
  char __t670t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t605t(allocated,&__t669t__);
  not__t37t(__t669t__,&__t670t__);
  if(__t670t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6743t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t704t(char** __t6744t, uint64_t* __t6745t, uint16_t* __t6746t, uint16_t* __t6747t, uint64_t size, char** __t6748t, uint64_t* __t6749t, uint16_t* __t6750t, uint16_t* __t6751t) {
  char* buffer__unsafe_ptr=*__t6744t;
  uint64_t buffer__unsafe_size=*__t6745t;
  uint16_t buffer__unsafe_offset=*__t6746t;
  uint16_t buffer__unsafe_align=*__t6747t;
  char __t706t__=0;
  char __t708t__=0;
  uint64_t __t709t=0;
  char __t710t__=0;
  uint64_t __t711t=0;
  uint64_t __t712t__=0;
  uint64_t __t713t__=0;
  uint64_t __t715t=0;
  char __t716t__=0;
  uint64_t __t717t__=0;
  uint64_t __t718t__=0;
  uint64_t bytes=0;
  uint64_t __t719t=0;
  char __t720t__=0;
  char* __t721t__=0;
  uint64_t __t723t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t129t(buffer__unsafe_size,size,&__t708t__);
  if(__t708t__){
  __t709t=0;
  neq__t153t(size,__t709t,&__t710t__);
  if(__t710t__){
  __t711t=0;
  nat__t679t(buffer__unsafe_align,&__t712t__);
  mul__t208t(__t712t__,size,&__t713t__);
  zero__t676t(buffer__unsafe_ptr,__t711t,__t713t__);
  }
  goto __t_return;
  }
  __t715t=0;
  neq__t153t(buffer__unsafe_size,__t715t,&__t716t__);
  if(__t716t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t717t__);
  mul__t208t(__t717t__,size,&__t718t__);
  bytes=__t718t__;
  __t719t=0;
  eq__t129t(bytes,__t719t,&__t720t__);
  if(__t720t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t668t(bytes,&__t721t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t723t=0;
  zero__t676t(__t721t__,__t723t,bytes);
  buffer__unsafe_ptr=__t721t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t605t(buffer__unsafe_ptr,&__t706t__);
  if(__t706t__){
  free__t675t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6744t=buffer__unsafe_ptr;
  *__t6745t=buffer__unsafe_size;
  *__t6746t=buffer__unsafe_offset;
  *__t6747t=buffer__unsafe_align;
  *__t6748t=buffer__unsafe_ptr;
  *__t6749t=buffer__unsafe_size;
  *__t6750t=buffer__unsafe_offset;
  *__t6751t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t333t(uint64_t x, uint64_t y, char* __t6752t) {
  int __t334t__=0;
  char z=0;
  is_different__t104t(x,y,&__t334t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t6752t=z;
}

static inline __attribute__((always_inline)) void add__t184t(uint64_t x, uint64_t y, uint64_t* __t6753t) {
  int __t185t__=0;
  uint64_t z=0;
  is_different__t104t(x,y,&__t185t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6753t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t6754t) {
  *__t6754t=to;
}

static inline __attribute__((always_inline)) void add__t677t(char* allocated, uint64_t offset, char** __t6755t) {
  char* element=0;
  char* __t678t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t678t__);
  goto __t_return;
  __t_return:
  *__t6755t=__t678t__;
}

static inline __attribute__((always_inline)) int mutget__t817t(char** __t6756t, uint64_t* __t6757t, uint16_t* __t6758t, uint16_t* __t6759t, uint64_t i, char** __t6760t) {
  char* buffer__unsafe_ptr=*__t6756t;
  uint64_t buffer__unsafe_size=*__t6757t;
  uint16_t buffer__unsafe_offset=*__t6758t;
  uint16_t buffer__unsafe_align=*__t6759t;
  char __t818t__=0;
  uint64_t __t819t__=0;
  uint64_t __t820t__=0;
  uint64_t __t821t__=0;
  uint64_t __t822t__=0;
  char* __t823t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t333t(i,buffer__unsafe_size,&__t818t__);
  if(__t818t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t819t__);
  mul__t208t(i,__t819t__,&__t820t__);
  nat__t679t(buffer__unsafe_offset,&__t821t__);
  add__t184t(__t820t__,__t821t__,&__t822t__);
  add__t677t(buffer__unsafe_ptr,__t822t__,&__t823t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6756t=buffer__unsafe_ptr;
  *__t6757t=buffer__unsafe_size;
  *__t6758t=buffer__unsafe_offset;
  *__t6759t=buffer__unsafe_align;
  *__t6760t=__t823t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t6761t) {
  int value=0;
  *__t6761t=value;
}

static inline __attribute__((always_inline)) void not__t48t(int __t_anon0, int* __t6762t) {
  int __t49t__=0;
  true__t15t(&__t49t__);
  goto __t_return;
  __t_return:
  *__t6762t=__t49t__;
}

static inline __attribute__((always_inline)) void float__t573t(uint64_t x, double* __t6763t) {
  int __t574t=0;
  int __t575t__=0;
  double z=0;
  not__t48t(__t574t,&__t575t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t6763t=z;
}

static inline __attribute__((always_inline)) void is_different__t80t(double x, double y, int* __t6764t) {
  int __t81t=0;
  int __t82t__=0;
  not__t46t(__t81t,&__t82t__);
  goto __t_return;
  __t_return:
  *__t6764t=__t82t__;
}

static inline __attribute__((always_inline)) void sub__t335t(double x, double y, double* __t6765t) {
  int __t336t__=0;
  double z=0;
  is_different__t80t(x,y,&__t336t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t6765t=z;
}

static inline __attribute__((always_inline)) void add__t162t(double x, double y, double* __t6766t) {
  int __t163t__=0;
  double z=0;
  is_different__t80t(x,y,&__t163t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6766t=z;
}

static inline __attribute__((always_inline)) void circle__t6609t(double _cx, double _cy, double _vx, double _vy, double _radius, double* __t6767t, double* __t6768t, double* __t6769t, double* __t6770t, double* __t6771t) {
  double __t6610t=0;
  double cx=0;
  double __t6611t=0;
  double cy=0;
  double __t6612t=0;
  double vx=0;
  double __t6613t=0;
  double vy=0;
  double __t6614t=0;
  double radius=0;
  __t6610t=_cx;
  cx=__t6610t;
  __t6611t=_cy;
  cy=__t6611t;
  __t6612t=_vx;
  vx=__t6612t;
  __t6613t=_vy;
  vy=__t6613t;
  __t6614t=_radius;
  radius=__t6614t;
  goto __t_return;
  __t_return:
  *__t6767t=cx;
  *__t6768t=cy;
  *__t6769t=vx;
  *__t6770t=vy;
  *__t6771t=radius;
}

static inline __attribute__((always_inline)) void is_open__t6211t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6772t, char* __t6773t) {
  char WINDOW__openy=*__t6772t;
  char ret=0;
  char __t6212t__=0;
  ret=WindowShouldClose();
  not__t37t(ret,&__t6212t__);
  goto __t_return;
  __t_return:
  *__t6772t=WINDOW__openy;
  *__t6773t=__t6212t__;
}

static inline __attribute__((always_inline)) void dt__t6270t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char WINDOW__openy, double* __t6774t) {
  double dt=0;
  dt=GetFrameTime();
  goto __t_return;
  __t_return:
  *__t6774t=dt;
}

static inline __attribute__((always_inline)) void mul__t186t(double x, double y, double* __t6775t) {
  int __t187t__=0;
  double z=0;
  is_different__t80t(x,y,&__t187t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6775t=z;
}

static inline __attribute__((always_inline)) void lt__t239t(double x, double y, char* __t6776t) {
  int __t240t__=0;
  char z=0;
  is_different__t80t(x,y,&__t240t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6776t=z;
}

static inline __attribute__((always_inline)) void neg__t159t(double x, double* __t6777t) {
  double z=0;
  z=(0-x);
  goto __t_return;
  __t_return:
  *__t6777t=z;
}

static inline __attribute__((always_inline)) void abs__t2154t(double x, double* __t6778t) {
  double __t2155t=0;
  char __t2156t__=0;
  double __t2157t__=0;
  __t2155t=0.0;
  lt__t239t(x,__t2155t,&__t2156t__);
  if(__t2156t__){
  neg__t159t(x,&__t2157t__);
  goto __t_return;
  }
  __t2157t__=x;
  goto __t_return;
  __t_return:
  *__t6778t=__t2157t__;
}

static inline __attribute__((always_inline)) void gt__t263t(double x, double y, char* __t6779t) {
  int __t264t__=0;
  char z=0;
  is_different__t80t(x,y,&__t264t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6779t=z;
}

static inline __attribute__((always_inline)) int process__t6615t(char** __t6780t, double dt) {
  char* _self=*__t6780t;
  double __t6616t__cx=0;
  double __t6616t__cy=0;
  double __t6616t__vx=0;
  double __t6616t__vy=0;
  double __t6616t__radius=0;
  double __t6617t__cx=0;
  double __t6617t__cy=0;
  double __t6617t__vx=0;
  double __t6617t__vy=0;
  double __t6617t__radius=0;
  double self__cx=0;
  double self__cy=0;
  double self__vx=0;
  double self__vy=0;
  double self__radius=0;
  double __t6618t__=0;
  double __t6619t__=0;
  double __t6620t__=0;
  double __t6621t__=0;
  double __t6622t__=0;
  double __t6623t=0;
  char __t6624t__=0;
  double __t6625t__=0;
  double __t6626t__=0;
  double __t6627t=0;
  char __t6628t__=0;
  double __t6629t=0;
  double __t6630t__=0;
  double __t6631t=0;
  double __t6632t__=0;
  double __t6633t__=0;
  double __t6634t__=0;
  double __t6635t=0;
  char __t6636t__=0;
  double __t6637t__=0;
  double __t6638t__=0;
  double __t6639t=0;
  char __t6640t__=0;
  double __t6641t=0;
  double __t6642t__=0;
  double __t6643t=0;
  double __t6644t__=0;
  double __t6645t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!_self){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t6616t__cx,_self,8);
  memcpy(&__t6616t__cy,_self+8,8);
  memcpy(&__t6616t__vx,_self+16,8);
  memcpy(&__t6616t__vy,_self+24,8);
  memcpy(&__t6616t__radius,_self+32,8);
  __t6617t__cx=__t6616t__cx;
  __t6617t__cy=__t6616t__cy;
  __t6617t__vx=__t6616t__vx;
  __t6617t__vy=__t6616t__vy;
  __t6617t__radius=__t6616t__radius;
  self__cx=__t6617t__cx;
  self__cy=__t6617t__cy;
  self__vx=__t6617t__vx;
  self__vy=__t6617t__vy;
  self__radius=__t6617t__radius;
  mul__t186t(self__vx,dt,&__t6618t__);
  add__t162t(self__cx,__t6618t__,&__t6619t__);
  self__cx=__t6619t__;
  mul__t186t(self__vy,dt,&__t6620t__);
  add__t162t(self__cy,__t6620t__,&__t6621t__);
  self__cy=__t6621t__;
  sub__t335t(self__cx,self__radius,&__t6622t__);
  __t6623t=0.0;
  lt__t239t(__t6622t__,__t6623t,&__t6624t__);
  if(__t6624t__){
  self__cx=self__radius;
  abs__t2154t(self__vx,&__t6625t__);
  self__vx=__t6625t__;
  }
  add__t162t(self__cx,self__radius,&__t6626t__);
  __t6627t=800.0;
  gt__t263t(__t6626t__,__t6627t,&__t6628t__);
  if(__t6628t__){
  __t6629t=800.0;
  sub__t335t(__t6629t,self__radius,&__t6630t__);
  self__cx=__t6630t__;
  __t6631t=0.0;
  abs__t2154t(self__vx,&__t6632t__);
  sub__t335t(__t6631t,__t6632t__,&__t6633t__);
  self__vx=__t6633t__;
  }
  sub__t335t(self__cy,self__radius,&__t6634t__);
  __t6635t=0.0;
  lt__t239t(__t6634t__,__t6635t,&__t6636t__);
  if(__t6636t__){
  self__cy=self__radius;
  abs__t2154t(self__vy,&__t6637t__);
  self__vy=__t6637t__;
  }
  add__t162t(self__cy,self__radius,&__t6638t__);
  __t6639t=600.0;
  gt__t263t(__t6638t__,__t6639t,&__t6640t__);
  if(__t6640t__){
  __t6641t=600.0;
  sub__t335t(__t6641t,self__radius,&__t6642t__);
  self__cy=__t6642t__;
  __t6643t=0.0;
  abs__t2154t(self__vy,&__t6644t__);
  sub__t335t(__t6643t,__t6644t__,&__t6645t__);
  self__vy=__t6645t__;
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
  goto __t_skip_returns;*__t6780t=_self;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_begin_drawing__t6213t() {
  BeginDrawing();
}

static inline __attribute__((always_inline)) void unsafe_end_drawing__t6214t() {
  EndDrawing();
}

static inline __attribute__((always_inline)) int draw__t6215t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6781t, char* __t6782t) {
  char WINDOW__openy=*__t6781t;
  char __t6216t=0;
  char is_drawing=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(WINDOW__openy){
  __t_errcode=49;
  goto __t_failure;
  }
  __t6216t=1;
  is_drawing=__t6216t;
  unsafe_begin_drawing__t6213t();
  goto __t_return;
  
  __t_failure:if(is_drawing){
  unsafe_end_drawing__t6214t();
  }
  
  goto __t_skip_returns;__t_return:
  *__t6781t=WINDOW__openy;
  *__t6782t=is_drawing;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t285t(uint64_t x, uint64_t y, char* __t6783t) {
  int __t286t__=0;
  char z=0;
  is_different__t104t(x,y,&__t286t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6783t=z;
}

static inline __attribute__((always_inline)) int nat8__t6157t(uint64_t x, uint8_t* __t6784t) {
  uint64_t __t6158t=0;
  char __t6159t__=0;
  uint8_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t6158t=255;
  gt__t285t(x,__t6158t,&__t6159t__);
  if(__t6159t__){
  __t_errcode=46;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6784t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int color__t6195t(uint64_t _r, uint64_t _g, uint64_t _b, uint8_t* __t6785t, uint8_t* __t6786t, uint8_t* __t6787t, uint8_t* __t6788t) {
  uint64_t __t6197t=0;
  uint64_t _a=0;
  uint8_t __t6198t__=0;
  uint8_t r=0;
  uint8_t __t6199t__=0;
  uint8_t g=0;
  uint8_t __t6200t__=0;
  uint8_t b=0;
  uint8_t __t6201t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t6197t=255;
  _a=__t6197t;
  __t_errcode=nat8__t6157t(_r,&__t6198t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t6198t__;
  __t_errcode=nat8__t6157t(_g,&__t6199t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t6199t__;
  __t_errcode=nat8__t6157t(_b,&__t6200t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t6200t__;
  __t_errcode=nat8__t6157t(_a,&__t6201t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t6201t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6785t=r;
  *__t6786t=g;
  *__t6787t=b;
  *__t6788t=a;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void clear__t6219t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6789t, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__openy=*__t6789t;
  ClearBackground((Color){
  color__r,color__g,color__b,color__a}
  );
  *__t6789t=WINDOW__openy;
}

static inline __attribute__((always_inline)) int get__t824t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t6790t) {
  char __t825t__=0;
  uint64_t __t826t__=0;
  uint64_t __t827t__=0;
  uint64_t __t828t__=0;
  uint64_t __t829t__=0;
  char* __t830t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t333t(i,buffer__unsafe_size,&__t825t__);
  if(__t825t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t679t(buffer__unsafe_align,&__t826t__);
  mul__t208t(i,__t826t__,&__t827t__);
  nat__t679t(buffer__unsafe_offset,&__t828t__);
  add__t184t(__t827t__,__t828t__,&__t829t__);
  add__t677t(buffer__unsafe_ptr,__t829t__,&__t830t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6790t=__t830t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int color__t6189t(uint64_t _r, uint64_t _g, uint64_t _b, uint64_t _a, uint8_t* __t6791t, uint8_t* __t6792t, uint8_t* __t6793t, uint8_t* __t6794t) {
  uint8_t __t6191t__=0;
  uint8_t r=0;
  uint8_t __t6192t__=0;
  uint8_t g=0;
  uint8_t __t6193t__=0;
  uint8_t b=0;
  uint8_t __t6194t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat8__t6157t(_r,&__t6191t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t6191t__;
  __t_errcode=nat8__t6157t(_g,&__t6192t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t6192t__;
  __t_errcode=nat8__t6157t(_b,&__t6193t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t6193t__;
  __t_errcode=nat8__t6157t(_a,&__t6194t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t6194t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6791t=r;
  *__t6792t=g;
  *__t6793t=b;
  *__t6794t=a;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void circ__t6266t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6795t, double pos__x, double pos__y, double radius, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__openy=*__t6795t;
  DrawCircleV((Vector2){
  (float)pos__x,(float)pos__y}
  ,(float)radius,(Color){
  color__r,color__g,color__b,color__a}
  );
  *__t6795t=WINDOW__openy;
}

static inline __attribute__((always_inline)) int nat__t589t(double x, uint64_t* __t6796t) {
  uint64_t __t592t=0;
  double __t593t__=0;
  char __t594t__=0;
  uint64_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t592t=0;
  float__t573t(__t592t,&__t593t__);
  lt__t239t(x,__t593t__,&__t594t__);
  if(__t594t__){
  __t_errcode=7;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6796t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void circ_line__t6269t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6797t, double pos__x, double pos__y, uint64_t radius, uint64_t thickness, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__openy=*__t6797t;
  double inner=0;
  double outer=0;
  inner=(radius>thickness)?(float)(radius-thickness):0.0f;
  outer=(float)radius;
  DrawRing((Vector2){
  (float)pos__x,(float)pos__y}
  ,inner,outer,0,360,64,(Color){
  color__r,color__g,color__b,color__a}
  );
  *__t6797t=WINDOW__openy;
}

static inline __attribute__((always_inline)) int draw__t6646t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6798t, double self__cx, double self__cy, double self__vx, double self__vy, double self__radius) {
  char WINDOW__openy=*__t6798t;
  uint64_t __t6647t=0;
  uint64_t __t6648t=0;
  uint64_t __t6649t=0;
  uint8_t __t6650t__r=0;
  uint8_t __t6650t__g=0;
  uint8_t __t6650t__b=0;
  uint8_t __t6650t__a=0;
  uint8_t white__r=0;
  uint8_t white__g=0;
  uint8_t white__b=0;
  uint8_t white__a=0;
  uint64_t __t6651t=0;
  uint64_t __t6652t=0;
  uint64_t __t6653t=0;
  uint8_t __t6654t__r=0;
  uint8_t __t6654t__g=0;
  uint8_t __t6654t__b=0;
  uint8_t __t6654t__a=0;
  uint8_t teal__r=0;
  uint8_t teal__g=0;
  uint8_t teal__b=0;
  uint8_t teal__a=0;
  uint64_t __t6655t=0;
  uint64_t __t6656t=0;
  uint64_t __t6657t=0;
  uint64_t __t6658t=0;
  uint8_t __t6659t__r=0;
  uint8_t __t6659t__g=0;
  uint8_t __t6659t__b=0;
  uint8_t __t6659t__a=0;
  uint8_t shadow__r=0;
  uint8_t shadow__g=0;
  uint8_t shadow__b=0;
  uint8_t shadow__a=0;
  double pos__cx=0;
  double pos__cy=0;
  double __t6660t=0;
  double __t6661t__=0;
  double __t6662t=0;
  double __t6663t__=0;
  uint64_t __t6666t__=0;
  uint64_t __t6667t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t6647t=255;
  __t6648t=255;
  __t6649t=255;
  __t_errcode=color__t6195t(__t6647t,__t6648t,__t6649t,&__t6650t__r,&__t6650t__g,&__t6650t__b,&__t6650t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  white__r=__t6650t__r;
  white__g=__t6650t__g;
  white__b=__t6650t__b;
  white__a=__t6650t__a;
  __t6651t=0;
  __t6652t=200;
  __t6653t=180;
  __t_errcode=color__t6195t(__t6651t,__t6652t,__t6653t,&__t6654t__r,&__t6654t__g,&__t6654t__b,&__t6654t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  teal__r=__t6654t__r;
  teal__g=__t6654t__g;
  teal__b=__t6654t__b;
  teal__a=__t6654t__a;
  __t6655t=0;
  __t6656t=200;
  __t6657t=180;
  __t6658t=60;
  __t_errcode=color__t6189t(__t6655t,__t6656t,__t6657t,__t6658t,&__t6659t__r,&__t6659t__g,&__t6659t__b,&__t6659t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  shadow__r=__t6659t__r;
  shadow__g=__t6659t__g;
  shadow__b=__t6659t__b;
  shadow__a=__t6659t__a;
  pos__cx=self__cx;
  pos__cy=self__cy;
  __t6660t=4.0;
  add__t162t(self__cx,__t6660t,&__t6661t__);
  __t6662t=4.0;
  add__t162t(self__cy,__t6662t,&__t6663t__);
  circ__t6266t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,__t6661t__,__t6663t__,self__radius,shadow__r,shadow__g,shadow__b,shadow__a);
  circ__t6266t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,pos__cx,pos__cy,self__radius,teal__r,teal__g,teal__b,teal__a);
  __t_errcode=nat__t589t(self__radius,&__t6666t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6667t=2;
  circ_line__t6269t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,pos__cx,pos__cy,__t6666t__,__t6667t,white__r,white__g,white__b,white__a);
  
  __t_failure:
  goto __t_skip_returns;*__t6798t=WINDOW__openy;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void text__t6220t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6799t, const char* txt, double pos__x, double pos__y, double size, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__openy=*__t6799t;
  DrawTextEx(__smolambda_font,txt,(Vector2){
  pos__x,pos__y}
  ,size,1.0f,(Color){
  color__r,color__g,color__b,color__a}
  );
  *__t6799t=WINDOW__openy;
}

static inline __attribute__((always_inline)) int main__t6669t() {
  double __t6670t=0;
  double __t6671t=0;
  double __t6674t__size__width=0;
  double __t6674t__size__height=0;
  const char* __t6674t__title=0;
  char __t6674t__openy=0;
  double __t6675t__size__width=0;
  double __t6675t__size__height=0;
  const char* __t6675t__title=0;
  char __t6675t__openy=0;
  double WINDOW__size__width=0;
  double WINDOW__size__height=0;
  const char* WINDOW__title=0;
  char WINDOW__openy=0;
  uint64_t __t6676t=0;
  uint64_t N=0;
  char* __t6679t__unsafe_ptr=0;
  uint64_t __t6679t__unsafe_size=0;
  uint16_t __t6679t__unsafe_offset=0;
  uint16_t __t6679t__unsafe_align=0;
  char* __t6680t__unsafe_ptr=0;
  uint64_t __t6680t__unsafe_size=0;
  uint16_t __t6680t__unsafe_offset=0;
  uint16_t __t6680t__unsafe_align=0;
  char __t6681t____t706t__=0;
  char* __t6682t__unsafe_ptr=0;
  uint64_t __t6682t__unsafe_size=0;
  uint16_t __t6682t__unsafe_offset=0;
  uint16_t __t6682t__unsafe_align=0;
  char* circles__unsafe_ptr=0;
  uint64_t circles__unsafe_size=0;
  uint16_t circles__unsafe_offset=0;
  uint16_t circles__unsafe_align=0;
  uint64_t __t6683t=0;
  char __t6684t=0;
  char* __t6685t__=0;
  char* create_circle=0;
  double __t6686t__=0;
  double i=0;
  double __t6687t=0;
  double __t6688t=0;
  double __t6689t=0;
  double __t6690t__=0;
  double __t6691t=0;
  double __t6692t__=0;
  double __t6693t=0;
  double __t6694t__cx=0;
  double __t6694t__cy=0;
  double __t6694t__vx=0;
  double __t6694t__vy=0;
  double __t6694t__radius=0;
  char __t6695t__=0;
  double __t6696t__=0;
  double __t6697t=0;
  double __t6698t__=0;
  double dt=0;
  uint64_t __t6699t=0;
  char __t6700t=0;
  char* __t6701t__=0;
  char* proc_circle=0;
  char __t6703t__=0;
  uint64_t __t6705t=0;
  uint64_t __t6706t=0;
  uint64_t __t6707t=0;
  uint8_t __t6708t__r=0;
  uint8_t __t6708t__g=0;
  uint8_t __t6708t__b=0;
  uint8_t __t6708t__a=0;
  uint64_t __t6710t=0;
  char __t6711t=0;
  char* __t6712t__=0;
  double __t6713t__cx=0;
  double __t6713t__cy=0;
  double __t6713t__vx=0;
  double __t6713t__vy=0;
  double __t6713t__radius=0;
  double draw_circle__cx=0;
  double draw_circle__cy=0;
  double draw_circle__vx=0;
  double draw_circle__vy=0;
  double draw_circle__radius=0;
  double __t6716t=0;
  double __t6717t=0;
  double __t6718t=0;
  uint64_t __t6719t=0;
  uint64_t __t6720t=0;
  uint64_t __t6721t=0;
  uint8_t __t6722t__r=0;
  uint8_t __t6722t__g=0;
  uint8_t __t6722t__b=0;
  uint8_t __t6722t__a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t6670t=800.0;
  __t6671t=600.0;
  window__t6206t(__t6670t,__t6671t,__t6672t,__t6673t,&__t6674t__size__width,&__t6674t__size__height,&__t6674t__title,&__t6674t__openy);
  __t6675t__size__width=__t6674t__size__width;
  __t6675t__size__height=__t6674t__size__height;
  __t6675t__title=__t6674t__title;
  __t6675t__openy=__t6674t__openy;
  WINDOW__size__width=__t6675t__size__width;
  WINDOW__size__height=__t6675t__size__height;
  WINDOW__title=__t6675t__title;
  WINDOW__openy=__t6675t__openy;
  __t6676t=10;
  N=__t6676t;
  circle____t_buffer____buffer__t6677t(&__t6679t__unsafe_ptr,&__t6679t__unsafe_size,&__t6679t__unsafe_offset,&__t6679t__unsafe_align);
  __t_errcode=alloc__t704t(&__t6679t__unsafe_ptr,&__t6679t__unsafe_size,&__t6679t__unsafe_offset,&__t6679t__unsafe_align,N,&__t6680t__unsafe_ptr,&__t6680t__unsafe_size,&__t6680t__unsafe_offset,&__t6680t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6682t__unsafe_ptr=__t6680t__unsafe_ptr;
  __t6682t__unsafe_size=__t6680t__unsafe_size;
  __t6682t__unsafe_offset=__t6680t__unsafe_offset;
  __t6682t__unsafe_align=__t6680t__unsafe_align;
  circles__unsafe_ptr=__t6682t__unsafe_ptr;
  circles__unsafe_size=__t6682t__unsafe_size;
  circles__unsafe_offset=__t6682t__unsafe_offset;
  circles__unsafe_align=__t6682t__unsafe_align;
  __t6683t=0-1;
  while(1){
  __t6683t=__t6683t+1;
  __t_complain=mutget__t817t(&circles__unsafe_ptr,&circles__unsafe_size,&circles__unsafe_offset,&circles__unsafe_align,__t6683t,&__t6685t__);
  __t6684t=__t_complain;
  create_circle=__t6685t__;
  __t6684t=__t6684t==0;
  if(!__t6684t){
  break;
  }
  float__t573t(__t6683t,&__t6686t__);
  i=__t6686t__;
  __t6687t=400.0;
  __t6688t=300.0;
  __t6689t=200.0;
  sub__t335t(__t6689t,i,&__t6690t__);
  __t6691t=160.0;
  add__t162t(__t6691t,i,&__t6692t__);
  __t6693t=30.0;
  circle__t6609t(__t6687t,__t6688t,__t6690t__,__t6692t__,__t6693t,&__t6694t__cx,&__t6694t__cy,&__t6694t__vx,&__t6694t__vy,&__t6694t__radius);
  if(!create_circle){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(create_circle,&__t6694t__cx,8);
  memcpy(create_circle+8,&__t6694t__cy,8);
  memcpy(create_circle+16,&__t6694t__vx,8);
  memcpy(create_circle+24,&__t6694t__vy,8);
  memcpy(create_circle+32,&__t6694t__radius,8);
  }
  while(1){
  is_open__t6211t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,&__t6695t__);
  if(!__t6695t__){
  break;
  }
  dt__t6270t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,WINDOW__openy,&__t6696t__);
  __t6697t=3.0;
  mul__t186t(__t6696t__,__t6697t,&__t6698t__);
  dt=__t6698t__;
  __t6699t=0-1;
  while(1){
  __t6699t=__t6699t+1;
  __t_complain=mutget__t817t(&circles__unsafe_ptr,&circles__unsafe_size,&circles__unsafe_offset,&circles__unsafe_align,__t6699t,&__t6701t__);
  __t6700t=__t_complain;
  proc_circle=__t6701t__;
  __t6700t=__t6700t==0;
  if(!__t6700t){
  break;
  }
  __t_errcode=process__t6615t(&proc_circle,dt);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=draw__t6215t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,&__t6703t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6705t=20;
  __t6706t=20;
  __t6707t=60;
  __t_errcode=color__t6195t(__t6705t,__t6706t,__t6707t,&__t6708t__r,&__t6708t__g,&__t6708t__b,&__t6708t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  clear__t6219t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,__t6708t__r,__t6708t__g,__t6708t__b,__t6708t__a);
  __t6710t=0-1;
  while(1){
  __t6710t=__t6710t+1;
  __t_complain=get__t824t(circles__unsafe_ptr,circles__unsafe_size,circles__unsafe_offset,circles__unsafe_align,__t6710t,&__t6712t__);
  __t6711t=__t_complain;
  if(!__t6712t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t6713t__cx,__t6712t__,8);
  memcpy(&__t6713t__cy,__t6712t__+8,8);
  memcpy(&__t6713t__vx,__t6712t__+16,8);
  memcpy(&__t6713t__vy,__t6712t__+24,8);
  memcpy(&__t6713t__radius,__t6712t__+32,8);
  }
  draw_circle__cx=__t6713t__cx;
  draw_circle__cy=__t6713t__cy;
  draw_circle__vx=__t6713t__vx;
  draw_circle__vy=__t6713t__vy;
  draw_circle__radius=__t6713t__radius;
  __t6711t=__t6711t==0;
  if(!__t6711t){
  break;
  }
  __t_errcode=draw__t6646t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,draw_circle__cx,draw_circle__cy,draw_circle__vx,draw_circle__vy,draw_circle__radius);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t6716t=10.0;
  __t6717t=10.0;
  __t6718t=64.0;
  __t6719t=255;
  __t6720t=255;
  __t6721t=255;
  __t_errcode=color__t6195t(__t6719t,__t6720t,__t6721t,&__t6722t__r,&__t6722t__g,&__t6722t__b,&__t6722t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  text__t6220t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,__t6715t,__t6716t,__t6717t,__t6718t,__t6722t__r,__t6722t__g,__t6722t__b,__t6722t__a);
  if(__t6703t__){
  unsafe_end_drawing__t6214t();
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t605t(__t6680t__unsafe_ptr,&__t6681t____t706t__);
  if(__t6681t____t706t__){
  free__t675t(&__t6680t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t6669t();return 0;}