#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t403t="\n";
const char* const __t2704t="a";
const char* const __t2703t="123";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t963t(char** __t2707t, uint64_t* __t2708t, uint32_t* __t2709t, uint32_t* __t2710t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t2707t=unsafe_ptr;
  *__t2708t=unsafe_size;
  *__t2709t=unsafe_offset;
  *__t2710t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t612t(char* x, char* __t2711t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2711t=z;
}

static inline __attribute__((always_inline)) void free__t682t(char** __t2712t) {
  char* allocated=*__t2712t;
  if(allocated){
  free(allocated);
  }
  *__t2712t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2713t) {
  int value=0;
  *__t2713t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t2714t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t2714t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t2715t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t2715t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t2716t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2716t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t2717t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2717t=z;
}

static inline __attribute__((always_inline)) void nat__t687t(uint32_t x, uint64_t* __t2718t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2718t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t2719t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2719t=z;
}

static inline __attribute__((always_inline)) void zero__t683t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t2720t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2720t=z;
}

static inline __attribute__((always_inline)) int alloc__t675t(uint64_t bytes, char** __t2721t) {
  char* allocated=0;
  char __t676t__=0;
  char __t677t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t612t(allocated,&__t676t__);
  not__t41t(__t676t__,&__t677t__);
  if(__t677t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2721t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t804t(char** __t2722t, uint64_t* __t2723t, uint32_t* __t2724t, uint32_t* __t2725t, uint64_t size, char** __t2726t, uint64_t* __t2727t, uint32_t* __t2728t, uint32_t* __t2729t) {
  char* buffer__unsafe_ptr=*__t2722t;
  uint64_t buffer__unsafe_size=*__t2723t;
  uint32_t buffer__unsafe_offset=*__t2724t;
  uint32_t buffer__unsafe_align=*__t2725t;
  int __t805t=0;
  char __t806t__=0;
  char __t808t__=0;
  uint64_t __t809t=0;
  char __t810t__=0;
  char __t811t=0;
  uint64_t __t812t=0;
  uint64_t __t813t__=0;
  uint64_t __t814t__=0;
  int __t816t=0;
  uint64_t __t817t=0;
  char __t818t__=0;
  uint64_t __t819t__=0;
  uint64_t __t820t__=0;
  uint64_t bytes=0;
  int __t821t=0;
  uint64_t __t822t=0;
  char __t823t__=0;
  char* __t824t__=0;
  int __t825t=0;
  uint64_t __t826t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t808t__);
  if(__t808t__){
  __t809t=0;
  neq__t157t(size,__t809t,&__t810t__);
  __t811t=__t810t__;
  }
  if(__t811t){
  __t812t=0;
  nat__t687t(buffer__unsafe_align,&__t813t__);
  mul__t212t(__t813t__,size,&__t814t__);
  zero__t683t(buffer__unsafe_ptr,__t812t,__t814t__);
  goto __t_return;
  }
  __t817t=0;
  neq__t157t(buffer__unsafe_size,__t817t,&__t818t__);
  if(__t818t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t687t(buffer__unsafe_align,&__t819t__);
  mul__t212t(__t819t__,size,&__t820t__);
  bytes=__t820t__;
  __t822t=0;
  eq__t133t(bytes,__t822t,&__t823t__);
  if(__t823t__){
  __t_errcode=12;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t675t(bytes,&__t824t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t826t=0;
  zero__t683t(__t824t__,__t826t,bytes);
  buffer__unsafe_ptr=__t824t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t612t(buffer__unsafe_ptr,&__t806t__);
  if(__t806t__){
  free__t682t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2722t=buffer__unsafe_ptr;
  *__t2723t=buffer__unsafe_size;
  *__t2724t=buffer__unsafe_offset;
  *__t2725t=buffer__unsafe_align;
  *__t2726t=buffer__unsafe_ptr;
  *__t2727t=buffer__unsafe_size;
  *__t2728t=buffer__unsafe_offset;
  *__t2729t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t962t(uint64_t size, char** __t2730t, uint64_t* __t2731t, uint32_t* __t2732t, uint32_t* __t2733t) {
  char* __t965t__unsafe_ptr=0;
  uint64_t __t965t__unsafe_size=0;
  uint32_t __t965t__unsafe_offset=0;
  uint32_t __t965t__unsafe_align=0;
  char* __t966t__unsafe_ptr=0;
  uint64_t __t966t__unsafe_size=0;
  uint32_t __t966t__unsafe_offset=0;
  uint32_t __t966t__unsafe_align=0;
  char __t967t____t806t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t963t(&__t965t__unsafe_ptr,&__t965t__unsafe_size,&__t965t__unsafe_offset,&__t965t__unsafe_align);
  __t_errcode=alloc__t804t(&__t965t__unsafe_ptr,&__t965t__unsafe_size,&__t965t__unsafe_offset,&__t965t__unsafe_align,size,&__t966t__unsafe_ptr,&__t966t__unsafe_size,&__t966t__unsafe_offset,&__t966t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t612t(__t966t__unsafe_ptr,&__t967t____t806t__);
  if(__t967t____t806t__){
  free__t682t(&__t966t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2730t=__t966t__unsafe_ptr;
  *__t2731t=__t966t__unsafe_size;
  *__t2732t=__t966t__unsafe_offset;
  *__t2733t=__t966t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1021t(char** __t2734t, uint64_t* __t2735t, uint32_t* __t2736t, uint32_t* __t2737t, uint64_t _pos, char** __t2738t, uint64_t* __t2739t, uint32_t* __t2740t, uint32_t* __t2741t, uint64_t* __t2742t) {
  char* buf__unsafe_ptr=*__t2734t;
  uint64_t buf__unsafe_size=*__t2735t;
  uint32_t buf__unsafe_offset=*__t2736t;
  uint32_t buf__unsafe_align=*__t2737t;
  uint64_t __t1022t=0;
  uint64_t pos=0;
  __t1022t=_pos;
  pos=__t1022t;
  goto __t_return;
  __t_return:
  *__t2734t=buf__unsafe_ptr;
  *__t2735t=buf__unsafe_size;
  *__t2736t=buf__unsafe_offset;
  *__t2737t=buf__unsafe_align;
  *__t2738t=buf__unsafe_ptr;
  *__t2739t=buf__unsafe_size;
  *__t2740t=buf__unsafe_offset;
  *__t2741t=buf__unsafe_align;
  *__t2742t=pos;
}

static inline __attribute__((always_inline)) void arena__t1024t(char** __t2743t, uint64_t* __t2744t, uint32_t* __t2745t, uint32_t* __t2746t, char** __t2747t, uint64_t* __t2748t, uint32_t* __t2749t, uint32_t* __t2750t, uint64_t* __t2751t) {
  char* buf__unsafe_ptr=*__t2743t;
  uint64_t buf__unsafe_size=*__t2744t;
  uint32_t buf__unsafe_offset=*__t2745t;
  uint32_t buf__unsafe_align=*__t2746t;
  uint64_t __t1025t=0;
  char* __t1026t__buf__unsafe_ptr=0;
  uint64_t __t1026t__buf__unsafe_size=0;
  uint32_t __t1026t__buf__unsafe_offset=0;
  uint32_t __t1026t__buf__unsafe_align=0;
  uint64_t __t1026t__pos=0;
  __t1025t=0;
  arena__t1021t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1025t,&__t1026t__buf__unsafe_ptr,&__t1026t__buf__unsafe_size,&__t1026t__buf__unsafe_offset,&__t1026t__buf__unsafe_align,&__t1026t__pos);
  goto __t_return;
  __t_return:
  *__t2743t=buf__unsafe_ptr;
  *__t2744t=buf__unsafe_size;
  *__t2745t=buf__unsafe_offset;
  *__t2746t=buf__unsafe_align;
  *__t2747t=__t1026t__buf__unsafe_ptr;
  *__t2748t=__t1026t__buf__unsafe_size;
  *__t2749t=__t1026t__buf__unsafe_offset;
  *__t2750t=__t1026t__buf__unsafe_align;
  *__t2751t=__t1026t__pos;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1209t(char** __t2752t, uint64_t* __t2753t, uint32_t* __t2754t, uint32_t* __t2755t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t2752t=unsafe_ptr;
  *__t2753t=unsafe_size;
  *__t2754t=unsafe_offset;
  *__t2755t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2756t) {
  *__t2756t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t2757t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2757t=z;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t2758t) {
  int __t338t__=0;
  char z=0;
  is_different__t108t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2758t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2759t) {
  *__t2759t=to;
}

static inline __attribute__((always_inline)) void add__t684t(char* allocated, uint64_t offset, char** __t2760t) {
  char* element=0;
  char* __t685t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t685t__);
  goto __t_return;
  __t_return:
  *__t2760t=__t685t__;
}

static inline __attribute__((always_inline)) int get__t1009t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t2761t) {
  char __t1010t__=0;
  uint64_t __t1011t__=0;
  uint64_t __t1012t__=0;
  uint64_t __t1013t__=0;
  uint64_t __t1014t__=0;
  char* __t1015t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,buffer__unsafe_size,&__t1010t__);
  if(__t1010t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t687t(buffer__unsafe_align,&__t1011t__);
  mul__t212t(i,__t1011t__,&__t1012t__);
  nat__t687t(buffer__unsafe_offset,&__t1013t__);
  add__t188t(__t1012t__,__t1013t__,&__t1014t__);
  add__t684t(buffer__unsafe_ptr,__t1014t__,&__t1015t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2761t=__t1015t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1231t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2762t, uint64_t* __t2763t, uint64_t* __t2764t, char* __t2765t) {
  goto __t_return;
  __t_return:
  *__t2762t=unsafe_ptr;
  *__t2763t=dat__pos;
  *__t2764t=dat__length;
  *__t2765t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1235t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2766t, uint64_t* __t2767t, uint64_t* __t2768t, char* __t2769t) {
  char* unsafe_ptr=0;
  uint64_t __t1236t__=0;
  uint64_t __t1237t=0;
  char __t1238t__=0;
  uint64_t __t1239t__=0;
  uint64_t __t1240t=0;
  char __t1241t__=0;
  char* __t1242t__unsafe_ptr=0;
  uint64_t __t1242t__dat__pos=0;
  uint64_t __t1242t__dat__length=0;
  char __t1242t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t687t(buf__unsafe_align,&__t1236t__);
  __t1237t=1;
  neq__t157t(__t1236t__,__t1237t,&__t1238t__);
  if(__t1238t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t687t(buf__unsafe_offset,&__t1239t__);
  __t1240t=0;
  neq__t157t(__t1239t__,__t1240t,&__t1241t__);
  if(__t1241t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t1231t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1242t__unsafe_ptr,&__t1242t__dat__pos,&__t1242t__dat__length,&__t1242t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2766t=__t1242t__unsafe_ptr;
  *__t2767t=__t1242t__dat__pos;
  *__t2768t=__t1242t__dat__length;
  *__t2769t=__t1242t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1269t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2770t, uint64_t* __t2771t, uint64_t* __t2772t, char* __t2773t) {
  uint64_t __t1270t=0;
  char __t1271t__=0;
  char* __t1273t__=0;
  char __t1274t__value=0;
  char first=0;
  char* __t1275t__unsafe_ptr=0;
  uint64_t __t1275t__dat__pos=0;
  uint64_t __t1275t__dat__length=0;
  char __t1275t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1270t=0;
  neq__t157t(length,__t1270t,&__t1271t__);
  if(__t1271t__){
  __t_errcode=get__t1009t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1273t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1273t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1274t__value,__t1273t__,1);
  first=__t1274t__value;
  }
  __t_errcode=str__t1235t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1275t__unsafe_ptr,&__t1275t__dat__pos,&__t1275t__dat__length,&__t1275t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2770t=__t1275t__unsafe_ptr;
  *__t2771t=__t1275t__dat__pos;
  *__t2772t=__t1275t__dat__length;
  *__t2773t=__t1275t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1291t(const char* c, char** __t2774t, uint64_t* __t2775t, uint64_t* __t2776t, char* __t2777t) {
  char* __t1292t__unsafe_ptr=0;
  uint64_t __t1292t__unsafe_size=0;
  uint32_t __t1292t__unsafe_offset=0;
  uint32_t __t1292t__unsafe_align=0;
  char* __t1293t__unsafe_ptr=0;
  uint64_t __t1293t__unsafe_size=0;
  uint32_t __t1293t__unsafe_offset=0;
  uint32_t __t1293t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1294t__=0;
  uint64_t length=0;
  uint64_t __t1295t=0;
  uint64_t __t1296t__=0;
  uint64_t __t1297t=0;
  char* __t1299t__unsafe_ptr=0;
  uint64_t __t1299t__dat__pos=0;
  uint64_t __t1299t__dat__length=0;
  char __t1299t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1209t(&__t1292t__unsafe_ptr,&__t1292t__unsafe_size,&__t1292t__unsafe_offset,&__t1292t__unsafe_align);
  __t1293t__unsafe_ptr=__t1292t__unsafe_ptr;
  __t1293t__unsafe_size=__t1292t__unsafe_size;
  __t1293t__unsafe_offset=__t1292t__unsafe_offset;
  __t1293t__unsafe_align=__t1292t__unsafe_align;
  buf__unsafe_ptr=__t1293t__unsafe_ptr;
  buf__unsafe_size=__t1293t__unsafe_size;
  buf__unsafe_offset=__t1293t__unsafe_offset;
  buf__unsafe_align=__t1293t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1294t__);
  buf__unsafe_ptr=__t1294t__;
  if(c){
  length=strlen(c);
  }
  __t1295t=1;
  add__t188t(length,__t1295t,&__t1296t__);
  buf__unsafe_size=__t1296t__;
  __t1297t=0;
  __t_errcode=str__t1269t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1297t,length,&__t1299t__unsafe_ptr,&__t1299t__dat__pos,&__t1299t__dat__length,&__t1299t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2774t=__t1299t__unsafe_ptr;
  *__t2775t=__t1299t__dat__pos;
  *__t2776t=__t1299t__dat__length;
  *__t2777t=__t1299t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void eq__t161t(char* x, char* y, char* __t2778t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t2778t=z;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t2779t) {
  int __t266t__=0;
  char z=0;
  is_different__t108t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2779t=z;
}

static inline __attribute__((always_inline)) void len__t1300t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2780t) {
  goto __t_return;
  __t_return:
  *__t2780t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t1016t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t2781t) {
  goto __t_return;
  __t_return:
  *__t2781t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t2782t) {
  int __t290t__=0;
  char z=0;
  is_different__t108t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2782t=z;
}

static inline __attribute__((always_inline)) void allocated__t1029t(char** __t2783t, uint64_t* __t2784t, uint32_t* __t2785t, uint32_t* __t2786t, uint64_t pos, char** __t2787t, uint64_t* __t2788t, uint32_t* __t2789t, uint32_t* __t2790t, uint64_t* __t2791t) {
  char* buf__unsafe_ptr=*__t2783t;
  uint64_t buf__unsafe_size=*__t2784t;
  uint32_t buf__unsafe_offset=*__t2785t;
  uint32_t buf__unsafe_align=*__t2786t;
  goto __t_return;
  __t_return:
  *__t2783t=buf__unsafe_ptr;
  *__t2784t=buf__unsafe_size;
  *__t2785t=buf__unsafe_offset;
  *__t2786t=buf__unsafe_align;
  *__t2787t=buf__unsafe_ptr;
  *__t2788t=buf__unsafe_size;
  *__t2789t=buf__unsafe_offset;
  *__t2790t=buf__unsafe_align;
  *__t2791t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1092t(char** __t2792t, uint64_t* __t2793t, uint32_t* __t2794t, uint32_t* __t2795t, uint64_t* __t2796t, uint64_t length, char** __t2797t, uint64_t* __t2798t, uint32_t* __t2799t, uint32_t* __t2800t, uint64_t* __t2801t) {
  char* allocator__buf__unsafe_ptr=*__t2792t;
  uint64_t allocator__buf__unsafe_size=*__t2793t;
  uint32_t allocator__buf__unsafe_offset=*__t2794t;
  uint32_t allocator__buf__unsafe_align=*__t2795t;
  uint64_t allocator__pos=*__t2796t;
  int __t1093t=0;
  uint64_t __t1094t__=0;
  uint64_t next_pos=0;
  uint64_t __t1095t__=0;
  char __t1096t__=0;
  uint64_t __t1097t=0;
  uint64_t __t1098t__=0;
  uint64_t pos=0;
  char* __t1099t__buf__unsafe_ptr=0;
  uint64_t __t1099t__buf__unsafe_size=0;
  uint32_t __t1099t__buf__unsafe_offset=0;
  uint32_t __t1099t__buf__unsafe_align=0;
  uint64_t __t1099t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1094t__);
  next_pos=__t1094t__;
  len__t1016t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1095t__);
  gt__t289t(next_pos,__t1095t__,&__t1096t__);
  if(__t1096t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t1097t=0;
  add__t188t(allocator__pos,__t1097t,&__t1098t__);
  pos=__t1098t__;
  allocator__pos=next_pos;
  allocated__t1029t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1099t__buf__unsafe_ptr,&__t1099t__buf__unsafe_size,&__t1099t__buf__unsafe_offset,&__t1099t__buf__unsafe_align,&__t1099t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2792t=allocator__buf__unsafe_ptr;
  *__t2793t=allocator__buf__unsafe_size;
  *__t2794t=allocator__buf__unsafe_offset;
  *__t2795t=allocator__buf__unsafe_align;
  *__t2796t=allocator__pos;
  *__t2797t=__t1099t__buf__unsafe_ptr;
  *__t2798t=__t1099t__buf__unsafe_size;
  *__t2799t=__t1099t__buf__unsafe_offset;
  *__t2800t=__t1099t__buf__unsafe_align;
  *__t2801t=__t1099t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1034t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t2802t, uint64_t* __t2803t, uint32_t* __t2804t, uint32_t* __t2805t, uint64_t* __t2806t) {
  char* __t1035t__unsafe_ptr=0;
  uint64_t __t1035t__unsafe_size=0;
  uint32_t __t1035t__unsafe_offset=0;
  uint32_t __t1035t__unsafe_align=0;
  uint64_t __t1036t=0;
  __t1035t__unsafe_ptr=self__buf__unsafe_ptr;
  __t1035t__unsafe_size=self__buf__unsafe_size;
  __t1035t__unsafe_offset=self__buf__unsafe_offset;
  __t1035t__unsafe_align=self__buf__unsafe_align;
  __t1036t=self__pos;
  goto __t_return;
  __t_return:
  *__t2802t=__t1035t__unsafe_ptr;
  *__t2803t=__t1035t__unsafe_size;
  *__t2804t=__t1035t__unsafe_offset;
  *__t2805t=__t1035t__unsafe_align;
  *__t2806t=__t1036t;
}

static inline __attribute__((always_inline)) void str__t1268t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2807t, uint64_t* __t2808t, uint64_t* __t2809t, char* __t2810t) {
  goto __t_return;
  __t_return:
  *__t2807t=other__unsafe_ptr;
  *__t2808t=other__dat__pos;
  *__t2809t=other__dat__length;
  *__t2810t=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__t1317t(char** __t2811t, uint64_t* __t2812t, uint32_t* __t2813t, uint32_t* __t2814t, uint64_t* __t2815t, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __t2816t, uint64_t* __t2817t, uint64_t* __t2818t, char* __t2819t) {
  char* CHARS__buf__unsafe_ptr=*__t2811t;
  uint64_t CHARS__buf__unsafe_size=*__t2812t;
  uint32_t CHARS__buf__unsafe_offset=*__t2813t;
  uint32_t CHARS__buf__unsafe_align=*__t2814t;
  uint64_t CHARS__pos=*__t2815t;
  char* __t1318t__unsafe_ptr=0;
  uint64_t __t1318t__dat__pos=0;
  uint64_t __t1318t__dat__length=0;
  char __t1318t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1319t__=0;
  char* __t1320t__buf__unsafe_ptr=0;
  uint64_t __t1320t__buf__unsafe_size=0;
  uint32_t __t1320t__buf__unsafe_offset=0;
  uint32_t __t1320t__buf__unsafe_align=0;
  uint64_t __t1320t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1321t__unsafe_ptr=0;
  uint64_t __t1321t__dat__pos=0;
  uint64_t __t1321t__dat__length=0;
  char __t1321t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  str__t1268t(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__t1318t__unsafe_ptr,&__t1318t__dat__pos,&__t1318t__dat__length,&__t1318t__dat__first);
  other__unsafe_ptr=__t1318t__unsafe_ptr;
  other__dat__pos=__t1318t__dat__pos;
  other__dat__length=__t1318t__dat__length;
  other__dat__first=__t1318t__dat__first;
  len__t1300t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1319t__);
  __t_errcode=alloc__t1092t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t1319t__,&__t1320t__buf__unsafe_ptr,&__t1320t__buf__unsafe_size,&__t1320t__buf__unsafe_offset,&__t1320t__buf__unsafe_align,&__t1320t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1320t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1320t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1320t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1320t__buf__unsafe_align;
  surface__pos=__t1320t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1235t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1321t__unsafe_ptr,&__t1321t__dat__pos,&__t1321t__dat__length,&__t1321t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2811t=CHARS__buf__unsafe_ptr;
  *__t2812t=CHARS__buf__unsafe_size;
  *__t2813t=CHARS__buf__unsafe_offset;
  *__t2814t=CHARS__buf__unsafe_align;
  *__t2815t=CHARS__pos;
  *__t2816t=__t1321t__unsafe_ptr;
  *__t2817t=__t1321t__dat__pos;
  *__t2818t=__t1321t__dat__length;
  *__t2819t=__t1321t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void status__t1031t(char* self__buf__unsafe_ptr, uint64_t self__buf__unsafe_size, uint32_t self__buf__unsafe_offset, uint32_t self__buf__unsafe_align, uint64_t self__pos, char** __t2820t, uint64_t* __t2821t, uint32_t* __t2822t, uint32_t* __t2823t, uint64_t* __t2824t) {
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
  *__t2820t=__t1032t__unsafe_ptr;
  *__t2821t=__t1032t__unsafe_size;
  *__t2822t=__t1032t__unsafe_offset;
  *__t2823t=__t1032t__unsafe_align;
  *__t2824t=__t1033t;
}

static inline __attribute__((always_inline)) int sub__t365t(uint64_t x, uint64_t y, uint64_t* __t2825t) {
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
  *__t2825t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1287t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t endpos, uint64_t pos, char** __t2826t, uint64_t* __t2827t, uint64_t* __t2828t, char* __t2829t) {
  uint64_t __t1289t__=0;
  char* __t1290t__unsafe_ptr=0;
  uint64_t __t1290t__dat__pos=0;
  uint64_t __t1290t__dat__length=0;
  char __t1290t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t365t(endpos,pos,&__t1289t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=str__t1269t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,__t1289t__,&__t1290t__unsafe_ptr,&__t1290t__dat__pos,&__t1290t__dat__length,&__t1290t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2826t=__t1290t__unsafe_ptr;
  *__t2827t=__t1290t__dat__pos;
  *__t2828t=__t1290t__dat__length;
  *__t2829t=__t1290t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t2028t(char** __t2830t, uint64_t* __t2831t, uint32_t* __t2832t, uint32_t* __t2833t, uint64_t* __t2834t, const char* _s1, const char* _s2, char** __t2835t, uint64_t* __t2836t, uint64_t* __t2837t, char* __t2838t) {
  char* CHARS__buf__unsafe_ptr=*__t2830t;
  uint64_t CHARS__buf__unsafe_size=*__t2831t;
  uint32_t CHARS__buf__unsafe_offset=*__t2832t;
  uint32_t CHARS__buf__unsafe_align=*__t2833t;
  uint64_t CHARS__pos=*__t2834t;
  char* __t2029t__unsafe_ptr=0;
  uint64_t __t2029t__dat__pos=0;
  uint64_t __t2029t__dat__length=0;
  char __t2029t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2030t__unsafe_ptr=0;
  uint64_t __t2030t__dat__pos=0;
  uint64_t __t2030t__dat__length=0;
  char __t2030t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  char __t2031t__=0;
  uint64_t __t2032t__=0;
  char __t2033t__=0;
  char __t2034t=0;
  uint64_t __t2035t__=0;
  char __t2036t__=0;
  char __t2037t=0;
  uint64_t __t2038t__=0;
  char* __t2039t__buf__unsafe_ptr=0;
  uint64_t __t2039t__buf__unsafe_size=0;
  uint32_t __t2039t__buf__unsafe_offset=0;
  uint32_t __t2039t__buf__unsafe_align=0;
  uint64_t __t2039t__pos=0;
  char* __t2040t____t1035t__unsafe_ptr=0;
  uint64_t __t2040t____t1035t__unsafe_size=0;
  uint32_t __t2040t____t1035t__unsafe_offset=0;
  uint32_t __t2040t____t1035t__unsafe_align=0;
  uint64_t __t2040t____t1036t=0;
  char* __t2041t__buf__unsafe_ptr=0;
  uint64_t __t2041t__buf__unsafe_size=0;
  uint32_t __t2041t__buf__unsafe_offset=0;
  uint32_t __t2041t__buf__unsafe_align=0;
  uint64_t __t2041t__pos=0;
  char* __t2042t__buf__unsafe_ptr=0;
  uint64_t __t2042t__buf__unsafe_size=0;
  uint32_t __t2042t__buf__unsafe_offset=0;
  uint32_t __t2042t__buf__unsafe_align=0;
  uint64_t __t2042t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t2043t__unsafe_ptr=0;
  uint64_t __t2043t__dat__pos=0;
  uint64_t __t2043t__dat__length=0;
  char __t2043t__dat__first=0;
  char* __t2044t____t1032t__unsafe_ptr=0;
  uint64_t __t2044t____t1032t__unsafe_size=0;
  uint32_t __t2044t____t1032t__unsafe_offset=0;
  uint32_t __t2044t____t1032t__unsafe_align=0;
  uint64_t __t2044t____t1033t=0;
  uint64_t __t2046t=0;
  uint64_t __t2047t__=0;
  char* __t2048t__unsafe_ptr=0;
  uint64_t __t2048t__dat__pos=0;
  uint64_t __t2048t__dat__length=0;
  char __t2048t__dat__first=0;
  char __t2049t__=0;
  char __t2050t__=0;
  char __t2051t=0;
  uint64_t __t2052t__=0;
  char __t2053t__=0;
  char __t2054t=0;
  uint64_t __t2055t__=0;
  char* __t2057t__unsafe_ptr=0;
  uint64_t __t2057t__dat__pos=0;
  uint64_t __t2057t__dat__length=0;
  char __t2057t__dat__first=0;
  uint64_t prev_pos=0;
  uint64_t __t2058t__=0;
  uint64_t __t2059t__=0;
  uint64_t __t2060t__=0;
  char* __t2061t__buf__unsafe_ptr=0;
  uint64_t __t2061t__buf__unsafe_size=0;
  uint32_t __t2061t__buf__unsafe_offset=0;
  uint32_t __t2061t__buf__unsafe_align=0;
  uint64_t __t2061t__pos=0;
  char* __t2062t____t1035t__unsafe_ptr=0;
  uint64_t __t2062t____t1035t__unsafe_size=0;
  uint32_t __t2062t____t1035t__unsafe_offset=0;
  uint32_t __t2062t____t1035t__unsafe_align=0;
  uint64_t __t2062t____t1036t=0;
  char* __t2063t__buf__unsafe_ptr=0;
  uint64_t __t2063t__buf__unsafe_size=0;
  uint32_t __t2063t__buf__unsafe_offset=0;
  uint32_t __t2063t__buf__unsafe_align=0;
  uint64_t __t2063t__pos=0;
  char* __t2064t__buf__unsafe_ptr=0;
  uint64_t __t2064t__buf__unsafe_size=0;
  uint32_t __t2064t__buf__unsafe_offset=0;
  uint32_t __t2064t__buf__unsafe_align=0;
  uint64_t __t2064t__pos=0;
  char* __t2065t__unsafe_ptr=0;
  uint64_t __t2065t__dat__pos=0;
  uint64_t __t2065t__dat__length=0;
  char __t2065t__dat__first=0;
  char* __t2066t__unsafe_ptr=0;
  uint64_t __t2066t__dat__pos=0;
  uint64_t __t2066t__dat__length=0;
  char __t2066t__dat__first=0;
  char* __t2067t____t1032t__unsafe_ptr=0;
  uint64_t __t2067t____t1032t__unsafe_size=0;
  uint32_t __t2067t____t1032t__unsafe_offset=0;
  uint32_t __t2067t____t1032t__unsafe_align=0;
  uint64_t __t2067t____t1033t=0;
  uint64_t __t2069t=0;
  uint64_t __t2070t__=0;
  char* __t2071t__unsafe_ptr=0;
  uint64_t __t2071t__dat__pos=0;
  uint64_t __t2071t__dat__length=0;
  char __t2071t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1291t(_s1,&__t2029t__unsafe_ptr,&__t2029t__dat__pos,&__t2029t__dat__length,&__t2029t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__unsafe_ptr=__t2029t__unsafe_ptr;
  s1__dat__pos=__t2029t__dat__pos;
  s1__dat__length=__t2029t__dat__length;
  s1__dat__first=__t2029t__dat__first;
  __t_errcode=str__t1291t(_s2,&__t2030t__unsafe_ptr,&__t2030t__dat__pos,&__t2030t__dat__length,&__t2030t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__unsafe_ptr=__t2030t__unsafe_ptr;
  s2__dat__pos=__t2030t__dat__pos;
  s2__dat__length=__t2030t__dat__length;
  s2__dat__first=__t2030t__dat__first;
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2031t__);
  if(__t2031t__){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2032t__);
  eq__t133t(CHARS__pos,__t2032t__,&__t2033t__);
  __t2034t=__t2033t__;
  }
  if(__t2034t){
  add__t188t(CHARS__pos,s2__dat__length,&__t2035t__);
  lt__t265t(__t2035t__,CHARS__buf__unsafe_size,&__t2036t__);
  __t2037t=__t2036t__;
  }
  if(__t2037t){
  len__t1300t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2038t__);
  __t_errcode=alloc__t1092t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2038t__,&__t2039t__buf__unsafe_ptr,&__t2039t__buf__unsafe_size,&__t2039t__buf__unsafe_offset,&__t2039t__buf__unsafe_align,&__t2039t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1034t(__t2039t__buf__unsafe_ptr,__t2039t__buf__unsafe_size,__t2039t__buf__unsafe_offset,__t2039t__buf__unsafe_align,__t2039t__pos,&__t2040t____t1035t__unsafe_ptr,&__t2040t____t1035t__unsafe_size,&__t2040t____t1035t__unsafe_offset,&__t2040t____t1035t__unsafe_align,&__t2040t____t1036t);
  arena__t1021t(&__t2040t____t1035t__unsafe_ptr,&__t2040t____t1035t__unsafe_size,&__t2040t____t1035t__unsafe_offset,&__t2040t____t1035t__unsafe_align,__t2040t____t1036t,&__t2041t__buf__unsafe_ptr,&__t2041t__buf__unsafe_size,&__t2041t__buf__unsafe_offset,&__t2041t__buf__unsafe_align,&__t2041t__pos);
  __t2042t__buf__unsafe_ptr=__t2041t__buf__unsafe_ptr;
  __t2042t__buf__unsafe_size=__t2041t__buf__unsafe_size;
  __t2042t__buf__unsafe_offset=__t2041t__buf__unsafe_offset;
  __t2042t__buf__unsafe_align=__t2041t__buf__unsafe_align;
  __t2042t__pos=__t2041t__pos;
  surface__buf__unsafe_ptr=__t2042t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2042t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2042t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2042t__buf__unsafe_align;
  surface__pos=__t2042t__pos;
  __t_errcode=copy__t1317t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2043t__unsafe_ptr,&__t2043t__dat__pos,&__t2043t__dat__length,&__t2043t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1031t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2044t____t1032t__unsafe_ptr,&__t2044t____t1032t__unsafe_size,&__t2044t____t1032t__unsafe_offset,&__t2044t____t1032t__unsafe_align,&__t2044t____t1033t);
  __t2046t=0;
  add__t188t(s1__dat__pos,__t2046t,&__t2047t__);
  __t_errcode=str__t1287t(__t2044t____t1032t__unsafe_ptr,__t2044t____t1032t__unsafe_size,__t2044t____t1032t__unsafe_offset,__t2044t____t1032t__unsafe_align,__t2044t____t1033t,__t2047t__,&__t2048t__unsafe_ptr,&__t2048t__dat__pos,&__t2048t__dat__length,&__t2048t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  }
  eq__t161t(s1__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2049t__);
  if(__t2049t__){
  eq__t161t(s2__unsafe_ptr,CHARS__buf__unsafe_ptr,&__t2050t__);
  __t2051t=__t2050t__;
  }
  if(__t2051t){
  add__t188t(s1__dat__pos,s1__dat__length,&__t2052t__);
  eq__t133t(s2__dat__pos,__t2052t__,&__t2053t__);
  __t2054t=__t2053t__;
  }
  if(__t2054t){
  add__t188t(s2__dat__pos,s2__dat__length,&__t2055t__);
  __t_errcode=str__t1287t(CHARS__buf__unsafe_ptr,CHARS__buf__unsafe_size,CHARS__buf__unsafe_offset,CHARS__buf__unsafe_align,__t2055t__,s1__dat__pos,&__t2057t__unsafe_ptr,&__t2057t__dat__pos,&__t2057t__dat__length,&__t2057t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2048t__unsafe_ptr=__t2057t__unsafe_ptr;
  __t2048t__dat__pos=__t2057t__dat__pos;
  __t2048t__dat__length=__t2057t__dat__length;
  __t2048t__dat__first=__t2057t__dat__first;
  goto __t_return;
  }
  prev_pos=CHARS__pos;
  len__t1300t(s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2058t__);
  len__t1300t(s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2059t__);
  add__t188t(__t2058t__,__t2059t__,&__t2060t__);
  __t_errcode=alloc__t1092t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2060t__,&__t2061t__buf__unsafe_ptr,&__t2061t__buf__unsafe_size,&__t2061t__buf__unsafe_offset,&__t2061t__buf__unsafe_align,&__t2061t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1034t(__t2061t__buf__unsafe_ptr,__t2061t__buf__unsafe_size,__t2061t__buf__unsafe_offset,__t2061t__buf__unsafe_align,__t2061t__pos,&__t2062t____t1035t__unsafe_ptr,&__t2062t____t1035t__unsafe_size,&__t2062t____t1035t__unsafe_offset,&__t2062t____t1035t__unsafe_align,&__t2062t____t1036t);
  arena__t1021t(&__t2062t____t1035t__unsafe_ptr,&__t2062t____t1035t__unsafe_size,&__t2062t____t1035t__unsafe_offset,&__t2062t____t1035t__unsafe_align,__t2062t____t1036t,&__t2063t__buf__unsafe_ptr,&__t2063t__buf__unsafe_size,&__t2063t__buf__unsafe_offset,&__t2063t__buf__unsafe_align,&__t2063t__pos);
  __t2064t__buf__unsafe_ptr=__t2063t__buf__unsafe_ptr;
  __t2064t__buf__unsafe_size=__t2063t__buf__unsafe_size;
  __t2064t__buf__unsafe_offset=__t2063t__buf__unsafe_offset;
  __t2064t__buf__unsafe_align=__t2063t__buf__unsafe_align;
  __t2064t__pos=__t2063t__pos;
  surface__buf__unsafe_ptr=__t2064t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2064t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2064t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2064t__buf__unsafe_align;
  surface__pos=__t2064t__pos;
  __t_errcode=copy__t1317t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s1__unsafe_ptr,s1__dat__pos,s1__dat__length,s1__dat__first,&__t2065t__unsafe_ptr,&__t2065t__dat__pos,&__t2065t__dat__length,&__t2065t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1317t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,s2__unsafe_ptr,s2__dat__pos,s2__dat__length,s2__dat__first,&__t2066t__unsafe_ptr,&__t2066t__dat__pos,&__t2066t__dat__length,&__t2066t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  status__t1031t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,&__t2067t____t1032t__unsafe_ptr,&__t2067t____t1032t__unsafe_size,&__t2067t____t1032t__unsafe_offset,&__t2067t____t1032t__unsafe_align,&__t2067t____t1033t);
  __t2069t=0;
  add__t188t(prev_pos,__t2069t,&__t2070t__);
  __t_errcode=str__t1287t(__t2067t____t1032t__unsafe_ptr,__t2067t____t1032t__unsafe_size,__t2067t____t1032t__unsafe_offset,__t2067t____t1032t__unsafe_align,__t2067t____t1033t,__t2070t__,&__t2071t__unsafe_ptr,&__t2071t__dat__pos,&__t2071t__dat__length,&__t2071t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2048t__unsafe_ptr=__t2071t__unsafe_ptr;
  __t2048t__dat__pos=__t2071t__dat__pos;
  __t2048t__dat__length=__t2071t__dat__length;
  __t2048t__dat__first=__t2071t__dat__first;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2830t=CHARS__buf__unsafe_ptr;
  *__t2831t=CHARS__buf__unsafe_size;
  *__t2832t=CHARS__buf__unsafe_offset;
  *__t2833t=CHARS__buf__unsafe_align;
  *__t2834t=CHARS__pos;
  *__t2835t=__t2048t__unsafe_ptr;
  *__t2836t=__t2048t__dat__pos;
  *__t2837t=__t2048t__dat__length;
  *__t2838t=__t2048t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1451t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1452t=0;
  const char* endl=0;
  endl=__t403t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2695t() {
  uint64_t __t2698t=0;
  char* __t2699t__unsafe_ptr=0;
  uint64_t __t2699t__unsafe_size=0;
  uint32_t __t2699t__unsafe_offset=0;
  uint32_t __t2699t__unsafe_align=0;
  char __t2700t____t967t____t806t__=0;
  char* __t2701t__buf__unsafe_ptr=0;
  uint64_t __t2701t__buf__unsafe_size=0;
  uint32_t __t2701t__buf__unsafe_offset=0;
  uint32_t __t2701t__buf__unsafe_align=0;
  uint64_t __t2701t__pos=0;
  char* __t2702t__buf__unsafe_ptr=0;
  uint64_t __t2702t__buf__unsafe_size=0;
  uint32_t __t2702t__buf__unsafe_offset=0;
  uint32_t __t2702t__buf__unsafe_align=0;
  uint64_t __t2702t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* __t2705t__unsafe_ptr=0;
  uint64_t __t2705t__dat__pos=0;
  uint64_t __t2705t__dat__length=0;
  char __t2705t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  __t2698t=10;
  __t_errcode=alloc__t962t(__t2698t,&__t2699t__unsafe_ptr,&__t2699t__unsafe_size,&__t2699t__unsafe_offset,&__t2699t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1024t(&__t2699t__unsafe_ptr,&__t2699t__unsafe_size,&__t2699t__unsafe_offset,&__t2699t__unsafe_align,&__t2701t__buf__unsafe_ptr,&__t2701t__buf__unsafe_size,&__t2701t__buf__unsafe_offset,&__t2701t__buf__unsafe_align,&__t2701t__pos);
  __t2702t__buf__unsafe_ptr=__t2701t__buf__unsafe_ptr;
  __t2702t__buf__unsafe_size=__t2701t__buf__unsafe_size;
  __t2702t__buf__unsafe_offset=__t2701t__buf__unsafe_offset;
  __t2702t__buf__unsafe_align=__t2701t__buf__unsafe_align;
  __t2702t__pos=__t2701t__pos;
  CHARS__buf__unsafe_ptr=__t2702t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t2702t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t2702t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t2702t__buf__unsafe_align;
  CHARS__pos=__t2702t__pos;
  __t_errcode=add__t2028t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__pos,__t2703t,__t2704t,&__t2705t__unsafe_ptr,&__t2705t__dat__pos,&__t2705t__dat__length,&__t2705t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t1451t(__t2705t__unsafe_ptr,__t2705t__dat__pos,__t2705t__dat__length,__t2705t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t612t(__t2699t__unsafe_ptr,&__t2700t____t967t____t806t__);
  if(__t2700t____t967t____t806t__){
  free__t682t(&__t2699t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2695t();return 0;}