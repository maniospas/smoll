#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1220v(char** __temp1249v, uint64_t* __temp1250v, uint64_t* __temp1251v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1249v=unsafe_ptr;
  *__temp1250v=unsafe_size;
  *__temp1251v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp411v(char* x, char* __temp1252v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1252v=z;
}

static inline __attribute__((always_inline)) void free__temp460v(char** __temp1253v) {
  char* allocated=*__temp1253v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1253v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1254v) {
  int value=0;
  *__temp1254v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1255v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1255v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1256v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1256v=__temp94v__;
}

static inline __attribute__((always_inline)) void eq__temp117v(uint64_t x, uint64_t y, char* __temp1257v) {
  int __temp118v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp118v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1257v=z;
}

static inline __attribute__((always_inline)) void neq__temp141v(uint64_t x, uint64_t y, char* __temp1258v) {
  int __temp142v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp142v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1258v=z;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp1259v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1259v=z;
}

static inline __attribute__((always_inline)) void zero__temp461v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp457v(uint64_t bytes, char** __temp1260v) {
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
  *__temp1260v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp466v(char** __temp1261v, uint64_t* __temp1262v, uint64_t* __temp1263v, uint64_t size, char** __temp1264v, uint64_t* __temp1265v, uint64_t* __temp1266v) {
  char* buffer__unsafe_ptr=*__temp1261v;
  uint64_t buffer__unsafe_size=*__temp1262v;
  uint64_t buffer__unsafe_align=*__temp1263v;
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
  *__temp1261v=buffer__unsafe_ptr;
  *__temp1262v=buffer__unsafe_size;
  *__temp1263v=buffer__unsafe_align;
  *__temp1264v=buffer__unsafe_ptr;
  *__temp1265v=buffer__unsafe_size;
  *__temp1266v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1267v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1267v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp19v(char* to, char* from, char** __temp1268v) {
  *__temp1268v=to;
}

static inline __attribute__((always_inline)) void add__temp462v(char* allocated, uint64_t offset, char** __temp1269v) {
  char* element=0;
  char* __temp463v__=0;
  element=allocated+offset;
  attach_type__temp19v(element,allocated,&__temp463v__);
  goto __temp_return;
  __temp_return:
  *__temp1269v=__temp463v__;
}

static inline __attribute__((always_inline)) int mutget__temp528v(char** __temp1270v, uint64_t* __temp1271v, uint64_t* __temp1272v, uint64_t i, char** __temp1273v) {
  char* buffer__unsafe_ptr=*__temp1270v;
  uint64_t buffer__unsafe_size=*__temp1271v;
  uint64_t buffer__unsafe_align=*__temp1272v;
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
  *__temp1270v=buffer__unsafe_ptr;
  *__temp1271v=buffer__unsafe_size;
  *__temp1272v=buffer__unsafe_align;
  *__temp1273v=__temp531v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test1__temp1219v(char** __temp1274v, uint64_t* __temp1275v, uint64_t* __temp1276v) {
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
  char* __temp1230v__unsafe_ptr=0;
  uint64_t __temp1230v__unsafe_size=0;
  uint64_t __temp1230v__unsafe_align=0;
  char* y__unsafe_ptr=0;
  uint64_t y__unsafe_size=0;
  uint64_t y__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1220v(&__temp1222v__unsafe_ptr,&__temp1222v__unsafe_size,&__temp1222v__unsafe_align);
  __temp1223v__unsafe_ptr=__temp1222v__unsafe_ptr;
  __temp1223v__unsafe_size=__temp1222v__unsafe_size;
  __temp1223v__unsafe_align=__temp1222v__unsafe_align;
  __temp1224v=1;
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
  float__temp_buffer__buffer__temp1220v(&__temp1230v__unsafe_ptr,&__temp1230v__unsafe_size,&__temp1230v__unsafe_align);
  y__unsafe_ptr=__temp1230v__unsafe_ptr;
  y__unsafe_size=__temp1230v__unsafe_size;
  y__unsafe_align=__temp1230v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(x__unsafe_ptr,&__temp1226v____temp468v__);
  if(__temp1226v____temp468v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  free__temp460v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1274v=x__unsafe_ptr;
  *__temp1275v=x__unsafe_size;
  *__temp1276v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp458v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1277v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp459v__=0;
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
  __temp_errcode=9;
  goto __temp_failure;
  }
  attach_type__temp19v(new_allocated,allocated__unsafe_ptr,&__temp459v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1277v=__temp459v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp246v(uint64_t x, uint64_t y, char* __temp1278v) {
  int __temp247v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp247v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) int resize__temp501v(char** __temp1279v, uint64_t* __temp1280v, uint64_t* __temp1281v, uint64_t size, char** __temp1282v, uint64_t* __temp1283v, uint64_t* __temp1284v) {
  char* buffer__unsafe_ptr=*__temp1279v;
  uint64_t buffer__unsafe_size=*__temp1280v;
  uint64_t buffer__unsafe_align=*__temp1281v;
  char __temp502v__=0;
  uint64_t __temp503v=0;
  char __temp504v__=0;
  uint64_t __temp505v=0;
  uint64_t __temp507v=0;
  char __temp508v__=0;
  uint64_t __temp509v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp510v__=0;
  uint64_t bytes=0;
  char* __temp511v__=0;
  char __temp512v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(buffer__unsafe_size,size,&__temp502v__);
  if(__temp502v__){
  goto __temp_return;
  }
  __temp503v=0;
  eq__temp117v(size,__temp503v,&__temp504v__);
  if(__temp504v__){
  __temp505v=0;
  buffer__unsafe_size=__temp505v;
  free__temp460v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp507v=0;
  eq__temp117v(buffer__unsafe_size,__temp507v,&__temp508v__);
  if(__temp508v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_size,buffer__unsafe_align,&__temp509v__);
  prev_bytes=__temp509v__;
  buffer__unsafe_size=size;
  mul__temp193v(buffer__unsafe_align,size,&__temp510v__);
  bytes=__temp510v__;
  __temp_errcode=realloc__temp458v(buffer__unsafe_ptr,bytes,&__temp511v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp511v__;
  lt__temp246v(prev_bytes,bytes,&__temp512v__);
  if(__temp512v__){
  zero__temp461v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1279v=buffer__unsafe_ptr;
  *__temp1280v=buffer__unsafe_size;
  *__temp1281v=buffer__unsafe_align;
  *__temp1282v=buffer__unsafe_ptr;
  *__temp1283v=buffer__unsafe_size;
  *__temp1284v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp346v(uint64_t x, uint64_t y, uint64_t* __temp1285v) {
  int __temp347v__=0;
  int __temp348v=0;
  int __temp349v=0;
  char __temp350v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp92v(x,y,&__temp347v__);
  lt__temp246v(x,y,&__temp350v__);
  if(__temp350v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1285v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp521v(char** __temp1286v, uint64_t* __temp1287v, uint64_t* __temp1288v, char** __temp1289v) {
  char* buffer__unsafe_ptr=*__temp1286v;
  uint64_t buffer__unsafe_size=*__temp1287v;
  uint64_t buffer__unsafe_align=*__temp1288v;
  uint64_t __temp522v=0;
  char __temp523v__=0;
  uint64_t __temp524v=0;
  uint64_t __temp525v__=0;
  uint64_t __temp526v__=0;
  char* __temp527v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp522v=0;
  eq__temp117v(__temp522v,buffer__unsafe_size,&__temp523v__);
  if(__temp523v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp524v=1;
  __temp_errcode=sub__temp346v(buffer__unsafe_size,__temp524v,&__temp525v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp193v(__temp525v__,buffer__unsafe_align,&__temp526v__);
  add__temp462v(buffer__unsafe_ptr,__temp526v__,&__temp527v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1286v=buffer__unsafe_ptr;
  *__temp1287v=buffer__unsafe_size;
  *__temp1288v=buffer__unsafe_align;
  *__temp1289v=__temp527v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1231v(char** __temp1290v, uint64_t* __temp1291v, uint64_t* __temp1292v) {
  char* x__unsafe_ptr=*__temp1290v;
  uint64_t x__unsafe_size=*__temp1291v;
  uint64_t x__unsafe_align=*__temp1292v;
  uint64_t __temp1232v=0;
  char* __temp1233v__unsafe_ptr=0;
  uint64_t __temp1233v__unsafe_size=0;
  uint64_t __temp1233v__unsafe_align=0;
  char* __temp1234v__=0;
  double __temp1235v=0;
  char* __temp1236v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1232v=2;
  __temp_errcode=resize__temp501v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1232v,&__temp1233v__unsafe_ptr,&__temp1233v__unsafe_size,&__temp1233v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp521v(&__temp1233v__unsafe_ptr,&__temp1233v__unsafe_size,&__temp1233v__unsafe_align,&__temp1234v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1235v=2.0;
  if(!__temp1234v__){
  goto __temp_failure;
  }
  memcpy(__temp1234v__,&__temp1235v,8);
  __temp1236v=__temp1234v__;
  
  __temp_failure:*__temp1290v=x__unsafe_ptr;
  *__temp1291v=x__unsafe_size;
  *__temp1292v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp532v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1293v) {
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
  *__temp1293v=__temp535v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp68v(double x, double y, int* __temp1294v) {
  int __temp69v=0;
  int __temp70v__=0;
  not__temp34v(__temp69v,&__temp70v__);
  goto __temp_return;
  __temp_return:
  *__temp1294v=__temp70v__;
}

static inline __attribute__((always_inline)) void add__temp147v(double x, double y, double* __temp1295v) {
  int __temp148v__=0;
  double z=0;
  is_different__temp68v(x,y,&__temp148v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1295v=z;
}

static inline __attribute__((always_inline)) void print__temp367v(double value) {
  int __temp368v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1237v() {
  char* __temp1238v__unsafe_ptr=0;
  uint64_t __temp1238v__unsafe_size=0;
  uint64_t __temp1238v__unsafe_align=0;
  char __temp1239v____temp1226v____temp468v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint64_t x__unsafe_align=0;
  uint64_t __temp1241v=0;
  char* __temp1242v__=0;
  double __temp1243v__z=0;
  uint64_t __temp1244v=0;
  char* __temp1245v__=0;
  double __temp1246v__z=0;
  double __temp1247v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1219v(&__temp1238v__unsafe_ptr,&__temp1238v__unsafe_size,&__temp1238v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1238v__unsafe_ptr;
  x__unsafe_size=__temp1238v__unsafe_size;
  x__unsafe_align=__temp1238v__unsafe_align;
  __temp_errcode=test2__temp1231v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1241v=0;
  __temp_errcode=get__temp532v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1241v,&__temp1242v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1242v__){
  goto __temp_failure;
  }
  memcpy(&__temp1243v__z,__temp1242v__,8);
  __temp1244v=1;
  __temp_errcode=get__temp532v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1244v,&__temp1245v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1245v__){
  goto __temp_failure;
  }
  memcpy(&__temp1246v__z,__temp1245v__,8);
  add__temp147v(__temp1243v__z,__temp1246v__z,&__temp1247v__);
  print__temp367v(__temp1247v__);
  
  __temp_failure:exists__temp411v(__temp1238v__unsafe_ptr,&__temp1239v____temp1226v____temp468v__);
  if(__temp1239v____temp1226v____temp468v__){
  __temp1238v__unsafe_size=0;
  __temp1238v__unsafe_size=__temp1238v__unsafe_size;
  free__temp460v(&__temp1238v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1237v();return 0;}