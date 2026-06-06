#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2585t="README.md";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t921t(char** __t2602t, uint64_t* __t2603t, uint16_t* __t2604t, uint16_t* __t2605t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2602t=unsafe_ptr;
  *__t2603t=unsafe_size;
  *__t2604t=unsafe_offset;
  *__t2605t=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__t23t(char* to, const char* from, char** __t2606t) {
  *__t2606t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2607t) {
  int value=0;
  *__t2607t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2608t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2608t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2609t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2609t=__t97t__;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2610t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2610t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t2611t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t2611t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2612t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2612t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2613t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2613t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2614t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2614t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2615t) {
  *__t2615t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2616t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2616t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2617t) {
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
  *__t2617t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void str__t941t(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2618t, uint64_t* __t2619t, uint64_t* __t2620t, char* __t2621t) {
  goto __t_return;
  __t_return:
  *__t2618t=unsafe_ptr;
  *__t2619t=dat__pos;
  *__t2620t=dat__length;
  *__t2621t=dat__first;
}

static inline __attribute__((always_inline)) int str__t945t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __t2622t, uint64_t* __t2623t, uint64_t* __t2624t, char* __t2625t) {
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
  *__t2622t=__t952t__unsafe_ptr;
  *__t2623t=__t952t__dat__pos;
  *__t2624t=__t952t__dat__length;
  *__t2625t=__t952t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t977t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __t2626t, uint64_t* __t2627t, uint64_t* __t2628t, char* __t2629t) {
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
  *__t2626t=__t982t__unsafe_ptr;
  *__t2627t=__t982t__dat__pos;
  *__t2628t=__t982t__dat__length;
  *__t2629t=__t982t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int str__t997t(const char* c, char** __t2630t, uint64_t* __t2631t, uint64_t* __t2632t, char* __t2633t) {
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
  *__t2630t=__t1005t__unsafe_ptr;
  *__t2631t=__t1005t__dat__pos;
  *__t2632t=__t1005t__dat__length;
  *__t2633t=__t1005t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void new__t806t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void len__t1006t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __t2634t) {
  goto __t_return;
  __t_return:
  *__t2634t=s__dat__length;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t2635t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t2635t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t2636t) {
  char* allocated=*__t2636t;
  if(allocated){
  free(allocated);
  }
  *__t2636t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t2637t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2637t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t2638t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t2638t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t2639t) {
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
  *__t2639t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t2640t, uint64_t* __t2641t, uint16_t* __t2642t, uint16_t* __t2643t, uint64_t size, char** __t2644t, uint64_t* __t2645t, uint16_t* __t2646t, uint16_t* __t2647t) {
  char* buffer__unsafe_ptr=*__t2640t;
  uint64_t buffer__unsafe_size=*__t2641t;
  uint16_t buffer__unsafe_offset=*__t2642t;
  uint16_t buffer__unsafe_align=*__t2643t;
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
  *__t2640t=buffer__unsafe_ptr;
  *__t2641t=buffer__unsafe_size;
  *__t2642t=buffer__unsafe_offset;
  *__t2643t=buffer__unsafe_align;
  *__t2644t=buffer__unsafe_ptr;
  *__t2645t=buffer__unsafe_size;
  *__t2646t=buffer__unsafe_offset;
  *__t2647t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy_null_terminated__t1053t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __t2648t, uint64_t* __t2649t, uint64_t* __t2650t, char* __t2651t) {
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
  *__t2648t=__t1062t__unsafe_ptr;
  *__t2649t=__t1062t__dat__pos;
  *__t2650t=__t1062t__dat__length;
  *__t2651t=__t1062t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

int unsafe_temp__t1063t(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, const char** __t2652t, char** __t2653t, uint64_t* __t2654t, uint64_t* __t2655t, char* __t2656t) {
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
  *__t2652t=cstr;
  *__t2653t=str__unsafe_ptr;
  *__t2654t=str__dat__pos;
  *__t2655t=str__dat__length;
  *__t2656t=str__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cstr__t1071t(const char* value__cstr, char* value__str__unsafe_ptr, uint64_t value__str__dat__pos, uint64_t value__str__dat__length, char value__str__dat__first, const char** __t2657t) {
  goto __t_return;
  __t_return:
  *__t2657t=value__cstr;
}

static inline __attribute__((always_inline)) int read__t2096t(char* _path__unsafe_ptr, uint64_t _path__dat__pos, uint64_t _path__dat__length, char _path__dat__first, char** __t2658t) {
  const char* __t2097t__cstr=0;
  char* __t2097t__str__unsafe_ptr=0;
  uint64_t __t2097t__str__dat__pos=0;
  uint64_t __t2097t__str__dat__length=0;
  char __t2097t__str__dat__first=0;
  char __t2098t____t1066t____t1060t____t692t__=0;
  const char* __t2099t__=0;
  const char* path=0;
  char* unsafe_ptr=0;
  char __t2100t__=0;
  char __t2101t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_temp__t1063t(_path__unsafe_ptr,_path__dat__pos,_path__dat__length,_path__dat__first,&__t2097t__cstr,&__t2097t__str__unsafe_ptr,&__t2097t__str__dat__pos,&__t2097t__str__dat__length,&__t2097t__str__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  cstr__t1071t(__t2097t__cstr,__t2097t__str__unsafe_ptr,__t2097t__str__dat__pos,__t2097t__str__dat__length,__t2097t__str__dat__first,&__t2099t__);
  path=__t2099t__;
  unsafe_ptr=(char*)fopen(path,"r");
  exists__t591t(unsafe_ptr,&__t2100t__);
  not__t28t(__t2100t__,&__t2101t__);
  if(__t2101t__){
  __t_errcode=40;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:if(unsafe_ptr){
  fclose((FILE*)unsafe_ptr);
  unsafe_ptr=0;
  }
  
  goto __t_skip_returns;__t_return:
  *__t2658t=unsafe_ptr;
  
  __t_skip_returns:exists__t591t(__t2097t__str__unsafe_ptr,&__t2098t____t1066t____t1060t____t692t__);
  if(__t2098t____t1066t____t1060t____t692t__){
  free__t661t(&__t2097t__str__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void KB__t639t(uint64_t x, uint64_t* __t2659t) {
  uint64_t __t640t=0;
  uint64_t __t641t__=0;
  __t640t=1024;
  mul__t199t(x,__t640t,&__t641t__);
  goto __t_return;
  __t_return:
  *__t2659t=__t641t__;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t754t(char** __t2660t, uint64_t* __t2661t, uint16_t* __t2662t, uint16_t* __t2663t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__t2660t=unsafe_ptr;
  *__t2661t=unsafe_size;
  *__t2662t=unsafe_offset;
  *__t2663t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t753t(uint64_t size, char** __t2664t, uint64_t* __t2665t, uint16_t* __t2666t, uint16_t* __t2667t) {
  char* __t756t__unsafe_ptr=0;
  uint64_t __t756t__unsafe_size=0;
  uint16_t __t756t__unsafe_offset=0;
  uint16_t __t756t__unsafe_align=0;
  char* __t757t__unsafe_ptr=0;
  uint64_t __t757t__unsafe_size=0;
  uint16_t __t757t__unsafe_offset=0;
  uint16_t __t757t__unsafe_align=0;
  char* __t758t__unsafe_ptr=0;
  uint64_t __t758t__unsafe_size=0;
  uint16_t __t758t__unsafe_offset=0;
  uint16_t __t758t__unsafe_align=0;
  char __t759t____t692t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t754t(&__t756t__unsafe_ptr,&__t756t__unsafe_size,&__t756t__unsafe_offset,&__t756t__unsafe_align);
  __t757t__unsafe_ptr=__t756t__unsafe_ptr;
  __t757t__unsafe_size=__t756t__unsafe_size;
  __t757t__unsafe_offset=__t756t__unsafe_offset;
  __t757t__unsafe_align=__t756t__unsafe_align;
  __t_errcode=alloc__t690t(&__t757t__unsafe_ptr,&__t757t__unsafe_size,&__t757t__unsafe_offset,&__t757t__unsafe_align,size,&__t758t__unsafe_ptr,&__t758t__unsafe_size,&__t758t__unsafe_offset,&__t758t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:exists__t591t(__t758t__unsafe_ptr,&__t759t____t692t__);
  if(__t759t____t692t__){
  free__t661t(&__t758t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t2664t=__t758t__unsafe_ptr;
  *__t2665t=__t758t__unsafe_size;
  *__t2666t=__t758t__unsafe_offset;
  *__t2667t=__t758t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t2668t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t2668t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t2669t) {
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
  *__t2669t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int line__t2277t(char** __t2670t, uint64_t* __t2671t, uint16_t* __t2672t, uint16_t* __t2673t, uint64_t* __t2674t, char** __t2675t, char** __t2676t, uint64_t* __t2677t, uint64_t* __t2678t, char* __t2679t) {
  char* buf__unsafe_ptr=*__t2670t;
  uint64_t buf__unsafe_size=*__t2671t;
  uint16_t buf__unsafe_offset=*__t2672t;
  uint16_t buf__unsafe_align=*__t2673t;
  uint64_t pos=*__t2674t;
  char* f__unsafe_ptr=*__t2675t;
  int __t2278t=0;
  char __t2279t__=0;
  char __t2280t__=0;
  char* __t2281t__=0;
  char* contents=0;
  uint64_t __t2282t__=0;
  uint64_t size=0;
  char* obtained=0;
  char __t2283t__=0;
  char __t2284t__=0;
  uint64_t bytes_read=0;
  uint64_t prev_pos=0;
  uint64_t __t2285t__=0;
  char* __t2287t__unsafe_ptr=0;
  uint64_t __t2287t__dat__pos=0;
  uint64_t __t2287t__dat__length=0;
  char __t2287t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  exists__t591t(buf__unsafe_ptr,&__t2279t__);
  not__t28t(__t2279t__,&__t2280t__);
  if(__t2280t__){
  __t_errcode=46;
  goto __t_failure;
  }
  add__t663t(buf__unsafe_ptr,pos,&__t2281t__);
  contents=__t2281t__;
  __t_errcode=sub__t352t(buf__unsafe_size,pos,&__t2282t__);
  if(__t_errcode){
  goto __t_failure;
  }
  size=__t2282t__;
  if(f__unsafe_ptr){
  obtained=fgets(contents,size,(FILE*)f__unsafe_ptr);
  }
  exists__t591t(obtained,&__t2283t__);
  not__t28t(__t2283t__,&__t2284t__);
  if(__t2284t__){
  __t_errcode=37;
  goto __t_failure;
  }
  bytes_read=strlen(contents);
  prev_pos=pos;
  add__t175t(pos,bytes_read,&__t2285t__);
  pos=__t2285t__;
  __t_errcode=str__t977t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,bytes_read,&__t2287t__unsafe_ptr,&__t2287t__dat__pos,&__t2287t__dat__length,&__t2287t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2670t=buf__unsafe_ptr;
  *__t2671t=buf__unsafe_size;
  *__t2672t=buf__unsafe_offset;
  *__t2673t=buf__unsafe_align;
  *__t2674t=pos;
  *__t2675t=f__unsafe_ptr;
  *__t2676t=__t2287t__unsafe_ptr;
  *__t2677t=__t2287t__dat__pos;
  *__t2678t=__t2287t__dat__length;
  *__t2679t=__t2287t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2535t(char** __t2680t, uint64_t* __t2681t, uint16_t* __t2682t, uint16_t* __t2683t, uint64_t* __t2684t, char** __t2685t, uint64_t __t_anon3, char** __t2686t, uint64_t* __t2687t, uint64_t* __t2688t, char* __t2689t) {
  char* buf__unsafe_ptr=*__t2680t;
  uint64_t buf__unsafe_size=*__t2681t;
  uint16_t buf__unsafe_offset=*__t2682t;
  uint16_t buf__unsafe_align=*__t2683t;
  uint64_t pos=*__t2684t;
  char* f__unsafe_ptr=*__t2685t;
  int __t2536t=0;
  char* __t2537t__unsafe_ptr=0;
  uint64_t __t2537t__dat__pos=0;
  uint64_t __t2537t__dat__length=0;
  char __t2537t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=line__t2277t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&pos,&f__unsafe_ptr,&__t2537t__unsafe_ptr,&__t2537t__dat__pos,&__t2537t__dat__length,&__t2537t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2680t=buf__unsafe_ptr;
  *__t2681t=buf__unsafe_size;
  *__t2682t=buf__unsafe_offset;
  *__t2683t=buf__unsafe_align;
  *__t2684t=pos;
  *__t2685t=f__unsafe_ptr;
  *__t2686t=__t2537t__unsafe_ptr;
  *__t2687t=__t2537t__dat__pos;
  *__t2688t=__t2537t__dat__length;
  *__t2689t=__t2537t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int str__t983t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t endpos, char** __t2690t, uint64_t* __t2691t, uint64_t* __t2692t, char* __t2693t) {
  uint64_t __t984t__=0;
  uint64_t length=0;
  uint64_t __t985t=0;
  char __t986t__=0;
  char* __t987t__=0;
  char __t988t__value=0;
  char first=0;
  char* __t989t__unsafe_ptr=0;
  uint64_t __t989t__dat__pos=0;
  uint64_t __t989t__dat__length=0;
  char __t989t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=sub__t352t(endpos,pos,&__t984t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t984t__;
  __t985t=0;
  neq__t144t(length,__t985t,&__t986t__);
  if(__t986t__){
  __t_errcode=get__t798t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__t987t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t987t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t988t__value,__t987t__,1);
  first=__t988t__value;
  }
  __t_errcode=str__t945t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__t989t__unsafe_ptr,&__t989t__dat__pos,&__t989t__dat__length,&__t989t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2690t=__t989t__unsafe_ptr;
  *__t2691t=__t989t__dat__pos;
  *__t2692t=__t989t__dat__length;
  *__t2693t=__t989t__dat__first;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t1131t(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __t1132t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int main__t2583t() {
  char* __t2586t__unsafe_ptr=0;
  uint64_t __t2586t__dat__pos=0;
  uint64_t __t2586t__dat__length=0;
  char __t2586t__dat__first=0;
  char* __t2587t__unsafe_ptr=0;
  char* f__unsafe_ptr=0;
  uint64_t __t2589t=0;
  uint64_t __t2590t__=0;
  char* __t2591t__unsafe_ptr=0;
  uint64_t __t2591t__unsafe_size=0;
  uint16_t __t2591t__unsafe_offset=0;
  uint16_t __t2591t__unsafe_align=0;
  char __t2592t____t759t____t692t__=0;
  char* mem__unsafe_ptr=0;
  uint64_t mem__unsafe_size=0;
  uint16_t mem__unsafe_offset=0;
  uint16_t mem__unsafe_align=0;
  uint64_t __t2593t=0;
  uint64_t __t2594t=0;
  uint64_t pos=0;
  uint64_t __t2595t=0;
  char __t2596t=0;
  char* __t2597t__unsafe_ptr=0;
  uint64_t __t2597t__dat__pos=0;
  uint64_t __t2597t__dat__length=0;
  char __t2597t__dat__first=0;
  char* line__unsafe_ptr=0;
  uint64_t line__dat__pos=0;
  uint64_t line__dat__length=0;
  char line__dat__first=0;
  uint64_t __t2598t=0;
  char* __t2600t__unsafe_ptr=0;
  uint64_t __t2600t__dat__pos=0;
  uint64_t __t2600t__dat__length=0;
  char __t2600t__dat__first=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=str__t997t(__t2585t,&__t2586t__unsafe_ptr,&__t2586t__dat__pos,&__t2586t__dat__length,&__t2586t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=read__t2096t(__t2586t__unsafe_ptr,__t2586t__dat__pos,__t2586t__dat__length,__t2586t__dat__first,&__t2587t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  f__unsafe_ptr=__t2587t__unsafe_ptr;
  __t2589t=4;
  KB__t639t(__t2589t,&__t2590t__);
  __t_errcode=alloc__t753t(__t2590t__,&__t2591t__unsafe_ptr,&__t2591t__unsafe_size,&__t2591t__unsafe_offset,&__t2591t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  mem__unsafe_ptr=__t2591t__unsafe_ptr;
  mem__unsafe_size=__t2591t__unsafe_size;
  mem__unsafe_offset=__t2591t__unsafe_offset;
  mem__unsafe_align=__t2591t__unsafe_align;
  __t2593t=0;
  __t2594t=__t2593t;
  pos=__t2594t;
  __t2595t=0;
  while(1){
  __t_complain=get__t2535t(&mem__unsafe_ptr,&mem__unsafe_size,&mem__unsafe_offset,&mem__unsafe_align,&pos,&f__unsafe_ptr,__t2595t,&__t2597t__unsafe_ptr,&__t2597t__dat__pos,&__t2597t__dat__length,&__t2597t__dat__first);
  __t2596t=__t_complain;
  line__unsafe_ptr=__t2597t__unsafe_ptr;
  line__dat__pos=__t2597t__dat__pos;
  line__dat__length=__t2597t__dat__length;
  line__dat__first=__t2597t__dat__first;
  __t2596t=__t2596t==0;
  __t2595t=__t2595t+1;
  if(!__t2596t){
  break;
  }
  continue;
  }
  if(__t2587t__unsafe_ptr){
  fclose((FILE*)__t2587t__unsafe_ptr);
  __t2587t__unsafe_ptr=0;
  }
  __t2598t=0;
  __t_errcode=str__t983t(mem__unsafe_ptr,mem__unsafe_size,mem__unsafe_offset,mem__unsafe_align,__t2598t,pos,&__t2600t__unsafe_ptr,&__t2600t__dat__pos,&__t2600t__dat__length,&__t2600t__dat__first);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t1131t(__t2600t__unsafe_ptr,__t2600t__dat__pos,__t2600t__dat__length,__t2600t__dat__first);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t2591t__unsafe_ptr,&__t2592t____t759t____t692t__);
  if(__t2592t____t759t____t692t__){
  free__t661t(&__t2591t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2583t();return 0;}