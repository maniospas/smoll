#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t400t="\n";
const char* const __t2632t="123";
const char* const __t2636t="789";
const char* const __t2643t="out of space";
const char* const __t2634t="456";
static const char* __t_all_errcodes[35] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t960t(char** __t2645t, uint64_t* __t2646t, uint32_t* __t2647t, uint32_t* __t2648t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t2645t=unsafe_ptr;
  *__t2646t=unsafe_size;
  *__t2647t=unsafe_offset;
  *__t2648t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t609t(char* x, char* __t2649t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2649t=z;
}

static inline __attribute__((always_inline)) void free__t679t(char** __t2650t) {
  char* allocated=*__t2650t;
  if(allocated){
  free(allocated);
  }
  *__t2650t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2651t) {
  int value=0;
  *__t2651t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t2652t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t2652t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t2653t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t2653t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t2654t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2654t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t2655t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2655t=z;
}

static inline __attribute__((always_inline)) void nat__t684t(uint32_t x, uint64_t* __t2656t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2656t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t2657t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2657t=z;
}

static inline __attribute__((always_inline)) void zero__t680t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t2658t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2658t=z;
}

static inline __attribute__((always_inline)) int alloc__t672t(uint64_t bytes, char** __t2659t) {
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
  *__t2659t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t801t(char** __t2660t, uint64_t* __t2661t, uint32_t* __t2662t, uint32_t* __t2663t, uint64_t size, char** __t2664t, uint64_t* __t2665t, uint32_t* __t2666t, uint32_t* __t2667t) {
  char* buffer__unsafe_ptr=*__t2660t;
  uint64_t buffer__unsafe_size=*__t2661t;
  uint32_t buffer__unsafe_offset=*__t2662t;
  uint32_t buffer__unsafe_align=*__t2663t;
  int __t802t=0;
  char __t803t__=0;
  char __t805t__=0;
  uint64_t __t806t=0;
  char __t807t__=0;
  char __t808t=0;
  uint64_t __t809t=0;
  uint64_t __t810t__=0;
  uint64_t __t811t__=0;
  int __t813t=0;
  uint64_t __t814t=0;
  char __t815t__=0;
  uint64_t __t816t__=0;
  uint64_t __t817t__=0;
  uint64_t bytes=0;
  int __t818t=0;
  uint64_t __t819t=0;
  char __t820t__=0;
  char* __t821t__=0;
  int __t822t=0;
  uint64_t __t823t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t805t__);
  if(__t805t__){
  __t806t=0;
  neq__t157t(size,__t806t,&__t807t__);
  __t808t=__t807t__;
  }
  if(__t808t){
  __t809t=0;
  nat__t684t(buffer__unsafe_align,&__t810t__);
  mul__t212t(__t810t__,size,&__t811t__);
  zero__t680t(buffer__unsafe_ptr,__t809t,__t811t__);
  goto __t_return;
  }
  __t814t=0;
  neq__t157t(buffer__unsafe_size,__t814t,&__t815t__);
  if(__t815t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t816t__);
  mul__t212t(__t816t__,size,&__t817t__);
  bytes=__t817t__;
  __t819t=0;
  eq__t133t(bytes,__t819t,&__t820t__);
  if(__t820t__){
  __t_errcode=12;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t672t(bytes,&__t821t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t823t=0;
  zero__t680t(__t821t__,__t823t,bytes);
  buffer__unsafe_ptr=__t821t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t609t(buffer__unsafe_ptr,&__t803t__);
  if(__t803t__){
  free__t679t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2660t=buffer__unsafe_ptr;
  *__t2661t=buffer__unsafe_size;
  *__t2662t=buffer__unsafe_offset;
  *__t2663t=buffer__unsafe_align;
  *__t2664t=buffer__unsafe_ptr;
  *__t2665t=buffer__unsafe_size;
  *__t2666t=buffer__unsafe_offset;
  *__t2667t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t959t(uint64_t size, char** __t2668t, uint64_t* __t2669t, uint32_t* __t2670t, uint32_t* __t2671t) {
  char* __t962t__unsafe_ptr=0;
  uint64_t __t962t__unsafe_size=0;
  uint32_t __t962t__unsafe_offset=0;
  uint32_t __t962t__unsafe_align=0;
  char* __t963t__unsafe_ptr=0;
  uint64_t __t963t__unsafe_size=0;
  uint32_t __t963t__unsafe_offset=0;
  uint32_t __t963t__unsafe_align=0;
  char __t964t____t803t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t960t(&__t962t__unsafe_ptr,&__t962t__unsafe_size,&__t962t__unsafe_offset,&__t962t__unsafe_align);
  __t_errcode=alloc__t801t(&__t962t__unsafe_ptr,&__t962t__unsafe_size,&__t962t__unsafe_offset,&__t962t__unsafe_align,size,&__t963t__unsafe_ptr,&__t963t__unsafe_size,&__t963t__unsafe_offset,&__t963t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t609t(__t963t__unsafe_ptr,&__t964t____t803t__);
  if(__t964t____t803t__){
  free__t679t(&__t963t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2668t=__t963t__unsafe_ptr;
  *__t2669t=__t963t__unsafe_size;
  *__t2670t=__t963t__unsafe_offset;
  *__t2671t=__t963t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1018t(char** __t2672t, uint64_t* __t2673t, uint32_t* __t2674t, uint32_t* __t2675t, uint64_t _pos, char** __t2676t, uint64_t* __t2677t, uint32_t* __t2678t, uint32_t* __t2679t, uint64_t* __t2680t) {
  char* buf__unsafe_ptr=*__t2672t;
  uint64_t buf__unsafe_size=*__t2673t;
  uint32_t buf__unsafe_offset=*__t2674t;
  uint32_t buf__unsafe_align=*__t2675t;
  uint64_t __t1019t=0;
  uint64_t pos=0;
  __t1019t=_pos;
  pos=__t1019t;
  goto __t_return;
  __t_return:
  *__t2672t=buf__unsafe_ptr;
  *__t2673t=buf__unsafe_size;
  *__t2674t=buf__unsafe_offset;
  *__t2675t=buf__unsafe_align;
  *__t2676t=buf__unsafe_ptr;
  *__t2677t=buf__unsafe_size;
  *__t2678t=buf__unsafe_offset;
  *__t2679t=buf__unsafe_align;
  *__t2680t=pos;
}

static inline __attribute__((always_inline)) void arena__t1021t(char** __t2681t, uint64_t* __t2682t, uint32_t* __t2683t, uint32_t* __t2684t, char** __t2685t, uint64_t* __t2686t, uint32_t* __t2687t, uint32_t* __t2688t, uint64_t* __t2689t) {
  char* buf__unsafe_ptr=*__t2681t;
  uint64_t buf__unsafe_size=*__t2682t;
  uint32_t buf__unsafe_offset=*__t2683t;
  uint32_t buf__unsafe_align=*__t2684t;
  uint64_t __t1022t=0;
  char* __t1023t__buf__unsafe_ptr=0;
  uint64_t __t1023t__buf__unsafe_size=0;
  uint32_t __t1023t__buf__unsafe_offset=0;
  uint32_t __t1023t__buf__unsafe_align=0;
  uint64_t __t1023t__pos=0;
  __t1022t=0;
  arena__t1018t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1022t,&__t1023t__buf__unsafe_ptr,&__t1023t__buf__unsafe_size,&__t1023t__buf__unsafe_offset,&__t1023t__buf__unsafe_align,&__t1023t__pos);
  goto __t_return;
  __t_return:
  *__t2681t=buf__unsafe_ptr;
  *__t2682t=buf__unsafe_size;
  *__t2683t=buf__unsafe_offset;
  *__t2684t=buf__unsafe_align;
  *__t2685t=__t1023t__buf__unsafe_ptr;
  *__t2686t=__t1023t__buf__unsafe_size;
  *__t2687t=__t1023t__buf__unsafe_offset;
  *__t2688t=__t1023t__buf__unsafe_align;
  *__t2689t=__t1023t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1154t(char** __t2690t, uint64_t* __t2691t, uint32_t* __t2692t, uint32_t* __t2693t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t2690t=unsafe_ptr;
  *__t2691t=unsafe_size;
  *__t2692t=unsafe_offset;
  *__t2693t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2694t) {
  *__t2694t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t2695t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2695t=z;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t2696t) {
  int __t338t__=0;
  char z=0;
  is_different__t108t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2696t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2697t) {
  *__t2697t=to;
}

static inline __attribute__((always_inline)) void add__t681t(char* allocated, uint64_t offset, char** __t2698t) {
  char* element=0;
  char* __t682t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t682t__);
  goto __t_return;
  __t_return:
  *__t2698t=__t682t__;
}

static inline __attribute__((always_inline)) int get__t1006t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t2699t) {
  char __t1007t__=0;
  uint64_t __t1008t__=0;
  uint64_t __t1009t__=0;
  uint64_t __t1010t__=0;
  uint64_t __t1011t__=0;
  char* __t1012t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,buffer__unsafe_size,&__t1007t__);
  if(__t1007t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t684t(buffer__unsafe_align,&__t1008t__);
  mul__t212t(i,__t1008t__,&__t1009t__);
  nat__t684t(buffer__unsafe_offset,&__t1010t__);
  add__t188t(__t1009t__,__t1010t__,&__t1011t__);
  add__t681t(buffer__unsafe_ptr,__t1011t__,&__t1012t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2699t=__t1012t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1176t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2700t, uint64_t* __t2701t, uint64_t* __t2702t, char* __t2703t) {
  goto __t_return;
  __t_return:
  *__t2700t=unsafe_ptr;
  *__t2701t=dat__pos;
  *__t2702t=dat__length;
  *__t2703t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1180t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2704t, uint64_t* __t2705t, uint64_t* __t2706t, char* __t2707t) {
  char* unsafe_ptr=0;
  uint64_t __t1181t__=0;
  uint64_t __t1182t=0;
  char __t1183t__=0;
  uint64_t __t1184t__=0;
  uint64_t __t1185t=0;
  char __t1186t__=0;
  char* __t1187t__unsafe_ptr=0;
  uint64_t __t1187t__dat__pos=0;
  uint64_t __t1187t__dat__length=0;
  char __t1187t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t684t(buf__unsafe_align,&__t1181t__);
  __t1182t=1;
  neq__t157t(__t1181t__,__t1182t,&__t1183t__);
  if(__t1183t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t684t(buf__unsafe_offset,&__t1184t__);
  __t1185t=0;
  neq__t157t(__t1184t__,__t1185t,&__t1186t__);
  if(__t1186t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t1176t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1187t__unsafe_ptr,&__t1187t__dat__pos,&__t1187t__dat__length,&__t1187t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2704t=__t1187t__unsafe_ptr;
  *__t2705t=__t1187t__dat__pos;
  *__t2706t=__t1187t__dat__length;
  *__t2707t=__t1187t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1214t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2708t, uint64_t* __t2709t, uint64_t* __t2710t, char* __t2711t) {
  uint64_t __t1215t=0;
  char __t1216t__=0;
  char* __t1218t__=0;
  char __t1219t__value=0;
  char first=0;
  char* __t1220t__unsafe_ptr=0;
  uint64_t __t1220t__dat__pos=0;
  uint64_t __t1220t__dat__length=0;
  char __t1220t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1215t=0;
  neq__t157t(length,__t1215t,&__t1216t__);
  if(__t1216t__){
  __t_errcode=get__t1006t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1218t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1218t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1219t__value,__t1218t__,1);
  first=__t1219t__value;
  }
  __t_errcode=str__t1180t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1220t__unsafe_ptr,&__t1220t__dat__pos,&__t1220t__dat__length,&__t1220t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2708t=__t1220t__unsafe_ptr;
  *__t2709t=__t1220t__dat__pos;
  *__t2710t=__t1220t__dat__length;
  *__t2711t=__t1220t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1236t(const char* c, char** __t2712t, uint64_t* __t2713t, uint64_t* __t2714t, char* __t2715t) {
  char* __t1237t__unsafe_ptr=0;
  uint64_t __t1237t__unsafe_size=0;
  uint32_t __t1237t__unsafe_offset=0;
  uint32_t __t1237t__unsafe_align=0;
  char* __t1238t__unsafe_ptr=0;
  uint64_t __t1238t__unsafe_size=0;
  uint32_t __t1238t__unsafe_offset=0;
  uint32_t __t1238t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1239t__=0;
  uint64_t length=0;
  uint64_t __t1240t=0;
  uint64_t __t1241t__=0;
  uint64_t __t1242t=0;
  char* __t1244t__unsafe_ptr=0;
  uint64_t __t1244t__dat__pos=0;
  uint64_t __t1244t__dat__length=0;
  char __t1244t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1154t(&__t1237t__unsafe_ptr,&__t1237t__unsafe_size,&__t1237t__unsafe_offset,&__t1237t__unsafe_align);
  __t1238t__unsafe_ptr=__t1237t__unsafe_ptr;
  __t1238t__unsafe_size=__t1237t__unsafe_size;
  __t1238t__unsafe_offset=__t1237t__unsafe_offset;
  __t1238t__unsafe_align=__t1237t__unsafe_align;
  buf__unsafe_ptr=__t1238t__unsafe_ptr;
  buf__unsafe_size=__t1238t__unsafe_size;
  buf__unsafe_offset=__t1238t__unsafe_offset;
  buf__unsafe_align=__t1238t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1239t__);
  buf__unsafe_ptr=__t1239t__;
  if(c){
  length=strlen(c);
  }
  __t1240t=1;
  add__t188t(length,__t1240t,&__t1241t__);
  buf__unsafe_size=__t1241t__;
  __t1242t=0;
  __t_errcode=str__t1214t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1242t,length,&__t1244t__unsafe_ptr,&__t1244t__dat__pos,&__t1244t__dat__length,&__t1244t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2712t=__t1244t__unsafe_ptr;
  *__t2713t=__t1244t__dat__pos;
  *__t2714t=__t1244t__dat__length;
  *__t2715t=__t1244t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1245t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2716t) {
  goto __t_return;
  __t_return:
  *__t2716t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t1013t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t2717t) {
  goto __t_return;
  __t_return:
  *__t2717t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t2718t) {
  int __t290t__=0;
  char z=0;
  is_different__t108t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2718t=z;
}

static inline __attribute__((always_inline)) void allocated__t1026t(char** __t2719t, uint64_t* __t2720t, uint32_t* __t2721t, uint32_t* __t2722t, uint64_t pos, char** __t2723t, uint64_t* __t2724t, uint32_t* __t2725t, uint32_t* __t2726t, uint64_t* __t2727t) {
  char* buf__unsafe_ptr=*__t2719t;
  uint64_t buf__unsafe_size=*__t2720t;
  uint32_t buf__unsafe_offset=*__t2721t;
  uint32_t buf__unsafe_align=*__t2722t;
  goto __t_return;
  __t_return:
  *__t2719t=buf__unsafe_ptr;
  *__t2720t=buf__unsafe_size;
  *__t2721t=buf__unsafe_offset;
  *__t2722t=buf__unsafe_align;
  *__t2723t=buf__unsafe_ptr;
  *__t2724t=buf__unsafe_size;
  *__t2725t=buf__unsafe_offset;
  *__t2726t=buf__unsafe_align;
  *__t2727t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1066t(char** __t2728t, uint64_t* __t2729t, uint32_t* __t2730t, uint32_t* __t2731t, uint64_t* __t2732t, uint64_t length, char** __t2733t, uint64_t* __t2734t, uint32_t* __t2735t, uint32_t* __t2736t, uint64_t* __t2737t) {
  char* allocator__buf__unsafe_ptr=*__t2728t;
  uint64_t allocator__buf__unsafe_size=*__t2729t;
  uint32_t allocator__buf__unsafe_offset=*__t2730t;
  uint32_t allocator__buf__unsafe_align=*__t2731t;
  uint64_t allocator__pos=*__t2732t;
  int __t1067t=0;
  uint64_t __t1068t__=0;
  uint64_t next_pos=0;
  uint64_t __t1069t__=0;
  char __t1070t__=0;
  uint64_t __t1071t=0;
  uint64_t __t1072t__=0;
  uint64_t pos=0;
  char* __t1073t__buf__unsafe_ptr=0;
  uint64_t __t1073t__buf__unsafe_size=0;
  uint32_t __t1073t__buf__unsafe_offset=0;
  uint32_t __t1073t__buf__unsafe_align=0;
  uint64_t __t1073t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1068t__);
  next_pos=__t1068t__;
  len__t1013t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1069t__);
  gt__t289t(next_pos,__t1069t__,&__t1070t__);
  if(__t1070t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t1071t=0;
  add__t188t(allocator__pos,__t1071t,&__t1072t__);
  pos=__t1072t__;
  allocator__pos=next_pos;
  allocated__t1026t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1073t__buf__unsafe_ptr,&__t1073t__buf__unsafe_size,&__t1073t__buf__unsafe_offset,&__t1073t__buf__unsafe_align,&__t1073t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2728t=allocator__buf__unsafe_ptr;
  *__t2729t=allocator__buf__unsafe_size;
  *__t2730t=allocator__buf__unsafe_offset;
  *__t2731t=allocator__buf__unsafe_align;
  *__t2732t=allocator__pos;
  *__t2733t=__t1073t__buf__unsafe_ptr;
  *__t2734t=__t1073t__buf__unsafe_size;
  *__t2735t=__t1073t__buf__unsafe_offset;
  *__t2736t=__t1073t__buf__unsafe_align;
  *__t2737t=__t1073t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1267t(char** __t2738t, uint64_t* __t2739t, uint32_t* __t2740t, uint32_t* __t2741t, uint64_t* __t2742t, const char* _other, char** __t2743t, uint64_t* __t2744t, uint64_t* __t2745t, char* __t2746t) {
  char* CHARS__buf__unsafe_ptr=*__t2738t;
  uint64_t CHARS__buf__unsafe_size=*__t2739t;
  uint32_t CHARS__buf__unsafe_offset=*__t2740t;
  uint32_t CHARS__buf__unsafe_align=*__t2741t;
  uint64_t CHARS__pos=*__t2742t;
  char* __t1268t__unsafe_ptr=0;
  uint64_t __t1268t__dat__pos=0;
  uint64_t __t1268t__dat__length=0;
  char __t1268t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1269t__=0;
  char* __t1270t__buf__unsafe_ptr=0;
  uint64_t __t1270t__buf__unsafe_size=0;
  uint32_t __t1270t__buf__unsafe_offset=0;
  uint32_t __t1270t__buf__unsafe_align=0;
  uint64_t __t1270t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1271t__unsafe_ptr=0;
  uint64_t __t1271t__dat__pos=0;
  uint64_t __t1271t__dat__length=0;
  char __t1271t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1236t(_other,&__t1268t__unsafe_ptr,&__t1268t__dat__pos,&__t1268t__dat__length,&__t1268t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1268t__unsafe_ptr;
  other__dat__pos=__t1268t__dat__pos;
  other__dat__length=__t1268t__dat__length;
  other__dat__first=__t1268t__dat__first;
  len__t1245t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1269t__);
  __t_errcode=alloc__t1066t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1269t__,&__t1270t__buf__unsafe_ptr,&__t1270t__buf__unsafe_size,&__t1270t__buf__unsafe_offset,&__t1270t__buf__unsafe_align,&__t1270t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1270t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1270t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1270t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1270t__buf__unsafe_align;
  surface__pos=__t1270t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1180t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1271t__unsafe_ptr,&__t1271t__dat__pos,&__t1271t__dat__length,&__t1271t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2738t=CHARS__buf__unsafe_ptr;
  *__t2739t=CHARS__buf__unsafe_size;
  *__t2740t=CHARS__buf__unsafe_offset;
  *__t2741t=CHARS__buf__unsafe_align;
  *__t2742t=CHARS__pos;
  *__t2743t=__t1271t__unsafe_ptr;
  *__t2744t=__t1271t__dat__pos;
  *__t2745t=__t1271t__dat__length;
  *__t2746t=__t1271t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1213t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2747t, uint64_t* __t2748t, uint64_t* __t2749t, char* __t2750t) {
  goto __t_return;
  __t_return:
  *__t2747t=other__unsafe_ptr;
  *__t2748t=other__dat__pos;
  *__t2749t=other__dat__length;
  *__t2750t=other__dat__first;
}

static inline __attribute__((always_inline)) void eq__t161t(char* x, char* y, char* __t2751t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t2751t=z;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t2752t) {
  int __t266t__=0;
  char z=0;
  is_different__t108t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2752t=z;
}

static inline __attribute__((always_inline)) void status__t1031t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t2753t, uint64_t* __t2754t, uint32_t* __t2755t, uint32_t* __t2756t, uint64_t* __t2757t) {
  char* __t1032t__unsafe_ptr=0;
  uint64_t __t1032t__unsafe_size=0;
  uint32_t __t1032t__unsafe_offset=0;
  uint32_t __t1032t__unsafe_align=0;
  uint64_t __t1033t=0;
  __t1032t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1032t__unsafe_size=self__buf__unsafe_size;
  __t1032t__unsafe_offset=self__buf__unsafe_offset;
  __t1032t__unsafe_align=self__buf__unsafe_align;
  __t1033t=self__pos;
  goto __t_return;
  __t_return:
  *__t2753t=__t1032t__unsafe_ptr;
  *__t2754t=__t1032t__unsafe_size;
  *__t2755t=__t1032t__unsafe_offset;
  *__t2756t=__t1032t__unsafe_align;
  *__t2757t=__t1033t;
}

static inline __attribute__((always_inline)) int copy__t1262t(char** __t2758t, uint64_t* __t2759t, uint32_t* __t2760t, uint32_t* __t2761t, uint64_t* __t2762t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2763t, uint64_t* __t2764t, uint64_t* __t2765t, char* __t2766t) {
  char* CHARS__buf__unsafe_ptr=*__t2758t;
  uint64_t CHARS__buf__unsafe_size=*__t2759t;
  uint32_t CHARS__buf__unsafe_offset=*__t2760t;
  uint32_t CHARS__buf__unsafe_align=*__t2761t;
  uint64_t CHARS__pos=*__t2762t;
  char* __t1263t__unsafe_ptr=0;
  uint64_t __t1263t__dat__pos=0;
  uint64_t __t1263t__dat__length=0;
  char __t1263t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1264t__=0;
  char* __t1265t__buf__unsafe_ptr=0;
  uint64_t __t1265t__buf__unsafe_size=0;
  uint32_t __t1265t__buf__unsafe_offset=0;
  uint32_t __t1265t__buf__unsafe_align=0;
  uint64_t __t1265t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1266t__unsafe_ptr=0;
  uint64_t __t1266t__dat__pos=0;
  uint64_t __t1266t__dat__length=0;
  char __t1266t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1213t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1263t__unsafe_ptr,&__t1263t__dat__pos,&__t1263t__dat__length,&__t1263t__dat__first);
  other__unsafe_ptr=__t1263t__unsafe_ptr;
  other__dat__pos=__t1263t__dat__pos;
  other__dat__length=__t1263t__dat__length;
  other__dat__first=__t1263t__dat__first;
  len__t1245t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1264t__);
  __t_errcode=alloc__t1066t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1264t__,&__t1265t__buf__unsafe_ptr,&__t1265t__buf__unsafe_size,&__t1265t__buf__unsafe_offset,&__t1265t__buf__unsafe_align,&__t1265t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1265t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1265t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1265t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1265t__buf__unsafe_align;
  surface__pos=__t1265t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1180t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1266t__unsafe_ptr,&__t1266t__dat__pos,&__t1266t__dat__length,&__t1266t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2758t=CHARS__buf__unsafe_ptr;
  *__t2759t=CHARS__buf__unsafe_size;
  *__t2760t=CHARS__buf__unsafe_offset;
  *__t2761t=CHARS__buf__unsafe_align;
  *__t2762t=CHARS__pos;
  *__t2763t=__t1266t__unsafe_ptr;
  *__t2764t=__t1266t__dat__pos;
  *__t2765t=__t1266t__dat__length;
  *__t2766t=__t1266t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1028t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t2767t, uint64_t* __t2768t, uint32_t* __t2769t, uint32_t* __t2770t, uint64_t* __t2771t) {
  char* __t1029t__unsafe_ptr=0;
  uint64_t __t1029t__unsafe_size=0;
  uint32_t __t1029t__unsafe_offset=0;
  uint32_t __t1029t__unsafe_align=0;
  uint64_t __t1030t=0;
  __t1029t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1029t__unsafe_size=self__buf__unsafe_size;
  __t1029t__unsafe_offset=self__buf__unsafe_offset;
  __t1029t__unsafe_align=self__buf__unsafe_align;
  __t1030t=self__pos;
  goto __t_return;
  __t_return:
  *__t2767t=__t1029t__unsafe_ptr;
  *__t2768t=__t1029t__unsafe_size;
  *__t2769t=__t1029t__unsafe_offset;
  *__t2770t=__t1029t__unsafe_align;
  *__t2771t=__t1030t;
}

static inline __attribute__((always_inline)) int sub__t365t(uint64_t x, uint64_t y, uint64_t* __t2772t) {
  int __t366t__=0;
  int __t367t=0;
  int __t368t=0;
  char __t369t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t108t(x,y,&__t366t__);
  lt__t265t(x,y,&__t369t__);
  if(__t369t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2772t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1232t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t2773t, uint64_t* __t2774t, uint64_t* __t2775t, char* __t2776t) {
  uint64_t __t1234t__=0;
  char* __t1235t__unsafe_ptr=0;
  uint64_t __t1235t__dat__pos=0;
  uint64_t __t1235t__dat__length=0;
  char __t1235t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t365t(endpos,pos,&__t1234t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1214t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1234t__,&__t1235t__unsafe_ptr,&__t1235t__dat__pos,&__t1235t__dat__length,&__t1235t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2773t=__t1235t__unsafe_ptr;
  *__t2774t=__t1235t__dat__pos;
  *__t2775t=__t1235t__dat__length;
  *__t2776t=__t1235t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t1825t(char** __t2777t, uint64_t* __t2778t, uint32_t* __t2779t, uint32_t* __t2780t, uint64_t* __t2781t, char* _s1__unsafe_ptr, uint64_t _s1__dat__pos, uint64_t _s1__dat__length, char _s1__dat__first, char* _s2__unsafe_ptr, uint64_t _s2__dat__pos, uint64_t _s2__dat__length, char _s2__dat__first, char** __t2782t, uint64_t* __t2783t, uint64_t* __t2784t, char* __t2785t) {
  char* CHARS__buf__unsafe_ptr=*__t2777t;
  uint64_t CHARS__buf__unsafe_size=*__t2778t;
  uint32_t CHARS__buf__unsafe_offset=*__t2779t;
  uint32_t CHARS__buf__unsafe_align=*__t2780t;
  uint64_t CHARS__pos=*__t2781t;
  char* __t1826t__unsafe_ptr=0;
  uint64_t __t1826t__dat__pos=0;
  uint64_t __t1826t__dat__length=0;
  char __t1826t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t1827t__unsafe_ptr=0;
  uint64_t __t1827t__dat__pos=0;
  uint64_t __t1827t__dat__length=0;
  char __t1827t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t1828t__=0;
  uint64_t __t1829t__=0;
  char __t1830t__=0;
  char __t1831t=0;
  uint64_t __t1832t__=0;
  char __t1833t__=0;
  char __t1834t=0;
  uint64_t __t1835t__=0;
  char* __t1836t__buf__unsafe_ptr=0;
  uint64_t __t1836t__buf__unsafe_size=0;
  uint32_t __t1836t__buf__unsafe_offset=0;
  uint32_t __t1836t__buf__unsafe_align=0;
  uint64_t __t1836t__pos=0;
  char* __t1837t____t1032t__unsafe_ptr=0;
  uint64_t __t1837t____t1032t__unsafe_size=0;
  uint32_t __t1837t____t1032t__unsafe_offset=0;
  uint32_t __t1837t____t1032t__unsafe_align=0;
  uint64_t __t1837t____t1033t=0;
  char* __t1838t__buf__unsafe_ptr=0;
  uint64_t __t1838t__buf__unsafe_size=0;
  uint32_t __t1838t__buf__unsafe_offset=0;
  uint32_t __t1838t__buf__unsafe_align=0;
  uint64_t __t1838t__pos=0;
  char* __t1839t__buf__unsafe_ptr=0;
  uint64_t __t1839t__buf__unsafe_size=0;
  uint32_t __t1839t__buf__unsafe_offset=0;
  uint32_t __t1839t__buf__unsafe_align=0;
  uint64_t __t1839t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1840t__unsafe_ptr=0;
  uint64_t __t1840t__dat__pos=0;
  uint64_t __t1840t__dat__length=0;
  char __t1840t__dat__first=0;
  char* __t1841t____t1029t__unsafe_ptr=0;
  uint64_t __t1841t____t1029t__unsafe_size=0;
  uint32_t __t1841t____t1029t__unsafe_offset=0;
  uint32_t __t1841t____t1029t__unsafe_align=0;
  uint64_t __t1841t____t1030t=0;
  uint64_t __t1843t=0;
  uint64_t __t1844t__=0;
  char* __t1845t__unsafe_ptr=0;
  uint64_t __t1845t__dat__pos=0;
  uint64_t __t1845t__dat__length=0;
  char __t1845t__dat__first=0;
  char __t1846t__=0;
  char __t1847t__=0;
  char __t1848t=0;
  uint64_t __t1849t__=0;
  char __t1850t__=0;
  char __t1851t=0;
  uint64_t __t1852t__=0;
  char* __t1854t__unsafe_ptr=0;
  uint64_t __t1854t__dat__pos=0;
  uint64_t __t1854t__dat__length=0;
  char __t1854t__dat__first=0;
  uint64_t __t1855t__=0;
  uint64_t __t1856t__=0;
  uint64_t __t1857t__=0;
  char* __t1858t__buf__unsafe_ptr=0;
  uint64_t __t1858t__buf__unsafe_size=0;
  uint32_t __t1858t__buf__unsafe_offset=0;
  uint32_t __t1858t__buf__unsafe_align=0;
  uint64_t __t1858t__pos=0;
  char* __t1859t____t1032t__unsafe_ptr=0;
  uint64_t __t1859t____t1032t__unsafe_size=0;
  uint32_t __t1859t____t1032t__unsafe_offset=0;
  uint32_t __t1859t____t1032t__unsafe_align=0;
  uint64_t __t1859t____t1033t=0;
  char* __t1860t__buf__unsafe_ptr=0;
  uint64_t __t1860t__buf__unsafe_size=0;
  uint32_t __t1860t__buf__unsafe_offset=0;
  uint32_t __t1860t__buf__unsafe_align=0;
  uint64_t __t1860t__pos=0;
  char* __t1861t__buf__unsafe_ptr=0;
  uint64_t __t1861t__buf__unsafe_size=0;
  uint32_t __t1861t__buf__unsafe_offset=0;
  uint32_t __t1861t__buf__unsafe_align=0;
  uint64_t __t1861t__pos=0;
  char* __t1862t__unsafe_ptr=0;
  uint64_t __t1862t__dat__pos=0;
  uint64_t __t1862t__dat__length=0;
  char __t1862t__dat__first=0;
  char* __t1863t__unsafe_ptr=0;
  uint64_t __t1863t__dat__pos=0;
  uint64_t __t1863t__dat__length=0;
  char __t1863t__dat__first=0;
  char* __t1864t____t1029t__unsafe_ptr=0;
  uint64_t __t1864t____t1029t__unsafe_size=0;
  uint32_t __t1864t____t1029t__unsafe_offset=0;
  uint32_t __t1864t____t1029t__unsafe_align=0;
  uint64_t __t1864t____t1030t=0;
  uint64_t __t1866t=0;
  uint64_t __t1867t__=0;
  char* __t1868t__unsafe_ptr=0;
  uint64_t __t1868t__dat__pos=0;
  uint64_t __t1868t__dat__length=0;
  char __t1868t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1213t(_s1__unsafe_ptr,_s1__dat__pos,_s1__dat__length,_s1__dat__first,&__t1826t__unsafe_ptr,&__t1826t__dat__pos,&__t1826t__dat__length,&__t1826t__dat__first);
  s1__unsafe_ptr=__t1826t__unsafe_ptr;
  s1__dat__pos=__t1826t__dat__pos;
  s1__dat__length=__t1826t__dat__length;
  s1__dat__first=__t1826t__dat__first;
  str__t1213t(_s2__unsafe_ptr,_s2__dat__pos,_s2__dat__length,_s2__dat__first,&__t1827t__unsafe_ptr,&__t1827t__dat__pos,&__t1827t__dat__length,&__t1827t__dat__first);
  s2__unsafe_ptr=__t1827t__unsafe_ptr;
  s2__dat__pos=__t1827t__dat__pos;
  s2__dat__length=__t1827t__dat__length;
  s2__dat__first=__t1827t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1828t__);
  if(__t1828t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1829t__);
  eq__t133t(CHARS__pos,__t1829t__,&__t1830t__);
  __t1831t=__t1830t__;
  }
  if(__t1831t){
  add__t188t(CHARS__pos,s2__dat__length,&__t1832t__);
  lt__t265t(__t1832t__,CHARS__buf__unsafe_size,&__t1833t__);
  __t1834t=__t1833t__;
  }
  if(__t1834t){
  len__t1245t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1835t__);
  __t_errcode=alloc__t1066t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1835t__,&__t1836t__buf__unsafe_ptr,&__t1836t__buf__unsafe_size,&__t1836t__buf__unsafe_offset,&__t1836t__buf__unsafe_align,&__t1836t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1031t(__t1836t__buf__unsafe_ptr,__t1836t__buf__unsafe_size,__t1836t__buf__unsafe_offset,__t1836t__buf__unsafe_align,__t1836t__pos,&__t1837t____t1032t__unsafe_ptr,&__t1837t____t1032t__unsafe_size,&__t1837t____t1032t__unsafe_offset,&__t1837t____t1032t__unsafe_align,&__t1837t____t1033t);
  arena__t1018t(&__t1837t____t1032t__unsafe_ptr,&__t1837t____t1032t__unsafe_size,&__t1837t____t1032t__unsafe_offset,&__t1837t____t1032t__unsafe_align,__t1837t____t1033t,&__t1838t__buf__unsafe_ptr,&__t1838t__buf__unsafe_size,&__t1838t__buf__unsafe_offset,&__t1838t__buf__unsafe_align,&__t1838t__pos);
  __t1839t__buf__unsafe_ptr=__t1838t__buf__unsafe_ptr;
  __t1839t__buf__unsafe_size=__t1838t__buf__unsafe_size;
  __t1839t__buf__unsafe_offset=__t1838t__buf__unsafe_offset;
  __t1839t__buf__unsafe_align=__t1838t__buf__unsafe_align;
  __t1839t__pos=__t1838t__pos;
  surface__buf__unsafe_ptr=__t1839t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1839t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1839t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1839t__buf__unsafe_align;
  surface__pos=__t1839t__pos;
  __t_errcode=copy__t1262t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1840t__unsafe_ptr,&__t1840t__dat__pos,&__t1840t__dat__length,&__t1840t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1028t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1841t____t1029t__unsafe_ptr,&__t1841t____t1029t__unsafe_size,&__t1841t____t1029t__unsafe_offset,&__t1841t____t1029t__unsafe_align,&__t1841t____t1030t);
  __t1843t=0;
  add__t188t(s1__dat__pos,__t1843t,&__t1844t__);
  __t_errcode=str__t1232t(__t1841t____t1029t__unsafe_ptr,__t1841t____t1029t__unsafe_size,__t1841t____t1029t__unsafe_offset,__t1841t____t1029t__unsafe_align,__t1841t____t1030t,__t1844t__,&__t1845t__unsafe_ptr,&__t1845t__dat__pos,&__t1845t__dat__length,&__t1845t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1846t__);
  if(__t1846t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t1847t__);
  __t1848t=__t1847t__;
  }
  if(__t1848t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t1849t__);
  eq__t133t(s2__dat__pos,__t1849t__,&__t1850t__);
  __t1851t=__t1850t__;
  }
  if(__t1851t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t1852t__);
  __t_errcode=str__t1232t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t1852t__,s1__dat__pos,&__t1854t__unsafe_ptr,&__t1854t__dat__pos,&__t1854t__dat__length,&__t1854t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1845t__unsafe_ptr=__t1854t__unsafe_ptr;
  __t1845t__dat__pos=__t1854t__dat__pos;
  __t1845t__dat__length=__t1854t__dat__length;
  __t1845t__dat__first=__t1854t__dat__first;
  goto __t_return;
  }
  len__t1245t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1855t__);
  len__t1245t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1856t__);
  add__t188t(__t1855t__,__t1856t__,&__t1857t__);
  __t_errcode=alloc__t1066t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1857t__,&__t1858t__buf__unsafe_ptr,&__t1858t__buf__unsafe_size,&__t1858t__buf__unsafe_offset,&__t1858t__buf__unsafe_align,&__t1858t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1031t(__t1858t__buf__unsafe_ptr,__t1858t__buf__unsafe_size,__t1858t__buf__unsafe_offset,__t1858t__buf__unsafe_align,__t1858t__pos,&__t1859t____t1032t__unsafe_ptr,&__t1859t____t1032t__unsafe_size,&__t1859t____t1032t__unsafe_offset,&__t1859t____t1032t__unsafe_align,&__t1859t____t1033t);
  arena__t1018t(&__t1859t____t1032t__unsafe_ptr,&__t1859t____t1032t__unsafe_size,&__t1859t____t1032t__unsafe_offset,&__t1859t____t1032t__unsafe_align,__t1859t____t1033t,&__t1860t__buf__unsafe_ptr,&__t1860t__buf__unsafe_size,&__t1860t__buf__unsafe_offset,&__t1860t__buf__unsafe_align,&__t1860t__pos);
  __t1861t__buf__unsafe_ptr=__t1860t__buf__unsafe_ptr;
  __t1861t__buf__unsafe_size=__t1860t__buf__unsafe_size;
  __t1861t__buf__unsafe_offset=__t1860t__buf__unsafe_offset;
  __t1861t__buf__unsafe_align=__t1860t__buf__unsafe_align;
  __t1861t__pos=__t1860t__pos;
  surface__buf__unsafe_ptr=__t1861t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1861t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1861t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1861t__buf__unsafe_align;
  surface__pos=__t1861t__pos;
  __t_errcode=copy__t1262t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t1862t__unsafe_ptr,&__t1862t__dat__pos,&__t1862t__dat__length,&__t1862t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1262t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t1863t__unsafe_ptr,&__t1863t__dat__pos,&__t1863t__dat__length,&__t1863t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1028t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t1864t____t1029t__unsafe_ptr,&__t1864t____t1029t__unsafe_size,&__t1864t____t1029t__unsafe_offset,&__t1864t____t1029t__unsafe_align,&__t1864t____t1030t);
  __t1866t=0;
  add__t188t(surface__pos,__t1866t,&__t1867t__);
  __t_errcode=str__t1232t(__t1864t____t1029t__unsafe_ptr,__t1864t____t1029t__unsafe_size,__t1864t____t1029t__unsafe_offset,__t1864t____t1029t__unsafe_align,__t1864t____t1030t,__t1867t__,&__t1868t__unsafe_ptr,&__t1868t__dat__pos,&__t1868t__dat__length,&__t1868t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1845t__unsafe_ptr=__t1868t__unsafe_ptr;
  __t1845t__dat__pos=__t1868t__dat__pos;
  __t1845t__dat__length=__t1868t__dat__length;
  __t1845t__dat__first=__t1868t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2777t=CHARS__buf__unsafe_ptr;
  *__t2778t=CHARS__buf__unsafe_size;
  *__t2779t=CHARS__buf__unsafe_offset;
  *__t2780t=CHARS__buf__unsafe_align;
  *__t2781t=CHARS__pos;
  *__t2782t=__t1845t__unsafe_ptr;
  *__t2783t=__t1845t__dat__pos;
  *__t2784t=__t1845t__dat__length;
  *__t2785t=__t1845t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1380t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1381t=0;
  const char* endl=0;
  endl=__t400t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void print__t398t(const char* value) {
  int __t399t=0;
  const char* endl=0;
  endl=__t400t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t2624t() {
  uint64_t __t2627t=0;
  char* __t2628t__unsafe_ptr=0;
  uint64_t __t2628t__unsafe_size=0;
  uint32_t __t2628t__unsafe_offset=0;
  uint32_t __t2628t__unsafe_align=0;
  char __t2629t____t964t____t803t__=0;
  char* __t2630t__buf__unsafe_ptr=0;
  uint64_t __t2630t__buf__unsafe_size=0;
  uint32_t __t2630t__buf__unsafe_offset=0;
  uint32_t __t2630t__buf__unsafe_align=0;
  uint64_t __t2630t__pos=0;
  char* __t2631t__buf__unsafe_ptr=0;
  uint64_t __t2631t__buf__unsafe_size=0;
  uint32_t __t2631t__buf__unsafe_offset=0;
  uint32_t __t2631t__buf__unsafe_align=0;
  uint64_t __t2631t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t2633t__unsafe_ptr=0;
  uint64_t __t2633t__dat__pos=0;
  uint64_t __t2633t__dat__length=0;
  char __t2633t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2635t__unsafe_ptr=0;
  uint64_t __t2635t__dat__pos=0;
  uint64_t __t2635t__dat__length=0;
  char __t2635t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char* __t2637t__unsafe_ptr=0;
  uint64_t __t2637t__dat__pos=0;
  uint64_t __t2637t__dat__length=0;
  char __t2637t__dat__first=0;
  char* s3__unsafe_ptr=0;
  uint64_t s3__dat__pos=0;
  uint64_t s3__dat__length=0;
  char s3__dat__first=0;
  char __t2638t=0;
  char* __t2639t__unsafe_ptr=0;
  uint64_t __t2639t__dat__pos=0;
  uint64_t __t2639t__dat__length=0;
  char __t2639t__dat__first=0;
  char* __t2640t__unsafe_ptr=0;
  uint64_t __t2640t__dat__pos=0;
  uint64_t __t2640t__dat__length=0;
  char __t2640t__dat__first=0;
  char __t2642t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  __t2627t=10;
  __t_errcode=alloc__t959t(__t2627t,&__t2628t__unsafe_ptr,&__t2628t__unsafe_size,&__t2628t__unsafe_offset,&__t2628t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1021t(&__t2628t__unsafe_ptr,&__t2628t__unsafe_size,&__t2628t__unsafe_offset,&__t2628t__unsafe_align,&__t2630t__buf__unsafe_ptr,&__t2630t__buf__unsafe_size,&__t2630t__buf__unsafe_offset,&__t2630t__buf__unsafe_align,&__t2630t__pos);
  __t2631t__buf__unsafe_ptr=__t2630t__buf__unsafe_ptr;
  __t2631t__buf__unsafe_size=__t2630t__buf__unsafe_size;
  __t2631t__buf__unsafe_offset=__t2630t__buf__unsafe_offset;
  __t2631t__buf__unsafe_align=__t2630t__buf__unsafe_align;
  __t2631t__pos=__t2630t__pos;
  CHARS__buf__unsafe_ptr=__t2631t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2631t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2631t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2631t__buf__unsafe_align;
  CHARS__pos=__t2631t__pos;
  __t_errcode=copy__t1267t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2632t,&__t2633t__unsafe_ptr,&__t2633t__dat__pos,&__t2633t__dat__length,&__t2633t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__unsafe_ptr=__t2633t__unsafe_ptr;
  s1__dat__pos=__t2633t__dat__pos;
  s1__dat__length=__t2633t__dat__length;
  s1__dat__first=__t2633t__dat__first;
  __t_errcode=copy__t1267t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2634t,&__t2635t__unsafe_ptr,&__t2635t__dat__pos,&__t2635t__dat__length,&__t2635t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__unsafe_ptr=__t2635t__unsafe_ptr;
  s2__dat__pos=__t2635t__dat__pos;
  s2__dat__length=__t2635t__dat__length;
  s2__dat__first=__t2635t__dat__first;
  __t_errcode=copy__t1267t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2636t,&__t2637t__unsafe_ptr,&__t2637t__dat__pos,&__t2637t__dat__length,&__t2637t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s3__unsafe_ptr=__t2637t__unsafe_ptr;
  s3__dat__pos=__t2637t__dat__pos;
  s3__dat__length=__t2637t__dat__length;
  s3__dat__first=__t2637t__dat__first;
  __t_complain=add__t1825t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2639t__unsafe_ptr,&__t2639t__dat__pos,&__t2639t__dat__length,&__t2639t__dat__first);
  __t2638t=__t_complain;
  if(__t_complain){
  goto __t2638t__label;
  }
  __t_complain=add__t1825t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2639t__unsafe_ptr,__t2639t__dat__pos,__t2639t__dat__length,__t2639t__dat__first,s3__unsafe_ptr,s3__dat__pos,s3__dat__length,s3__dat__first,&__t2640t__unsafe_ptr,&__t2640t__dat__pos,&__t2640t__dat__length,&__t2640t__dat__first);
  __t2638t=__t_complain;
  if(__t_complain){
  goto __t2638t__label;
  }
  print__t1380t(__t2640t__unsafe_ptr,__t2640t__dat__pos,__t2640t__dat__length,__t2640t__dat__first);
  __t2638t__label:__t2638t=__t2638t==0;
  not__t41t(__t2638t,&__t2642t__);
  if(__t2642t__){
  print__t398t(__t2643t);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t609t(__t2628t__unsafe_ptr,&__t2629t____t964t____t803t__);
  if(__t2629t____t964t____t803t__){
  free__t679t(&__t2628t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2624t();return 0;}