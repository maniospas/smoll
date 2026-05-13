#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp791v="";
const char* const __temp359v="\n";
const char* const __temp1234v="going to deallocate of size: ";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1217v(char** __temp1253v, uint64_t* __temp1254v, uint64_t* __temp1255v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1253v=unsafe_ptr;
  *__temp1254v=unsafe_size;
  *__temp1255v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp408v(char* x, char* __temp1256v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1256v=z;
}

static inline __attribute__((always_inline)) void free__temp457v(char** __temp1257v) {
  char* allocated=*__temp1257v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1257v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1258v) {
  int value=0;
  *__temp1258v=value;
}

static inline __attribute__((always_inline)) void not__temp31v(int __temp_anon0, int* __temp1259v) {
  int __temp32v__=0;
  false__temp10v(&__temp32v__);
  goto __temp_return;
  __temp_return:
  *__temp1259v=__temp32v__;
}

static inline __attribute__((always_inline)) void is_different__temp89v(uint64_t x, uint64_t y, int* __temp1260v) {
  int __temp90v=0;
  int __temp91v__=0;
  not__temp31v(__temp90v,&__temp91v__);
  goto __temp_return;
  __temp_return:
  *__temp1260v=__temp91v__;
}

static inline __attribute__((always_inline)) void eq__temp114v(uint64_t x, uint64_t y, char* __temp1261v) {
  int __temp115v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp115v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1261v=z;
}

static inline __attribute__((always_inline)) void neq__temp138v(uint64_t x, uint64_t y, char* __temp1262v) {
  int __temp139v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp139v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) void mul__temp190v(uint64_t x, uint64_t y, uint64_t* __temp1263v) {
  int __temp191v__=0;
  uint64_t z=0;
  is_different__temp89v(x,y,&__temp191v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void zero__temp458v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp454v(uint64_t bytes, char** __temp1264v) {
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
  *__temp1264v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp463v(char** __temp1265v, uint64_t* __temp1266v, uint64_t* __temp1267v, uint64_t size, char** __temp1268v, uint64_t* __temp1269v, uint64_t* __temp1270v) {
  char* buffer__unsafe_ptr=*__temp1265v;
  uint64_t buffer__unsafe_size=*__temp1266v;
  uint64_t buffer__unsafe_align=*__temp1267v;
  int __temp464v=0;
  char __temp465v__=0;
  uint64_t __temp466v=0;
  char __temp468v__=0;
  uint64_t __temp469v=0;
  char __temp470v__=0;
  uint64_t __temp471v=0;
  uint64_t __temp472v__=0;
  uint64_t __temp474v=0;
  char __temp475v__=0;
  uint64_t __temp476v__=0;
  uint64_t bytes=0;
  char* __temp477v__=0;
  uint64_t __temp478v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp114v(buffer__unsafe_size,size,&__temp468v__);
  if(__temp468v__){
  __temp469v=0;
  neq__temp138v(size,__temp469v,&__temp470v__);
  if(__temp470v__){
  __temp471v=0;
  mul__temp190v(buffer__unsafe_align,size,&__temp472v__);
  zero__temp458v(buffer__unsafe_ptr,__temp471v,__temp472v__);
  }
  goto __temp_return;
  }
  __temp474v=0;
  neq__temp138v(buffer__unsafe_size,__temp474v,&__temp475v__);
  if(__temp475v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp190v(buffer__unsafe_align,size,&__temp476v__);
  bytes=__temp476v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp454v(bytes,&__temp477v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp477v__;
  __temp478v=0;
  zero__temp458v(buffer__unsafe_ptr,__temp478v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp408v(buffer__unsafe_ptr,&__temp465v__);
  if(__temp465v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp457v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1265v=buffer__unsafe_ptr;
  *__temp1266v=buffer__unsafe_size;
  *__temp1267v=buffer__unsafe_align;
  *__temp1268v=buffer__unsafe_ptr;
  *__temp1269v=buffer__unsafe_size;
  *__temp1270v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp315v(uint64_t x, uint64_t y, char* __temp1271v) {
  int __temp316v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp316v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1271v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1272v) {
  *__temp1272v=to;
}

static inline __attribute__((always_inline)) void add__temp459v(char* allocated, uint64_t offset, char** __temp1273v) {
  char* element=0;
  char* __temp460v__=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp460v__);
  goto __temp_return;
  __temp_return:
  *__temp1273v=__temp460v__;
}

static inline __attribute__((always_inline)) int mutget__temp525v(char** __temp1274v, uint64_t* __temp1275v, uint64_t* __temp1276v, uint64_t i, char** __temp1277v) {
  char* buffer__unsafe_ptr=*__temp1274v;
  uint64_t buffer__unsafe_size=*__temp1275v;
  uint64_t buffer__unsafe_align=*__temp1276v;
  char __temp526v__=0;
  uint64_t __temp527v__=0;
  char* __temp528v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp315v(i,buffer__unsafe_size,&__temp526v__);
  if(__temp526v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp190v(i,buffer__unsafe_align,&__temp527v__);
  add__temp459v(buffer__unsafe_ptr,__temp527v__,&__temp528v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1274v=buffer__unsafe_ptr;
  *__temp1275v=buffer__unsafe_size;
  *__temp1276v=buffer__unsafe_align;
  *__temp1277v=__temp528v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp529v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1278v) {
  char __temp530v__=0;
  uint64_t __temp531v__=0;
  char* __temp532v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp315v(i,buffer__unsafe_size,&__temp530v__);
  if(__temp530v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp190v(i,buffer__unsafe_align,&__temp531v__);
  add__temp459v(buffer__unsafe_ptr,__temp531v__,&__temp532v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1278v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp362v(double value) {
  int __temp363v=0;
  const char* endl=0;
  endl=__temp359v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp360v(const char* value, const char* endl) {
  int __temp361v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1279v) {
  goto __temp_return;
  __temp_return:
  *__temp1279v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp370v(uint64_t value) {
  int __temp371v=0;
  const char* endl=0;
  endl=__temp359v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1216v(char** __temp1280v, uint64_t* __temp1281v, uint64_t* __temp1282v) {
  char* __temp1219v__unsafe_ptr=0;
  uint64_t __temp1219v__unsafe_size=0;
  uint64_t __temp1219v__unsafe_align=0;
  char* __temp1220v__unsafe_ptr=0;
  uint64_t __temp1220v__unsafe_size=0;
  uint64_t __temp1220v__unsafe_align=0;
  uint64_t __temp1221v=0;
  char* __temp1222v__unsafe_ptr=0;
  uint64_t __temp1222v__unsafe_size=0;
  uint64_t __temp1222v__unsafe_align=0;
  char __temp1223v____temp465v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint64_t x__unsafe_align=0;
  uint64_t __temp1224v=0;
  char* __temp1225v__=0;
  double __temp1226v=0;
  uint64_t __temp1227v=0;
  char* __temp1228v__=0;
  double __temp1229v=0;
  uint64_t __temp1230v=0;
  char* __temp1231v__=0;
  double __temp1232v__z=0;
  uint64_t __temp1236v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1217v(&__temp1219v__unsafe_ptr,&__temp1219v__unsafe_size,&__temp1219v__unsafe_align);
  __temp1220v__unsafe_ptr=__temp1219v__unsafe_ptr;
  __temp1220v__unsafe_size=__temp1219v__unsafe_size;
  __temp1220v__unsafe_align=__temp1219v__unsafe_align;
  __temp1221v=2;
  __temp_errcode=alloc__temp463v(&__temp1220v__unsafe_ptr,&__temp1220v__unsafe_size,&__temp1220v__unsafe_align,__temp1221v,&__temp1222v__unsafe_ptr,&__temp1222v__unsafe_size,&__temp1222v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1222v__unsafe_ptr;
  x__unsafe_size=__temp1222v__unsafe_size;
  x__unsafe_align=__temp1222v__unsafe_align;
  __temp1224v=0;
  __temp_errcode=mutget__temp525v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1224v,&__temp1225v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1226v=1.0;
  if(!__temp1225v__){
  goto __temp_failure;
  }
  memcpy(__temp1225v__,&__temp1226v,8);
  __temp1227v=1;
  __temp_errcode=mutget__temp525v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1227v,&__temp1228v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1229v=2.0;
  if(!__temp1228v__){
  goto __temp_failure;
  }
  memcpy(__temp1228v__,&__temp1229v,8);
  __temp1230v=1;
  __temp_errcode=get__temp529v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1230v,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(&__temp1232v__z,__temp1231v__,8);
  print__temp362v(__temp1232v__z);
  goto __temp_return;
  
  __temp_failure:print__temp360v(__temp1234v,__temp791v);
  len__temp533v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,&x__unsafe_size);
  print__temp370v(x__unsafe_size);
  exists__temp408v(x__unsafe_ptr,&__temp1223v____temp465v__);
  if(__temp1223v____temp465v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  free__temp457v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1280v=x__unsafe_ptr;
  *__temp1281v=x__unsafe_size;
  *__temp1282v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1238v(char** __temp1283v, uint64_t* __temp1284v, uint64_t* __temp1285v, char** __temp1286v, uint64_t* __temp1287v, uint64_t* __temp1288v, char** __temp1289v, uint64_t* __temp1290v, uint64_t* __temp1291v) {
  char* __temp1239v__unsafe_ptr=0;
  uint64_t __temp1239v__unsafe_size=0;
  uint64_t __temp1239v__unsafe_align=0;
  char __temp1240v____temp1223v____temp465v__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint64_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint64_t j__unsafe_align=0;
  char* __temp1241v__unsafe_ptr=0;
  uint64_t __temp1241v__unsafe_size=0;
  uint64_t __temp1241v__unsafe_align=0;
  char* __temp1242v__unsafe_ptr=0;
  uint64_t __temp1242v__unsafe_size=0;
  uint64_t __temp1242v__unsafe_align=0;
  uint64_t __temp1243v=0;
  char* __temp1244v__unsafe_ptr=0;
  uint64_t __temp1244v__unsafe_size=0;
  uint64_t __temp1244v__unsafe_align=0;
  char __temp1245v____temp465v__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint64_t k__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1216v(&__temp1239v__unsafe_ptr,&__temp1239v__unsafe_size,&__temp1239v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1239v__unsafe_ptr;
  t__unsafe_size=__temp1239v__unsafe_size;
  t__unsafe_align=__temp1239v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp1217v(&__temp1241v__unsafe_ptr,&__temp1241v__unsafe_size,&__temp1241v__unsafe_align);
  __temp1242v__unsafe_ptr=__temp1241v__unsafe_ptr;
  __temp1242v__unsafe_size=__temp1241v__unsafe_size;
  __temp1242v__unsafe_align=__temp1241v__unsafe_align;
  __temp1243v=3;
  __temp_errcode=alloc__temp463v(&__temp1242v__unsafe_ptr,&__temp1242v__unsafe_size,&__temp1242v__unsafe_align,__temp1243v,&__temp1244v__unsafe_ptr,&__temp1244v__unsafe_size,&__temp1244v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1244v__unsafe_ptr;
  k__unsafe_size=__temp1244v__unsafe_size;
  k__unsafe_align=__temp1244v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp408v(k__unsafe_ptr,&__temp1245v____temp465v__);
  if(__temp1245v____temp465v__){
  k__unsafe_size=0;
  k__unsafe_size=k__unsafe_size;
  free__temp457v(&k__unsafe_ptr);
  }
  print__temp360v(__temp1234v,__temp791v);
  len__temp533v(t__unsafe_ptr,t__unsafe_size,t__unsafe_align,&t__unsafe_size);
  print__temp370v(t__unsafe_size);
  exists__temp408v(t__unsafe_ptr,&__temp1240v____temp1223v____temp465v__);
  if(__temp1240v____temp1223v____temp465v__){
  t__unsafe_size=0;
  t__unsafe_size=t__unsafe_size;
  free__temp457v(&t__unsafe_ptr);
  }
  __temp_return:
  *__temp1283v=t__unsafe_ptr;
  *__temp1284v=t__unsafe_size;
  *__temp1285v=t__unsafe_align;
  *__temp1286v=j__unsafe_ptr;
  *__temp1287v=j__unsafe_size;
  *__temp1288v=j__unsafe_align;
  *__temp1289v=k__unsafe_ptr;
  *__temp1290v=k__unsafe_size;
  *__temp1291v=k__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1246v() {
  char* __temp1247v__t__unsafe_ptr=0;
  uint64_t __temp1247v__t__unsafe_size=0;
  uint64_t __temp1247v__t__unsafe_align=0;
  char* __temp1247v__j__unsafe_ptr=0;
  uint64_t __temp1247v__j__unsafe_size=0;
  uint64_t __temp1247v__j__unsafe_align=0;
  char* __temp1247v__k__unsafe_ptr=0;
  uint64_t __temp1247v__k__unsafe_size=0;
  uint64_t __temp1247v__k__unsafe_align=0;
  char __temp1248v____temp1240v____temp1223v____temp465v__=0;
  char __temp1248v____temp1245v____temp465v__=0;
  char* t__t__unsafe_ptr=0;
  uint64_t t__t__unsafe_size=0;
  uint64_t t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  uint64_t t__j__unsafe_size=0;
  uint64_t t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  uint64_t t__k__unsafe_size=0;
  uint64_t t__k__unsafe_align=0;
  uint64_t __temp1249v=0;
  char* __temp1250v__=0;
  double __temp1251v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1238v(&__temp1247v__t__unsafe_ptr,&__temp1247v__t__unsafe_size,&__temp1247v__t__unsafe_align,&__temp1247v__j__unsafe_ptr,&__temp1247v__j__unsafe_size,&__temp1247v__j__unsafe_align,&__temp1247v__k__unsafe_ptr,&__temp1247v__k__unsafe_size,&__temp1247v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1247v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1247v__t__unsafe_size;
  t__t__unsafe_align=__temp1247v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1247v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1247v__j__unsafe_size;
  t__j__unsafe_align=__temp1247v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1247v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1247v__k__unsafe_size;
  t__k__unsafe_align=__temp1247v__k__unsafe_align;
  __temp1249v=1;
  __temp_errcode=get__temp529v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1249v,&__temp1250v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1250v__){
  goto __temp_failure;
  }
  memcpy(&__temp1251v__z,__temp1250v__,8);
  print__temp362v(__temp1251v__z);
  
  __temp_failure:exists__temp408v(__temp1247v__k__unsafe_ptr,&__temp1248v____temp1245v____temp465v__);
  if(__temp1248v____temp1245v____temp465v__){
  __temp1247v__k__unsafe_size=0;
  __temp1247v__k__unsafe_size=__temp1247v__k__unsafe_size;
  free__temp457v(&__temp1247v__k__unsafe_ptr);
  }
  print__temp360v(__temp1234v,__temp791v);
  len__temp533v(__temp1247v__t__unsafe_ptr,__temp1247v__t__unsafe_size,__temp1247v__t__unsafe_align,&__temp1247v__t__unsafe_size);
  print__temp370v(__temp1247v__t__unsafe_size);
  exists__temp408v(__temp1247v__t__unsafe_ptr,&__temp1248v____temp1240v____temp1223v____temp465v__);
  if(__temp1248v____temp1240v____temp1223v____temp465v__){
  __temp1247v__t__unsafe_size=0;
  __temp1247v__t__unsafe_size=__temp1247v__t__unsafe_size;
  free__temp457v(&__temp1247v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1246v();return 0;}