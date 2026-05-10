#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1223v="going to deallocate of size: ";
const char* const __temp581v="";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1206v(char** __temp1242v, unsigned long long* __temp1243v, unsigned long long* __temp1244v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1242v=unsafe_ptr;
  *__temp1243v=unsafe_size;
  *__temp1244v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1245v) {
  int value=0;
  *__temp1245v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1246v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1246v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1247v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1247v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1248v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1248v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1249v) {
  char* allocated=*__temp1249v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1249v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1250v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1250v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1251v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1251v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1252v) {
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
  *__temp1252v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1253v, unsigned long long* __temp1254v, unsigned long long* __temp1255v, unsigned long long size, char** __temp1256v, unsigned long long* __temp1257v, unsigned long long* __temp1258v) {
  char* buffer__unsafe_ptr=*__temp1253v;
  unsigned long long buffer__unsafe_size=*__temp1254v;
  unsigned long long buffer__unsafe_align=*__temp1255v;
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
  *__temp1253v=buffer__unsafe_ptr;
  *__temp1254v=buffer__unsafe_size;
  *__temp1255v=buffer__unsafe_align;
  *__temp1256v=buffer__unsafe_ptr;
  *__temp1257v=buffer__unsafe_size;
  *__temp1258v=buffer__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1259v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1259v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1260v) {
  *__temp1260v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1261v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1261v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp478v(char** __temp1262v, unsigned long long* __temp1263v, unsigned long long* __temp1264v, unsigned long long i, char** __temp1265v) {
  char* buffer__unsafe_ptr=*__temp1262v;
  unsigned long long buffer__unsafe_size=*__temp1263v;
  unsigned long long buffer__unsafe_align=*__temp1264v;
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
  *__temp1262v=buffer__unsafe_ptr;
  *__temp1263v=buffer__unsafe_size;
  *__temp1264v=buffer__unsafe_align;
  *__temp1265v=__temp481v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp482v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1266v) {
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
  *__temp1266v=__temp485v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp351v(const char* value, const char* endl) {
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__temp486v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1267v) {
  *__temp1267v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1205v(char** __temp1273v, unsigned long long* __temp1274v, unsigned long long* __temp1275v) {
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
  unsigned long long __temp1216v=0;
  char* __temp1217v__=0;
  double __temp1218v=0;
  unsigned long long __temp1219v=0;
  char* __temp1220v__=0;
  double __temp1221v__number=0;
  unsigned long long __temp1271v=0;
  char __temp1272v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1206v(&__temp1208v__unsafe_ptr,&__temp1208v__unsafe_size,&__temp1208v__unsafe_align);
  __temp1209v__unsafe_ptr=__temp1208v__unsafe_ptr;
  __temp1209v__unsafe_size=__temp1208v__unsafe_size;
  __temp1209v__unsafe_align=__temp1208v__unsafe_align;
  __temp1210v=2;
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
  __temp1216v=1;
  __temp_errcode=mutget__temp478v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1216v,&__temp1217v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1218v=2.0;
  if(!__temp1217v__){
  goto __temp_failure;
  }
  memcpy(__temp1217v__,&__temp1218v,8);
  __temp1219v=1;
  __temp_errcode=get__temp482v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1219v,&__temp1220v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1220v__){
  goto __temp_failure;
  }
  memcpy(&__temp1221v__number,__temp1220v__,8);
  print__temp353v(__temp1221v__number);
  *__temp1273v=x__unsafe_ptr;
  *__temp1274v=x__unsafe_size;
  *__temp1275v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1227v(char** __temp1284v, unsigned long long* __temp1285v, unsigned long long* __temp1286v, char** __temp1287v, unsigned long long* __temp1288v, unsigned long long* __temp1289v, char** __temp1290v, unsigned long long* __temp1291v, unsigned long long* __temp1292v) {
  char* __temp1228v__unsafe_ptr=0;
  unsigned long long __temp1228v__unsafe_size=0;
  unsigned long long __temp1228v__unsafe_align=0;
  char* t__unsafe_ptr=0;
  unsigned long long t__unsafe_size=0;
  unsigned long long t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  unsigned long long j__unsafe_size=0;
  unsigned long long j__unsafe_align=0;
  char* __temp1230v__unsafe_ptr=0;
  unsigned long long __temp1230v__unsafe_size=0;
  unsigned long long __temp1230v__unsafe_align=0;
  char* __temp1231v__unsafe_ptr=0;
  unsigned long long __temp1231v__unsafe_size=0;
  unsigned long long __temp1231v__unsafe_align=0;
  unsigned long long __temp1232v=0;
  char* __temp1233v__unsafe_ptr=0;
  unsigned long long __temp1233v__unsafe_size=0;
  unsigned long long __temp1233v__unsafe_align=0;
  char* k__unsafe_ptr=0;
  unsigned long long k__unsafe_size=0;
  unsigned long long k__unsafe_align=0;
  unsigned long long __temp1277v=0;
  char __temp1278v=0;
  unsigned long long __temp1282v=0;
  char __temp1283v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1205v(&__temp1228v__unsafe_ptr,&__temp1228v__unsafe_size,&__temp1228v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1228v__unsafe_ptr;
  t__unsafe_size=__temp1228v__unsafe_size;
  t__unsafe_align=__temp1228v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp1206v(&__temp1230v__unsafe_ptr,&__temp1230v__unsafe_size,&__temp1230v__unsafe_align);
  __temp1231v__unsafe_ptr=__temp1230v__unsafe_ptr;
  __temp1231v__unsafe_size=__temp1230v__unsafe_size;
  __temp1231v__unsafe_align=__temp1230v__unsafe_align;
  __temp1232v=3;
  __temp_errcode=alloc__temp434v(&__temp1231v__unsafe_ptr,&__temp1231v__unsafe_size,&__temp1231v__unsafe_align,__temp1232v,&__temp1233v__unsafe_ptr,&__temp1233v__unsafe_size,&__temp1233v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1233v__unsafe_ptr;
  k__unsafe_size=__temp1233v__unsafe_size;
  k__unsafe_align=__temp1233v__unsafe_align;
  *__temp1284v=t__unsafe_ptr;
  *__temp1285v=t__unsafe_size;
  *__temp1286v=t__unsafe_align;
  *__temp1287v=j__unsafe_ptr;
  *__temp1288v=j__unsafe_size;
  *__temp1289v=j__unsafe_align;
  *__temp1290v=k__unsafe_ptr;
  *__temp1291v=k__unsafe_size;
  *__temp1292v=k__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1235v() {
  char* __temp1236v__t__unsafe_ptr=0;
  unsigned long long __temp1236v__t__unsafe_size=0;
  unsigned long long __temp1236v__t__unsafe_align=0;
  char* __temp1236v__j__unsafe_ptr=0;
  unsigned long long __temp1236v__j__unsafe_size=0;
  unsigned long long __temp1236v__j__unsafe_align=0;
  char* __temp1236v__k__unsafe_ptr=0;
  unsigned long long __temp1236v__k__unsafe_size=0;
  unsigned long long __temp1236v__k__unsafe_align=0;
  char* t__t__unsafe_ptr=0;
  unsigned long long t__t__unsafe_size=0;
  unsigned long long t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  unsigned long long t__j__unsafe_size=0;
  unsigned long long t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  unsigned long long t__k__unsafe_size=0;
  unsigned long long t__k__unsafe_align=0;
  unsigned long long __temp1238v=0;
  char* __temp1239v__=0;
  double __temp1240v__number=0;
  unsigned long long __temp1296v=0;
  char __temp1297v=0;
  unsigned long long __temp1298v=0;
  char __temp1299v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1227v(&__temp1236v__t__unsafe_ptr,&__temp1236v__t__unsafe_size,&__temp1236v__t__unsafe_align,&__temp1236v__j__unsafe_ptr,&__temp1236v__j__unsafe_size,&__temp1236v__j__unsafe_align,&__temp1236v__k__unsafe_ptr,&__temp1236v__k__unsafe_size,&__temp1236v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1236v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1236v__t__unsafe_size;
  t__t__unsafe_align=__temp1236v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1236v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1236v__j__unsafe_size;
  t__j__unsafe_align=__temp1236v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1236v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1236v__k__unsafe_size;
  t__k__unsafe_align=__temp1236v__k__unsafe_align;
  __temp1238v=1;
  __temp_errcode=get__temp482v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1238v,&__temp1239v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1239v__){
  goto __temp_failure;
  }
  memcpy(&__temp1240v__number,__temp1239v__,8);
  print__temp353v(__temp1240v__number);
  
  __temp_failure:__temp1298v=0;
  neq__temp302v(__temp1236v__k__unsafe_size,__temp1298v,&__temp1299v);
  if(__temp1299v){
  __temp1236v__k__unsafe_size=0;
  free__temp428v(&__temp1236v__k__unsafe_ptr);
  }
  print__temp351v(__temp1223v,__temp581v);
  len__temp486v(__temp1236v__t__unsafe_ptr,__temp1236v__t__unsafe_size,__temp1236v__t__unsafe_align,&__temp1236v__t__unsafe_size);
  print__temp361v(__temp1236v__t__unsafe_size);
  __temp1296v=0;
  neq__temp302v(__temp1236v__t__unsafe_size,__temp1296v,&__temp1297v);
  if(__temp1297v){
  __temp1236v__t__unsafe_size=0;
  free__temp428v(&__temp1236v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1235v();return 0;}