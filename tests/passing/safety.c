#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp1243v="going to deallocate of size: ";
const char* const __temp601v="";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1226v(char** __temp1262v, unsigned long long* __temp1263v, unsigned long long* __temp1264v) {
  char* unsafe_ptr=0;
  unsigned long long unsafe_size=0;
  unsigned long long unsafe_align=0;
  unsafe_align=8;
  *__temp1262v=unsafe_ptr;
  *__temp1263v=unsafe_size;
  *__temp1264v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1265v) {
  int value=0;
  *__temp1265v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1266v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1266v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1267v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1267v=__temp87v__;
}

static inline __attribute__((always_inline)) void neq__temp302v(unsigned long long x, unsigned long long y, char* __temp1268v) {
  int __temp303v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp303v__);
  z=x!=y;
  *__temp1268v=z;
}

static inline __attribute__((always_inline)) void free__temp428v(char** __temp1269v) {
  char* allocated=*__temp1269v;
  if(allocated)free(allocated);
  allocated=0;
  *__temp1269v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp278v(unsigned long long x, unsigned long long y, char* __temp1270v) {
  int __temp279v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp279v__);
  z=x==y;
  *__temp1270v=z;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp1271v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp1271v=z;
}

static inline __attribute__((always_inline)) void zero__temp429v(char* allocated, unsigned long long from, unsigned long long to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp425v(unsigned long long bytes, char** __temp1272v) {
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
  *__temp1272v=allocated;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp434v(char** __temp1273v, unsigned long long* __temp1274v, unsigned long long* __temp1275v, unsigned long long size, char** __temp1276v, unsigned long long* __temp1277v, unsigned long long* __temp1278v) {
  char* buffer__unsafe_ptr=*__temp1273v;
  unsigned long long buffer__unsafe_size=*__temp1274v;
  unsigned long long buffer__unsafe_align=*__temp1275v;
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
  *__temp1273v=buffer__unsafe_ptr;
  *__temp1274v=buffer__unsafe_size;
  *__temp1275v=buffer__unsafe_align;
  *__temp1276v=buffer__unsafe_ptr;
  *__temp1277v=buffer__unsafe_size;
  *__temp1278v=buffer__unsafe_align;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp254v(unsigned long long x, unsigned long long y, char* __temp1279v) {
  int __temp255v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  *__temp1279v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp13v(char* to, char* from, char** __temp1280v) {
  *__temp1280v=to;
}

static inline __attribute__((always_inline)) void add__temp430v(char* allocated, unsigned long long offset, char** __temp1281v) {
  char* element=0;
  char* __temp431v__=0;
  element=allocated+offset;
  attach_type__temp13v(element,allocated,&__temp431v__);
  *__temp1281v=__temp431v__;
}

static inline __attribute__((always_inline)) int mutget__temp498v(char** __temp1282v, unsigned long long* __temp1283v, unsigned long long* __temp1284v, unsigned long long i, char** __temp1285v) {
  char* buffer__unsafe_ptr=*__temp1282v;
  unsigned long long buffer__unsafe_size=*__temp1283v;
  unsigned long long buffer__unsafe_align=*__temp1284v;
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
  *__temp1282v=buffer__unsafe_ptr;
  *__temp1283v=buffer__unsafe_size;
  *__temp1284v=buffer__unsafe_align;
  *__temp1285v=__temp501v__;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp502v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long i, char** __temp1286v) {
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
  *__temp1286v=__temp505v__;
  
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

static inline __attribute__((always_inline)) void len__temp506v(char* buffer__unsafe_ptr, unsigned long long buffer__unsafe_size, unsigned long long buffer__unsafe_align, unsigned long long* __temp1287v) {
  *__temp1287v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1225v(char** __temp1293v, unsigned long long* __temp1294v, unsigned long long* __temp1295v) {
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
  unsigned long long __temp1236v=0;
  char* __temp1237v__=0;
  double __temp1238v=0;
  unsigned long long __temp1239v=0;
  char* __temp1240v__=0;
  double __temp1241v__z=0;
  unsigned long long __temp1291v=0;
  char __temp1292v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1226v(&__temp1228v__unsafe_ptr,&__temp1228v__unsafe_size,&__temp1228v__unsafe_align);
  __temp1229v__unsafe_ptr=__temp1228v__unsafe_ptr;
  __temp1229v__unsafe_size=__temp1228v__unsafe_size;
  __temp1229v__unsafe_align=__temp1228v__unsafe_align;
  __temp1230v=2;
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
  __temp1236v=1;
  __temp_errcode=mutget__temp498v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1236v,&__temp1237v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1238v=2.0;
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(__temp1237v__,&__temp1238v,8);
  __temp1239v=1;
  __temp_errcode=get__temp502v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1239v,&__temp1240v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy(&__temp1241v__z,__temp1240v__,8);
  print__temp353v(__temp1241v__z);
  *__temp1293v=x__unsafe_ptr;
  *__temp1294v=x__unsafe_size;
  *__temp1295v=x__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1247v(char** __temp1304v, unsigned long long* __temp1305v, unsigned long long* __temp1306v, char** __temp1307v, unsigned long long* __temp1308v, unsigned long long* __temp1309v, char** __temp1310v, unsigned long long* __temp1311v, unsigned long long* __temp1312v) {
  char* __temp1248v__unsafe_ptr=0;
  unsigned long long __temp1248v__unsafe_size=0;
  unsigned long long __temp1248v__unsafe_align=0;
  char* t__unsafe_ptr=0;
  unsigned long long t__unsafe_size=0;
  unsigned long long t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  unsigned long long j__unsafe_size=0;
  unsigned long long j__unsafe_align=0;
  char* __temp1250v__unsafe_ptr=0;
  unsigned long long __temp1250v__unsafe_size=0;
  unsigned long long __temp1250v__unsafe_align=0;
  char* __temp1251v__unsafe_ptr=0;
  unsigned long long __temp1251v__unsafe_size=0;
  unsigned long long __temp1251v__unsafe_align=0;
  unsigned long long __temp1252v=0;
  char* __temp1253v__unsafe_ptr=0;
  unsigned long long __temp1253v__unsafe_size=0;
  unsigned long long __temp1253v__unsafe_align=0;
  char* k__unsafe_ptr=0;
  unsigned long long k__unsafe_size=0;
  unsigned long long k__unsafe_align=0;
  unsigned long long __temp1297v=0;
  char __temp1298v=0;
  unsigned long long __temp1302v=0;
  char __temp1303v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1225v(&__temp1248v__unsafe_ptr,&__temp1248v__unsafe_size,&__temp1248v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1248v__unsafe_ptr;
  t__unsafe_size=__temp1248v__unsafe_size;
  t__unsafe_align=__temp1248v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp1226v(&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_align);
  __temp1251v__unsafe_ptr=__temp1250v__unsafe_ptr;
  __temp1251v__unsafe_size=__temp1250v__unsafe_size;
  __temp1251v__unsafe_align=__temp1250v__unsafe_align;
  __temp1252v=3;
  __temp_errcode=alloc__temp434v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_align,__temp1252v,&__temp1253v__unsafe_ptr,&__temp1253v__unsafe_size,&__temp1253v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1253v__unsafe_ptr;
  k__unsafe_size=__temp1253v__unsafe_size;
  k__unsafe_align=__temp1253v__unsafe_align;
  *__temp1304v=t__unsafe_ptr;
  *__temp1305v=t__unsafe_size;
  *__temp1306v=t__unsafe_align;
  *__temp1307v=j__unsafe_ptr;
  *__temp1308v=j__unsafe_size;
  *__temp1309v=j__unsafe_align;
  *__temp1310v=k__unsafe_ptr;
  *__temp1311v=k__unsafe_size;
  *__temp1312v=k__unsafe_align;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1255v() {
  char* __temp1256v__t__unsafe_ptr=0;
  unsigned long long __temp1256v__t__unsafe_size=0;
  unsigned long long __temp1256v__t__unsafe_align=0;
  char* __temp1256v__j__unsafe_ptr=0;
  unsigned long long __temp1256v__j__unsafe_size=0;
  unsigned long long __temp1256v__j__unsafe_align=0;
  char* __temp1256v__k__unsafe_ptr=0;
  unsigned long long __temp1256v__k__unsafe_size=0;
  unsigned long long __temp1256v__k__unsafe_align=0;
  char* t__t__unsafe_ptr=0;
  unsigned long long t__t__unsafe_size=0;
  unsigned long long t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  unsigned long long t__j__unsafe_size=0;
  unsigned long long t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  unsigned long long t__k__unsafe_size=0;
  unsigned long long t__k__unsafe_align=0;
  unsigned long long __temp1258v=0;
  char* __temp1259v__=0;
  double __temp1260v__z=0;
  unsigned long long __temp1316v=0;
  char __temp1317v=0;
  unsigned long long __temp1318v=0;
  char __temp1319v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1247v(&__temp1256v__t__unsafe_ptr,&__temp1256v__t__unsafe_size,&__temp1256v__t__unsafe_align,&__temp1256v__j__unsafe_ptr,&__temp1256v__j__unsafe_size,&__temp1256v__j__unsafe_align,&__temp1256v__k__unsafe_ptr,&__temp1256v__k__unsafe_size,&__temp1256v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1256v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1256v__t__unsafe_size;
  t__t__unsafe_align=__temp1256v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1256v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1256v__j__unsafe_size;
  t__j__unsafe_align=__temp1256v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1256v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1256v__k__unsafe_size;
  t__k__unsafe_align=__temp1256v__k__unsafe_align;
  __temp1258v=1;
  __temp_errcode=get__temp502v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1258v,&__temp1259v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1259v__){
  goto __temp_failure;
  }
  memcpy(&__temp1260v__z,__temp1259v__,8);
  print__temp353v(__temp1260v__z);
  
  __temp_failure:
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1255v();return 0;}