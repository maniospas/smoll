#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
#include "std/extern/raysupport.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t6738t="Moving rects";
const char* const __t6781t="demo";
const char* const __t6739t="std/ArianaVioleta-dz2K.ttf";
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

static inline __attribute__((always_inline)) void exists__t986t(const char* c, char* __t6790t) {
  char z=0;
  z=c!=0;
  goto __t_return;
  __t_return:
  *__t6790t=z;
}

static inline __attribute__((always_inline)) void unsafe_open_window__t6237t(double size__width, double size__height, const char* title, const char* font_path) {
  char __t6238t__=0;
  int64_t __smolambda_n=0;
  int64_t c=0;
  SetTraceLogLevel(LOG_NONE);
  InitWindow(size__width,size__height,title);
  exists__t986t(font_path,&__t6238t__);
  if(__t6238t__){
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

static inline __attribute__((always_inline)) void window__t6239t(double size__width, double size__height, const char* title, const char* font_path, double* __t6791t, double* __t6792t, const char** __t6793t, char* __t6794t) {
  int __t6244t=0;
  char __t6245t=0;
  char __t6246t=0;
  char openy=0;
  __t6245t=0;
  __t6246t=__t6245t;
  openy=__t6246t;
  unsafe_open_window__t6237t(size__width,size__height,title,font_path);
  goto __t_return;
  __t_return:
  *__t6791t=size__width;
  *__t6792t=size__height;
  *__t6793t=title;
  *__t6794t=openy;
}

static inline __attribute__((always_inline)) void circle____t_buffer____buffer__t6743t(char** __t6795t, uint64_t* __t6796t, uint16_t* __t6797t, uint16_t* __t6798t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=40;
  *__t6795t=unsafe_ptr;
  *__t6796t=unsafe_size;
  *__t6797t=unsafe_offset;
  *__t6798t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t609t(char* x, char* __t6799t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6799t=z;
}

static inline __attribute__((always_inline)) void free__t679t(char** __t6800t) {
  char* allocated=*__t6800t;
  if(allocated){
  free(allocated);
  }
  *__t6800t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t6801t) {
  int value=0;
  *__t6801t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t6802t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t6802t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t6803t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t6803t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t6804t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6804t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t6805t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6805t=z;
}

static inline __attribute__((always_inline)) void nat__t683t(uint16_t x, uint64_t* __t6806t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6806t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t6807t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6807t=z;
}

static inline __attribute__((always_inline)) void zero__t680t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t6808t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6808t=z;
}

static inline __attribute__((always_inline)) int alloc__t672t(uint64_t bytes, char** __t6809t) {
  char* allocated=0;
  char __t673t__=0;
  char __t674t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t609t(allocated,&__t673t__);
  not__t41t(__t673t__,&__t674t__);
  if(__t674t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6809t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t708t(char** __t6810t, uint64_t* __t6811t, uint16_t* __t6812t, uint16_t* __t6813t, uint64_t size, char** __t6814t, uint64_t* __t6815t, uint16_t* __t6816t, uint16_t* __t6817t) {
  char* buffer__unsafe_ptr=*__t6810t;
  uint64_t buffer__unsafe_size=*__t6811t;
  uint16_t buffer__unsafe_offset=*__t6812t;
  uint16_t buffer__unsafe_align=*__t6813t;
  int __t709t=0;
  char __t710t__=0;
  char __t712t__=0;
  uint64_t __t713t=0;
  char __t714t__=0;
  uint64_t __t715t=0;
  uint64_t __t716t__=0;
  uint64_t __t717t__=0;
  uint64_t __t719t=0;
  char __t720t__=0;
  uint64_t __t721t__=0;
  uint64_t __t722t__=0;
  uint64_t bytes=0;
  uint64_t __t723t=0;
  char __t724t__=0;
  char* __t725t__=0;
  int __t726t=0;
  uint64_t __t727t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t712t__);
  if(__t712t__){
  __t713t=0;
  neq__t157t(size,__t713t,&__t714t__);
  if(__t714t__){
  __t715t=0;
  nat__t683t(buffer__unsafe_align,&__t716t__);
  mul__t212t(__t716t__,size,&__t717t__);
  zero__t680t(buffer__unsafe_ptr,__t715t,__t717t__);
  }
  goto __t_return;
  }
  __t719t=0;
  neq__t157t(buffer__unsafe_size,__t719t,&__t720t__);
  if(__t720t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t683t(buffer__unsafe_align,&__t721t__);
  mul__t212t(__t721t__,size,&__t722t__);
  bytes=__t722t__;
  __t723t=0;
  eq__t133t(bytes,__t723t,&__t724t__);
  if(__t724t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t672t(bytes,&__t725t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t727t=0;
  zero__t680t(__t725t__,__t727t,bytes);
  buffer__unsafe_ptr=__t725t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t609t(buffer__unsafe_ptr,&__t710t__);
  if(__t710t__){
  free__t679t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6810t=buffer__unsafe_ptr;
  *__t6811t=buffer__unsafe_size;
  *__t6812t=buffer__unsafe_offset;
  *__t6813t=buffer__unsafe_align;
  *__t6814t=buffer__unsafe_ptr;
  *__t6815t=buffer__unsafe_size;
  *__t6816t=buffer__unsafe_offset;
  *__t6817t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t6818t) {
  int __t338t__=0;
  char z=0;
  is_different__t108t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t6818t=z;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t6819t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6819t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t6820t) {
  *__t6820t=to;
}

static inline __attribute__((always_inline)) void add__t681t(char* allocated, uint64_t offset, char** __t6821t) {
  char* element=0;
  char* __t682t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t682t__);
  goto __t_return;
  __t_return:
  *__t6821t=__t682t__;
}

static inline __attribute__((always_inline)) int mutget__t811t(char** __t6822t, uint64_t* __t6823t, uint16_t* __t6824t, uint16_t* __t6825t, uint64_t i, char** __t6826t) {
  char* buffer__unsafe_ptr=*__t6822t;
  uint64_t buffer__unsafe_size=*__t6823t;
  uint16_t buffer__unsafe_offset=*__t6824t;
  uint16_t buffer__unsafe_align=*__t6825t;
  char __t812t__=0;
  uint64_t __t813t__=0;
  uint64_t __t814t__=0;
  uint64_t __t815t__=0;
  uint64_t __t816t__=0;
  char* __t817t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,buffer__unsafe_size,&__t812t__);
  if(__t812t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t683t(buffer__unsafe_align,&__t813t__);
  mul__t212t(i,__t813t__,&__t814t__);
  nat__t683t(buffer__unsafe_offset,&__t815t__);
  add__t188t(__t814t__,__t815t__,&__t816t__);
  add__t681t(buffer__unsafe_ptr,__t816t__,&__t817t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6822t=buffer__unsafe_ptr;
  *__t6823t=buffer__unsafe_size;
  *__t6824t=buffer__unsafe_offset;
  *__t6825t=buffer__unsafe_align;
  *__t6826t=__t817t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t15t(int* __t6827t) {
  int value=0;
  *__t6827t=value;
}

static inline __attribute__((always_inline)) void not__t52t(int __t_anon0, int* __t6828t) {
  int __t53t__=0;
  true__t15t(&__t53t__);
  goto __t_return;
  __t_return:
  *__t6828t=__t53t__;
}

static inline __attribute__((always_inline)) void float__t577t(uint64_t x, double* __t6829t) {
  int __t578t=0;
  int __t579t__=0;
  int __t580t=0;
  double z=0;
  not__t52t(__t578t,&__t579t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t6829t=z;
}

static inline __attribute__((always_inline)) void is_different__t84t(double x, double y, int* __t6830t) {
  int __t85t=0;
  int __t86t__=0;
  not__t50t(__t85t,&__t86t__);
  goto __t_return;
  __t_return:
  *__t6830t=__t86t__;
}

static inline __attribute__((always_inline)) void sub__t339t(double x, double y, double* __t6831t) {
  int __t340t__=0;
  int __t341t=0;
  int __t342t=0;
  double z=0;
  is_different__t84t(x,y,&__t340t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t6831t=z;
}

static inline __attribute__((always_inline)) void add__t166t(double x, double y, double* __t6832t) {
  int __t167t__=0;
  double z=0;
  is_different__t84t(x,y,&__t167t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6832t=z;
}

static inline __attribute__((always_inline)) void circle__t6673t(double _cx, double _cy, double _vx, double _vy, double _radius, double* __t6833t, double* __t6834t, double* __t6835t, double* __t6836t, double* __t6837t) {
  double __t6674t=0;
  double cx=0;
  double __t6675t=0;
  double cy=0;
  double __t6676t=0;
  double vx=0;
  double __t6677t=0;
  double vy=0;
  double __t6678t=0;
  double radius=0;
  __t6674t=_cx;
  cx=__t6674t;
  __t6675t=_cy;
  cy=__t6675t;
  __t6676t=_vx;
  vx=__t6676t;
  __t6677t=_vy;
  vy=__t6677t;
  __t6678t=_radius;
  radius=__t6678t;
  goto __t_return;
  __t_return:
  *__t6833t=cx;
  *__t6834t=cy;
  *__t6835t=vx;
  *__t6836t=vy;
  *__t6837t=radius;
}

static inline __attribute__((always_inline)) void is_open__t6249t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6838t, char* __t6839t) {
  char WINDOW__openy=*__t6838t;
  char ret=0;
  char __t6250t__=0;
  ret=WindowShouldClose();
  not__t41t(ret,&__t6250t__);
  goto __t_return;
  __t_return:
  *__t6838t=WINDOW__openy;
  *__t6839t=__t6250t__;
}

static inline __attribute__((always_inline)) void dt__t6333t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char WINDOW__openy, double* __t6840t) {
  double dt=0;
  dt=GetFrameTime();
  goto __t_return;
  __t_return:
  *__t6840t=dt;
}

static inline __attribute__((always_inline)) void mul__t190t(double x, double y, double* __t6841t) {
  int __t191t__=0;
  double z=0;
  is_different__t84t(x,y,&__t191t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6841t=z;
}

static inline __attribute__((always_inline)) void lt__t243t(double x, double y, char* __t6842t) {
  int __t244t__=0;
  char z=0;
  is_different__t84t(x,y,&__t244t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6842t=z;
}

static inline __attribute__((always_inline)) void neg__t163t(double x, double* __t6843t) {
  double z=0;
  z=(0-x);
  goto __t_return;
  __t_return:
  *__t6843t=z;
}

static inline __attribute__((always_inline)) void abs__t2187t(double x, double* __t6844t) {
  double __t2188t=0;
  char __t2189t__=0;
  double __t2190t__=0;
  __t2188t=0.0;
  lt__t243t(x,__t2188t,&__t2189t__);
  if(__t2189t__){
  neg__t163t(x,&__t2190t__);
  goto __t_return;
  }
  __t2190t__=x;
  goto __t_return;
  __t_return:
  *__t6844t=__t2190t__;
}

static inline __attribute__((always_inline)) void gt__t267t(double x, double y, char* __t6845t) {
  int __t268t__=0;
  char z=0;
  is_different__t84t(x,y,&__t268t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6845t=z;
}

static inline __attribute__((always_inline)) int process__t6679t(char** __t6846t, double dt) {
  char* _self=*__t6846t;
  double __t6680t__cx=0;
  double __t6680t__cy=0;
  double __t6680t__vx=0;
  double __t6680t__vy=0;
  double __t6680t__radius=0;
  double __t6681t__cx=0;
  double __t6681t__cy=0;
  double __t6681t__vx=0;
  double __t6681t__vy=0;
  double __t6681t__radius=0;
  double self__cx=0;
  double self__cy=0;
  double self__vx=0;
  double self__vy=0;
  double self__radius=0;
  double __t6682t__=0;
  double __t6683t__=0;
  double __t6684t__=0;
  double __t6685t__=0;
  double __t6686t__=0;
  double __t6687t=0;
  char __t6688t__=0;
  double __t6689t__=0;
  double __t6690t__=0;
  double __t6691t=0;
  char __t6692t__=0;
  double __t6693t=0;
  double __t6694t__=0;
  double __t6695t=0;
  double __t6696t__=0;
  double __t6697t__=0;
  double __t6698t__=0;
  double __t6699t=0;
  char __t6700t__=0;
  double __t6701t__=0;
  double __t6702t__=0;
  double __t6703t=0;
  char __t6704t__=0;
  double __t6705t=0;
  double __t6706t__=0;
  double __t6707t=0;
  double __t6708t__=0;
  double __t6709t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!_self){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t6680t__cx,_self,8);
  memcpy(&__t6680t__cy,_self+8,8);
  memcpy(&__t6680t__vx,_self+16,8);
  memcpy(&__t6680t__vy,_self+24,8);
  memcpy(&__t6680t__radius,_self+32,8);
  __t6681t__cx=__t6680t__cx;
  __t6681t__cy=__t6680t__cy;
  __t6681t__vx=__t6680t__vx;
  __t6681t__vy=__t6680t__vy;
  __t6681t__radius=__t6680t__radius;
  self__cx=__t6681t__cx;
  self__cy=__t6681t__cy;
  self__vx=__t6681t__vx;
  self__vy=__t6681t__vy;
  self__radius=__t6681t__radius;
  mul__t190t(self__vx,dt,&__t6682t__);
  add__t166t(self__cx,__t6682t__,&__t6683t__);
  self__cx=__t6683t__;
  mul__t190t(self__vy,dt,&__t6684t__);
  add__t166t(self__cy,__t6684t__,&__t6685t__);
  self__cy=__t6685t__;
  sub__t339t(self__cx,self__radius,&__t6686t__);
  __t6687t=0.0;
  lt__t243t(__t6686t__,__t6687t,&__t6688t__);
  if(__t6688t__){
  self__cx=self__radius;
  abs__t2187t(self__vx,&__t6689t__);
  self__vx=__t6689t__;
  }
  add__t166t(self__cx,self__radius,&__t6690t__);
  __t6691t=800.0;
  gt__t267t(__t6690t__,__t6691t,&__t6692t__);
  if(__t6692t__){
  __t6693t=800.0;
  sub__t339t(__t6693t,self__radius,&__t6694t__);
  self__cx=__t6694t__;
  __t6695t=0.0;
  abs__t2187t(self__vx,&__t6696t__);
  sub__t339t(__t6695t,__t6696t__,&__t6697t__);
  self__vx=__t6697t__;
  }
  sub__t339t(self__cy,self__radius,&__t6698t__);
  __t6699t=0.0;
  lt__t243t(__t6698t__,__t6699t,&__t6700t__);
  if(__t6700t__){
  self__cy=self__radius;
  abs__t2187t(self__vy,&__t6701t__);
  self__vy=__t6701t__;
  }
  add__t166t(self__cy,self__radius,&__t6702t__);
  __t6703t=600.0;
  gt__t267t(__t6702t__,__t6703t,&__t6704t__);
  if(__t6704t__){
  __t6705t=600.0;
  sub__t339t(__t6705t,self__radius,&__t6706t__);
  self__cy=__t6706t__;
  __t6707t=0.0;
  abs__t2187t(self__vy,&__t6708t__);
  sub__t339t(__t6707t,__t6708t__,&__t6709t__);
  self__vy=__t6709t__;
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
  goto __t_skip_returns;*__t6846t=_self;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_begin_drawing__t6251t() {
  BeginDrawing();
}

static inline __attribute__((always_inline)) void unsafe_end_drawing__t6252t() {
  EndDrawing();
}

static inline __attribute__((always_inline)) int draw__t6253t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6847t, char* __t6848t) {
  char WINDOW__openy=*__t6847t;
  char __t6254t=0;
  char is_drawing=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(WINDOW__openy){
  __t_errcode=49;
  goto __t_failure;
  }
  __t6254t=1;
  is_drawing=__t6254t;
  unsafe_begin_drawing__t6251t();
  goto __t_return;
  
  __t_failure:if(is_drawing){
  unsafe_end_drawing__t6252t();
  }
  
  goto __t_skip_returns;__t_return:
  *__t6847t=WINDOW__openy;
  *__t6848t=is_drawing;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t6849t) {
  int __t290t__=0;
  char z=0;
  is_different__t108t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6849t=z;
}

static inline __attribute__((always_inline)) int nat8__t6190t(uint64_t x, uint8_t* __t6850t) {
  uint64_t __t6191t=0;
  char __t6192t__=0;
  uint8_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t6191t=255;
  gt__t289t(x,__t6191t,&__t6192t__);
  if(__t6192t__){
  __t_errcode=46;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6850t=value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int color__t6228t(uint64_t _r, uint64_t _g, uint64_t _b, uint8_t* __t6851t, uint8_t* __t6852t, uint8_t* __t6853t, uint8_t* __t6854t) {
  int __t6229t=0;
  uint64_t __t6230t=0;
  uint64_t _a=0;
  uint8_t __t6231t__=0;
  uint8_t r=0;
  uint8_t __t6232t__=0;
  uint8_t g=0;
  uint8_t __t6233t__=0;
  uint8_t b=0;
  uint8_t __t6234t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t6230t=255;
  _a=__t6230t;
  __t_errcode=nat8__t6190t(_r,&__t6231t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t6231t__;
  __t_errcode=nat8__t6190t(_g,&__t6232t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t6232t__;
  __t_errcode=nat8__t6190t(_b,&__t6233t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t6233t__;
  __t_errcode=nat8__t6190t(_a,&__t6234t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t6234t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6851t=r;
  *__t6852t=g;
  *__t6853t=b;
  *__t6854t=a;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void clear__t6257t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6855t, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__openy=*__t6855t;
  ClearBackground((Color){
  color__r,color__g,color__b,color__a}
  );
  *__t6855t=WINDOW__openy;
}

static inline __attribute__((always_inline)) int get__t818t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t6856t) {
  char __t819t__=0;
  uint64_t __t820t__=0;
  uint64_t __t821t__=0;
  uint64_t __t822t__=0;
  uint64_t __t823t__=0;
  char* __t824t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,buffer__unsafe_size,&__t819t__);
  if(__t819t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t683t(buffer__unsafe_align,&__t820t__);
  mul__t212t(i,__t820t__,&__t821t__);
  nat__t683t(buffer__unsafe_offset,&__t822t__);
  add__t188t(__t821t__,__t822t__,&__t823t__);
  add__t681t(buffer__unsafe_ptr,__t823t__,&__t824t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6856t=__t824t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int color__t6222t(uint64_t _r, uint64_t _g, uint64_t _b, uint64_t _a, uint8_t* __t6857t, uint8_t* __t6858t, uint8_t* __t6859t, uint8_t* __t6860t) {
  int __t6223t=0;
  uint8_t __t6224t__=0;
  uint8_t r=0;
  uint8_t __t6225t__=0;
  uint8_t g=0;
  uint8_t __t6226t__=0;
  uint8_t b=0;
  uint8_t __t6227t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat8__t6190t(_r,&__t6224t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t6224t__;
  __t_errcode=nat8__t6190t(_g,&__t6225t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t6225t__;
  __t_errcode=nat8__t6190t(_b,&__t6226t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t6226t__;
  __t_errcode=nat8__t6190t(_a,&__t6227t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t6227t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6857t=r;
  *__t6858t=g;
  *__t6859t=b;
  *__t6860t=a;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void rect__t6329t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6861t, double pos__x, double pos__y, double size__width, double size__height, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__openy=*__t6861t;
  DrawRectangle(pos__x,pos__y,size__width,size__height,(Color){
  color__r,color__g,color__b,color__a}
  );
  *__t6861t=WINDOW__openy;
}

static inline __attribute__((always_inline)) void rect__t6330t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6862t, double pos__x, double pos__y, double size__width, double size__height, uint64_t thickness, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__openy=*__t6862t;
  DrawRectangleLinesEx((Rectangle){
  (float)pos__x,(float)pos__y,(float)size__width,(float)size__height}
  ,(int)thickness,(Color){
  color__r,color__g,color__b,color__a}
  );
  *__t6862t=WINDOW__openy;
}

static inline __attribute__((always_inline)) int draw__t6710t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6863t, double self__cx, double self__cy, double self__vx, double self__vy, double self__radius) {
  char WINDOW__openy=*__t6863t;
  uint64_t __t6711t=0;
  uint64_t __t6712t=0;
  uint64_t __t6713t=0;
  uint8_t __t6714t__r=0;
  uint8_t __t6714t__g=0;
  uint8_t __t6714t__b=0;
  uint8_t __t6714t__a=0;
  uint8_t white__r=0;
  uint8_t white__g=0;
  uint8_t white__b=0;
  uint8_t white__a=0;
  uint64_t __t6715t=0;
  uint64_t __t6716t=0;
  uint64_t __t6717t=0;
  uint8_t __t6718t__r=0;
  uint8_t __t6718t__g=0;
  uint8_t __t6718t__b=0;
  uint8_t __t6718t__a=0;
  uint8_t teal__r=0;
  uint8_t teal__g=0;
  uint8_t teal__b=0;
  uint8_t teal__a=0;
  uint64_t __t6719t=0;
  uint64_t __t6720t=0;
  uint64_t __t6721t=0;
  uint64_t __t6722t=0;
  uint8_t __t6723t__r=0;
  uint8_t __t6723t__g=0;
  uint8_t __t6723t__b=0;
  uint8_t __t6723t__a=0;
  uint8_t shadow__r=0;
  uint8_t shadow__g=0;
  uint8_t shadow__b=0;
  uint8_t shadow__a=0;
  double pos__cx=0;
  double pos__cy=0;
  double __t6724t=0;
  double __t6725t__=0;
  double __t6726t=0;
  double __t6727t__=0;
  uint64_t __t6733t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t6711t=255;
  __t6712t=255;
  __t6713t=255;
  __t_errcode=color__t6228t(__t6711t,__t6712t,__t6713t,&__t6714t__r,&__t6714t__g,&__t6714t__b,&__t6714t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  white__r=__t6714t__r;
  white__g=__t6714t__g;
  white__b=__t6714t__b;
  white__a=__t6714t__a;
  __t6715t=0;
  __t6716t=200;
  __t6717t=180;
  __t_errcode=color__t6228t(__t6715t,__t6716t,__t6717t,&__t6718t__r,&__t6718t__g,&__t6718t__b,&__t6718t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  teal__r=__t6718t__r;
  teal__g=__t6718t__g;
  teal__b=__t6718t__b;
  teal__a=__t6718t__a;
  __t6719t=0;
  __t6720t=200;
  __t6721t=180;
  __t6722t=60;
  __t_errcode=color__t6222t(__t6719t,__t6720t,__t6721t,__t6722t,&__t6723t__r,&__t6723t__g,&__t6723t__b,&__t6723t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  shadow__r=__t6723t__r;
  shadow__g=__t6723t__g;
  shadow__b=__t6723t__b;
  shadow__a=__t6723t__a;
  pos__cx=self__cx;
  pos__cy=self__cy;
  __t6724t=4.0;
  add__t166t(self__cx,__t6724t,&__t6725t__);
  __t6726t=4.0;
  add__t166t(self__cy,__t6726t,&__t6727t__);
  rect__t6329t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,__t6725t__,__t6727t__,self__radius,self__radius,shadow__r,shadow__g,shadow__b,shadow__a);
  rect__t6329t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,pos__cx,pos__cy,self__radius,self__radius,teal__r,teal__g,teal__b,teal__a);
  __t6733t=2;
  rect__t6330t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,pos__cx,pos__cy,self__radius,self__radius,__t6733t,white__r,white__g,white__b,white__a);
  
  __t_failure:
  goto __t_skip_returns;*__t6863t=WINDOW__openy;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void text__t6258t(double WINDOW__size__width, double WINDOW__size__height, const char* WINDOW__title, char* __t6864t, const char* txt, double pos__x, double pos__y, double size, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a) {
  char WINDOW__openy=*__t6864t;
  DrawTextEx(__smolambda_font,txt,(Vector2){
  pos__x,pos__y}
  ,size,1.0f,(Color){
  color__r,color__g,color__b,color__a}
  );
  *__t6864t=WINDOW__openy;
}

static inline __attribute__((always_inline)) int main__t6735t() {
  double __t6736t=0;
  double __t6737t=0;
  double __t6740t__size__width=0;
  double __t6740t__size__height=0;
  const char* __t6740t__title=0;
  char __t6740t__openy=0;
  double __t6741t__size__width=0;
  double __t6741t__size__height=0;
  const char* __t6741t__title=0;
  char __t6741t__openy=0;
  double WINDOW__size__width=0;
  double WINDOW__size__height=0;
  const char* WINDOW__title=0;
  char WINDOW__openy=0;
  uint64_t __t6742t=0;
  uint64_t N=0;
  char* __t6745t__unsafe_ptr=0;
  uint64_t __t6745t__unsafe_size=0;
  uint16_t __t6745t__unsafe_offset=0;
  uint16_t __t6745t__unsafe_align=0;
  char* __t6746t__unsafe_ptr=0;
  uint64_t __t6746t__unsafe_size=0;
  uint16_t __t6746t__unsafe_offset=0;
  uint16_t __t6746t__unsafe_align=0;
  char __t6747t____t710t__=0;
  char* __t6748t__unsafe_ptr=0;
  uint64_t __t6748t__unsafe_size=0;
  uint16_t __t6748t__unsafe_offset=0;
  uint16_t __t6748t__unsafe_align=0;
  char* circles__unsafe_ptr=0;
  uint64_t circles__unsafe_size=0;
  uint16_t circles__unsafe_offset=0;
  uint16_t circles__unsafe_align=0;
  uint64_t __t6749t=0;
  char __t6750t=0;
  char* __t6751t__=0;
  char* create_circle=0;
  double __t6752t__=0;
  double i=0;
  double __t6753t=0;
  double __t6754t=0;
  double __t6755t=0;
  double __t6756t__=0;
  double __t6757t=0;
  double __t6758t__=0;
  double __t6759t=0;
  double __t6760t__cx=0;
  double __t6760t__cy=0;
  double __t6760t__vx=0;
  double __t6760t__vy=0;
  double __t6760t__radius=0;
  char __t6761t__=0;
  double __t6762t__=0;
  double __t6763t=0;
  double __t6764t__=0;
  double dt=0;
  uint64_t __t6765t=0;
  char __t6766t=0;
  char* __t6767t__=0;
  char* proc_circle=0;
  char __t6769t__=0;
  char frame=0;
  uint64_t __t6771t=0;
  uint64_t __t6772t=0;
  uint64_t __t6773t=0;
  uint8_t __t6774t__r=0;
  uint8_t __t6774t__g=0;
  uint8_t __t6774t__b=0;
  uint8_t __t6774t__a=0;
  uint64_t __t6776t=0;
  char __t6777t=0;
  char* __t6778t__=0;
  double __t6779t__cx=0;
  double __t6779t__cy=0;
  double __t6779t__vx=0;
  double __t6779t__vy=0;
  double __t6779t__radius=0;
  double draw_circle__cx=0;
  double draw_circle__cy=0;
  double draw_circle__vx=0;
  double draw_circle__vy=0;
  double draw_circle__radius=0;
  double __t6782t=0;
  double __t6783t=0;
  double __t6784t=0;
  uint64_t __t6785t=0;
  uint64_t __t6786t=0;
  uint64_t __t6787t=0;
  uint8_t __t6788t__r=0;
  uint8_t __t6788t__g=0;
  uint8_t __t6788t__b=0;
  uint8_t __t6788t__a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t6736t=800.0;
  __t6737t=600.0;
  window__t6239t(__t6736t,__t6737t,__t6738t,__t6739t,&__t6740t__size__width,&__t6740t__size__height,&__t6740t__title,&__t6740t__openy);
  __t6741t__size__width=__t6740t__size__width;
  __t6741t__size__height=__t6740t__size__height;
  __t6741t__title=__t6740t__title;
  __t6741t__openy=__t6740t__openy;
  WINDOW__size__width=__t6741t__size__width;
  WINDOW__size__height=__t6741t__size__height;
  WINDOW__title=__t6741t__title;
  WINDOW__openy=__t6741t__openy;
  __t6742t=1000;
  N=__t6742t;
  circle____t_buffer____buffer__t6743t(&__t6745t__unsafe_ptr,&__t6745t__unsafe_size,&__t6745t__unsafe_offset,&__t6745t__unsafe_align);
  __t_errcode=alloc__t708t(&__t6745t__unsafe_ptr,&__t6745t__unsafe_size,&__t6745t__unsafe_offset,&__t6745t__unsafe_align,N,&__t6746t__unsafe_ptr,&__t6746t__unsafe_size,&__t6746t__unsafe_offset,&__t6746t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6748t__unsafe_ptr=__t6746t__unsafe_ptr;
  __t6748t__unsafe_size=__t6746t__unsafe_size;
  __t6748t__unsafe_offset=__t6746t__unsafe_offset;
  __t6748t__unsafe_align=__t6746t__unsafe_align;
  circles__unsafe_ptr=__t6748t__unsafe_ptr;
  circles__unsafe_size=__t6748t__unsafe_size;
  circles__unsafe_offset=__t6748t__unsafe_offset;
  circles__unsafe_align=__t6748t__unsafe_align;
  __t6749t=0-1;
  while(1){
  __t6749t=__t6749t+1;
  __t_complain=mutget__t811t(&circles__unsafe_ptr,&circles__unsafe_size,&circles__unsafe_offset,&circles__unsafe_align,__t6749t,&__t6751t__);
  __t6750t=__t_complain;
  if(__t_complain){
  goto __t6750t__label;
  }
  create_circle=__t6751t__;
  __t6750t__label:__t6750t=__t6750t==0;
  if(!__t6750t){
  break;
  }
  float__t577t(__t6749t,&__t6752t__);
  i=__t6752t__;
  __t6753t=400.0;
  __t6754t=300.0;
  __t6755t=200.0;
  sub__t339t(__t6755t,i,&__t6756t__);
  __t6757t=160.0;
  add__t166t(__t6757t,i,&__t6758t__);
  __t6759t=30.0;
  circle__t6673t(__t6753t,__t6754t,__t6756t__,__t6758t__,__t6759t,&__t6760t__cx,&__t6760t__cy,&__t6760t__vx,&__t6760t__vy,&__t6760t__radius);
  if(!create_circle){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(create_circle,&__t6760t__cx,8);
  memcpy(create_circle+8,&__t6760t__cy,8);
  memcpy(create_circle+16,&__t6760t__vx,8);
  memcpy(create_circle+24,&__t6760t__vy,8);
  memcpy(create_circle+32,&__t6760t__radius,8);
  }
  while(1){
  is_open__t6249t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,&__t6761t__);
  if(!__t6761t__){
  break;
  }
  dt__t6333t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,WINDOW__openy,&__t6762t__);
  __t6763t=3.0;
  mul__t190t(__t6762t__,__t6763t,&__t6764t__);
  dt=__t6764t__;
  __t6765t=0-1;
  while(1){
  __t6765t=__t6765t+1;
  __t_complain=mutget__t811t(&circles__unsafe_ptr,&circles__unsafe_size,&circles__unsafe_offset,&circles__unsafe_align,__t6765t,&__t6767t__);
  __t6766t=__t_complain;
  if(__t_complain){
  goto __t6766t__label;
  }
  proc_circle=__t6767t__;
  __t6766t__label:__t6766t=__t6766t==0;
  if(!__t6766t){
  break;
  }
  __t_errcode=process__t6679t(&proc_circle,dt);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=draw__t6253t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,&__t6769t__);
  if(__t_errcode){
  goto __t_failure;
  }
  frame=__t6769t__;
  __t6771t=20;
  __t6772t=20;
  __t6773t=60;
  __t_errcode=color__t6228t(__t6771t,__t6772t,__t6773t,&__t6774t__r,&__t6774t__g,&__t6774t__b,&__t6774t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  clear__t6257t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,__t6774t__r,__t6774t__g,__t6774t__b,__t6774t__a);
  __t6776t=0-1;
  while(1){
  __t6776t=__t6776t+1;
  __t_complain=get__t818t(circles__unsafe_ptr,circles__unsafe_size,circles__unsafe_offset,circles__unsafe_align,__t6776t,&__t6778t__);
  __t6777t=__t_complain;
  if(__t_complain){
  goto __t6777t__label;
  }
  if(!__t6778t__){
  __t_complain=2;
  goto __t6777t__label;
  }
  else{
  memcpy(&__t6779t__cx,__t6778t__,8);
  memcpy(&__t6779t__cy,__t6778t__+8,8);
  memcpy(&__t6779t__vx,__t6778t__+16,8);
  memcpy(&__t6779t__vy,__t6778t__+24,8);
  memcpy(&__t6779t__radius,__t6778t__+32,8);
  }
  draw_circle__cx=__t6779t__cx;
  draw_circle__cy=__t6779t__cy;
  draw_circle__vx=__t6779t__vx;
  draw_circle__vy=__t6779t__vy;
  draw_circle__radius=__t6779t__radius;
  __t6777t__label:__t6777t=__t6777t==0;
  if(!__t6777t){
  break;
  }
  __t_errcode=draw__t6710t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,draw_circle__cx,draw_circle__cy,draw_circle__vx,draw_circle__vy,draw_circle__radius);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t6782t=10.0;
  __t6783t=10.0;
  __t6784t=64.0;
  __t6785t=255;
  __t6786t=255;
  __t6787t=255;
  __t_errcode=color__t6228t(__t6785t,__t6786t,__t6787t,&__t6788t__r,&__t6788t__g,&__t6788t__b,&__t6788t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  text__t6258t(WINDOW__size__width,WINDOW__size__height,WINDOW__title,&WINDOW__openy,__t6781t,__t6782t,__t6783t,__t6784t,__t6788t__r,__t6788t__g,__t6788t__b,__t6788t__a);
  if(__t6769t__){
  unsafe_end_drawing__t6252t();
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t609t(__t6746t__unsafe_ptr,&__t6747t____t710t__);
  if(__t6747t____t710t__){
  free__t679t(&__t6746t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t6735t();return 0;}