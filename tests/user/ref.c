#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t2688t="123";
const char* const __t2690t="456";
const char* const __t403t="\n";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t2683t(char** __t2699t, uint64_t* __t2700t, uint32_t* __t2701t, uint32_t* __t2702t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t2699t=unsafe_ptr;
  *__t2700t=unsafe_size;
  *__t2701t=unsafe_offset;
  *__t2702t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t682t(char** __t2703t) {
  char* allocated=*__t2703t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t2703t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2704t) {
  int value=0;
  *__t2704t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t2705t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t2705t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t2706t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t2706t=__t110t__;
}

static inline __attribute__((always_inline)) void eq__t133t(uint64_t x, uint64_t y, char* __t2707t) {
  int __t134t__=0;
  char z=0;
  is_different__t108t(x,y,&__t134t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2707t=z;
}

static inline __attribute__((always_inline)) void neq__t157t(uint64_t x, uint64_t y, char* __t2708t) {
  int __t158t__=0;
  char z=0;
  is_different__t108t(x,y,&__t158t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2708t=z;
}

static inline __attribute__((always_inline)) void nat__t687t(uint32_t x, uint64_t* __t2709t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2709t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t2710t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2710t=z;
}

static inline __attribute__((always_inline)) void zero__t683t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t612t(char* x, char* __t2711t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2711t=z;
}

static inline __attribute__((always_inline)) void not__t41t(char value, char* __t2712t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2712t=z;
}

static inline __attribute__((always_inline)) int alloc__t675t(uint64_t bytes, char** __t2713t) {
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
  *__t2713t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t799t(char** __t2714t, uint64_t* __t2715t, uint32_t* __t2716t, uint32_t* __t2717t, uint64_t size, char** __t2718t, uint64_t* __t2719t, uint32_t* __t2720t, uint32_t* __t2721t) {
  char* buffer__unsafe_ptr=*__t2714t;
  uint64_t buffer__unsafe_size=*__t2715t;
  uint32_t buffer__unsafe_offset=*__t2716t;
  uint32_t buffer__unsafe_align=*__t2717t;
  int __t800t=0;
  char __t802t__=0;
  uint64_t __t803t=0;
  char __t804t__=0;
  char __t805t=0;
  uint64_t __t806t=0;
  uint64_t __t807t__=0;
  uint64_t __t808t__=0;
  int __t810t=0;
  uint64_t __t811t=0;
  char __t812t__=0;
  uint64_t __t813t__=0;
  uint64_t __t814t__=0;
  uint64_t bytes=0;
  int __t815t=0;
  uint64_t __t816t=0;
  char __t817t__=0;
  char* __t818t__=0;
  int __t819t=0;
  uint64_t __t820t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t133t(buffer__unsafe_size,size,&__t802t__);
  if(__t802t__){
  __t803t=0;
  neq__t157t(size,__t803t,&__t804t__);
  __t805t=__t804t__;
  }
  if(__t805t){
  __t806t=0;
  nat__t687t(buffer__unsafe_align,&__t807t__);
  mul__t212t(__t807t__,size,&__t808t__);
  zero__t683t(buffer__unsafe_ptr,__t806t,__t808t__);
  goto __t_return;
  }
  __t811t=0;
  neq__t157t(buffer__unsafe_size,__t811t,&__t812t__);
  if(__t812t__){
  __t_errcode=13;
  goto __t_failure;
  }
  nat__t687t(buffer__unsafe_align,&__t813t__);
  mul__t212t(__t813t__,size,&__t814t__);
  bytes=__t814t__;
  __t816t=0;
  eq__t133t(bytes,__t816t,&__t817t__);
  if(__t817t__){
  __t_errcode=12;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t675t(bytes,&__t818t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t820t=0;
  zero__t683t(__t818t__,__t820t,bytes);
  buffer__unsafe_ptr=__t818t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t682t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2714t=buffer__unsafe_ptr;
  *__t2715t=buffer__unsafe_size;
  *__t2716t=buffer__unsafe_offset;
  *__t2717t=buffer__unsafe_align;
  *__t2718t=buffer__unsafe_ptr;
  *__t2719t=buffer__unsafe_size;
  *__t2720t=buffer__unsafe_offset;
  *__t2721t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int list__t1039t(char** __t2722t, uint64_t* __t2723t, uint32_t* __t2724t, uint32_t* __t2725t, char** __t2726t, uint64_t* __t2727t, uint32_t* __t2728t, uint32_t* __t2729t, uint64_t* __t2730t) {
  char* _buf__unsafe_ptr=*__t2722t;
  uint64_t _buf__unsafe_size=*__t2723t;
  uint32_t _buf__unsafe_offset=*__t2724t;
  uint32_t _buf__unsafe_align=*__t2725t;
  int __t1040t=0;
  uint64_t __t1041t=0;
  char* __t1042t__unsafe_ptr=0;
  uint64_t __t1042t__unsafe_size=0;
  uint32_t __t1042t__unsafe_offset=0;
  uint32_t __t1042t__unsafe_align=0;
  char* __t1044t__unsafe_ptr=0;
  uint64_t __t1044t__unsafe_size=0;
  uint32_t __t1044t__unsafe_offset=0;
  uint32_t __t1044t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  uint64_t __t1045t=0;
  uint64_t __t1046t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1041t=1;
  __t_errcode=alloc__t799t(&_buf__unsafe_ptr,&_buf__unsafe_size,&_buf__unsafe_offset,&_buf__unsafe_align,__t1041t,&__t1042t__unsafe_ptr,&__t1042t__unsafe_size,&__t1042t__unsafe_offset,&__t1042t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1044t__unsafe_ptr=__t1042t__unsafe_ptr;
  __t1044t__unsafe_size=__t1042t__unsafe_size;
  __t1044t__unsafe_offset=__t1042t__unsafe_offset;
  __t1044t__unsafe_align=__t1042t__unsafe_align;
  buf__unsafe_ptr=__t1044t__unsafe_ptr;
  buf__unsafe_size=__t1044t__unsafe_size;
  buf__unsafe_offset=__t1044t__unsafe_offset;
  buf__unsafe_align=__t1044t__unsafe_align;
  __t1045t=0;
  __t1046t=__t1045t;
  length=__t1046t;
  goto __t_return;
  
  __t_failure:free__t682t(&buf__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2722t=_buf__unsafe_ptr;
  *__t2723t=_buf__unsafe_size;
  *__t2724t=_buf__unsafe_offset;
  *__t2725t=_buf__unsafe_align;
  *__t2726t=buf__unsafe_ptr;
  *__t2727t=buf__unsafe_size;
  *__t2728t=buf__unsafe_offset;
  *__t2729t=buf__unsafe_align;
  *__t2730t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1196t(char** __t2731t, uint64_t* __t2732t, uint32_t* __t2733t, uint32_t* __t2734t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t2731t=unsafe_ptr;
  *__t2732t=unsafe_size;
  *__t2733t=unsafe_offset;
  *__t2734t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t29t(char* to, const char* from, char** __t2735t) {
  *__t2735t=to;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t2736t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2736t=z;
}

static inline __attribute__((always_inline)) void ge__t337t(uint64_t x, uint64_t y, char* __t2737t) {
  int __t338t__=0;
  char z=0;
  is_different__t108t(x,y,&__t338t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2737t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t2738t) {
  *__t2738t=to;
}

static inline __attribute__((always_inline)) void add__t684t(char* allocated, uint64_t offset, char** __t2739t) {
  char* element=0;
  char* __t685t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t685t__);
  goto __t_return;
  __t_return:
  *__t2739t=__t685t__;
}

static inline __attribute__((always_inline)) int get__t997t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t2740t) {
  char __t998t__=0;
  uint64_t __t999t__=0;
  uint64_t __t1000t__=0;
  uint64_t __t1001t__=0;
  uint64_t __t1002t__=0;
  char* __t1003t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(i,buffer__unsafe_size,&__t998t__);
  if(__t998t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t687t(buffer__unsafe_align,&__t999t__);
  mul__t212t(i,__t999t__,&__t1000t__);
  nat__t687t(buffer__unsafe_offset,&__t1001t__);
  add__t188t(__t1000t__,__t1001t__,&__t1002t__);
  add__t684t(buffer__unsafe_ptr,__t1002t__,&__t1003t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2740t=__t1003t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t1218t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2741t, uint64_t* __t2742t, uint64_t* __t2743t, char* __t2744t) {
  goto __t_return;
  __t_return:
  *__t2741t=unsafe_ptr;
  *__t2742t=dat__pos;
  *__t2743t=dat__length;
  *__t2744t=dat__first;
}

static inline __attribute__((always_inline)) int str__t1222t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2745t, uint64_t* __t2746t, uint64_t* __t2747t, char* __t2748t) {
  char* unsafe_ptr=0;
  uint64_t __t1223t__=0;
  uint64_t __t1224t=0;
  char __t1225t__=0;
  uint64_t __t1226t__=0;
  uint64_t __t1227t=0;
  char __t1228t__=0;
  char* __t1229t__unsafe_ptr=0;
  uint64_t __t1229t__dat__pos=0;
  uint64_t __t1229t__dat__length=0;
  char __t1229t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t687t(buf__unsafe_align,&__t1223t__);
  __t1224t=1;
  neq__t157t(__t1223t__,__t1224t,&__t1225t__);
  if(__t1225t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t687t(buf__unsafe_offset,&__t1226t__);
  __t1227t=0;
  neq__t157t(__t1226t__,__t1227t,&__t1228t__);
  if(__t1228t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t1218t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t1229t__unsafe_ptr,&__t1229t__dat__pos,&__t1229t__dat__length,&__t1229t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2745t=__t1229t__unsafe_ptr;
  *__t2746t=__t1229t__dat__pos;
  *__t2747t=__t1229t__dat__length;
  *__t2748t=__t1229t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t1256t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint32_t buf__unsafe_offset, uint32_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2749t, uint64_t* __t2750t, uint64_t* __t2751t, char* __t2752t) {
  uint64_t __t1257t=0;
  char __t1258t__=0;
  char* __t1260t__=0;
  char __t1261t__value=0;
  char first=0;
  char* __t1262t__unsafe_ptr=0;
  uint64_t __t1262t__dat__pos=0;
  uint64_t __t1262t__dat__length=0;
  char __t1262t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1257t=0;
  neq__t157t(length,__t1257t,&__t1258t__);
  if(__t1258t__){
  __t_errcode=get__t997t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t1260t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1260t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1261t__value,__t1260t__,1);
  first=__t1261t__value;
  }
  __t_errcode=str__t1222t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t1262t__unsafe_ptr,&__t1262t__dat__pos,&__t1262t__dat__length,&__t1262t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2749t=__t1262t__unsafe_ptr;
  *__t2750t=__t1262t__dat__pos;
  *__t2751t=__t1262t__dat__length;
  *__t2752t=__t1262t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t1278t(const char* c, char** __t2753t, uint64_t* __t2754t, uint64_t* __t2755t, char* __t2756t) {
  char* __t1279t__unsafe_ptr=0;
  uint64_t __t1279t__unsafe_size=0;
  uint32_t __t1279t__unsafe_offset=0;
  uint32_t __t1279t__unsafe_align=0;
  char* __t1280t__unsafe_ptr=0;
  uint64_t __t1280t__unsafe_size=0;
  uint32_t __t1280t__unsafe_offset=0;
  uint32_t __t1280t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint32_t buf__unsafe_offset=0;
  uint32_t buf__unsafe_align=0;
  char* __t1281t__=0;
  uint64_t length=0;
  uint64_t __t1282t=0;
  uint64_t __t1283t__=0;
  uint64_t __t1284t=0;
  char* __t1286t__unsafe_ptr=0;
  uint64_t __t1286t__dat__pos=0;
  uint64_t __t1286t__dat__length=0;
  char __t1286t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1196t(&__t1279t__unsafe_ptr,&__t1279t__unsafe_size,&__t1279t__unsafe_offset,&__t1279t__unsafe_align);
  __t1280t__unsafe_ptr=__t1279t__unsafe_ptr;
  __t1280t__unsafe_size=__t1279t__unsafe_size;
  __t1280t__unsafe_offset=__t1279t__unsafe_offset;
  __t1280t__unsafe_align=__t1279t__unsafe_align;
  buf__unsafe_ptr=__t1280t__unsafe_ptr;
  buf__unsafe_size=__t1280t__unsafe_size;
  buf__unsafe_offset=__t1280t__unsafe_offset;
  buf__unsafe_align=__t1280t__unsafe_align;
  buf__unsafe_ptr=c;
  unsafe_attach_type__t29t(buf__unsafe_ptr,c,&__t1281t__);
  buf__unsafe_ptr=__t1281t__;
  if(c){
  length=strlen(c);
  }
  __t1282t=1;
  add__t188t(length,__t1282t,&__t1283t__);
  buf__unsafe_size=__t1283t__;
  __t1284t=0;
  __t_errcode=str__t1256t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1284t,length,&__t1286t__unsafe_ptr,&__t1286t__dat__pos,&__t1286t__dat__length,&__t1286t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2753t=__t1286t__unsafe_ptr;
  *__t2754t=__t1286t__dat__pos;
  *__t2755t=__t1286t__dat__length;
  *__t2756t=__t1286t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1287t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2757t) {
  goto __t_return;
  __t_return:
  *__t2757t=s__dat__length;
}

static inline __attribute__((always_inline)) void len__t1004t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t2758t) {
  goto __t_return;
  __t_return:
  *__t2758t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void gt__t289t(uint64_t x, uint64_t y, char* __t2759t) {
  int __t290t__=0;
  char z=0;
  is_different__t108t(x,y,&__t290t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t2759t=z;
}

static inline __attribute__((always_inline)) int div__t238t(uint64_t x, uint64_t y, uint64_t* __t2760t) {
  int __t239t__=0;
  uint64_t zero=0;
  char __t240t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t108t(x,y,&__t239t__);
  zero=0;
  eq__t133t(y,zero,&__t240t__);
  if(__t240t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2760t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int realloc__t678t(char* allocated, uint64_t bytes, char** __t2761t) {
  char* new_allocated=0;
  char __t679t__=0;
  char __t680t__=0;
  char* __t681t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t612t(new_allocated,&__t679t__);
  not__t41t(__t679t__,&__t680t__);
  if(__t680t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  unsafe_attach_type__t28t(new_allocated,allocated,&__t681t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2761t=__t681t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t265t(uint64_t x, uint64_t y, char* __t2762t) {
  int __t266t__=0;
  char z=0;
  is_different__t108t(x,y,&__t266t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2762t=z;
}

static inline __attribute__((always_inline)) int resize__t968t(char** __t2763t, uint64_t* __t2764t, uint32_t* __t2765t, uint32_t* __t2766t, uint64_t size, char** __t2767t, uint64_t* __t2768t, uint32_t* __t2769t, uint32_t* __t2770t) {
  char* buffer__unsafe_ptr=*__t2763t;
  uint64_t buffer__unsafe_size=*__t2764t;
  uint32_t buffer__unsafe_offset=*__t2765t;
  uint32_t buffer__unsafe_align=*__t2766t;
  int __t969t=0;
  char __t970t__=0;
  uint64_t __t971t=0;
  char __t972t__=0;
  uint64_t __t973t__=0;
  uint64_t __t974t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t975t__=0;
  uint64_t __t976t__=0;
  uint64_t bytes=0;
  char* __t977t__=0;
  char __t978t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t337t(buffer__unsafe_size,size,&__t970t__);
  if(__t970t__){
  goto __t_return;
  }
  __t971t=0;
  eq__t133t(buffer__unsafe_size,__t971t,&__t972t__);
  if(__t972t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t687t(buffer__unsafe_align,&__t973t__);
  mul__t212t(buffer__unsafe_size,__t973t__,&__t974t__);
  prev_bytes=__t974t__;
  buffer__unsafe_size=size;
  nat__t687t(buffer__unsafe_align,&__t975t__);
  mul__t212t(__t975t__,size,&__t976t__);
  bytes=__t976t__;
  __t_errcode=realloc__t678t(buffer__unsafe_ptr,bytes,&__t977t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t977t__;
  lt__t265t(prev_bytes,bytes,&__t978t__);
  if(__t978t__){
  zero__t683t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2763t=buffer__unsafe_ptr;
  *__t2764t=buffer__unsafe_size;
  *__t2765t=buffer__unsafe_offset;
  *__t2766t=buffer__unsafe_align;
  *__t2767t=buffer__unsafe_ptr;
  *__t2768t=buffer__unsafe_size;
  *__t2769t=buffer__unsafe_offset;
  *__t2770t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void allocated__t1016t(char** __t2771t, uint64_t* __t2772t, uint32_t* __t2773t, uint32_t* __t2774t, uint64_t pos, char** __t2775t, uint64_t* __t2776t, uint32_t* __t2777t, uint32_t* __t2778t, uint64_t* __t2779t) {
  char* buf__unsafe_ptr=*__t2771t;
  uint64_t buf__unsafe_size=*__t2772t;
  uint32_t buf__unsafe_offset=*__t2773t;
  uint32_t buf__unsafe_align=*__t2774t;
  goto __t_return;
  __t_return:
  *__t2771t=buf__unsafe_ptr;
  *__t2772t=buf__unsafe_size;
  *__t2773t=buf__unsafe_offset;
  *__t2774t=buf__unsafe_align;
  *__t2775t=buf__unsafe_ptr;
  *__t2776t=buf__unsafe_size;
  *__t2777t=buf__unsafe_offset;
  *__t2778t=buf__unsafe_align;
  *__t2779t=pos;
}

int alloc__t1121t(char** __t2780t, uint64_t* __t2781t, uint32_t* __t2782t, uint32_t* __t2783t, uint64_t* __t2784t, uint64_t length, char** __t2785t, uint64_t* __t2786t, uint32_t* __t2787t, uint32_t* __t2788t, uint64_t* __t2789t) {
  char* allocator__buf__unsafe_ptr=*__t2780t;
  uint64_t allocator__buf__unsafe_size=*__t2781t;
  uint32_t allocator__buf__unsafe_offset=*__t2782t;
  uint32_t allocator__buf__unsafe_align=*__t2783t;
  uint64_t allocator__length=*__t2784t;
  int __t1122t=0;
  uint64_t __t1123t=0;
  uint64_t __t1124t__=0;
  uint64_t pos=0;
  uint64_t __t1125t__=0;
  uint64_t prev_length=0;
  uint64_t __t1126t__=0;
  char __t1127t__=0;
  uint64_t __t1128t=0;
  uint64_t __t1129t__=0;
  uint64_t __t1130t__=0;
  uint64_t __t1131t=0;
  uint64_t __t1132t__=0;
  char* __t1133t__unsafe_ptr=0;
  uint64_t __t1133t__unsafe_size=0;
  uint32_t __t1133t__unsafe_offset=0;
  uint32_t __t1133t__unsafe_align=0;
  char* __t1134t__buf__unsafe_ptr=0;
  uint64_t __t1134t__buf__unsafe_size=0;
  uint32_t __t1134t__buf__unsafe_offset=0;
  uint32_t __t1134t__buf__unsafe_align=0;
  uint64_t __t1134t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1123t=0;
  add__t188t(allocator__length,__t1123t,&__t1124t__);
  pos=__t1124t__;
  add__t188t(allocator__length,length,&__t1125t__);
  prev_length=__t1125t__;
  len__t1004t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1126t__);
  gt__t289t(prev_length,__t1126t__,&__t1127t__);
  if(__t1127t__){
  __t1128t=2;
  __t_errcode=div__t238t(prev_length,__t1128t,&__t1129t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t188t(prev_length,__t1129t__,&__t1130t__);
  __t1131t=1;
  add__t188t(__t1130t__,__t1131t,&__t1132t__);
  __t_errcode=resize__t968t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,__t1132t__,&__t1133t__unsafe_ptr,&__t1133t__unsafe_size,&__t1133t__unsafe_offset,&__t1133t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  allocator__buf__unsafe_ptr=__t1133t__unsafe_ptr;
  allocator__buf__unsafe_size=__t1133t__unsafe_size;
  allocator__buf__unsafe_offset=__t1133t__unsafe_offset;
  allocator__buf__unsafe_align=__t1133t__unsafe_align;
  }
  allocator__length=prev_length;
  allocated__t1016t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1134t__buf__unsafe_ptr,&__t1134t__buf__unsafe_size,&__t1134t__buf__unsafe_offset,&__t1134t__buf__unsafe_align,&__t1134t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2780t=allocator__buf__unsafe_ptr;
  *__t2781t=allocator__buf__unsafe_size;
  *__t2782t=allocator__buf__unsafe_offset;
  *__t2783t=allocator__buf__unsafe_align;
  *__t2784t=allocator__length;
  *__t2785t=__t1134t__buf__unsafe_ptr;
  *__t2786t=__t1134t__buf__unsafe_size;
  *__t2787t=__t1134t__buf__unsafe_offset;
  *__t2788t=__t1134t__buf__unsafe_align;
  *__t2789t=__t1134t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t1329t(char** __t2790t, uint64_t* __t2791t, uint32_t* __t2792t, uint32_t* __t2793t, uint64_t* __t2794t, const char* _other, char** __t2795t, uint64_t* __t2796t, uint64_t* __t2797t, char* __t2798t) {
  char* CHARS__buf__unsafe_ptr=*__t2790t;
  uint64_t CHARS__buf__unsafe_size=*__t2791t;
  uint32_t CHARS__buf__unsafe_offset=*__t2792t;
  uint32_t CHARS__buf__unsafe_align=*__t2793t;
  uint64_t CHARS__length=*__t2794t;
  char* __t1330t__unsafe_ptr=0;
  uint64_t __t1330t__dat__pos=0;
  uint64_t __t1330t__dat__length=0;
  char __t1330t__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __t1331t__=0;
  char* __t1332t__buf__unsafe_ptr=0;
  uint64_t __t1332t__buf__unsafe_size=0;
  uint32_t __t1332t__buf__unsafe_offset=0;
  uint32_t __t1332t__buf__unsafe_align=0;
  uint64_t __t1332t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  char* __t1333t__unsafe_ptr=0;
  uint64_t __t1333t__dat__pos=0;
  uint64_t __t1333t__dat__length=0;
  char __t1333t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=str__t1278t(_other,&__t1330t__unsafe_ptr,&__t1330t__dat__pos,&__t1330t__dat__length,&__t1330t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  other__unsafe_ptr=__t1330t__unsafe_ptr;
  other__dat__pos=__t1330t__dat__pos;
  other__dat__length=__t1330t__dat__length;
  other__dat__first=__t1330t__dat__first;
  len__t1287t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1331t__);
  __t_errcode=alloc__t1121t(&CHARS__buf__unsafe_ptr,&CHARS__buf__unsafe_size,&CHARS__buf__unsafe_offset,&CHARS__buf__unsafe_align,&CHARS__length,__t1331t__,&__t1332t__buf__unsafe_ptr,&__t1332t__buf__unsafe_size,&__t1332t__buf__unsafe_offset,&__t1332t__buf__unsafe_align,&__t1332t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1332t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1332t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1332t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1332t__buf__unsafe_align;
  surface__pos=__t1332t__pos;
  memcpy(surface__buf__unsafe_ptr+surface__pos+surface__buf__unsafe_offset,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __t_errcode=str__t1222t(surface__buf__unsafe_ptr,surface__buf__unsafe_size,surface__buf__unsafe_offset,surface__buf__unsafe_align,surface__pos,other__dat__length,other__dat__first,&__t1333t__unsafe_ptr,&__t1333t__dat__pos,&__t1333t__dat__length,&__t1333t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2790t=CHARS__buf__unsafe_ptr;
  *__t2791t=CHARS__buf__unsafe_size;
  *__t2792t=CHARS__buf__unsafe_offset;
  *__t2793t=CHARS__buf__unsafe_align;
  *__t2794t=CHARS__length;
  *__t2795t=__t1333t__unsafe_ptr;
  *__t2796t=__t1333t__dat__pos;
  *__t2797t=__t1333t__dat__length;
  *__t2798t=__t1333t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t2682t(char** __t2799t, uint64_t* __t2800t, uint64_t* __t2801t, char* __t2802t, char** __t2803t, uint64_t* __t2804t, uint64_t* __t2805t, char* __t2806t) {
  char* __t2685t__unsafe_ptr=0;
  uint64_t __t2685t__unsafe_size=0;
  uint32_t __t2685t__unsafe_offset=0;
  uint32_t __t2685t__unsafe_align=0;
  char* __t2686t__buf__unsafe_ptr=0;
  uint64_t __t2686t__buf__unsafe_size=0;
  uint32_t __t2686t__buf__unsafe_offset=0;
  uint32_t __t2686t__buf__unsafe_align=0;
  uint64_t __t2686t__length=0;
  char* mem__buf__unsafe_ptr=0;
  uint64_t mem__buf__unsafe_size=0;
  uint32_t mem__buf__unsafe_offset=0;
  uint32_t mem__buf__unsafe_align=0;
  uint64_t mem__length=0;
  char* __t2689t__unsafe_ptr=0;
  uint64_t __t2689t__dat__pos=0;
  uint64_t __t2689t__dat__length=0;
  char __t2689t__dat__first=0;
  char* s1__unsafe_ptr=0;
  uint64_t s1__dat__pos=0;
  uint64_t s1__dat__length=0;
  char s1__dat__first=0;
  char* __t2691t__unsafe_ptr=0;
  uint64_t __t2691t__dat__pos=0;
  uint64_t __t2691t__dat__length=0;
  char __t2691t__dat__first=0;
  char* s2__unsafe_ptr=0;
  uint64_t s2__dat__pos=0;
  uint64_t s2__dat__length=0;
  char s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t2683t(&__t2685t__unsafe_ptr,&__t2685t__unsafe_size,&__t2685t__unsafe_offset,&__t2685t__unsafe_align);
  __t_errcode=list__t1039t(&__t2685t__unsafe_ptr,&__t2685t__unsafe_size,&__t2685t__unsafe_offset,&__t2685t__unsafe_align,&__t2686t__buf__unsafe_ptr,&__t2686t__buf__unsafe_size,&__t2686t__buf__unsafe_offset,&__t2686t__buf__unsafe_align,&__t2686t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=copy__t1329t(&__t2686t__buf__unsafe_ptr,&__t2686t__buf__unsafe_size,&__t2686t__buf__unsafe_offset,&__t2686t__buf__unsafe_align,&__t2686t__length,__t2688t,&__t2689t__unsafe_ptr,&__t2689t__dat__pos,&__t2689t__dat__length,&__t2689t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s1__dat__pos=__t2689t__dat__pos;
  s1__dat__length=__t2689t__dat__length;
  s1__dat__first=__t2689t__dat__first;
  __t_errcode=copy__t1329t(&__t2686t__buf__unsafe_ptr,&__t2686t__buf__unsafe_size,&__t2686t__buf__unsafe_offset,&__t2686t__buf__unsafe_align,&__t2686t__length,__t2690t,&__t2691t__unsafe_ptr,&__t2691t__dat__pos,&__t2691t__dat__length,&__t2691t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s2__dat__pos=__t2691t__dat__pos;
  s2__dat__length=__t2691t__dat__length;
  s2__dat__first=__t2691t__dat__first;
  s1__unsafe_ptr=__t2686t__buf__unsafe_ptr;
  s2__unsafe_ptr=__t2686t__buf__unsafe_ptr;
  goto __t_return;
  
  __t_failure:free__t682t(&s1__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t2799t=s1__unsafe_ptr;
  *__t2800t=s1__dat__pos;
  *__t2801t=s1__dat__length;
  *__t2802t=s1__dat__first;
  *__t2803t=s2__unsafe_ptr;
  *__t2804t=s2__dat__pos;
  *__t2805t=s2__dat__length;
  *__t2806t=s2__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1438t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1439t=0;
  const char* endl=0;
  endl=__t403t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2692t() {
  char* __t2695t__s1__unsafe_ptr=0;
  uint64_t __t2695t__s1__dat__pos=0;
  uint64_t __t2695t__s1__dat__length=0;
  char __t2695t__s1__dat__first=0;
  char* __t2695t__s2__unsafe_ptr=0;
  uint64_t __t2695t__s2__dat__pos=0;
  uint64_t __t2695t__s2__dat__length=0;
  char __t2695t__s2__dat__first=0;
  char* s__s1__unsafe_ptr=0;
  uint64_t s__s1__dat__pos=0;
  uint64_t s__s1__dat__length=0;
  char s__s1__dat__first=0;
  char* s__s2__unsafe_ptr=0;
  uint64_t s__s2__dat__pos=0;
  uint64_t s__s2__dat__length=0;
  char s__s2__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t379t();
  __t_errcode=test__t2682t(&__t2695t__s1__unsafe_ptr,&__t2695t__s1__dat__pos,&__t2695t__s1__dat__length,&__t2695t__s1__dat__first,&__t2695t__s2__unsafe_ptr,&__t2695t__s2__dat__pos,&__t2695t__s2__dat__length,&__t2695t__s2__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  s__s1__unsafe_ptr=__t2695t__s1__unsafe_ptr;
  s__s1__dat__pos=__t2695t__s1__dat__pos;
  s__s1__dat__length=__t2695t__s1__dat__length;
  s__s1__dat__first=__t2695t__s1__dat__first;
  s__s2__unsafe_ptr=__t2695t__s2__unsafe_ptr;
  s__s2__dat__pos=__t2695t__s2__dat__pos;
  s__s2__dat__length=__t2695t__s2__dat__length;
  s__s2__dat__first=__t2695t__s2__dat__first;
  print__t1438t(s__s1__unsafe_ptr,s__s1__dat__pos,s__s1__dat__length,s__s1__dat__first);
  print__t1438t(s__s2__unsafe_ptr,s__s2__dat__pos,s__s2__dat__length,s__s2__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t682t(&__t2695t__s1__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2692t();return 0;}