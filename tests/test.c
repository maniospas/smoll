#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;

static const char* __temp_all_errcodes[31] = {"noerr",
"error",
"null pointer",
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
"can only define strings on contiguous buffers",
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1223v(char** __temp1231v, uint64_t* __temp1232v, uint64_t* __temp1233v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1231v=unsafe_ptr;
  *__temp1232v=unsafe_size;
  *__temp1233v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1234v) {
  goto __temp_return;
  __temp_return:
  *__temp1234v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1235v) {
  int value=0;
  *__temp1235v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1236v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1236v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1237v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1237v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1238v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1238v=z;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1239v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1239v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1240v) {
  char* allocated=*__temp1240v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1240v=allocated;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1241v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1241v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1242v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1242v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1243v) {
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
  *__temp1243v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1244v, uint64_t* __temp1245v, uint64_t* __temp1246v, uint64_t size, char** __temp1247v, uint64_t* __temp1248v, uint64_t* __temp1249v) {
  char* buffer__unsafe_ptr=*__temp1244v;
  uint64_t buffer__unsafe_size=*__temp1245v;
  uint64_t buffer__unsafe_align=*__temp1246v;
  int __temp468v=0;
  char __temp469v__=0;
  uint64_t __temp470v=0;
  char __temp472v__=0;
  uint64_t __temp473v=0;
  char __temp474v__=0;
  uint64_t __temp475v=0;
  uint64_t __temp476v__=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t bytes=0;
  char* __temp481v__=0;
  uint64_t __temp482v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  neq__temp142v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  mul__temp194v(buffer__unsafe_align,size,&__temp476v__);
  zero__temp462v(buffer__unsafe_ptr,__temp475v,__temp476v__);
  }
  goto __temp_return;
  }
  __temp478v=0;
  neq__temp142v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp194v(buffer__unsafe_align,size,&__temp480v__);
  bytes=__temp480v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp481v__;
  __temp482v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp482v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp469v__);
  if(__temp469v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1244v=buffer__unsafe_ptr;
  *__temp1245v=buffer__unsafe_size;
  *__temp1246v=buffer__unsafe_align;
  *__temp1247v=buffer__unsafe_ptr;
  *__temp1248v=buffer__unsafe_size;
  *__temp1249v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int list__temp545v(char** __temp1250v, uint64_t* __temp1251v, uint64_t* __temp1252v, char** __temp1253v, uint64_t* __temp1254v, uint64_t* __temp1255v, uint64_t* __temp1256v) {
  char* buffer__unsafe_ptr=*__temp1250v;
  uint64_t buffer__unsafe_size=*__temp1251v;
  uint64_t buffer__unsafe_align=*__temp1252v;
  uint64_t __temp546v=0;
  uint64_t __temp547v__=0;
  char __temp548v__=0;
  uint64_t __temp549v=0;
  char* __temp550v__unsafe_ptr=0;
  uint64_t __temp550v__unsafe_size=0;
  uint64_t __temp550v__unsafe_align=0;
  char __temp551v____temp469v__=0;
  uint64_t __temp552v__=0;
  uint64_t __temp553v=0;
  uint64_t length=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp546v=0;
  len__temp537v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp547v__);
  eq__temp118v(__temp546v,__temp547v__,&__temp548v__);
  if(__temp548v__){
  __temp549v=1;
  __temp_errcode=alloc__temp467v(&buffer__unsafe_ptr,&buffer__unsafe_size,&buffer__unsafe_align,__temp549v,&__temp550v__unsafe_ptr,&__temp550v__unsafe_size,&__temp550v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp550v__unsafe_ptr;
  buffer__unsafe_size=__temp550v__unsafe_size;
  buffer__unsafe_align=__temp550v__unsafe_align;
  }
  len__temp537v(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_align,&__temp552v__);
  __temp553v=__temp552v__;
  length=__temp553v;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp551v____temp469v__);
  if(__temp551v____temp469v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1250v=buffer__unsafe_ptr;
  *__temp1251v=buffer__unsafe_size;
  *__temp1252v=buffer__unsafe_align;
  *__temp1253v=buffer__unsafe_ptr;
  *__temp1254v=buffer__unsafe_size;
  *__temp1255v=buffer__unsafe_align;
  *__temp1256v=length;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1257v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1257v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1258v) {
  *__temp1258v=to;
}

static inline __attribute__((always_inline)) int realloc__temp459v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1259v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp460v__=0;
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
  attach_type__temp20v(new_allocated,allocated__unsafe_ptr,&__temp460v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1259v=__temp460v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1260v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1260v=z;
}

static inline __attribute__((always_inline)) int resize__temp502v(char** __temp1261v, uint64_t* __temp1262v, uint64_t* __temp1263v, uint64_t size, char** __temp1264v, uint64_t* __temp1265v, uint64_t* __temp1266v) {
  char* buffer__unsafe_ptr=*__temp1261v;
  uint64_t buffer__unsafe_size=*__temp1262v;
  uint64_t buffer__unsafe_align=*__temp1263v;
  char __temp503v__=0;
  uint64_t __temp504v=0;
  char __temp505v__=0;
  uint64_t __temp506v=0;
  uint64_t __temp508v=0;
  char __temp509v__=0;
  uint64_t __temp510v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp511v__=0;
  uint64_t bytes=0;
  char* __temp512v__=0;
  char __temp513v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(buffer__unsafe_size,size,&__temp503v__);
  if(__temp503v__){
  goto __temp_return;
  }
  __temp504v=0;
  eq__temp118v(size,__temp504v,&__temp505v__);
  if(__temp505v__){
  __temp506v=0;
  buffer__unsafe_size=__temp506v;
  free__temp461v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp508v=0;
  eq__temp118v(buffer__unsafe_size,__temp508v,&__temp509v__);
  if(__temp509v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  mul__temp194v(buffer__unsafe_size,buffer__unsafe_align,&__temp510v__);
  prev_bytes=__temp510v__;
  buffer__unsafe_size=size;
  mul__temp194v(buffer__unsafe_align,size,&__temp511v__);
  bytes=__temp511v__;
  __temp_errcode=realloc__temp459v(buffer__unsafe_ptr,bytes,&__temp512v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp512v__;
  lt__temp247v(prev_bytes,bytes,&__temp513v__);
  if(__temp513v__){
  zero__temp462v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1261v=buffer__unsafe_ptr;
  *__temp1262v=buffer__unsafe_size;
  *__temp1263v=buffer__unsafe_align;
  *__temp1264v=buffer__unsafe_ptr;
  *__temp1265v=buffer__unsafe_size;
  *__temp1266v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1222v() {
  char* __temp1225v__unsafe_ptr=0;
  uint64_t __temp1225v__unsafe_size=0;
  uint64_t __temp1225v__unsafe_align=0;
  char* __temp1226v__unsafe_ptr=0;
  uint64_t __temp1226v__unsafe_size=0;
  uint64_t __temp1226v__unsafe_align=0;
  char* __temp1227v__buffer__unsafe_ptr=0;
  uint64_t __temp1227v__buffer__unsafe_size=0;
  uint64_t __temp1227v__buffer__unsafe_align=0;
  uint64_t __temp1227v__length=0;
  char __temp1228v____temp551v____temp469v__=0;
  char* li__buffer__unsafe_ptr=0;
  uint64_t li__buffer__unsafe_size=0;
  uint64_t li__buffer__unsafe_align=0;
  uint64_t li__length=0;
  uint64_t __temp1229v=0;
  char* __temp1230v__unsafe_ptr=0;
  uint64_t __temp1230v__unsafe_size=0;
  uint64_t __temp1230v__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1223v(&__temp1225v__unsafe_ptr,&__temp1225v__unsafe_size,&__temp1225v__unsafe_align);
  __temp1226v__unsafe_ptr=__temp1225v__unsafe_ptr;
  __temp1226v__unsafe_size=__temp1225v__unsafe_size;
  __temp1226v__unsafe_align=__temp1225v__unsafe_align;
  __temp_errcode=list__temp545v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,&__temp1227v__buffer__unsafe_ptr,&__temp1227v__buffer__unsafe_size,&__temp1227v__buffer__unsafe_align,&__temp1227v__length);
  if(__temp_errcode){
  goto __temp_failure;
  }
  li__buffer__unsafe_ptr=__temp1227v__buffer__unsafe_ptr;
  li__buffer__unsafe_size=__temp1227v__buffer__unsafe_size;
  li__buffer__unsafe_align=__temp1227v__buffer__unsafe_align;
  li__length=__temp1227v__length;
  __temp1229v=2;
  __temp_errcode=resize__temp502v(&li__buffer__unsafe_ptr,&li__buffer__unsafe_size,&li__buffer__unsafe_align,__temp1229v,&__temp1230v__unsafe_ptr,&__temp1230v__unsafe_size,&__temp1230v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp412v(__temp1227v__buffer__unsafe_ptr,&__temp1228v____temp551v____temp469v__);
  if(__temp1228v____temp551v____temp469v__){
  __temp1227v__buffer__unsafe_size=0;
  __temp1227v__buffer__unsafe_size=__temp1227v__buffer__unsafe_size;
  free__temp461v(&__temp1227v__buffer__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1222v();return 0;}