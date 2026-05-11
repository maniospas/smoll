#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
static const char* __temp_all_errcodes[28] = {"noerr",
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
"string does not fit on buffer",
"cannot extend the string's left side outside its right range",
"string buffer out of memory",
"string out of bounds",
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1226v(char** __temp1243v, unsigned long long* __temp1244v, unsigned long long* __temp1245v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1243v=unsafe_ptr;
  *__temp1244v=unsafe_size;
  *__temp1245v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1246v) {
  int value=0;
  *__temp1246v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1247v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1247v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1248v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1248v=__temp87v__;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1249v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1249v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1250v) {
  char* allocated=*__temp1250v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1250v=allocated;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1251v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1251v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1252v) {
  *__temp1252v=to;
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, unsigned long long bytes, char** __temp1253v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp427v__=0;
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
  *__temp1253v=__temp427v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1254v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1254v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int resize__temp471v(char** __temp1255v, unsigned long long* __temp1256v, unsigned long long* __temp1257v, unsigned long long size, char** __temp1258v, unsigned long long* __temp1259v, unsigned long long* __temp1260v) {
  char* buffer__unsafe_ptr=*__temp1255v;
  unsigned long long buffer__unsafe_size=*__temp1256v;
  unsigned long long buffer__unsafe_align=*__temp1257v;
  char __temp472v__=0;
  unsigned long long __temp473v=0;
  char __temp474v__=0;
  unsigned long long __temp475v=0;
  unsigned long long __temp477v=0;
  char __temp478v__=0;
  unsigned long long __temp479v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp480v__=0;
  unsigned long long bytes=0;
  char* __temp481v__=0;
  char __temp482v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  goto __temp_return;
  }
  __temp473v=0;
  eq__temp278v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  buffer__unsafe_size=__temp475v;
  free__temp428v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp477v=0;
  eq__temp278v(buffer__unsafe_size,__temp477v,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp479v__);
  prev_bytes=__temp479v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp480v__);
  bytes=__temp480v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp481v__;
  lt__temp182v(prev_bytes,bytes,&__temp482v__);
  if(__temp482v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  *__temp1255v=buffer__unsafe_ptr;
  *__temp1256v=buffer__unsafe_size;
  *__temp1257v=buffer__unsafe_align;
  *__temp1258v=buffer__unsafe_ptr;
  *__temp1259v=buffer__unsafe_size;
  *__temp1260v=buffer__unsafe_align;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1261v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1261v=z;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1262v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1262v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp498v(char** __temp1263v, unsigned long long* __temp1264v, unsigned long long* __temp1265v, unsigned long long i, char** __temp1266v) {
  char* buffer__unsafe_ptr=*__temp1263v;
  unsigned long long buffer__unsafe_size=*__temp1264v;
  unsigned long long buffer__unsafe_align=*__temp1265v;
  char __temp499v__=0;
  unsigned long long __temp500v__=0;
  char* __temp501v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp499v__);
  if(__temp499v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp500v__);
  add__temp430v(buffer__unsafe_ptr,__temp500v__,&__temp501v__);
  *__temp1263v=buffer__unsafe_ptr;
  *__temp1264v=buffer__unsafe_size;
  *__temp1265v=buffer__unsafe_align;
  *__temp1266v=__temp501v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void len__temp506v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1267v) {
  *__temp1267v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__temp502v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1268v) {
  char __temp503v__=0;
  unsigned long long __temp504v__=0;
  char* __temp505v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp503v__);
  if(__temp503v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp504v__);
  add__temp430v(buffer__unsafe_ptr,__temp504v__,&__temp505v__);
  *__temp1268v=__temp505v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1225v() {
  char* __temp1228v__unsafe_ptr=0;
  unsigned long long __temp1228v__unsafe_size=0;
  unsigned long long __temp1228v__unsafe_align=0;
  char* __temp1229v__unsafe_ptr=0;
  unsigned long long __temp1229v__unsafe_size=0;
  unsigned long long __temp1229v__unsafe_align=0;
  char* buf1__unsafe_ptr=0;
  unsigned long long buf1__unsafe_size=0;
  unsigned long long buf1__unsafe_align=0;
  unsigned long long __temp1230v=0;
  char* __temp1231v__unsafe_ptr=0;
  unsigned long long __temp1231v__unsafe_size=0;
  unsigned long long __temp1231v__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  unsigned long long buf2__unsafe_size=0;
  unsigned long long buf2__unsafe_align=0;
  unsigned long long __temp1232v=0;
  char* __temp1233v__=0;
  double __temp1234v=0;
  unsigned long long __temp1235v__=0;
  unsigned long long __temp1237v__=0;
  unsigned long long __temp1239v=0;
  char* __temp1240v__=0;
  double __temp1241v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1226v(&__temp1228v__unsafe_ptr,&__temp1228v__unsafe_size,&__temp1228v__unsafe_align);
  __temp1229v__unsafe_ptr=__temp1228v__unsafe_ptr;
  __temp1229v__unsafe_size=__temp1228v__unsafe_size;
  __temp1229v__unsafe_align=__temp1228v__unsafe_align;
  buf1__unsafe_ptr=__temp1229v__unsafe_ptr;
  buf1__unsafe_size=__temp1229v__unsafe_size;
  buf1__unsafe_align=__temp1229v__unsafe_align;
  __temp1230v=10;
  __temp_errcode=resize__temp471v(&buf1__unsafe_ptr,&buf1__unsafe_size,&buf1__unsafe_align,__temp1230v,&__temp1231v__unsafe_ptr,&__temp1231v__unsafe_size,&__temp1231v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buf2__unsafe_ptr=buf1__unsafe_ptr;
  buf2__unsafe_size=buf1__unsafe_size;
  buf2__unsafe_align=buf1__unsafe_align;
  __temp1232v=0;
  __temp_errcode=mutget__temp498v(&buf2__unsafe_ptr,&buf2__unsafe_size,&buf2__unsafe_align,__temp1232v,&__temp1233v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1234v=1.0;
  if(!__temp1233v__){
  goto __temp_failure;
  }
  memcpy(__temp1233v__,&__temp1234v,8);
  len__temp506v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,&__temp1235v__);
  print__temp361v(__temp1235v__);
  len__temp506v(buf2__unsafe_ptr,buf2__unsafe_size,buf2__unsafe_align,&__temp1237v__);
  print__temp361v(__temp1237v__);
  __temp1239v=0;
  __temp_errcode=get__temp502v(buf1__unsafe_ptr,buf1__unsafe_size,buf1__unsafe_align,__temp1239v,&__temp1240v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy(&__temp1241v__z,__temp1240v__,8);
  print__temp353v(__temp1241v__z);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1225v();return 0;}