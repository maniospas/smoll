#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t442t="\n";
const char* const __t2838t="mario";
const char* const __t2823t="myparty";
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

static inline __attribute__((always_inline)) void console__t418t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void unit____t_buffer____buffer__t2793t(char** __t2847t, uint64_t* __t2848t, uint32_t* __t2849t, uint32_t* __t2850t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=41;
  *__t2847t=unsafe_ptr;
  *__t2848t=unsafe_size;
  *__t2849t=unsafe_offset;
  *__t2850t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t722t(char** __t2851t) {
  char* allocated=*__t2851t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t2851t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2852t) {
  int value=0;
  *__t2852t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t2853t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t2853t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t2854t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t2854t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t2855t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2855t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t2856t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2856t=z;
}

static inline __attribute__((always_inline)) void nat__t727t(uint32_t x, uint64_t* __t2857t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2857t=value;
}

static inline __attribute__((always_inline)) void mul__t211t(uint64_t x, uint64_t y, uint64_t* __t2858t) {
  int __t212t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t212t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2858t=z;
}

static inline __attribute__((always_inline)) void zero__t723t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t651t(char* x, char* __t2859t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2859t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t2860t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2860t=z;
}

static inline __attribute__((always_inline)) int alloc__t715t(uint64_t bytes, char** __t2861t) {
  char* allocated=0;
  char __t716t__=0;
  char __t717t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t651t(allocated,&__t716t__);
  not__t41t(__t716t__,&__t717t__);
  if(__t717t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2861t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t839t(char** __t2862t, uint64_t* __t2863t, uint32_t* __t2864t, uint32_t* __t2865t, uint64_t size, char** __t2866t, uint64_t* __t2867t, uint32_t* __t2868t, uint32_t* __t2869t) {
  char* buffer__unsafe_ptr=*__t2862t;
  uint64_t buffer__unsafe_size=*__t2863t;
  uint32_t buffer__unsafe_offset=*__t2864t;
  uint32_t buffer__unsafe_align=*__t2865t;
  int __t840t=0;
  char __t842t__=0;
  uint64_t __t843t=0;
  char __t844t__=0;
  char __t845t=0;
  uint64_t __t846t=0;
  uint64_t __t847t__=0;
  uint64_t __t848t__=0;
  int __t850t=0;
  uint64_t __t851t=0;
  char __t852t__=0;
  uint64_t __t853t__=0;
  uint64_t __t854t__=0;
  uint64_t bytes=0;
  int __t855t=0;
  uint64_t __t856t=0;
  char __t857t__=0;
  char* __t858t__=0;
  int __t859t=0;
  uint64_t __t860t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t842t__);
  if(__t842t__){
  __t843t=0;
  neq__t157t(size,__t843t,&__t844t__);
  __t845t=__t844t__;
  }
  if(__t845t){
  __t846t=0;
  nat__t727t(buffer__unsafe_align,&__t847t__);
  mul__t211t(__t847t__,size,&__t848t__);
  zero__t723t(buffer__unsafe_ptr,__t846t,__t848t__);
  goto __t_return;
  }
  __t851t=0;
  neq__t157t(buffer__unsafe_size,__t851t,&__t852t__);
  if(__t852t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t727t(buffer__unsafe_align,&__t853t__);
  mul__t211t(__t853t__,size,&__t854t__);
  bytes=__t854t__;
  __t856t=0;
  eq__t133t(bytes,__t856t,&__t857t__);
  if(__t857t__){
  __t_errcode=12;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t715t(bytes,&__t858t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t860t=0;
  zero__t723t(__t858t__,__t860t,bytes);
  buffer__unsafe_ptr=__t858t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t722t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2862t=buffer__unsafe_ptr;
  *__t2863t=buffer__unsafe_size;
  *__t2864t=buffer__unsafe_offset;
  *__t2865t=buffer__unsafe_align;
  *__t2866t=buffer__unsafe_ptr;
  *__t2867t=buffer__unsafe_size;
  *__t2868t=buffer__unsafe_offset;
  *__t2869t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1068t(char** __t2870t, uint64_t* __t2871t, uint32_t* __t2872t, uint32_t* __t2873t, uint64_t _pos, char** __t2874t, uint64_t* __t2875t, uint32_t* __t2876t, uint32_t* __t2877t, uint64_t* __t2878t) {
  char* buf__unsafe_ptr=*__t2870t;
  uint64_t buf__unsafe_size=*__t2871t;
  uint32_t buf__unsafe_offset=*__t2872t;
  uint32_t buf__unsafe_align=*__t2873t;
  uint64_t __t1069t=0;
  uint64_t pos=0;
  __t1069t=_pos;
  pos=__t1069t;
  goto __t_return;
  __t_return:
  *__t2870t=buf__unsafe_ptr;
  *__t2871t=buf__unsafe_size;
  *__t2872t=buf__unsafe_offset;
  *__t2873t=buf__unsafe_align;
  *__t2874t=buf__unsafe_ptr;
  *__t2875t=buf__unsafe_size;
  *__t2876t=buf__unsafe_offset;
  *__t2877t=buf__unsafe_align;
  *__t2878t=pos;
}

static inline __attribute__((always_inline)) void arena__t1071t(char** __t2879t, uint64_t* __t2880t, uint32_t* __t2881t, uint32_t* __t2882t, char** __t2883t, uint64_t* __t2884t, uint32_t* __t2885t, uint32_t* __t2886t, uint64_t* __t2887t) {
  char* buf__unsafe_ptr=*__t2879t;
  uint64_t buf__unsafe_size=*__t2880t;
  uint32_t buf__unsafe_offset=*__t2881t;
  uint32_t buf__unsafe_align=*__t2882t;
  uint64_t __t1072t=0;
  char* __t1073t__buf__unsafe_ptr=0;
  uint64_t __t1073t__buf__unsafe_size=0;
  uint32_t __t1073t__buf__unsafe_offset=0;
  uint32_t __t1073t__buf__unsafe_align=0;
  uint64_t __t1073t__pos=0;
  __t1072t=0;
  arena__t1068t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1072t,&__t1073t__buf__unsafe_ptr,&__t1073t__buf__unsafe_size,&__t1073t__buf__unsafe_offset,&__t1073t__buf__unsafe_align,&__t1073t__pos);
  goto __t_return;
  __t_return:
  *__t2879t=buf__unsafe_ptr;
  *__t2880t=buf__unsafe_size;
  *__t2881t=buf__unsafe_offset;
  *__t2882t=buf__unsafe_align;
  *__t2883t=__t1073t__buf__unsafe_ptr;
  *__t2884t=__t1073t__buf__unsafe_size;
  *__t2885t=__t1073t__buf__unsafe_offset;
  *__t2886t=__t1073t__buf__unsafe_align;
  *__t2887t=__t1073t__pos;
}

static inline __attribute__((always_inline)) int unit_arena__t2792t(uint64_t size, char** __t2888t, uint64_t* __t2889t, uint32_t* __t2890t, uint32_t* __t2891t, uint64_t* __t2892t) {
  char* __t2795t__unsafe_ptr=0;
  uint64_t __t2795t__unsafe_size=0;
  uint32_t __t2795t__unsafe_offset=0;
  uint32_t __t2795t__unsafe_align=0;
  char* __t2796t__unsafe_ptr=0;
  uint64_t __t2796t__unsafe_size=0;
  uint32_t __t2796t__unsafe_offset=0;
  uint32_t __t2796t__unsafe_align=0;
  char* __t2798t__buf__unsafe_ptr=0;
  uint64_t __t2798t__buf__unsafe_size=0;
  uint32_t __t2798t__buf__unsafe_offset=0;
  uint32_t __t2798t__buf__unsafe_align=0;
  uint64_t __t2798t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  unit____t_buffer____buffer__t2793t(&__t2795t__unsafe_ptr,&__t2795t__unsafe_size,&__t2795t__unsafe_offset,&__t2795t__unsafe_align);
  __t_errcode=alloc__t839t(&__t2795t__unsafe_ptr,&__t2795t__unsafe_size,&__t2795t__unsafe_offset,&__t2795t__unsafe_align,size,&__t2796t__unsafe_ptr,&__t2796t__unsafe_size,&__t2796t__unsafe_offset,&__t2796t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1071t(&__t2796t__unsafe_ptr,&__t2796t__unsafe_size,&__t2796t__unsafe_offset,&__t2796t__unsafe_align,&__t2798t__buf__unsafe_ptr,&__t2798t__buf__unsafe_size,&__t2798t__buf__unsafe_offset,&__t2798t__buf__unsafe_align,&__t2798t__pos);
  goto __t_return;
  
  __t_failure:free__t722t(&__t2798t__buf__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2888t=__t2798t__buf__unsafe_ptr;
  *__t2889t=__t2798t__buf__unsafe_size;
  *__t2890t=__t2798t__buf__unsafe_offset;
  *__t2891t=__t2798t__buf__unsafe_align;
  *__t2892t=__t2798t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void party____t_buffer____buffer__t2813t(char** __t2893t, uint64_t* __t2894t, uint32_t* __t2895t, uint32_t* __t2896t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=57;
  *__t2893t=unsafe_ptr;
  *__t2894t=unsafe_size;
  *__t2895t=unsafe_offset;
  *__t2896t=unsafe_align;
}

static inline __attribute__((always_inline)) void ge__t372t(uint64_t x, uint64_t y, char* __t2897t) {
  int __t373t__=0;
  char z=0;
  is_different__t108t(x,y,&__t373t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2897t=z;
}

static inline __attribute__((always_inline)) void add__t187t(uint64_t x, uint64_t y, uint64_t* __t2898t) {
  int __t188t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t188t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2898t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2899t) {
  *__t2899t=to;
}

static inline __attribute__((always_inline)) void add__t724t(char* allocated, uint64_t offset, char** __t2900t) {
  char* element=0;
  char* __t725t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t725t__);
  goto __t_return;
  __t_return:
  *__t2900t=__t725t__;
}

static inline __attribute__((always_inline)) int mutget__t1040t(char** __t2901t, uint64_t* __t2902t, uint32_t* __t2903t, uint32_t* __t2904t, uint64_t i, char** __t2905t) {
  char* buffer__unsafe_ptr=*__t2901t;
  uint64_t buffer__unsafe_size=*__t2902t;
  uint32_t buffer__unsafe_offset=*__t2903t;
  uint32_t buffer__unsafe_align=*__t2904t;
  int __t1041t=0;
  char __t1042t__=0;
  uint64_t __t1043t__=0;
  uint64_t __t1044t__=0;
  uint64_t __t1045t__=0;
  uint64_t __t1046t__=0;
  char* __t1047t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t372t(i,buffer__unsafe_size,&__t1042t__);
  if(__t1042t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t727t(buffer__unsafe_align,&__t1043t__);
  mul__t211t(i,__t1043t__,&__t1044t__);
  nat__t727t(buffer__unsafe_offset,&__t1045t__);
  add__t187t(__t1044t__,__t1045t__,&__t1046t__);
  add__t724t(buffer__unsafe_ptr,__t1046t__,&__t1047t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2901t=buffer__unsafe_ptr;
  *__t2902t=buffer__unsafe_size;
  *__t2903t=buffer__unsafe_offset;
  *__t2904t=buffer__unsafe_align;
  *__t2905t=__t1047t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1267t(char** __t2906t, uint64_t* __t2907t, uint32_t* __t2908t, uint32_t* __t2909t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t2906t=unsafe_ptr;
  *__t2907t=unsafe_size;
  *__t2908t=unsafe_offset;
  *__t2909t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2910t) {
  *__t2910t=to;
}

static inline __attribute__((always_inline)) int get__t1055t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t2911t) {
  int __t1056t=0;
  char __t1057t__=0;
  uint64_t __t1058t__=0;
  uint64_t __t1059t__=0;
  uint64_t __t1060t__=0;
  uint64_t __t1061t__=0;
  char* __t1062t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t372t(i,buffer__unsafe_size,&__t1057t__);
  if(__t1057t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t727t(buffer__unsafe_align,&__t1058t__);
  mul__t211t(i,__t1058t__,&__t1059t__);
  nat__t727t(buffer__unsafe_offset,&__t1060t__);
  add__t187t(__t1059t__,__t1060t__,&__t1061t__);
  add__t724t(buffer__unsafe_ptr,__t1061t__,&__t1062t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2911t=__t1062t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1289t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2912t, uint64_t* __t2913t, uint64_t* __t2914t, char* __t2915t) {
  goto __t_return;
  __t_return:
  *__t2912t=unsafe_ptr;
  *__t2913t=dat__pos;
  *__t2914t=dat__length;
  *__t2915t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1293t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2916t, uint64_t* __t2917t, uint64_t* __t2918t, char* __t2919t) {
  char* unsafe_ptr=0;
  uint64_t __t1294t__=0;
  uint64_t __t1295t=0;
  char __t1296t__=0;
  uint64_t __t1297t__=0;
  uint64_t __t1298t=0;
  char __t1299t__=0;
  char* __t1300t__unsafe_ptr=0;
  uint64_t __t1300t__dat__pos=0;
  uint64_t __t1300t__dat__length=0;
  char __t1300t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t727t(buf__unsafe_align,&__t1294t__);
  __t1295t=1;
  neq__t157t(__t1294t__,__t1295t,&__t1296t__);
  if(__t1296t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t727t(buf__unsafe_offset,&__t1297t__);
  __t1298t=0;
  neq__t157t(__t1297t__,__t1298t,&__t1299t__);
  if(__t1299t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t1289t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1300t__unsafe_ptr,&__t1300t__dat__pos,&__t1300t__dat__length,&__t1300t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2916t=__t1300t__unsafe_ptr;
  *__t2917t=__t1300t__dat__pos;
  *__t2918t=__t1300t__dat__length;
  *__t2919t=__t1300t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1327t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2920t, uint64_t* __t2921t, uint64_t* __t2922t, char* __t2923t) {
  uint64_t __t1328t=0;
  char __t1329t__=0;
  char* __t1331t__=0;
  char __t1332t__value=0;
  char first=0;
  char* __t1333t__unsafe_ptr=0;
  uint64_t __t1333t__dat__pos=0;
  uint64_t __t1333t__dat__length=0;
  char __t1333t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1328t=0;
  neq__t157t(length,__t1328t,&__t1329t__);
  if(__t1329t__){
  __t_errcode=get__t1055t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1331t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1331t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1332t__value,__t1331t__,1);
  first=__t1332t__value;
  }
  __t_errcode=str__t1293t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1333t__unsafe_ptr,&__t1333t__dat__pos,&__t1333t__dat__length,&__t1333t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2920t=__t1333t__unsafe_ptr;
  *__t2921t=__t1333t__dat__pos;
  *__t2922t=__t1333t__dat__length;
  *__t2923t=__t1333t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

void str__t1349t(const char* c, char** __t2924t, uint64_t* __t2925t, uint64_t* __t2926t, char* __t2927t) {
  char* __t1350t__unsafe_ptr=0;
  uint64_t __t1350t__unsafe_size=0;
  uint32_t __t1350t__unsafe_offset=0;
  uint32_t __t1350t__unsafe_align=0;
  char* __t1351t__unsafe_ptr=0;
  uint64_t __t1351t__unsafe_size=0;
  uint32_t __t1351t__unsafe_offset=0;
  uint32_t __t1351t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1352t__=0;
  uint64_t length=0;
  uint64_t __t1353t=0;
  uint64_t __t1354t__=0;
  char __t1355t=0;
  uint64_t __t1356t=0;
  char* __t1358t__unsafe_ptr=0;
  uint64_t __t1358t__dat__pos=0;
  uint64_t __t1358t__dat__length=0;
  char __t1358t__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1267t(&__t1350t__unsafe_ptr,&__t1350t__unsafe_size,&__t1350t__unsafe_offset,&__t1350t__unsafe_align);
  __t1351t__unsafe_ptr=__t1350t__unsafe_ptr;
  __t1351t__unsafe_size=__t1350t__unsafe_size;
  __t1351t__unsafe_offset=__t1350t__unsafe_offset;
  __t1351t__unsafe_align=__t1350t__unsafe_align;
  buf__unsafe_ptr=__t1351t__unsafe_ptr;
  buf__unsafe_size=__t1351t__unsafe_size;
  buf__unsafe_offset=__t1351t__unsafe_offset;
  buf__unsafe_align=__t1351t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1352t__);
  buf__unsafe_ptr=__t1352t__;
  if(c){
  length=strlen(c);
  }
  __t1353t=1;
  add__t187t(length,__t1353t,&__t1354t__);
  buf__unsafe_size=__t1354t__;
  __t1356t=0;
  __t_complain=str__t1327t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1356t,length,&__t1358t__unsafe_ptr,&__t1358t__dat__pos,&__t1358t__dat__length,&__t1358t__dat__first);
  __t1355t=__t_complain;
  if(__t_complain){
  goto __t1355t__label;
  }
  ret__unsafe_ptr=__t1358t__unsafe_ptr;
  ret__dat__pos=__t1358t__dat__pos;
  ret__dat__length=__t1358t__dat__length;
  ret__dat__first=__t1358t__dat__first;
  __t1355t__label:__t1355t=__t1355t==0;
  goto __t_return;
  __t_return:
  *__t2924t=ret__unsafe_ptr;
  *__t2925t=ret__dat__pos;
  *__t2926t=ret__dat__length;
  *__t2927t=ret__dat__first;
}

static inline __attribute__((always_inline)) void len__t1063t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t2928t) {
  goto __t_return;
  __t_return:
  *__t2928t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t324t(uint64_t x, uint64_t y, char* __t2929t) {
  int __t325t__=0;
  char z=0;
  is_different__t108t(x,y,&__t325t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2929t=z;
}

static inline __attribute__((always_inline)) void allocated__t1075t(char** __t2930t, uint64_t* __t2931t, uint32_t* __t2932t, uint32_t* __t2933t, uint64_t pos, char** __t2934t, uint64_t* __t2935t, uint32_t* __t2936t, uint32_t* __t2937t, uint64_t* __t2938t) {
  char* buf__unsafe_ptr=*__t2930t;
  uint64_t buf__unsafe_size=*__t2931t;
  uint32_t buf__unsafe_offset=*__t2932t;
  uint32_t buf__unsafe_align=*__t2933t;
  goto __t_return;
  __t_return:
  *__t2930t=buf__unsafe_ptr;
  *__t2931t=buf__unsafe_size;
  *__t2932t=buf__unsafe_offset;
  *__t2933t=buf__unsafe_align;
  *__t2934t=buf__unsafe_ptr;
  *__t2935t=buf__unsafe_size;
  *__t2936t=buf__unsafe_offset;
  *__t2937t=buf__unsafe_align;
  *__t2938t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1150t(char** __t2939t, uint64_t* __t2940t, uint32_t* __t2941t, uint32_t* __t2942t, uint64_t* __t2943t, uint64_t length, char** __t2944t, uint64_t* __t2945t, uint32_t* __t2946t, uint32_t* __t2947t, uint64_t* __t2948t) {
  char* allocator__buf__unsafe_ptr=*__t2939t;
  uint64_t allocator__buf__unsafe_size=*__t2940t;
  uint32_t allocator__buf__unsafe_offset=*__t2941t;
  uint32_t allocator__buf__unsafe_align=*__t2942t;
  uint64_t allocator__pos=*__t2943t;
  int __t1151t=0;
  uint64_t __t1152t__=0;
  uint64_t next_pos=0;
  uint64_t __t1153t__=0;
  char __t1154t__=0;
  uint64_t __t1155t=0;
  uint64_t __t1156t__=0;
  uint64_t pos=0;
  char* __t1157t__buf__unsafe_ptr=0;
  uint64_t __t1157t__buf__unsafe_size=0;
  uint32_t __t1157t__buf__unsafe_offset=0;
  uint32_t __t1157t__buf__unsafe_align=0;
  uint64_t __t1157t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t187t(allocator__pos,length,&__t1152t__);
  next_pos=__t1152t__;
  len__t1063t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1153t__);
  gt__t324t(next_pos,__t1153t__,&__t1154t__);
  if(__t1154t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t1155t=0;
  add__t187t(allocator__pos,__t1155t,&__t1156t__);
  pos=__t1156t__;
  allocator__pos=next_pos;
  allocated__t1075t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1157t__buf__unsafe_ptr,&__t1157t__buf__unsafe_size,&__t1157t__buf__unsafe_offset,&__t1157t__buf__unsafe_align,&__t1157t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2939t=allocator__buf__unsafe_ptr;
  *__t2940t=allocator__buf__unsafe_size;
  *__t2941t=allocator__buf__unsafe_offset;
  *__t2942t=allocator__buf__unsafe_align;
  *__t2943t=allocator__pos;
  *__t2944t=__t1157t__buf__unsafe_ptr;
  *__t2945t=__t1157t__buf__unsafe_size;
  *__t2946t=__t1157t__buf__unsafe_offset;
  *__t2947t=__t1157t__buf__unsafe_align;
  *__t2948t=__t1157t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat32__t1253t(uint64_t x, uint32_t* __t2949t) {
  uint32_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2949t=value;
}

static inline __attribute__((always_inline)) int slice__t1254t(char** __t2950t, uint64_t* __t2951t, uint32_t* __t2952t, uint32_t* __t2953t, uint64_t* __t2954t, uint64_t length, char** __t2955t, uint64_t* __t2956t, uint32_t* __t2957t, uint32_t* __t2958t) {
  char* surface__buf__unsafe_ptr=*__t2950t;
  uint64_t surface__buf__unsafe_size=*__t2951t;
  uint32_t surface__buf__unsafe_offset=*__t2952t;
  uint32_t surface__buf__unsafe_align=*__t2953t;
  uint64_t surface__pos=*__t2954t;
  char* __t1255t__buf__unsafe_ptr=0;
  uint64_t __t1255t__buf__unsafe_size=0;
  uint32_t __t1255t__buf__unsafe_offset=0;
  uint32_t __t1255t__buf__unsafe_align=0;
  uint64_t __t1255t__pos=0;
  char* __t1256t__buf__unsafe_ptr=0;
  uint64_t __t1256t__buf__unsafe_size=0;
  uint32_t __t1256t__buf__unsafe_offset=0;
  uint32_t __t1256t__buf__unsafe_align=0;
  uint64_t __t1256t__pos=0;
  char* allocated__buf__unsafe_ptr=0;
  uint64_t allocated__buf__unsafe_size=0;
  uint32_t allocated__buf__unsafe_offset=0;
  uint32_t allocated__buf__unsafe_align=0;
  uint64_t allocated__pos=0;
  char* __t1257t__unsafe_ptr=0;
  uint64_t __t1257t__unsafe_size=0;
  uint32_t __t1257t__unsafe_offset=0;
  uint32_t __t1257t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  uint64_t __t1258t__=0;
  uint64_t __t1259t__=0;
  uint64_t __t1260t__=0;
  uint64_t __t1261t__=0;
  uint32_t __t1262t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t1150t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,&surface__pos,length,&__t1255t__buf__unsafe_ptr,&__t1255t__buf__unsafe_size,&__t1255t__buf__unsafe_offset,&__t1255t__buf__unsafe_align,&__t1255t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1256t__buf__unsafe_ptr=__t1255t__buf__unsafe_ptr;
  __t1256t__buf__unsafe_size=__t1255t__buf__unsafe_size;
  __t1256t__buf__unsafe_offset=__t1255t__buf__unsafe_offset;
  __t1256t__buf__unsafe_align=__t1255t__buf__unsafe_align;
  __t1256t__pos=__t1255t__pos;
  allocated__buf__unsafe_ptr=__t1256t__buf__unsafe_ptr;
  allocated__buf__unsafe_size=__t1256t__buf__unsafe_size;
  allocated__buf__unsafe_offset=__t1256t__buf__unsafe_offset;
  allocated__buf__unsafe_align=__t1256t__buf__unsafe_align;
  allocated__pos=__t1256t__pos;
  __t1257t__unsafe_ptr=allocated__buf__unsafe_ptr;
  __t1257t__unsafe_size=allocated__buf__unsafe_size;
  __t1257t__unsafe_offset=allocated__buf__unsafe_offset;
  __t1257t__unsafe_align=allocated__buf__unsafe_align;
  buf__unsafe_ptr=__t1257t__unsafe_ptr;
  buf__unsafe_size=__t1257t__unsafe_size;
  buf__unsafe_offset=__t1257t__unsafe_offset;
  buf__unsafe_align=__t1257t__unsafe_align;
  buf__unsafe_size=length;
  nat__t727t(buf__unsafe_offset,&__t1258t__);
  nat__t727t(buf__unsafe_align,&__t1259t__);
  mul__t211t(__t1259t__,allocated__pos,&__t1260t__);
  add__t187t(__t1258t__,__t1260t__,&__t1261t__);
  nat32__t1253t(__t1261t__,&__t1262t__);
  buf__unsafe_offset=__t1262t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2950t=surface__buf__unsafe_ptr;
  *__t2951t=surface__buf__unsafe_size;
  *__t2952t=surface__buf__unsafe_offset;
  *__t2953t=surface__buf__unsafe_align;
  *__t2954t=surface__pos;
  *__t2955t=buf__unsafe_ptr;
  *__t2956t=buf__unsafe_size;
  *__t2957t=buf__unsafe_offset;
  *__t2958t=buf__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int party__t2799t(char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, char** __t2959t, uint64_t* __t2960t, uint32_t* __t2961t, uint32_t* __t2962t, uint64_t* __t2963t, char** __t2964t, uint64_t* __t2965t, uint64_t* __t2966t, char* __t2967t, char** __t2968t, uint64_t* __t2969t, uint32_t* __t2970t, uint32_t* __t2971t, uint64_t* __t2972t) {
  char* unit_arena__buf__unsafe_ptr=*__t2959t;
  uint64_t unit_arena__buf__unsafe_size=*__t2960t;
  uint32_t unit_arena__buf__unsafe_offset=*__t2961t;
  uint32_t unit_arena__buf__unsafe_align=*__t2962t;
  uint64_t unit_arena__pos=*__t2963t;
  uint64_t __t2800t=0;
  char* __t2801t__unsafe_ptr=0;
  uint64_t __t2801t__unsafe_size=0;
  uint32_t __t2801t__unsafe_offset=0;
  uint32_t __t2801t__unsafe_align=0;
  char* __t2802t__unsafe_ptr=0;
  uint64_t __t2802t__unsafe_size=0;
  uint32_t __t2802t__unsafe_offset=0;
  uint32_t __t2802t__unsafe_align=0;
  char* units__unsafe_ptr=0;
  uint64_t units__unsafe_size=0;
  uint32_t units__unsafe_offset=0;
  uint32_t units__unsafe_align=0;
  uint64_t __t2803t=0;
  uint64_t __t2804t=0;
  uint64_t progress=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2800t=4;
  __t_errcode=slice__t1254t(&unit_arena__buf__unsafe_ptr,&unit_arena__buf__unsafe_size,&unit_arena__buf__unsafe_offset,&unit_arena__buf__unsafe_align,&unit_arena__pos,__t2800t,&__t2801t__unsafe_ptr,&__t2801t__unsafe_size,&__t2801t__unsafe_offset,&__t2801t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2802t__unsafe_ptr=__t2801t__unsafe_ptr;
  __t2802t__unsafe_size=__t2801t__unsafe_size;
  __t2802t__unsafe_offset=__t2801t__unsafe_offset;
  __t2802t__unsafe_align=__t2801t__unsafe_align;
  units__unsafe_ptr=__t2802t__unsafe_ptr;
  units__unsafe_size=__t2802t__unsafe_size;
  units__unsafe_offset=__t2802t__unsafe_offset;
  units__unsafe_align=__t2802t__unsafe_align;
  __t2803t=0;
  __t2804t=__t2803t;
  progress=__t2804t;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2959t=unit_arena__buf__unsafe_ptr;
  *__t2960t=unit_arena__buf__unsafe_size;
  *__t2961t=unit_arena__buf__unsafe_offset;
  *__t2962t=unit_arena__buf__unsafe_align;
  *__t2963t=unit_arena__pos;
  *__t2964t=name__unsafe_ptr;
  *__t2965t=name__dat__pos;
  *__t2966t=name__dat__length;
  *__t2967t=name__dat__first;
  *__t2968t=units__unsafe_ptr;
  *__t2969t=units__unsafe_size;
  *__t2970t=units__unsafe_offset;
  *__t2971t=units__unsafe_align;
  *__t2972t=progress;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unit__t2788t(char* name__unsafe_ptr, uint64_t name__dat__pos, uint64_t name__dat__length, char name__dat__first, uint64_t combat, char** __t2973t, uint64_t* __t2974t, uint64_t* __t2975t, char* __t2976t, uint64_t* __t2977t, uint64_t* __t2978t) {
  uint64_t __t2789t=0;
  uint64_t __t2790t=0;
  uint64_t status=0;
  __t2789t=0;
  __t2790t=__t2789t;
  status=__t2790t;
  goto __t_return;
  __t_return:
  *__t2973t=name__unsafe_ptr;
  *__t2974t=name__dat__pos;
  *__t2975t=name__dat__length;
  *__t2976t=name__dat__first;
  *__t2977t=combat;
  *__t2978t=status;
}

static inline __attribute__((always_inline)) void print__t1512t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1513t=0;
  const char* endl=0;
  endl=__t442t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2806t() {
  uint64_t __t2809t=0;
  char* __t2810t__buf__unsafe_ptr=0;
  uint64_t __t2810t__buf__unsafe_size=0;
  uint32_t __t2810t__buf__unsafe_offset=0;
  uint32_t __t2810t__buf__unsafe_align=0;
  uint64_t __t2810t__pos=0;
  char* __t2812t__buf__unsafe_ptr=0;
  uint64_t __t2812t__buf__unsafe_size=0;
  uint32_t __t2812t__buf__unsafe_offset=0;
  uint32_t __t2812t__buf__unsafe_align=0;
  uint64_t __t2812t__pos=0;
  char* units__buf__unsafe_ptr=0;
  uint64_t units__buf__unsafe_size=0;
  uint32_t units__buf__unsafe_offset=0;
  uint32_t units__buf__unsafe_align=0;
  uint64_t units__pos=0;
  char* __t2815t__unsafe_ptr=0;
  uint64_t __t2815t__unsafe_size=0;
  uint32_t __t2815t__unsafe_offset=0;
  uint32_t __t2815t__unsafe_align=0;
  uint64_t __t2816t=0;
  char* __t2817t__unsafe_ptr=0;
  uint64_t __t2817t__unsafe_size=0;
  uint32_t __t2817t__unsafe_offset=0;
  uint32_t __t2817t__unsafe_align=0;
  char* __t2819t__unsafe_ptr=0;
  uint64_t __t2819t__unsafe_size=0;
  uint32_t __t2819t__unsafe_offset=0;
  uint32_t __t2819t__unsafe_align=0;
  char* parties__unsafe_ptr=0;
  uint64_t parties__unsafe_size=0;
  uint32_t parties__unsafe_offset=0;
  uint32_t parties__unsafe_align=0;
  uint64_t __t2820t=0;
  char* __t2822t__=0;
  char* __t2824t__unsafe_ptr=0;
  uint64_t __t2824t__dat__pos=0;
  uint64_t __t2824t__dat__length=0;
  char __t2824t__dat__first=0;
  char* __t2825t__name__unsafe_ptr=0;
  uint64_t __t2825t__name__dat__pos=0;
  uint64_t __t2825t__name__dat__length=0;
  char __t2825t__name__dat__first=0;
  char* __t2825t__units__unsafe_ptr=0;
  uint64_t __t2825t__units__unsafe_size=0;
  uint32_t __t2825t__units__unsafe_offset=0;
  uint32_t __t2825t__units__unsafe_align=0;
  uint64_t __t2825t__progress=0;
  uint64_t __t2826t=0;
  char* __t2828t__=0;
  char* __t2829t__name__unsafe_ptr=0;
  uint64_t __t2829t__name__dat__pos=0;
  uint64_t __t2829t__name__dat__length=0;
  char __t2829t__name__dat__first=0;
  char* __t2829t__units__unsafe_ptr=0;
  uint64_t __t2829t__units__unsafe_size=0;
  uint32_t __t2829t__units__unsafe_offset=0;
  uint32_t __t2829t__units__unsafe_align=0;
  uint64_t __t2829t__progress=0;
  char* __t2830t__name__unsafe_ptr=0;
  uint64_t __t2830t__name__dat__pos=0;
  uint64_t __t2830t__name__dat__length=0;
  char __t2830t__name__dat__first=0;
  char* __t2830t__units__unsafe_ptr=0;
  uint64_t __t2830t__units__unsafe_size=0;
  uint32_t __t2830t__units__unsafe_offset=0;
  uint32_t __t2830t__units__unsafe_align=0;
  uint64_t __t2830t__progress=0;
  char* myparty__name__unsafe_ptr=0;
  uint64_t myparty__name__dat__pos=0;
  uint64_t myparty__name__dat__length=0;
  char myparty__name__dat__first=0;
  char* myparty__units__unsafe_ptr=0;
  uint64_t myparty__units__unsafe_size=0;
  uint32_t myparty__units__unsafe_offset=0;
  uint32_t myparty__units__unsafe_align=0;
  uint64_t myparty__progress=0;
  uint64_t __t2831t=0;
  uint64_t __t2832t__=0;
  uint64_t __t2833t=0;
  char* __t2834t__unsafe_ptr=0;
  uint64_t __t2834t__unsafe_size=0;
  uint32_t __t2834t__unsafe_offset=0;
  uint32_t __t2834t__unsafe_align=0;
  char* u__unsafe_ptr=0;
  uint64_t u__unsafe_size=0;
  uint32_t u__unsafe_offset=0;
  uint32_t u__unsafe_align=0;
  uint64_t __t2835t=0;
  char* __t2837t__=0;
  char* __t2839t__unsafe_ptr=0;
  uint64_t __t2839t__dat__pos=0;
  uint64_t __t2839t__dat__length=0;
  char __t2839t__dat__first=0;
  uint64_t __t2840t=0;
  char* __t2841t__name__unsafe_ptr=0;
  uint64_t __t2841t__name__dat__pos=0;
  uint64_t __t2841t__name__dat__length=0;
  char __t2841t__name__dat__first=0;
  uint64_t __t2841t__combat=0;
  uint64_t __t2841t__status=0;
  uint64_t __t2842t=0;
  char* __t2844t__=0;
  char* __t2845t__name__unsafe_ptr=0;
  uint64_t __t2845t__name__dat__pos=0;
  uint64_t __t2845t__name__dat__length=0;
  char __t2845t__name__dat__first=0;
  uint64_t __t2845t__combat=0;
  uint64_t __t2845t__status=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t418t();
  __t2809t=32;
  __t_errcode=unit_arena__t2792t(__t2809t,&__t2810t__buf__unsafe_ptr,&__t2810t__buf__unsafe_size,&__t2810t__buf__unsafe_offset,&__t2810t__buf__unsafe_align,&__t2810t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2812t__buf__unsafe_ptr=__t2810t__buf__unsafe_ptr;
  __t2812t__buf__unsafe_size=__t2810t__buf__unsafe_size;
  __t2812t__buf__unsafe_offset=__t2810t__buf__unsafe_offset;
  __t2812t__buf__unsafe_align=__t2810t__buf__unsafe_align;
  __t2812t__pos=__t2810t__pos;
  units__buf__unsafe_ptr=__t2812t__buf__unsafe_ptr;
  units__buf__unsafe_size=__t2812t__buf__unsafe_size;
  units__buf__unsafe_offset=__t2812t__buf__unsafe_offset;
  units__buf__unsafe_align=__t2812t__buf__unsafe_align;
  units__pos=__t2812t__pos;
  party____t_buffer____buffer__t2813t(&__t2815t__unsafe_ptr,&__t2815t__unsafe_size,&__t2815t__unsafe_offset,&__t2815t__unsafe_align);
  __t2816t=4;
  __t_errcode=alloc__t839t(&__t2815t__unsafe_ptr,&__t2815t__unsafe_size,&__t2815t__unsafe_offset,&__t2815t__unsafe_align,__t2816t,&__t2817t__unsafe_ptr,&__t2817t__unsafe_size,&__t2817t__unsafe_offset,&__t2817t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t2819t__unsafe_ptr=__t2817t__unsafe_ptr;
  __t2819t__unsafe_size=__t2817t__unsafe_size;
  __t2819t__unsafe_offset=__t2817t__unsafe_offset;
  __t2819t__unsafe_align=__t2817t__unsafe_align;
  parties__unsafe_ptr=__t2819t__unsafe_ptr;
  parties__unsafe_size=__t2819t__unsafe_size;
  parties__unsafe_offset=__t2819t__unsafe_offset;
  parties__unsafe_align=__t2819t__unsafe_align;
  __t2820t=0;
  __t_errcode=mutget__t1040t(&parties__unsafe_ptr,&parties__unsafe_size,&parties__unsafe_offset,&parties__unsafe_align,__t2820t,&__t2822t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1349t(__t2823t,&__t2824t__unsafe_ptr,&__t2824t__dat__pos,&__t2824t__dat__length,&__t2824t__dat__first);
  __t_errcode=party__t2799t(__t2824t__unsafe_ptr,__t2824t__dat__pos,__t2824t__dat__length,__t2824t__dat__first,&units__buf__unsafe_ptr,&units__buf__unsafe_size,&units__buf__unsafe_offset,&units__buf__unsafe_align,&units__pos,&__t2825t__name__unsafe_ptr,&__t2825t__name__dat__pos,&__t2825t__name__dat__length,&__t2825t__name__dat__first,&__t2825t__units__unsafe_ptr,&__t2825t__units__unsafe_size,&__t2825t__units__unsafe_offset,&__t2825t__units__unsafe_align,&__t2825t__progress);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2822t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2822t__,&__t2825t__name__unsafe_ptr,8);
  memcpy(__t2822t__+8,&__t2825t__name__dat__pos,8);
  memcpy(__t2822t__+16,&__t2825t__name__dat__length,8);
  memcpy(__t2822t__+24,&__t2825t__name__dat__first,1);
  memcpy(__t2822t__+25,&__t2825t__units__unsafe_ptr,8);
  memcpy(__t2822t__+33,&__t2825t__units__unsafe_size,8);
  memcpy(__t2822t__+41,&__t2825t__units__unsafe_offset,4);
  memcpy(__t2822t__+45,&__t2825t__units__unsafe_align,4);
  memcpy(__t2822t__+49,&__t2825t__progress,8);
  __t2826t=0;
  __t_errcode=mutget__t1040t(&parties__unsafe_ptr,&parties__unsafe_size,&parties__unsafe_offset,&parties__unsafe_align,__t2826t,&__t2828t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2828t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2829t__name__unsafe_ptr,__t2828t__,8);
  memcpy(&__t2829t__name__dat__pos,__t2828t__+8,8);
  memcpy(&__t2829t__name__dat__length,__t2828t__+16,8);
  memcpy(&__t2829t__name__dat__first,__t2828t__+24,1);
  memcpy(&__t2829t__units__unsafe_ptr,__t2828t__+25,8);
  memcpy(&__t2829t__units__unsafe_size,__t2828t__+33,8);
  memcpy(&__t2829t__units__unsafe_offset,__t2828t__+41,4);
  memcpy(&__t2829t__units__unsafe_align,__t2828t__+45,4);
  memcpy(&__t2829t__progress,__t2828t__+49,8);
  __t2830t__name__unsafe_ptr=__t2829t__name__unsafe_ptr;
  __t2830t__name__dat__pos=__t2829t__name__dat__pos;
  __t2830t__name__dat__length=__t2829t__name__dat__length;
  __t2830t__name__dat__first=__t2829t__name__dat__first;
  __t2830t__units__unsafe_ptr=__t2829t__units__unsafe_ptr;
  __t2830t__units__unsafe_size=__t2829t__units__unsafe_size;
  __t2830t__units__unsafe_offset=__t2829t__units__unsafe_offset;
  __t2830t__units__unsafe_align=__t2829t__units__unsafe_align;
  __t2830t__progress=__t2829t__progress;
  myparty__name__unsafe_ptr=__t2830t__name__unsafe_ptr;
  myparty__name__dat__pos=__t2830t__name__dat__pos;
  myparty__name__dat__length=__t2830t__name__dat__length;
  myparty__name__dat__first=__t2830t__name__dat__first;
  myparty__units__unsafe_ptr=__t2830t__units__unsafe_ptr;
  myparty__units__unsafe_size=__t2830t__units__unsafe_size;
  myparty__units__unsafe_offset=__t2830t__units__unsafe_offset;
  myparty__units__unsafe_align=__t2830t__units__unsafe_align;
  myparty__progress=__t2830t__progress;
  __t2831t=1;
  add__t187t(myparty__progress,__t2831t,&__t2832t__);
  myparty__progress=__t2832t__;
  __t2833t=4;
  __t_errcode=slice__t1254t(&units__buf__unsafe_ptr,&units__buf__unsafe_size,&units__buf__unsafe_offset,&units__buf__unsafe_align,&units__pos,__t2833t,&__t2834t__unsafe_ptr,&__t2834t__unsafe_size,&__t2834t__unsafe_offset,&__t2834t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  myparty__units__unsafe_ptr=__t2834t__unsafe_ptr;
  myparty__units__unsafe_size=__t2834t__unsafe_size;
  myparty__units__unsafe_offset=__t2834t__unsafe_offset;
  myparty__units__unsafe_align=__t2834t__unsafe_align;
  u__unsafe_ptr=myparty__units__unsafe_ptr;
  u__unsafe_size=myparty__units__unsafe_size;
  u__unsafe_offset=myparty__units__unsafe_offset;
  u__unsafe_align=myparty__units__unsafe_align;
  __t2835t=0;
  __t_errcode=mutget__t1040t(&myparty__units__unsafe_ptr,&myparty__units__unsafe_size,&myparty__units__unsafe_offset,&myparty__units__unsafe_align,__t2835t,&__t2837t__);
  if(__t_errcode){
  goto __t_failure;
  }
  str__t1349t(__t2838t,&__t2839t__unsafe_ptr,&__t2839t__dat__pos,&__t2839t__dat__length,&__t2839t__dat__first);
  __t2840t=4;
  unit__t2788t(__t2839t__unsafe_ptr,__t2839t__dat__pos,__t2839t__dat__length,__t2839t__dat__first,__t2840t,&__t2841t__name__unsafe_ptr,&__t2841t__name__dat__pos,&__t2841t__name__dat__length,&__t2841t__name__dat__first,&__t2841t__combat,&__t2841t__status);
  if(!__t2837t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2837t__,&__t2841t__name__unsafe_ptr,8);
  memcpy(__t2837t__+8,&__t2841t__name__dat__pos,8);
  memcpy(__t2837t__+16,&__t2841t__name__dat__length,8);
  memcpy(__t2837t__+24,&__t2841t__name__dat__first,1);
  memcpy(__t2837t__+25,&__t2841t__combat,8);
  memcpy(__t2837t__+33,&__t2841t__status,8);
  __t2842t=0;
  __t_errcode=mutget__t1040t(&myparty__units__unsafe_ptr,&myparty__units__unsafe_size,&myparty__units__unsafe_offset,&myparty__units__unsafe_align,__t2842t,&__t2844t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2844t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2845t__name__unsafe_ptr,__t2844t__,8);
  memcpy(&__t2845t__name__dat__pos,__t2844t__+8,8);
  memcpy(&__t2845t__name__dat__length,__t2844t__+16,8);
  memcpy(&__t2845t__name__dat__first,__t2844t__+24,1);
  memcpy(&__t2845t__combat,__t2844t__+25,8);
  memcpy(&__t2845t__status,__t2844t__+33,8);
  print__t1512t(__t2845t__name__unsafe_ptr,__t2845t__name__dat__pos,__t2845t__name__dat__length,__t2845t__name__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t722t(&__t2817t__unsafe_ptr);
  free__t722t(&__t2810t__buf__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2806t();return 0;}