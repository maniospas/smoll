#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2585t="ls";
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
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"unsanitized command: shell metacharacter detected",
"system call failed",
"failed to open file",
"failed to create file",
"cannot open a new terminal in the current environment",
"failed to open new terminal",
"failed to move to start of closed file",
"failed to move to end of closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t921t(char** __t2588t, uint64_t* __t2589t, uint16_t* __t2590t, uint16_t* __t2591t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2588t=unsafe_ptr;
  *__t2589t=unsafe_size;
  *__t2590t=unsafe_offset;
  *__t2591t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2592t) {
  *__t2592t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2593t) {
  int value=0;
  *__t2593t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2594t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2594t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2595t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2595t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2596t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2596t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2597t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2597t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2598t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2598t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2599t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2599t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2600t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2600t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2601t) {
  *__t2601t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2602t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2602t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2603t) {
  char __t799t__=0;
  uint64_t __t800t__=0;
  uint64_t __t801t__=0;
  uint64_t __t802t__=0;
  uint64_t __t803t__=0;
  char* __t804t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t799t__);
  if(__t799t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t800t__);
  mul__t199t(i,__t800t__,&__t801t__);
  nat__t665t(buffer__unsafe_offset,&__t802t__);
  add__t175t(__t801t__,__t802t__,&__t803t__);
  add__t663t(buffer__unsafe_ptr,__t803t__,&__t804t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2603t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t941t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2604t, uint64_t* __t2605t, uint64_t* __t2606t, char* __t2607t) {
  goto __t_return;
  __t_return:
  *__t2604t=unsafe_ptr;
  *__t2605t=dat__pos;
  *__t2606t=dat__length;
  *__t2607t=dat__first;
}

static inline __attribute__((always_inline)) int str__t945t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2608t, uint64_t* __t2609t, uint64_t* __t2610t, char* __t2611t) {
  char* unsafe_ptr=0;
  uint64_t __t946t__=0;
  uint64_t __t947t=0;
  char __t948t__=0;
  uint64_t __t949t__=0;
  uint64_t __t950t=0;
  char __t951t__=0;
  char* __t952t__unsafe_ptr=0;
  uint64_t __t952t__dat__pos=0;
  uint64_t __t952t__dat__length=0;
  char __t952t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__t665t(buf__unsafe_align,&__t946t__);
  __t947t=1;
  neq__t144t(__t946t__,__t947t,&__t948t__);
  if(__t948t__){
  __t_errcode=18;
  goto __t_failure;
  }
  nat__t665t(buf__unsafe_offset,&__t949t__);
  __t950t=0;
  neq__t144t(__t949t__,__t950t,&__t951t__);
  if(__t951t__){
  __t_errcode=19;
  goto __t_failure;
  }
  str__t941t(unsafe_ptr,dat__pos,dat__length,dat__first,&__t952t__unsafe_ptr,&__t952t__dat__pos,&__t952t__dat__length,&__t952t__dat__first);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2608t=__t952t__unsafe_ptr;
  *__t2609t=__t952t__dat__pos;
  *__t2610t=__t952t__dat__length;
  *__t2611t=__t952t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2612t, uint64_t* __t2613t, uint64_t* __t2614t, char* __t2615t) {
  uint64_t __t978t=0;
  char __t979t__=0;
  char* __t980t__=0;
  char __t981t__value=0;
  char first=0;
  char* __t982t__unsafe_ptr=0;
  uint64_t __t982t__dat__pos=0;
  uint64_t __t982t__dat__length=0;
  char __t982t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t978t=0;
  neq__t144t(length,__t978t,&__t979t__);
  if(__t979t__){
  __t_errcode=get__t798t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t980t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t980t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t981t__value,__t980t__,1);
  first=__t981t__value;
  }
  __t_errcode=str__t945t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t982t__unsafe_ptr,&__t982t__dat__pos,&__t982t__dat__length,&__t982t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2612t=__t982t__unsafe_ptr;
  *__t2613t=__t982t__dat__pos;
  *__t2614t=__t982t__dat__length;
  *__t2615t=__t982t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t997t(const char* c, char** __t2616t, uint64_t* __t2617t, uint64_t* __t2618t, char* __t2619t) {
  char* __t998t__unsafe_ptr=0;
  uint64_t __t998t__unsafe_size=0;
  uint16_t __t998t__unsafe_offset=0;
  uint16_t __t998t__unsafe_align=0;
  char* __t999t__unsafe_ptr=0;
  uint64_t __t999t__unsafe_size=0;
  uint16_t __t999t__unsafe_offset=0;
  uint16_t __t999t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1000t__=0;
  uint64_t length=0;
  uint64_t __t1001t=0;
  uint64_t __t1002t__=0;
  uint64_t __t1003t=0;
  char* __t1005t__unsafe_ptr=0;
  uint64_t __t1005t__dat__pos=0;
  uint64_t __t1005t__dat__length=0;
  char __t1005t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t921t(&__t998t__unsafe_ptr,&__t998t__unsafe_size,&__t998t__unsafe_offset,&__t998t__unsafe_align);
  __t999t__unsafe_ptr=__t998t__unsafe_ptr;
  __t999t__unsafe_size=__t998t__unsafe_size;
  __t999t__unsafe_offset=__t998t__unsafe_offset;
  __t999t__unsafe_align=__t998t__unsafe_align;
  buf__unsafe_ptr=__t999t__unsafe_ptr;
  buf__unsafe_size=__t999t__unsafe_size;
  buf__unsafe_offset=__t999t__unsafe_offset;
  buf__unsafe_align=__t999t__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__t23t(buf__unsafe_ptr,c,&__t1000t__);
  buf__unsafe_ptr=__t1000t__;
  if(c){
  length=strlen(c);
  }
  __t1001t=1;
  add__t175t(length,__t1001t,&__t1002t__);
  buf__unsafe_size=__t1002t__;
  __t1003t=0;
  __t_errcode=str__t977t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1003t,length,&__t1005t__unsafe_ptr,&__t1005t__dat__pos,&__t1005t__dat__length,&__t1005t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2616t=__t1005t__unsafe_ptr;
  *__t2617t=__t1005t__dat__pos;
  *__t2618t=__t1005t__dat__length;
  *__t2619t=__t1005t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t806t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void len__t1006t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2620t) {
  goto __t_return;
  __t_return:
  *__t2620t=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2621t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2621t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2622t) {
  char* allocated=*__t2622t;
  if(allocated){
  free(allocated);
  }
  *__t2622t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2623t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2623t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2624t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2624t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2625t) {
  char* allocated=0;
  char __t655t__=0;
  char __t656t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t591t(allocated,&__t655t__);
  not__t28t(__t655t__,&__t656t__);
  if(__t656t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2625t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2626t, uint64_t* __t2627t, uint16_t* __t2628t, uint16_t* __t2629t, uint64_t size, char** __t2630t, uint64_t* __t2631t, uint16_t* __t2632t, uint16_t* __t2633t) {
  char* buffer__unsafe_ptr=*__t2626t;
  uint64_t buffer__unsafe_size=*__t2627t;
  uint16_t buffer__unsafe_offset=*__t2628t;
  uint16_t buffer__unsafe_align=*__t2629t;
  int __t691t=0;
  char __t692t__=0;
  char __t694t__=0;
  uint64_t __t695t=0;
  char __t696t__=0;
  uint64_t __t697t=0;
  uint64_t __t698t__=0;
  uint64_t __t699t__=0;
  uint64_t __t701t=0;
  char __t702t__=0;
  uint64_t __t703t__=0;
  uint64_t __t704t__=0;
  uint64_t bytes=0;
  uint64_t __t705t=0;
  char __t706t__=0;
  char* __t707t__=0;
  int __t708t=0;
  uint64_t __t709t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t694t__);
  if(__t694t__){
  __t695t=0;
  neq__t144t(size,__t695t,&__t696t__);
  if(__t696t__){
  __t697t=0;
  nat__t665t(buffer__unsafe_align,&__t698t__);
  mul__t199t(__t698t__,size,&__t699t__);
  zero__t662t(buffer__unsafe_ptr,__t697t,__t699t__);
  }
  goto __t_return;
  }
  __t701t=0;
  neq__t144t(buffer__unsafe_size,__t701t,&__t702t__);
  if(__t702t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t703t__);
  mul__t199t(__t703t__,size,&__t704t__);
  bytes=__t704t__;
  __t705t=0;
  eq__t120t(bytes,__t705t,&__t706t__);
  if(__t706t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t654t(bytes,&__t707t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t709t=0;
  zero__t662t(__t707t__,__t709t,bytes);
  buffer__unsafe_ptr=__t707t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(buffer__unsafe_ptr,&__t692t__);
  if(__t692t__){
  free__t661t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2626t=buffer__unsafe_ptr;
  *__t2627t=buffer__unsafe_size;
  *__t2628t=buffer__unsafe_offset;
  *__t2629t=buffer__unsafe_align;
  *__t2630t=buffer__unsafe_ptr;
  *__t2631t=buffer__unsafe_size;
  *__t2632t=buffer__unsafe_offset;
  *__t2633t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1053t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2634t, uint64_t* __t2635t, uint64_t* __t2636t, char* __t2637t) {
  char* __t1054t__unsafe_ptr=0;
  uint64_t __t1054t__unsafe_size=0;
  uint16_t __t1054t__unsafe_offset=0;
  uint16_t __t1054t__unsafe_align=0;
  char* __t1055t__unsafe_ptr=0;
  uint64_t __t1055t__unsafe_size=0;
  uint16_t __t1055t__unsafe_offset=0;
  uint16_t __t1055t__unsafe_align=0;
  uint64_t __t1056t=0;
  uint64_t __t1057t__=0;
  uint64_t __t1058t__=0;
  char* __t1059t__unsafe_ptr=0;
  uint64_t __t1059t__unsafe_size=0;
  uint16_t __t1059t__unsafe_offset=0;
  uint16_t __t1059t__unsafe_align=0;
  char __t1060t____t692t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* endpos=0;
  uint64_t __t1061t=0;
  char* __t1062t__unsafe_ptr=0;
  uint64_t __t1062t__dat__pos=0;
  uint64_t __t1062t__dat__length=0;
  char __t1062t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t921t(&__t1054t__unsafe_ptr,&__t1054t__unsafe_size,&__t1054t__unsafe_offset,&__t1054t__unsafe_align);
  __t1055t__unsafe_ptr=__t1054t__unsafe_ptr;
  __t1055t__unsafe_size=__t1054t__unsafe_size;
  __t1055t__unsafe_offset=__t1054t__unsafe_offset;
  __t1055t__unsafe_align=__t1054t__unsafe_align;
  __t1056t=1;
  len__t1006t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1057t__);
  add__t175t(__t1056t,__t1057t__,&__t1058t__);
  __t_errcode=alloc__t690t(&__t1055t__unsafe_ptr,&__t1055t__unsafe_size,&__t1055t__unsafe_offset,&__t1055t__unsafe_align,__t1058t__,&__t1059t__unsafe_ptr,&__t1059t__unsafe_size,&__t1059t__unsafe_offset,&__t1059t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1059t__unsafe_ptr;
  buf__unsafe_size=__t1059t__unsafe_size;
  buf__unsafe_offset=__t1059t__unsafe_offset;
  buf__unsafe_align=__t1059t__unsafe_align;
  memcpy(buf__unsafe_ptr,other__unsafe_ptr+other__dat__pos,other__dat__length);
  endpos=buf__unsafe_ptr+other__dat__length;
  *endpos=0;
  __t1061t=0;
  __t_errcode=str__t945t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__t1061t,other__dat__length,other__dat__first,&__t1062t__unsafe_ptr,&__t1062t__dat__pos,&__t1062t__dat__length,&__t1062t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t591t(__t1062t__unsafe_ptr,&__t1060t____t692t__);
  if(__t1060t____t692t__){
  free__t661t(&__t1062t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2634t=__t1062t__unsafe_ptr;
  *__t2635t=__t1062t__dat__pos;
  *__t2636t=__t1062t__dat__length;
  *__t2637t=__t1062t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1063t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2638t, char** __t2639t, uint64_t* __t2640t, uint64_t* __t2641t, char* __t2642t) {
  char* __t1065t__unsafe_ptr=0;
  uint64_t __t1065t__dat__pos=0;
  uint64_t __t1065t__dat__length=0;
  char __t1065t__dat__first=0;
  char __t1066t____t1060t____t692t__=0;
  char* str__unsafe_ptr=0;
  uint64_t str__dat__pos=0;
  uint64_t str__dat__length=0;
  char str__dat__first=0;
  char* __t1067t__=0;
  char* _ret=0;
  const char* cstr=0;
  int __t_errcode=0;
  int __t_complain=0;
  new__t806t();
  __t_errcode=copy_null_terminated__t1053t(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__t1065t__unsafe_ptr,&__t1065t__dat__pos,&__t1065t__dat__length,&__t1065t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  str__unsafe_ptr=__t1065t__unsafe_ptr;
  str__dat__pos=__t1065t__dat__pos;
  str__dat__length=__t1065t__dat__length;
  str__dat__first=__t1065t__dat__first;
  add__t663t(str__unsafe_ptr,str__dat__pos,&__t1067t__);
  _ret=__t1067t__;
  cstr=_ret;
  goto __t_return;
  
  __t_failure:exists__t591t(str__unsafe_ptr,&__t1066t____t1060t____t692t__);
  if(__t1066t____t1060t____t692t__){
  free__t661t(&str__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2638t=cstr;
  *__t2639t=str__unsafe_ptr;
  *__t2640t=str__dat__pos;
  *__t2641t=str__dat__length;
  *__t2642t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1071t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2643t) {
  goto __t_return;
  __t_return:
  *__t2643t=value__cstr;
}

static inline __attribute__((always_inline)) int safe__t2078t(const char* cmd, const char** __t2644t) {
  char unsafe_chars=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_chars=0;
  if(unsafe_chars){
  __t_errcode=38;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2644t=cmd;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void system_return__t2077t(const char* cmd, int64_t* __t2645t) {
  int64_t result=0;
  result=system(cmd);
  goto __t_return;
  __t_return:
  *__t2645t=result;
}

static inline __attribute__((always_inline)) void int__t571t(uint64_t x, int64_t* __t2646t) {
  int __t572t=0;
  int __t573t=0;
  int __t574t=0;
  int64_t z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t2646t=z;
}

static inline __attribute__((always_inline)) void is_different__t83t(int64_t x, int64_t y, int* __t2647t) {
  int __t84t=0;
  int __t85t__=0;
  not__t37t(__t84t,&__t85t__);
  goto __t_return;
  __t_return:
  *__t2647t=__t85t__;
}

static inline __attribute__((always_inline)) void neq__t133t(int64_t x, int64_t y, char* __t2648t) {
  int __t134t__=0;
  char z=0;
  is_different__t83t(x,y,&__t134t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2648t=z;
}

int system__t2087t(char* _cmd__unsafe_ptr, uint64_t _cmd__dat__pos, uint64_t _cmd__dat__length, char _cmd__dat__first) {
  const char* __t2088t__cstr=0;
  char* __t2088t__str__unsafe_ptr=0;
  uint64_t __t2088t__str__dat__pos=0;
  uint64_t __t2088t__str__dat__length=0;
  char __t2088t__str__dat__first=0;
  char __t2089t____t1066t____t1060t____t692t__=0;
  const char* __t2090t__=0;
  const char* __t2091t__=0;
  int64_t __t2092t__=0;
  int64_t result=0;
  uint64_t __t2093t=0;
  int64_t __t2094t__=0;
  char __t2095t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1063t(_cmd__unsafe_ptr,_cmd__dat__pos,_cmd__dat__length,_cmd__dat__first,&__t2088t__cstr,&__t2088t__str__unsafe_ptr,&__t2088t__str__dat__pos,&__t2088t__str__dat__length,&__t2088t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1071t(__t2088t__cstr,__t2088t__str__unsafe_ptr,__t2088t__str__dat__pos,__t2088t__str__dat__length,__t2088t__str__dat__first,&__t2090t__);
  __t_errcode=safe__t2078t(__t2090t__,&__t2091t__);
  if(__t_errcode){
  goto __t_failure;
  }
  system_return__t2077t(__t2091t__,&__t2092t__);
  result=__t2092t__;
  __t2093t=0;
  int__t571t(__t2093t,&__t2094t__);
  neq__t133t(result,__t2094t__,&__t2095t__);
  if(__t2095t__){
  __t_errcode=39;
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2088t__str__unsafe_ptr,&__t2089t____t1066t____t1060t____t692t__);
  if(__t2089t____t1066t____t1060t____t692t__){
  free__t661t(&__t2088t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t2583t() {
  char* __t2586t__unsafe_ptr=0;
  uint64_t __t2586t__dat__pos=0;
  uint64_t __t2586t__dat__length=0;
  char __t2586t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=str__t997t(__t2585t,&__t2586t__unsafe_ptr,&__t2586t__dat__pos,&__t2586t__dat__length,&__t2586t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=system__t2087t(__t2586t__unsafe_ptr,__t2586t__dat__pos,__t2586t__dat__length,__t2586t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2583t();return 0;}