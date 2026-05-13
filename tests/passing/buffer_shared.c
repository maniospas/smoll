#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp364v="\n";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1220v(char** __temp1240v, uint64_t* __temp1241v, uint64_t* __temp1242v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1240v=unsafe_ptr;
  *__temp1241v=unsafe_size;
  *__temp1242v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp411v(char* x, char* __temp1243v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1243v=z;
}

static inline __attribute__((always_inline)) void free__temp460v(char** __temp1244v) {
  char* allocated=*__temp1244v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1244v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1245v) {
  int value=0;
  *__temp1245v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1246v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1246v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1247v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1247v=__temp94v__;
}

static inline __attribute__((always_inline)) void eq__temp117v(uint64_t x, uint64_t y, char* __temp1248v) {
  int __temp118v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp118v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1248v=z;
}

static inline __attribute__((always_inline)) void neq__temp141v(uint64_t x, uint64_t y, char* __temp1249v) {
  int __temp142v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp142v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1249v=z;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp1250v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1250v=z;
}

static inline __attribute__((always_inline)) void zero__temp461v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp457v(uint64_t bytes, char** __temp1251v) {
  char* unsafe_ptr=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=malloc(bytes);
  failed=unsafe_ptr==0;
  if(failed){
  __temp_errcode=8;
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1251v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp466v(char** __temp1252v, uint64_t* __temp1253v, uint64_t* __temp1254v, uint64_t size, char** __temp1255v, uint64_t* __temp1256v, uint64_t* __temp1257v) {
  char* buffer__unsafe_ptr=*__temp1252v;
  uint64_t buffer__unsafe_size=*__temp1253v;
  uint64_t buffer__unsafe_align=*__temp1254v;
  int __temp467v=0;
  char __temp468v__=0;
  uint64_t __temp469v=0;
  char __temp471v__=0;
  uint64_t __temp472v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  uint64_t __temp475v__=0;
  uint64_t __temp477v=0;
  char __temp478v__=0;
  uint64_t __temp479v__=0;
  uint64_t bytes=0;
  char* __temp480v__=0;
  uint64_t __temp481v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp117v(buffer__unsafe_size,size,&__temp471v__);
  if(__temp471v__){
  __temp472v=0;
  neq__temp141v(size,__temp472v,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  mul__temp193v(buffer__unsafe_align,size,&__temp475v__);
  zero__temp461v(buffer__unsafe_ptr,__temp474v,__temp475v__);
  }
  goto __temp_return;
  }
  __temp477v=0;
  neq__temp141v(buffer__unsafe_size,__temp477v,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_align,size,&__temp479v__);
  bytes=__temp479v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp457v(bytes,&__temp480v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp480v__;
  __temp481v=0;
  zero__temp461v(buffer__unsafe_ptr,__temp481v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(buffer__unsafe_ptr,&__temp468v__);
  if(__temp468v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp460v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1252v=buffer__unsafe_ptr;
  *__temp1253v=buffer__unsafe_size;
  *__temp1254v=buffer__unsafe_align;
  *__temp1255v=buffer__unsafe_ptr;
  *__temp1256v=buffer__unsafe_size;
  *__temp1257v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1258v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1258v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp19v(char* to, char* from, char** __temp1259v) {
  *__temp1259v=to;
}

static inline __attribute__((always_inline)) int realloc__temp458v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1260v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp459v__=0;
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
  attach_type__temp19v(new_allocated,allocated__unsafe_ptr,&__temp459v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1260v=__temp459v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp246v(uint64_t x, uint64_t y, char* __temp1261v) {
  int __temp247v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp247v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1261v=z;
}

static inline __attribute__((always_inline)) int resize__temp501v(char** __temp1262v, uint64_t* __temp1263v, uint64_t* __temp1264v, uint64_t size, char** __temp1265v, uint64_t* __temp1266v, uint64_t* __temp1267v) {
  char* buffer__unsafe_ptr=*__temp1262v;
  uint64_t buffer__unsafe_size=*__temp1263v;
  uint64_t buffer__unsafe_align=*__temp1264v;
  char __temp502v__=0;
  uint64_t __temp503v=0;
  char __temp504v__=0;
  uint64_t __temp505v=0;
  uint64_t __temp507v=0;
  char __temp508v__=0;
  uint64_t __temp509v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp510v__=0;
  uint64_t bytes=0;
  char* __temp511v__=0;
  char __temp512v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(buffer__unsafe_size,size,&__temp502v__);
  if(__temp502v__){
  goto __temp_return;
  }
  __temp503v=0;
  eq__temp117v(size,__temp503v,&__temp504v__);
  if(__temp504v__){
  __temp505v=0;
  buffer__unsafe_size=__temp505v;
  free__temp460v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp507v=0;
  eq__temp117v(buffer__unsafe_size,__temp507v,&__temp508v__);
  if(__temp508v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_size,buffer__unsafe_align,&__temp509v__);
  prev_bytes=__temp509v__;
  buffer__unsafe_size=size;
  mul__temp193v(buffer__unsafe_align,size,&__temp510v__);
  bytes=__temp510v__;
  __temp_errcode=realloc__temp458v(buffer__unsafe_ptr,bytes,&__temp511v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp511v__;
  lt__temp246v(prev_bytes,bytes,&__temp512v__);
  if(__temp512v__){
  zero__temp461v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1262v=buffer__unsafe_ptr;
  *__temp1263v=buffer__unsafe_size;
  *__temp1264v=buffer__unsafe_align;
  *__temp1265v=buffer__unsafe_ptr;
  *__temp1266v=buffer__unsafe_size;
  *__temp1267v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp462v(char* allocated, uint64_t offset, char** __temp1268v) {
  char* element=0;
  char* __temp463v__=0;
  element=allocated+offset;
  attach_type__temp19v(element,allocated,&__temp463v__);
  goto __temp_return;
  __temp_return:
  *__temp1268v=__temp463v__;
}

static inline __attribute__((always_inline)) int mutget__temp528v(char** __temp1269v, uint64_t* __temp1270v, uint64_t* __temp1271v, uint64_t i, char** __temp1272v) {
  char* buffer__unsafe_ptr=*__temp1269v;
  uint64_t buffer__unsafe_size=*__temp1270v;
  uint64_t buffer__unsafe_align=*__temp1271v;
  char __temp529v__=0;
  uint64_t __temp530v__=0;
  char* __temp531v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp529v__);
  if(__temp529v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp530v__);
  add__temp462v(buffer__unsafe_ptr,__temp530v__,&__temp531v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1269v=buffer__unsafe_ptr;
  *__temp1270v=buffer__unsafe_size;
  *__temp1271v=buffer__unsafe_align;
  *__temp1272v=__temp531v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp536v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1273v) {
  goto __temp_return;
  __temp_return:
  *__temp1273v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp375v(uint64_t value) {
  int __temp376v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__temp532v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1274v) {
  char __temp533v__=0;
  uint64_t __temp534v__=0;
  char* __temp535v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp533v__);
  if(__temp533v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp534v__);
  add__temp462v(buffer__unsafe_ptr,__temp534v__,&__temp535v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1274v=__temp535v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp367v(double value) {
  int __temp368v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1219v() {
  char* __temp1222v__unsafe_ptr=0;
  uint64_t __temp1222v__unsafe_size=0;
  uint64_t __temp1222v__unsafe_align=0;
  char* __temp1223v__unsafe_ptr=0;
  uint64_t __temp1223v__unsafe_size=0;
  uint64_t __temp1223v__unsafe_align=0;
  char* buf1__unsafe_ptr=0;
  uint64_t buf1__unsafe_size=0;
  uint64_t buf1__unsafe_align=0;
  uint64_t __temp1224v=0;
  char* __temp1225v__unsafe_ptr=0;
  uint64_t __temp1225v__unsafe_size=0;
  uint64_t __temp1225v__unsafe_align=0;
  char __temp1226v____temp468v__=0;
  uint64_t __temp1227v=0;
  char* __temp1228v__unsafe_ptr=0;
  uint64_t __temp1228v__unsafe_size=0;
  uint64_t __temp1228v__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  uint64_t buf2__unsafe_size=0;
  uint64_t buf2__unsafe_align=0;
  uint64_t __temp1229v=0;
  char* __temp1230v__=0;
  double __temp1231v=0;
  uint64_t __temp1232v__=0;
  uint64_t __temp1234v__=0;
  uint64_t __temp1236v=0;
  char* __temp1237v__=0;
  double __temp1238v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1220v(&__temp1222v__unsafe_ptr,&__temp1222v__unsafe_size,&__temp1222v__unsafe_align);
  __temp1223v__unsafe_ptr=__temp1222v__unsafe_ptr;
  __temp1223v__unsafe_size=__temp1222v__unsafe_size;
  __temp1223v__unsafe_align=__temp1222v__unsafe_align;
  buf1__unsafe_ptr=__temp1223v__unsafe_ptr;
  buf1__unsafe_size=__temp1223v__unsafe_size;
  buf1__unsafe_align=__temp1223v__unsafe_align;
  __temp1224v=20;
  __temp_errcode=alloc__temp466v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,__temp1224v,&__temp1225v__unsafe_ptr,&__temp1225v__unsafe_size,&__temp1225v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1227v=10;
  __temp_errcode=resize__temp501v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,__temp1227v,&__temp1228v__unsafe_ptr,&__temp1228v__unsafe_size,&__temp1228v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf2__unsafe_ptr=buf1__unsafe_ptr;
  buf2__unsafe_size=buf1__unsafe_size;
  buf2__unsafe_align=buf1__unsafe_align;
  __temp1229v=0;
  __temp_errcode=mutget__temp528v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_align,__temp1229v,&__temp1230v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1231v=1.0;
  if(!__temp1230v__){
  goto __temp_failure;
  }
  memcpy(__temp1230v__,&__temp1231v,8);
  len__temp536v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,&__temp1232v__);
  print__temp375v(__temp1232v__);
  len__temp536v(buf2__unsafe_ptr,buf2__unsafe_size,buf2__unsafe_align,&__temp1234v__);
  print__temp375v(__temp1234v__);
  __temp1236v=0;
  __temp_errcode=get__temp532v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,__temp1236v,&__temp1237v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(&__temp1238v__z,__temp1237v__,8);
  print__temp367v(__temp1238v__z);
  
  __temp_failure:exists__temp411v(__temp1225v__unsafe_ptr,&__temp1226v____temp468v__);
  if(__temp1226v____temp468v__){
  __temp1225v__unsafe_size=0;
  __temp1225v__unsafe_size=__temp1225v__unsafe_size;
  free__temp460v(&__temp1225v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1219v();return 0;}