#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp359v="\n";
static const char* __temp_all_errcodes[29] = {"noerr",
"error",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
"user input was not a float",
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1217v(char** __temp1234v, uint64_t* __temp1235v, uint64_t* __temp1236v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1234v=unsafe_ptr;
  *__temp1235v=unsafe_size;
  *__temp1236v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1237v) {
  int value=0;
  *__temp1237v=value;
}

static inline __attribute__((always_inline)) void not__temp31v(int __temp_anon0, int* __temp1238v) {
  int __temp32v__=0;
  false__temp10v(&__temp32v__);
  goto __temp_return;
  __temp_return:
  *__temp1238v=__temp32v__;
}

static inline __attribute__((always_inline)) void is_different__temp89v(uint64_t x, uint64_t y, int* __temp1239v) {
  int __temp90v=0;
  int __temp91v__=0;
  not__temp31v(__temp90v,&__temp91v__);
  goto __temp_return;
  __temp_return:
  *__temp1239v=__temp91v__;
}

static inline __attribute__((always_inline)) void ge__temp315v(uint64_t x, uint64_t y, char* __temp1240v) {
  int __temp316v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp316v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1240v=z;
}

static inline __attribute__((always_inline)) void eq__temp114v(uint64_t x, uint64_t y, char* __temp1241v) {
  int __temp115v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp115v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1241v=z;
}

static inline __attribute__((always_inline)) void free__temp457v(char** __temp1242v) {
  char* allocated=*__temp1242v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1242v=allocated;
}

static inline __attribute__((always_inline)) void mul__temp190v(uint64_t x, uint64_t y, uint64_t* __temp1243v) {
  int __temp191v__=0;
  uint64_t z=0;
  is_different__temp89v(x,y,&__temp191v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1243v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1244v) {
  *__temp1244v=to;
}

static inline __attribute__((always_inline)) int realloc__temp455v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1245v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp456v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(allocated__unsafe_ptr){
  new_allocated=realloc(allocated__unsafe_ptr,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  failed=new_allocated==0;
  if(failed){
  __temp_errcode=9;
  goto __temp_failure;
  }
  attach_type__temp16v(new_allocated,allocated__unsafe_ptr,&__temp456v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1245v=__temp456v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp243v(uint64_t x, uint64_t y, char* __temp1246v) {
  int __temp244v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp244v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1246v=z;
}

static inline __attribute__((always_inline)) void zero__temp458v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int resize__temp498v(char** __temp1247v, uint64_t* __temp1248v, uint64_t* __temp1249v, uint64_t size, char** __temp1250v, uint64_t* __temp1251v, uint64_t* __temp1252v) {
  char* buffer__unsafe_ptr=*__temp1247v;
  uint64_t buffer__unsafe_size=*__temp1248v;
  uint64_t buffer__unsafe_align=*__temp1249v;
  char __temp499v__=0;
  uint64_t __temp500v=0;
  char __temp501v__=0;
  uint64_t __temp502v=0;
  uint64_t __temp504v=0;
  char __temp505v__=0;
  uint64_t __temp506v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp507v__=0;
  uint64_t bytes=0;
  char* __temp508v__=0;
  char __temp509v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp315v(buffer__unsafe_size,size,&__temp499v__);
  if(__temp499v__){
  goto __temp_return;
  }
  __temp500v=0;
  eq__temp114v(size,__temp500v,&__temp501v__);
  if(__temp501v__){
  __temp502v=0;
  buffer__unsafe_size=__temp502v;
  free__temp457v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp504v=0;
  eq__temp114v(buffer__unsafe_size,__temp504v,&__temp505v__);
  if(__temp505v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  mul__temp190v(buffer__unsafe_size,buffer__unsafe_align,&__temp506v__);
  prev_bytes=__temp506v__;
  buffer__unsafe_size=size;
  mul__temp190v(buffer__unsafe_align,size,&__temp507v__);
  bytes=__temp507v__;
  __temp_errcode=realloc__temp455v(buffer__unsafe_ptr,bytes,&__temp508v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp508v__;
  lt__temp243v(prev_bytes,bytes,&__temp509v__);
  if(__temp509v__){
  zero__temp458v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1247v=buffer__unsafe_ptr;
  *__temp1248v=buffer__unsafe_size;
  *__temp1249v=buffer__unsafe_align;
  *__temp1250v=buffer__unsafe_ptr;
  *__temp1251v=buffer__unsafe_size;
  *__temp1252v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp459v(char* allocated, uint64_t offset, char** __temp1253v) {
  char* element=0;
  char* __temp460v__=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp460v__);
  goto __temp_return;
  __temp_return:
  *__temp1253v=__temp460v__;
}

static inline __attribute__((always_inline)) int mutget__temp525v(char** __temp1254v, uint64_t* __temp1255v, uint64_t* __temp1256v, uint64_t i, char** __temp1257v) {
  char* buffer__unsafe_ptr=*__temp1254v;
  uint64_t buffer__unsafe_size=*__temp1255v;
  uint64_t buffer__unsafe_align=*__temp1256v;
  char __temp526v__=0;
  uint64_t __temp527v__=0;
  char* __temp528v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp315v(i,buffer__unsafe_size,&__temp526v__);
  if(__temp526v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp190v(i,buffer__unsafe_align,&__temp527v__);
  add__temp459v(buffer__unsafe_ptr,__temp527v__,&__temp528v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1254v=buffer__unsafe_ptr;
  *__temp1255v=buffer__unsafe_size;
  *__temp1256v=buffer__unsafe_align;
  *__temp1257v=__temp528v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1258v) {
  goto __temp_return;
  __temp_return:
  *__temp1258v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp370v(uint64_t value) {
  int __temp371v=0;
  const char* endl=0;
  endl=__temp359v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__temp529v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1259v) {
  char __temp530v__=0;
  uint64_t __temp531v__=0;
  char* __temp532v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp315v(i,buffer__unsafe_size,&__temp530v__);
  if(__temp530v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp190v(i,buffer__unsafe_align,&__temp531v__);
  add__temp459v(buffer__unsafe_ptr,__temp531v__,&__temp532v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1259v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp362v(double value) {
  int __temp363v=0;
  const char* endl=0;
  endl=__temp359v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1216v() {
  char* __temp1219v__unsafe_ptr=0;
  uint64_t __temp1219v__unsafe_size=0;
  uint64_t __temp1219v__unsafe_align=0;
  char* __temp1220v__unsafe_ptr=0;
  uint64_t __temp1220v__unsafe_size=0;
  uint64_t __temp1220v__unsafe_align=0;
  char* buf1__unsafe_ptr=0;
  uint64_t buf1__unsafe_size=0;
  uint64_t buf1__unsafe_align=0;
  uint64_t __temp1221v=0;
  char* __temp1222v__unsafe_ptr=0;
  uint64_t __temp1222v__unsafe_size=0;
  uint64_t __temp1222v__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  uint64_t buf2__unsafe_size=0;
  uint64_t buf2__unsafe_align=0;
  uint64_t __temp1223v=0;
  char* __temp1224v__=0;
  double __temp1225v=0;
  uint64_t __temp1226v__=0;
  uint64_t __temp1228v__=0;
  uint64_t __temp1230v=0;
  char* __temp1231v__=0;
  double __temp1232v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1217v(&__temp1219v__unsafe_ptr,&__temp1219v__unsafe_size,&__temp1219v__unsafe_align);
  __temp1220v__unsafe_ptr=__temp1219v__unsafe_ptr;
  __temp1220v__unsafe_size=__temp1219v__unsafe_size;
  __temp1220v__unsafe_align=__temp1219v__unsafe_align;
  buf1__unsafe_ptr=__temp1220v__unsafe_ptr;
  buf1__unsafe_size=__temp1220v__unsafe_size;
  buf1__unsafe_align=__temp1220v__unsafe_align;
  __temp1221v=10;
  __temp_errcode=resize__temp498v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,__temp1221v,&__temp1222v__unsafe_ptr,&__temp1222v__unsafe_size,&__temp1222v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf2__unsafe_ptr=buf1__unsafe_ptr;
  buf2__unsafe_size=buf1__unsafe_size;
  buf2__unsafe_align=buf1__unsafe_align;
  __temp1223v=0;
  __temp_errcode=mutget__temp525v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_align,__temp1223v,&__temp1224v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1225v=1.0;
  if(!__temp1224v__){
  goto __temp_failure;
  }
  memcpy(__temp1224v__,&__temp1225v,8);
  len__temp533v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,&__temp1226v__);
  print__temp370v(__temp1226v__);
  len__temp533v(buf2__unsafe_ptr,buf2__unsafe_size,buf2__unsafe_align,&__temp1228v__);
  print__temp370v(__temp1228v__);
  __temp1230v=0;
  __temp_errcode=get__temp529v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,__temp1230v,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(&__temp1232v__z,__temp1231v__,8);
  print__temp362v(__temp1232v__z);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1216v();return 0;}