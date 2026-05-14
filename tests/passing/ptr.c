#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1224v=",";
const char* const __temp363v="\n";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1233v(char** __temp1278v, uint64_t* __temp1279v, uint64_t* __temp1280v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1278v=unsafe_ptr;
  *__temp1279v=unsafe_size;
  *__temp1280v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1281v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1281v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1282v) {
  char* allocated=*__temp1282v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1282v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1283v) {
  int value=0;
  *__temp1283v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1284v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1284v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1285v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1285v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1286v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1286v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1287v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1287v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1288v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1288v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1289v) {
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
  *__temp1289v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1290v, uint64_t* __temp1291v, uint64_t* __temp1292v, uint64_t size, char** __temp1293v, uint64_t* __temp1294v, uint64_t* __temp1295v) {
  char* buffer__unsafe_ptr=*__temp1290v;
  uint64_t buffer__unsafe_size=*__temp1291v;
  uint64_t buffer__unsafe_align=*__temp1292v;
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
  *__temp1290v=buffer__unsafe_ptr;
  *__temp1291v=buffer__unsafe_size;
  *__temp1292v=buffer__unsafe_align;
  *__temp1293v=buffer__unsafe_ptr;
  *__temp1294v=buffer__unsafe_size;
  *__temp1295v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1296v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1296v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1297v) {
  *__temp1297v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1298v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1298v=__temp464v__;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1299v, uint64_t* __temp1300v, uint64_t* __temp1301v, uint64_t i, char** __temp1302v) {
  char* buffer__unsafe_ptr=*__temp1299v;
  uint64_t buffer__unsafe_size=*__temp1300v;
  uint64_t buffer__unsafe_align=*__temp1301v;
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
  *__temp1299v=buffer__unsafe_ptr;
  *__temp1300v=buffer__unsafe_size;
  *__temp1301v=buffer__unsafe_align;
  *__temp1302v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1303v) {
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
  *__temp1303v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp366v(double value) {
  int __temp367v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp459v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1304v) {
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
  *__temp1304v=__temp460v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1305v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1305v=z;
}

static inline __attribute__((always_inline)) int resize__temp502v(char** __temp1306v, uint64_t* __temp1307v, uint64_t* __temp1308v, uint64_t size, char** __temp1309v, uint64_t* __temp1310v, uint64_t* __temp1311v) {
  char* buffer__unsafe_ptr=*__temp1306v;
  uint64_t buffer__unsafe_size=*__temp1307v;
  uint64_t buffer__unsafe_align=*__temp1308v;
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
  *__temp1306v=buffer__unsafe_ptr;
  *__temp1307v=buffer__unsafe_size;
  *__temp1308v=buffer__unsafe_align;
  *__temp1309v=buffer__unsafe_ptr;
  *__temp1310v=buffer__unsafe_size;
  *__temp1311v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1312v) {
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
  *__temp1312v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp522v(char** __temp1313v, uint64_t* __temp1314v, uint64_t* __temp1315v, char** __temp1316v) {
  char* buffer__unsafe_ptr=*__temp1313v;
  uint64_t buffer__unsafe_size=*__temp1314v;
  uint64_t buffer__unsafe_align=*__temp1315v;
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
  *__temp1313v=buffer__unsafe_ptr;
  *__temp1314v=buffer__unsafe_size;
  *__temp1315v=buffer__unsafe_align;
  *__temp1316v=__temp528v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1253v(char** __temp1317v, uint64_t* __temp1318v, uint64_t* __temp1319v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=32;
  *__temp1317v=unsafe_ptr;
  *__temp1318v=unsafe_size;
  *__temp1319v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp368v(double value, const char* endl) {
  int __temp369v=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1222v(char* f) {
  double __temp1223v__a__x=0;
  double __temp1223v__a__y=0;
  double __temp1223v__b__x=0;
  double __temp1223v__b__y=0;
  double __temp1226v__a__x=0;
  double __temp1226v__a__y=0;
  double __temp1226v__b__x=0;
  double __temp1226v__b__y=0;
  double __temp1228v__a__x=0;
  double __temp1228v__a__y=0;
  double __temp1228v__b__x=0;
  double __temp1228v__b__y=0;
  double __temp1230v__a__x=0;
  double __temp1230v__a__y=0;
  double __temp1230v__b__x=0;
  double __temp1230v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1223v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1223v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1223v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1223v__b__y,f+24,8);
  print__temp368v(__temp1223v__a__x,__temp1224v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1226v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1226v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1226v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1226v__b__y,f+24,8);
  print__temp368v(__temp1226v__a__y,__temp1224v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1228v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1228v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1228v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1228v__b__y,f+24,8);
  print__temp368v(__temp1228v__b__x,__temp1224v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1230v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1230v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1230v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1230v__b__y,f+24,8);
  print__temp366v(__temp1230v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1232v() {
  char* __temp1235v__unsafe_ptr=0;
  uint64_t __temp1235v__unsafe_size=0;
  uint64_t __temp1235v__unsafe_align=0;
  char* __temp1236v__unsafe_ptr=0;
  uint64_t __temp1236v__unsafe_size=0;
  uint64_t __temp1236v__unsafe_align=0;
  uint64_t __temp1237v=0;
  char* __temp1238v__unsafe_ptr=0;
  uint64_t __temp1238v__unsafe_size=0;
  uint64_t __temp1238v__unsafe_align=0;
  char __temp1239v____temp469v__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint64_t f__unsafe_align=0;
  uint64_t __temp1240v=0;
  char* __temp1241v__=0;
  double __temp1242v=0;
  uint64_t __temp1243v=0;
  char* __temp1244v__=0;
  double __temp1245v__number=0;
  uint64_t __temp1247v=0;
  char* __temp1248v__=0;
  char* f0=0;
  double __temp1249v__number=0;
  uint64_t __temp1250v=0;
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__unsafe_size=0;
  uint64_t __temp1251v__unsafe_align=0;
  char* __temp1252v__=0;
  char* __temp1255v__unsafe_ptr=0;
  uint64_t __temp1255v__unsafe_size=0;
  uint64_t __temp1255v__unsafe_align=0;
  char* __temp1256v__unsafe_ptr=0;
  uint64_t __temp1256v__unsafe_size=0;
  uint64_t __temp1256v__unsafe_align=0;
  uint64_t __temp1257v=0;
  char* __temp1258v__unsafe_ptr=0;
  uint64_t __temp1258v__unsafe_size=0;
  uint64_t __temp1258v__unsafe_align=0;
  char __temp1259v____temp469v__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint64_t p__unsafe_align=0;
  uint64_t __temp1260v=0;
  char* __temp1261v__=0;
  double __temp1262v=0;
  double __temp1263v=0;
  double __temp1264v=0;
  double __temp1265v=0;
  uint64_t __temp1266v=0;
  char* __temp1267v__=0;
  double __temp1269v=0;
  char* __temp1270v__unsafe_ptr=0;
  uint64_t __temp1270v__unsafe_size=0;
  uint64_t __temp1270v__unsafe_align=0;
  char* __temp1271v__unsafe_ptr=0;
  uint64_t __temp1271v__unsafe_size=0;
  uint64_t __temp1271v__unsafe_align=0;
  uint64_t __temp1272v=0;
  char* __temp1273v__unsafe_ptr=0;
  uint64_t __temp1273v__unsafe_size=0;
  uint64_t __temp1273v__unsafe_align=0;
  char __temp1274v____temp469v__=0;
  char* __temp1275v__=0;
  char* n=0;
  double __temp1276v__number=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1233v(&__temp1235v__unsafe_ptr,&__temp1235v__unsafe_size,&__temp1235v__unsafe_align);
  __temp1236v__unsafe_ptr=__temp1235v__unsafe_ptr;
  __temp1236v__unsafe_size=__temp1235v__unsafe_size;
  __temp1236v__unsafe_align=__temp1235v__unsafe_align;
  __temp1237v=1;
  __temp_errcode=alloc__temp467v(&__temp1236v__unsafe_ptr,&__temp1236v__unsafe_size,&__temp1236v__unsafe_align,__temp1237v,&__temp1238v__unsafe_ptr,&__temp1238v__unsafe_size,&__temp1238v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1238v__unsafe_ptr;
  f__unsafe_size=__temp1238v__unsafe_size;
  f__unsafe_align=__temp1238v__unsafe_align;
  __temp1240v=0;
  __temp_errcode=mutget__temp529v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1240v,&__temp1241v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1242v=1.0;
  if(!__temp1241v__){
  goto __temp_failure;
  }
  memcpy(__temp1241v__,&__temp1242v,8);
  __temp1243v=0;
  __temp_errcode=get__temp533v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1243v,&__temp1244v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1244v__){
  goto __temp_failure;
  }
  memcpy(&__temp1245v__number,__temp1244v__,8);
  print__temp366v(__temp1245v__number);
  __temp1247v=0;
  __temp_errcode=mutget__temp529v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1247v,&__temp1248v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1248v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1249v__number,f0,8);
  __temp1250v=2;
  __temp_errcode=resize__temp502v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1250v,&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp522v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_align,&__temp1252v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1252v__){
  goto __temp_failure;
  }
  memcpy(__temp1252v__,&__temp1249v__number,8);
  Field__temp_buffer__buffer__temp1253v(&__temp1255v__unsafe_ptr,&__temp1255v__unsafe_size,&__temp1255v__unsafe_align);
  __temp1256v__unsafe_ptr=__temp1255v__unsafe_ptr;
  __temp1256v__unsafe_size=__temp1255v__unsafe_size;
  __temp1256v__unsafe_align=__temp1255v__unsafe_align;
  __temp1257v=1;
  __temp_errcode=alloc__temp467v(&__temp1256v__unsafe_ptr,&__temp1256v__unsafe_size,&__temp1256v__unsafe_align,__temp1257v,&__temp1258v__unsafe_ptr,&__temp1258v__unsafe_size,&__temp1258v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1258v__unsafe_ptr;
  p__unsafe_size=__temp1258v__unsafe_size;
  p__unsafe_align=__temp1258v__unsafe_align;
  __temp1260v=0;
  __temp_errcode=mutget__temp529v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1260v,&__temp1261v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1262v=1.0;
  __temp1263v=2.0;
  __temp1264v=3.0;
  __temp1265v=4.0;
  if(!__temp1261v__){
  goto __temp_failure;
  }
  memcpy(__temp1261v__,&__temp1262v,8);
  if(!__temp1261v__){
  goto __temp_failure;
  }
  memcpy(__temp1261v__+8,&__temp1263v,8);
  if(!__temp1261v__){
  goto __temp_failure;
  }
  memcpy(__temp1261v__+16,&__temp1264v,8);
  if(!__temp1261v__){
  goto __temp_failure;
  }
  memcpy(__temp1261v__+24,&__temp1265v,8);
  __temp1266v=0;
  __temp_errcode=get__temp533v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1266v,&__temp1267v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1222v(__temp1267v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1269v=1.0;
  float__temp_buffer__buffer__temp1233v(&__temp1270v__unsafe_ptr,&__temp1270v__unsafe_size,&__temp1270v__unsafe_align);
  __temp1271v__unsafe_ptr=__temp1270v__unsafe_ptr;
  __temp1271v__unsafe_size=__temp1270v__unsafe_size;
  __temp1271v__unsafe_align=__temp1270v__unsafe_align;
  __temp1272v=1;
  __temp_errcode=alloc__temp467v(&__temp1271v__unsafe_ptr,&__temp1271v__unsafe_size,&__temp1271v__unsafe_align,__temp1272v,&__temp1273v__unsafe_ptr,&__temp1273v__unsafe_size,&__temp1273v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp522v(&__temp1273v__unsafe_ptr,&__temp1273v__unsafe_size,&__temp1273v__unsafe_align,&__temp1275v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1275v__){
  goto __temp_failure;
  }
  memcpy(__temp1275v__,&__temp1269v,8);
  n=__temp1275v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1276v__number,n,8);
  print__temp366v(__temp1276v__number);
  
  __temp_failure:exists__temp412v(__temp1273v__unsafe_ptr,&__temp1274v____temp469v__);
  if(__temp1274v____temp469v__){
  __temp1273v__unsafe_size=0;
  __temp1273v__unsafe_size=__temp1273v__unsafe_size;
  free__temp461v(&__temp1273v__unsafe_ptr);
  }
  exists__temp412v(__temp1258v__unsafe_ptr,&__temp1259v____temp469v__);
  if(__temp1259v____temp469v__){
  __temp1258v__unsafe_size=0;
  __temp1258v__unsafe_size=__temp1258v__unsafe_size;
  free__temp461v(&__temp1258v__unsafe_ptr);
  }
  exists__temp412v(__temp1238v__unsafe_ptr,&__temp1239v____temp469v__);
  if(__temp1239v____temp469v__){
  __temp1238v__unsafe_size=0;
  __temp1238v__unsafe_size=__temp1238v__unsafe_size;
  free__temp461v(&__temp1238v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1232v();return 0;}