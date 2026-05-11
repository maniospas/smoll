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
"cannot resize an unallocated buffer",
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1188v(char** __temp1205v, unsigned long long* __temp1206v, unsigned long long* __temp1207v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1205v=unsafe_ptr;
  *__temp1206v=unsafe_size;
  *__temp1207v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1208v) {
  int value=0;
  *__temp1208v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1209v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1209v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1210v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1210v=__temp87v__;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1211v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1211v=z;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1212v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1212v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1213v) {
  char* allocated=*__temp1213v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1213v=allocated;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1214v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1214v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1215v) {
  *__temp1215v=to;
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, unsigned long long bytes, char** __temp1216v) {
  char* new_allocated=0;
  char failed=0;
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
  *__temp1216v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1217v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1217v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int resize__temp474v(char** __temp1218v, unsigned long long* __temp1219v, unsigned long long* __temp1220v, unsigned long long size, char** __temp1221v, unsigned long long* __temp1222v, unsigned long long* __temp1223v) {
  char* buffer__unsafe_ptr=*__temp1218v;
  unsigned long long buffer__unsafe_size=*__temp1219v;
  unsigned long long buffer__unsafe_align=*__temp1220v;
  char __temp475v__=0;
  unsigned long long __temp476v=0;
  char __temp477v__=0;
  unsigned long long __temp478v=0;
  unsigned long long __temp480v=0;
  char __temp481v__=0;
  unsigned long long __temp482v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp483v__=0;
  unsigned long long bytes=0;
  char* __temp484v__=0;
  char __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(buffer__unsafe_size,size,&__temp475v__);
  if(__temp475v__){
  goto __temp_return;
  }
  __temp476v=0;
  eq__temp278v(size,__temp476v,&__temp477v__);
  if(__temp477v__){
  __temp478v=0;
  buffer__unsafe_size=__temp478v;
  free__temp428v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp480v=0;
  eq__temp278v(buffer__unsafe_size,__temp480v,&__temp481v__);
  if(__temp481v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp482v__);
  prev_bytes=__temp482v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp483v__);
  bytes=__temp483v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp484v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp484v__;
  lt__temp182v(prev_bytes,bytes,&__temp485v__);
  if(__temp485v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1218v=buffer__unsafe_ptr;
  *__temp1219v=buffer__unsafe_size;
  *__temp1220v=buffer__unsafe_align;
  *__temp1221v=buffer__unsafe_ptr;
  *__temp1222v=buffer__unsafe_size;
  *__temp1223v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1224v) {
  char* element=0;
  char* __temp431v__=0;
  char* unsafe_ptr=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  unsafe_ptr=__temp431v__;
  goto __temp_return;
  __temp_return:
  *__temp1224v=unsafe_ptr;
}

static inline __attribute__((always_inline)) int mutget__temp501v(char** __temp1225v, unsigned long long* __temp1226v, unsigned long long* __temp1227v, unsigned long long i, char** __temp1228v) {
  char* buffer__unsafe_ptr=*__temp1225v;
  unsigned long long buffer__unsafe_size=*__temp1226v;
  unsigned long long buffer__unsafe_align=*__temp1227v;
  char __temp502v__=0;
  unsigned long long __temp503v__=0;
  char* __temp504v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp502v__);
  if(__temp502v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp503v__);
  add__temp430v(buffer__unsafe_ptr,__temp503v__,&__temp504v__);
  unsafe_ptr=__temp504v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1225v=buffer__unsafe_ptr;
  *__temp1226v=buffer__unsafe_size;
  *__temp1227v=buffer__unsafe_align;
  *__temp1228v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp509v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1229v) {
  goto __temp_return;
  __temp_return:
  *__temp1229v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__temp505v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1230v) {
  char __temp506v__=0;
  unsigned long long __temp507v__=0;
  char* __temp508v__=0;
  char* unsafe_ptr=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp506v__);
  if(__temp506v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp507v__);
  add__temp430v(buffer__unsafe_ptr,__temp507v__,&__temp508v__);
  unsafe_ptr=__temp508v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1230v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  int __temp354v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1187v() {
  char* __temp1190v__unsafe_ptr=0;
  unsigned long long __temp1190v__unsafe_size=0;
  unsigned long long __temp1190v__unsafe_align=0;
  char* __temp1191v__unsafe_ptr=0;
  unsigned long long __temp1191v__unsafe_size=0;
  unsigned long long __temp1191v__unsafe_align=0;
  char* buf1__unsafe_ptr=0;
  unsigned long long buf1__unsafe_size=0;
  unsigned long long buf1__unsafe_align=0;
  unsigned long long __temp1192v=0;
  char* __temp1193v__unsafe_ptr=0;
  unsigned long long __temp1193v__unsafe_size=0;
  unsigned long long __temp1193v__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  unsigned long long buf2__unsafe_size=0;
  unsigned long long buf2__unsafe_align=0;
  unsigned long long __temp1194v=0;
  char* __temp1195v__=0;
  double __temp1196v=0;
  unsigned long long __temp1197v__=0;
  unsigned long long __temp1199v__=0;
  unsigned long long __temp1201v=0;
  char* __temp1202v__=0;
  double __temp1203v__number=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1188v(&__temp1190v__unsafe_ptr,&__temp1190v__unsafe_size,&__temp1190v__unsafe_align);
  __temp1191v__unsafe_ptr=__temp1190v__unsafe_ptr;
  __temp1191v__unsafe_size=__temp1190v__unsafe_size;
  __temp1191v__unsafe_align=__temp1190v__unsafe_align;
  buf1__unsafe_ptr=__temp1191v__unsafe_ptr;
  buf1__unsafe_size=__temp1191v__unsafe_size;
  buf1__unsafe_align=__temp1191v__unsafe_align;
  __temp1192v=10;
  __temp_errcode=resize__temp474v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,__temp1192v,&__temp1193v__unsafe_ptr,&__temp1193v__unsafe_size,&__temp1193v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf2__unsafe_ptr=buf1__unsafe_ptr;
  buf2__unsafe_size=buf1__unsafe_size;
  buf2__unsafe_align=buf1__unsafe_align;
  __temp1194v=0;
  __temp_errcode=mutget__temp501v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_align,__temp1194v,&__temp1195v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1196v=1.0;
  if(!__temp1195v__){
  goto __temp_failure;
  }
  memcpy(__temp1195v__,&__temp1196v,8);
  len__temp509v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,&__temp1197v__);
  print__temp361v(__temp1197v__);
  len__temp509v(buf2__unsafe_ptr,buf2__unsafe_size,buf2__unsafe_align,&__temp1199v__);
  print__temp361v(__temp1199v__);
  __temp1201v=0;
  __temp_errcode=get__temp505v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,__temp1201v,&__temp1202v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1202v__){
  goto __temp_failure;
  }
  memcpy(&__temp1203v__number,__temp1202v__,8);
  print__temp353v(__temp1203v__number);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1187v();return 0;}