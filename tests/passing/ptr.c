#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1220v=",";
const char* const __temp361v="\n";
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

static inline __attribute__((always_inline)) void float__temp_buffer__buffer__temp1229v(char** __temp1274v, uint64_t* __temp1275v, uint64_t* __temp1276v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=8;
  *__temp1274v=unsafe_ptr;
  *__temp1275v=unsafe_size;
  *__temp1276v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp408v(char* x, char* __temp1277v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) void free__temp457v(char** __temp1278v) {
  char* allocated=*__temp1278v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1278v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1279v) {
  int value=0;
  *__temp1279v=value;
}

static inline __attribute__((always_inline)) void not__temp31v(int __temp_anon0, int* __temp1280v) {
  int __temp32v__=0;
  false__temp10v(&__temp32v__);
  goto __temp_return;
  __temp_return:
  *__temp1280v=__temp32v__;
}

static inline __attribute__((always_inline)) void is_different__temp89v(uint64_t x, uint64_t y, int* __temp1281v) {
  int __temp90v=0;
  int __temp91v__=0;
  not__temp31v(__temp90v,&__temp91v__);
  goto __temp_return;
  __temp_return:
  *__temp1281v=__temp91v__;
}

static inline __attribute__((always_inline)) void eq__temp114v(uint64_t x, uint64_t y, char* __temp1282v) {
  int __temp115v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp115v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1282v=z;
}

static inline __attribute__((always_inline)) void neq__temp138v(uint64_t x, uint64_t y, char* __temp1283v) {
  int __temp139v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp139v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) void mul__temp190v(uint64_t x, uint64_t y, uint64_t* __temp1284v) {
  int __temp191v__=0;
  uint64_t z=0;
  is_different__temp89v(x,y,&__temp191v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1284v=z;
}

static inline __attribute__((always_inline)) void zero__temp458v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp454v(uint64_t bytes, char** __temp1285v) {
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
  *__temp1285v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp463v(char** __temp1286v, uint64_t* __temp1287v, uint64_t* __temp1288v, uint64_t size, char** __temp1289v, uint64_t* __temp1290v, uint64_t* __temp1291v) {
  char* buffer__unsafe_ptr=*__temp1286v;
  uint64_t buffer__unsafe_size=*__temp1287v;
  uint64_t buffer__unsafe_align=*__temp1288v;
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
  *__temp1286v=buffer__unsafe_ptr;
  *__temp1287v=buffer__unsafe_size;
  *__temp1288v=buffer__unsafe_align;
  *__temp1289v=buffer__unsafe_ptr;
  *__temp1290v=buffer__unsafe_size;
  *__temp1291v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void ge__temp315v(uint64_t x, uint64_t y, char* __temp1292v) {
  int __temp316v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp316v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1292v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp16v(char* to, char* from, char** __temp1293v) {
  *__temp1293v=to;
}

static inline __attribute__((always_inline)) void add__temp459v(char* allocated, uint64_t offset, char** __temp1294v) {
  char* element=0;
  char* __temp460v__=0;
  element=allocated+offset;
  attach_type__temp16v(element,allocated,&__temp460v__);
  goto __temp_return;
  __temp_return:
  *__temp1294v=__temp460v__;
}

static inline __attribute__((always_inline)) int mutget__temp525v(char** __temp1295v, uint64_t* __temp1296v, uint64_t* __temp1297v, uint64_t i, char** __temp1298v) {
  char* buffer__unsafe_ptr=*__temp1295v;
  uint64_t buffer__unsafe_size=*__temp1296v;
  uint64_t buffer__unsafe_align=*__temp1297v;
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
  *__temp1295v=buffer__unsafe_ptr;
  *__temp1296v=buffer__unsafe_size;
  *__temp1297v=buffer__unsafe_align;
  *__temp1298v=__temp528v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int get__temp529v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1299v) {
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
  *__temp1299v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp364v(double value) {
  int __temp365v=0;
  const char* endl=0;
  endl=__temp361v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__temp455v(char* allocated__unsafe_ptr, uint64_t bytes, char** __temp1300v) {
  char* new_allocated=0;
  char failed=0;
  char* __temp456v__=0;
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
  attach_type__temp16v(new_allocated,allocated__unsafe_ptr,&__temp456v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1300v=__temp456v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp243v(uint64_t x, uint64_t y, char* __temp1301v) {
  int __temp244v__=0;
  char z=0;
  is_different__temp89v(x,y,&__temp244v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1301v=z;
}

static inline __attribute__((always_inline)) int resize__temp498v(char** __temp1302v, uint64_t* __temp1303v, uint64_t* __temp1304v, uint64_t size, char** __temp1305v, uint64_t* __temp1306v, uint64_t* __temp1307v) {
  char* buffer__unsafe_ptr=*__temp1302v;
  uint64_t buffer__unsafe_size=*__temp1303v;
  uint64_t buffer__unsafe_align=*__temp1304v;
  char __temp499v__=0;
  uint64_t __temp500v=0;
  char __temp501v__=0;
  uint64_t __temp502v=0;
  uint64_t __temp504v=0;
  char __temp505v__=0;
  uint64_t __temp506v__=0;
  uint64_t prev_bytes=0;
  uint64_t __temp507v__=0;
  uint64_t bytes=0;
  char* __temp508v__=0;
  char __temp509v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp315v(buffer__unsafe_size,size,&__temp499v__);
  if(__temp499v__){
  goto __temp_return;
  }
  __temp500v=0;
  eq__temp114v(size,__temp500v,&__temp501v__);
  if(__temp501v__){
  __temp502v=0;
  buffer__unsafe_size=__temp502v;
  free__temp457v(&buffer__unsafe_ptr);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  }
  __temp504v=0;
  eq__temp114v(buffer__unsafe_size,__temp504v,&__temp505v__);
  if(__temp505v__){
  __temp_errcode=11;
  goto __temp_failure;
  }
  mul__temp190v(buffer__unsafe_size,buffer__unsafe_align,&__temp506v__);
  prev_bytes=__temp506v__;
  buffer__unsafe_size=size;
  mul__temp190v(buffer__unsafe_align,size,&__temp507v__);
  bytes=__temp507v__;
  __temp_errcode=realloc__temp455v(buffer__unsafe_ptr,bytes,&__temp508v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp508v__;
  lt__temp243v(prev_bytes,bytes,&__temp509v__);
  if(__temp509v__){
  zero__temp458v(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1302v=buffer__unsafe_ptr;
  *__temp1303v=buffer__unsafe_size;
  *__temp1304v=buffer__unsafe_align;
  *__temp1305v=buffer__unsafe_ptr;
  *__temp1306v=buffer__unsafe_size;
  *__temp1307v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int sub__temp343v(uint64_t x, uint64_t y, uint64_t* __temp1308v) {
  int __temp344v__=0;
  int __temp345v=0;
  int __temp346v=0;
  char __temp347v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp89v(x,y,&__temp344v__);
  lt__temp243v(x,y,&__temp347v__);
  if(__temp347v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1308v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutlast__temp518v(char** __temp1309v, uint64_t* __temp1310v, uint64_t* __temp1311v, char** __temp1312v) {
  char* buffer__unsafe_ptr=*__temp1309v;
  uint64_t buffer__unsafe_size=*__temp1310v;
  uint64_t buffer__unsafe_align=*__temp1311v;
  uint64_t __temp519v=0;
  char __temp520v__=0;
  uint64_t __temp521v=0;
  uint64_t __temp522v__=0;
  uint64_t __temp523v__=0;
  char* __temp524v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp519v=0;
  eq__temp114v(__temp519v,buffer__unsafe_size,&__temp520v__);
  if(__temp520v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  __temp521v=1;
  __temp_errcode=sub__temp343v(buffer__unsafe_size,__temp521v,&__temp522v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  mul__temp190v(__temp522v__,buffer__unsafe_align,&__temp523v__);
  add__temp459v(buffer__unsafe_ptr,__temp523v__,&__temp524v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1309v=buffer__unsafe_ptr;
  *__temp1310v=buffer__unsafe_size;
  *__temp1311v=buffer__unsafe_align;
  *__temp1312v=__temp524v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void Field__temp_buffer__buffer__temp1249v(char** __temp1313v, uint64_t* __temp1314v, uint64_t* __temp1315v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=32;
  *__temp1313v=unsafe_ptr;
  *__temp1314v=unsafe_size;
  *__temp1315v=unsafe_align;
}

static inline __attribute__((always_inline)) void print__temp362v(double value, const char* endl) {
  int __temp363v=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__temp1218v(char* f) {
  double __temp1219v__a__x=0;
  double __temp1219v__a__y=0;
  double __temp1219v__b__x=0;
  double __temp1219v__b__y=0;
  double __temp1222v__a__x=0;
  double __temp1222v__a__y=0;
  double __temp1222v__b__x=0;
  double __temp1222v__b__y=0;
  double __temp1224v__a__x=0;
  double __temp1224v__a__y=0;
  double __temp1224v__b__x=0;
  double __temp1224v__b__y=0;
  double __temp1226v__a__x=0;
  double __temp1226v__a__y=0;
  double __temp1226v__b__x=0;
  double __temp1226v__b__y=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1219v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1219v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1219v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1219v__b__y,f+24,8);
  print__temp362v(__temp1219v__a__x,__temp1220v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1222v__b__y,f+24,8);
  print__temp362v(__temp1222v__a__y,__temp1220v);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1224v__a__x,f,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1224v__a__y,f+8,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1224v__b__x,f+16,8);
  if(!f){
  goto __temp_failure;
  }
  memcpy(&__temp1224v__b__y,f+24,8);
  print__temp362v(__temp1224v__b__x,__temp1220v);
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
  print__temp364v(__temp1226v__b__y);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1228v() {
  char* __temp1231v__unsafe_ptr=0;
  uint64_t __temp1231v__unsafe_size=0;
  uint64_t __temp1231v__unsafe_align=0;
  char* __temp1232v__unsafe_ptr=0;
  uint64_t __temp1232v__unsafe_size=0;
  uint64_t __temp1232v__unsafe_align=0;
  uint64_t __temp1233v=0;
  char* __temp1234v__unsafe_ptr=0;
  uint64_t __temp1234v__unsafe_size=0;
  uint64_t __temp1234v__unsafe_align=0;
  char __temp1235v____temp465v__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint64_t f__unsafe_align=0;
  uint64_t __temp1236v=0;
  char* __temp1237v__=0;
  double __temp1238v=0;
  uint64_t __temp1239v=0;
  char* __temp1240v__=0;
  double __temp1241v__z=0;
  uint64_t __temp1243v=0;
  char* __temp1244v__=0;
  char* f0=0;
  double __temp1245v__z=0;
  uint64_t __temp1246v=0;
  char* __temp1247v__unsafe_ptr=0;
  uint64_t __temp1247v__unsafe_size=0;
  uint64_t __temp1247v__unsafe_align=0;
  char* __temp1248v__=0;
  char* __temp1251v__unsafe_ptr=0;
  uint64_t __temp1251v__unsafe_size=0;
  uint64_t __temp1251v__unsafe_align=0;
  char* __temp1252v__unsafe_ptr=0;
  uint64_t __temp1252v__unsafe_size=0;
  uint64_t __temp1252v__unsafe_align=0;
  uint64_t __temp1253v=0;
  char* __temp1254v__unsafe_ptr=0;
  uint64_t __temp1254v__unsafe_size=0;
  uint64_t __temp1254v__unsafe_align=0;
  char __temp1255v____temp465v__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint64_t p__unsafe_align=0;
  uint64_t __temp1256v=0;
  char* __temp1257v__=0;
  double __temp1258v=0;
  double __temp1259v=0;
  double __temp1260v=0;
  double __temp1261v=0;
  uint64_t __temp1262v=0;
  char* __temp1263v__=0;
  double __temp1265v=0;
  char* __temp1266v__unsafe_ptr=0;
  uint64_t __temp1266v__unsafe_size=0;
  uint64_t __temp1266v__unsafe_align=0;
  char* __temp1267v__unsafe_ptr=0;
  uint64_t __temp1267v__unsafe_size=0;
  uint64_t __temp1267v__unsafe_align=0;
  uint64_t __temp1268v=0;
  char* __temp1269v__unsafe_ptr=0;
  uint64_t __temp1269v__unsafe_size=0;
  uint64_t __temp1269v__unsafe_align=0;
  char __temp1270v____temp465v__=0;
  char* __temp1271v__=0;
  char* n=0;
  double __temp1272v__z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  float__temp_buffer__buffer__temp1229v(&__temp1231v__unsafe_ptr,&__temp1231v__unsafe_size,&__temp1231v__unsafe_align);
  __temp1232v__unsafe_ptr=__temp1231v__unsafe_ptr;
  __temp1232v__unsafe_size=__temp1231v__unsafe_size;
  __temp1232v__unsafe_align=__temp1231v__unsafe_align;
  __temp1233v=1;
  __temp_errcode=alloc__temp463v(&__temp1232v__unsafe_ptr,&__temp1232v__unsafe_size,&__temp1232v__unsafe_align,__temp1233v,&__temp1234v__unsafe_ptr,&__temp1234v__unsafe_size,&__temp1234v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f__unsafe_ptr=__temp1234v__unsafe_ptr;
  f__unsafe_size=__temp1234v__unsafe_size;
  f__unsafe_align=__temp1234v__unsafe_align;
  __temp1236v=0;
  __temp_errcode=mutget__temp525v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1236v,&__temp1237v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1238v=1.0;
  if(!__temp1237v__){
  goto __temp_failure;
  }
  memcpy(__temp1237v__,&__temp1238v,8);
  __temp1239v=0;
  __temp_errcode=get__temp529v(f__unsafe_ptr,f__unsafe_size,f__unsafe_align,__temp1239v,&__temp1240v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1240v__){
  goto __temp_failure;
  }
  memcpy(&__temp1241v__z,__temp1240v__,8);
  print__temp364v(__temp1241v__z);
  __temp1243v=0;
  __temp_errcode=mutget__temp525v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1243v,&__temp1244v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  f0=__temp1244v__;
  if(!f0){
  goto __temp_failure;
  }
  memcpy(&__temp1245v__z,f0,8);
  __temp1246v=2;
  __temp_errcode=resize__temp498v(&f__unsafe_ptr,&f__unsafe_size,&f__unsafe_align,__temp1246v,&__temp1247v__unsafe_ptr,&__temp1247v__unsafe_size,&__temp1247v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp518v(&__temp1247v__unsafe_ptr,&__temp1247v__unsafe_size,&__temp1247v__unsafe_align,&__temp1248v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1248v__){
  goto __temp_failure;
  }
  memcpy(__temp1248v__,&__temp1245v__z,8);
  Field__temp_buffer__buffer__temp1249v(&__temp1251v__unsafe_ptr,&__temp1251v__unsafe_size,&__temp1251v__unsafe_align);
  __temp1252v__unsafe_ptr=__temp1251v__unsafe_ptr;
  __temp1252v__unsafe_size=__temp1251v__unsafe_size;
  __temp1252v__unsafe_align=__temp1251v__unsafe_align;
  __temp1253v=1;
  __temp_errcode=alloc__temp463v(&__temp1252v__unsafe_ptr,&__temp1252v__unsafe_size,&__temp1252v__unsafe_align,__temp1253v,&__temp1254v__unsafe_ptr,&__temp1254v__unsafe_size,&__temp1254v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  p__unsafe_ptr=__temp1254v__unsafe_ptr;
  p__unsafe_size=__temp1254v__unsafe_size;
  p__unsafe_align=__temp1254v__unsafe_align;
  __temp1256v=0;
  __temp_errcode=mutget__temp525v(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_align,__temp1256v,&__temp1257v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1258v=1.0;
  __temp1259v=2.0;
  __temp1260v=3.0;
  __temp1261v=4.0;
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__,&__temp1258v,8);
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__+8,&__temp1259v,8);
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__+16,&__temp1260v,8);
  if(!__temp1257v__){
  goto __temp_failure;
  }
  memcpy(__temp1257v__+24,&__temp1261v,8);
  __temp1262v=0;
  __temp_errcode=get__temp529v(p__unsafe_ptr,p__unsafe_size,p__unsafe_align,__temp1262v,&__temp1263v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1218v(__temp1263v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1265v=1.0;
  float__temp_buffer__buffer__temp1229v(&__temp1266v__unsafe_ptr,&__temp1266v__unsafe_size,&__temp1266v__unsafe_align);
  __temp1267v__unsafe_ptr=__temp1266v__unsafe_ptr;
  __temp1267v__unsafe_size=__temp1266v__unsafe_size;
  __temp1267v__unsafe_align=__temp1266v__unsafe_align;
  __temp1268v=1;
  __temp_errcode=alloc__temp463v(&__temp1267v__unsafe_ptr,&__temp1267v__unsafe_size,&__temp1267v__unsafe_align,__temp1268v,&__temp1269v__unsafe_ptr,&__temp1269v__unsafe_size,&__temp1269v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutlast__temp518v(&__temp1269v__unsafe_ptr,&__temp1269v__unsafe_size,&__temp1269v__unsafe_align,&__temp1271v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1271v__){
  goto __temp_failure;
  }
  memcpy(__temp1271v__,&__temp1265v,8);
  n=__temp1271v__;
  if(!n){
  goto __temp_failure;
  }
  memcpy(&__temp1272v__z,n,8);
  print__temp364v(__temp1272v__z);
  
  __temp_failure:exists__temp408v(__temp1269v__unsafe_ptr,&__temp1270v____temp465v__);
  if(__temp1270v____temp465v__){
  __temp1269v__unsafe_size=0;
  __temp1269v__unsafe_size=__temp1269v__unsafe_size;
  free__temp457v(&__temp1269v__unsafe_ptr);
  }
  exists__temp408v(__temp1254v__unsafe_ptr,&__temp1255v____temp465v__);
  if(__temp1255v____temp465v__){
  __temp1254v__unsafe_size=0;
  __temp1254v__unsafe_size=__temp1254v__unsafe_size;
  free__temp457v(&__temp1254v__unsafe_ptr);
  }
  exists__temp408v(__temp1234v__unsafe_ptr,&__temp1235v____temp465v__);
  if(__temp1235v____temp465v__){
  __temp1234v__unsafe_size=0;
  __temp1234v__unsafe_size=__temp1234v__unsafe_size;
  free__temp457v(&__temp1234v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1228v();return 0;}