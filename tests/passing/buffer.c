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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1226v(char** __temp1255v, unsigned long long* __temp1256v, unsigned long long* __temp1257v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1255v=unsafe_ptr;
  *__temp1256v=unsafe_size;
  *__temp1257v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1258v) {
  int value=0;
  *__temp1258v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1259v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1259v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1260v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1260v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1261v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1261v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1262v) {
  char* allocated=*__temp1262v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1262v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1263v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1264v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1264v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1265v) {
  char* allocated=0;
  char failed=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  allocated=malloc(bytes);
  failed=allocated==0;
  if(failed){
  __temp_errcode=6;
  goto __temp_failure;
  }
  *__temp1265v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1266v, unsigned long long* __temp1267v, unsigned long long* __temp1268v, unsigned long long size, char** __temp1269v, unsigned long long* __temp1270v, unsigned long long* __temp1271v) {
  char* buffer__unsafe_ptr=*__temp1266v;
  unsigned long long buffer__unsafe_size=*__temp1267v;
  unsigned long long buffer__unsafe_align=*__temp1268v;
  unsigned long long __temp436v=0;
  char __temp437v__=0;
  char __temp440v__=0;
  unsigned long long __temp441v=0;
  char __temp442v__=0;
  unsigned long long __temp443v=0;
  unsigned long long __temp444v__=0;
  unsigned long long __temp446v=0;
  char __temp447v__=0;
  unsigned long long __temp448v__=0;
  unsigned long long bytes=0;
  char* __temp449v__=0;
  unsigned long long __temp450v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp440v__);
  if(__temp440v__){
  __temp441v=0;
  neq__temp302v(size,__temp441v,&__temp442v__);
  if(__temp442v__){
  __temp443v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp444v__);
  zero__temp429v(buffer__unsafe_ptr,__temp443v,__temp444v__);
  }
  goto __temp_return;
  }
  __temp446v=0;
  neq__temp302v(buffer__unsafe_size,__temp446v,&__temp447v__);
  if(__temp447v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp448v__);
  bytes=__temp448v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp449v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp449v__;
  __temp450v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp450v,bytes);
  *__temp1266v=buffer__unsafe_ptr;
  *__temp1267v=buffer__unsafe_size;
  *__temp1268v=buffer__unsafe_align;
  *__temp1269v=buffer__unsafe_ptr;
  *__temp1270v=buffer__unsafe_size;
  *__temp1271v=buffer__unsafe_align;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1272v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1272v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1273v) {
  *__temp1273v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1274v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1274v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp498v(char** __temp1275v, unsigned long long* __temp1276v, unsigned long long* __temp1277v, unsigned long long i, char** __temp1278v) {
  char* buffer__unsafe_ptr=*__temp1275v;
  unsigned long long buffer__unsafe_size=*__temp1276v;
  unsigned long long buffer__unsafe_align=*__temp1277v;
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
  *__temp1275v=buffer__unsafe_ptr;
  *__temp1276v=buffer__unsafe_size;
  *__temp1277v=buffer__unsafe_align;
  *__temp1278v=__temp501v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test1__temp1225v(char** __temp1285v, unsigned long long* __temp1286v, unsigned long long* __temp1287v) {
  char* __temp1228v__unsafe_ptr=0;
  unsigned long long __temp1228v__unsafe_size=0;
  unsigned long long __temp1228v__unsafe_align=0;
  char* __temp1229v__unsafe_ptr=0;
  unsigned long long __temp1229v__unsafe_size=0;
  unsigned long long __temp1229v__unsafe_align=0;
  unsigned long long __temp1230v=0;
  char* __temp1231v__unsafe_ptr=0;
  unsigned long long __temp1231v__unsafe_size=0;
  unsigned long long __temp1231v__unsafe_align=0;
  char* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1233v=0;
  char* __temp1234v__=0;
  double __temp1235v=0;
  char* __temp1236v__unsafe_ptr=0;
  unsigned long long __temp1236v__unsafe_size=0;
  unsigned long long __temp1236v__unsafe_align=0;
  char* y__unsafe_ptr=0;
  unsigned long long y__unsafe_size=0;
  unsigned long long y__unsafe_align=0;
  unsigned long long __temp1282v=0;
  char __temp1283v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1226v(&__temp1228v__unsafe_ptr,&__temp1228v__unsafe_size,&__temp1228v__unsafe_align);
  __temp1229v__unsafe_ptr=__temp1228v__unsafe_ptr;
  __temp1229v__unsafe_size=__temp1228v__unsafe_size;
  __temp1229v__unsafe_align=__temp1228v__unsafe_align;
  __temp1230v=1;
  __temp_errcode=alloc__temp434v(&__temp1229v__unsafe_ptr,&__temp1229v__unsafe_size,&__temp1229v__unsafe_align,__temp1230v,&__temp1231v__unsafe_ptr,&__temp1231v__unsafe_size,&__temp1231v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1231v__unsafe_ptr;
  x__unsafe_size=__temp1231v__unsafe_size;
  x__unsafe_align=__temp1231v__unsafe_align;
  __temp1233v=0;
  __temp_errcode=mutget__temp498v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1233v,&__temp1234v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1235v=1.0;
  if(!__temp1234v__){
  goto __temp_failure;
  }
  memcpy(__temp1234v__,&__temp1235v,8);
  float__temp_buffer__buffer__temp1226v(&__temp1236v__unsafe_ptr,&__temp1236v__unsafe_size,&__temp1236v__unsafe_align);
  y__unsafe_ptr=__temp1236v__unsafe_ptr;
  y__unsafe_size=__temp1236v__unsafe_size;
  y__unsafe_align=__temp1236v__unsafe_align;
  *__temp1285v=x__unsafe_ptr;
  *__temp1286v=x__unsafe_size;
  *__temp1287v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, unsigned long long bytes, char** __temp1288v) {
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
  *__temp1288v=__temp427v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1289v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1289v=z;
}

static inline __attribute__((always_inline)) int resize__temp471v(char** __temp1290v, unsigned long long* __temp1291v, unsigned long long* __temp1292v, unsigned long long size, char** __temp1293v, unsigned long long* __temp1294v, unsigned long long* __temp1295v) {
  char* buffer__unsafe_ptr=*__temp1290v;
  unsigned long long buffer__unsafe_size=*__temp1291v;
  unsigned long long buffer__unsafe_align=*__temp1292v;
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
  *__temp1290v=buffer__unsafe_ptr;
  *__temp1291v=buffer__unsafe_size;
  *__temp1292v=buffer__unsafe_align;
  *__temp1293v=buffer__unsafe_ptr;
  *__temp1294v=buffer__unsafe_size;
  *__temp1295v=buffer__unsafe_align;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1296v) {
  int __temp331v__=0;
  char __temp334v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  *__temp1296v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp491v(char** __temp1297v, unsigned long long* __temp1298v, unsigned long long* __temp1299v, char** __temp1300v) {
  char* buffer__unsafe_ptr=*__temp1297v;
  unsigned long long buffer__unsafe_size=*__temp1298v;
  unsigned long long buffer__unsafe_align=*__temp1299v;
  unsigned long long __temp492v=0;
  char __temp493v__=0;
  unsigned long long __temp494v=0;
  unsigned long long __temp495v__=0;
  unsigned long long __temp496v__=0;
  char* __temp497v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp492v=0;
  eq__temp278v(__temp492v,buffer__unsafe_size,&__temp493v__);
  if(__temp493v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  __temp494v=1;
  __temp_errcode=sub__temp330v(buffer__unsafe_size,__temp494v,&__temp495v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp134v(__temp495v__,buffer__unsafe_align,&__temp496v__);
  add__temp430v(buffer__unsafe_ptr,__temp496v__,&__temp497v__);
  *__temp1297v=buffer__unsafe_ptr;
  *__temp1298v=buffer__unsafe_size;
  *__temp1299v=buffer__unsafe_align;
  *__temp1300v=__temp497v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1237v(char** __temp1302v, unsigned long long* __temp1303v, unsigned long long* __temp1304v) {
  char* x__unsafe_ptr=*__temp1302v;
  unsigned long long x__unsafe_size=*__temp1303v;
  unsigned long long x__unsafe_align=*__temp1304v;
  unsigned long long __temp1238v=0;
  char* __temp1239v__unsafe_ptr=0;
  unsigned long long __temp1239v__unsafe_size=0;
  unsigned long long __temp1239v__unsafe_align=0;
  char* __temp1240v__=0;
  double __temp1241v=0;
  char* __temp1242v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1238v=2;
  __temp_errcode=resize__temp471v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1238v,&__temp1239v__unsafe_ptr,&__temp1239v__unsafe_size,&__temp1239v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp491v(&__temp1239v__unsafe_ptr,&__temp1239v__unsafe_size,&__temp1239v__unsafe_align,&__temp1240v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1241v=2.0;
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy(__temp1240v__,&__temp1241v,8);
  __temp1242v=__temp1240v__;
  *__temp1302v=x__unsafe_ptr;
  *__temp1303v=x__unsafe_size;
  *__temp1304v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp502v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1305v) {
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
  *__temp1305v=__temp505v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1306v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1306v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1307v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1307v=z;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1243v() {
  char* __temp1244v__unsafe_ptr=0;
  unsigned long long __temp1244v__unsafe_size=0;
  unsigned long long __temp1244v__unsafe_align=0;
  char* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1247v=0;
  char* __temp1248v__=0;
  double __temp1249v__z=0;
  unsigned long long __temp1250v=0;
  char* __temp1251v__=0;
  double __temp1252v__z=0;
  double __temp1253v__=0;
  unsigned long long __temp1309v=0;
  char __temp1310v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1225v(&__temp1244v__unsafe_ptr,&__temp1244v__unsafe_size,&__temp1244v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1244v__unsafe_ptr;
  x__unsafe_size=__temp1244v__unsafe_size;
  x__unsafe_align=__temp1244v__unsafe_align;
  __temp_errcode=test2__temp1237v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1247v=0;
  __temp_errcode=get__temp502v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1247v,&__temp1248v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1248v__){
  goto __temp_failure;
  }
  memcpy(&__temp1249v__z,__temp1248v__,8);
  __temp1250v=1;
  __temp_errcode=get__temp502v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1250v,&__temp1251v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1251v__){
  goto __temp_failure;
  }
  memcpy(&__temp1252v__z,__temp1251v__,8);
  add__temp88v(__temp1249v__z,__temp1252v__z,&__temp1253v__);
  print__temp353v(__temp1253v__);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1243v();return 0;}