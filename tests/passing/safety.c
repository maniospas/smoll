#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1237v="going to deallocate of size: ";
const char* const __temp794v="";
const char* const __temp364v="\n";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1220v(char** __temp1256v, uint64_t* __temp1257v, uint64_t* __temp1258v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1256v=unsafe_ptr;
  *__temp1257v=unsafe_size;
  *__temp1258v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp411v(char* x, char* __temp1259v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1259v=z;
}

static inline __attribute__((always_inline)) void free__temp460v(char** __temp1260v) {
  char* allocated=*__temp1260v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1260v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1261v) {
  int value=0;
  *__temp1261v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1262v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1262v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1263v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1263v=__temp94v__;
}

static inline __attribute__((always_inline)) void eq__temp117v(uint64_t x, uint64_t y, char* __temp1264v) {
  int __temp118v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp118v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1264v=z;
}

static inline __attribute__((always_inline)) void neq__temp141v(uint64_t x, uint64_t y, char* __temp1265v) {
  int __temp142v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp142v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1265v=z;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp1266v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1266v=z;
}

static inline __attribute__((always_inline)) void zero__temp461v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp457v(uint64_t bytes, char** __temp1267v) {
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
  *__temp1267v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp466v(char** __temp1268v, uint64_t* __temp1269v, uint64_t* __temp1270v, uint64_t size, char** __temp1271v, uint64_t* __temp1272v, uint64_t* __temp1273v) {
  char* buffer__unsafe_ptr=*__temp1268v;
  uint64_t buffer__unsafe_size=*__temp1269v;
  uint64_t buffer__unsafe_align=*__temp1270v;
  int __temp467v=0;
  char __temp468v__=0;
  uint64_t __temp469v=0;
  char __temp471v__=0;
  uint64_t __temp472v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  uint64_t __temp475v__=0;
  uint64_t __temp477v=0;
  char __temp478v__=0;
  uint64_t __temp479v__=0;
  uint64_t bytes=0;
  char* __temp480v__=0;
  uint64_t __temp481v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp117v(buffer__unsafe_size,size,&__temp471v__);
  if(__temp471v__){
  __temp472v=0;
  neq__temp141v(size,__temp472v,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  mul__temp193v(buffer__unsafe_align,size,&__temp475v__);
  zero__temp461v(buffer__unsafe_ptr,__temp474v,__temp475v__);
  }
  goto __temp_return;
  }
  __temp477v=0;
  neq__temp141v(buffer__unsafe_size,__temp477v,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_align,size,&__temp479v__);
  bytes=__temp479v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp457v(bytes,&__temp480v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp480v__;
  __temp481v=0;
  zero__temp461v(buffer__unsafe_ptr,__temp481v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(buffer__unsafe_ptr,&__temp468v__);
  if(__temp468v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp460v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1268v=buffer__unsafe_ptr;
  *__temp1269v=buffer__unsafe_size;
  *__temp1270v=buffer__unsafe_align;
  *__temp1271v=buffer__unsafe_ptr;
  *__temp1272v=buffer__unsafe_size;
  *__temp1273v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1274v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1274v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp19v(char* to, char* from, char** __temp1275v) {
  *__temp1275v=to;
}

static inline __attribute__((always_inline)) void add__temp462v(char* allocated, uint64_t offset, char** __temp1276v) {
  char* element=0;
  char* __temp463v__=0;
  element=allocated+offset;
  attach_type__temp19v(element,allocated,&__temp463v__);
  goto __temp_return;
  __temp_return:
  *__temp1276v=__temp463v__;
}

static inline __attribute__((always_inline)) int mutget__temp528v(char** __temp1277v, uint64_t* __temp1278v, uint64_t* __temp1279v, uint64_t i, char** __temp1280v) {
  char* buffer__unsafe_ptr=*__temp1277v;
  uint64_t buffer__unsafe_size=*__temp1278v;
  uint64_t buffer__unsafe_align=*__temp1279v;
  char __temp529v__=0;
  uint64_t __temp530v__=0;
  char* __temp531v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp529v__);
  if(__temp529v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp530v__);
  add__temp462v(buffer__unsafe_ptr,__temp530v__,&__temp531v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1277v=buffer__unsafe_ptr;
  *__temp1278v=buffer__unsafe_size;
  *__temp1279v=buffer__unsafe_align;
  *__temp1280v=__temp531v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp532v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1281v) {
  char __temp533v__=0;
  uint64_t __temp534v__=0;
  char* __temp535v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp533v__);
  if(__temp533v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp534v__);
  add__temp462v(buffer__unsafe_ptr,__temp534v__,&__temp535v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1281v=__temp535v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp367v(double value) {
  int __temp368v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp360v(const char* value, const char* endl) {
  int __temp361v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__temp536v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1282v) {
  goto __temp_return;
  __temp_return:
  *__temp1282v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp375v(uint64_t value) {
  int __temp376v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1219v(char** __temp1283v, uint64_t* __temp1284v, uint64_t* __temp1285v) {
  char* __temp1222v__unsafe_ptr=0;
  uint64_t __temp1222v__unsafe_size=0;
  uint64_t __temp1222v__unsafe_align=0;
  char* __temp1223v__unsafe_ptr=0;
  uint64_t __temp1223v__unsafe_size=0;
  uint64_t __temp1223v__unsafe_align=0;
  uint64_t __temp1224v=0;
  char* __temp1225v__unsafe_ptr=0;
  uint64_t __temp1225v__unsafe_size=0;
  uint64_t __temp1225v__unsafe_align=0;
  char __temp1226v____temp468v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint64_t x__unsafe_align=0;
  uint64_t __temp1227v=0;
  char* __temp1228v__=0;
  double __temp1229v=0;
  uint64_t __temp1230v=0;
  char* __temp1231v__=0;
  double __temp1232v=0;
  uint64_t __temp1233v=0;
  char* __temp1234v__=0;
  double __temp1235v__z=0;
  uint64_t __temp1239v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1220v(&__temp1222v__unsafe_ptr,&__temp1222v__unsafe_size,&__temp1222v__unsafe_align);
  __temp1223v__unsafe_ptr=__temp1222v__unsafe_ptr;
  __temp1223v__unsafe_size=__temp1222v__unsafe_size;
  __temp1223v__unsafe_align=__temp1222v__unsafe_align;
  __temp1224v=2;
  __temp_errcode=alloc__temp466v(&__temp1223v__unsafe_ptr,&__temp1223v__unsafe_size,&__temp1223v__unsafe_align,__temp1224v,&__temp1225v__unsafe_ptr,&__temp1225v__unsafe_size,&__temp1225v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1225v__unsafe_ptr;
  x__unsafe_size=__temp1225v__unsafe_size;
  x__unsafe_align=__temp1225v__unsafe_align;
  __temp1227v=0;
  __temp_errcode=mutget__temp528v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1227v,&__temp1228v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1229v=1.0;
  if(!__temp1228v__){
  goto __temp_failure;
  }
  memcpy(__temp1228v__,&__temp1229v,8);
  __temp1230v=1;
  __temp_errcode=mutget__temp528v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1230v,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1232v=2.0;
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(__temp1231v__,&__temp1232v,8);
  __temp1233v=1;
  __temp_errcode=get__temp532v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1233v,&__temp1234v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1234v__){
  goto __temp_failure;
  }
  memcpy(&__temp1235v__z,__temp1234v__,8);
  print__temp367v(__temp1235v__z);
  goto __temp_return;
  
  __temp_failure:print__temp360v(__temp1237v,__temp794v);
  len__temp536v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,&x__unsafe_size);
  print__temp375v(x__unsafe_size);
  exists__temp411v(x__unsafe_ptr,&__temp1226v____temp468v__);
  if(__temp1226v____temp468v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  free__temp460v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1283v=x__unsafe_ptr;
  *__temp1284v=x__unsafe_size;
  *__temp1285v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1241v(char** __temp1286v, uint64_t* __temp1287v, uint64_t* __temp1288v, char** __temp1289v, uint64_t* __temp1290v, uint64_t* __temp1291v, char** __temp1292v, uint64_t* __temp1293v, uint64_t* __temp1294v) {
  char* __temp1242v__unsafe_ptr=0;
  uint64_t __temp1242v__unsafe_size=0;
  uint64_t __temp1242v__unsafe_align=0;
  char __temp1243v____temp1226v____temp468v__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint64_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint64_t j__unsafe_align=0;
  char* __temp1244v__unsafe_ptr=0;
  uint64_t __temp1244v__unsafe_size=0;
  uint64_t __temp1244v__unsafe_align=0;
  char* __temp1245v__unsafe_ptr=0;
  uint64_t __temp1245v__unsafe_size=0;
  uint64_t __temp1245v__unsafe_align=0;
  uint64_t __temp1246v=0;
  char* __temp1247v__unsafe_ptr=0;
  uint64_t __temp1247v__unsafe_size=0;
  uint64_t __temp1247v__unsafe_align=0;
  char __temp1248v____temp468v__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint64_t k__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1219v(&__temp1242v__unsafe_ptr,&__temp1242v__unsafe_size,&__temp1242v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1242v__unsafe_ptr;
  t__unsafe_size=__temp1242v__unsafe_size;
  t__unsafe_align=__temp1242v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float__temp_buffer__buffer__temp1220v(&__temp1244v__unsafe_ptr,&__temp1244v__unsafe_size,&__temp1244v__unsafe_align);
  __temp1245v__unsafe_ptr=__temp1244v__unsafe_ptr;
  __temp1245v__unsafe_size=__temp1244v__unsafe_size;
  __temp1245v__unsafe_align=__temp1244v__unsafe_align;
  __temp1246v=3;
  __temp_errcode=alloc__temp466v(&__temp1245v__unsafe_ptr,&__temp1245v__unsafe_size,&__temp1245v__unsafe_align,__temp1246v,&__temp1247v__unsafe_ptr,&__temp1247v__unsafe_size,&__temp1247v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1247v__unsafe_ptr;
  k__unsafe_size=__temp1247v__unsafe_size;
  k__unsafe_align=__temp1247v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(k__unsafe_ptr,&__temp1248v____temp468v__);
  if(__temp1248v____temp468v__){
  k__unsafe_size=0;
  k__unsafe_size=k__unsafe_size;
  free__temp460v(&k__unsafe_ptr);
  }
  print__temp360v(__temp1237v,__temp794v);
  len__temp536v(t__unsafe_ptr,t__unsafe_size,t__unsafe_align,&t__unsafe_size);
  print__temp375v(t__unsafe_size);
  exists__temp411v(t__unsafe_ptr,&__temp1243v____temp1226v____temp468v__);
  if(__temp1243v____temp1226v____temp468v__){
  t__unsafe_size=0;
  t__unsafe_size=t__unsafe_size;
  free__temp460v(&t__unsafe_ptr);
  }
  __temp_return:
  *__temp1286v=t__unsafe_ptr;
  *__temp1287v=t__unsafe_size;
  *__temp1288v=t__unsafe_align;
  *__temp1289v=j__unsafe_ptr;
  *__temp1290v=j__unsafe_size;
  *__temp1291v=j__unsafe_align;
  *__temp1292v=k__unsafe_ptr;
  *__temp1293v=k__unsafe_size;
  *__temp1294v=k__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1249v() {
  char* __temp1250v__t__unsafe_ptr=0;
  uint64_t __temp1250v__t__unsafe_size=0;
  uint64_t __temp1250v__t__unsafe_align=0;
  char* __temp1250v__j__unsafe_ptr=0;
  uint64_t __temp1250v__j__unsafe_size=0;
  uint64_t __temp1250v__j__unsafe_align=0;
  char* __temp1250v__k__unsafe_ptr=0;
  uint64_t __temp1250v__k__unsafe_size=0;
  uint64_t __temp1250v__k__unsafe_align=0;
  char __temp1251v____temp1243v____temp1226v____temp468v__=0;
  char __temp1251v____temp1248v____temp468v__=0;
  char* t__t__unsafe_ptr=0;
  uint64_t t__t__unsafe_size=0;
  uint64_t t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  uint64_t t__j__unsafe_size=0;
  uint64_t t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  uint64_t t__k__unsafe_size=0;
  uint64_t t__k__unsafe_align=0;
  uint64_t __temp1252v=0;
  char* __temp1253v__=0;
  double __temp1254v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1241v(&__temp1250v__t__unsafe_ptr,&__temp1250v__t__unsafe_size,&__temp1250v__t__unsafe_align,&__temp1250v__j__unsafe_ptr,&__temp1250v__j__unsafe_size,&__temp1250v__j__unsafe_align,&__temp1250v__k__unsafe_ptr,&__temp1250v__k__unsafe_size,&__temp1250v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1250v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1250v__t__unsafe_size;
  t__t__unsafe_align=__temp1250v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1250v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1250v__j__unsafe_size;
  t__j__unsafe_align=__temp1250v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1250v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1250v__k__unsafe_size;
  t__k__unsafe_align=__temp1250v__k__unsafe_align;
  __temp1252v=1;
  __temp_errcode=get__temp532v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1252v,&__temp1253v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1253v__){
  goto __temp_failure;
  }
  memcpy(&__temp1254v__z,__temp1253v__,8);
  print__temp367v(__temp1254v__z);
  
  __temp_failure:exists__temp411v(__temp1250v__k__unsafe_ptr,&__temp1251v____temp1248v____temp468v__);
  if(__temp1251v____temp1248v____temp468v__){
  __temp1250v__k__unsafe_size=0;
  __temp1250v__k__unsafe_size=__temp1250v__k__unsafe_size;
  free__temp460v(&__temp1250v__k__unsafe_ptr);
  }
  print__temp360v(__temp1237v,__temp794v);
  len__temp536v(__temp1250v__t__unsafe_ptr,__temp1250v__t__unsafe_size,__temp1250v__t__unsafe_align,&__temp1250v__t__unsafe_size);
  print__temp375v(__temp1250v__t__unsafe_size);
  exists__temp411v(__temp1250v__t__unsafe_ptr,&__temp1251v____temp1243v____temp1226v____temp468v__);
  if(__temp1251v____temp1243v____temp1226v____temp468v__){
  __temp1250v__t__unsafe_size=0;
  __temp1250v__t__unsafe_size=__temp1250v__t__unsafe_size;
  free__temp460v(&__temp1250v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1249v();return 0;}