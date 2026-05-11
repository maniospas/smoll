#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
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
"character copy does not fit on buffer",
"cannot extend the string's left side outside its right range",
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1183v(char** __temp1200v, uint64_t* __temp1201v, uint64_t* __temp1202v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1200v=unsafe_ptr;
  *__temp1201v=unsafe_size;
  *__temp1202v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1203v) {
  int value=0;
  *__temp1203v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1204v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1204v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1205v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1205v=__temp87v__;
}

static inline __attribute__((always_inline)) void ge__temp254v(uint64_t x, uint64_t y, uint8_t* __temp1206v) {
  int __temp255v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1206v=z;
}

static inline __attribute__((always_inline)) void eq__temp278v(uint64_t x, uint64_t y, uint8_t* __temp1207v) {
  int __temp279v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1207v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1208v) {
  char* allocated=*__temp1208v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1208v=allocated;
}

static inline __attribute__((always_inline)) void mul__temp134v(uint64_t x, uint64_t y, uint64_t* __temp1209v) {
  int __temp135v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1209v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1210v) {
  *__temp1210v=to;
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1211v) {
  char* new_allocated=0;
  uint8_t failed=0;
  char* __temp427v__=0;
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
  attach_type__temp13v(new_allocated,allocated__unsafe_ptr,&__temp427v__);
  unsafe_ptr=__temp427v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1211v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(uint64_t x, uint64_t y, uint8_t* __temp1212v) {
  int __temp183v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1212v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int resize__temp469v(char** __temp1213v, uint64_t* __temp1214v, uint64_t* __temp1215v, uint64_t size, char** __temp1216v, uint64_t* __temp1217v, uint64_t* __temp1218v) {
  char* buffer__unsafe_ptr=*__temp1213v;
  uint64_t buffer__unsafe_size=*__temp1214v;
  uint64_t buffer__unsafe_align=*__temp1215v;
  uint8_t __temp470v__=0;
  uint64_t __temp471v=0;
  uint8_t __temp472v__=0;
  uint64_t __temp473v=0;
  uint64_t __temp475v=0;
  uint8_t __temp476v__=0;
  uint64_t __temp477v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp478v__=0;
  uint64_t bytes=0;
  char* __temp479v__=0;
  uint8_t __temp480v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(buffer__unsafe_size,size,&__temp470v__);
  if(__temp470v__){
  goto __temp_return;
  }
  __temp471v=0;
  eq__temp278v(size,__temp471v,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  buffer__unsafe_size=__temp473v;
  free__temp428v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp475v=0;
  eq__temp278v(buffer__unsafe_size,__temp475v,&__temp476v__);
  if(__temp476v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp477v__);
  prev_bytes=__temp477v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp478v__);
  bytes=__temp478v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp479v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp479v__;
  lt__temp182v(prev_bytes,bytes,&__temp480v__);
  if(__temp480v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1213v=buffer__unsafe_ptr;
  *__temp1214v=buffer__unsafe_size;
  *__temp1215v=buffer__unsafe_align;
  *__temp1216v=buffer__unsafe_ptr;
  *__temp1217v=buffer__unsafe_size;
  *__temp1218v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, uint64_t offset, char** __temp1219v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1219v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp496v(char** __temp1220v, uint64_t* __temp1221v, uint64_t* __temp1222v, uint64_t i, char** __temp1223v) {
  char* buffer__unsafe_ptr=*__temp1220v;
  uint64_t buffer__unsafe_size=*__temp1221v;
  uint64_t buffer__unsafe_align=*__temp1222v;
  uint8_t __temp497v__=0;
  uint64_t __temp498v__=0;
  char* __temp499v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp497v__);
  if(__temp497v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp498v__);
  add__temp430v(buffer__unsafe_ptr,__temp498v__,&__temp499v__);
  unsafe_ptr=__temp499v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1220v=buffer__unsafe_ptr;
  *__temp1221v=buffer__unsafe_size;
  *__temp1222v=buffer__unsafe_align;
  *__temp1223v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp504v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1224v) {
  goto __temp_return;
  __temp_return:
  *__temp1224v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp361v(uint64_t value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__temp500v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1225v) {
  uint8_t __temp501v__=0;
  uint64_t __temp502v__=0;
  char* __temp503v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp501v__);
  if(__temp501v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp502v__);
  add__temp430v(buffer__unsafe_ptr,__temp502v__,&__temp503v__);
  unsafe_ptr=__temp503v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1225v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  int __temp354v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1182v() {
  char* __temp1185v__unsafe_ptr=0;
  uint64_t __temp1185v__unsafe_size=0;
  uint64_t __temp1185v__unsafe_align=0;
  char* __temp1186v__unsafe_ptr=0;
  uint64_t __temp1186v__unsafe_size=0;
  uint64_t __temp1186v__unsafe_align=0;
  char* buf1__unsafe_ptr=0;
  uint64_t buf1__unsafe_size=0;
  uint64_t buf1__unsafe_align=0;
  uint64_t __temp1187v=0;
  char* __temp1188v__unsafe_ptr=0;
  uint64_t __temp1188v__unsafe_size=0;
  uint64_t __temp1188v__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  uint64_t buf2__unsafe_size=0;
  uint64_t buf2__unsafe_align=0;
  uint64_t __temp1189v=0;
  char* __temp1190v__=0;
  double __temp1191v=0;
  uint64_t __temp1192v__=0;
  uint64_t __temp1194v__=0;
  uint64_t __temp1196v=0;
  char* __temp1197v__=0;
  double __temp1198v__value=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1183v(&__temp1185v__unsafe_ptr,&__temp1185v__unsafe_size,&__temp1185v__unsafe_align);
  __temp1186v__unsafe_ptr=__temp1185v__unsafe_ptr;
  __temp1186v__unsafe_size=__temp1185v__unsafe_size;
  __temp1186v__unsafe_align=__temp1185v__unsafe_align;
  buf1__unsafe_ptr=__temp1186v__unsafe_ptr;
  buf1__unsafe_size=__temp1186v__unsafe_size;
  buf1__unsafe_align=__temp1186v__unsafe_align;
  __temp1187v=10;
  __temp_errcode=resize__temp469v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,__temp1187v,&__temp1188v__unsafe_ptr,&__temp1188v__unsafe_size,&__temp1188v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf2__unsafe_ptr=buf1__unsafe_ptr;
  buf2__unsafe_size=buf1__unsafe_size;
  buf2__unsafe_align=buf1__unsafe_align;
  __temp1189v=0;
  __temp_errcode=mutget__temp496v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_align,__temp1189v,&__temp1190v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1191v=1.0;
  if(!__temp1190v__){
  goto __temp_failure;
  }
  memcpy(__temp1190v__,&__temp1191v,8);
  len__temp504v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,&__temp1192v__);
  print__temp361v(__temp1192v__);
  len__temp504v(buf2__unsafe_ptr,buf2__unsafe_size,buf2__unsafe_align,&__temp1194v__);
  print__temp361v(__temp1194v__);
  __temp1196v=0;
  __temp_errcode=get__temp500v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,__temp1196v,&__temp1197v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1197v__){
  goto __temp_failure;
  }
  memcpy(&__temp1198v__value,__temp1197v__,8);
  print__temp353v(__temp1198v__value);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1182v();return 0;}