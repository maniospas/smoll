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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1206v(char** __temp1235v, unsigned long long* __temp1236v, unsigned long long* __temp1237v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1235v=unsafe_ptr;
  *__temp1236v=unsafe_size;
  *__temp1237v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1238v) {
  int value=0;
  *__temp1238v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1239v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1239v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1240v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1240v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1241v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1241v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1242v) {
  char* allocated=*__temp1242v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1242v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1243v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1243v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1244v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1244v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1245v) {
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
  *__temp1245v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1246v, unsigned long long* __temp1247v, unsigned long long* __temp1248v, unsigned long long size, char** __temp1249v, unsigned long long* __temp1250v, unsigned long long* __temp1251v) {
  char* buffer__unsafe_ptr=*__temp1246v;
  unsigned long long buffer__unsafe_size=*__temp1247v;
  unsigned long long buffer__unsafe_align=*__temp1248v;
  unsigned long long __temp435v=0;
  char __temp436v__=0;
  char __temp439v__=0;
  unsigned long long __temp440v=0;
  char __temp441v__=0;
  unsigned long long __temp442v=0;
  unsigned long long __temp443v__=0;
  unsigned long long __temp445v=0;
  char __temp446v__=0;
  unsigned long long __temp447v__=0;
  unsigned long long bytes=0;
  char* __temp448v__=0;
  unsigned long long __temp449v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp439v__);
  if(__temp439v__){
  __temp440v=0;
  neq__temp302v(size,__temp440v,&__temp441v__);
  if(__temp441v__){
  __temp442v=0;
  mul__temp134v(buffer__unsafe_align,size,&__temp443v__);
  zero__temp429v(buffer__unsafe_ptr,__temp442v,__temp443v__);
  }
  goto __temp_return;
  }
  __temp445v=0;
  neq__temp302v(buffer__unsafe_size,__temp445v,&__temp446v__);
  if(__temp446v__){
  __temp_errcode=8;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_align,size,&__temp447v__);
  bytes=__temp447v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp425v(bytes,&__temp448v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp448v__;
  __temp449v=0;
  zero__temp429v(buffer__unsafe_ptr,__temp449v,bytes);
  __temp_return:
  *__temp1246v=buffer__unsafe_ptr;
  *__temp1247v=buffer__unsafe_size;
  *__temp1248v=buffer__unsafe_align;
  *__temp1249v=buffer__unsafe_ptr;
  *__temp1250v=buffer__unsafe_size;
  *__temp1251v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1252v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1252v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1253v) {
  *__temp1253v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1254v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1254v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp478v(char** __temp1255v, unsigned long long* __temp1256v, unsigned long long* __temp1257v, unsigned long long i, char** __temp1258v) {
  char* buffer__unsafe_ptr=*__temp1255v;
  unsigned long long buffer__unsafe_size=*__temp1256v;
  unsigned long long buffer__unsafe_align=*__temp1257v;
  char __temp479v__=0;
  unsigned long long __temp480v__=0;
  char* __temp481v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp480v__);
  add__temp430v(buffer__unsafe_ptr,__temp480v__,&__temp481v__);
  *__temp1255v=buffer__unsafe_ptr;
  *__temp1256v=buffer__unsafe_size;
  *__temp1257v=buffer__unsafe_align;
  *__temp1258v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test1__temp1205v(char** __temp1265v, unsigned long long* __temp1266v, unsigned long long* __temp1267v) {
  char* __temp1208v__unsafe_ptr=0;
  unsigned long long __temp1208v__unsafe_size=0;
  unsigned long long __temp1208v__unsafe_align=0;
  char* __temp1209v__unsafe_ptr=0;
  unsigned long long __temp1209v__unsafe_size=0;
  unsigned long long __temp1209v__unsafe_align=0;
  unsigned long long __temp1210v=0;
  char* __temp1211v__unsafe_ptr=0;
  unsigned long long __temp1211v__unsafe_size=0;
  unsigned long long __temp1211v__unsafe_align=0;
  char* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1213v=0;
  char* __temp1214v__=0;
  double __temp1215v=0;
  char* __temp1216v__unsafe_ptr=0;
  unsigned long long __temp1216v__unsafe_size=0;
  unsigned long long __temp1216v__unsafe_align=0;
  char* y__unsafe_ptr=0;
  unsigned long long y__unsafe_size=0;
  unsigned long long y__unsafe_align=0;
  unsigned long long __temp1262v=0;
  char __temp1263v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1206v(&__temp1208v__unsafe_ptr,&__temp1208v__unsafe_size,&__temp1208v__unsafe_align);
  __temp1209v__unsafe_ptr=__temp1208v__unsafe_ptr;
  __temp1209v__unsafe_size=__temp1208v__unsafe_size;
  __temp1209v__unsafe_align=__temp1208v__unsafe_align;
  __temp1210v=1;
  __temp_errcode=alloc__temp434v(&__temp1209v__unsafe_ptr,&__temp1209v__unsafe_size,&__temp1209v__unsafe_align,__temp1210v,&__temp1211v__unsafe_ptr,&__temp1211v__unsafe_size,&__temp1211v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1211v__unsafe_ptr;
  x__unsafe_size=__temp1211v__unsafe_size;
  x__unsafe_align=__temp1211v__unsafe_align;
  __temp1213v=0;
  __temp_errcode=mutget__temp478v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1213v,&__temp1214v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1215v=1.0;
  if(!__temp1214v__){
  goto __temp_failure;
  }
  memcpy(__temp1214v__,&__temp1215v,8);
  float__temp_buffer__buffer__temp1206v(&__temp1216v__unsafe_ptr,&__temp1216v__unsafe_size,&__temp1216v__unsafe_align);
  y__unsafe_ptr=__temp1216v__unsafe_ptr;
  y__unsafe_size=__temp1216v__unsafe_size;
  y__unsafe_align=__temp1216v__unsafe_align;
  *__temp1265v=x__unsafe_ptr;
  *__temp1266v=x__unsafe_size;
  *__temp1267v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp426v(char* allocated__unsafe_ptr, unsigned long long bytes, char** __temp1268v) {
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
  *__temp1268v=__temp427v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1269v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1269v=z;
}

static inline __attribute__((always_inline)) int resize__temp451v(char** __temp1270v, unsigned long long* __temp1271v, unsigned long long* __temp1272v, unsigned long long size, char** __temp1273v, unsigned long long* __temp1274v, unsigned long long* __temp1275v) {
  char* buffer__unsafe_ptr=*__temp1270v;
  unsigned long long buffer__unsafe_size=*__temp1271v;
  unsigned long long buffer__unsafe_align=*__temp1272v;
  char __temp452v__=0;
  unsigned long long __temp453v=0;
  char __temp454v__=0;
  unsigned long long __temp455v=0;
  unsigned long long __temp457v=0;
  char __temp458v__=0;
  unsigned long long __temp459v__=0;
  unsigned long long prev_bytes=0;
  unsigned long long __temp460v__=0;
  unsigned long long bytes=0;
  char* __temp461v__=0;
  char __temp462v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp278v(buffer__unsafe_size,size,&__temp452v__);
  if(__temp452v__){
  goto __temp_return;
  }
  __temp453v=0;
  eq__temp278v(size,__temp453v,&__temp454v__);
  if(__temp454v__){
  __temp455v=0;
  buffer__unsafe_size=__temp455v;
  free__temp428v(&buffer__unsafe_ptr);
  goto __temp_return;
  }
  __temp457v=0;
  eq__temp278v(buffer__unsafe_size,__temp457v,&__temp458v__);
  if(__temp458v__){
  __temp_errcode=9;
  goto __temp_failure;
  }
  mul__temp134v(buffer__unsafe_size,buffer__unsafe_align,&__temp459v__);
  prev_bytes=__temp459v__;
  buffer__unsafe_size=size;
  mul__temp134v(buffer__unsafe_align,size,&__temp460v__);
  bytes=__temp460v__;
  __temp_errcode=realloc__temp426v(buffer__unsafe_ptr,bytes,&__temp461v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp461v__;
  lt__temp182v(prev_bytes,bytes,&__temp462v__);
  if(__temp462v__){
  zero__temp429v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  __temp_return:
  *__temp1270v=buffer__unsafe_ptr;
  *__temp1271v=buffer__unsafe_size;
  *__temp1272v=buffer__unsafe_align;
  *__temp1273v=buffer__unsafe_ptr;
  *__temp1274v=buffer__unsafe_size;
  *__temp1275v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1276v) {
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
  *__temp1276v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp471v(char** __temp1277v, unsigned long long* __temp1278v, unsigned long long* __temp1279v, char** __temp1280v) {
  char* buffer__unsafe_ptr=*__temp1277v;
  unsigned long long buffer__unsafe_size=*__temp1278v;
  unsigned long long buffer__unsafe_align=*__temp1279v;
  unsigned long long __temp472v=0;
  char __temp473v__=0;
  unsigned long long __temp474v=0;
  unsigned long long __temp475v__=0;
  unsigned long long __temp476v__=0;
  char* __temp477v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp472v=0;
  eq__temp278v(__temp472v,buffer__unsafe_size,&__temp473v__);
  if(__temp473v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  __temp474v=1;
  __temp_errcode=sub__temp330v(buffer__unsafe_size,__temp474v,&__temp475v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp134v(__temp475v__,buffer__unsafe_align,&__temp476v__);
  add__temp430v(buffer__unsafe_ptr,__temp476v__,&__temp477v__);
  *__temp1277v=buffer__unsafe_ptr;
  *__temp1278v=buffer__unsafe_size;
  *__temp1279v=buffer__unsafe_align;
  *__temp1280v=__temp477v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1217v(char** __temp1282v, unsigned long long* __temp1283v, unsigned long long* __temp1284v) {
  char* x__unsafe_ptr=*__temp1282v;
  unsigned long long x__unsafe_size=*__temp1283v;
  unsigned long long x__unsafe_align=*__temp1284v;
  unsigned long long __temp1218v=0;
  char* __temp1219v__unsafe_ptr=0;
  unsigned long long __temp1219v__unsafe_size=0;
  unsigned long long __temp1219v__unsafe_align=0;
  char* __temp1220v__=0;
  double __temp1221v=0;
  char* __temp1222v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1218v=2;
  __temp_errcode=resize__temp451v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1218v,&__temp1219v__unsafe_ptr,&__temp1219v__unsafe_size,&__temp1219v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp471v(&__temp1219v__unsafe_ptr,&__temp1219v__unsafe_size,&__temp1219v__unsafe_align,&__temp1220v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1221v=2.0;
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(__temp1220v__,&__temp1221v,8);
  __temp1222v=__temp1220v__;
  *__temp1282v=x__unsafe_ptr;
  *__temp1283v=x__unsafe_size;
  *__temp1284v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1285v) {
  char __temp483v__=0;
  unsigned long long __temp484v__=0;
  char* __temp485v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(i,buffer__unsafe_size,&__temp483v__);
  if(__temp483v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp134v(i,buffer__unsafe_align,&__temp484v__);
  add__temp430v(buffer__unsafe_ptr,__temp484v__,&__temp485v__);
  *__temp1285v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1286v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1286v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1287v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1287v=z;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1223v() {
  char* __temp1224v__unsafe_ptr=0;
  unsigned long long __temp1224v__unsafe_size=0;
  unsigned long long __temp1224v__unsafe_align=0;
  char* x__unsafe_ptr=0;
  unsigned long long x__unsafe_size=0;
  unsigned long long x__unsafe_align=0;
  unsigned long long __temp1227v=0;
  char* __temp1228v__=0;
  double __temp1229v__number=0;
  unsigned long long __temp1230v=0;
  char* __temp1231v__=0;
  double __temp1232v__number=0;
  double __temp1233v__=0;
  unsigned long long __temp1289v=0;
  char __temp1290v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1205v(&__temp1224v__unsafe_ptr,&__temp1224v__unsafe_size,&__temp1224v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1224v__unsafe_ptr;
  x__unsafe_size=__temp1224v__unsafe_size;
  x__unsafe_align=__temp1224v__unsafe_align;
  __temp_errcode=test2__temp1217v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1227v=0;
  __temp_errcode=get__temp482v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1227v,&__temp1228v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1228v__){
  goto __temp_failure;
  }
  memcpy(&__temp1229v__number,__temp1228v__,8);
  __temp1230v=1;
  __temp_errcode=get__temp482v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1230v,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(&__temp1232v__number,__temp1231v__,8);
  add__temp88v(__temp1229v__number,__temp1232v__number,&__temp1233v__);
  print__temp353v(__temp1233v__);
  
  __temp_failure:__temp1289v=0;
  neq__temp302v(__temp1224v__unsafe_size,__temp1289v,&__temp1290v);
  if(__temp1290v){
  __temp1224v__unsafe_size=0;
  free__temp428v(&__temp1224v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1223v();return 0;}