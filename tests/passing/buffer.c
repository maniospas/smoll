#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
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

static inline __attribute__((always_inline)) void float____temp_buffer____buffer__temp1223v(char** __temp1252v, uint64_t* __temp1253v, uint64_t* __temp1254v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1252v=unsafe_ptr;
  *__temp1253v=unsafe_size;
  *__temp1254v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1255v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1255v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1256v) {
  char* allocated=*__temp1256v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1256v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1257v) {
  int value=0;
  *__temp1257v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1258v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1258v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1259v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1259v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1260v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1260v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1261v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1261v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1262v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1263v) {
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
  *__temp1263v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1264v, uint64_t* __temp1265v, uint64_t* __temp1266v, uint64_t size, char** __temp1267v, uint64_t* __temp1268v, uint64_t* __temp1269v) {
  char* buffer__unsafe_ptr=*__temp1264v;
  uint64_t buffer__unsafe_size=*__temp1265v;
  uint64_t buffer__unsafe_align=*__temp1266v;
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
  *__temp1264v=buffer__unsafe_ptr;
  *__temp1265v=buffer__unsafe_size;
  *__temp1266v=buffer__unsafe_align;
  *__temp1267v=buffer__unsafe_ptr;
  *__temp1268v=buffer__unsafe_size;
  *__temp1269v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1270v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1270v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1271v) {
  *__temp1271v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1272v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1272v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1273v, uint64_t* __temp1274v, uint64_t* __temp1275v, uint64_t i, char** __temp1276v) {
  char* buffer__unsafe_ptr=*__temp1273v;
  uint64_t buffer__unsafe_size=*__temp1274v;
  uint64_t buffer__unsafe_align=*__temp1275v;
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
  *__temp1273v=buffer__unsafe_ptr;
  *__temp1274v=buffer__unsafe_size;
  *__temp1275v=buffer__unsafe_align;
  *__temp1276v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test1__temp1222v(char** __temp1277v, uint64_t* __temp1278v, uint64_t* __temp1279v) {
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
  char* __temp1233v__unsafe_ptr=0;
  uint64_t __temp1233v__unsafe_size=0;
  uint64_t __temp1233v__unsafe_align=0;
  char* y__unsafe_ptr=0;
  uint64_t y__unsafe_size=0;
  uint64_t y__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float____temp_buffer____buffer__temp1223v(&__temp1225v__unsafe_ptr,&__temp1225v__unsafe_size,&__temp1225v__unsafe_align);
  __temp1226v__unsafe_ptr=__temp1225v__unsafe_ptr;
  __temp1226v__unsafe_size=__temp1225v__unsafe_size;
  __temp1226v__unsafe_align=__temp1225v__unsafe_align;
  __temp1227v=1;
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
  float____temp_buffer____buffer__temp1223v(&__temp1233v__unsafe_ptr,&__temp1233v__unsafe_size,&__temp1233v__unsafe_align);
  y__unsafe_ptr=__temp1233v__unsafe_ptr;
  y__unsafe_size=__temp1233v__unsafe_size;
  y__unsafe_align=__temp1233v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(x__unsafe_ptr,&__temp1229v____temp469v__);
  if(__temp1229v____temp469v__){
  x__unsafe_size=0;
  x__unsafe_size=x__unsafe_size;
  free__temp461v(&x__unsafe_ptr);
  }
  __temp_return:
  *__temp1277v=x__unsafe_ptr;
  *__temp1278v=x__unsafe_size;
  *__temp1279v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int realloc__temp459v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1280v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp460v__=0;
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
  attach_type__temp20v(new_allocated,allocated__unsafe_ptr,&__temp460v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1280v=__temp460v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1281v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1281v=z;
}

static inline __attribute__((always_inline)) int resize__temp502v(char** __temp1282v, uint64_t* __temp1283v, uint64_t* __temp1284v, uint64_t size, char** __temp1285v, uint64_t* __temp1286v, uint64_t* __temp1287v) {
  char* buffer__unsafe_ptr=*__temp1282v;
  uint64_t buffer__unsafe_size=*__temp1283v;
  uint64_t buffer__unsafe_align=*__temp1284v;
  char __temp503v__=0;
  uint64_t __temp504v=0;
  char __temp505v__=0;
  uint64_t __temp506v=0;
  uint64_t __temp508v=0;
  char __temp509v__=0;
  uint64_t __temp510v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp511v__=0;
  uint64_t bytes=0;
  char* __temp512v__=0;
  char __temp513v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(buffer__unsafe_size,size,&__temp503v__);
  if(__temp503v__){
  goto __temp_return;
  }
  __temp504v=0;
  eq__temp118v(size,__temp504v,&__temp505v__);
  if(__temp505v__){
  __temp506v=0;
  buffer__unsafe_size=__temp506v;
  free__temp461v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp508v=0;
  eq__temp118v(buffer__unsafe_size,__temp508v,&__temp509v__);
  if(__temp509v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  mul__temp194v(buffer__unsafe_size,buffer__unsafe_align,&__temp510v__);
  prev_bytes=__temp510v__;
  buffer__unsafe_size=size;
  mul__temp194v(buffer__unsafe_align,size,&__temp511v__);
  bytes=__temp511v__;
  __temp_errcode=realloc__temp459v(buffer__unsafe_ptr,bytes,&__temp512v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp512v__;
  lt__temp247v(prev_bytes,bytes,&__temp513v__);
  if(__temp513v__){
  zero__temp462v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1282v=buffer__unsafe_ptr;
  *__temp1283v=buffer__unsafe_size;
  *__temp1284v=buffer__unsafe_align;
  *__temp1285v=buffer__unsafe_ptr;
  *__temp1286v=buffer__unsafe_size;
  *__temp1287v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1288v) {
  int __temp348v__=0;
  int __temp349v=0;
  int __temp350v=0;
  char __temp351v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp93v(x,y,&__temp348v__);
  lt__temp247v(x,y,&__temp351v__);
  if(__temp351v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1288v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp522v(char** __temp1289v, uint64_t* __temp1290v, uint64_t* __temp1291v, char** __temp1292v) {
  char* buffer__unsafe_ptr=*__temp1289v;
  uint64_t buffer__unsafe_size=*__temp1290v;
  uint64_t buffer__unsafe_align=*__temp1291v;
  uint64_t __temp523v=0;
  char __temp524v__=0;
  uint64_t __temp525v=0;
  uint64_t __temp526v__=0;
  uint64_t __temp527v__=0;
  char* __temp528v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp523v=0;
  eq__temp118v(__temp523v,buffer__unsafe_size,&__temp524v__);
  if(__temp524v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp525v=1;
  __temp_errcode=sub__temp347v(buffer__unsafe_size,__temp525v,&__temp526v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp194v(__temp526v__,buffer__unsafe_align,&__temp527v__);
  add__temp463v(buffer__unsafe_ptr,__temp527v__,&__temp528v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1289v=buffer__unsafe_ptr;
  *__temp1290v=buffer__unsafe_size;
  *__temp1291v=buffer__unsafe_align;
  *__temp1292v=__temp528v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1234v(char** __temp1293v, uint64_t* __temp1294v, uint64_t* __temp1295v) {
  char* x__unsafe_ptr=*__temp1293v;
  uint64_t x__unsafe_size=*__temp1294v;
  uint64_t x__unsafe_align=*__temp1295v;
  uint64_t __temp1235v=0;
  char* __temp1236v__unsafe_ptr=0;
  uint64_t __temp1236v__unsafe_size=0;
  uint64_t __temp1236v__unsafe_align=0;
  char* __temp1237v__=0;
  double __temp1238v=0;
  char* __temp1239v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1235v=2;
  __temp_errcode=resize__temp502v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align,__temp1235v,&__temp1236v__unsafe_ptr,&__temp1236v__unsafe_size,&__temp1236v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp522v(&__temp1236v__unsafe_ptr,&__temp1236v__unsafe_size,&__temp1236v__unsafe_align,&__temp1237v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1238v=2.0;
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(__temp1237v__,&__temp1238v,8);
  __temp1239v=__temp1237v__;
  
  __temp_failure:*__temp1293v=x__unsafe_ptr;
  *__temp1294v=x__unsafe_size;
  *__temp1295v=x__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1296v) {
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
  *__temp1296v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1297v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1297v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1298v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1298v=z;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__temp1240v() {
  char* __temp1241v__unsafe_ptr=0;
  uint64_t __temp1241v__unsafe_size=0;
  uint64_t __temp1241v__unsafe_align=0;
  char __temp1242v____temp1229v____temp469v__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint64_t x__unsafe_align=0;
  uint64_t __temp1244v=0;
  char* __temp1245v__=0;
  double __temp1246v__number=0;
  uint64_t __temp1247v=0;
  char* __temp1248v__=0;
  double __temp1249v__number=0;
  double __temp1250v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test1__temp1222v(&__temp1241v__unsafe_ptr,&__temp1241v__unsafe_size,&__temp1241v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  x__unsafe_ptr=__temp1241v__unsafe_ptr;
  x__unsafe_size=__temp1241v__unsafe_size;
  x__unsafe_align=__temp1241v__unsafe_align;
  __temp_errcode=test2__temp1234v(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1244v=0;
  __temp_errcode=get__temp533v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1244v,&__temp1245v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1245v__){
  goto __temp_failure;
  }
  memcpy(&__temp1246v__number,__temp1245v__,8);
  __temp1247v=1;
  __temp_errcode=get__temp533v(x__unsafe_ptr,x__unsafe_size,x__unsafe_align,__temp1247v,&__temp1248v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1248v__){
  goto __temp_failure;
  }
  memcpy(&__temp1249v__number,__temp1248v__,8);
  add__temp148v(__temp1246v__number,__temp1249v__number,&__temp1250v__);
  print__temp368v(__temp1250v__);
  
  __temp_failure:exists__temp412v(__temp1241v__unsafe_ptr,&__temp1242v____temp1229v____temp469v__);
  if(__temp1242v____temp1229v____temp469v__){
  __temp1241v__unsafe_size=0;
  __temp1241v__unsafe_size=__temp1241v__unsafe_size;
  free__temp461v(&__temp1241v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1240v();return 0;}