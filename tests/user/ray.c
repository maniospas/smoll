#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
#include "std/extern/raysupport.h"
int __t_argc;
char** __t_argv;
const char* const __t2564t="Moving Circle";
static const char* __t_all_errcodes[53] = {"noerr",
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
"user input was not an int",
"user input was not a nat",
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

static inline __attribute__((always_inline)) void Size__t2447t(double width, double height, double* __t2602t, double* __t2603t) {
  *__t2602t=width;
  *__t2603t=height;
}

static inline __attribute__((always_inline)) void Window__t2448t(double size__width, double size__height, const char* title, double* __t2604t, double* __t2605t, const char** __t2606t, char* __t2607t) {
  char __t2449t=0;
  char __t2450t=0;
  char ready=0;
  SetTraceLogLevel(LOG_WARNING);
  InitWindow(size__width,size__height,title);
  __t2449t=0;
  __t2450t=__t2449t;
  ready=__t2450t;
  goto __t_return;
  __t_return:
  *__t2604t=size__width;
  *__t2605t=size__height;
  *__t2606t=title;
  *__t2607t=ready;
}

static inline __attribute__((always_inline)) void Circle____t_buffer____buffer__t2567t(char** __t2608t, uint64_t* __t2609t, uint16_t* __t2610t, uint16_t* __t2611t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=40;
  *__t2608t=unsafe_ptr;
  *__t2609t=unsafe_size;
  *__t2610t=unsafe_offset;
  *__t2611t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t436t(char* x, char* __t2612t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2612t=z;
}

static inline __attribute__((always_inline)) void free__t502t(char** __t2613t) {
  char* allocated=*__t2613t;
  if(allocated){
  free(allocated);
  }
  *__t2613t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2614t) {
  int value=0;
  *__t2614t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t2615t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t2615t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t2616t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t2616t=__t96t__;
}

static inline __attribute__((always_inline)) void eq__t119t(uint64_t x, uint64_t y, char* __t2617t) {
  int __t120t__=0;
  char z=0;
  is_different__t94t(x,y,&__t120t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2617t=z;
}

static inline __attribute__((always_inline)) void neq__t143t(uint64_t x, uint64_t y, char* __t2618t) {
  int __t144t__=0;
  char z=0;
  is_different__t94t(x,y,&__t144t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2618t=z;
}

static inline __attribute__((always_inline)) void nat__t506t(uint16_t x, uint64_t* __t2619t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2619t=value;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t2620t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2620t=z;
}

static inline __attribute__((always_inline)) void zero__t503t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t27t(char value, char* __t2621t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2621t=z;
}

static inline __attribute__((always_inline)) int alloc__t495t(uint64_t bytes, char** __t2622t) {
  char* allocated=0;
  char __t496t__=0;
  char __t497t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t436t(allocated,&__t496t__);
  not__t27t(__t496t__,&__t497t__);
  if(__t497t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2622t=allocated;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t509t(char** __t2623t, uint64_t* __t2624t, uint16_t* __t2625t, uint16_t* __t2626t, uint64_t size, char** __t2627t, uint64_t* __t2628t, uint16_t* __t2629t, uint16_t* __t2630t) {
  char* buffer__unsafe_ptr=*__t2623t;
  uint64_t buffer__unsafe_size=*__t2624t;
  uint16_t buffer__unsafe_offset=*__t2625t;
  uint16_t buffer__unsafe_align=*__t2626t;
  int __t510t=0;
  char __t511t__=0;
  char __t513t__=0;
  uint64_t __t514t=0;
  char __t515t__=0;
  uint64_t __t516t=0;
  uint64_t __t517t__=0;
  uint64_t __t518t__=0;
  uint64_t __t520t=0;
  char __t521t__=0;
  uint64_t __t522t__=0;
  uint64_t __t523t__=0;
  uint64_t bytes=0;
  uint64_t __t524t=0;
  char __t525t__=0;
  char* __t526t__=0;
  uint64_t __t527t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t119t(buffer__unsafe_size,size,&__t513t__);
  if(__t513t__){
  __t514t=0;
  neq__t143t(size,__t514t,&__t515t__);
  if(__t515t__){
  __t516t=0;
  nat__t506t(buffer__unsafe_align,&__t517t__);
  mul__t195t(__t517t__,size,&__t518t__);
  zero__t503t(buffer__unsafe_ptr,__t516t,__t518t__);
  }
  goto __t_return;
  }
  __t520t=0;
  neq__t143t(buffer__unsafe_size,__t520t,&__t521t__);
  if(__t521t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t522t__);
  mul__t195t(__t522t__,size,&__t523t__);
  bytes=__t523t__;
  __t524t=0;
  eq__t119t(bytes,__t524t,&__t525t__);
  if(__t525t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t495t(bytes,&__t526t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t526t__;
  __t527t=0;
  zero__t503t(buffer__unsafe_ptr,__t527t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t436t(buffer__unsafe_ptr,&__t511t__);
  if(__t511t__){
  free__t502t(&buffer__unsafe_ptr);
  }
  __t_return:
  *__t2623t=buffer__unsafe_ptr;
  *__t2624t=buffer__unsafe_size;
  *__t2625t=buffer__unsafe_offset;
  *__t2626t=buffer__unsafe_align;
  *__t2627t=buffer__unsafe_ptr;
  *__t2628t=buffer__unsafe_size;
  *__t2629t=buffer__unsafe_offset;
  *__t2630t=buffer__unsafe_align;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t2631t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2631t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t2632t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2632t=z;
}

static inline __attribute__((always_inline)) void attach_type__t21t(char* to, char* from, char** __t2633t) {
  *__t2633t=to;
}

static inline __attribute__((always_inline)) void add__t504t(char* allocated, uint64_t offset, char** __t2634t) {
  char* element=0;
  char* __t505t__=0;
  element=allocated+offset;
  attach_type__t21t(element,allocated,&__t505t__);
  goto __t_return;
  __t_return:
  *__t2634t=__t505t__;
}

static inline __attribute__((always_inline)) int mutget__t584t(char** __t2635t, uint64_t* __t2636t, uint16_t* __t2637t, uint16_t* __t2638t, uint64_t i, char** __t2639t) {
  char* buffer__unsafe_ptr=*__t2635t;
  uint64_t buffer__unsafe_size=*__t2636t;
  uint16_t buffer__unsafe_offset=*__t2637t;
  uint16_t buffer__unsafe_align=*__t2638t;
  char __t585t__=0;
  uint64_t __t586t__=0;
  uint64_t __t587t__=0;
  uint64_t __t588t__=0;
  uint64_t __t589t__=0;
  char* __t590t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t585t__);
  if(__t585t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t586t__);
  mul__t195t(i,__t586t__,&__t587t__);
  nat__t506t(buffer__unsafe_offset,&__t588t__);
  add__t171t(__t587t__,__t588t__,&__t589t__);
  add__t504t(buffer__unsafe_ptr,__t589t__,&__t590t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2635t=buffer__unsafe_ptr;
  *__t2636t=buffer__unsafe_size;
  *__t2637t=buffer__unsafe_offset;
  *__t2638t=buffer__unsafe_align;
  *__t2639t=__t590t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t2640t) {
  int value=0;
  *__t2640t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t2641t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t2641t=__t39t__;
}

static inline __attribute__((always_inline)) void float__t404t(uint64_t x, double* __t2642t) {
  int __t405t=0;
  int __t406t__=0;
  int __t407t=0;
  double z=0;
  not__t38t(__t405t,&__t406t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t2642t=z;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t2643t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t2643t=__t72t__;
}

static inline __attribute__((always_inline)) void sub__t322t(double x, double y, double* __t2644t) {
  int __t323t__=0;
  int __t324t=0;
  int __t325t=0;
  double z=0;
  is_different__t70t(x,y,&__t323t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t2644t=z;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t2645t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2645t=z;
}

static inline __attribute__((always_inline)) void Circle__t2501t(double _cx, double _cy, double _vx, double _vy, double _radius, double* __t2646t, double* __t2647t, double* __t2648t, double* __t2649t, double* __t2650t) {
  double __t2502t=0;
  double cx=0;
  double __t2503t=0;
  double cy=0;
  double __t2504t=0;
  double vx=0;
  double __t2505t=0;
  double vy=0;
  double __t2506t=0;
  double radius=0;
  __t2502t=_cx;
  cx=__t2502t;
  __t2503t=_cy;
  cy=__t2503t;
  __t2504t=_vx;
  vx=__t2504t;
  __t2505t=_vy;
  vy=__t2505t;
  __t2506t=_radius;
  radius=__t2506t;
  goto __t_return;
  __t_return:
  *__t2646t=cx;
  *__t2647t=cy;
  *__t2648t=vx;
  *__t2649t=vy;
  *__t2650t=radius;
}

static inline __attribute__((always_inline)) void is_open__t2452t(double __t_anon0__size__width, double __t_anon0__size__height, const char* __t_anon0__title, char __t_anon0__ready, char* __t2651t) {
  char ret=0;
  char __t2453t__=0;
  ret=WindowShouldClose();
  not__t27t(ret,&__t2453t__);
  goto __t_return;
  __t_return:
  *__t2651t=__t2453t__;
}

static inline __attribute__((always_inline)) void dt__t2500t(double* __t2652t) {
  double dt=0;
  dt=GetFrameTime();
  goto __t_return;
  __t_return:
  *__t2652t=dt;
}

static inline __attribute__((always_inline)) void mul__t173t(double x, double y, double* __t2653t) {
  int __t174t__=0;
  double z=0;
  is_different__t70t(x,y,&__t174t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2653t=z;
}

static inline __attribute__((always_inline)) void lt__t226t(double x, double y, char* __t2654t) {
  int __t227t__=0;
  char z=0;
  is_different__t70t(x,y,&__t227t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2654t=z;
}

static inline __attribute__((always_inline)) void abs__t1321t(double x, double* __t2655t) {
  double __t1322t=0;
  char __t1323t__=0;
  double __t1324t=0;
  double __t1325t__=0;
  __t1322t=0.0;
  lt__t226t(x,__t1322t,&__t1323t__);
  if(__t1323t__){
  __t1324t=0.0;
  sub__t322t(__t1324t,x,&__t1325t__);
  goto __t_return;
  }
  __t1325t__=x;
  goto __t_return;
  __t_return:
  *__t2655t=__t1325t__;
}

static inline __attribute__((always_inline)) void gt__t250t(double x, double y, char* __t2656t) {
  int __t251t__=0;
  char z=0;
  is_different__t70t(x,y,&__t251t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2656t=z;
}

static inline __attribute__((always_inline)) int process__t2507t(char** __t2657t, double dt) {
  char* _self=*__t2657t;
  double __t2508t__cx=0;
  double __t2508t__cy=0;
  double __t2508t__vx=0;
  double __t2508t__vy=0;
  double __t2508t__radius=0;
  double self__cx=0;
  double self__cy=0;
  double self__vx=0;
  double self__vy=0;
  double self__radius=0;
  double __t2509t__=0;
  double __t2510t__=0;
  double __t2511t__=0;
  double __t2512t__=0;
  double __t2513t__=0;
  double __t2514t=0;
  char __t2515t__=0;
  double __t2516t__=0;
  double __t2517t__=0;
  double __t2518t=0;
  char __t2519t__=0;
  double __t2520t=0;
  double __t2521t__=0;
  double __t2522t=0;
  double __t2523t__=0;
  double __t2524t__=0;
  double __t2525t__=0;
  double __t2526t=0;
  char __t2527t__=0;
  double __t2528t__=0;
  double __t2529t__=0;
  double __t2530t=0;
  char __t2531t__=0;
  double __t2532t=0;
  double __t2533t__=0;
  double __t2534t=0;
  double __t2535t__=0;
  double __t2536t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!_self){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2508t__cx,_self,8);
  memcpy(&__t2508t__cy,_self+8,8);
  memcpy(&__t2508t__vx,_self+16,8);
  memcpy(&__t2508t__vy,_self+24,8);
  memcpy(&__t2508t__radius,_self+32,8);
  self__cx=__t2508t__cx;
  self__cy=__t2508t__cy;
  self__vx=__t2508t__vx;
  self__vy=__t2508t__vy;
  self__radius=__t2508t__radius;
  mul__t173t(self__vx,dt,&__t2509t__);
  add__t149t(self__cx,__t2509t__,&__t2510t__);
  self__cx=__t2510t__;
  mul__t173t(self__vy,dt,&__t2511t__);
  add__t149t(self__cy,__t2511t__,&__t2512t__);
  self__cy=__t2512t__;
  sub__t322t(self__cx,self__radius,&__t2513t__);
  __t2514t=0.0;
  lt__t226t(__t2513t__,__t2514t,&__t2515t__);
  if(__t2515t__){
  self__cx=self__radius;
  abs__t1321t(self__vx,&__t2516t__);
  self__vx=__t2516t__;
  }
  add__t149t(self__cx,self__radius,&__t2517t__);
  __t2518t=800.0;
  gt__t250t(__t2517t__,__t2518t,&__t2519t__);
  if(__t2519t__){
  __t2520t=800.0;
  sub__t322t(__t2520t,self__radius,&__t2521t__);
  self__cx=__t2521t__;
  __t2522t=0.0;
  abs__t1321t(self__vx,&__t2523t__);
  sub__t322t(__t2522t,__t2523t__,&__t2524t__);
  self__vx=__t2524t__;
  }
  sub__t322t(self__cy,self__radius,&__t2525t__);
  __t2526t=0.0;
  lt__t226t(__t2525t__,__t2526t,&__t2527t__);
  if(__t2527t__){
  self__cy=self__radius;
  abs__t1321t(self__vy,&__t2528t__);
  self__vy=__t2528t__;
  }
  add__t149t(self__cy,self__radius,&__t2529t__);
  __t2530t=600.0;
  gt__t250t(__t2529t__,__t2530t,&__t2531t__);
  if(__t2531t__){
  __t2532t=600.0;
  sub__t322t(__t2532t,self__radius,&__t2533t__);
  self__cy=__t2533t__;
  __t2534t=0.0;
  abs__t1321t(self__vy,&__t2535t__);
  sub__t322t(__t2534t,__t2535t__,&__t2536t__);
  self__vy=__t2536t__;
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
  
  __t_failure:*__t2657t=_self;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int draw__t2454t(double window__size__width, double window__size__height, const char* window__title, char* __t2658t, char* __t2659t) {
  char window__ready=*__t2658t;
  char __t2455t=0;
  char is_drawing=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(window__ready){
  __t_errcode=52;
  goto __t_failure;
  }
  __t2455t=1;
  is_drawing=__t2455t;
  BeginDrawing();
  goto __t_return;
  
  __t_failure:if(is_drawing){
  EndDrawing();
  }
  __t_return:
  *__t2658t=window__ready;
  *__t2659t=is_drawing;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t272t(uint64_t x, uint64_t y, char* __t2660t) {
  int __t273t__=0;
  char z=0;
  is_different__t94t(x,y,&__t273t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2660t=z;
}

static inline __attribute__((always_inline)) int nat8__t2401t(uint64_t x, uint8_t* __t2661t) {
  uint64_t __t2402t=0;
  char __t2403t__=0;
  uint8_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2402t=255;
  gt__t272t(x,__t2402t,&__t2403t__);
  if(__t2403t__){
  __t_errcode=49;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2661t=value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int Color__t2439t(uint64_t _r, uint64_t _g, uint64_t _b, uint8_t* __t2662t, uint8_t* __t2663t, uint8_t* __t2664t, uint8_t* __t2665t) {
  int __t2440t=0;
  uint64_t __t2441t=0;
  uint64_t _a=0;
  uint8_t __t2442t__=0;
  uint8_t r=0;
  uint8_t __t2443t__=0;
  uint8_t g=0;
  uint8_t __t2444t__=0;
  uint8_t b=0;
  uint8_t __t2445t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2441t=255;
  _a=__t2441t;
  __t_errcode=nat8__t2401t(_r,&__t2442t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t2442t__;
  __t_errcode=nat8__t2401t(_g,&__t2443t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t2443t__;
  __t_errcode=nat8__t2401t(_b,&__t2444t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t2444t__;
  __t_errcode=nat8__t2401t(_a,&__t2445t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t2445t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2662t=r;
  *__t2663t=g;
  *__t2664t=b;
  *__t2665t=a;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void clear__t2456t(double window__size__width, double window__size__height, const char* window__title, char* __t2666t, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a, double* __t2667t, double* __t2668t, const char** __t2669t, char* __t2670t) {
  char window__ready=*__t2666t;
  ClearBackground((Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t2666t=window__ready;
  *__t2667t=window__size__width;
  *__t2668t=window__size__height;
  *__t2669t=window__title;
  *__t2670t=window__ready;
}

static inline __attribute__((always_inline)) int get__t591t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2671t) {
  char __t592t__=0;
  uint64_t __t593t__=0;
  uint64_t __t594t__=0;
  uint64_t __t595t__=0;
  uint64_t __t596t__=0;
  char* __t597t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(i,buffer__unsafe_size,&__t592t__);
  if(__t592t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t506t(buffer__unsafe_align,&__t593t__);
  mul__t195t(i,__t593t__,&__t594t__);
  nat__t506t(buffer__unsafe_offset,&__t595t__);
  add__t171t(__t594t__,__t595t__,&__t596t__);
  add__t504t(buffer__unsafe_ptr,__t596t__,&__t597t__);
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2671t=__t597t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int Color__t2433t(uint64_t _r, uint64_t _g, uint64_t _b, uint64_t _a, uint8_t* __t2672t, uint8_t* __t2673t, uint8_t* __t2674t, uint8_t* __t2675t) {
  int __t2434t=0;
  uint8_t __t2435t__=0;
  uint8_t r=0;
  uint8_t __t2436t__=0;
  uint8_t g=0;
  uint8_t __t2437t__=0;
  uint8_t b=0;
  uint8_t __t2438t__=0;
  uint8_t a=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=nat8__t2401t(_r,&__t2435t__);
  if(__t_errcode){
  goto __t_failure;
  }
  r=__t2435t__;
  __t_errcode=nat8__t2401t(_g,&__t2436t__);
  if(__t_errcode){
  goto __t_failure;
  }
  g=__t2436t__;
  __t_errcode=nat8__t2401t(_b,&__t2437t__);
  if(__t_errcode){
  goto __t_failure;
  }
  b=__t2437t__;
  __t_errcode=nat8__t2401t(_a,&__t2438t__);
  if(__t_errcode){
  goto __t_failure;
  }
  a=__t2438t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2672t=r;
  *__t2673t=g;
  *__t2674t=b;
  *__t2675t=a;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void circ__t2496t(double window__size__width, double window__size__height, const char* window__title, char* __t2676t, double pos__x, double pos__y, double radius, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a, double* __t2677t, double* __t2678t, const char** __t2679t, char* __t2680t) {
  char window__ready=*__t2676t;
  DrawCircleV((Vector2){
  (float)pos__x,(float)pos__y}
  ,(float)radius,(Color){
  color__r,color__g,color__b,color__a}
  );
  goto __t_return;
  __t_return:
  *__t2676t=window__ready;
  *__t2677t=window__size__width;
  *__t2678t=window__size__height;
  *__t2679t=window__title;
  *__t2680t=window__ready;
}

static inline __attribute__((always_inline)) int nat__t420t(double x, uint64_t* __t2681t) {
  int __t421t=0;
  int __t422t=0;
  uint64_t __t423t=0;
  double __t424t__=0;
  char __t425t__=0;
  uint64_t value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t423t=0;
  float__t404t(__t423t,&__t424t__);
  lt__t226t(x,__t424t__,&__t425t__);
  if(__t425t__){
  __t_errcode=6;
  goto __t_failure;
  }
  value=x;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t2681t=value;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void circ_line__t2499t(double window__size__width, double window__size__height, const char* window__title, char* __t2682t, double pos__x, double pos__y, uint64_t radius, uint64_t thickness, uint8_t color__r, uint8_t color__g, uint8_t color__b, uint8_t color__a, double* __t2683t, double* __t2684t, const char** __t2685t, char* __t2686t) {
  char window__ready=*__t2682t;
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
  *__t2682t=window__ready;
  *__t2683t=window__size__width;
  *__t2684t=window__size__height;
  *__t2685t=window__title;
  *__t2686t=window__ready;
}

static inline __attribute__((always_inline)) int draw__t2537t(double self__cx, double self__cy, double self__vx, double self__vy, double self__radius, double win__size__width, double win__size__height, const char* win__title, char* __t2687t) {
  char win__ready=*__t2687t;
  uint64_t __t2538t=0;
  uint64_t __t2539t=0;
  uint64_t __t2540t=0;
  uint8_t __t2541t__r=0;
  uint8_t __t2541t__g=0;
  uint8_t __t2541t__b=0;
  uint8_t __t2541t__a=0;
  uint8_t white__r=0;
  uint8_t white__g=0;
  uint8_t white__b=0;
  uint8_t white__a=0;
  uint64_t __t2542t=0;
  uint64_t __t2543t=0;
  uint64_t __t2544t=0;
  uint8_t __t2545t__r=0;
  uint8_t __t2545t__g=0;
  uint8_t __t2545t__b=0;
  uint8_t __t2545t__a=0;
  uint8_t teal__r=0;
  uint8_t teal__g=0;
  uint8_t teal__b=0;
  uint8_t teal__a=0;
  uint64_t __t2546t=0;
  uint64_t __t2547t=0;
  uint64_t __t2548t=0;
  uint64_t __t2549t=0;
  uint8_t __t2550t__r=0;
  uint8_t __t2550t__g=0;
  uint8_t __t2550t__b=0;
  uint8_t __t2550t__a=0;
  uint8_t shadow__r=0;
  uint8_t shadow__g=0;
  uint8_t shadow__b=0;
  uint8_t shadow__a=0;
  double pos__cx=0;
  double pos__cy=0;
  double __t2551t=0;
  double __t2552t__=0;
  double __t2553t=0;
  double __t2554t__=0;
  double __t2555t__size__width=0;
  double __t2555t__size__height=0;
  const char* __t2555t__title=0;
  char __t2555t__ready=0;
  double __t2556t__size__width=0;
  double __t2556t__size__height=0;
  const char* __t2556t__title=0;
  char __t2556t__ready=0;
  uint64_t __t2557t__=0;
  uint64_t __t2558t=0;
  double __t2559t__size__width=0;
  double __t2559t__size__height=0;
  const char* __t2559t__title=0;
  char __t2559t__ready=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2538t=255;
  __t2539t=255;
  __t2540t=255;
  __t_errcode=Color__t2439t(__t2538t,__t2539t,__t2540t,&__t2541t__r,&__t2541t__g,&__t2541t__b,&__t2541t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  white__r=__t2541t__r;
  white__g=__t2541t__g;
  white__b=__t2541t__b;
  white__a=__t2541t__a;
  __t2542t=0;
  __t2543t=200;
  __t2544t=180;
  __t_errcode=Color__t2439t(__t2542t,__t2543t,__t2544t,&__t2545t__r,&__t2545t__g,&__t2545t__b,&__t2545t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  teal__r=__t2545t__r;
  teal__g=__t2545t__g;
  teal__b=__t2545t__b;
  teal__a=__t2545t__a;
  __t2546t=0;
  __t2547t=200;
  __t2548t=180;
  __t2549t=60;
  __t_errcode=Color__t2433t(__t2546t,__t2547t,__t2548t,__t2549t,&__t2550t__r,&__t2550t__g,&__t2550t__b,&__t2550t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  shadow__r=__t2550t__r;
  shadow__g=__t2550t__g;
  shadow__b=__t2550t__b;
  shadow__a=__t2550t__a;
  pos__cx=self__cx;
  pos__cy=self__cy;
  __t2551t=4.0;
  add__t149t(self__cx,__t2551t,&__t2552t__);
  __t2553t=4.0;
  add__t149t(self__cy,__t2553t,&__t2554t__);
  circ__t2496t(win__size__width,win__size__height,win__title,&win__ready,__t2552t__,__t2554t__,self__radius,shadow__r,shadow__g,shadow__b,shadow__a,&__t2555t__size__width,&__t2555t__size__height,&__t2555t__title,&__t2555t__ready);
  circ__t2496t(__t2555t__size__width,__t2555t__size__height,__t2555t__title,&__t2555t__ready,pos__cx,pos__cy,self__radius,teal__r,teal__g,teal__b,teal__a,&__t2556t__size__width,&__t2556t__size__height,&__t2556t__title,&__t2556t__ready);
  __t_errcode=nat__t420t(self__radius,&__t2557t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2558t=2;
  circ_line__t2499t(__t2556t__size__width,__t2556t__size__height,__t2556t__title,&__t2556t__ready,pos__cx,pos__cy,__t2557t__,__t2558t,white__r,white__g,white__b,white__a,&__t2559t__size__width,&__t2559t__size__height,&__t2559t__title,&__t2559t__ready);
  
  __t_failure:*__t2687t=win__ready;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2560t() {
  double __t2561t=0;
  double __t2562t=0;
  double __t2563t__width=0;
  double __t2563t__height=0;
  double __t2565t__size__width=0;
  double __t2565t__size__height=0;
  const char* __t2565t__title=0;
  char __t2565t__ready=0;
  double win__size__width=0;
  double win__size__height=0;
  const char* win__title=0;
  char win__ready=0;
  uint64_t __t2566t=0;
  uint64_t N=0;
  char* __t2569t__unsafe_ptr=0;
  uint64_t __t2569t__unsafe_size=0;
  uint16_t __t2569t__unsafe_offset=0;
  uint16_t __t2569t__unsafe_align=0;
  char* __t2570t__unsafe_ptr=0;
  uint64_t __t2570t__unsafe_size=0;
  uint16_t __t2570t__unsafe_offset=0;
  uint16_t __t2570t__unsafe_align=0;
  char __t2571t____t511t__=0;
  char* circles__unsafe_ptr=0;
  uint64_t circles__unsafe_size=0;
  uint16_t circles__unsafe_offset=0;
  uint16_t circles__unsafe_align=0;
  uint64_t __t2572t=0;
  char __t2573t=0;
  char* __t2574t__=0;
  char* create_circle=0;
  double __t2575t__=0;
  double i=0;
  double __t2576t=0;
  double __t2577t=0;
  double __t2578t=0;
  double __t2579t__=0;
  double __t2580t=0;
  double __t2581t__=0;
  double __t2582t=0;
  double __t2583t__cx=0;
  double __t2583t__cy=0;
  double __t2583t__vx=0;
  double __t2583t__vy=0;
  double __t2583t__radius=0;
  char __t2584t__=0;
  double __t2585t__=0;
  double dt=0;
  uint64_t __t2586t=0;
  char __t2587t=0;
  char* __t2588t__=0;
  char* proc_circle=0;
  char __t2590t__=0;
  char frame=0;
  uint64_t __t2592t=0;
  uint64_t __t2593t=0;
  uint64_t __t2594t=0;
  uint8_t __t2595t__r=0;
  uint8_t __t2595t__g=0;
  uint8_t __t2595t__b=0;
  uint8_t __t2595t__a=0;
  double __t2596t__size__width=0;
  double __t2596t__size__height=0;
  const char* __t2596t__title=0;
  char __t2596t__ready=0;
  uint64_t __t2597t=0;
  char __t2598t=0;
  char* __t2599t__=0;
  double __t2600t__cx=0;
  double __t2600t__cy=0;
  double __t2600t__vx=0;
  double __t2600t__vy=0;
  double __t2600t__radius=0;
  double draw_circle__cx=0;
  double draw_circle__cy=0;
  double draw_circle__vx=0;
  double draw_circle__vy=0;
  double draw_circle__radius=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2561t=800.0;
  __t2562t=600.0;
  Size__t2447t(__t2561t,__t2562t,&__t2563t__width,&__t2563t__height);
  Window__t2448t(__t2563t__width,__t2563t__height,__t2564t,&__t2565t__size__width,&__t2565t__size__height,&__t2565t__title,&__t2565t__ready);
  win__size__width=__t2565t__size__width;
  win__size__height=__t2565t__size__height;
  win__title=__t2565t__title;
  win__ready=__t2565t__ready;
  __t2566t=1000;
  N=__t2566t;
  Circle____t_buffer____buffer__t2567t(&__t2569t__unsafe_ptr,&__t2569t__unsafe_size,&__t2569t__unsafe_offset,&__t2569t__unsafe_align);
  __t_errcode=alloc__t509t(&__t2569t__unsafe_ptr,&__t2569t__unsafe_size,&__t2569t__unsafe_offset,&__t2569t__unsafe_align,N,&__t2570t__unsafe_ptr,&__t2570t__unsafe_size,&__t2570t__unsafe_offset,&__t2570t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  circles__unsafe_ptr=__t2570t__unsafe_ptr;
  circles__unsafe_size=__t2570t__unsafe_size;
  circles__unsafe_offset=__t2570t__unsafe_offset;
  circles__unsafe_align=__t2570t__unsafe_align;
  __t2572t=0;
  while(1){
  __t_complain=mutget__t584t(&circles__unsafe_ptr,&circles__unsafe_size,&circles__unsafe_offset,&circles__unsafe_align,__t2572t,&__t2574t__);
  __t2573t=__t_complain;
  create_circle=__t2574t__;
  __t2573t=__t2573t==0;
  __t2572t=__t2572t+1;
  if(!__t2573t){
  break;
  }
  float__t404t(__t2572t,&__t2575t__);
  i=__t2575t__;
  __t2576t=400.0;
  __t2577t=300.0;
  __t2578t=200.0;
  sub__t322t(__t2578t,i,&__t2579t__);
  __t2580t=160.0;
  add__t149t(__t2580t,i,&__t2581t__);
  __t2582t=30.0;
  Circle__t2501t(__t2576t,__t2577t,__t2579t__,__t2581t__,__t2582t,&__t2583t__cx,&__t2583t__cy,&__t2583t__vx,&__t2583t__vy,&__t2583t__radius);
  if(!create_circle){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(create_circle,&__t2583t__cx,8);
  memcpy(create_circle+8,&__t2583t__cy,8);
  memcpy(create_circle+16,&__t2583t__vx,8);
  memcpy(create_circle+24,&__t2583t__vy,8);
  memcpy(create_circle+32,&__t2583t__radius,8);
  }
  while(1){
  is_open__t2452t(win__size__width,win__size__height,win__title,win__ready,&__t2584t__);
  if(!__t2584t__){
  break;
  }
  dt__t2500t(&__t2585t__);
  dt=__t2585t__;
  __t2586t=0;
  while(1){
  __t_complain=mutget__t584t(&circles__unsafe_ptr,&circles__unsafe_size,&circles__unsafe_offset,&circles__unsafe_align,__t2586t,&__t2588t__);
  __t2587t=__t_complain;
  proc_circle=__t2588t__;
  __t2587t=__t2587t==0;
  __t2586t=__t2586t+1;
  if(!__t2587t){
  break;
  }
  __t_errcode=process__t2507t(&proc_circle,dt);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  __t_errcode=draw__t2454t(win__size__width,win__size__height,win__title,&win__ready,&__t2590t__);
  if(__t_errcode){
  goto __t_failure;
  }
  frame=__t2590t__;
  __t2592t=20;
  __t2593t=20;
  __t2594t=60;
  __t_errcode=Color__t2439t(__t2592t,__t2593t,__t2594t,&__t2595t__r,&__t2595t__g,&__t2595t__b,&__t2595t__a);
  if(__t_errcode){
  goto __t_failure;
  }
  clear__t2456t(win__size__width,win__size__height,win__title,&win__ready,__t2595t__r,__t2595t__g,__t2595t__b,__t2595t__a,&__t2596t__size__width,&__t2596t__size__height,&__t2596t__title,&__t2596t__ready);
  __t2597t=0;
  while(1){
  __t_complain=get__t591t(circles__unsafe_ptr,circles__unsafe_size,circles__unsafe_offset,circles__unsafe_align,__t2597t,&__t2599t__);
  __t2598t=__t_complain;
  if(!__t2599t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t2600t__cx,__t2599t__,8);
  memcpy(&__t2600t__cy,__t2599t__+8,8);
  memcpy(&__t2600t__vx,__t2599t__+16,8);
  memcpy(&__t2600t__vy,__t2599t__+24,8);
  memcpy(&__t2600t__radius,__t2599t__+32,8);
  }
  draw_circle__cx=__t2600t__cx;
  draw_circle__cy=__t2600t__cy;
  draw_circle__vx=__t2600t__vx;
  draw_circle__vy=__t2600t__vy;
  draw_circle__radius=__t2600t__radius;
  __t2598t=__t2598t==0;
  __t2597t=__t2597t+1;
  if(!__t2598t){
  break;
  }
  __t_errcode=draw__t2537t(draw_circle__cx,draw_circle__cy,draw_circle__vx,draw_circle__vy,draw_circle__radius,win__size__width,win__size__height,win__title,&win__ready);
  if(__t_errcode){
  goto __t_failure;
  }
  }
  if(__t2590t__){
  EndDrawing();
  }
  }
  
  __t_failure:exists__t436t(__t2570t__unsafe_ptr,&__t2571t____t511t__);
  if(__t2571t____t511t__){
  free__t502t(&__t2570t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2560t();return 0;}