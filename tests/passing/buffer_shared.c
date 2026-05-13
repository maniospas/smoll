#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp353v="\n";
static const char* __temp_all_errcodes[27] = {"noerr",
"error",
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1187v(char** __temp1204v, uint64_t* __temp1205v, uint64_t* __temp1206v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1204v=unsafe_ptr;
  *__temp1205v=unsafe_size;
  *__temp1206v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1207v) {
  int value=0;
  *__temp1207v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1208v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1208v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1209v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1209v=__temp90v__;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1210v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1210v=z;
}

static inline __attribute__((always_inline)) void eq__temp281v(uint64_t x, uint64_t y, char* __temp1211v) {
  int __temp282v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp282v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1211v=z;
}

static inline __attribute__((always_inline)) void free__temp431v(char** __temp1212v) {
  char* allocated=*__temp1212v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1212v=allocated;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp1213v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1213v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1214v) {
  *__temp1214v=to;
}

static inline __attribute__((always_inline)) int realloc__temp429v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1215v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp430v__=0;
  char* unsafe_ptr=0;
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
  __temp_errcode=7;
  goto __temp_failure;
  }
  attach_type__temp16v(new_allocated,allocated__unsafe_ptr,&__temp430v__);
  unsafe_ptr=__temp430v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1215v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp185v(uint64_t x, uint64_t y, char* __temp1216v) {
  int __temp186v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp186v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1216v=z;
}

static inline __attribute__((always_inline)) void zero__temp432v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int resize__temp472v(char** __temp1217v, uint64_t* __temp1218v, uint64_t* __temp1219v, uint64_t size, char** __temp1220v, uint64_t* __temp1221v, uint64_t* __temp1222v) {
  char* buffer__unsafe_ptr=*__temp1217v;
  uint64_t buffer__unsafe_size=*__temp1218v;
  uint64_t buffer__unsafe_align=*__temp1219v;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp481v__=0;
  uint64_t bytes=0;
  char* __temp482v__=0;
  char __temp483v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(buffer__unsafe_size,size,&__temp473v__);
  if(__temp473v__){
  goto __temp_return;
  }
  __temp474v=0;
  eq__temp281v(size,__temp474v,&__temp475v__);
  if(__temp475v__){
  __temp476v=0;
  buffer__unsafe_size=__temp476v;
  free__temp431v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp478v=0;
  eq__temp281v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp137v(buffer__unsafe_size,buffer__unsafe_align,&__temp480v__);
  prev_bytes=__temp480v__;
  buffer__unsafe_size=size;
  mul__temp137v(buffer__unsafe_align,size,&__temp481v__);
  bytes=__temp481v__;
  __temp_errcode=realloc__temp429v(buffer__unsafe_ptr,bytes,&__temp482v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp482v__;
  lt__temp185v(prev_bytes,bytes,&__temp483v__);
  if(__temp483v__){
  zero__temp432v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1217v=buffer__unsafe_ptr;
  *__temp1218v=buffer__unsafe_size;
  *__temp1219v=buffer__unsafe_align;
  *__temp1220v=buffer__unsafe_ptr;
  *__temp1221v=buffer__unsafe_size;
  *__temp1222v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp433v(char* allocated, uint64_t offset, char** __temp1223v) {
  char* element=0;
  char* __temp434v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp434v__);
  unsafe_ptr=__temp434v__;
  goto __temp_return;
  __temp_return:
  *__temp1223v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp499v(char** __temp1224v, uint64_t* __temp1225v, uint64_t* __temp1226v, uint64_t i, char** __temp1227v) {
  char* buffer__unsafe_ptr=*__temp1224v;
  uint64_t buffer__unsafe_size=*__temp1225v;
  uint64_t buffer__unsafe_align=*__temp1226v;
  char __temp500v__=0;
  uint64_t __temp501v__=0;
  char* __temp502v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(i,buffer__unsafe_size,&__temp500v__);
  if(__temp500v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp137v(i,buffer__unsafe_align,&__temp501v__);
  add__temp433v(buffer__unsafe_ptr,__temp501v__,&__temp502v__);
  unsafe_ptr=__temp502v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1224v=buffer__unsafe_ptr;
  *__temp1225v=buffer__unsafe_size;
  *__temp1226v=buffer__unsafe_align;
  *__temp1227v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp507v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1228v) {
  goto __temp_return;
  __temp_return:
  *__temp1228v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp364v(uint64_t value) {
  int __temp365v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__temp503v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1229v) {
  char __temp504v__=0;
  uint64_t __temp505v__=0;
  char* __temp506v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(i,buffer__unsafe_size,&__temp504v__);
  if(__temp504v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp137v(i,buffer__unsafe_align,&__temp505v__);
  add__temp433v(buffer__unsafe_ptr,__temp505v__,&__temp506v__);
  unsafe_ptr=__temp506v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1229v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp356v(double value) {
  int __temp357v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1186v() {
  char* __temp1189v__unsafe_ptr=0;
  uint64_t __temp1189v__unsafe_size=0;
  uint64_t __temp1189v__unsafe_align=0;
  char* __temp1190v__unsafe_ptr=0;
  uint64_t __temp1190v__unsafe_size=0;
  uint64_t __temp1190v__unsafe_align=0;
  char* buf1__unsafe_ptr=0;
  uint64_t buf1__unsafe_size=0;
  uint64_t buf1__unsafe_align=0;
  uint64_t __temp1191v=0;
  char* __temp1192v__unsafe_ptr=0;
  uint64_t __temp1192v__unsafe_size=0;
  uint64_t __temp1192v__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  uint64_t buf2__unsafe_size=0;
  uint64_t buf2__unsafe_align=0;
  uint64_t __temp1193v=0;
  char* __temp1194v__=0;
  double __temp1195v=0;
  uint64_t __temp1196v__=0;
  uint64_t __temp1198v__=0;
  uint64_t __temp1200v=0;
  char* __temp1201v__=0;
  double __temp1202v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1187v(&__temp1189v__unsafe_ptr,&__temp1189v__unsafe_size,&__temp1189v__unsafe_align);
  __temp1190v__unsafe_ptr=__temp1189v__unsafe_ptr;
  __temp1190v__unsafe_size=__temp1189v__unsafe_size;
  __temp1190v__unsafe_align=__temp1189v__unsafe_align;
  buf1__unsafe_ptr=__temp1190v__unsafe_ptr;
  buf1__unsafe_size=__temp1190v__unsafe_size;
  buf1__unsafe_align=__temp1190v__unsafe_align;
  __temp1191v=10;
  __temp_errcode=resize__temp472v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,__temp1191v,&__temp1192v__unsafe_ptr,&__temp1192v__unsafe_size,&__temp1192v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf2__unsafe_ptr=buf1__unsafe_ptr;
  buf2__unsafe_size=buf1__unsafe_size;
  buf2__unsafe_align=buf1__unsafe_align;
  __temp1193v=0;
  __temp_errcode=mutget__temp499v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_align,__temp1193v,&__temp1194v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1195v=1.0;
  if(!__temp1194v__){
  goto __temp_failure;
  }
  memcpy(__temp1194v__,&__temp1195v,8);
  len__temp507v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,&__temp1196v__);
  print__temp364v(__temp1196v__);
  len__temp507v(buf2__unsafe_ptr,buf2__unsafe_size,buf2__unsafe_align,&__temp1198v__);
  print__temp364v(__temp1198v__);
  __temp1200v=0;
  __temp_errcode=get__temp503v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,__temp1200v,&__temp1201v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1201v__){
  goto __temp_failure;
  }
  memcpy(&__temp1202v__z,__temp1201v__,8);
  print__temp356v(__temp1202v__z);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1186v();return 0;}