#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1240v="going to deallocate of size: ";
const char* const __temp797v="";
static const char* __temp_all_errcodes[30] = {"noerr",
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
"can only define strings on contiguous buffers",
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1223v(char** __temp1259v, uint64_t* __temp1260v, uint64_t* __temp1261v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1259v=unsafe_ptr;
  *__temp1260v=unsafe_size;
  *__temp1261v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1262v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1263v) {
  char* allocated=*__temp1263v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1263v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1264v) {
  int value=0;
  *__temp1264v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1265v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1265v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1266v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1266v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1267v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1267v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1268v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1268v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1269v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1269v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1270v) {
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
  *__temp1270v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1271v, uint64_t* __temp1272v, uint64_t* __temp1273v, uint64_t size, char** __temp1274v, uint64_t* __temp1275v, uint64_t* __temp1276v) {
  char* buffer__unsafe_ptr=*__temp1271v;
  uint64_t buffer__unsafe_size=*__temp1272v;
  uint64_t buffer__unsafe_align=*__temp1273v;
  int __temp468v=0;
  char __temp469v__=0;
  uint64_t __temp470v=0;
  char __temp472v__=0;
  uint64_t __temp473v=0;
  char __temp474v__=0;
  uint64_t __temp475v=0;
  uint64_t __temp476v__=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t bytes=0;
  char* __temp481v__=0;
  uint64_t __temp482v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  neq__temp142v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  mul__temp194v(buffer__unsafe_align,size,&__temp476v__);
  zero__temp462v(buffer__unsafe_ptr,__temp475v,__temp476v__);
  }
  goto __temp_return;
  }
  __temp478v=0;
  neq__temp142v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp194v(buffer__unsafe_align,size,&__temp480v__);
  bytes=__temp480v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp481v__;
  __temp482v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp482v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp469v__);
  if(__temp469v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1271v=buffer__unsafe_ptr;
  *__temp1272v=buffer__unsafe_size;
  *__temp1273v=buffer__unsafe_align;
  *__temp1274v=buffer__unsafe_ptr;
  *__temp1275v=buffer__unsafe_size;
  *__temp1276v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1277v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1278v) {
  *__temp1278v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1279v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1279v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1280v, uint64_t* __temp1281v, uint64_t* __temp1282v, uint64_t i, char** __temp1283v) {
  char* buffer__unsafe_ptr=*__temp1280v;
  uint64_t buffer__unsafe_size=*__temp1281v;
  uint64_t buffer__unsafe_align=*__temp1282v;
  char __temp530v__=0;
  uint64_t __temp531v__=0;
  char* __temp532v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp530v__);
  if(__temp530v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp194v(i,buffer__unsafe_align,&__temp531v__);
  add__temp463v(buffer__unsafe_ptr,__temp531v__,&__temp532v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1280v=buffer__unsafe_ptr;
  *__temp1281v=buffer__unsafe_size;
  *__temp1282v=buffer__unsafe_align;
  *__temp1283v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1284v) {
  char __temp534v__=0;
  uint64_t __temp535v__=0;
  char* __temp536v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp534v__);
  if(__temp534v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp194v(i,buffer__unsafe_align,&__temp535v__);
  add__temp463v(buffer__unsafe_ptr,__temp535v__,&__temp536v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1284v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void print__temp361v(const char* value, const char* endl) {
  int __temp362v=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1285v) {
  goto __temp_return;
  __temp_return:
  *__temp1285v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int test1__temp1222v(char** __temp1286v, uint64_t* __temp1287v, uint64_t* __temp1288v) {
  char* __temp1225v__unsafe_ptr=0;
  uint64_t __temp1225v__unsafe_size=0;
  uint64_t __temp1225v__unsafe_align=0;
  char* __temp1226v__unsafe_ptr=0;
  uint64_t __temp1226v__unsafe_size=0;
  uint64_t __temp1226v__unsafe_align=0;
  uint64_t __temp1227v=0;
  char* __temp1228v__unsafe_ptr=0;
  uint64_t __temp1228v__unsafe_size=0;
  uint64_t __temp1228v__unsafe_align=0;
  char __temp1229v____temp469v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint64_t x__unsafe_align=0;
  uint64_t __temp1230v=0;
  char* __temp1231v__=0;
  double __temp1232v=0;
  uint64_t __temp1233v=0;
  char* __temp1234v__=0;
  double __temp1235v=0;
  uint64_t __temp1236v=0;
  char* __temp1237v__=0;
  double __temp1238v__number=0;
  uint64_t __temp1242v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1223v(&__temp1225v__unsafe_ptr,&__temp1225v__unsafe_size,&__temp1225v__unsafe_align);
  __temp1226v__unsafe_ptr=__temp1225v__unsafe_ptr;
  __temp1226v__unsafe_size=__temp1225v__unsafe_size;
  __temp1226v__unsafe_align=__temp1225v__unsafe_align;
  __temp1227v=2;
  __temp_errcode=alloc__temp467v(&__temp1226v__unsafe_ptr,&__temp1226v__unsafe_size,&__temp1226v__unsafe_align,__temp1227v,&__temp1228v__unsafe_ptr,&__temp1228v__unsafe_size,&__temp1228v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1228v__unsafe_ptr;
  x__unsafe_size=__temp1228v__unsafe_size;
  x__unsafe_align=__temp1228v__unsafe_align;
  __temp1230v=0;
  __temp_errcode=mutget__temp529v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1230v,&__temp1231v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1232v=1.0;
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(__temp1231v__,&__temp1232v,8);
  __temp1233v=1;
  __temp_errcode=mutget__temp529v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1233v,&__temp1234v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1235v=2.0;
  if(!__temp1234v__){
  goto __temp_failure;
  }
  memcpy(__temp1234v__,&__temp1235v,8);
  __temp1236v=1;
  __temp_errcode=get__temp533v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1236v,&__temp1237v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(&__temp1238v__number,__temp1237v__,8);
  print__temp368v(__temp1238v__number);
  goto __temp_return;
  
  __temp_failure:print__temp361v(__temp1240v,__temp797v);
  len__temp537v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,&x__unsafe_size);
  print__temp376v(x__unsafe_size);
  exists__temp412v(x__unsafe_ptr,&__temp1229v____temp469v__);
  if(__temp1229v____temp469v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  free__temp461v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1286v=x__unsafe_ptr;
  *__temp1287v=x__unsafe_size;
  *__temp1288v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1244v(char** __temp1289v, uint64_t* __temp1290v, uint64_t* __temp1291v, char** __temp1292v, uint64_t* __temp1293v, uint64_t* __temp1294v, char** __temp1295v, uint64_t* __temp1296v, uint64_t* __temp1297v) {
  char* __temp1245v__unsafe_ptr=0;
  uint64_t __temp1245v__unsafe_size=0;
  uint64_t __temp1245v__unsafe_align=0;
  char __temp1246v____temp1229v____temp469v__=0;
  char* t__unsafe_ptr=0;
  uint64_t t__unsafe_size=0;
  uint64_t t__unsafe_align=0;
  char* j__unsafe_ptr=0;
  uint64_t j__unsafe_size=0;
  uint64_t j__unsafe_align=0;
  char* __temp1247v__unsafe_ptr=0;
  uint64_t __temp1247v__unsafe_size=0;
  uint64_t __temp1247v__unsafe_align=0;
  char* __temp1248v__unsafe_ptr=0;
  uint64_t __temp1248v__unsafe_size=0;
  uint64_t __temp1248v__unsafe_align=0;
  uint64_t __temp1249v=0;
  char* __temp1250v__unsafe_ptr=0;
  uint64_t __temp1250v__unsafe_size=0;
  uint64_t __temp1250v__unsafe_align=0;
  char __temp1251v____temp469v__=0;
  char* k__unsafe_ptr=0;
  uint64_t k__unsafe_size=0;
  uint64_t k__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1222v(&__temp1245v__unsafe_ptr,&__temp1245v__unsafe_size,&__temp1245v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__unsafe_ptr=__temp1245v__unsafe_ptr;
  t__unsafe_size=__temp1245v__unsafe_size;
  t__unsafe_align=__temp1245v__unsafe_align;
  j__unsafe_ptr=t__unsafe_ptr;
  j__unsafe_size=t__unsafe_size;
  j__unsafe_align=t__unsafe_align;
  float____temp_buffer____buffer__temp1223v(&__temp1247v__unsafe_ptr,&__temp1247v__unsafe_size,&__temp1247v__unsafe_align);
  __temp1248v__unsafe_ptr=__temp1247v__unsafe_ptr;
  __temp1248v__unsafe_size=__temp1247v__unsafe_size;
  __temp1248v__unsafe_align=__temp1247v__unsafe_align;
  __temp1249v=3;
  __temp_errcode=alloc__temp467v(&__temp1248v__unsafe_ptr,&__temp1248v__unsafe_size,&__temp1248v__unsafe_align,__temp1249v,&__temp1250v__unsafe_ptr,&__temp1250v__unsafe_size,&__temp1250v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  k__unsafe_ptr=__temp1250v__unsafe_ptr;
  k__unsafe_size=__temp1250v__unsafe_size;
  k__unsafe_align=__temp1250v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(k__unsafe_ptr,&__temp1251v____temp469v__);
  if(__temp1251v____temp469v__){
  k__unsafe_size=0;
  k__unsafe_size=k__unsafe_size;
  free__temp461v(&k__unsafe_ptr);
  }
  print__temp361v(__temp1240v,__temp797v);
  len__temp537v(t__unsafe_ptr,t__unsafe_size,t__unsafe_align,&t__unsafe_size);
  print__temp376v(t__unsafe_size);
  exists__temp412v(t__unsafe_ptr,&__temp1246v____temp1229v____temp469v__);
  if(__temp1246v____temp1229v____temp469v__){
  t__unsafe_size=0;
  t__unsafe_size=t__unsafe_size;
  free__temp461v(&t__unsafe_ptr);
  }
  __temp_return:
  *__temp1289v=t__unsafe_ptr;
  *__temp1290v=t__unsafe_size;
  *__temp1291v=t__unsafe_align;
  *__temp1292v=j__unsafe_ptr;
  *__temp1293v=j__unsafe_size;
  *__temp1294v=j__unsafe_align;
  *__temp1295v=k__unsafe_ptr;
  *__temp1296v=k__unsafe_size;
  *__temp1297v=k__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1252v() {
  char* __temp1253v__t__unsafe_ptr=0;
  uint64_t __temp1253v__t__unsafe_size=0;
  uint64_t __temp1253v__t__unsafe_align=0;
  char* __temp1253v__j__unsafe_ptr=0;
  uint64_t __temp1253v__j__unsafe_size=0;
  uint64_t __temp1253v__j__unsafe_align=0;
  char* __temp1253v__k__unsafe_ptr=0;
  uint64_t __temp1253v__k__unsafe_size=0;
  uint64_t __temp1253v__k__unsafe_align=0;
  char __temp1254v____temp1246v____temp1229v____temp469v__=0;
  char __temp1254v____temp1251v____temp469v__=0;
  char* t__t__unsafe_ptr=0;
  uint64_t t__t__unsafe_size=0;
  uint64_t t__t__unsafe_align=0;
  char* t__j__unsafe_ptr=0;
  uint64_t t__j__unsafe_size=0;
  uint64_t t__j__unsafe_align=0;
  char* t__k__unsafe_ptr=0;
  uint64_t t__k__unsafe_size=0;
  uint64_t t__k__unsafe_align=0;
  uint64_t __temp1255v=0;
  char* __temp1256v__=0;
  double __temp1257v__number=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1244v(&__temp1253v__t__unsafe_ptr,&__temp1253v__t__unsafe_size,&__temp1253v__t__unsafe_align,&__temp1253v__j__unsafe_ptr,&__temp1253v__j__unsafe_size,&__temp1253v__j__unsafe_align,&__temp1253v__k__unsafe_ptr,&__temp1253v__k__unsafe_size,&__temp1253v__k__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  t__t__unsafe_ptr=__temp1253v__t__unsafe_ptr;
  t__t__unsafe_size=__temp1253v__t__unsafe_size;
  t__t__unsafe_align=__temp1253v__t__unsafe_align;
  t__j__unsafe_ptr=__temp1253v__j__unsafe_ptr;
  t__j__unsafe_size=__temp1253v__j__unsafe_size;
  t__j__unsafe_align=__temp1253v__j__unsafe_align;
  t__k__unsafe_ptr=__temp1253v__k__unsafe_ptr;
  t__k__unsafe_size=__temp1253v__k__unsafe_size;
  t__k__unsafe_align=__temp1253v__k__unsafe_align;
  __temp1255v=1;
  __temp_errcode=get__temp533v(t__t__unsafe_ptr,t__t__unsafe_size,t__t__unsafe_align,__temp1255v,&__temp1256v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1256v__){
  goto __temp_failure;
  }
  memcpy(&__temp1257v__number,__temp1256v__,8);
  print__temp368v(__temp1257v__number);
  
  __temp_failure:exists__temp412v(__temp1253v__k__unsafe_ptr,&__temp1254v____temp1251v____temp469v__);
  if(__temp1254v____temp1251v____temp469v__){
  __temp1253v__k__unsafe_size=0;
  __temp1253v__k__unsafe_size=__temp1253v__k__unsafe_size;
  free__temp461v(&__temp1253v__k__unsafe_ptr);
  }
  print__temp361v(__temp1240v,__temp797v);
  len__temp537v(__temp1253v__t__unsafe_ptr,__temp1253v__t__unsafe_size,__temp1253v__t__unsafe_align,&__temp1253v__t__unsafe_size);
  print__temp376v(__temp1253v__t__unsafe_size);
  exists__temp412v(__temp1253v__t__unsafe_ptr,&__temp1254v____temp1246v____temp1229v____temp469v__);
  if(__temp1254v____temp1246v____temp1229v____temp469v__){
  __temp1253v__t__unsafe_size=0;
  __temp1253v__t__unsafe_size=__temp1253v__t__unsafe_size;
  free__temp461v(&__temp1253v__t__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1252v();return 0;}